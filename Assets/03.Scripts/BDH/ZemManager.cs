using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ZemManager : MonoBehaviour
{
    // 소환할 Zem 오브젝트
    public GameObject zem;
    // zem을 생성할 오브젝트 
    public GameObject rangeObject;
    // zem을 생성할 오브젝트의 BoxCollider  
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
            // 실제 플레이에서 잼 생성 시간은 7초 간격으로 생성된다. 
            yield return new WaitForSeconds(1f);
            Vector3 zemsRandomPosition = CreateRandomPosition();
            // Zem을 생성할 위치는 CreateRandomPosition()를 사용함.
            GameObject zems = Instantiate(zem, zemsRandomPosition, Quaternion.identity);
            // Rigidbody를 이용하여 위로 상승 후 떨어짐.
            zems.GetComponent<Rigidbody>().AddForce(zemsRandomPosition, ForceMode.VelocityChange);
        }
    }

   

    // 잼이 생성될 랜덤한 리스폰 위치 생성하는 메소드
    Vector3 CreateRandomPosition()
    {
        Vector3 originPosition = rangeObject.transform.position;

        // BoxCollider의 사이즈를 가져오는 bound.size 사용
        float rangeX = rangeCollider.bounds.size.x;
        float rangeZ = rangeCollider.bounds.size.z;

        rangeX = Random.Range((rangeX / 2) * -1, rangeX / 2);
        rangeZ = Random.Range((rangeZ / 2) * -1, rangeZ / 2);

        // 랜덤한 벡터값 생성 
        Vector3 randomPosition = new Vector3(rangeX, 0f, rangeZ);

        // 잼을 생성할 생성 위치를 지정한다.
        Vector3 createPosition = originPosition + randomPosition;
        return createPosition; 
    }

   

}
