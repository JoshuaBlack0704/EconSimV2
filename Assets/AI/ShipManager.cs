using System.Collections;
using System.Collections.Generic;
using Unity.Entities;
using Unity.Transforms;
using Unity.Mathematics;
using Unity.Rendering;
using UnityEngine;
using Unity.Jobs;
using Random = Unity.Mathematics.Random;

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
    
    protected override void OnUpdate()
    {
        var angularVelocity = (2 * Mathf.PI) / 20;
        var angle = angularVelocity * Time.ElapsedTime;

        
        var rand = new Random((uint)Time.ElapsedTime+1);
        Entities.ForEach((ref Translation trans, in shipId id) => {
            trans.Value = new Vector3()
            {
                x = (float)math.cos(angle + id.Id) * id.Id,
                z = (float)math.sin(angle + id.Id) * id.Id,
                y = trans.Value.y
            };
        }).ScheduleParallel(); 
    }
}

public partial class ShipSpawner : SystemBase
{
    protected override void OnUpdate()
    {
        ShipAccessor.manager.spawnShip();
        ShipAccessor.manager.spawnShip();
        ShipAccessor.manager.spawnShip();
        ShipAccessor.manager.spawnShip();
        ShipAccessor.manager.spawnShip(); ShipAccessor.manager.spawnShip();
        ShipAccessor.manager.spawnShip();
        ShipAccessor.manager.spawnShip();
        ShipAccessor.manager.spawnShip();
        ShipAccessor.manager.spawnShip(); ShipAccessor.manager.spawnShip();
        ShipAccessor.manager.spawnShip();
        ShipAccessor.manager.spawnShip();
        ShipAccessor.manager.spawnShip();
        ShipAccessor.manager.spawnShip(); ShipAccessor.manager.spawnShip();
        ShipAccessor.manager.spawnShip();
        ShipAccessor.manager.spawnShip();
        ShipAccessor.manager.spawnShip();
        ShipAccessor.manager.spawnShip(); ShipAccessor.manager.spawnShip();
        ShipAccessor.manager.spawnShip();
        ShipAccessor.manager.spawnShip();
        ShipAccessor.manager.spawnShip();
        ShipAccessor.manager.spawnShip(); ShipAccessor.manager.spawnShip();
        ShipAccessor.manager.spawnShip();
        ShipAccessor.manager.spawnShip();
        ShipAccessor.manager.spawnShip();
        ShipAccessor.manager.spawnShip(); ShipAccessor.manager.spawnShip();
        ShipAccessor.manager.spawnShip();
        ShipAccessor.manager.spawnShip();
        ShipAccessor.manager.spawnShip();
        ShipAccessor.manager.spawnShip(); ShipAccessor.manager.spawnShip();
        ShipAccessor.manager.spawnShip();
        ShipAccessor.manager.spawnShip();
        ShipAccessor.manager.spawnShip();
        ShipAccessor.manager.spawnShip(); ShipAccessor.manager.spawnShip();
        ShipAccessor.manager.spawnShip();
        ShipAccessor.manager.spawnShip();
        ShipAccessor.manager.spawnShip();
        ShipAccessor.manager.spawnShip(); ShipAccessor.manager.spawnShip();
        ShipAccessor.manager.spawnShip();
        ShipAccessor.manager.spawnShip();
        ShipAccessor.manager.spawnShip();
        ShipAccessor.manager.spawnShip(); ShipAccessor.manager.spawnShip();
        ShipAccessor.manager.spawnShip();
        ShipAccessor.manager.spawnShip();
        ShipAccessor.manager.spawnShip();
        ShipAccessor.manager.spawnShip(); ShipAccessor.manager.spawnShip();
        ShipAccessor.manager.spawnShip();
        ShipAccessor.manager.spawnShip();
        ShipAccessor.manager.spawnShip();
        ShipAccessor.manager.spawnShip(); ShipAccessor.manager.spawnShip();
        ShipAccessor.manager.spawnShip();
        ShipAccessor.manager.spawnShip();
        ShipAccessor.manager.spawnShip();
        ShipAccessor.manager.spawnShip(); ShipAccessor.manager.spawnShip();
        ShipAccessor.manager.spawnShip();
        ShipAccessor.manager.spawnShip();
        ShipAccessor.manager.spawnShip();
        ShipAccessor.manager.spawnShip(); ShipAccessor.manager.spawnShip();
        ShipAccessor.manager.spawnShip();
        ShipAccessor.manager.spawnShip();
        ShipAccessor.manager.spawnShip();
        ShipAccessor.manager.spawnShip(); ShipAccessor.manager.spawnShip();
        ShipAccessor.manager.spawnShip();
        ShipAccessor.manager.spawnShip();
        ShipAccessor.manager.spawnShip();
        ShipAccessor.manager.spawnShip(); ShipAccessor.manager.spawnShip();
        ShipAccessor.manager.spawnShip();
        ShipAccessor.manager.spawnShip();
        ShipAccessor.manager.spawnShip();
        ShipAccessor.manager.spawnShip(); ShipAccessor.manager.spawnShip();
        ShipAccessor.manager.spawnShip();
        ShipAccessor.manager.spawnShip();
        ShipAccessor.manager.spawnShip();
        ShipAccessor.manager.spawnShip();
    }
}