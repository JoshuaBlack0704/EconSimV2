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

    //ShipInitializer
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
                var pos = SB.rand.NextFloat3(0, size);
                var vect = SB.rand.NextFloat3Direction();
                var velocity = SB.rand.NextFloat(10, 50);
                em.SetComponentData<Id>(ship, new Id() { id = maxShipID});
                maxShipID++;
                em.SetComponentData<Translation>(ship, new Translation() { Value = pos });
                em.SetComponentData<SystemID>(ship, new SystemID() { Id = sysId });
                em.SetComponentData<MovementData>(ship, new MovementData() { velocity = velocity, vector = vect});
                em.AddComponent<Tickets.TimeAtWrite>(ship);
                em.AddComponent<Tickets.TimeAtExecute>(ship);
                em.AddComponent<TargetPos>(ship);
                em.AddComponent<Idle>(ship);
            }
        }
    }

    public static void SpawnShips(Entity[] shipsToSpawn)
    {
        foreach (var ship in shipsToSpawn)
        {
            var pos = em.GetComponentData<Translation>(ship);
            var moveData = em.GetComponentData<MovementData>(ship);
            var Ship = em.Instantiate(SB.shipClone);
            var Id = em.GetComponentData<Id>(ship);
            var targetPos = em.GetComponentData<TargetPos>(Ship).position;
            Tickets.GetTicket(ship, out Tickets.TimeAtExecute exe, out Tickets.TimeAtWrite write);

            var spawnPos = Vector3.Lerp(pos.Value, targetPos, Mathf.InverseLerp(write.time, exe.time, SB.masterTime));

            em.SetComponentData<Translation>(Ship, new Translation() { Value = spawnPos});
            em.AddComponent<CloneTag>(Ship);
            em.AddComponentData<MovementData>(Ship, moveData);
            em.AddComponentData<Id>(Ship, Id);
            em.AddComponentData<CloneData>(Ship, new CloneData() { masterShip = ship });
        }
    }

    public struct Id : IComponentData, IIdTag
    {
        public int id { get; set; }
    }

    public struct MovementData : IComponentData
    {
        public float velocity;
        public float3 vector;
    }

    public struct TargetPos : IComponentData
    {
        public float3 position;
    }

    public struct Idle : IComponentData { }
    public struct HasClone : IComponentData { public Entity clone; }
    public struct MoveMission : IComponentData { }
    public struct CloneData : IComponentData { public Entity masterShip; }
}

public class ShipCloneAnimator : SystemBase
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
        var step = SB.masterDeltaTime;

        Entities.WithAll<Ships.Id>().ForEach((int entityInQueryIndex, in Ships.MovementData moveData, in Ships.HasClone clone) =>
        {
            ecb.SetComponent<Ships.MovementData>(entityInQueryIndex, clone.clone, moveData);
        }).ScheduleParallel();


        Entities.WithAll<Ships.Id, CloneTag>().WithNone<Ships.Idle>().ForEach((ref Translation trans, ref Rotation rot, in Ships.MovementData moveData, in Ships.CloneData cloneData) =>
        {
            trans.Value += moveData.vector * moveData.velocity * step;
            rot = new Rotation() { Value = quaternion.LookRotation(moveData.vector, math.up()) };
        }).ScheduleParallel();

        ecbs.AddJobHandleForProducer(Dependency);
    }
}

public class ShipTicketExecutor : SystemBase
{
    EntityCommandBufferSystem ecbs;
    EntityQuery query;
    public int ticketsExecutedPerFrame;
    protected override void OnCreate()
    {
        base.OnCreate();
        ecbs = World.GetOrCreateSystem<EndSimulationEntityCommandBufferSystem>();
        query = World.DefaultGameObjectInjectionWorld.EntityManager.CreateEntityQuery(ComponentType.ReadOnly<Tickets.TimeAtExecute>());
    }
    protected override void OnUpdate()
    {
        var ecb = ecbs.CreateCommandBuffer().AsParallelWriter();
        var time = SB.masterTime;
        



        Entities.WithAll<Ships.MoveMission>().WithNone<Ships.HasClone>().ForEach((Entity ship, int entityInQueryIndex, ref Translation pos, in Tickets.TimeAtExecute exe, in Ships.TargetPos targetPos) =>
        {
            if (exe.time < time)
            {
                pos.Value = targetPos.position;
                ecb.AddComponent<Ships.Idle>(entityInQueryIndex, ship);
            }
        }).ScheduleParallel();

        Entities.WithAll<Ships.MoveMission>().ForEach((Entity ship, int entityInQueryIndex, ref Translation pos, in Tickets.TimeAtExecute exe, in Ships.TargetPos targetPos, in Ships.HasClone clone) =>
        {
            if (exe.time < time)
            {
                pos.Value = targetPos.position;
                ecb.AddComponent<Ships.Idle>(entityInQueryIndex, ship);
                ecb.SetComponent<Translation>(entityInQueryIndex, clone.clone, pos);
            }
        }).ScheduleParallel();

        ecbs.AddJobHandleForProducer(Dependency);

        if ((int)Time.ElapsedTime % 5 == 0)
        {
            int count = 0;
            var list = query.ToComponentDataArray<Tickets.TimeAtExecute>(Allocator.Temp);
            foreach (var item in list)
            {
                if (item.time < time)
                {
                    count++;
                }
            }
            ticketsExecutedPerFrame = count;
            //Debug.Log(string.Format("{0} tickets executed this frame", count));
        }
    }
}

