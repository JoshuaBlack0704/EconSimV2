using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AICoordinator : MonoBehaviour
{
    [Range(1, 100)]
    public int startingAiNum;
    public int startingShipsPerAi;
    public static Dictionary<int, AI> AIDictionary;
    // Start is called before the first frame update
    void Start()
    {
        AIDictionary = new Dictionary<int, AI>(startingAiNum);
        AIDictionary.Add(0, new AI(UniverseGenerator.universe, 0, startingShipsPerAi, false));
        for (int i = 1; i < startingAiNum; i++)
        {
            AIDictionary.Add(i , new AI(UniverseGenerator.universe, Random.Range(0, UniverseGenerator.universe.maxPointId+1), startingShipsPerAi, false));
        }
    }

    void Update()
    {
        foreach (var AI in AIDictionary.Values)
        {
            AI.MasterCall();
        }
    }
}