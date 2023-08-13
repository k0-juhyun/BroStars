using UnityEngine;

public class NitaAttackEffectHandler : MonoBehaviour
{
    public float moveSpeed = 1f;      // �̵� �ӵ�
    public float jumpForce = 1f;     // ���� ��
    public float bounceDistance = 1f; // �� ƨ�� ����

    private int currentBounces = 0;   // ���� ƨ�� Ƚ��
    private bool isJumping = false;    // ���� ������ ����
    private Vector3 moveDirection;     // �̵� ����
    private float traveledDistance = 0f; // �̵��� �Ÿ�

    private Quaternion initialRotation; // �ʱ� ȸ����

    private void Start()
    {
        moveDirection = transform.forward; // ������Ʈ�� �� �������� �ʱ�ȭ
        initialRotation = transform.rotation; // �ʱ� ȸ���� ����
    }

    private void Update()
    {
        if (!isJumping)
        {
            // �̵�
            transform.Translate(moveDirection * moveSpeed * Time.deltaTime);
            traveledDistance += moveSpeed * Time.deltaTime;

            if (traveledDistance >= bounceDistance)
            {
                // ���� �Ÿ����� ƨ��
                isJumping = true;
                GetComponent<Rigidbody>().velocity = new Vector3(moveDirection.x * moveSpeed, jumpForce, moveDirection.z * moveSpeed);
                currentBounces++;

                // ���� ƨ���� ���� �ʱ�ȭ
                traveledDistance = 0f;
            }
        }

        // ���鿡 ����� ��
        if (Physics.Raycast(transform.position, Vector3.down, 0.5f))
        {
            if (currentBounces < 3) // 3�� ƨ��� ����
            {
                // �ٽ� �̵� ���·� �ʱ�ȭ
                isJumping = false;

                // ��� ����
                GetComponent<Rigidbody>().velocity = new Vector3(moveDirection.x * moveSpeed, GetComponent<Rigidbody>().velocity.y, moveDirection.z * moveSpeed);
            }
            else
            {
                // �ִ� ƨ�� Ƚ���� �ʰ��ϸ� ����
                GetComponent<Rigidbody>().velocity = Vector3.zero;
            }
        }
    }

    private void OnCollisionEnter(Collision collision)
    {
        if (currentBounces < 3 && collision.collider.CompareTag("Ground")) // 3�� ƨ��� ����
        {
            // �ٽ� �̵� ���·� �ʱ�ȭ
            isJumping = false;

            // ��� ����
            GetComponent<Rigidbody>().velocity = new Vector3(moveDirection.x * moveSpeed, GetComponent<Rigidbody>().velocity.y, moveDirection.z * moveSpeed);
        }
        else
        {
            // �ִ� ƨ�� Ƚ���� �ʰ��ϸ� ����
            GetComponent<Rigidbody>().velocity = Vector3.zero;
        }
    }
}
