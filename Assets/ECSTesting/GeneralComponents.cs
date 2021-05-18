using Unity.Entities;

namespace EconSimV2.Assets.ECSTesting.Components
{
    public struct SystemID : IComponentData { public int Id; }

    public struct CloneTag : IComponentData { }

    public interface IIdTag { public int id { get; set; } }
}