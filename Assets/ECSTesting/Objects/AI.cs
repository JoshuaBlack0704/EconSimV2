using Unity.Entities;
using Unity.Mathematics;
using Unity.Collections;
using System.Linq;
using UnityEngine;
using System.Collections.Generic;


namespace ECSTesting.Objects
{
    using shipComps = ECSTesting.Components.Ships;
    using sysComps = ECSTesting.Components.Systems;
    using plnComps = ECSTesting.Components.Planets;
    using astComps = ECSTesting.Components.Asteroids;
    using timeData = ECSTesting.Components.Tickets;
    using ECSTesting.Components.Missions.AIMissions;
    using ECSTesting.Entites;
    using Unity.Transforms;
    using ECSTesting.Components.Missions;
    using Unity.Jobs;
    using ECSTesting.Components;

    public class AI
    {
        public int Id;
        static EntityManager em = SB.em;
        public NativeList<Entity> ownedShips;
        public NativeList<Entity> knownSystems;

        public AI(GenerationSettings generationSettings, int StartingSystem)
        {
            EntityQueryDesc queryDesc = new EntityQueryDesc() { All = new ComponentType[] { ComponentType.ReadOnly<sysComps.Id>()}, None = new ComponentType[] { typeof(CloneTag)} };
            var query = em.CreateEntityQuery(queryDesc);
            var systems = query.ToEntityArray(Allocator.Temp);
            knownSystems = new NativeList<Entity>(systems.Length, Allocator.Persistent);
            knownSystems.CopyFrom(systems);
            systems.Dispose();
            Ships.GenerateShipsFor(StartingSystem, this, generationSettings, out NativeArray<Entity> ships);
            ownedShips = new NativeList<Entity>(Allocator.Persistent);
            ownedShips.CopyFrom(ships);
            ships.Dispose();
        }

        Entity ProduceRandomTargetForSystem()
        {
            var randomIndex = SB.rand.NextInt(0, knownSystems.Length);
            var system = knownSystems[randomIndex];
            var randomType = SB.rand.NextInt(0, 2);
            if ( randomType == 0 )
            {
                Planets.FindPlanetsForSystem(system, out Entity[] targets);
                Debug.Log($"Targets Length: {targets.Length}");
                randomIndex = SB.rand.NextInt(0, targets.Length);
                return targets[randomIndex];
            }
            else if ( randomType == 1 )
            {
                Asteroids.FindAsteroidsForSystem(system, out Entity[] targets);
                Debug.Log($"Targets Length: {targets.Length}");
                randomIndex = SB.rand.NextInt(0, targets.Length);
                return targets[randomIndex];
            }
            else
            {
                throw new System.Exception("SB.rand not working correctly");
            }

        }

        Entity ProduceRandomTargetForSystem(int systemID)
        {
            var randomType = SB.rand.NextInt(0, 2);
            int randomIndex;
            Entity[] targets;
            if ( randomType == 0 )
            {
                Planets.FindPlanetsForSystem(systemID, out targets);
                randomIndex = SB.rand.NextInt(0, targets.Length);
                return targets[randomIndex];
            }
            else if ( randomType == 1 )
            {
                Asteroids.FindAsteroidsForSystem(systemID, out targets);
                randomIndex = SB.rand.NextInt(0, targets.Length);
                return targets[randomIndex];
            }
            else
            {
                throw new System.Exception("SB.rand not working correctly");
            }

        }

        Entity ProduceRandomTarget()
        {
            var planetQueryDesc = new EntityQueryDesc() { All = new ComponentType[] { typeof(plnComps.Id) }, None = new ComponentType[] { typeof(CloneTag) } };
            var asteroidQueryDesc = new EntityQueryDesc() { All = new ComponentType[] { typeof(astComps.Id) }, None = new ComponentType[] { typeof(CloneTag) } };
            var planetQuery = em.CreateEntityQuery(planetQueryDesc);
            var asteroidQuery = em.CreateEntityQuery(asteroidQueryDesc);

            var randomType = SB.rand.NextInt(0, 2);
            int randomIndex;
            if ( randomType == 0 )
            {
                var targets = planetQuery.ToEntityArrayAsync(Allocator.TempJob, out JobHandle handle);
                handle.Complete();
                randomIndex = SB.rand.NextInt(0, targets.Length);
                var target = targets[randomIndex];
                targets.Dispose();
                return target;
            }
            else if ( randomType == 1 )
            {
                var targets = asteroidQuery.ToEntityArrayAsync(Allocator.TempJob, out JobHandle handle);
                handle.Complete();
                randomIndex = SB.rand.NextInt(0, targets.Length);
                var target = targets[randomIndex];
                targets.Dispose();
                return target;
            }
            else
            {
                throw new System.Exception("SB.rand not working correctly");
            }
        }

        public void RandomTravel(bool stayInSystem = false)
        {
            

            var idleShipsQuery = from ship in ownedShips.ToArray()
                                 where !em.HasComponent<timeData.TimeData>(ship)
                                 select ship;

            if ( stayInSystem == false )
            {
                foreach ( var ship in idleShipsQuery )
                {
                    var target = ProduceRandomTarget();
                    var targetPos = em.GetComponentData<Translation>(target).Value;
                    var systemID = em.GetComponentData<SystemID>(target).id;
                    Ships.ExecuteMission(ship, target, new RandomTravel() { target = target, targetPos = targetPos, targetSystem = systemID }, this);
                }
            }
            else
            {
                foreach ( var ship in idleShipsQuery )
                {
                    var target = ProduceRandomTargetForSystem(em.GetComponentData<SystemID>(ship).id);
                    var targetPos = em.GetComponentData<Translation>(target).Value;
                    var systemID = em.GetComponentData<SystemID>(target).id;
                    Ships.ExecuteMission(ship, target, new RandomTravel() { target = target, targetPos = targetPos, targetSystem = systemID }, this);
                }
            }
        }
    }

    
}


namespace ECSTesting.Components.Missions.AIMissions
{
    public struct RandomTravel : IComponentData, IMission
    {
        public Entity target;
        public float3 targetPos { get; set; }
        public int targetSystem;
    }
}



namespace ECSTesting.Components.Missions
{
    public struct MissionWrapper<T> : IComponentData where T : struct, IComponentData, IMission
    {
        public T mission;
    }
}

namespace ECSTesting.Components.Missions.ShipsMissions
{
    public struct WarpMission : IComponentData
    {

    }

    
}

namespace ECSTesting.Components.Missions
{
    public interface IMission { public float3 targetPos { get; set; } }
}

namespace ECSTesting.Components.Ships
{
    public struct waypointData : IComponentData
    {
        public int wormholeToID;
        public float3 exitWormholePos;
        public float3 postWarpSpawn;
    }
    public struct WaypointBuffer : IBufferElementData
    {
        public waypointData data;
    }
    public struct TravelData : IComponentData
    {
        public float3 targetPos;

    }
}


