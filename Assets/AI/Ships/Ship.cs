using Unity.Entities;
using Unity.Transforms;
using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using Unity.Mathematics;
using Unity.Burst;

public class Ship
{
    //Identification Data
    public int Id { get; set; }
    public int currentSystemId { get; set; }
    public AI masterAI { get; set; }
    public MainSchedual.EventTicketHeapItem currentTicket { get; set; }
    public bool assigned { get; set; }
    //End Identification Data

    //Navigation Data
    public List<int> wayPoints { get; set; }
    public Vector3 finalTargetPosition { get; set; }
    public int targetSystem { get; set; }
    //End Navigation Data

    //Flight Data
    public Vector3 Position { get; set; }
    public Vector3 flyToPosition { get; set; }
    /// <summary>
    /// When setting, the vector math is automatically takinen care of using the ship's position
    /// , just input target vector3
    /// </summary>
    public Vector3 vector { get { return _vector; } set { _vector = (value - Position).normalized; } }
    private Vector3 _vector;
    public float velocity { get; set; }
    //End Flight Data

    //Entity Data
    public EntityManager entityManager { get; set; }
    public Entity activeEntity { get; set; }
    //End Entity Data

    /// <summary>
    /// We retrive the target system subObjects mastersystem id and position,
    /// set assigned to true, 
    /// set the final target position to the target retreived vector 3, 
    /// if target needs to travel out of system we generate a waypoints list, 
    /// we then call FlyToNextTarget to kick off its travel:  
    /// This function only needs a target system subobject and will do all of the rest of the work to get the ship moving, Eventually it will also take a mission type
    /// </summary>
    /// <typeparam name="T">The type ob object must inherit ISystemSubObject</typeparam>
    /// <param name="target">The target System Sub Object</param>
    public void SetTargetAndGo<T>(T target) where T : ISystemSubObject<T>
    {
        assigned = true;
        targetSystem = target.masterSystem.Id;
        finalTargetPosition = target.position;
        if (targetSystem != currentSystemId)
        {
            wayPoints = masterAI.universe.systemWorks.GetPath(currentSystemId, targetSystem);
        }
        FlyToNextTarget();
    }

    /// <summary>
    /// We decide if the ship is inits target position, 
    /// set its next fly to position, 
    /// update its vector, 
    /// adds it to the main schedual heap, 
    /// </summary>
    public void FlyToNextTarget()
    {
        if (currentSystemId == targetSystem)
        {
            flyToPosition = finalTargetPosition;
            vector = flyToPosition;
            MainSchedual.AddToHeap(Vector3.Distance(Position, flyToPosition) / velocity+MainSchedual.masterTime, 1, this);
            if (activeEntity != Entity.Null)
            {
                SetEntityData();
            }
        }
        else
        {
            
            if (masterAI.universe.systemWorks.GetSystem(currentSystemId).connections.ContainsKey(wayPoints[wayPoints.Count - 1]) != true)
            {
                MonoBehaviour.print("Target system: " + targetSystem);
                MonoBehaviour.print(string.Format("Current System: {0}, next waypoint Step: {1}", currentSystemId, wayPoints[wayPoints.Count - 1]));
                foreach (var item in masterAI.universe.systemWorks.GetSystem(currentSystemId).connections.Keys)
                {
                    MonoBehaviour.print(string.Format("System: {0} contains connection: {1}", currentSystemId, item));
                }
                foreach (var step in wayPoints)
                {
                    MonoBehaviour.print(string.Format("waypoint step: {0}", step));
                }
            }
            flyToPosition = masterAI.universe.systemWorks.GetSystem(currentSystemId).connections[wayPoints[wayPoints.Count - 1]].Position;
            vector = flyToPosition;
            MainSchedual.AddToHeap(Vector3.Distance(Position, flyToPosition) / velocity + MainSchedual.masterTime, 0, this);
            if (activeEntity != Entity.Null)
            {
                SetEntityData();
            }
        }
    }
    /// <summary>
    /// We exchange data, 
    /// we set our new position and nav data, 
    /// destroy or instantiate entity, 
    /// prepare and execute next flyToPosition, 
    /// </summary>
    public void WarpNext()
    {
        UniverseSystem targetSystemJump = masterAI.universe.systemWorks.GetSystem(wayPoints[wayPoints.Count - 1]);
        if (targetSystemJump.Id != wayPoints[wayPoints.Count-1])
        {
            Debug.LogError("here");
        }
        UniverseSystem currentSystem = masterAI.universe.systemWorks.GetSystem(currentSystemId);

        if (masterAI.universe.inSystem==false)
        {
            Debug.DrawLine(targetSystemJump.definingPoint.Position, currentSystem.definingPoint.Position, Color.green);
        }
        targetSystemJump.containedShips.Add(Id, this);
        if (targetSystemJump.connections.ContainsKey(currentSystemId)!=true)
        {
            MonoBehaviour.print("current system: " + currentSystemId);
            MonoBehaviour.print("targetJump system: " + wayPoints[wayPoints.Count-1]);
            MonoBehaviour.print("Final target system: " + targetSystem);
            foreach (var item in targetSystemJump.connections.Keys)
            {
                MonoBehaviour.print(string.Format("Target system: {0} contains connection to system: {1}", targetSystemJump.Id, item));
                if (targetSystemJump.Id!=wayPoints[wayPoints.Count-1])
                {
                    Debug.LogError("here");
                }
            }
            foreach (var item in currentSystem.connections.Keys)
            {
                MonoBehaviour.print(string.Format("current system: {0} contains connection to system: {1}", currentSystemId,item));

            }
            foreach (var item in wayPoints)
            {
                MonoBehaviour.print("Waypoint step: " + item);
            }
        }


        Position = targetSystemJump.connections[currentSystemId].Position;


        currentSystem.containedShips.Remove(Id);
        wayPoints.RemoveAt(wayPoints.Count - 1);

        if (masterAI.universe.inSystem && currentSystemId == masterAI.universe.selectedSystem)
        {
            DestoryEntityFor();
        }
        else if (masterAI.universe.inSystem && targetSystemJump.Id == masterAI.universe.selectedSystem)
        {
            CreateEntityFor(true);
        }

        currentSystemId = targetSystemJump.Id;
        FlyToNextTarget();
    }

