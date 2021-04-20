using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Star : MonoBehaviour, ISystemSubObject<Star>
{

    public Vector3 position { get; set; }
    public UniverseSystem masterSystem { get; set; }

    public Star(UniverseSystem _system)
    {
        masterSystem = _system;
        position = new Vector3() { x = masterSystem.size / 2, y = masterSystem.size / 2, z = masterSystem.size / 2 };
    }
}
