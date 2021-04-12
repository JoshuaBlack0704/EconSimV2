using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class UniverseSystems : MonoBehaviour
{
    public int universeSize;
    public int numberOfSystems;

    public static Universe universe;
    // Start is called before the first frame update
    void Awake()
    {
        MonoBehaviour.print("Starting Generation");
        universe = new Universe(numberOfSystems, universeSize, 4);
        MonoBehaviour.print("Generation Complete");
    }


    private void OnDrawGizmos()
    {
        foreach (var point in universe.masterPointsDatabase.Values)
        {
            foreach (var con in point.Connections)
            {
                Gizmos.DrawLine(point.Position, con.Position);
            }
        }
    }
    // Update is called once per frame
    
}
