using System.Collections.Generic;
using UnityEngine;

public class ShipTester : MonoBehaviour
{
    public int numShips;
    // Start is called before the first frame update

    public static List<Vector3> testPoints;
    List<Ship> ships;
    void Start()
    {
        testPoints = new List<Vector3>();
        ships = new List<Ship>();
        for ( int i = 0; i < 50; i++ )
        {
            testPoints.Add(new Vector3 { x = Random.Range(0, 300), y = Random.Range(0, 300), z = Random.Range(0, 300) });
        }

        for ( int i = 0; i < numShips; i++ )
        {
            //Ship ship = new Ship(Vector3.zero, World.DefaultGameObjectInjectionWorld);
            //ships.Add(ship);
            //ship.CreateEntityFor();
            //ship.PickNewTarget();
        }
    }

    // Update is called once per frame

}
