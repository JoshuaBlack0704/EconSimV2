using Unity.Collections;
using Unity.Entities;
using Unity.Jobs;
using Unity.Mathematics;
using Unity.Transforms;
using UnityEngine;

public static class Ships
{
    static EntityManager em = SB.em;
    static EntityArchetype shipArc;
    static int maxShipID = 0;

    //ShipInitializer
    public static void Initialize( )
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

        foreach ( Entity system in systems )
        {
            float size = em.GetComponentData<SystemEntity.SystemData>(system).size;
            int sysId = em.GetComponentData<SystemEntity.Id>(system).id;

            for ( int i = 0; i < shipsPerSystem; i++ )
            {
                Entity ship = em.CreateEntity(shipArc);
                float3 pos = SB.rand.NextFloat3(0, size);
                float3 vect = SB.rand.NextFloat3Direction( );
                float velocity = SB.rand.NextFloat(10, 50);
                em.SetComponentData<Id>(ship, new Id( ) { id = maxShipID });
                maxShipID++;
                em.SetComponentData<Translation>(ship, new Translation( ) { Value = pos });
                em.SetComponentData<SystemID>(ship, new SystemID( ) { Id = sysId });
                em.SetComponentData<MovementData>(ship, new MovementData( ) { velocity = velocity, vector = vect });
                em.AddComponent<Tickets.TimeData>(ship);
                em.AddComponent<TargetPos>(ship);
                em.AddComponentData<Idle>(ship, new Idle( ) { isIdle = true });
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
    public struct Idle : IComponentData { public bool isIdle; }
    public struct HasClone : IComponentData { public Entity clone; }
    public struct MoveMission : IComponentData { }
    public struct CloneData : IComponentData { public Entity masterShip; }
}

public class ShipCloneAnimator : SystemBase
{
    EntityCommandBufferSystem ecbs;
    protected override void OnCreate( )
    {
        base.OnCreate( );
        ecbs = World.GetOrCreateSystem<EndSimulationEntityCommandBufferSystem>( );
    }

    protected override void OnUpdate( )
    {
        EntityCommandBuffer.ParallelWriter ecb = ecbs.CreateCommandBuffer( ).AsParallelWriter( );
        float step = SB.masterDeltaTime;

        JobHandle updateHandle = Entities.WithName("AnimatorPreUpdate").WithAll<Ships.Id>( ).ForEach((int entityInQueryIndex, in Ships.MovementData moveData, in Ships.HasClone clone, in Ships.Idle idle) =>
         {
             ecb.SetComponent<Ships.MovementData>(entityInQueryIndex, clone.clone, moveData);
             ecb.SetComponent<Ships.Idle>(entityInQueryIndex, clone.clone, new Ships.Idle( ) { isIdle = idle.isIdle });
         }).ScheduleParallel(this.Dependency);


        JobHandle animateHandle = Entities.WithAll<Ships.Id, CloneTag>( ).ForEach((ref Translation trans, ref Rotation rot, in Ships.MovementData moveData, in Ships.CloneData cloneData, in Ships.Idle idle) =>
         {
             if ( idle.isIdle == false )
             {
                 trans.Value += moveData.vector * moveData.velocity * step;
                 rot = new Rotation( ) { Value = quaternion.LookRotation(moveData.vector, math.up( )) };
             }
         }).ScheduleParallel(this.Dependency);

        this.Dependency = JobHandle.CombineDependencies(updateHandle, animateHandle);

        ecbs.AddJobHandleForProducer(Dependency);
    }
}

public class ShipTicketExecutor : SystemBase
{
    EntityCommandBufferSystem ecbs;
    public int ticketsExecutedPerFrame;
    public int totalTicketsprocessed = 0;
    protected override void OnCreate( )
    {
        base.OnCreate( );
        ecbs = World.GetOrCreateSystem<EndSimulationEntityCommandBufferSystem>( );
    }
    protected override void OnUpdate( )
    {
        EntityCommandBuffer.ParallelWriter ecb = ecbs.CreateCommandBuffer( ).AsParallelWriter( );
        float time = SB.masterTime;
        int total = 0;



        Entities.WithAll<Ships.MoveMission>( ).WithNone<Ships.HasClone>( ).ForEach((Entity ship, int entityInQueryIndex, ref Translation pos, ref Ships.Idle idle, ref Ships.MovementData moveData, in Tickets.TimeData exe, in Ships.TargetPos targetPos) =>
          {
              if ( exe.timeAtExecute < time )
              {
                  pos.Value = targetPos.position;
                  moveData.vector = new float3( );
                  idle.isIdle = true;

              }
          }).ScheduleParallel( );

        Entities.WithAll<Ships.MoveMission>( ).ForEach((Entity ship, int entityInQueryIndex, ref Translation pos, ref Ships.Idle idle, ref Ships.MovementData moveData, in Tickets.TimeData exe, in Ships.TargetPos targetPos, in Ships.HasClone clone) =>
         {
             if ( exe.timeAtExecute < time )
             {
                 pos.Value = targetPos.position;
                 idle.isIdle = true;
                 moveData.vector = new float3( );
                 ecb.SetComponent<Translation>(entityInQueryIndex, clone.clone, pos);

             }
         }).ScheduleParallel( );

        ecbs.AddJobHandleForProducer(Dependency);

        totalTicketsprocessed += total;
    }
}

[UpdateInGroup(typeof(InitializationSystemGroup))]
public class ShipCloneDeleter : SystemBase
{
    EntityCommandBufferSystem ecbs;

    protected override void OnCreate( )
    {
        base.OnCreate( );
        ecbs = World.GetOrCreateSystem<EndSimulationEntityCommandBufferSystem>( );
    }

    protected override void OnUpdate( )
    {
        EntityCommandBuffer.ParallelWriter ecb = ecbs.CreateCommandBuffer( ).AsParallelWriter( );
        Entities.WithAll<BaseEntity.DeleteCloneTag>( ).ForEach((Entity clone, int entityInQueryIndex, in Ships.CloneData master) =>
         {
             ecb.RemoveComponent<Ships.HasClone>(entityInQueryIndex, master.masterShip);
             ecb.DestroyEntity(entityInQueryIndex, clone);
         }).ScheduleParallel( );
        ecbs.AddJobHandleForProducer(Dependency);
        ecbs.Update( );
    }
}

public class ShipCloneSpawner : SystemBase
{
    EntityCommandBufferSystem ecbs;


    protected override void OnCreate( )
    {
        base.OnCreate( );
        ecbs = World.GetOrCreateSystem<EndSimulationEntityCommandBufferSystem>( );
    }



    protected override void OnUpdate( )
    {
        EntityCommandBuffer.ParallelWriter ecb = ecbs.CreateCommandBuffer( ).AsParallelWriter( );
        Entity shipClone = SB.shipClone;
        float time = SB.masterTime;

        Entities.WithAll<BaseEntity.SpawnCloneTag>( ).ForEach((Entity ship, int entityInQueryIndex, in Ships.Id Id, in Translation pos, in Ships.MovementData moveData, in Ships.TargetPos targetPosData, in Tickets.TimeData timeData, in Ships.Idle idle) =>
         {
             if ( idle.isIdle )
             {
                 Entity clone = ecb.Instantiate(entityInQueryIndex, shipClone);

                 ecb.SetComponent<Translation>(entityInQueryIndex, clone, pos);
                 ecb.AddComponent<CloneTag>(entityInQueryIndex, clone);
                 ecb.AddComponent<Ships.MovementData>(entityInQueryIndex, clone, moveData);
                 ecb.AddComponent<Ships.Id>(entityInQueryIndex, clone, Id);
                 ecb.AddComponent<Ships.CloneData>(entityInQueryIndex, clone, new Ships.CloneData( ) { masterShip = ship });
                 ecb.AddComponent<Ships.HasClone>(entityInQueryIndex, ship, new Ships.HasClone( ) { clone = clone });
                 ecb.AddComponent<Ships.Idle>(entityInQueryIndex, clone, new Ships.Idle( ) { isIdle = idle.isIdle });
                 ecb.RemoveComponent<BaseEntity.SpawnCloneTag>(entityInQueryIndex, ship);
             }
             else
             {
                 Entity clone = ecb.Instantiate(entityInQueryIndex, shipClone);
                 float3 targetPos = targetPosData.position;

                 Vector3 spawnPos = Vector3.Lerp(pos.Value, targetPos, Mathf.InverseLerp(timeData.timeAtWrite, timeData.timeAtExecute, time));

                 ecb.SetComponent<Translation>(entityInQueryIndex, clone, new Translation( ) { Value = spawnPos });
                 ecb.AddComponent<CloneTag>(entityInQueryIndex, clone);
                 ecb.AddComponent<Ships.MovementData>(entityInQueryIndex, clone, moveData);
                 ecb.AddComponent<Ships.Id>(entityInQueryIndex, clone, Id);
                 ecb.AddComponent<Ships.CloneData>(entityInQueryIndex, clone, new Ships.CloneData( ) { masterShip = ship });
                 ecb.AddComponent<Ships.HasClone>(entityInQueryIndex, ship, new Ships.HasClone( ) { clone = clone });
                 ecb.AddComponent<Ships.Idle>(entityInQueryIndex, clone, new Ships.Idle( ) { isIdle = idle.isIdle });
                 ecb.RemoveComponent<BaseEntity.SpawnCloneTag>(entityInQueryIndex, ship);
             }


         }).ScheduleParallel( );

        ecbs.AddJobHandleForProducer(Dependency);

    }
}
public class AIEmulator : SystemBase
{
    EntityCommandBufferSystem ecbs;

    protected override void OnCreate( )
    {
        base.OnCreate( );
        ecbs = World.GetOrCreateSystem<EndSimulationEntityCommandBufferSystem>( );
    }

    protected override void OnUpdate( )
    {
        EntityCommandBuffer.ParallelWriter ecb = ecbs.CreateCommandBuffer( ).AsParallelWriter( );
        float time = SB.masterTime;

        NativeArray<Unity.Mathematics.Random> randomArray = World.GetExistingSystem<RandomSystem>( ).RandomArray;

        Entities.WithNativeDisableParallelForRestriction(randomArray).ForEach((Entity ship, int entityInQueryIndex, int nativeThreadIndex, ref Ships.TargetPos target, ref Tickets.TimeData timeData, ref Ships.MovementData moveData, ref Ships.Idle idle, in Translation pos) =>
        {
            if ( idle.isIdle )
            {
                Unity.Mathematics.Random rand = randomArray[nativeThreadIndex];
                target.position = rand.NextFloat3(0, 50);
                float3 vect = target.position - pos.Value;
                moveData.vector = math.normalize(vect);
                timeData.timeAtWrite = time;
                timeData.timeAtExecute = time + (math.distance(target.position, pos.Value) / moveData.velocity);

                idle.isIdle = false;
                ecb.AddComponent<Ships.MoveMission>(entityInQueryIndex, ship);

                randomArray[nativeThreadIndex] = rand;
            }
        }).ScheduleParallel( );

        ecbs.AddJobHandleForProducer(Dependency);
    }
}


