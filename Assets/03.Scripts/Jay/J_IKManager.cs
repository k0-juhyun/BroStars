using System.Collections;
using System.Collections.Generic;
using UnityEngine;

//손을 ik로 제어하고싶ㄷ
public class J_IKManager : MonoBehaviour
{
    Animator anim;
    public Transform leftHand;
    public Transform rightHand;
    public Transform lookTarget;
    // Start is called before the first frame update
    void Start()
    {
        anim = GetComponent<Animator>();
    }

    // Update is called once per frame
    private void OnAnimatorIK(int layerIndex)
    {
        MysetIK(AvatarIKGoal.LeftHand, leftHand);
        MysetIK(AvatarIKGoal.RightHand, rightHand);

    }

    void MysetIK(AvatarIKGoal goal, Transform target)
    {
        anim.SetIKPositionWeight(goal, 1);
        anim.SetIKRotationWeight(goal, 1);
        anim.SetIKPosition(goal, target.position);
        anim.SetIKRotation(goal, target.rotation);
    }
}
