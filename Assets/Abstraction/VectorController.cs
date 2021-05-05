﻿using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using Unity.Entities;
using Unity.Mathematics;
using Unity.Transforms;
using UnityEngine;

public abstract class IVectorController : IPositionController, IVectorAutomator
{
    protected IVectorController() : base()
    {
        Em.AddComponent<MovementData>(BaseEntity);
    }

    public void CreateCloneWithVelocity<T>( Entity model ) where T : struct, IComponentData, IIdTag
    {
        CreateCloneWithPosition<T>(model);
        Em.AddComponentData<MovementData>(CloneEntity, Em.GetComponentData<MovementData>(BaseEntity));
    }

    public float3 Vector
    {
        get
        {
            return Em.GetComponentData<MovementData>(BaseEntity).vector;
        }
        set
        {
            float velo = Em.GetComponentData<MovementData>(BaseEntity).velocity;
            Em.SetComponentData<MovementData>(BaseEntity, new MovementData { vector = value, vector3 = value, velocity = velo });
            if (Em.Exists(CloneEntity))
            {
                Em.SetComponentData<MovementData>(CloneEntity, new MovementData() { vector = value, vector3 = value, velocity = velo });
            }
        }
    }
    public float Velocity
    {
        get
        {
            return Em.GetComponentData<MovementData>(BaseEntity).velocity;
        }
        set
        {
            float vect = Em.GetComponentData<MovementData>(BaseEntity).velocity;
            Vector3 vect3 = Em.GetComponentData<MovementData>(BaseEntity).vector3;
            Em.SetComponentData<MovementData>(BaseEntity, new MovementData { vector = vect, vector3 = vect3, velocity = value });
            if (Em.Exists(CloneEntity))
            {
                Em.SetComponentData<MovementData>(CloneEntity, new MovementData() { vector = vect, vector3 = vect3, velocity = value });
            }
        }
    }
    public Vector3 Vect3
    {
        get
        {
            return Em.GetComponentData<MovementData>(BaseEntity).vector3;
        }
        private set { }
    }

    //public Vector3 GetVector3()
    //{
    //    return em.GetComponentData<MovementData>(BaseEntity).vector3;
    //}

    //public void SetVector(float3 vector)
    //{
    //    float velo = em.GetComponentData<MovementData>(BaseEntity).velocity;
    //    em.SetComponentData<MovementData>(BaseEntity, new MovementData { vector = vector, vector3 = vector, velocity = velo});
    //    if (em.Exists(CloneEntity))
    //    {
    //        em.SetComponentData<MovementData>(CloneEntity, new MovementData() { vector = vector, vector3 = vector, velocity = velo });
    //    }
    //}
    //public void SetVelocity(float velocity)
    //{
    //    float vect = em.GetComponentData<MovementData>(BaseEntity).velocity;
    //    Vector3 vect3 = em.GetComponentData<MovementData>(BaseEntity).vector3;
    //    em.SetComponentData<MovementData>(BaseEntity, new MovementData { vector = vect, vector3 = vect3, velocity = velocity });
    //    if (em.Exists(CloneEntity))
    //    {
    //        em.SetComponentData<MovementData>(CloneEntity, new MovementData() { vector = vect, vector3 = vect3, velocity = velocity });
    //    }
    //}
}
public interface IVectorAutomator
{
    float3 Vector { get; set; }
    float Velocity { get; set; }
    Vector3 Vect3 { get; }
    void CreateCloneWithVelocity<T>( Entity model ) where T : struct, IComponentData, IIdTag;
}
public struct MovementData : IComponentData
{
    public float3 vector { get; set; }
    public Vector3 vector3 { get; set; }
    public float velocity { get; set; }

}

public class MoveCloneVectors : SystemBase
{

    protected override void OnUpdate()
    {
        float step = Time.DeltaTime;
        Entities.WithAll<CloneTag>().ForEach(( ref Translation pos, in MovementData move ) => { pos.Value += move.vector * move.velocity * step; }).ScheduleParallel();
    }
}