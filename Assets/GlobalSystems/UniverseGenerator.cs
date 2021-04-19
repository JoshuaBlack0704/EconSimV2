using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class UniverseGenerator : MonoBehaviour
{
    public int universeSize;
    public int numberOfSystems;
    public int selectedSystem;
    public bool switchSystemView;

    public static Universe universe;
    // Start is called before the first frame update
    void Awake()
    {
        MonoBehaviour.print("Starting Generation");
        universe = new Universe(numberOfSystems, universeSize, true, 4);
        MonoBehaviour.print("Generation Complete");
    }


    private void OnDrawGizmos()
    {
        if (universe.inSystem)
        {
            foreach (var connection in universe.systemWorks.GetSystem(universe.selectedSystem).connections.Values)
            {
                Gizmos.DrawSphere(connection.Position, 1);
            }
        }
    }

    // Update is called once per frame
    private void Update()
    {
        universe.selectedSystem = selectedSystem;

        if (switchSystemView)
        {
            if (universe.inSystem == false)
            {
                universe.systemWorks.EnterSystem(universe.selectedSystem);
                universe.inSystem = true;
            }
            else
            {
                universe.systemWorks.EnterUniverse();
                universe.inSystem = false;
            }
        }

        switchSystemView = false;
    }

    private void OnApplicationQuit()
    {
        universe = null;
        System.GC.Collect();
    }

}
