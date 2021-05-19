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
        public int id { get; set; }
    }
    public struct MovementData : IComponentData
    {
        public float velocity;
        public float3 vector;
    }
    public struct TargetPos : IComponentData
    {
        public float3 position;
    }
    public struct Idle : IComponentData { public bool isIdle; }
    public struct HasClone : IComponentData { public Entity clone; }
    public struct MoveMission : IComponentData { }
    public struct CloneData : IComponentData { public Entity masterShip; }


    public struct WaypointBuffer : IBufferElementData
    {
        public int nextSystemId;
        public float3 nextWormholePos;
    }
    public struct TravelData : IComponentData
    {
        public float3 targetPos;

    }

    public struct ShipAIData : IComponentData
    {
        public int aiCode;
    }
}

