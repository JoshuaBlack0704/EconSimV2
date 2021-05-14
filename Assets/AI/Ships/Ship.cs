using System.Collections.Generic;
using Unity.Entities;
using Unity.Mathematics;
using Unity.Transforms;
using UnityEngine;

public class Ship
{
    //Identification Data
    public int Id { get; set; }
    public int currentSystemId { get; set; }
    public AI masterAI { get; set; }
    public MainSchedual.EventTicketHeapItem currentTicket { get { return _currentTicket; } set { _posAtTicketWrite = Position; _currentTicket = value; } }
    private MainSchedual.EventTicketHeapItem _currentTicket;
    private Vector3 _posAtTicketWrite;
    private Entity targetEntity;
    public bool assigned { get; set; }
    public int missionType;
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
    public void SetTargetAndGo(Entity target, int _missionType)
    {
        assigned = true;
        missionType = _missionType;
        targetSystem = PrefabAccessor.entityManager.GetComponentData<masterSystemId>(target).id;
        finalTargetPosition = PrefabAccessor.entityManager.GetComponentData<Translation>(target).Value;
        if ( targetSystem != currentSystemId )
        {
            wayPoints = masterAI.universe.systemWorks.GetPath(currentSystemId, targetSystem, this);
        }
        if ( _missionType == 4 )
        {
            missionType = _missionType;
            EconomicMethods.ReserveResource<FoodResource>(target, 10);
            targetEntity = target;
        }
        FlyToNextTarget( );
    }

    /// <summary>
    /// We decide if the ship is inits target position, 
    /// set its next fly to position, 
    /// update its vector, 
    /// adds it to the main schedual heap, 
    /// </summary>
    public void FlyToNextTarget( )
    {
        if ( currentSystemId == targetSystem )
        {
            flyToPosition = finalTargetPosition;
            vector = flyToPosition;
            MainSchedual.EventTicketHeapItem ticket = MainSchedual.AddToSystemV2(Vector3.Distance(Position, flyToPosition) / velocity, 1, this);
            ticket.entityReference = targetEntity;
            if ( activeEntity != Entity.Null )
            {
                SetEntityData( );
            }
        }
        else
        {

            if ( masterAI.universe.systemWorks.GetSystem(currentSystemId).connections.ContainsKey(wayPoints[wayPoints.Count - 1]) != true )
            {
                MonoBehaviour.print("Target system: " + targetSystem);
                MonoBehaviour.print(string.Format("Current System: {0}, next waypoint Step: {1}", currentSystemId, wayPoints[wayPoints.Count - 1]));
                foreach ( int item in masterAI.universe.systemWorks.GetSystem(currentSystemId).connections.Keys )
                {
                    MonoBehaviour.print(string.Format("System: {0} contains connection: {1}", currentSystemId, item));
                }
                foreach ( int step in wayPoints )
                {
                    MonoBehaviour.print(string.Format("waypoint step: {0}", step));
                }
            }
            flyToPosition = masterAI.universe.systemWorks.GetSystem(currentSystemId).connections[wayPoints[wayPoints.Count - 1]].Position;
            vector = flyToPosition;
            MainSchedual.AddToSystemV2(Vector3.Distance(Position, flyToPosition) / velocity, 0, this);

            if ( activeEntity != Entity.Null )
            {
                SetEntityData( );
            }
        }
    }
    /// <summary>
    /// We exchange data, 
    /// we set our new position and nav data, 
    /// destroy or instantiate entity, 
    /// prepare and execute next flyToPosition, 
    /// </summary>
    public void WarpNext( )
    {
        UniverseSystem targetSystemJump = masterAI.universe.systemWorks.GetSystem(wayPoints[wayPoints.Count - 1]);
        if ( targetSystemJump.Id != wayPoints[wayPoints.Count - 1] )
        {
            Debug.LogError("here");
        }
        UniverseSystem currentSystem = masterAI.universe.systemWorks.GetSystem(currentSystemId);

        if ( masterAI.universe.inSystem == false )
        {
            Debug.DrawLine(targetSystemJump.definingPoint.Position, currentSystem.definingPoint.Position, Color.green);
        }
        targetSystemJump.containedShips.Add(Id, this);
        if ( targetSystemJump.connections.ContainsKey(currentSystemId) != true )
        {
            MonoBehaviour.print("current system: " + currentSystemId);
            MonoBehaviour.print("targetJump system: " + wayPoints[wayPoints.Count - 1]);
            MonoBehaviour.print("Final target system: " + targetSystem);
            foreach ( int item in targetSystemJump.connections.Keys )
            {
                MonoBehaviour.print(string.Format("Target system: {0} contains connection to system: {1}", targetSystemJump.Id, item));
                if ( targetSystemJump.Id != wayPoints[wayPoints.Count - 1] )
                {
                    Debug.LogError("here");
                }
            }
            foreach ( int item in currentSystem.connections.Keys )
            {
                MonoBehaviour.print(string.Format("current system: {0} contains connection to system: {1}", currentSystemId, item));

            }
            foreach ( int item in wayPoints )
            {
                MonoBehaviour.print("Waypoint step: " + item);
            }
        }


        Position = targetSystemJump.connections[currentSystemId].Position;


        currentSystem.containedShips.Remove(Id);
        wayPoints.RemoveAt(wayPoints.Count - 1);

        if ( masterAI.universe.inSystem && currentSystemId == masterAI.universe.selectedSystem )
        {
            DestoryEntityFor( );
        }
        else if ( masterAI.universe.inSystem && targetSystemJump.Id == masterAI.universe.selectedSystem )
        {
            CreateEntityFor(true);
        }

        currentSystemId = targetSystemJump.Id;
        FlyToNextTarget( );
    }
    /// <summary>
    /// We set our position to our target, 
    /// set our vector to zero, 
    /// set assigned to false, 
    /// add the ship to its Ai's unassiagned ships list, 
    /// update its active entity if it has one
    /// </summary>
    public void ArrivedAtTarget( )
    {
        Position = flyToPosition;
        vector = Position;
        assigned = false;
        if ( missionType == 3 )
        {
            ExploreSystem( );
        }
        else if ( missionType == 4 )
        {
            EconomicMethods.WithdrawResource<FoodResource>(targetEntity, 10);
        }
        else if ( missionType == 2 )
        {
            ExploreSystem( );
        }
        {

        }
        masterAI.unassignedShips.Add(this);
        if ( activeEntity != Entity.Null )
        {
            SetEntityData( );
        }
    }

