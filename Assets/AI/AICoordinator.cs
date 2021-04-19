using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AICoordinator : MonoBehaviour
{
    public int startingAiNum;
    public int startingShipsPerAi;
    public static Dictionary<int, AI> AIDictionary;
    // Start is called before the first frame update
    void Start()
    {
        AIDictionary = new Dictionary<int, AI>(startingAiNum);
        for (int i = 0; i < startingAiNum; i++)
        {
            AIDictionary.Add(i , new AI(UniverseGenerator.universe, 0, startingShipsPerAi, true));
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
