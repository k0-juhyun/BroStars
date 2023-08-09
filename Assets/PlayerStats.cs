using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerStats : MonoBehaviour
{
    public int curHp;
    public int maxHp;
    public int AttackDamage;
    public int SkillDamage;

    private void Start()
    {
        curHp = maxHp;
    }

    public int HandleHP(int damage)
    {
        curHp += damage;
        return curHp;
    }
}
