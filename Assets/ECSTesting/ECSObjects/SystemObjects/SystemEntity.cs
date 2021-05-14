using System.Linq;
using Unity.Burst;
using Unity.Collections;
using Unity.Entities;
using Unity.Jobs;
using Unity.Mathematics;
using Unity.Transforms;

public static class SystemEntity
{
    static EntityManager em = SB.em;
    static EntityArchetype ePoint = em.CreateArchetype(new ComponentType[] { typeof(Id), typeof(ePointConnnectionBuffer), typeof(Translation), typeof(SystemData) });
    static Entity ePointClone = SB.systemClone;
    static int pointCount = 0;



    public static void GenerateRandomPoints(int count, float maxSystemSize, int maxPlanets, int maxAsteroids, bool random = false)
    {
        for ( int i = 0; i < count; i++ )
        {
            Entity point = em.CreateEntity(ePoint);
            em.SetComponentData<Id>(point, new Id( ) { id = pointCount });
            pointCount++;
            em.SetComponentData<Translation>(point, new Translation( ) { Value = SB.rand.NextFloat3(0, 100) });
            if ( random )
            {
                em.SetComponentData<SystemData>(point, new SystemData( )
                {
                    size = SB.rand.NextFloat(70, maxSystemSize),
                    numPlanets = SB.rand.NextInt(0, maxPlanets),
                    numAsteroids = SB.rand.NextInt(0, maxAsteroids)
                });
            }
            else
            {
                em.SetComponentData<SystemData>(point, new SystemData( )
                {
                    size = maxSystemSize,
                    numPlanets = maxPlanets,
                    numAsteroids = maxAsteroids,
                });
            }

            SystemData data = em.GetComponentData<SystemData>(point);
            em.SetComponentData<SystemData>(point, new SystemData
            {
                size = data.size,
                starPos = new float3( ) { x = data.size / 2, y = data.size / 2, z = data.size / 2 },
                numPlanets = data.numPlanets,
                numAsteroids = data.numAsteroids
            });

        }
    }
    public static void RenderPoints( )
    {
        NativeArray<Entity> points = em.CreateEntityQuery(new ComponentType[] { ComponentType.ReadOnly<Id>( ) }).ToEntityArray(Allocator.Temp);
        em.AddComponent<BaseEntity.SpawnCloneTag>(points);
        points.Dispose( );
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

        public void Execute( )
        {
            for ( int i = 0; i < locations.Length; i++ )
            {
                distances[i] = new connectStruct( ) { id = i, distance = math.distancesq(pos, locations[i].Value) };
            }
        }
    }
    public static void BruteForceConnect(int connectionsPer)
    {
        EntityQuery query = em.CreateEntityQuery(new ComponentType[] { typeof(Id) });

        NativeArray<Entity> points = em.CreateEntityQuery(new ComponentType[] { typeof(Id) }).ToEntityArrayAsync(Allocator.TempJob, out JobHandle handle);

        NativeArray<Translation> locations = em.CreateEntityQuery(new ComponentType[] { typeof(Id), typeof(Translation) }).ToComponentDataArrayAsync<Translation>(Allocator.TempJob, out JobHandle poshandle);

        int count = query.CalculateEntityCount( );
        NativeArray<connectStruct>[] resultContainer = new NativeArray<connectStruct>[count];

        JobHandle combined = JobHandle.CombineDependencies(handle, poshandle);

        for ( int i = 0; i < count; i++ )
        {
            resultContainer[i] = new NativeArray<connectStruct>(count, Allocator.TempJob);

        }
        combined.Complete( );
        JobHandle[] runs = new JobHandle[count];
        for ( int i = 0; i < points.Length; i++ )
        {
            distBatch distRun = new distBatch( );
            distRun.pos = locations[i].Value;
            distRun.locations = locations;
            distRun.distances = resultContainer[i];

            runs[i] = distRun.Schedule( ); ;

        }



        connectStruct[] results = new connectStruct[count];



        for ( int pointIndex = 0; pointIndex < count; pointIndex++ )
        {
            runs[pointIndex].Complete( );
            results = resultContainer[pointIndex].OrderBy(o => o.distance).ToArray( );
            resultContainer[pointIndex].Dispose( );
            DynamicBuffer<ePointConnnectionBuffer> buffer = em.GetBuffer<ePointConnnectionBuffer>(points[pointIndex]);
            DynamicBuffer<ConnectionData> buff = buffer.Reinterpret<ConnectionData>( );
            for ( int x = 0; x < connectionsPer; x++ )
            {
                bool unique = true;
                for ( int i = 0; i < buff.Length; i++ )
                {
                    if ( buff[i].target == results[x + 1].id )
                    {
                        unique = false;
                        break;

                    }
                }

                if ( unique )
                {
                    DynamicBuffer<ePointConnnectionBuffer> secondBufer = em.GetBuffer<ePointConnnectionBuffer>(points[results[x + 1].id]);
                    DynamicBuffer<ConnectionData> secondBuff = secondBufer.Reinterpret<ConnectionData>( );
                    secondBuff.Add(new ConnectionData( ) { target = pointIndex, targetEntity = points[pointIndex], position = SB.rand.NextFloat3(0, em.GetComponentData<SystemData>(points[results[x + 1].id]).size) });
                    buff.Add(new ConnectionData( ) { target = results[x + 1].id, targetEntity = points[results[x + 1].id], position = SB.rand.NextFloat3(0, em.GetComponentData<SystemData>(points[pointIndex]).size) });
                }

            }
        }

        points.Dispose( );
        locations.Dispose( );
    }

