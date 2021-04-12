using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class OctTreeTesting : MonoBehaviour
{
    public int pointCode;
    public List<int> OctCoords;
    public List<int> Connections;
    public int temp;
    public int cubeCode = 0;
    public int cubeContentCount;
    // Start is called before the first frame update
    void Update()
    {
        Universe uni = UniverseSystems.universe;

        if (pointCode != temp)
        {
            temp = pointCode;
            OctCoords = new List<int>();
            Connections.Clear();

            var point = uni.masterPointsDatabase[pointCode];

            foreach (var step in point.OctTreeAddress)
            {
                OctCoords.Add(step);
            }
            foreach (var con in point.Connections)
            {
                Connections.Add(con.Id);
            }
        }

        if (Time.frameCount > 1)
        {
            cubeContentCount = uni.OctTreeOfUniversePoints.masterCubeDatabase[cubeCode].contents.Count;

        }


    }
}
