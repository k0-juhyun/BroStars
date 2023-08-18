using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class shellybullet : MonoBehaviour
{
    Rigidbody rb;
    public float bulletSpeed = 10.33f;
    Vector3 startPos;

    //�˹���
    [SerializeField]
    [Header("KnockBackForce")]
    public float knockBackForce = 0.5f;


    public float AutoDestroyTime = 5f;
    //public poolableobject 

    // Start is called before the first frame update
    void Start()
    {
        rb = GetComponent<Rigidbody>();
        rb.velocity = transform.forward * bulletSpeed;
        startPos = transform.position;
        //print(this.transform.position);
    }

    // Update is called once per frame
    void Update()
    {
        transform.forward = rb.velocity.normalized;

    }
    //private void OnCollisionEnter(Collision other)
    private void OnTriggerEnter(Collider other)
    {
        //print("OnTriggerEnter : " + other.name);

        //var otherRB = other.gameObject.GetComponent<Rigidbody>();
        //if (otherRB != null)
        //{
        //    otherRB.AddForce(transform.forward * otherRB.mass * 10, ForceMode.Impulse);
        //}



        //����� �Ÿ��� ���� ������ �� �ݸ���

        // �浹ü�� �±װ� Enemy�϶�
        BushManager handler = other.gameObject.GetComponent<BushManager>();
        if (handler != null)
        // if (other.gameObject.CompareTag("Player"))
        {
            //1�� ��Ÿ�
            float firstDistance = 1.5f;
            //2�� ��Ÿ�
            float secondDistance = 3.5f;
            //3�� ��Ÿ�
            float thirdDistance = 5f;

            // �Ѿ˰� �÷��̾ �浹������ ���� �浹�÷��̾� �����ǰŸ�
            float range = Vector3.Distance(transform.position, other.transform.position);

            //��Ÿ� �ȿ� ������ 
            if (range < firstDistance)
            {
                //takedamage(5);
            }

            else if (firstDistance < range && range < secondDistance)
            {
                //takedamage(3);
            }
            else if (secondDistance < range && range < thirdDistance)
            {
                //takedamage(1);
            }

            //�˹�ȿ���� �ְ�ʹ�
            KnockBack(other.gameObject);

        }

        //�Ѿ� �ı�
        Destroy(this.gameObject);

    }
    //�˹�ȿ��
    private void KnockBack(GameObject enemy)
    {
        //print("111");
        ///�˹� ����
        Vector3 knockbackDirection = (enemy.transform.position - transform.position).normalized;

        // �˹� ��
        Rigidbody enemyRigidbody = enemy.GetComponentInChildren<Rigidbody>();
        if (enemyRigidbody != null)
        {
            //print("2222");
            //enemyRigidbody.AddForce(knockbackDirection * knockBackForce, ForceMode.Impulse);
            enemyRigidbody.AddForce(knockbackDirection * knockBackForce, ForceMode.Impulse);
        }
    }
}