using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using Unity.Collections;
using Unity.Entities;
using Unity.Jobs;
using Unity.Mathematics;
using Unity.Transforms;
using UnityEngine;

namespace ECSTesting.DebugOperations
{
    using shipComps = ECSTesting.Components.Ships;
    using sysComps = ECSTesting.Components.Systems;
    using genComps = ECSTesting.Components;
    class PathDisplay
    {
        static EntityManager em = World.DefaultGameObjectInjectionWorld.EntityManager;
        static EntityQueryDesc queryDesc = new EntityQueryDesc() { All = new ComponentType[] { ComponentType.ReadOnly<sysComps.Id>(), ComponentType.ReadOnly<Translation>()}, None = new ComponentType[] { ComponentType.ReadOnly<genComps.CloneTag>()} };
        static EntityQuery systemsQuery = em.CreateEntityQuery(queryDesc);
        static NativeArray<sysComps.Id> sysIDs = systemsQuery.ToComponentDataArray<sysComps.Id>(Unity.Collections.Allocator.Persistent);
        static NativeArray<Translation> sysPos = systemsQuery.ToComponentDataArray<Translation>(Unity.Collections.Allocator.Persistent);

        public static void PathRender(Entity ship)
        {
            var buffer = em.GetBuffer<shipComps.WaypointBuffer>(ship).AsNativeArray();
            var waypointsQuery = from item in buffer
                            select item.data.wormholeToID;
            var waypoints = waypointsQuery.ToArray();
            int startSystemID = em.GetComponentData<genComps.CurrentSystemID>(ship).id;
            
            int currentIndex = 0;
            int targetIndex = 0;
            float3 currentPos;
            float3 targetPos;
            
            
            for (int i = 0; i < sysIDs.Length; i++)
            {
                currentIndex = i;
                if (sysIDs[i].id == startSystemID)
                {
                    break;
                }
            }
            
            for ( int i = waypoints.Length-1; i >= 0; i-- )
            {
                var target = waypoints[i];
                for (int x = 0; x < sysIDs.Length; x++)
                {
                    targetIndex = x;
                    if (sysIDs[x].id == target)
                    {
                        break;
                    }
                }

                currentPos = sysPos[currentIndex].Value;
                targetPos = sysPos[targetIndex].Value;
                Debug.DrawLine(currentPos, targetPos);
                currentIndex = targetIndex;
            }
        }
    }
}
