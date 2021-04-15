using System.Collections;
using System.Collections.Generic;
using Unity.Entities;
using Unity.Transforms;
using Unity.Rendering;
using Unity.Mathematics;
using UnityEngine;
using Unity.Jobs;

public struct shipId : IComponentData
{
    public float Id;
}

public struct shipVector : IComponentData
{
    public Vector3 vector;
}
