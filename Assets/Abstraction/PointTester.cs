using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PointTester : MonoBehaviour
{
    public int PointCount;
    UniversePoint current;
    // Start is called before the first frame update
    void Start()
    {
        UniversePoint.GeneratePoints(PointCount);
        current = UniversePoint.allPoints[0];
    }

    // Update is called once per frame
    void Update()
    {
        if (Time.frameCount % 1 == 0)
        {
            current = UniversePoint.GetAConnection(current);
        }
    }
}
