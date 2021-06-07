using Unity.Entities;
using Unity.Mathematics;

namespace ECSTesting.Components
{
    public struct CurrentSystemID : IComponentData, IIdTag { public int id { get { return code; } set { code = value; } } public int code; }

    public struct CloneTag : IComponentData { }

    public interface IIdTag { public int id { get; set; } }
}