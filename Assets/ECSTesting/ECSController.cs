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

    

   
    
}
