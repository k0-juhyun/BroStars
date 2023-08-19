using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;

public class LeonAttackEffectHandler : MonoBehaviourPun
{
    [Header("Speed")]
    public float moveSpeed = 2;
    public float duration = 2;
    public float rotationSpeed = 20;

    private Transform Player;
    private Vector3 initialForward;

    private MeshCollider meshCollider;
    private Rigidbody rb;

    private void OnEnable()
    {
        rb = GetComponent<Rigidbody>();
        meshCollider = GetComponentInChildren<MeshCollider>();
        Player = GameObject.Find("Leon").GetComponent<Transform>();
        initialForward = Player.transform.forward;
        StartCoroutine(DestroyAfterDelay(duration));
        StartCoroutine(HandleCollider(0.5f));
        LaunchProjectile();

    }

    private void Update()
    {
        if (photonView.IsMine == false)
            return;
        rotationSpeed += 2;
        transform.forward = initialForward;
        transform.position += initialForward * Time.deltaTime * moveSpeed;

        transform.eulerAngles += new Vector3(0, rotationSpeed, 0);
    }

    IEnumerator DestroyAfterDelay(float duration)
    {
        yield return new WaitForSeconds(duration);
        PhotonNetwork.Destroy(this.gameObject);
    }

    IEnumerator HandleCollider(float delay)
    {
        yield return new WaitForSeconds(delay);
        meshCollider.enabled = true;
    }

    private void LaunchProjectile()
    {
        if (photonView.IsMine)
        {
            rb.velocity = initialForward * moveSpeed;
        }
    }

    [PunRPC]
    private void UpdateProjectilePosition(Vector3 position)
    {
        rb.position = position;
    }
}
