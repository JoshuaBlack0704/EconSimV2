using System;
using System.Collections;
using System.Collections.Generic;
using Unity.Collections;
using Unity.Entities;
using Unity.Transforms;
using UnityEngine;

public static class Planets
{
    static EntityManager em = SB.em;
    static EntityArchetype planetArc;
    static int planetCount = 0;

    static void CreatePlanets()
    {
        EntityQuery query = em.CreateEntityQuery(typeof(SystemEntity.Id));
        var systems = query.ToEntityArray(Allocator.Temp);

        foreach (var item in systems)
        {
            var planetsToGen = em.GetComponentData<SystemEntity.SystemData>(item).numPlanets;
            var size = em.GetComponentData<SystemEntity.SystemData>(item).size;
            var id = em.GetComponentData<SystemEntity.Id>(item).id;

            for (int i = 0; i < planetsToGen; i++)
            {
                var planet = em.CreateEntity(planetArc);
                em.SetComponentData<Id>(planet, new Id() { id = planetCount});
                planetCount++;
                em.SetComponentData<Translation>(planet, new Translation() { Value = SB.rand.NextFloat3(0, size)});
                em.SetComponentData<SystemID>(planet, new SystemID() { Id = id });
            }
        }


        systems.Dispose();
    }

    public static void Initialize(GameObject model)
    {
        planetArc = em.CreateArchetype(new ComponentType[] { typeof(Id), typeof(Translation), typeof(SystemID)});
    }

    public static void GeneratePlanets()
    {
        CreatePlanets();
    }

    public static void SpawnPlanets(Entity[] planets)
    {
        foreach (var item in planets)
        {
            var pos = em.GetComponentData<Translation>(item);

            var planet = em.Instantiate(SB.planetClone);
            em.AddComponent<CloneTag>(planet);
            em.SetComponentData<Translation>(planet, pos);
        }
    }

    public struct Id : IComponentData, IIdTag
    {
        public int id { get; set; }
    }
}

public class PlanetCloneDeleter : SystemBase
{
    EntityCommandBufferSystem ecbs;

    protected override void OnCreate()
    {
        base.OnCreate();
        ecbs = World.GetOrCreateSystem<EndSimulationEntityCommandBufferSystem>();
    }

    protected override void OnUpdate()
    {
        var ecb = ecbs.CreateCommandBuffer().AsParallelWriter();
        Entities.WithAll<BaseEntity.DeleteCloneTag>().ForEach((Entity clone, int entityInQueryIndex) =>
        {

        }).ScheduleParallel();
        ecbs.AddJobHandleForProducer(Dependency);

        throw new System.NotImplementedException();
    }
}

public class PlanetCloneSpawner : SystemBase
{
    EntityCommandBufferSystem ecbs;

    protected override void OnCreate()
    {
        base.OnCreate();
        ecbs = World.GetOrCreateSystem<EndSimulationEntityCommandBufferSystem>();
    }

    protected override void OnUpdate()
    {
        var ecb = ecbs.CreateCommandBuffer().AsParallelWriter();
        Entities.WithAll<BaseEntity.DeleteCloneTag>().ForEach((Entity clone, int entityInQueryIndex) =>
        {

        }).ScheduleParallel();
        ecbs.AddJobHandleForProducer(Dependency);

        throw new System.NotImplementedException();
    }
}