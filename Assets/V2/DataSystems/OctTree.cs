using EconSimV2.Assets.V2.UniverseDataGeneration;
using System.Collections.Generic;
using System.Linq;
using Unity.Burst;
using Unity.Collections;
using Unity.Jobs;
using Unity.Mathematics;
using UnityEngine;

namespace EconSimV2.Assets.V2.DataSystems
{
    public class OctTree<T> where T : IOctTreeItem<T>
    {
        Universe parentUniverse;
        int maxCubeId = 0;
        int maxPointsPerCube;
        int subCubesCreated = 1;
        public Dictionary<int, Cube> masterCubeDatabase = new Dictionary<int, Cube>();

        public class Cube
        {
            public int Id { get; set; }
            public Vector3 minimums { get; set; }
            public Vector3 maximums { get; set; }
            public List<T> contents { get; set; }
            public Cube[] Branches { get; set; }

            public Cube(OctTree<T> octTree, Vector3 minimumVertex, Vector3 maximumVertex, List<T> predefinedContents = null)
            {
                Id = octTree.maxCubeId;
                octTree.maxCubeId++;
                minimums = minimumVertex;
                maximums = maximumVertex;
                if ( predefinedContents != null )
                {
                    contents = predefinedContents;
                }
                else
                {
                    contents = new List<T>();
                }
                Branches = new Cube[8];
                octTree.masterCubeDatabase.Add(Id, this);
            }
        }

        Cube rootCube;


        public bool IsBetween(Vector3 min, Vector3 max, Vector3 point)
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





        /// <summary>
        /// Progress through the cube network to find the deepest cube, adding to every cube on the way
        /// </summary>
        /// <param name="item"></param>
        public Cube PlaceItem(T item)
        {
            Cube currentCube = rootCube;


            while ( true )
            {
                //MonoBehaviour.print(string.Format("CurrentCube Id: {0}", currentCube.Id));
                item.OctTreeAddress.Add(currentCube.Id);
                currentCube.contents.Add(item);
                //MonoBehaviour.print("Current cube contents count: " + currentCube.contents.Count);



                if ( currentCube.Branches[0] != null )
                {
                    //MonoBehaviour.print("Branches not null");
                    for ( int i = 0; i < currentCube.Branches.Length; i++ )
                    {
                        Cube branch = currentCube.Branches[i];
                        if ( IsBetween(branch.minimums, branch.maximums, item.Position) )
                        {
                            //MonoBehaviour.print("Found matching branch");
                            currentCube = branch;
                            break;
                        }
                    }
                }
                else
                {
                    return currentCube;
                }
            }
        }

