using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Arrow_Deleter : MonoBehaviour
{
    public float block_length = 6f;
    public float speed = 1f;
    public float green_time = 5f; // was 10f;
    public Event_Listener_From_React ev;

    void Start() {
        speed = block_length / green_time;
        ev = GameObject.FindGameObjectWithTag("React_Listener").GetComponent<Event_Listener_From_React>();
    }
    // Update is called once per frame
    void Update()
    {
        if (ev.green_arrow_status == true) {
            green_time = ev.green_arrow_period / 2f - (ev.green_arrow_period/10f); // 1/10th of the time is amber/yellow
            Debug.Log("Block_Length for arrow = " + block_length);
            speed = block_length / green_time;
            //Debug.Log(speed);
            transform.position += transform.right * speed * Time.deltaTime;
        }
        else
        {
            Destroy(this.gameObject);
        }
    }

    void OnTriggerEnter(Collider collider) {
        Arrow_Spawner other = collider.GetComponent<Arrow_Spawner>();
        if (other) {
            if (other.is_receiver)
                Destroy(this.gameObject, 4f);
        }
    }
}
