using EconSimV2.Assets.V2.GlobalSystems;
using System.Collections.Generic;
using UnityEngine;

namespace EconSimV2.Assets.V2.UniverseDataGeneration
{
    public class OctTreeTesting : MonoBehaviour
    {
        public int pointCode;
        public List<int> OctCoords;
        public List<int> Connections;
        public int temp;
        public int cubeCode = 0;
        public static int errorPoint;
        void Update()
        {
            pointCode = errorPoint;
            Universe uni = UniverseGenerator.universe;

            if ( pointCode != temp )
            {
                temp = pointCode;
                OctCoords = new List<int>();
                Connections.Clear();

                UniquePoint point = uni.masterPointsDatabase[pointCode];

                foreach ( int step in point.OctTreeAddress )
                {
                    OctCoords.Add(step);
                }
                foreach ( UniquePoint con in point.Connections )
                {
                    Connections.Add(con.Id);
                }
            }




        }
    }
}