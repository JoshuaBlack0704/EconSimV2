using System.Collections;
using System.Collections.Generic;
using Unity.Collections;
using Unity.Entities;
using Unity.Jobs;
using UnityEngine;

public class SystemBasePerfTest : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        var em = World.DefaultGameObjectInjectionWorld.EntityManager;

        var arc = em.CreateArchetype(new ComponentType[] { typeof(TimeAtExecute) });
        var arr = new NativeArray<Entity>(10000000, Allocator.Temp);
        em.CreateEntity(arc, arr);
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}

public struct TimeAtExecute : IComponentData
{
    public float timeAtExecute;
}

public class FindExe : SystemBase
{
    EndSimulationEntityCommandBufferSystem ecbs;
    protected override void OnCreate()
    {
        base.OnCreate();
        ecbs = World.GetOrCreateSystem<EndSimulationEntityCommandBufferSystem>();
    }
    protected override void OnUpdate()
    {
        var watch = new System.Diagnostics.Stopwatch();
        watch.Start();
        var ecb = ecbs.CreateCommandBuffer().AsParallelWriter();
        var time = Time.ElapsedTime;

        Entities.ForEach((Entity et, int entityInQueryIndex, in TimeAtExecute time1) => {

            float y = time1.timeAtExecute + (float)time;
            ecb.SetComponent<TimeAtExecute>(entityInQueryIndex, et, new TimeAtExecute() { timeAtExecute = y });
        }).ScheduleParallel();
        ecbs.AddJobHandleForProducer(Dependency);
        ecbs.Update();
        watch.Stop();
        Debug.Log(string.Format("Iterating through tickets took {0} ms", watch.ElapsedMilliseconds));
    }
}