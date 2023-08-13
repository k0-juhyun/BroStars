using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UIElements;

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
        background.anchoredPosition = ScreenPointToAnchoredPosition(eventData.position);
        background.gameObject.SetActive(true);
        base.OnPointerDown(eventData);

    }

    public override void OnPointerUp(PointerEventData eventData)
    {
        NitaAttackHandler nitaAttackHandler = FindAnyObjectByType<NitaAttackHandler>();
        ElprimoAttackHandler elprimoAttackHandler = FindObjectOfType<ElprimoAttackHandler>();
        AnimatorHandler animHandler = FindObjectOfType<AnimatorHandler>();

        #region 엘프리모
        if (elprimoAttackHandler != null)
        {
            if (this.gameObject.name == "SkillJoyStick")
            {
                elprimoAttackHandler.LaunchPlayer(Horizontal, Vertical);
            }
            else if (this.gameObject.name == "AttackJoyStick")
            {
                animHandler.playTargetAnim("Normal");
            }
        }
        #endregion

        #region 니타
        if (nitaAttackHandler != null)
        {
            if (this.gameObject.name == "SkillJoyStick")
            {
                nitaAttackHandler.LaunchBear(Horizontal, Vertical);
            }
            else if (this.gameObject.name == "AttackJoyStick")
            {
                nitaAttackHandler.NitaNormalAttack();
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
