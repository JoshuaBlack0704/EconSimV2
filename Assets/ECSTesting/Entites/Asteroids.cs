using Unity.Collections;
using Unity.Entities;
using Unity.Transforms;
using UnityEngine;

namespace ECSTesting.Entites
{
    using ECSTesting.Components.Asteroids;
    using SysComps = ECSTesting.Components.Systems;

    public static class Asteroids
    {
        static EntityManager em = SB.em;
        static EntityArchetype asteroidArc;
        static int asteroidCount = 0;

        static void CreateAsteroids()
        {
            EntityQuery query = em.CreateEntityQuery(typeof(SysComps.Id));
            NativeArray<Entity> systems = query.ToEntityArray(Allocator.Temp);

            foreach ( Entity item in systems )
            {
                int asteroidsToGen = em.GetComponentData<SysComps.SystemData>(item).numAsteroids;
                float size = em.GetComponentData<SysComps.SystemData>(item).size;
                int id = em.GetComponentData<SysComps.Id>(item).id;

                for ( int i = 0; i < asteroidsToGen; i++ )
                {
                    Entity asteroid = em.CreateEntity(asteroidArc);
                    em.SetComponentData(asteroid, new Id() { id = asteroidCount });
                    asteroidCount++;
                    em.SetComponentData(asteroid, new Translation() { Value = SB.rand.NextFloat3(0, size) });
                    em.SetComponentData(asteroid, new SystemID() { Id = id });
                }
            }


            systems.Dispose();
        }

        public static void SpawnAsteroids(Entity[] asteroids)
        {
            foreach ( Entity item in asteroids )
            {
                Translation pos = em.GetComponentData<Translation>(item);

                Entity asteroid = em.Instantiate(SB.asteroidClone);
                em.AddComponent<CloneTag>(asteroid);
                em.SetComponentData(asteroid, pos);
            }
        }

        public static void Initialize(GameObject model)
        {
            asteroidArc = em.CreateArchetype(new ComponentType[] { typeof(Id), typeof(Translation), typeof(SystemID) });
        }

        public static void GenerateAsteroids()
        {
            CreateAsteroids();
        }

        
    }

    
}





