using System.Collections;
using System.Collections.Generic;
using Unity.Entities;
using Unity.Transforms;
using Unity.Rendering;
using Unity.Mathematics;
using UnityEngine;
using Unity.Jobs;

public class SystemEntityInstantiator : MonoBehaviour
{
    [SerializeField] private GameObject systemGameObject;

    private Entity systemEntity;
    private World defaultWorld;
    private EntityManager entityManager;
    private Universe universe;
    // Start is called before the first frame update
    public SystemEntityInstantiator(Universe _universe)
    {
        Resources.UnloadUnusedAssets();
        universe = _universe;
        defaultWorld = World.DefaultGameObjectInjectionWorld;
        entityManager = defaultWorld.EntityManager;

        GameObjectConversionSettings settings = GameObjectConversionSettings.FromWorld(defaultWorld, null);

        systemEntity = GameObjectConversionUtility.ConvertGameObjectHierarchy((GameObject)Resources.Load("system", typeof(GameObject)), settings);
        
    }

    public void InstantiateEntity(Vector3 pos)
    {
        Entity newSystem = entityManager.Instantiate(systemEntity);
        entityManager.SetComponentData(newSystem, new Translation { Value = pos});
    }

    public void Wiggle()
    {

    }

}

//public partial class WiggleSystem : SystemBase
//{
//    protected override void OnUpdate()
//    {

//        float time = (float)Time.ElapsedTime;
//        float delta = Time.DeltaTime;
//        float amplitude = 1;
//        Entities.ForEach((ref Translation trans) => {

//            trans.Value = new Vector3()
//            {
//                x = trans.Value.x + math.sin(time) * delta,
//                y = trans.Value.y + math.sin(time) * delta,
//                z = trans.Value.z + math.sin(time) * delta 
//            };
        
//        }).ScheduleParallel();
//    }
//}
