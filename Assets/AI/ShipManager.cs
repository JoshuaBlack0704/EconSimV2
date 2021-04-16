using System.Collections;
using System.Collections.Generic;
using Unity.Entities;
using Unity.Transforms;
using Unity.Rendering;
using Unity.Mathematics;
using UnityEngine;
using Unity.Jobs;

public class ShipManager : MonoBehaviour
{
    World defaultWorld;
    EntityManager entityManager;
    Entity shipEntity;

    public ShipManager()
    {
        defaultWorld = World.DefaultGameObjectInjectionWorld;
        entityManager = defaultWorld.EntityManager;
        GameObjectConversionSettings settings = GameObjectConversionSettings.FromWorld(defaultWorld, null);
        shipEntity = GameObjectConversionUtility.ConvertGameObjectHierarchy(PrefabAccessor.gameObjectArray[5], settings);
        entityManager.AddComponent<shipId>(shipEntity);
    }

}
