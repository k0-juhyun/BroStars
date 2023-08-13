using UnityEngine;

public class NitaAttackEffectHandler : MonoBehaviour
{
    public float moveSpeed = 1f;      // 이동 속도
    public float jumpForce = 1f;     // 점프 힘
    public float bounceDistance = 1f; // 각 튕김 간격

    private int currentBounces = 0;   // 현재 튕김 횟수
    private bool isJumping = false;    // 점프 중인지 여부
    private Vector3 moveDirection;     // 이동 방향
    private float traveledDistance = 0f; // 이동한 거리

    private Quaternion initialRotation; // 초기 회전값

    private void Start()
    {
        moveDirection = transform.forward; // 오브젝트의 앞 방향으로 초기화
        initialRotation = transform.rotation; // 초기 회전값 저장
    }

    private void Update()
    {
        if (!isJumping)
        {
            // 이동
            transform.Translate(moveDirection * moveSpeed * Time.deltaTime);
            traveledDistance += moveSpeed * Time.deltaTime;

            if (traveledDistance >= bounceDistance)
            {
                // 일정 거리마다 튕김
                isJumping = true;
                GetComponent<Rigidbody>().velocity = new Vector3(moveDirection.x * moveSpeed, jumpForce, moveDirection.z * moveSpeed);
                currentBounces++;

                // 다음 튕김을 위해 초기화
                traveledDistance = 0f;
            }
        }

        // 지면에 닿았을 때
        if (Physics.Raycast(transform.position, Vector3.down, 0.5f))
        {
            if (currentBounces < 3) // 3번 튕기게 설정
            {
                // 다시 이동 상태로 초기화
                isJumping = false;

                // 계속 직진
                GetComponent<Rigidbody>().velocity = new Vector3(moveDirection.x * moveSpeed, GetComponent<Rigidbody>().velocity.y, moveDirection.z * moveSpeed);
            }
            else
            {
                // 최대 튕김 횟수를 초과하면 멈춤
                GetComponent<Rigidbody>().velocity = Vector3.zero;
            }
        }
    }

    private void OnCollisionEnter(Collision collision)
    {
        if (currentBounces < 3 && collision.collider.CompareTag("Ground")) // 3번 튕기게 설정
        {
            // 다시 이동 상태로 초기화
            isJumping = false;

            // 계속 직진
            GetComponent<Rigidbody>().velocity = new Vector3(moveDirection.x * moveSpeed, GetComponent<Rigidbody>().velocity.y, moveDirection.z * moveSpeed);
        }
        else
        {
            // 최대 튕김 횟수를 초과하면 멈춤
            GetComponent<Rigidbody>().velocity = Vector3.zero;
        }
    }
}
