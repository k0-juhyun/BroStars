using Photon.Pun;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BushManager : MonoBehaviourPun
{
    public GameObject playerComponent;
    private int layer;
    private MeshRenderer mRenderer;
    private float outOfRadius = 3.0f;
    private float rangeRadius = 2.0f;
    public bool isBush;

    public Canvas myCanvas;
    TargetHandler targetHandler;

    void Start()
    {
        layer = 1 << LayerMask.NameToLayer("GrassLayer");
        targetHandler = GetComponentInParent<TargetHandler>();
    }

    void Update()
    {
        Collider[] colArrays = Physics.OverlapSphere(transform.position, outOfRadius, layer);

        if (colArrays.Length > 0)
        {
            float minDist = Mathf.Infinity;

            for (int i = 0; i < colArrays.Length; i++)
            {
                float dist = Vector3.Distance(transform.position, colArrays[i].gameObject.transform.position);

                if (dist < rangeRadius)
                {
                    if (dist < minDist)
                    {
                        minDist = dist;

                        if (minDist < 0.5f && isBush)
                        {
                            IsPlayerTransparent(0.2f);
                        }
                        else if (!isBush)
                        {
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
    }

    private void IsBushTransparent(GameObject bushObject, float parameter)
    {
        mRenderer = bushObject.GetComponent<MeshRenderer>();
        Color materialColor = mRenderer.materials[0].color;
        materialColor.a = parameter;
        mRenderer.materials[0].color = materialColor;
    }

    private void IsPlayerTransparent(float parameter)
    {
        int length = playerComponent.transform.childCount;
        bool shouldHide = false;

        if (isBush && targetHandler.teamIdx != ProjectManager.instance.myBrawlerIndex)
        {
            shouldHide = true;
        }

        for (int index = 0; index < length; index++)
        {
            SkinnedMeshRenderer playerRenderer = playerComponent.transform.GetChild(index).GetComponent<SkinnedMeshRenderer>();

            if (!photonView.IsMine && shouldHide)
            {
                playerRenderer.enabled = false;
            }
            else if (photonView.IsMine)
            {
                playerRenderer.enabled = true;
            }
        }

        if (photonView.IsMine)
        {
            myCanvas.gameObject.SetActive(!shouldHide || parameter != 1f);
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

    private void OnDrawGizmos()
    {
        Gizmos.color = Color.blue;
        Gizmos.DrawWireSphere(transform.position, outOfRadius);

        Gizmos.color = Color.red;
        Gizmos.DrawWireSphere(transform.position, rangeRadius);
    }
}
