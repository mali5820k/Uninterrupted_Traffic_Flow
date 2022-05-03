using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Newtonsoft.Json.Linq;

public class Event_Listener_From_React : MonoBehaviour
{
    // This class will receive calls from the React-Native side
    public Vector3 user_position;
    public Transform user_car;
    public Transform[] Horizontal_Spawners;
    public Transform[] Vertical_Spawners;
    public GameObject twoway_green_arrow;
    public GameObject oneway_green_arrow;
    GameObject default_arrow;

    public float green_arrow_period = 10f;
    public float block_length = 6f;
    public float user_grid_size_x, user_grid_size_y = 28f; // By default this is 28 feet.
    public float conversion_rate_x = 1f; // ft/pixel
    public float conversion_rate_y = 1f; // ft/pixel
    public float[] tag_centers_for_grid_corners;
    public float smooth_factor = 1f;
    public float user_heading = 0f;

    public bool green_arrow_status = false;
    public bool oneway, twoway = false;
    public bool do_once = true; // For two-way

    public bool do_once_h = true; // For one-way
    public bool do_once_v = true; // For one-way
    public Vector3[] Spawners_Transforms;

    public int user_grid_resolution_x, user_grid_resolution_y = 1920; // This is really just the pixel-resolution of the grid;

    enum State { 
        EVEN,
        ODD,
    }

    State vertical = State.EVEN;
    State horizontal = State.ODD;

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

    public void Spawn_One_Way_Vertical() {
        /*        Spawner Index
                    Left2       0
                    Left6       2
                    Right3      5
                    Right7      7

                    Top4        5
                    Top8        7
                    Bottom2     0
                    Bottom6     2
        */


        switch (vertical)
        {
            case (State.EVEN):
                // Top4 and Bottom6 spawnpoints
                Vertical_Spawners[5].GetComponent<Arrow_Spawner>().Spawn_Arrow(oneway_green_arrow, block_length * 2);
                Vertical_Spawners[2].GetComponent<Arrow_Spawner>().Spawn_Arrow(oneway_green_arrow, block_length * 2);

                vertical = State.ODD;
                break;
            case (State.ODD):
                // Top8 and Bottom2 spawnpoints
                Vertical_Spawners[0].GetComponent<Arrow_Spawner>().Spawn_Arrow(oneway_green_arrow, block_length * 2);
                Vertical_Spawners[7].GetComponent<Arrow_Spawner>().Spawn_Arrow(oneway_green_arrow, block_length * 2);

                vertical = State.EVEN;
                break;
            default:
                break;
        }
    }

    public void Spawn_One_Way_Horizontal() {
        /*        Spawner Index
                   Left2       0
                   Left6       2
                   Right3      5
                   Right7      7

                   Top4        5
                   Top8        7
                   Bottom2     0
                   Bottom6     2
       */
        switch (horizontal)
        {
            case (State.EVEN):
                // Left2 and Right7
                Horizontal_Spawners[0].GetComponent<Arrow_Spawner>().Spawn_Arrow(oneway_green_arrow, block_length * 2);
                Horizontal_Spawners[7].GetComponent<Arrow_Spawner>().Spawn_Arrow(oneway_green_arrow, block_length * 2);


                horizontal = State.ODD;
                break;
            case (State.ODD):
                // Left6 and Right3
                Horizontal_Spawners[2].GetComponent<Arrow_Spawner>().Spawn_Arrow(oneway_green_arrow, block_length * 2);
                Horizontal_Spawners[5].GetComponent<Arrow_Spawner>().Spawn_Arrow(oneway_green_arrow, block_length * 2);
                
                horizontal = State.EVEN;
                break;
            default:
                break;
        }
    }

