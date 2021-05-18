using EconSimV2.Assets.ECSTesting.ECSObjects;
using EconSimV2.Assets.ECSTesting.ECSWorks;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;
using Unity.Collections;
using Unity.Entities;
using Unity.Jobs;
using Unity.Transforms;
using UnityEngine;

namespace EconSimV2.Assets.ECSTesting
{
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
        public int shipsPerSystem;
        [Range(0, 100)]
        public float timeMultiplier;

        public GameObject SystemModel;
        public GameObject planetModel;
        public GameObject asteroidModel;
        public GameObject wormholeModel;
        public GameObject starModel;
        public GameObject shipModel;
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
            Ships.Initialize();

        }

        void GenerateUniverse()
        {
            SystemEntity.GenerateRandomPoints(this);
            NewOctTree.ConnectSystems(this);
            Planets.GeneratePlanets();
            Asteroids.GenerateAsteroids();
            Ships.GenerateShipsForAll(shipsPerSystem);
            EntityPathFinder.Initialize();
            SystemEntity.RenderPoints();
            CameraController.Initialize();
        }
        private void Start()
        {

            GenerateUniverse();

        }

        private void OnDrawGizmos()
        {
            var em = World.DefaultGameObjectInjectionWorld.EntityManager;
            var query = em.CreateEntityQuery(typeof(SystemEntity.Id));
            var list = query.ToEntityArrayAsync(Allocator.TempJob, out JobHandle handle);
            handle.Complete();
            foreach ( var point in list )
            {
                foreach ( var connection in em.GetBuffer<SystemEntity.ePointConnnectionBuffer>(point).Reinterpret<SystemEntity.ConnectionData>() )
                {
                    Debug.DrawLine(em.GetComponentData<Translation>(point).Value, em.GetComponentData<Translation>(connection.targetEntity).Value);
                }
            }
            list.Dispose();
        }
        public static bool isRendered = false;
        // Update is called once per frame



        void Update()
        {
            EntityManager em = World.DefaultGameObjectInjectionWorld.EntityManager;
            EntityQuery query = em.CreateEntityQuery(new ComponentType[] { ComponentType.ReadOnly<SystemEntity.Id>() });
            NativeArray<Entity> points = query.ToEntityArray(Allocator.Temp);


            var watch = new System.Diagnostics.Stopwatch();
            watch.Start();
            //EntityPathFinder.GetPath(0, 10, points.Select(o => em.GetComponentData<SystemEntity.Id>(o).id).ToArray(), new int[0], false);
            var list = new List<Task>(100);
            for ( int i = 0; i < 100; i++ )
            {
                list.Add(Task.Run(() => EntityPathFinder.GetPath(0, 10, points.Select(o => em.GetComponentData<SystemEntity.Id>(o).id).ToArray(), new int[0], false)));
            }
            Task.WaitAll(list.ToArray());
            watch.Stop();
            points.Dispose();


            Debug.Log($"PathFinder took {watch.ElapsedMilliseconds / 1000f} seconds");
            SB.masterDeltaTime = timeMultiplier * Time.deltaTime;
            SB.masterTime += SB.masterDeltaTime;

            if ( render && !isRendered )
            {
                BaseEntity.DestroyAllClones();
                SystemEntity.EnterSystem(selectedSystem);
                isRendered = true;
            }
            else if ( render && isRendered )
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
        public static float masterTime;
        public static float masterDeltaTime;

        public static Entity systemClone = GameObjectConversionUtility.ConvertGameObjectHierarchy(genSettings.SystemModel, GameObjectConversionSettings.FromWorld(World.DefaultGameObjectInjectionWorld, null));

        public static Entity starClone = GameObjectConversionUtility.ConvertGameObjectHierarchy(genSettings.starModel, GameObjectConversionSettings.FromWorld(World.DefaultGameObjectInjectionWorld, null));

        public static Entity planetClone = GameObjectConversionUtility.ConvertGameObjectHierarchy(genSettings.planetModel, GameObjectConversionSettings.FromWorld(World.DefaultGameObjectInjectionWorld, null));

        public static Entity asteroidClone = GameObjectConversionUtility.ConvertGameObjectHierarchy(genSettings.asteroidModel, GameObjectConversionSettings.FromWorld(World.DefaultGameObjectInjectionWorld, null));

        public static Entity wormholeClone = GameObjectConversionUtility.ConvertGameObjectHierarchy(genSettings.wormholeModel, GameObjectConversionSettings.FromWorld(World.DefaultGameObjectInjectionWorld, null));

        public static Entity shipClone = GameObjectConversionUtility.ConvertGameObjectHierarchy(genSettings.shipModel, GameObjectConversionSettings.FromWorld(World.DefaultGameObjectInjectionWorld, null));




        public static int systemCount;
        public static float universeSize;
        public static float maxSystemSize;
        public static int planetsPerSystem;
        public static int asteroidsPerSystem;
        public static int connectionsPerSystem;
    }
}