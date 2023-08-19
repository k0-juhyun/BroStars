using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class NitaAttackEffectHandler : MonoBehaviour
{
    [Header("Speed")]
    [SerializeField]
    private float speed;

    private void OnEnable()
    {
        StartCoroutine(destroy());
    }
    void Update()
    {
        transform.position += transform.forward * Time.deltaTime * speed;
    }
    IEnumerator destroy()
    {
        yield return new WaitForSeconds(0.8f);

        Destroy(this.gameObject);
    }
}
