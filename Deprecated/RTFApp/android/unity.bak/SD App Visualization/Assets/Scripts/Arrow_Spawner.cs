using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Arrow_Spawner : MonoBehaviour
{
    public float angle_offset = -90f;
    public Event_Listener_From_React react_values;
    public bool is_receiver = false;
    public int arrow_order = 0;

    // Simply spawns the arrows
    public void Spawn_Arrow(GameObject GreenArrow, float block_length)
    {
        GameObject spawned_Arrow = GameObject.Instantiate(GreenArrow, transform.position, transform.rotation);
        spawned_Arrow.transform.eulerAngles = new Vector3(spawned_Arrow.transform.eulerAngles.x, spawned_Arrow.transform.eulerAngles.y + -90f, spawned_Arrow.transform.eulerAngles.z);
        spawned_Arrow.GetComponent<Arrow_Deleter>().block_length = block_length;
    }
}
