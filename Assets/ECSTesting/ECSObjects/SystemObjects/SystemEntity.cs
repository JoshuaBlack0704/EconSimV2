﻿using System.Linq;
using Unity.Burst;
using Unity.Collections;
using Unity.Entities;
using Unity.Jobs;
using Unity.Mathematics;
using Unity.Transforms;
using UnityEngine;

public static class SystemEntity
{
    static EntityManager em = SB.em;
    static EntityArchetype ePoint = em.CreateArchetype(new ComponentType[] { typeof(Id), typeof(ePointConnnectionBuffer), typeof(Translation), typeof(SystemData)});
    static Entity ePointClone = SB.systemClone;
    static int pointCount = 0;



    public static void GenerateRandomPoints(int count, float maxSystemSize, int maxPlanets, int maxAsteroids, bool random = false)
    {
        for (int i = 0; i < count; i++)
        {
            var point = em.CreateEntity(ePoint);
            em.SetComponentData<Id>(point, new Id() { id = pointCount});
            pointCount++;
            em.SetComponentData<Translation>(point, new Translation() { Value = SB.rand.NextFloat3(0, 100)});
            if (random)
            {
                em.SetComponentData<SystemData>(point, new SystemData() 
                {
                    size = SB.rand.NextFloat(70, maxSystemSize),
                    numPlanets = SB.rand.NextInt(0, maxPlanets),
                    numAsteroids = SB.rand.NextInt(0, maxAsteroids)
                });
            }
            else
            {
                em.SetComponentData<SystemData>(point, new SystemData()
                {
                    size = maxSystemSize,
                    numPlanets = maxPlanets,
                    numAsteroids = maxAsteroids,
                });
            }

            var data = em.GetComponentData<SystemData>(point);
            em.SetComponentData<SystemData>(point, new SystemData
            {
                size = data.size,
                starPos = new float3() { x = data.size / 2, y = data.size / 2, z = data.size / 2 },
                numPlanets = data.numPlanets,
                numAsteroids = data.numAsteroids
            });
            
        }
    }
    public static void RenderPoints()
    {
        NativeArray<Entity> points = em.CreateEntityQuery(new ComponentType[] { ComponentType.ReadOnly<Id>() }).ToEntityArray(Allocator.Temp);
        for (int i = 0; i < points.Length; i++)
        {
            var clone = em.Instantiate(SB.systemClone);
            em.AddComponentData<CloneTag>(clone, new CloneTag());
            em.SetComponentData<Translation>(clone, new Translation() { Value = em.GetComponentData<Translation>(points[i]).Value });
        }
    }
    struct connectStruct
    {
        public int id;
        public float distance;
    }

    //BruteForceConnector
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
    public static void BruteForceConnect(int connectionsPer)
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
            for (int x = 0; x < connectionsPer; x++)
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
                    secondBuff.Add(new ConnectionData() { target = pointIndex, targetEntity = points[pointIndex], position = SB.rand.NextFloat3(0, em.GetComponentData<SystemData>(points[results[x+1].id]).size) });
                    buff.Add(new ConnectionData() { target = results[x + 1].id, targetEntity = points[results[x+1].id], position = SB.rand.NextFloat3(0, em.GetComponentData<SystemData>(points[pointIndex]).size)});
                }
                
            }
        }

        points.Dispose();
        locations.Dispose();
    }

    public static void EnterSystem(int id)
    {
        var shipQuery = em.CreateEntityQuery(typeof(Ships.Id));
        var shipArray = shipQuery.ToEntityArrayAsync(Allocator.TempJob, out JobHandle shipHandle) ;

        var sysQuery = em.CreateEntityQuery(typeof(Id));
        var systemsArray = sysQuery.ToEntityArrayAsync(Allocator.TempJob, out JobHandle sysHandle);

        var planetQuery = em.CreateEntityQuery(typeof(Planets.Id));
        var planetsArray = planetQuery.ToEntityArrayAsync(Allocator.TempJob, out JobHandle planetHandle);

        var asteroidQuery = em.CreateEntityQuery(typeof(Asteroids.Id));
        var asteroidArray = asteroidQuery.ToEntityArrayAsync(Allocator.TempJob, out JobHandle asteroidHandle);


        sysHandle.Complete();
        planetHandle.Complete();
        asteroidHandle.Complete();
        shipHandle.Complete();

        Entity system = systemsArray.FirstOrDefault(o => em.GetComponentData<Id>(o).id==id);
        var buff = em.GetBuffer<ePointConnnectionBuffer>(system).Reinterpret<ConnectionData>();

        NativeArray<Translation> wormHoles = new NativeArray<Translation>(em.GetBuffer<ePointConnnectionBuffer>(system).Length, Allocator.Temp);
        for (int i = 0; i < wormHoles.Length; i++)
        {
            wormHoles[i] = new Translation() { Value = buff[i].position};
        }

        Star.SpawnStar(em.GetComponentData<SystemData>(system).starPos);
        Wormholes.SpawnWormholes(wormHoles);
        Planets.SpawnPlanets(planetsArray.Where(o => em.GetComponentData<SystemID>(o).Id == id).ToArray());
        Asteroids.SpawnAsteroids(asteroidArray.Where(o => em.GetComponentData<SystemID>(o).Id == id).ToArray());
        Ships.SpawnShips(shipArray.Where(o => em.GetComponentData<SystemID>(o).Id == id).ToArray());


        systemsArray.Dispose();
        planetsArray.Dispose();
        asteroidArray.Dispose();
        wormHoles.Dispose();
        shipArray.Dispose();

    }











    public struct Id : IComponentData, IIdTag
    {
        public int id { get; set; }
    }
    public struct SystemData : IComponentData
    {
        public float size;
        public float3 starPos;
        public int numAsteroids;
        public int numPlanets;
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

