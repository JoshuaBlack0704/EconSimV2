using Unity.Collections;
using Unity.Entities;
using Unity.Transforms;

public static class BaseEntity
{
    static EntityManager em = World.DefaultGameObjectInjectionWorld.EntityManager;
    public static void DestroyAllClones()
    {
        NativeArray<Entity> clones = em.CreateEntityQuery(new ComponentType[] { typeof(CloneTag) }).ToEntityArray(Allocator.Temp);
        em.AddComponent<DeleteCloneTag>(clones);
        clones.Dispose();
    }

    public static Translation GetTrans(Entity entity)
    {
        return em.GetComponentData<Translation>(entity);
    }
    public static void MirrorTrans(Entity sender, Entity recipient)
    {
        em.SetComponentData<Translation>(recipient, new Translation() { Value = em.GetComponentData<Translation>(sender).Value});
    }

    public struct DeleteCloneTag : IComponentData { }

    public struct SpawnCloneTag : IComponentData { }

    public struct CloneHolder : IComponentData { public Entity clone; }
}