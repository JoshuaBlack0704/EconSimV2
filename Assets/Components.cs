using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using Unity.Entities;
using UnityEngine;

public struct planetId : IComponentData, IIdTag
{
    public int id { get; set; }
}
public struct asteroidId : IComponentData, IIdTag
{
    public int id { get; set; }
}
public struct starId : IComponentData, IIdTag
{
    public int id { get; set; }
}

public struct masterSystemId : IComponentData, IIdTag
{
    public int id { get; set; }
}

public struct CloneTag : IComponentData { }
public struct FoodResource : IComponentData, IContainsResource { public float volume { get; set; } public float reservedVolume { get; set; } public float freeVolume { get { return volume - reservedVolume; } set { } } }
public struct PopulationResource : IComponentData, IContainsPopulation { public int population { get; set; } public float volumeConsumedPerPop { get; set; } public int growthPerPop { get; set; } }

public interface IIdTag { public int id { get; set; } }
public interface IContainsPopulation { public int population { get; set; } }
public interface IContainsResource { public float volume { get; set; } public float reservedVolume { get; set; } public float freeVolume { get; set; } }