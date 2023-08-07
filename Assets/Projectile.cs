using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Projectile : MonoBehaviour
{
    public float startVelo;
    public float angle;
    public float step;

    public LineRenderer lineRenderer;
    private Camera cam;
    private Transform Player;
    // Start is called before the first frame update
    void Start()
    {
        Player = FindObjectOfType<PlayerManager>().GetComponent<Transform>();
        cam = Camera.main;  
    }

    // Update is called once per frame
    void Update()
    {
        float _angle = angle * Mathf.Rad2Deg;
        Vector3 targetPos = cam.ScreenToWorldPoint(Input.mousePosition);
        float v0;
        float time;
        CalculatePath(targetPos,angle,out v0,out time);

        DrawPath(v0, _angle, step);
        if (Input.GetKeyDown(KeyCode.Space))
        {
            StopAllCoroutines();
            StartCoroutine(CoroutineMovement(v0, _angle));
        }
    }

    IEnumerator CoroutineMovement(float startVelocity, float angle)
    {
        float t = 0;

        while (t < 100)
        {
            float x = startVelocity * t * Mathf.Cos(angle);
            float y = startVelocity * t * Mathf.Sin(angle) - (1f / 2f) * -Physics.gravity.y * Mathf.Pow(t, 2);
            transform.position = new Vector3(x, y, 0);

            t += Time.deltaTime;
            yield return null;
        }
    }

    private void CalculatePath(Vector3 targetPos, float angle, out float v0,out float time)
    {
        float xt =targetPos.x;
        float yt =targetPos.y;
        float g = - Physics.gravity.y;

        float v1 = Mathf.Pow(xt, 2);
        float v2 = 2*xt * Mathf.Sin(angle) * Mathf.Cos(angle);
        float v3 = 2 * yt * Mathf.Pow(Mathf.Cos(angle), 2);
        v0 = Mathf.Sqrt(v1 / (v2 - v3));

        time = xt/(v0 * Mathf.Cos(angle));
    }

    private void DrawPath(float v0, float angle, float step)
    {
        step = Mathf.Max(0.01f, step);
        float totalTime = 10;
        lineRenderer.positionCount = (int)(totalTime / step) + 2;
        int count = 0;

        for (float i = 0; i < totalTime; i += step)
        {
            float x = v0 * i * Mathf.Cos(angle);
            float y = v0 * i * Mathf.Sin(angle) - 0.5f * -Physics.gravity.y * Mathf.Pow(i, 2);
            lineRenderer.SetPosition(count, Player.position + new Vector3(x, y, 0));
            count++;
        }
        float xFinal = v0 * totalTime * Mathf.Cos(angle);
        float yFinal = v0 * totalTime * Mathf.Sin(angle) - 0.5f * -Physics.gravity.y * Mathf.Pow(totalTime, 2);
        lineRenderer.SetPosition(count, Player.position + new Vector3(xFinal, yFinal, 0));
    }
}
