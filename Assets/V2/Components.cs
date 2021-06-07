using Unity.Entities;

namespace EconSimV2.Assets.V2
{
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

    public struct FoodResource : IComponentData, IContainsResource { public float volume { get; set; } public float reservedVolume { get; set; } public float freeVolume { get { return volume - reservedVolume; } set { } } }
    public struct PopulationResource : IComponentData, IContainsPopulation { public int population { get; set; } public float volumeConsumedPerPop { get; set; } public int growthPerPop { get; set; } }

    public interface IIdTag { public int id { get; set; } }
    public interface IContainsPopulation { public int population { get; set; } }
    public interface IContainsResource { public float volume { get; set; } public float reservedVolume { get; set; } public float freeVolume { get; set; } }
}