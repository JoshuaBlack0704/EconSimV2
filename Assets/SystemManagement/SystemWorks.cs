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
    public UniverseSystem GenerateSystemById(int Id, int numPlanets, int numAsteroids)
    {
        UniverseSystem newSystem = new UniverseSystem(this, Id, masterUniverse.masterPointsDatabase[Id], numPlanets, numAsteroids);

        return newSystem;
    }

    /// <summary>
    /// Will retrive and if needed auto generate a system to return
    /// </summary>
    /// <param name="Id">Needed system Id</param>
    /// <returns>Needed System</returns>
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
        return GenerateSystemById(Id, numPlanets, numAsteroids);
    }
    public void SetSystem(int Id, UniverseSystem system)
    {
        systemDatabase[Id] = system;
    }
    public List<int> GetPath(int start, int end, Ship ship = null)
    {
        if (ship==null)
        {
            return pathFinder.GetPath(start, end);

        }
        else
        {
            return pathFinder.GetPathForInput(start, end, ship.masterAI.knownSystems, ship.masterAI.systemsBeingExplored, ship.missionType);
        }
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
        masterUniverse.inSystem = false;
    }
    public void EnterSystem(int Id)
    {
        EntityQueryDesc query = new EntityQueryDesc() { Any = new ComponentType[] { typeof(systemCloneTag), typeof(systemSubObjectTag) } };
        NativeArray<Entity> entitesToDestroy = entityManager.CreateEntityQuery(query).ToEntityArray(Allocator.TempJob);
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
            entityManager.SetComponentData(newItem, new Translation { Value = PrefabAccessor.entityManager.GetComponentData<Translation>(item).Value });
        }
        foreach (var item in system.asteroids)
        {
            var newItem = entityManager.Instantiate(PrefabAccessor.entityTemplateArray[2]);
            entityManager.AddComponent(newItem, typeof(systemSubObjectTag));
            entityManager.SetComponentData(newItem, new Translation { Value = PrefabAccessor.entityManager.GetComponentData<Translation>(item).Value });
        }
        foreach (var item in system.connections.Values)
        {
            var newItem = entityManager.Instantiate(PrefabAccessor.entityTemplateArray[4]);
            entityManager.AddComponent(newItem, typeof(systemSubObjectTag));
            entityManager.SetComponentData(newItem, new Translation { Value = item.Position });
        }
        var star = entityManager.Instantiate(PrefabAccessor.entityTemplateArray[3]);
        entityManager.AddComponent(star, typeof(systemSubObjectTag));
        entityManager.SetComponentData(star, new Translation { Value = PrefabAccessor.entityManager.GetComponentData<Translation>(system.star).Value });
        foreach (var ship in system.containedShips.Values)
        {
            ship.CreateEntityFor();
        }
        masterUniverse.inSystem = true;
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


