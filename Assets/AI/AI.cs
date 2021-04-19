using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AI
{
    public class AiSystem
    {
        //public struct ConnectionData
        //{
        //    public int conId;
        //    public Dictionary<int, float> connectionDistances;
        //    public Vector3 Position;
        //};
        public int Id;
        public AI masterAI;
        public UniverseSystem masterSystem;
        public UniquePoint definingPoint;
        public Dictionary<int, UniverseSystem.ConnectionData> connections;
        public Star star;
        public Planet[] planets;
        public Asterioid[] asteroids;
        public float size;

        public AiSystem(AI _masterAI, UniverseSystem _masterSystem)
        {
            Id = _masterSystem.Id;
            masterAI = _masterAI;
            masterSystem = _masterSystem;
            definingPoint = _masterSystem.definingPoint;
            connections = _masterSystem.connections;
            star = _masterSystem.star;
            size = masterSystem.size;
        }
        public void ExploreSystem(bool addUnknowns = true)
        {
            planets = masterSystem.planets;
            asteroids = masterSystem.asteroids;
            if (addUnknowns)
            {
                foreach (var connection in connections.Keys)
                {
                    AddUnknownSystemToAI(connection);
                }
            }
            
        }

        public void AddUnknownSystemToAI(int conId)
        {
            masterAI.unknownSystems.Add(conId, new AiSystem(masterAI, masterSystem.systemWorks.GetSystem(conId)));
        }
    }
    public int Id { get; set; }
    public Universe universe { get; set; }
    public Dictionary<int, Ship> ownedShips { get; set; }
    public List<Ship> unassignedShips { get; set; }
    public Dictionary<int, AiSystem> knownSystems { get; set; }
    public Dictionary<int, AiSystem> unknownSystems { get; set; }
    public List<AiSystem> systemsBeingExplored { get; set; }

    public void MasterCall()
    {
        for (int i = 0; i < unassignedShips.Count; i++)
        {
            var ship = unassignedShips[i];
            var randType = Random.Range(0, 2);
            //int randSystem = 0;
            int randSystem = Random.Range(0, universe.masterPointsDatabase.Count);
            if (randType == 0)
            {
                ship.SetTargetAndGo(universe.systemWorks.GetSystem(randSystem).planets[Random.Range(0, universe.systemWorks.GetSystem(randSystem).planets.Length)]);
            }
            else if (randType == 1)
            {
                ship.SetTargetAndGo(universe.systemWorks.GetSystem(randSystem).asteroids[Random.Range(0, universe.systemWorks.GetSystem(randSystem).asteroids.Length)]);
            }
        }
        unassignedShips.Clear();
        
    }


    public AI(Universe uni, int _startingSystem, int numStatingShips, bool exploredAllSystems = false)
    {
        Id = AiStaticData.maxAiId;
        AiStaticData.maxAiId++;
        universe = uni;
        ownedShips = new Dictionary<int, Ship>();
        unassignedShips = new List<Ship>();
        knownSystems = new Dictionary<int, AiSystem>();
        unknownSystems = new Dictionary<int, AiSystem>();
        systemsBeingExplored = new List<AiSystem>();
        //Build ai system data base
        if (exploredAllSystems)
        {
            foreach (var systemKey in uni.masterPointsDatabase.Keys)
            {
                var system = uni.systemWorks.GetSystem(systemKey);
                knownSystems.Add(system.Id, new AiSystem(this, system));
                knownSystems[system.Id].ExploreSystem(false);
            }
        }
        else
        {
            UniverseSystem startingSystem = universe.systemWorks.GetSystem(_startingSystem);
            knownSystems.Add(startingSystem.Id, new AiSystem(this, startingSystem));
            knownSystems[startingSystem.Id].ExploreSystem();
        }
        //Initialize all ai's ships
        UniverseSystem Startsystem = uni.systemWorks.GetSystem(_startingSystem);
        for (int i = 0; i < numStatingShips; i++)
        {
            Ship newShip = new Ship(new Vector3 {x = Random.Range(0, Startsystem.size), y = Random.Range(0, Startsystem.size), z = Random.Range(0, Startsystem.size) } , uni.systemWorks.entityManager, Startsystem.Id, this);
            ownedShips.Add(newShip.Id, newShip);
            unassignedShips.Add(newShip);
        }

    }

}

public static class AiStaticData
{
    public static int maxAiId = 0;
}
