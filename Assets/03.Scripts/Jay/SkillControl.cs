using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class SkillControl : MonoBehaviour
{
    public GameObject[] hideSkillButtons;
    public GameObject[] textPros;
    public TextMeshProUGUI[] hideSkillTimeTexts;
    public Image[] hideSkillImages;
    private bool[] isHideSkills = { false, false, false };
    private float[] skillTimes = { 3, 6, 9, 12 };
    private float[] getSkillTimes = { 0, 0, 0, 0 };
    // Start is called before the first frame update
    void Start()
    {
        for(int i = 0; i< textPros.Length; i++)
        {
            hideSkillTimeTexts[i] = textPros[i].GetComponent<TextMeshProUGUI>();
            hideSkillButtons[i].SetActive(false);
        }
    }

    // Update is called once per frame
    void Update()
    {
        HideSkillCheck();
    }
    public void HideSkillSetting(int skillNum)
    {
        hideSkillButtons[skillNum].SetActive(true);
        getSkillTimes[skillNum] = skillTimes[skillNum];
        isHideSkills[skillNum]= true; 
    }

    private void HideSkillCheck()
    {
        if (isHideSkills[0])
        {
            StartCoroutine(SkillTimeCheck(0));
        }
        if (isHideSkills[1])
        {
            StartCoroutine(SkillTimeCheck(1));
        }
        if (isHideSkills[2])
        {
            StartCoroutine(SkillTimeCheck(2));
        }
        if (isHideSkills[3])
        {
            StartCoroutine(SkillTimeCheck(3));
        }

    }
    IEnumerator SkillTimeCheck(int skillNum)
    {
        yield return null;
        if (getSkillTimes[skillNum] > 0)
        {
            getSkillTimes[skillNum] -= Time.deltaTime;
            if (getSkillTimes[skillNum] < 0)
            {
                getSkillTimes[skillNum] = 0;
                isHideSkills[skillNum] = false;
                hideSkillButtons[skillNum].SetActive(false );

            }

            hideSkillTimeTexts[skillNum].text = getSkillTimes[skillNum].ToString("00");

            float time = getSkillTimes[skillNum] / skillTimes[skillNum];
            hideSkillImages[skillNum].fillAmount = time;

        }
    }
}
