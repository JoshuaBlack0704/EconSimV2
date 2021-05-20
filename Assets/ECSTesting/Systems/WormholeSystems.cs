using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ECSTesting.Systems.Wormholes
{
    using ECSTesting.Components;
    using ECSTesting.Components.Wormholes;
    using ECSTesting.GlobalAccess;
    using Unity.Collections;
    using Unity.Entities;

    public class WormHoleCloneDeleter : SystemBase
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


            NativeArray<Entity> wormHoles = deletionQuery.ToEntityArray(Allocator.Temp);
            World.DefaultGameObjectInjectionWorld.EntityManager.DestroyEntity(wormHoles);
            wormHoles.Dispose();

        }
    }
}
