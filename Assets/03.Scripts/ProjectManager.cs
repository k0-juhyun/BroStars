using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;
using UnityEngine.UI;

public class ProjectManager : MonoBehaviourPun
{
    public static ProjectManager instance;

    public InputField inputNickName;
    public int myFirstPosIndex;

    public Button btnConnect;

    public string myNickName;

    private void Awake()
    {
        if(instance == null)
        {
            instance = this;
            DontDestroyOnLoad(gameObject);
        }
        else
        {
            Destroy(gameObject);
        }
    }
    void Start()
    {
        // ��ư�� OnCick Ŭ�� ������ �Լ� ��� -> OnClickConnect
        btnConnect.onClick.AddListener(OnClickConnect);

        // inputNickName�� ������ ����� �� ȣ��Ǵ� �Լ� ���
        inputNickName.onValueChanged.AddListener(
            (string s) =>
            {
                btnConnect.interactable = s.Length > 0;

                // �˾����� �г����� �Է����ּ��� . �˸�.! 
            }
            );

        // inputNickName���� ���͸� ���� �� ȣ��Ǵ� �Լ� ���
        inputNickName.onSubmit.AddListener(
            (string s) =>
            {

                // ��ư�� Ȱ��ȭ �Ǿ��ִٸ�
                if (btnConnect.interactable)
                {
                    // OnClickConnect ȣ���Ѵ�. 
                    OnClickConnect();
                }

            }
            );

        // interactable ��ư�� ��Ȱ��ȭ
        btnConnect.interactable = false;
    }

    public void OnClickConnect()
    {

        // �г��� ����
        PhotonNetwork.NickName = inputNickName.text;
        myNickName = inputNickName.text;

        // MainScene���� �̵�. 
        PhotonNetwork.LoadLevel("02_MainScene");


    }
}
