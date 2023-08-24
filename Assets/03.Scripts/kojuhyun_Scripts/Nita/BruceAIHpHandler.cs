using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Photon.Pun;

public class BruceAIHpHandler : MonoBehaviour
{
    [Header("플레이어 스탯")]
    public float curHp;
    public float maxHp;
    public float AttackDamage;
    public float SkillDamage;
    public float hpRegenValue;
    private float hpPercentage;


    [Header("HP Bar")]
    public Slider HpBar;

    [PunRPC]
    public float HandleHP(float damage)
    {
        if (damage < 0)
        {
            
        }

        else if (damage > 0)
        {
            // heal
        }

        curHp += damage;
        return curHp;
    }
}
