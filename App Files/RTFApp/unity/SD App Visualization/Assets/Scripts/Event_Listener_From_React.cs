using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Newtonsoft.Json.Linq;

public class Event_Listener_From_React : MonoBehaviour
{
    // This class will receive calls from the React-Native side
    public Vector3 user_position;
    public float traffic_light_period_in_seconds = 10f;
    public int user_grid_resolution_x, user_grid_resolution_y = 1920; // This is really just the pixel-resolution of the grid;
    public float user_grid_size_x, user_grid_size_y = 28f; // By default this is 28 feet.
    public bool green_arrow_status = false;
    public float green_arrow_period = 10f;
    public bool alternate = false;
    public float user_heading = 0f;

    public float conversion_rate_x = 1f; // ft/pixel
    public float conversion_rate_y = 1f; // ft/pixel
    public float[] tag_centers_for_grid_corners;
    public float smooth_factor = 1f;
    public Transform user_car;
    public Transform[] Horizontal_Spawners;
    public Transform[] Vertical_Spawners;
    float start_timer, end_timer = 0;
    public GameObject GreenArrow;
    bool toggle = false;

    public void Awake()
    {
        UnityMessageManager.Instance.OnMessage += Setup;
        UnityMessageManager.Instance.OnMessage += User_Car_Position;
        UnityMessageManager.Instance.OnMessage += User_Grid_Resolution;
        UnityMessageManager.Instance.OnMessage += User_Grid_Size;
        UnityMessageManager.Instance.OnMessage += User_Green_Arrow_Status;
        UnityMessageManager.Instance.OnMessage += User_Heading;
        if (tag_centers_for_grid_corners.Length < 8) {
            tag_centers_for_grid_corners = new float[8];
        }
    }

    private void OnDestroy()
    {
        
    }

    // Pass in all information to sub-functions
    // Provided in format "x y, 1920 1080, length height, start"
    void Setup(string message) {
        JObject m = JObject.Parse(message);
        User_Heading(m.GetValue("heading").Value<string>());
        User_Grid_Resolution(m.GetValue("grid_resolution").Value<string>());
        //User_Grid_Size(m.GetValue("grid_size").Value<string>());
        User_Car_Position(m.GetValue("position").Value<string>());
        User_Green_Arrow_Status(m.GetValue("green_arrow_status").Value<string>());
        Traffic_Light_Period(m.GetValue("green_arrow_period").Value<string>());
    }

    // User Position X, and Y
    // Provided in format "x, y"
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

        // Now to adjust the user_position coordinates:
        user_position = new Vector3(user_position.x - tag_centers_for_grid_corners[0], user_position.y - tag_centers_for_grid_corners[1]);
    }

    // Camera Resolution x by y
    // Provided in format "top_leftx top_lefty top_rightx top_righty bottom_leftx bottom_lefty bottom_rightx bottom_righty"
    //                      0           1           2           3           4           5           6               7
    void User_Grid_Resolution(string message) {
        string[] values = message.Split(" ");
        int[] converted_values = new int[values.Length];

        // Get float from string
        for (int i = 0; i < values.Length; i++)
        {
            int.TryParse(values[i], out int result);
            converted_values[i] = result;
        }
        for (int i = 0; i < tag_centers_for_grid_corners.Length; i++) {
            tag_centers_for_grid_corners[i] = converted_values[i];
        }
        user_grid_resolution_x = converted_values[2] - converted_values[0]; // top-right - top-left x's
        user_grid_resolution_y = converted_values[7] - converted_values[3]; // bottom-right - top-right y's

        conversion_rate_x = user_grid_size_x / user_grid_resolution_x; // Conversion rate of x ft/pixel
        conversion_rate_y = user_grid_size_y / user_grid_resolution_y; // Conversion rate of y ft/pixl
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
        bool.TryParse(message, out bool result);
        green_arrow_status = result;
    }


    // Set the heading of the user's car:
    // Provided in format "Angle_In_Degrees"
    void User_Heading(string message) {
        float.TryParse(message, out float result);
        user_heading = result;
    }

    // Set the traffic light period for the green-arrows timing
    // Provided in format "time_in_seconds"
    void Traffic_Light_Period(string message) {
        float.TryParse(message, out float result);
        green_arrow_period = result;
    }

    private void Update()
    {
        // Move the user's car in the adjusted position:
        user_car.eulerAngles = new Vector3(user_car.eulerAngles.x, user_heading, user_car.eulerAngles.z);
        user_car.position = (Vector3.Lerp(user_car.position, user_position, Time.deltaTime * smooth_factor));

        if (green_arrow_status == true)
        {
            start_timer += Time.deltaTime;
            if (start_timer > 2*green_arrow_period)
            {
                start_timer = start_timer -(2* green_arrow_period);

                // toggle:
                if (toggle)
                {
                    foreach (Transform spawner in Horizontal_Spawners)
                    {
                        spawner.GetComponent<Arrow_Spawner>().Spawn_Arrow();
                    }
                    toggle = false;
                }
                else
                {
                    foreach (Transform spawner in Vertical_Spawners)
                    {
                        spawner.GetComponent<Arrow_Spawner>().Spawn_Arrow();
                    }
                    toggle = true;
                }
            }
        }


    }

    void Spawn_Arrow(float waitTime)
    {
        GameObject spawned_Arrow = GameObject.Instantiate(GreenArrow, transform);
        spawned_Arrow.transform.eulerAngles = new Vector3(spawned_Arrow.transform.eulerAngles.x, spawned_Arrow.transform.eulerAngles.y + -90f, spawned_Arrow.transform.eulerAngles.z);
    }
}
