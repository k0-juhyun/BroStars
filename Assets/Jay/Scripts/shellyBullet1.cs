using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class shellyBullet1 : MonoBehaviour
{
    //�Ѿ��� ������ ������
    public float speed = 10.33f;
    Rigidbody rb;
    //�Ѿ�  �ִ�Ÿ�
    public float maxDistance = 5f;

    //�Ѿ� ������ġ
    private Vector3 firePos;
    // Start is called before the first frame update
    void Start()
    {
        firePos = transform.position;
        rb = GetComponent<Rigidbody>();
        
        //rb.velocity = transform.forward * speed;
    }

    // Update is called once per frame
    void Update()
    {
        //����Ÿ� = �ѱ��� �Ѿ� ���� �Ÿ�
        float currentDistnace = Vector3.Distance(firePos, transform.position);

        //������ �̵��ϰ�ʹ�
        transform.position += transform.forward * speed * Time.deltaTime;

        if(currentDistnace > maxDistance)
        {
            //�Ѿ� �ı�
            Destroy(gameObject);
        }
    }
    private void OnCollisionEnter(Collision collision)
    {
        //���� �ε��� ��ü�� ������ٵ� �ִٸ�
        var otherRB = collision.gameObject.GetComponent<Rigidbody>();
        //�� �չ������� ���� ���ϰ�ʹ�
        if (otherRB != null)
        {
            otherRB.AddForce(transform.forward * otherRB.mass * 3, ForceMode.Impulse);
        }
        //Destroy(this.gameObject);
        
    }
}
