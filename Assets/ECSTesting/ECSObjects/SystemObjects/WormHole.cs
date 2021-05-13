using Unity.Collections;
using Unity.Entities;
using Unity.Transforms;
using UnityEngine;

public static class Wormholes
{
    static EntityManager em = SB.em;

    public static void SpawnWormholes(NativeArray<Translation> positons)
    {
        foreach (var pos in positons)
        {
            var hole = em.Instantiate(SB.wormholeClone);
            em.AddComponent<CloneTag>(hole);
            em.SetComponentData<Translation>(hole, pos);
        }
    }

    
}

public class WormholeCloneDeleter : SystemBase
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