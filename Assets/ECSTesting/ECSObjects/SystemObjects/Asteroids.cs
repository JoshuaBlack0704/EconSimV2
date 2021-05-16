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
        NativeArray<Entity> systems = query.ToEntityArray(Allocator.Temp);

        foreach ( Entity item in systems )
        {
            int asteroidsToGen = em.GetComponentData<SystemEntity.SystemData>(item).numAsteroids;
            float size = em.GetComponentData<SystemEntity.SystemData>(item).size;
            int id = em.GetComponentData<SystemEntity.Id>(item).id;

            for ( int i = 0; i < asteroidsToGen; i++ )
            {
                Entity asteroid = em.CreateEntity(asteroidArc);
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
        foreach ( Entity item in asteroids )
        {
            Translation pos = em.GetComponentData<Translation>(item);

            Entity asteroid = em.Instantiate(SB.asteroidClone);
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

public class AsteroidCloneDeleter : SystemBase
{
    EntityCommandBufferSystem ecbs;
    EntityQuery deletionQuery;
    protected override void OnCreate()
    {
        base.OnCreate();
        ecbs = World.GetOrCreateSystem<EndSimulationEntityCommandBufferSystem>();
        deletionQuery = World.DefaultGameObjectInjectionWorld.EntityManager.CreateEntityQuery(new ComponentType[] { ComponentType.ReadOnly<Asteroids.Id>(), ComponentType.ReadOnly<CloneTag>(), ComponentType.ReadOnly<BaseEntity.DeleteCloneTag>() });
    }

    protected override void OnUpdate()
    {
        //var ecb = ecbs.CreateCommandBuffer().AsParallelWriter();


        NativeArray<Entity> asteroids = deletionQuery.ToEntityArray(Allocator.Temp);
        World.DefaultGameObjectInjectionWorld.EntityManager.DestroyEntity(asteroids);
        asteroids.Dispose();

    }
}

public class AsteroidCloneSpawner : SystemBase
{
    EntityCommandBufferSystem ecbs;

    protected override void OnCreate()
    {
        base.OnCreate();
        ecbs = World.GetOrCreateSystem<EndSimulationEntityCommandBufferSystem>();
    }



    protected override void OnUpdate()
    {
        EntityCommandBuffer.ParallelWriter ecb = ecbs.CreateCommandBuffer().AsParallelWriter();
        Entity asteroidClone = SB.asteroidClone;

        Entities.WithAll<BaseEntity.SpawnCloneTag>().ForEach((Entity asteroid, int entityInQueryIndex, in Translation pos, in Asteroids.Id id) =>
        {

            Entity clone = ecb.Instantiate(entityInQueryIndex, asteroidClone);
            ecb.AddComponent<CloneTag>(entityInQueryIndex, clone);
            ecb.SetComponent<Translation>(entityInQueryIndex, clone, pos);
            ecb.AddComponent<Asteroids.Id>(entityInQueryIndex, clone, id);
            ecb.RemoveComponent<BaseEntity.SpawnCloneTag>(entityInQueryIndex, asteroid);

        }).ScheduleParallel();

        ecbs.AddJobHandleForProducer(Dependency);

    }
}