using ECSTesting.Components;
using ECSTesting.Systems.Ships;
using Unity.Collections;
using Unity.Entities;
using Unity.Jobs;
using Unity.Jobs.LowLevel.Unsafe;
using Unity.Transforms;
using UnityEngine;

namespace ECSTesting.GlobalAccess
{
    public static class BaseEntity
    {
        static EntityManager em = World.DefaultGameObjectInjectionWorld.EntityManager;
        public static void DestroyAllClones()
        {
            var shipDeleter = World.DefaultGameObjectInjectionWorld.GetExistingSystem<ShipCloneDeleter>();
            NativeArray<Entity> clones = em.CreateEntityQuery(new ComponentType[] { typeof(CloneTag) }).ToEntityArrayAsync(Allocator.TempJob, out JobHandle handle);
            handle.Complete();
            em.AddComponent<DeleteCloneTag>(clones);
            shipDeleter.Update();
            clones.Dispose();
        }

        public static Translation GetTrans(Entity entity)
        {
            return em.GetComponentData<Translation>(entity);
        }
        public static void MirrorTrans(Entity sender, Entity recipient)
        {
            em.SetComponentData(recipient, new Translation() { Value = em.GetComponentData<Translation>(sender).Value });
        }

        public struct DeleteCloneTag : IComponentData { }

        public struct SpawnCloneTag : IComponentData { }

        public struct CloneHolder : IComponentData { public Entity clone; }
    }

    [UpdateInGroup(typeof(InitializationSystemGroup))]
    public class BatchedCollections : ComponentSystem
    {
        public NativeArray<Unity.Mathematics.Random> RandomArray { get; private set; }
        public NativeArray<long> ticketCounter { get; private set; }

        protected override void OnCreate()
        {
            Unity.Mathematics.Random[] randomArray = new Unity.Mathematics.Random[JobsUtility.MaxJobThreadCount];
            Unity.Mathematics.Random seed = new Unity.Mathematics.Random(GameObject.Find("GenerationSettings").GetComponent<GenerationSettings>().seed);
            ticketCounter = new NativeArray<long>(JobsUtility.MaxJobThreadCount, Allocator.Persistent);

            for ( int i = 0; i < JobsUtility.MaxJobThreadCount; ++i )
            {
                randomArray[i] = new Unity.Mathematics.Random(seed.NextUInt());

            }

            RandomArray = new NativeArray<Unity.Mathematics.Random>(randomArray, Allocator.Persistent);
        }

        protected override void OnDestroy()
        {
            RandomArray.Dispose();
            ticketCounter.Dispose();
        }

        protected override void OnUpdate() { }
    }
}