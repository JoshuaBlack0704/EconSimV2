using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using Unity.Entities;
using Unity.Mathematics;

namespace ECSTesting.Components.Systems
{
    public struct Id : IComponentData, IIdTag
    {
        public int id { get { return code; } set { code = value; } }
        public int code;

        public float3 fluff;
    }
    public struct SystemData : IComponentData
    {
        public float size;
        public float3 starPos;
        public int numAsteroids;
        public int numPlanets;
    }
    [InternalBufferCapacity(4)]
    public struct ePointConnnectionBuffer : IBufferElementData
    {
        public ConnectionData connection;
    }
    public struct ConnectionData
    {
        public int target;
        public float3 position;
        public Entity targetEntity;
    }
}

