using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class OctTree<T> where T : IOctTreeItem<T>
{
    Universe parentUniverse;
    int maxCubeId = 0;
    int maxPointsPerCube;
    int subCubesCreated=1;
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
            if (predefinedContents != null)
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
        if (point.x < max.x && point.x >= min.x && 
            point.y < max.y && point.y >= min.y &&
            point.z < max.z && point.z >= min.z)
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


        while (true)
        {
            //MonoBehaviour.print(string.Format("CurrentCube Id: {0}", currentCube.Id));
            item.OctTreeAddress.Add(currentCube.Id);
            currentCube.contents.Add(item);
            //MonoBehaviour.print("Current cube contents count: " + currentCube.contents.Count);



            if (currentCube.Branches[0] != null)
            {
                //MonoBehaviour.print("Branches not null");
                for (int i = 0; i < currentCube.Branches.Length; i++)
                {
                    var branch = currentCube.Branches[i];
                    if (IsBetween(branch.minimums, branch.maximums, item.Position))
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
        
        float incrementz= (cube.maximums.z - cube.minimums.z) / 2;

        //We iterate twice in all three dimensions because we only split twince in all three dimensions
        int cubeCount = 0;

        for (int xiter = 0; xiter < 2; xiter++)
        {
            for (int yiter = 0; yiter < 2; yiter++)
            {
                for (int ziter = 0; ziter < 2; ziter++)
                {
                    Vector3 newminimum = new Vector3()
                    {
                        x = cube.minimums.x + (incrementx * xiter),
                        y = cube.minimums.y + (incrementy * yiter),
                        z = cube.minimums.z + (incrementz * ziter)
                    };
                    Vector3 newmaximum = new Vector3()
                    {
                        x = cube.minimums.x + incrementx + (incrementx * xiter),
                        y = cube.minimums.y + incrementy + (incrementy * yiter),
                        z = cube.minimums.z + incrementz + (incrementz * ziter)
                    };

                    //MonoBehaviour.print(string.Format("subCube being created, current subcube max id: {0}", maxCubeId));
                    Cube subCube = new Cube(this, newminimum, newmaximum);
                    cube.Branches[cubeCount] = subCube;
                    cubeCount++;
                }
            }
        }

        //We go through our master cubes parition and distribute the points and repeat the splitcube funtion
        foreach (var point in cube.contents)
        {
            foreach (var subCube in cube.Branches)
            {
                if (IsBetween(subCube.minimums, subCube.maximums, point.Position))
                {
                    subCube.contents.Add(point);
                    point.OctTreeAddress.Add(subCube.Id);
                    

                    if (subCube.contents.Count > maxPointsPerCube)
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
        if (leafCube.contents.Count > maxPointsPerCube)
        {
            //If it is over capacity we will split the cube and re-distribute the points inside
            SplitCube(leafCube);
        }

        //MonoBehaviour.print(string.Format("Add To OctTree executed, current number of cubes created: {0}", subCubesCreated));
    }

    public void ConnectSystems()
    {
        var numConnections = parentUniverse.targetConnections;

        //We first want to iterate through all systems
        foreach (var point in parentUniverse.masterPointsDatabase)
        {

        }
    }



    public OctTree(Universe universe, Vector3 origin, Vector3 maxVertex, bool manualSystemPartitions, int systemPartitions = 0)
    {
        parentUniverse = universe;
        rootCube = new Cube(this, origin, maxVertex);
        if (manualSystemPartitions == true)
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
    Vector3 Position { get; set; }
    List<int> OctTreeAddress { get; set; }
}