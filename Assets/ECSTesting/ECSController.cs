using System.Collections;
using System.Collections.Generic;
using Unity.Entities;
using UnityEngine;

public class ECSController : MonoBehaviour
{
    public int pointCount;
    public bool render;
    public GameObject clone;
    public static Entity cloneEntity;
    // Start is called before the first frame update
    void Start()
    {
        cloneEntity = GameObjectConversionUtility.ConvertGameObjectHierarchy(clone, GameObjectConversionSettings.FromWorld(World.DefaultGameObjectInjectionWorld, null));
        EntityPoint.GenerateRandomPoints(pointCount);
    }

    bool isRendered;
    // Update is called once per frame
    void Update()
    {
        if (render  && !isRendered)
        {
            EntityPoint.RenderPoints();
            isRendered = true;
        }
        else if (render && isRendered)
        {
            BaseEntity.DestroyAllClones();
            isRendered = false;
        }

        render = false;
    }
}
