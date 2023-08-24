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

    private void Update()
    {
        foreach (var log in killLogs)
        {
            PhotonView killerView = playerViewList.Find(view => view.ViewID == log.killerViewID);
            PhotonView victimView = playerViewList.Find(view => view.ViewID == log.victimViewID);

            if (killerView != null && victimView != null)
            {
                string killerName = killerView.Owner.NickName;
                string victimName = victimView.Owner.NickName;
                int killCount = log.killCount;

                string message = $"{killerName} killed {victimName} ({killCount} times).";
                Debug.Log(message);
            }
        }
    }
}
