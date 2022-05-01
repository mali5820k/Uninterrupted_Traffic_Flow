using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Arrow_Deleter : MonoBehaviour
{
    public float block_length = 6f;
    public float speed = 1f;
    public float green_time = 10f;

    void Start() {
        speed = block_length / green_time;
    }
    // Update is called once per frame
    void Update()
    {
        transform.position += transform.right * speed * Time.deltaTime;
    }

    void OnTriggerEnter(Collider collider) {
        Arrow_Spawner other = collider.GetComponent<Arrow_Spawner>();
        if (other) {
            if (other.is_receiver)
                Destroy(this.gameObject, 4f);
        }
    }
}
