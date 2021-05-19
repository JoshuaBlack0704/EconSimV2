using Unity.Entities;

namespace ECSTesting
{
    public struct SystemID : IComponentData, IIdTag { public int id { get; set; } }

    public struct CloneTag : IComponentData { }

    public interface IIdTag { public int id { get; set; } }
}