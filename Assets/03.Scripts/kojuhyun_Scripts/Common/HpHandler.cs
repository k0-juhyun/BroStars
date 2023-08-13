using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class HpHandler : MonoBehaviour
{
    BushManager bushManager;

    [Header("HP Bar")]
    public Slider HpBar;

    [Header("Particle System")]
    public GameObject HealPrefab;

    [Header("�÷��̾� ����")]
    public float curHp;
    public float maxHp;
    public float AttackDamage;
    public float SkillDamage;
    public float hpRegenValue;
    private float gridHp = 200;

    [HideInInspector]
    public bool isDamaged;

    private void Awake()
    {
        curHp = maxHp;

        bushManager = GetComponent<BushManager>();
    }

    public float HandleHP(float damage)
    {
        if (damage < 0)
        {
            isDamaged = true; // �ǰ� ���� ����
        }

        else if (damage > 0)
        {
            // heal
        }

        curHp += damage;
        return curHp;
    }

    public void RegenerateHpInBush()
    {
        if (bushManager.isBush && curHp < maxHp)
        {
            HandleHP(1);
            HealPrefab.SetActive(true);
        }
        else
        {
            HealPrefab.SetActive(false);
        }
    }

    public void UpdateHp()
    {
        HpBar.value = curHp / maxHp;
    }
}
