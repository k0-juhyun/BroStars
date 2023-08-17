using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DropItem : MonoBehaviour
{
    private Transform target = null;
    private GameObject tplayer;
    [SerializeField]
    public float moveSpeed = 1f;
    public float dist = 1f;
    // Start is called before the first frame update
    void Start()
    {
        tplayer = GameObject.FindWithTag("Player");
        if(tplayer != null)
        {
            target = tplayer.transform;
        }
        
    }

    private void LateUpdate()
    {
        MoveObj();
    }
    private void MoveObj()
    {
        //�÷��̾���� �Ÿ��� ���� �Ÿ��ȿ� ������
         dist = Vector3.Distance(tplayer.transform.position, this.transform.position);
        transform.position = Vector3.MoveTowards(transform.position, target.position,moveSpeed * dist);

        Vector3 changePosition = new Vector3(transform.position.x, target.position.y +1, transform.position.z);
        transform.position = changePosition;
    }

    //�浹
    private void OnTriggerEnter(Collider other)
    {
        //�÷��̾� Ȯ���� ������Ʈ �ı�
        if(other.tag == "Player")
        {
            Destroy(this.gameObject);
        }
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
