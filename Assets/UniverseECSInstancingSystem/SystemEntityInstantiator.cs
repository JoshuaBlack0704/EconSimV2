using System.Collections;
using System.Collections.Generic;
using Unity.Entities;
using Unity.Transforms;
using Unity.Rendering;
using Unity.Mathematics;
using UnityEngine;

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
}