        public void SplitCube(Cube cube)
        {

            //We will split the cube into 8 different subsections
            subCubesCreated += 8;
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
                        Vector3 newminimum = new Vector3()
                        {
                            x = cube.minimums.x + incrementx * xiter,
                            y = cube.minimums.y + incrementy * yiter,
                            z = cube.minimums.z + incrementz * ziter
                        };
                        Vector3 newmaximum = new Vector3()
                        {
                            x = cube.minimums.x + incrementx + incrementx * xiter,
                            y = cube.minimums.y + incrementy + incrementy * yiter,
                            z = cube.minimums.z + incrementz + incrementz * ziter
                        };

                        //MonoBehaviour.print(string.Format("subCube being created, current subcube max id: {0}", maxCubeId));
                        Cube subCube = new Cube(this, newminimum, newmaximum);
                        cube.Branches[cubeCount] = subCube;
                        cubeCount++;
                    }
                }
            }

            //We go through our master cubes parition and distribute the points and repeat the splitcube funtion
            foreach ( T point in cube.contents )
            {
                foreach ( Cube subCube in cube.Branches )
                {
                    if ( IsBetween(subCube.minimums, subCube.maximums, point.Position) )
                    {
                        subCube.contents.Add(point);
                        point.OctTreeAddress.Add(subCube.Id);


                        if ( subCube.contents.Count > maxPointsPerCube )
                        {
                            //If it is over capacity we will split the cube and re-distribute the points inside
                            SplitCube(subCube);

                        }

                        break;
                    }
                }
            }
        }

        public void AddToOctTree(T item)
        {
            //We will place an item
            Cube leafCube = PlaceItem(item);
            //MonoBehaviour.print("leafNode found, contents count: " + leafCube.contents.Count + " max points per cube: " + maxPointsPerCube);
            //Then we will check if that cube is over capacity
            if ( leafCube.contents.Count > maxPointsPerCube + 1 )
            {
                //If it is over capacity we will split the cube and re-distribute the points inside
                SplitCube(leafCube);
            }

            //MonoBehaviour.print(string.Format("Add To OctTree executed, current number of cubes created: {0}", subCubesCreated));
        }
        [BurstCompile]
        public void ConnectSystems()
        {
            int numConnections = parentUniverse.targetConnections;



            distStruct[] GetSortedDistances(UniquePoint point, List<Cube> cubeList)
            {
                distStruct mainPoint = new distStruct { Id = point.Id, position = point.Position };

                List<distStruct> tempList = new List<distStruct>();

                foreach ( Cube cube in cubeList )
                {
                    foreach ( T item in cube.contents )
                    {
                        distStruct newDistStruct = new distStruct { Id = item.Id, position = item.Position };

                        tempList.Add(newDistStruct);
                    }
                }

                NativeArray<distStruct> positions = new NativeArray<distStruct>(tempList.Count, Allocator.TempJob);

                positions.CopyFrom(tempList.ToArray());

                DistCalcBatch distJob = new DistCalcBatch()
                {
                    pos = mainPoint,
                    resultDistStructs = positions
                };
                JobHandle distJobHandle = distJob.Schedule(distJob.resultDistStructs.Length, 1);

                distJobHandle.Complete();

                distStruct[] resultArr = new distStruct[tempList.Count];

                positions.CopyTo(resultArr);

                distStruct[] finalArr = resultArr.OrderBy(dist => dist.result).ToArray();

                positions.Dispose();

                return finalArr;
            }

            //We first want to iterate through all systems
            foreach ( UniquePoint point in parentUniverse.masterPointsDatabase.Values )
            {
                List<int> Address = point.OctTreeAddress;
                //We will use the points oct tree address recursivley to fingthefirst cube that contains atleast target connections
                Cube startingCube = rootCube;
                for ( int i = Address.Count - 1; i >= 0; i-- )
                {
                    startingCube = masterCubeDatabase[Address[i]];

                    if ( startingCube.contents.Count >= parentUniverse.targetConnections + 1 )
                    {
                        //MonoBehaviour.print("Address Recursions: " + (Address.Count - i));
                        //MonoBehaviour.print("Starting Cube contents count: " + startingCube.contents.Count);
                        break;
                    }
                }


                //We must now find the closest four points

                distStruct[] sortedList = GetSortedDistances(point, new List<Cube>() { startingCube });

                float maxDistance = sortedList[maxPointsPerCube].result;


                List<Cube> cubesOfIntrest = new List<Cube>(10);

                List<T> pointsOfIntrest = new List<T>(100);

                cubesOfIntrest.Add(rootCube);

                for ( int c = 0; c < cubesOfIntrest.Count; c++ )
                {
                    Cube currentCube = cubesOfIntrest[c];
                    if ( currentCube.Branches[0] == null )
                    {
                        continue;
                    }
                    //MonoBehaviour.print("Cube Number: " + c);
                    //MonoBehaviour.print("Cubes of Intrest: " + cubesOfIntrest.Count);
                    //MonoBehaviour.print("Max Distance: " + maxDistance);
                    for ( int i = 0; i < currentCube.Branches.Length; i++ )
                    {

                        Cube cube = currentCube.Branches[i];

                        Vector3 maxRange = new Vector3()
                        {
                            x = point.Position.x + maxDistance,
                            y = point.Position.y + maxDistance,
                            z = point.Position.z + maxDistance
                        };

                        Vector3 minRange = new Vector3()
                        {
                            x = point.Position.x - maxDistance,
                            y = point.Position.y - maxDistance,
                            z = point.Position.z - maxDistance
                        };

                        //bool max_xInRange = false;
                        //bool max_yInRange = false;
                        //bool max_zInRange = false;

                        //bool min_xInRange = false;
                        //bool min_yInRange = false;
                        //bool min_zInRange = false;

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


                        //if ((cube.maximums.x - maxRange.x) >= 0 && (maxRange.x - cube.minimums.x) >= 0)
                        //{
                        //    max_xInRange = true;
                        //}
                        //if ((cube.maximums.y - maxRange.y) >= 0 && (maxRange.y - cube.minimums.y) >= 0)
                        //{
                        //    max_yInRange = true;
                        //}
                        //if ((cube.maximums.z - maxRange.z) >= 0 && (maxRange.z - cube.minimums.z) >= 0)
                        //{
                        //    max_zInRange = true;
                        //}

                        //if ((cube.maximums.x - minRange.x) >= 0 && (minRange.x - cube.minimums.x) > 0)
                        //{
                        //    min_xInRange = true;
                        //}
                        //if ((cube.maximums.y - minRange.y) >= 0 && (minRange.y - cube.minimums.y) > 0)
                        //{
                        //    min_yInRange = true;
                        //}
                        //if ((cube.maximums.z - minRange.z) >= 0 && (minRange.z - cube.minimums.z) > 0)
                        //{
                        //    min_zInRange = true;
                        //}

                        //if (max_xInRange || min_xInRange)
                        //{
                        //    xInRange = true;
                        //}
                        //if (max_yInRange || min_yInRange)
                        //{
                        //    yInRange = true;
                        //}
                        //if (max_zInRange || min_zInRange)
                        //{
                        //    zInRange = true;
                        //}

                        if ( xInRange && yInRange && zInRange )
                        {
                            cubesOfIntrest.Add(cube);
                            //MonoBehaviour.print("subCube added");
                        }


                    }
                    cubesOfIntrest.Remove(currentCube);
                    c--;

                }

                distStruct[] finalSortedList = GetSortedDistances(point, cubesOfIntrest);

                for ( int i = 1; i <= parentUniverse.targetConnections; i++ )
                {
                    //MonoBehaviour.print(finalSortedList.Length);
                    //MonoBehaviour.print(finalSortedList[i].Id);

                    UniquePoint connectedPoint = parentUniverse.masterPointsDatabase[finalSortedList[i].Id];
                    if ( point.Connections.Contains(connectedPoint) != true )
                    {
                        point.Connections.Add(connectedPoint);
                        connectedPoint.Connections.Add(point);
                    }

                }

            }

            foreach ( UniquePoint item in parentUniverse.masterPointsDatabase.Values )
            {
                foreach ( UniquePoint connection in item.Connections )
                {
                    if ( parentUniverse.masterPointsDatabase[connection.Id].Connections.Contains(item) != true )
                    {
                        Debug.LogError("here");
                    }
                }
            }
        }



        public OctTree(Universe universe, Vector3 origin, Vector3 maxVertex, bool manualSystemPartitions, int systemPartitions = 0)
        {
            parentUniverse = universe;
            rootCube = new Cube(this, origin, maxVertex);
            if ( manualSystemPartitions == true )
            {
                maxPointsPerCube = systemPartitions;
            }
            else
            {
                maxPointsPerCube = universe.targetConnections;
            }
            MonoBehaviour.print(string.Format("OctTree initialized. TargetConnections = {0}. RootCube contents size = {1}", maxPointsPerCube, rootCube.contents.Count));
        }
    }

    public interface IOctTreeItem<T>
    {
        int Id { get; }
        Vector3 Position { get; set; }
        List<int> OctTreeAddress { get; set; }
    }

    public struct distStruct
    {
        public int Id;
        public Vector3 position;
        public float result;
    }

    /// <summary>
    /// inputs a master point to calc to and a native array of vector three to calc to, returns an array of results indexed to positions
    /// </summary>
    [BurstCompile]
    public struct DistCalcBatch : IJobParallelFor
    {
        [ReadOnly]
        public distStruct pos;

        public NativeArray<distStruct> resultDistStructs;

        public void Execute(int index)
        {
            distStruct res = new distStruct() { Id = resultDistStructs[index].Id, position = resultDistStructs[index].position };
            //you must sqrt
            res.result = math.sqrt(math.pow(resultDistStructs[index].position.x - pos.position.x, 2) + math.pow(resultDistStructs[index].position.y - pos.position.y, 2) + math.pow(resultDistStructs[index].position.z - pos.position.z, 2));
            resultDistStructs[index] = res;
        }
    }
}