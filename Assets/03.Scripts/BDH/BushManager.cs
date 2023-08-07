using System.Collections;
using System.Collections.Generic;
using UnityEngine;

// 부쉬의 기능 
// 플레이어 SHELLY WIN
// 1. 은신 기능
// 2. 일정시간마다 플레이어의 체력 회복 기능.(추후 기능) 

public class BushManager : MonoBehaviour
{

    [Header("부쉬 변수")]
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
            
            for (int i = 0; i < colArrays.Length; i++)
            {
                // 예외처리 -> 자기 자신은 제외 
                if (colArrays[i].name == "Player") continue;

                float dist = Vector3.Distance(this.transform.position, colArrays[i].gameObject.transform.position);
               
                if(dist < rangeRadius)
                {
                  
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
