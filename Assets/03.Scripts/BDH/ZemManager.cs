using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ZemManager : MonoBehaviour
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
        StartCoroutine(RandomCreateCoroutine());
    }

    private void Start()
    {

        // BoxCollider�� �߽� ��ġ�� �����´�. 
        centerX = rangeCollider.bounds.center.x;
        centerZ = rangeCollider.bounds.center.z;

    }

    IEnumerator RandomCreateCoroutine()
    {
        while (true)
        {
            // ���� �÷��̿��� �� ���� �ð��� 7�� �������� �����ȴ�. 
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
            GameObject zems = Instantiate(zem, zemsRandomPosition, Quaternion.identity);

            // CreateRandomPosition()�� ��ġ�� ��ǥ �������� �����Ѵ�. 
            Vector3 targetPosition = CreateRandomPosition();

            // Zem�� ���ϴ� ������ ����� �ʹ�.
            Vector3 dir = (targetPosition - zemsRandomPosition).normalized;

            // ��ǥ �������� ���ϴ� ������ ����.
            Vector3 targetDir = (dir + zems.transform.up).normalized;

            // Rigidbody�� �̿��Ͽ� ���� ��� �� ������.
            zems.GetComponent<Rigidbody>().AddForce(targetDir, ForceMode.Impulse);
        }
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
