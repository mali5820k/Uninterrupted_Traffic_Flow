using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Event_Listener_From_React : MonoBehaviour
{
    // This class will receive calls from the React-Native side
    public Vector3 user_position;
    public float traffic_light_period_in_seconds = 10f;
    public int user_camera_resolution_x, user_camera_resolution_y = 1920;
    public float user_grid_size_x, user_grid_size_y = 28f; // By default this is 28 feet.

    public void Awake()
    {
        UnityMessageManager.Instance.OnMessage += Setup;
        UnityMessageManager.Instance.OnMessage += User_Car_Position;
        UnityMessageManager.Instance.OnMessage += User_Camera_Resolution;
        UnityMessageManager.Instance.OnMessage += User_Grid_Size;
        UnityMessageManager.Instance.OnMessage += User_Green_Arrow_Status;
    }

    private void OnDestroy()
    {
        
    }

    // Pass in all information to sub-functions
    // Provided in format "x y, 1920 1080, length height, start"
    void Setup(string message) {
        string[] values = message.Split(" ");
        
    }

    // User Position X, and Y
    // Provided in format "x y"
    void User_Car_Position(string message)
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

    // Camera Resolution x by y
    // Provided in format "1920 1080"
    void User_Camera_Resolution(string message) {
        string[] values = message.Split(" ");
        int[] converted_values = new int[values.Length];

        // Get float from string
        for (int i = 0; i < values.Length; i++)
        {
            int.TryParse(values[i], out int result);
            converted_values[i] = result;
        }

        user_camera_resolution_x = converted_values[0];
        user_camera_resolution_y = converted_values[1];
    }

    // Sets the length and height of the grid from Real Life Measurements for mapping
    // Provided in format "length height"
    void User_Grid_Size(string message) {
        string[] values = message.Split(" ");
        float[] converted_values = new float[values.Length];

        // Get float from string
        for (int i = 0; i < values.Length; i++)
        {
            float.TryParse(values[i], out float result);
            converted_values[i] = result;
        }

        user_grid_size_x = converted_values[0];
        user_grid_size_y = converted_values[1];
    }

    // Set the status of green arrows to start, or reset
    // Provided in format "start" or "reset"
    void User_Green_Arrow_Status(string message) { 
        
    }

    private void Update()
    {
        
    }
}
