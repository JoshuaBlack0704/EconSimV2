using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class cameraMovement : MonoBehaviour
{
    Vector3 Vector;
    // Start is called before the first frame update
    void Start()
    {
        gameObject.transform.position = new Vector3() { x = UniverseSystems.universe.universeMaximums.x/2, y = UniverseSystems.universe.universeMaximums.y/2, z = -10};
    }

    // Update is called once per frame
    void Update()
    {

        Universe uni = UniverseSystems.universe;
        Vector2 max = new Vector2()
        {
            x = uni.universeMaximums.x,
            y = uni.universeMaximums.y
        };

        var progress = Mathf.InverseLerp(-1, 1, Mathf.Sin(Time.time/10));

        //gameObject.transform.position = new Vector3()
        //{
        //    x = max.x * progress,
        //    y = max.y * progress,
        //    z = -10
        //};
    }
}
