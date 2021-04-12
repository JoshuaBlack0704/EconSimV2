using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class UniverseSystem : MonoBehaviour
{
    public struct ConnectionData
    {
        public int con;
        public Dictionary<int, float> connectionDistances;
        public Vector3 Position;
    };
    public int Id;
    public UniquePoint definingPoint;
    public Dictionary<int, ConnectionData> connections;
    public Star star;
    public Planet[] planets;
    public Dictionary<int, Asterioid> asteroids;
    public float size;
    SystemWorks systemWorks;

    public UniverseSystem(SystemWorks _systemWorks, int _Id, UniquePoint heraldPoint, int numPlanets, int numAsteroids)
    {
        Id = _Id;
        definingPoint = heraldPoint;
        connections = new Dictionary<int, ConnectionData>(definingPoint.Connections.Count);
        size = Random.Range(0, 100f);
        foreach (var item in definingPoint.Connections)
        {
            connections.Add(item.Id, new ConnectionData() { 
                con = item.Id, 
                connectionDistances = new Dictionary<int, float>(definingPoint.Connections.Count-1), 
                Position = new Vector3() { x = Random.Range(0, size),
                                           y = Random.Range(0, size),
                                           z = Random.Range(0, size)} 
            });
        }
        foreach (var con in connections.Values)
        {
            foreach (var iterCon in connections.Keys)
            {
                var secondaryCon = connections[iterCon];
                if (secondaryCon.con == con.con)
                {
                    continue;
                }

                float distance = Vector3.Distance(con.Position, secondaryCon.Position);

                con.connectionDistances[secondaryCon.con] = distance;
            }
        }

        planets = new Planet[numPlanets];
        for (int i = 0; i < numPlanets; i++)
        {
            
            planets[i] = new Planet(i, this, new Vector3()
            {
                x = Random.Range(0, size),
                y = Random.Range(0, size),
                z = Random.Range(0, size)
            });
        }
        asteroids = new Dictionary<int, Asterioid>(numAsteroids);
        for (int i = 0; i < numAsteroids; i++)
        {
            Asterioid newAsteroid = new Asterioid(i, this, new Vector3()
            {
                x = Random.Range(0, size),
                y = Random.Range(0, size),
                z = Random.Range(0, size)
            });
            asteroids.Add(newAsteroid.Id, newAsteroid);
        }
        star = new Star(this);

        systemWorks = _systemWorks;

        systemWorks.systemDatabase[Id] = this;

    }
}

