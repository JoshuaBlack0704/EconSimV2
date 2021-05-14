using Unity.Collections;
using Unity.Entities;
using Unity.Mathematics;
using Unity.Transforms;

public static class Stars

{
    static EntityManager em = SB.em;

    public static void SpawnStar(float3 pos)
    {
        Entity star = em.Instantiate(SB.starClone);
        em.AddComponent<CloneTag>(star);
        em.SetComponentData<Translation>(star, new Translation( ) { Value = pos });
        em.AddComponent<Id>(star);
    }

    public struct Id : IComponentData { }
}

public class StarCloneDeleter : SystemBase
{
    EntityCommandBufferSystem ecbs;
    EntityQuery deletionQuery;
    protected override void OnCreate( )
    {
        base.OnCreate( );
        ecbs = World.GetOrCreateSystem<EndSimulationEntityCommandBufferSystem>( );
        deletionQuery = World.DefaultGameObjectInjectionWorld.EntityManager.CreateEntityQuery(new ComponentType[] { ComponentType.ReadOnly<Stars.Id>( ), ComponentType.ReadOnly<CloneTag>( ), ComponentType.ReadOnly<BaseEntity.DeleteCloneTag>( ) });
    }

    protected override void OnUpdate( )
    {
        //var ecb = ecbs.CreateCommandBuffer().AsParallelWriter();


        NativeArray<Entity> stars = deletionQuery.ToEntityArray(Allocator.Temp);
        World.DefaultGameObjectInjectionWorld.EntityManager.DestroyEntity(stars);
        stars.Dispose( );

    }
}