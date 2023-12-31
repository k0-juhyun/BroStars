using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;
using UnityEngine.EventSystems;

public class MoveHandler : MonoBehaviourPun, IPunObservable
{
    #region Component Values
    [SerializeField]
    Joystick joystick;
    AnimatorHandler animatorHandler;
    TargetHandler targetHandler;
    #endregion

    #region Transform Values
    Transform lookPoint;
    #endregion

    #region Boolean Values
    private bool moveFlag;
    [SerializeField]
    public bool isReverse;
    #endregion

    #region Float Values
    [Header("Info")]
    public float moveSpeed;
    #endregion

    #region Photon Values
    [HideInInspector]
    public Vector3 receivePos;
    [HideInInspector]
    public Quaternion receiveRot = Quaternion.identity;
    [HideInInspector]
    public float lerpSpeed = 50;
    #endregion

    [SerializeField]
    [Header("Particle System")]
    private ParticleSystem[] dustPrefab;

    private void Awake()
    {
        lookPoint = transform.GetChild(0).gameObject.GetComponent<Transform>();
        animatorHandler = GetComponent<AnimatorHandler>();
        targetHandler = GetComponentInChildren<TargetHandler>();
    }

    private void FixedUpdate()
    {
        if (photonView.IsMine == false)
        {
            transform.position = Vector3.Lerp(transform.position, receivePos, lerpSpeed * Time.deltaTime);
            transform.rotation = Quaternion.Lerp(transform.rotation, receiveRot, lerpSpeed * Time.deltaTime);
        }
    }
    public void HandleMovement()
    {
        if (joystick.Horizontal != 0 || joystick.Vertical != 0)
        {
            Vector3 movement = new Vector3(joystick.Horizontal, 0, joystick.Vertical);

            if (isReverse)
            {
                movement = new Vector3(-movement.x, 0, -movement.z);
            }

            lookPoint.position = new Vector3(movement.x + transform.position.x, 4.11f, movement.z + transform.position.z);

            transform.LookAt(new Vector3(lookPoint.position.x, 6.1f, lookPoint.position.z));

            transform.eulerAngles = new Vector3(0, transform.eulerAngles.y, 0);

            transform.Translate(Vector3.forward * Time.fixedDeltaTime * moveSpeed);

            //animatorHandler.playTargetAnim("Walking");
            photonView.RPC(nameof(animatorHandler.playTargetAnimRpc), RpcTarget.All, "Walking");

            moveFlag = true;
        }

        else if (moveFlag == true)
        {
            moveFlag = false;
        }
    }

    public void HandleLeftDust()
    {
        ParticleSystem particles = Instantiate(dustPrefab[0], transform.position, Quaternion.identity);
        particles.Play();

        Destroy(particles.gameObject, particles.main.duration);
    }

    public void HandleRightDust()
    {
        ParticleSystem particles = Instantiate(dustPrefab[1], transform.position, Quaternion.identity);
        particles.Play();

        Destroy(particles.gameObject, particles.main.duration);
    }

    public void OnPhotonSerializeView(PhotonStream stream, PhotonMessageInfo info)
    {
        if (stream.IsWriting)
        {
            stream.SendNext(transform.position);
            stream.SendNext(transform.rotation);
        }
        else
        {
            receivePos = (Vector3)stream.ReceiveNext();
            receiveRot = (Quaternion)stream.ReceiveNext();
        }
    }
}
