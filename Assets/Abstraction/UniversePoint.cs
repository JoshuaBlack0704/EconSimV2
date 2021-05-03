using System.Collections.Generic;
using Unity.Entities;
using Unity.Mathematics;

public class UniversePoint : IVectorController
{
    public static int maxPointId = 0;
    public static Dictionary<int, UniversePoint> SelfCollection = new Dictionary<int, UniversePoint>(1000000);

    public static void GeneratePoints(int count)
    {
        for (int i = 0; i < count; i++)
        {
            var point = new UniversePoint(World.DefaultGameObjectInjectionWorld.EntityManager, EntityPrefabBank.rand.NextFloat3(0, 200));
            point.SpawnClone();
            SelfCollection.Add(i, point);
        }
    }
    
    public void SpawnClone()
    {
        //CreateCloneWithSelfPosition<UniversePointTag>(EntityPrefabBank.models[0]);
        CreateCloneWithVelocity<UniversePointTag>(EntityPrefabBank.models[0]);
    }
    public static void SpawnAllClones()
    {
        foreach (var item in SelfCollection.Values)
        {
            item.SpawnClone();
        }
    }

    public UniversePoint(EntityManager _em, float3 pos) : base(_em)
    {
        em = _em;
        em.AddComponentData<UniversePointTag>(BaseEntity, new UniversePointTag { Id = maxPointId });
        maxPointId++;
        SetPosition(pos);
        SetVelocity(EntityPrefabBank.rand.NextFloat(.5f, 5f));
        SetVector(EntityPrefabBank.rand.NextFloat3Direction());
    }

}

public struct UniversePointTag : IComponentData, IIdTag
{
    public int Id { get; set; }
}