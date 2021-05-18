using EconSimV2.Assets.ECSTesting.ECSObjects;
using System.Collections.Concurrent;
using System.Collections.Generic;
using System.Linq;
using System.Threading;
using System.Threading.Tasks;
using Unity.Entities;
using Unity.Jobs;
using Unity.Mathematics;
using Unity.Transforms;
using UnityEngine;

namespace EconSimV2.Assets.ECSTesting.ECSWorks
{
    public static class NewOctTree
    {
        static EntityManager em = World.DefaultGameObjectInjectionWorld.EntityManager;
        class maxCubeId
        {
            public int id { get { var x = _id; _id++; return x; } private set { } }
            private int _id;

            public maxCubeId()
            {
                _id = 0;
            }
        }
        static maxCubeId IdCounter = new maxCubeId();
        class Cube
        {
            public Cube parent;
            public int Id { get; set; }
            public float3 minimums { get; set; }
            public float3 maximums { get; set; }
            public List<pointHolder> contents { get; set; }
            public Cube[] Branches { get; set; }

            public Cube(int id, float3 minimumVertex, float3 maximumVertex, ConcurrentDictionary<int, Cube> dict, List<pointHolder> predefinedContents = null)
            {
                Id = id;
                minimums = minimumVertex;
                maximums = maximumVertex;
                if ( predefinedContents != null )
                {
                    contents = predefinedContents;
                    for ( int i = 0; i < contents.Count(); i++ )
                    {
                        var point = contents[i];
                        point.currentLeaf = this;
                        contents[i] = point;
                    }
                }
                else
                {
                    contents = new List<pointHolder>();
                }
                Branches = new Cube[8];
                dict.TryAdd(id, this);
            }
        }
        class pointHolder
        {
            public Entity reference;
            public float3 pos;
            public Cube currentLeaf;
            public List<pointHolder> connections;
        }


        static void SplitCubes(Cube cube, GenerationSettings genSettings, ConcurrentDictionary<int, Cube> dict)
        {
            //Debug.Log($"Starting split cubes task, ThreadID: {System.Threading.Thread.CurrentThread.ManagedThreadId}");
            static bool IsBetween(float3 min, float3 max, float3 point)
            {
                if ( point.x < max.x && point.x >= min.x &&
                    point.y < max.y && point.y >= min.y &&
                    point.z < max.z && point.z >= min.z )
                {
                    return true;
                }
                else
                {
                    return false;
                }
            }
            List<Task> tasks = new List<Task>();
            if ( cube.contents.Count > genSettings.connectionsPerSystem + 1 )
            {
                //We will split the cube into 8 different subsections
                //The half change in vertext coordinates
                float incrementx = (cube.maximums.x - cube.minimums.x) / 2;

                float incrementy = (cube.maximums.y - cube.minimums.y) / 2;

                float incrementz = (cube.maximums.z - cube.minimums.z) / 2;

                //We iterate twice in all three dimensions because we only split twince in all three dimensions
                int cubeCount = 0;

                for ( int xiter = 0; xiter < 2; xiter++ )
                {
                    for ( int yiter = 0; yiter < 2; yiter++ )
                    {
                        for ( int ziter = 0; ziter < 2; ziter++ )
                        {
                            float3 newminimum = new float3()
                            {
                                x = cube.minimums.x + incrementx * xiter,
                                y = cube.minimums.y + incrementy * yiter,
                                z = cube.minimums.z + incrementz * ziter
                            };
                            float3 newmaximum = new float3()
                            {
                                x = cube.minimums.x + incrementx + incrementx * xiter,
                                y = cube.minimums.y + incrementy + incrementy * yiter,
                                z = cube.minimums.z + incrementz + incrementz * ziter
                            };

                            //MonoBehaviour.print(string.Format("subCube being created, current subcube max id: {0}", maxCubeId));
                            var insidePoint = new List<pointHolder>();
                            foreach ( var point in cube.contents )
                            {
                                if ( IsBetween(newminimum, newmaximum, point.pos) )
                                {
                                    insidePoint.Add(point);
                                }
                            }

                            Cube subCube;
                            Monitor.Enter(IdCounter);
                            try
                            {
                                subCube = new Cube(IdCounter.id, newminimum, newmaximum, dict, insidePoint);
                                subCube.parent = cube;
                            }
                            finally
                            {
                                Monitor.Exit(IdCounter);
                            }
                            cube.Branches[cubeCount] = subCube;
                            cubeCount++;

                            tasks.Add(Task.Run(() => SplitCubes(subCube, genSettings, dict)));
                        }
                    }
                }
                Task.WaitAll(tasks.ToArray());
            }
        }

