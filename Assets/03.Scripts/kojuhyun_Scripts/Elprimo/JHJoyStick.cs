using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UIElements;
using Photon.Pun;
using JetBrains.Annotations;

public class JHJoyStick : Joystick
{
    public float MoveThreshold { get { return moveThreshold; } set { moveThreshold = Mathf.Abs(value); } }

    [SerializeField] private float moveThreshold = 1;

    protected override void Start()
    {
        MoveThreshold = moveThreshold;
        base.Start();
        background.gameObject.SetActive(true);
    }

    public override void OnPointerDown(PointerEventData eventData)
    {
        if (photonView.IsMine == false)
            return;
        background.anchoredPosition = ScreenPointToAnchoredPosition(eventData.position);
        background.gameObject.SetActive(true);
        base.OnPointerDown(eventData);

    }

    public override void OnPointerUp(PointerEventData eventData)
    {
        if (photonView.IsMine == false)
            return;
        NitaAttackHandler nitaAttackHandler = GetComponentInParent<NitaAttackHandler>();
        ElprimoAttackHandler elprimoAttackHandler = GetComponentInParent<ElprimoAttackHandler>();
        LeonAttackHandler leonAttackHandler = GetComponentInParent<LeonAttackHandler>();
        AnimatorHandler animHandler = GetComponentInParent<AnimatorHandler>();
        CamShakeHandler camShakeHandler = GetComponentInParent<CamShakeHandler>();  

        #region 엘프리모
        if (elprimoAttackHandler != null)
        {
            if (this.gameObject.name == "SkillJoyStick")
            {
                //elprimoAttackHandler.LaunchPlayer(Horizontal, Vertical);
                if(elprimoAttackHandler.isReverse)
                {
                    photonView.RPC("LaunchPlayerRPC", RpcTarget.All, -Horizontal, -Vertical);
                }
                else 
                {
                    photonView.RPC("LaunchPlayerRPC", RpcTarget.All, Horizontal, Vertical);
                }
                camShakeHandler.camShake = true;
            }
            else if (this.gameObject.name == "AttackJoyStick")
            {
                photonView.RPC(nameof(elprimoAttackHandler.ElprimoNormalAttack), RpcTarget.All);
                camShakeHandler.camShake = true;
            }
        }
        #endregion

        #region 니타
        if (nitaAttackHandler != null)
        {
            if (this.gameObject.name == "SkillJoyStick")
            {
                photonView.RPC("LaunchBearRPC", RpcTarget.All, Horizontal, Vertical);
                photonView.RPC(nameof(animHandler.playTargetAnimRpc), RpcTarget.All, "Normal");
                camShakeHandler.camShake = true;
            }
            else if (this.gameObject.name == "AttackJoyStick")
            {
                photonView.RPC(nameof(nitaAttackHandler.NitaNormalAttack), RpcTarget.All);
                camShakeHandler.camShake = true;
            }
        }
        #endregion

        #region 레온
        if (leonAttackHandler != null)
        {
            if (this.gameObject.name == "SkillJoyStick")
            {

            }
            else if (this.gameObject.name == "AttackJoyStick")
            {
                photonView.RPC(nameof(animHandler.playTargetAnimRpc), RpcTarget.All, "Normal");
                camShakeHandler.camShake = true;
            }
        }
        #endregion

        base.OnPointerUp(eventData);
    }

    protected override void HandleInput(float magnitude, Vector2 normalised, Vector2 radius, Camera cam)
    {
        if (magnitude > moveThreshold)
        {
            Vector2 difference = normalised * (magnitude - moveThreshold) * radius;
            background.anchoredPosition += difference;
        }
        base.HandleInput(magnitude, normalised, radius, cam);
    }
}
