using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Universe
{
    public int maxPointId { get; set; }
    public int targetConnections;
    public SystemWorks systemWorks;
    public bool inSystem;
    public Dictionary<int, UniquePoint> masterPointsDatabase = new Dictionary<int, UniquePoint>();
    public int selectedSystem;
    public KDtree<UniquePoint> KDtreeOfUniversePoints { get; set; }
    public OctTree<UniquePoint> OctTreeOfUniversePoints { get; set; }
    public Vector3 universeMaximums { get; set; }


    /// <summary>
    /// 
    /// </summary>
    /// <param name="numberOfSystems"></param>
    /// <param name="universeSize"></param>
    /// <param name="square">If false then you must define the max vertex</param>
    /// <param name="xmax"></param>
    /// <param name="ymax"></param>
    /// <param name="zmax"></param>
    public Universe(int numberOfSystems, float universeSize, bool generateUniverse = true, int _targetConnections = 4, bool square = true, float xmax = 0, float ymax = 0, float zmax = 0)
    {
        System.GC.Collect();
        //If square is false we must define the max vertex
        if (square != true)
        {
            universeMaximums = new Vector3() { x = xmax, y = ymax, z = zmax };
        }
        else
        {
            universeMaximums = new Vector3() { x = universeSize, y = universeSize, z = universeSize };
        }

        if (generateUniverse)
        {
            targetConnections = _targetConnections;

            OctTreeOfUniversePoints = new OctTree<UniquePoint>(this, new Vector3(), universeMaximums, false);

            KDtreeOfUniversePoints = PointGenerator.MakeNewPointKDtree(this, universeMaximums);

            PointGenerator.GenerateUniversePoints(this, KDtreeOfUniversePoints, numberOfSystems, universeMaximums);

           
            if (targetConnections < numberOfSystems)
            {
                OctTreeOfUniversePoints.ConnectSystems();
            }
            else
            {
                MonoBehaviour.print("Not enough points to establish connections in universe");
            }
            systemWorks = new SystemWorks(this, false);

            systemWorks.EnterUniverse();
            
        }
        

    }
}
