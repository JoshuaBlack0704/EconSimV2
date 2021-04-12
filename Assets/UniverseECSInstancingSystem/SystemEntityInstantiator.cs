using System.Collections;
using System.Collections.Generic;
using Unity.Entities;
using Unity.Transforms;
using Unity.Rendering;
using Unity.Mathematics;
using UnityEngine;
using Unity.Jobs;

public class SystemEntityInstantiator : MonoBehaviour
{
    [SerializeField] private GameObject systemGameObject;

    private Entity systemEntity;
    private Entity planetEntity;
    private Entity asteroidEntity;
    private Entity starEntity;
    private World defaultWorld;
    private EntityManager entityManager;
    private Universe universe;
    // Start is called before the first frame update
    public SystemEntityInstantiator(Universe _universe)
    {
        universe = _universe;
        defaultWorld = World.DefaultGameObjectInjectionWorld;
        entityManager = defaultWorld.EntityManager;

        GameObjectConversionSettings settings = GameObjectConversionSettings.FromWorld(defaultWorld, null);

        systemEntity = GameObjectConversionUtility.ConvertGameObjectHierarchy((GameObject)Resources.Load("system", typeof(GameObject)), settings);
        planetEntity = GameObjectConversionUtility.ConvertGameObjectHierarchy((GameObject)Resources.Load("Planet", typeof(GameObject)), settings);
        asteroidEntity = GameObjectConversionUtility.ConvertGameObjectHierarchy((GameObject)Resources.Load("Asteroid", typeof(GameObject)), settings);
        starEntity = GameObjectConversionUtility.ConvertGameObjectHierarchy((GameObject)Resources.Load("Star", typeof(GameObject)), settings);
        
    }

    public void InstantiateSystem(Vector3 pos)
    {
        Entity newSystem = entityManager.Instantiate(systemEntity);
        entityManager.SetComponentData(newSystem, new Translation { Value = pos});
    }

    public void IntantiateSystemInterior(int Id)
    {
        //Get the system we want to make
        UniverseSystem systemToInstantiate = universe.systemWorks.GetSystem(Id);
        //Clear out the scene and remake base entity
        GameObjectConversionSettings settings = GameObjectConversionSettings.FromWorld(defaultWorld, null);
        entityManager.DestroyAndResetAllEntities();
        systemEntity = GameObjectConversionUtility.ConvertGameObjectHierarchy((GameObject)Resources.Load("system", typeof(GameObject)), settings);
        planetEntity = GameObjectConversionUtility.ConvertGameObjectHierarchy((GameObject)Resources.Load("Planet", typeof(GameObject)), settings);
        asteroidEntity = GameObjectConversionUtility.ConvertGameObjectHierarchy((GameObject)Resources.Load("Asteroid", typeof(GameObject)), settings);
        starEntity = GameObjectConversionUtility.ConvertGameObjectHierarchy((GameObject)Resources.Load("Star", typeof(GameObject)), settings);

        //Intantiate Star
        Entity star = entityManager.Instantiate(starEntity);
        entityManager.SetComponentData(star, new Translation { Value = systemToInstantiate.star.position });
        //Instantiate asteroids
        foreach (var rock in systemToInstantiate.asteroids)
        {
            Entity asteroid = entityManager.Instantiate(asteroidEntity);
            entityManager.SetComponentData(asteroid, new Translation { Value = rock.position });
        }
        //Instantiate Planets
        foreach (var rock in systemToInstantiate.planets)
        {
            Entity planet = entityManager.Instantiate(planetEntity);
            entityManager.SetComponentData(planetEntity, new Translation { Value = rock.position });
        }


    }

    public void ReturnToUniverse()
    {
        //Clear out the scene and remake base entity
        GameObjectConversionSettings settings = GameObjectConversionSettings.FromWorld(defaultWorld, null);
        entityManager.DestroyAndResetAllEntities();
        systemEntity = GameObjectConversionUtility.ConvertGameObjectHierarchy((GameObject)Resources.Load("system", typeof(GameObject)), settings);
        planetEntity = GameObjectConversionUtility.ConvertGameObjectHierarchy((GameObject)Resources.Load("Planet", typeof(GameObject)), settings);
        asteroidEntity = GameObjectConversionUtility.ConvertGameObjectHierarchy((GameObject)Resources.Load("Asteroid", typeof(GameObject)), settings);
        starEntity = GameObjectConversionUtility.ConvertGameObjectHierarchy((GameObject)Resources.Load("Star", typeof(GameObject)), settings);

        //Respawn all systems
        foreach (var point in universe.masterPointsDatabase.Values)
        {
            InstantiateSystem(point.Position);
        }
    }

}

//public partial class WiggleSystem : SystemBase
//{
//    protected override void OnUpdate()
//    {

//        float time = (float)Time.ElapsedTime;
//        float delta = Time.DeltaTime;
//        float amplitude = 1;
//        Entities.ForEach((ref Translation trans) =>
//        {

//            trans.Value = new Vector3()
//            {
//                x = trans.Value.x + math.sin(time) * delta,
//                y = trans.Value.y + math.sin(time) * delta,
//                z = trans.Value.z + math.sin(time) * delta
//            };

//        }).ScheduleParallel();
//    }
//}
