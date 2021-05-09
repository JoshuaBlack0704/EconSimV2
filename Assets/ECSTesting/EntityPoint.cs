using Unity.Collections;
using Unity.Entities;
using Unity.Mathematics;
using Unity.Transforms;

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

            for (int x = 0; x < 4; x++)
            {
                var buff = connections.Reinterpret<ConnectionData>();
                buff.Add(new ConnectionData() { target = rand.NextInt(0, 100), position = rand.NextFloat3(0, 100)});
            }
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

