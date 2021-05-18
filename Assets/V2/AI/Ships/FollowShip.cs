using EconSimV2.Assets.V2.GlobalSystems;
using UnityEngine;

namespace EconSimV2.Assets.V2.AI.Ships
{
    public class FollowShip
    {
        public int ShipCode;
        public int AICode;

        Vector3 GetShipCoords(GameObject gameObject)
        {
            AIClass selectAI = AICoordinator.AIDictionary[AICode];
            Ship ship = selectAI.ownedShips[ShipCode];

            return ship.GetNextPosition() - ship.vector * 2 + Vector3.Cross(ship.GetNextPosition(), ship.GetNextPosition() - ship.vector * 2).normalized;
        }
        Quaternion GetShipRotation()
        {
            AIClass selectAI = AICoordinator.AIDictionary[AICode];
            Ship ship = selectAI.ownedShips[ShipCode];

            return Quaternion.LookRotation(ship.vector, Vector3.up);
        }

        void SetObjectPositionAndRotation(GameObject gameObject, int shipCode, int AiCode)
        {
            ShipCode = shipCode;
            AICode = AiCode;
            gameObject.transform.position = GetShipCoords(gameObject);
            gameObject.transform.rotation = Quaternion.Lerp(gameObject.transform.rotation, GetShipRotation(), .05f);
        }

        void CheckSystem()
        {
            AIClass selectAI = AICoordinator.AIDictionary[AICode];
            Ship ship = selectAI.ownedShips[ShipCode];

            if ( ship.currentSystemId != UniverseGenerator.universe.selectedSystem )
            {
                MonoBehaviour.print("FollowShip changing Pos");
                UniverseGenerator.universe.systemWorks.EnterUniverse();
                GameObject.Find("UniverseGenerator").GetComponent<UniverseGenerator>().ExternalSystemSelector(ship.currentSystemId);
                UniverseGenerator.universe.systemWorks.EnterSystem(ship.currentSystemId);
            }
        }

        public void FollowAShip(GameObject gameObject, int shipCode, int AiCode)
        {
            CheckSystem();
            SetObjectPositionAndRotation(gameObject, shipCode, AiCode);
        }
    }
}