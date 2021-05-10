using System.Linq;
using Unity.Burst;
using Unity.Collections;
using Unity.Entities;
using Unity.Jobs;
using Unity.Mathematics;
using Unity.Transforms;
using UnityEngine;

public static class EntityPoint
{
    static EntityManager em = World.DefaultGameObjectInjectionWorld.EntityManager;
    static EntityArchetype ePoint = em.CreateArchetype(new ComponentType[] { typeof(Id), typeof(ePointConnnectionBuffer), typeof(Translation)});
    static Entity ePointClone = ECSController.cloneEntity;
    static int pointCount = 0;
    static Unity.Mathematics.Random rand = new Unity.Mathematics.Random(1);

    public static void GenerateRandomPoints(int count)
    {
        for (int i = 0; i < count; i++)
        {
            var point = em.CreateEntity(ePoint);
            em.SetComponentData<Id>(point, new Id() { id = pointCount});
            pointCount++;
            em.SetComponentData<Translation>(point, new Translation() { Value = rand.NextFloat3(0, 100)});
            var connections = em.GetBuffer<ePointConnnectionBuffer>(point);

            
        }
    }

    public static void RenderPoints()
    {
        NativeArray<Entity> points = em.CreateEntityQuery(new ComponentType[] { ComponentType.ReadOnly<Id>() }).ToEntityArray(Allocator.Temp);
        for (int i = 0; i < points.Length; i++)
        {
            var clone = em.Instantiate(ePointClone);
            em.AddComponentData<CloneTag>(clone, new CloneTag());
            em.SetComponentData<Translation>(clone, new Translation() { Value = em.GetComponentData<Translation>(points[i]).Value });
        }
    }

    struct connectStruct
    {
        public int id;
        public float distance;
    }
    [BurstCompile]
    struct distBatch : IJob
    {
        [ReadOnly]
        public float3 pos;
        [ReadOnly]
        public NativeArray<Translation> locations;
        public NativeArray<connectStruct> distances;

        public void Execute()
        {
            for (int i = 0; i < locations.Length; i++)
            {
                distances[i] = new connectStruct() { id = i, distance = math.distancesq(pos, locations[i].Value)};
            }
        }
    }
    public static void BruteForceConnect()
    {
        var query = em.CreateEntityQuery(new ComponentType[] { typeof(Id) });

        NativeArray<Entity> points = em.CreateEntityQuery(new ComponentType[] { typeof(Id) }).ToEntityArrayAsync(Allocator.TempJob, out JobHandle handle);

        NativeArray<Translation> locations = em.CreateEntityQuery(new ComponentType[] { typeof(Id), typeof(Translation) }).ToComponentDataArrayAsync<Translation>(Allocator.TempJob, out JobHandle poshandle);

        int count = query.CalculateEntityCount();
        NativeArray<connectStruct>[] resultContainer = new NativeArray<connectStruct>[count];

        var combined = JobHandle.CombineDependencies(handle, poshandle);

        for (int i = 0; i < count; i++)
        {
            resultContainer[i] = new NativeArray<connectStruct>(count, Allocator.TempJob);

        }
        combined.Complete();
        JobHandle[] runs = new JobHandle[count];
        for (int i = 0; i < points.Length; i++)
        {
            var distRun = new distBatch();
            distRun.pos = locations[i].Value;
            distRun.locations = locations;
            distRun.distances = resultContainer[i];

            runs[i] = distRun.Schedule(); ;

        }



        connectStruct[] results = new connectStruct[count];



        for (int pointIndex = 0; pointIndex < count; pointIndex++)
        {
            runs[pointIndex].Complete();
            results = resultContainer[pointIndex].OrderBy(o => o.distance).ToArray();
            resultContainer[pointIndex].Dispose();
            var buffer = em.GetBuffer<ePointConnnectionBuffer>(points[pointIndex]);
            var buff = buffer.Reinterpret<ConnectionData>();
            for (int x = 0; x < 4; x++)
            {
                bool unique = true;
                for (int i = 0; i < buff.Length; i++)
                {
                    if (buff[i].target == results[x+1].id)
                    {
                        unique = false;
                        break;

                    }
                }

                if (unique)
                {
                    var secondBufer = em.GetBuffer<ePointConnnectionBuffer>(points[results[x + 1].id]);
                    var secondBuff = secondBufer.Reinterpret<ConnectionData>();
                    secondBuff.Add(new ConnectionData() { target = pointIndex, targetEntity = points[pointIndex] });
                    buff.Add(new ConnectionData() { target = results[x + 1].id, targetEntity = points[results[x+1].id] });
                }
                
            }
        }

        points.Dispose();
        locations.Dispose();
    }




    public struct Id : IComponentData, IIdTag
    {
        public int id { get; set; }
    }

    [InternalBufferCapacity(4)]
    public struct ePointConnnectionBuffer : IBufferElementData
    {
        public ConnectionData connection;
    }

    public struct ConnectionData
    {
        public int target;
        public float3 position;
        public Entity targetEntity;
    }
}