[UpdateInGroup(typeof(InitializationSystemGroup))]
public class ShipCloneDeleter : SystemBase
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
        Entities.WithAll<BaseEntity.DeleteCloneTag>().ForEach((Entity clone, int entityInQueryIndex, in Ships.CloneData master) =>
        {
            ecb.RemoveComponent<Ships.HasClone>(entityInQueryIndex, master.masterShip);
            ecb.DestroyEntity(entityInQueryIndex, clone);
        }).ScheduleParallel();
        ecbs.AddJobHandleForProducer(Dependency);
        ecbs.Update();
    }
}

public class ShipCloneSpawner : SystemBase
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
        Entity shipClone = SB.shipClone;
        var time = SB.masterTime;

        Entities.WithAll<BaseEntity.SpawnCloneTag>().WithNone<Ships.Idle>().ForEach((Entity ship, int entityInQueryIndex, in Ships.Id Id, in Translation pos, in Ships.MovementData moveData, in Ships.TargetPos targetPosData, in Tickets.TimeAtExecute exe, in Tickets.TimeAtWrite write) =>
        {
            Entity clone = ecb.Instantiate(entityInQueryIndex, shipClone);
            var targetPos = targetPosData.position;

            var spawnPos = Vector3.Lerp(pos.Value, targetPos, Mathf.InverseLerp(write.time, exe.time, time));

            ecb.SetComponent<Translation>(entityInQueryIndex, clone, new Translation() { Value = spawnPos });
            ecb.AddComponent<CloneTag>(entityInQueryIndex, clone);
            ecb.AddComponent<Ships.MovementData>(entityInQueryIndex, clone, moveData);
            ecb.AddComponent<Ships.Id>(entityInQueryIndex, clone, Id);
            ecb.AddComponent<Ships.CloneData>(entityInQueryIndex, clone, new Ships.CloneData() { masterShip = ship });
            ecb.AddComponent<Ships.HasClone>(entityInQueryIndex, ship, new Ships.HasClone() { clone = clone });
            ecb.RemoveComponent<BaseEntity.SpawnCloneTag>(entityInQueryIndex, ship);

        }).ScheduleParallel();

        Entities.WithAll<BaseEntity.SpawnCloneTag, Ships.Idle>().ForEach((Entity ship, int entityInQueryIndex, in Ships.Id id, in Translation pos, in Ships.MovementData moveData) => 
        {
            Entity clone = ecb.Instantiate(entityInQueryIndex, shipClone);

            ecb.SetComponent<Translation>(entityInQueryIndex, clone, pos);
            ecb.AddComponent<CloneTag>(entityInQueryIndex, clone);
            ecb.AddComponent<Ships.MovementData>(entityInQueryIndex, clone, moveData);
            ecb.AddComponent<Ships.Id>(entityInQueryIndex, clone, id);
            ecb.AddComponent<Ships.CloneData>(entityInQueryIndex, clone, new Ships.CloneData() { masterShip = ship });
            ecb.AddComponent<Ships.HasClone>(entityInQueryIndex, ship, new Ships.HasClone() { clone = clone });
            ecb.RemoveComponent<BaseEntity.SpawnCloneTag>(entityInQueryIndex, ship);

        }).ScheduleParallel();

        ecbs.AddJobHandleForProducer(Dependency);

    }
}
public class AIEmulator : SystemBase
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
        var time = SB.masterTime;

        var randomArray = World.GetExistingSystem<RandomSystem>().RandomArray;

        Entities.WithNativeDisableParallelForRestriction(randomArray).WithAll<Ships.Idle>().ForEach((Entity ship, int entityInQueryIndex, int nativeThreadIndex, ref Ships.TargetPos target, ref Tickets.TimeAtWrite write, ref Tickets.TimeAtExecute exe, ref Ships.MovementData moveData, in Translation pos) =>
        {
            var rand = randomArray[nativeThreadIndex];
            target.position = rand.NextFloat3(0, 50);
            float3 vect = target.position - pos.Value;
            moveData.vector = math.normalize(vect);
            write.time = time;
            exe.time = time + (math.distance(target.position, pos.Value) / moveData.velocity);

            ecb.RemoveComponent<Ships.Idle>(entityInQueryIndex, ship);
            ecb.AddComponent<Ships.MoveMission>(entityInQueryIndex, ship);

            randomArray[nativeThreadIndex] = rand;
        }).ScheduleParallel();

        ecbs.AddJobHandleForProducer(Dependency);
    }
}


