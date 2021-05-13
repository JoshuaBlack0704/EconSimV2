using Unity.Entities;
using Unity.Mathematics;
using Unity.Transforms;
using UnityEngine;

public static class Star
{
    static EntityManager em = SB.em;

    public static void SpawnStar(float3 pos)
    {
        var star = em.Instantiate(SB.starClone);
        em.AddComponent<CloneTag>(star);
        em.SetComponentData<Translation>(star, new Translation() { Value = pos });
    }

    
}

public class StarCloneDeleter : SystemBase
{
    EntityCommandBufferSystem ecbs;

    protected override void OnCreate()
    {
        base.OnCreate();
        ecbs = World.GetOrCreateSystem<EndSimulationEntityCommandBufferSystem>();
    }

    protected override void OnUpdate()
    {
        var ecb = ecbs.CreateCommandBuffer().AsParallelWriter();
        Entities.WithAll<BaseEntity.DeleteCloneTag>().ForEach((Entity clone, int entityInQueryIndex) =>
        {

        }).ScheduleParallel();
        ecbs.AddJobHandleForProducer(Dependency);

        throw new System.NotImplementedException();
    }
}