using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UIElements;

public class UICode : MonoBehaviour
{
    Label fps;
    Label gameTime;
    Label realTime;
    Label timeMultiplier;
    Label gameDeltaTime;
    Slider timeBar;
    Label timeMultiplierBarLabel;
    TextField sysID;
    Button enterSystem;
    GenerationSettings genSettings;
    private void OnEnable()
    {
        var UI = GetComponent<UIDocument>().rootVisualElement;

        fps = UI.Q<Label>("FPS");
        gameTime = UI.Q<Label>("gameTime");
        realTime = UI.Q<Label>("realTime");
        timeMultiplier = UI.Q<Label>("timeMultiplier");
        gameDeltaTime = UI.Q<Label>("gameDeltaTime");
        timeBar = UI.Q<Slider>("timeMultiplierBar");
        timeMultiplierBarLabel = UI.Q<Label>("CurrentMultiplier");
        sysID = UI.Q<TextField>("SystemSelector");
        enterSystem = UI.Q<Button>("EnterSysButton");
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
