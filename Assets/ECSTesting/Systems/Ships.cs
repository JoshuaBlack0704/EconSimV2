using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ECSTesting.Systems.Ships
{
    using ECSTesting.Components.Ships;
    using ECSTesting.Components.Tickets;
    using ECSTesting.Components.Missions.ShipsMissions;
    using aiMissions = ECSTesting.Components.Missions.AIMissions;
    using globals = ECSTesting.GlobalAccess;
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

            Entities.WithAll<TimeData>().WithName("AnimatorPreUpdate").WithAll<Id>().ForEach((int entityInQueryIndex, in MovementData moveData, in HasClone clone) =>
            {

                ecb.SetComponent(entityInQueryIndex, clone.clone, moveData);

            }).ScheduleParallel();


            Entities.WithAll<Id, CloneTag>().ForEach((ref Translation trans, ref Rotation rot, in MovementData moveData, in CloneData cloneData) =>
            {
                trans.Value += moveData.vector * moveData.velocity * step;
                rot = new Rotation() { Value = quaternion.LookRotation(moveData.vector, math.up()) };
            }).ScheduleParallel();


            ecbs.AddJobHandleForProducer(Dependency);
        }
    }

    public partial class ShipTicketExecutor : SystemBase
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
            pulltickets = em.CreateEntityQuery(ComponentType.ReadOnly<TimeData>());
        }

        protected override void OnUpdate()
        {
            EntityCommandBuffer.ParallelWriter ecb = ecbs.CreateCommandBuffer().AsParallelWriter();
            float time = SB.masterTime;
            var ticketArray = World.DefaultGameObjectInjectionWorld.GetExistingSystem<globals.BatchedCollections>().ticketCounter;

            Entities.WithAll<WarpMission>().ForEach((Entity ship, int entityInQueryIndex, ref DynamicBuffer<WaypointBuffer> waypoints, ref Translation pos, ref MovementData moveData, ref TimeData timeData, ref TargetPos targetPos) => 
            {
                if ( timeData.timeAtExecute<time )
                {
                    if ( waypoints.Length >= 1 )
                    {
                        var bufferData = waypoints[waypoints.Length - 1];
                        var nextPos = bufferData.data.postWarpSpawn;
                        var nextTarget = bufferData.data.exitWormholePos;

                        pos.Value = nextPos;
                        targetPos.position = nextTarget;
                        moveData.vector = math.normalize(nextTarget-nextPos);
                        timeData.timeAtWrite = time;
                        timeData.timeAtExecute = math.distance(nextTarget, nextPos) / moveData.velocity;
                        waypoints.RemoveAt(waypoints.Length - 1);
                    }
                    else
                    {
                        ecb.RemoveComponent<WarpMission>(entityInQueryIndex, ship);
                        timeData.timeAtExecute = 0;
                    }
                    
                }
            }).ScheduleParallel();

            Entities.WithNone<WarpMission>().ForEach((Entity ship, int entityInQueryIndex, ref Translation pos, ref MovementData moveData, ref TimeData timeData, ref TargetPos targetPos, in aiMissions.RandomTravel mission) => 
            {
                if ( timeData.timeAtExecute == 0 )
                {
                    moveData.vector = math.normalize(mission.targetPos - pos.Value);
                    targetPos.position = mission.targetPos;
                    timeData.timeAtWrite = time;
                    timeData.timeAtExecute = time + math.distance(mission.targetPos, pos.Value) / moveData.velocity;
                }
                else if ( timeData.timeAtExecute < time )
                {
                    pos.Value = mission.targetPos;
                    ecb.RemoveComponent<aiMissions.RandomTravel>(entityInQueryIndex, ship);
                    ecb.RemoveComponent<TimeData>(entityInQueryIndex, ship);
                    moveData.vector = new float3();
                }
            }).ScheduleParallel();


#if DEBUG
            Entities.WithNativeDisableParallelForRestriction(ticketArray).ForEach((int nativeThreadIndex, in TimeData timeData) =>
            {
                if ( timeData.timeAtExecute < time )
                {
                    ticketArray[nativeThreadIndex]++;
                }
            }).ScheduleParallel();
#endif
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
            Entities.WithAll<globals.BaseEntity.DeleteCloneTag>().ForEach((Entity clone, int entityInQueryIndex, in CloneData master) =>
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

            Entities.WithAll<globals.BaseEntity.SpawnCloneTag>().ForEach((Entity ship, int entityInQueryIndex, in Id Id, in Translation pos, in MovementData moveData, in TargetPos targetPosData, in TimeData timeData) =>
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
                ecb.RemoveComponent<globals.BaseEntity.SpawnCloneTag>(entityInQueryIndex, ship);


            }).ScheduleParallel();

            Entities.WithAll<globals.BaseEntity.SpawnCloneTag>().WithNone<TimeData>().ForEach((Entity ship, int entityInQueryIndex, in Id Id, in Translation pos, in MovementData moveData, in TargetPos targetPosData) => 
            {
                Entity clone = ecb.Instantiate(entityInQueryIndex, shipClone);

                ecb.SetComponent(entityInQueryIndex, clone, pos);
                ecb.AddComponent<CloneTag>(entityInQueryIndex, clone);
                ecb.AddComponent(entityInQueryIndex, clone, moveData);
                ecb.AddComponent(entityInQueryIndex, clone, Id);
                ecb.AddComponent(entityInQueryIndex, clone, new CloneData() { masterShip = ship });
                ecb.AddComponent(entityInQueryIndex, ship, new HasClone() { clone = clone });
                ecb.RemoveComponent<globals.BaseEntity.SpawnCloneTag>(entityInQueryIndex, ship);
            }).ScheduleParallel();

            ecbs.AddJobHandleForProducer(Dependency);

        }
    }
}

