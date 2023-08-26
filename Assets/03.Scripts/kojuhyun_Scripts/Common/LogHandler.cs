using Photon.Pun;
using System.Linq;
using System.Collections.Generic;
using UnityEngine;

public class LogHandler : MonoBehaviour
{
    private Dictionary<string, int> playerKills = new Dictionary<string, int>();
    private Dictionary<string, int> playerDeaths = new Dictionary<string, int>();
    public Dictionary<int, Dictionary<string, int>> teamPlayerKills = new Dictionary<int, Dictionary<string, int>>();

    public void RecordKill(string killerName)
    {
        if (playerKills.ContainsKey(killerName))
        {
            playerKills[killerName]++;
        }
        else
        {
            playerKills[killerName] = 1;
        }
    }

    public void RecordDeath(string playerName)
    {
        if (playerDeaths.ContainsKey(playerName))
        {
            playerDeaths[playerName]++;
        }
        else
        {
            playerDeaths[playerName] = 1;
        }
    }

    // 플레이어 킬 수를 가져옴
    public int GetPlayerKills(string playerName)
    {
        if (playerKills.ContainsKey(playerName))
        {
            return playerKills[playerName];
        }
        return 0;
    }

    // 플레이어 데스 수를 가져옴
    public int GetPlayerDeaths(string playerName)
    {
        if (playerDeaths.ContainsKey(playerName))
        {
            return playerDeaths[playerName];
        }
        return 0;
    }

    // 섹스섹스
    public string GetPlayerWithMostKillsInTeam(int teamIdx)
    {
        if (teamPlayerKills.TryGetValue(teamIdx, out var teamKills))
        {
            var mostKills = teamKills.Max(pair => pair.Value);
            var playerWithMostKills = teamKills.FirstOrDefault(pair => pair.Value == mostKills).Key;

            return playerWithMostKills;
        }

        return string.Empty;
    }
}
