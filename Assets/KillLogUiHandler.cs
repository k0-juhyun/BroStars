using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using static LeanTween;

public class KillLogUiHandler : MonoBehaviour
{
    public bool myTeamKill = false;
    public bool enemyTeamKill = false;

    public GameObject myTeamUi;
    public GameObject enemyTeamUi;

    private RectTransform myTeamUiRectTransform;
    private RectTransform enemyTeamUiRectTransform;

    private Vector3 myTeamUiStartPosition;
    private Vector3 enemyTeamUiStartPosition;

    private bool isAnimating = false;

    private void Start()
    {
        myTeamUiRectTransform = myTeamUi.GetComponent<RectTransform>();
        enemyTeamUiRectTransform = enemyTeamUi.GetComponent<RectTransform>();

        myTeamUiStartPosition = myTeamUiRectTransform.anchoredPosition;
        enemyTeamUiStartPosition = enemyTeamUiRectTransform.anchoredPosition;
    }

    void Update()
    {
        if (myTeamKill && !isAnimating)
        {
            myTeamUi.gameObject.SetActive(true);
            StartCoroutine(AnimateUi(myTeamUiRectTransform, myTeamUiStartPosition, true));
            myTeamKill = false; 
        }
        else if (enemyTeamKill && !isAnimating)
        {
            enemyTeamUi.gameObject.SetActive(true);
            StartCoroutine(AnimateUi(enemyTeamUiRectTransform, enemyTeamUiStartPosition, false));
            enemyTeamKill = false; 
        }
    }

    IEnumerator AnimateUi(RectTransform uiRectTransform, Vector3 startPosition, bool isMyTeam)
    {
        isAnimating = true;

        float moveDistance = 100f;

        Vector3 targetPosition;
        Vector3 originalPosition;

        if (isMyTeam)
        {
            targetPosition = startPosition + new Vector3(moveDistance, 0f, 0f);
            originalPosition = startPosition;
        }
        else
        {
            targetPosition = startPosition - new Vector3(moveDistance, 0f, 0f);
            originalPosition = startPosition;
        }

        LeanTween.move(uiRectTransform, targetPosition, 0.5f)
            .setEaseOutQuad()
            .setOnComplete(() =>
            {
                StartCoroutine(DeactivateUi(uiRectTransform, originalPosition));
            });

        yield return null;
    }

    IEnumerator DeactivateUi(RectTransform uiRectTransform, Vector3 originalPosition)
    {
        yield return new WaitForSeconds(1f); 

        LeanTween.move(uiRectTransform, originalPosition, 0.5f)
            .setEaseInQuad()
            .setOnComplete(() =>
            {
                isAnimating = false;
                uiRectTransform.gameObject.SetActive(false);
            });
    }
}
