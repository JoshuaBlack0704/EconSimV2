using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TargetMover : MonoBehaviour
{
    // Update is called once per frame
    void Update()
    {
        var targetPos = UniverseGenerator.universe.masterPointsDatabase[UniverseGenerator.universe.selectedSystem].Position;


        gameObject.transform.position = Vector3.Lerp(gameObject.transform.position, targetPos+new Vector3(0,1,0), Time.deltaTime);

    }
}
