using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using Unity.Entities;
using Unity.Mathematics;

namespace ECSTesting.Components.Ships
{
    public struct Id : IComponentData, IIdTag
    {
        public int id { get { return code; } set { code = value; } }
        public int code;
    }
    public struct MovementData : IComponentData
    {
        public float3 targetPos;
        public float velocity;
        public float3 vector;
    }
    
    public struct Idle : IComponentData { public bool isIdle; }
    public struct HasClone : IComponentData { public Entity clone; }
    public struct CloneData : IComponentData { public Entity masterShip; }


    

    public struct ShipAIData : IComponentData
    {
        public int aiCode;
    }
}

namespace ECSTesting.Components.Missions.ShipsMissions
{

}

