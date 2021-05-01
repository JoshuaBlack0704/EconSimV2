using System.Collections;
using System.Collections.Generic;
using System.Linq;
using Unity.Burst;
using Unity.Collections;
using Unity.Entities;
using Unity.Jobs;
using Unity.Mathematics;
using UnityEngine;

public abstract class IBaseEntity
{
    public Entity BaseEntity { get { return baseEntity; } set { baseEntity = value; } }
    private Entity baseEntity;
    public EntityManager em { get; set; }
    public IBaseEntity(EntityManager _em)
    {
        em = _em;
        BaseEntity = em.CreateEntity();
    }
}

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
public struct PositionData : IComponentData
{
    public Vector3 vPos { get; set; }
    public Unity.Mathematics.float3 position { get; set; }
}

public class UniversePoint : IPositionController
{
    public static int maxPointId = 0;
    public static List<UniversePoint> allPoints = new List<UniversePoint>();
    public static Unity.Mathematics.Random rand = new Unity.Mathematics.Random(1);
    public static void GeneratePoints(int count)
    {
        for (int i = 0; i < count; i++)
        {
            allPoints.Add(new UniversePoint(World.DefaultGameObjectInjectionWorld.EntityManager, rand.NextFloat3(0, 200) ));
        }
    }
    public static UniversePoint GetAConnection(UniversePoint point)
    {
        var ent = point.BruteForceClosestCount<UniversePointTag>(4);
        var randInt = rand.NextInt(0, 3);
        return allPoints[point.em.GetComponentData<UniversePointTag>(ent[randInt]).Id];
    }
    public UniversePoint(EntityManager _em, float3 pos) : base(_em)
    {
        em = _em;
        em.AddComponentData<UniversePointTag>(BaseEntity, new UniversePointTag { Id=maxPointId});
        maxPointId++;
        SetPosition(pos);
    }
}
public struct UniversePointTag : IComponentData, IIdTag
{
    public int Id { get; set; }
}
