using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public class J_FanshapeRenderer : MonoBehaviour
{
    public int fanSegments = 30; // ��ä���� �󸶳� ����ȭ���� �����ϴ� ����
    public float radius = 1.0f; // ��ä���� ������
    public float startAngle = 30.0f; // ���� ���� (degree)
    public float endAngle = 150.0f; // ���� ���� (degree)

    private LineRenderer lineRenderer;

    void Start()
    {
        lineRenderer = GetComponent<LineRenderer>();
        DrawFanShape();
    }

    void DrawFanShape()
    {
        lineRenderer.positionCount = fanSegments + 2; // �������� �������� �߰��ϱ� ���� +2

        float deltaAngle = (endAngle - startAngle) / fanSegments;
        float currentAngle = startAngle;

        Vector3[] positions = new Vector3[fanSegments + 2];
        positions[0] = Vector3.zero; // ��ä���� �߽��� (���� �߽�)

        for (int i = 1; i <= fanSegments + 1; i++)
        {
            // ������ ���� ���� ��ġ ���
            float x = Mathf.Cos(currentAngle * Mathf.Deg2Rad) * radius;
            float y = Mathf.Sin(currentAngle * Mathf.Deg2Rad) * radius;
            positions[i] = new Vector3(x, y, 0f);
            currentAngle += deltaAngle;
        }

        lineRenderer.SetPositions(positions);
    }
}
