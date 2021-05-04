using System.Collections;
using System.Collections.Generic;
using Unity.Entities;
using UnityEngine;

public class EntityPrefabBank : MonoBehaviour
{
    public GameObject system;

    public static Entity[] models = new Entity[1];
    public static Unity.Mathematics.Random rand = new Unity.Mathematics.Random(1);

    // Start is called before the first frame update
    void Awake()
    {
        models = new Entity[1];
        GameObjectConversionSettings settings = GameObjectConversionSettings.FromWorld(World.DefaultGameObjectInjectionWorld, null);
        models[0] = GameObjectConversionUtility.ConvertGameObjectHierarchy(system, settings);
    }
}
