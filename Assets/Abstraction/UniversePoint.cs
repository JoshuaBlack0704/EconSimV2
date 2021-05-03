using System.Collections.Generic;
using System.Linq;
using Unity.Burst;
using Unity.Collections;
using Unity.Entities;
using Unity.Jobs;
using Unity.Mathematics;
using UnityEngine;

public class UniversePoint : IVectorController, IIdTag
{
    public static int maxPointId = 0;
    public static Dictionary<int, UniversePoint> SelfCollection = new Dictionary<int, UniversePoint>(1000000);

    public int Id { get; set; }

    public static void GeneratePoints(int count)
    {
        for (int i = 0; i < count; i++)
        {
            var point = new UniversePoint(World.DefaultGameObjectInjectionWorld.EntityManager, EntityPrefabBank.rand.NextFloat3(0, 200));
            point.SpawnClone();
            SelfCollection.Add(i, point);
        }
    }
    
    public void SpawnClone()
    {
        //CreateCloneWithSelfPosition<UniversePointTag>(EntityPrefabBank.models[0]);
        CreateCloneWithVelocity<UniversePointTag>(EntityPrefabBank.models[0]);
    }
    public static void SpawnAllClones()
    {
        foreach (var item in SelfCollection.Values)
        {
            item.SpawnClone();
        }
    }

    public UniversePoint(EntityManager _em, float3 pos) : base(_em)
    {
        em = _em;
        em.AddComponentData<UniversePointTag>(BaseEntity, new UniversePointTag { Id = maxPointId });
        maxPointId++;
        Position = pos;
        SetVelocity(EntityPrefabBank.rand.NextFloat(.5f, 5f));
        SetVector(EntityPrefabBank.rand.NextFloat3Direction());
    }

}

public abstract class IConnectable<T> where T : IIdTag
{
    private static EntityManager em = World.DefaultGameObjectInjectionWorld.EntityManager;
    List<Entity> connectionEntities = new List<Entity>();
    protected IConnectable()
    {

    }
}
public struct UniversePointTag : IComponentData, IIdTag
{
    public int Id { get; set; }
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
        batch.origin = Position;
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
            final[i] = entityPull[containers[i + 1].index];
            Debug.DrawLine(em.GetComponentData<PositionData>(BaseEntity).vPos, em.GetComponentData<PositionData>(entityPull[containers[i + 1].index]).vPos, Color.green, .25f);
        }

        entityPull.Dispose();
        positionPull.Dispose();
        containers.Dispose();

        watch.Stop();
        Debug.Log(string.Format("Dist calc took {0} ms", watch.ElapsedMilliseconds));
        return final;

    }



    public float3 Position { get { return em.GetComponentData<PositionData>(BaseEntity).position; } set { em.SetComponentData<PositionData>(BaseEntity, new PositionData { position = value, vPos = value }); } }
    public Vector3 vPosition { get { return em.GetComponentData<PositionData>(BaseEntity).vPos; } private set { } }
}
public abstract class ISelfCollection<T> where  T : IIdTag
{
    public static Dictionary<int, T> SelfCollection = new Dictionary<int, T>();
}

public interface IPositionAutomater
{
    public float3 Position { get; set; }
    public Vector3 vPosition { get; }
}