using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using Unity.Collections;
using Unity.Collections.LowLevel.Unsafe;
using Unity.Entities;
using UnityEngine;

public class ECollection
{
    private static EntityManager em = World.DefaultGameObjectInjectionWorld.EntityManager;

    private int currentOpenIndex = 0;
    NativeList<Entity> mainList;

    public void Add(Entity entity)
    {
        mainList.Add(entity);
    }

    public ECollection(int startingsSize = 0)
    {
        mainList = new NativeList<Entity>(startingsSize > 0 ? startingsSize : 1, Allocator.Persistent);
    }
}
