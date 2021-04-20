using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FollowShip
{
    public int ShipCode;
    public int AICode;

    Vector3 GetShipCoords()
    {
        var selectAI = AICoordinator.AIDictionary[AICode];
        Ship ship = selectAI.ownedShips[ShipCode];

        return ship.GetNextPosition();
    }
    Quaternion GetShipRotation()
    {
        var selectAI = AICoordinator.AIDictionary[AICode];
        Ship ship = selectAI.ownedShips[ShipCode];

        return Quaternion.LookRotation(ship.vector, Vector3.up);
    }

    void SetObjectPositionAndRotation(GameObject gameObject, int shipCode, int AiCode)
    {
        ShipCode = shipCode;
        AICode = AiCode;
        gameObject.transform.position = GetShipCoords();
        gameObject.transform.rotation = GetShipRotation();
    }

    void CheckSystem()
    {
        var selectAI = AICoordinator.AIDictionary[AICode];
        Ship ship = selectAI.ownedShips[ShipCode];

        if (ship.currentSystemId!=UniverseGenerator.universe.selectedSystem)
        {
            UniverseGenerator.universe.selectedSystem = ship.currentSystemId;
            UniverseGenerator.universe.systemWorks.EnterUniverse();
            UniverseGenerator.universe.systemWorks.EnterSystem(ship.currentSystemId);
        }
    }

    public void FollowAShip(GameObject gameObject, int shipCode, int AiCode)
    {
        CheckSystem();
        SetObjectPositionAndRotation( gameObject, shipCode, AiCode);
    }
}
