using ECSTesting.ECSWorks;
using ECSTesting.Objects;
using Unity.Collections;
using Unity.Entities;
using Unity.Jobs;
using Unity.Mathematics;
using Unity.Transforms;
using UnityEngine;

namespace ECSTesting.Entites
{
    using ECSTesting.Components.Ships;
    using SysComps = ECSTesting.Components.Systems;
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
            typeof(Translation), typeof(Id), typeof(MovementData), typeof(SystemID)
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
                em.SetComponentData(ship, new SystemID() { Id = systemCode });
                em.SetComponentData(ship, new MovementData() { velocity = velocity, vector = vect });
                em.AddComponent<Tickets.TimeData>(ship);
                em.AddComponent<TargetPos>(ship);
                em.AddComponentData(ship, new Idle() { isIdle = true });
                em.AddComponentData(ship, new ShipAIData() { aiCode = aiOwner.Id });
            }
        }

        public static void GenerateShipsForAll(int shipsPerSystem)
        {
            EntityQuery query = em.CreateEntityQuery(typeof(SysComps.Id));
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
                    em.SetComponentData(ship, new SystemID() { Id = sysId });
                    em.SetComponentData(ship, new MovementData() { velocity = velocity, vector = vect });
                    em.AddComponent<Tickets.TimeData>(ship);
                    em.AddComponent<TargetPos>(ship);
                    em.AddComponentData(ship, new Idle() { isIdle = true });
                }
            }
        }
        //Old spawner
        //public static void SpawnShips(Entity[] shipsToSpawn)
        //{
        //    foreach (var ship in shipsToSpawn)
        //    {
        //        var pos = em.GetComponentData<Translation>(ship);
        //        var moveData = em.GetComponentData<MovementData>(ship);
        //        var Ship = em.Instantiate(SB.shipClone);
        //        var Id = em.GetComponentData<Id>(ship);
        //        var targetPos = em.GetComponentData<TargetPos>(Ship).position;

        //        var spawnPos = Vector3.Lerp(pos.Value, targetPos, Mathf.InverseLerp(write.time, exe.time, SB.masterTime));

        //        em.SetComponentData<Translation>(Ship, new Translation() { Value = spawnPos});
        //        em.AddComponent<CloneTag>(Ship);
        //        em.AddComponentData<MovementData>(Ship, moveData);
        //        em.AddComponentData<Id>(Ship, Id);
        //        em.AddComponentData<CloneData>(Ship, new CloneData() { masterShip = ship });
        //    }
        //}


    }


}

namespace ECSTesting.Systems.Ships
{
    using ECSTesting.Components.Ships;
    [UpdateInGroup(typeof(LateSimulationSystemGroup))]
    public class ShipCloneAnimator : SystemBase
    {
        EntityCommandBufferSystem ecbs;
        protected override void OnCreate()
        {
            base.OnCreate();
            ecbs = World.GetOrCreateSystem<EndSimulationEntityCommandBufferSystem>();
        }

        protected override void OnUpdate()
        {
            EntityCommandBuffer.ParallelWriter ecb = ecbs.CreateCommandBuffer().AsParallelWriter();
            float step = SB.masterDeltaTime;

            JobHandle updateHandle = Entities.WithName("AnimatorPreUpdate").WithAll<Id>().ForEach((int entityInQueryIndex, in MovementData moveData, in HasClone clone, in Idle idle) =>
            {

                if ( idle.isIdle == false )
                {
                    ecb.SetComponent(entityInQueryIndex, clone.clone, moveData);
                    ecb.SetComponent(entityInQueryIndex, clone.clone, new Idle() { isIdle = idle.isIdle });
                }

            }).ScheduleParallel(Dependency);


            JobHandle animateHandle = Entities.WithAll<Id, CloneTag>().ForEach((ref Translation trans, ref Rotation rot, in MovementData moveData, in CloneData cloneData, in Idle idle) =>
            {
                if ( idle.isIdle == false )
                {
                    trans.Value += moveData.vector * moveData.velocity * step;
                    rot = new Rotation() { Value = quaternion.LookRotation(moveData.vector, math.up()) };
                }
            }).ScheduleParallel(updateHandle);

            Dependency = JobHandle.CombineDependencies(updateHandle, animateHandle);

            ecbs.AddJobHandleForProducer(Dependency);
        }
    }

    public class ShipTicketExecutor : SystemBase
    {
        EntityCommandBufferSystem ecbs;
        public int ticketsExecutedPerFrame;
        EntityManager em;
        EntityQuery pulltickets;
        public int total = 0;

        protected override void OnCreate()
        {
            base.OnCreate();
            ecbs = World.GetOrCreateSystem<EndSimulationEntityCommandBufferSystem>();
            em = World.DefaultGameObjectInjectionWorld.EntityManager;
            pulltickets = em.CreateEntityQuery(ComponentType.ReadOnly<Tickets.TimeData>());
        }