    public void ExploreSystem( )
    {
        Position = flyToPosition;
        vector = Position;
        assigned = false;
        masterAI.unassignedShips.Add(this);
        if ( activeEntity != Entity.Null )
        {
            SetEntityData( );
        }
        masterAI.systemsBeingExplored[currentSystemId].ExploreSystem( );
    }
    /// <summary>
    /// we use the ships current fly to position and how far the current ticket is from executing to update the ships position
    /// </summary>
    /// <returns>ships next vector 3</returns>
    public Vector3 GetNextPosition( )
    {
        Position = _posAtTicketWrite + vector * velocity * (MainSchedual.masterTime - currentTicket.timeAtWrite);
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
        if ( activeEntity != Entity.Null )
        {
            Debug.LogError("Entity being made for a ship who already has an active entity");
        }
        Entity shipClone = entityManager.Instantiate(StaticShipData.shipEntityTemplate);
        if ( newSpawn )
        {
            entityManager.SetComponentData(shipClone, new Translation { Value = Position });
        }
        else
        {
            entityManager.SetComponentData(shipClone, new Translation { Value = GetNextPosition( ) });
        }
        entityManager.AddComponent<shipCloneId>(shipClone);
        entityManager.AddComponent<shipMoveData>(shipClone);
        entityManager.SetComponentData(shipClone, new shipMoveData( ) { vector = vector, velocity = velocity });
        entityManager.SetComponentData(shipClone, new shipCloneId { Id = Id });
        activeEntity = shipClone;
    }
    public void DestoryEntityFor( )
    {
        entityManager.DestroyEntity(activeEntity);
        activeEntity = Entity.Null;
    }
    public void SetEntityData( )
    {
        entityManager.SetComponentData(activeEntity, new Translation { Value = Position });
        entityManager.SetComponentData(activeEntity, new shipMoveData { vector = vector, velocity = velocity });
        entityManager.SetComponentData(activeEntity, new Rotation { Value = quaternion.LookRotation(vector, math.up( )) });
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

public struct shipCloneId : IComponentData { public int Id { get; set; } }

public class ShipAnimator : SystemBase
{
    protected override void OnUpdate( )
    {
        float timePassed = MainSchedual.masterDeltaTime;
        if ( MainSchedual.notPaused )
        {
            Entities.WithAll<shipCloneId>( ).ForEach((ref Translation position, ref Rotation rotation, in shipMoveData moveData) =>
             {

                 position.Value.x += (moveData.vector.x * moveData.velocity * timePassed);
                 position.Value.y += (moveData.vector.y * moveData.velocity * timePassed);
                 position.Value.z += (moveData.vector.z * moveData.velocity * timePassed);
                 rotation = new Rotation( ) { Value = quaternion.LookRotationSafe(moveData.vector, math.up( )) };

             }).ScheduleParallel( );
        }

    }
}
