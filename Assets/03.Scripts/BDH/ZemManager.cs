using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;

public class ZemManager : MonoBehaviourPun
{
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
    }

    // ������ Ŭ���̾�Ʈ���� ���� �����ϰ� ������ �ٸ� Ŭ���̾�Ʈ�鿡�� �����ϴ� �ڷ�ƾ
    IEnumerator RandomCreateCoroutine()
    {
        while (true)
        {
            yield return new WaitForSeconds(7f);

            // Zem ����Ʈ Ȱ��ȭ.
            if (!zemEffect.isPlaying)
            {
                zemEffect.Play();
            }

            yield return new WaitForSeconds(0.2f);

            // Zem�� ������ ��ġ�� BoxCollider�� �߽� ��ġ
            Vector3 zemsRandomPosition = new Vector3(centerX, rangeObject.transform.position.y, centerZ);

            // Zem ���� ���� ����.
            SoundManager.instance.PlayZemBGM();

            // Zem�� �����Ѵ�.
            GameObject newZem = Instantiate(zem, zemsRandomPosition, Quaternion.identity);

            // ������ ���� ������ �ٸ� Ŭ���̾�Ʈ�鿡�� ����
            photonView.RPC(nameof(ReceiveGemInfo), RpcTarget.Others, zemsRandomPosition, newZem.transform.rotation);
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