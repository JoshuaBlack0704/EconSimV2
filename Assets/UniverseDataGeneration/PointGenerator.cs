using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PointGenerator
{
    /// <summary>
    /// Makes a single point and uses it to initialize a kd tree of points
    /// </summary>
    /// <param name="universe"></param>
    /// <param name="maximums"></param>
    /// <returns></returns>
    public static KDtree<UniquePoint> MakeNewPointKDtree(Universe universe, Vector3 maximums)
    {
        UniquePoint point = new UniquePoint(universe, Random.Range(0, maximums.x), Random.Range(0, maximums.y), Random.Range(0, maximums.z));
        KDtree<UniquePoint> kdTree = new KDtree<UniquePoint>(point);
        universe.OctTreeOfUniversePoints.AddToOctTree(point);

        return kdTree;
    }



    /// <summary>
    /// Generates all of the unique points in a universe object
    /// </summary>
    /// <param name="universe"></param>
    /// <param name="kdtree"></param>
    /// <param name="numOfPoints"></param>
    /// <param name="maximums"></param>
    public static void GenerateUniversePoints(Universe universe, KDtree<UniquePoint> kdtree, int numOfPoints, Vector3 maximums)
    {
        while (universe.maxPointId < numOfPoints)
        {
            UniquePoint point = new UniquePoint(universe, Random.Range(0, maximums.x), Random.Range(0, maximums.y), Random.Range(0, maximums.z));
            if (kdtree.addItemToKdTree(point) != true)
            {
                universe.maxPointId--;
                universe.masterPointsDatabase.Remove(point.Id);
            }
            else
            {
                universe.OctTreeOfUniversePoints.AddToOctTree(point);
            }
        }

        MonoBehaviour.print("point generation complete. OctTree Node Count: " + universe.OctTreeOfUniversePoints.masterCubeDatabase.Count);
    }
}
