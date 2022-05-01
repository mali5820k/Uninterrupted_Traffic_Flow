using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Arrow_Deleter : MonoBehaviour
{
    public float speed = 1f;

    // Update is called once per frame
    void Update()
    {
        
    }

    void OnTriggerEnter(Collider collider) {
        Arrow_Spawner other = collider.GetComponent<Arrow_Spawner>();
        if (other) {
            Destroy(this.gameObject, 4f);
        }
    }
}
