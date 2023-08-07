using System.Collections;
using System.Collections.Generic;
using UnityEngine;

// �ν��� ��� 
// �÷��̾� SHELLY WIN
// 1. ���� ���
// 2. �����ð����� �÷��̾��� ü�� ȸ�� ���.(���� ���) 

public class BushManager : MonoBehaviour
{

    [Header("�ν� ����")]
    // �ν� ���̾� ����.
    private int layer;

    // �ν� Mesh ������ ����. 
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
         // �ν� ������� �÷��̾��� ������ �����ϴ� OverlapSphere ���,
         Collider[] colArrays = Physics.OverlapSphere(this.transform.position, outOfRadius, layer);

        // OverlapSphere�� ���ο� �ִ� ���. Grass�� �ĺ��Ѵ�. 
        if (colArrays.Length > 0)
        {          
            
            for (int i = 0; i < colArrays.Length; i++)
            {
                // ����ó�� -> �ڱ� �ڽ��� ���� 
                if (colArrays[i].name == "Player") continue;

                float dist = Vector3.Distance(this.transform.position, colArrays[i].gameObject.transform.position);
               
                if(dist < rangeRadius)
                {
                  
                    // MeshRenderer ������Ʈ�� �����´�. 
                    mRenderer = colArrays[i].gameObject.GetComponent<MeshRenderer>();       

                    // MeshRenderer�� �÷����� �����´�. 
                    Color materialColor = mRenderer.materials[0].color;

                    // MeshRenderer�� ���� ���� �����մϴ�.
                    materialColor.a = 0.3f;

                    //  MeshRenderer ����� �÷� ���� ������ �����մϴ�.
                    mRenderer.materials[0].color = materialColor;
                }
                else
                {
                    // MeshRenderer ������Ʈ�� �����´�. 
                    mRenderer = colArrays[i].gameObject.GetComponent<MeshRenderer>();

                    // MeshRenderer�� �÷����� �����´�. 
                    Color materialColor = mRenderer.materials[0].color;

                    // MeshRenderer�� ���� ���� �����մϴ�.
                    materialColor.a = 1f;

                    //  MeshRenderer ����� �÷� ���� ������ �����մϴ�.
                    mRenderer.materials[0].color = materialColor;
                }

            }

        }
     
    }


    // ���̵� �� ȿ���� �߻��ϸ鼭 ����ȭ�� ����ȴ�.
    IEnumerator FadeIn(MeshRenderer renderer)
    {
        // MeshRenderer�� �÷����� �����´�. 
        Color materialColor = renderer.materials[0].color;

        for (float i = 0; i < 1f; i+= 0.1f)
        {
       
            //float f = i / 0.1f;
            print(i);

            //color.a = f;
            materialColor.a = i;
            yield return new WaitForSeconds(0.1f);
        }
      
        //  MeshRenderer ����� �÷� ���� ������ �����մϴ�.
        renderer.materials[0].color = materialColor;
    }

    // OverlapSphere�� ����� ���̵� �ƿ� ȿ�� �� ���������� ���ƿ´�. 
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



    // ����� �׸���. 
    private void OnDrawGizmos()
    {
        Gizmos.color = Color.blue;
        Gizmos.DrawWireSphere(this.transform.position, outOfRadius);

        Gizmos.color = Color.red;
        Gizmos.DrawWireSphere(this.transform.position, rangeRadius);

    }

  




}