        static void ProduceClosest(pointHolder pointData, GenerationSettings genSettings, Cube root)
        {
            var topCube = pointData.currentLeaf;
            while ( true )
            {
                if ( topCube.contents.Count <= genSettings.connectionsPerSystem + 1 )
                {
                    topCube = topCube.parent;
                }
                else
                {
                    break;
                }
            }

            var distances = topCube.contents.Select(o => math.distance(o.pos, pointData.pos)).OrderBy(o => o).ToList();

            var maxDistance = distances[genSettings.connectionsPerSystem];

            List<Cube> cubesOfInterest = new List<Cube>(10);

            cubesOfInterest.Add(root);

            for ( int c = 0; c < cubesOfInterest.Count; c++ )
            {
                var currentCube = cubesOfInterest[c];
                if ( currentCube.Branches[0] == null )
                {
                    continue;
                }

                for ( int i = 0; i < currentCube.Branches.Length; i++ )
                {

                    Cube cube = currentCube.Branches[i];
                    if ( cube == null )
                    {
                        Debug.Log($"Cube index: {i} is null, parent: {currentCube.parent.Id} parent branches[i] type: {currentCube.Branches[i].GetType()}");
                        throw new System.Exception("WHY");
                    }
                    float3 maxRange = new float3()
                    {
                        x = pointData.pos.x + maxDistance,
                        y = pointData.pos.y + maxDistance,
                        z = pointData.pos.z + maxDistance
                    };

                    float3 minRange = new float3()
                    {
                        x = pointData.pos.x - maxDistance,
                        y = pointData.pos.y - maxDistance,
                        z = pointData.pos.z - maxDistance
                    };



                    bool xInRange = false;
                    bool yInRange = false;
                    bool zInRange = false;

                    //MonoBehaviour.print(string.Format("Max Ranges : ({0}, {1}, {2})", maxRange.x, maxRange.y, maxRange.z));
                    //MonoBehaviour.print(string.Format("Cube min Ranges : ({0}, {1}, {2})", cube.minimums.x, cube.minimums.y, cube.minimums.z));

                    //MonoBehaviour.print(string.Format("Min Ranges : ({0}, {1}, {2})", minRange.x, minRange.y, minRange.z));
                    //MonoBehaviour.print(string.Format("Cube max Ranges : ({0}, {1}, {2})", cube.maximums.x, cube.maximums.y, cube.maximums.z));

                    if ( maxRange.x >= cube.minimums.x && minRange.x <= cube.maximums.x )
                    {
                        xInRange = true;
                    }
                    if ( maxRange.y >= cube.minimums.y && minRange.y <= cube.maximums.y )
                    {
                        yInRange = true;
                    }
                    if ( maxRange.z >= cube.minimums.z && minRange.z <= cube.maximums.z )
                    {
                        zInRange = true;
                    }

                    if ( xInRange && yInRange && zInRange )
                    {
                        cubesOfInterest.Add(cube);
                        //MonoBehaviour.print("subCube added");
                    }


                }
                cubesOfInterest.Remove(currentCube);
                c--;

            }

            var temp = cubesOfInterest.Select(o => o.contents).ToList();
            List<pointHolder> pointsOfInterest = new List<pointHolder>();
            foreach ( var coll in temp )
            {
                pointsOfInterest.AddRange(coll);
            }
            var sorted = from p in pointsOfInterest
                         orderby math.distancesq(p.pos, pointData.pos)
                         select p;
            if ( !sorted.ToArray()[0].reference.Equals(pointData.reference) )
            {
                foreach ( var item in pointsOfInterest )
                {
                    Debug.Log(math.distance(pointData.pos, item.pos));
                }
                throw new System.Exception("Not sorted correctly");
            }
            pointData.connections = new List<pointHolder>();
            for ( int i = 1; i <= genSettings.connectionsPerSystem; i++ )
            {
                //MonoBehaviour.print(finalSortedList.Length);
                //MonoBehaviour.print(finalSortedList[i].Id);

                pointData.connections.Add(sorted.ToArray()[i]);

            }


        }

