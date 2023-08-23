using Photon.Pun.Demo.SlotRacer.Utils;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics.SymbolStore;
using UnityEngine;

public class Fov : MonoBehaviour
{
    [Header("시야 범위")]
    public float viewRange;
    [Header("시야 각도")]
    public float viewAngle;

    private Transform bossTr, playerTr;
    private int playerLayer, obstacleLayer, layerMask;

    public MeshFilter viewMeshFilter;
    Mesh viewMesh;

    LineRenderer lr;
    public int numSegments = 10; // Number of scalloped segments
    public float gapAngle = 10f; // Angle between each scalloped segment


    void Start()
    {
        viewMesh = new Mesh();
        viewMeshFilter.mesh = viewMesh;

        lr = GetComponent<LineRenderer>();

        bossTr = GetComponent<Transform>();

        playerTr = GameObject.FindGameObjectWithTag("Player").transform;

        playerLayer = LayerMask.NameToLayer("Player");

        obstacleLayer = LayerMask.NameToLayer("Obstacle");

        layerMask = 1 << playerLayer | 1 << obstacleLayer;
    }

    // 주어진 각도에 의해 원주 위의 점의 좌푯값을 계산하는 함수
    public Vector3 CirclePoint(float angle)
    {
        angle += transform.eulerAngles.y;
        return new Vector3(Mathf.Sin(angle * Mathf.Deg2Rad), 0, Mathf.Cos(angle * Mathf.Deg2Rad));
    }

    public bool isTracePlayer()
    {
        bool isTrace = false;

        Collider[] colls = Physics.OverlapSphere(bossTr.position, viewRange, 1 << playerLayer);

        if (colls.Length == 1)
        {
            Vector3 dir = (playerTr.position - bossTr.position).normalized;

            if (Vector3.Angle(bossTr.forward, dir) < viewAngle * 0.5f)
            {
                isTrace = true;
            }
        }

        return isTrace;
    }

    public bool isViewPlayer()
    {
        bool isView = false;

        RaycastHit hit;

        Vector3 dir = (playerTr.position - bossTr.position).normalized;

        if (Physics.Raycast(bossTr.position, dir, out hit, viewRange, layerMask))
        {
            isView = (hit.collider.CompareTag("Player"));

        }

        return isView;
    }
    void DrawFieldOfView()
    {

        int stepCount = Mathf.RoundToInt(viewAngle);
        float stepAngleSize = viewAngle / stepCount;

        viewMesh.Clear();

        Vector3[] viewPoints = new Vector3[stepCount + 1];
        //각도설정
        float startAngle = transform.eulerAngles.z - viewAngle / 2 - 90f;

        for (int i = 0; i <= stepCount; i++)
        {
            float angle = transform.eulerAngles.z - viewAngle / 2 + stepAngleSize * i;
            //ViewCastInfo newViewCast = ViewCast(angle);
            //viewPoints[i] = newViewCast.point;
            //print(transform.position);
            Debug.DrawLine(transform.position, transform.forward + DirFromAngle(angle, true) * viewRange, Color.red);
        }

        lr.positionCount = viewPoints.Length;

        for (int i = 0; i < viewPoints.Length; i++)
        {
            lr.SetPositions(viewPoints);
        }

    }
    public Vector3 DirFromAngle(float angleInDegrees, bool angleIsGlobal)
    {
        if (!angleIsGlobal)
        {
            angleInDegrees += transform.eulerAngles.z;
        }
        return new Vector3(Mathf.Sin(angleInDegrees * Mathf.Deg2Rad), Mathf.Cos(angleInDegrees * Mathf.Deg2Rad));
    }
    void LateUpdate()
    {
        DrawFieldOfView();
    }

}