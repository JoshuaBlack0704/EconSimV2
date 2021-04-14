using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PathfinderTesting : MonoBehaviour
{

   

    public void GenRandomPath()
    {
        Universe uni = UniverseGenerator.universe;
        int To = Random.Range(0, uni.masterPointsDatabase.Count-1);
        int From = Random.Range(0, uni.masterPointsDatabase.Count-1);
        while (To == From)
        {
            To = Random.Range(0, uni.masterPointsDatabase.Count - 1);
            From = Random.Range(0, uni.masterPointsDatabase.Count - 1);
        }
        var path = uni.systemWorks.GetPath(From, To);
        var collarr = new Color[3];
        collarr[0] = Color.green;
        collarr[1] = Color.white;
        collarr[2] = Color.blue;

        var selectedColor = collarr[Random.Range(0, 3)];
        for (int step = 0; step < path.Count-1; step++)
        {
            var code = path[step];
            var code2 = path[step + 1];
            
            var start = uni.masterPointsDatabase[code].Position;
            var end = uni.masterPointsDatabase[code2].Position;
            
            Debug.DrawLine(start, end, selectedColor, .25f);
            
        } 
    }
    private int pathCount = 0;
    private void Update()
    {
        if (Time.frameCount % 1 == 0)
        {
            for (int i = 0; i < 10; i++)
            {
                //GenRandomPath();
                pathCount++;
            }
        }

        if (Time.frameCount % 1000 == 0)
        {
            var percentComplete = (pathCount / Mathf.Pow(UniverseGenerator.universe.masterPointsDatabase.Count, 2));

            MonoBehaviour.print(string.Format("masterPathDataBase {0} % complete", percentComplete));
        }
    }
}
