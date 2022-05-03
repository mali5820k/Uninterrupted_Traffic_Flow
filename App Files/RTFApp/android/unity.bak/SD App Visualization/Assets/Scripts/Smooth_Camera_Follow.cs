using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Smooth_Camera_Follow : MonoBehaviour
{
    // Using this tutorial as well: https://www.youtube.com/watch?v=MFQhpwc6cKE

    public Transform user_vehicle;
    public float follow_speed = 1f;
    public Vector3 view_offset;
    public Vector3 desired_position;
    public Vector3 smoothed_position;

    // Start is called before the first frame update
    void Start()
    {
        transform.position = user_vehicle.position + view_offset;
    }

    // Update is called once per frame
    void Update()
    {
        desired_position = user_vehicle.position + view_offset;
        smoothed_position = Vector3.Lerp(transform.position, desired_position, follow_speed);
        transform.position = smoothed_position;

        Vector3 look_ahead_dist = new Vector3 (user_vehicle.position.x + 2f, user_vehicle.position.y, user_vehicle.position.z);
        transform.LookAt(look_ahead_dist);
    }
}
