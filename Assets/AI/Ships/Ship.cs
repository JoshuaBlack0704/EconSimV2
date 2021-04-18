using System.Collections;
using System.Collections.Generic;
using Unity.Entities;
using UnityEngine;

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
    public bool hasActiveEntity { get; set; }

    public void PickNewTarget()
    {
        var randPoint = ShipTester.testPoints[Random.Range(0, ShipTester.testPoints.Count)];

        Position = targetPosition;
        targetPosition = randPoint;
        vector = (targetPosition - Position).normalized;
        if (hasActiveEntity)
        {
            entityManager.SetComponentData(activeEntity, new shipVector { vector = vector});
        }
        MainSchedual.AddToHeap(Vector3.Distance(Position, targetPosition)/velocity+Time.time, 0, this);
        
    }
    public Vector3 GetNextPosition()
    {
        Position += vector*velocity*Time.deltaTime;
        return Position;
    }

    public Ship(Vector3 startPos)
    {
        Id = shipCount.count;
        hasActiveEntity = false;
        assigned = false;
        shipCount.count++;
        Position = startPos;
        velocity = Random.Range(5, 50f);
    }

    
}

public static class shipCount
{
    public static int count = 0;
}

public struct shipVector : IComponentData
{
    public Unity.Mathematics.float3 vector;
}