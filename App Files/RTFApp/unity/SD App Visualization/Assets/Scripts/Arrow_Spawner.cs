using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Arrow_Spawner : MonoBehaviour
{
    public float green_arrow_scale = 1f; // For one block length
    public GameObject GreenArrow;
    public float angle_offset = -90f;
    [SerializeField] bool mutex = false;
    public Event_Listener_From_React react_values;
    public bool is_receiver = false;
    public int arrow_order = 0;
    bool start_execution = false;
    bool trigger_delay = false;

    public void Spawn_Arrow()
    {
        mutex = false;
        GameObject spawned_Arrow = GameObject.Instantiate(GreenArrow, transform);
        spawned_Arrow.transform.eulerAngles = new Vector3(spawned_Arrow.transform.eulerAngles.x, spawned_Arrow.transform.eulerAngles.y + -90f, spawned_Arrow.transform.eulerAngles.z);
    }

        void Update() {
        if (is_receiver)
            return;
        
        /*if (react_values.green_arrow_status) {
            StartCoroutine(Wait_Period(react_values.green_arrow_period));
            if (mutex == true) {
                Spawn_Arrow(react_values.green_arrow_period);
            }
        }*/
    }

    IEnumerator Wait_Period(float waitTime) {

        yield return new WaitForSeconds(2 * waitTime);
        if (arrow_order == 0 && trigger_delay == false)
        {
            yield return new WaitForSeconds(2 * waitTime);
        }
        start_execution = true;
        trigger_delay = true;
        mutex = true;
    }
}
