using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AttackEffectHandler : MonoBehaviour
{
    [Header("Speed")]
    [SerializeField]
    private float speed;
    private Transform Player;

    private void OnEnable()
    {
        Player = GameObject.FindWithTag("Player").GetComponent<Transform>();
        StartCoroutine(destroy());
    }
    void Update()
    {
        transform.position += Player.forward * Time.deltaTime * speed;
    }
    IEnumerator destroy()
    {
        yield return new WaitForSeconds(0.5f);
        print("t");
        Destroy(this.gameObject);
    }
}
