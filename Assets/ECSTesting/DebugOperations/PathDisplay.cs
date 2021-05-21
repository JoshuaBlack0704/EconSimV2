using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using Unity.Entities;
using Unity.Jobs;
using Unity.Transforms;
using UnityEngine;

namespace ECSTesting.DebugOperations
{
    using shipComps = ECSTesting.Components.Ships;
    using sysComps = ECSTesting.Components.Systems;
    using genComps = ECSTesting.Components;
    class PathDisplay : IPathRenderer
    {
        public PathDisplay(Entity ship)
        {
            var em = World.DefaultGameObjectInjectionWorld.EntityManager;
            var queryDesc = new EntityQueryDesc() { All = new ComponentType[] { ComponentType.ReadOnly<sysComps.Id>(), ComponentType.ReadOnly<Translation>()}, None = new ComponentType[] { ComponentType.ReadOnly<genComps.CloneTag>()} };
            var systemsQuery = em.CreateEntityQuery(queryDesc);
            var sysIDs = systemsQuery.ToComponentDataArrayAsync<sysComps.Id>(Unity.Collections.Allocator.TempJob, out JobHandle handle);
            var sysPos = systemsQuery.ToComponentDataArrayAsync<Translation>(Unity.Collections.Allocator.TempJob, out JobHandle handle2);

            var buffer = em.GetBuffer<shipComps.WaypointBuffer>(ship);
            var waypointsQuery = from item in buffer
                            select item.data.wormholeToID;
            var waypoints = waypointsQuery.ToArray();

            for ( int i = 0; i < waypoints.Length-1; i++ )
            {
                var current = waypoints[i];
                var target = waypoints[i + 1];

                var currentPos = sysPos[current];
                var targetPos = sysPos[target];

                Debug.DrawLine(currentPos.Value, targetPos.Value);
            }


            sysIDs.Dispose();
            sysPos.Dispose();
        }
    }

    public interface IPathRenderer
    {

    }
}
