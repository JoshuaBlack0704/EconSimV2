using System.Collections;
using System.Collections.Generic;
using Unity.Entities;
using Unity.Mathematics;
using Unity.Transforms;
using Unity.Collections;
using UnityEngine;

public static class Ships
{
    static EntityManager em = SB.em;
    static EntityArchetype shipArc;
    static int maxShipID = 0;

    public static void Initialize()
    {
        shipArc = em.CreateArchetype(new ComponentType[] 
        {
            typeof(Translation), typeof(Id), typeof(MovementData), typeof(SystemID)
        });
    }

    public static void GenerateShipsForAll(int shipsPerSystem)
    {
        EntityQuery query = em.CreateEntityQuery(typeof(SystemEntity.Id));
        NativeArray<Entity> systems = query.ToEntityArray(Allocator.Temp);

        foreach (var system in systems)
        {
            var size = em.GetComponentData<SystemEntity.SystemData>(system).size;
            var sysId = em.GetComponentData<SystemEntity.Id>(system).id;

            for (int i = 0; i < shipsPerSystem; i++)
            {
                var ship = em.CreateEntity(shipArc);
                em.SetComponentData<Id>(ship, new Id() { id = maxShipID});
                maxShipID++;
                var pos = SB.rand.NextFloat3(0, size);
                em.SetComponentData<Translation>(ship, new Translation() { Value = pos });
                em.SetComponentData<SystemID>(ship, new SystemID() { Id = sysId });
            }
        }
    }

    public static void SpawnShips(Entity[] shipsToSpawn)
    {
        foreach (var ship in shipsToSpawn)
        {
            var pos = em.GetComponentData<Translation>(ship);
            var Ship = em.Instantiate(SB.shipClone);
            em.SetComponentData<Translation>(Ship, pos);
            em.AddComponent<CloneTag>(Ship);
        }
    }

    public struct Id : IComponentData, IIdTag
    {
        public int id { get; set; }
    }

    public struct MovementData : IComponentData
    {
        float velocity;
        float3 vector;
    }
}
