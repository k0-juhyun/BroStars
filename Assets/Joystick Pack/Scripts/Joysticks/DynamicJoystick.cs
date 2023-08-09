using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;

public class DynamicJoystick : Joystick
{
    public float MoveThreshold { get { return moveThreshold; } set { moveThreshold = Mathf.Abs(value); } }

    [SerializeField] private float moveThreshold = 1;

    protected override void Start()
    {
        MoveThreshold = moveThreshold;
        base.Start();
        //background.gameObject.SetActive(false);
    }

    public override void OnPointerDown(PointerEventData eventData)
    {
        background.anchoredPosition = ScreenPointToAnchoredPosition(eventData.position);
        background.gameObject.SetActive(true);
        base.OnPointerDown(eventData);

    }

    // 손뗏을때 호출
    public override void OnPointerUp(PointerEventData eventData)
    {
        // AttackHandler 스크립트의 HandleUltimateAttack() 함수 호출
        AttackHandler attackHandler = FindObjectOfType<AttackHandler>();
        if (attackHandler != null && this.gameObject.name== "SkillJoyStick")
        {
            attackHandler.LaunchPlayer(Horizontal,Vertical);
        }

        // 조이스틱 배경 이미지를 비활성화
        background.gameObject.SetActive(false);

        // 부모 클래스의 OnPointerUp 함수를 호출
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