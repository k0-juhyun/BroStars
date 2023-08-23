using Photon.Pun;
using System.Collections.Generic;
using UnityEngine;

public class LogHandler : MonoBehaviour
{
    GameManager GameManager;

    private List<PhotonView> playerViewList = new List<PhotonView>();

    private void Awake()
    {
        playerViewList = GameManager.instance.allPlayer;
    }

    private void Start()
    {
           
    }

    [System.Serializable]
    public class KillLog
    {
        public int killerViewID;
        public int victimViewID;
        public int killCount;
    }

    public List<KillLog> killLogs = new List<KillLog>();

    public void AddKillLog(int killerViewID, int victimViewID, int killCount)
    {
        KillLog newLog = new KillLog
        {
            killerViewID = killerViewID,
            victimViewID = victimViewID,
            killCount = killCount
        };
        killLogs.Add(newLog);
    }

    public int GetTotalKillCountForPlayer(int playerViewID)
    {
        int totalKillCount = 1;
        foreach (var log in killLogs)
        {
            if (log.killerViewID == playerViewID)
            {
                totalKillCount += log.killCount;
            }
        }
        return totalKillCount;
    }
}
