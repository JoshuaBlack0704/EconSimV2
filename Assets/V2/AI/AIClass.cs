using Assets.V2.AI;
using EconSimV2.Assets.V2.AI.Ships;
using EconSimV2.Assets.V2.GlobalSystems;
using EconSimV2.Assets.V2.SystemManagement;
using EconSimV2.Assets.V2.UniverseDataGeneration;
using System.Collections.Generic;
using System.Linq;
using Unity.Burst;
using Unity.Collections;
using Unity.Entities;
using Unity.Jobs;
using Unity.Transforms;
using UnityEngine;

namespace EconSimV2.Assets.V2.AI
{
    public class AIClass
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
            public AIClass masterAI;
            public UniverseSystem masterSystem;
            public UniquePoint definingPoint;
            public Dictionary<int, UniverseSystem.ConnectionData> connections;
            public Entity star;
            public Entity[] planets;
            public List<Entity> asteroids;
            public float size;

            public AiSystem(AIClass _masterAI, UniverseSystem _masterSystem)
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
                masterAI.knownSystems[Id] = this;
                if ( addUnknowns )
                {
                    foreach ( int connection in connections.Keys )
                    {
                        if ( masterAI.systemsBeingExplored.ContainsKey(connection) != true && masterAI.systemsToExplore.FirstOrDefault(sys => sys.Id == connection) == null && masterAI.knownSystems.ContainsKey(connection) != true )
                        {
                            AddUnknownSystemToAI(connection);
                        }
                    }
                }
                if ( masterAI.systemsBeingExplored.ContainsKey(Id) )
                {
                    masterAI.systemsBeingExplored.Remove(Id);
                }
            }

            public void AddUnknownSystemToAI(int conId)
            {
                masterAI.systemsToExplore.Add(new AiSystem(masterAI, masterSystem.systemWorks.GetSystem(conId)));
            }
        }
        public int Id { get; set; }
        public Universe universe { get; set; }
        public Dictionary<int, Ship> ownedShips { get; set; }
        public List<Ship> unassignedShips { get; set; }
        public Dictionary<int, AiSystem> knownSystems { get; set; }
        public Dictionary<int, AiSystem> systemsBeingExplored { get; set; }
        public List<AiSystem> systemsToExplore { get; set; }

        public void RandomAssignShips()
        {
            for ( int i = 0; i < unassignedShips.Count; i++ )
            {
                Ship ship = unassignedShips[i];
                int randType = Random.Range(0, 2);
                //int randSystem = 0;
                int[] keys = knownSystems.Keys.ToArray();
                int randSystem = keys[Random.Range(0, keys.Length - 1)];
                if ( randType == 0 )
                {
                    ship.SetTargetAndGo(universe.systemWorks.GetSystem(randSystem).planets[Random.Range(0, universe.systemWorks.GetSystem(randSystem).planets.Length)], 1);
                }
                else if ( randType == 1 )
                {
                    ship.SetTargetAndGo(universe.systemWorks.GetSystem(randSystem).asteroids[Random.Range(0, universe.systemWorks.GetSystem(randSystem).asteroids.Count)], 4);
                }
            }
            unassignedShips.Clear();

        }
        internal struct shipTask
        {
            public int index;
            public float distance;

        }
        [BurstCompile]
        internal struct shipDistJob : IJobParallelFor
        {
            public Unity.Mathematics.float3 target;
            public NativeArray<Vector3> positions;
            public NativeArray<float> results;
            public void Execute(int index)
            {
                results[index] = Unity.Mathematics.math.distance(target, positions[index]);
            }
        }
        public void EconomicAssign()
        {
            if ( unassignedShips.Count <= 0 )
            {
                return;
            }
            List<Entity> asteroids = new List<Entity>();
            foreach ( AiSystem sys in knownSystems.Values )
            {
                foreach ( Entity ast in sys.asteroids )
                {
                    asteroids.Add(ast);
                }
            }

            foreach ( Entity asteroid in asteroids )
            {
                if ( unassignedShips.Count <= 0 )
                {
                    return;
                }
                else if ( EconomicMethods.CheckRemainingResource<FoodResource>(asteroid) < 10 )
                {
                    continue;
                }
                shipDistJob job = new shipDistJob();
                NativeArray<Vector3> positions = new NativeArray<Vector3>(unassignedShips.Count, Allocator.TempJob);
                positions.CopyFrom(unassignedShips.Select(o => universe.systemWorks.GetSystem(o.currentSystemId).definingPoint.Position).ToArray());
                NativeArray<float> results = new NativeArray<float>(unassignedShips.Count, Allocator.TempJob);
                job.target = PrefabAccessor.entityManager.GetComponentData<Translation>(asteroid).Value;
                job.positions = positions;
                job.results = results;
                JobHandle handle = job.Schedule(unassignedShips.Count, 1);
                handle.Complete();

                results.OrderBy(o => o);
                while ( true )
                {
                    if ( EconomicMethods.CheckRemainingResource<FoodResource>(asteroid) >= 10 )
                    {
                        unassignedShips[0].SetTargetAndGo(asteroid, 4);
                        unassignedShips.RemoveAt(0);
                    }
                    else { break; }
                    if ( unassignedShips.Count == 0 )
                    {
                        positions.Dispose();
                        results.Dispose();
                        return;
                    }
                }
                positions.Dispose();
                results.Dispose();


            }
            int[] keys = knownSystems.Keys.ToArray();
            foreach ( Ship ship in unassignedShips )
            {
                int randSystem = keys[Random.Range(0, keys.Length - 1)];
                ship.SetTargetAndGo(universe.systemWorks.GetSystem(randSystem).planets[Random.Range(0, universe.systemWorks.GetSystem(randSystem).planets.Length)], 1);

            }
            unassignedShips.Clear();
        }

        public void RandomExploreShips()
        {
            while ( unassignedShips.Count > 0 )
            {
                if ( systemsToExplore.Count == 0 )
                {
                    break;
                }
                AiSystem systemToExplore = systemsToExplore[systemsToExplore.Count - 1];
                systemsBeingExplored[systemToExplore.Id] = systemToExplore;


                Ship ship = unassignedShips[unassignedShips.Count - 1];
                foreach ( Ship item in unassignedShips )
                {
                    if ( item == ship )
                    {
                        continue;
                    }
                    Vector3 itemPos = universe.systemWorks.GetSystem(item.currentSystemId).definingPoint.Position;
                    Vector3 targetPos = systemToExplore.definingPoint.Position;
                    float time = Vector3.Distance(itemPos, targetPos) / item.velocity;
                    Vector3 shipPos = universe.systemWorks.GetSystem(ship.currentSystemId).definingPoint.Position;
                    float currentBestTime = Vector3.Distance(targetPos, shipPos) / ship.velocity;
                    if ( time < currentBestTime )
                    {
                        ship = item;
                    }
                }
                ship.SetTargetAndGo(systemToExplore.star, 2);
                unassignedShips.Remove(ship);


                systemsToExplore.RemoveAt(systemsToExplore.Count - 1);

            }
        }
        public void MasterCall()
        {
            RandomExploreShips();
            EconomicAssign();

        }


        public AIClass(Universe uni, int _startingSystem, int numStatingShips, bool exploredAllSystems = false)
        {
            Id = AiStaticData.maxAiId;
            AiStaticData.maxAiId++;
            universe = uni;
            ownedShips = new Dictionary<int, Ship>();
            unassignedShips = new List<Ship>();
            knownSystems = new Dictionary<int, AiSystem>();
            systemsBeingExplored = new Dictionary<int, AiSystem>();
            systemsToExplore = new List<AiSystem>();
            //Build ai system data base
            if ( exploredAllSystems )
            {
                foreach ( int systemKey in uni.masterPointsDatabase.Keys )
                {
                    UniverseSystem system = uni.systemWorks.GetSystem(systemKey);
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
            for ( int i = 0; i < numStatingShips; i++ )
            {
                Ship newShip = new Ship(new Vector3 { x = Random.Range(0, Startsystem.size), y = Random.Range(0, Startsystem.size), z = Random.Range(0, Startsystem.size) }, uni.systemWorks.entityManager, Startsystem.Id, this);
                ownedShips.Add(newShip.Id, newShip);
                unassignedShips.Add(newShip);
            }

        }

    }
}

namespace Assets.V2.AI
{
    public static class AiStaticData
    {
        public static int maxAiId = 0;
    }
}