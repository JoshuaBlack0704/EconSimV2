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
    public EntityManager Em { get { return World.DefaultGameObjectInjectionWorld.EntityManager; } }

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
        if (Em.Exists(cloneEntity))
        {
            Debug.LogError("Destroying Entity which does not exist");
        }
        Em.DestroyEntity(baseEntity);
    }
    /// <summary>
    /// Destroys the clone for the object
    /// </summary>
    public void DestroyCloneEntityFor()
    {
        if (Em.Exists(cloneEntity))
        {
            Debug.LogError("Destroying Entity which does not exist");
        }
        Em.DestroyEntity(cloneEntity);
    }
    /// <summary>
    /// Creates
    /// </summary>
    /// <param name="model"></param>
    /// <returns></returns>
    public Entity CreateCloneEntityFor<T>(Entity model) where T : struct, IComponentData, IIdTag
    {
        cloneEntity = Em.Instantiate(model);
        Em.AddComponentData<T>(cloneEntity, new T() { Id = Em.GetComponentData<T>(BaseEntity).Id });
        Em.AddComponent<CloneTag>(cloneEntity);
        return cloneEntity;
    }
    public IBaseEntity()
    {
        BaseEntity = Em.CreateEntity();
    }
}

public struct CloneTag : IComponentData { }


