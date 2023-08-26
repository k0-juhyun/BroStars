using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Photon.Pun;
using System;


// 1. �÷��̾��� �̸��� StartScene���� ������ �г������� Text ����. (0)
// 2. �÷��� ��ư�� ������� ConnectionScene���� �̵�. (0)
// 3. ����� �÷��̾� ���ÿ� ���� �÷��̾� ������ ����. (0) 

public class MainSceneManager : MonoBehaviour
{
    public Text PlayerNickName;
    public Button btnPlay;
    public Button leftBtn;
    public Button rightBtn;

    // ��ѷ� ����Ʈ
    public List<GameObject> brawlList;

    // ��ѷ� �ε��� ����
    public string brawlListIndex; 

    // �ε��� ��������
    private int index = 0;
    private int max_length;


    // Start is called before the first frame update
    void Start()
    {
        
        max_length = brawlList.Count;

        // ����ڰ� �Է��� �г������� TEXT UI ǥ��. 
        PlayerNickName.text = PhotonNetwork.NickName;

        btnPlay.onClick.AddListener(OnClickConnect);
        leftBtn.onClick.AddListener(OnClickLeftConnect);
        rightBtn.onClick.AddListener(OnClickRightConnect);
    }

    private void Update()
    {
        //print(index);
       // print(brawlList[index]);
    }

    private void OnClickRightConnect()
    {
       
        // ������ GameObject�� ��Ȱ��ȭ
        brawlList[index].SetActive(false);
    
        // �ε��� ������Ʈ 
        index = (index + 1 ) % max_length;
    
        // �ش� �ε��� GameObject Ȱ��ȭ
        brawlList[index].SetActive(true);
    }

    private void OnClickLeftConnect()
    {
       
        // ������ GameObject�� ��Ȱ��ȭ
        brawlList[index].SetActive(false);

        // �ε��� ������Ʈ 
        index = (index - 1) % max_length;
       
        if (index == -1)
        {
            index = max_length - 1;
        }
        
        // �ش� �ε��� GameObject Ȱ��ȭ
        brawlList[index].SetActive(true);

    }

    public void OnClickConnect()
    {
  
        // ������ ��ѷ� Index ������ ProjectManager�� ����.
        ProjectManager.instance.myBrawlerIndex = index;
        print(brawlList[index] + " ���������� :" + index);
        // 03_ConnectionScene���� �̵�.
        PhotonNetwork.LoadLevel("03_ConnectionScene");
    }
}