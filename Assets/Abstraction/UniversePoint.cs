using System.Collections.Generic;
using System.Linq;
using Unity.Burst;
using Unity.Collections;
using Unity.Entities;
using Unity.Jobs;
using Unity.Mathematics;
using Unity.Transforms;
using UnityEngine;

public class UniversePoint : IVectorController, IIdTag
{
    public static int maxPointId = 0;
    public static Dictionary<int, UniversePoint> SelfCollection = new Dictionary<int, UniversePoint>(1000000);

    public int Id { get; set; }

    public static void GeneratePoints( int count )
    {
        for (int i = 0; i < count; i++)
        {
            UniversePoint point = new UniversePoint(EntityPrefabBank.rand.NextFloat3(0, 200));
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
        foreach (UniversePoint item in SelfCollection.Values)
        {
            item.SpawnClone();
        }
    }

    public UniversePoint( float3 pos )
    {

        Em.AddComponentData<UniversePointTag>(BaseEntity, new UniversePointTag { Id = maxPointId });
        maxPointId++;
        Position = pos;
        Velocity = EntityPrefabBank.rand.NextFloat(.5f, 5f);
        Vector = EntityPrefabBank.rand.NextFloat3Direction();
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

    protected IPositionController() : base()
    {
        Em.AddComponent<PositionData>(BaseEntity);
    }
    [BurstCompile]
    struct DistBatch : IJobParallelFor
    {
        public NativeArray<PositionData> targets;
        public NativeArray<distBatchContainer> containers;
        public float3 origin;
        public void Execute( int index )
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
    public Entity[] BruteForceClosestCount<T>( int count ) where T : IComponentData
    {
        System.Diagnostics.Stopwatch watch = new System.Diagnostics.Stopwatch();
        watch.Start();
        EntityQuery query = Em.CreateEntityQuery(new ComponentType[] { typeof(PositionData), ComponentType.ReadOnly<UniversePointTag>() });

        NativeArray<Entity> entityPull = query.ToEntityArrayAsync(Allocator.TempJob, out JobHandle handle1);
        NativeArray<PositionData> positionPull = query.ToComponentDataArrayAsync<PositionData>(Allocator.TempJob, out JobHandle handle2);
        NativeArray<distBatchContainer> containers = new NativeArray<distBatchContainer>(query.CalculateEntityCount(), Allocator.TempJob);


        DistBatch batch = new DistBatch();
        batch.origin = Position;
        handle2.Complete();
        batch.targets = positionPull;
        batch.containers = containers;
        JobHandle finalHandle = batch.Schedule(positionPull.Length, 1);

        handle1.Complete();
        finalHandle.Complete();

        Entity[] final = new Entity[count];
        containers.OrderBy(o => o.dist);

        for (int i = 0; i < count; i++)
        {
            final[i] = entityPull[containers[i + 1].index];
            Debug.DrawLine(Em.GetComponentData<PositionData>(BaseEntity).vPos, Em.GetComponentData<PositionData>(entityPull[containers[i + 1].index]).vPos, Color.green, .25f);
        }

        entityPull.Dispose();
        positionPull.Dispose();
        containers.Dispose();

        watch.Stop();
        Debug.Log(string.Format("Dist calc took {0} ms", watch.ElapsedMilliseconds));
        return final;

    }

    public Entity CreateCloneWithPosition<T>( Entity model ) where T : struct, IComponentData, IIdTag
    {
        //pos, tag, return
        Entity clone = CreateCloneEntityFor<T>(model);
        Em.SetComponentData<Translation>(clone, new Translation() { Value = Position });
        return clone;
    }

    public float3 Position { get { return Em.GetComponentData<PositionData>(BaseEntity).position; } set { Em.SetComponentData<PositionData>(BaseEntity, new PositionData { position = value, vPos = value }); } }
    public Vector3 vPosition { get { return Em.GetComponentData<PositionData>(BaseEntity).vPos; } private set { } }
}


public interface IPositionAutomater
{
    public float3 Position { get; set; }
    public Vector3 vPosition { get; }
    public Entity CreateCloneWithPosition<T>( Entity model ) where T : struct, IComponentData, IIdTag;
}

public struct PositionData : IComponentData
{
    public Vector3 vPos { get; set; }
    public Unity.Mathematics.float3 position { get; set; }
}