using System.Collections.Generic;
using UnityEngine;

public class LogHandler : MonoBehaviour
{
    [System.Serializable]
    public class KillLog
    {
        public int killerViewID;
        public int victimViewID;
        public float damage;
    }

    public List<KillLog> killLogs = new List<KillLog>();

    public void AddKillLog(int killerViewID, int victimViewID, float damage)
    {
        KillLog newLog = new KillLog
        {
            killerViewID = killerViewID,
            victimViewID = victimViewID,
            damage = damage
        };
        killLogs.Add(newLog);
    }

    public float GetTotalDamageForPlayer(int playerViewID)
    {
        float totalDamage = 0;
        foreach (var log in killLogs)
        {
            if (log.killerViewID == playerViewID)
            {
                totalDamage += log.damage;
            }
        }
        return totalDamage;
    }
}
