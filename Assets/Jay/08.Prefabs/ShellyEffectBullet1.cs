using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ShellyEffectBullet1 : MonoBehaviour
{
    Rigidbody rb;
    public float bulletSpeed = 10.33f;
    Vector3 startPos;

    public float AutoDestroyTime = 5f;
    //public poolableobject 

    // Start is called before the first frame update
    void Start()
    {
        this.gameObject.transform.SetParent(null);
        rb = GetComponent<Rigidbody>();
        startPos = transform.position;
    }

    // Update is called once per frame
    void Update()
    {
        rb.velocity = transform.forward * bulletSpeed;
    }
    private void OnCollisionEnter(Collision collision)
    {
        var otherRB = collision.gameObject.GetComponent<Rigidbody>();
        if (otherRB != null)
        {
            otherRB.AddForce(transform.forward * otherRB.mass * 10, ForceMode.Impulse);
        }



        //����� �Ÿ��� ���� ������ �� �ݸ���

        // �浹ü�� �±װ� player�϶�
        if (collision.gameObject.CompareTag("Player"))
        {
            //DamageHandler damageHandler = GetComponent<DamageHandler>();
            //1�� ��Ÿ�
            float firstDistance = 1.5f;
            //2�� ��Ÿ�
            float secondDistance = 3.5f;
            //3�� ��Ÿ�
            float thirdDistance = 5f;

            // �Ѿ˰� player�� �浹������ ���� �浹�÷��̾� �����ǰŸ�
            float range = Vector3.Distance(transform.position, collision.transform.position);

            //��Ÿ� �ȿ� ������ 
            if (range < firstDistance)
            {
                //damageHandler
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
        }

    }
}