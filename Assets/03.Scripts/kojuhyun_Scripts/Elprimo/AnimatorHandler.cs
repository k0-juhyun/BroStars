using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AnimatorHandler : MonoBehaviour
{
    Animator anim;

    private void Awake()
    {
        anim = GetComponent<Animator>();
    }

    public void playTargetAnim(string target)
    {
        anim.Play(target);
    }

    public void SetTriggerParameters(string target)
    {
        anim.SetTrigger(target);
    }
}