    public void Spawn_Arrows_Two_Way() {
        switch (vertical)
        {
            case (State.EVEN):
                Vertical_Spawners[0].GetComponent<Arrow_Spawner>().Spawn_Arrow(twoway_green_arrow, block_length);
                Vertical_Spawners[2].GetComponent<Arrow_Spawner>().Spawn_Arrow(twoway_green_arrow, block_length);
                Vertical_Spawners[5].GetComponent<Arrow_Spawner>().Spawn_Arrow(twoway_green_arrow, block_length);
                Vertical_Spawners[7].GetComponent<Arrow_Spawner>().Spawn_Arrow(twoway_green_arrow, block_length);
                vertical = State.ODD;
                break;
            case (State.ODD):
                Vertical_Spawners[1].GetComponent<Arrow_Spawner>().Spawn_Arrow(twoway_green_arrow, block_length);
                Vertical_Spawners[3].GetComponent<Arrow_Spawner>().Spawn_Arrow(twoway_green_arrow, block_length);
                Vertical_Spawners[4].GetComponent<Arrow_Spawner>().Spawn_Arrow(twoway_green_arrow, block_length);
                Vertical_Spawners[6].GetComponent<Arrow_Spawner>().Spawn_Arrow(twoway_green_arrow, block_length);
                vertical = State.EVEN;
                break;
            default:
                break;
        }

        switch (horizontal)
        {
            case (State.EVEN):
                Horizontal_Spawners[1].GetComponent<Arrow_Spawner>().Spawn_Arrow(twoway_green_arrow, block_length);
                Horizontal_Spawners[3].GetComponent<Arrow_Spawner>().Spawn_Arrow(twoway_green_arrow, block_length);
                Horizontal_Spawners[4].GetComponent<Arrow_Spawner>().Spawn_Arrow(twoway_green_arrow, block_length);
                Horizontal_Spawners[6].GetComponent<Arrow_Spawner>().Spawn_Arrow(twoway_green_arrow, block_length);
                horizontal = State.ODD;
                break;
            case (State.ODD):
                Horizontal_Spawners[0].GetComponent<Arrow_Spawner>().Spawn_Arrow(twoway_green_arrow, block_length);
                Horizontal_Spawners[2].GetComponent<Arrow_Spawner>().Spawn_Arrow(twoway_green_arrow, block_length);
                Horizontal_Spawners[5].GetComponent<Arrow_Spawner>().Spawn_Arrow(twoway_green_arrow, block_length);
                Horizontal_Spawners[7].GetComponent<Arrow_Spawner>().Spawn_Arrow(twoway_green_arrow, block_length);
                horizontal = State.EVEN;
                break;
            default:
                break;
        }
    }

    private void Update()
    {
        // Move the user's car in the adjusted position:
        user_car.eulerAngles = new Vector3(user_car.eulerAngles.x, user_heading, user_car.eulerAngles.z);
        user_car.position = (Vector3.Lerp(user_car.position, user_position, Time.deltaTime * smooth_factor));

        if (green_arrow_status == true && do_once == true)
        {
            Debug.Log("Setting Up");
            do_once = false;
            Editor_Testing();
            if (twoway)
            {
                vertical = State.EVEN;
                horizontal = State.ODD;

                // Thanks to this source: https://www.youtube.com/watch?v=1h2yStilBWU This periodic function call was possible in the most clean way imaginable
                InvokeRepeating("Spawn_Arrows_Two_Way", 0f, green_arrow_period / 2);
            }
            if (oneway)
            {
                vertical = State.ODD;
                horizontal = State.EVEN;
                // Thanks to this source: https://www.youtube.com/watch?v=1h2yStilBWU This periodic function call was possible in the most clean way imaginable
                /*InvokeRepeating("Spawn_One_Way_Vertical", 0f, green_arrow_period / 2 + green_arrow_period/4);
                InvokeRepeating("Spawn_One_Way_Horizontal", green_arrow_period / 4, green_arrow_period / 2);*/
                /*InvokeRepeating("Spawn_One_Way_Vertical", 0f, green_arrow_period / 2 + green_arrow_period/4);
                InvokeRepeating("Spawn_One_Way_Horizontal", green_arrow_period / 4, green_arrow_period / 2);*/
                InvokeRepeating("Spawn_One_Way_Vertical", 0f, green_arrow_period);
                InvokeRepeating("Spawn_One_Way_Horizontal", green_arrow_period/4, green_arrow_period/3);
            }
        }
        else if (green_arrow_status == false) {
            do_once = true;
            if (oneway) {
                CancelInvoke("Spawn_One_Way_Vertical");
                CancelInvoke("Spawn_One_Way_Horizontal");
            }
                
            if (twoway)
                CancelInvoke("Spawn_Arrows_Two_Way");
        }


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

        user_position = new Vector3(converted_values[0], 0f, -converted_values[1]); // Have to negate z to map to this grid

        // No need to perform additional adjustments as the coordinates for the vehicles are handled on the opencv side for
        // quadrilateral vector mapping to a square and uniform resolution.
        /*// Now to adjust the user_position coordinates:
        user_position = new Vector3(user_position.x - tag_centers_for_grid_corners[0], user_position.z - tag_centers_for_grid_corners[1]);*/
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
        conversion_rate_y = user_grid_size_y / user_grid_resolution_y; // Conversion rate of y ft/pixel
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
        if (message.Equals("start")) {
            if (default_arrow == null) {
                // Default to oneway arrow
                default_arrow = oneway_green_arrow;
            }
            green_arrow_status = true;
        }
        else if (message.Equals("start oneway"))
        {
            green_arrow_status = true;
            default_arrow = oneway_green_arrow;
        }
        else if (message.Equals("start twoway"))
        {
            green_arrow_status = true;
            default_arrow = twoway_green_arrow;
        }
        else if (message.Equals("reset"))
        {
            green_arrow_status = false;
            do_once = true;
        }
    }

    void Editor_Testing() {
        Debug.Log("Setting Up arrows");
        if (oneway)
        {
            default_arrow = oneway_green_arrow;
            twoway = false;
        }
        else if (twoway) {
            default_arrow = twoway_green_arrow;
            oneway = false;
        }
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
}