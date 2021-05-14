using Unity.Entities;

public static class AsteroidMethods
{
    public static EntityManager em = PrefabAccessor.entityManager;
    public static int MaxId { get { int x = maxId; maxId++; return x; } set { } }
    static int maxId = 0;

}
