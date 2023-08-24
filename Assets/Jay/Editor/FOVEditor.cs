using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEditor;

[CustomEditor(typeof(Fov))]
public class FOVEditor : Editor
{
    private void OnSceneGUI()
    {
        // bossFOV Ŭ���� ����
        Fov fov = (Fov)target;

        // ���� ���� �������� ��ǥ�� ��� (�־��� ������ 1/2)
        Vector3 fromAnglePos = fov.CirclePoint(-fov.viewAngle * 0.5f);

        // ���� ���� ����
        Handles.color = new Color(1, 1, 1, 0.2f);

        Handles.DrawWireDisc(fov.transform.position
                             , Vector3.up
                             , fov.viewRange);

        Handles.DrawSolidArc(fov.transform.position
                             , Vector3.up
                             , fromAnglePos
                             , fov.viewAngle
                             , fov.viewRange);
    }
}