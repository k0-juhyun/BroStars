using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;

// �ִ� ������ �� �ִ� ������ ���ڴ� 29���� �����Ѵ�.
// ������ 7�ʸ��� �ϳ��� �����ȴ�. 
public class ZemManager : MonoBehaviourPun
{
    // ��ȯ�� Zem�� ���� ���� 
    private int limitZemCount = 29; 
    // ��ȯ�� Zem ������Ʈ
    public GameObject zem;
    // zem�� ������ ������Ʈ 
    public GameObject rangeObject;
    // zem�� ������ ������Ʈ�� BoxCollider  
    BoxCollider rangeCollider;

    // Zem ����Ʈ ParticleSystem. 
    private ParticleSystem zemEffect;

    // zem�� ������ ������Ʈ�� BoxCollider�� �߽� ��ġ
    private float centerX;
    private float centerZ;

    private void Awake()
    {
        zemEffect = this.gameObject.GetComponentInChildren<ParticleSystem>();
        rangeCollider = rangeObject.GetComponent<BoxCollider>();

        // ������ Ŭ���̾�Ʈ�� ���� �� ����.
        if (PhotonNetwork.IsMasterClient)
        {
            StartCoroutine(RandomCreateCoroutine());
        }
    }

    private void Start()
    {
        // BoxCollider�� �߽� ��ġ�� �����´�. 
        centerX = rangeCollider.bounds.center.x;
        centerZ = rangeCollider.bounds.center.z;

        // 3�� ���Ŀ� start BGM ����. 
        Invoke("PlayStartBGM", 3f);

    }

    private void PlayStartBGM()
    {
        // BDH�� PlaySound �߰�. 
        SoundManager_01.instance.PlayBGM(SoundManager_01.EBgm.BGM_BDH);
    }

    // ������ Ŭ���̾�Ʈ���� ���� �����ϰ� ������ �ٸ� Ŭ���̾�Ʈ�鿡�� �����ϴ� �ڷ�ƾ
    IEnumerator RandomCreateCoroutine()
    {
        while (limitZemCount > 0 )
        {
            yield return new WaitForSeconds(5f);

            // Zem ����Ʈ Ȱ��ȭ.
            if (!zemEffect.isPlaying)
            {
                zemEffect.Play();
            }

            yield return new WaitForSeconds(0.2f);

            // Zem�� ������ ��ġ�� BoxCollider�� �߽� ��ġ
            Vector3 zemsRandomPosition = new Vector3(centerX, rangeObject.transform.position.y, centerZ);

            // Zem ���� ���� ����.
            SoundManager_01.instance.PlaySFX(SoundManager_01.ESfx.GEM_CREATESOUND);

            // Zem�� �����Ѵ�.
            GameObject Zems = PhotonNetwork.Instantiate("Crystal_Sparkle", zemsRandomPosition, Quaternion.identity);

           
            // Zem�� ������ �� �ִ� �ִ� 29���� �����Ѵ�.  
            limitZemCount -= 1;
           
            // CreateRandomPosition()�� ��ġ�� ��ǥ �������� �����Ѵ�. 
            Vector3 targetPosition = CreateRandomPosition();

            // Zem�� ���ϴ� ������ ����� �ʹ�.
            Vector3 dir = (targetPosition - zemsRandomPosition).normalized;

            // ��ǥ �������� ���ϴ� ������ ����.
            Vector3 targetDir = (dir + Zems.transform.up).normalized;

            // ������ ���� ������ �ٸ� Ŭ���̾�Ʈ�鿡�� ����
            photonView.RPC(nameof(ReceiveGemInfo), RpcTarget.Others, zemsRandomPosition, Zems.transform.rotation);

            // Rigidbody�� �̿��Ͽ� ���� ��� �� ������.
            Zems.GetComponent<Rigidbody>().AddForce(targetDir, ForceMode.Impulse);
        }
    }

    [PunRPC]
    void ReceiveGemInfo(Vector3 position, Quaternion rotation)
    {
        // �ٸ� Ŭ���̾�Ʈ���� �� ����
        GameObject newZem = Instantiate(zem, position, rotation);
    }



    // ���� �������� ��ġ(EndPoint) �� �����ϴ� �޼ҵ�
    Vector3 CreateRandomPosition()
    {
        Vector3 originPosition = rangeObject.transform.position;

        // BoxCollider�� ����� �������� bound.size ���
        float rangeX = rangeCollider.bounds.size.x;
        float rangeZ = rangeCollider.bounds.size.z;

        // bound.size�� ������ ��ġ�� x,z�� �����Ѵ�. 
        rangeX = Random.Range((rangeX / 2) * -1, rangeX / 2);
        rangeZ = Random.Range((rangeZ / 2) * -1, rangeZ / 2);

        // ������ ���Ͱ� ���� 
        Vector3 randomPosition = new Vector3(rangeX, 0f, rangeZ);

        // ���� �������� ��ġ�� �����Ѵ�.
        Vector3 createPosition = originPosition + randomPosition;

        return createPosition;
    }
}