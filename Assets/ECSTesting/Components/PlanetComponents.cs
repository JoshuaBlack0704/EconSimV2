using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using Unity.Entities;

namespace ECSTesting.Components.Planets
{
    public struct Id : IComponentData, IIdTag
    {
        public int id { get { return code; } set { code = value; } }
        public int code;
    }
}
