using ECSTesting.ECSWorks;
using Unity.Collections;
using Unity.Entities;
using Unity.Transforms;
using UnityEngine;

namespace ECSTesting.Entites
{
    using ECSTesting.Components.Planets;
    using SysComps = ECSTesting.Components.Systems;

    public static class Planets
    {
        static EntityManager em = SB.em;
        static EntityArchetype planetArc;
        static int planetCount = 0;

        static void CreatePlanets()
        {
            EntityQuery query = em.CreateEntityQuery(typeof(SysComps.Id));
            NativeArray<Entity> systems = query.ToEntityArray(Allocator.Temp);

            foreach ( Entity item in systems )
            {
                int planetsToGen = em.GetComponentData<SysComps.SystemData>(item).numPlanets;
                float size = em.GetComponentData<SysComps.SystemData>(item).size;
                int id = em.GetComponentData<SysComps.Id>(item).id;

                for ( int i = 0; i < planetsToGen; i++ )
                {
                    Entity planet = em.CreateEntity(planetArc);
                    em.SetComponentData(planet, new Id() { id = planetCount });
                    planetCount++;
                    em.SetComponentData(planet, new Translation() { Value = SB.rand.NextFloat3(0, size) });
                    em.SetComponentData(planet, new SystemID() { Id = id });
                }
            }


            systems.Dispose();
        }

        public static void Initialize(GameObject model)
        {
            planetArc = em.CreateArchetype(new ComponentType[] { typeof(Id), typeof(Translation), typeof(SystemID) });
        }

        public static void GeneratePlanets()
        {
            CreatePlanets();
        }

        public static void SpawnPlanets(Entity[] planets)
        {
            foreach ( Entity item in planets )
            {
                Translation pos = em.GetComponentData<Translation>(item);

                Entity planet = em.Instantiate(SB.planetClone);
                em.AddComponent<CloneTag>(planet);
                em.SetComponentData(planet, pos);
            }
        }

        
    }

    
}

namespace ECSTesting.Components.Planets
{
    public struct Id : IComponentData, IIdTag
    {
        public int id { get; set; }
    }
}

namespace ECSTesting.Systems.Planets
{
    using ECSTesting.Components.Planets;
    public class PlanetCloneDeleter : SystemBase
    {
        EntityCommandBufferSystem ecbs;
        EntityQuery deletionQuery;
        protected override void OnCreate()
        {
            base.OnCreate();
            ecbs = World.GetOrCreateSystem<EndSimulationEntityCommandBufferSystem>();
            deletionQuery = World.DefaultGameObjectInjectionWorld.EntityManager.CreateEntityQuery(new ComponentType[] { ComponentType.ReadOnly<Id>(), ComponentType.ReadOnly<CloneTag>(), ComponentType.ReadOnly<BaseEntity.DeleteCloneTag>() });
        }

        protected override void OnUpdate()
        {
            //var ecb = ecbs.CreateCommandBuffer().AsParallelWriter();


            NativeArray<Entity> planets = deletionQuery.ToEntityArray(Allocator.Temp);
            World.DefaultGameObjectInjectionWorld.EntityManager.DestroyEntity(planets);
            planets.Dispose();

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
            EntityCommandBuffer.ParallelWriter ecb = ecbs.CreateCommandBuffer().AsParallelWriter();
            Entity planetClone = SB.planetClone;

            Entities.WithAll<BaseEntity.SpawnCloneTag>().ForEach((Entity planet, int entityInQueryIndex, in Translation pos, in Id id) =>
            {

                Entity clone = ecb.Instantiate(entityInQueryIndex, planetClone);
                ecb.AddComponent<CloneTag>(entityInQueryIndex, clone);
                ecb.SetComponent(entityInQueryIndex, clone, pos);
                ecb.AddComponent(entityInQueryIndex, clone, id);
                ecb.RemoveComponent<BaseEntity.SpawnCloneTag>(entityInQueryIndex, planet);

            }).ScheduleParallel();

            ecbs.AddJobHandleForProducer(Dependency);

        }
    }
}