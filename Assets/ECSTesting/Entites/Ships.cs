using ECSTesting.Objects;
using Unity.Collections;
using Unity.Entities;
using Unity.Jobs;
using Unity.Mathematics;
using Unity.Transforms;
using UnityEngine;

namespace ECSTesting.Entites
{
    using ECSTesting.Components.Ships;
    using ECSTesting.Components.Tickets;
    using SysComps = ECSTesting.Components.Systems;
    public static class Ships
    {
        static EntityManager em = SB.em;
        static EntityArchetype shipArc;
        static int maxShipID = 0;

        //ShipInitializer
        public static void Initialize()
        {
            shipArc = em.CreateArchetype(new ComponentType[]
            {
            typeof(Translation), typeof(Id), typeof(MovementData), typeof(SystemID)
            });
        }

        public static void GenerateShipsFor(int systemCode, AI aiOwner, GenerationSettings genSettings, out NativeArray<Entity> newShips)
        {
            int count = genSettings.shipsPerSystem;
            newShips = new NativeArray<Entity>(count, Allocator.Temp);
            em.CreateEntity(shipArc, newShips);

            for ( int i = 0; i < newShips.Length; i++ )
            {
                var ship = newShips[i];

                float3 pos = SB.rand.NextFloat3(0, 100);
                float3 vect = SB.rand.NextFloat3Direction();
                float velocity = SB.rand.NextFloat(10, 50);
                em.SetComponentData(ship, new Id() { id = maxShipID });
                maxShipID++;
                em.SetComponentData(ship, new Translation() { Value = pos });
                em.SetComponentData(ship, new SystemID() { Id = systemCode });
                em.SetComponentData(ship, new MovementData() { velocity = velocity, vector = vect });
                em.AddComponent<TimeData>(ship);
                em.AddComponent<TargetPos>(ship);
                em.AddComponentData(ship, new Idle() { isIdle = true });
                em.AddComponentData(ship, new ShipAIData() { aiCode = aiOwner.Id });
            }
        }

        public static void GenerateShipsForAll(int shipsPerSystem)
        {
            EntityQuery query = em.CreateEntityQuery(typeof(SysComps.Id));
            NativeArray<Entity> systems = query.ToEntityArray(Allocator.Temp);

            foreach ( Entity system in systems )
            {
                float size = em.GetComponentData<SysComps.SystemData>(system).size;
                int sysId = em.GetComponentData<SysComps.Id>(system).id;

                for ( int i = 0; i < shipsPerSystem; i++ )
                {
                    Entity ship = em.CreateEntity(shipArc);
                    float3 pos = SB.rand.NextFloat3(0, size);
                    float3 vect = SB.rand.NextFloat3Direction();
                    float velocity = SB.rand.NextFloat(10, 50);
                    em.SetComponentData(ship, new Id() { id = maxShipID });
                    maxShipID++;
                    em.SetComponentData(ship, new Translation() { Value = pos });
                    em.SetComponentData(ship, new SystemID() { Id = sysId });
                    em.SetComponentData(ship, new MovementData() { velocity = velocity, vector = vect });
                    em.AddComponent<TimeData>(ship);
                    em.AddComponent<TargetPos>(ship);
                    em.AddComponentData(ship, new Idle() { isIdle = true });
                }
            }
        }
        //Old spawner
        //public static void SpawnShips(Entity[] shipsToSpawn)
        //{
        //    foreach (var ship in shipsToSpawn)
        //    {
        //        var pos = em.GetComponentData<Translation>(ship);
        //        var moveData = em.GetComponentData<MovementData>(ship);
        //        var Ship = em.Instantiate(SB.shipClone);
        //        var Id = em.GetComponentData<Id>(ship);
        //        var targetPos = em.GetComponentData<TargetPos>(Ship).position;

        //        var spawnPos = Vector3.Lerp(pos.Value, targetPos, Mathf.InverseLerp(write.time, exe.time, SB.masterTime));

        //        em.SetComponentData<Translation>(Ship, new Translation() { Value = spawnPos});
        //        em.AddComponent<CloneTag>(Ship);
        //        em.AddComponentData<MovementData>(Ship, moveData);
        //        em.AddComponentData<Id>(Ship, Id);
        //        em.AddComponentData<CloneData>(Ship, new CloneData() { masterShip = ship });
        //    }
        //}


    }


}


