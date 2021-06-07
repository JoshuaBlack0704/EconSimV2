using Unity.Collections;
using Unity.Entities;
using Unity.Jobs;
using Unity.Mathematics;
using Unity.Transforms;
using UnityEngine;
using System.Linq;
using ECSTesting.DebugOperations;

[assembly: RegisterGenericComponentType(typeof(ECSTesting.Components.Missions.MissionWrapper<ECSTesting.Components.Missions.AIMissions.RandomTravel>))]

namespace ECSTesting.Entites
{
    using Components.Ships;
    using Components.Missions;
    using Components.Missions.ShipsMissions;
    using Components.Tickets;
    using SysComps = Components.Systems;
    using PathFinder = DataOps.EntityPathFinder;
    using ECSTesting.Objects;
    using ECSTesting.Components;

    public static class Ships
    {
        static EntityManager em = SB.em;
        static EntityArchetype shipArc;
        static int maxShipID = 0;

        //ShipInitializer
        public static void Initialize()
        {
            shipArc = em.CreateArchetype(new ComponentType[]
            {
            typeof(Translation), typeof(Id), typeof(MovementData), typeof(CurrentSystemID), typeof(WaypointBuffer)
            });
        }

        public static void GenerateShipsFor(int systemCode, AI aiOwner, GenerationSettings genSettings, out NativeArray<Entity> newShips)
        {
            int count = genSettings.shipsPerSystem;
            newShips = new NativeArray<Entity>(count, Allocator.Temp);
            em.CreateEntity(shipArc, newShips);

            for ( int i = 0; i < newShips.Length; i++ )
            {
                var ship = newShips[i];

                float3 pos = SB.rand.NextFloat3(0, 100);
                float3 vect = SB.rand.NextFloat3Direction();
                float velocity = SB.rand.NextFloat(10, 50);
                em.SetComponentData(ship, new Id() { id = maxShipID });
                maxShipID++;
                em.SetComponentData(ship, new Translation() { Value = pos });
                em.SetComponentData(ship, new CurrentSystemID() { id = systemCode });
                em.SetComponentData(ship, new MovementData() { velocity = velocity, vector = vect });
                em.AddComponentData(ship, new ShipAIData() { aiCode = aiOwner.Id });
            }
        }

        public static void GenerateShipsForAll(int shipsPerSystem)
        {
            EntityQuery query = em.CreateEntityQuery(ComponentType.ReadOnly<SysComps.Id>());
            NativeArray<Entity> systems = query.ToEntityArray(Allocator.Temp);

            foreach ( Entity system in systems )
            {
                float size = em.GetComponentData<SysComps.SystemData>(system).size;
                int sysId = em.GetComponentData<SysComps.Id>(system).id;

                for ( int i = 0; i < shipsPerSystem; i++ )
                {
                    Entity ship = em.CreateEntity(shipArc);
                    float3 pos = SB.rand.NextFloat3(0, size);
                    float3 vect = SB.rand.NextFloat3Direction();
                    float velocity = SB.rand.NextFloat(10, 50);
                    em.SetComponentData(ship, new Id() { id = maxShipID });
                    maxShipID++;
                    em.SetComponentData(ship, new Translation() { Value = pos });
                    em.SetComponentData(ship, new CurrentSystemID() { id = sysId });
                    em.SetComponentData(ship, new MovementData() { velocity = velocity, vector = vect });
                    em.AddComponent<TimeData>(ship);
                    em.AddComponentData(ship, new Idle() { isIdle = true });
                }
            }
        }

        public static void ExecuteMission<T>(Entity ship, Entity targetObject, T mission, AI ai, bool intBased = false) where T : struct, IComponentData, IMission
        {
            var totalTime = new System.Diagnostics.Stopwatch();
            var pathingTime = new System.Diagnostics.Stopwatch();
            totalTime.Start();
            
            int end;
            if ( em.HasComponent<SysComps.Id>(targetObject) )
            {
                end = em.GetComponentData<SysComps.Id>(targetObject).id;
            }
            else if ( em.HasComponent<CurrentSystemID>(targetObject) )
            {
                end = em.GetComponentData<CurrentSystemID>(targetObject).id;
            }
            else
            {
                throw new System.Exception("Ship is targeting an object with no known current System ID");
            }

            int start = em.GetComponentData<CurrentSystemID>(ship).id;

            if ( start != end )
            {
                //Create Waypoints
                var tempArray = new NativeArray<Entity>(1, Allocator.Temp);
                pathingTime.Start();
                PathFinder.GetEntityPath(start, end, ai.knownSystems, tempArray, false, out NativeArray<Entity> path);
                pathingTime.Stop();
                var waypointBuffer = em.GetBuffer<WaypointBuffer>(ship).Reinterpret<waypointData>();
                waypointBuffer.Clear();
                int nextEntityID;
                Entity nextEntity;
                int previousEntityID;
                Entity previousEntity;
                waypointData data;
                float3 systemPos;
                float3 despawnPos = new float3();

                for ( int i = 0; i < path.Length-1; i++ )
                {
                    //We start at the destination system to get our final warp spawn pos
                    nextEntity = path[i];
                    nextEntityID = em.GetComponentData<SysComps.Id>(nextEntity).id;
                    previousEntity = path[i + 1];
                    previousEntityID = em.GetComponentData<SysComps.Id>(previousEntity).id;
                    systemPos = em.GetBuffer<SysComps.ePointConnnectionBuffer>(nextEntity).AsNativeArray().First(entry => entry.connection.target == previousEntityID).connection.position;
                    despawnPos = em.GetBuffer<SysComps.ePointConnnectionBuffer>(previousEntity).AsNativeArray().First(exit => exit.connection.target == nextEntityID).connection.position;

                    data = new waypointData() { wormholeToID = nextEntityID, despawnPos = despawnPos, SpawnPos = systemPos, wormholeFromID = previousEntityID};

                    waypointBuffer.Add(data);
                }

                em.AddComponentData<WarpMission>(ship, new WarpMission());
                em.AddComponentData<TimeData>(ship, new TimeData());
                em.AddComponentData(ship, mission);

                path.Dispose();
                tempArray.Dispose();
            }
            else
            {
                float3 shipPos = em.GetComponentData<Translation>(ship).Value;
                var preMoveData = em.GetComponentData<MovementData>(ship);
                var timeToIntersect = math.distance(shipPos, mission.targetPos) / preMoveData.velocity;
                em.AddComponentData<TimeData>(ship, new TimeData() { timeAtWrite = 0, timeAtExecute = 0 });
                em.AddComponentData(ship, mission);
                em.SetComponentData<MovementData>(ship, new MovementData() { vector = math.normalize(mission.targetPos - shipPos), velocity = preMoveData.velocity });
            }
            totalTime.Stop();
            Debug.Log($"Generated path. Elapsed Time: {pathingTime.Elapsed}");
            Debug.Log($"Executed Mission. Elapsed Time: {totalTime.Elapsed}");
        }

    }
}