        public static void ConnectSystems(GenerationSettings genSettings)
        {
            var watch = new System.Diagnostics.Stopwatch();
            watch.Start();
            var query = em.CreateEntityQuery(ComponentType.ReadOnly<SystemEntity.Id>());
            var systems = query.ToEntityArrayAsync(Unity.Collections.Allocator.TempJob, out JobHandle handle);
            ConcurrentDictionary<int, Cube> concurrentCubes = new ConcurrentDictionary<int, Cube>();
            handle.Complete();
            var points = systems.Select(o => new pointHolder() { reference = o, pos = em.GetComponentData<Translation>(o).Value }).ToList();
            var rootCube = new Cube(IdCounter.id, new float3(), genSettings.universeSize, concurrentCubes, points);
            systems.Dispose();

            var task = Task.Run(() => SplitCubes(rootCube, genSettings, concurrentCubes));
            task.Wait();
            //First we need to partition space "Split Cubes"
            var pointTasks = new List<Task>(points.Count);
            foreach ( var point in points )
            {
                pointTasks.Add(Task.Run(() => ProduceClosest(point, genSettings, rootCube)));
            }
            Task.WaitAll(pointTasks.ToArray());
            pointTasks.Clear();



            foreach ( var point in points )
            {
                pointTasks.Add(Task.Run(() =>
                {
                    for ( int i = 0; i < point.connections.Count; i++ )
                    {
                        var connection = point.connections[i];
                        Monitor.Enter(connection.connections);
                        try
                        {
                            bool notPresent = true;
                            foreach ( var possible in connection.connections )
                            {
                                if ( possible.reference.Equals(point.reference) )
                                {
                                    notPresent = false;
                                    break;
                                }
                            }
                            if ( notPresent )
                            {
                                connection.connections.Add(point);
                            }
                        }
                        finally
                        {
                            Monitor.Exit(connection.connections);
                        }
                    }
                }));

            }
            Task.WaitAll(pointTasks.ToArray());

            foreach ( var point in points )
            {
                DynamicBuffer<SystemEntity.ePointConnnectionBuffer> buffer = em.GetBuffer<SystemEntity.ePointConnnectionBuffer>(point.reference);
                DynamicBuffer<SystemEntity.ConnectionData> buff = buffer.Reinterpret<SystemEntity.ConnectionData>();

                foreach ( var connection in point.connections )
                {
                    buff.Add(new SystemEntity.ConnectionData() { target = em.GetComponentData<SystemEntity.Id>(connection.reference).id, targetEntity = connection.reference, position = SB.rand.NextFloat3(0, em.GetComponentData<SystemEntity.SystemData>(point.reference).size) });
                }
            }

            watch.Stop();
            Debug.Log($"Connecting systems took {watch.ElapsedMilliseconds / 1000f} seconds, ({watch.ElapsedMilliseconds}) ms");
            concurrentCubes = null;
        }
    }
}