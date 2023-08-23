using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FieldOfView1 : MonoBehaviour
{
    public float viewRadius;
    [Range(0, 360)]
    public float viewAngle;

    public LineRenderer line;
    public LayerMask targetMask;
    public LayerMask obstacleMask;
    [HideInInspector]
    public List<Transform> visibleTargets = new List<Transform>();

    public float meshResolution;

    public MeshFilter viewMeshFilter;
    Mesh viewMesh;
    void Start()
    {
        viewMesh = new Mesh();
        viewMesh.name = "View Mesh";
        viewMeshFilter.mesh = viewMesh;
        StartCoroutine("FindTargetsWithDelay", .2f);
    }
    IEnumerator FindTargetsWithDelay(float delay)
    {
        while (true)
        {
            yield return new WaitForSeconds(delay);
            FindVisibleTargets();
        }
    }
    void LateUpdate()
    {
        DrawFieldOfView();
    }
    void FindVisibleTargets()
    {
        visibleTargets.Clear();
        Collider[] targetsInViewRadius = Physics.OverlapSphere(transform.position, viewRadius, targetMask);
        for (int i = 0; i < targetsInViewRadius.Length; i++)
        {
            Transform target = targetsInViewRadius[i].transform;
            Vector3 dirToTarget = (target.position - transform.position).normalized;
            if (Vector3.Angle(transform.forward, dirToTarget) < viewAngle / 2)
            {
                float dstToTarget = Vector3.Distance(transform.position, target.position);

                if (!Physics.Raycast(transform.forward, dirToTarget, dstToTarget, obstacleMask))
                {
                    visibleTargets.Add(target);
                }
            }
        }
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
            ViewCastInfo newViewCast = ViewCast(angle);
            viewPoints[i] = newViewCast.point;
            //print(transform.position);
            Debug.DrawLine(transform.position, transform.forward + DirFromAngle(angle, true) * viewRadius, Color.red);
        }

        line.positionCount = viewPoints.Length;

        for(int i = 0; i< viewPoints.Length; i++)
        {
            line.SetPositions(viewPoints);
        }

    }

    ViewCastInfo ViewCast(float globalAngle)
    {
        Vector3 dir = DirFromAngle(globalAngle, true);
        RaycastHit hit;

        if (Physics.Raycast(Vector3.forward, dir, out hit, viewRadius, obstacleMask))
        {
            return new ViewCastInfo(hit.point, globalAngle);

        }
        else
        {
            return new ViewCastInfo(transform.position + dir * viewRadius, globalAngle);
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

    public struct ViewCastInfo
    {
        //public bool hit;
        public Vector3 point;
        //public float dst;
        public float angle;

        public ViewCastInfo(Vector3 _point,float _angle)
        {
            //hit = _hit;
            point = _point;
            //dst = _dst;
            angle = _angle;
        }
    }
}
