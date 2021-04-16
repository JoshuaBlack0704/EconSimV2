using System.Collections;
using System.Collections.Generic;
using Unity.Entities;
using Unity.Transforms;
using Unity.Mathematics;
using Unity.Rendering;
using UnityEngine;
using Unity.Jobs;
using Random = Unity.Mathematics.Random;
using Unity.Collections;

public class ShipManager : MonoBehaviour
{
    World defaultWorld;
    EntityManager entityManager;
    Entity shipEntity;
    public void spawnShip()
    {
        var copy = entityManager.Instantiate(shipEntity);

        entityManager.SetComponentData(copy, new Translation
        {
            Value = new Vector3()
            {
                x = UnityEngine.Random.Range(0, 100),
                y = UnityEngine.Random.Range(0, 100),
                z = UnityEngine.Random.Range(0, 100)
            }
        });
        entityManager.SetComponentData(copy, new shipId { Id = UnityEngine.Random.Range(0, 100f) });
        entityManager.SetComponentData(copy, new shipVector { vector = new Vector3 { x = UnityEngine.Random.Range(-1, 1f), y = UnityEngine.Random.Range(-1, 1f), z = UnityEngine.Random.Range(-1, 1f), } });
    }

    public ShipManager()
    {
        defaultWorld = World.DefaultGameObjectInjectionWorld;
        entityManager = defaultWorld.EntityManager;
        GameObjectConversionSettings settings = GameObjectConversionSettings.FromWorld(defaultWorld, null);
        shipEntity = GameObjectConversionUtility.ConvertGameObjectHierarchy(PrefabAccessor.gameObjectArray[5], settings);
        entityManager.AddComponent<shipId>(shipEntity);
        entityManager.AddComponent<shipVector>(shipEntity);

        
        
    }
    

    
}
public static class ShipAccessor
{
   public  static ShipManager manager = new ShipManager();
}

public partial class ShipMover : SystemBase
{
        EntityQueryDesc query = new EntityQueryDesc { All = new ComponentType[] { typeof(shipVector), typeof(Translation)} };

    protected override void OnUpdate()
    {
        var angularVelocity = (2 * Mathf.PI) / 20;
        var angle = angularVelocity * Time.ElapsedTime;
        var change = Time.DeltaTime;
        EntityQuery group = GetEntityQuery(query);
        NativeArray<shipVector> allEntities = group.ToComponentDataArray<shipVector>(Unity.Collections.Allocator.TempJob);
        var allTrans = group.ToComponentDataArray<Translation>(Unity.Collections.Allocator.TempJob);

        var rand = new Random((uint)Time.ElapsedTime+1);
        Entities.WithReadOnly(allEntities).WithReadOnly(allTrans).ForEach((ref Translation trans, ref Rotation rotation, ref shipVector dir, in shipId id) => {

            Vector3 avg = new Vector3();
            Vector3 avg2 = new Vector3();
            for (int i = 0; i < allEntities.Length; i++)
            {
                avg += ((allEntities[i].vector*change*.0000001f) / (math.pow(allTrans[i].Value.x - trans.Value.x, 2) + math.pow(allTrans[i].Value.y - trans.Value.y, 2) + math.pow(allTrans[i].Value.z - trans.Value.z, 2)));
            }

            trans.Value = new Vector3()
            {
                x = dir.vector.x*change + trans.Value.x,
                y = dir.vector.y*change + trans.Value.y,
                z= dir.vector.z*change + trans.Value.z
            };
            dir.vector += avg2;
            rotation.Value = Unity.Mathematics.quaternion.LookRotationSafe(dir.vector, Vector3.up);

        }).WithDisposeOnCompletion(allEntities).WithDisposeOnCompletion(allTrans).ScheduleParallel();
        
    }
}

public partial class ShipSpawner : SystemBase
{
    protected override void OnUpdate()
    {
        for (int i = 0; i < 1; i++)
        {
            ShipAccessor.manager.spawnShip();

        }
    }
}