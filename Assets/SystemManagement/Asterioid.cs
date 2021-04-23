using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Asterioid : ISystemSubObject<Asterioid>
{
    public UniverseSystem masterSystem { get; set; }

    public int Id { get; set; }
    public Vector3 position { get; set; }

    public Asterioid(int _id, UniverseSystem _system, Vector3 _position)
    {
        Id = _id;
        masterSystem = _system;
        position = _position;
    }
}
