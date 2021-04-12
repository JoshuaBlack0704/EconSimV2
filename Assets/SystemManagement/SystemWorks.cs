using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SystemWorks : MonoBehaviour
{
    public Universe masterUniverse { get; set; }
    public Dictionary<int, UniverseSystem> systemDatabase { get; set; }
    public void GenerateSystemById(int Id, int numPlanets, int numAsteroids)
    {
        UniverseSystem newSystem = new UniverseSystem(this, Id, masterUniverse.masterPointsDatabase[Id], numPlanets, numAsteroids);
    }
    public UniverseSystem GetSystem(int Id)
    {
        UniverseSystem system;
        if (systemDatabase.TryGetValue(Id, out system))
        {
            int numPlanets = Random.Range(0, 10);
            int numAsteroids = Random.Range(0, 30);

            GenerateSystemById(Id, numPlanets, numAsteroids);

            system = systemDatabase[Id];
        }

        return system;
    }

    public SystemWorks(Universe _masterUniverse, bool generateAllSystems)
    {
        masterUniverse = _masterUniverse;
        systemDatabase = new Dictionary<int, UniverseSystem>(masterUniverse.masterPointsDatabase.Count);
        if (generateAllSystems)
        {
            int totPlanets = 0;
            int totAsteroids = 0;
            foreach (var point in masterUniverse.masterPointsDatabase.Values)
            {
                int numPlanets = Random.Range(0, 10);
                int numAsteroids = Random.Range(0, 30);
                GenerateSystemById(point.Id, numPlanets, numAsteroids);
                totPlanets += numPlanets;
                totAsteroids += numPlanets;
            }

            MonoBehaviour.print("Planets generated: " + totPlanets);
            MonoBehaviour.print("Asteroids generated: " + totAsteroids);
        }
    }


}
