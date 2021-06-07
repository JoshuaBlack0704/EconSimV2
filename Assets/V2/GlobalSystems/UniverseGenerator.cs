using EconSimV2.Assets.V2.UniverseDataGeneration;
using UnityEngine;

namespace EconSimV2.Assets.V2.GlobalSystems
{
    public class UniverseGenerator : MonoBehaviour
    {
        public int universeSize;
        public int numberOfSystems;
        public int selectedSystem;
        public bool switchSystemView;

        public static Universe universe;
        // Start is called before the first frame update
        void Awake()
        {
            print("Starting Generation");
            universe = new Universe(numberOfSystems, universeSize, true, 4);
            print("Generation Complete");
        }

        public void ExternalSystemSelector(int id)
        {
            selectedSystem = id;
            universe.selectedSystem = id;
        }


        private void OnDrawGizmos()
        {

        }

        // Update is called once per frame
        private void Update()
        {
            universe.selectedSystem = selectedSystem;

            if ( switchSystemView )
            {
                if ( universe.inSystem == false )
                {
                    universe.systemWorks.EnterSystem(universe.selectedSystem);
                    universe.inSystem = true;
                }
                else
                {
                    universe.systemWorks.EnterUniverse();
                    universe.inSystem = false;
                }
            }

            switchSystemView = false;
        }

        private void OnApplicationQuit()
        {
            universe = null;
            System.GC.Collect();
        }

    }
}