using UnityEngine;
using Unity.Mathematics;
using Unity.Entities;

public static class Tickets
{
    static EntityManager em = SB.em;
    public struct TimeAtExecute : IComponentData { public float time; }
    public struct TimeAtWrite : IComponentData { public float time; }
    public static void GetTicket(Entity obj, out TimeAtExecute exe, out TimeAtWrite write)
    {
        exe = em.GetComponentData<TimeAtExecute>(obj);
        write = em.GetComponentData<TimeAtWrite>(obj);
    }
}