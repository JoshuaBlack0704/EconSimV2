using System.Collections;
using System.Collections.Generic;
using Unity.Entities;
using Unity.Transforms;
using UnityEngine;

public class UniverseSystem
{
    public struct ConnectionData
    {
        public int conId;
        public Dictionary<int, float> connectionDistances;
        public Vector3 Position;
    };
    public int Id;
    public UniquePoint definingPoint;
    public Dictionary<int, ConnectionData> connections;
    public Entity star;
    public Entity[] planets;
    public Entity[] asteroids;
    public float size;
    public SystemWorks systemWorks;
    public Dictionary<int, Ship> containedShips { get; set; }

    public UniverseSystem(SystemWorks _systemWorks, int _Id, UniquePoint heraldPoint, int numPlanets, int numAsteroids)
    {
        Id = _Id;
        definingPoint = heraldPoint;
        connections = new Dictionary<int, ConnectionData>(definingPoint.Connections.Count);
        var manager = PrefabAccessor.entityManager;
        size = Random.Range(70, 200f);
        foreach (var item in definingPoint.Connections)
        {
            connections.Add(item.Id, new ConnectionData() { 
                conId = item.Id, 
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
                if (secondaryCon.conId == con.conId)
                {
                    continue;
                }

                float distance = Vector3.Distance(con.Position, secondaryCon.Position);

                con.connectionDistances[secondaryCon.conId] = distance;
            }
        }

        planets = new Entity[numPlanets];
        for (int i = 0; i < numPlanets; i++)
        {
            
            var planet = PrefabAccessor.entityManager.CreateEntity(PrefabAccessor.planetArc);
            manager.SetComponentData<planetId>(planet, new planetId() { Id = i});
            manager.SetComponentData<Translation>(planet, new Translation() { Value = new Unity.Mathematics.float3(Random.Range(0, size), Random.Range(0, size), Random.Range(0, size)) });
            manager.SetComponentData<masterSystemId>(planet, new masterSystemId() { Id = Id});
            planets[i] = planet;
        }
        asteroids = new Entity[numAsteroids]; ;
        for (int i = 0; i < numAsteroids; i++)
        {
            var asteroid = PrefabAccessor.entityManager.CreateEntity(PrefabAccessor.asteroidArc);
            manager.SetComponentData<asteroidId>(asteroid, new asteroidId() { Id = i });
            manager.SetComponentData<Translation>(asteroid, new Translation() { Value = new Unity.Mathematics.float3(Random.Range(0, size), Random.Range(0, size), Random.Range(0, size)) });
            manager.SetComponentData<masterSystemId>(asteroid, new masterSystemId() { Id = Id });
            asteroids[i] = asteroid;
        }
        star = manager.CreateEntity(PrefabAccessor.starArc);
        manager.SetComponentData<starId>(star, new starId() { Id = 0});
        manager.SetComponentData<Translation>(star, new Translation() { Value = new Vector3() { x = size / 2, y = size / 2, z = size / 2 } });
        manager.SetComponentData<masterSystemId>(star, new masterSystemId { Id = Id });

        systemWorks = _systemWorks;
        containedShips = new Dictionary<int, Ship>();

        systemWorks.SetSystem(Id, this);

    }
}

public interface ISystemSubObject<T>
{
    public UniverseSystem masterSystem { get; set; }
    public Vector3 position { get; set; }
}