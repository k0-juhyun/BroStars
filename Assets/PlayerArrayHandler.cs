using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class PlayerArrayHandler : MonoBehaviour
{
    public List<GameObject> brawlList;
    public Text[] nickNameList;
    private int myindex;

    public string[] allPlayerNickNameList;

    private void Start()
    {
        for (int i = 0; i < ProjectManager.instance.allPlayerNickName.Length; i++)
        {
            allPlayerNickNameList[i] = ProjectManager.instance.allPlayerNickName[i];
        }
    }

    private void Update()
    {
        
    }
}
