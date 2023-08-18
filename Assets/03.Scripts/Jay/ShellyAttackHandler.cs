using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;

public class ShellyAttackHandler : MonoBehaviourPun
{
    //attackJoystic을 누르면 총이 발사된다.
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
        //만들어진 총알을 총구의 앞방향으로 1만큼 떨어진 지점에 놓는다
        Vector3 pos = firePos.position + firePos.forward * 1;

        //총알공장에서 총알을 만든다
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

        //총구의 앞방향으로 시선을 만들고
        Ray ray = new Ray(firePos, fireForward);

        RaycastHit hitInfo;

        //바라본다
        if (Physics.Raycast(ray, out hitInfo))
        {
            bool isEnemy = false;
            //만약 hitInfo의 물체의 레이어가 player라면
            if (hitInfo.transform.gameObject.layer == LayerMask.NameToLayer("Player"))
            {
                isEnemy = true;
            }
            //총알임팩트

            if (isEnemy)
            {
                //너 총에 맞았어라고 알려주고싶다
                //hitInfo.transform.
            }

        }
        else
        {
            //허공
        }
    }

}
