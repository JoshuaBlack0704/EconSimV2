using System.Collections;
using System.Collections.Generic;
using Unity.Entities;
using UnityEngine;

public static class Planets
{
    static EntityManager em = World.DefaultGameObjectInjectionWorld.EntityManager;
    static EntityArchetype planetArc;


    static void CreatePlanets()
    {

    }


    struct Id : IComponentData, IIdTag
    {
        public int id { get; set; }
    }
}
