using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TrajectoryLine : MonoBehaviour
{
    [SerializeField]
    private LineRenderer lineRenderer;

    [SerializeField, Min(3)]
    private int lineSegments = 60;

    [SerializeField, Min(1)]
    private float timeOfTheFliht = 5;

    public void ShowTrajectoryLine(Vector3 startPos, Vector3 startVelo)
    {
        float timeStep = timeOfTheFliht / lineSegments;

        Vector3[] lineRendererPoints = CalculateTrajectoryLine(startPos, startVelo, timeStep);

        lineRenderer.positionCount = lineSegments;
        lineRenderer.SetPositions(lineRendererPoints);
    }

    private Vector3[] CalculateTrajectoryLine(Vector3 startPos, Vector3 startVelo, float timeStep)
    {
        Vector3[] lineRendererPoints = new Vector3[lineSegments];

        lineRendererPoints[0] = startPos;

        for (int i = 1; i < lineSegments; i++)
        {
            float timeOffset = timeStep * i;

            Vector3 progressBeforeGravity = startVelo * timeOffset;
            Vector3 gravityOffset = Vector3.up * -0.5f * Physics.gravity.y * timeOffset * timeOffset;
            Vector3 newPos = startPos + progressBeforeGravity - gravityOffset;
            lineRendererPoints[i] = newPos;
        }

        return lineRendererPoints;
    }
}
