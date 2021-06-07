using System.Collections;
using System.Collections.Generic;
using NUnit.Framework;
using UnityEngine;
using UnityEngine.TestTools;
using ECSTesting.Components;
using Unity.Collections;
using Unity.Entities;
using Unity.Transforms;
using Unity.Jobs;
using System.Linq;

public class PlaymodeTest
{
    // A Test behaves as an ordinary method
    [Test]
    public void TestEntityOrder()
    {
        var rand = new Unity.Mathematics.Random(1);
        var em = World.DefaultGameObjectInjectionWorld.EntityManager;
        var ents = new NativeArray<Entity>(100, Allocator.Temp);
        var arch = em.CreateArchetype(typeof(SystemID), typeof(Translation));

        em.CreateEntity(arch, ents);
        foreach ( var ent in ents )
        {
            em.SetComponentData<SystemID>(ent, new SystemID() { id = rand.NextInt() });
            em.SetComponentData<Translation>(ent, new Translation() { Value = rand.NextFloat3() });
        }

        var query = em.CreateEntityQuery(typeof(SystemID), typeof(Translation));

        var entArray = query.ToEntityArrayAsync(Allocator.TempJob, out JobHandle handle1);
        handle1.Complete();
        var IDArray = query.ToComponentDataArrayAsync<SystemID>(Allocator.TempJob, out JobHandle handle2);
        handle2.Complete();
        var posArray = query.ToComponentDataArrayAsync<Translation>(Allocator.TempJob, out JobHandle handle3);
        handle3.Complete();


        var dataQuery = from ent in entArray.ToArray()
                        from id in IDArray.ToArray()
                        from pos in posArray.ToArray()
                        where em.GetComponentData<SystemID>(ent).id == id.id
                        where (em.GetComponentData<Translation>(ent).Value.x == pos.Value.x) && (em.GetComponentData<Translation>(ent).Value.y == pos.Value.y) && (em.GetComponentData<Translation>(ent).Value.z == pos.Value.z)
                        select ent;

        Assert.AreEqual(dataQuery.ToArray().Length, ents.Length);

        entArray.Dispose();
        IDArray.Dispose();
        posArray.Dispose();
        ents.Dispose();
        // Use the Assert class to test conditions
    }

    // A UnityTest behaves like a coroutine in Play Mode. In Edit Mode you can use
    // `yield return null;` to skip a frame.
    [UnityTest]
    public IEnumerator PlaymodeTestWithEnumeratorPasses()
    {


        // Use the Assert class to test conditions.
        // Use yield to skip a frame.

        yield return null;
    }
}
