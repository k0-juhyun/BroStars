using Photon.Pun;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

// �ν��� ��� 
// �÷��̾� SHELLY WIN
// 1. ���� ���
// 2. �����ð����� �÷��̾��� ü�� ȸ�� ���.(���� ���) 

public class BushManager : MonoBehaviourPun
{
    // �÷��̾��� SkinedRenderer�� ������ �ִ� ���� ������Ʈ. 
    public GameObject playerComponent;

    // �ν� ���̾� ����.
    private int layer;

    // �ν� Mesh ������ ����. 
    MeshRenderer mRenderer;

    // �ܺ� ���� ������
    private float outOfRadius = 3.0f;

    // �ν� ���� ������.
    private float rangeRadius = 2.0f;

    // �÷��̾ �ν� �����ȿ� ���ϴ� �� �Ǵ��ϴ� ���� 
    public bool isBush;

    TargetHandler targetHandler;
    public Canvas myCanvas;

    // Start is called before the first frame update
    void Start()
    {
        layer = 1 << LayerMask.NameToLayer("GrassLayer");
        targetHandler = GetComponentInParent<TargetHandler>();
    }

    // Update is called once per frame
    void Update()
    {
        #region ����
        // �ν� ������� �÷��̾��� ������ �����ϴ� OverlapSphere ���,
        Collider[] colArrays = Physics.OverlapSphere(this.transform.position, outOfRadius, layer);

        // OverlapSphere�� ���ο� �ִ� ���. Grass�� �ĺ��Ѵ�. 
        if (colArrays.Length > 0)
        {
            // ���� ����� �Ÿ� ���� 
            float minDist = Mathf.Infinity;

            for (int i = 0; i < colArrays.Length; i++)
            {
                float dist = Vector3.Distance(this.transform.position, colArrays[i].gameObject.transform.position);

                if (dist < rangeRadius)
                {
                    if (dist < minDist)
                    {
                        minDist = dist;

                        // �� ���� �������� �÷��̾ �ν� �ȿ� �ִٰ� �Ǵ� ( minDist < 0.5f && Capsule Collider�� �������� �Ǵ�)
                        // �÷��̾ �ν��ȿ� �ִ�. (���������� �۵��Ѵ�.) 
                        if (minDist < 0.5f && isBush == true)
                        {

                            // �÷��̾ ���̵��� ȿ���� ����Ǹ鼭 ����ȭ�� ����ȴ�. 
                            IsPlayerTransparent(0.3f);
                        }
                        else if (isBush == false)
                        {
                            // �÷��̾ �ν� �ۿ� �ִ�. 
                            // �÷��̾ ���������� ���ƿ´�. 
                            IsPlayerTransparent(1f);
                        }

                    }
                    IsBushTransparent(colArrays[i].gameObject, 0.5f);

                }
                else
                {
                    IsBushTransparent(colArrays[i].gameObject, 1f);
                }

            }
        }
        #endregion
    }

    private void IsBushTransparent(GameObject bushObject, float parameter)
    {
        // MeshRenderer ������Ʈ�� �����´�. 
        mRenderer = bushObject.GetComponent<MeshRenderer>();

        // MeshRenderer�� �÷����� �����´�. 
        Color materialColor = mRenderer.materials[0].color;

        // MeshRenderer�� ���� ���� �����մϴ�.
        materialColor.a = parameter;

        //  MeshRenderer ����� �÷� ���� ������ �����մϴ�.
        mRenderer.materials[0].color = materialColor;
    }

    private void IsPlayerTransparent(float parameter)
    {
        int length = playerComponent.transform.childCount;

        for (int index = 0; index < length; index++)
        {
            SkinnedMeshRenderer playerRenderer = playerComponent.transform.GetChild(index).GetComponent<SkinnedMeshRenderer>();
            Color playerMaterialColor = playerRenderer.materials[0].color;
            playerMaterialColor.a = parameter;
            playerRenderer.materials[0].color = playerMaterialColor;
        }
    }

    private void OnTriggerStay(Collider other)
    {
        if (other.gameObject.CompareTag("Grass"))
        {
            isBush = true;
        }
    }


    private void OnTriggerExit(Collider other)
    {
        if (other.gameObject.CompareTag("Grass"))
        {
            isBush = false;

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