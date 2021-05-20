using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ECSTesting.Systems.Planets
{
    using ECSTesting.Components;
    using ECSTesting.Components.Planets;
    using ECSTesting.GlobalAccess;
    using Unity.Collections;
    using Unity.Entities;
    using Unity.Transforms;

    public class PlanetCloneDeleter : SystemBase
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


            NativeArray<Entity> planets = deletionQuery.ToEntityArray(Allocator.Temp);
            World.DefaultGameObjectInjectionWorld.EntityManager.DestroyEntity(planets);
            planets.Dispose();

        }
    }

    public class PlanetCloneSpawner : SystemBase
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
            Entity planetClone = SB.planetClone;

            Entities.WithAll<BaseEntity.SpawnCloneTag>().ForEach((Entity planet, int entityInQueryIndex, in Translation pos, in Id id) =>
            {

                Entity clone = ecb.Instantiate(entityInQueryIndex, planetClone);
                ecb.AddComponent<CloneTag>(entityInQueryIndex, clone);
                ecb.SetComponent(entityInQueryIndex, clone, pos);
                ecb.AddComponent(entityInQueryIndex, clone, id);
                ecb.RemoveComponent<BaseEntity.SpawnCloneTag>(entityInQueryIndex, planet);

            }).ScheduleParallel();

            ecbs.AddJobHandleForProducer(Dependency);

        }
    }
}