using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;
using UnityEngine.EventSystems;


public class J_MoveHandler : MonoBehaviourPun,IPunObservable
{
    #region Component Values
    [SerializeField]
    Joystick joystick;
    [SerializeField]
    Transform lookPoint;
    //애니메이터
    //J_AnimatorHandler animatorHandler;
    #endregion

    #region Boolean Values
    bool moveFlag;
    #endregion

    #region Float Values
    [Header("Move Speed")]
    public float moveSpeed = 5f;
    #endregion

    [SerializeField]
    [Header("Particle System")]
    private ParticleSystem[] dustPrefab;

    #region Photon Values
    [HideInInspector]
    public Vector3 receivePos;
    [HideInInspector]
    public Quaternion receiveRot;
    [HideInInspector]
    public float lerpSpeed = 50;
    #endregion



    Animator animator;

    // Start is called before the first frame update
    void Start()
    {
        lookPoint = transform.GetChild(0).gameObject.GetComponent<Transform>();
        //animatorHandler = GetComponent<J_AnimatorHandler>();    
        animator = GetComponent<Animator>();
    }
    private void FixedUpdate()
    {
        if (photonView.IsMine == false)
        {
            transform.position = Vector3.Lerp(transform.position, receivePos, lerpSpeed * Time.deltaTime);
            transform.rotation = Quaternion.Lerp(transform.rotation, receiveRot, lerpSpeed * Time.deltaTime);
        }
    }


    //움직임
    public void HandleMovement()
    {
        //움직임 컨트롤러 값
        if (joystick.Horizontal > 0 || joystick.Horizontal < 0 || joystick.Vertical > 0 || joystick.Vertical < 0)
        {
            lookPoint.position = new Vector3(joystick.Horizontal + transform.position.x, 4.11f, joystick.Vertical + transform.position.z);
            transform.LookAt(new Vector3(lookPoint.position.x, 6.1f, lookPoint.position.z));
            transform.eulerAngles = new Vector3(0, transform.eulerAngles.y, 0);
            transform.Translate(Vector3.forward * moveSpeed * Time.fixedDeltaTime);
            //애니메이터
            animator.Play("Walking");
            //bool 움직임
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
