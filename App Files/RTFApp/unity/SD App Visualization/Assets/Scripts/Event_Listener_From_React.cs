using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Event_Listener_From_React : MonoBehaviour
{
    // This class will receive calls from the React-Native side
    public Vector3 user_position;
    public float traffic_light_period_in_seconds = 10f;

    public void Awake()
    {
        UnityMessageManager.Instance.OnMessage += User_Car_Position;
        UnityMessageManager.Instance.OnMessage += User_Camera_Resolution;
        UnityMessageManager.Instance.OnMessage += User_GridSize;
        UnityMessageManager.Instance.OnMessage += User_Green_Arrow_Start;
        UnityMessageManager.Instance.OnMessage += User_Position;
    }

    private void OnDestroy()
    {
        
    }

    // User Position X, and Y
    // Provided in format "x y"
    void User_Position(string message)
    {
        string[] values = message.Split(" ");
        float[] converted_values = new float[values.Length];
        
        // Get float from string
        for (int i = 0; i < values.Length; i++) {
            float.TryParse(values[i], out float result);
            converted_values[i] = result;
        }

        user_position = new Vector3(converted_values[0], 0f, converted_values[1]);
    }

    void User_(string message) { 
        
    }

    private void Update()
    {
        
    }
}
