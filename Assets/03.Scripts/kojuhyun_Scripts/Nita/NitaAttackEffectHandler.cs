using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;

public class NitaAttackEffectHandler : MonoBehaviourPun
{
    [Header("Speed")]
    [SerializeField]
    private float speed;

    SphereCollider sp;

    private void Awake()
    {
        sp = GetComponent<SphereCollider>();
    }

    private void OnEnable()
    {
        StartCoroutine(destroy());
        StartCoroutine(DelayCollider(0.5f));
    }

    void Update()
    {
        transform.position += transform.forward * Time.deltaTime * speed;
    }

    IEnumerator destroy()
    {
        yield return new WaitForSeconds(0.8f);
        if (photonView.IsMine)
        {
            PhotonNetwork.Destroy(this.gameObject);
        }
    }

    private void OnCollisionEnter(Collision collision)
    {
        Destroy(this.gameObject);
    }

    IEnumerator DelayCollider(float delay)
    {
        yield return new WaitForSeconds(delay);
        sp.enabled = true;
    }
}
