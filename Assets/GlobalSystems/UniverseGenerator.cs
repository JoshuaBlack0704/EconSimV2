using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class UniverseGenerator : MonoBehaviour
{
    public int universeSize;
    public int numberOfSystems;
    public int selectedPoint;
    public bool switchSystemView;

    public static Universe universe;
    // Start is called before the first frame update
    void Awake()
    {
        MonoBehaviour.print("Starting Generation");
        universe = new Universe(numberOfSystems, universeSize, false, 4);
        MonoBehaviour.print("Generation Complete");
    }


    private void OnDrawGizmos()
    {
        foreach (var point in universe.masterPointsDatabase.Values)
        {
            foreach (var con in point.Connections)
            {
                //Gizmos.DrawLine(point.Position, con.Position);
            }
        }
    }

    // Update is called once per frame
    private void Update()
    {
        universe.selectedPoint = selectedPoint;

        if (switchSystemView)
        {
            if (universe.inSystem == false)
            {
                universe.systemSpawner.IntantiateSystemInterior(universe.selectedPoint);
                universe.inSystem = true;
            }
            else
            {
                universe.systemSpawner.ReturnToUniverse();
                universe.inSystem = false;
            }
        }

        switchSystemView = false;
    }

}
