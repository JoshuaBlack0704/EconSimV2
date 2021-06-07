namespace EconSimV2.Assets.V2.UniverseDataGeneration
{
    public class GenerationCriteria
    {

        //This class contains the nessesary data to generate the universe

        //The cubic size of the universe
        public int universeSize { get; set; }

        //Number of points to generate
        public int numberOfSystems { get; set; }

        //Constructor
        public GenerationCriteria(int _universeSize, int _numberOfSystems)
        {
            universeSize = _universeSize;
            numberOfSystems = _numberOfSystems;
        }

    }
}