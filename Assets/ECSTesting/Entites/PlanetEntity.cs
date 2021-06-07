using Unity.Collections;
using Unity.Entities;
using Unity.Transforms;
using UnityEngine;
using Unity.Jobs;
using System.Linq;

namespace ECSTesting.Entites
{
    using ECSTesting.Components;
    using ECSTesting.Components.Planets;
    using System.Collections.Generic;
    using SysComps = ECSTesting.Components.Systems;

    public static class Planets
    {
        static EntityManager em = SB.em;
        static EntityArchetype planetArc;
        static int planetCount = 0;

        static void CreatePlanets()
        {
            EntityQuery query = em.CreateEntityQuery(ComponentType.ReadOnly<SysComps.Id>());
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
                    //Debug.Log($"Making planet in system with id: {id}");

                    em.SetComponentData(planet, new CurrentSystemID() { id = id });
                }
            }


            systems.Dispose();
        }

        public static void Initialize(GameObject model)
        {
            planetArc = em.CreateArchetype(new ComponentType[] { typeof(Id), typeof(Translation), typeof(CurrentSystemID) });
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

        public static void FindPlanetsForSystem(int systemId, out Entity[] planetsReturnable)
        {
            EntityQueryDesc query = new EntityQueryDesc() { All = new ComponentType[] { typeof(Id) }, None = new ComponentType[] { typeof(CloneTag) } };
            EntityQuery planetQuery = em.CreateEntityQuery(query);
            NativeArray<Entity> planetArray = planetQuery.ToEntityArrayAsync(Allocator.TempJob, out JobHandle planetHandle);
            planetHandle.Complete();

            var planetsArrayQuery = from planet in planetArray
                          where em.GetComponentData<CurrentSystemID>(planet).id == systemId
                          select planet;
            planetsReturnable = planetsArrayQuery.ToArray();
            planetArray.Dispose();
        }

        public static void FindPlanetsForSystem(Entity system, out Entity[] planetsReturnable)
        {
            EntityQueryDesc query = new EntityQueryDesc() { All = new ComponentType[] { typeof(Id) }, None = new ComponentType[] { typeof(CloneTag) } };
            EntityQuery planetQuery = em.CreateEntityQuery(query);
            var sysID = em.GetComponentData<SysComps.Id>(system).id;
            NativeArray<Entity> planetsArray = planetQuery.ToEntityArrayAsync(Allocator.TempJob, out JobHandle planetHandle);
            planetHandle.Complete();
            Debug.Log($"planets Entity Array Length: {planetsArray.Length}");
            Debug.Log($"System ID: {sysID}");
            foreach ( var planet in planetsArray )
            {
                Debug.Log($"Planet: {em.GetComponentData<Id>(planet).id} in system {em.GetComponentData<CurrentSystemID>(planet).id}");
            }
            var planetsArrayQuery = from planet in planetsArray
                                where em.GetComponentData<CurrentSystemID>(planet).id == sysID
                                select planet;
            planetsReturnable = planetsArrayQuery.ToArray();
            planetsArray.Dispose();
        }
    }

    
}



