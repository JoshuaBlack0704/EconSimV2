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