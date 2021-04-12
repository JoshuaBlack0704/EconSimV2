using System.Collections.Generic;
using UnityEngine;


/// <summary>
/// A 3d point in space in a universe, complete with collections to trace its dimensions and kd, and oct tree addresses
/// </summary>
public class UniquePoint : IKDItem<UniquePoint>, IOctTreeItem<UniquePoint>
{
    /// <summary>
    ///Id used to identify the point, auto iterates the pointMaxIdTracker max Id
    /// </summary>
    public int Id { get; set; }
    /// <summary>
    /// General Vector3 of the point in the universe
    /// </summary>
    public Vector3 Position { get; set; }
    /// <summary>
    /// Dimension list of the vector3 to be used in a kd tree
    /// </summary>
    public List<float> dimensions { get; set; }
    /// <summary>
    /// Address in KDTree
    /// </summary>
    public List<int> KDAddress { get; set; }
    /// <summary>
    /// Address in Oct Tree
    /// </summary>
    public List<int> OctTreeAddress { get; set; }
    public List<UniquePoint> Connections { get; set; }


    /// <summary>
    /// Constructor that takes an x,y,z coordinate and initializes to properties as well as creates the vector3 
    /// </summary>
    /// <param name="xcoordinate"></param>
    /// <param name="ycoordinate"></param>
    /// <param name="zcoordinate"></param>
    public UniquePoint(Universe universe, float xcoordinate = 0, float ycoordinate = 0, float zcoordinate = 0)
    {
        Id = universe.maxPointId;
        Connections = new List<UniquePoint>(4);
        universe.maxPointId++;
        Position = new Vector3() { x = xcoordinate, y = ycoordinate, z = zcoordinate };
        dimensions = new List<float>() { xcoordinate, ycoordinate, zcoordinate };
        KDAddress = new List<int>();
        OctTreeAddress = new List<int>();
        universe.masterPointsDatabase.Add(Id, this);
    }


    /// <summary>
    /// This Methode returns -1 for less than, 0 for equal to, 1 for greater than, and 2 for non-unique
    /// </summary>
    /// <param name="whatToCompareTo"></param>
    /// <param name="dimensionIndex"></param>
    /// <returns></returns>
    public int CompareToUnique(UniquePoint whatToCompareTo, int dimensionIndex)
    {

        //This Methode returns -1 for less than, 0 for equal to, 1 for greater than, and 2 for non-unique
        if (this.dimensions[dimensionIndex] < whatToCompareTo.dimensions[dimensionIndex])
        {
            return -1;
        }
        else if (this.dimensions[dimensionIndex] == whatToCompareTo.dimensions[dimensionIndex])
        {
            if (this.Position == whatToCompareTo.Position)
            {
                return 2;
            }
            return 0;
        }
        else if (this.dimensions[dimensionIndex] > whatToCompareTo.dimensions[dimensionIndex])
        {
            return 1;
        }

        return 0;
    }
}

