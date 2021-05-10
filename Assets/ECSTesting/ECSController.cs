using System.Collections;
using System.Collections.Generic;
using System.Linq;
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
    EntityManager em;
    NativeArray<Entity> points;

    public void RenderRandomPath()
    {
        var ids = new NativeArray<int>(points.Length, Allocator.Temp);
        ids.CopyFrom(points.Select(o => em.GetComponentData<EntityPoint.Id>(o).id).ToArray());
        var dummy = new NativeArray<int>(1, Allocator.Temp);

        EntityPathFinder.GetPath(Random.Range(0, points.Length), Random.Range(0, points.Length), ids, dummy, false, out NativeArray<int> pathIds);

        for (int i = 1; i < pathIds.Length; i++)
        {
            Debug.DrawLine(em.GetComponentData<Translation>(points[pathIds[i-1]]).Value, em.GetComponentData<Translation>(points[pathIds[i]]).Value, Color.green, .25f);
        }

        //points.Dispose();
        ids.Dispose();
        dummy.Dispose();
        pathIds.Dispose();
    }
    // Start is called before the first frame update
    void Start()
    {
        em = World.DefaultGameObjectInjectionWorld.EntityManager;
        cloneEntity = GameObjectConversionUtility.ConvertGameObjectHierarchy(clone, GameObjectConversionSettings.FromWorld(World.DefaultGameObjectInjectionWorld, null));
        EntityPoint.GenerateRandomPoints(pointCount);
        EntityPoint.BruteForceConnect();
        EntityPathFinder.Initialize();
        points = em.CreateEntityQuery(new ComponentType[] { ComponentType.ReadOnly<EntityPoint.Id>() }).ToEntityArray(Allocator.Persistent);
    }

    private void OnDrawGizmos()
    {
        //EntityQuery query = World.DefaultGameObjectInjectionWorld.EntityManager.CreateEntityQuery(new ComponentType[] { typeof(EntityPoint.Id) });
        //var points = query.ToEntityArray(Allocator.Temp);

        //foreach (var ent in points)
        //{
        //    foreach (var con in em.GetBuffer<EntityPoint.ePointConnnectionBuffer>(ent).Reinterpret<EntityPoint.ConnectionData>())
        //    {
        //        Debug.DrawLine(em.GetComponentData<Translation>(ent).Value, em.GetComponentData<Translation>(points[con.target]).Value);
        //    }
        //}
    }
    bool isRendered;
    // Update is called once per frame
    
    void Update()
    {
        RenderRandomPath();


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
