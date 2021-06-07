using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using Unity.Entities;

namespace ECSTesting.Components.Stars
{
    public struct Id : IComponentData { public int id { get { return code; } set { code = value; } } public int code; }

}