        protected override void OnUpdate()
        {
            EntityCommandBuffer.ParallelWriter ecb = ecbs.CreateCommandBuffer().AsParallelWriter();
            float time = SB.masterTime;
            var ticketArray = World.DefaultGameObjectInjectionWorld.GetExistingSystem<BatchedCollections>().ticketCounter;

            Entities.WithAll<MoveMission>().WithNone<HasClone>().ForEach((Entity ship, int entityInQueryIndex, ref Translation pos, ref Idle idle, ref MovementData moveData, in Tickets.TimeData exe, in TargetPos targetPos) =>
            {
                if ( exe.timeAtExecute < time )
                {
                    pos.Value = targetPos.position;
                    moveData.vector = new float3();
                    idle.isIdle = true;
                }
            }).ScheduleParallel();

            Entities.WithAll<MoveMission>().ForEach((Entity ship, int entityInQueryIndex, ref Translation pos, ref Idle idle, ref MovementData moveData, in Tickets.TimeData exe, in TargetPos targetPos, in HasClone clone) =>
            {
                if ( exe.timeAtExecute < time )
                {
                    pos.Value = targetPos.position;
                    idle.isIdle = true;
                    moveData.vector = new float3();
                    ecb.SetComponent(entityInQueryIndex, clone.clone, pos);
                }
            }).ScheduleParallel();

            Entities.WithNativeDisableParallelForRestriction(ticketArray).ForEach((int nativeThreadIndex, in Tickets.TimeData timeData) =>
            {
                if ( timeData.timeAtExecute < time )
                {
                    ticketArray[nativeThreadIndex]++;
                }
            }).ScheduleParallel();

            ecbs.AddJobHandleForProducer(Dependency);
        }
    }

    [UpdateInGroup(typeof(InitializationSystemGroup))]
    public class ShipCloneDeleter : SystemBase
    {
        EntityCommandBufferSystem ecbs;

        protected override void OnCreate()
        {
            base.OnCreate();
            ecbs = World.GetOrCreateSystem<EndSimulationEntityCommandBufferSystem>();
        }

        protected override void OnUpdate()
        {
            EntityCommandBuffer.ParallelWriter ecb = ecbs.CreateCommandBuffer().AsParallelWriter();
            Entities.WithAll<BaseEntity.DeleteCloneTag>().ForEach((Entity clone, int entityInQueryIndex, in CloneData master) =>
            {
                ecb.RemoveComponent<HasClone>(entityInQueryIndex, master.masterShip);
                ecb.DestroyEntity(entityInQueryIndex, clone);
            }).ScheduleParallel();
            ecbs.AddJobHandleForProducer(Dependency);
            ecbs.Update();
        }
    }

    public class ShipCloneSpawner : SystemBase
    {
        EntityCommandBufferSystem ecbs;


        protected override void OnCreate()
        {
            base.OnCreate();
            ecbs = World.GetOrCreateSystem<EndSimulationEntityCommandBufferSystem>();
        }



        protected override void OnUpdate()
        {
            EntityCommandBuffer.ParallelWriter ecb = ecbs.CreateCommandBuffer().AsParallelWriter();
            Entity shipClone = SB.shipClone;
            float time = SB.masterTime;

            Entities.WithAll<BaseEntity.SpawnCloneTag>().ForEach((Entity ship, int entityInQueryIndex, in Id Id, in Translation pos, in MovementData moveData, in TargetPos targetPosData, in Tickets.TimeData timeData, in Idle idle) =>
            {
                if ( idle.isIdle )
                {
                    Entity clone = ecb.Instantiate(entityInQueryIndex, shipClone);

                    ecb.SetComponent(entityInQueryIndex, clone, pos);
                    ecb.AddComponent<CloneTag>(entityInQueryIndex, clone);
                    ecb.AddComponent(entityInQueryIndex, clone, moveData);
                    ecb.AddComponent(entityInQueryIndex, clone, Id);
                    ecb.AddComponent(entityInQueryIndex, clone, new CloneData() { masterShip = ship });
                    ecb.AddComponent(entityInQueryIndex, ship, new HasClone() { clone = clone });
                    ecb.AddComponent(entityInQueryIndex, clone, new Idle() { isIdle = idle.isIdle });
                    ecb.RemoveComponent<BaseEntity.SpawnCloneTag>(entityInQueryIndex, ship);
                }
                else
                {
                    Entity clone = ecb.Instantiate(entityInQueryIndex, shipClone);
                    float3 targetPos = targetPosData.position;

                    Vector3 spawnPos = Vector3.Lerp(pos.Value, targetPos, Mathf.InverseLerp(timeData.timeAtWrite, timeData.timeAtExecute, time));

                    ecb.SetComponent(entityInQueryIndex, clone, new Translation() { Value = spawnPos });
                    ecb.AddComponent<CloneTag>(entityInQueryIndex, clone);
                    ecb.AddComponent(entityInQueryIndex, clone, moveData);
                    ecb.AddComponent(entityInQueryIndex, clone, Id);
                    ecb.AddComponent(entityInQueryIndex, clone, new CloneData() { masterShip = ship });
                    ecb.AddComponent(entityInQueryIndex, ship, new HasClone() { clone = clone });
                    ecb.AddComponent(entityInQueryIndex, clone, new Idle() { isIdle = idle.isIdle });
                    ecb.RemoveComponent<BaseEntity.SpawnCloneTag>(entityInQueryIndex, ship);
                }


            }).ScheduleParallel();

            ecbs.AddJobHandleForProducer(Dependency);

        }
    }
}

namespace ECSTesting.Components.Ships
{
    public struct Id : IComponentData, IIdTag
    {
        public int id { get; set; }
    }
    public struct MovementData : IComponentData
    {
        public float velocity;
        public float3 vector;
    }
    public struct TargetPos : IComponentData
    {
        public float3 position;
    }
    public struct Idle : IComponentData { public bool isIdle; }
    public struct HasClone : IComponentData { public Entity clone; }
    public struct MoveMission : IComponentData { }
    public struct CloneData : IComponentData { public Entity masterShip; }


    public struct WaypointBuffer : IBufferElementData
    {
        public int nextSystemId;
        public float3 nextWormholePos;
    }
    public struct TravelData : IComponentData
    {
        public float3 targetPos;

    }

    public struct ShipAIData : IComponentData
    {
        public int aiCode;
    }
}
