using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;

public class Pathfinder
{
    
    public class PathNode : IHeapItem<PathNode>
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
        public int[] connections { get; set; }

        public Vector3 position { get; set; }
        public void Reset()
        {
            parent = 0;
            isClosed = false;
            distFromStart = 0;
            distToEnd = 0;
            HeapIndex = 0;
        }
        public int CompareTo(PathNode comparingTo)
        {
            int compare = totalCost.CompareTo(comparingTo.totalCost);
            if (compare == 0)
            {
                compare = distToEnd.CompareTo(comparingTo.distToEnd);
            }
            return -compare;
        }

        public PathNode(Vector3 _pos, int[] _connections, int _id) { position = _pos; connections = _connections; Id = _id; }

    }
    public SystemWorks systemWorks;
    public PathNode[] PathNodes;
    Heap<PathNode> heap;

    public void TestHeap()
    {
        var heap = new Heap<PathNode>(PathNodes.Length);
        var point = new Vector3()
        {
            x = 10,
            y = 10,
            z = 10
        };
        foreach (var item in PathNodes)
        {
            var dist = Vector3.Distance(point, item.position);
            item.distToEnd = dist;
            heap.Add(item);
        }
        for (int i = 0; i < PathNodes.Length; i++)
        {
            var item = heap.RemoveFirst();
            MonoBehaviour.print(item.distToEnd);
        }
    }
    /// <summary>
    /// 
    /// </summary>
    /// <param name="start"></param>
    /// <param name="end"></param>
    /// <param name="usesMainArray"></param>
    /// <param name="inputArray"></param>
    /// <returns></returns>
    /// 

    internal int currentRunId;

    List<int> internalPath;
    public List<int> GetPath(int start, int end, bool usesMainArray, PathNode[] inputArray = null)
    {
        currentRunId++;
        internalPath.Clear();
        heap.currentItemCount = 0;
        PathNode[] NodeArray;
        //Reset node array
        if (usesMainArray)
        {
            //Removed pathnode reset iterator
            NodeArray = PathNodes;
        }
        else
        {
            NodeArray = inputArray;
        }
        //Create Heap

        //Set up first node
        PathNode currentNode = NodeArray[start];
        currentNode.Reset();
        currentNode.parent = start;
        currentNode.distFromStart = 0;
        currentNode.distToEnd = Vector3.SqrMagnitude(currentNode.position - NodeArray[end].position);
        heap.Add(currentNode);

        //Set up path list
        List<int> path = internalPath;
        //Initilize main loop
        while (true)
        {
            //Pull Current best node and set it to closed
            currentNode = heap.RemoveFirst();
            //MonoBehaviour.print("root Node heapIndex: " + currentNode.HeapIndex);
            currentNode.isClosed = true;
            //Add it to path
            //If we have reached our target we exit the loop
            if (currentNode.Id == end)
            {
                break;
            }

            //We iterate through each connection
            foreach (var connection in currentNode.connections)
            {
                
                //We access the related path from the array
                PathNode candidate = NodeArray[connection];
                if (candidate.runId != currentRunId)
                {
                    candidate.Reset();
                    candidate.runId = currentRunId;
                }
                //We skip if connection is related to a skipped node
                if (candidate.isClosed)
                {
                    continue;
                }
                

                //We find our scores
                var distToStart = Vector3.SqrMagnitude(candidate.position - currentNode.position) + currentNode.distFromStart;
                var distToEnd = Vector3.SqrMagnitude(candidate.position - NodeArray[end].position);
                var totalCost = distToStart + distToEnd;
                
                //If the heap contains our related path node but its new parent can offer a higher score
                //we update the data for our related pathnode in the heap
                if (heap.Contains(candidate) && totalCost <= candidate.totalCost )
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
        while (true)
        {
            if (true)
            {

            }
            if (path.Count > systemWorks.masterUniverse.masterPointsDatabase.Count)
            {
                Debug.LogError("here");
                MonoBehaviour.print(string.Format("Start : {0} End: {1} CurrentNode Id: {2} CurrentNode Parent {3} PathLength: {4}", start, end, currentNode.Id, currentNode.parent, path.Count));
                Debug.Log("");

                foreach (var item in path)
                {
                    Debug.LogError(item);
                }
                break;
            }
            path.Add(currentNode.Id);
            currentNode = PathNodes[currentNode.parent];
            if (currentNode.parent == start)
            {
                //path.Reverse();
                break;
            }
            
        }

        //We return the path
        return path;
        
    }

    public List<int> FindBestPath(int start, int end, Dictionary<int, UniquePoint> inputPoints)
    {
        List<int> masterPath;
        //Find masterPath it exists, generate one if not
        if (masterPathDatabase[start, end] != null)
        {
            masterPath = masterPathDatabase[start, end];
        }
        else
        {
            masterPath = GetPath(start, end, true);
            masterPathDatabase[start, end] = masterPath;
        }
        //Check if input points knowns of every point in masterpath
        bool inputKnowsAll = true;
        foreach (var step in masterPath)
        {
            if (inputPoints.ContainsKey(step) != true)
            {
                inputKnowsAll = false;
                break;
            }
        }
        //If input array does not know all we produce a new path from the input data
        if (inputKnowsAll)
        {
            return masterPath;
        }
        else
        {
            //Produce PathNodes from input

            PathNode[] inputArray = new PathNode[inputPoints.Count];

            foreach (var point in inputPoints.Values)
            {
                PathNode newPathNode = new PathNode(point.Position, point.Connections.Select(con => con.Id).ToArray(), point.Id);

                inputArray[newPathNode.Id] = newPathNode;
            }

            masterPath = GetPath(start, end, false, inputArray);

            return masterPath;
        }
    }
    List<int>[,] masterPathDatabase;

    public Pathfinder(SystemWorks _systemWorks)
    {
        systemWorks = _systemWorks;
        heap = new Heap<PathNode>(systemWorks.masterUniverse.masterPointsDatabase.Count);
        internalPath = new List<int>();
        PathNodes = new PathNode[systemWorks.masterUniverse.masterPointsDatabase.Count];
        foreach (var point in systemWorks.masterUniverse.masterPointsDatabase.Values)
        {
            PathNodes[point.Id] = new PathNode(point.Position, point.Connections.Select(con => con.Id).ToArray(), point.Id);
        }
        currentRunId = 0;
        //masterPathDatabase = new List<int>[systemWorks.masterUniverse.maxPointId, systemWorks.masterUniverse.maxPointId]; ;
    }

}
