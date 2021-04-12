using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class UniverseGenerator : MonoBehaviour
{
    public int universeSize;
    public int numberOfSystems;
    public int selectedPoint;

    public bool enterSystem;
    public bool exitSystem;

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
    private bool isGenerated;

    // Update is called once per frame
    private void Update()
    {
        universe.selectedPoint = selectedPoint;
        if (enterSystem == true && isGenerated == false)
        {
            
            universe.systemSpawner.IntantiateSystemInterior(selectedPoint);
            isGenerated = true;
        }
        if (enterSystem == true && exitSystem == true)
        {
            universe.systemSpawner.ReturnToUniverse();
            enterSystem = false;
            exitSystem = false;
            isGenerated = false;
        }
    }

}
