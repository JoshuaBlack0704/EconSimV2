using EconSimV2.Assets.V2.AI.Ships;
using EconSimV2.Assets.V2.GlobalSystems;
using EconSimV2.Assets.V2.UniverseDataGeneration;
using System.Collections.Generic;
using Unity.Entities;
using Unity.Transforms;
using UnityEngine;

namespace EconSimV2.Assets.V2.SystemManagement
{
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
        public List<Entity> asteroids;
        public float size;
        public SystemWorks systemWorks;
        public Dictionary<int, Ship> containedShips { get; set; }

        public UniverseSystem(SystemWorks _systemWorks, int _Id, UniquePoint heraldPoint, int numPlanets, int numAsteroids)
        {
            Id = _Id;
            definingPoint = heraldPoint;
            connections = new Dictionary<int, ConnectionData>(definingPoint.Connections.Count);
            EntityManager manager = PrefabAccessor.entityManager;
            size = Random.Range(70, 200f);
            foreach ( UniquePoint item in definingPoint.Connections )
            {
                connections.Add(item.Id, new ConnectionData()
                {
                    conId = item.Id,
                    connectionDistances = new Dictionary<int, float>(definingPoint.Connections.Count - 1),
                    Position = new Vector3()
                    {
                        x = Random.Range(0, size),
                        y = Random.Range(0, size),
                        z = Random.Range(0, size)
                    }
                });
            }
            foreach ( ConnectionData con in connections.Values )
            {
                foreach ( int iterCon in connections.Keys )
                {
                    ConnectionData secondaryCon = connections[iterCon];
                    if ( secondaryCon.conId == con.conId )
                    {
                        continue;
                    }

                    float distance = Vector3.Distance(con.Position, secondaryCon.Position);

                    con.connectionDistances[secondaryCon.conId] = distance;
                }
            }

            planets = new Entity[numPlanets];
            for ( int i = 0; i < numPlanets; i++ )
            {

                Entity planet = PrefabAccessor.entityManager.CreateEntity(PrefabAccessor.planetArc);
                manager.SetComponentData(planet, new planetId() { id = i });
                manager.SetComponentData(planet, new Translation() { Value = new Unity.Mathematics.float3(Random.Range(0, size), Random.Range(0, size), Random.Range(0, size)) });
                manager.SetComponentData(planet, new masterSystemId() { id = Id });
                planets[i] = planet;
            }
            asteroids = new List<Entity>(); ;
            for ( int i = 0; i < numAsteroids; i++ )
            {
                Entity asteroid = PrefabAccessor.entityManager.CreateEntity(PrefabAccessor.asteroidArc);
                manager.SetComponentData(asteroid, new asteroidId() { id = AsteroidMethods.MaxId });
                manager.SetComponentData(asteroid, new Translation() { Value = new Unity.Mathematics.float3(Random.Range(0, size), Random.Range(0, size), Random.Range(0, size)) });
                manager.SetComponentData(asteroid, new masterSystemId() { id = Id });
                manager.SetComponentData(asteroid, new FoodResource() { volume = 1000, reservedVolume = 0 });
                asteroids.Add(asteroid);
            }
            star = manager.CreateEntity(PrefabAccessor.starArc);
            manager.SetComponentData(star, new starId() { id = 0 });
            manager.SetComponentData(star, new Translation() { Value = new Vector3() { x = size / 2, y = size / 2, z = size / 2 } });
            manager.SetComponentData(star, new masterSystemId { id = Id });

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
}