using System;
using System.Collections.Generic;
using System.Text;
using System.Threading.Tasks;
using Unity.Entities;
using Unity.Mathematics;
using Unity.Jobs;
using EconSimV2.Assets.ECSTesting.ECSObjects;
using EconSimV2.Assets.ECSTesting.ECSWorks;
using Unity.Collections;
using Unity.Jobs.LowLevel.Unsafe;

namespace EconSimV2.Assets.ECSTesting.ECSAI
{
    public class AI
    {
        public int Id;

        NativeList<Entity> ownedShips;
        NativeList<Entity> knownSystems;

        public AI(GenerationSettings generationSettings, int StartingSystem)
        {
            Ships.GenerateShipsFor(StartingSystem, this, generationSettings, out NativeArray<Entity> ships);
            ownedShips = new NativeList<Entity>(Allocator.Persistent);
            ownedShips.CopyFrom(ships);
            ships.Dispose();
        }
    }
}
