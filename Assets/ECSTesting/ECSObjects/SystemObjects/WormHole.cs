using ECSTesting.ECSWorks;
using Unity.Collections;
using Unity.Entities;
using Unity.Transforms;

namespace ECSTesting.Entites
{
    using ECSTesting.Components.Wormholes;
    public static class Wormholes
    {
        static EntityManager em = SB.em;

        public static void SpawnWormholes(NativeArray<Translation> positons)
        {
            foreach ( Translation pos in positons )
            {
                Entity hole = em.Instantiate(SB.wormholeClone);
                em.AddComponent<CloneTag>(hole);
                em.SetComponentData(hole, pos);
                em.AddComponent<Id>(hole);
            }
        }

    }

    
}

namespace ECSTesting.Components.Wormholes
{
    public struct Id : IComponentData { }

}

namespace ECSTesting.Systems.Wormholes
{
    using ECSTesting.Components.Wormholes;
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