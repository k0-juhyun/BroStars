#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtualActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// UnityEngine.KeyCode[]
struct KeyCodeU5BU5D_tE5EF2F42327664A9138C613B265BEE8524672B85;
// UnityEngine.Quaternion[]
struct QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// UnityEngine.Transform[]
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// RootMotion.FinalIK.IKSolverVR/Arm[]
struct ArmU5BU5D_tB2AB52CA87A0FBE483C315B38902923AD839C545;
// RootMotion.FinalIK.IKSolverVR/Leg[]
struct LegU5BU5D_t5DCA5C047C4CE3C42CB52073FE5835E869F3F788;
// UnityEngine.Animation
struct Animation_t6593B06C39E3B139808B19F2C719C860F3F61040;
// UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354;
// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883;
// RootMotion.Demos.ApplicationQuit
struct ApplicationQuit_tC78E3850F7A7268A7F435C570021653808190F94;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// RootMotion.CameraController
struct CameraController_t1AE8F30FD3CB14582A1D7EC6F704EE3F49D69412;
// UnityEngine.CapsuleCollider
struct CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808;
// RootMotion.Demos.CharacterAnimationBase
struct CharacterAnimationBase_tF16F89D851897751BC15325508623E7909E14842;
// RootMotion.Demos.CharacterAnimationSimple
struct CharacterAnimationSimple_t0BFE1C39C7958BA5C23FC6CBF68A20923B0D9F5F;
// RootMotion.Demos.CharacterAnimationThirdPerson
struct CharacterAnimationThirdPerson_t9965E1812210AC6B234D6A8BDB9986834DDA3F41;
// RootMotion.Demos.CharacterBase
struct CharacterBase_t1CFFD41AEAD8C28D01AD4FFC61BCDAA2C5AB4053;
// UnityEngine.CharacterController
struct CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A;
// RootMotion.Demos.CharacterThirdPerson
struct CharacterThirdPerson_t701D066717AA31A81BCCB2B926375896F0F18CF9;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// RootMotion.FinalIK.IKSolverVR
struct IKSolverVR_tCD6C0842AEECB6BB4E524A21474E3964D8D188A8;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// UnityEngine.AI.NavMeshPath
struct NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7;
// RootMotion.Demos.Navigator
struct Navigator_t7D234A2CBEFB7989ACF84795A71863E7FD6C1A9A;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.PhysicMaterial
struct PhysicMaterial_t4ECED34E04BB2148333467208361A5FBFDCD7131;
// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// RootMotion.Demos.SimpleLocomotion
struct SimpleLocomotion_t5C40DF535664F3EF4CC54452166672EA480285BE;
// RootMotion.Demos.SlowMo
struct SlowMo_tE361B9C2C9C4F8B748E3F794573ACE9DE3D50B8E;
// System.String
struct String_t;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// RootMotion.Demos.UserControlAI
struct UserControlAI_tEC783229E47B26F8565D392EA1A4E163BA4B6263;
// RootMotion.Demos.UserControlThirdPerson
struct UserControlThirdPerson_t84D27C4D05AE0B01CDABC9C382DEDD23F3943690;
// RootMotion.FinalIK.VRIK
struct VRIK_t12C8A89E36AA18BC0C649FA253A29B7778C56CE3;
// RootMotion.Demos.VRIKCalibrationBasic
struct VRIKCalibrationBasic_tFB2EE185670DDB7DAFBAD4D909780F221584DA43;
// RootMotion.Demos.VRIKCalibrationController
struct VRIKCalibrationController_t3EC7F7D2C774EB170E9F20C23D73524FEFF44F2D;
// RootMotion.Demos.VRIKPlatform
struct VRIKPlatform_t0AF95625214FBE09521B15704340111286C357D0;
// RootMotion.Demos.VRIKPlatformController
struct VRIKPlatformController_t2E0A9EDA82EBDEE645BA07DAE6EE993155B11550;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForFixedUpdate
struct WaitForFixedUpdate_t86F5BC0B6A668AEF2903DE9ADB52062E457BD1B7;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// RootMotion.Demos.CharacterThirdPerson/<JumpSmooth>d__79
struct U3CJumpSmoothU3Ed__79_tCF9E3C5C31D617032A31A9EA49FE19CB325E4A54;
// RootMotion.FinalIK.IKSolver/UpdateDelegate
struct UpdateDelegate_t53E3B4F2E4ADBCE8A5E151106B1878025A6711FD;
// RootMotion.FinalIK.IKSolverVR/Arm
struct Arm_tBB9696204237D5FD5D679036101C50155CF19A30;
// RootMotion.FinalIK.IKSolverVR/Leg
struct Leg_t4E62EE18462FB53D1C02C4F047CB3EC911835FB4;
// RootMotion.FinalIK.IKSolverVR/Locomotion
struct Locomotion_t1D30AD1BCA96957127E084CA0A6A4E23C1B8047A;
// RootMotion.FinalIK.IKSolverVR/Spine
struct Spine_t4F5CCC4887D9107BD9BA474D5874B00345A0BF53;
// RootMotion.FinalIK.IKSolverVR/VirtualBone
struct VirtualBone_t226791D5399392F2D6B8F1BFCA8DA84BACE82F2E;
// RootMotion.FinalIK.VRIK/References
struct References_t2A4C7FEEFBC153C7E0BD6EDDB0FC99A2196C9024;
// RootMotion.FinalIK.VRIKCalibrator/CalibrationData
struct CalibrationData_t9B1C11436DB0406DCE42015BB786F5C9A565CEA1;
// RootMotion.FinalIK.VRIKCalibrator/Settings
struct Settings_t8E009A6EE69717B08B142E1F3BE3DB8879C5515C;
// RootMotion.FinalIK.VRIKCalibrator/CalibrationData/Target
struct Target_tB3ED9FDFBD48F3D9C29DE0639D58C732EEA05D12;

IL2CPP_EXTERN_C RuntimeClass* CalibrationData_t9B1C11436DB0406DCE42015BB786F5C9A565CEA1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PhysicMaterial_t4ECED34E04BB2148333467208361A5FBFDCD7131_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CJumpSmoothU3Ed__79_tCF9E3C5C31D617032A31A9EA49FE19CB325E4A54_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForFixedUpdate_t86F5BC0B6A668AEF2903DE9ADB52062E457BD1B7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral003EB8F2822CDEB8C25E644EE9630560020521CF;
IL2CPP_EXTERN_C String_t* _stringLiteral073636784DA1EA12164998BEE384713657E4BE14;
IL2CPP_EXTERN_C String_t* _stringLiteral12C8EEF5222891275708172356C3F0AA43B22848;
IL2CPP_EXTERN_C String_t* _stringLiteral16A70DC8C790D0EFD53AE03FF23CB99D8B7A53CA;
IL2CPP_EXTERN_C String_t* _stringLiteral2368176C6E8740752331563739901A2C48824210;
IL2CPP_EXTERN_C String_t* _stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A;
IL2CPP_EXTERN_C String_t* _stringLiteral288B53F014E2C53296CBC94785B0521CC621D509;
IL2CPP_EXTERN_C String_t* _stringLiteral5D2E3D85D1C3D4F42FAE33FB35C01C48241E0B32;
IL2CPP_EXTERN_C String_t* _stringLiteral61DD4870662EA7D424E2F4AF5A0FD5EED52B51D0;
IL2CPP_EXTERN_C String_t* _stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C;
IL2CPP_EXTERN_C String_t* _stringLiteral724F6EF07C0D3FFFD32A55027218B65FB4F377E1;
IL2CPP_EXTERN_C String_t* _stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E;
IL2CPP_EXTERN_C String_t* _stringLiteral9003F061BB5D0A7CB9A3E354B72E421259472991;
IL2CPP_EXTERN_C String_t* _stringLiteral9DF28E2C80756BFACBF3215EA21F094B08573DA8;
IL2CPP_EXTERN_C String_t* _stringLiteralAA193CA062BC352B9697665F9774B74E3B83C961;
IL2CPP_EXTERN_C String_t* _stringLiteralAF3557B7DCEAF31B985FE1BDD394873B897B4521;
IL2CPP_EXTERN_C String_t* _stringLiteralD07564F70E250E1B2184D654ACE4DECC7C3AE068;
IL2CPP_EXTERN_C String_t* _stringLiteralD4D0CBDD4C2A6529BD6BC6738495CB8EA49A2AAB;
IL2CPP_EXTERN_C String_t* _stringLiteralDCF8DA923A023D58A2CD07CBD3EBDE07DC2FC267;
IL2CPP_EXTERN_C String_t* _stringLiteralE021D410603DF53B6A7B74FAF5DD4A5EC4A06BBD;
IL2CPP_EXTERN_C String_t* _stringLiteralEADE91E573B3BBA4B0C2F14237A82BADF354A2D6;
IL2CPP_EXTERN_C String_t* _stringLiteralF01072AE30B2F09CAD786A2408FE56B89E6E99F6;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInChildren_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mDB9FC26B94B8EE9CF1F88BFEC75DF06CC2E3A000_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCharacterBase_t1CFFD41AEAD8C28D01AD4FFC61BCDAA2C5AB4053_m787C142821A302991630E934540F5AE344415DAB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A_m96B48A644EDC97C5C82F154D1FEA551B2E392040_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m820398EDBF1D3766C3166A0C323A127662A29A14_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CJumpSmoothU3Ed__79_System_Collections_IEnumerator_Reset_mB8F6DB5329FFF8A4C53A17902048C78473F5E9D2_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2;

struct KeyCodeU5BU5D_tE5EF2F42327664A9138C613B265BEE8524672B85;
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_tDF76FE2002958A97429065AC028E0A0C70442121  : public RuntimeObject
{
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// UnityEngine.AnimatorStateInfo
struct AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 
{
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Name
	int32_t ___m_Name_0;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Path
	int32_t ___m_Path_1;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_FullPath
	int32_t ___m_FullPath_2;
	// System.Single UnityEngine.AnimatorStateInfo::m_NormalizedTime
	float ___m_NormalizedTime_3;
	// System.Single UnityEngine.AnimatorStateInfo::m_Length
	float ___m_Length_4;
	// System.Single UnityEngine.AnimatorStateInfo::m_Speed
	float ___m_Speed_5;
	// System.Single UnityEngine.AnimatorStateInfo::m_SpeedMultiplier
	float ___m_SpeedMultiplier_6;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Tag
	int32_t ___m_Tag_7;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Loop
	int32_t ___m_Loop_8;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

// UnityEngine.LayerMask
struct LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB 
{
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;
};

// UnityEngine.Mathf
struct Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682 
{
	union
	{
		struct
		{
		};
		uint8_t Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682__padding[1];
	};
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// UnityEngine.WaitForFixedUpdate
struct WaitForFixedUpdate_t86F5BC0B6A668AEF2903DE9ADB52062E457BD1B7  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16
struct __StaticArrayInitTypeSizeU3D16_t68EE8386E456CD4C7C65DA7A48BD79DB18F6A764 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D16_t68EE8386E456CD4C7C65DA7A48BD79DB18F6A764__padding[16];
	};
};

// UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354  : public RuntimeObject
{
	// System.IntPtr UnityEngine.AnimationCurve::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.Bounds
struct Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 
{
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Extents_1;
};

// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// RootMotion.FinalIK.IKSolver
struct IKSolver_t729035AE8516952F6D1164103EC9CE467A73C623  : public RuntimeObject
{
	// System.Boolean RootMotion.FinalIK.IKSolver::executedInEditor
	bool ___executedInEditor_0;
	// UnityEngine.Vector3 RootMotion.FinalIK.IKSolver::IKPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___IKPosition_1;
	// System.Single RootMotion.FinalIK.IKSolver::IKPositionWeight
	float ___IKPositionWeight_2;
	// System.Boolean RootMotion.FinalIK.IKSolver::<initiated>k__BackingField
	bool ___U3CinitiatedU3Ek__BackingField_3;
	// RootMotion.FinalIK.IKSolver/UpdateDelegate RootMotion.FinalIK.IKSolver::OnPreInitiate
	UpdateDelegate_t53E3B4F2E4ADBCE8A5E151106B1878025A6711FD* ___OnPreInitiate_4;
	// RootMotion.FinalIK.IKSolver/UpdateDelegate RootMotion.FinalIK.IKSolver::OnPostInitiate
	UpdateDelegate_t53E3B4F2E4ADBCE8A5E151106B1878025A6711FD* ___OnPostInitiate_5;
	// RootMotion.FinalIK.IKSolver/UpdateDelegate RootMotion.FinalIK.IKSolver::OnPreUpdate
	UpdateDelegate_t53E3B4F2E4ADBCE8A5E151106B1878025A6711FD* ___OnPreUpdate_6;
	// RootMotion.FinalIK.IKSolver/UpdateDelegate RootMotion.FinalIK.IKSolver::OnPostUpdate
	UpdateDelegate_t53E3B4F2E4ADBCE8A5E151106B1878025A6711FD* ___OnPostUpdate_7;
	// System.Boolean RootMotion.FinalIK.IKSolver::firstInitiation
	bool ___firstInitiation_8;
	// UnityEngine.Transform RootMotion.FinalIK.IKSolver::root
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___root_9;
};

// UnityEngine.KeyCode
struct KeyCode_t75B9ECCC26D858F55040DDFF9523681E996D17E9 
{
	// System.Int32 UnityEngine.KeyCode::value__
	int32_t ___value___2;
};

// UnityEngine.AI.NavMeshHit
struct NavMeshHit_t6323FC1F2D00E24FBFFC3E27C2F349A3BAD16F8B 
{
	// UnityEngine.Vector3 UnityEngine.AI.NavMeshHit::m_Position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Position_0;
	// UnityEngine.Vector3 UnityEngine.AI.NavMeshHit::m_Normal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal_1;
	// System.Single UnityEngine.AI.NavMeshHit::m_Distance
	float ___m_Distance_2;
	// System.Int32 UnityEngine.AI.NavMeshHit::m_Mask
	int32_t ___m_Mask_3;
	// System.Int32 UnityEngine.AI.NavMeshHit::m_Hit
	int32_t ___m_Hit_4;
};

// UnityEngine.AI.NavMeshPath
struct NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7  : public RuntimeObject
{
	// System.IntPtr UnityEngine.AI.NavMeshPath::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.Vector3[] UnityEngine.AI.NavMeshPath::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.AI.NavMeshPath
struct NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___m_Corners_1;
};
// Native definition for COM marshalling of UnityEngine.AI.NavMeshPath
struct NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___m_Corners_1;
};

// RootMotion.Demos.Navigator
struct Navigator_t7D234A2CBEFB7989ACF84795A71863E7FD6C1A9A  : public RuntimeObject
{
	// System.Boolean RootMotion.Demos.Navigator::activeTargetSeeking
	bool ___activeTargetSeeking_0;
	// System.Single RootMotion.Demos.Navigator::cornerRadius
	float ___cornerRadius_1;
	// System.Single RootMotion.Demos.Navigator::recalculateOnPathDistance
	float ___recalculateOnPathDistance_2;
	// System.Single RootMotion.Demos.Navigator::maxSampleDistance
	float ___maxSampleDistance_3;
	// System.Single RootMotion.Demos.Navigator::nextPathInterval
	float ___nextPathInterval_4;
	// UnityEngine.Vector3 RootMotion.Demos.Navigator::<normalizedDeltaPosition>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CnormalizedDeltaPositionU3Ek__BackingField_5;
	// RootMotion.Demos.Navigator/State RootMotion.Demos.Navigator::<state>k__BackingField
	int32_t ___U3CstateU3Ek__BackingField_6;
	// UnityEngine.Transform RootMotion.Demos.Navigator::transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___transform_7;
	// System.Int32 RootMotion.Demos.Navigator::cornerIndex
	int32_t ___cornerIndex_8;
	// UnityEngine.Vector3[] RootMotion.Demos.Navigator::corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___corners_9;
	// UnityEngine.AI.NavMeshPath RootMotion.Demos.Navigator::path
	NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7* ___path_10;
	// UnityEngine.Vector3 RootMotion.Demos.Navigator::lastTargetPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lastTargetPosition_11;
	// System.Boolean RootMotion.Demos.Navigator::initiated
	bool ___initiated_12;
	// System.Single RootMotion.Demos.Navigator::nextPathTime
	float ___nextPathTime_13;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Ray
struct Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 
{
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Direction_1;
};

// UnityEngine.RaycastHit
struct RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 
{
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal_1;
	// System.UInt32 UnityEngine.RaycastHit::m_FaceID
	uint32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_UV_4;
	// System.Int32 UnityEngine.RaycastHit::m_Collider
	int32_t ___m_Collider_5;
};

// RootMotion.Demos.CharacterThirdPerson/<JumpSmooth>d__79
struct U3CJumpSmoothU3Ed__79_tCF9E3C5C31D617032A31A9EA49FE19CB325E4A54  : public RuntimeObject
{
	// System.Int32 RootMotion.Demos.CharacterThirdPerson/<JumpSmooth>d__79::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object RootMotion.Demos.CharacterThirdPerson/<JumpSmooth>d__79::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// RootMotion.Demos.CharacterThirdPerson RootMotion.Demos.CharacterThirdPerson/<JumpSmooth>d__79::<>4__this
	CharacterThirdPerson_t701D066717AA31A81BCCB2B926375896F0F18CF9* ___U3CU3E4__this_2;
	// UnityEngine.Vector3 RootMotion.Demos.CharacterThirdPerson/<JumpSmooth>d__79::jumpVelocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___jumpVelocity_3;
	// System.Int32 RootMotion.Demos.CharacterThirdPerson/<JumpSmooth>d__79::<steps>5__2
	int32_t ___U3CstepsU3E5__2_4;
	// System.Int32 RootMotion.Demos.CharacterThirdPerson/<JumpSmooth>d__79::<stepsToTake>5__3
	int32_t ___U3CstepsToTakeU3E5__3_5;
};

// RootMotion.Demos.CharacterThirdPerson/AnimState
struct AnimState_t217CB34525B21DC85A816E042E22EA0CD4D6F91D 
{
	// UnityEngine.Vector3 RootMotion.Demos.CharacterThirdPerson/AnimState::moveDirection
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___moveDirection_0;
	// System.Boolean RootMotion.Demos.CharacterThirdPerson/AnimState::jump
	bool ___jump_1;
	// System.Boolean RootMotion.Demos.CharacterThirdPerson/AnimState::crouch
	bool ___crouch_2;
	// System.Boolean RootMotion.Demos.CharacterThirdPerson/AnimState::onGround
	bool ___onGround_3;
	// System.Boolean RootMotion.Demos.CharacterThirdPerson/AnimState::isStrafing
	bool ___isStrafing_4;
	// System.Single RootMotion.Demos.CharacterThirdPerson/AnimState::yVelocity
	float ___yVelocity_5;
	// System.Boolean RootMotion.Demos.CharacterThirdPerson/AnimState::doubleJump
	bool ___doubleJump_6;
};
// Native definition for P/Invoke marshalling of RootMotion.Demos.CharacterThirdPerson/AnimState
struct AnimState_t217CB34525B21DC85A816E042E22EA0CD4D6F91D_marshaled_pinvoke
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___moveDirection_0;
	int32_t ___jump_1;
	int32_t ___crouch_2;
	int32_t ___onGround_3;
	int32_t ___isStrafing_4;
	float ___yVelocity_5;
	int32_t ___doubleJump_6;
};
// Native definition for COM marshalling of RootMotion.Demos.CharacterThirdPerson/AnimState
struct AnimState_t217CB34525B21DC85A816E042E22EA0CD4D6F91D_marshaled_com
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___moveDirection_0;
	int32_t ___jump_1;
	int32_t ___crouch_2;
	int32_t ___onGround_3;
	int32_t ___isStrafing_4;
	float ___yVelocity_5;
	int32_t ___doubleJump_6;
};

// RootMotion.Demos.UserControlThirdPerson/State
struct State_t1C2106417C1C59FC418E1C9F846E928466513D3C 
{
	// UnityEngine.Vector3 RootMotion.Demos.UserControlThirdPerson/State::move
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___move_0;
	// UnityEngine.Vector3 RootMotion.Demos.UserControlThirdPerson/State::lookPos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lookPos_1;
	// System.Boolean RootMotion.Demos.UserControlThirdPerson/State::crouch
	bool ___crouch_2;
	// System.Boolean RootMotion.Demos.UserControlThirdPerson/State::jump
	bool ___jump_3;
	// System.Int32 RootMotion.Demos.UserControlThirdPerson/State::actionIndex
	int32_t ___actionIndex_4;
};
// Native definition for P/Invoke marshalling of RootMotion.Demos.UserControlThirdPerson/State
struct State_t1C2106417C1C59FC418E1C9F846E928466513D3C_marshaled_pinvoke
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___move_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lookPos_1;
	int32_t ___crouch_2;
	int32_t ___jump_3;
	int32_t ___actionIndex_4;
};
// Native definition for COM marshalling of RootMotion.Demos.UserControlThirdPerson/State
struct State_t1C2106417C1C59FC418E1C9F846E928466513D3C_marshaled_com
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___move_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lookPos_1;
	int32_t ___crouch_2;
	int32_t ___jump_3;
	int32_t ___actionIndex_4;
};

// RootMotion.FinalIK.VRIKCalibrator/CalibrationData
struct CalibrationData_t9B1C11436DB0406DCE42015BB786F5C9A565CEA1  : public RuntimeObject
{
	// System.Single RootMotion.FinalIK.VRIKCalibrator/CalibrationData::scale
	float ___scale_0;
	// RootMotion.FinalIK.VRIKCalibrator/CalibrationData/Target RootMotion.FinalIK.VRIKCalibrator/CalibrationData::head
	Target_tB3ED9FDFBD48F3D9C29DE0639D58C732EEA05D12* ___head_1;
	// RootMotion.FinalIK.VRIKCalibrator/CalibrationData/Target RootMotion.FinalIK.VRIKCalibrator/CalibrationData::leftHand
	Target_tB3ED9FDFBD48F3D9C29DE0639D58C732EEA05D12* ___leftHand_2;
	// RootMotion.FinalIK.VRIKCalibrator/CalibrationData/Target RootMotion.FinalIK.VRIKCalibrator/CalibrationData::rightHand
	Target_tB3ED9FDFBD48F3D9C29DE0639D58C732EEA05D12* ___rightHand_3;
	// RootMotion.FinalIK.VRIKCalibrator/CalibrationData/Target RootMotion.FinalIK.VRIKCalibrator/CalibrationData::pelvis
	Target_tB3ED9FDFBD48F3D9C29DE0639D58C732EEA05D12* ___pelvis_4;
	// RootMotion.FinalIK.VRIKCalibrator/CalibrationData/Target RootMotion.FinalIK.VRIKCalibrator/CalibrationData::leftFoot
	Target_tB3ED9FDFBD48F3D9C29DE0639D58C732EEA05D12* ___leftFoot_5;
	// RootMotion.FinalIK.VRIKCalibrator/CalibrationData/Target RootMotion.FinalIK.VRIKCalibrator/CalibrationData::rightFoot
	Target_tB3ED9FDFBD48F3D9C29DE0639D58C732EEA05D12* ___rightFoot_6;
	// RootMotion.FinalIK.VRIKCalibrator/CalibrationData/Target RootMotion.FinalIK.VRIKCalibrator/CalibrationData::leftLegGoal
	Target_tB3ED9FDFBD48F3D9C29DE0639D58C732EEA05D12* ___leftLegGoal_7;
	// RootMotion.FinalIK.VRIKCalibrator/CalibrationData/Target RootMotion.FinalIK.VRIKCalibrator/CalibrationData::rightLegGoal
	Target_tB3ED9FDFBD48F3D9C29DE0639D58C732EEA05D12* ___rightLegGoal_8;
	// UnityEngine.Vector3 RootMotion.FinalIK.VRIKCalibrator/CalibrationData::pelvisTargetRight
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pelvisTargetRight_9;
	// System.Single RootMotion.FinalIK.VRIKCalibrator/CalibrationData::pelvisPositionWeight
	float ___pelvisPositionWeight_10;
	// System.Single RootMotion.FinalIK.VRIKCalibrator/CalibrationData::pelvisRotationWeight
	float ___pelvisRotationWeight_11;
};

// RootMotion.FinalIK.VRIKCalibrator/Settings
struct Settings_t8E009A6EE69717B08B142E1F3BE3DB8879C5515C  : public RuntimeObject
{
	// System.Single RootMotion.FinalIK.VRIKCalibrator/Settings::scaleMlp
	float ___scaleMlp_0;
	// UnityEngine.Vector3 RootMotion.FinalIK.VRIKCalibrator/Settings::headTrackerForward
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___headTrackerForward_1;
	// UnityEngine.Vector3 RootMotion.FinalIK.VRIKCalibrator/Settings::headTrackerUp
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___headTrackerUp_2;
	// UnityEngine.Vector3 RootMotion.FinalIK.VRIKCalibrator/Settings::handTrackerForward
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___handTrackerForward_3;
	// UnityEngine.Vector3 RootMotion.FinalIK.VRIKCalibrator/Settings::handTrackerUp
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___handTrackerUp_4;
	// UnityEngine.Vector3 RootMotion.FinalIK.VRIKCalibrator/Settings::footTrackerForward
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___footTrackerForward_5;
	// UnityEngine.Vector3 RootMotion.FinalIK.VRIKCalibrator/Settings::footTrackerUp
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___footTrackerUp_6;
	// UnityEngine.Vector3 RootMotion.FinalIK.VRIKCalibrator/Settings::headOffset
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___headOffset_7;
	// UnityEngine.Vector3 RootMotion.FinalIK.VRIKCalibrator/Settings::handOffset
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___handOffset_8;
	// System.Single RootMotion.FinalIK.VRIKCalibrator/Settings::footForwardOffset
	float ___footForwardOffset_9;
	// System.Single RootMotion.FinalIK.VRIKCalibrator/Settings::footInwardOffset
	float ___footInwardOffset_10;
	// System.Single RootMotion.FinalIK.VRIKCalibrator/Settings::footHeadingOffset
	float ___footHeadingOffset_11;
	// System.Single RootMotion.FinalIK.VRIKCalibrator/Settings::pelvisPositionWeight
	float ___pelvisPositionWeight_12;
	// System.Single RootMotion.FinalIK.VRIKCalibrator/Settings::pelvisRotationWeight
	float ___pelvisRotationWeight_13;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// RootMotion.FinalIK.IKSolverVR
struct IKSolverVR_tCD6C0842AEECB6BB4E524A21474E3964D8D188A8  : public IKSolver_t729035AE8516952F6D1164103EC9CE467A73C623
{
	// UnityEngine.Animator RootMotion.FinalIK.IKSolverVR::<animator>k__BackingField
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___U3CanimatorU3Ek__BackingField_10;
	// UnityEngine.Transform[] RootMotion.FinalIK.IKSolverVR::solverTransforms
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* ___solverTransforms_11;
	// System.Boolean RootMotion.FinalIK.IKSolverVR::hasChest
	bool ___hasChest_12;
	// System.Boolean RootMotion.FinalIK.IKSolverVR::hasNeck
	bool ___hasNeck_13;
	// System.Boolean RootMotion.FinalIK.IKSolverVR::hasShoulders
	bool ___hasShoulders_14;
	// System.Boolean RootMotion.FinalIK.IKSolverVR::hasToes
	bool ___hasToes_15;
	// System.Boolean RootMotion.FinalIK.IKSolverVR::hasLegs
	bool ___hasLegs_16;
	// System.Boolean RootMotion.FinalIK.IKSolverVR::hasArms
	bool ___hasArms_17;
	// UnityEngine.Vector3[] RootMotion.FinalIK.IKSolverVR::readPositions
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___readPositions_18;
	// UnityEngine.Quaternion[] RootMotion.FinalIK.IKSolverVR::readRotations
	QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* ___readRotations_19;
	// UnityEngine.Vector3[] RootMotion.FinalIK.IKSolverVR::solvedPositions
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___solvedPositions_20;
	// UnityEngine.Quaternion[] RootMotion.FinalIK.IKSolverVR::solvedRotations
	QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* ___solvedRotations_21;
	// UnityEngine.Quaternion[] RootMotion.FinalIK.IKSolverVR::defaultLocalRotations
	QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* ___defaultLocalRotations_22;
	// UnityEngine.Vector3[] RootMotion.FinalIK.IKSolverVR::defaultLocalPositions
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___defaultLocalPositions_23;
	// UnityEngine.Vector3 RootMotion.FinalIK.IKSolverVR::rootV
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rootV_24;
	// UnityEngine.Vector3 RootMotion.FinalIK.IKSolverVR::rootVelocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rootVelocity_25;
	// UnityEngine.Vector3 RootMotion.FinalIK.IKSolverVR::bodyOffset
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___bodyOffset_26;
	// System.Int32 RootMotion.FinalIK.IKSolverVR::supportLegIndex
	int32_t ___supportLegIndex_27;
	// System.Int32 RootMotion.FinalIK.IKSolverVR::lastLOD
	int32_t ___lastLOD_28;
	// System.Single RootMotion.FinalIK.IKSolverVR::lastLocomotionWeight
	float ___lastLocomotionWeight_29;
	// System.Int32 RootMotion.FinalIK.IKSolverVR::LOD
	int32_t ___LOD_30;
	// System.Single RootMotion.FinalIK.IKSolverVR::scale
	float ___scale_31;
	// System.Boolean RootMotion.FinalIK.IKSolverVR::plantFeet
	bool ___plantFeet_32;
	// RootMotion.FinalIK.IKSolverVR/VirtualBone RootMotion.FinalIK.IKSolverVR::<rootBone>k__BackingField
	VirtualBone_t226791D5399392F2D6B8F1BFCA8DA84BACE82F2E* ___U3CrootBoneU3Ek__BackingField_33;
	// RootMotion.FinalIK.IKSolverVR/Spine RootMotion.FinalIK.IKSolverVR::spine
	Spine_t4F5CCC4887D9107BD9BA474D5874B00345A0BF53* ___spine_34;
	// RootMotion.FinalIK.IKSolverVR/Arm RootMotion.FinalIK.IKSolverVR::leftArm
	Arm_tBB9696204237D5FD5D679036101C50155CF19A30* ___leftArm_35;
	// RootMotion.FinalIK.IKSolverVR/Arm RootMotion.FinalIK.IKSolverVR::rightArm
	Arm_tBB9696204237D5FD5D679036101C50155CF19A30* ___rightArm_36;
	// RootMotion.FinalIK.IKSolverVR/Leg RootMotion.FinalIK.IKSolverVR::leftLeg
	Leg_t4E62EE18462FB53D1C02C4F047CB3EC911835FB4* ___leftLeg_37;
	// RootMotion.FinalIK.IKSolverVR/Leg RootMotion.FinalIK.IKSolverVR::rightLeg
	Leg_t4E62EE18462FB53D1C02C4F047CB3EC911835FB4* ___rightLeg_38;
	// RootMotion.FinalIK.IKSolverVR/Locomotion RootMotion.FinalIK.IKSolverVR::locomotion
	Locomotion_t1D30AD1BCA96957127E084CA0A6A4E23C1B8047A* ___locomotion_39;
	// RootMotion.FinalIK.IKSolverVR/Leg[] RootMotion.FinalIK.IKSolverVR::legs
	LegU5BU5D_t5DCA5C047C4CE3C42CB52073FE5835E869F3F788* ___legs_40;
	// RootMotion.FinalIK.IKSolverVR/Arm[] RootMotion.FinalIK.IKSolverVR::arms
	ArmU5BU5D_tB2AB52CA87A0FBE483C315B38902923AD839C545* ___arms_41;
	// UnityEngine.Vector3 RootMotion.FinalIK.IKSolverVR::headPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___headPosition_42;
	// UnityEngine.Vector3 RootMotion.FinalIK.IKSolverVR::headDeltaPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___headDeltaPosition_43;
	// UnityEngine.Vector3 RootMotion.FinalIK.IKSolverVR::raycastOriginPelvis
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___raycastOriginPelvis_44;
	// UnityEngine.Vector3 RootMotion.FinalIK.IKSolverVR::lastOffset
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lastOffset_45;
	// UnityEngine.Vector3 RootMotion.FinalIK.IKSolverVR::debugPos1
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___debugPos1_46;
	// UnityEngine.Vector3 RootMotion.FinalIK.IKSolverVR::debugPos2
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___debugPos2_47;
	// UnityEngine.Vector3 RootMotion.FinalIK.IKSolverVR::debugPos3
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___debugPos3_48;
	// UnityEngine.Vector3 RootMotion.FinalIK.IKSolverVR::debugPos4
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___debugPos4_49;
};

// UnityEngine.PhysicMaterial
struct PhysicMaterial_t4ECED34E04BB2148333467208361A5FBFDCD7131  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.CapsuleCollider
struct CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808  : public Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76
{
};

// UnityEngine.CharacterController
struct CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A  : public Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// RootMotion.Demos.ApplicationQuit
struct ApplicationQuit_tC78E3850F7A7268A7F435C570021653808190F94  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// RootMotion.CameraController
struct CameraController_t1AE8F30FD3CB14582A1D7EC6F704EE3F49D69412  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform RootMotion.CameraController::target
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___target_4;
	// UnityEngine.Transform RootMotion.CameraController::rotationSpace
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___rotationSpace_5;
	// RootMotion.CameraController/UpdateMode RootMotion.CameraController::updateMode
	int32_t ___updateMode_6;
	// System.Boolean RootMotion.CameraController::lockCursor
	bool ___lockCursor_7;
	// System.Boolean RootMotion.CameraController::smoothFollow
	bool ___smoothFollow_8;
	// UnityEngine.Vector3 RootMotion.CameraController::offset
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___offset_9;
	// System.Single RootMotion.CameraController::followSpeed
	float ___followSpeed_10;
	// System.Single RootMotion.CameraController::rotationSensitivity
	float ___rotationSensitivity_11;
	// System.Single RootMotion.CameraController::yMinLimit
	float ___yMinLimit_12;
	// System.Single RootMotion.CameraController::yMaxLimit
	float ___yMaxLimit_13;
	// System.Boolean RootMotion.CameraController::rotateAlways
	bool ___rotateAlways_14;
	// System.Boolean RootMotion.CameraController::rotateOnLeftButton
	bool ___rotateOnLeftButton_15;
	// System.Boolean RootMotion.CameraController::rotateOnRightButton
	bool ___rotateOnRightButton_16;
	// System.Boolean RootMotion.CameraController::rotateOnMiddleButton
	bool ___rotateOnMiddleButton_17;
	// System.Single RootMotion.CameraController::distance
	float ___distance_18;
	// System.Single RootMotion.CameraController::minDistance
	float ___minDistance_19;
	// System.Single RootMotion.CameraController::maxDistance
	float ___maxDistance_20;
	// System.Single RootMotion.CameraController::zoomSpeed
	float ___zoomSpeed_21;
	// System.Single RootMotion.CameraController::zoomSensitivity
	float ___zoomSensitivity_22;
	// UnityEngine.LayerMask RootMotion.CameraController::blockingLayers
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___blockingLayers_23;
	// System.Single RootMotion.CameraController::blockingRadius
	float ___blockingRadius_24;
	// System.Single RootMotion.CameraController::blockingSmoothTime
	float ___blockingSmoothTime_25;
	// System.Single RootMotion.CameraController::blockingOriginOffset
	float ___blockingOriginOffset_26;
	// System.Single RootMotion.CameraController::blockedOffset
	float ___blockedOffset_27;
	// System.Single RootMotion.CameraController::<x>k__BackingField
	float ___U3CxU3Ek__BackingField_28;
	// System.Single RootMotion.CameraController::<y>k__BackingField
	float ___U3CyU3Ek__BackingField_29;
	// System.Single RootMotion.CameraController::<distanceTarget>k__BackingField
	float ___U3CdistanceTargetU3Ek__BackingField_30;
	// UnityEngine.Vector3 RootMotion.CameraController::targetDistance
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___targetDistance_31;
	// UnityEngine.Vector3 RootMotion.CameraController::position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_32;
	// UnityEngine.Quaternion RootMotion.CameraController::rotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation_33;
	// UnityEngine.Vector3 RootMotion.CameraController::smoothPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___smoothPosition_34;
	// UnityEngine.Camera RootMotion.CameraController::cam
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___cam_35;
	// System.Boolean RootMotion.CameraController::fixedFrame
	bool ___fixedFrame_36;
	// System.Single RootMotion.CameraController::fixedDeltaTime
	float ___fixedDeltaTime_37;
	// UnityEngine.Quaternion RootMotion.CameraController::r
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___r_38;
	// UnityEngine.Vector3 RootMotion.CameraController::lastUp
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lastUp_39;
	// System.Single RootMotion.CameraController::blockedDistance
	float ___blockedDistance_40;
	// System.Single RootMotion.CameraController::blockedDistanceV
	float ___blockedDistanceV_41;
};

// RootMotion.Demos.CharacterAnimationBase
struct CharacterAnimationBase_tF16F89D851897751BC15325508623E7909E14842  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean RootMotion.Demos.CharacterAnimationBase::smoothFollow
	bool ___smoothFollow_4;
	// System.Single RootMotion.Demos.CharacterAnimationBase::smoothFollowSpeed
	float ___smoothFollowSpeed_5;
	// System.Boolean RootMotion.Demos.CharacterAnimationBase::animatePhysics
	bool ___animatePhysics_6;
	// UnityEngine.Vector3 RootMotion.Demos.CharacterAnimationBase::lastPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lastPosition_7;
	// UnityEngine.Vector3 RootMotion.Demos.CharacterAnimationBase::localPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___localPosition_8;
	// UnityEngine.Quaternion RootMotion.Demos.CharacterAnimationBase::localRotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___localRotation_9;
	// UnityEngine.Quaternion RootMotion.Demos.CharacterAnimationBase::lastRotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___lastRotation_10;
};

// RootMotion.Demos.CharacterBase
struct CharacterBase_t1CFFD41AEAD8C28D01AD4FFC61BCDAA2C5AB4053  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform RootMotion.Demos.CharacterBase::gravityTarget
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___gravityTarget_4;
	// System.Single RootMotion.Demos.CharacterBase::gravityMultiplier
	float ___gravityMultiplier_5;
	// System.Single RootMotion.Demos.CharacterBase::airborneThreshold
	float ___airborneThreshold_6;
	// System.Single RootMotion.Demos.CharacterBase::slopeStartAngle
	float ___slopeStartAngle_7;
	// System.Single RootMotion.Demos.CharacterBase::slopeEndAngle
	float ___slopeEndAngle_8;
	// System.Single RootMotion.Demos.CharacterBase::spherecastRadius
	float ___spherecastRadius_9;
	// UnityEngine.LayerMask RootMotion.Demos.CharacterBase::groundLayers
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___groundLayers_10;
	// UnityEngine.PhysicMaterial RootMotion.Demos.CharacterBase::zeroFrictionMaterial
	PhysicMaterial_t4ECED34E04BB2148333467208361A5FBFDCD7131* ___zeroFrictionMaterial_11;
	// UnityEngine.PhysicMaterial RootMotion.Demos.CharacterBase::highFrictionMaterial
	PhysicMaterial_t4ECED34E04BB2148333467208361A5FBFDCD7131* ___highFrictionMaterial_12;
	// UnityEngine.Rigidbody RootMotion.Demos.CharacterBase::r
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___r_13;
	// System.Single RootMotion.Demos.CharacterBase::originalHeight
	float ___originalHeight_15;
	// UnityEngine.Vector3 RootMotion.Demos.CharacterBase::originalCenter
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___originalCenter_16;
	// UnityEngine.CapsuleCollider RootMotion.Demos.CharacterBase::capsule
	CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* ___capsule_17;
};

// RootMotion.Demos.SimpleLocomotion
struct SimpleLocomotion_t5C40DF535664F3EF4CC54452166672EA480285BE  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// RootMotion.CameraController RootMotion.Demos.SimpleLocomotion::cameraController
	CameraController_t1AE8F30FD3CB14582A1D7EC6F704EE3F49D69412* ___cameraController_4;
	// System.Single RootMotion.Demos.SimpleLocomotion::accelerationTime
	float ___accelerationTime_5;
	// System.Single RootMotion.Demos.SimpleLocomotion::turnTime
	float ___turnTime_6;
	// System.Boolean RootMotion.Demos.SimpleLocomotion::walkByDefault
	bool ___walkByDefault_7;
	// RootMotion.Demos.SimpleLocomotion/RotationMode RootMotion.Demos.SimpleLocomotion::rotationMode
	int32_t ___rotationMode_8;
	// System.Single RootMotion.Demos.SimpleLocomotion::moveSpeed
	float ___moveSpeed_9;
	// System.Boolean RootMotion.Demos.SimpleLocomotion::<isGrounded>k__BackingField
	bool ___U3CisGroundedU3Ek__BackingField_10;
	// UnityEngine.Animator RootMotion.Demos.SimpleLocomotion::animator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___animator_11;
	// System.Single RootMotion.Demos.SimpleLocomotion::speed
	float ___speed_12;
	// System.Single RootMotion.Demos.SimpleLocomotion::angleVel
	float ___angleVel_13;
	// System.Single RootMotion.Demos.SimpleLocomotion::speedVel
	float ___speedVel_14;
	// UnityEngine.Vector3 RootMotion.Demos.SimpleLocomotion::linearTargetDirection
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___linearTargetDirection_15;
	// UnityEngine.CharacterController RootMotion.Demos.SimpleLocomotion::characterController
	CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* ___characterController_16;
};

// RootMotion.Demos.SlowMo
struct SlowMo_tE361B9C2C9C4F8B748E3F794573ACE9DE3D50B8E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.KeyCode[] RootMotion.Demos.SlowMo::keyCodes
	KeyCodeU5BU5D_tE5EF2F42327664A9138C613B265BEE8524672B85* ___keyCodes_4;
	// System.Boolean RootMotion.Demos.SlowMo::mouse0
	bool ___mouse0_5;
	// System.Boolean RootMotion.Demos.SlowMo::mouse1
	bool ___mouse1_6;
	// System.Single RootMotion.Demos.SlowMo::slowMoTimeScale
	float ___slowMoTimeScale_7;
};

// RootMotion.SolverManager
struct SolverManager_t622D4F561ECBEF2A4ACBA9452CB50B381C8ECAFD  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean RootMotion.SolverManager::fixTransforms
	bool ___fixTransforms_4;
	// UnityEngine.Animator RootMotion.SolverManager::animator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___animator_5;
	// UnityEngine.Animation RootMotion.SolverManager::legacy
	Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* ___legacy_6;
	// System.Boolean RootMotion.SolverManager::updateFrame
	bool ___updateFrame_7;
	// System.Boolean RootMotion.SolverManager::componentInitiated
	bool ___componentInitiated_8;
	// System.Boolean RootMotion.SolverManager::skipSolverUpdate
	bool ___skipSolverUpdate_9;
};

// RootMotion.Demos.UserControlThirdPerson
struct UserControlThirdPerson_t84D27C4D05AE0B01CDABC9C382DEDD23F3943690  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean RootMotion.Demos.UserControlThirdPerson::walkByDefault
	bool ___walkByDefault_4;
	// System.Boolean RootMotion.Demos.UserControlThirdPerson::canCrouch
	bool ___canCrouch_5;
	// System.Boolean RootMotion.Demos.UserControlThirdPerson::canJump
	bool ___canJump_6;
	// RootMotion.Demos.UserControlThirdPerson/State RootMotion.Demos.UserControlThirdPerson::state
	State_t1C2106417C1C59FC418E1C9F846E928466513D3C ___state_7;
	// UnityEngine.Transform RootMotion.Demos.UserControlThirdPerson::cam
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___cam_8;
};

// RootMotion.Demos.VRIKCalibrationBasic
struct VRIKCalibrationBasic_tFB2EE185670DDB7DAFBAD4D909780F221584DA43  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// RootMotion.FinalIK.VRIK RootMotion.Demos.VRIKCalibrationBasic::ik
	VRIK_t12C8A89E36AA18BC0C649FA253A29B7778C56CE3* ___ik_4;
	// UnityEngine.Transform RootMotion.Demos.VRIKCalibrationBasic::centerEyeAnchor
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___centerEyeAnchor_5;
	// UnityEngine.Vector3 RootMotion.Demos.VRIKCalibrationBasic::headAnchorPositionOffset
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___headAnchorPositionOffset_6;
	// UnityEngine.Vector3 RootMotion.Demos.VRIKCalibrationBasic::headAnchorRotationOffset
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___headAnchorRotationOffset_7;
	// UnityEngine.Transform RootMotion.Demos.VRIKCalibrationBasic::leftHandAnchor
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___leftHandAnchor_8;
	// UnityEngine.Transform RootMotion.Demos.VRIKCalibrationBasic::rightHandAnchor
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___rightHandAnchor_9;
	// UnityEngine.Vector3 RootMotion.Demos.VRIKCalibrationBasic::handAnchorPositionOffset
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___handAnchorPositionOffset_10;
	// UnityEngine.Vector3 RootMotion.Demos.VRIKCalibrationBasic::handAnchorRotationOffset
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___handAnchorRotationOffset_11;
	// System.Single RootMotion.Demos.VRIKCalibrationBasic::scaleMlp
	float ___scaleMlp_12;
	// RootMotion.FinalIK.VRIKCalibrator/CalibrationData RootMotion.Demos.VRIKCalibrationBasic::data
	CalibrationData_t9B1C11436DB0406DCE42015BB786F5C9A565CEA1* ___data_13;
};

// RootMotion.Demos.VRIKCalibrationController
struct VRIKCalibrationController_t3EC7F7D2C774EB170E9F20C23D73524FEFF44F2D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// RootMotion.FinalIK.VRIK RootMotion.Demos.VRIKCalibrationController::ik
	VRIK_t12C8A89E36AA18BC0C649FA253A29B7778C56CE3* ___ik_4;
	// RootMotion.FinalIK.VRIKCalibrator/Settings RootMotion.Demos.VRIKCalibrationController::settings
	Settings_t8E009A6EE69717B08B142E1F3BE3DB8879C5515C* ___settings_5;
	// UnityEngine.Transform RootMotion.Demos.VRIKCalibrationController::headTracker
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___headTracker_6;
	// UnityEngine.Transform RootMotion.Demos.VRIKCalibrationController::bodyTracker
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___bodyTracker_7;
	// UnityEngine.Transform RootMotion.Demos.VRIKCalibrationController::leftHandTracker
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___leftHandTracker_8;
	// UnityEngine.Transform RootMotion.Demos.VRIKCalibrationController::rightHandTracker
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___rightHandTracker_9;
	// UnityEngine.Transform RootMotion.Demos.VRIKCalibrationController::leftFootTracker
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___leftFootTracker_10;
	// UnityEngine.Transform RootMotion.Demos.VRIKCalibrationController::rightFootTracker
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___rightFootTracker_11;
	// RootMotion.FinalIK.VRIKCalibrator/CalibrationData RootMotion.Demos.VRIKCalibrationController::data
	CalibrationData_t9B1C11436DB0406DCE42015BB786F5C9A565CEA1* ___data_12;
};

// RootMotion.Demos.VRIKPlatform
struct VRIKPlatform_t0AF95625214FBE09521B15704340111286C357D0  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// RootMotion.FinalIK.VRIK RootMotion.Demos.VRIKPlatform::ik
	VRIK_t12C8A89E36AA18BC0C649FA253A29B7778C56CE3* ___ik_4;
	// UnityEngine.Vector3 RootMotion.Demos.VRIKPlatform::lastPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lastPosition_5;
	// UnityEngine.Quaternion RootMotion.Demos.VRIKPlatform::lastRotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___lastRotation_6;
};

// RootMotion.Demos.VRIKPlatformController
struct VRIKPlatformController_t2E0A9EDA82EBDEE645BA07DAE6EE993155B11550  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// RootMotion.FinalIK.VRIK RootMotion.Demos.VRIKPlatformController::ik
	VRIK_t12C8A89E36AA18BC0C649FA253A29B7778C56CE3* ___ik_4;
	// UnityEngine.Transform RootMotion.Demos.VRIKPlatformController::trackingSpace
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___trackingSpace_5;
	// UnityEngine.Transform RootMotion.Demos.VRIKPlatformController::platform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___platform_6;
	// System.Boolean RootMotion.Demos.VRIKPlatformController::moveToPlatform
	bool ___moveToPlatform_7;
	// UnityEngine.Transform RootMotion.Demos.VRIKPlatformController::lastPlatform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___lastPlatform_8;
	// UnityEngine.Vector3 RootMotion.Demos.VRIKPlatformController::lastPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lastPosition_9;
	// UnityEngine.Quaternion RootMotion.Demos.VRIKPlatformController::lastRotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___lastRotation_10;
};

// RootMotion.Demos.CharacterAnimationSimple
struct CharacterAnimationSimple_t0BFE1C39C7958BA5C23FC6CBF68A20923B0D9F5F  : public CharacterAnimationBase_tF16F89D851897751BC15325508623E7909E14842
{
	// RootMotion.Demos.CharacterThirdPerson RootMotion.Demos.CharacterAnimationSimple::characterController
	CharacterThirdPerson_t701D066717AA31A81BCCB2B926375896F0F18CF9* ___characterController_11;
	// System.Single RootMotion.Demos.CharacterAnimationSimple::pivotOffset
	float ___pivotOffset_12;
	// UnityEngine.AnimationCurve RootMotion.Demos.CharacterAnimationSimple::moveSpeed
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___moveSpeed_13;
	// UnityEngine.Animator RootMotion.Demos.CharacterAnimationSimple::animator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___animator_14;
};

// RootMotion.Demos.CharacterAnimationThirdPerson
struct CharacterAnimationThirdPerson_t9965E1812210AC6B234D6A8BDB9986834DDA3F41  : public CharacterAnimationBase_tF16F89D851897751BC15325508623E7909E14842
{
	// RootMotion.Demos.CharacterThirdPerson RootMotion.Demos.CharacterAnimationThirdPerson::characterController
	CharacterThirdPerson_t701D066717AA31A81BCCB2B926375896F0F18CF9* ___characterController_11;
	// System.Single RootMotion.Demos.CharacterAnimationThirdPerson::turnSensitivity
	float ___turnSensitivity_12;
	// System.Single RootMotion.Demos.CharacterAnimationThirdPerson::turnSpeed
	float ___turnSpeed_13;
	// System.Single RootMotion.Demos.CharacterAnimationThirdPerson::runCycleLegOffset
	float ___runCycleLegOffset_14;
	// System.Single RootMotion.Demos.CharacterAnimationThirdPerson::animSpeedMultiplier
	float ___animSpeedMultiplier_15;
	// UnityEngine.Animator RootMotion.Demos.CharacterAnimationThirdPerson::animator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___animator_16;
	// UnityEngine.Vector3 RootMotion.Demos.CharacterAnimationThirdPerson::lastForward
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lastForward_17;
	// System.Single RootMotion.Demos.CharacterAnimationThirdPerson::deltaAngle
	float ___deltaAngle_20;
	// System.Single RootMotion.Demos.CharacterAnimationThirdPerson::jumpLeg
	float ___jumpLeg_21;
	// System.Boolean RootMotion.Demos.CharacterAnimationThirdPerson::lastJump
	bool ___lastJump_22;
};

// RootMotion.Demos.CharacterThirdPerson
struct CharacterThirdPerson_t701D066717AA31A81BCCB2B926375896F0F18CF9  : public CharacterBase_t1CFFD41AEAD8C28D01AD4FFC61BCDAA2C5AB4053
{
	// RootMotion.Demos.CharacterAnimationBase RootMotion.Demos.CharacterThirdPerson::characterAnimation
	CharacterAnimationBase_tF16F89D851897751BC15325508623E7909E14842* ___characterAnimation_18;
	// RootMotion.Demos.UserControlThirdPerson RootMotion.Demos.CharacterThirdPerson::userControl
	UserControlThirdPerson_t84D27C4D05AE0B01CDABC9C382DEDD23F3943690* ___userControl_19;
	// RootMotion.CameraController RootMotion.Demos.CharacterThirdPerson::cam
	CameraController_t1AE8F30FD3CB14582A1D7EC6F704EE3F49D69412* ___cam_20;
	// RootMotion.Demos.CharacterThirdPerson/MoveMode RootMotion.Demos.CharacterThirdPerson::moveMode
	int32_t ___moveMode_21;
	// System.Boolean RootMotion.Demos.CharacterThirdPerson::smoothPhysics
	bool ___smoothPhysics_22;
	// System.Single RootMotion.Demos.CharacterThirdPerson::smoothAccelerationTime
	float ___smoothAccelerationTime_23;
	// System.Single RootMotion.Demos.CharacterThirdPerson::linearAccelerationSpeed
	float ___linearAccelerationSpeed_24;
	// System.Single RootMotion.Demos.CharacterThirdPerson::platformFriction
	float ___platformFriction_25;
	// System.Single RootMotion.Demos.CharacterThirdPerson::groundStickyEffect
	float ___groundStickyEffect_26;
	// System.Single RootMotion.Demos.CharacterThirdPerson::maxVerticalVelocityOnGround
	float ___maxVerticalVelocityOnGround_27;
	// System.Single RootMotion.Demos.CharacterThirdPerson::velocityToGroundTangentWeight
	float ___velocityToGroundTangentWeight_28;
	// System.Boolean RootMotion.Demos.CharacterThirdPerson::lookInCameraDirection
	bool ___lookInCameraDirection_29;
	// System.Single RootMotion.Demos.CharacterThirdPerson::turnSpeed
	float ___turnSpeed_30;
	// System.Single RootMotion.Demos.CharacterThirdPerson::stationaryTurnSpeedMlp
	float ___stationaryTurnSpeedMlp_31;
	// System.Boolean RootMotion.Demos.CharacterThirdPerson::smoothJump
	bool ___smoothJump_32;
	// System.Single RootMotion.Demos.CharacterThirdPerson::airSpeed
	float ___airSpeed_33;
	// System.Single RootMotion.Demos.CharacterThirdPerson::airControl
	float ___airControl_34;
	// System.Single RootMotion.Demos.CharacterThirdPerson::jumpPower
	float ___jumpPower_35;
	// System.Single RootMotion.Demos.CharacterThirdPerson::jumpRepeatDelayTime
	float ___jumpRepeatDelayTime_36;
	// System.Boolean RootMotion.Demos.CharacterThirdPerson::doubleJumpEnabled
	bool ___doubleJumpEnabled_37;
	// System.Single RootMotion.Demos.CharacterThirdPerson::doubleJumpPowerMlp
	float ___doubleJumpPowerMlp_38;
	// UnityEngine.LayerMask RootMotion.Demos.CharacterThirdPerson::wallRunLayers
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___wallRunLayers_39;
	// System.Single RootMotion.Demos.CharacterThirdPerson::wallRunMaxLength
	float ___wallRunMaxLength_40;
	// System.Single RootMotion.Demos.CharacterThirdPerson::wallRunMinMoveMag
	float ___wallRunMinMoveMag_41;
	// System.Single RootMotion.Demos.CharacterThirdPerson::wallRunMinVelocityY
	float ___wallRunMinVelocityY_42;
	// System.Single RootMotion.Demos.CharacterThirdPerson::wallRunRotationSpeed
	float ___wallRunRotationSpeed_43;
	// System.Single RootMotion.Demos.CharacterThirdPerson::wallRunMaxRotationAngle
	float ___wallRunMaxRotationAngle_44;
	// System.Single RootMotion.Demos.CharacterThirdPerson::wallRunWeightSpeed
	float ___wallRunWeightSpeed_45;
	// System.Single RootMotion.Demos.CharacterThirdPerson::crouchCapsuleScaleMlp
	float ___crouchCapsuleScaleMlp_46;
	// System.Boolean RootMotion.Demos.CharacterThirdPerson::<fullRootMotion>k__BackingField
	bool ___U3CfullRootMotionU3Ek__BackingField_47;
	// System.Boolean RootMotion.Demos.CharacterThirdPerson::<onGround>k__BackingField
	bool ___U3ConGroundU3Ek__BackingField_48;
	// RootMotion.Demos.CharacterThirdPerson/AnimState RootMotion.Demos.CharacterThirdPerson::animState
	AnimState_t217CB34525B21DC85A816E042E22EA0CD4D6F91D ___animState_49;
	// UnityEngine.Vector3 RootMotion.Demos.CharacterThirdPerson::moveDirection
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___moveDirection_50;
	// UnityEngine.Animator RootMotion.Demos.CharacterThirdPerson::animator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___animator_51;
	// UnityEngine.Vector3 RootMotion.Demos.CharacterThirdPerson::normal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___normal_52;
	// UnityEngine.Vector3 RootMotion.Demos.CharacterThirdPerson::platformVelocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___platformVelocity_53;
	// UnityEngine.Vector3 RootMotion.Demos.CharacterThirdPerson::platformAngularVelocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___platformAngularVelocity_54;
	// UnityEngine.RaycastHit RootMotion.Demos.CharacterThirdPerson::hit
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 ___hit_55;
	// System.Single RootMotion.Demos.CharacterThirdPerson::jumpLeg
	float ___jumpLeg_56;
	// System.Single RootMotion.Demos.CharacterThirdPerson::jumpEndTime
	float ___jumpEndTime_57;
	// System.Single RootMotion.Demos.CharacterThirdPerson::forwardMlp
	float ___forwardMlp_58;
	// System.Single RootMotion.Demos.CharacterThirdPerson::groundDistance
	float ___groundDistance_59;
	// System.Single RootMotion.Demos.CharacterThirdPerson::lastAirTime
	float ___lastAirTime_60;
	// System.Single RootMotion.Demos.CharacterThirdPerson::stickyForce
	float ___stickyForce_61;
	// UnityEngine.Vector3 RootMotion.Demos.CharacterThirdPerson::wallNormal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___wallNormal_62;
	// UnityEngine.Vector3 RootMotion.Demos.CharacterThirdPerson::moveDirectionVelocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___moveDirectionVelocity_63;
	// System.Single RootMotion.Demos.CharacterThirdPerson::wallRunWeight
	float ___wallRunWeight_64;
	// System.Single RootMotion.Demos.CharacterThirdPerson::lastWallRunWeight
	float ___lastWallRunWeight_65;
	// System.Single RootMotion.Demos.CharacterThirdPerson::fixedDeltaTime
	float ___fixedDeltaTime_66;
	// UnityEngine.Vector3 RootMotion.Demos.CharacterThirdPerson::fixedDeltaPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___fixedDeltaPosition_67;
	// UnityEngine.Quaternion RootMotion.Demos.CharacterThirdPerson::fixedDeltaRotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___fixedDeltaRotation_68;
	// System.Boolean RootMotion.Demos.CharacterThirdPerson::fixedFrame
	bool ___fixedFrame_69;
	// System.Single RootMotion.Demos.CharacterThirdPerson::wallRunEndTime
	float ___wallRunEndTime_70;
	// UnityEngine.Vector3 RootMotion.Demos.CharacterThirdPerson::gravity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___gravity_71;
	// UnityEngine.Vector3 RootMotion.Demos.CharacterThirdPerson::verticalVelocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___verticalVelocity_72;
	// System.Single RootMotion.Demos.CharacterThirdPerson::velocityY
	float ___velocityY_73;
	// System.Boolean RootMotion.Demos.CharacterThirdPerson::doubleJumped
	bool ___doubleJumped_74;
	// System.Boolean RootMotion.Demos.CharacterThirdPerson::jumpReleased
	bool ___jumpReleased_75;
};

// RootMotion.FinalIK.IK
struct IK_t8026AD64782C89DB3C8933F61F5E287C0542C4A1  : public SolverManager_t622D4F561ECBEF2A4ACBA9452CB50B381C8ECAFD
{
};

// RootMotion.Demos.UserControlAI
struct UserControlAI_tEC783229E47B26F8565D392EA1A4E163BA4B6263  : public UserControlThirdPerson_t84D27C4D05AE0B01CDABC9C382DEDD23F3943690
{
	// UnityEngine.Transform RootMotion.Demos.UserControlAI::moveTarget
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___moveTarget_9;
	// System.Single RootMotion.Demos.UserControlAI::stoppingDistance
	float ___stoppingDistance_10;
	// System.Single RootMotion.Demos.UserControlAI::stoppingThreshold
	float ___stoppingThreshold_11;
	// RootMotion.Demos.Navigator RootMotion.Demos.UserControlAI::navigator
	Navigator_t7D234A2CBEFB7989ACF84795A71863E7FD6C1A9A* ___navigator_12;
};

// RootMotion.FinalIK.VRIK
struct VRIK_t12C8A89E36AA18BC0C649FA253A29B7778C56CE3  : public IK_t8026AD64782C89DB3C8933F61F5E287C0542C4A1
{
	// RootMotion.FinalIK.VRIK/References RootMotion.FinalIK.VRIK::references
	References_t2A4C7FEEFBC153C7E0BD6EDDB0FC99A2196C9024* ___references_10;
	// RootMotion.FinalIK.IKSolverVR RootMotion.FinalIK.VRIK::solver
	IKSolverVR_tCD6C0842AEECB6BB4E524A21474E3964D8D188A8* ___solver_11;
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_tDF76FE2002958A97429065AC028E0A0C70442121_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::CF97ADEEDB59E05BFD73A2B4C2A8885708C4F4F70C84C64B27120E72AB733B72
	__StaticArrayInitTypeSizeU3D16_t68EE8386E456CD4C7C65DA7A48BD79DB18F6A764 ___CF97ADEEDB59E05BFD73A2B4C2A8885708C4F4F70C84C64B27120E72AB733B72_0;
};

// <PrivateImplementationDetails>

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// UnityEngine.AnimatorStateInfo

// UnityEngine.AnimatorStateInfo

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// System.Char

// UnityEngine.Color

// UnityEngine.Color

// System.Double

// System.Double

// System.Int32

// System.Int32

// UnityEngine.LayerMask

// UnityEngine.LayerMask

// UnityEngine.Mathf
struct Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_StaticFields
{
	// System.Single UnityEngine.Mathf::Epsilon
	float ___Epsilon_0;
};

// UnityEngine.Mathf

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.Quaternion

// System.Single

// System.Single

// System.UInt32

// System.UInt32

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector2

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector3

// System.Void

// System.Void

// UnityEngine.WaitForFixedUpdate

// UnityEngine.WaitForFixedUpdate

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16

// UnityEngine.AnimationCurve

// UnityEngine.AnimationCurve

// UnityEngine.Bounds

// UnityEngine.Bounds

// UnityEngine.Coroutine

// UnityEngine.Coroutine

// UnityEngine.KeyCode

// UnityEngine.KeyCode

// UnityEngine.AI.NavMeshHit

// UnityEngine.AI.NavMeshHit

// UnityEngine.AI.NavMeshPath

// UnityEngine.AI.NavMeshPath

// RootMotion.Demos.Navigator

// RootMotion.Demos.Navigator

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// UnityEngine.Ray

// UnityEngine.Ray

// UnityEngine.RaycastHit

// UnityEngine.RaycastHit

// RootMotion.Demos.CharacterThirdPerson/<JumpSmooth>d__79

// RootMotion.Demos.CharacterThirdPerson/<JumpSmooth>d__79

// RootMotion.Demos.CharacterThirdPerson/AnimState

// RootMotion.Demos.CharacterThirdPerson/AnimState

// RootMotion.Demos.UserControlThirdPerson/State

// RootMotion.Demos.UserControlThirdPerson/State

// RootMotion.FinalIK.VRIKCalibrator/CalibrationData

// RootMotion.FinalIK.VRIKCalibrator/CalibrationData

// RootMotion.FinalIK.VRIKCalibrator/Settings

// RootMotion.FinalIK.VRIKCalibrator/Settings

// UnityEngine.Component

// UnityEngine.Component

// RootMotion.FinalIK.IKSolverVR

// RootMotion.FinalIK.IKSolverVR

// UnityEngine.PhysicMaterial

// UnityEngine.PhysicMaterial

// UnityEngine.Behaviour

// UnityEngine.Behaviour

// UnityEngine.Collider

// UnityEngine.Collider

// System.NotSupportedException

// System.NotSupportedException

// UnityEngine.Rigidbody

// UnityEngine.Rigidbody

// UnityEngine.Transform

// UnityEngine.Transform

// UnityEngine.Animator

// UnityEngine.Animator

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.Camera

// UnityEngine.CapsuleCollider

// UnityEngine.CapsuleCollider

// UnityEngine.CharacterController

// UnityEngine.CharacterController

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// RootMotion.Demos.ApplicationQuit

// RootMotion.Demos.ApplicationQuit

// RootMotion.CameraController

// RootMotion.CameraController

// RootMotion.Demos.CharacterAnimationBase

// RootMotion.Demos.CharacterAnimationBase

// RootMotion.Demos.CharacterBase

// RootMotion.Demos.CharacterBase

// RootMotion.Demos.SimpleLocomotion

// RootMotion.Demos.SimpleLocomotion

// RootMotion.Demos.SlowMo

// RootMotion.Demos.SlowMo

// RootMotion.Demos.UserControlThirdPerson

// RootMotion.Demos.UserControlThirdPerson

// RootMotion.Demos.VRIKCalibrationBasic

// RootMotion.Demos.VRIKCalibrationBasic

// RootMotion.Demos.VRIKCalibrationController

// RootMotion.Demos.VRIKCalibrationController

// RootMotion.Demos.VRIKPlatform

// RootMotion.Demos.VRIKPlatform

// RootMotion.Demos.VRIKPlatformController

// RootMotion.Demos.VRIKPlatformController

// RootMotion.Demos.CharacterAnimationSimple

// RootMotion.Demos.CharacterAnimationSimple

// RootMotion.Demos.CharacterAnimationThirdPerson

// RootMotion.Demos.CharacterAnimationThirdPerson

// RootMotion.Demos.CharacterThirdPerson

// RootMotion.Demos.CharacterThirdPerson

// RootMotion.Demos.UserControlAI

// RootMotion.Demos.UserControlAI

// RootMotion.FinalIK.VRIK

// RootMotion.FinalIK.VRIK
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.KeyCode[]
struct KeyCodeU5BU5D_tE5EF2F42327664A9138C613B265BEE8524672B85  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 m_Items[1];

	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		m_Items[index] = value;
	}
};


// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponentInChildren_TisRuntimeObject_mE483A27E876DE8E4E6901D6814837F81D7C42F65_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;

// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2 (int32_t ___0_key, const RuntimeMethod* method) ;
// RootMotion.FinalIK.VRIKCalibrator/CalibrationData RootMotion.FinalIK.VRIKCalibrator::Calibrate(RootMotion.FinalIK.VRIK,UnityEngine.Transform,UnityEngine.Transform,UnityEngine.Transform,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CalibrationData_t9B1C11436DB0406DCE42015BB786F5C9A565CEA1* VRIKCalibrator_Calibrate_m5E1146745E780C21D0A5903223446E1C94878BF3 (VRIK_t12C8A89E36AA18BC0C649FA253A29B7778C56CE3* ___0_ik, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___1_centerEyeAnchor, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___2_leftHandAnchor, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___3_rightHandAnchor, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___4_centerEyePositionOffset, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___5_centerEyeRotationOffset, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___6_handPositionOffset, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___7_handRotationOffset, float ___8_scaleMlp, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Void RootMotion.FinalIK.VRIKCalibrator::Calibrate(RootMotion.FinalIK.VRIK,RootMotion.FinalIK.VRIKCalibrator/CalibrationData,UnityEngine.Transform,UnityEngine.Transform,UnityEngine.Transform,UnityEngine.Transform,UnityEngine.Transform,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VRIKCalibrator_Calibrate_mC3D3EFE4784C5BC0809E7E543230FE76E5A689D7 (VRIK_t12C8A89E36AA18BC0C649FA253A29B7778C56CE3* ___0_ik, CalibrationData_t9B1C11436DB0406DCE42015BB786F5C9A565CEA1* ___1_data, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___2_headTracker, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___3_bodyTracker, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___4_leftHandTracker, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___5_rightHandTracker, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___6_leftFootTracker, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___7_rightFootTracker, const RuntimeMethod* method) ;
// System.Void RootMotion.FinalIK.VRIKCalibrator::RecalibrateScale(RootMotion.FinalIK.VRIK,RootMotion.FinalIK.VRIKCalibrator/CalibrationData,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VRIKCalibrator_RecalibrateScale_mBBA5F505FF6C53354FDE65801F937292FC35EC22 (VRIK_t12C8A89E36AA18BC0C649FA253A29B7778C56CE3* ___0_ik, CalibrationData_t9B1C11436DB0406DCE42015BB786F5C9A565CEA1* ___1_data, float ___2_scaleMlp, const RuntimeMethod* method) ;
// System.Void RootMotion.FinalIK.VRIKCalibrator/CalibrationData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CalibrationData__ctor_m073DEA5E11EBA03BF82D2FB3AA406370F250E698 (CalibrationData_t9B1C11436DB0406DCE42015BB786F5C9A565CEA1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// RootMotion.FinalIK.VRIKCalibrator/CalibrationData RootMotion.FinalIK.VRIKCalibrator::Calibrate(RootMotion.FinalIK.VRIK,RootMotion.FinalIK.VRIKCalibrator/Settings,UnityEngine.Transform,UnityEngine.Transform,UnityEngine.Transform,UnityEngine.Transform,UnityEngine.Transform,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CalibrationData_t9B1C11436DB0406DCE42015BB786F5C9A565CEA1* VRIKCalibrator_Calibrate_m5D4A30CAAF1156F3CC20481BC27AC1074DC45E32 (VRIK_t12C8A89E36AA18BC0C649FA253A29B7778C56CE3* ___0_ik, Settings_t8E009A6EE69717B08B142E1F3BE3DB8879C5515C* ___1_settings, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___2_headTracker, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___3_bodyTracker, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___4_leftHandTracker, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___5_rightHandTracker, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___6_leftFootTracker, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___7_rightFootTracker, const RuntimeMethod* method) ;
// System.Void RootMotion.FinalIK.VRIKCalibrator::RecalibrateScale(RootMotion.FinalIK.VRIK,RootMotion.FinalIK.VRIKCalibrator/CalibrationData,RootMotion.FinalIK.VRIKCalibrator/Settings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VRIKCalibrator_RecalibrateScale_mF85241A03F08D29ECC79C0EBBE2F86436A33837D (VRIK_t12C8A89E36AA18BC0C649FA253A29B7778C56CE3* ___0_ik, CalibrationData_t9B1C11436DB0406DCE42015BB786F5C9A565CEA1* ___1_data, Settings_t8E009A6EE69717B08B142E1F3BE3DB8879C5515C* ___2_settings, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Inverse(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Inverse_mD9C060AC626A7B406F4984AC98F8358DC89EF512 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_rotation, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_lhs, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_rhs, const RuntimeMethod* method) ;
// System.Void RootMotion.FinalIK.IKSolverVR::AddPlatformMotion(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IKSolverVR_AddPlatformMotion_m60FAD948822A2D13A801FEF0D141E7CEA1CFFAE9 (IKSolverVR_tCD6C0842AEECB6BB4E524A21474E3964D8D188A8* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_deltaPosition, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_deltaRotation, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2_platformPivot, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::InverseTransformDirection(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_InverseTransformDirection_m69C077B881A98B08C7F231EFC49429C906FBC575 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_direction, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<RootMotion.Demos.CharacterBase>()
inline CharacterBase_t1CFFD41AEAD8C28D01AD4FFC61BCDAA2C5AB4053* Component_GetComponent_TisCharacterBase_t1CFFD41AEAD8C28D01AD4FFC61BCDAA2C5AB4053_m787C142821A302991630E934540F5AE344415DAB (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  CharacterBase_t1CFFD41AEAD8C28D01AD4FFC61BCDAA2C5AB4053* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m23033D7E2F0F298BE465B7F3A63CDF40A4EB70EB (RuntimeObject* ___0_message, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_context, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_localRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void RootMotion.Demos.CharacterAnimationBase::SmoothFollow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterAnimationBase_SmoothFollow_m6E82774634AA2BDCD7D902DB7D77C7150171C470 (CharacterAnimationBase_tF16F89D851897751BC15325508623E7909E14842* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::TransformPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_TransformPoint_m05BFF013DB830D7BFE44A007703694AE1062EE44 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_position, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, float ___2_t, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Lerp(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Lerp_m259606226726C2F46E079A5A688B9E24FF7E9A0D (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_a, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_b, float ___2_t, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_value, const RuntimeMethod* method) ;
// System.Void RootMotion.Demos.CharacterAnimationBase::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterAnimationBase_Start_m4D02DE1464823E1C57C05F95ECA7F38565B6DB36 (CharacterAnimationBase_tF16F89D851897751BC15325508623E7909E14842* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInChildren<UnityEngine.Animator>()
inline Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* Component_GetComponentInChildren_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mDB9FC26B94B8EE9CF1F88BFEC75DF06CC2E3A000 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_mE483A27E876DE8E4E6901D6814837F81D7C42F65_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// System.Single UnityEngine.AnimationCurve::Evaluate(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AnimationCurve_Evaluate_m50B857043DE251A186032ADBCBB4CEF817F4EE3C (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* __this, float ___0_time, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetFloat_m10C78733FAFC7AFEDBDACC48B7C66D3A35A0A7FE (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___0_name, float ___1_value, const RuntimeMethod* method) ;
// System.Void RootMotion.Demos.CharacterAnimationBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterAnimationBase__ctor_mF91A6533F51F2AE55380572031A9C0399CA2CCA3 (CharacterAnimationBase_tF16F89D851897751BC15325508623E7909E14842* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Animator>()
inline Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Animator::get_pivotPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Animator_get_pivotPosition_m2A6E669BC43633E12BEDF96ED73AB86EAACBA11B (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) ;
// UnityEngine.AnimatorStateInfo UnityEngine.Animator::GetCurrentAnimatorStateInfo(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 Animator_GetCurrentAnimatorStateInfo_mD5B526FA605F6CFBC31B7DE36740F6AD1E534CAD (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_layerIndex, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.AnimatorStateInfo::IsName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimatorStateInfo_IsName_mB936F493D6BDDB9372C8E9D813CE0416B002C4D0 (AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// UnityEngine.AnimatorUpdateMode UnityEngine.Animator::get_updateMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Animator_get_updateMode_m63C8A41D5D0F214FB5CF554B69CFBBEB6EE141DB (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.AnimatorStateInfo::get_normalizedTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AnimatorStateInfo_get_normalizedTime_m087C7E5A72122ADF18EBB4AC8391103B9119CCC6 (AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Repeat(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Repeat_m6F1560A163481BB311D685294E1B463C3E4EB3BA_inline (float ___0_t, float ___1_length, const RuntimeMethod* method) ;
// System.Single RootMotion.Demos.CharacterAnimationBase::GetAngleFromForward(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CharacterAnimationBase_GetAngleFromForward_m3A3ADF7B4ED301B38C414525DA6BD509EAA75EF4 (CharacterAnimationBase_tF16F89D851897751BC15325508623E7909E14842* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_worldDirection, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___0_value, float ___1_min, float ___2_max, const RuntimeMethod* method) ;
// System.Single UnityEngine.Animator::GetFloat(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Animator_GetFloat_m10B455A15EB343175518CCBEE2818C2497CC678A (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline (float ___0_a, float ___1_b, float ___2_t, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetBool(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___0_name, bool ___1_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::set_speed(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_set_speed_m933F4D6770122BC9D8A7FF82DE1CD33D514379FC (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, float ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Animator::get_deltaRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Animator_get_deltaRotation_m54839D596F81D477E91E2746E4141AB389238FFD (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_rotation, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_point, const RuntimeMethod* method) ;
// System.Boolean RootMotion.Demos.CharacterThirdPerson::get_fullRootMotion()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool CharacterThirdPerson_get_fullRootMotion_mBED6B5C55FDB74F8115F9E91BD4BEED0D9B97B83_inline (CharacterThirdPerson_t701D066717AA31A81BCCB2B926375896F0F18CF9* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Animator::get_deltaPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Animator_get_deltaPosition_m1759DB2D343FDAFAA7FE85ED66451D5210B0A606 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Physics::get_gravity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Physics_get_gravity_m94393492AE4ED8B38A22ECCDCD2DDDB71BFA010D (const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Collider>()
inline Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* Component_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m820398EDBF1D3766C3166A0C323A127662A29A14 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.Rigidbody>()
inline Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Single UnityEngine.CapsuleCollider::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CapsuleCollider_get_height_m63A31072F296AEE6222DC9C88704882BB6A54A24 (CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.CapsuleCollider::get_center()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CapsuleCollider_get_center_mC12CE0A66A1104CEB7D23F39596D0E45578419C2 (CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.PhysicMaterial::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhysicMaterial__ctor_mD8ECF21D92EBF6A8C5517E7EB4D2D089B4F78D3E (PhysicMaterial_t4ECED34E04BB2148333467208361A5FBFDCD7131* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.PhysicMaterial::set_dynamicFriction(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhysicMaterial_set_dynamicFriction_mF41FC9F0BB5E70CF1AD4322FE67745AD612D7197 (PhysicMaterial_t4ECED34E04BB2148333467208361A5FBFDCD7131* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.PhysicMaterial::set_staticFriction(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhysicMaterial_set_staticFriction_m737457B7A2346BFB5D05BC7322F2A49823243011 (PhysicMaterial_t4ECED34E04BB2148333467208361A5FBFDCD7131* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.PhysicMaterial::set_frictionCombine(UnityEngine.PhysicMaterialCombine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhysicMaterial_set_frictionCombine_m4F81ED0AC04BF634B0ACB33629CDB16C2ECBD28D (PhysicMaterial_t4ECED34E04BB2148333467208361A5FBFDCD7131* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.PhysicMaterial::set_bounciness(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhysicMaterial_set_bounciness_m99D8D24F76D60306CC4CFE38AD43BF240F84FDF9 (PhysicMaterial_t4ECED34E04BB2148333467208361A5FBFDCD7131* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.PhysicMaterial::set_bounceCombine(UnityEngine.PhysicMaterialCombine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhysicMaterial_set_bounceCombine_m64DBF7D0F9C447DD5E0D19A6A24F0F5945C0BB1D (PhysicMaterial_t4ECED34E04BB2148333467208361A5FBFDCD7131* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::set_constraints(UnityEngine.RigidbodyConstraints)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_constraints_mE81BF0DAEB980E320538231E092CA4663885A9A3 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Rigidbody::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Rigidbody_get_position_m4ECB79BDBBF8FD1EA572EDB792D3330DDED24691 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_UnaryNegation(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, const RuntimeMethod* method) ;
// System.Void UnityEngine.Ray::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ray__ctor_mE298992FD10A3894C38373198385F345C58BD64C (Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_origin, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_direction, const RuntimeMethod* method) ;
// System.Void UnityEngine.RaycastHit::set_point(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RaycastHit_set_point_m3B63BEB25A82BFCF9FBB300022D0362BC2CF9E11 (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.RaycastHit::set_normal(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RaycastHit_set_normal_m97DDF1CBE8ADF1F72AA30BC83870615ABB38C88B (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.LayerMask::op_Implicit(UnityEngine.LayerMask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayerMask_op_Implicit_m7F5A5B9D079281AC445ED39DEE1FCFA9D795810D (LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___0_mask, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Physics::SphereCast(UnityEngine.Ray,System.Single,UnityEngine.RaycastHit&,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_SphereCast_mF6538C6C4E3A9BBD81B686437CC91F3A93C1F3E7 (Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___0_ray, float ___1_radius, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* ___2_hitInfo, float ___3_maxDistance, int32_t ___4_layerMask, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::AngleAxis(System.Single,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_AngleAxis_mF37022977B297E63AA70D69EA1C4C922FF22CC80 (float ___0_angle, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_axis, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::MovePosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_MovePosition_mB2CD29ABC8F59AC338C0A3A5A6B75C38FDA92CA9 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_position, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::MoveRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_MoveRotation_m85825C7206E770E39DED9EE6D792702F577A891D (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_rot, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::MoveTowards(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_MoveTowards_m69751B5EC50D8E7127D4BB2C8D908E38808AF45D_inline (float ___0_current, float ___1_target, float ___2_maxDelta, const RuntimeMethod* method) ;
// System.Void UnityEngine.CapsuleCollider::set_height(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CapsuleCollider_set_height_m5DAE3DC5AD851E30C5A29AC7A22F36BE1E205BBB (CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* __this, float ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::MoveTowards(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_MoveTowards_m0363264647799F3173AC37F8E819F98298249B08_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_current, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_target, float ___2_maxDistanceDelta, const RuntimeMethod* method) ;
// System.Void UnityEngine.CapsuleCollider::set_center(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CapsuleCollider_set_center_m242D92DAEF25887C6A87A0777E4E624C0A431A2E (CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Collider::set_material(UnityEngine.PhysicMaterial)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Collider_set_material_mE6FB0AA80863EA6746CD99606C90DB97DBBC4476 (Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* __this, PhysicMaterial_t4ECED34E04BB2148333467208361A5FBFDCD7131* ___0_value, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Angle(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Angle_mB16906B482814C140FE5BA9D041D2DC11E42A68D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_from, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_to, const RuntimeMethod* method) ;
// System.Void RootMotion.Demos.CharacterBase::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterBase_Start_m595F6FC17451E05962AFA82B863825E4773D8B18 (CharacterBase_t1CFFD41AEAD8C28D01AD4FFC61BCDAA2C5AB4053* __this, const RuntimeMethod* method) ;
// System.Void RootMotion.Demos.CharacterThirdPerson::set_onGround(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CharacterThirdPerson_set_onGround_m6A0C64AF41BD4C01EA6F48947318AED10EA6C298_inline (CharacterThirdPerson_t701D066717AA31A81BCCB2B926375896F0F18CF9* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, bool ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector3 RootMotion.Demos.CharacterBase::GetGravity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CharacterBase_GetGravity_mCFE90A4BCE53AF081B179DA3F5A1ECC8D0F585A9 (CharacterBase_t1CFFD41AEAD8C28D01AD4FFC61BCDAA2C5AB4053* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Rigidbody::get_velocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 RootMotion.V3Tools::ExtractVertical(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V3Tools_ExtractVertical_m67D145D321D3D9A1607A57C9D79AC189B894A097 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_v, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_verticalAxis, float ___2_weight, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Dot(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_lhs, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_rhs, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::set_interpolation(UnityEngine.RigidbodyInterpolation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_interpolation_mC7D39114A7AC6ED0AB2B40FECA4E2ED3C1D7603C (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void RootMotion.Demos.CharacterThirdPerson::MoveFixed(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterThirdPerson_MoveFixed_m5D78629B640CE1B09FB05CC3BAE6F9E70B5BBC0C (CharacterThirdPerson_t701D066717AA31A81BCCB2B926375896F0F18CF9* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_deltaPosition, const RuntimeMethod* method) ;
// System.Void RootMotion.Demos.CharacterThirdPerson::GroundCheck()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterThirdPerson_GroundCheck_m1704CEB107B741D1FFCE6E7326DE8286ECC166F0 (CharacterThirdPerson_t701D066717AA31A81BCCB2B926375896F0F18CF9* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector3::op_Equality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Equality_mCDCBB8D2EDC3D3BF20F31A25ACB34705D352B479_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_lhs, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_rhs, const RuntimeMethod* method) ;
// System.Void RootMotion.Demos.CharacterBase::HighFriction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterBase_HighFriction_mD3CBCC9C25E6764075B87ED0D6BD3526DD333D5A (CharacterBase_t1CFFD41AEAD8C28D01AD4FFC61BCDAA2C5AB4053* __this, const RuntimeMethod* method) ;
// System.Void RootMotion.Demos.CharacterBase::ZeroFriction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterBase_ZeroFriction_mFB644325143655479ADA27CD1B64DDC02B0C8CB1 (CharacterBase_t1CFFD41AEAD8C28D01AD4FFC61BCDAA2C5AB4053* __this, const RuntimeMethod* method) ;
// System.Boolean RootMotion.Demos.CharacterThirdPerson::get_onGround()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool CharacterThirdPerson_get_onGround_m9C9555A5C749F8F337E48584713AC44497253957_inline (CharacterThirdPerson_t701D066717AA31A81BCCB2B926375896F0F18CF9* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::set_useGravity(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_useGravity_m1B1B22E093F9DC92D7BEEBBE6B02642B3B6C4389 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::AddForce(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_AddForce_m7A3EEEED21F986917107CBA6CC0106DCBC212198 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_force, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::set_velocity(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B (const RuntimeMethod* method) ;
// System.Void RootMotion.Demos.CharacterBase::ScaleCapsule(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterBase_ScaleCapsule_mA8553FB8823AF9233312F64A1F1203EF33329E45 (CharacterBase_t1CFFD41AEAD8C28D01AD4FFC61BCDAA2C5AB4053* __this, float ___0_mlp, const RuntimeMethod* method) ;
// UnityEngine.Vector3 RootMotion.Demos.CharacterThirdPerson::GetMoveDirection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CharacterThirdPerson_GetMoveDirection_m304741EEC7A8F97E283A6516358FF30238AC3C7B (CharacterThirdPerson_t701D066717AA31A81BCCB2B926375896F0F18CF9* __this, const RuntimeMethod* method) ;
// System.Void RootMotion.CameraController::UpdateInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraController_UpdateInput_mE8E2FC62E97B7F145D8300C07F6F5F423F3ED4B1 (CameraController_t1AE8F30FD3CB14582A1D7EC6F704EE3F49D69412* __this, const RuntimeMethod* method) ;
// UnityEngine.RigidbodyInterpolation UnityEngine.Rigidbody::get_interpolation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Rigidbody_get_interpolation_mE508FC846FB031C118464637507C004408A32696 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_fixedDeltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_fixedDeltaTime_m43136893D00AF5D5FE80AD05609558F6E2381381 (const RuntimeMethod* method) ;
// System.Void RootMotion.CameraController::UpdateTransform(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraController_UpdateTransform_mCF31FCAD0DA0325A696659DFABAEC0E38183F2B0 (CameraController_t1AE8F30FD3CB14582A1D7EC6F704EE3F49D69412* __this, float ___0_deltaTime, const RuntimeMethod* method) ;
// System.Void RootMotion.Demos.CharacterThirdPerson::WallRun()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterThirdPerson_WallRun_mDB50A14927A6AC3A0563B1541AF86A2800A57921 (CharacterThirdPerson_t701D066717AA31A81BCCB2B926375896F0F18CF9* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) ;
// UnityEngine.Vector3 RootMotion.V3Tools::ExtractHorizontal(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V3Tools_ExtractHorizontal_m8AA90F6DD024441CBBBC2FB7F06DC00BA9DBE554 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_v, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_normal, float ___2_weight, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::FromToRotation(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_FromToRotation_mCB3100F93637E72455388B901C36EF8A25DFDB9A (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_fromDirection, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_toDirection, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::ClampMagnitude(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_ClampMagnitude_mF83675F19744F58E97CF24D8359A810634DC031F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_vector, float ___1_maxLength, const RuntimeMethod* method) ;
// System.Boolean RootMotion.Demos.CharacterThirdPerson::CanWallRun()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CharacterThirdPerson_CanWallRun_m02DD33436A9F0D9A0F2B2C117704F29ACFF95E5D (CharacterThirdPerson_t701D066717AA31A81BCCB2B926375896F0F18CF9* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_LookRotation_mFB02EDC8F733774DFAC3BEA4B4BB265A228F8307 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_forward, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_upwards, const RuntimeMethod* method) ;
// UnityEngine.Bounds UnityEngine.Collider::get_bounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 Collider_get_bounds_mCC32F749590E9A85C7930E5355661367F78E4CB4 (Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Bounds::get_center()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Bounds_get_center_m5B05F81CB835EB6DD8628FDA24B638F477984DC3 (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_Raycast_m56120FFEF0D4F0A44CCA505B5C946E6FB8742F12 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_origin, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_direction, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* ___2_hitInfo, float ___3_maxDistance, int32_t ___4_layerMask, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_normal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 RaycastHit_get_normal_mD8741B70D2039C5CAFC4368D4CE59D89562040B5 (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::RotateTowards(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_RotateTowards_m884BB56D5A071EF6008F9354D5FF1C9A1913AF92 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_current, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_target, float ___2_maxRadiansDelta, float ___3_maxMagnitudeDelta, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::OrthoNormalize(UnityEngine.Vector3&,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3_OrthoNormalize_m4450C7BEB70DBFA60E3AAC08C98CDAE831A54158 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_normal, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___1_tangent, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Slerp(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Slerp_m0A9969F500E7716EA4F6BC4E7D5464372D8E9E15 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_a, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_b, float ___2_t, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::SmoothDamp(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3&,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_SmoothDamp_mF673AC30464B7DF671A0556140EB6E9DD75827ED_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_current, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_target, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___2_currentVelocity, float ___3_smoothTime, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector3::op_Inequality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Inequality_m9F170CDFBF1E490E559DA5D06D6547501A402BBF_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_lhs, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_rhs, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_euler, const RuntimeMethod* method) ;
// UnityEngine.Vector3 RootMotion.Demos.CharacterThirdPerson::GetForwardDirection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CharacterThirdPerson_GetForwardDirection_m487B686C1E3E2B1C8F155BD0340FE56E48D8691B (CharacterThirdPerson_t701D066717AA31A81BCCB2B926375896F0F18CF9* __this, const RuntimeMethod* method) ;
// System.Single RootMotion.Demos.CharacterBase::GetAngleFromForward(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CharacterBase_GetAngleFromForward_mCB3C3BDEC06317D3F16CDBF493517CFB3E66BC91 (CharacterBase_t1CFFD41AEAD8C28D01AD4FFC61BCDAA2C5AB4053* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_worldDirection, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Rigidbody::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Rigidbody_get_rotation_m07882A7024FB3F96BA13EC577A96163BBB621AA1 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::StopAllCoroutines()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_StopAllCoroutines_m872033451D42013A99867D09337490017E9ED318 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator RootMotion.Demos.CharacterThirdPerson::JumpSmooth(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CharacterThirdPerson_JumpSmooth_mA9659A787AA06E3D2792C336006EE93094467CF9 (CharacterThirdPerson_t701D066717AA31A81BCCB2B926375896F0F18CF9* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_jumpVelocity, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___0_routine, const RuntimeMethod* method) ;
// System.Void RootMotion.Demos.CharacterThirdPerson/<JumpSmooth>d__79::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CJumpSmoothU3Ed__79__ctor_m88EBA70927D0AA4CD9D8274965BADE76E47136D3 (U3CJumpSmoothU3Ed__79_tCF9E3C5C31D617032A31A9EA49FE19CB325E4A54* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_point()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39 (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Project(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Project_m85DF3CB297EC5E1A17BD6266FF65E86AB7372C9B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_vector, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_onNormal, const RuntimeMethod* method) ;
// UnityEngine.Rigidbody UnityEngine.RaycastHit::get_rigidbody()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* RaycastHit_get_rigidbody_mE6FCB1B1A9F0C8D4185A484C10B9A5403CCD6005 (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Rigidbody::GetPointVelocity(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Rigidbody_GetPointVelocity_m94324B9CDC28751DB27594ADE76FEAB5EC4EB1BD (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_worldPoint, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Rigidbody::get_angularVelocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Rigidbody_get_angularVelocity_m4EACCFCF15CA441CCD53B24322C2E7B8EEBDF6A8 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) ;
// System.Void RootMotion.Demos.CharacterBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterBase__ctor_mC3B30A5FC3BFFD9FD05A5BE061D1FC2238940E94 (CharacterBase_t1CFFD41AEAD8C28D01AD4FFC61BCDAA2C5AB4053* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::AddForce(UnityEngine.Vector3,UnityEngine.ForceMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_AddForce_mBDBC288D0E266BC1B62E3649B4FCE46E7EA9CCBC (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_force, int32_t ___1_mode, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForFixedUpdate::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForFixedUpdate__ctor_m28D22FD61960FCD538753493FAC080DA5EC7A9E7 (WaitForFixedUpdate_t86F5BC0B6A668AEF2903DE9ADB52062E457BD1B7* __this, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.CharacterController>()
inline CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* Component_GetComponent_TisCharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A_m96B48A644EDC97C5C82F154D1FEA551B2E392040 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void RootMotion.Demos.SimpleLocomotion::set_isGrounded(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SimpleLocomotion_set_isGrounded_mAABAD43801C81B3513E20DEF68393661A55B9CC7_inline (SimpleLocomotion_t5C40DF535664F3EF4CC54452166672EA480285BE* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void RootMotion.Demos.SimpleLocomotion::Rotate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleLocomotion_Rotate_m12DA862A7D47D8D9B0EBD4BE9FECFD72A56476BA (SimpleLocomotion_t5C40DF535664F3EF4CC54452166672EA480285BE* __this, const RuntimeMethod* method) ;
// System.Void RootMotion.Demos.SimpleLocomotion::Move()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleLocomotion_Move_m50CA03DDDB04B40CC2F1EB95C7C1BAD4320EDEDC (SimpleLocomotion_t5C40DF535664F3EF4CC54452166672EA480285BE* __this, const RuntimeMethod* method) ;
// System.Void RootMotion.CameraController::UpdateTransform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraController_UpdateTransform_m972020875FA1569AF137980F8DEB70A183D1B9CB (CameraController_t1AE8F30FD3CB14582A1D7EC6F704EE3F49D69412* __this, const RuntimeMethod* method) ;
// System.Boolean RootMotion.Demos.SimpleLocomotion::get_isGrounded()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SimpleLocomotion_get_isGrounded_mBB52FDDFD43FFBE316BCA4EB0202E1EFEAFA61BF_inline (SimpleLocomotion_t5C40DF535664F3EF4CC54452166672EA480285BE* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 RootMotion.Demos.SimpleLocomotion::GetInputVector()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 SimpleLocomotion_GetInputVector_mFD8A6EC6850D871DCD71DF1EFE54A1071C4A1039 (SimpleLocomotion_t5C40DF535664F3EF4CC54452166672EA480285BE* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::SmoothDampAngle(System.Single,System.Single,System.Single&,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_SmoothDampAngle_m81F8BEDEE653DBC7AEC560E21EA429B34AA2734D_inline (float ___0_current, float ___1_target, float* ___2_currentVelocity, float ___3_smoothTime, const RuntimeMethod* method) ;
// UnityEngine.Vector3 RootMotion.Demos.SimpleLocomotion::GetInputVectorRaw()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 SimpleLocomotion_GetInputVectorRaw_mBBC7E3189EA0F96E16972926E298AC7EE2DBBBBA (SimpleLocomotion_t5C40DF535664F3EF4CC54452166672EA480285BE* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_LookRotation_mDB2CCA75B8E1AB98104F2A6E1A1EA57D0D1298D7 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_forward, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKey(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434 (int32_t ___0_key, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::SmoothDamp(System.Single,System.Single,System.Single&,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_SmoothDamp_m3A255A356924421B4042AAD1623EF46F92A08C91_inline (float ___0_current, float ___1_target, float* ___2_currentVelocity, float ___3_smoothTime, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Animator::get_hasRootMotion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animator_get_hasRootMotion_mA39728839F19F4E103CF2599281E6F796D2AB341 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.CharacterController::SimpleMove(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CharacterController_SimpleMove_mE32A48D439878B3241E8456F8EBFAAE264BD705C (CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_speed, const RuntimeMethod* method) ;
// System.Single UnityEngine.Input::GetAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62 (String_t* ___0_axisName, const RuntimeMethod* method) ;
// System.Single UnityEngine.Input::GetAxisRaw(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxisRaw_m47C0CF8E090561A2F407A4E11D5F2A45044EB8E4 (String_t* ___0_axisName, const RuntimeMethod* method) ;
// System.Void RootMotion.Demos.UserControlThirdPerson::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserControlThirdPerson_Start_mEE1B513868D6F2B0A70330A87A379308AD2020B9 (UserControlThirdPerson_t84D27C4D05AE0B01CDABC9C382DEDD23F3943690* __this, const RuntimeMethod* method) ;
// System.Void RootMotion.Demos.Navigator::Initiate(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Navigator_Initiate_mBC58B99BA3D2FF59BBADFE0AF463B65F9F482C95 (Navigator_t7D234A2CBEFB7989ACF84795A71863E7FD6C1A9A* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_transform, const RuntimeMethod* method) ;
// System.Void RootMotion.Demos.Navigator::Update(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Navigator_Update_mB38CDF457CC55CDD2A7C475031744E8E09C19FF7 (Navigator_t7D234A2CBEFB7989ACF84795A71863E7FD6C1A9A* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_targetPosition, const RuntimeMethod* method) ;
// UnityEngine.Vector3 RootMotion.Demos.Navigator::get_normalizedDeltaPosition()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Navigator_get_normalizedDeltaPosition_m595BC9BF2137B046444109DAD6A772C089D8B42A_inline (Navigator_t7D234A2CBEFB7989ACF84795A71863E7FD6C1A9A* __this, const RuntimeMethod* method) ;
// System.Void RootMotion.Demos.Navigator::Visualize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Navigator_Visualize_m78AD2122BC837C11DDD9A7367CA26DBC5BA76E90 (Navigator_t7D234A2CBEFB7989ACF84795A71863E7FD6C1A9A* __this, const RuntimeMethod* method) ;
// System.Void RootMotion.Demos.UserControlThirdPerson::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserControlThirdPerson__ctor_m9973C7901A57073F95C64855C9696D4A32DEB2BA (UserControlThirdPerson_t84D27C4D05AE0B01CDABC9C382DEDD23F3943690* __this, const RuntimeMethod* method) ;
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetButton(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetButton_m2F217DAE69DB3D1324FB848B3C9C84F19A80989E (String_t* ___0_buttonName, const RuntimeMethod* method) ;
// System.Void UnityEngine.Application::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_Quit_mE304382DB9A6455C2A474C8F364C7387F37E9281 (const RuntimeMethod* method) ;
// System.Boolean RootMotion.Demos.SlowMo::IsSlowMotion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SlowMo_IsSlowMotion_m33DB9300072E9668E2BF826300855A16E34FE326 (SlowMo_tE361B9C2C9C4F8B748E3F794573ACE9DE3D50B8E* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Time::set_timeScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331 (float ___0_value, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetMouseButton(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButton_m4995DD4A2D4F916565C1B1B5AAF7DF17C126B3EA (int32_t ___0_button, const RuntimeMethod* method) ;
// System.Void UnityEngine.AI.NavMeshPath::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavMeshPath__ctor_mEA40BFC2492814FFC97A71C3AEC2154A9415C37F (NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7* __this, const RuntimeMethod* method) ;
// System.Void RootMotion.Demos.Navigator::set_state(RootMotion.Demos.Navigator/State)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Navigator_set_state_mDD116E7D62AA78CEBE2720A38C4E49F9A757AF30_inline (Navigator_t7D234A2CBEFB7989ACF84795A71863E7FD6C1A9A* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// RootMotion.Demos.Navigator/State RootMotion.Demos.Navigator::get_state()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Navigator_get_state_m27942DCA70B8D7CD52B12FA7EA3AEFA282834346_inline (Navigator_t7D234A2CBEFB7989ACF84795A71863E7FD6C1A9A* __this, const RuntimeMethod* method) ;
// System.Void RootMotion.Demos.Navigator::set_normalizedDeltaPosition(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Navigator_set_normalizedDeltaPosition_m1265CF112882BEF964D98BBE460D5746CA4206AA_inline (Navigator_t7D234A2CBEFB7989ACF84795A71863E7FD6C1A9A* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.AI.NavMeshPathStatus UnityEngine.AI.NavMeshPath::get_status()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NavMeshPath_get_status_m63B0AEDA3149C7053987C4D0A02B3FE8B41BD74B (NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3[] UnityEngine.AI.NavMeshPath::get_corners()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* NavMeshPath_get_corners_m469237DE430A001BE7050BEF5D05A20B94D76F3E (NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7* __this, const RuntimeMethod* method) ;
// System.Void RootMotion.Demos.Navigator::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Navigator_Stop_m41AD91005D289F5949F61DAF975BFF5B0E593D51 (Navigator_t7D234A2CBEFB7989ACF84795A71863E7FD6C1A9A* __this, const RuntimeMethod* method) ;
// System.Single RootMotion.Demos.Navigator::HorDistance(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Navigator_HorDistance_mC869F0A7EDFFBE57FC65FD0FF0A009E6F3FCA556 (Navigator_t7D234A2CBEFB7989ACF84795A71863E7FD6C1A9A* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_p1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_p2, const RuntimeMethod* method) ;
// System.Void RootMotion.Demos.Navigator::CalculatePath(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Navigator_CalculatePath_mE092D39D62C4124D1817295F5BB5C5ADBDA86A44 (Navigator_t7D234A2CBEFB7989ACF84795A71863E7FD6C1A9A* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_targetPosition, const RuntimeMethod* method) ;
// System.Boolean RootMotion.Demos.Navigator::Find(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Navigator_Find_m218C8C9D4517EF048A99D560E14B5970F4B7BD3B (Navigator_t7D234A2CBEFB7989ACF84795A71863E7FD6C1A9A* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_targetPosition, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.AI.NavMesh::CalculatePath(UnityEngine.Vector3,UnityEngine.Vector3,System.Int32,UnityEngine.AI.NavMeshPath)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NavMesh_CalculatePath_m15FF9A2E008A90375072B9293D290D9167E580E9 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_sourcePosition, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_targetPosition, int32_t ___2_areaMask, NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7* ___3_path, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.AI.NavMesh::SamplePosition(UnityEngine.Vector3,UnityEngine.AI.NavMeshHit&,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NavMesh_SamplePosition_mEDAE8240217EED82B4519D4435E670A1655B2109 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_sourcePosition, NavMeshHit_t6323FC1F2D00E24FBFFC3E27C2F349A3BAD16F8B* ___1_hit, float ___2_maxDistance, int32_t ___3_areaMask, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.AI.NavMeshHit::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 NavMeshHit_get_position_m09E8FF6DEF5BFA3F30B3C4BCA4642442FF1BCBF1 (NavMeshHit_t6323FC1F2D00E24FBFFC3E27C2F349A3BAD16F8B* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector2::Distance(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_Distance_mBACBB1609E1894D68F882D86A93519E311810C89_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_b, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_gray()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_gray_m6D01087E0F20F34718EBA5B213853B4BB49F1DEF_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Gizmos::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gizmos_set_color_m53927A2741937484180B20B55F7F20F8F60C5797 (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_red()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline (const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_green()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_green_mEB001F2CD8C68C6BBAEF9101990B779D3AA2A6EF_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Gizmos::DrawLine(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gizmos_DrawLine_mB139054F55D615637A39A3127AADB16043387F8A (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_from, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_to, const RuntimeMethod* method) ;
// System.Void UnityEngine.Gizmos::DrawSphere(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gizmos_DrawSphere_mC7B2862BBDB3141A63B83F0F1E56E30101D4F472 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_center, float ___1_radius, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_white()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline (const RuntimeMethod* method) ;
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___0_x, float ___1_y, float ___2_z, float ___3_w, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Normalize(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Sign(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Sign_m42EE1F0BC041AF14F89DED7F762BE996E2C50D8A_inline (float ___0_f, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::get_sqrMagnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::SmoothDamp(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3&,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_SmoothDamp_mAF61EA22D4906BF87DD00A91FB4F6AC0C54C495A (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_current, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_target, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___2_currentVelocity, float ___3_smoothTime, float ___4_maxSpeed, float ___5_deltaTime, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_euler, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::SmoothDampAngle(System.Single,System.Single,System.Single&,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_SmoothDampAngle_mA4C705CB9E2330AD5D98D7A9987DA64FD5AFFB3E_inline (float ___0_current, float ___1_target, float* ___2_currentVelocity, float ___3_smoothTime, float ___4_maxSpeed, float ___5_deltaTime, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::SmoothDamp(System.Single,System.Single,System.Single&,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_SmoothDamp_mBE7ABB6B59D198BE8ABE42942452CC7B813A5248 (float ___0_current, float ___1_target, float* ___2_currentVelocity, float ___3_smoothTime, float ___4_maxSpeed, float ___5_deltaTime, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Magnitude(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_vector, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::DeltaAngle(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_DeltaAngle_mCBA858CE5C1BEEBE375812325A50E434FF66D6D4_inline (float ___0_current, float ___1_target, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void RootMotion.Demos.VRIKCalibrationBasic::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VRIKCalibrationBasic_LateUpdate_mE4F02A77F5DE18AD17B8C6144672576D4F4F6753 (VRIKCalibrationBasic_tFB2EE185670DDB7DAFBAD4D909780F221584DA43* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2368176C6E8740752331563739901A2C48824210);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF01072AE30B2F09CAD786A2408FE56B89E6E99F6);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Input.GetKeyDown(KeyCode.C))
		bool L_0;
		L_0 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)99), NULL);
		if (!L_0)
		{
			goto IL_004a;
		}
	}
	{
		// data = VRIKCalibrator.Calibrate(ik, centerEyeAnchor, leftHandAnchor, rightHandAnchor, headAnchorPositionOffset, headAnchorRotationOffset, handAnchorPositionOffset, handAnchorRotationOffset, scaleMlp);
		VRIK_t12C8A89E36AA18BC0C649FA253A29B7778C56CE3* L_1 = __this->___ik_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->___centerEyeAnchor_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = __this->___leftHandAnchor_8;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = __this->___rightHandAnchor_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = __this->___headAnchorPositionOffset_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = __this->___headAnchorRotationOffset_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = __this->___handAnchorPositionOffset_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = __this->___handAnchorRotationOffset_11;
		float L_9 = __this->___scaleMlp_12;
		CalibrationData_t9B1C11436DB0406DCE42015BB786F5C9A565CEA1* L_10;
		L_10 = VRIKCalibrator_Calibrate_m5E1146745E780C21D0A5903223446E1C94878BF3(L_1, L_2, L_3, L_4, L_5, L_6, L_7, L_8, L_9, NULL);
		__this->___data_13 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___data_13), (void*)L_10);
	}

IL_004a:
	{
		// if (Input.GetKeyDown(KeyCode.D))
		bool L_11;
		L_11 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)100), NULL);
		if (!L_11)
		{
			goto IL_0097;
		}
	}
	{
		// if (data.scale == 0f)
		CalibrationData_t9B1C11436DB0406DCE42015BB786F5C9A565CEA1* L_12 = __this->___data_13;
		NullCheck(L_12);
		float L_13 = L_12->___scale_0;
		if ((!(((float)L_13) == ((float)(0.0f)))))
		{
			goto IL_0071;
		}
	}
	{
		// Debug.LogError("No Calibration Data to calibrate to, please calibrate with 'C' first.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral2368176C6E8740752331563739901A2C48824210, NULL);
		goto IL_0097;
	}

IL_0071:
	{
		// VRIKCalibrator.Calibrate(ik, data, centerEyeAnchor, null, leftHandAnchor, rightHandAnchor);
		VRIK_t12C8A89E36AA18BC0C649FA253A29B7778C56CE3* L_14 = __this->___ik_4;
		CalibrationData_t9B1C11436DB0406DCE42015BB786F5C9A565CEA1* L_15 = __this->___data_13;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16 = __this->___centerEyeAnchor_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17 = __this->___leftHandAnchor_8;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18 = __this->___rightHandAnchor_9;
		VRIKCalibrator_Calibrate_mC3D3EFE4784C5BC0809E7E543230FE76E5A689D7(L_14, L_15, L_16, (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL, L_17, L_18, (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL, (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL, NULL);
	}

IL_0097:
	{
		// if (Input.GetKeyDown(KeyCode.S))
		bool L_19;
		L_19 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)115), NULL);
		if (!L_19)
		{
			goto IL_00d3;
		}
	}
	{
		// if (data.scale == 0f)
		CalibrationData_t9B1C11436DB0406DCE42015BB786F5C9A565CEA1* L_20 = __this->___data_13;
		NullCheck(L_20);
		float L_21 = L_20->___scale_0;
		if ((!(((float)L_21) == ((float)(0.0f)))))
		{
			goto IL_00bc;
		}
	}
	{
		// Debug.LogError("Avatar needs to be calibrated before RecalibrateScale is called.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteralF01072AE30B2F09CAD786A2408FE56B89E6E99F6, NULL);
	}

IL_00bc:
	{
		// VRIKCalibrator.RecalibrateScale(ik, data, scaleMlp);
		VRIK_t12C8A89E36AA18BC0C649FA253A29B7778C56CE3* L_22 = __this->___ik_4;
		CalibrationData_t9B1C11436DB0406DCE42015BB786F5C9A565CEA1* L_23 = __this->___data_13;
		float L_24 = __this->___scaleMlp_12;
		VRIKCalibrator_RecalibrateScale_mBBA5F505FF6C53354FDE65801F937292FC35EC22(L_22, L_23, L_24, NULL);
	}

IL_00d3:
	{
		// }
		return;
	}
}
// System.Void RootMotion.Demos.VRIKCalibrationBasic::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VRIKCalibrationBasic__ctor_m304194E6203FC5DDD96635CAF4BA87EA41E62A6C (VRIKCalibrationBasic_tFB2EE185670DDB7DAFBAD4D909780F221584DA43* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CalibrationData_t9B1C11436DB0406DCE42015BB786F5C9A565CEA1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [Tooltip("Multiplies the scale of the root.")] public float scaleMlp = 1f;
		__this->___scaleMlp_12 = (1.0f);
		// public VRIKCalibrator.CalibrationData data = new VRIKCalibrator.CalibrationData();
		CalibrationData_t9B1C11436DB0406DCE42015BB786F5C9A565CEA1* L_0 = (CalibrationData_t9B1C11436DB0406DCE42015BB786F5C9A565CEA1*)il2cpp_codegen_object_new(CalibrationData_t9B1C11436DB0406DCE42015BB786F5C9A565CEA1_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		CalibrationData__ctor_m073DEA5E11EBA03BF82D2FB3AA406370F250E698(L_0, NULL);
		__this->___data_13 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___data_13), (void*)L_0);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void RootMotion.Demos.VRIKCalibrationController::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VRIKCalibrationController_LateUpdate_mCDE4EF8AA51DF03F83D0A1668BEAD50F3746E94E (VRIKCalibrationController_t3EC7F7D2C774EB170E9F20C23D73524FEFF44F2D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4D0CBDD4C2A6529BD6BC6738495CB8EA49A2AAB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF01072AE30B2F09CAD786A2408FE56B89E6E99F6);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Input.GetKeyDown(KeyCode.C))
		bool L_0;
		L_0 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)99), NULL);
		if (!L_0)
		{
			goto IL_0044;
		}
	}
	{
		// data = VRIKCalibrator.Calibrate(ik, settings, headTracker, bodyTracker, leftHandTracker, rightHandTracker, leftFootTracker, rightFootTracker);
		VRIK_t12C8A89E36AA18BC0C649FA253A29B7778C56CE3* L_1 = __this->___ik_4;
		Settings_t8E009A6EE69717B08B142E1F3BE3DB8879C5515C* L_2 = __this->___settings_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = __this->___headTracker_6;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = __this->___bodyTracker_7;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = __this->___leftHandTracker_8;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = __this->___rightHandTracker_9;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7 = __this->___leftFootTracker_10;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8 = __this->___rightFootTracker_11;
		CalibrationData_t9B1C11436DB0406DCE42015BB786F5C9A565CEA1* L_9;
		L_9 = VRIKCalibrator_Calibrate_m5D4A30CAAF1156F3CC20481BC27AC1074DC45E32(L_1, L_2, L_3, L_4, L_5, L_6, L_7, L_8, NULL);
		__this->___data_12 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___data_12), (void*)L_9);
	}

IL_0044:
	{
		// if (Input.GetKeyDown(KeyCode.D))
		bool L_10;
		L_10 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)100), NULL);
		if (!L_10)
		{
			goto IL_00a0;
		}
	}
	{
		// if (data.scale == 0f)
		CalibrationData_t9B1C11436DB0406DCE42015BB786F5C9A565CEA1* L_11 = __this->___data_12;
		NullCheck(L_11);
		float L_12 = L_11->___scale_0;
		if ((!(((float)L_12) == ((float)(0.0f)))))
		{
			goto IL_006b;
		}
	}
	{
		// Debug.LogError("No Calibration Data to calibrate to, please calibrate with settings first.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteralD4D0CBDD4C2A6529BD6BC6738495CB8EA49A2AAB, NULL);
		goto IL_00a0;
	}

IL_006b:
	{
		// VRIKCalibrator.Calibrate(ik, data, headTracker, bodyTracker, leftHandTracker, rightHandTracker, leftFootTracker, rightFootTracker);
		VRIK_t12C8A89E36AA18BC0C649FA253A29B7778C56CE3* L_13 = __this->___ik_4;
		CalibrationData_t9B1C11436DB0406DCE42015BB786F5C9A565CEA1* L_14 = __this->___data_12;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15 = __this->___headTracker_6;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16 = __this->___bodyTracker_7;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17 = __this->___leftHandTracker_8;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18 = __this->___rightHandTracker_9;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19 = __this->___leftFootTracker_10;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20 = __this->___rightFootTracker_11;
		VRIKCalibrator_Calibrate_mC3D3EFE4784C5BC0809E7E543230FE76E5A689D7(L_13, L_14, L_15, L_16, L_17, L_18, L_19, L_20, NULL);
	}

IL_00a0:
	{
		// if (Input.GetKeyDown(KeyCode.S))
		bool L_21;
		L_21 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)115), NULL);
		if (!L_21)
		{
			goto IL_00dc;
		}
	}
	{
		// if (data.scale == 0f)
		CalibrationData_t9B1C11436DB0406DCE42015BB786F5C9A565CEA1* L_22 = __this->___data_12;
		NullCheck(L_22);
		float L_23 = L_22->___scale_0;
		if ((!(((float)L_23) == ((float)(0.0f)))))
		{
			goto IL_00c5;
		}
	}
	{
		// Debug.LogError("Avatar needs to be calibrated before RecalibrateScale is called.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteralF01072AE30B2F09CAD786A2408FE56B89E6E99F6, NULL);
	}

IL_00c5:
	{
		// VRIKCalibrator.RecalibrateScale(ik, data, settings);
		VRIK_t12C8A89E36AA18BC0C649FA253A29B7778C56CE3* L_24 = __this->___ik_4;
		CalibrationData_t9B1C11436DB0406DCE42015BB786F5C9A565CEA1* L_25 = __this->___data_12;
		Settings_t8E009A6EE69717B08B142E1F3BE3DB8879C5515C* L_26 = __this->___settings_5;
		VRIKCalibrator_RecalibrateScale_mF85241A03F08D29ECC79C0EBBE2F86436A33837D(L_24, L_25, L_26, NULL);
	}

IL_00dc:
	{
		// }
		return;
	}
}
// System.Void RootMotion.Demos.VRIKCalibrationController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VRIKCalibrationController__ctor_m75C7E2779024323613C4C557BFB6D46A815515E2 (VRIKCalibrationController_t3EC7F7D2C774EB170E9F20C23D73524FEFF44F2D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CalibrationData_t9B1C11436DB0406DCE42015BB786F5C9A565CEA1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public VRIKCalibrator.CalibrationData data = new VRIKCalibrator.CalibrationData();
		CalibrationData_t9B1C11436DB0406DCE42015BB786F5C9A565CEA1* L_0 = (CalibrationData_t9B1C11436DB0406DCE42015BB786F5C9A565CEA1*)il2cpp_codegen_object_new(CalibrationData_t9B1C11436DB0406DCE42015BB786F5C9A565CEA1_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		CalibrationData__ctor_m073DEA5E11EBA03BF82D2FB3AA406370F250E698(L_0, NULL);
		__this->___data_12 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___data_12), (void*)L_0);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void RootMotion.Demos.VRIKPlatform::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VRIKPlatform_OnEnable_m8CB8836985FEC638D1BD314C77F914EE7F7F757F (VRIKPlatform_t0AF95625214FBE09521B15704340111286C357D0* __this, const RuntimeMethod* method) 
{
	{
		// lastPosition = transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		__this->___lastPosition_5 = L_1;
		// lastRotation = transform.rotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_2);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3;
		L_3 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_2, NULL);
		__this->___lastRotation_6 = L_3;
		// }
		return;
	}
}
// System.Void RootMotion.Demos.VRIKPlatform::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VRIKPlatform_LateUpdate_mBF3BC6ECF850272F95A984E7030FBB728430110E (VRIKPlatform_t0AF95625214FBE09521B15704340111286C357D0* __this, const RuntimeMethod* method) 
{
	{
		// ik.solver.AddPlatformMotion (transform.position - lastPosition, transform.rotation * Quaternion.Inverse(lastRotation), transform.position);
		VRIK_t12C8A89E36AA18BC0C649FA253A29B7778C56CE3* L_0 = __this->___ik_4;
		NullCheck(L_0);
		IKSolverVR_tCD6C0842AEECB6BB4E524A21474E3964D8D188A8* L_1 = L_0->___solver_11;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = __this->___lastPosition_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_3, L_4, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_6);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7;
		L_7 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_6, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8 = __this->___lastRotation_6;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_9;
		L_9 = Quaternion_Inverse_mD9C060AC626A7B406F4984AC98F8358DC89EF512(L_8, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10;
		L_10 = Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(L_7, L_9, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_11);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_11, NULL);
		NullCheck(L_1);
		IKSolverVR_AddPlatformMotion_m60FAD948822A2D13A801FEF0D141E7CEA1CFFAE9(L_1, L_5, L_10, L_12, NULL);
		// lastRotation = transform.rotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_13);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14;
		L_14 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_13, NULL);
		__this->___lastRotation_6 = L_14;
		// lastPosition = transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_15);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_15, NULL);
		__this->___lastPosition_5 = L_16;
		// }
		return;
	}
}
// System.Void RootMotion.Demos.VRIKPlatform::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VRIKPlatform__ctor_m60CFB9F018981416CBC33F6F21C5D7EC98A255B2 (VRIKPlatform_t0AF95625214FBE09521B15704340111286C357D0* __this, const RuntimeMethod* method) 
{
	{
		// private Quaternion lastRotation = Quaternion.identity;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0;
		L_0 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		__this->___lastRotation_6 = L_0;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void RootMotion.Demos.VRIKPlatformController::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VRIKPlatformController_LateUpdate_m791425E6AE84C137D20524AA7416C3C2B7CD2E40 (VRIKPlatformController_t2E0A9EDA82EBDEE645BA07DAE6EE993155B11550* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (platform != lastPlatform)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___platform_6;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = __this->___lastPlatform_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_0161;
		}
	}
	{
		// if (platform != null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = __this->___platform_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_012e;
		}
	}
	{
		// if (moveToPlatform)
		bool L_5 = __this->___moveToPlatform_7;
		if (!L_5)
		{
			goto IL_010c;
		}
	}
	{
		// lastPosition = ik.transform.position;
		VRIK_t12C8A89E36AA18BC0C649FA253A29B7778C56CE3* L_6 = __this->___ik_4;
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_6, NULL);
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_7, NULL);
		__this->___lastPosition_9 = L_8;
		// lastRotation = ik.transform.rotation;
		VRIK_t12C8A89E36AA18BC0C649FA253A29B7778C56CE3* L_9 = __this->___ik_4;
		NullCheck(L_9);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_9, NULL);
		NullCheck(L_10);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_11;
		L_11 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_10, NULL);
		__this->___lastRotation_10 = L_11;
		// ik.transform.position = platform.position;
		VRIK_t12C8A89E36AA18BC0C649FA253A29B7778C56CE3* L_12 = __this->___ik_4;
		NullCheck(L_12);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_12, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14 = __this->___platform_6;
		NullCheck(L_14);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_14, NULL);
		NullCheck(L_13);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_13, L_15, NULL);
		// ik.transform.rotation = platform.rotation;
		VRIK_t12C8A89E36AA18BC0C649FA253A29B7778C56CE3* L_16 = __this->___ik_4;
		NullCheck(L_16);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_16, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18 = __this->___platform_6;
		NullCheck(L_18);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_19;
		L_19 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_18, NULL);
		NullCheck(L_17);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_17, L_19, NULL);
		// trackingSpace.position = platform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20 = __this->___trackingSpace_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21 = __this->___platform_6;
		NullCheck(L_21);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_21, NULL);
		NullCheck(L_20);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_20, L_22, NULL);
		// trackingSpace.rotation = platform.rotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23 = __this->___trackingSpace_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24 = __this->___platform_6;
		NullCheck(L_24);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_25;
		L_25 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_24, NULL);
		NullCheck(L_23);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_23, L_25, NULL);
		// ik.solver.AddPlatformMotion(platform.position - lastPosition, platform.rotation * Quaternion.Inverse(lastRotation), platform.position);
		VRIK_t12C8A89E36AA18BC0C649FA253A29B7778C56CE3* L_26 = __this->___ik_4;
		NullCheck(L_26);
		IKSolverVR_tCD6C0842AEECB6BB4E524A21474E3964D8D188A8* L_27 = L_26->___solver_11;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_28 = __this->___platform_6;
		NullCheck(L_28);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		L_29 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_28, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30 = __this->___lastPosition_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
		L_31 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_29, L_30, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_32 = __this->___platform_6;
		NullCheck(L_32);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_33;
		L_33 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_32, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_34 = __this->___lastRotation_10;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_35;
		L_35 = Quaternion_Inverse_mD9C060AC626A7B406F4984AC98F8358DC89EF512(L_34, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_36;
		L_36 = Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(L_33, L_35, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_37 = __this->___platform_6;
		NullCheck(L_37);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38;
		L_38 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_37, NULL);
		NullCheck(L_27);
		IKSolverVR_AddPlatformMotion_m60FAD948822A2D13A801FEF0D141E7CEA1CFFAE9(L_27, L_31, L_36, L_38, NULL);
	}

IL_010c:
	{
		// lastPosition = platform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_39 = __this->___platform_6;
		NullCheck(L_39);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40;
		L_40 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_39, NULL);
		__this->___lastPosition_9 = L_40;
		// lastRotation = platform.rotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_41 = __this->___platform_6;
		NullCheck(L_41);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_42;
		L_42 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_41, NULL);
		__this->___lastRotation_10 = L_42;
	}

IL_012e:
	{
		// ik.transform.parent = platform;
		VRIK_t12C8A89E36AA18BC0C649FA253A29B7778C56CE3* L_43 = __this->___ik_4;
		NullCheck(L_43);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_44;
		L_44 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_43, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_45 = __this->___platform_6;
		NullCheck(L_44);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_44, L_45, NULL);
		// trackingSpace.parent = platform;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_46 = __this->___trackingSpace_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_47 = __this->___platform_6;
		NullCheck(L_46);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_46, L_47, NULL);
		// lastPlatform = platform;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_48 = __this->___platform_6;
		__this->___lastPlatform_8 = L_48;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___lastPlatform_8), (void*)L_48);
	}

IL_0161:
	{
		// if (platform != null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_49 = __this->___platform_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_50;
		L_50 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_49, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_50)
		{
			goto IL_01dd;
		}
	}
	{
		// ik.solver.AddPlatformMotion(platform.position - lastPosition, platform.rotation * Quaternion.Inverse(lastRotation), platform.position);
		VRIK_t12C8A89E36AA18BC0C649FA253A29B7778C56CE3* L_51 = __this->___ik_4;
		NullCheck(L_51);
		IKSolverVR_tCD6C0842AEECB6BB4E524A21474E3964D8D188A8* L_52 = L_51->___solver_11;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_53 = __this->___platform_6;
		NullCheck(L_53);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_54;
		L_54 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_53, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_55 = __this->___lastPosition_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_56;
		L_56 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_54, L_55, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_57 = __this->___platform_6;
		NullCheck(L_57);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_58;
		L_58 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_57, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_59 = __this->___lastRotation_10;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_60;
		L_60 = Quaternion_Inverse_mD9C060AC626A7B406F4984AC98F8358DC89EF512(L_59, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_61;
		L_61 = Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(L_58, L_60, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_62 = __this->___platform_6;
		NullCheck(L_62);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_63;
		L_63 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_62, NULL);
		NullCheck(L_52);
		IKSolverVR_AddPlatformMotion_m60FAD948822A2D13A801FEF0D141E7CEA1CFFAE9(L_52, L_56, L_61, L_63, NULL);
		// lastRotation = platform.rotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_64 = __this->___platform_6;
		NullCheck(L_64);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_65;
		L_65 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_64, NULL);
		__this->___lastRotation_10 = L_65;
		// lastPosition = platform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_66 = __this->___platform_6;
		NullCheck(L_66);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_67;
		L_67 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_66, NULL);
		__this->___lastPosition_9 = L_67;
	}

IL_01dd:
	{
		// }
		return;
	}
}
// System.Void RootMotion.Demos.VRIKPlatformController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VRIKPlatformController__ctor_mB449CA5EBCE909C7F2029094153E4554E73806B7 (VRIKPlatformController_t2E0A9EDA82EBDEE645BA07DAE6EE993155B11550* __this, const RuntimeMethod* method) 
{
	{
		// public bool moveToPlatform = true;
		__this->___moveToPlatform_7 = (bool)1;
		// private Quaternion lastRotation = Quaternion.identity;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0;
		L_0 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		__this->___lastRotation_10 = L_0;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Vector3 RootMotion.Demos.CharacterAnimationBase::GetPivotPoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CharacterAnimationBase_GetPivotPoint_mD1616714CFEC65E81B12630B1F2CD5CA2D65DBE3 (CharacterAnimationBase_tF16F89D851897751BC15325508623E7909E14842* __this, const RuntimeMethod* method) 
{
	{
		// return transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		return L_1;
	}
}
// System.Boolean RootMotion.Demos.CharacterAnimationBase::get_animationGrounded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CharacterAnimationBase_get_animationGrounded_mA336916E1440788A97E3638D75FE2211A66044FF (CharacterAnimationBase_tF16F89D851897751BC15325508623E7909E14842* __this, const RuntimeMethod* method) 
{
	{
		// return true;
		return (bool)1;
	}
}
// System.Single RootMotion.Demos.CharacterAnimationBase::GetAngleFromForward(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CharacterAnimationBase_GetAngleFromForward_m3A3ADF7B4ED301B38C414525DA6BD509EAA75EF4 (CharacterAnimationBase_tF16F89D851897751BC15325508623E7909E14842* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_worldDirection, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 local = transform.InverseTransformDirection(worldDirection);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___0_worldDirection;
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_InverseTransformDirection_m69C077B881A98B08C7F231EFC49429C906FBC575(L_0, L_1, NULL);
		V_0 = L_2;
		// return Mathf.Atan2 (local.x, local.z) * Mathf.Rad2Deg;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = V_0;
		float L_4 = L_3.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		float L_6 = L_5.___z_4;
		float L_7;
		L_7 = atan2f(L_4, L_6);
		return ((float)il2cpp_codegen_multiply(L_7, (57.2957802f)));
	}
}
// System.Void RootMotion.Demos.CharacterAnimationBase::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterAnimationBase_Start_m4D02DE1464823E1C57C05F95ECA7F38565B6DB36 (CharacterAnimationBase_tF16F89D851897751BC15325508623E7909E14842* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCharacterBase_t1CFFD41AEAD8C28D01AD4FFC61BCDAA2C5AB4053_m787C142821A302991630E934540F5AE344415DAB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral12C8EEF5222891275708172356C3F0AA43B22848);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (transform.parent.GetComponent<CharacterBase>() == null) {
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_0, NULL);
		NullCheck(L_1);
		CharacterBase_t1CFFD41AEAD8C28D01AD4FFC61BCDAA2C5AB4053* L_2;
		L_2 = Component_GetComponent_TisCharacterBase_t1CFFD41AEAD8C28D01AD4FFC61BCDAA2C5AB4053_m787C142821A302991630E934540F5AE344415DAB(L_1, Component_GetComponent_TisCharacterBase_t1CFFD41AEAD8C28D01AD4FFC61BCDAA2C5AB4053_m787C142821A302991630E934540F5AE344415DAB_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		// Debug.LogWarning("Animation controllers should be parented to character controllers!", transform);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m23033D7E2F0F298BE465B7F3A63CDF40A4EB70EB(_stringLiteral12C8EEF5222891275708172356C3F0AA43B22848, L_4, NULL);
	}

IL_0028:
	{
		// lastPosition = transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		__this->___lastPosition_7 = L_6;
		// localPosition = transform.localPosition;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_7, NULL);
		__this->___localPosition_8 = L_8;
		// lastRotation = transform.rotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_9);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10;
		L_10 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_9, NULL);
		__this->___lastRotation_10 = L_10;
		// localRotation = transform.localRotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_11);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12;
		L_12 = Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77(L_11, NULL);
		__this->___localRotation_9 = L_12;
		// }
		return;
	}
}
// System.Void RootMotion.Demos.CharacterAnimationBase::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterAnimationBase_LateUpdate_m69E5D3B250CC723B5C8C74CE2C88E809C0CA8D61 (CharacterAnimationBase_tF16F89D851897751BC15325508623E7909E14842* __this, const RuntimeMethod* method) 
{
	{
		// if (animatePhysics) return;
		bool L_0 = __this->___animatePhysics_6;
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (animatePhysics) return;
		return;
	}

IL_0009:
	{
		// SmoothFollow();
		CharacterAnimationBase_SmoothFollow_m6E82774634AA2BDCD7D902DB7D77C7150171C470(__this, NULL);
		// }
		return;
	}
}
// System.Void RootMotion.Demos.CharacterAnimationBase::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterAnimationBase_FixedUpdate_m9B8E547CABAB42EB7C102FE539E1787FF993C44F (CharacterAnimationBase_tF16F89D851897751BC15325508623E7909E14842* __this, const RuntimeMethod* method) 
{
	{
		// if (!animatePhysics) return;
		bool L_0 = __this->___animatePhysics_6;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (!animatePhysics) return;
		return;
	}

IL_0009:
	{
		// SmoothFollow();
		CharacterAnimationBase_SmoothFollow_m6E82774634AA2BDCD7D902DB7D77C7150171C470(__this, NULL);
		// }
		return;
	}
}
// System.Void RootMotion.Demos.CharacterAnimationBase::SmoothFollow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterAnimationBase_SmoothFollow_m6E82774634AA2BDCD7D902DB7D77C7150171C470 (CharacterAnimationBase_tF16F89D851897751BC15325508623E7909E14842* __this, const RuntimeMethod* method) 
{
	{
		// if (smoothFollow) {
		bool L_0 = __this->___smoothFollow_4;
		if (!L_0)
		{
			goto IL_007f;
		}
	}
	{
		// transform.position = Vector3.Lerp(lastPosition, transform.parent.TransformPoint(localPosition), Time.deltaTime * smoothFollowSpeed);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = __this->___lastPosition_7;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_3, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = __this->___localPosition_8;
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_TransformPoint_m05BFF013DB830D7BFE44A007703694AE1062EE44(L_4, L_5, NULL);
		float L_7;
		L_7 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_8 = __this->___smoothFollowSpeed_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline(L_2, L_6, ((float)il2cpp_codegen_multiply(L_7, L_8)), NULL);
		NullCheck(L_1);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_1, L_9, NULL);
		// transform.rotation = Quaternion.Lerp(lastRotation, transform.parent.rotation * localRotation, Time.deltaTime * smoothFollowSpeed);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_11 = __this->___lastRotation_10;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_12);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_12, NULL);
		NullCheck(L_13);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14;
		L_14 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_13, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_15 = __this->___localRotation_9;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16;
		L_16 = Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(L_14, L_15, NULL);
		float L_17;
		L_17 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_18 = __this->___smoothFollowSpeed_5;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_19;
		L_19 = Quaternion_Lerp_m259606226726C2F46E079A5A688B9E24FF7E9A0D(L_11, L_16, ((float)il2cpp_codegen_multiply(L_17, L_18)), NULL);
		NullCheck(L_10);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_10, L_19, NULL);
		goto IL_00a1;
	}

IL_007f:
	{
		// transform.localPosition = localPosition;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20;
		L_20 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = __this->___localPosition_8;
		NullCheck(L_20);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_20, L_21, NULL);
		// transform.localRotation = localRotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22;
		L_22 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_23 = __this->___localRotation_9;
		NullCheck(L_22);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_22, L_23, NULL);
	}

IL_00a1:
	{
		// lastPosition = transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24;
		L_24 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_24);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_24, NULL);
		__this->___lastPosition_7 = L_25;
		// lastRotation = transform.rotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_26;
		L_26 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_26);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_27;
		L_27 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_26, NULL);
		__this->___lastRotation_10 = L_27;
		// }
		return;
	}
}
// System.Void RootMotion.Demos.CharacterAnimationBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterAnimationBase__ctor_mF91A6533F51F2AE55380572031A9C0399CA2CCA3 (CharacterAnimationBase_tF16F89D851897751BC15325508623E7909E14842* __this, const RuntimeMethod* method) 
{
	{
		// public bool smoothFollow = true;
		__this->___smoothFollow_4 = (bool)1;
		// public float smoothFollowSpeed = 20f;
		__this->___smoothFollowSpeed_5 = (20.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void RootMotion.Demos.CharacterAnimationSimple::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterAnimationSimple_Start_m169CA14E6D06FB56D5BE917303046B1E1031E32D (CharacterAnimationSimple_t0BFE1C39C7958BA5C23FC6CBF68A20923B0D9F5F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mDB9FC26B94B8EE9CF1F88BFEC75DF06CC2E3A000_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.Start();
		CharacterAnimationBase_Start_m4D02DE1464823E1C57C05F95ECA7F38565B6DB36(__this, NULL);
		// animator = GetComponentInChildren<Animator>();
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0;
		L_0 = Component_GetComponentInChildren_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mDB9FC26B94B8EE9CF1F88BFEC75DF06CC2E3A000(__this, Component_GetComponentInChildren_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mDB9FC26B94B8EE9CF1F88BFEC75DF06CC2E3A000_RuntimeMethod_var);
		__this->___animator_14 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___animator_14), (void*)L_0);
		// }
		return;
	}
}
// UnityEngine.Vector3 RootMotion.Demos.CharacterAnimationSimple::GetPivotPoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CharacterAnimationSimple_GetPivotPoint_mD58CB918A43696089C92AD111D9BFF8C614F3FA7 (CharacterAnimationSimple_t0BFE1C39C7958BA5C23FC6CBF68A20923B0D9F5F* __this, const RuntimeMethod* method) 
{
	{
		// if (pivotOffset == 0) return transform.position;
		float L_0 = __this->___pivotOffset_12;
		if ((!(((float)L_0) == ((float)(0.0f)))))
		{
			goto IL_0019;
		}
	}
	{
		// if (pivotOffset == 0) return transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		return L_2;
	}

IL_0019:
	{
		// return transform.position + transform.forward * pivotOffset;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_5, NULL);
		float L_7 = __this->___pivotOffset_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_6, L_7, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_4, L_8, NULL);
		return L_9;
	}
}
// System.Void RootMotion.Demos.CharacterAnimationSimple::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterAnimationSimple_Update_m9034DDE50BA003F76A9A722D79D694F074C36A1E (CharacterAnimationSimple_t0BFE1C39C7958BA5C23FC6CBF68A20923B0D9F5F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5D2E3D85D1C3D4F42FAE33FB35C01C48241E0B32);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// float speed = moveSpeed.Evaluate(characterController.animState.moveDirection.z);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_0 = __this->___moveSpeed_13;
		CharacterThirdPerson_t701D066717AA31A81BCCB2B926375896F0F18CF9* L_1 = __this->___characterController_11;
		NullCheck(L_1);
		AnimState_t217CB34525B21DC85A816E042E22EA0CD4D6F91D* L_2 = (AnimState_t217CB34525B21DC85A816E042E22EA0CD4D6F91D*)(&L_1->___animState_49);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_3 = (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)(&L_2->___moveDirection_0);
		float L_4 = L_3->___z_4;
		NullCheck(L_0);
		float L_5;
		L_5 = AnimationCurve_Evaluate_m50B857043DE251A186032ADBCBB4CEF817F4EE3C(L_0, L_4, NULL);
		V_0 = L_5;
		// animator.SetFloat("Speed", speed);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_6 = __this->___animator_14;
		float L_7 = V_0;
		NullCheck(L_6);
		Animator_SetFloat_m10C78733FAFC7AFEDBDACC48B7C66D3A35A0A7FE(L_6, _stringLiteral5D2E3D85D1C3D4F42FAE33FB35C01C48241E0B32, L_7, NULL);
		// characterController.Move(characterController.transform.forward * Time.deltaTime * speed, Quaternion.identity);
		CharacterThirdPerson_t701D066717AA31A81BCCB2B926375896F0F18CF9* L_8 = __this->___characterController_11;
		CharacterThirdPerson_t701D066717AA31A81BCCB2B926375896F0F18CF9* L_9 = __this->___characterController_11;
		NullCheck(L_9);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_9, NULL);
		NullCheck(L_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_10, NULL);
		float L_12;
		L_12 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_11, L_12, NULL);
		float L_14 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_13, L_14, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16;
		L_16 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		NullCheck(L_8);
		VirtualActionInvoker2< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 >::Invoke(4 /* System.Void RootMotion.Demos.CharacterBase::Move(UnityEngine.Vector3,UnityEngine.Quaternion) */, L_8, L_15, L_16);
		// }
		return;
	}
}
// System.Void RootMotion.Demos.CharacterAnimationSimple::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterAnimationSimple__ctor_m2BF306F6E089D0D40B928AC567FF14515CD36638 (CharacterAnimationSimple_t0BFE1C39C7958BA5C23FC6CBF68A20923B0D9F5F* __this, const RuntimeMethod* method) 
{
	{
		CharacterAnimationBase__ctor_mF91A6533F51F2AE55380572031A9C0399CA2CCA3(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void RootMotion.Demos.CharacterAnimationThirdPerson::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterAnimationThirdPerson_Start_m9FF0C92801B8BE5F669EA6108BEF6CFB65DA1E6F (CharacterAnimationThirdPerson_t9965E1812210AC6B234D6A8BDB9986834DDA3F41* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.Start();
		CharacterAnimationBase_Start_m4D02DE1464823E1C57C05F95ECA7F38565B6DB36(__this, NULL);
		// animator = GetComponent<Animator>();
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0;
		L_0 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		__this->___animator_16 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___animator_16), (void*)L_0);
		// lastForward = transform.forward;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_1, NULL);
		__this->___lastForward_17 = L_2;
		// }
		return;
	}
}
// UnityEngine.Vector3 RootMotion.Demos.CharacterAnimationThirdPerson::GetPivotPoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CharacterAnimationThirdPerson_GetPivotPoint_m3AFBC4A176F3B1B2EA835C64DE0335BD671AB6A6 (CharacterAnimationThirdPerson_t9965E1812210AC6B234D6A8BDB9986834DDA3F41* __this, const RuntimeMethod* method) 
{
	{
		// return animator.pivotPosition;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = __this->___animator_16;
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Animator_get_pivotPosition_m2A6E669BC43633E12BEDF96ED73AB86EAACBA11B(L_0, NULL);
		return L_1;
	}
}
// System.Boolean RootMotion.Demos.CharacterAnimationThirdPerson::get_animationGrounded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CharacterAnimationThirdPerson_get_animationGrounded_m2F8A8C322F09CB93E9818B6967C9EDE3C19AB46A (CharacterAnimationThirdPerson_t9965E1812210AC6B234D6A8BDB9986834DDA3F41* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAA193CA062BC352B9697665F9774B74E3B83C961);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE021D410603DF53B6A7B74FAF5DD4A5EC4A06BBD);
		s_Il2CppMethodInitialized = true;
	}
	AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return animator.GetCurrentAnimatorStateInfo(0).IsName(groundedDirectional) || animator.GetCurrentAnimatorStateInfo(0).IsName(groundedStrafe);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = __this->___animator_16;
		NullCheck(L_0);
		AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 L_1;
		L_1 = Animator_GetCurrentAnimatorStateInfo_mD5B526FA605F6CFBC31B7DE36740F6AD1E534CAD(L_0, 0, NULL);
		V_0 = L_1;
		bool L_2;
		L_2 = AnimatorStateInfo_IsName_mB936F493D6BDDB9372C8E9D813CE0416B002C4D0((&V_0), _stringLiteralE021D410603DF53B6A7B74FAF5DD4A5EC4A06BBD, NULL);
		if (L_2)
		{
			goto IL_0035;
		}
	}
	{
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_3 = __this->___animator_16;
		NullCheck(L_3);
		AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 L_4;
		L_4 = Animator_GetCurrentAnimatorStateInfo_mD5B526FA605F6CFBC31B7DE36740F6AD1E534CAD(L_3, 0, NULL);
		V_0 = L_4;
		bool L_5;
		L_5 = AnimatorStateInfo_IsName_mB936F493D6BDDB9372C8E9D813CE0416B002C4D0((&V_0), _stringLiteralAA193CA062BC352B9697665F9774B74E3B83C961, NULL);
		return L_5;
	}

IL_0035:
	{
		return (bool)1;
	}
}
// System.Void RootMotion.Demos.CharacterAnimationThirdPerson::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterAnimationThirdPerson_Update_m2DB81BC0A0CD56A10F85C6F6C022DE2E2C5A0F8F (CharacterAnimationThirdPerson_t9965E1812210AC6B234D6A8BDB9986834DDA3F41* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral073636784DA1EA12164998BEE384713657E4BE14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral16A70DC8C790D0EFD53AE03FF23CB99D8B7A53CA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral288B53F014E2C53296CBC94785B0521CC621D509);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral724F6EF07C0D3FFFD32A55027218B65FB4F377E1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9DF28E2C80756BFACBF3215EA21F094B08573DA8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF3557B7DCEAF31B985FE1BDD394873B897B4521);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD07564F70E250E1B2184D654ACE4DECC7C3AE068);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEADE91E573B3BBA4B0C2F14237A82BADF354A2D6);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t G_B7_0 = 0;
	{
		// if (Time.deltaTime == 0f) return;
		float L_0;
		L_0 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		if ((!(((float)L_0) == ((float)(0.0f)))))
		{
			goto IL_000d;
		}
	}
	{
		// if (Time.deltaTime == 0f) return;
		return;
	}

IL_000d:
	{
		// animatePhysics = animator.updateMode == AnimatorUpdateMode.AnimatePhysics;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_1 = __this->___animator_16;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Animator_get_updateMode_m63C8A41D5D0F214FB5CF554B69CFBBEB6EE141DB(L_1, NULL);
		((CharacterAnimationBase_tF16F89D851897751BC15325508623E7909E14842*)__this)->___animatePhysics_6 = (bool)((((int32_t)L_2) == ((int32_t)1))? 1 : 0);
		// if (characterController.animState.jump) {
		CharacterThirdPerson_t701D066717AA31A81BCCB2B926375896F0F18CF9* L_3 = __this->___characterController_11;
		NullCheck(L_3);
		AnimState_t217CB34525B21DC85A816E042E22EA0CD4D6F91D* L_4 = (AnimState_t217CB34525B21DC85A816E042E22EA0CD4D6F91D*)(&L_3->___animState_49);
		bool L_5 = L_4->___jump_1;
		if (!L_5)
		{
			goto IL_0094;
		}
	}
	{
		// if (!lastJump)
		bool L_6 = __this->___lastJump_22;
		if (L_6)
		{
			goto IL_0094;
		}
	}
	{
		// float runCycle = Mathf.Repeat(animator.GetCurrentAnimatorStateInfo(0).normalizedTime + runCycleLegOffset, 1);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_7 = __this->___animator_16;
		NullCheck(L_7);
		AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 L_8;
		L_8 = Animator_GetCurrentAnimatorStateInfo_mD5B526FA605F6CFBC31B7DE36740F6AD1E534CAD(L_7, 0, NULL);
		V_2 = L_8;
		float L_9;
		L_9 = AnimatorStateInfo_get_normalizedTime_m087C7E5A72122ADF18EBB4AC8391103B9119CCC6((&V_2), NULL);
		float L_10 = __this->___runCycleLegOffset_14;
		float L_11;
		L_11 = Mathf_Repeat_m6F1560A163481BB311D685294E1B463C3E4EB3BA_inline(((float)il2cpp_codegen_add(L_9, L_10)), (1.0f), NULL);
		// float jumpLeg = (runCycle < 0.5f ? 1 : -1) * characterController.animState.moveDirection.z;
		if ((((float)L_11) < ((float)(0.5f))))
		{
			goto IL_006a;
		}
	}
	{
		G_B7_0 = (-1);
		goto IL_006b;
	}

IL_006a:
	{
		G_B7_0 = 1;
	}

IL_006b:
	{
		CharacterThirdPerson_t701D066717AA31A81BCCB2B926375896F0F18CF9* L_12 = __this->___characterController_11;
		NullCheck(L_12);
		AnimState_t217CB34525B21DC85A816E042E22EA0CD4D6F91D* L_13 = (AnimState_t217CB34525B21DC85A816E042E22EA0CD4D6F91D*)(&L_12->___animState_49);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_14 = (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)(&L_13->___moveDirection_0);
		float L_15 = L_14->___z_4;
		V_1 = ((float)il2cpp_codegen_multiply(((float)G_B7_0), L_15));
		// animator.SetFloat("JumpLeg", jumpLeg);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_16 = __this->___animator_16;
		float L_17 = V_1;
		NullCheck(L_16);
		Animator_SetFloat_m10C78733FAFC7AFEDBDACC48B7C66D3A35A0A7FE(L_16, _stringLiteral073636784DA1EA12164998BEE384713657E4BE14, L_17, NULL);
	}

IL_0094:
	{
		// lastJump = characterController.animState.jump;
		CharacterThirdPerson_t701D066717AA31A81BCCB2B926375896F0F18CF9* L_18 = __this->___characterController_11;
		NullCheck(L_18);
		AnimState_t217CB34525B21DC85A816E042E22EA0CD4D6F91D* L_19 = (AnimState_t217CB34525B21DC85A816E042E22EA0CD4D6F91D*)(&L_18->___animState_49);
		bool L_20 = L_19->___jump_1;
		__this->___lastJump_22 = L_20;
		// float angle = -GetAngleFromForward(lastForward) - deltaAngle;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = __this->___lastForward_17;
		float L_22;
		L_22 = CharacterAnimationBase_GetAngleFromForward_m3A3ADF7B4ED301B38C414525DA6BD509EAA75EF4(__this, L_21, NULL);
		float L_23 = __this->___deltaAngle_20;
		V_0 = ((float)il2cpp_codegen_subtract(((-L_22)), L_23));
		// deltaAngle = 0f;
		__this->___deltaAngle_20 = (0.0f);
		// lastForward = transform.forward;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24;
		L_24 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_24);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_24, NULL);
		__this->___lastForward_17 = L_25;
		// angle *= turnSensitivity * 0.01f;
		float L_26 = V_0;
		float L_27 = __this->___turnSensitivity_12;
		V_0 = ((float)il2cpp_codegen_multiply(L_26, ((float)il2cpp_codegen_multiply(L_27, (0.00999999978f)))));
		// angle = Mathf.Clamp(angle / Time.deltaTime, -1f, 1f);
		float L_28 = V_0;
		float L_29;
		L_29 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_30;
		L_30 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(((float)(L_28/L_29)), (-1.0f), (1.0f), NULL);
		V_0 = L_30;
		// animator.SetFloat("Turn", Mathf.Lerp(animator.GetFloat("Turn"), angle, Time.deltaTime * turnSpeed));
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_31 = __this->___animator_16;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_32 = __this->___animator_16;
		NullCheck(L_32);
		float L_33;
		L_33 = Animator_GetFloat_m10B455A15EB343175518CCBEE2818C2497CC678A(L_32, _stringLiteral9DF28E2C80756BFACBF3215EA21F094B08573DA8, NULL);
		float L_34 = V_0;
		float L_35;
		L_35 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_36 = __this->___turnSpeed_13;
		float L_37;
		L_37 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline(L_33, L_34, ((float)il2cpp_codegen_multiply(L_35, L_36)), NULL);
		NullCheck(L_31);
		Animator_SetFloat_m10C78733FAFC7AFEDBDACC48B7C66D3A35A0A7FE(L_31, _stringLiteral9DF28E2C80756BFACBF3215EA21F094B08573DA8, L_37, NULL);
		// animator.SetFloat("Forward", characterController.animState.moveDirection.z);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_38 = __this->___animator_16;
		CharacterThirdPerson_t701D066717AA31A81BCCB2B926375896F0F18CF9* L_39 = __this->___characterController_11;
		NullCheck(L_39);
		AnimState_t217CB34525B21DC85A816E042E22EA0CD4D6F91D* L_40 = (AnimState_t217CB34525B21DC85A816E042E22EA0CD4D6F91D*)(&L_39->___animState_49);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_41 = (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)(&L_40->___moveDirection_0);
		float L_42 = L_41->___z_4;
		NullCheck(L_38);
		Animator_SetFloat_m10C78733FAFC7AFEDBDACC48B7C66D3A35A0A7FE(L_38, _stringLiteral724F6EF07C0D3FFFD32A55027218B65FB4F377E1, L_42, NULL);
		// animator.SetFloat("Right", characterController.animState.moveDirection.x);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_43 = __this->___animator_16;
		CharacterThirdPerson_t701D066717AA31A81BCCB2B926375896F0F18CF9* L_44 = __this->___characterController_11;
		NullCheck(L_44);
		AnimState_t217CB34525B21DC85A816E042E22EA0CD4D6F91D* L_45 = (AnimState_t217CB34525B21DC85A816E042E22EA0CD4D6F91D*)(&L_44->___animState_49);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_46 = (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)(&L_45->___moveDirection_0);
		float L_47 = L_46->___x_2;
		NullCheck(L_43);
		Animator_SetFloat_m10C78733FAFC7AFEDBDACC48B7C66D3A35A0A7FE(L_43, _stringLiteral16A70DC8C790D0EFD53AE03FF23CB99D8B7A53CA, L_47, NULL);
		// animator.SetBool("Crouch", characterController.animState.crouch);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_48 = __this->___animator_16;
		CharacterThirdPerson_t701D066717AA31A81BCCB2B926375896F0F18CF9* L_49 = __this->___characterController_11;
		NullCheck(L_49);
		AnimState_t217CB34525B21DC85A816E042E22EA0CD4D6F91D* L_50 = (AnimState_t217CB34525B21DC85A816E042E22EA0CD4D6F91D*)(&L_49->___animState_49);
		bool L_51 = L_50->___crouch_2;
		NullCheck(L_48);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_48, _stringLiteral288B53F014E2C53296CBC94785B0521CC621D509, L_51, NULL);
		// animator.SetBool("OnGround", characterController.animState.onGround);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_52 = __this->___animator_16;
		CharacterThirdPerson_t701D066717AA31A81BCCB2B926375896F0F18CF9* L_53 = __this->___characterController_11;
		NullCheck(L_53);
		AnimState_t217CB34525B21DC85A816E042E22EA0CD4D6F91D* L_54 = (AnimState_t217CB34525B21DC85A816E042E22EA0CD4D6F91D*)(&L_53->___animState_49);
		bool L_55 = L_54->___onGround_3;
		NullCheck(L_52);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_52, _stringLiteralEADE91E573B3BBA4B0C2F14237A82BADF354A2D6, L_55, NULL);
		// animator.SetBool("IsStrafing", characterController.animState.isStrafing);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_56 = __this->___animator_16;
		CharacterThirdPerson_t701D066717AA31A81BCCB2B926375896F0F18CF9* L_57 = __this->___characterController_11;
		NullCheck(L_57);
		AnimState_t217CB34525B21DC85A816E042E22EA0CD4D6F91D* L_58 = (AnimState_t217CB34525B21DC85A816E042E22EA0CD4D6F91D*)(&L_57->___animState_49);
		bool L_59 = L_58->___isStrafing_4;
		NullCheck(L_56);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_56, _stringLiteralD07564F70E250E1B2184D654ACE4DECC7C3AE068, L_59, NULL);
		// if (!characterController.animState.onGround) {
		CharacterThirdPerson_t701D066717AA31A81BCCB2B926375896F0F18CF9* L_60 = __this->___characterController_11;
		NullCheck(L_60);
		AnimState_t217CB34525B21DC85A816E042E22EA0CD4D6F91D* L_61 = (AnimState_t217CB34525B21DC85A816E042E22EA0CD4D6F91D*)(&L_60->___animState_49);
		bool L_62 = L_61->___onGround_3;
		if (L_62)
		{
			goto IL_020f;
		}
	}
	{
		// animator.SetFloat ("Jump", characterController.animState.yVelocity);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_63 = __this->___animator_16;
		CharacterThirdPerson_t701D066717AA31A81BCCB2B926375896F0F18CF9* L_64 = __this->___characterController_11;
		NullCheck(L_64);
		AnimState_t217CB34525B21DC85A816E042E22EA0CD4D6F91D* L_65 = (AnimState_t217CB34525B21DC85A816E042E22EA0CD4D6F91D*)(&L_64->___animState_49);
		float L_66 = L_65->___yVelocity_5;
		NullCheck(L_63);
		Animator_SetFloat_m10C78733FAFC7AFEDBDACC48B7C66D3A35A0A7FE(L_63, _stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C, L_66, NULL);
	}

IL_020f:
	{
		// if (characterController.doubleJumpEnabled) animator.SetBool("DoubleJump", characterController.animState.doubleJump);
		CharacterThirdPerson_t701D066717AA31A81BCCB2B926375896F0F18CF9* L_67 = __this->___characterController_11;
		NullCheck(L_67);
		bool L_68 = L_67->___doubleJumpEnabled_37;
		if (!L_68)
		{
			goto IL_023c;
		}
	}
	{
		// if (characterController.doubleJumpEnabled) animator.SetBool("DoubleJump", characterController.animState.doubleJump);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_69 = __this->___animator_16;
		CharacterThirdPerson_t701D066717AA31A81BCCB2B926375896F0F18CF9* L_70 = __this->___characterController_11;
		NullCheck(L_70);
		AnimState_t217CB34525B21DC85A816E042E22EA0CD4D6F91D* L_71 = (AnimState_t217CB34525B21DC85A816E042E22EA0CD4D6F91D*)(&L_70->___animState_49);
		bool L_72 = L_71->___doubleJump_6;
		NullCheck(L_69);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_69, _stringLiteralAF3557B7DCEAF31B985FE1BDD394873B897B4521, L_72, NULL);
	}

IL_023c:
	{
		// characterController.animState.doubleJump = false;
		CharacterThirdPerson_t701D066717AA31A81BCCB2B926375896F0F18CF9* L_73 = __this->___characterController_11;
		NullCheck(L_73);
		AnimState_t217CB34525B21DC85A816E042E22EA0CD4D6F91D* L_74 = (AnimState_t217CB34525B21DC85A816E042E22EA0CD4D6F91D*)(&L_73->___animState_49);
		L_74->___doubleJump_6 = (bool)0;
		// if (characterController.animState.onGround && characterController.animState.moveDirection.z > 0f) {
		CharacterThirdPerson_t701D066717AA31A81BCCB2B926375896F0F18CF9* L_75 = __this->___characterController_11;
		NullCheck(L_75);
		AnimState_t217CB34525B21DC85A816E042E22EA0CD4D6F91D* L_76 = (AnimState_t217CB34525B21DC85A816E042E22EA0CD4D6F91D*)(&L_75->___animState_49);
		bool L_77 = L_76->___onGround_3;
		if (!L_77)
		{
			goto IL_028d;
		}
	}
	{
		CharacterThirdPerson_t701D066717AA31A81BCCB2B926375896F0F18CF9* L_78 = __this->___characterController_11;
		NullCheck(L_78);
		AnimState_t217CB34525B21DC85A816E042E22EA0CD4D6F91D* L_79 = (AnimState_t217CB34525B21DC85A816E042E22EA0CD4D6F91D*)(&L_78->___animState_49);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_80 = (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)(&L_79->___moveDirection_0);
		float L_81 = L_80->___z_4;
		if ((!(((float)L_81) > ((float)(0.0f)))))
		{
			goto IL_028d;
		}
	}
	{
		// animator.speed = animSpeedMultiplier;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_82 = __this->___animator_16;
		float L_83 = __this->___animSpeedMultiplier_15;
		NullCheck(L_82);
		Animator_set_speed_m933F4D6770122BC9D8A7FF82DE1CD33D514379FC(L_82, L_83, NULL);
		return;
	}

IL_028d:
	{
		// animator.speed = 1;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_84 = __this->___animator_16;
		NullCheck(L_84);
		Animator_set_speed_m933F4D6770122BC9D8A7FF82DE1CD33D514379FC(L_84, (1.0f), NULL);
		// }
		return;
	}
}
// System.Void RootMotion.Demos.CharacterAnimationThirdPerson::OnAnimatorMove()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterAnimationThirdPerson_OnAnimatorMove_m0718C6FACAF215A87CEF826314C2542FE5F13938 (CharacterAnimationThirdPerson_t9965E1812210AC6B234D6A8BDB9986834DDA3F41* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 f = animator.deltaRotation * Vector3.forward;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = __this->___animator_16;
		NullCheck(L_0);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1;
		L_1 = Animator_get_deltaRotation_m54839D596F81D477E91E2746E4141AB389238FFD(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_1, L_2, NULL);
		V_0 = L_3;
		// deltaAngle += Mathf.Atan2(f.x, f.z) * Mathf.Rad2Deg;
		float L_4 = __this->___deltaAngle_20;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		float L_6 = L_5.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_0;
		float L_8 = L_7.___z_4;
		float L_9;
		L_9 = atan2f(L_6, L_8);
		__this->___deltaAngle_20 = ((float)il2cpp_codegen_add(L_4, ((float)il2cpp_codegen_multiply(L_9, (57.2957802f)))));
		// if (characterController.fullRootMotion)
		CharacterThirdPerson_t701D066717AA31A81BCCB2B926375896F0F18CF9* L_10 = __this->___characterController_11;
		NullCheck(L_10);
		bool L_11;
		L_11 = CharacterThirdPerson_get_fullRootMotion_mBED6B5C55FDB74F8115F9E91BD4BEED0D9B97B83_inline(L_10, NULL);
		if (!L_11)
		{
			goto IL_0094;
		}
	}
	{
		// characterController.transform.position += animator.deltaPosition;
		CharacterThirdPerson_t701D066717AA31A81BCCB2B926375896F0F18CF9* L_12 = __this->___characterController_11;
		NullCheck(L_12);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_12, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14 = L_13;
		NullCheck(L_14);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_14, NULL);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_16 = __this->___animator_16;
		NullCheck(L_16);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Animator_get_deltaPosition_m1759DB2D343FDAFAA7FE85ED66451D5210B0A606(L_16, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_15, L_17, NULL);
		NullCheck(L_14);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_14, L_18, NULL);
		// characterController.transform.rotation *= animator.deltaRotation;
		CharacterThirdPerson_t701D066717AA31A81BCCB2B926375896F0F18CF9* L_19 = __this->___characterController_11;
		NullCheck(L_19);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20;
		L_20 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_19, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21 = L_20;
		NullCheck(L_21);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_22;
		L_22 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_21, NULL);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_23 = __this->___animator_16;
		NullCheck(L_23);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_24;
		L_24 = Animator_get_deltaRotation_m54839D596F81D477E91E2746E4141AB389238FFD(L_23, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_25;
		L_25 = Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(L_22, L_24, NULL);
		NullCheck(L_21);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_21, L_25, NULL);
		return;
	}

IL_0094:
	{
		// characterController.Move(animator.deltaPosition, animator.deltaRotation);
		CharacterThirdPerson_t701D066717AA31A81BCCB2B926375896F0F18CF9* L_26 = __this->___characterController_11;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_27 = __this->___animator_16;
		NullCheck(L_27);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Animator_get_deltaPosition_m1759DB2D343FDAFAA7FE85ED66451D5210B0A606(L_27, NULL);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_29 = __this->___animator_16;
		NullCheck(L_29);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_30;
		L_30 = Animator_get_deltaRotation_m54839D596F81D477E91E2746E4141AB389238FFD(L_29, NULL);
		NullCheck(L_26);
		VirtualActionInvoker2< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 >::Invoke(4 /* System.Void RootMotion.Demos.CharacterBase::Move(UnityEngine.Vector3,UnityEngine.Quaternion) */, L_26, L_28, L_30);
		// }
		return;
	}
}
// System.Void RootMotion.Demos.CharacterAnimationThirdPerson::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterAnimationThirdPerson__ctor_mD7F032D785DC3DB6266F38A4F379E49331E576FE (CharacterAnimationThirdPerson_t9965E1812210AC6B234D6A8BDB9986834DDA3F41* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField]  float turnSensitivity = 0.2f; // Animator turning sensitivity
		__this->___turnSensitivity_12 = (0.200000003f);
		// [SerializeField]  float turnSpeed = 5f; // Animator turning interpolation speed
		__this->___turnSpeed_13 = (5.0f);
		// [SerializeField]  float runCycleLegOffset = 0.2f; // The offset of leg positions in the running cycle
		__this->___runCycleLegOffset_14 = (0.200000003f);
		// [Range(0.1f,3f)] [SerializeField] float animSpeedMultiplier = 1; // How much the animation of the character will be multiplied by
		__this->___animSpeedMultiplier_15 = (1.0f);
		CharacterAnimationBase__ctor_mF91A6533F51F2AE55380572031A9C0399CA2CCA3(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Vector3 RootMotion.Demos.CharacterBase::GetGravity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CharacterBase_GetGravity_mCFE90A4BCE53AF081B179DA3F5A1ECC8D0F585A9 (CharacterBase_t1CFFD41AEAD8C28D01AD4FFC61BCDAA2C5AB4053* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (gravityTarget != null) {
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___gravityTarget_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0044;
		}
	}
	{
		// return (gravityTarget.position - transform.position).normalized * Physics.gravity.magnitude;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->___gravityTarget_4;
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_3, L_5, NULL);
		V_0 = L_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_0), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Physics_get_gravity_m94393492AE4ED8B38A22ECCDCD2DDDB71BFA010D(NULL);
		V_0 = L_8;
		float L_9;
		L_9 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_0), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_7, L_9, NULL);
		return L_10;
	}

IL_0044:
	{
		// return Physics.gravity;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Physics_get_gravity_m94393492AE4ED8B38A22ECCDCD2DDDB71BFA010D(NULL);
		return L_11;
	}
}
// System.Void RootMotion.Demos.CharacterBase::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterBase_Start_m595F6FC17451E05962AFA82B863825E4773D8B18 (CharacterBase_t1CFFD41AEAD8C28D01AD4FFC61BCDAA2C5AB4053* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m820398EDBF1D3766C3166A0C323A127662A29A14_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhysicMaterial_t4ECED34E04BB2148333467208361A5FBFDCD7131_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// capsule = GetComponent<Collider>() as CapsuleCollider;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0;
		L_0 = Component_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m820398EDBF1D3766C3166A0C323A127662A29A14(__this, Component_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m820398EDBF1D3766C3166A0C323A127662A29A14_RuntimeMethod_var);
		__this->___capsule_17 = ((CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808*)IsInstClass((RuntimeObject*)L_0, CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___capsule_17), (void*)((CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808*)IsInstClass((RuntimeObject*)L_0, CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808_il2cpp_TypeInfo_var)));
		// r = GetComponent<Rigidbody>();
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_1;
		L_1 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(__this, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		__this->___r_13 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___r_13), (void*)L_1);
		// originalHeight = capsule.height;
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_2 = __this->___capsule_17;
		NullCheck(L_2);
		float L_3;
		L_3 = CapsuleCollider_get_height_m63A31072F296AEE6222DC9C88704882BB6A54A24(L_2, NULL);
		__this->___originalHeight_15 = L_3;
		// originalCenter = capsule.center;
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_4 = __this->___capsule_17;
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = CapsuleCollider_get_center_mC12CE0A66A1104CEB7D23F39596D0E45578419C2(L_4, NULL);
		__this->___originalCenter_16 = L_5;
		// zeroFrictionMaterial = new PhysicMaterial();
		PhysicMaterial_t4ECED34E04BB2148333467208361A5FBFDCD7131* L_6 = (PhysicMaterial_t4ECED34E04BB2148333467208361A5FBFDCD7131*)il2cpp_codegen_object_new(PhysicMaterial_t4ECED34E04BB2148333467208361A5FBFDCD7131_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		PhysicMaterial__ctor_mD8ECF21D92EBF6A8C5517E7EB4D2D089B4F78D3E(L_6, NULL);
		__this->___zeroFrictionMaterial_11 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___zeroFrictionMaterial_11), (void*)L_6);
		// zeroFrictionMaterial.dynamicFriction = 0f;
		PhysicMaterial_t4ECED34E04BB2148333467208361A5FBFDCD7131* L_7 = __this->___zeroFrictionMaterial_11;
		NullCheck(L_7);
		PhysicMaterial_set_dynamicFriction_mF41FC9F0BB5E70CF1AD4322FE67745AD612D7197(L_7, (0.0f), NULL);
		// zeroFrictionMaterial.staticFriction = 0f;
		PhysicMaterial_t4ECED34E04BB2148333467208361A5FBFDCD7131* L_8 = __this->___zeroFrictionMaterial_11;
		NullCheck(L_8);
		PhysicMaterial_set_staticFriction_m737457B7A2346BFB5D05BC7322F2A49823243011(L_8, (0.0f), NULL);
		// zeroFrictionMaterial.frictionCombine = PhysicMaterialCombine.Minimum;
		PhysicMaterial_t4ECED34E04BB2148333467208361A5FBFDCD7131* L_9 = __this->___zeroFrictionMaterial_11;
		NullCheck(L_9);
		PhysicMaterial_set_frictionCombine_m4F81ED0AC04BF634B0ACB33629CDB16C2ECBD28D(L_9, 2, NULL);
		// zeroFrictionMaterial.bounciness = 0f;
		PhysicMaterial_t4ECED34E04BB2148333467208361A5FBFDCD7131* L_10 = __this->___zeroFrictionMaterial_11;
		NullCheck(L_10);
		PhysicMaterial_set_bounciness_m99D8D24F76D60306CC4CFE38AD43BF240F84FDF9(L_10, (0.0f), NULL);
		// zeroFrictionMaterial.bounceCombine = PhysicMaterialCombine.Minimum;
		PhysicMaterial_t4ECED34E04BB2148333467208361A5FBFDCD7131* L_11 = __this->___zeroFrictionMaterial_11;
		NullCheck(L_11);
		PhysicMaterial_set_bounceCombine_m64DBF7D0F9C447DD5E0D19A6A24F0F5945C0BB1D(L_11, 2, NULL);
		// highFrictionMaterial = new PhysicMaterial();
		PhysicMaterial_t4ECED34E04BB2148333467208361A5FBFDCD7131* L_12 = (PhysicMaterial_t4ECED34E04BB2148333467208361A5FBFDCD7131*)il2cpp_codegen_object_new(PhysicMaterial_t4ECED34E04BB2148333467208361A5FBFDCD7131_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		PhysicMaterial__ctor_mD8ECF21D92EBF6A8C5517E7EB4D2D089B4F78D3E(L_12, NULL);
		__this->___highFrictionMaterial_12 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___highFrictionMaterial_12), (void*)L_12);
		// r.constraints = RigidbodyConstraints.FreezeRotationX | RigidbodyConstraints.FreezeRotationY | RigidbodyConstraints.FreezeRotationZ;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_13 = __this->___r_13;
		NullCheck(L_13);
		Rigidbody_set_constraints_mE81BF0DAEB980E320538231E092CA4663885A9A3(L_13, ((int32_t)112), NULL);
		// }
		return;
	}
}
// UnityEngine.RaycastHit RootMotion.Demos.CharacterBase::GetSpherecastHit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 CharacterBase_GetSpherecastHit_m788972E6C7B0DA5782AE450AA775D79033F8DF89 (CharacterBase_t1CFFD41AEAD8C28D01AD4FFC61BCDAA2C5AB4053* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// Vector3 up = transform.up;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2(L_0, NULL);
		V_0 = L_1;
		// Ray ray = new Ray (r.position + up * airborneThreshold, -up);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_2 = __this->___r_13;
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Rigidbody_get_position_m4ECB79BDBBF8FD1EA572EDB792D3330DDED24691(L_2, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = V_0;
		float L_5 = __this->___airborneThreshold_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_4, L_5, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_3, L_6, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline(L_8, NULL);
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Ray__ctor_mE298992FD10A3894C38373198385F345C58BD64C((&L_10), L_7, L_9, /*hidden argument*/NULL);
		// RaycastHit h = new RaycastHit();
		il2cpp_codegen_initobj((&V_1), sizeof(RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5));
		// h.point = transform.position - transform.transform.up * airborneThreshold;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_11);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_11, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_13);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_13, NULL);
		NullCheck(L_14);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2(L_14, NULL);
		float L_16 = __this->___airborneThreshold_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_15, L_16, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_12, L_17, NULL);
		RaycastHit_set_point_m3B63BEB25A82BFCF9FBB300022D0362BC2CF9E11((&V_1), L_18, NULL);
		// h.normal = transform.up;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19;
		L_19 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_19);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2(L_19, NULL);
		RaycastHit_set_normal_m97DDF1CBE8ADF1F72AA30BC83870615ABB38C88B((&V_1), L_20, NULL);
		// Physics.SphereCast(ray, spherecastRadius, out h, airborneThreshold * 2f, groundLayers);
		float L_21 = __this->___spherecastRadius_9;
		float L_22 = __this->___airborneThreshold_6;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_23 = __this->___groundLayers_10;
		int32_t L_24;
		L_24 = LayerMask_op_Implicit_m7F5A5B9D079281AC445ED39DEE1FCFA9D795810D(L_23, NULL);
		bool L_25;
		L_25 = Physics_SphereCast_mF6538C6C4E3A9BBD81B686437CC91F3A93C1F3E7(L_10, L_21, (&V_1), ((float)il2cpp_codegen_multiply(L_22, (2.0f))), L_24, NULL);
		// return h;
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 L_26 = V_1;
		return L_26;
	}
}
// System.Single RootMotion.Demos.CharacterBase::GetAngleFromForward(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CharacterBase_GetAngleFromForward_mCB3C3BDEC06317D3F16CDBF493517CFB3E66BC91 (CharacterBase_t1CFFD41AEAD8C28D01AD4FFC61BCDAA2C5AB4053* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_worldDirection, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 local = transform.InverseTransformDirection(worldDirection);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___0_worldDirection;
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_InverseTransformDirection_m69C077B881A98B08C7F231EFC49429C906FBC575(L_0, L_1, NULL);
		V_0 = L_2;
		// return Mathf.Atan2 (local.x, local.z) * Mathf.Rad2Deg;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = V_0;
		float L_4 = L_3.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		float L_6 = L_5.___z_4;
		float L_7;
		L_7 = atan2f(L_4, L_6);
		return ((float)il2cpp_codegen_multiply(L_7, (57.2957802f)));
	}
}
// System.Void RootMotion.Demos.CharacterBase::RigidbodyRotateAround(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterBase_RigidbodyRotateAround_m36EE6AEC485FE2E60F333D149C298482487734F7 (CharacterBase_t1CFFD41AEAD8C28D01AD4FFC61BCDAA2C5AB4053* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_point, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_axis, float ___2_angle, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// Quaternion rotation = Quaternion.AngleAxis(angle, axis);
		float L_0 = ___2_angle;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___1_axis;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2;
		L_2 = Quaternion_AngleAxis_mF37022977B297E63AA70D69EA1C4C922FF22CC80(L_0, L_1, NULL);
		V_0 = L_2;
		// Vector3 d = transform.position - point;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = ___0_point;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_4, L_5, NULL);
		V_1 = L_6;
		// r.MovePosition(point + rotation * d);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_7 = __this->___r_13;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_point;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_9 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_9, L_10, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_8, L_11, NULL);
		NullCheck(L_7);
		Rigidbody_MovePosition_mB2CD29ABC8F59AC338C0A3A5A6B75C38FDA92CA9(L_7, L_12, NULL);
		// r.MoveRotation(rotation * transform.rotation);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_13 = __this->___r_13;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_15);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16;
		L_16 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_15, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_17;
		L_17 = Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(L_14, L_16, NULL);
		NullCheck(L_13);
		Rigidbody_MoveRotation_m85825C7206E770E39DED9EE6D792702F577A891D(L_13, L_17, NULL);
		// }
		return;
	}
}
// System.Void RootMotion.Demos.CharacterBase::ScaleCapsule(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterBase_ScaleCapsule_mA8553FB8823AF9233312F64A1F1203EF33329E45 (CharacterBase_t1CFFD41AEAD8C28D01AD4FFC61BCDAA2C5AB4053* __this, float ___0_mlp, const RuntimeMethod* method) 
{
	{
		// if (capsule.height != originalHeight * mlp) {
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_0 = __this->___capsule_17;
		NullCheck(L_0);
		float L_1;
		L_1 = CapsuleCollider_get_height_m63A31072F296AEE6222DC9C88704882BB6A54A24(L_0, NULL);
		float L_2 = __this->___originalHeight_15;
		float L_3 = ___0_mlp;
		if ((((float)L_1) == ((float)((float)il2cpp_codegen_multiply(L_2, L_3)))))
		{
			goto IL_0075;
		}
	}
	{
		// capsule.height = Mathf.MoveTowards (capsule.height, originalHeight * mlp, Time.deltaTime * 4);
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_4 = __this->___capsule_17;
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_5 = __this->___capsule_17;
		NullCheck(L_5);
		float L_6;
		L_6 = CapsuleCollider_get_height_m63A31072F296AEE6222DC9C88704882BB6A54A24(L_5, NULL);
		float L_7 = __this->___originalHeight_15;
		float L_8 = ___0_mlp;
		float L_9;
		L_9 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_10;
		L_10 = Mathf_MoveTowards_m69751B5EC50D8E7127D4BB2C8D908E38808AF45D_inline(L_6, ((float)il2cpp_codegen_multiply(L_7, L_8)), ((float)il2cpp_codegen_multiply(L_9, (4.0f))), NULL);
		NullCheck(L_4);
		CapsuleCollider_set_height_m5DAE3DC5AD851E30C5A29AC7A22F36BE1E205BBB(L_4, L_10, NULL);
		// capsule.center = Vector3.MoveTowards (capsule.center, originalCenter * mlp, Time.deltaTime * 2);
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_11 = __this->___capsule_17;
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_12 = __this->___capsule_17;
		NullCheck(L_12);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = CapsuleCollider_get_center_mC12CE0A66A1104CEB7D23F39596D0E45578419C2(L_12, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = __this->___originalCenter_16;
		float L_15 = ___0_mlp;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_14, L_15, NULL);
		float L_17;
		L_17 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Vector3_MoveTowards_m0363264647799F3173AC37F8E819F98298249B08_inline(L_13, L_16, ((float)il2cpp_codegen_multiply(L_17, (2.0f))), NULL);
		NullCheck(L_11);
		CapsuleCollider_set_center_m242D92DAEF25887C6A87A0777E4E624C0A431A2E(L_11, L_18, NULL);
	}

IL_0075:
	{
		// }
		return;
	}
}
// System.Void RootMotion.Demos.CharacterBase::HighFriction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterBase_HighFriction_mD3CBCC9C25E6764075B87ED0D6BD3526DD333D5A (CharacterBase_t1CFFD41AEAD8C28D01AD4FFC61BCDAA2C5AB4053* __this, const RuntimeMethod* method) 
{
	{
		// capsule.material = highFrictionMaterial;
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_0 = __this->___capsule_17;
		PhysicMaterial_t4ECED34E04BB2148333467208361A5FBFDCD7131* L_1 = __this->___highFrictionMaterial_12;
		NullCheck(L_0);
		Collider_set_material_mE6FB0AA80863EA6746CD99606C90DB97DBBC4476(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void RootMotion.Demos.CharacterBase::ZeroFriction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterBase_ZeroFriction_mFB644325143655479ADA27CD1B64DDC02B0C8CB1 (CharacterBase_t1CFFD41AEAD8C28D01AD4FFC61BCDAA2C5AB4053* __this, const RuntimeMethod* method) 
{
	{
		// capsule.material = zeroFrictionMaterial;
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_0 = __this->___capsule_17;
		PhysicMaterial_t4ECED34E04BB2148333467208361A5FBFDCD7131* L_1 = __this->___zeroFrictionMaterial_11;
		NullCheck(L_0);
		Collider_set_material_mE6FB0AA80863EA6746CD99606C90DB97DBBC4476(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Single RootMotion.Demos.CharacterBase::GetSlopeDamper(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CharacterBase_GetSlopeDamper_m61B1CA4C6ECA393B7515ECB7DBE93B2A90FE0B30 (CharacterBase_t1CFFD41AEAD8C28D01AD4FFC61BCDAA2C5AB4053* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_velocity, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_groundNormal, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// float angle = 90f - Vector3.Angle(velocity, groundNormal);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_velocity;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___1_groundNormal;
		float L_2;
		L_2 = Vector3_Angle_mB16906B482814C140FE5BA9D041D2DC11E42A68D_inline(L_0, L_1, NULL);
		V_0 = ((float)il2cpp_codegen_subtract((90.0f), L_2));
		// angle -= slopeStartAngle;
		float L_3 = V_0;
		float L_4 = __this->___slopeStartAngle_7;
		V_0 = ((float)il2cpp_codegen_subtract(L_3, L_4));
		// float range = slopeEndAngle - slopeStartAngle;
		float L_5 = __this->___slopeEndAngle_8;
		float L_6 = __this->___slopeStartAngle_7;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_6));
		// return 1f - Mathf.Clamp(angle / range, 0f, 1f);
		float L_7 = V_0;
		float L_8 = V_1;
		float L_9;
		L_9 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(((float)(L_7/L_8)), (0.0f), (1.0f), NULL);
		return ((float)il2cpp_codegen_subtract((1.0f), L_9));
	}
}
// System.Void RootMotion.Demos.CharacterBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterBase__ctor_mC3B30A5FC3BFFD9FD05A5BE061D1FC2238940E94 (CharacterBase_t1CFFD41AEAD8C28D01AD4FFC61BCDAA2C5AB4053* __this, const RuntimeMethod* method) 
{
	{
		// public float gravityMultiplier = 2f; // gravity modifier - often higher than natural gravity feels right for game characters
		__this->___gravityMultiplier_5 = (2.0f);
		// public float airborneThreshold = 0.6f; // Height from ground after which the character is considered airborne
		__this->___airborneThreshold_6 = (0.600000024f);
		// public float slopeStartAngle = 50f; // The start angle of velocity dampering on slopes
		__this->___slopeStartAngle_7 = (50.0f);
		// public float slopeEndAngle = 85f; // The end angle of velocity dampering on slopes
		__this->___slopeEndAngle_8 = (85.0f);
		// public float spherecastRadius = 0.1f; // The radius of sperecasting
		__this->___spherecastRadius_9 = (0.100000001f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean RootMotion.Demos.CharacterThirdPerson::get_fullRootMotion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CharacterThirdPerson_get_fullRootMotion_mBED6B5C55FDB74F8115F9E91BD4BEED0D9B97B83 (CharacterThirdPerson_t701D066717AA31A81BCCB2B926375896F0F18CF9* __this, const RuntimeMethod* method) 
{
	{
		// public bool fullRootMotion { get; set; }
		bool L_0 = __this->___U3CfullRootMotionU3Ek__BackingField_47;
		return L_0;
	}
}
// System.Void RootMotion.Demos.CharacterThirdPerson::set_fullRootMotion(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterThirdPerson_set_fullRootMotion_m091DAA837AB134E9806FD3A3C0DB97FF77C9DE44 (CharacterThirdPerson_t701D066717AA31A81BCCB2B926375896F0F18CF9* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool fullRootMotion { get; set; }
		bool L_0 = ___0_value;
		__this->___U3CfullRootMotionU3Ek__BackingField_47 = L_0;
		return;
	}
}
// System.Boolean RootMotion.Demos.CharacterThirdPerson::get_onGround()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CharacterThirdPerson_get_onGround_m9C9555A5C749F8F337E48584713AC44497253957 (CharacterThirdPerson_t701D066717AA31A81BCCB2B926375896F0F18CF9* __this, const RuntimeMethod* method) 
{
	{
		// public bool onGround { get; private set; }
		bool L_0 = __this->___U3ConGroundU3Ek__BackingField_48;
		return L_0;
	}
}
// System.Void RootMotion.Demos.CharacterThirdPerson::set_onGround(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterThirdPerson_set_onGround_m6A0C64AF41BD4C01EA6F48947318AED10EA6C298 (CharacterThirdPerson_t701D066717AA31A81BCCB2B926375896F0F18CF9* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool onGround { get; private set; }
		bool L_0 = ___0_value;
		__this->___U3ConGroundU3Ek__BackingField_48 = L_0;
		return;
	}
}
// System.Void RootMotion.Demos.CharacterThirdPerson::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterThirdPerson_Start_mC6B6B8D7FD1D5B68C1AB544946B216F7BA72F43D (CharacterThirdPerson_t701D066717AA31A81BCCB2B926375896F0F18CF9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.Start();
		CharacterBase_Start_m595F6FC17451E05962AFA82B863825E4773D8B18(__this, NULL);
		// animator = GetComponent<Animator>();
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0;
		L_0 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		__this->___animator_51 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___animator_51), (void*)L_0);
		// if (animator == null) animator = characterAnimation.GetComponent<Animator>();
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_1 = __this->___animator_51;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_0031;
		}
	}
	{
		// if (animator == null) animator = characterAnimation.GetComponent<Animator>();
		CharacterAnimationBase_tF16F89D851897751BC15325508623E7909E14842* L_3 = __this->___characterAnimation_18;
		NullCheck(L_3);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_4;
		L_4 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(L_3, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		__this->___animator_51 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___animator_51), (void*)L_4);
	}

IL_0031:
	{
		// wallNormal = -gravity.normalized;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_5 = (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)(&__this->___gravity_71);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline(L_5, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline(L_6, NULL);
		__this->___wallNormal_62 = L_7;
		// onGround = true;
		CharacterThirdPerson_set_onGround_m6A0C64AF41BD4C01EA6F48947318AED10EA6C298_inline(__this, (bool)1, NULL);
		// animState.onGround = true;
		AnimState_t217CB34525B21DC85A816E042E22EA0CD4D6F91D* L_8 = (AnimState_t217CB34525B21DC85A816E042E22EA0CD4D6F91D*)(&__this->___animState_49);
		L_8->___onGround_3 = (bool)1;
		// if (cam != null) cam.enabled = false;
		CameraController_t1AE8F30FD3CB14582A1D7EC6F704EE3F49D69412* L_9 = __this->___cam_20;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_9, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_10)
		{
			goto IL_0074;
		}
	}
	{
		// if (cam != null) cam.enabled = false;
		CameraController_t1AE8F30FD3CB14582A1D7EC6F704EE3F49D69412* L_11 = __this->___cam_20;
		NullCheck(L_11);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_11, (bool)0, NULL);
	}

IL_0074:
	{
		// }
		return;
	}
}
// System.Void RootMotion.Demos.CharacterThirdPerson::OnAnimatorMove()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterThirdPerson_OnAnimatorMove_m62DDAB835F5CB3BBDC1F8865AF6EADB088DA61CB (CharacterThirdPerson_t701D066717AA31A81BCCB2B926375896F0F18CF9* __this, const RuntimeMethod* method) 
{
	{
		// Move (animator.deltaPosition, animator.deltaRotation);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = __this->___animator_51;
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Animator_get_deltaPosition_m1759DB2D343FDAFAA7FE85ED66451D5210B0A606(L_0, NULL);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_2 = __this->___animator_51;
		NullCheck(L_2);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3;
		L_3 = Animator_get_deltaRotation_m54839D596F81D477E91E2746E4141AB389238FFD(L_2, NULL);
		VirtualActionInvoker2< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 >::Invoke(4 /* System.Void RootMotion.Demos.CharacterBase::Move(UnityEngine.Vector3,UnityEngine.Quaternion) */, __this, L_1, L_3);
		// }
		return;
	}
}
// System.Void RootMotion.Demos.CharacterThirdPerson::Move(UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterThirdPerson_Move_mA24F5B4F2C24D92FB9A7BFF623C02B029106097A (CharacterThirdPerson_t701D066717AA31A81BCCB2B926375896F0F18CF9* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_deltaPosition, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_deltaRotation, const RuntimeMethod* method) 
{
	{
		// fixedDeltaTime += Time.deltaTime;
		float L_0 = __this->___fixedDeltaTime_66;
		float L_1;
		L_1 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___fixedDeltaTime_66 = ((float)il2cpp_codegen_add(L_0, L_1));
		// fixedDeltaPosition += deltaPosition;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = __this->___fixedDeltaPosition_67;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___0_deltaPosition;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_2, L_3, NULL);
		__this->___fixedDeltaPosition_67 = L_4;
		// fixedDeltaRotation *= deltaRotation;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5 = __this->___fixedDeltaRotation_68;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = ___1_deltaRotation;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7;
		L_7 = Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(L_5, L_6, NULL);
		__this->___fixedDeltaRotation_68 = L_7;
		// }
		return;
	}
}
// System.Void RootMotion.Demos.CharacterThirdPerson::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterThirdPerson_FixedUpdate_mC581B13453DA71BEFCD9365228F58C4C359AE49B (CharacterThirdPerson_t701D066717AA31A81BCCB2B926375896F0F18CF9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	CharacterThirdPerson_t701D066717AA31A81BCCB2B926375896F0F18CF9* G_B2_0 = NULL;
	CharacterThirdPerson_t701D066717AA31A81BCCB2B926375896F0F18CF9* G_B1_0 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	CharacterThirdPerson_t701D066717AA31A81BCCB2B926375896F0F18CF9* G_B3_1 = NULL;
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* G_B7_0 = NULL;
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* G_B6_0 = NULL;
	int32_t G_B8_0 = 0;
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* G_B8_1 = NULL;
	int32_t G_B18_0 = 0;
	CharacterThirdPerson_t701D066717AA31A81BCCB2B926375896F0F18CF9* G_B36_0 = NULL;
	CharacterThirdPerson_t701D066717AA31A81BCCB2B926375896F0F18CF9* G_B35_0 = NULL;
	float G_B37_0 = 0.0f;
	CharacterThirdPerson_t701D066717AA31A81BCCB2B926375896F0F18CF9* G_B37_1 = NULL;
	{
		// gravity = fullRootMotion? Vector3.zero: GetGravity();
		bool L_0;
		L_0 = CharacterThirdPerson_get_fullRootMotion_mBED6B5C55FDB74F8115F9E91BD4BEED0D9B97B83_inline(__this, NULL);
		G_B1_0 = __this;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0011;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = CharacterBase_GetGravity_mCFE90A4BCE53AF081B179DA3F5A1ECC8D0F585A9(__this, NULL);
		G_B3_0 = L_1;
		G_B3_1 = G_B1_0;
		goto IL_0016;
	}

IL_0011:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		G_B3_0 = L_2;
		G_B3_1 = G_B2_0;
	}

IL_0016:
	{
		NullCheck(G_B3_1);
		G_B3_1->___gravity_71 = G_B3_0;
		// verticalVelocity = V3Tools.ExtractVertical(r.velocity, gravity, 1f);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_3 = ((CharacterBase_t1CFFD41AEAD8C28D01AD4FFC61BCDAA2C5AB4053*)__this)->___r_13;
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_3, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = __this->___gravity_71;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = V3Tools_ExtractVertical_m67D145D321D3D9A1607A57C9D79AC189B894A097(L_4, L_5, (1.0f), NULL);
		__this->___verticalVelocity_72 = L_6;
		// velocityY = verticalVelocity.magnitude;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_7 = (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)(&__this->___verticalVelocity_72);
		float L_8;
		L_8 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline(L_7, NULL);
		__this->___velocityY_73 = L_8;
		// if (Vector3.Dot(verticalVelocity, gravity) > 0f) velocityY = -velocityY;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = __this->___verticalVelocity_72;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = __this->___gravity_71;
		float L_11;
		L_11 = Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline(L_9, L_10, NULL);
		if ((!(((float)L_11) > ((float)(0.0f)))))
		{
			goto IL_0072;
		}
	}
	{
		// if (Vector3.Dot(verticalVelocity, gravity) > 0f) velocityY = -velocityY;
		float L_12 = __this->___velocityY_73;
		__this->___velocityY_73 = ((-L_12));
	}

IL_0072:
	{
		// r.interpolation = smoothPhysics? RigidbodyInterpolation.Interpolate: RigidbodyInterpolation.None;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_13 = ((CharacterBase_t1CFFD41AEAD8C28D01AD4FFC61BCDAA2C5AB4053*)__this)->___r_13;
		bool L_14 = __this->___smoothPhysics_22;
		G_B6_0 = L_13;
		if (L_14)
		{
			G_B7_0 = L_13;
			goto IL_0083;
		}
	}
	{
		G_B8_0 = 0;
		G_B8_1 = G_B6_0;
		goto IL_0084;
	}

IL_0083:
	{
		G_B8_0 = 1;
		G_B8_1 = G_B7_0;
	}

IL_0084:
	{
		NullCheck(G_B8_1);
		Rigidbody_set_interpolation_mC7D39114A7AC6ED0AB2B40FECA4E2ED3C1D7603C(G_B8_1, G_B8_0, NULL);
		// characterAnimation.smoothFollow = smoothPhysics;
		CharacterAnimationBase_tF16F89D851897751BC15325508623E7909E14842* L_15 = __this->___characterAnimation_18;
		bool L_16 = __this->___smoothPhysics_22;
		NullCheck(L_15);
		L_15->___smoothFollow_4 = L_16;
		// MoveFixed(fixedDeltaPosition);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = __this->___fixedDeltaPosition_67;
		CharacterThirdPerson_MoveFixed_m5D78629B640CE1B09FB05CC3BAE6F9E70B5BBC0C(__this, L_17, NULL);
		// fixedDeltaTime = 0f;
		__this->___fixedDeltaTime_66 = (0.0f);
		// fixedDeltaPosition = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		__this->___fixedDeltaPosition_67 = L_18;
		// r.MoveRotation(transform.rotation * fixedDeltaRotation);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_19 = ((CharacterBase_t1CFFD41AEAD8C28D01AD4FFC61BCDAA2C5AB4053*)__this)->___r_13;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20;
		L_20 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_20);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_21;
		L_21 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_20, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_22 = __this->___fixedDeltaRotation_68;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_23;
		L_23 = Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(L_21, L_22, NULL);
		NullCheck(L_19);
		Rigidbody_MoveRotation_m85825C7206E770E39DED9EE6D792702F577A891D(L_19, L_23, NULL);
		// fixedDeltaRotation = Quaternion.identity;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_24;
		L_24 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		__this->___fixedDeltaRotation_68 = L_24;
		// Rotate();
		VirtualActionInvoker0::Invoke(9 /* System.Void RootMotion.Demos.CharacterThirdPerson::Rotate() */, __this);
		// GroundCheck (); // detect and stick to ground
		CharacterThirdPerson_GroundCheck_m1704CEB107B741D1FFCE6E7326DE8286ECC166F0(__this, NULL);
		// if (userControl.state.move == Vector3.zero && groundDistance < airborneThreshold * 0.5f) HighFriction();
		UserControlThirdPerson_t84D27C4D05AE0B01CDABC9C382DEDD23F3943690* L_25 = __this->___userControl_19;
		NullCheck(L_25);
		State_t1C2106417C1C59FC418E1C9F846E928466513D3C* L_26 = (State_t1C2106417C1C59FC418E1C9F846E928466513D3C*)(&L_25->___state_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = L_26->___move_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		bool L_29;
		L_29 = Vector3_op_Equality_mCDCBB8D2EDC3D3BF20F31A25ACB34705D352B479_inline(L_27, L_28, NULL);
		if (!L_29)
		{
			goto IL_012c;
		}
	}
	{
		float L_30 = __this->___groundDistance_59;
		float L_31 = ((CharacterBase_t1CFFD41AEAD8C28D01AD4FFC61BCDAA2C5AB4053*)__this)->___airborneThreshold_6;
		if ((!(((float)L_30) < ((float)((float)il2cpp_codegen_multiply(L_31, (0.5f)))))))
		{
			goto IL_012c;
		}
	}
	{
		// if (userControl.state.move == Vector3.zero && groundDistance < airborneThreshold * 0.5f) HighFriction();
		CharacterBase_HighFriction_mD3CBCC9C25E6764075B87ED0D6BD3526DD333D5A(__this, NULL);
		goto IL_0132;
	}

IL_012c:
	{
		// else ZeroFriction();
		CharacterBase_ZeroFriction_mFB644325143655479ADA27CD1B64DDC02B0C8CB1(__this, NULL);
	}

IL_0132:
	{
		// bool stopSlide = !fullRootMotion && onGround && userControl.state.move == Vector3.zero && r.velocity.magnitude < 0.5f && groundDistance < airborneThreshold * 0.5f;
		bool L_32;
		L_32 = CharacterThirdPerson_get_fullRootMotion_mBED6B5C55FDB74F8115F9E91BD4BEED0D9B97B83_inline(__this, NULL);
		if (L_32)
		{
			goto IL_018e;
		}
	}
	{
		bool L_33;
		L_33 = CharacterThirdPerson_get_onGround_m9C9555A5C749F8F337E48584713AC44497253957_inline(__this, NULL);
		if (!L_33)
		{
			goto IL_018e;
		}
	}
	{
		UserControlThirdPerson_t84D27C4D05AE0B01CDABC9C382DEDD23F3943690* L_34 = __this->___userControl_19;
		NullCheck(L_34);
		State_t1C2106417C1C59FC418E1C9F846E928466513D3C* L_35 = (State_t1C2106417C1C59FC418E1C9F846E928466513D3C*)(&L_34->___state_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36 = L_35->___move_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37;
		L_37 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		bool L_38;
		L_38 = Vector3_op_Equality_mCDCBB8D2EDC3D3BF20F31A25ACB34705D352B479_inline(L_36, L_37, NULL);
		if (!L_38)
		{
			goto IL_018e;
		}
	}
	{
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_39 = ((CharacterBase_t1CFFD41AEAD8C28D01AD4FFC61BCDAA2C5AB4053*)__this)->___r_13;
		NullCheck(L_39);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40;
		L_40 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_39, NULL);
		V_1 = L_40;
		float L_41;
		L_41 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_1), NULL);
		if ((!(((float)L_41) < ((float)(0.5f)))))
		{
			goto IL_018e;
		}
	}
	{
		float L_42 = __this->___groundDistance_59;
		float L_43 = ((CharacterBase_t1CFFD41AEAD8C28D01AD4FFC61BCDAA2C5AB4053*)__this)->___airborneThreshold_6;
		G_B18_0 = ((((float)L_42) < ((float)((float)il2cpp_codegen_multiply(L_43, (0.5f)))))? 1 : 0);
		goto IL_018f;
	}

IL_018e:
	{
		G_B18_0 = 0;
	}

IL_018f:
	{
		V_0 = (bool)G_B18_0;
		// if (gravityTarget != null) {
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_44 = ((CharacterBase_t1CFFD41AEAD8C28D01AD4FFC61BCDAA2C5AB4053*)__this)->___gravityTarget_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_45;
		L_45 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_44, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_45)
		{
			goto IL_01be;
		}
	}
	{
		// r.useGravity = false;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_46 = ((CharacterBase_t1CFFD41AEAD8C28D01AD4FFC61BCDAA2C5AB4053*)__this)->___r_13;
		NullCheck(L_46);
		Rigidbody_set_useGravity_m1B1B22E093F9DC92D7BEEBBE6B02642B3B6C4389(L_46, (bool)0, NULL);
		// if (!stopSlide) r.AddForce(gravity);
		bool L_47 = V_0;
		if (L_47)
		{
			goto IL_01be;
		}
	}
	{
		// if (!stopSlide) r.AddForce(gravity);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_48 = ((CharacterBase_t1CFFD41AEAD8C28D01AD4FFC61BCDAA2C5AB4053*)__this)->___r_13;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_49 = __this->___gravity_71;
		NullCheck(L_48);
		Rigidbody_AddForce_m7A3EEEED21F986917107CBA6CC0106DCBC212198(L_48, L_49, NULL);
	}

IL_01be:
	{
		// if (stopSlide) {
		bool L_50 = V_0;
		if (!L_50)
		{
			goto IL_01df;
		}
	}
	{
		// r.useGravity = false;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_51 = ((CharacterBase_t1CFFD41AEAD8C28D01AD4FFC61BCDAA2C5AB4053*)__this)->___r_13;
		NullCheck(L_51);
		Rigidbody_set_useGravity_m1B1B22E093F9DC92D7BEEBBE6B02642B3B6C4389(L_51, (bool)0, NULL);
		// r.velocity = Vector3.zero;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_52 = ((CharacterBase_t1CFFD41AEAD8C28D01AD4FFC61BCDAA2C5AB4053*)__this)->___r_13;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_53;
		L_53 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		NullCheck(L_52);
		Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62(L_52, L_53, NULL);
		goto IL_01f9;
	}

IL_01df:
	{
		// } else if (gravityTarget == null) r.useGravity = true;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_54 = ((CharacterBase_t1CFFD41AEAD8C28D01AD4FFC61BCDAA2C5AB4053*)__this)->___gravityTarget_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_55;
		L_55 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_54, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_55)
		{
			goto IL_01f9;
		}
	}
	{
		// } else if (gravityTarget == null) r.useGravity = true;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_56 = ((CharacterBase_t1CFFD41AEAD8C28D01AD4FFC61BCDAA2C5AB4053*)__this)->___r_13;
		NullCheck(L_56);
		Rigidbody_set_useGravity_m1B1B22E093F9DC92D7BEEBBE6B02642B3B6C4389(L_56, (bool)1, NULL);
	}

IL_01f9:
	{
		// if (onGround) {
		bool L_57;
		L_57 = CharacterThirdPerson_get_onGround_m9C9555A5C749F8F337E48584713AC44497253957_inline(__this, NULL);
		if (!L_57)
		{
			goto IL_0225;
		}
	}
	{
		// animState.jump = Jump();
		AnimState_t217CB34525B21DC85A816E042E22EA0CD4D6F91D* L_58 = (AnimState_t217CB34525B21DC85A816E042E22EA0CD4D6F91D*)(&__this->___animState_49);
		bool L_59;
		L_59 = VirtualFuncInvoker0< bool >::Invoke(10 /* System.Boolean RootMotion.Demos.CharacterThirdPerson::Jump() */, __this);
		L_58->___jump_1 = L_59;
		// jumpReleased = false;
		__this->___jumpReleased_75 = (bool)0;
		// doubleJumped = false;
		__this->___doubleJumped_74 = (bool)0;
		goto IL_02f7;
	}

IL_0225:
	{
		// if (!userControl.state.jump) jumpReleased = true;
		UserControlThirdPerson_t84D27C4D05AE0B01CDABC9C382DEDD23F3943690* L_60 = __this->___userControl_19;
		NullCheck(L_60);
		State_t1C2106417C1C59FC418E1C9F846E928466513D3C* L_61 = (State_t1C2106417C1C59FC418E1C9F846E928466513D3C*)(&L_60->___state_7);
		bool L_62 = L_61->___jump_3;
		if (L_62)
		{
			goto IL_023e;
		}
	}
	{
		// if (!userControl.state.jump) jumpReleased = true;
		__this->___jumpReleased_75 = (bool)1;
	}

IL_023e:
	{
		// if (jumpReleased && userControl.state.jump && !doubleJumped && doubleJumpEnabled) {
		bool L_63 = __this->___jumpReleased_75;
		if (!L_63)
		{
			goto IL_02f7;
		}
	}
	{
		UserControlThirdPerson_t84D27C4D05AE0B01CDABC9C382DEDD23F3943690* L_64 = __this->___userControl_19;
		NullCheck(L_64);
		State_t1C2106417C1C59FC418E1C9F846E928466513D3C* L_65 = (State_t1C2106417C1C59FC418E1C9F846E928466513D3C*)(&L_64->___state_7);
		bool L_66 = L_65->___jump_3;
		if (!L_66)
		{
			goto IL_02f7;
		}
	}
	{
		bool L_67 = __this->___doubleJumped_74;
		if (L_67)
		{
			goto IL_02f7;
		}
	}
	{
		bool L_68 = __this->___doubleJumpEnabled_37;
		if (!L_68)
		{
			goto IL_02f7;
		}
	}
	{
		// jumpEndTime = Time.time + 0.1f;
		float L_69;
		L_69 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		__this->___jumpEndTime_57 = ((float)il2cpp_codegen_add(L_69, (0.100000001f)));
		// animState.doubleJump = true;
		AnimState_t217CB34525B21DC85A816E042E22EA0CD4D6F91D* L_70 = (AnimState_t217CB34525B21DC85A816E042E22EA0CD4D6F91D*)(&__this->___animState_49);
		L_70->___doubleJump_6 = (bool)1;
		// Vector3 jumpVelocity = userControl.state.move * airSpeed;
		UserControlThirdPerson_t84D27C4D05AE0B01CDABC9C382DEDD23F3943690* L_71 = __this->___userControl_19;
		NullCheck(L_71);
		State_t1C2106417C1C59FC418E1C9F846E928466513D3C* L_72 = (State_t1C2106417C1C59FC418E1C9F846E928466513D3C*)(&L_71->___state_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_73 = L_72->___move_0;
		float L_74 = __this->___airSpeed_33;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_75;
		L_75 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_73, L_74, NULL);
		V_2 = L_75;
		// r.velocity = jumpVelocity;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_76 = ((CharacterBase_t1CFFD41AEAD8C28D01AD4FFC61BCDAA2C5AB4053*)__this)->___r_13;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_77 = V_2;
		NullCheck(L_76);
		Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62(L_76, L_77, NULL);
		// r.velocity += transform.up * jumpPower * doubleJumpPowerMlp;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_78 = ((CharacterBase_t1CFFD41AEAD8C28D01AD4FFC61BCDAA2C5AB4053*)__this)->___r_13;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_79 = L_78;
		NullCheck(L_79);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_80;
		L_80 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_79, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_81;
		L_81 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_81);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_82;
		L_82 = Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2(L_81, NULL);
		float L_83 = __this->___jumpPower_35;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_84;
		L_84 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_82, L_83, NULL);
		float L_85 = __this->___doubleJumpPowerMlp_38;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_86;
		L_86 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_84, L_85, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_87;
		L_87 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_80, L_86, NULL);
		NullCheck(L_79);
		Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62(L_79, L_87, NULL);
		// doubleJumped = true;
		__this->___doubleJumped_74 = (bool)1;
	}

IL_02f7:
	{
		// ScaleCapsule(userControl.state.crouch? crouchCapsuleScaleMlp: 1f);
		UserControlThirdPerson_t84D27C4D05AE0B01CDABC9C382DEDD23F3943690* L_88 = __this->___userControl_19;
		NullCheck(L_88);
		State_t1C2106417C1C59FC418E1C9F846E928466513D3C* L_89 = (State_t1C2106417C1C59FC418E1C9F846E928466513D3C*)(&L_88->___state_7);
		bool L_90 = L_89->___crouch_2;
		G_B35_0 = __this;
		if (L_90)
		{
			G_B36_0 = __this;
			goto IL_0311;
		}
	}
	{
		G_B37_0 = (1.0f);
		G_B37_1 = G_B35_0;
		goto IL_0317;
	}

IL_0311:
	{
		float L_91 = __this->___crouchCapsuleScaleMlp_46;
		G_B37_0 = L_91;
		G_B37_1 = G_B36_0;
	}

IL_0317:
	{
		NullCheck(G_B37_1);
		CharacterBase_ScaleCapsule_mA8553FB8823AF9233312F64A1F1203EF33329E45(G_B37_1, G_B37_0, NULL);
		// fixedFrame = true;
		__this->___fixedFrame_69 = (bool)1;
		// }
		return;
	}
}
// System.Void RootMotion.Demos.CharacterThirdPerson::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterThirdPerson_Update_m05D3474587CE62771EB867F97851D59A2CECD694 (CharacterThirdPerson_t701D066717AA31A81BCCB2B926375896F0F18CF9* __this, const RuntimeMethod* method) 
{
	{
		// animState.onGround = onGround;
		AnimState_t217CB34525B21DC85A816E042E22EA0CD4D6F91D* L_0 = (AnimState_t217CB34525B21DC85A816E042E22EA0CD4D6F91D*)(&__this->___animState_49);
		bool L_1;
		L_1 = CharacterThirdPerson_get_onGround_m9C9555A5C749F8F337E48584713AC44497253957_inline(__this, NULL);
		L_0->___onGround_3 = L_1;
		// animState.moveDirection = GetMoveDirection();
		AnimState_t217CB34525B21DC85A816E042E22EA0CD4D6F91D* L_2 = (AnimState_t217CB34525B21DC85A816E042E22EA0CD4D6F91D*)(&__this->___animState_49);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = CharacterThirdPerson_GetMoveDirection_m304741EEC7A8F97E283A6516358FF30238AC3C7B(__this, NULL);
		L_2->___moveDirection_0 = L_3;
		// animState.yVelocity = Mathf.Lerp(animState.yVelocity, velocityY, Time.deltaTime * 10f);
		AnimState_t217CB34525B21DC85A816E042E22EA0CD4D6F91D* L_4 = (AnimState_t217CB34525B21DC85A816E042E22EA0CD4D6F91D*)(&__this->___animState_49);
		AnimState_t217CB34525B21DC85A816E042E22EA0CD4D6F91D* L_5 = (AnimState_t217CB34525B21DC85A816E042E22EA0CD4D6F91D*)(&__this->___animState_49);
		float L_6 = L_5->___yVelocity_5;
		float L_7 = __this->___velocityY_73;
		float L_8;
		L_8 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_9;
		L_9 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline(L_6, L_7, ((float)il2cpp_codegen_multiply(L_8, (10.0f))), NULL);
		L_4->___yVelocity_5 = L_9;
		// animState.crouch = userControl.state.crouch;
		AnimState_t217CB34525B21DC85A816E042E22EA0CD4D6F91D* L_10 = (AnimState_t217CB34525B21DC85A816E042E22EA0CD4D6F91D*)(&__this->___animState_49);
		UserControlThirdPerson_t84D27C4D05AE0B01CDABC9C382DEDD23F3943690* L_11 = __this->___userControl_19;
		NullCheck(L_11);
		State_t1C2106417C1C59FC418E1C9F846E928466513D3C* L_12 = (State_t1C2106417C1C59FC418E1C9F846E928466513D3C*)(&L_11->___state_7);
		bool L_13 = L_12->___crouch_2;
		L_10->___crouch_2 = L_13;
		// animState.isStrafing = moveMode == MoveMode.Strafe;
		AnimState_t217CB34525B21DC85A816E042E22EA0CD4D6F91D* L_14 = (AnimState_t217CB34525B21DC85A816E042E22EA0CD4D6F91D*)(&__this->___animState_49);
		int32_t L_15 = __this->___moveMode_21;
		L_14->___isStrafing_4 = (bool)((((int32_t)L_15) == ((int32_t)1))? 1 : 0);
		// }
		return;
	}
}
// System.Void RootMotion.Demos.CharacterThirdPerson::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterThirdPerson_LateUpdate_mDA0A5633C689A0D3A1F31A40440DFE23367BA4E7 (CharacterThirdPerson_t701D066717AA31A81BCCB2B926375896F0F18CF9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CameraController_t1AE8F30FD3CB14582A1D7EC6F704EE3F49D69412* G_B7_0 = NULL;
	CameraController_t1AE8F30FD3CB14582A1D7EC6F704EE3F49D69412* G_B6_0 = NULL;
	float G_B8_0 = 0.0f;
	CameraController_t1AE8F30FD3CB14582A1D7EC6F704EE3F49D69412* G_B8_1 = NULL;
	{
		// if (cam == null) return;
		CameraController_t1AE8F30FD3CB14582A1D7EC6F704EE3F49D69412* L_0 = __this->___cam_20;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// if (cam == null) return;
		return;
	}

IL_000f:
	{
		// cam.UpdateInput();
		CameraController_t1AE8F30FD3CB14582A1D7EC6F704EE3F49D69412* L_2 = __this->___cam_20;
		NullCheck(L_2);
		CameraController_UpdateInput_mE8E2FC62E97B7F145D8300C07F6F5F423F3ED4B1(L_2, NULL);
		// if (!fixedFrame && r.interpolation == RigidbodyInterpolation.None) return;
		bool L_3 = __this->___fixedFrame_69;
		if (L_3)
		{
			goto IL_0030;
		}
	}
	{
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_4 = ((CharacterBase_t1CFFD41AEAD8C28D01AD4FFC61BCDAA2C5AB4053*)__this)->___r_13;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = Rigidbody_get_interpolation_mE508FC846FB031C118464637507C004408A32696(L_4, NULL);
		if (L_5)
		{
			goto IL_0030;
		}
	}
	{
		// if (!fixedFrame && r.interpolation == RigidbodyInterpolation.None) return;
		return;
	}

IL_0030:
	{
		// cam.UpdateTransform(r.interpolation == RigidbodyInterpolation.None? Time.fixedDeltaTime: Time.deltaTime);
		CameraController_t1AE8F30FD3CB14582A1D7EC6F704EE3F49D69412* L_6 = __this->___cam_20;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_7 = ((CharacterBase_t1CFFD41AEAD8C28D01AD4FFC61BCDAA2C5AB4053*)__this)->___r_13;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = Rigidbody_get_interpolation_mE508FC846FB031C118464637507C004408A32696(L_7, NULL);
		G_B6_0 = L_6;
		if (!L_8)
		{
			G_B7_0 = L_6;
			goto IL_004a;
		}
	}
	{
		float L_9;
		L_9 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		G_B8_0 = L_9;
		G_B8_1 = G_B6_0;
		goto IL_004f;
	}

IL_004a:
	{
		float L_10;
		L_10 = Time_get_fixedDeltaTime_m43136893D00AF5D5FE80AD05609558F6E2381381(NULL);
		G_B8_0 = L_10;
		G_B8_1 = G_B7_0;
	}

IL_004f:
	{
		NullCheck(G_B8_1);
		CameraController_UpdateTransform_mCF31FCAD0DA0325A696659DFABAEC0E38183F2B0(G_B8_1, G_B8_0, NULL);
		// fixedFrame = false;
		__this->___fixedFrame_69 = (bool)0;
		// }
		return;
	}
}
// System.Void RootMotion.Demos.CharacterThirdPerson::MoveFixed(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterThirdPerson_MoveFixed_m5D78629B640CE1B09FB05CC3BAE6F9E70B5BBC0C (CharacterThirdPerson_t701D066717AA31A81BCCB2B926375896F0F18CF9* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_deltaPosition, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		// WallRun();
		CharacterThirdPerson_WallRun_mDB50A14927A6AC3A0563B1541AF86A2800A57921(__this, NULL);
		// Vector3 velocity = fixedDeltaTime > 0f? deltaPosition / fixedDeltaTime: Vector3.zero;
		float L_0 = __this->___fixedDeltaTime_66;
		if ((((float)L_0) > ((float)(0.0f))))
		{
			goto IL_001a;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		G_B3_0 = L_1;
		goto IL_0026;
	}

IL_001a:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_deltaPosition;
		float L_3 = __this->___fixedDeltaTime_66;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_2, L_3, NULL);
		G_B3_0 = L_4;
	}

IL_0026:
	{
		V_0 = G_B3_0;
		// if (!fullRootMotion)
		bool L_5;
		L_5 = CharacterThirdPerson_get_fullRootMotion_mBED6B5C55FDB74F8115F9E91BD4BEED0D9B97B83_inline(__this, NULL);
		if (L_5)
		{
			goto IL_019b;
		}
	}
	{
		// velocity += V3Tools.ExtractHorizontal(platformVelocity, gravity, 1f);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = __this->___platformVelocity_53;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = __this->___gravity_71;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = V3Tools_ExtractHorizontal_m8AA90F6DD024441CBBBC2FB7F06DC00BA9DBE554(L_7, L_8, (1.0f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_6, L_9, NULL);
		V_0 = L_10;
		// if (onGround)
		bool L_11;
		L_11 = CharacterThirdPerson_get_onGround_m9C9555A5C749F8F337E48584713AC44497253957_inline(__this, NULL);
		if (!L_11)
		{
			goto IL_0095;
		}
	}
	{
		// if (velocityToGroundTangentWeight > 0f)
		float L_12 = __this->___velocityToGroundTangentWeight_28;
		if ((!(((float)L_12) > ((float)(0.0f)))))
		{
			goto IL_00e1;
		}
	}
	{
		// Quaternion rotation = Quaternion.FromToRotation(transform.up, normal);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2(L_13, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = __this->___normal_52;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16;
		L_16 = Quaternion_FromToRotation_mCB3100F93637E72455388B901C36EF8A25DFDB9A(L_14, L_15, NULL);
		V_3 = L_16;
		// velocity = Quaternion.Lerp(Quaternion.identity, rotation, velocityToGroundTangentWeight) * velocity;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_17;
		L_17 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18 = V_3;
		float L_19 = __this->___velocityToGroundTangentWeight_28;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_20;
		L_20 = Quaternion_Lerp_m259606226726C2F46E079A5A688B9E24FF7E9A0D(L_17, L_18, L_19, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_20, L_21, NULL);
		V_0 = L_22;
		goto IL_00e1;
	}

IL_0095:
	{
		// Vector3 airMove = V3Tools.ExtractHorizontal(userControl.state.move * airSpeed, gravity, 1f);
		UserControlThirdPerson_t84D27C4D05AE0B01CDABC9C382DEDD23F3943690* L_23 = __this->___userControl_19;
		NullCheck(L_23);
		State_t1C2106417C1C59FC418E1C9F846E928466513D3C* L_24 = (State_t1C2106417C1C59FC418E1C9F846E928466513D3C*)(&L_23->___state_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25 = L_24->___move_0;
		float L_26 = __this->___airSpeed_33;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_25, L_26, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28 = __this->___gravity_71;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		L_29 = V3Tools_ExtractHorizontal_m8AA90F6DD024441CBBBC2FB7F06DC00BA9DBE554(L_27, L_28, (1.0f), NULL);
		V_4 = L_29;
		// velocity = Vector3.Lerp(r.velocity, airMove, Time.deltaTime * airControl);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_30 = ((CharacterBase_t1CFFD41AEAD8C28D01AD4FFC61BCDAA2C5AB4053*)__this)->___r_13;
		NullCheck(L_30);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
		L_31 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_30, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32 = V_4;
		float L_33;
		L_33 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_34 = __this->___airControl_34;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35;
		L_35 = Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline(L_31, L_32, ((float)il2cpp_codegen_multiply(L_33, L_34)), NULL);
		V_0 = L_35;
	}

IL_00e1:
	{
		// if (onGround && Time.time > jumpEndTime)
		bool L_36;
		L_36 = CharacterThirdPerson_get_onGround_m9C9555A5C749F8F337E48584713AC44497253957_inline(__this, NULL);
		if (!L_36)
		{
			goto IL_0131;
		}
	}
	{
		float L_37;
		L_37 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_38 = __this->___jumpEndTime_57;
		if ((!(((float)L_37) > ((float)L_38))))
		{
			goto IL_0131;
		}
	}
	{
		// r.velocity = r.velocity - transform.up * stickyForce * Time.deltaTime;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_39 = ((CharacterBase_t1CFFD41AEAD8C28D01AD4FFC61BCDAA2C5AB4053*)__this)->___r_13;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_40 = ((CharacterBase_t1CFFD41AEAD8C28D01AD4FFC61BCDAA2C5AB4053*)__this)->___r_13;
		NullCheck(L_40);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41;
		L_41 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_40, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_42;
		L_42 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_42);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43;
		L_43 = Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2(L_42, NULL);
		float L_44 = __this->___stickyForce_61;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45;
		L_45 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_43, L_44, NULL);
		float L_46;
		L_46 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47;
		L_47 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_45, L_46, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_48;
		L_48 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_41, L_47, NULL);
		NullCheck(L_39);
		Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62(L_39, L_48, NULL);
	}

IL_0131:
	{
		// Vector3 verticalVelocity = V3Tools.ExtractVertical(r.velocity, gravity, 1f);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_49 = ((CharacterBase_t1CFFD41AEAD8C28D01AD4FFC61BCDAA2C5AB4053*)__this)->___r_13;
		NullCheck(L_49);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_50;
		L_50 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_49, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_51 = __this->___gravity_71;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_52;
		L_52 = V3Tools_ExtractVertical_m67D145D321D3D9A1607A57C9D79AC189B894A097(L_50, L_51, (1.0f), NULL);
		V_1 = L_52;
		// Vector3 horizontalVelocity = V3Tools.ExtractHorizontal(velocity, gravity, 1f);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_53 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_54 = __this->___gravity_71;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_55;
		L_55 = V3Tools_ExtractHorizontal_m8AA90F6DD024441CBBBC2FB7F06DC00BA9DBE554(L_53, L_54, (1.0f), NULL);
		V_2 = L_55;
		// if (onGround)
		bool L_56;
		L_56 = CharacterThirdPerson_get_onGround_m9C9555A5C749F8F337E48584713AC44497253957_inline(__this, NULL);
		if (!L_56)
		{
			goto IL_0187;
		}
	}
	{
		// if (Vector3.Dot(verticalVelocity, gravity) < 0f)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_57 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_58 = __this->___gravity_71;
		float L_59;
		L_59 = Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline(L_57, L_58, NULL);
		if ((!(((float)L_59) < ((float)(0.0f)))))
		{
			goto IL_0187;
		}
	}
	{
		// verticalVelocity = Vector3.ClampMagnitude(verticalVelocity, maxVerticalVelocityOnGround);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_60 = V_1;
		float L_61 = __this->___maxVerticalVelocityOnGround_27;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_62;
		L_62 = Vector3_ClampMagnitude_mF83675F19744F58E97CF24D8359A810634DC031F_inline(L_60, L_61, NULL);
		V_1 = L_62;
	}

IL_0187:
	{
		// r.velocity = horizontalVelocity + verticalVelocity;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_63 = ((CharacterBase_t1CFFD41AEAD8C28D01AD4FFC61BCDAA2C5AB4053*)__this)->___r_13;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_64 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_65 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_66;
		L_66 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_64, L_65, NULL);
		NullCheck(L_63);
		Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62(L_63, L_66, NULL);
		goto IL_01a7;
	}

IL_019b:
	{
		// r.velocity = velocity;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_67 = ((CharacterBase_t1CFFD41AEAD8C28D01AD4FFC61BCDAA2C5AB4053*)__this)->___r_13;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_68 = V_0;
		NullCheck(L_67);
		Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62(L_67, L_68, NULL);
	}

IL_01a7:
	{
		// forwardMlp = 1f;
		__this->___forwardMlp_58 = (1.0f);
		// }
		return;
	}
}
// System.Void RootMotion.Demos.CharacterThirdPerson::WallRun()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterThirdPerson_WallRun_mDB50A14927A6AC3A0563B1541AF86A2800A57921 (CharacterThirdPerson_t701D066717AA31A81BCCB2B926375896F0F18CF9* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_5;
	memset((&V_5), 0, sizeof(V_5));
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 V_6;
	memset((&V_6), 0, sizeof(V_6));
	float G_B7_0 = 0.0f;
	CharacterThirdPerson_t701D066717AA31A81BCCB2B926375896F0F18CF9* G_B7_1 = NULL;
	float G_B6_0 = 0.0f;
	CharacterThirdPerson_t701D066717AA31A81BCCB2B926375896F0F18CF9* G_B6_1 = NULL;
	float G_B8_0 = 0.0f;
	float G_B8_1 = 0.0f;
	CharacterThirdPerson_t701D066717AA31A81BCCB2B926375896F0F18CF9* G_B8_2 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B19_0;
	memset((&G_B19_0), 0, sizeof(G_B19_0));
	{
		// bool canWallRun = CanWallRun();
		bool L_0;
		L_0 = CharacterThirdPerson_CanWallRun_m02DD33436A9F0D9A0F2B2C117704F29ACFF95E5D(__this, NULL);
		V_0 = L_0;
		// if (wallRunWeight > 0f && !canWallRun) wallRunEndTime = Time.time;
		float L_1 = __this->___wallRunWeight_64;
		if ((!(((float)L_1) > ((float)(0.0f)))))
		{
			goto IL_0022;
		}
	}
	{
		bool L_2 = V_0;
		if (L_2)
		{
			goto IL_0022;
		}
	}
	{
		// if (wallRunWeight > 0f && !canWallRun) wallRunEndTime = Time.time;
		float L_3;
		L_3 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		__this->___wallRunEndTime_70 = L_3;
	}

IL_0022:
	{
		// if (Time.time < wallRunEndTime + 0.5f) canWallRun = false;
		float L_4;
		L_4 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_5 = __this->___wallRunEndTime_70;
		if ((!(((float)L_4) < ((float)((float)il2cpp_codegen_add(L_5, (0.5f)))))))
		{
			goto IL_0037;
		}
	}
	{
		// if (Time.time < wallRunEndTime + 0.5f) canWallRun = false;
		V_0 = (bool)0;
	}

IL_0037:
	{
		// wallRunWeight = Mathf.MoveTowards(wallRunWeight, (canWallRun? 1f: 0f), Time.deltaTime * wallRunWeightSpeed);
		float L_6 = __this->___wallRunWeight_64;
		bool L_7 = V_0;
		G_B6_0 = L_6;
		G_B6_1 = __this;
		if (L_7)
		{
			G_B7_0 = L_6;
			G_B7_1 = __this;
			goto IL_0048;
		}
	}
	{
		G_B8_0 = (0.0f);
		G_B8_1 = G_B6_0;
		G_B8_2 = G_B6_1;
		goto IL_004d;
	}

IL_0048:
	{
		G_B8_0 = (1.0f);
		G_B8_1 = G_B7_0;
		G_B8_2 = G_B7_1;
	}

IL_004d:
	{
		float L_8;
		L_8 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_9 = __this->___wallRunWeightSpeed_45;
		float L_10;
		L_10 = Mathf_MoveTowards_m69751B5EC50D8E7127D4BB2C8D908E38808AF45D_inline(G_B8_1, G_B8_0, ((float)il2cpp_codegen_multiply(L_8, L_9)), NULL);
		NullCheck(G_B8_2);
		G_B8_2->___wallRunWeight_64 = L_10;
		// if (wallRunWeight <= 0f) {
		float L_11 = __this->___wallRunWeight_64;
		if ((!(((float)L_11) <= ((float)(0.0f)))))
		{
			goto IL_00cd;
		}
	}
	{
		// if (lastWallRunWeight > 0f) {
		float L_12 = __this->___lastWallRunWeight_65;
		if ((!(((float)L_12) > ((float)(0.0f)))))
		{
			goto IL_00cd;
		}
	}
	{
		// Vector3 frw = V3Tools.ExtractHorizontal(transform.forward, gravity, 1f);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_13, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = __this->___gravity_71;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = V3Tools_ExtractHorizontal_m8AA90F6DD024441CBBBC2FB7F06DC00BA9DBE554(L_14, L_15, (1.0f), NULL);
		V_5 = L_16;
		// transform.rotation = Quaternion.LookRotation(frw, -gravity);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19 = __this->___gravity_71;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline(L_19, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_21;
		L_21 = Quaternion_LookRotation_mFB02EDC8F733774DFAC3BEA4B4BB265A228F8307(L_18, L_20, NULL);
		NullCheck(L_17);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_17, L_21, NULL);
		// wallNormal = -gravity.normalized;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_22 = (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)(&__this->___gravity_71);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline(L_22, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline(L_23, NULL);
		__this->___wallNormal_62 = L_24;
	}

IL_00cd:
	{
		// lastWallRunWeight = wallRunWeight;
		float L_25 = __this->___wallRunWeight_64;
		__this->___lastWallRunWeight_65 = L_25;
		// if (wallRunWeight <= 0f) return;
		float L_26 = __this->___wallRunWeight_64;
		if ((!(((float)L_26) <= ((float)(0.0f)))))
		{
			goto IL_00e7;
		}
	}
	{
		// if (wallRunWeight <= 0f) return;
		return;
	}

IL_00e7:
	{
		// if (onGround && velocityY < 0f) r.velocity = V3Tools.ExtractHorizontal(r.velocity, gravity, 1f);
		bool L_27;
		L_27 = CharacterThirdPerson_get_onGround_m9C9555A5C749F8F337E48584713AC44497253957_inline(__this, NULL);
		if (!L_27)
		{
			goto IL_0122;
		}
	}
	{
		float L_28 = __this->___velocityY_73;
		if ((!(((float)L_28) < ((float)(0.0f)))))
		{
			goto IL_0122;
		}
	}
	{
		// if (onGround && velocityY < 0f) r.velocity = V3Tools.ExtractHorizontal(r.velocity, gravity, 1f);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_29 = ((CharacterBase_t1CFFD41AEAD8C28D01AD4FFC61BCDAA2C5AB4053*)__this)->___r_13;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_30 = ((CharacterBase_t1CFFD41AEAD8C28D01AD4FFC61BCDAA2C5AB4053*)__this)->___r_13;
		NullCheck(L_30);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
		L_31 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_30, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32 = __this->___gravity_71;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33;
		L_33 = V3Tools_ExtractHorizontal_m8AA90F6DD024441CBBBC2FB7F06DC00BA9DBE554(L_31, L_32, (1.0f), NULL);
		NullCheck(L_29);
		Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62(L_29, L_33, NULL);
	}

IL_0122:
	{
		// Vector3 f = V3Tools.ExtractHorizontal(transform.forward, gravity, 1f);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_34;
		L_34 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_34);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35;
		L_35 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_34, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36 = __this->___gravity_71;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37;
		L_37 = V3Tools_ExtractHorizontal_m8AA90F6DD024441CBBBC2FB7F06DC00BA9DBE554(L_35, L_36, (1.0f), NULL);
		V_1 = L_37;
		// RaycastHit velocityHit = new RaycastHit();
		il2cpp_codegen_initobj((&V_2), sizeof(RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5));
		// velocityHit.normal = -gravity.normalized;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_38 = (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)(&__this->___gravity_71);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39;
		L_39 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline(L_38, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40;
		L_40 = Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline(L_39, NULL);
		RaycastHit_set_normal_m97DDF1CBE8ADF1F72AA30BC83870615ABB38C88B((&V_2), L_40, NULL);
		// Physics.Raycast(onGround? transform.position: capsule.bounds.center, f, out velocityHit, 3f, wallRunLayers);
		bool L_41;
		L_41 = CharacterThirdPerson_get_onGround_m9C9555A5C749F8F337E48584713AC44497253957_inline(__this, NULL);
		if (L_41)
		{
			goto IL_017b;
		}
	}
	{
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_42 = ((CharacterBase_t1CFFD41AEAD8C28D01AD4FFC61BCDAA2C5AB4053*)__this)->___capsule_17;
		NullCheck(L_42);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_43;
		L_43 = Collider_get_bounds_mCC32F749590E9A85C7930E5355661367F78E4CB4(L_42, NULL);
		V_6 = L_43;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_44;
		L_44 = Bounds_get_center_m5B05F81CB835EB6DD8628FDA24B638F477984DC3((&V_6), NULL);
		G_B19_0 = L_44;
		goto IL_0186;
	}

IL_017b:
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_45;
		L_45 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_45);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46;
		L_46 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_45, NULL);
		G_B19_0 = L_46;
	}

IL_0186:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47 = V_1;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_48 = __this->___wallRunLayers_39;
		int32_t L_49;
		L_49 = LayerMask_op_Implicit_m7F5A5B9D079281AC445ED39DEE1FCFA9D795810D(L_48, NULL);
		bool L_50;
		L_50 = Physics_Raycast_m56120FFEF0D4F0A44CCA505B5C946E6FB8742F12(G_B19_0, L_47, (&V_2), (3.0f), L_49, NULL);
		// wallNormal = Vector3.Lerp(wallNormal, velocityHit.normal, Time.deltaTime * wallRunRotationSpeed);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_51 = __this->___wallNormal_62;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_52;
		L_52 = RaycastHit_get_normal_mD8741B70D2039C5CAFC4368D4CE59D89562040B5((&V_2), NULL);
		float L_53;
		L_53 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_54 = __this->___wallRunRotationSpeed_43;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_55;
		L_55 = Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline(L_51, L_52, ((float)il2cpp_codegen_multiply(L_53, L_54)), NULL);
		__this->___wallNormal_62 = L_55;
		// wallNormal = Vector3.RotateTowards(-gravity.normalized, wallNormal, wallRunMaxRotationAngle * Mathf.Deg2Rad, 0f);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_56 = (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)(&__this->___gravity_71);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_57;
		L_57 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline(L_56, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_58;
		L_58 = Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline(L_57, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_59 = __this->___wallNormal_62;
		float L_60 = __this->___wallRunMaxRotationAngle_44;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_61;
		L_61 = Vector3_RotateTowards_m884BB56D5A071EF6008F9354D5FF1C9A1913AF92(L_58, L_59, ((float)il2cpp_codegen_multiply(L_60, (0.0174532924f))), (0.0f), NULL);
		__this->___wallNormal_62 = L_61;
		// Vector3 fW = transform.forward;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_62;
		L_62 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_62);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_63;
		L_63 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_62, NULL);
		V_3 = L_63;
		// Vector3 nW = wallNormal;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_64 = __this->___wallNormal_62;
		V_4 = L_64;
		// Vector3.OrthoNormalize(ref nW, ref fW);
		Vector3_OrthoNormalize_m4450C7BEB70DBFA60E3AAC08C98CDAE831A54158((&V_4), (&V_3), NULL);
		// transform.rotation = Quaternion.Slerp(Quaternion.LookRotation(f, -gravity), Quaternion.LookRotation(fW, wallNormal), wallRunWeight);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_65;
		L_65 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_66 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_67 = __this->___gravity_71;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_68;
		L_68 = Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline(L_67, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_69;
		L_69 = Quaternion_LookRotation_mFB02EDC8F733774DFAC3BEA4B4BB265A228F8307(L_66, L_68, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_70 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_71 = __this->___wallNormal_62;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_72;
		L_72 = Quaternion_LookRotation_mFB02EDC8F733774DFAC3BEA4B4BB265A228F8307(L_70, L_71, NULL);
		float L_73 = __this->___wallRunWeight_64;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_74;
		L_74 = Quaternion_Slerp_m0A9969F500E7716EA4F6BC4E7D5464372D8E9E15(L_69, L_72, L_73, NULL);
		NullCheck(L_65);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_65, L_74, NULL);
		// }
		return;
	}
}
// System.Boolean RootMotion.Demos.CharacterThirdPerson::CanWallRun()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CharacterThirdPerson_CanWallRun_m02DD33436A9F0D9A0F2B2C117704F29ACFF95E5D (CharacterThirdPerson_t701D066717AA31A81BCCB2B926375896F0F18CF9* __this, const RuntimeMethod* method) 
{
	{
		// if (fullRootMotion) return false;
		bool L_0;
		L_0 = CharacterThirdPerson_get_fullRootMotion_mBED6B5C55FDB74F8115F9E91BD4BEED0D9B97B83_inline(__this, NULL);
		if (!L_0)
		{
			goto IL_000a;
		}
	}
	{
		// if (fullRootMotion) return false;
		return (bool)0;
	}

IL_000a:
	{
		// if (Time.time < jumpEndTime - 0.1f) return false;
		float L_1;
		L_1 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_2 = __this->___jumpEndTime_57;
		if ((!(((float)L_1) < ((float)((float)il2cpp_codegen_subtract(L_2, (0.100000001f)))))))
		{
			goto IL_001f;
		}
	}
	{
		// if (Time.time < jumpEndTime - 0.1f) return false;
		return (bool)0;
	}

IL_001f:
	{
		// if (Time.time > jumpEndTime - 0.1f + wallRunMaxLength) return false;
		float L_3;
		L_3 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_4 = __this->___jumpEndTime_57;
		float L_5 = __this->___wallRunMaxLength_40;
		if ((!(((float)L_3) > ((float)((float)il2cpp_codegen_add(((float)il2cpp_codegen_subtract(L_4, (0.100000001f))), L_5))))))
		{
			goto IL_003b;
		}
	}
	{
		// if (Time.time > jumpEndTime - 0.1f + wallRunMaxLength) return false;
		return (bool)0;
	}

IL_003b:
	{
		// if (velocityY < wallRunMinVelocityY) return false;
		float L_6 = __this->___velocityY_73;
		float L_7 = __this->___wallRunMinVelocityY_42;
		if ((!(((float)L_6) < ((float)L_7))))
		{
			goto IL_004b;
		}
	}
	{
		// if (velocityY < wallRunMinVelocityY) return false;
		return (bool)0;
	}

IL_004b:
	{
		// if (userControl.state.move.magnitude < wallRunMinMoveMag) return false;
		UserControlThirdPerson_t84D27C4D05AE0B01CDABC9C382DEDD23F3943690* L_8 = __this->___userControl_19;
		NullCheck(L_8);
		State_t1C2106417C1C59FC418E1C9F846E928466513D3C* L_9 = (State_t1C2106417C1C59FC418E1C9F846E928466513D3C*)(&L_8->___state_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_10 = (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)(&L_9->___move_0);
		float L_11;
		L_11 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline(L_10, NULL);
		float L_12 = __this->___wallRunMinMoveMag_41;
		if ((!(((float)L_11) < ((float)L_12))))
		{
			goto IL_006a;
		}
	}
	{
		// if (userControl.state.move.magnitude < wallRunMinMoveMag) return false;
		return (bool)0;
	}

IL_006a:
	{
		// return true;
		return (bool)1;
	}
}
// UnityEngine.Vector3 RootMotion.Demos.CharacterThirdPerson::GetMoveDirection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CharacterThirdPerson_GetMoveDirection_m304741EEC7A8F97E283A6516358FF30238AC3C7B (CharacterThirdPerson_t701D066717AA31A81BCCB2B926375896F0F18CF9* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// switch(moveMode) {
		int32_t L_0 = __this->___moveMode_21;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_00aa;
		}
	}
	{
		goto IL_0116;
	}

IL_0016:
	{
		// moveDirection = Vector3.SmoothDamp(moveDirection, new Vector3(0f, 0f, userControl.state.move.magnitude), ref moveDirectionVelocity, smoothAccelerationTime);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = __this->___moveDirection_50;
		UserControlThirdPerson_t84D27C4D05AE0B01CDABC9C382DEDD23F3943690* L_4 = __this->___userControl_19;
		NullCheck(L_4);
		State_t1C2106417C1C59FC418E1C9F846E928466513D3C* L_5 = (State_t1C2106417C1C59FC418E1C9F846E928466513D3C*)(&L_4->___state_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_6 = (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)(&L_5->___move_0);
		float L_7;
		L_7 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline(L_6, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_8), (0.0f), (0.0f), L_7, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_9 = (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)(&__this->___moveDirectionVelocity_63);
		float L_10 = __this->___smoothAccelerationTime_23;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector3_SmoothDamp_mF673AC30464B7DF671A0556140EB6E9DD75827ED_inline(L_3, L_8, L_9, L_10, NULL);
		__this->___moveDirection_50 = L_11;
		// moveDirection = Vector3.MoveTowards(moveDirection, new Vector3(0f, 0f, userControl.state.move.magnitude), Time.deltaTime * linearAccelerationSpeed);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = __this->___moveDirection_50;
		UserControlThirdPerson_t84D27C4D05AE0B01CDABC9C382DEDD23F3943690* L_13 = __this->___userControl_19;
		NullCheck(L_13);
		State_t1C2106417C1C59FC418E1C9F846E928466513D3C* L_14 = (State_t1C2106417C1C59FC418E1C9F846E928466513D3C*)(&L_13->___state_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_15 = (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)(&L_14->___move_0);
		float L_16;
		L_16 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline(L_15, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		memset((&L_17), 0, sizeof(L_17));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_17), (0.0f), (0.0f), L_16, /*hidden argument*/NULL);
		float L_18;
		L_18 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_19 = __this->___linearAccelerationSpeed_24;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Vector3_MoveTowards_m0363264647799F3173AC37F8E819F98298249B08_inline(L_12, L_17, ((float)il2cpp_codegen_multiply(L_18, L_19)), NULL);
		__this->___moveDirection_50 = L_20;
		// return moveDirection * forwardMlp;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = __this->___moveDirection_50;
		float L_22 = __this->___forwardMlp_58;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_21, L_22, NULL);
		return L_23;
	}

IL_00aa:
	{
		// moveDirection = Vector3.SmoothDamp(moveDirection, userControl.state.move, ref moveDirectionVelocity, smoothAccelerationTime);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = __this->___moveDirection_50;
		UserControlThirdPerson_t84D27C4D05AE0B01CDABC9C382DEDD23F3943690* L_25 = __this->___userControl_19;
		NullCheck(L_25);
		State_t1C2106417C1C59FC418E1C9F846E928466513D3C* L_26 = (State_t1C2106417C1C59FC418E1C9F846E928466513D3C*)(&L_25->___state_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = L_26->___move_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_28 = (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)(&__this->___moveDirectionVelocity_63);
		float L_29 = __this->___smoothAccelerationTime_23;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30;
		L_30 = Vector3_SmoothDamp_mF673AC30464B7DF671A0556140EB6E9DD75827ED_inline(L_24, L_27, L_28, L_29, NULL);
		__this->___moveDirection_50 = L_30;
		// moveDirection = Vector3.MoveTowards(moveDirection, userControl.state.move, Time.deltaTime * linearAccelerationSpeed);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31 = __this->___moveDirection_50;
		UserControlThirdPerson_t84D27C4D05AE0B01CDABC9C382DEDD23F3943690* L_32 = __this->___userControl_19;
		NullCheck(L_32);
		State_t1C2106417C1C59FC418E1C9F846E928466513D3C* L_33 = (State_t1C2106417C1C59FC418E1C9F846E928466513D3C*)(&L_32->___state_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34 = L_33->___move_0;
		float L_35;
		L_35 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_36 = __this->___linearAccelerationSpeed_24;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37;
		L_37 = Vector3_MoveTowards_m0363264647799F3173AC37F8E819F98298249B08_inline(L_31, L_34, ((float)il2cpp_codegen_multiply(L_35, L_36)), NULL);
		__this->___moveDirection_50 = L_37;
		// return transform.InverseTransformDirection(moveDirection);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_38;
		L_38 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39 = __this->___moveDirection_50;
		NullCheck(L_38);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40;
		L_40 = Transform_InverseTransformDirection_m69C077B881A98B08C7F231EFC49429C906FBC575(L_38, L_39, NULL);
		return L_40;
	}

IL_0116:
	{
		// return Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41;
		L_41 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		return L_41;
	}
}
// System.Void RootMotion.Demos.CharacterThirdPerson::Rotate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterThirdPerson_Rotate_m2F812F9A0357E0D49810B181353A084ACB96CD86 (CharacterThirdPerson_t701D066717AA31A81BCCB2B926375896F0F18CF9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// if (gravityTarget != null) r.MoveRotation (Quaternion.FromToRotation(transform.up, transform.position - gravityTarget.position) * transform.rotation);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ((CharacterBase_t1CFFD41AEAD8C28D01AD4FFC61BCDAA2C5AB4053*)__this)->___gravityTarget_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0054;
		}
	}
	{
		// if (gravityTarget != null) r.MoveRotation (Quaternion.FromToRotation(transform.up, transform.position - gravityTarget.position) * transform.rotation);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_2 = ((CharacterBase_t1CFFD41AEAD8C28D01AD4FFC61BCDAA2C5AB4053*)__this)->___r_13;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2(L_3, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7 = ((CharacterBase_t1CFFD41AEAD8C28D01AD4FFC61BCDAA2C5AB4053*)__this)->___gravityTarget_4;
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_7, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_6, L_8, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10;
		L_10 = Quaternion_FromToRotation_mCB3100F93637E72455388B901C36EF8A25DFDB9A(L_4, L_9, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_11);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12;
		L_12 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_11, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_13;
		L_13 = Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(L_10, L_12, NULL);
		NullCheck(L_2);
		Rigidbody_MoveRotation_m85825C7206E770E39DED9EE6D792702F577A891D(L_2, L_13, NULL);
	}

IL_0054:
	{
		// if (platformAngularVelocity != Vector3.zero) r.MoveRotation (Quaternion.Euler(platformAngularVelocity) * transform.rotation);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = __this->___platformAngularVelocity_54;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		bool L_16;
		L_16 = Vector3_op_Inequality_m9F170CDFBF1E490E559DA5D06D6547501A402BBF_inline(L_14, L_15, NULL);
		if (!L_16)
		{
			goto IL_008c;
		}
	}
	{
		// if (platformAngularVelocity != Vector3.zero) r.MoveRotation (Quaternion.Euler(platformAngularVelocity) * transform.rotation);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_17 = ((CharacterBase_t1CFFD41AEAD8C28D01AD4FFC61BCDAA2C5AB4053*)__this)->___r_13;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = __this->___platformAngularVelocity_54;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_19;
		L_19 = Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline(L_18, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20;
		L_20 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_20);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_21;
		L_21 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_20, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_22;
		L_22 = Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(L_19, L_21, NULL);
		NullCheck(L_17);
		Rigidbody_MoveRotation_m85825C7206E770E39DED9EE6D792702F577A891D(L_17, L_22, NULL);
	}

IL_008c:
	{
		// float angle = GetAngleFromForward(GetForwardDirection());
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = CharacterThirdPerson_GetForwardDirection_m487B686C1E3E2B1C8F155BD0340FE56E48D8691B(__this, NULL);
		float L_24;
		L_24 = CharacterBase_GetAngleFromForward_mCB3C3BDEC06317D3F16CDBF493517CFB3E66BC91(__this, L_23, NULL);
		V_0 = L_24;
		// if (userControl.state.move == Vector3.zero) angle *= (1.01f - (Mathf.Abs(angle) / 180f)) * stationaryTurnSpeedMlp;
		UserControlThirdPerson_t84D27C4D05AE0B01CDABC9C382DEDD23F3943690* L_25 = __this->___userControl_19;
		NullCheck(L_25);
		State_t1C2106417C1C59FC418E1C9F846E928466513D3C* L_26 = (State_t1C2106417C1C59FC418E1C9F846E928466513D3C*)(&L_25->___state_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = L_26->___move_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		bool L_29;
		L_29 = Vector3_op_Equality_mCDCBB8D2EDC3D3BF20F31A25ACB34705D352B479_inline(L_27, L_28, NULL);
		if (!L_29)
		{
			goto IL_00d1;
		}
	}
	{
		// if (userControl.state.move == Vector3.zero) angle *= (1.01f - (Mathf.Abs(angle) / 180f)) * stationaryTurnSpeedMlp;
		float L_30 = V_0;
		float L_31 = V_0;
		float L_32;
		L_32 = fabsf(L_31);
		float L_33 = __this->___stationaryTurnSpeedMlp_31;
		V_0 = ((float)il2cpp_codegen_multiply(L_30, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract((1.00999999f), ((float)(L_32/(180.0f))))), L_33))));
	}

IL_00d1:
	{
		// r.MoveRotation(Quaternion.AngleAxis(angle * Time.deltaTime * turnSpeed, transform.up) * r.rotation);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_34 = ((CharacterBase_t1CFFD41AEAD8C28D01AD4FFC61BCDAA2C5AB4053*)__this)->___r_13;
		float L_35 = V_0;
		float L_36;
		L_36 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_37 = __this->___turnSpeed_30;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_38;
		L_38 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_38);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39;
		L_39 = Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2(L_38, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_40;
		L_40 = Quaternion_AngleAxis_mF37022977B297E63AA70D69EA1C4C922FF22CC80(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_35, L_36)), L_37)), L_39, NULL);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_41 = ((CharacterBase_t1CFFD41AEAD8C28D01AD4FFC61BCDAA2C5AB4053*)__this)->___r_13;
		NullCheck(L_41);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_42;
		L_42 = Rigidbody_get_rotation_m07882A7024FB3F96BA13EC577A96163BBB621AA1(L_41, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_43;
		L_43 = Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(L_40, L_42, NULL);
		NullCheck(L_34);
		Rigidbody_MoveRotation_m85825C7206E770E39DED9EE6D792702F577A891D(L_34, L_43, NULL);
		// }
		return;
	}
}
// UnityEngine.Vector3 RootMotion.Demos.CharacterThirdPerson::GetForwardDirection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CharacterThirdPerson_GetForwardDirection_m487B686C1E3E2B1C8F155BD0340FE56E48D8691B (CharacterThirdPerson_t701D066717AA31A81BCCB2B926375896F0F18CF9* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		// bool isMoving = userControl.state.move != Vector3.zero;
		UserControlThirdPerson_t84D27C4D05AE0B01CDABC9C382DEDD23F3943690* L_0 = __this->___userControl_19;
		NullCheck(L_0);
		State_t1C2106417C1C59FC418E1C9F846E928466513D3C* L_1 = (State_t1C2106417C1C59FC418E1C9F846E928466513D3C*)(&L_0->___state_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = L_1->___move_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		bool L_4;
		L_4 = Vector3_op_Inequality_m9F170CDFBF1E490E559DA5D06D6547501A402BBF_inline(L_2, L_3, NULL);
		V_0 = L_4;
		// switch (moveMode) {
		int32_t L_5 = __this->___moveMode_21;
		V_1 = L_5;
		int32_t L_6 = V_1;
		if (!L_6)
		{
			goto IL_002e;
		}
	}
	{
		int32_t L_7 = V_1;
		if ((((int32_t)L_7) == ((int32_t)1)))
		{
			goto IL_0077;
		}
	}
	{
		goto IL_00d0;
	}

IL_002e:
	{
		// if (isMoving) return userControl.state.move;
		bool L_8 = V_0;
		if (!L_8)
		{
			goto IL_0042;
		}
	}
	{
		// if (isMoving) return userControl.state.move;
		UserControlThirdPerson_t84D27C4D05AE0B01CDABC9C382DEDD23F3943690* L_9 = __this->___userControl_19;
		NullCheck(L_9);
		State_t1C2106417C1C59FC418E1C9F846E928466513D3C* L_10 = (State_t1C2106417C1C59FC418E1C9F846E928466513D3C*)(&L_9->___state_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = L_10->___move_0;
		return L_11;
	}

IL_0042:
	{
		// return lookInCameraDirection? userControl.state.lookPos - r.position: transform.forward;
		bool L_12 = __this->___lookInCameraDirection_29;
		if (L_12)
		{
			goto IL_0056;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_13, NULL);
		return L_14;
	}

IL_0056:
	{
		UserControlThirdPerson_t84D27C4D05AE0B01CDABC9C382DEDD23F3943690* L_15 = __this->___userControl_19;
		NullCheck(L_15);
		State_t1C2106417C1C59FC418E1C9F846E928466513D3C* L_16 = (State_t1C2106417C1C59FC418E1C9F846E928466513D3C*)(&L_15->___state_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = L_16->___lookPos_1;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_18 = ((CharacterBase_t1CFFD41AEAD8C28D01AD4FFC61BCDAA2C5AB4053*)__this)->___r_13;
		NullCheck(L_18);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Rigidbody_get_position_m4ECB79BDBBF8FD1EA572EDB792D3330DDED24691(L_18, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_17, L_19, NULL);
		return L_20;
	}

IL_0077:
	{
		// if (isMoving) return userControl.state.lookPos - r.position;
		bool L_21 = V_0;
		if (!L_21)
		{
			goto IL_009b;
		}
	}
	{
		// if (isMoving) return userControl.state.lookPos - r.position;
		UserControlThirdPerson_t84D27C4D05AE0B01CDABC9C382DEDD23F3943690* L_22 = __this->___userControl_19;
		NullCheck(L_22);
		State_t1C2106417C1C59FC418E1C9F846E928466513D3C* L_23 = (State_t1C2106417C1C59FC418E1C9F846E928466513D3C*)(&L_22->___state_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = L_23->___lookPos_1;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_25 = ((CharacterBase_t1CFFD41AEAD8C28D01AD4FFC61BCDAA2C5AB4053*)__this)->___r_13;
		NullCheck(L_25);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = Rigidbody_get_position_m4ECB79BDBBF8FD1EA572EDB792D3330DDED24691(L_25, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_24, L_26, NULL);
		return L_27;
	}

IL_009b:
	{
		// return lookInCameraDirection? userControl.state.lookPos - r.position: transform.forward;
		bool L_28 = __this->___lookInCameraDirection_29;
		if (L_28)
		{
			goto IL_00af;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_29;
		L_29 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_29);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30;
		L_30 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_29, NULL);
		return L_30;
	}

IL_00af:
	{
		UserControlThirdPerson_t84D27C4D05AE0B01CDABC9C382DEDD23F3943690* L_31 = __this->___userControl_19;
		NullCheck(L_31);
		State_t1C2106417C1C59FC418E1C9F846E928466513D3C* L_32 = (State_t1C2106417C1C59FC418E1C9F846E928466513D3C*)(&L_31->___state_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33 = L_32->___lookPos_1;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_34 = ((CharacterBase_t1CFFD41AEAD8C28D01AD4FFC61BCDAA2C5AB4053*)__this)->___r_13;
		NullCheck(L_34);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35;
		L_35 = Rigidbody_get_position_m4ECB79BDBBF8FD1EA572EDB792D3330DDED24691(L_34, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36;
		L_36 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_33, L_35, NULL);
		return L_36;
	}

IL_00d0:
	{
		// return Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37;
		L_37 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		return L_37;
	}
}
// System.Boolean RootMotion.Demos.CharacterThirdPerson::Jump()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CharacterThirdPerson_Jump_mF73ED51555FA3609487905EF149FDAB93582B503 (CharacterThirdPerson_t701D066717AA31A81BCCB2B926375896F0F18CF9* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (!userControl.state.jump) return false;
		UserControlThirdPerson_t84D27C4D05AE0B01CDABC9C382DEDD23F3943690* L_0 = __this->___userControl_19;
		NullCheck(L_0);
		State_t1C2106417C1C59FC418E1C9F846E928466513D3C* L_1 = (State_t1C2106417C1C59FC418E1C9F846E928466513D3C*)(&L_0->___state_7);
		bool L_2 = L_1->___jump_3;
		if (L_2)
		{
			goto IL_0014;
		}
	}
	{
		// if (!userControl.state.jump) return false;
		return (bool)0;
	}

IL_0014:
	{
		// if (userControl.state.crouch) return false;
		UserControlThirdPerson_t84D27C4D05AE0B01CDABC9C382DEDD23F3943690* L_3 = __this->___userControl_19;
		NullCheck(L_3);
		State_t1C2106417C1C59FC418E1C9F846E928466513D3C* L_4 = (State_t1C2106417C1C59FC418E1C9F846E928466513D3C*)(&L_3->___state_7);
		bool L_5 = L_4->___crouch_2;
		if (!L_5)
		{
			goto IL_0028;
		}
	}
	{
		// if (userControl.state.crouch) return false;
		return (bool)0;
	}

IL_0028:
	{
		// if (!characterAnimation.animationGrounded) return false;
		CharacterAnimationBase_tF16F89D851897751BC15325508623E7909E14842* L_6 = __this->___characterAnimation_18;
		NullCheck(L_6);
		bool L_7;
		L_7 = VirtualFuncInvoker0< bool >::Invoke(5 /* System.Boolean RootMotion.Demos.CharacterAnimationBase::get_animationGrounded() */, L_6);
		if (L_7)
		{
			goto IL_0037;
		}
	}
	{
		// if (!characterAnimation.animationGrounded) return false;
		return (bool)0;
	}

IL_0037:
	{
		// if (Time.time < lastAirTime + jumpRepeatDelayTime) return false;
		float L_8;
		L_8 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_9 = __this->___lastAirTime_60;
		float L_10 = __this->___jumpRepeatDelayTime_36;
		if ((!(((float)L_8) < ((float)((float)il2cpp_codegen_add(L_9, L_10))))))
		{
			goto IL_004d;
		}
	}
	{
		// if (Time.time < lastAirTime + jumpRepeatDelayTime) return false;
		return (bool)0;
	}

IL_004d:
	{
		// onGround = false;
		CharacterThirdPerson_set_onGround_m6A0C64AF41BD4C01EA6F48947318AED10EA6C298_inline(__this, (bool)0, NULL);
		// jumpEndTime = Time.time + 0.1f;
		float L_11;
		L_11 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		__this->___jumpEndTime_57 = ((float)il2cpp_codegen_add(L_11, (0.100000001f)));
		// Vector3 jumpVelocity = userControl.state.move * airSpeed;
		UserControlThirdPerson_t84D27C4D05AE0B01CDABC9C382DEDD23F3943690* L_12 = __this->___userControl_19;
		NullCheck(L_12);
		State_t1C2106417C1C59FC418E1C9F846E928466513D3C* L_13 = (State_t1C2106417C1C59FC418E1C9F846E928466513D3C*)(&L_12->___state_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = L_13->___move_0;
		float L_15 = __this->___airSpeed_33;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_14, L_15, NULL);
		V_0 = L_16;
		// jumpVelocity += transform.up * jumpPower;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18;
		L_18 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_18);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2(L_18, NULL);
		float L_20 = __this->___jumpPower_35;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_19, L_20, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_17, L_21, NULL);
		V_0 = L_22;
		// if (smoothJump)
		bool L_23 = __this->___smoothJump_32;
		if (!L_23)
		{
			goto IL_00cc;
		}
	}
	{
		// StopAllCoroutines();
		MonoBehaviour_StopAllCoroutines_m872033451D42013A99867D09337490017E9ED318(__this, NULL);
		// StartCoroutine(JumpSmooth(jumpVelocity - r.velocity));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = V_0;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_25 = ((CharacterBase_t1CFFD41AEAD8C28D01AD4FFC61BCDAA2C5AB4053*)__this)->___r_13;
		NullCheck(L_25);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_25, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_24, L_26, NULL);
		RuntimeObject* L_28;
		L_28 = CharacterThirdPerson_JumpSmooth_mA9659A787AA06E3D2792C336006EE93094467CF9(__this, L_27, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_29;
		L_29 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_28, NULL);
		goto IL_00d8;
	}

IL_00cc:
	{
		// r.velocity = jumpVelocity;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_30 = ((CharacterBase_t1CFFD41AEAD8C28D01AD4FFC61BCDAA2C5AB4053*)__this)->___r_13;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31 = V_0;
		NullCheck(L_30);
		Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62(L_30, L_31, NULL);
	}

IL_00d8:
	{
		// return true;
		return (bool)1;
	}
}
// System.Collections.IEnumerator RootMotion.Demos.CharacterThirdPerson::JumpSmooth(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CharacterThirdPerson_JumpSmooth_mA9659A787AA06E3D2792C336006EE93094467CF9 (CharacterThirdPerson_t701D066717AA31A81BCCB2B926375896F0F18CF9* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_jumpVelocity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CJumpSmoothU3Ed__79_tCF9E3C5C31D617032A31A9EA49FE19CB325E4A54_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CJumpSmoothU3Ed__79_tCF9E3C5C31D617032A31A9EA49FE19CB325E4A54* L_0 = (U3CJumpSmoothU3Ed__79_tCF9E3C5C31D617032A31A9EA49FE19CB325E4A54*)il2cpp_codegen_object_new(U3CJumpSmoothU3Ed__79_tCF9E3C5C31D617032A31A9EA49FE19CB325E4A54_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CJumpSmoothU3Ed__79__ctor_m88EBA70927D0AA4CD9D8274965BADE76E47136D3(L_0, 0, NULL);
		U3CJumpSmoothU3Ed__79_tCF9E3C5C31D617032A31A9EA49FE19CB325E4A54* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		U3CJumpSmoothU3Ed__79_tCF9E3C5C31D617032A31A9EA49FE19CB325E4A54* L_2 = L_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___0_jumpVelocity;
		NullCheck(L_2);
		L_2->___jumpVelocity_3 = L_3;
		return L_2;
	}
}
// System.Void RootMotion.Demos.CharacterThirdPerson::GroundCheck()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterThirdPerson_GroundCheck_m1704CEB107B741D1FFCE6E7326DE8286ECC166F0 (CharacterThirdPerson_t701D066717AA31A81BCCB2B926375896F0F18CF9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	float V_3 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	float V_5 = 0.0f;
	int32_t G_B3_0 = 0;
	float G_B7_0 = 0.0f;
	{
		// Vector3 platformVelocityTarget = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		V_0 = L_0;
		// platformAngularVelocity = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		__this->___platformAngularVelocity_54 = L_1;
		// float stickyForceTarget = 0f;
		V_1 = (0.0f);
		// hit = GetSpherecastHit();
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 L_2;
		L_2 = VirtualFuncInvoker0< RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 >::Invoke(6 /* UnityEngine.RaycastHit RootMotion.Demos.CharacterBase::GetSpherecastHit() */, __this);
		__this->___hit_55 = L_2;
		// normal = transform.up;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2(L_3, NULL);
		__this->___normal_52 = L_4;
		// groundDistance = Vector3.Project(r.position - hit.point, transform.up).magnitude;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_5 = ((CharacterBase_t1CFFD41AEAD8C28D01AD4FFC61BCDAA2C5AB4053*)__this)->___r_13;
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Rigidbody_get_position_m4ECB79BDBBF8FD1EA572EDB792D3330DDED24691(L_5, NULL);
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_7 = (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5*)(&__this->___hit_55);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39(L_7, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_6, L_8, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2(L_10, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_Project_m85DF3CB297EC5E1A17BD6266FF65E86AB7372C9B_inline(L_9, L_11, NULL);
		V_2 = L_12;
		float L_13;
		L_13 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_2), NULL);
		__this->___groundDistance_59 = L_13;
		// bool findGround = Time.time > jumpEndTime && velocityY < jumpPower * 0.5f;
		float L_14;
		L_14 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_15 = __this->___jumpEndTime_57;
		if ((!(((float)L_14) > ((float)L_15))))
		{
			goto IL_0090;
		}
	}
	{
		float L_16 = __this->___velocityY_73;
		float L_17 = __this->___jumpPower_35;
		G_B3_0 = ((((float)L_16) < ((float)((float)il2cpp_codegen_multiply(L_17, (0.5f)))))? 1 : 0);
		goto IL_0091;
	}

IL_0090:
	{
		G_B3_0 = 0;
	}

IL_0091:
	{
		// if (findGround) {
		if (!G_B3_0)
		{
			goto IL_0151;
		}
	}
	{
		// bool g = onGround;
		bool L_18;
		L_18 = CharacterThirdPerson_get_onGround_m9C9555A5C749F8F337E48584713AC44497253957_inline(__this, NULL);
		// onGround = false;
		CharacterThirdPerson_set_onGround_m6A0C64AF41BD4C01EA6F48947318AED10EA6C298_inline(__this, (bool)0, NULL);
		// float groundHeight = !g? airborneThreshold * 0.5f: airborneThreshold;
		if (!L_18)
		{
			goto IL_00ad;
		}
	}
	{
		float L_19 = ((CharacterBase_t1CFFD41AEAD8C28D01AD4FFC61BCDAA2C5AB4053*)__this)->___airborneThreshold_6;
		G_B7_0 = L_19;
		goto IL_00b9;
	}

IL_00ad:
	{
		float L_20 = ((CharacterBase_t1CFFD41AEAD8C28D01AD4FFC61BCDAA2C5AB4053*)__this)->___airborneThreshold_6;
		G_B7_0 = ((float)il2cpp_codegen_multiply(L_20, (0.5f)));
	}

IL_00b9:
	{
		V_3 = G_B7_0;
		// Vector3 horizontalVelocity = V3Tools.ExtractHorizontal(r.velocity, gravity, 1f);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_21 = ((CharacterBase_t1CFFD41AEAD8C28D01AD4FFC61BCDAA2C5AB4053*)__this)->___r_13;
		NullCheck(L_21);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_21, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23 = __this->___gravity_71;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = V3Tools_ExtractHorizontal_m8AA90F6DD024441CBBBC2FB7F06DC00BA9DBE554(L_22, L_23, (1.0f), NULL);
		V_4 = L_24;
		// float velocityF = horizontalVelocity.magnitude;
		float L_25;
		L_25 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_4), NULL);
		V_5 = L_25;
		// if (groundDistance < groundHeight) {
		float L_26 = __this->___groundDistance_59;
		float L_27 = V_3;
		if ((!(((float)L_26) < ((float)L_27))))
		{
			goto IL_0151;
		}
	}
	{
		// stickyForceTarget = groundStickyEffect * velocityF * groundHeight;
		float L_28 = __this->___groundStickyEffect_26;
		float L_29 = V_5;
		float L_30 = V_3;
		V_1 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_28, L_29)), L_30));
		// if (hit.rigidbody != null) {
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_31 = (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5*)(&__this->___hit_55);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_32;
		L_32 = RaycastHit_get_rigidbody_mE6FCB1B1A9F0C8D4185A484C10B9A5403CCD6005(L_31, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_32, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_33)
		{
			goto IL_014a;
		}
	}
	{
		// platformVelocityTarget = hit.rigidbody.GetPointVelocity(hit.point);
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_34 = (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5*)(&__this->___hit_55);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_35;
		L_35 = RaycastHit_get_rigidbody_mE6FCB1B1A9F0C8D4185A484C10B9A5403CCD6005(L_34, NULL);
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_36 = (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5*)(&__this->___hit_55);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37;
		L_37 = RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39(L_36, NULL);
		NullCheck(L_35);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38;
		L_38 = Rigidbody_GetPointVelocity_m94324B9CDC28751DB27594ADE76FEAB5EC4EB1BD(L_35, L_37, NULL);
		V_0 = L_38;
		// platformAngularVelocity = Vector3.Project(hit.rigidbody.angularVelocity, transform.up);
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_39 = (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5*)(&__this->___hit_55);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_40;
		L_40 = RaycastHit_get_rigidbody_mE6FCB1B1A9F0C8D4185A484C10B9A5403CCD6005(L_39, NULL);
		NullCheck(L_40);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41;
		L_41 = Rigidbody_get_angularVelocity_m4EACCFCF15CA441CCD53B24322C2E7B8EEBDF6A8(L_40, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_42;
		L_42 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_42);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43;
		L_43 = Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2(L_42, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_44;
		L_44 = Vector3_Project_m85DF3CB297EC5E1A17BD6266FF65E86AB7372C9B_inline(L_41, L_43, NULL);
		__this->___platformAngularVelocity_54 = L_44;
	}

IL_014a:
	{
		// onGround = true;
		CharacterThirdPerson_set_onGround_m6A0C64AF41BD4C01EA6F48947318AED10EA6C298_inline(__this, (bool)1, NULL);
	}

IL_0151:
	{
		// platformVelocity = Vector3.Lerp(platformVelocity, platformVelocityTarget, Time.deltaTime * platformFriction);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45 = __this->___platformVelocity_53;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46 = V_0;
		float L_47;
		L_47 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_48 = __this->___platformFriction_25;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_49;
		L_49 = Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline(L_45, L_46, ((float)il2cpp_codegen_multiply(L_47, L_48)), NULL);
		__this->___platformVelocity_53 = L_49;
		// if (fullRootMotion) stickyForce = 0f;
		bool L_50;
		L_50 = CharacterThirdPerson_get_fullRootMotion_mBED6B5C55FDB74F8115F9E91BD4BEED0D9B97B83_inline(__this, NULL);
		if (!L_50)
		{
			goto IL_0182;
		}
	}
	{
		// if (fullRootMotion) stickyForce = 0f;
		__this->___stickyForce_61 = (0.0f);
	}

IL_0182:
	{
		// stickyForce = stickyForceTarget;//Mathf.Lerp(stickyForce, stickyForceTarget, Time.deltaTime * 5f);
		float L_51 = V_1;
		__this->___stickyForce_61 = L_51;
		// if (!onGround) lastAirTime = Time.time;
		bool L_52;
		L_52 = CharacterThirdPerson_get_onGround_m9C9555A5C749F8F337E48584713AC44497253957_inline(__this, NULL);
		if (L_52)
		{
			goto IL_019c;
		}
	}
	{
		// if (!onGround) lastAirTime = Time.time;
		float L_53;
		L_53 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		__this->___lastAirTime_60 = L_53;
	}

IL_019c:
	{
		// }
		return;
	}
}
// System.Void RootMotion.Demos.CharacterThirdPerson::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterThirdPerson__ctor_m17FD7B03E827F8B3A476DA423FEB7B35AD5F69B7 (CharacterThirdPerson_t701D066717AA31A81BCCB2B926375896F0F18CF9* __this, const RuntimeMethod* method) 
{
	{
		// public bool smoothPhysics = true; // If true, will use interpolation to smooth out the fixed time step.
		__this->___smoothPhysics_22 = (bool)1;
		// public float smoothAccelerationTime = 0.2f; // The smooth acceleration of the speed of the character (using Vector3.SmoothDamp)
		__this->___smoothAccelerationTime_23 = (0.200000003f);
		// public float linearAccelerationSpeed = 3f; // The linear acceleration of the speed of the character (using Vector3.MoveTowards)
		__this->___linearAccelerationSpeed_24 = (3.0f);
		// public float platformFriction = 7f;                    // the acceleration of adapting the velocities of moving platforms
		__this->___platformFriction_25 = (7.0f);
		// public float groundStickyEffect = 4f;                // power of 'stick to ground' effect - prevents bumping down slopes.
		__this->___groundStickyEffect_26 = (4.0f);
		// public float maxVerticalVelocityOnGround = 3f;        // the maximum y velocity while the character is grounded
		__this->___maxVerticalVelocityOnGround_27 = (3.0f);
		// public float turnSpeed = 5f;                    // additional turn speed added when the player is moving (added to animation root rotation)
		__this->___turnSpeed_30 = (5.0f);
		// public float stationaryTurnSpeedMlp = 1f;           // additional turn speed added when the player is stationary (added to animation root rotation)
		__this->___stationaryTurnSpeedMlp_31 = (1.0f);
		// public bool smoothJump = true; // If true, adds jump force over a few fixed time steps, not in a single step
		__this->___smoothJump_32 = (bool)1;
		// public float airSpeed = 6f; // determines the max speed of the character while airborne
		__this->___airSpeed_33 = (6.0f);
		// public float airControl = 2f; // determines the response speed of controlling the character while airborne
		__this->___airControl_34 = (2.0f);
		// public float jumpPower = 12f; // determines the jump force applied when jumping (and therefore the jump height)
		__this->___jumpPower_35 = (12.0f);
		// public float doubleJumpPowerMlp = 1f;
		__this->___doubleJumpPowerMlp_38 = (1.0f);
		// public float wallRunMaxLength = 1f;                    // max duration of a wallrun
		__this->___wallRunMaxLength_40 = (1.0f);
		// public float wallRunMinMoveMag = 0.6f;                // the minumum magnitude of the user control input move vector
		__this->___wallRunMinMoveMag_41 = (0.600000024f);
		// public float wallRunMinVelocityY = -1f;                // the minimum vertical velocity of doing a wall run
		__this->___wallRunMinVelocityY_42 = (-1.0f);
		// public float wallRunRotationSpeed = 1.5f;            // the speed of rotating the character to the wall normal
		__this->___wallRunRotationSpeed_43 = (1.5f);
		// public float wallRunMaxRotationAngle = 70f;            // max angle of character rotation
		__this->___wallRunMaxRotationAngle_44 = (70.0f);
		// public float wallRunWeightSpeed = 5f;                // the speed of blending in/out the wall running effect
		__this->___wallRunWeightSpeed_45 = (5.0f);
		// public float crouchCapsuleScaleMlp = 0.6f;            // the capsule collider scale multiplier while crouching
		__this->___crouchCapsuleScaleMlp_46 = (0.600000024f);
		// private Vector3 wallNormal = Vector3.up;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		__this->___wallNormal_62 = L_0;
		// private Quaternion fixedDeltaRotation = Quaternion.identity;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1;
		L_1 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		__this->___fixedDeltaRotation_68 = L_1;
		CharacterBase__ctor_mC3B30A5FC3BFFD9FD05A5BE061D1FC2238940E94(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: RootMotion.Demos.CharacterThirdPerson/AnimState
IL2CPP_EXTERN_C void AnimState_t217CB34525B21DC85A816E042E22EA0CD4D6F91D_marshal_pinvoke(const AnimState_t217CB34525B21DC85A816E042E22EA0CD4D6F91D& unmarshaled, AnimState_t217CB34525B21DC85A816E042E22EA0CD4D6F91D_marshaled_pinvoke& marshaled)
{
	marshaled.___moveDirection_0 = unmarshaled.___moveDirection_0;
	marshaled.___jump_1 = static_cast<int32_t>(unmarshaled.___jump_1);
	marshaled.___crouch_2 = static_cast<int32_t>(unmarshaled.___crouch_2);
	marshaled.___onGround_3 = static_cast<int32_t>(unmarshaled.___onGround_3);
	marshaled.___isStrafing_4 = static_cast<int32_t>(unmarshaled.___isStrafing_4);
	marshaled.___yVelocity_5 = unmarshaled.___yVelocity_5;
	marshaled.___doubleJump_6 = static_cast<int32_t>(unmarshaled.___doubleJump_6);
}
IL2CPP_EXTERN_C void AnimState_t217CB34525B21DC85A816E042E22EA0CD4D6F91D_marshal_pinvoke_back(const AnimState_t217CB34525B21DC85A816E042E22EA0CD4D6F91D_marshaled_pinvoke& marshaled, AnimState_t217CB34525B21DC85A816E042E22EA0CD4D6F91D& unmarshaled)
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 unmarshaledmoveDirection_temp_0;
	memset((&unmarshaledmoveDirection_temp_0), 0, sizeof(unmarshaledmoveDirection_temp_0));
	unmarshaledmoveDirection_temp_0 = marshaled.___moveDirection_0;
	unmarshaled.___moveDirection_0 = unmarshaledmoveDirection_temp_0;
	bool unmarshaledjump_temp_1 = false;
	unmarshaledjump_temp_1 = static_cast<bool>(marshaled.___jump_1);
	unmarshaled.___jump_1 = unmarshaledjump_temp_1;
	bool unmarshaledcrouch_temp_2 = false;
	unmarshaledcrouch_temp_2 = static_cast<bool>(marshaled.___crouch_2);
	unmarshaled.___crouch_2 = unmarshaledcrouch_temp_2;
	bool unmarshaledonGround_temp_3 = false;
	unmarshaledonGround_temp_3 = static_cast<bool>(marshaled.___onGround_3);
	unmarshaled.___onGround_3 = unmarshaledonGround_temp_3;
	bool unmarshaledisStrafing_temp_4 = false;
	unmarshaledisStrafing_temp_4 = static_cast<bool>(marshaled.___isStrafing_4);
	unmarshaled.___isStrafing_4 = unmarshaledisStrafing_temp_4;
	float unmarshaledyVelocity_temp_5 = 0.0f;
	unmarshaledyVelocity_temp_5 = marshaled.___yVelocity_5;
	unmarshaled.___yVelocity_5 = unmarshaledyVelocity_temp_5;
	bool unmarshaleddoubleJump_temp_6 = false;
	unmarshaleddoubleJump_temp_6 = static_cast<bool>(marshaled.___doubleJump_6);
	unmarshaled.___doubleJump_6 = unmarshaleddoubleJump_temp_6;
}
// Conversion method for clean up from marshalling of: RootMotion.Demos.CharacterThirdPerson/AnimState
IL2CPP_EXTERN_C void AnimState_t217CB34525B21DC85A816E042E22EA0CD4D6F91D_marshal_pinvoke_cleanup(AnimState_t217CB34525B21DC85A816E042E22EA0CD4D6F91D_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: RootMotion.Demos.CharacterThirdPerson/AnimState
IL2CPP_EXTERN_C void AnimState_t217CB34525B21DC85A816E042E22EA0CD4D6F91D_marshal_com(const AnimState_t217CB34525B21DC85A816E042E22EA0CD4D6F91D& unmarshaled, AnimState_t217CB34525B21DC85A816E042E22EA0CD4D6F91D_marshaled_com& marshaled)
{
	marshaled.___moveDirection_0 = unmarshaled.___moveDirection_0;
	marshaled.___jump_1 = static_cast<int32_t>(unmarshaled.___jump_1);
	marshaled.___crouch_2 = static_cast<int32_t>(unmarshaled.___crouch_2);
	marshaled.___onGround_3 = static_cast<int32_t>(unmarshaled.___onGround_3);
	marshaled.___isStrafing_4 = static_cast<int32_t>(unmarshaled.___isStrafing_4);
	marshaled.___yVelocity_5 = unmarshaled.___yVelocity_5;
	marshaled.___doubleJump_6 = static_cast<int32_t>(unmarshaled.___doubleJump_6);
}
IL2CPP_EXTERN_C void AnimState_t217CB34525B21DC85A816E042E22EA0CD4D6F91D_marshal_com_back(const AnimState_t217CB34525B21DC85A816E042E22EA0CD4D6F91D_marshaled_com& marshaled, AnimState_t217CB34525B21DC85A816E042E22EA0CD4D6F91D& unmarshaled)
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 unmarshaledmoveDirection_temp_0;
	memset((&unmarshaledmoveDirection_temp_0), 0, sizeof(unmarshaledmoveDirection_temp_0));
	unmarshaledmoveDirection_temp_0 = marshaled.___moveDirection_0;
	unmarshaled.___moveDirection_0 = unmarshaledmoveDirection_temp_0;
	bool unmarshaledjump_temp_1 = false;
	unmarshaledjump_temp_1 = static_cast<bool>(marshaled.___jump_1);
	unmarshaled.___jump_1 = unmarshaledjump_temp_1;
	bool unmarshaledcrouch_temp_2 = false;
	unmarshaledcrouch_temp_2 = static_cast<bool>(marshaled.___crouch_2);
	unmarshaled.___crouch_2 = unmarshaledcrouch_temp_2;
	bool unmarshaledonGround_temp_3 = false;
	unmarshaledonGround_temp_3 = static_cast<bool>(marshaled.___onGround_3);
	unmarshaled.___onGround_3 = unmarshaledonGround_temp_3;
	bool unmarshaledisStrafing_temp_4 = false;
	unmarshaledisStrafing_temp_4 = static_cast<bool>(marshaled.___isStrafing_4);
	unmarshaled.___isStrafing_4 = unmarshaledisStrafing_temp_4;
	float unmarshaledyVelocity_temp_5 = 0.0f;
	unmarshaledyVelocity_temp_5 = marshaled.___yVelocity_5;
	unmarshaled.___yVelocity_5 = unmarshaledyVelocity_temp_5;
	bool unmarshaleddoubleJump_temp_6 = false;
	unmarshaleddoubleJump_temp_6 = static_cast<bool>(marshaled.___doubleJump_6);
	unmarshaled.___doubleJump_6 = unmarshaleddoubleJump_temp_6;
}
// Conversion method for clean up from marshalling of: RootMotion.Demos.CharacterThirdPerson/AnimState
IL2CPP_EXTERN_C void AnimState_t217CB34525B21DC85A816E042E22EA0CD4D6F91D_marshal_com_cleanup(AnimState_t217CB34525B21DC85A816E042E22EA0CD4D6F91D_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void RootMotion.Demos.CharacterThirdPerson/<JumpSmooth>d__79::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CJumpSmoothU3Ed__79__ctor_m88EBA70927D0AA4CD9D8274965BADE76E47136D3 (U3CJumpSmoothU3Ed__79_tCF9E3C5C31D617032A31A9EA49FE19CB325E4A54* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void RootMotion.Demos.CharacterThirdPerson/<JumpSmooth>d__79::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CJumpSmoothU3Ed__79_System_IDisposable_Dispose_m9903799F3AF466811D3E46C8D5AB27C09D3553AA (U3CJumpSmoothU3Ed__79_tCF9E3C5C31D617032A31A9EA49FE19CB325E4A54* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean RootMotion.Demos.CharacterThirdPerson/<JumpSmooth>d__79::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CJumpSmoothU3Ed__79_MoveNext_m2297789B08337AA957FDFC886C6C89BC716A09DA (U3CJumpSmoothU3Ed__79_tCF9E3C5C31D617032A31A9EA49FE19CB325E4A54* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForFixedUpdate_t86F5BC0B6A668AEF2903DE9ADB52062E457BD1B7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	CharacterThirdPerson_t701D066717AA31A81BCCB2B926375896F0F18CF9* V_1 = NULL;
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		CharacterThirdPerson_t701D066717AA31A81BCCB2B926375896F0F18CF9* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0070;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// int steps = 0;
		__this->___U3CstepsU3E5__2_4 = 0;
		// int stepsToTake = 3;
		__this->___U3CstepsToTakeU3E5__3_5 = 3;
		goto IL_0077;
	}

IL_002e:
	{
		// r.AddForce((jumpVelocity) / stepsToTake, ForceMode.VelocityChange);
		CharacterThirdPerson_t701D066717AA31A81BCCB2B926375896F0F18CF9* L_4 = V_1;
		NullCheck(L_4);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_5 = ((CharacterBase_t1CFFD41AEAD8C28D01AD4FFC61BCDAA2C5AB4053*)L_4)->___r_13;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = __this->___jumpVelocity_3;
		int32_t L_7 = __this->___U3CstepsToTakeU3E5__3_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_6, ((float)L_7), NULL);
		NullCheck(L_5);
		Rigidbody_AddForce_mBDBC288D0E266BC1B62E3649B4FCE46E7EA9CCBC(L_5, L_8, 2, NULL);
		// steps++;
		int32_t L_9 = __this->___U3CstepsU3E5__2_4;
		V_2 = L_9;
		int32_t L_10 = V_2;
		__this->___U3CstepsU3E5__2_4 = ((int32_t)il2cpp_codegen_add(L_10, 1));
		// yield return new WaitForFixedUpdate();
		WaitForFixedUpdate_t86F5BC0B6A668AEF2903DE9ADB52062E457BD1B7* L_11 = (WaitForFixedUpdate_t86F5BC0B6A668AEF2903DE9ADB52062E457BD1B7*)il2cpp_codegen_object_new(WaitForFixedUpdate_t86F5BC0B6A668AEF2903DE9ADB52062E457BD1B7_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		WaitForFixedUpdate__ctor_m28D22FD61960FCD538753493FAC080DA5EC7A9E7(L_11, NULL);
		__this->___U3CU3E2__current_1 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_11);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0070:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_0077:
	{
		// while (steps < stepsToTake)
		int32_t L_12 = __this->___U3CstepsU3E5__2_4;
		int32_t L_13 = __this->___U3CstepsToTakeU3E5__3_5;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_002e;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object RootMotion.Demos.CharacterThirdPerson/<JumpSmooth>d__79::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CJumpSmoothU3Ed__79_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m7996A4D52BDD8F84BA0072CAB43A97151750CC1E (U3CJumpSmoothU3Ed__79_tCF9E3C5C31D617032A31A9EA49FE19CB325E4A54* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void RootMotion.Demos.CharacterThirdPerson/<JumpSmooth>d__79::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CJumpSmoothU3Ed__79_System_Collections_IEnumerator_Reset_mB8F6DB5329FFF8A4C53A17902048C78473F5E9D2 (U3CJumpSmoothU3Ed__79_tCF9E3C5C31D617032A31A9EA49FE19CB325E4A54* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CJumpSmoothU3Ed__79_System_Collections_IEnumerator_Reset_mB8F6DB5329FFF8A4C53A17902048C78473F5E9D2_RuntimeMethod_var)));
	}
}
// System.Object RootMotion.Demos.CharacterThirdPerson/<JumpSmooth>d__79::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CJumpSmoothU3Ed__79_System_Collections_IEnumerator_get_Current_mA2A3B5DC3E22C101D47D181B28727C06A84A4224 (U3CJumpSmoothU3Ed__79_tCF9E3C5C31D617032A31A9EA49FE19CB325E4A54* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean RootMotion.Demos.SimpleLocomotion::get_isGrounded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SimpleLocomotion_get_isGrounded_mBB52FDDFD43FFBE316BCA4EB0202E1EFEAFA61BF (SimpleLocomotion_t5C40DF535664F3EF4CC54452166672EA480285BE* __this, const RuntimeMethod* method) 
{
	{
		// public bool isGrounded { get; private set; }
		bool L_0 = __this->___U3CisGroundedU3Ek__BackingField_10;
		return L_0;
	}
}
// System.Void RootMotion.Demos.SimpleLocomotion::set_isGrounded(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleLocomotion_set_isGrounded_mAABAD43801C81B3513E20DEF68393661A55B9CC7 (SimpleLocomotion_t5C40DF535664F3EF4CC54452166672EA480285BE* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool isGrounded { get; private set; }
		bool L_0 = ___0_value;
		__this->___U3CisGroundedU3Ek__BackingField_10 = L_0;
		return;
	}
}
// System.Void RootMotion.Demos.SimpleLocomotion::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleLocomotion_Start_m936FBC1E9251A5D55E802A443CDEA2EA145405C0 (SimpleLocomotion_t5C40DF535664F3EF4CC54452166672EA480285BE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A_m96B48A644EDC97C5C82F154D1FEA551B2E392040_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// animator = GetComponent<Animator>();
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0;
		L_0 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		__this->___animator_11 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___animator_11), (void*)L_0);
		// characterController = GetComponent<CharacterController>();
		CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* L_1;
		L_1 = Component_GetComponent_TisCharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A_m96B48A644EDC97C5C82F154D1FEA551B2E392040(__this, Component_GetComponent_TisCharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A_m96B48A644EDC97C5C82F154D1FEA551B2E392040_RuntimeMethod_var);
		__this->___characterController_16 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___characterController_16), (void*)L_1);
		// cameraController.enabled = false;
		CameraController_t1AE8F30FD3CB14582A1D7EC6F704EE3F49D69412* L_2 = __this->___cameraController_4;
		NullCheck(L_2);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_2, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void RootMotion.Demos.SimpleLocomotion::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleLocomotion_Update_m147B39073B2DDFAE21EE265DAE6212CDE6BD28A3 (SimpleLocomotion_t5C40DF535664F3EF4CC54452166672EA480285BE* __this, const RuntimeMethod* method) 
{
	{
		// isGrounded = transform.position.y < 0.1f;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		float L_2 = L_1.___y_3;
		SimpleLocomotion_set_isGrounded_mAABAD43801C81B3513E20DEF68393661A55B9CC7_inline(__this, (bool)((((float)L_2) < ((float)(0.100000001f)))? 1 : 0), NULL);
		// Rotate();
		SimpleLocomotion_Rotate_m12DA862A7D47D8D9B0EBD4BE9FECFD72A56476BA(__this, NULL);
		// Move();
		SimpleLocomotion_Move_m50CA03DDDB04B40CC2F1EB95C7C1BAD4320EDEDC(__this, NULL);
		// }
		return;
	}
}
// System.Void RootMotion.Demos.SimpleLocomotion::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleLocomotion_LateUpdate_m4763913E054FE9ADF633DEB6F84B6A13BF3320C0 (SimpleLocomotion_t5C40DF535664F3EF4CC54452166672EA480285BE* __this, const RuntimeMethod* method) 
{
	{
		// cameraController.UpdateInput();
		CameraController_t1AE8F30FD3CB14582A1D7EC6F704EE3F49D69412* L_0 = __this->___cameraController_4;
		NullCheck(L_0);
		CameraController_UpdateInput_mE8E2FC62E97B7F145D8300C07F6F5F423F3ED4B1(L_0, NULL);
		// cameraController.UpdateTransform();
		CameraController_t1AE8F30FD3CB14582A1D7EC6F704EE3F49D69412* L_1 = __this->___cameraController_4;
		NullCheck(L_1);
		CameraController_UpdateTransform_m972020875FA1569AF137980F8DEB70A183D1B9CB(L_1, NULL);
		// }
		return;
	}
}
// System.Void RootMotion.Demos.SimpleLocomotion::Rotate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleLocomotion_Rotate_m12DA862A7D47D8D9B0EBD4BE9FECFD72A56476BA (SimpleLocomotion_t5C40DF535664F3EF4CC54452166672EA480285BE* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_5;
	memset((&V_5), 0, sizeof(V_5));
	int32_t V_6 = 0;
	{
		// if (!isGrounded) return;
		bool L_0;
		L_0 = SimpleLocomotion_get_isGrounded_mBB52FDDFD43FFBE316BCA4EB0202E1EFEAFA61BF_inline(__this, NULL);
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (!isGrounded) return;
		return;
	}

IL_0009:
	{
		// Vector3 inputVector = GetInputVector();
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = SimpleLocomotion_GetInputVector_mFD8A6EC6850D871DCD71DF1EFE54A1071C4A1039(__this, NULL);
		V_0 = L_1;
		// if (inputVector == Vector3.zero) return;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		bool L_4;
		L_4 = Vector3_op_Equality_mCDCBB8D2EDC3D3BF20F31A25ACB34705D352B479_inline(L_2, L_3, NULL);
		if (!L_4)
		{
			goto IL_001e;
		}
	}
	{
		// if (inputVector == Vector3.zero) return;
		return;
	}

IL_001e:
	{
		// Vector3 forward = transform.forward;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_5, NULL);
		V_1 = L_6;
		// switch(rotationMode) {
		int32_t L_7 = __this->___rotationMode_8;
		V_6 = L_7;
		int32_t L_8 = V_6;
		if (!L_8)
		{
			goto IL_003c;
		}
	}
	{
		int32_t L_9 = V_6;
		if ((((int32_t)L_9) == ((int32_t)1)))
		{
			goto IL_00ae;
		}
	}
	{
		return;
	}

IL_003c:
	{
		// Vector3 targetDirection = cameraController.transform.rotation * inputVector;
		CameraController_t1AE8F30FD3CB14582A1D7EC6F704EE3F49D69412* L_10 = __this->___cameraController_4;
		NullCheck(L_10);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_10, NULL);
		NullCheck(L_11);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12;
		L_12 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_11, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_12, L_13, NULL);
		V_2 = L_14;
		// float angleForward = Mathf.Atan2(forward.x, forward.z) * Mathf.Rad2Deg;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = V_1;
		float L_16 = L_15.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = V_1;
		float L_18 = L_17.___z_4;
		float L_19;
		L_19 = atan2f(L_16, L_18);
		// float angleTarget = Mathf.Atan2(targetDirection.x, targetDirection.z) * Mathf.Rad2Deg;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = V_2;
		float L_21 = L_20.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = V_2;
		float L_23 = L_22.___z_4;
		float L_24;
		L_24 = atan2f(L_21, L_23);
		V_3 = ((float)il2cpp_codegen_multiply(L_24, (57.2957802f)));
		// float angle = Mathf.SmoothDampAngle(angleForward, angleTarget, ref angleVel, turnTime);
		float L_25 = V_3;
		float* L_26 = (float*)(&__this->___angleVel_13);
		float L_27 = __this->___turnTime_6;
		float L_28;
		L_28 = Mathf_SmoothDampAngle_m81F8BEDEE653DBC7AEC560E21EA429B34AA2734D_inline(((float)il2cpp_codegen_multiply(L_19, (57.2957802f))), L_25, L_26, L_27, NULL);
		V_4 = L_28;
		// transform.rotation = Quaternion.AngleAxis(angle, Vector3.up);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_29;
		L_29 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		float L_30 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
		L_31 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_32;
		L_32 = Quaternion_AngleAxis_mF37022977B297E63AA70D69EA1C4C922FF22CC80(L_30, L_31, NULL);
		NullCheck(L_29);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_29, L_32, NULL);
		// break;
		return;
	}

IL_00ae:
	{
		// Vector3 inputVectorRaw = GetInputVectorRaw();
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33;
		L_33 = SimpleLocomotion_GetInputVectorRaw_mBBC7E3189EA0F96E16972926E298AC7EE2DBBBBA(__this, NULL);
		V_5 = L_33;
		// if (inputVectorRaw != Vector3.zero) linearTargetDirection = cameraController.transform.rotation * inputVectorRaw;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35;
		L_35 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		bool L_36;
		L_36 = Vector3_op_Inequality_m9F170CDFBF1E490E559DA5D06D6547501A402BBF_inline(L_34, L_35, NULL);
		if (!L_36)
		{
			goto IL_00e1;
		}
	}
	{
		// if (inputVectorRaw != Vector3.zero) linearTargetDirection = cameraController.transform.rotation * inputVectorRaw;
		CameraController_t1AE8F30FD3CB14582A1D7EC6F704EE3F49D69412* L_37 = __this->___cameraController_4;
		NullCheck(L_37);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_38;
		L_38 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_37, NULL);
		NullCheck(L_38);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_39;
		L_39 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_38, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41;
		L_41 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_39, L_40, NULL);
		__this->___linearTargetDirection_15 = L_41;
	}

IL_00e1:
	{
		// forward = Vector3.RotateTowards(forward, linearTargetDirection, Time.deltaTime * (1f /turnTime), 1f);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43 = __this->___linearTargetDirection_15;
		float L_44;
		L_44 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_45 = __this->___turnTime_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46;
		L_46 = Vector3_RotateTowards_m884BB56D5A071EF6008F9354D5FF1C9A1913AF92(L_42, L_43, ((float)il2cpp_codegen_multiply(L_44, ((float)((1.0f)/L_45)))), (1.0f), NULL);
		V_1 = L_46;
		// forward.y = 0f;
		(&V_1)->___y_3 = (0.0f);
		// transform.rotation = Quaternion.LookRotation(forward);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_47;
		L_47 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_48 = V_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_49;
		L_49 = Quaternion_LookRotation_mDB2CCA75B8E1AB98104F2A6E1A1EA57D0D1298D7(L_48, NULL);
		NullCheck(L_47);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_47, L_49, NULL);
		// }
		return;
	}
}
// System.Void RootMotion.Demos.SimpleLocomotion::Move()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleLocomotion_Move_m50CA03DDDB04B40CC2F1EB95C7C1BAD4320EDEDC (SimpleLocomotion_t5C40DF535664F3EF4CC54452166672EA480285BE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5D2E3D85D1C3D4F42FAE33FB35C01C48241E0B32);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	float G_B7_0 = 0.0f;
	int32_t G_B10_0 = 0;
	{
		// float speedTarget = walkByDefault? (Input.GetKey(KeyCode.LeftShift)? 1f: 0.5f): (Input.GetKey(KeyCode.LeftShift)? 0.5f: 1f);
		bool L_0 = __this->___walkByDefault_7;
		if (L_0)
		{
			goto IL_0022;
		}
	}
	{
		bool L_1;
		L_1 = Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434(((int32_t)304), NULL);
		if (L_1)
		{
			goto IL_001b;
		}
	}
	{
		G_B7_0 = (1.0f);
		goto IL_003a;
	}

IL_001b:
	{
		G_B7_0 = (0.5f);
		goto IL_003a;
	}

IL_0022:
	{
		bool L_2;
		L_2 = Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434(((int32_t)304), NULL);
		if (L_2)
		{
			goto IL_0035;
		}
	}
	{
		G_B7_0 = (0.5f);
		goto IL_003a;
	}

IL_0035:
	{
		G_B7_0 = (1.0f);
	}

IL_003a:
	{
		V_0 = G_B7_0;
		// speed = Mathf.SmoothDamp(speed, speedTarget, ref speedVel, accelerationTime);
		float L_3 = __this->___speed_12;
		float L_4 = V_0;
		float* L_5 = (float*)(&__this->___speedVel_14);
		float L_6 = __this->___accelerationTime_5;
		float L_7;
		L_7 = Mathf_SmoothDamp_m3A255A356924421B4042AAD1623EF46F92A08C91_inline(L_3, L_4, L_5, L_6, NULL);
		__this->___speed_12 = L_7;
		// float s = GetInputVector().magnitude * speed;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = SimpleLocomotion_GetInputVector_mFD8A6EC6850D871DCD71DF1EFE54A1071C4A1039(__this, NULL);
		V_2 = L_8;
		float L_9;
		L_9 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_2), NULL);
		float L_10 = __this->___speed_12;
		V_1 = ((float)il2cpp_codegen_multiply(L_9, L_10));
		// animator.SetFloat("Speed", s);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_11 = __this->___animator_11;
		float L_12 = V_1;
		NullCheck(L_11);
		Animator_SetFloat_m10C78733FAFC7AFEDBDACC48B7C66D3A35A0A7FE(L_11, _stringLiteral5D2E3D85D1C3D4F42FAE33FB35C01C48241E0B32, L_12, NULL);
		// bool proceduralMotion = !animator.hasRootMotion && isGrounded;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_13 = __this->___animator_11;
		NullCheck(L_13);
		bool L_14;
		L_14 = Animator_get_hasRootMotion_mA39728839F19F4E103CF2599281E6F796D2AB341(L_13, NULL);
		if (L_14)
		{
			goto IL_0095;
		}
	}
	{
		bool L_15;
		L_15 = SimpleLocomotion_get_isGrounded_mBB52FDDFD43FFBE316BCA4EB0202E1EFEAFA61BF_inline(__this, NULL);
		G_B10_0 = ((int32_t)(L_15));
		goto IL_0096;
	}

IL_0095:
	{
		G_B10_0 = 0;
	}

IL_0096:
	{
		// if (proceduralMotion) {
		if (!G_B10_0)
		{
			goto IL_00f2;
		}
	}
	{
		// Vector3 move = transform.forward * s * moveSpeed;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_16);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_16, NULL);
		float L_18 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_17, L_18, NULL);
		float L_20 = __this->___moveSpeed_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_19, L_20, NULL);
		V_3 = L_21;
		// if (characterController != null) {
		CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* L_22 = __this->___characterController_16;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_23;
		L_23 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_22, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_23)
		{
			goto IL_00d1;
		}
	}
	{
		// characterController.SimpleMove(move);
		CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* L_24 = __this->___characterController_16;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25 = V_3;
		NullCheck(L_24);
		bool L_26;
		L_26 = CharacterController_SimpleMove_mE32A48D439878B3241E8456F8EBFAAE264BD705C(L_24, L_25, NULL);
		return;
	}

IL_00d1:
	{
		// transform.position += move * Time.deltaTime;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27;
		L_27 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_28 = L_27;
		NullCheck(L_28);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		L_29 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_28, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30 = V_3;
		float L_31;
		L_31 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32;
		L_32 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_30, L_31, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33;
		L_33 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_29, L_32, NULL);
		NullCheck(L_28);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_28, L_33, NULL);
	}

IL_00f2:
	{
		// }
		return;
	}
}
// UnityEngine.Vector3 RootMotion.Demos.SimpleLocomotion::GetInputVector()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 SimpleLocomotion_GetInputVector_mFD8A6EC6850D871DCD71DF1EFE54A1071C4A1039 (SimpleLocomotion_t5C40DF535664F3EF4CC54452166672EA480285BE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 d = new Vector3(
		//     Input.GetAxis("Horizontal"),
		//     0f,
		//     Input.GetAxis("Vertical")
		//     );
		float L_0;
		L_0 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E, NULL);
		float L_1;
		L_1 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A, NULL);
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_0), L_0, (0.0f), L_1, NULL);
		// d.z += Mathf.Abs(d.x) * 0.05f;
		float* L_2 = (float*)(&(&V_0)->___z_4);
		float* L_3 = L_2;
		float L_4 = *((float*)L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		float L_6 = L_5.___x_2;
		float L_7;
		L_7 = fabsf(L_6);
		*((float*)L_3) = (float)((float)il2cpp_codegen_add(L_4, ((float)il2cpp_codegen_multiply(L_7, (0.0500000007f)))));
		// d.x -= Mathf.Abs(d.z) * 0.05f;
		float* L_8 = (float*)(&(&V_0)->___x_2);
		float* L_9 = L_8;
		float L_10 = *((float*)L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = V_0;
		float L_12 = L_11.___z_4;
		float L_13;
		L_13 = fabsf(L_12);
		*((float*)L_9) = (float)((float)il2cpp_codegen_subtract(L_10, ((float)il2cpp_codegen_multiply(L_13, (0.0500000007f)))));
		// return d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = V_0;
		return L_14;
	}
}
// UnityEngine.Vector3 RootMotion.Demos.SimpleLocomotion::GetInputVectorRaw()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 SimpleLocomotion_GetInputVectorRaw_mBBC7E3189EA0F96E16972926E298AC7EE2DBBBBA (SimpleLocomotion_t5C40DF535664F3EF4CC54452166672EA480285BE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new Vector3(
		//     Input.GetAxisRaw("Horizontal"),
		//     0f,
		//     Input.GetAxisRaw("Vertical")
		//     );
		float L_0;
		L_0 = Input_GetAxisRaw_m47C0CF8E090561A2F407A4E11D5F2A45044EB8E4(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E, NULL);
		float L_1;
		L_1 = Input_GetAxisRaw_m47C0CF8E090561A2F407A4E11D5F2A45044EB8E4(_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_2), L_0, (0.0f), L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void RootMotion.Demos.SimpleLocomotion::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleLocomotion__ctor_mB5D9FC50923983C6F49349FC478B414BAD352496 (SimpleLocomotion_t5C40DF535664F3EF4CC54452166672EA480285BE* __this, const RuntimeMethod* method) 
{
	{
		// public float accelerationTime = 0.2f;
		__this->___accelerationTime_5 = (0.200000003f);
		// public float turnTime = 0.2f;
		__this->___turnTime_6 = (0.200000003f);
		// public bool walkByDefault = true;
		__this->___walkByDefault_7 = (bool)1;
		// public float moveSpeed = 3f;
		__this->___moveSpeed_9 = (3.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void RootMotion.Demos.UserControlAI::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserControlAI_Start_m5493A827E31244EFE05072B0CE9F70C544765DF2 (UserControlAI_tEC783229E47B26F8565D392EA1A4E163BA4B6263* __this, const RuntimeMethod* method) 
{
	{
		// base.Start();
		UserControlThirdPerson_Start_mEE1B513868D6F2B0A70330A87A379308AD2020B9(__this, NULL);
		// navigator.Initiate(transform);
		Navigator_t7D234A2CBEFB7989ACF84795A71863E7FD6C1A9A* L_0 = __this->___navigator_12;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Navigator_Initiate_mBC58B99BA3D2FF59BBADFE0AF463B65F9F482C95(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void RootMotion.Demos.UserControlAI::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserControlAI_Update_mA9985A732481F3BB7DA68DA7130ED6A53EBD35C8 (UserControlAI_tEC783229E47B26F8565D392EA1A4E163BA4B6263* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	float V_2 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	float V_4 = 0.0f;
	float G_B3_0 = 0.0f;
	float G_B8_0 = 0.0f;
	State_t1C2106417C1C59FC418E1C9F846E928466513D3C* G_B10_0 = NULL;
	State_t1C2106417C1C59FC418E1C9F846E928466513D3C* G_B9_0 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B11_0;
	memset((&G_B11_0), 0, sizeof(G_B11_0));
	State_t1C2106417C1C59FC418E1C9F846E928466513D3C* G_B11_1 = NULL;
	{
		// float moveSpeed = walkByDefault? 0.5f: 1f;
		bool L_0 = ((UserControlThirdPerson_t84D27C4D05AE0B01CDABC9C382DEDD23F3943690*)__this)->___walkByDefault_4;
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		G_B3_0 = (1.0f);
		goto IL_0014;
	}

IL_000f:
	{
		G_B3_0 = (0.5f);
	}

IL_0014:
	{
		V_0 = G_B3_0;
		// if (navigator.activeTargetSeeking)
		Navigator_t7D234A2CBEFB7989ACF84795A71863E7FD6C1A9A* L_1 = __this->___navigator_12;
		NullCheck(L_1);
		bool L_2 = L_1->___activeTargetSeeking_0;
		if (!L_2)
		{
			goto IL_0055;
		}
	}
	{
		// navigator.Update(moveTarget.position);
		Navigator_t7D234A2CBEFB7989ACF84795A71863E7FD6C1A9A* L_3 = __this->___navigator_12;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = __this->___moveTarget_9;
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		NullCheck(L_3);
		Navigator_Update_mB38CDF457CC55CDD2A7C475031744E8E09C19FF7(L_3, L_5, NULL);
		// state.move = navigator.normalizedDeltaPosition * moveSpeed;
		State_t1C2106417C1C59FC418E1C9F846E928466513D3C* L_6 = (State_t1C2106417C1C59FC418E1C9F846E928466513D3C*)(&((UserControlThirdPerson_t84D27C4D05AE0B01CDABC9C382DEDD23F3943690*)__this)->___state_7);
		Navigator_t7D234A2CBEFB7989ACF84795A71863E7FD6C1A9A* L_7 = __this->___navigator_12;
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Navigator_get_normalizedDeltaPosition_m595BC9BF2137B046444109DAD6A772C089D8B42A_inline(L_7, NULL);
		float L_9 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_8, L_9, NULL);
		L_6->___move_0 = L_10;
		return;
	}

IL_0055:
	{
		// Vector3 direction = moveTarget.position - transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11 = __this->___moveTarget_9;
		NullCheck(L_11);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_11, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_13, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_12, L_14, NULL);
		V_1 = L_15;
		// float distance = direction.magnitude;
		float L_16;
		L_16 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_1), NULL);
		V_2 = L_16;
		// Vector3 normal = transform.up;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_17);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2(L_17, NULL);
		V_3 = L_18;
		// Vector3.OrthoNormalize(ref normal, ref direction);
		Vector3_OrthoNormalize_m4450C7BEB70DBFA60E3AAC08C98CDAE831A54158((&V_3), (&V_1), NULL);
		// float sD = state.move != Vector3.zero ? stoppingDistance : stoppingDistance * stoppingThreshold;
		State_t1C2106417C1C59FC418E1C9F846E928466513D3C* L_19 = (State_t1C2106417C1C59FC418E1C9F846E928466513D3C*)(&((UserControlThirdPerson_t84D27C4D05AE0B01CDABC9C382DEDD23F3943690*)__this)->___state_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = L_19->___move_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		bool L_22;
		L_22 = Vector3_op_Inequality_m9F170CDFBF1E490E559DA5D06D6547501A402BBF_inline(L_20, L_21, NULL);
		if (L_22)
		{
			goto IL_00b4;
		}
	}
	{
		float L_23 = __this->___stoppingDistance_10;
		float L_24 = __this->___stoppingThreshold_11;
		G_B8_0 = ((float)il2cpp_codegen_multiply(L_23, L_24));
		goto IL_00ba;
	}

IL_00b4:
	{
		float L_25 = __this->___stoppingDistance_10;
		G_B8_0 = L_25;
	}

IL_00ba:
	{
		V_4 = G_B8_0;
		// state.move = distance > sD ? direction * moveSpeed : Vector3.zero;
		State_t1C2106417C1C59FC418E1C9F846E928466513D3C* L_26 = (State_t1C2106417C1C59FC418E1C9F846E928466513D3C*)(&((UserControlThirdPerson_t84D27C4D05AE0B01CDABC9C382DEDD23F3943690*)__this)->___state_7);
		float L_27 = V_2;
		float L_28 = V_4;
		G_B9_0 = L_26;
		if ((((float)L_27) > ((float)L_28)))
		{
			G_B10_0 = L_26;
			goto IL_00ce;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		L_29 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		G_B11_0 = L_29;
		G_B11_1 = G_B9_0;
		goto IL_00d5;
	}

IL_00ce:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30 = V_1;
		float L_31 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32;
		L_32 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_30, L_31, NULL);
		G_B11_0 = L_32;
		G_B11_1 = G_B10_0;
	}

IL_00d5:
	{
		G_B11_1->___move_0 = G_B11_0;
		// state.lookPos = moveTarget.position;
		State_t1C2106417C1C59FC418E1C9F846E928466513D3C* L_33 = (State_t1C2106417C1C59FC418E1C9F846E928466513D3C*)(&((UserControlThirdPerson_t84D27C4D05AE0B01CDABC9C382DEDD23F3943690*)__this)->___state_7);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_34 = __this->___moveTarget_9;
		NullCheck(L_34);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35;
		L_35 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_34, NULL);
		L_33->___lookPos_1 = L_35;
		// }
		return;
	}
}
// System.Void RootMotion.Demos.UserControlAI::OnDrawGizmos()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserControlAI_OnDrawGizmos_mC92ED24F33C0B58B921B4A9E91BACA20C3B1C729 (UserControlAI_tEC783229E47B26F8565D392EA1A4E163BA4B6263* __this, const RuntimeMethod* method) 
{
	{
		// if (navigator.activeTargetSeeking) navigator.Visualize();
		Navigator_t7D234A2CBEFB7989ACF84795A71863E7FD6C1A9A* L_0 = __this->___navigator_12;
		NullCheck(L_0);
		bool L_1 = L_0->___activeTargetSeeking_0;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		// if (navigator.activeTargetSeeking) navigator.Visualize();
		Navigator_t7D234A2CBEFB7989ACF84795A71863E7FD6C1A9A* L_2 = __this->___navigator_12;
		NullCheck(L_2);
		Navigator_Visualize_m78AD2122BC837C11DDD9A7367CA26DBC5BA76E90(L_2, NULL);
	}

IL_0018:
	{
		// }
		return;
	}
}
// System.Void RootMotion.Demos.UserControlAI::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserControlAI__ctor_mD5A77C8BF9A3AB6D2A8CF19C904D8B58C7076BD5 (UserControlAI_tEC783229E47B26F8565D392EA1A4E163BA4B6263* __this, const RuntimeMethod* method) 
{
	{
		// public float stoppingDistance = 0.5f;
		__this->___stoppingDistance_10 = (0.5f);
		// public float stoppingThreshold = 1.5f;
		__this->___stoppingThreshold_11 = (1.5f);
		UserControlThirdPerson__ctor_m9973C7901A57073F95C64855C9696D4A32DEB2BA(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void RootMotion.Demos.UserControlThirdPerson::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserControlThirdPerson_Start_mEE1B513868D6F2B0A70330A87A379308AD2020B9 (UserControlThirdPerson_t84D27C4D05AE0B01CDABC9C382DEDD23F3943690* __this, const RuntimeMethod* method) 
{
	{
		// cam = Camera.main.transform;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0;
		L_0 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_0, NULL);
		__this->___cam_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___cam_8), (void*)L_1);
		// }
		return;
	}
}
// System.Void RootMotion.Demos.UserControlThirdPerson::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserControlThirdPerson_Update_m4297BF3D4600D6C2FF294CCBE622D3E678C1E392 (UserControlThirdPerson_t84D27C4D05AE0B01CDABC9C382DEDD23F3943690* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	float V_4 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_5;
	memset((&V_5), 0, sizeof(V_5));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_6;
	memset((&V_6), 0, sizeof(V_6));
	State_t1C2106417C1C59FC418E1C9F846E928466513D3C* G_B2_0 = NULL;
	State_t1C2106417C1C59FC418E1C9F846E928466513D3C* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	State_t1C2106417C1C59FC418E1C9F846E928466513D3C* G_B3_1 = NULL;
	State_t1C2106417C1C59FC418E1C9F846E928466513D3C* G_B5_0 = NULL;
	State_t1C2106417C1C59FC418E1C9F846E928466513D3C* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	State_t1C2106417C1C59FC418E1C9F846E928466513D3C* G_B6_1 = NULL;
	float G_B16_0 = 0.0f;
	{
		// state.crouch = canCrouch && Input.GetKey(KeyCode.C);
		State_t1C2106417C1C59FC418E1C9F846E928466513D3C* L_0 = (State_t1C2106417C1C59FC418E1C9F846E928466513D3C*)(&__this->___state_7);
		bool L_1 = __this->___canCrouch_5;
		G_B1_0 = L_0;
		if (!L_1)
		{
			G_B2_0 = L_0;
			goto IL_0017;
		}
	}
	{
		bool L_2;
		L_2 = Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434(((int32_t)99), NULL);
		G_B3_0 = ((int32_t)(L_2));
		G_B3_1 = G_B1_0;
		goto IL_0018;
	}

IL_0017:
	{
		G_B3_0 = 0;
		G_B3_1 = G_B2_0;
	}

IL_0018:
	{
		G_B3_1->___crouch_2 = (bool)G_B3_0;
		// state.jump = canJump && Input.GetButton("Jump");
		State_t1C2106417C1C59FC418E1C9F846E928466513D3C* L_3 = (State_t1C2106417C1C59FC418E1C9F846E928466513D3C*)(&__this->___state_7);
		bool L_4 = __this->___canJump_6;
		G_B4_0 = L_3;
		if (!L_4)
		{
			G_B5_0 = L_3;
			goto IL_0037;
		}
	}
	{
		bool L_5;
		L_5 = Input_GetButton_m2F217DAE69DB3D1324FB848B3C9C84F19A80989E(_stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C, NULL);
		G_B6_0 = ((int32_t)(L_5));
		G_B6_1 = G_B4_0;
		goto IL_0038;
	}

IL_0037:
	{
		G_B6_0 = 0;
		G_B6_1 = G_B5_0;
	}

IL_0038:
	{
		G_B6_1->___jump_3 = (bool)G_B6_0;
		// float h = Input.GetAxisRaw("Horizontal");
		float L_6;
		L_6 = Input_GetAxisRaw_m47C0CF8E090561A2F407A4E11D5F2A45044EB8E4(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E, NULL);
		V_0 = L_6;
		// float v = Input.GetAxisRaw("Vertical");
		float L_7;
		L_7 = Input_GetAxisRaw_m47C0CF8E090561A2F407A4E11D5F2A45044EB8E4(_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A, NULL);
		V_1 = L_7;
		// Vector3 move = cam.rotation * new Vector3(h, 0f, v).normalized;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8 = __this->___cam_8;
		NullCheck(L_8);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_9;
		L_9 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_8, NULL);
		float L_10 = V_0;
		float L_11 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), L_10, (0.0f), L_11, /*hidden argument*/NULL);
		V_5 = L_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_5), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_9, L_13, NULL);
		V_2 = L_14;
		// if (move != Vector3.zero) {
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		bool L_17;
		L_17 = Vector3_op_Inequality_m9F170CDFBF1E490E559DA5D06D6547501A402BBF_inline(L_15, L_16, NULL);
		if (!L_17)
		{
			goto IL_00aa;
		}
	}
	{
		// Vector3 normal = transform.up;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18;
		L_18 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_18);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2(L_18, NULL);
		V_6 = L_19;
		// Vector3.OrthoNormalize(ref normal, ref move);
		Vector3_OrthoNormalize_m4450C7BEB70DBFA60E3AAC08C98CDAE831A54158((&V_6), (&V_2), NULL);
		// state.move = move;
		State_t1C2106417C1C59FC418E1C9F846E928466513D3C* L_20 = (State_t1C2106417C1C59FC418E1C9F846E928466513D3C*)(&__this->___state_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = V_2;
		L_20->___move_0 = L_21;
		goto IL_00ba;
	}

IL_00aa:
	{
		// } else state.move = Vector3.zero;
		State_t1C2106417C1C59FC418E1C9F846E928466513D3C* L_22 = (State_t1C2106417C1C59FC418E1C9F846E928466513D3C*)(&__this->___state_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		L_22->___move_0 = L_23;
	}

IL_00ba:
	{
		// bool walkToggle = Input.GetKey(KeyCode.LeftShift);
		bool L_24;
		L_24 = Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434(((int32_t)304), NULL);
		V_3 = L_24;
		// float walkMultiplier = (walkByDefault ? walkToggle ? 1 : 0.5f : walkToggle ? 0.5f : 1);
		bool L_25 = __this->___walkByDefault_4;
		if (L_25)
		{
			goto IL_00de;
		}
	}
	{
		bool L_26 = V_3;
		if (L_26)
		{
			goto IL_00d7;
		}
	}
	{
		G_B16_0 = (1.0f);
		goto IL_00ed;
	}

IL_00d7:
	{
		G_B16_0 = (0.5f);
		goto IL_00ed;
	}

IL_00de:
	{
		bool L_27 = V_3;
		if (L_27)
		{
			goto IL_00e8;
		}
	}
	{
		G_B16_0 = (0.5f);
		goto IL_00ed;
	}

IL_00e8:
	{
		G_B16_0 = (1.0f);
	}

IL_00ed:
	{
		V_4 = G_B16_0;
		// state.move *= walkMultiplier;
		State_t1C2106417C1C59FC418E1C9F846E928466513D3C* L_28 = (State_t1C2106417C1C59FC418E1C9F846E928466513D3C*)(&__this->___state_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_29 = (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)(&L_28->___move_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_30 = L_29;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_30);
		float L_32 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33;
		L_33 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_31, L_32, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_30 = L_33;
		// state.lookPos = transform.position + cam.forward * 100f;
		State_t1C2106417C1C59FC418E1C9F846E928466513D3C* L_34 = (State_t1C2106417C1C59FC418E1C9F846E928466513D3C*)(&__this->___state_7);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_35;
		L_35 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_35);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36;
		L_36 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_35, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_37 = __this->___cam_8;
		NullCheck(L_37);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38;
		L_38 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_37, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39;
		L_39 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_38, (100.0f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40;
		L_40 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_36, L_39, NULL);
		L_34->___lookPos_1 = L_40;
		// }
		return;
	}
}
// System.Void RootMotion.Demos.UserControlThirdPerson::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserControlThirdPerson__ctor_m9973C7901A57073F95C64855C9696D4A32DEB2BA (UserControlThirdPerson_t84D27C4D05AE0B01CDABC9C382DEDD23F3943690* __this, const RuntimeMethod* method) 
{
	{
		// public bool canCrouch = true;
		__this->___canCrouch_5 = (bool)1;
		// public bool canJump = true;
		__this->___canJump_6 = (bool)1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: RootMotion.Demos.UserControlThirdPerson/State
IL2CPP_EXTERN_C void State_t1C2106417C1C59FC418E1C9F846E928466513D3C_marshal_pinvoke(const State_t1C2106417C1C59FC418E1C9F846E928466513D3C& unmarshaled, State_t1C2106417C1C59FC418E1C9F846E928466513D3C_marshaled_pinvoke& marshaled)
{
	marshaled.___move_0 = unmarshaled.___move_0;
	marshaled.___lookPos_1 = unmarshaled.___lookPos_1;
	marshaled.___crouch_2 = static_cast<int32_t>(unmarshaled.___crouch_2);
	marshaled.___jump_3 = static_cast<int32_t>(unmarshaled.___jump_3);
	marshaled.___actionIndex_4 = unmarshaled.___actionIndex_4;
}
IL2CPP_EXTERN_C void State_t1C2106417C1C59FC418E1C9F846E928466513D3C_marshal_pinvoke_back(const State_t1C2106417C1C59FC418E1C9F846E928466513D3C_marshaled_pinvoke& marshaled, State_t1C2106417C1C59FC418E1C9F846E928466513D3C& unmarshaled)
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 unmarshaledmove_temp_0;
	memset((&unmarshaledmove_temp_0), 0, sizeof(unmarshaledmove_temp_0));
	unmarshaledmove_temp_0 = marshaled.___move_0;
	unmarshaled.___move_0 = unmarshaledmove_temp_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 unmarshaledlookPos_temp_1;
	memset((&unmarshaledlookPos_temp_1), 0, sizeof(unmarshaledlookPos_temp_1));
	unmarshaledlookPos_temp_1 = marshaled.___lookPos_1;
	unmarshaled.___lookPos_1 = unmarshaledlookPos_temp_1;
	bool unmarshaledcrouch_temp_2 = false;
	unmarshaledcrouch_temp_2 = static_cast<bool>(marshaled.___crouch_2);
	unmarshaled.___crouch_2 = unmarshaledcrouch_temp_2;
	bool unmarshaledjump_temp_3 = false;
	unmarshaledjump_temp_3 = static_cast<bool>(marshaled.___jump_3);
	unmarshaled.___jump_3 = unmarshaledjump_temp_3;
	int32_t unmarshaledactionIndex_temp_4 = 0;
	unmarshaledactionIndex_temp_4 = marshaled.___actionIndex_4;
	unmarshaled.___actionIndex_4 = unmarshaledactionIndex_temp_4;
}
// Conversion method for clean up from marshalling of: RootMotion.Demos.UserControlThirdPerson/State
IL2CPP_EXTERN_C void State_t1C2106417C1C59FC418E1C9F846E928466513D3C_marshal_pinvoke_cleanup(State_t1C2106417C1C59FC418E1C9F846E928466513D3C_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: RootMotion.Demos.UserControlThirdPerson/State
IL2CPP_EXTERN_C void State_t1C2106417C1C59FC418E1C9F846E928466513D3C_marshal_com(const State_t1C2106417C1C59FC418E1C9F846E928466513D3C& unmarshaled, State_t1C2106417C1C59FC418E1C9F846E928466513D3C_marshaled_com& marshaled)
{
	marshaled.___move_0 = unmarshaled.___move_0;
	marshaled.___lookPos_1 = unmarshaled.___lookPos_1;
	marshaled.___crouch_2 = static_cast<int32_t>(unmarshaled.___crouch_2);
	marshaled.___jump_3 = static_cast<int32_t>(unmarshaled.___jump_3);
	marshaled.___actionIndex_4 = unmarshaled.___actionIndex_4;
}
IL2CPP_EXTERN_C void State_t1C2106417C1C59FC418E1C9F846E928466513D3C_marshal_com_back(const State_t1C2106417C1C59FC418E1C9F846E928466513D3C_marshaled_com& marshaled, State_t1C2106417C1C59FC418E1C9F846E928466513D3C& unmarshaled)
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 unmarshaledmove_temp_0;
	memset((&unmarshaledmove_temp_0), 0, sizeof(unmarshaledmove_temp_0));
	unmarshaledmove_temp_0 = marshaled.___move_0;
	unmarshaled.___move_0 = unmarshaledmove_temp_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 unmarshaledlookPos_temp_1;
	memset((&unmarshaledlookPos_temp_1), 0, sizeof(unmarshaledlookPos_temp_1));
	unmarshaledlookPos_temp_1 = marshaled.___lookPos_1;
	unmarshaled.___lookPos_1 = unmarshaledlookPos_temp_1;
	bool unmarshaledcrouch_temp_2 = false;
	unmarshaledcrouch_temp_2 = static_cast<bool>(marshaled.___crouch_2);
	unmarshaled.___crouch_2 = unmarshaledcrouch_temp_2;
	bool unmarshaledjump_temp_3 = false;
	unmarshaledjump_temp_3 = static_cast<bool>(marshaled.___jump_3);
	unmarshaled.___jump_3 = unmarshaledjump_temp_3;
	int32_t unmarshaledactionIndex_temp_4 = 0;
	unmarshaledactionIndex_temp_4 = marshaled.___actionIndex_4;
	unmarshaled.___actionIndex_4 = unmarshaledactionIndex_temp_4;
}
// Conversion method for clean up from marshalling of: RootMotion.Demos.UserControlThirdPerson/State
IL2CPP_EXTERN_C void State_t1C2106417C1C59FC418E1C9F846E928466513D3C_marshal_com_cleanup(State_t1C2106417C1C59FC418E1C9F846E928466513D3C_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void RootMotion.Demos.ApplicationQuit::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApplicationQuit_Update_m2269F12ACD06C1BDA95EA110864F3B496F109A51 (ApplicationQuit_tC78E3850F7A7268A7F435C570021653808190F94* __this, const RuntimeMethod* method) 
{
	{
		// if (Input.GetKeyDown(KeyCode.Q) || Input.GetKeyDown(KeyCode.Escape)) Application.Quit();
		bool L_0;
		L_0 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)113), NULL);
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		bool L_1;
		L_1 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)27), NULL);
		if (!L_1)
		{
			goto IL_0017;
		}
	}

IL_0012:
	{
		// if (Input.GetKeyDown(KeyCode.Q) || Input.GetKeyDown(KeyCode.Escape)) Application.Quit();
		Application_Quit_mE304382DB9A6455C2A474C8F364C7387F37E9281(NULL);
	}

IL_0017:
	{
		// }
		return;
	}
}
// System.Void RootMotion.Demos.ApplicationQuit::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApplicationQuit__ctor_m933D2A2F1A112E3FB46AD1FBD5DC14C3F3FED882 (ApplicationQuit_tC78E3850F7A7268A7F435C570021653808190F94* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void RootMotion.Demos.SlowMo::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SlowMo_Update_m5960035A5C7AAE38E7E654EB1CCF75F10AE88B96 (SlowMo_tE361B9C2C9C4F8B748E3F794573ACE9DE3D50B8E* __this, const RuntimeMethod* method) 
{
	float G_B3_0 = 0.0f;
	{
		// Time.timeScale = IsSlowMotion()? slowMoTimeScale: 1f;
		bool L_0;
		L_0 = SlowMo_IsSlowMotion_m33DB9300072E9668E2BF826300855A16E34FE326(__this, NULL);
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		G_B3_0 = (1.0f);
		goto IL_0015;
	}

IL_000f:
	{
		float L_1 = __this->___slowMoTimeScale_7;
		G_B3_0 = L_1;
	}

IL_0015:
	{
		Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331(G_B3_0, NULL);
		// }
		return;
	}
}
// System.Boolean RootMotion.Demos.SlowMo::IsSlowMotion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SlowMo_IsSlowMotion_m33DB9300072E9668E2BF826300855A16E34FE326 (SlowMo_tE361B9C2C9C4F8B748E3F794573ACE9DE3D50B8E* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// if (mouse0 && Input.GetMouseButton(0)) return true;
		bool L_0 = __this->___mouse0_5;
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		bool L_1;
		L_1 = Input_GetMouseButton_m4995DD4A2D4F916565C1B1B5AAF7DF17C126B3EA(0, NULL);
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		// if (mouse0 && Input.GetMouseButton(0)) return true;
		return (bool)1;
	}

IL_0012:
	{
		// if (mouse1 && Input.GetMouseButton(1)) return true;
		bool L_2 = __this->___mouse1_6;
		if (!L_2)
		{
			goto IL_0024;
		}
	}
	{
		bool L_3;
		L_3 = Input_GetMouseButton_m4995DD4A2D4F916565C1B1B5AAF7DF17C126B3EA(1, NULL);
		if (!L_3)
		{
			goto IL_0024;
		}
	}
	{
		// if (mouse1 && Input.GetMouseButton(1)) return true;
		return (bool)1;
	}

IL_0024:
	{
		// for (int i = 0; i < keyCodes.Length; i++) {
		V_0 = 0;
		goto IL_003d;
	}

IL_0028:
	{
		// if (Input.GetKey(keyCodes[i])) return true;
		KeyCodeU5BU5D_tE5EF2F42327664A9138C613B265BEE8524672B85* L_4 = __this->___keyCodes_4;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		int32_t L_7 = (int32_t)(L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		bool L_8;
		L_8 = Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434(L_7, NULL);
		if (!L_8)
		{
			goto IL_0039;
		}
	}
	{
		// if (Input.GetKey(keyCodes[i])) return true;
		return (bool)1;
	}

IL_0039:
	{
		// for (int i = 0; i < keyCodes.Length; i++) {
		int32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_003d:
	{
		// for (int i = 0; i < keyCodes.Length; i++) {
		int32_t L_10 = V_0;
		KeyCodeU5BU5D_tE5EF2F42327664A9138C613B265BEE8524672B85* L_11 = __this->___keyCodes_4;
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length)))))
		{
			goto IL_0028;
		}
	}
	{
		// return false;
		return (bool)0;
	}
}
// System.Void RootMotion.Demos.SlowMo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SlowMo__ctor_m01EC7302304737437E95F2DCDB9584EDE78C7CF4 (SlowMo_tE361B9C2C9C4F8B748E3F794573ACE9DE3D50B8E* __this, const RuntimeMethod* method) 
{
	{
		// public float slowMoTimeScale = 0.3f;
		__this->___slowMoTimeScale_7 = (0.300000012f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Vector3 RootMotion.Demos.Navigator::get_normalizedDeltaPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Navigator_get_normalizedDeltaPosition_m595BC9BF2137B046444109DAD6A772C089D8B42A (Navigator_t7D234A2CBEFB7989ACF84795A71863E7FD6C1A9A* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 normalizedDeltaPosition { get; private set; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___U3CnormalizedDeltaPositionU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void RootMotion.Demos.Navigator::set_normalizedDeltaPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Navigator_set_normalizedDeltaPosition_m1265CF112882BEF964D98BBE460D5746CA4206AA (Navigator_t7D234A2CBEFB7989ACF84795A71863E7FD6C1A9A* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) 
{
	{
		// public Vector3 normalizedDeltaPosition { get; private set; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_value;
		__this->___U3CnormalizedDeltaPositionU3Ek__BackingField_5 = L_0;
		return;
	}
}
// RootMotion.Demos.Navigator/State RootMotion.Demos.Navigator::get_state()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Navigator_get_state_m27942DCA70B8D7CD52B12FA7EA3AEFA282834346 (Navigator_t7D234A2CBEFB7989ACF84795A71863E7FD6C1A9A* __this, const RuntimeMethod* method) 
{
	{
		// public State state { get; private set; }
		int32_t L_0 = __this->___U3CstateU3Ek__BackingField_6;
		return L_0;
	}
}
// System.Void RootMotion.Demos.Navigator::set_state(RootMotion.Demos.Navigator/State)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Navigator_set_state_mDD116E7D62AA78CEBE2720A38C4E49F9A757AF30 (Navigator_t7D234A2CBEFB7989ACF84795A71863E7FD6C1A9A* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public State state { get; private set; }
		int32_t L_0 = ___0_value;
		__this->___U3CstateU3Ek__BackingField_6 = L_0;
		return;
	}
}
// System.Void RootMotion.Demos.Navigator::Initiate(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Navigator_Initiate_mBC58B99BA3D2FF59BBADFE0AF463B65F9F482C95 (Navigator_t7D234A2CBEFB7989ACF84795A71863E7FD6C1A9A* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_transform, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.transform = transform;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___0_transform;
		__this->___transform_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___transform_7), (void*)L_0);
		// path = new UnityEngine.AI.NavMeshPath();
		NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7* L_1 = (NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7*)il2cpp_codegen_object_new(NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		NavMeshPath__ctor_mEA40BFC2492814FFC97A71C3AEC2154A9415C37F(L_1, NULL);
		__this->___path_10 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___path_10), (void*)L_1);
		// initiated = true;
		__this->___initiated_12 = (bool)1;
		// cornerIndex = 0;
		__this->___cornerIndex_8 = 0;
		// corners = new Vector3[0];
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_2 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)SZArrayNew(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var, (uint32_t)0);
		__this->___corners_9 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___corners_9), (void*)L_2);
		// state = State.Idle;
		Navigator_set_state_mDD116E7D62AA78CEBE2720A38C4E49F9A757AF30_inline(__this, 0, NULL);
		// lastTargetPosition = new Vector3(Mathf.Infinity, Mathf.Infinity, Mathf.Infinity);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_3), (std::numeric_limits<float>::infinity()), (std::numeric_limits<float>::infinity()), (std::numeric_limits<float>::infinity()), /*hidden argument*/NULL);
		__this->___lastTargetPosition_11 = L_3;
		// }
		return;
	}
}
// System.Void RootMotion.Demos.Navigator::Update(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Navigator_Update_mB38CDF457CC55CDD2A7C475031744E8E09C19FF7 (Navigator_t7D234A2CBEFB7989ACF84795A71863E7FD6C1A9A* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_targetPosition, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral003EB8F2822CDEB8C25E644EE9630560020521CF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral61DD4870662EA7D424E2F4AF5A0FD5EED52B51D0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9003F061BB5D0A7CB9A3E354B72E421259472991);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDCF8DA923A023D58A2CD07CBD3EBDE07DC2FC267);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	float G_B19_0 = 0.0f;
	float G_B18_0 = 0.0f;
	float G_B20_0 = 0.0f;
	{
		// if (!initiated)
		bool L_0 = __this->___initiated_12;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// Debug.LogError("Trying to update an uninitiated Navigator.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral003EB8F2822CDEB8C25E644EE9630560020521CF, NULL);
		// return;
		return;
	}

IL_0013:
	{
		// switch (state)
		int32_t L_1;
		L_1 = Navigator_get_state_m27942DCA70B8D7CD52B12FA7EA3AEFA282834346_inline(__this, NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0194;
			}
			case 1:
			{
				goto IL_002d;
			}
			case 2:
			{
				goto IL_00c5;
			}
		}
	}
	{
		return;
	}

IL_002d:
	{
		// normalizedDeltaPosition = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		Navigator_set_normalizedDeltaPosition_m1265CF112882BEF964D98BBE460D5746CA4206AA_inline(__this, L_3, NULL);
		// if (path.status == UnityEngine.AI.NavMeshPathStatus.PathComplete)
		NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7* L_4 = __this->___path_10;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = NavMeshPath_get_status_m63B0AEDA3149C7053987C4D0A02B3FE8B41BD74B(L_4, NULL);
		if (L_5)
		{
			goto IL_0085;
		}
	}
	{
		// corners = path.corners;
		NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7* L_6 = __this->___path_10;
		NullCheck(L_6);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_7;
		L_7 = NavMeshPath_get_corners_m469237DE430A001BE7050BEF5D05A20B94D76F3E(L_6, NULL);
		__this->___corners_9 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___corners_9), (void*)L_7);
		// cornerIndex = 0;
		__this->___cornerIndex_8 = 0;
		// if (corners.Length == 0)
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_8 = __this->___corners_9;
		NullCheck(L_8);
		if ((((RuntimeArray*)L_8)->max_length))
		{
			goto IL_007e;
		}
	}
	{
		// Debug.LogWarning("Zero Corner Path", transform);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9 = __this->___transform_7;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m23033D7E2F0F298BE465B7F3A63CDF40A4EB70EB(_stringLiteralDCF8DA923A023D58A2CD07CBD3EBDE07DC2FC267, L_9, NULL);
		// Stop();
		Navigator_Stop_m41AD91005D289F5949F61DAF975BFF5B0E593D51(__this, NULL);
		goto IL_0085;
	}

IL_007e:
	{
		// state = State.OnPath;
		Navigator_set_state_mDD116E7D62AA78CEBE2720A38C4E49F9A757AF30_inline(__this, 2, NULL);
	}

IL_0085:
	{
		// if (path.status == UnityEngine.AI.NavMeshPathStatus.PathPartial)
		NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7* L_10 = __this->___path_10;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = NavMeshPath_get_status_m63B0AEDA3149C7053987C4D0A02B3FE8B41BD74B(L_10, NULL);
		if ((!(((uint32_t)L_11) == ((uint32_t)1))))
		{
			goto IL_00a3;
		}
	}
	{
		// Debug.LogWarning("Path Partial", transform);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12 = __this->___transform_7;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m23033D7E2F0F298BE465B7F3A63CDF40A4EB70EB(_stringLiteral61DD4870662EA7D424E2F4AF5A0FD5EED52B51D0, L_12, NULL);
	}

IL_00a3:
	{
		// if (path.status == UnityEngine.AI.NavMeshPathStatus.PathInvalid)
		NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7* L_13 = __this->___path_10;
		NullCheck(L_13);
		int32_t L_14;
		L_14 = NavMeshPath_get_status_m63B0AEDA3149C7053987C4D0A02B3FE8B41BD74B(L_13, NULL);
		if ((!(((uint32_t)L_14) == ((uint32_t)2))))
		{
			goto IL_01b0;
		}
	}
	{
		// Debug.LogWarning("Path Invalid", transform);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15 = __this->___transform_7;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m23033D7E2F0F298BE465B7F3A63CDF40A4EB70EB(_stringLiteral9003F061BB5D0A7CB9A3E354B72E421259472991, L_15, NULL);
		// break;
		return;
	}

IL_00c5:
	{
		// if (activeTargetSeeking && Time.time > nextPathTime && HorDistance(targetPosition, lastTargetPosition) > recalculateOnPathDistance)
		bool L_16 = __this->___activeTargetSeeking_0;
		if (!L_16)
		{
			goto IL_00f7;
		}
	}
	{
		float L_17;
		L_17 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_18 = __this->___nextPathTime_13;
		if ((!(((float)L_17) > ((float)L_18))))
		{
			goto IL_00f7;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19 = ___0_targetPosition;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = __this->___lastTargetPosition_11;
		float L_21;
		L_21 = Navigator_HorDistance_mC869F0A7EDFFBE57FC65FD0FF0A009E6F3FCA556(__this, L_19, L_20, NULL);
		float L_22 = __this->___recalculateOnPathDistance_2;
		if ((!(((float)L_21) > ((float)L_22))))
		{
			goto IL_00f7;
		}
	}
	{
		// CalculatePath(targetPosition);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23 = ___0_targetPosition;
		Navigator_CalculatePath_mE092D39D62C4124D1817295F5BB5C5ADBDA86A44(__this, L_23, NULL);
		// break;
		return;
	}

IL_00f7:
	{
		// if (cornerIndex < corners.Length)
		int32_t L_24 = __this->___cornerIndex_8;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_25 = __this->___corners_9;
		NullCheck(L_25);
		if ((((int32_t)L_24) >= ((int32_t)((int32_t)(((RuntimeArray*)L_25)->max_length)))))
		{
			goto IL_01b0;
		}
	}
	{
		// Vector3 d = corners[cornerIndex] - transform.position;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_26 = __this->___corners_9;
		int32_t L_27 = __this->___cornerIndex_8;
		NullCheck(L_26);
		int32_t L_28 = L_27;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_30 = __this->___transform_7;
		NullCheck(L_30);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
		L_31 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_30, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32;
		L_32 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_29, L_31, NULL);
		V_1 = L_32;
		// d.y = 0f;
		(&V_1)->___y_3 = (0.0f);
		// float mag = d.magnitude;
		float L_33;
		L_33 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_1), NULL);
		// if (mag > 0f) normalizedDeltaPosition = (d / d.magnitude);
		float L_34 = L_33;
		G_B18_0 = L_34;
		if ((!(((float)L_34) > ((float)(0.0f)))))
		{
			G_B19_0 = L_34;
			goto IL_015c;
		}
	}
	{
		// if (mag > 0f) normalizedDeltaPosition = (d / d.magnitude);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35 = V_1;
		float L_36;
		L_36 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_1), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37;
		L_37 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_35, L_36, NULL);
		Navigator_set_normalizedDeltaPosition_m1265CF112882BEF964D98BBE460D5746CA4206AA_inline(__this, L_37, NULL);
		G_B20_0 = G_B18_0;
		goto IL_0167;
	}

IL_015c:
	{
		// else normalizedDeltaPosition = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38;
		L_38 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		Navigator_set_normalizedDeltaPosition_m1265CF112882BEF964D98BBE460D5746CA4206AA_inline(__this, L_38, NULL);
		G_B20_0 = G_B19_0;
	}

IL_0167:
	{
		// if (mag < cornerRadius)
		float L_39 = __this->___cornerRadius_1;
		if ((!(((float)G_B20_0) < ((float)L_39))))
		{
			goto IL_01b0;
		}
	}
	{
		// cornerIndex++;
		int32_t L_40 = __this->___cornerIndex_8;
		__this->___cornerIndex_8 = ((int32_t)il2cpp_codegen_add(L_40, 1));
		// if (cornerIndex >= corners.Length) Stop();
		int32_t L_41 = __this->___cornerIndex_8;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_42 = __this->___corners_9;
		NullCheck(L_42);
		if ((((int32_t)L_41) < ((int32_t)((int32_t)(((RuntimeArray*)L_42)->max_length)))))
		{
			goto IL_01b0;
		}
	}
	{
		// if (cornerIndex >= corners.Length) Stop();
		Navigator_Stop_m41AD91005D289F5949F61DAF975BFF5B0E593D51(__this, NULL);
		// break;
		return;
	}

IL_0194:
	{
		// if (activeTargetSeeking && Time.time > nextPathTime) CalculatePath(targetPosition);
		bool L_43 = __this->___activeTargetSeeking_0;
		if (!L_43)
		{
			goto IL_01b0;
		}
	}
	{
		float L_44;
		L_44 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_45 = __this->___nextPathTime_13;
		if ((!(((float)L_44) > ((float)L_45))))
		{
			goto IL_01b0;
		}
	}
	{
		// if (activeTargetSeeking && Time.time > nextPathTime) CalculatePath(targetPosition);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46 = ___0_targetPosition;
		Navigator_CalculatePath_mE092D39D62C4124D1817295F5BB5C5ADBDA86A44(__this, L_46, NULL);
	}

IL_01b0:
	{
		// }
		return;
	}
}
// System.Void RootMotion.Demos.Navigator::CalculatePath(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Navigator_CalculatePath_mE092D39D62C4124D1817295F5BB5C5ADBDA86A44 (Navigator_t7D234A2CBEFB7989ACF84795A71863E7FD6C1A9A* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_targetPosition, const RuntimeMethod* method) 
{
	{
		// if (Find(targetPosition))
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_targetPosition;
		bool L_1;
		L_1 = Navigator_Find_m218C8C9D4517EF048A99D560E14B5970F4B7BD3B(__this, L_0, NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// lastTargetPosition = targetPosition;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_targetPosition;
		__this->___lastTargetPosition_11 = L_2;
		// state = State.Seeking;
		Navigator_set_state_mDD116E7D62AA78CEBE2720A38C4E49F9A757AF30_inline(__this, 1, NULL);
		goto IL_001f;
	}

IL_0019:
	{
		// Stop();
		Navigator_Stop_m41AD91005D289F5949F61DAF975BFF5B0E593D51(__this, NULL);
	}

IL_001f:
	{
		// nextPathTime = Time.time + nextPathInterval;
		float L_3;
		L_3 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_4 = __this->___nextPathInterval_4;
		__this->___nextPathTime_13 = ((float)il2cpp_codegen_add(L_3, L_4));
		// }
		return;
	}
}
// System.Boolean RootMotion.Demos.Navigator::Find(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Navigator_Find_m218C8C9D4517EF048A99D560E14B5970F4B7BD3B (Navigator_t7D234A2CBEFB7989ACF84795A71863E7FD6C1A9A* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_targetPosition, const RuntimeMethod* method) 
{
	NavMeshHit_t6323FC1F2D00E24FBFFC3E27C2F349A3BAD16F8B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (HorDistance(transform.position, targetPosition) < cornerRadius * 2f) return false;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___transform_7;
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_targetPosition;
		float L_3;
		L_3 = Navigator_HorDistance_mC869F0A7EDFFBE57FC65FD0FF0A009E6F3FCA556(__this, L_1, L_2, NULL);
		float L_4 = __this->___cornerRadius_1;
		if ((!(((float)L_3) < ((float)((float)il2cpp_codegen_multiply(L_4, (2.0f)))))))
		{
			goto IL_0022;
		}
	}
	{
		// if (HorDistance(transform.position, targetPosition) < cornerRadius * 2f) return false;
		return (bool)0;
	}

IL_0022:
	{
		// if (UnityEngine.AI.NavMesh.CalculatePath(transform.position, targetPosition, UnityEngine.AI.NavMesh.AllAreas, path))
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = __this->___transform_7;
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = ___0_targetPosition;
		NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7* L_8 = __this->___path_10;
		bool L_9;
		L_9 = NavMesh_CalculatePath_m15FF9A2E008A90375072B9293D290D9167E580E9(L_6, L_7, (-1), L_8, NULL);
		if (!L_9)
		{
			goto IL_003e;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_003e:
	{
		// UnityEngine.AI.NavMeshHit hit = new UnityEngine.AI.NavMeshHit();
		il2cpp_codegen_initobj((&V_0), sizeof(NavMeshHit_t6323FC1F2D00E24FBFFC3E27C2F349A3BAD16F8B));
		// if (UnityEngine.AI.NavMesh.SamplePosition(targetPosition, out hit, maxSampleDistance, UnityEngine.AI.NavMesh.AllAreas))
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___0_targetPosition;
		float L_11 = __this->___maxSampleDistance_3;
		bool L_12;
		L_12 = NavMesh_SamplePosition_mEDAE8240217EED82B4519D4435E670A1655B2109(L_10, (&V_0), L_11, (-1), NULL);
		if (!L_12)
		{
			goto IL_0079;
		}
	}
	{
		// if (UnityEngine.AI.NavMesh.CalculatePath(transform.position, hit.position, UnityEngine.AI.NavMesh.AllAreas, path))
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13 = __this->___transform_7;
		NullCheck(L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_13, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = NavMeshHit_get_position_m09E8FF6DEF5BFA3F30B3C4BCA4642442FF1BCBF1((&V_0), NULL);
		NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7* L_16 = __this->___path_10;
		bool L_17;
		L_17 = NavMesh_CalculatePath_m15FF9A2E008A90375072B9293D290D9167E580E9(L_14, L_15, (-1), L_16, NULL);
		if (!L_17)
		{
			goto IL_0079;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_0079:
	{
		// return false;
		return (bool)0;
	}
}
// System.Void RootMotion.Demos.Navigator::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Navigator_Stop_m41AD91005D289F5949F61DAF975BFF5B0E593D51 (Navigator_t7D234A2CBEFB7989ACF84795A71863E7FD6C1A9A* __this, const RuntimeMethod* method) 
{
	{
		// state = State.Idle;
		Navigator_set_state_mDD116E7D62AA78CEBE2720A38C4E49F9A757AF30_inline(__this, 0, NULL);
		// normalizedDeltaPosition = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		Navigator_set_normalizedDeltaPosition_m1265CF112882BEF964D98BBE460D5746CA4206AA_inline(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Single RootMotion.Demos.Navigator::HorDistance(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Navigator_HorDistance_mC869F0A7EDFFBE57FC65FD0FF0A009E6F3FCA556 (Navigator_t7D234A2CBEFB7989ACF84795A71863E7FD6C1A9A* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_p1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_p2, const RuntimeMethod* method) 
{
	{
		// return Vector2.Distance(new Vector2(p1.x, p1.z), new Vector2(p2.x, p2.z));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_p1;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_p1;
		float L_3 = L_2.___z_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = ___1_p2;
		float L_6 = L_5.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = ___1_p2;
		float L_8 = L_7.___z_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_9), L_6, L_8, /*hidden argument*/NULL);
		float L_10;
		L_10 = Vector2_Distance_mBACBB1609E1894D68F882D86A93519E311810C89_inline(L_4, L_9, NULL);
		return L_10;
	}
}
// System.Void RootMotion.Demos.Navigator::Visualize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Navigator_Visualize_m78AD2122BC837C11DDD9A7367CA26DBC5BA76E90 (Navigator_t7D234A2CBEFB7989ACF84795A71863E7FD6C1A9A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// if (state == State.Idle) Gizmos.color = Color.gray;
		int32_t L_0;
		L_0 = Navigator_get_state_m27942DCA70B8D7CD52B12FA7EA3AEFA282834346_inline(__this, NULL);
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		// if (state == State.Idle) Gizmos.color = Color.gray;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1;
		L_1 = Color_get_gray_m6D01087E0F20F34718EBA5B213853B4BB49F1DEF_inline(NULL);
		Gizmos_set_color_m53927A2741937484180B20B55F7F20F8F60C5797(L_1, NULL);
	}

IL_0012:
	{
		// if (state == State.Seeking) Gizmos.color = Color.red;
		int32_t L_2;
		L_2 = Navigator_get_state_m27942DCA70B8D7CD52B12FA7EA3AEFA282834346_inline(__this, NULL);
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_0025;
		}
	}
	{
		// if (state == State.Seeking) Gizmos.color = Color.red;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3;
		L_3 = Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline(NULL);
		Gizmos_set_color_m53927A2741937484180B20B55F7F20F8F60C5797(L_3, NULL);
	}

IL_0025:
	{
		// if (state == State.OnPath) Gizmos.color = Color.green;
		int32_t L_4;
		L_4 = Navigator_get_state_m27942DCA70B8D7CD52B12FA7EA3AEFA282834346_inline(__this, NULL);
		if ((!(((uint32_t)L_4) == ((uint32_t)2))))
		{
			goto IL_0038;
		}
	}
	{
		// if (state == State.OnPath) Gizmos.color = Color.green;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5;
		L_5 = Color_get_green_mEB001F2CD8C68C6BBAEF9101990B779D3AA2A6EF_inline(NULL);
		Gizmos_set_color_m53927A2741937484180B20B55F7F20F8F60C5797(L_5, NULL);
	}

IL_0038:
	{
		// if (corners.Length > 0 && state == State.OnPath && cornerIndex == 0)
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_6 = __this->___corners_9;
		NullCheck(L_6);
		if (!(((RuntimeArray*)L_6)->max_length))
		{
			goto IL_006e;
		}
	}
	{
		int32_t L_7;
		L_7 = Navigator_get_state_m27942DCA70B8D7CD52B12FA7EA3AEFA282834346_inline(__this, NULL);
		if ((!(((uint32_t)L_7) == ((uint32_t)2))))
		{
			goto IL_006e;
		}
	}
	{
		int32_t L_8 = __this->___cornerIndex_8;
		if (L_8)
		{
			goto IL_006e;
		}
	}
	{
		// Gizmos.DrawLine(transform.position, corners[0]);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9 = __this->___transform_7;
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_9, NULL);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_11 = __this->___corners_9;
		NullCheck(L_11);
		int32_t L_12 = 0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		Gizmos_DrawLine_mB139054F55D615637A39A3127AADB16043387F8A(L_10, L_13, NULL);
	}

IL_006e:
	{
		// for (int i = 0; i < corners.Length; i++)
		V_0 = 0;
		goto IL_008c;
	}

IL_0072:
	{
		// Gizmos.DrawSphere(corners[i], 0.1f);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_14 = __this->___corners_9;
		int32_t L_15 = V_0;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		Gizmos_DrawSphere_mC7B2862BBDB3141A63B83F0F1E56E30101D4F472(L_17, (0.100000001f), NULL);
		// for (int i = 0; i < corners.Length; i++)
		int32_t L_18 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_008c:
	{
		// for (int i = 0; i < corners.Length; i++)
		int32_t L_19 = V_0;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_20 = __this->___corners_9;
		NullCheck(L_20);
		if ((((int32_t)L_19) < ((int32_t)((int32_t)(((RuntimeArray*)L_20)->max_length)))))
		{
			goto IL_0072;
		}
	}
	{
		// if (corners.Length > 1)
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_21 = __this->___corners_9;
		NullCheck(L_21);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_21)->max_length))) <= ((int32_t)1)))
		{
			goto IL_00d6;
		}
	}
	{
		// for (int i = 0; i < corners.Length - 1; i++)
		V_1 = 0;
		goto IL_00c9;
	}

IL_00a6:
	{
		// Gizmos.DrawLine(corners[i], corners[i + 1]);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_22 = __this->___corners_9;
		int32_t L_23 = V_1;
		NullCheck(L_22);
		int32_t L_24 = L_23;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_26 = __this->___corners_9;
		int32_t L_27 = V_1;
		NullCheck(L_26);
		int32_t L_28 = ((int32_t)il2cpp_codegen_add(L_27, 1));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		Gizmos_DrawLine_mB139054F55D615637A39A3127AADB16043387F8A(L_25, L_29, NULL);
		// for (int i = 0; i < corners.Length - 1; i++)
		int32_t L_30 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_30, 1));
	}

IL_00c9:
	{
		// for (int i = 0; i < corners.Length - 1; i++)
		int32_t L_31 = V_1;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_32 = __this->___corners_9;
		NullCheck(L_32);
		if ((((int32_t)L_31) < ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_32)->max_length)), 1)))))
		{
			goto IL_00a6;
		}
	}

IL_00d6:
	{
		// Gizmos.color = Color.white;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_33;
		L_33 = Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline(NULL);
		Gizmos_set_color_m53927A2741937484180B20B55F7F20F8F60C5797(L_33, NULL);
		// }
		return;
	}
}
// System.Void RootMotion.Demos.Navigator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Navigator__ctor_m96B4A3393D0078BC3BAE6E382EA93583B097075E (Navigator_t7D234A2CBEFB7989ACF84795A71863E7FD6C1A9A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public float cornerRadius = 0.5f;
		__this->___cornerRadius_1 = (0.5f);
		// public float recalculateOnPathDistance = 1f;
		__this->___recalculateOnPathDistance_2 = (1.0f);
		// public float maxSampleDistance = 5f;
		__this->___maxSampleDistance_3 = (5.0f);
		// public float nextPathInterval = 3f;
		__this->___nextPathInterval_4 = (3.0f);
		// private Vector3[] corners = new Vector3[0];
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_0 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)SZArrayNew(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var, (uint32_t)0);
		__this->___corners_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___corners_9), (void*)L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.UInt32 <PrivateImplementationDetails>::ComputeStringHash(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047 (String_t* ___0_s, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		String_t* L_0 = ___0_s;
		if (!L_0)
		{
			goto IL_002a;
		}
	}
	{
		V_0 = ((int32_t)-2128831035);
		V_1 = 0;
		goto IL_0021;
	}

IL_000d:
	{
		String_t* L_1 = ___0_s;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		Il2CppChar L_3;
		L_3 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_1, L_2, NULL);
		uint32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_multiply(((int32_t)((int32_t)L_3^(int32_t)L_4)), ((int32_t)16777619)));
		int32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0021:
	{
		int32_t L_6 = V_1;
		String_t* L_7 = ___0_s;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_7, NULL);
		if ((((int32_t)L_6) < ((int32_t)L_8)))
		{
			goto IL_000d;
		}
	}

IL_002a:
	{
		uint32_t L_9 = V_0;
		return L_9;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_b;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_b;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_a;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_b;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), ((float)il2cpp_codegen_subtract(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_lhs, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_rhs, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___0_lhs;
		float L_1 = L_0.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = ___1_rhs;
		float L_3 = L_2.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4 = ___0_lhs;
		float L_5 = L_4.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = ___1_rhs;
		float L_7 = L_6.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8 = ___0_lhs;
		float L_9 = L_8.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10 = ___1_rhs;
		float L_11 = L_10.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12 = ___0_lhs;
		float L_13 = L_12.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14 = ___1_rhs;
		float L_15 = L_14.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16 = ___0_lhs;
		float L_17 = L_16.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18 = ___1_rhs;
		float L_19 = L_18.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_20 = ___0_lhs;
		float L_21 = L_20.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_22 = ___1_rhs;
		float L_23 = L_22.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_24 = ___0_lhs;
		float L_25 = L_24.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_26 = ___1_rhs;
		float L_27 = L_26.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_28 = ___0_lhs;
		float L_29 = L_28.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_30 = ___1_rhs;
		float L_31 = L_30.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_32 = ___0_lhs;
		float L_33 = L_32.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_34 = ___1_rhs;
		float L_35 = L_34.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_36 = ___0_lhs;
		float L_37 = L_36.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_38 = ___1_rhs;
		float L_39 = L_38.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_40 = ___0_lhs;
		float L_41 = L_40.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_42 = ___1_rhs;
		float L_43 = L_42.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_44 = ___0_lhs;
		float L_45 = L_44.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_46 = ___1_rhs;
		float L_47 = L_46.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_48 = ___0_lhs;
		float L_49 = L_48.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_50 = ___1_rhs;
		float L_51 = L_50.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_52 = ___0_lhs;
		float L_53 = L_52.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_54 = ___1_rhs;
		float L_55 = L_54.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_56 = ___0_lhs;
		float L_57 = L_56.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_58 = ___1_rhs;
		float L_59 = L_58.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_60 = ___0_lhs;
		float L_61 = L_60.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_62 = ___1_rhs;
		float L_63 = L_62.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_64;
		memset((&L_64), 0, sizeof(L_64));
		Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline((&L_64), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11)))), ((float)il2cpp_codegen_multiply(L_13, L_15)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_17, L_19)), ((float)il2cpp_codegen_multiply(L_21, L_23)))), ((float)il2cpp_codegen_multiply(L_25, L_27)))), ((float)il2cpp_codegen_multiply(L_29, L_31)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_33, L_35)), ((float)il2cpp_codegen_multiply(L_37, L_39)))), ((float)il2cpp_codegen_multiply(L_41, L_43)))), ((float)il2cpp_codegen_multiply(L_45, L_47)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_49, L_51)), ((float)il2cpp_codegen_multiply(L_53, L_55)))), ((float)il2cpp_codegen_multiply(L_57, L_59)))), ((float)il2cpp_codegen_multiply(L_61, L_63)))), /*hidden argument*/NULL);
		V_0 = L_64;
		goto IL_00e5;
	}

IL_00e5:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_65 = V_0;
		return L_65;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ((Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields*)il2cpp_codegen_static_fields_for(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var))->___identityQuaternion_4;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, float ___2_t, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___2_t;
		float L_1;
		L_1 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_0, NULL);
		___2_t = L_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_a;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___1_b;
		float L_5 = L_4.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_a;
		float L_7 = L_6.___x_2;
		float L_8 = ___2_t;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___0_a;
		float L_10 = L_9.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = ___1_b;
		float L_12 = L_11.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = ___0_a;
		float L_14 = L_13.___y_3;
		float L_15 = ___2_t;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = ___0_a;
		float L_17 = L_16.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = ___1_b;
		float L_19 = L_18.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = ___0_a;
		float L_21 = L_20.___z_4;
		float L_22 = ___2_t;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_23), ((float)il2cpp_codegen_add(L_3, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_5, L_7)), L_8)))), ((float)il2cpp_codegen_add(L_10, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_12, L_14)), L_15)))), ((float)il2cpp_codegen_add(L_17, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_19, L_21)), L_22)))), /*hidden argument*/NULL);
		V_0 = L_23;
		goto IL_0053;
	}

IL_0053:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = V_0;
		return L_24;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		float L_2 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___0_a;
		float L_4 = L_3.___y_3;
		float L_5 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_a;
		float L_7 = L_6.___z_4;
		float L_8 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_b;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_b;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_a;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_b;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Repeat_m6F1560A163481BB311D685294E1B463C3E4EB3BA_inline (float ___0_t, float ___1_length, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___0_t;
		float L_1 = ___0_t;
		float L_2 = ___1_length;
		float L_3;
		L_3 = floorf(((float)(L_1/L_2)));
		float L_4 = ___1_length;
		float L_5 = ___1_length;
		float L_6;
		L_6 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(((float)il2cpp_codegen_subtract(L_0, ((float)il2cpp_codegen_multiply(L_3, L_4)))), (0.0f), L_5, NULL);
		V_0 = L_6;
		goto IL_001b;
	}

IL_001b:
	{
		float L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___0_value, float ___1_min, float ___2_max, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	float V_2 = 0.0f;
	{
		float L_0 = ___0_value;
		float L_1 = ___1_min;
		V_0 = (bool)((((float)L_0) < ((float)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		float L_3 = ___1_min;
		___0_value = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		float L_4 = ___0_value;
		float L_5 = ___2_max;
		V_1 = (bool)((((float)L_4) > ((float)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		float L_7 = ___2_max;
		___0_value = L_7;
	}

IL_0019:
	{
		float L_8 = ___0_value;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		float L_9 = V_2;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline (float ___0_a, float ___1_b, float ___2_t, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___0_a;
		float L_1 = ___1_b;
		float L_2 = ___0_a;
		float L_3 = ___2_t;
		float L_4;
		L_4 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_3, NULL);
		V_0 = ((float)il2cpp_codegen_add(L_0, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_1, L_2)), L_4))));
		goto IL_0010;
	}

IL_0010:
	{
		float L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___forwardVector_11;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool CharacterThirdPerson_get_fullRootMotion_mBED6B5C55FDB74F8115F9E91BD4BEED0D9B97B83_inline (CharacterThirdPerson_t701D066717AA31A81BCCB2B926375896F0F18CF9* __this, const RuntimeMethod* method) 
{
	{
		// public bool fullRootMotion { get; set; }
		bool L_0 = __this->___U3CfullRootMotionU3Ek__BackingField_47;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_2;
		float L_1 = __this->___x_2;
		float L_2 = __this->___y_3;
		float L_3 = __this->___y_3;
		float L_4 = __this->___z_4;
		float L_5 = __this->___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_6;
		L_6 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3)))), ((float)il2cpp_codegen_multiply(L_4, L_5))))));
		V_0 = ((float)L_6);
		goto IL_0034;
	}

IL_0034:
	{
		float L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_a;
		float L_3 = L_2.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_6), ((-L_1)), ((-L_3)), ((-L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_001e;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_MoveTowards_m69751B5EC50D8E7127D4BB2C8D908E38808AF45D_inline (float ___0_current, float ___1_target, float ___2_maxDelta, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	{
		float L_0 = ___1_target;
		float L_1 = ___0_current;
		float L_2;
		L_2 = fabsf(((float)il2cpp_codegen_subtract(L_0, L_1)));
		float L_3 = ___2_maxDelta;
		V_0 = (bool)((((int32_t)((!(((float)L_2) <= ((float)L_3)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0017;
		}
	}
	{
		float L_5 = ___1_target;
		V_1 = L_5;
		goto IL_0026;
	}

IL_0017:
	{
		float L_6 = ___0_current;
		float L_7 = ___1_target;
		float L_8 = ___0_current;
		float L_9;
		L_9 = Mathf_Sign_m42EE1F0BC041AF14F89DED7F762BE996E2C50D8A_inline(((float)il2cpp_codegen_subtract(L_7, L_8)), NULL);
		float L_10 = ___2_maxDelta;
		V_1 = ((float)il2cpp_codegen_add(L_6, ((float)il2cpp_codegen_multiply(L_9, L_10))));
		goto IL_0026;
	}

IL_0026:
	{
		float L_11 = V_1;
		return L_11;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_MoveTowards_m0363264647799F3173AC37F8E819F98298249B08_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_current, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_target, float ___2_maxDistanceDelta, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	bool V_5 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_6;
	memset((&V_6), 0, sizeof(V_6));
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___1_target;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_current;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___1_target;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_current;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___1_target;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___0_current;
		float L_11 = L_10.___z_4;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		V_3 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17))));
		float L_18 = V_3;
		if ((((float)L_18) == ((float)(0.0f))))
		{
			goto IL_0055;
		}
	}
	{
		float L_19 = ___2_maxDistanceDelta;
		if ((!(((float)L_19) >= ((float)(0.0f)))))
		{
			goto IL_0052;
		}
	}
	{
		float L_20 = V_3;
		float L_21 = ___2_maxDistanceDelta;
		float L_22 = ___2_maxDistanceDelta;
		G_B4_0 = ((((int32_t)((!(((float)L_20) <= ((float)((float)il2cpp_codegen_multiply(L_21, L_22)))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0053;
	}

IL_0052:
	{
		G_B4_0 = 0;
	}

IL_0053:
	{
		G_B6_0 = G_B4_0;
		goto IL_0056;
	}

IL_0055:
	{
		G_B6_0 = 1;
	}

IL_0056:
	{
		V_5 = (bool)G_B6_0;
		bool L_23 = V_5;
		if (!L_23)
		{
			goto IL_0061;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = ___1_target;
		V_6 = L_24;
		goto IL_009b;
	}

IL_0061:
	{
		float L_25 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_26;
		L_26 = sqrt(((double)L_25));
		V_4 = ((float)L_26);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = ___0_current;
		float L_28 = L_27.___x_2;
		float L_29 = V_0;
		float L_30 = V_4;
		float L_31 = ___2_maxDistanceDelta;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32 = ___0_current;
		float L_33 = L_32.___y_3;
		float L_34 = V_1;
		float L_35 = V_4;
		float L_36 = ___2_maxDistanceDelta;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37 = ___0_current;
		float L_38 = L_37.___z_4;
		float L_39 = V_2;
		float L_40 = V_4;
		float L_41 = ___2_maxDistanceDelta;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42;
		memset((&L_42), 0, sizeof(L_42));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_42), ((float)il2cpp_codegen_add(L_28, ((float)il2cpp_codegen_multiply(((float)(L_29/L_30)), L_31)))), ((float)il2cpp_codegen_add(L_33, ((float)il2cpp_codegen_multiply(((float)(L_34/L_35)), L_36)))), ((float)il2cpp_codegen_add(L_38, ((float)il2cpp_codegen_multiply(((float)(L_39/L_40)), L_41)))), /*hidden argument*/NULL);
		V_6 = L_42;
		goto IL_009b;
	}

IL_009b:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43 = V_6;
		return L_43;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Angle_mB16906B482814C140FE5BA9D041D2DC11E42A68D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_from, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_to, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	bool V_2 = false;
	float V_3 = 0.0f;
	{
		float L_0;
		L_0 = Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline((&___0_from), NULL);
		float L_1;
		L_1 = Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline((&___1_to), NULL);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_2;
		L_2 = sqrt(((double)((float)il2cpp_codegen_multiply(L_0, L_1))));
		V_0 = ((float)L_2);
		float L_3 = V_0;
		V_2 = (bool)((((float)L_3) < ((float)(1.0E-15f)))? 1 : 0);
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_002c;
		}
	}
	{
		V_3 = (0.0f);
		goto IL_0056;
	}

IL_002c:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = ___0_from;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_to;
		float L_7;
		L_7 = Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline(L_5, L_6, NULL);
		float L_8 = V_0;
		float L_9;
		L_9 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(((float)(L_7/L_8)), (-1.0f), (1.0f), NULL);
		V_1 = L_9;
		float L_10 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_11;
		L_11 = acos(((double)L_10));
		V_3 = ((float)il2cpp_codegen_multiply(((float)L_11), (57.2957802f)));
		goto IL_0056;
	}

IL_0056:
	{
		float L_12 = V_3;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CharacterThirdPerson_set_onGround_m6A0C64AF41BD4C01EA6F48947318AED10EA6C298_inline (CharacterThirdPerson_t701D066717AA31A81BCCB2B926375896F0F18CF9* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool onGround { get; private set; }
		bool L_0 = ___0_value;
		__this->___U3ConGroundU3Ek__BackingField_48 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_lhs, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_rhs, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_lhs;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_rhs;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_lhs;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_rhs;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_lhs;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_rhs;
		float L_11 = L_10.___z_4;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))));
		goto IL_002d;
	}

IL_002d:
	{
		float L_12 = V_0;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Equality_mCDCBB8D2EDC3D3BF20F31A25ACB34705D352B479_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_lhs, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_rhs, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	bool V_4 = false;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_lhs;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_rhs;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_lhs;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_rhs;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_lhs;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_rhs;
		float L_11 = L_10.___z_4;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		V_3 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17))));
		float L_18 = V_3;
		V_4 = (bool)((((float)L_18) < ((float)(9.99999944E-11f)))? 1 : 0);
		goto IL_0043;
	}

IL_0043:
	{
		bool L_19 = V_4;
		return L_19;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool CharacterThirdPerson_get_onGround_m9C9555A5C749F8F337E48584713AC44497253957_inline (CharacterThirdPerson_t701D066717AA31A81BCCB2B926375896F0F18CF9* __this, const RuntimeMethod* method) 
{
	{
		// public bool onGround { get; private set; }
		bool L_0 = __this->___U3ConGroundU3Ek__BackingField_48;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		float L_2 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___0_a;
		float L_4 = L_3.___y_3;
		float L_5 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_a;
		float L_7 = L_6.___z_4;
		float L_8 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)(L_1/L_2)), ((float)(L_4/L_5)), ((float)(L_7/L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_ClampMagnitude_mF83675F19744F58E97CF24D8359A810634DC031F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_vector, float ___1_maxLength, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	bool V_1 = false;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		float L_0;
		L_0 = Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline((&___0_vector), NULL);
		V_0 = L_0;
		float L_1 = V_0;
		float L_2 = ___1_maxLength;
		float L_3 = ___1_maxLength;
		V_1 = (bool)((((float)L_1) > ((float)((float)il2cpp_codegen_multiply(L_2, L_3))))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_004e;
		}
	}
	{
		float L_5 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_6;
		L_6 = sqrt(((double)L_5));
		V_2 = ((float)L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = ___0_vector;
		float L_8 = L_7.___x_2;
		float L_9 = V_2;
		V_3 = ((float)(L_8/L_9));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___0_vector;
		float L_11 = L_10.___y_3;
		float L_12 = V_2;
		V_4 = ((float)(L_11/L_12));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = ___0_vector;
		float L_14 = L_13.___z_4;
		float L_15 = V_2;
		V_5 = ((float)(L_14/L_15));
		float L_16 = V_3;
		float L_17 = ___1_maxLength;
		float L_18 = V_4;
		float L_19 = ___1_maxLength;
		float L_20 = V_5;
		float L_21 = ___1_maxLength;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		memset((&L_22), 0, sizeof(L_22));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_22), ((float)il2cpp_codegen_multiply(L_16, L_17)), ((float)il2cpp_codegen_multiply(L_18, L_19)), ((float)il2cpp_codegen_multiply(L_20, L_21)), /*hidden argument*/NULL);
		V_6 = L_22;
		goto IL_0053;
	}

IL_004e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23 = ___0_vector;
		V_6 = L_23;
		goto IL_0053;
	}

IL_0053:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = V_6;
		return L_24;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_2 = L_0;
		float L_1 = ___1_y;
		__this->___y_3 = L_1;
		float L_2 = ___2_z;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_SmoothDamp_mF673AC30464B7DF671A0556140EB6E9DD75827ED_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_current, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_target, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___2_currentVelocity, float ___3_smoothTime, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		float L_0;
		L_0 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		V_0 = L_0;
		V_1 = (std::numeric_limits<float>::infinity());
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___0_current;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_target;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_3 = ___2_currentVelocity;
		float L_4 = ___3_smoothTime;
		float L_5 = V_1;
		float L_6 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_SmoothDamp_mAF61EA22D4906BF87DD00A91FB4F6AC0C54C495A(L_1, L_2, L_3, L_4, L_5, L_6, NULL);
		V_2 = L_7;
		goto IL_001b;
	}

IL_001b:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_2;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Inequality_m9F170CDFBF1E490E559DA5D06D6547501A402BBF_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_lhs, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_rhs, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_lhs;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___1_rhs;
		bool L_2;
		L_2 = Vector3_op_Equality_mCDCBB8D2EDC3D3BF20F31A25ACB34705D352B479_inline(L_0, L_1, NULL);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_000e;
	}

IL_000e:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_euler, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_euler;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_0, (0.0174532924f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2;
		L_2 = Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E(L_1, NULL);
		V_0 = L_2;
		goto IL_0014;
	}

IL_0014:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Project_m85DF3CB297EC5E1A17BD6266FF65E86AB7372C9B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_vector, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_onNormal, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	bool V_1 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	float V_3 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___1_onNormal;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___1_onNormal;
		float L_2;
		L_2 = Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline(L_0, L_1, NULL);
		V_0 = L_2;
		float L_3 = V_0;
		float L_4 = ((Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_StaticFields*)il2cpp_codegen_static_fields_for(Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var))->___Epsilon_0;
		V_1 = (bool)((((float)L_3) < ((float)L_4))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_001d;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		V_2 = L_6;
		goto IL_004c;
	}

IL_001d:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = ___0_vector;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___1_onNormal;
		float L_9;
		L_9 = Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline(L_7, L_8, NULL);
		V_3 = L_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_onNormal;
		float L_11 = L_10.___x_2;
		float L_12 = V_3;
		float L_13 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = ___1_onNormal;
		float L_15 = L_14.___y_3;
		float L_16 = V_3;
		float L_17 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = ___1_onNormal;
		float L_19 = L_18.___z_4;
		float L_20 = V_3;
		float L_21 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		memset((&L_22), 0, sizeof(L_22));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_22), ((float)(((float)il2cpp_codegen_multiply(L_11, L_12))/L_13)), ((float)(((float)il2cpp_codegen_multiply(L_15, L_16))/L_17)), ((float)(((float)il2cpp_codegen_multiply(L_19, L_20))/L_21)), /*hidden argument*/NULL);
		V_2 = L_22;
		goto IL_004c;
	}

IL_004c:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23 = V_2;
		return L_23;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___upVector_7;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SimpleLocomotion_set_isGrounded_mAABAD43801C81B3513E20DEF68393661A55B9CC7_inline (SimpleLocomotion_t5C40DF535664F3EF4CC54452166672EA480285BE* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool isGrounded { get; private set; }
		bool L_0 = ___0_value;
		__this->___U3CisGroundedU3Ek__BackingField_10 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SimpleLocomotion_get_isGrounded_mBB52FDDFD43FFBE316BCA4EB0202E1EFEAFA61BF_inline (SimpleLocomotion_t5C40DF535664F3EF4CC54452166672EA480285BE* __this, const RuntimeMethod* method) 
{
	{
		// public bool isGrounded { get; private set; }
		bool L_0 = __this->___U3CisGroundedU3Ek__BackingField_10;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_SmoothDampAngle_m81F8BEDEE653DBC7AEC560E21EA429B34AA2734D_inline (float ___0_current, float ___1_target, float* ___2_currentVelocity, float ___3_smoothTime, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		float L_0;
		L_0 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		V_0 = L_0;
		V_1 = (std::numeric_limits<float>::infinity());
		float L_1 = ___0_current;
		float L_2 = ___1_target;
		float* L_3 = ___2_currentVelocity;
		float L_4 = ___3_smoothTime;
		float L_5 = V_1;
		float L_6 = V_0;
		float L_7;
		L_7 = Mathf_SmoothDampAngle_mA4C705CB9E2330AD5D98D7A9987DA64FD5AFFB3E_inline(L_1, L_2, L_3, L_4, L_5, L_6, NULL);
		V_2 = L_7;
		goto IL_001b;
	}

IL_001b:
	{
		float L_8 = V_2;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_SmoothDamp_m3A255A356924421B4042AAD1623EF46F92A08C91_inline (float ___0_current, float ___1_target, float* ___2_currentVelocity, float ___3_smoothTime, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		float L_0;
		L_0 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		V_0 = L_0;
		V_1 = (std::numeric_limits<float>::infinity());
		float L_1 = ___0_current;
		float L_2 = ___1_target;
		float* L_3 = ___2_currentVelocity;
		float L_4 = ___3_smoothTime;
		float L_5 = V_1;
		float L_6 = V_0;
		float L_7;
		L_7 = Mathf_SmoothDamp_mBE7ABB6B59D198BE8ABE42942452CC7B813A5248(L_1, L_2, L_3, L_4, L_5, L_6, NULL);
		V_2 = L_7;
		goto IL_001b;
	}

IL_001b:
	{
		float L_8 = V_2;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Navigator_get_normalizedDeltaPosition_m595BC9BF2137B046444109DAD6A772C089D8B42A_inline (Navigator_t7D234A2CBEFB7989ACF84795A71863E7FD6C1A9A* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 normalizedDeltaPosition { get; private set; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___U3CnormalizedDeltaPositionU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Navigator_set_state_mDD116E7D62AA78CEBE2720A38C4E49F9A757AF30_inline (Navigator_t7D234A2CBEFB7989ACF84795A71863E7FD6C1A9A* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public State state { get; private set; }
		int32_t L_0 = ___0_value;
		__this->___U3CstateU3Ek__BackingField_6 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Navigator_get_state_m27942DCA70B8D7CD52B12FA7EA3AEFA282834346_inline (Navigator_t7D234A2CBEFB7989ACF84795A71863E7FD6C1A9A* __this, const RuntimeMethod* method) 
{
	{
		// public State state { get; private set; }
		int32_t L_0 = __this->___U3CstateU3Ek__BackingField_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Navigator_set_normalizedDeltaPosition_m1265CF112882BEF964D98BBE460D5746CA4206AA_inline (Navigator_t7D234A2CBEFB7989ACF84795A71863E7FD6C1A9A* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) 
{
	{
		// public Vector3 normalizedDeltaPosition { get; private set; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_value;
		__this->___U3CnormalizedDeltaPositionU3Ek__BackingField_5 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_0 = L_0;
		float L_1 = ___1_y;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_Distance_mBACBB1609E1894D68F882D86A93519E311810C89_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_b, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_a;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___1_b;
		float L_3 = L_2.___x_0;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___0_a;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___1_b;
		float L_7 = L_6.___y_1;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		float L_8 = V_0;
		float L_9 = V_0;
		float L_10 = V_1;
		float L_11 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_12;
		L_12 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_8, L_9)), ((float)il2cpp_codegen_multiply(L_10, L_11))))));
		V_2 = ((float)L_12);
		goto IL_002e;
	}

IL_002e:
	{
		float L_13 = V_2;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_gray_m6D01087E0F20F34718EBA5B213853B4BB49F1DEF_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.5f), (0.5f), (0.5f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_green_mEB001F2CD8C68C6BBAEF9101990B779D3AA2A6EF_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.0f), (1.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___0_x, float ___1_y, float ___2_z, float ___3_w, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_0 = L_0;
		float L_1 = ___1_y;
		__this->___y_1 = L_1;
		float L_2 = ___2_z;
		__this->___z_2 = L_2;
		float L_3 = ___3_w;
		__this->___w_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___0_value, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___0_value;
		V_0 = (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (0.0f);
		goto IL_002d;
	}

IL_0015:
	{
		float L_2 = ___0_value;
		V_2 = (bool)((((float)L_2) > ((float)(1.0f)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		V_1 = (1.0f);
		goto IL_002d;
	}

IL_0029:
	{
		float L_4 = ___0_value;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_value;
		float L_1;
		L_1 = Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline(L_0, NULL);
		V_0 = L_1;
		float L_2 = V_0;
		V_1 = (bool)((((float)L_2) > ((float)(9.99999975E-06f)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_value;
		float L_5 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_4, L_5, NULL);
		V_2 = L_6;
		goto IL_0026;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		V_2 = L_7;
		goto IL_0026;
	}

IL_0026:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_2;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Sign_m42EE1F0BC041AF14F89DED7F762BE996E2C50D8A_inline (float ___0_f, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___0_f;
		if ((((float)L_0) >= ((float)(0.0f))))
		{
			goto IL_0010;
		}
	}
	{
		G_B3_0 = (-1.0f);
		goto IL_0015;
	}

IL_0010:
	{
		G_B3_0 = (1.0f);
	}

IL_0015:
	{
		V_0 = G_B3_0;
		goto IL_0018;
	}

IL_0018:
	{
		float L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_2;
		float L_1 = __this->___x_2;
		float L_2 = __this->___y_3;
		float L_3 = __this->___y_3;
		float L_4 = __this->___z_4;
		float L_5 = __this->___z_4;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3)))), ((float)il2cpp_codegen_multiply(L_4, L_5))));
		goto IL_002d;
	}

IL_002d:
	{
		float L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_SmoothDampAngle_mA4C705CB9E2330AD5D98D7A9987DA64FD5AFFB3E_inline (float ___0_current, float ___1_target, float* ___2_currentVelocity, float ___3_smoothTime, float ___4_maxSpeed, float ___5_deltaTime, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___0_current;
		float L_1 = ___0_current;
		float L_2 = ___1_target;
		float L_3;
		L_3 = Mathf_DeltaAngle_mCBA858CE5C1BEEBE375812325A50E434FF66D6D4_inline(L_1, L_2, NULL);
		___1_target = ((float)il2cpp_codegen_add(L_0, L_3));
		float L_4 = ___0_current;
		float L_5 = ___1_target;
		float* L_6 = ___2_currentVelocity;
		float L_7 = ___3_smoothTime;
		float L_8 = ___4_maxSpeed;
		float L_9 = ___5_deltaTime;
		float L_10;
		L_10 = Mathf_SmoothDamp_mBE7ABB6B59D198BE8ABE42942452CC7B813A5248(L_4, L_5, L_6, L_7, L_8, L_9, NULL);
		V_0 = L_10;
		goto IL_001c;
	}

IL_001c:
	{
		float L_11 = V_0;
		return L_11;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_r;
		__this->___r_0 = L_0;
		float L_1 = ___1_g;
		__this->___g_1 = L_1;
		float L_2 = ___2_b;
		__this->___b_2 = L_2;
		float L_3 = ___3_a;
		__this->___a_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_vector, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_vector;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_vector;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_vector;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_vector;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_vector;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___0_vector;
		float L_11 = L_10.___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_12;
		L_12 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))))));
		V_0 = ((float)L_12);
		goto IL_0034;
	}

IL_0034:
	{
		float L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_DeltaAngle_mCBA858CE5C1BEEBE375812325A50E434FF66D6D4_inline (float ___0_current, float ___1_target, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	float V_2 = 0.0f;
	{
		float L_0 = ___1_target;
		float L_1 = ___0_current;
		float L_2;
		L_2 = Mathf_Repeat_m6F1560A163481BB311D685294E1B463C3E4EB3BA_inline(((float)il2cpp_codegen_subtract(L_0, L_1)), (360.0f), NULL);
		V_0 = L_2;
		float L_3 = V_0;
		V_1 = (bool)((((float)L_3) > ((float)(180.0f)))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0023;
		}
	}
	{
		float L_5 = V_0;
		V_0 = ((float)il2cpp_codegen_subtract(L_5, (360.0f)));
	}

IL_0023:
	{
		float L_6 = V_0;
		V_2 = L_6;
		goto IL_0027;
	}

IL_0027:
	{
		float L_7 = V_2;
		return L_7;
	}
}
