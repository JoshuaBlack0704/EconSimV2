using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Asterioid : MonoBehaviour
{
    public UniverseSystem system { get; set; }

    public int Id { get; set; }
    public Vector3 position { get; set; }

    public Asterioid(int _id, UniverseSystem _system, Vector3 _position)
    {
        Id = _id;
        system = _system;
        position = _position;
    }
}