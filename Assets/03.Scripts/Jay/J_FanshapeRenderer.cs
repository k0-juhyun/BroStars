using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public class J_FanshapeRenderer : MonoBehaviour
{
    public int fanSegments = 30; // 부채꼴을 얼마나 세분화할지 결정하는 변수
    public float radius = 1.0f; // 부채꼴의 반지름
    public float startAngle = 30.0f; // 시작 각도 (degree)
    public float endAngle = 150.0f; // 종료 각도 (degree)

    private LineRenderer lineRenderer;

    void Start()
    {
        lineRenderer = GetComponent<LineRenderer>();
        DrawFanShape();
    }

    void DrawFanShape()
    {
        lineRenderer.positionCount = fanSegments + 2; // 시작점과 종료점을 추가하기 위해 +2

        float deltaAngle = (endAngle - startAngle) / fanSegments;
        float currentAngle = startAngle;

        Vector3[] positions = new Vector3[fanSegments + 2];
        positions[0] = Vector3.zero; // 부채꼴의 중심점 (원의 중심)

        for (int i = 1; i <= fanSegments + 1; i++)
        {
            // 각도에 따라 점의 위치 계산
            float x = Mathf.Cos(currentAngle * Mathf.Deg2Rad) * radius;
            float y = Mathf.Sin(currentAngle * Mathf.Deg2Rad) * radius;
            positions[i] = new Vector3(x, y, 0f);
            currentAngle += deltaAngle;
        }

        lineRenderer.SetPositions(positions);
    }
}
