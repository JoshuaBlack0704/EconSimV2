using Unity.Collections;
using Unity.Entities;
using Unity.Transforms;
using UnityEngine;

public static class Asteroids
{
    static EntityManager em = SB.em;
    static EntityArchetype asteroidArc;
    static int asteroidCount = 0;

    static void CreateAsteroids()
    {
        EntityQuery query = em.CreateEntityQuery(typeof(SystemEntity.Id));
        var systems = query.ToEntityArray(Allocator.Temp);

        foreach (var item in systems)
        {
            var asteroidsToGen = em.GetComponentData<SystemEntity.SystemData>(item).numAsteroids;
            var size = em.GetComponentData<SystemEntity.SystemData>(item).size;
            var id = em.GetComponentData<SystemEntity.Id>(item).id;

            for (int i = 0; i < asteroidsToGen; i++)
            {
                var asteroid = em.CreateEntity(asteroidArc);
                em.SetComponentData<Id>(asteroid, new Id() { id = asteroidCount });
                asteroidCount++;
                em.SetComponentData<Translation>(asteroid, new Translation() { Value = SB.rand.NextFloat3(0, size) });
                em.SetComponentData<SystemID>(asteroid, new SystemID() { Id = id });
            }
        }


        systems.Dispose();
    }

    public static void SpawnAsteroids(Entity[] asteroids)
    {
        foreach (var item in asteroids)
        {
            var pos = em.GetComponentData<Translation>(item);

            var asteroid = em.Instantiate(SB.asteroidClone);
            em.AddComponent<CloneTag>(asteroid);
            em.SetComponentData<Translation>(asteroid, pos);
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

    public struct Id : IComponentData, IIdTag
    {
        public int id { get; set; }
    }
}
