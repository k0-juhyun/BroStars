using System.Collections;
using System.Collections.Generic;
using UnityEngine;

// 부쉬의 기능 
// 플레이어 SHELLY WIN
// 1. 은신 기능
// 2. 일정시간마다 플레이어의 체력 회복 기능.(추후 기능) 

public class BushManager : MonoBehaviour
{
    public GameObject playerComponent; 

    // 부쉬 레이어 변수.
    private int layer;

    // 부쉬 Mesh 렌더러 변수. 
    MeshRenderer mRenderer;

    private float outOfRadius = 3.0f; 

    private float rangeRadius = 2.0f;

    // Start is called before the first frame update
    void Start()
    {
        layer = 1 << LayerMask.NameToLayer("GrassLayer");
    }

    // Update is called once per frame
    void Update()
    {
        // 부쉬 대상으로 플레이어의 범위를 측정하는 OverlapSphere 사용,
        Collider[] colArrays = Physics.OverlapSphere(this.transform.position, outOfRadius, layer);

        // OverlapSphere의 내부에 있는 경우. Grass를 식별한다. 
        if (colArrays.Length > 0)
        {
            float minDist = Mathf.Infinity;

            for (int i = 0; i < colArrays.Length; i++)
            {
                float dist = Vector3.Distance(this.transform.position, colArrays[i].gameObject.transform.position);
               
                if(dist < rangeRadius)
                {
                    if(dist < minDist)
                    {
                        minDist = dist;
                        
                        // 두 가지 조건으로 플레이어가 부쉬 안에 있다고 판단 ( minDist < 0.5f && 
                        if(minDist < 0.5f)
                        {

                            // 플레이어가 부쉬안에 있다.
                           // print("플레이어가 부쉬 안");
                        }
                        else
                        {
                            // 플레이어가 부쉬 밖에 있다. 
                            //print("플레이어가 부쉬 밖");
                        }
                        
                    }

                    

                    if (dist < 0.2f)
                    {
                        // 플레이어가 페이드인 효과가 적용되면서 투명화가 진행된다. 

                        //// Shelly_GEO의 컴포넌트의 갯수
                        //int length = playerComponent.transform.childCount;

                        //for (int index = 0; index < length; index++)
                        //{
                        //    // 플레이어의 SkinnedMeshRenderer 컴포넌트를 가져온다. 
                        //    SkinnedMeshRenderer playerRenderer = playerComponent.transform.GetChild(index).GetComponent<SkinnedMeshRenderer>();
                        //    // SkinnedMeshRenderer 컬러값을 가져온다. 
                        //    Color playerMaterialColor = playerRenderer.materials[0].color;
                        //    // SkinnedMeshRenderer 알파 값을 변경합니다.
                        //    playerMaterialColor.a = 0f;
                        //    //  SkinnedMeshRenderer 변경된 컬러 값을 재질에 적용합니다.
                        //    playerRenderer.materials[0].color = playerMaterialColor;
                        //}

                    }
                    else
                    {
                        //print(dist);
                    }
                   
                    // MeshRenderer 컴포넌트를 가져온다. 
                    mRenderer = colArrays[i].gameObject.GetComponent<MeshRenderer>();       

                    // MeshRenderer의 컬러값을 가져온다. 
                    Color materialColor = mRenderer.materials[0].color;

                    // MeshRenderer의 알파 값을 변경합니다.
                    materialColor.a = 0.3f;

                    //  MeshRenderer 변경된 컬러 값을 재질에 적용합니다.
                    mRenderer.materials[0].color = materialColor;
                }
                else
                {
                    // MeshRenderer 컴포넌트를 가져온다. 
                    mRenderer = colArrays[i].gameObject.GetComponent<MeshRenderer>();

                    // MeshRenderer의 컬러값을 가져온다. 
                    Color materialColor = mRenderer.materials[0].color;

                    // MeshRenderer의 알파 값을 변경합니다.
                    materialColor.a = 1f;

                    //  MeshRenderer 변경된 컬러 값을 재질에 적용합니다.
                    mRenderer.materials[0].color = materialColor;

                    

                }

            }
        }
     
    }

  /*  private void OnCollisionStay(Collision collision)
    {
        if (collision.gameObject.CompareTag("Grass"))
        {
            print("잔디잔디");
        }
    }*/


    // 페이드 인 효과로 발생하면서 투명화가 진행된다.
    IEnumerator FadeIn(MeshRenderer renderer)
    {
        // MeshRenderer의 컬러값을 가져온다. 
        Color materialColor = renderer.materials[0].color;

        for (float i = 0; i < 1f; i+= 0.1f)
        {
       
            //float f = i / 0.1f;
            print(i);

            //color.a = f;
            materialColor.a = i;
            yield return new WaitForSeconds(0.1f);
        }
      
        //  MeshRenderer 변경된 컬러 값을 재질에 적용합니다.
        renderer.materials[0].color = materialColor;
    }

    // OverlapSphere을 벗어나면 페이드 아웃 효과 및 정상적으로 돌아온다. 
    IEnumerator FadeOut()
    {
        for (int i = 10; i >= 0; i--)
        {
            float f = i / 10.0f;
            Color color = mRenderer.materials[0].color;
            color.a = f;
            yield return new WaitForSeconds(0.1f);
        }
    }



    // 기즈모를 그린다. 
    private void OnDrawGizmos()
    {
        Gizmos.color = Color.blue;
        Gizmos.DrawWireSphere(this.transform.position, outOfRadius);

        Gizmos.color = Color.red;
        Gizmos.DrawWireSphere(this.transform.position, rangeRadius);

    }

  




}
