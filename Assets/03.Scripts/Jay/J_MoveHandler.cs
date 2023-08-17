using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class J_MoveHandler : MonoBehaviour
{
    #region Component Values
    [SerializeField]
    Joystick joystick;
    [SerializeField]
    Transform lookPoint;
    //�ִϸ�����
    J_AnimatorHandler animatorHandler;
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

    Animator animator;

    // Start is called before the first frame update
    void Start()
    {
        lookPoint = transform.GetChild(0).gameObject.GetComponent<Transform>();
        //animatorHandler = GetComponent<J_AnimatorHandler>();    
        animator = GetComponent<Animator>();
    }

    //������
    public void HandleMovement()
    {
        //������ ��Ʈ�ѷ� ��
        if (joystick.Horizontal > 0 || joystick.Horizontal < 0 || joystick.Vertical > 0 || joystick.Vertical < 0)
        {
            lookPoint.position = new Vector3(joystick.Horizontal + transform.position.x, 6.1f, joystick.Vertical + transform.position.z);
            transform.LookAt(new Vector3(lookPoint.position.x, 6.1f, lookPoint.position.z));
            transform.eulerAngles = new Vector3(0, transform.eulerAngles.y, 0);
            transform.Translate(Vector3.forward * moveSpeed * Time.fixedDeltaTime);
            //�ִϸ�����
            animator.Play("Walking");
            //bool ������
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
}
