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
public interface IPositionAutomater
{
    public void SetPosition(Unity.Mathematics.float3 pos);
    public float3 GetPosition();
    public Vector3 GetvPos();
}
public abstract class IPositionController : IBaseEntity, IPositionAutomater
{
    protected IPositionController(EntityManager _em) : base(_em)
    {
        em = _em;
        em.AddComponent<PositionData>(BaseEntity);
    }

    [BurstCompile]
    struct DistBatch : IJobParallelFor
    {
        public NativeArray<PositionData> targets;
        public NativeArray<distBatchContainer> containers;
        public float3 origin;
        public void Execute(int index)
        {
            distBatchContainer cont = new distBatchContainer { index = index, dist = math.distancesq(targets[index].position, origin) };
            containers[index] = cont;
        }
    }
    struct distBatchContainer
    {
        public float dist;
        public int index;
    }

    /// <summary>
    /// A brute force calculation to all other points
    /// </summary>
    /// <typeparam name="T"></typeparam>
    /// <param name="count"></param>
    /// <returns></returns>
    public Entity[] BruteForceClosestCount<T>(int count) where T : IComponentData
    {
        var watch = new System.Diagnostics.Stopwatch();
        watch.Start();
        EntityQuery query = em.CreateEntityQuery(new ComponentType[] { typeof(PositionData), ComponentType.ReadOnly<UniversePointTag>() });

        var entityPull = query.ToEntityArrayAsync(Allocator.TempJob, out JobHandle handle1);
        var positionPull = query.ToComponentDataArrayAsync<PositionData>(Allocator.TempJob, out JobHandle handle2);
        NativeArray<distBatchContainer> containers = new NativeArray<distBatchContainer>(query.CalculateEntityCount(), Allocator.TempJob);


        var batch = new DistBatch();
        batch.origin = GetPosition();
        handle2.Complete();
        batch.targets = positionPull;
        batch.containers = containers;
        var finalHandle = batch.Schedule(positionPull.Length, 1);

        handle1.Complete();
        finalHandle.Complete();

        Entity[] final = new Entity[count];
        containers.OrderBy(o => o.dist);

        for (int i = 0; i < count; i++)
        {
            final[i] = entityPull[containers[i+1].index];
            Debug.DrawLine(em.GetComponentData<PositionData>(BaseEntity).vPos, em.GetComponentData<PositionData>(entityPull[containers[i+1].index]).vPos, Color.green, .25f);
        }

        entityPull.Dispose();
        positionPull.Dispose();
        containers.Dispose();

        watch.Stop();
        Debug.Log(string.Format("Dist calc took {0} ms", watch.ElapsedMilliseconds));
        return final;

    }




    public float3 GetPosition()
    {
        return em.GetComponentData<PositionData>(BaseEntity).position;
    }

    public Vector3 GetvPos()
    {
        return em.GetComponentData<PositionData>(BaseEntity).vPos;
    }

    public void SetPosition(float3 pos)
    {
        em.SetComponentData<PositionData>(BaseEntity, new PositionData { position = pos, vPos = pos });
    }
}

