using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UIElements;

public class UICode : MonoBehaviour
{
    Label fps;
    TextField sysID;
    Button enterSystem;
    GenerationSettings genSettings;
    private void OnEnable()
    {
        var UI = GetComponent<UIDocument>().rootVisualElement;

        fps = UI.Q<Label>("FPS");
        sysID = UI.Q<TextField>("SystemSelector");
        enterSystem = UI.Q<Button>("EnterSysButton");
        genSettings = GameObject.Find("GenerationSettings").GetComponent<GenerationSettings>();

        enterSystem.RegisterCallback<ClickEvent>(ev => EnterSystemCallback());
    }

    void UpdateFps()
    {
        fps.text = string.Format("FPS: {0}", 1 / Time.deltaTime);
    }
    void EnterSystemCallback()
    {
        genSettings.selectedSystem = int.Parse(sysID.value);
        genSettings.render = true;
    }

    private void Update()
    {
        UpdateFps();
    }
}
