using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using ECSTesting.DebugOperations;
using Unity.Collections;

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
    using ECSTesting.Components;

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

    [UpdateInGroup(typeof(InitializationSystemGroup))]
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
            pulltickets = em.CreateEntityQuery(ComponentType.ReadOnly<TimeData>());
        }

        protected override void OnUpdate()
        {
            EntityCommandBuffer.ParallelWriter ecb = ecbs.CreateCommandBuffer().AsParallelWriter();
            float time = SB.masterTime;
            var ticketArray = World.DefaultGameObjectInjectionWorld.GetExistingSystem<globals.BatchedCollections>().ticketCounter;
            var genSettings = GameObject.Find("GenerationSettings").GetComponent<GenerationSettings>();
            var isRendered = GenerationSettings.isRendered;
            int selectedSystem = genSettings.selectedSystem;
            var updateEM = em;

            Entities.WithAll<WarpMission>().WithNone<HasClone>().ForEach((Entity ship, int entityInQueryIndex, ref DynamicBuffer<WaypointBuffer> waypoints, ref Translation pos, ref MovementData moveData, ref TimeData timeData, ref CurrentSystemID sysID) => 
            {
                if ( timeData.timeAtExecute == 0 )
                {
                    //This occurs when we are starting the journey
                    var bufferData = waypoints[waypoints.Length - 1];
                    var nextTarget = bufferData.data.despawnPos;

                    moveData.targetPos = nextTarget;
                    moveData.vector = math.normalize(nextTarget - pos.Value);
                    timeData.timeAtWrite = time;
                    timeData.timeAtExecute = time + math.distance(nextTarget, pos.Value) / moveData.velocity;
                }
                else if ( timeData.timeAtExecute<time )
                {
                    
                    //Execute warp
                    var bufferData = waypoints[waypoints.Length - 1];
                    var spawnPos = bufferData.data.SpawnPos;
                    pos.Value = spawnPos;
                    sysID.id = bufferData.data.wormholeToID;
                    if ( isRendered )
                    {
                        if ( sysID.id == selectedSystem )
                        {
                            ecb.AddComponent<globals.BaseEntity.SpawnCloneTag>(entityInQueryIndex, ship);
                        }
                    }
                    waypoints.RemoveAt(waypoints.Length - 1);
                    //End warp
                    
                    //If we have more warps to do we establish new nav data, else we remove warpMission
                    if (waypoints.Length>=1)
                    {
                        //Establish new nav data
                        bufferData = waypoints[waypoints.Length - 1];
                        var nextTarget = bufferData.data.despawnPos;

                        moveData.targetPos = nextTarget;
                        moveData.vector = math.normalize(nextTarget - spawnPos);
                        timeData.timeAtWrite = time;
                        timeData.timeAtExecute = time + math.distance(nextTarget, pos.Value) / moveData.velocity;
                        //Debug.Log($"Ship warping to System: {bufferData.data.wormholeToID} from System: {sysID.id}:: Ship has clone");
                        //Debug.Log($"Ships new SysID: {sysID.id}");
                    }
                    else
                    {
                        
                        ecb.RemoveComponent<WarpMission>(entityInQueryIndex, ship);
                        timeData.timeAtExecute = 0;
                    }

                }
            }).ScheduleParallel();

            Entities.WithAll<WarpMission>().ForEach((Entity ship, int entityInQueryIndex, ref DynamicBuffer<WaypointBuffer> waypoints, ref Translation pos, ref MovementData moveData, ref TimeData timeData, ref CurrentSystemID sysID, in HasClone clone) =>
            {
                // if (sysID.id == selectedSystem)
                // {
                //     Debug.DrawLine(pos.Value, moveData.targetPos, Color.green, .25f);
                // }
                if (isRendered == false)
                {
                    ecb.AddComponent<globals.BaseEntity.DeleteCloneTag>(entityInQueryIndex, clone.clone);
                    Debug.LogWarning("Ship had clone while not rendered");
                }
                if ( timeData.timeAtExecute == 0 )
                {
                    //This occurs when we are starting the journey
                    var bufferData = waypoints[waypoints.Length - 1];
                    var nextTarget = bufferData.data.despawnPos;
                    moveData.targetPos = nextTarget;
                    moveData.vector = math.normalize(nextTarget - pos.Value);
                    timeData.timeAtWrite = time;
                    timeData.timeAtExecute = time + math.distance(nextTarget, pos.Value) / moveData.velocity;
                }
                else if ( timeData.timeAtExecute < time )
                {
                    

                    //Execute warp
                    var bufferData = waypoints[waypoints.Length - 1];
                    var spawnPos = bufferData.data.SpawnPos;
                    pos.Value = spawnPos;
                    //Debug.Log($"Ship warping to System: {bufferData.data.wormholeToID} from System: {sysID.id}:: Ship has clone");
                    sysID.id = bufferData.data.wormholeToID;
                    if ( sysID.id != selectedSystem )
                    {
                        //Debug.Log($"Adding delete Clone Tag");
                        ecb.AddComponent<globals.BaseEntity.DeleteCloneTag>(entityInQueryIndex, clone.clone);
                    }

                    
                    waypoints.RemoveAt(waypoints.Length - 1);
                    //End warp

                    //If we have more warps to do we establish new nav data, else we remove warpMission
                    if (waypoints.Length>=1)
                    {
                        //Establish new nav data
                        bufferData = waypoints[waypoints.Length - 1];
                        var nextTarget = bufferData.data.despawnPos;

                        moveData.targetPos = nextTarget;
                        moveData.vector = math.normalize(nextTarget - spawnPos);
                        timeData.timeAtWrite = time;
                        timeData.timeAtExecute = time + math.distance(nextTarget, pos.Value) / moveData.velocity;
                    }
                    else
                    {
                        //We have arrived at our destination here
                        
                        ecb.RemoveComponent<WarpMission>(entityInQueryIndex, ship);
                        timeData.timeAtExecute = 0;
                    }

                }
            }).ScheduleParallel();

            Entities.WithNone<WarpMission>().ForEach((Entity ship, int entityInQueryIndex, ref Translation pos, ref MovementData moveData, ref TimeData timeData, in aiMissions.RandomTravel mission, in CurrentSystemID sysID) => 
            {
                if ( timeData.timeAtExecute == 0 )
                {
                    //This occurs when we have just arrived at the target system
                    moveData.vector = math.normalize(mission.targetPos - pos.Value);
                    moveData.targetPos = mission.targetPos;
                    timeData.timeAtWrite = time;
                    timeData.timeAtExecute = time + math.distance(mission.targetPos, pos.Value) / moveData.velocity;
                }
                else if ( timeData.timeAtExecute < time )
                {
                    if ( mission.targetSystem == 0 )
                    {
                        //Debug.Log($"Ship arrived at its target, Target System: {mission.targetSystem}, Ship Current System{sysID.id}");
                    }
                    pos.Value = mission.targetPos;
                    ecb.RemoveComponent<aiMissions.RandomTravel>(entityInQueryIndex, ship);
                    ecb.RemoveComponent<TimeData>(entityInQueryIndex, ship);
                    moveData.vector = new float3();
                }
            }).ScheduleParallel();
            
            
            //Chicking if systems wormholes exsist
            // var systemsQuery = em.CreateEntityQuery(new ComponentType[]
            //     {ComponentType.ReadOnly<Components.Systems.ePointConnnectionBuffer>(),});
            // var systems = systemsQuery.ToEntityArray(Allocator.Temp);
            // var system = systems.First(sys =>
            //     updateEM.GetComponentData<Components.Systems.Id>(sys).id == selectedSystem);
            // var buff = em.GetBuffer<Components.Systems.ePointConnnectionBuffer>(system).AsNativeArray();
            //
            // Entities.WithAll<WarpMission>().ForEach((in MovementData moveData, in CurrentSystemID currentSystemID, in DynamicBuffer<WaypointBuffer> waypoints) =>
            // {
            //     if (waypoints.Length >= 1)
            //     {
            //         var bufferData = waypoints[waypoints.Length - 1];
            //         if (currentSystemID.id != bufferData.data.wormholeFromID)
            //         {
            //             Debug.Log($"Ship is in {currentSystemID.id}, however its waypoint data says its in {bufferData.data.wormholeFromID}");
            //         }
            //         if (isRendered && currentSystemID.id == selectedSystem)
            //         {
            //             var targetpos = bufferData.data.despawnPos;
            //         
            //             bool exists = false;
            //             exists = buff.Any(con => con.connection.position.x == targetpos.x && con.connection.position.y == targetpos.y && con.connection.position.z == targetpos.z);
            //             if (exists != true)
            //             {
            //                 Debug.LogWarning("Ships are targeting wormholes that are not real");
            //             }
            //         }
            //     }
            //     
            //     
            // }).Run();

            Entities.WithNativeDisableParallelForRestriction(ticketArray).ForEach((int nativeThreadIndex, in TimeData timeData) =>
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
    [UpdateBefore(typeof(ShipTicketExecutor))]
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
            Entities.WithAll<globals.BaseEntity.DeleteCloneTag, Id>().ForEach((Entity clone, int entityInQueryIndex, in CloneData cloneData) =>
            {
                ecb.RemoveComponent<HasClone>(entityInQueryIndex, cloneData.masterShip);
                ecb.RemoveComponent<globals.BaseEntity.DeleteCloneTag>(entityInQueryIndex, cloneData.masterShip);
                ecb.DestroyEntity(entityInQueryIndex, clone);
                
            }).ScheduleParallel();
            ecbs.AddJobHandleForProducer(Dependency);
            ecbs.Update();
        }
    }

    public class ShipCloneSpawner : SystemBase
    {
        EntityCommandBufferSystem ecbs;
        private GenerationSettings genSettings;


        protected override void OnCreate()
        {
            base.OnCreate();
            ecbs = World.GetOrCreateSystem<EndSimulationEntityCommandBufferSystem>();
            genSettings = GameObject.Find("GenerationSettings").GetComponent<GenerationSettings>();
        }



        protected override void OnUpdate()
        {
            EntityCommandBuffer.ParallelWriter ecb = ecbs.CreateCommandBuffer().AsParallelWriter();
            Entity shipClone = SB.shipClone;
            float time = SB.masterTime;

            if (GenerationSettings.isRendered)
            {


                Entities.WithAll<globals.BaseEntity.SpawnCloneTag>().ForEach(
                    (Entity ship, int entityInQueryIndex, in Id Id, in Translation pos, in MovementData moveData,
                        in TimeData timeData) =>
                    {
                        Entity clone = ecb.Instantiate(entityInQueryIndex, shipClone);
                        float3 targetPos = moveData.targetPos;

                        Vector3 spawnPos = Vector3.Lerp(pos.Value, targetPos,
                            Mathf.InverseLerp(timeData.timeAtWrite, timeData.timeAtExecute, time));

                        ecb.SetComponent(entityInQueryIndex, clone, new Translation() {Value = spawnPos});
                        ecb.AddComponent<CloneTag>(entityInQueryIndex, clone);
                        ecb.AddComponent(entityInQueryIndex, clone, moveData);
                        ecb.AddComponent(entityInQueryIndex, clone, Id);
                        ecb.AddComponent(entityInQueryIndex, clone, new CloneData() {masterShip = ship});
                        ecb.AddComponent(entityInQueryIndex, ship, new HasClone() {clone = clone});
                        ecb.RemoveComponent<globals.BaseEntity.SpawnCloneTag>(entityInQueryIndex, ship);


                    }).ScheduleParallel();

                Entities.WithAll<globals.BaseEntity.SpawnCloneTag>().WithNone<TimeData>().ForEach(
                    (Entity ship, int entityInQueryIndex, in Id Id, in Translation pos, in MovementData moveData) =>
                    {
                        Entity clone = ecb.Instantiate(entityInQueryIndex, shipClone);

                        ecb.SetComponent(entityInQueryIndex, clone, pos);
                        ecb.AddComponent<CloneTag>(entityInQueryIndex, clone);
                        ecb.AddComponent(entityInQueryIndex, clone, moveData);
                        ecb.AddComponent(entityInQueryIndex, clone, Id);
                        ecb.AddComponent(entityInQueryIndex, clone, new CloneData() {masterShip = ship});
                        ecb.AddComponent(entityInQueryIndex, ship, new HasClone() {clone = clone});
                        ecb.RemoveComponent<globals.BaseEntity.SpawnCloneTag>(entityInQueryIndex, ship);
                    }).ScheduleParallel();

                ecbs.AddJobHandleForProducer(Dependency);

            }
        }
    }

    // public class ShipPathRenderer : SystemBase
    // {
    //     protected override void OnUpdate()
    //     {
    //         Entities.WithoutBurst().WithAll<Id>().ForEach((Entity ship) =>
    //         {
    //             PathDisplay.PathRender(ship);
    //         }).Run();
    //     }
    // }
}

