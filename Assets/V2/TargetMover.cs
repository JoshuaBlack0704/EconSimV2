using EconSimV2.Assets.V2.GlobalSystems;
using UnityEngine;

namespace EconSimV2.Assets.V2
{
    public class TargetMover : MonoBehaviour
    {
        // Update is called once per frame
        void Update()
        {
            Vector3 targetPos = UniverseGenerator.universe.masterPointsDatabase[UniverseGenerator.universe.selectedSystem].Position;


            gameObject.transform.position = Vector3.Lerp(gameObject.transform.position, targetPos + new Vector3(0, 1, 0), Time.deltaTime);

        }
    }
}