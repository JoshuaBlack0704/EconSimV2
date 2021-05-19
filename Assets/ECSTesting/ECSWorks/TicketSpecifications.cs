using Unity.Entities;

namespace ECSTesting.ECSWorks
{
    public static class Tickets
    {
        static EntityManager em = SB.em;
        //public struct TimeAtExecute : IComponentData { public float time; }
        //public struct TimeAtWrite : IComponentData { public float time; }

        public struct TimeData : IComponentData { public float timeAtExecute; public float timeAtWrite; }
    }
}