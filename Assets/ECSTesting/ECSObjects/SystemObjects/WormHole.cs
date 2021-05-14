using Unity.Collections;
using Unity.Entities;
using Unity.Transforms;

public static class Wormholes
{
    static EntityManager em = SB.em;

    public static void SpawnWormholes(NativeArray<Translation> positons)
    {
        foreach ( Translation pos in positons )
        {
            Entity hole = em.Instantiate(SB.wormholeClone);
            em.AddComponent<CloneTag>(hole);
            em.SetComponentData<Translation>(hole, pos);
            em.AddComponent<Id>(hole);
        }
    }

    public struct Id : IComponentData { }
}

public class WormHoleCloneDeleter : SystemBase
{
    EntityCommandBufferSystem ecbs;
    EntityQuery deletionQuery;
    protected override void OnCreate( )
    {
        base.OnCreate( );
        ecbs = World.GetOrCreateSystem<EndSimulationEntityCommandBufferSystem>( );
        deletionQuery = World.DefaultGameObjectInjectionWorld.EntityManager.CreateEntityQuery(new ComponentType[] { ComponentType.ReadOnly<Wormholes.Id>( ), ComponentType.ReadOnly<CloneTag>( ), ComponentType.ReadOnly<BaseEntity.DeleteCloneTag>( ) });
    }

    protected override void OnUpdate( )
    {
        //var ecb = ecbs.CreateCommandBuffer().AsParallelWriter();


        NativeArray<Entity> wormHoles = deletionQuery.ToEntityArray(Allocator.Temp);
        World.DefaultGameObjectInjectionWorld.EntityManager.DestroyEntity(wormHoles);
        wormHoles.Dispose( );

    }
}