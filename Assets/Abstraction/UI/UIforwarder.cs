using System.Collections;
using System.Collections.Generic;
using TMPro;
using Unity.Entities;
using UnityEngine;
using UnityEngine.SceneManagement;

public class UIforwarder : MonoBehaviour
{
    GameObject inputField;
    GameObject button;
    // Start is called before the first frame update
    private void Awake()
    {
        inputField = GameObject.Find("InputField");
        button = GameObject.Find("Button");
    }
    void Start()
    {
        inputField.SetActive(true);
        button.SetActive(false);
    }

    public void Forwarder()
    {
        string text = inputField.GetComponent<TMP_InputField>().text;
        GameObject.Find("PointSpawner").GetComponent<PointTester>().StartSim(text);
        button.SetActive(true);
        inputField.SetActive(false);
    }

    public void Restart()
    {
        EntityManager em = World.DefaultGameObjectInjectionWorld.EntityManager;
        UniversePoint.maxPointId = 0;
        UniversePoint.SelfCollection.Clear();
        Unity.Collections.NativeArray<Entity> arr = em.GetAllEntities();
        em.DestroyEntity(arr);
        arr.Dispose();
        SceneManager.LoadScene(0);
    }
}