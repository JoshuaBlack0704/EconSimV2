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



