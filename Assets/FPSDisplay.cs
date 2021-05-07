using UnityEngine;
using System.Collections;

public class FPSDisplay : MonoBehaviour
{
    float deltaTime = 0.0f;
    MainSchedual schedual;
    Rect rect;
    Rect rect2;
    Rect rect3;
    Rect rect4;
    GUIStyle style;
    private void Start()
    {
        style = new GUIStyle();
        int w = Screen.width, h = Screen.height;
        rect = new Rect(0, 0, w, h * 2 / 100);
        rect2 = new Rect(0, 20, w, h * 2 / 100);
        rect3 = new Rect(0, 40, w, h * 2 / 100);
        rect4 = new Rect(0, 60, w, h * 2 / 100);

        style.alignment = TextAnchor.UpperLeft;
        style.fontSize = h * 2 / 100;
        style.normal.textColor = new Color(0.0f, 0.0f, 0.5f, 1.0f);
        schedual = GameObject.Find("Schedualer").GetComponent<MainSchedual>();
    }
    void Update()
    {
        deltaTime += (Time.unscaledDeltaTime - deltaTime) * 0.1f;
    }

    void OnGUI()
    {



        float msec = deltaTime * 1000.0f;
        float fps = 1.0f / deltaTime;
        string text = string.Format("{0:0.0} ms ({1:0.} fps)", msec, fps);
        string text2 = string.Format("Current time multiplier: {0}, Tickets Run Last Frame: {1}", schedual.timeMultiplier, schedual.ticketsProcessedLastFrame);
        string text3 = string.Format("Tickets Processed: {0} Game Time: {1} Up Time: {2}",schedual.ticketsProcessed, schedual.currentTime, Time.time);
        string text4 = string.Format("Tickets/Second: {0}", schedual.ticketsProcessed/schedual.currentTime);

        GUI.Label(rect, text, style);
        GUI.Label(rect2, text2, style);
        GUI.Label(rect3, text3, style);
        GUI.Label(rect4, text4, style);
    }
}