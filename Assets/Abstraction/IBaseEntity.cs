using System.Collections;
using System.Collections.Generic;
using System.Linq;
using Unity.Burst;
using Unity.Collections;
using Unity.Entities;
using Unity.Jobs;
using Unity.Mathematics;
using Unity.Transforms;
using UnityEngine;

public abstract class IBaseEntity
{

    public Entity BaseEntity { get { return baseEntity; } set { baseEntity = value; } }
    public Entity CloneEntity { get { return cloneEntity; } set { cloneEntity = value; } }
    private Entity baseEntity;
    private Entity cloneEntity;
    public EntityManager em { get; set; }

    /// <summary>
    /// Destroys all clons
    /// </summary>
    public static void DestroyAllClones(EntityManager em)
    {
        EntityQuery query = em.CreateEntityQuery(new ComponentType[] { ComponentType.ReadOnly<CloneTag>()});;
        NativeArray<Entity> pull = query.ToEntityArray(Allocator.Temp);
        em.DestroyEntity(pull);
        pull.Dispose();
    }
    /// <summary>
    /// Destroys all clones with a certain ID tag
    /// </summary>
    /// <typeparam name="T">ID tag to destroy for</typeparam>
    public static void DestroyClonesWithTag<T>(EntityManager em) where T : struct, IComponentData, IIdTag
    {
        EntityQuery query = em.CreateEntityQuery(new ComponentType[] { ComponentType.ReadOnly<CloneTag>(), ComponentType.ReadOnly<T>() }); ;
        NativeArray<Entity> pull = query.ToEntityArray(Allocator.Temp);
        em.DestroyEntity(pull);
        pull.Dispose();
    }

    /// <summary>
    /// Destroys the base entity for the object
    /// </summary>
    public void DestroyBaseEntityFor()
    {
        if (em.Exists(cloneEntity))
        {
            Debug.LogError("Destroying Entity which does not exist");
        }
        em.DestroyEntity(baseEntity);
    }
    /// <summary>
    /// Destroys the clone for the object
    /// </summary>
    public void DestroyCloneEntityFor()
    {
        if (em.Exists(cloneEntity))
        {
            Debug.LogError("Destroying Entity which does not exist");
        }
        em.DestroyEntity(cloneEntity);
    }
    /// <summary>
    /// Creates a clone using existing position data
    /// </summary>
    /// <typeparam name="T">ID type</typeparam>
    public Entity CreateCloneWithSelfPosition<T>(Entity cloneModel) where T : struct, IComponentData, IIdTag
    {
        var clone = em.Instantiate(cloneModel);
        em.AddComponent<T>(clone);
        em.AddComponent<CloneTag>(clone);
        em.SetComponentData<T>(clone, new T() { Id = em.GetComponentData<T>(baseEntity).Id });
        em.SetComponentData<Translation>(clone, new Translation() { Value = em.GetComponentData<PositionData>(baseEntity).position });
        cloneEntity = clone;
        return clone;
    }
    public IBaseEntity(EntityManager _em)
    {
        em = _em;
        BaseEntity = em.CreateEntity();
    }
}
public struct PositionData : IComponentData
{
    public Vector3 vPos { get; set; }
    public Unity.Mathematics.float3 position { get; set; }
}
public struct CloneTag : IComponentData { }


