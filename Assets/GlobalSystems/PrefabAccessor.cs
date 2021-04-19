using System.Collections;
using System.Collections.Generic;
using Unity.Entities;
using UnityEngine;

public class PrefabAccessor : MonoBehaviour
{
    public GameObject SystemPrefab;
    public GameObject planetPrefab;
    public GameObject asteroidPrefab;
    public GameObject starPrefab;
    public GameObject wormholePrefab;
    public GameObject shipPrefab;
    
    // Start is called before the first frame update
    /// <summary>
    /// 0-system ,
    /// 1-planet ,
    /// 2-asteroid ,
    /// 3-star ,
    /// 4-wormhole ,
    /// 5-ship 
    /// </summary>
    public static Entity[] entityTemplateArray = new Entity[6];
    void Awake()
    {
        GameObjectConversionSettings settings = GameObjectConversionSettings.FromWorld(World.DefaultGameObjectInjectionWorld, null);
        entityTemplateArray = new Entity[6];
        entityTemplateArray[0] = GameObjectConversionUtility.ConvertGameObjectHierarchy(SystemPrefab, settings);
        entityTemplateArray[1] = GameObjectConversionUtility.ConvertGameObjectHierarchy(planetPrefab, settings);
        entityTemplateArray[2] = GameObjectConversionUtility.ConvertGameObjectHierarchy(asteroidPrefab, settings);
        entityTemplateArray[3] = GameObjectConversionUtility.ConvertGameObjectHierarchy(starPrefab, settings);
        entityTemplateArray[4] = GameObjectConversionUtility.ConvertGameObjectHierarchy(wormholePrefab, settings);
        entityTemplateArray[5] = GameObjectConversionUtility.ConvertGameObjectHierarchy(shipPrefab, settings);
    }

}
