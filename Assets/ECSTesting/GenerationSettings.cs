using Unity.Entities;
using UnityEngine;

public class GenerationSettings : MonoBehaviour
{
    [Min(1)]
    public uint seed;
    public int systemCount;
    public float universeSize;
    public float maxSystemSize;
    public int planetsPerSystem;
    public int asteroidsPerSystem;
    public bool randomPopulate;
    [Range(4, 10)]
    public int connectionsPerSystem;
    public bool render;
    public int selectedSystem;

    public GameObject SystemModel;
    public GameObject planetModel;
    public GameObject asteroidModel;
    public GameObject wormholeModel;
    public GameObject starModel;
    private void Awake()
    {
        SB.rand = new Unity.Mathematics.Random(1);
        SB.em = World.DefaultGameObjectInjectionWorld.EntityManager;
        SB.universeSize = universeSize;
        SB.maxSystemSize = maxSystemSize;
        SB.planetsPerSystem = planetsPerSystem;
        SB.asteroidsPerSystem = asteroidsPerSystem;
        SB.connectionsPerSystem = connectionsPerSystem;
        SB.systemCount = systemCount;
        Planets.Initialize(planetModel);
        Asteroids.Initialize(asteroidModel);
    }

    void GenerateUniverse()
    {
        SystemEntity.GenerateRandomPoints(systemCount, maxSystemSize, planetsPerSystem, asteroidsPerSystem, randomPopulate);
        //SystemEntity.BruteForceConnect(connectionsPerSystem);
        Planets.GeneratePlanets();
        Asteroids.GenerateAsteroids();
        //EntityPathFinder.Initialize();
        SystemEntity.RenderPoints();
        CameraController.Initialize();
    }
    private void Start()
    {

        GenerateUniverse();
        
    }

    public static bool isRendered = false;
    // Update is called once per frame

    void Update()
    {

        if (render && !isRendered)
        {
            BaseEntity.DestroyAllClones();
            SystemEntity.EnterSystem(selectedSystem);
            isRendered = true;
        }
        else if (render && isRendered)
        {
            BaseEntity.DestroyAllClones();
            SystemEntity.RenderPoints();
            isRendered = false;
        }

        render = false;
    }
}

public static class SB
{
    static GenerationSettings genSettings = GameObject.Find("GenerationSettings").GetComponent<GenerationSettings>();
    public static Unity.Mathematics.Random rand;
    public static EntityManager em;
    public static Entity systemClone = GameObjectConversionUtility.ConvertGameObjectHierarchy(genSettings.SystemModel, GameObjectConversionSettings.FromWorld(World.DefaultGameObjectInjectionWorld, null));

    public static Entity starClone = GameObjectConversionUtility.ConvertGameObjectHierarchy(genSettings.starModel, GameObjectConversionSettings.FromWorld(World.DefaultGameObjectInjectionWorld, null));

    public static Entity planetClone = GameObjectConversionUtility.ConvertGameObjectHierarchy(genSettings.planetModel, GameObjectConversionSettings.FromWorld(World.DefaultGameObjectInjectionWorld, null));

    public static Entity asteroidClone = GameObjectConversionUtility.ConvertGameObjectHierarchy(genSettings.asteroidModel, GameObjectConversionSettings.FromWorld(World.DefaultGameObjectInjectionWorld, null));

    public static Entity wormholeClone = GameObjectConversionUtility.ConvertGameObjectHierarchy(genSettings.wormholeModel, GameObjectConversionSettings.FromWorld(World.DefaultGameObjectInjectionWorld, null));


    public static int systemCount;
    public static float universeSize;
    public static float maxSystemSize;
    public static int planetsPerSystem;
    public static int asteroidsPerSystem;
    public static int connectionsPerSystem;
}
