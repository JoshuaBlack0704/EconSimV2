using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ECSTesting.Systems.Systems
{
    using ECSTesting.Components;
    using ECSTesting.Components.Systems;
    using ECSTesting.GlobalAccess;
    using Unity.Collections;
    using Unity.Entities;
    using Unity.Transforms;

    public class SystemCloneDeleter : SystemBase
    {
        EntityCommandBufferSystem ecbs;
        EntityQuery deletionQuery;
        protected override void OnCreate()
        {
            base.OnCreate();
            ecbs = World.GetOrCreateSystem<EndSimulationEntityCommandBufferSystem>();
            deletionQuery = World.DefaultGameObjectInjectionWorld.EntityManager.CreateEntityQuery(new ComponentType[] { ComponentType.ReadOnly<Id>(), ComponentType.ReadOnly<CloneTag>(), ComponentType.ReadOnly<BaseEntity.DeleteCloneTag>() });
        }

        protected override void OnUpdate()
        {
            //var ecb = ecbs.CreateCommandBuffer().AsParallelWriter();


            NativeArray<Entity> systems = deletionQuery.ToEntityArray(Allocator.Temp);
            World.DefaultGameObjectInjectionWorld.EntityManager.DestroyEntity(systems);
            systems.Dispose();

        }
    }

    public class SystemCloneSpawner : SystemBase
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
            Entity systemClone = SB.systemClone;

            Entities.WithAll<BaseEntity.SpawnCloneTag>().ForEach((Entity system, int entityInQueryIndex, in Translation pos, in Id id) =>
            {

                Entity clone = ecb.Instantiate(entityInQueryIndex, systemClone);
                ecb.AddComponent<CloneTag>(entityInQueryIndex, clone);
                ecb.SetComponent(entityInQueryIndex, clone, pos);
                ecb.AddComponent(entityInQueryIndex, clone, id);
                ecb.RemoveComponent<BaseEntity.SpawnCloneTag>(entityInQueryIndex, system);

            }).ScheduleParallel();

            ecbs.AddJobHandleForProducer(Dependency);

        }
    }
}