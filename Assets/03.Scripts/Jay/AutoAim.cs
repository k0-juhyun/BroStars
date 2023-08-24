using System.Collections;
using System.Collections.Generic;
using UnityEngine;



public class AutoAim : MonoBehaviour
{
    public Transform Target; // �ڵ����� Ÿ������ ������ Transform ��ü�� ����.

    //public GameObject rigPlayer;// ���� �÷��̾� ������Ʈ.
    //public Rig HeadRig; // Rigging�� ������ Rig ��ü ����.
    public float RetargetSpeed = 5f; // Ÿ�� ��ġ�� �����ϴ� �ӵ��� �����ϴ� ����.d
    //private RigBuilder rigBuilder;


    private GameObject chaseTarget; // �ڵ� ������ ��� ��.
    private int layer; // �� ���̾� ����.

    private float range = 5f; // ���� ����

    //float rigWeight = 1;

    private void Awake()
    {
        layer = 1 << LayerMask.NameToLayer("TestEnemy"); // �� ���̾�
        //rigBuilder = rigPlayer.GetComponent<RigBuilder>();

    }

    private void Start()
    {
        Target = GameObject.Find("TestEnemy").transform;
        print(this.transform.position);
        // �ڵ� ������ ��� ��.
        chaseTarget = null;
    }


    // Update is called once per frame
    void Update()
    {
      
   
        // OverlapSphere�� spotLight.GetComponent<Light>().range ������ ��(Enemey)�� ��� �ĺ��� 
        Collider[] colAry = Physics.OverlapSphere(this.transform.position, range, layer);

        // OverlapSphere�� ������ ��(Enemey)�� �����ϸ�.
        if (colAry.Length > 0)
        {
           
            float minDist = Vector3.Distance(this.transform.position, colAry[0].gameObject.transform.position);

            // �ĺ��� ���� �� ���� ����� ���� ��������� ������Ʈ.
            for (int i = 1; i < colAry.Length; i++)
            {
                float dist = Vector3.Distance(this.transform.position, colAry[i].gameObject.transform.position);

                if (dist < minDist)
                {
                    minDist = dist;
                    chaseTarget = colAry[i].gameObject;

                }

            }

            // Ÿ�� ���ϴ� ������ ���.
            Vector3 targetDirection = (chaseTarget.transform.position - this.transform.position).normalized;

  
            // Ÿ���� ������ ���ؼ� �Ѿ��� �߻�. 

            print(chaseTarget.name + " : " + minDist );


        }
    }

    // ����� �׸���. 
    private void OnDrawGizmos()
    {
        Gizmos.color = Color.black;
        Gizmos.DrawWireSphere(this.transform.position, range);
    }

}