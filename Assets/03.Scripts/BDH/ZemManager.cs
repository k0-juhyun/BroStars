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

    private void Awake()
    {
        StartCoroutine(RandomCreateCoroutine());
        rangeCollider = rangeObject.GetComponent<BoxCollider>();
    }

    IEnumerator RandomCreateCoroutine()
    {
        while (true)
        {
            // ���� �÷��̿��� �� ���� �ð��� 7�� �������� �����ȴ�. 
            yield return new WaitForSeconds(1f);
            Vector3 zemsRandomPosition = CreateRandomPosition();
            // Zem�� ������ ��ġ�� CreateRandomPosition()�� �����.
            GameObject zems = Instantiate(zem, zemsRandomPosition, Quaternion.identity);
            // Rigidbody�� �̿��Ͽ� ���� ��� �� ������.
            zems.GetComponent<Rigidbody>().AddForce(zemsRandomPosition, ForceMode.VelocityChange);
        }
    }

   

    // ���� ������ ������ ������ ��ġ �����ϴ� �޼ҵ�
    Vector3 CreateRandomPosition()
    {
        Vector3 originPosition = rangeObject.transform.position;

        // BoxCollider�� ����� �������� bound.size ���
        float rangeX = rangeCollider.bounds.size.x;
        float rangeZ = rangeCollider.bounds.size.z;

        rangeX = Random.Range((rangeX / 2) * -1, rangeX / 2);
        rangeZ = Random.Range((rangeZ / 2) * -1, rangeZ / 2);

        // ������ ���Ͱ� ���� 
        Vector3 randomPosition = new Vector3(rangeX, 0f, rangeZ);

        // ���� ������ ���� ��ġ�� �����Ѵ�.
        Vector3 createPosition = originPosition + randomPosition;
        return createPosition; 
    }

   

}
