using System.Collections;
using System.Collections.Generic;
using UnityEngine;

// 1. GameManager에서 나의 브롤러의 정보를 가져온다.
// 2. Resources/Prefabs/ 에서 나의 브롤러를 UI에 반영하고, 애니메이션을 적용한다. 
// 3. 팀의 승리 or 패배의 정보를 가져오고, 스타플레이어의 정보를 가져온다.
// 4. 내가 스타플레이어가 아니면 토큰의 보상을 20개를 주고, 
// 5. 내가 스타플레이어라면, 토큰의 보상을 40개를 주고, 스타플레이어 UI를 띄운다. 

public class PlayerScoreManager : MonoBehaviour
{
    // 1. GameManager에서 나의 브롤러의 정보를 가져온다.
    //int myBrawlerIdx = ProjectManager.instance.myBrawlerIndex;

    // 2. 팀의 승리 or 패배의 정보를 가져오고, 스타플레이어의 정보를 가져온다.

    // 3. Resources/Prefabs/ 에서 나의 브롤러를 UI에 반영하고, 애니메이션을 적용한다.
    //private GameObject playerResultBrawls;

    // Start is called before the first frame update
    void Start()
    {
        // Resources/Prefabs/PlayerResultBrawls -> Resources.Load() 브롤러 호출.
        //playerResultBrawls = Resources.Load<GameObject>("Prefabs/PlayerResultBrawls");

        //  나의 브롤러를 UI에 배치. POSITION  

        //  UI 배치 SCALE을 조정. 




    }


}
