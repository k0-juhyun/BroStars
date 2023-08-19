using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;

public class NitaAttackEffectHandler : MonoBehaviourPun
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
        if(photonView.IsMine)
        {
            transform.position += transform.forward * Time.deltaTime * speed;
        }
    }
    IEnumerator destroy()
    {
        yield return new WaitForSeconds(0.8f);
        if(photonView.IsMine) 
        {
            PhotonNetwork.Destroy(this.gameObject);
        }
    }
}
