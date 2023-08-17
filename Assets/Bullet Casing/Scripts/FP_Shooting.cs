using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class FP_Shooting : MonoBehaviour {
	
    public float 		ShootingSlowness;
    public GameObject 	SpawnPositionCar;
    public GameObject 	Cardridge;
    //public GameObject 	Cardridge01;
    private bool 		beingHandled = false;


    private  IEnumerator  Shooting()
    {

        beingHandled = true;
		
		GameObject cardridge;
			if (SpawnPositionCar) cardridge = (GameObject)Instantiate(Cardridge, SpawnPositionCar.transform.position + SpawnPositionCar.transform.right, SpawnPositionCar.transform.rotation);
			else  cardridge = (GameObject)Instantiate(Cardridge, SpawnPositionCar.transform.position + SpawnPositionCar.transform.forward, SpawnPositionCar.transform.rotation);        
        yield return new WaitForSeconds(ShootingSlowness);
		
		beingHandled = false;
 
    }
	
	//private  IEnumerator  Shooting_01()
 //   {

 //       beingHandled = true;
		
	//	//GameObject cardridge01;
	//		if (SpawnPositionCar) cardridge01 = (GameObject)Instantiate(Cardridge01, SpawnPositionCar.transform.position + SpawnPositionCar.transform.right, SpawnPositionCar.transform.rotation);
	//		else  cardridge01 = (GameObject)Instantiate(Cardridge01, SpawnPositionCar.transform.position + SpawnPositionCar.transform.forward, SpawnPositionCar.transform.rotation);        
 //       yield return new WaitForSeconds(ShootingSlowness);
		
	//	beingHandled = false;
 
 //   }
	
	void Update () {
		if (Input.GetKey (KeyCode.Mouse0) && !beingHandled) {
			StartCoroutine (Shooting ());
			
		}
		//if (Input.GetKey (KeyCode.Mouse1) && !beingHandled) {
		//	StartCoroutine (Shooting_01 ());

		//}

	}
    private void OnCollisionEnter(Collision collision)
    {
        Destroy(this.gameObject,1);
    }
    //한번 누르면 5개의 파티클이 나오고 

    //땅에 떨어지고 서서히 사라진다
}

