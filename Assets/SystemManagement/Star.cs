using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Star : MonoBehaviour
{
    public UniverseSystem system { get; set; }

    public Vector3 position { get; set; }

    public Star(UniverseSystem _system)
    {
        system = _system;
        position = new Vector3() { x = system.size / 2, y = system.size / 2, z = system.size / 2 };
    }
}
