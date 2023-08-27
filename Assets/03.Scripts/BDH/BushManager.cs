using Photon.Pun;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

// 부쉬의 기능 
// 플레이어 SHELLY WIN
// 1. 은신 기능
// 2. 일정시간마다 플레이어의 체력 회복 기능.(추후 기능) 

public class BushManager : MonoBehaviourPun
{
    // 플레이어의 SkinedRenderer를 가지고 있는 게임 오브젝트. 
    public GameObject playerComponent;

    // 부쉬 레이어 변수.
    private int layer;

    // 부쉬 Mesh 렌더러 변수. 
    MeshRenderer mRenderer;

    // 외부 범위 반지름
    private float outOfRadius = 3.0f;

    // 부쉬 범위 반지름.
    private float rangeRadius = 2.0f;

    // 플레이어가 부쉬 범위안에 속하는 지 판단하는 변수 
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
        #region 은신
        // 부쉬 대상으로 플레이어의 범위를 측정하는 OverlapSphere 사용,
        Collider[] colArrays = Physics.OverlapSphere(this.transform.position, outOfRadius, layer);

        // OverlapSphere의 내부에 있는 경우. Grass를 식별한다. 
        if (colArrays.Length > 0)
        {
            // 가장 가까운 거리 변수 
            float minDist = Mathf.Infinity;

            for (int i = 0; i < colArrays.Length; i++)
            {
                float dist = Vector3.Distance(this.transform.position, colArrays[i].gameObject.transform.position);

                if (dist < rangeRadius)
                {
                    if (dist < minDist)
                    {
                        minDist = dist;

                        // 두 가지 조건으로 플레이어가 부쉬 안에 있다고 판단 ( minDist < 0.5f && Capsule Collider의 조건으로 판단)
                        // 플레이어가 부쉬안에 있다. (정상적으로 작동한다.) 
                        if (minDist < 0.5f && isBush == true)
                        {

                            // 플레이어가 페이드인 효과가 적용되면서 투명화가 진행된다. 
                            IsPlayerTransparent(0.3f);
                        }
                        else if (isBush == false)
                        {
                            // 플레이어가 부쉬 밖에 있다. 
                            // 플레이어가 정상적으로 돌아온다. 
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
        // MeshRenderer 컴포넌트를 가져온다. 
        mRenderer = bushObject.GetComponent<MeshRenderer>();

        // MeshRenderer의 컬러값을 가져온다. 
        Color materialColor = mRenderer.materials[0].color;

        // MeshRenderer의 알파 값을 변경합니다.
        materialColor.a = parameter;

        //  MeshRenderer 변경된 컬러 값을 재질에 적용합니다.
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

    // 기즈모를 그린다. 
    private void OnDrawGizmos()
    {
        Gizmos.color = Color.blue;
        Gizmos.DrawWireSphere(this.transform.position, outOfRadius);

        Gizmos.color = Color.red;
        Gizmos.DrawWireSphere(this.transform.position, rangeRadius);

    }
}