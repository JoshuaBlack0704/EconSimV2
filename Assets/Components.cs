using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using Unity.Entities;
using UnityEngine;

public struct planetId : IComponentData, IIdTag
{
    public int Id { get; set; }
}
public struct asteroidId : IComponentData, IIdTag
{
    public int Id { get; set; }
}
public struct starId : IComponentData, IIdTag
{
    public int Id { get; set; }
}

public struct masterSystemId : IComponentData, IIdTag
{
    public int Id { get; set; }
}

public interface IIdTag { public int Id { get; set; }}