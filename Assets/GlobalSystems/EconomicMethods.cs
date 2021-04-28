using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using UnityEngine;
using Unity.Entities;
using Unity.Collections;
using Unity.Transforms;

public static class EconomicMethods
{
    static EntityManager em = PrefabAccessor.entityManager;
    public static Unity.Mathematics.Random rand = new Unity.Mathematics.Random(1);

    public static float CheckRemainingResource<T>(Entity entity) where T : struct, IContainsResource, IComponentData
    {
        return em.GetComponentData<T>(entity).freeVolume;
    }

    public static void ReserveResource<T>(Entity entity, float volume) where T : struct, IContainsResource, IComponentData
    {
        if (CheckRemainingResource<T>(entity)-volume<0)
        {
            Debug.LogError("Can't reserve this much resource");
        }

        RemoveOrReserve<T>(entity, 0, volume);
    }
    public static void RemoveOrReserve<T>(Entity entity, float withdraw = 0, float reserve = 0) where T : struct, IComponentData, IContainsResource
    {
        var currentReservation = em.GetComponentData<T>(entity).reservedVolume;
        float currentVolume = em.GetComponentData<T>(entity).volume;
        em.SetComponentData<T>(entity, new T() { volume = currentVolume-withdraw, reservedVolume = currentReservation+reserve });
    }
    public static float WithdrawResource<T>(Entity entity, float volume) where T : struct, IContainsResource, IComponentData
    {
        //Debug.Log("Withdrawing resource from entity: " + GetTypeId<asteroidId>(entity));
        float currentVolume = em.GetComponentData<T>(entity).volume;
        if (currentVolume-volume<=0)
        {
            SchedualReplaceAsteroid(em.GetComponentData<masterSystemId>(entity).Id);
            if (UniverseGenerator.universe.inSystem&&UniverseGenerator.universe.selectedSystem==GetTypeId<masterSystemId>(entity))
            {
                EntityQuery query = em.CreateEntityQuery(typeof(asteroidId), typeof(systemSubObjectTag));
                var clones = query.ToEntityArray(Allocator.Temp);
                var clone = clones.FirstOrDefault(o => GetTypeId<asteroidId>(o) == GetTypeId<asteroidId>(entity));
                em.DestroyEntity(clone);
            }
            var system = UniverseGenerator.universe.systemWorks.GetSystem(GetTypeId<masterSystemId>(entity));
            system.asteroids.Remove(entity);
            em.DestroyEntity(entity);
            //Debug.LogWarning(string.Format("Destroyed entity. Current Volume: {0} extracted volume: {1}", currentVolume, volume));
        }
        else
        {
            RemoveOrReserve<T>(entity, volume, 0);
        }

        return volume;
    }
    public static void SchedualResourceWithdraw<T>(Entity entity)
    {

    }
    internal static int GetTypeId<T>(Entity entity) where T : struct, IComponentData, IIdTag
    {
        return em.GetComponentData<T>(entity).Id;
    }

    internal static void SchedualReplaceAsteroid(int systemID)
    {
        MainSchedual.EventTicketHeapItem ticket = MainSchedual.AddToHeap(UnityEngine.Random.Range(10, 100f), 5);
        ticket.systemID = systemID;
        //Debug.Log("Asteroid replacement schedualerd for system: " + systemID);
    }
    public static void ReplaceAsteroid(int systemID)
    {
        //Debug.Log("Replacing asteroid in system: " + systemID);
        var system = UniverseGenerator.universe.systemWorks.GetSystem(systemID);

        var asteroid = em.CreateEntity(PrefabAccessor.asteroidArc);
        em.SetComponentData<masterSystemId>(asteroid, new masterSystemId() { Id = systemID });
        em.SetComponentData<Translation>(asteroid, new Translation() { Value = rand.NextFloat3(0, system.size) });
        em.SetComponentData<asteroidId>(asteroid, new asteroidId() { Id = AsteroidMethods.MaxId});
        em.SetComponentData<FoodResource>(asteroid, new FoodResource() { volume = 1000, reservedVolume=0 });
        system.asteroids.Add(asteroid);
        if (UniverseGenerator.universe.inSystem&&UniverseGenerator.universe.selectedSystem==systemID)
        {
            var newItem = em.Instantiate(PrefabAccessor.entityTemplateArray[2]);
            em.AddComponent(newItem, typeof(systemSubObjectTag));
            em.AddComponentData<asteroidId>(newItem, new asteroidId() { Id = em.GetComponentData<asteroidId>(asteroid).Id });
            em.SetComponentData(newItem, new Translation { Value = PrefabAccessor.entityManager.GetComponentData<Translation>(asteroid).Value });
            em.SetComponentData<Rotation>(newItem, new Rotation() { Value = rand.NextQuaternionRotation() });
        }
    }
}
