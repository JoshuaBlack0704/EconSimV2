using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ECSTesting.Systems.Ships
{
    using ECSTesting.Components.Ships;
    using ECSTesting.Components.Tickets;
    using ECSTesting.GlobalAccess;
    using Unity.Entities;
    using Unity.Jobs;
    using Unity.Mathematics;
    using Unity.Transforms;
    using UnityEngine;

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

