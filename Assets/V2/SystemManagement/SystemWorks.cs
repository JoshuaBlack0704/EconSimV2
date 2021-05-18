using EconSimV2.Assets.V2.AI.Ships;
using EconSimV2.Assets.V2.GlobalSystems;
using EconSimV2.Assets.V2.PathfindingSystems;
using EconSimV2.Assets.V2.UniverseDataGeneration;
using System.Collections.Generic;
using Unity.Collections;
using Unity.Entities;
using Unity.Transforms;
using UnityEngine;

namespace EconSimV2.Assets.V2.SystemManagement
{
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
            if ( systemDatabase.TryGetValue(Id, out system) )
            {
                //system = systemDatabase[Id];
                if ( system.Id != Id )
                {
                    Debug.LogError("here");
                }
                return system;
            }
            int numPlanets = Random.Range(1, 10);
            int numAsteroids = Random.Range(1, 30);
            return GenerateSystemById(Id, numPlanets, numAsteroids);
        }
        public void SetSystem(int Id, UniverseSystem system)
        {
            systemDatabase[Id] = system;
        }
        public List<int> GetPath(int start, int end, Ship ship = null)
        {
            if ( ship == null )
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
            foreach ( Entity entity in entitesToDestroy )
            {
                entityManager.DestroyEntity(entity);
            }
            entitesToDestroy.Dispose();
            foreach ( Ship ship in GetSystem(masterUniverse.selectedSystem).containedShips.Values )
            {
                ship.DestoryEntityFor();
            }


            foreach ( UniquePoint system in masterUniverse.masterPointsDatabase.Values )
            {
                Entity newSystem = entityManager.Instantiate(PrefabAccessor.entityTemplateArray[0]);
                entityManager.AddComponent(newSystem, typeof(systemCloneTag));
                entityManager.SetComponentData(newSystem, new Translation { Value = system.Position });
            }
            masterUniverse.inSystem = false;
        }
        public void EnterSystem(int Id)
        {
            EntityQueryDesc query = new EntityQueryDesc() { Any = new ComponentType[] { typeof(systemCloneTag), typeof(systemSubObjectTag) } };
            NativeArray<Entity> entitesToDestroy = entityManager.CreateEntityQuery(query).ToEntityArray(Allocator.TempJob);
            foreach ( Entity entity in entitesToDestroy )
            {
                entityManager.DestroyEntity(entity);
            }
            entitesToDestroy.Dispose();

            UniverseSystem system = GetSystem(Id);

            foreach ( Entity item in system.planets )
            {
                Entity newItem = entityManager.Instantiate(PrefabAccessor.entityTemplateArray[1]);
                entityManager.AddComponent(newItem, typeof(systemSubObjectTag));
                entityManager.AddComponentData(newItem, new planetId() { id = entityManager.GetComponentData<planetId>(item).id });
                entityManager.SetComponentData(newItem, new Translation { Value = PrefabAccessor.entityManager.GetComponentData<Translation>(item).Value });
            }
            foreach ( Entity item in system.asteroids )
            {
                Entity newItem = entityManager.Instantiate(PrefabAccessor.entityTemplateArray[2]);
                entityManager.AddComponent(newItem, typeof(systemSubObjectTag));
                entityManager.AddComponentData(newItem, new asteroidId() { id = entityManager.GetComponentData<asteroidId>(item).id });
                entityManager.SetComponentData(newItem, new Rotation() { Value = EconomicMethods.rand.NextQuaternionRotation() });
                entityManager.SetComponentData(newItem, new Translation { Value = PrefabAccessor.entityManager.GetComponentData<Translation>(item).Value });
            }
            foreach ( UniverseSystem.ConnectionData item in system.connections.Values )
            {
                Entity newItem = entityManager.Instantiate(PrefabAccessor.entityTemplateArray[4]);
                entityManager.AddComponent(newItem, typeof(systemSubObjectTag));
                entityManager.SetComponentData(newItem, new Translation { Value = item.Position });
            }
            Entity star = entityManager.Instantiate(PrefabAccessor.entityTemplateArray[3]);
            entityManager.AddComponent(star, typeof(systemSubObjectTag));
            entityManager.SetComponentData(star, new Translation { Value = PrefabAccessor.entityManager.GetComponentData<Translation>(system.star).Value });
            foreach ( Ship ship in system.containedShips.Values )
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
            if ( generateAllSystems )
            {
                int totPlanets = 0;
                int totAsteroids = 0;
                foreach ( UniquePoint point in masterUniverse.masterPointsDatabase.Values )
                {
                    int numPlanets = Random.Range(1, 10);
                    int numAsteroids = Random.Range(1, 30);
                    GenerateSystemById(point.Id, numPlanets, numAsteroids);
                    totPlanets += numPlanets;
                    totAsteroids += numAsteroids;
                }

                print("Planets generated: " + totPlanets);
                print("Asteroids generated: " + totAsteroids);
            }
            pathFinder = new Pathfinder(this);
            defaultWorld = World.DefaultGameObjectInjectionWorld;
            entityManager = defaultWorld.EntityManager;
        }


    }

    public struct systemCloneTag : IComponentData { }
    public struct systemSubObjectTag : IComponentData { }
}