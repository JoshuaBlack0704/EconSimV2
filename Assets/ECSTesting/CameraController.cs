using System.Collections;
using System.Collections.Generic;
using Unity.Entities;
using UnityEngine;

public class CameraController : MonoBehaviour
{
    public GenerationSettings genSettings;
    public float radius;
    public float angularVelocity = .3f;
    public static Entity[] systems;
    EntityManager em;

    // Start is called before the first frame update
    void Start()
    {
        em = World.DefaultGameObjectInjectionWorld.EntityManager;
        
        genSettings = GameObject.Find("GenerationSettings").GetComponent<GenerationSettings>(); ;
    }

    public static void Initialize()
    {
        var query = World.DefaultGameObjectInjectionWorld.EntityManager.CreateEntityQuery(typeof(SystemEntity.Id));
        var arr = query.ToEntityArray(Unity.Collections.Allocator.Temp);
        systems = arr.ToArray();
        arr.Dispose();
    }

    float angle = 0;
    Vector3 center;
    // Update is called once per frame
    void Update()
    {
        if (GenerationSettings.isRendered)
        {
            var data = em.GetComponentData<SystemEntity.SystemData>(systems[genSettings.selectedSystem]);
            center = data.starPos;
            radius = data.size*1.8f;

            angle += angularVelocity * Time.deltaTime;

            float xPos = center.x + radius * Mathf.Cos(angle);
            float yPos = center.y + radius * Mathf.Sin(angle/2);
            float zPos = center.z + radius * Mathf.Sin(angle);

            gameObject.transform.position = new Vector3() { x = xPos, y = yPos, z = zPos };
            gameObject.transform.LookAt(center);
        }
        else
        {
            center = new Vector3() { x = genSettings.universeSize, y = genSettings.universeSize, z = genSettings.universeSize };
            radius = genSettings.universeSize*1.8f;
            angle += angularVelocity * Time.deltaTime;

            float xPos = center.x + radius * Mathf.Cos(angle);
            float yPos = center.y + radius * Mathf.Sin(angle / 2);
            float zPos = center.z + radius * Mathf.Sin(angle);

            gameObject.transform.position = new Vector3() { x = xPos, y = yPos, z = zPos };
            gameObject.transform.LookAt(center);
        }
        
        
    }
}
