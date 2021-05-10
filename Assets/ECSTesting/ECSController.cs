using System.Collections;
using System.Collections.Generic;
using Unity.Collections;
using Unity.Entities;
using Unity.Transforms;
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
        EntityPoint.BruteForceConnect();
    }

    bool isRendered;
    // Update is called once per frame
    
    void Update()
    {
        EntityManager em = World.DefaultGameObjectInjectionWorld.EntityManager;
        EntityQuery query = World.DefaultGameObjectInjectionWorld.EntityManager.CreateEntityQuery(new ComponentType[] { typeof(EntityPoint.Id) });
        var points = query.ToEntityArray(Allocator.Temp);

        foreach (var ent in points)
        {
            foreach (var con in em.GetBuffer<EntityPoint.ePointConnnectionBuffer>(ent).Reinterpret<EntityPoint.ConnectionData>())
            {
                Debug.DrawLine(em.GetComponentData<Translation>(ent).Value, em.GetComponentData<Translation>(points[con.target]).Value);
            }
        }

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
