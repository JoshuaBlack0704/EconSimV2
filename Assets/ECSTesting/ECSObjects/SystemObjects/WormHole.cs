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