using System.Collections;
using System.Collections.Generic;
using Unity.Entities;
using UnityEngine;

public static class AsteroidMethods
{
    public static EntityManager em = PrefabAccessor.entityManager;
    public static int MaxId { get { int x = maxId; maxId++; return x; } set { } }
    static int maxId = 0;

}
