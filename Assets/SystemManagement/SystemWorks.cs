using System.Collections;
using System.Collections.Generic;
using Unity.Mathematics;
using Unity.Burst;
using Unity.Entities;
using Unity.Transforms;
using Unity.Collections;
using UnityEngine;

public class SystemWorks : MonoBehaviour
{
    public Universe masterUniverse { get; set; }
    public Pathfinder pathFinder;
    private Dictionary<int, UniverseSystem> systemDatabase { get; set; }
    public void GenerateSystemById(int Id, int numPlanets, int numAsteroids)
    {
        UniverseSystem newSystem = new UniverseSystem(this, Id, masterUniverse.masterPointsDatabase[Id], numPlanets, numAsteroids);
    }
    public UniverseSystem GetSystem(int Id)
    {
        UniverseSystem system;
        if (systemDatabase.TryGetValue(Id, out system))
        {
            //system = systemDatabase[Id];
            if (system.Id != Id)
            {
                Debug.LogError("here");
            }
            return system;
        }
        int numPlanets = UnityEngine.Random.Range(1, 10);
        int numAsteroids = UnityEngine.Random.Range(1, 30);

        GenerateSystemById(Id, numPlanets, numAsteroids);
        system = systemDatabase[Id];


        return system;
    }
    public void SetSystem(int Id, UniverseSystem system)
    {
        systemDatabase[Id] = system;
    }
    public List<int> GetPath(int start, int end)
    {
        return pathFinder.GetPath(start, end, true);
        //return pathFinder.FindBestPath(start, end, masterUniverse.masterPointsDatabase);
    }

    //Entity Functions

    World defaultWorld;
    public EntityManager entityManager;
    public void EnterUniverse()
    {
        EntityQueryDesc query = new EntityQueryDesc() { Any = new ComponentType[] { typeof(systemSubObjectTag) } };
        
        NativeArray<Entity> entitesToDestroy = entityManager.CreateEntityQuery(query).ToEntityArray(Allocator.TempJob); ;
        foreach (var entity in entitesToDestroy)
        {
            entityManager.DestroyEntity(entity);
        }
        entitesToDestroy.Dispose();
        foreach (var ship in GetSystem(masterUniverse.selectedSystem).containedShips.Values)
        {
            ship.DestoryEntityFor();
        }


        foreach (var system in masterUniverse.masterPointsDatabase.Values)
        {
            var newSystem = entityManager.Instantiate(PrefabAccessor.entityTemplateArray[0]);
            entityManager.AddComponent(newSystem, typeof(systemCloneTag));
            entityManager.SetComponentData(newSystem, new Translation { Value = system.Position});
        }
    }
    public void EnterSystem(int Id)
    {
        EntityQueryDesc query = new EntityQueryDesc() { Any = new ComponentType[] { typeof(systemCloneTag) } };
        NativeArray<Entity> entitesToDestroy = entityManager.CreateEntityQuery(query).ToEntityArray(Allocator.TempJob); ;
        foreach (var entity in entitesToDestroy)
        {
            entityManager.DestroyEntity(entity);
        }
        entitesToDestroy.Dispose();

        UniverseSystem system = GetSystem(Id);

        foreach (var item in system.planets)
        {
            var newItem = entityManager.Instantiate(PrefabAccessor.entityTemplateArray[1]);
            entityManager.AddComponent(newItem, typeof(systemSubObjectTag));
            entityManager.SetComponentData(newItem, new Translation { Value = item.position });
        }
        foreach (var item in system.asteroids)
        {
            var newItem = entityManager.Instantiate(PrefabAccessor.entityTemplateArray[2]);
            entityManager.AddComponent(newItem, typeof(systemSubObjectTag));
            entityManager.SetComponentData(newItem, new Translation { Value = item.position });
        }
        foreach (var item in system.connections.Values)
        {
            var newItem = entityManager.Instantiate(PrefabAccessor.entityTemplateArray[4]);
            entityManager.AddComponent(newItem, typeof(systemSubObjectTag));
            entityManager.SetComponentData(newItem, new Translation { Value = item.Position });
        }
        var star = entityManager.Instantiate(PrefabAccessor.entityTemplateArray[3]);
        entityManager.AddComponent(star, typeof(systemSubObjectTag));
        entityManager.SetComponentData(star, new Translation { Value = system.star.position });
        foreach (var ship in system.containedShips.Values)
        {
            ship.CreateEntityFor();
        }
    }
    //End Entity Functions

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
                int numPlanets = UnityEngine.Random.Range(1, 10);
                int numAsteroids = UnityEngine.Random.Range(1, 30);
                GenerateSystemById(point.Id, numPlanets, numAsteroids);
                totPlanets += numPlanets;
                totAsteroids += numAsteroids;
            }

            MonoBehaviour.print("Planets generated: " + totPlanets);
            MonoBehaviour.print("Asteroids generated: " + totAsteroids);
        }
        pathFinder = new Pathfinder(this);
        defaultWorld = World.DefaultGameObjectInjectionWorld;
        entityManager = defaultWorld.EntityManager;
    }


}

public struct systemCloneTag : IComponentData { }
public struct systemSubObjectTag : IComponentData { }


