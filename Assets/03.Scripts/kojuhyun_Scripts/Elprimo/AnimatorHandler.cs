using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;

public class AnimatorHandler : MonoBehaviourPun
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

    [PunRPC]
    public void playTargetAnimRpc(string target)
    {
        anim.Play(target);
    }

    public void SetTriggerParameters(string target)
    {
        anim.SetTrigger(target);
    }
}
