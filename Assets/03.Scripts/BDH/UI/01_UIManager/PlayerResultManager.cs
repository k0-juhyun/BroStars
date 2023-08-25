using System.Collections;
using System.Collections.Generic;
using UnityEngine;

// 필요한 정보 : 구별된 팀의 정보, 스타 플레이어 브롤러의 정보

// 1. GameManager에서 구별된 팀의 정보를 가져온다.
// 2. 가져온 팀의 정보에서 승리한 팀 or 패배한 팀을 판별한다.
// 3. 승리한 팀에서 스타 플레이어 브롤러의 정보를 가져온다.
// 4. 승리한 팀 or 패배한 팀으로 UI에 Resources/Prefabs/brawls -> Resources.Load() 호출하여 브롤러를 배치한다. 
// 5. 승리한 팀 or 패배한 팀에 맞게 애니메이션을 적용한다. 
// 6. 승리한 팀에서 스타 플레이어 브롤러의 정보에 맞게 UI를 SetActive(true)를 한다. 

public class PlayerResultManager : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
