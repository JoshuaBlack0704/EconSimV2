using System.Collections.Generic;
using System.Linq;
using Unity.Collections;
using Unity.Entities;
using Unity.Mathematics;
using Unity.Transforms;
using UnityEngine;

public static class EntityPathFinder
{

    static Node[] nodeCache;
    static Heap<Node> heap;

    internal class Node : IHeapItem<Node>
    {
        public int parent { get; set; }
        public int Id { get; set; }
        public int runId { get; set; }
        int heapIndex;
        public int HeapIndex
        {
            get { return heapIndex; }
            set { heapIndex = value; }
        }
        public bool isClosed { get; set; }
        public float distFromStart { get; set; }
        public float distToEnd { get; set; }
        public float totalCost { get { return distFromStart + distToEnd; } }
        public SystemEntity.ConnectionData[] connections { get; set; }

        public float3 position { get; set; }
        public void Reset()
        {
            parent = 0;
            isClosed = false;
            distFromStart = 0;
            distToEnd = 0;
            HeapIndex = 0;
        }
        public int CompareTo( Node comparingTo )
        {
            int compare = totalCost.CompareTo(comparingTo.totalCost);
            if (compare == 0)
            {
                compare = distToEnd.CompareTo(comparingTo.distToEnd);
            }
            return -compare;
        }
        public Node( float3 _pos, SystemEntity.ConnectionData[] _connections, int _id ) { position = _pos; connections = _connections; Id = _id; }


    }

    public static void GetPath(int start, int end, NativeArray<int> knownPoints, NativeArray<int> explorablePoints, bool exploreable, out NativeArray<int> pathIds)
    {
        NativeList<int> usedNodes = new NativeList<int>(Allocator.Temp);
        NativeList<int> path = new NativeList<int>(Allocator.Temp);

        Node currentNode = nodeCache[start];
        usedNodes.Add(start);
        currentNode.parent = start;
        currentNode.distFromStart = 0;
        currentNode.distToEnd = math.distancesq(currentNode.position, nodeCache[end].position);
        heap.Add(currentNode);

        while (true)
        {
            currentNode = heap.RemoveFirst();
            currentNode.isClosed = true;
            if (currentNode.Id == end)
            {
                break;
            }

            for (int c = 0; c < currentNode.connections.Length; c++)
            {
                int connection = currentNode.connections[c].target;

                bool inKnownSystems = knownPoints.Contains(connection);
                bool inUnknownSystems = explorablePoints.Contains(connection);

                if ((inKnownSystems == false && inUnknownSystems == false) || (inKnownSystems == false && inUnknownSystems && exploreable == false))
                {
                    continue;
                }

                Node candidate = nodeCache[connection];
                usedNodes.Add(connection);

                //We skip if connection is related to a skipped node
                if (candidate.isClosed)
                {
                    continue;
                }

                //We find our scores
                float distToStart = math.distancesq(candidate.position, currentNode.position) + currentNode.distFromStart;
                float distToEnd = math.distancesq(candidate.position, nodeCache[end].position);
                float totalCost = distToStart + distToEnd;

                //If the heap contains our related path node but its new parent can offer a higher score
                //we update the data for our related pathnode in the heap
                if (heap.Contains(candidate) && totalCost <= candidate.totalCost)
                {
                    candidate.parent = currentNode.Id;
                    candidate.distFromStart = distToStart;
                    candidate.distToEnd = distToEnd;
                    heap.UpdateItem(candidate);
                }
                //If the candidate is novel we add it to the heap list
                else if (heap.Contains(candidate) != true)
                {
                    candidate.parent = currentNode.Id;
                    candidate.distFromStart = distToStart;
                    candidate.distToEnd = distToEnd;
                    heap.Add(candidate);
                }
            }
        }


        //We recurse through our path of parents
        //MonoBehaviour.print("------------");
        while (true)
        {
            //MonoBehaviour.print(currentNode.parent);

            if (currentNode.Id == start)
            {
                break;
            }
            path.Add(currentNode.Id);
            currentNode = nodeCache[currentNode.parent];
            if (currentNode.parent == start && currentNode.Id != start)
            {
                //MonoBehaviour.print(currentNode.parent);
                path.Add(currentNode.Id);
                //path.Reverse();
                break;
            }


        }



        pathIds = new NativeArray<int>(path.Length,Allocator.Temp);
        pathIds.CopyFrom(path);
        for (int i = 0; i < usedNodes.Length; i++)
        {
            nodeCache[usedNodes[i]].Reset();
        }
        path.Dispose();
        usedNodes.Dispose();
        heap.currentItemCount = 0;
    }


    public static void Initialize()
    {
        var em = World.DefaultGameObjectInjectionWorld.EntityManager;
        var query = em.CreateEntityQuery(new ComponentType[] { ComponentType.ReadOnly<SystemEntity.Id>()});
        NativeArray<Entity> points = query.ToEntityArray(Allocator.Temp);
        nodeCache = new Node[points.Length];
        heap = new Heap<Node>(points.Length);
        foreach (var ent in points)
        {
            var id = em.GetComponentData<SystemEntity.Id>(ent).id;
            var connectionsNative = em.GetBuffer<SystemEntity.ePointConnnectionBuffer>(ent).Reinterpret<SystemEntity.ConnectionData>().ToNativeArray(Allocator.Temp);
            var connecitons = connectionsNative.ToArray();
            var pos = em.GetComponentData<Translation>(ent).Value;

            nodeCache[id] = new Node(pos, connecitons, id);
        }

    }

}