using EconSimV2.Assets.V2.GlobalSystems;
using Unity.Entities;

namespace EconSimV2.Assets.V2.SystemManagement
{
    public static class AsteroidMethods
    {
        public static EntityManager em = PrefabAccessor.entityManager;
        public static int MaxId { get { int x = maxId; maxId++; return x; } set { } }
        static int maxId = 0;

    }
}