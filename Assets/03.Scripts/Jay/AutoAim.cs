using System.Collections;
using System.Collections.Generic;
using UnityEngine;



public class AutoAim : MonoBehaviour
{
    public Transform Target; // 자동에임 타겟으로 지정할 Transform 객체를 설정.

    //public GameObject rigPlayer;// 리깅 플레이어 오브젝트.
    //public Rig HeadRig; // Rigging을 적용할 Rig 객체 설정.
    public float RetargetSpeed = 5f; // 타겟 위치를 추적하는 속도를 설정하는 변수.d
    //private RigBuilder rigBuilder;


    private GameObject chaseTarget; // 자동 에임할 대상 적.
    private int layer; // 적 레이어 변수.

    private float range = 5f; // 측정 범위

    //float rigWeight = 1;

    private void Awake()
    {
        layer = 1 << LayerMask.NameToLayer("TestEnemy"); // 적 레이어
        //rigBuilder = rigPlayer.GetComponent<RigBuilder>();

    }

    private void Start()
    {
        Target = GameObject.Find("TestEnemy").transform;
        print(this.transform.position);
        // 자동 에임할 대상 적.
        chaseTarget = null;
    }


    // Update is called once per frame
    void Update()
    {
      
   
        // OverlapSphere의 spotLight.GetComponent<Light>().range 범위로 적(Enemey)를 모두 식별함 
        Collider[] colAry = Physics.OverlapSphere(this.transform.position, range, layer);

        // OverlapSphere의 범위에 적(Enemey)이 존재하면.
        if (colAry.Length > 0)
        {
           
            float minDist = Vector3.Distance(this.transform.position, colAry[0].gameObject.transform.position);

            // 식별한 적들 중 가장 가까운 적을 계속적으로 업데이트.
            for (int i = 1; i < colAry.Length; i++)
            {
                float dist = Vector3.Distance(this.transform.position, colAry[i].gameObject.transform.position);

                if (dist < minDist)
                {
                    minDist = dist;
                    chaseTarget = colAry[i].gameObject;

                }

            }

            // 타겟 향하는 방향을 계산.
            Vector3 targetDirection = (chaseTarget.transform.position - this.transform.position).normalized;

  
            // 타켓을 방향을 향해서 총알을 발사. 

            print(chaseTarget.name + " : " + minDist );


        }
    }

    // 기즈모를 그린다. 
    private void OnDrawGizmos()
    {
        Gizmos.color = Color.black;
        Gizmos.DrawWireSphere(this.transform.position, range);
    }

}