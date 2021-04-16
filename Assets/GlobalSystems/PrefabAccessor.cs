using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PrefabAccessor : MonoBehaviour
{
    public GameObject SystemPrefab;
    public GameObject planetEntity;
    public GameObject asteroidEntity;
    public GameObject starEntity;
    public GameObject wormholeEntity;
    public GameObject shipEntity;
    // Start is called before the first frame update
    /// <summary>
    /// 0 - system ,
    /// 1 - planet ,
    /// 2 - asteroid ,
    /// 3 - star ,
    /// 4 - wormhole ,
    /// 5-ship 
    /// </summary>
    public static GameObject[] gameObjectArray;
    void Awake()
    {
        gameObjectArray = new GameObject[6];
        gameObjectArray[0] = SystemPrefab;
        gameObjectArray[1] = planetEntity;
        gameObjectArray[2] = asteroidEntity;
        gameObjectArray[3] = starEntity;
        gameObjectArray[4] = wormholeEntity;
        gameObjectArray[5] = shipEntity;
    }

}
