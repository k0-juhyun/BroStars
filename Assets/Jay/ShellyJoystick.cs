using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UIElements;

public class ShellyJoyStick : Joystick
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
        J_attackHandler attackHandler = FindObjectOfType<J_attackHandler>();
        J_AnimatorHandler animHandler = FindObjectOfType<J_AnimatorHandler>();

        if (attackHandler != null && this.gameObject.name == "SkillJoyStick")
        {
            //attackHandler.HandleNormalAttack(Horizontal, Vertical);
        }

        else if (attackHandler != null && this.gameObject.name == "AttackJoyStick")
        {
            animHandler.playTargetAnim("attack");
        }

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