    public void WarpToWayPointIndex()
    {

    }
    /// <summary>
    /// We set our position to our target, 
    /// set our vector to zero, 
    /// set assigned to false, 
    /// add the ship to its Ai's unassiagned ships list, 
    /// update its active entity if it has one
    /// </summary>
    public void ArrivedAtTarget()
    {
        Position = flyToPosition;
        vector = Position;
        assigned = false;
        masterAI.unassignedShips.Add(this);
        if (activeEntity != Entity.Null)
        {
            SetEntityData();
        }
    }
    /// <summary>
    /// we use the ships current fly to position and how far the current ticket is from executing to update the ships position
    /// </summary>
    /// <returns>ships next vector 3</returns>
    public Vector3 GetNextPosition()
    {
        Position = Vector3.Lerp(Position, flyToPosition, Mathf.InverseLerp(currentTicket.timeAtWrite, currentTicket.timeAtExecute, MainSchedual.masterTime));
        return Position;
    }


    /// <summary>
    /// Instantiate a ship clone, 
    /// set its translate, 
    /// add the shipCloneTag, 
    /// add and set ShipMoveData, 
    /// We set its active entity, 
    /// </summary>
    public void CreateEntityFor(bool newSpawn = false)
    {
        if (activeEntity != Entity.Null)
        {
            Debug.LogError("Entity being made for a ship who already has an active entity");
        }
        Entity shipClone = entityManager.Instantiate(StaticShipData.shipEntityTemplate);
        if (newSpawn)
        {
            entityManager.SetComponentData(shipClone, new Translation { Value = Position });
        }
        else
        {
            entityManager.SetComponentData(shipClone, new Translation { Value = GetNextPosition() });
        }
        entityManager.AddComponent<shipCloneTag>(shipClone);
        entityManager.AddComponent<shipMoveData>(shipClone);
        entityManager.SetComponentData(shipClone, new shipMoveData() { vector = vector, velocity = velocity });
        activeEntity = shipClone;
    }
    public void DestoryEntityFor()
    {
        entityManager.DestroyEntity(activeEntity);
        activeEntity = Entity.Null;
    }
    public void SetEntityData()
    {
        entityManager.SetComponentData(activeEntity, new Translation { Value = Position });
        entityManager.SetComponentData(activeEntity, new shipMoveData { vector = vector, velocity = velocity});
        entityManager.SetComponentData(activeEntity, new Rotation { Value = quaternion.LookRotation(vector, math.up())});
    }
    
    /// <summary>
    /// We build the ship, 
    /// set its id, 
    /// set its ai, 
    /// add it to the appropiate system's containedShips, 
    /// set its current system, 
    /// set assigned to false, 
    /// uptick statics ship data's count, 
    /// set its position, 
    /// set TargetPosition to vector.zero, 
    /// pick a random velocity, 
    /// and set its entity manager, 
    /// </summary>
    /// <param name="startPos"></param>
    /// <param name="_entityManager"></param>
    /// <param name="startSystem"></param>
    /// <param name="_masterAI"></param>
    public Ship(Vector3 startPos, EntityManager _entityManager, int startSystem, AI _masterAI)
    {
        Id = StaticShipData.count;
        masterAI = _masterAI;
        masterAI.universe.systemWorks.GetSystem(startSystem).containedShips.Add(Id, this);
        currentSystemId = startSystem;
        assigned = false;
        StaticShipData.count++;
        Position = startPos;
        flyToPosition = Vector3.zero;
        velocity = UnityEngine.Random.Range(10, 30f);
        entityManager = _entityManager;
    }

    
}

public static class StaticShipData
{
    public static int count = 0;
    public static GameObjectConversionSettings settings = GameObjectConversionSettings.FromWorld(World.DefaultGameObjectInjectionWorld, null);
    public static Entity shipEntityTemplate = PrefabAccessor.entityTemplateArray[5];
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
