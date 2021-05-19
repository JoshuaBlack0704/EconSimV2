using System;
using System.Collections.Generic;
using System.Text;
using System.Threading.Tasks;
using Unity.Entities;
using Unity.Mathematics;
using Unity.Jobs;
using Unity.Collections;
using Unity.Jobs.LowLevel.Unsafe;
using Unity.Transforms;
using SC = ECSTesting.Components.Ships;
using ECSTesting.Components.Ships;
using ECSTesting.Entites;
using ECSTesting.Components.Tickets;
using ECSTesting.GlobalAccess;

namespace ECSTesting.Objects
{
    public class AI
    {
        public int Id;

        NativeList<Entity> ownedShips;
        NativeList<Entity> knownSystems;

        public AI(GenerationSettings generationSettings, int StartingSystem)
        {
            Ships.GenerateShipsFor(StartingSystem, this, generationSettings, out NativeArray<Entity> ships);
            ownedShips = new NativeList<Entity>(Allocator.Persistent);
            ownedShips.CopyFrom(ships);
            ships.Dispose();
        }
    }

    public class AIEmulator : SystemBase
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
            float time = SB.masterTime;

            NativeArray<Unity.Mathematics.Random> randomArray = World.GetExistingSystem<BatchedCollections>().RandomArray;

            Entities.WithNativeDisableParallelForRestriction(randomArray).ForEach((Entity ship, int entityInQueryIndex, int nativeThreadIndex, ref TargetPos target, ref Tickets.TimeData timeData, ref MovementData moveData, ref Idle idle, in Translation pos) =>
            {
                if ( idle.isIdle )
                {
                    Unity.Mathematics.Random rand = randomArray[nativeThreadIndex];
                    target.position = rand.NextFloat3(0, 50);
                    float3 vect = target.position - pos.Value;
                    moveData.vector = math.normalize(vect);
                    timeData.timeAtWrite = time;
                    timeData.timeAtExecute = time + math.distance(target.position, pos.Value) / moveData.velocity;

                    idle.isIdle = false;
                    ecb.AddComponent<MoveMission>(entityInQueryIndex, ship);

                    randomArray[nativeThreadIndex] = rand;
                }
            }).ScheduleParallel();

            ecbs.AddJobHandleForProducer(Dependency);
        }
    }
}


namespace ECSTesting.Components.Missions.AIMissions
{
    public struct RandomTravel : IComponentData
    {
        public Entity target;
        public float3 targetPos;
        public int targetSystem;
    }
}

namespace ECSTesting.Components.Missions.ShipsMissions
{
    public struct WarpMission : IComponentData
    {

    }
}


