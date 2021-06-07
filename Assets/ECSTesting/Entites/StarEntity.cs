using Unity.Collections;
using Unity.Entities;
using Unity.Mathematics;
using Unity.Transforms;

namespace ECSTesting.Entites
{
    using ECSTesting.Components;
    using ECSTesting.Components.Stars;
    public static class Stars

    {
        static EntityManager em = SB.em;

        public static void SpawnStar(float3 pos)
        {
            Entity star = em.Instantiate(SB.starClone);
            em.AddComponent<CloneTag>(star);
            em.SetComponentData(star, new Translation() { Value = pos });
            em.AddComponent<Id>(star);
        }

    }

    
}



