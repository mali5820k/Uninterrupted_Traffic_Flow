using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Arrow_Spawner : MonoBehaviour
{
    public float green_arrow_scale = 1f; // For one block length
    public GameObject GreenArrow;
    public float angle_offset = -90f;
    public bool mutex = true;
    public Event_Listener_From_React react_values;
    public bool is_receiver = false;
    public int arrow_order = 0;
    bool start_execution = false;

    void Update() {
        if (is_receiver)
            return;
        if (!react_values.green_arrow_status)
            start_execution = false;
        if (!mutex && react_values.green_arrow_status && start_execution) {
            if (arrow_order == 0) {
                StartCoroutine(Wait_Period(react_values.green_arrow_period));
            }
            StartCoroutine(Spawn_Arrow(react_values.green_arrow_period));
        }
    }

    IEnumerator Wait_Period(float waitTime) {
        yield return new WaitForSeconds(waitTime);
        start_execution = true;
    }
    IEnumerator Spawn_Arrow(float waitTime) {
        if (mutex) {
            yield break;
        }
        yield return new WaitForSeconds(waitTime);
        GameObject spawned_Arrow = GameObject.Instantiate(GreenArrow, transform);
        spawned_Arrow.transform.eulerAngles = new Vector3(spawned_Arrow.transform.eulerAngles.x, spawned_Arrow.transform.eulerAngles.y + -90f, spawned_Arrow.transform.eulerAngles.z);
        mutex = false;
    }
}