    public static void EnterSystem(int id)
    {
        EntityQuery shipQuery = em.CreateEntityQuery(typeof(Ships.Id));
        NativeArray<Entity> shipArray = shipQuery.ToEntityArrayAsync(Allocator.TempJob, out JobHandle shipHandle);

        EntityQuery sysQuery = em.CreateEntityQuery(typeof(Id));
        NativeArray<Entity> systemsArray = sysQuery.ToEntityArrayAsync(Allocator.TempJob, out JobHandle sysHandle);

        EntityQuery planetQuery = em.CreateEntityQuery(typeof(Planets.Id));
        NativeArray<Entity> planetsArray = planetQuery.ToEntityArrayAsync(Allocator.TempJob, out JobHandle planetHandle);

        EntityQuery asteroidQuery = em.CreateEntityQuery(typeof(Asteroids.Id));
        NativeArray<Entity> asteroidArray = asteroidQuery.ToEntityArrayAsync(Allocator.TempJob, out JobHandle asteroidHandle);

        shipHandle.Complete( );
        sysHandle.Complete( );
        planetHandle.Complete( );
        asteroidHandle.Complete( );

        Entity[] shipCopys = shipArray.Where(o => em.GetComponentData<SystemID>(o).Id == id).ToArray( );
        NativeArray<Entity> shipCopyArray = new NativeArray<Entity>(shipCopys.Length, Allocator.Temp);
        shipCopyArray.CopyFrom(shipCopys);
        shipCopys = null;

        Entity[] planetsCopys = planetsArray.Where(o => em.GetComponentData<SystemID>(o).Id == id).ToArray( );
        NativeArray<Entity> planetsCopyArray = new NativeArray<Entity>(planetsCopys.Length, Allocator.Temp);
        planetsCopyArray.CopyFrom(planetsCopys);
        planetsCopys = null;

        Entity[] asteroidCopys = asteroidArray.Where(o => em.GetComponentData<SystemID>(o).Id == id).ToArray( );
        NativeArray<Entity> asteroidCopyArray = new NativeArray<Entity>(asteroidCopys.Length, Allocator.Temp);
        asteroidCopyArray.CopyFrom(asteroidCopys);
        asteroidCopys = null;

        em.AddComponent<BaseEntity.SpawnCloneTag>(shipCopyArray);
        em.AddComponent<BaseEntity.SpawnCloneTag>(planetsCopyArray);
        em.AddComponent<BaseEntity.SpawnCloneTag>(asteroidCopyArray);




        Entity system = systemsArray.FirstOrDefault(o => em.GetComponentData<Id>(o).id == id);
        DynamicBuffer<ConnectionData> buff = em.GetBuffer<ePointConnnectionBuffer>(system).Reinterpret<ConnectionData>( );

        NativeArray<Translation> wormHoles = new NativeArray<Translation>(em.GetBuffer<ePointConnnectionBuffer>(system).Length, Allocator.Temp);
        for ( int i = 0; i < wormHoles.Length; i++ )
        {
            wormHoles[i] = new Translation( ) { Value = buff[i].position };
        }

        Stars.SpawnStar(em.GetComponentData<SystemData>(system).starPos);
        Wormholes.SpawnWormholes(wormHoles);

        shipArray.Dispose( );
        planetsArray.Dispose( );
        asteroidArray.Dispose( );
        systemsArray.Dispose( );
        wormHoles.Dispose( );
        shipCopyArray.Dispose( );
        planetsCopyArray.Dispose( );
        asteroidCopyArray.Dispose( );

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

public class SystemCloneDeleter : SystemBase
{
    EntityCommandBufferSystem ecbs;
    EntityQuery deletionQuery;
    protected override void OnCreate( )
    {
        base.OnCreate( );
        ecbs = World.GetOrCreateSystem<EndSimulationEntityCommandBufferSystem>( );
        deletionQuery = World.DefaultGameObjectInjectionWorld.EntityManager.CreateEntityQuery(new ComponentType[] { ComponentType.ReadOnly<SystemEntity.Id>( ), ComponentType.ReadOnly<CloneTag>( ), ComponentType.ReadOnly<BaseEntity.DeleteCloneTag>( ) });
    }

    protected override void OnUpdate( )
    {
        //var ecb = ecbs.CreateCommandBuffer().AsParallelWriter();


        NativeArray<Entity> systems = deletionQuery.ToEntityArray(Allocator.Temp);
        World.DefaultGameObjectInjectionWorld.EntityManager.DestroyEntity(systems);
        systems.Dispose( );

    }
}

public class SystemCloneSpawner : SystemBase
{
    EntityCommandBufferSystem ecbs;
    protected override void OnCreate( )
    {
        base.OnCreate( );
        ecbs = World.GetOrCreateSystem<EndSimulationEntityCommandBufferSystem>( );
    }



    protected override void OnUpdate( )
    {
        EntityCommandBuffer.ParallelWriter ecb = ecbs.CreateCommandBuffer( ).AsParallelWriter( );
        Entity systemClone = SB.systemClone;

        Entities.WithAll<BaseEntity.SpawnCloneTag>( ).ForEach((Entity system, int entityInQueryIndex, in Translation pos, in SystemEntity.Id id) =>
         {

             Entity clone = ecb.Instantiate(entityInQueryIndex, systemClone);
             ecb.AddComponent<CloneTag>(entityInQueryIndex, clone);
             ecb.SetComponent<Translation>(entityInQueryIndex, clone, pos);
             ecb.AddComponent<SystemEntity.Id>(entityInQueryIndex, clone, id);
             ecb.RemoveComponent<BaseEntity.SpawnCloneTag>(entityInQueryIndex, system);

         }).ScheduleParallel( );

        ecbs.AddJobHandleForProducer(Dependency);

    }
}