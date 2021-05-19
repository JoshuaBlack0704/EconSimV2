using Unity.Collections;
using Unity.Entities;
using Unity.Transforms;
using UnityEngine;
using Unity.Jobs;
using System.Linq;

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
                    em.SetComponentData(asteroid, new SystemID() { id = id });
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

        public static void FindAsteroidsForSystem(int systemId, out Entity[] asteroidsArray)
        {
            EntityQueryDesc query = new EntityQueryDesc() { All = new ComponentType[] { typeof(Id) }, None = new ComponentType[] { typeof(CloneTag) } };
            EntityQuery asteroidQuery = em.CreateEntityQuery(query);
            NativeArray<Entity> asteroidArray = asteroidQuery.ToEntityArrayAsync(Allocator.TempJob, out JobHandle planetHandle);
            planetHandle.Complete();

            var asteroidArrayQuery = from asteroid in asteroidArray
                               where em.GetComponentData<SystemID>(asteroid).id == systemId
                               select asteroid;
            asteroidsArray = asteroidArrayQuery.ToArray();
            asteroidArray.Dispose();
        }

        public static Entity[] FindAsteroidsForSystem(Entity system)
        {
            EntityQuery asteroidQuery = em.CreateEntityQuery(typeof(Id));
            var sysID = em.GetComponentData<SysComps.Id>(system).id;
            NativeArray<Entity> asteroidArray = asteroidQuery.ToEntityArrayAsync(Allocator.TempJob, out JobHandle planetHandle);
            planetHandle.Complete();

            var asteroidsuery = from asteroid in asteroidArray
                                where em.GetComponentData<SystemID>(asteroid).id == sysID
                                select asteroid;

            asteroidArray.Dispose();
            return asteroidsuery.ToArray();
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





