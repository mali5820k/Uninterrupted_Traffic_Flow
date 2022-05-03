using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Move_Car : MonoBehaviour
{
    public Vector3 starting_position;
    public float car_speed = 0.25f;
    // Start is called before the first frame update
    void Start()
    {
        starting_position = transform.position;
    }

    // Update is called once per frame
    void Update()
    {
        if ((transform.position - starting_position).magnitude > 28) {
            transform.position = starting_position;
        }

        transform.position = transform.position + new Vector3(car_speed, 0, 0);
    }
}
