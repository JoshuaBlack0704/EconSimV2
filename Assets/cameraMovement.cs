using System.Collections;
using System.Collections.Generic;
using Unity.Entities;
using Unity.Transforms;
using UnityEngine;

public class cameraMovement : MonoBehaviour
{
    private int selectedPoint;
    public bool zoomToPoint;
    public int AiCodeForShip;
    public int FollowShipCode;
    public bool followAShipWithCode;
    internal FollowShip shipFollower;
    EntityManager manager;
    Vector3 Vector;
    // Start is called before the first frame update
    void Start()
    {
        manager = PrefabAccessor.entityManager;
        AiCodeForShip = 0;
        FollowShipCode = 0;
        shipFollower = new FollowShip();
        gameObject.transform.position = new Vector3() { x = UniverseGenerator.universe.universeMaximums.x/2, y = UniverseGenerator.universe.universeMaximums.y/2, z = -10};
    }
    public static Unity.Mathematics.float3 pos;
    // Update is called once per frame
    void Update()
    {
        
        var target = GameObject.Find("TargetCone");

        Universe uni = UniverseGenerator.universe;

        if (uni.inSystem)
        {
            target.GetComponent<MeshRenderer>().enabled = false;
        }
        else
        {
            target.GetComponent<MeshRenderer>().enabled = true;
        }

        if (followAShipWithCode&&uni.inSystem==true)
        {
            shipFollower.FollowAShip(gameObject, FollowShipCode, AiCodeForShip);
        }
        else
        {
            pos = gameObject.transform.position;
            selectedPoint = uni.selectedSystem;
            if (uni.inSystem)
            {
                zoomToPoint = false;
            }

            if (zoomToPoint != true)
            {
                var progress = Mathf.InverseLerp(-1, 1, Mathf.Sin(Time.time / 5));

                var angularVelocity = (2 * Mathf.PI) / 20;

                var angle = angularVelocity * Time.time;

                var radius = uni.universeMaximums.x;
                var center = uni.universeMaximums / 2;
                if (uni.inSystem)
                {
                    
                    center = manager.GetComponentData<Translation>(uni.systemWorks.GetSystem(uni.selectedSystem).star).Value;
                    radius = uni.systemWorks.GetSystem(uni.selectedSystem).size + 10;
                }

                var positiion = new Vector3()
                {
                    x = Mathf.Cos(angle) * radius + center.x,
                    z = Mathf.Sin(angle) * radius + center.z,
                    y = uni.universeMaximums.y * progress
                };


                var dir = center - positiion;

                gameObject.transform.position = positiion;
                gameObject.transform.LookAt(center);
            }
            else
            {
                Vector3 endPos = uni.masterPointsDatabase[selectedPoint].Position;
                Vector3 targetPos = uni.masterPointsDatabase[selectedPoint].Position;
                endPos.z -= 3;
                transform.position = Vector3.Lerp(transform.position, endPos, 1 * Time.deltaTime);
                Vector3 lookVector = targetPos - transform.position;
                Quaternion rot = Quaternion.RotateTowards(transform.rotation, Quaternion.LookRotation(lookVector), 1000 * (9 / Mathf.Pow(Vector3.Distance(transform.position, endPos), 2)) * Time.deltaTime);
                Vector3 tansLookVector = Vector3.Lerp(transform.forward, lookVector, 1 * Time.deltaTime);
                gameObject.transform.rotation = rot;
            }
        }
        

        
    }

    

}
