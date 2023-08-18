using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;

public class ShellyAttackHandler : MonoBehaviourPun
{
    //attackJoystic�� ������ ���� �߻�ȴ�.
    //[Header("JoyStick")]
    //public Joystick attackJoystick;


    [Header("Fire Info")]
    public GameObject attackBulletFactory;
    //public GameObject specialBulletFactory;
    public Transform firePos;

    // Start is called before the first frame update
    void Start()
    {
        if (photonView.IsMine == false)
        {
            this.enabled = false;
        }
    }
    void FireBulletByInstantiate()
    {
        //������� �Ѿ��� �ѱ��� �չ������� 1��ŭ ������ ������ ���´�
        Vector3 pos = firePos.position + firePos.forward * 1;

        //�Ѿ˰��忡�� �Ѿ��� �����
        GameObject bullet = PhotonNetwork.Instantiate("Bullet", pos,Quaternion.identity);
    }
    [PunRPC]
    void FireBulletByRPC(Vector3 firePos, Vector3 fireForward)
    {
        GameObject bullet = Instantiate(attackBulletFactory);
        bullet.transform.position = firePos;
        bullet.transform.forward = fireForward;
    }

    [PunRPC]
    // Update is called once per frame
    void FireRayByRpc(Vector3 firePos, Vector3 fireForward)
    {

        //�ѱ��� �չ������� �ü��� �����
        Ray ray = new Ray(firePos, fireForward);

        RaycastHit hitInfo;

        //�ٶ󺻴�
        if (Physics.Raycast(ray, out hitInfo))
        {
            bool isEnemy = false;
            //���� hitInfo�� ��ü�� ���̾ player���
            if (hitInfo.transform.gameObject.layer == LayerMask.NameToLayer("Player"))
            {
                isEnemy = true;
            }
            //�Ѿ�����Ʈ

            if (isEnemy)
            {
                //�� �ѿ� �¾Ҿ��� �˷��ְ�ʹ�
                //hitInfo.transform.
            }

        }
        else
        {
            //���
        }
    }

}
