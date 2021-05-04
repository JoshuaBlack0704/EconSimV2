using System.Collections;
using System.Collections.Generic;
using Unity.Entities;
using UnityEngine;

public class PointTester : MonoBehaviour
{
    public int PointCount;
    UniversePoint current;
    public bool destroyAll;

    public void StartSim( string count )
    {
        UniversePoint.GeneratePoints(int.Parse(count));
        current = UniversePoint.SelfCollection[0];
    }
    // Start is called before the first frame update
    void Start()
    {

    }

    private bool isDestroyed;
    // Update is called once per frame
    void Update()
    {
        if (destroyAll && isDestroyed == false)
        {
            IBaseEntity.DestroyAllClones(World.DefaultGameObjectInjectionWorld.EntityManager);
            isDestroyed = true;
        }
        else if (destroyAll && isDestroyed)
        {
            UniversePoint.SpawnAllClones();
            isDestroyed = false;
        }
        destroyAll = false;
    }
}
