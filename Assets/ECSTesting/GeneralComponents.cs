using Unity.Entities;

namespace ECSTesting
{
    public struct SystemID : IComponentData { public int Id; }

    public struct CloneTag : IComponentData { }

    public interface IIdTag { public int id { get; set; } }
}