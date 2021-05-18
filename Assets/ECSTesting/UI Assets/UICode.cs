using EconSimV2.Assets.ECSTesting;
using EconSimV2.Assets.ECSTesting.ECSWorks;
using Unity.Collections;
using Unity.Entities;
using Unity.Jobs;
using UnityEngine;
using UnityEngine.UIElements;

public class UICode : MonoBehaviour
{
    Label fps;
    Label gameTime;
    Label realTime;
    Label timeMultiplier;
    Label gameDeltaTime;
    Label ticketsPerFrame;
    Label totalTicketsProcessed;
    Slider timeBar;
    Label timeMultiplierBarLabel;
    TextField sysID;
    Button enterSystem;
    GenerationSettings genSettings;
    private void OnEnable()
    {
        VisualElement UI = GetComponent<UIDocument>().rootVisualElement;

        fps = UI.Q<Label>("FPS");
        gameTime = UI.Q<Label>("gameTime");
        realTime = UI.Q<Label>("realTime");
        timeMultiplier = UI.Q<Label>("timeMultiplier");
        gameDeltaTime = UI.Q<Label>("gameDeltaTime");
        timeBar = UI.Q<Slider>("timeMultiplierBar");
        timeMultiplierBarLabel = UI.Q<Label>("CurrentMultiplier");
        sysID = UI.Q<TextField>("SystemSelector");
        enterSystem = UI.Q<Button>("EnterSysButton");
        ticketsPerFrame = UI.Q<Label>("TicketsPerFrame");
        totalTicketsProcessed = UI.Q<Label>("TotalTickets");
        genSettings = GameObject.Find("GenerationSettings").GetComponent<GenerationSettings>();

        enterSystem.RegisterCallback<ClickEvent>(ev => EnterSystemCallback());
    }

    void UpdateLabels()
    {
        fps.text = string.Format("FPS: {0}", 1 / Time.deltaTime);
        gameTime.text = string.Format("Game Time: {0}", SB.masterTime);
        realTime.text = string.Format("Master Time: {0}", Time.time);
        timeMultiplier.text = string.Format("Time Multiplier: {0}", genSettings.timeMultiplier);
        gameDeltaTime.text = string.Format("Game Time Step: {0}", SB.masterDeltaTime);
        genSettings.timeMultiplier = timeBar.value;
        timeMultiplierBarLabel.text = string.Format("Multiplier: {0}", genSettings.timeMultiplier);
        CountTickets();
    }
    void CountTickets()
    {
        EntityQuery query;
        query = World.DefaultGameObjectInjectionWorld.EntityManager.CreateEntityQuery(ComponentType.ReadOnly<Tickets.TimeData>());

        if ( Time.frameCount % 100 == 0 )
        {
            int count = 0;
            NativeArray<Tickets.TimeData> list = query.ToComponentDataArrayAsync<Tickets.TimeData>(Allocator.TempJob, out JobHandle dataBatch);
            dataBatch.Complete();
            for ( int i = 0; i < list.Length; i++ )
            {
                if ( list[i].timeAtExecute < SB.masterTime )
                {
                    count++;
                }
            }
            list.Dispose();
            ticketsPerFrame.text = $"Actions Per Frame: {count}";
            //Debug.Log(string.Format("{0} tickets executed this frame", count));
            long tickets = 0;
            var ticketArray = World.DefaultGameObjectInjectionWorld.GetExistingSystem<BatchedCollections>().ticketCounter;
            foreach ( var val in ticketArray )
            {
                tickets += val;
            }
            totalTicketsProcessed.text = $"Total Actions: {tickets}";
        }
    }
    void EnterSystemCallback()
    {
        genSettings.selectedSystem = int.Parse(sysID.value);
        genSettings.render = true;
    }

    private void Update()
    {
        UpdateLabels();
    }
}
