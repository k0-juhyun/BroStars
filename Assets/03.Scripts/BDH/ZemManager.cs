using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;

// 최대 생성할 수 있는 보석의 숫자는 29개로 제한한다.
// 보석은 7초마다 하나씩 생성된다. 
public class ZemManager : MonoBehaviourPun
{
    // 소환할 Zem의 제한 숫자 
    private int limitZemCount = 29; 
    // 소환할 Zem 오브젝트
    public GameObject zem;
    // zem을 생성할 오브젝트 
    public GameObject rangeObject;
    // zem을 생성할 오브젝트의 BoxCollider  
    BoxCollider rangeCollider;

    // Zem 이펙트 ParticleSystem. 
    private ParticleSystem zemEffect;

    // zem을 생성할 오브젝트의 BoxCollider의 중심 위치
    private float centerX;
    private float centerZ;

    private void Awake()
    {
        zemEffect = this.gameObject.GetComponentInChildren<ParticleSystem>();
        rangeCollider = rangeObject.GetComponent<BoxCollider>();

        // 마스터 클라이언트일 때만 잼 생성.
        if (PhotonNetwork.IsMasterClient)
        {
            StartCoroutine(RandomCreateCoroutine());
        }
    }

    private void Start()
    {
        // BoxCollider의 중심 위치를 가져온다. 
        centerX = rangeCollider.bounds.center.x;
        centerZ = rangeCollider.bounds.center.z;

        // 3초 이후에 start BGM 시작. 
        Invoke("PlayStartBGM", 3f);

    }

    private void PlayStartBGM()
    {
        // BDH씬 PlaySound 추가. 
        SoundManager_01.instance.PlayBGM(SoundManager_01.EBgm.BGM_BDH);
    }

    // 마스터 클라이언트에서 젬을 생성하고 정보를 다른 클라이언트들에게 전달하는 코루틴
    IEnumerator RandomCreateCoroutine()
    {
        while (limitZemCount > 0 )
        {
            yield return new WaitForSeconds(5f);

            // Zem 이펙트 활성화.
            if (!zemEffect.isPlaying)
            {
                zemEffect.Play();
            }

            yield return new WaitForSeconds(0.2f);

            // Zem을 생성할 위치는 BoxCollider의 중심 위치
            Vector3 zemsRandomPosition = new Vector3(centerX, rangeObject.transform.position.y, centerZ);

            // Zem 생성 사운드 실행.
            SoundManager_01.instance.PlaySFX(SoundManager_01.ESfx.GEM_CREATESOUND);

            // Zem을 생성한다.
            GameObject Zems = PhotonNetwork.Instantiate("Crystal_Sparkle", zemsRandomPosition, Quaternion.identity);

           
            // Zem을 생성할 수 있는 최대 29개로 제한한다.  
            limitZemCount -= 1;
           
            // CreateRandomPosition()의 위치를 목표 지점으로 설정한다. 
            Vector3 targetPosition = CreateRandomPosition();

            // Zem이 향하는 방향을 만들고 싶다.
            Vector3 dir = (targetPosition - zemsRandomPosition).normalized;

            // 목표 지점으로 향하는 방향을 생성.
            Vector3 targetDir = (dir + Zems.transform.up).normalized;

            // 생성된 젬의 정보를 다른 클라이언트들에게 전달
            photonView.RPC(nameof(ReceiveGemInfo), RpcTarget.Others, zemsRandomPosition, Zems.transform.rotation);

            // Rigidbody를 이용하여 위로 상승 후 떨어짐.
            Zems.GetComponent<Rigidbody>().AddForce(targetDir, ForceMode.Impulse);
        }
    }

    [PunRPC]
    void ReceiveGemInfo(Vector3 position, Quaternion rotation)
    {
        // 다른 클라이언트에서 젬 생성
        GameObject newZem = Instantiate(zem, position, rotation);
    }



    // 잼이 떨어지는 위치(EndPoint) 를 생성하는 메소드
    Vector3 CreateRandomPosition()
    {
        Vector3 originPosition = rangeObject.transform.position;

        // BoxCollider의 사이즈를 가져오는 bound.size 사용
        float rangeX = rangeCollider.bounds.size.x;
        float rangeZ = rangeCollider.bounds.size.z;

        // bound.size의 랜덤한 위치를 x,z를 생성한다. 
        rangeX = Random.Range((rangeX / 2) * -1, rangeX / 2);
        rangeZ = Random.Range((rangeZ / 2) * -1, rangeZ / 2);

        // 랜덤한 벡터값 생성 
        Vector3 randomPosition = new Vector3(rangeX, 0f, rangeZ);

        // 잼을 떨어지는 위치를 지정한다.
        Vector3 createPosition = originPosition + randomPosition;

        return createPosition;
    }
}