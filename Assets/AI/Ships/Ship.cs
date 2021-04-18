using Unity.Entities;
using Unity.Transforms;
using UnityEngine;
using Unity.Mathematics;
using Unity.Burst;

public class Ship
{
    public int Id { get; set; }
    public MainSchedual.EventTicketHeapItem currentTicket { get; set; }
    public bool assigned { get; set; }
    public Vector3 Position { get; set; }
    public Vector3 targetPosition { get; set; }
    public Vector3 vector { get; set; }
    
    public float velocity { get; set; }
    public EntityManager entityManager { get; set; }
    public Entity activeEntity { get; set; }

    public void PickNewTarget()
    {
        var randPoint = ShipTester.testPoints[UnityEngine.Random.Range(0, ShipTester.testPoints.Count)];

        Position = targetPosition;
        targetPosition = randPoint;
        vector = (targetPosition - Position).normalized;
        if (activeEntity != Entity.Null)
        {
            entityManager.SetComponentData(activeEntity, new shipMoveData { vector = vector, velocity = velocity});
            entityManager.SetComponentData(activeEntity, new Translation { Value = Position});
        }
        MainSchedual.AddToHeap(Vector3.Distance(Position, targetPosition)/velocity+MainSchedual.masterTime, 0, this);
        var t = Time.deltaTime;
        var t2 = Time.time;
    }
    public void CreateEntityFor()
    {
        if (activeEntity != Entity.Null)
        {
            Debug.LogError("Entity being made for a ship who already has an active entity");
        }
        Entity shipClone = entityManager.Instantiate(StaticShipData.shipEntityTemplate);
        entityManager.AddComponent<shipCloneTag>(shipClone);
        entityManager.AddComponent<shipMoveData>(shipClone);
        entityManager.SetComponentData(shipClone, new shipMoveData() { vector = vector, velocity = velocity});
        activeEntity = shipClone;
    }
    public void DestoryEntityFor()
    {
        entityManager.DestroyEntity(activeEntity);
        activeEntity = Entity.Null;
    }
    

    public Ship(Vector3 startPos, World _world)
    {
        Id = StaticShipData.count;
        assigned = false;
        StaticShipData.count++;
        Position = startPos;
        velocity = UnityEngine.Random.Range(5, 50f);
        entityManager = _world.EntityManager;
    }

    
}

public static class StaticShipData
{
    public static int count = 0;
    public static GameObjectConversionSettings settings = GameObjectConversionSettings.FromWorld(World.DefaultGameObjectInjectionWorld, null);
    public static Entity shipEntityTemplate = GameObjectConversionUtility.ConvertGameObjectHierarchy(PrefabAccessor.gameObjectArray[5], settings);
}

public struct shipMoveData : IComponentData
{
    public Unity.Mathematics.float3 vector;
    public float velocity;
}

public struct shipCloneTag : IComponentData { }

public class ShipAnimator : SystemBase
{
    [BurstCompile]
    protected override void OnUpdate()
    {
        float timePassed = MainSchedual.masterDeltaTime;
        if (MainSchedual.notPaused)
        {
            Entities.WithAll<shipCloneTag>().ForEach((ref Translation position, ref Rotation rotation, in shipMoveData moveData) => {

                position.Value.x = position.Value.x + (moveData.vector.x * moveData.velocity * timePassed);
                position.Value.y = position.Value.y + (moveData.vector.y * moveData.velocity * timePassed);
                position.Value.z = position.Value.z + (moveData.vector.z * moveData.velocity * timePassed);
                rotation = new Rotation() { Value = quaternion.LookRotationSafe(moveData.vector, math.up()) };

            }).ScheduleParallel();
        }
        
    }
}
