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
        universe = new Universe(numberOfSystems, universeSize, 4);
    }


    private void OnDrawGizmos()
    {
        foreach (var point in universe.masterPointsDatabase.Values)
        {
            Gizmos.DrawSphere(point.Position, 1);
        }
    }
    // Update is called once per frame
    void Update()
    {
        
    }
}
