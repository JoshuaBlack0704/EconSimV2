using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class cameraMovement : MonoBehaviour
{
    private int selectedPoint;
    public bool zoomToPoint;
    Vector3 Vector;
    // Start is called before the first frame update
    void Start()
    {
        gameObject.transform.position = new Vector3() { x = UniverseGenerator.universe.universeMaximums.x/2, y = UniverseGenerator.universe.universeMaximums.y/2, z = -10};
    }

    // Update is called once per frame
    void Update()
    {
        Universe uni = UniverseGenerator.universe;
        selectedPoint = uni.selectedPoint;
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
                center = uni.systemWorks.GetSystem(uni.selectedPoint).star.position;
                radius = uni.systemWorks.GetSystem(uni.selectedPoint).size + 10;
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
            Quaternion rot = Quaternion.RotateTowards(transform.rotation, Quaternion.LookRotation(lookVector), 1000*(9/Mathf.Pow(Vector3.Distance(transform.position, endPos),2))*Time.deltaTime);
            Vector3 tansLookVector = Vector3.Lerp(transform.forward, lookVector, 1 * Time.deltaTime);
            gameObject.transform.rotation = rot;
        }

        
    }

    

}
