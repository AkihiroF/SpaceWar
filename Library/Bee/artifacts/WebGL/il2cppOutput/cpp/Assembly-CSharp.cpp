#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct InvokerActionInvoker0
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj)
	{
		method->invoker_method(methodPtr, method, obj, NULL, NULL);
	}
};
template <typename T1>
struct InvokerActionInvoker1
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1)
	{
		void* params[1] = { &p1 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2)
	{
		void* params[2] = { p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<UnityEngine.Color,UnityEngine.Color,DG.Tweening.Plugins.Options.ColorOptions>
struct ABSTweenPlugin_3_tC26278B0CA053BAF4547345679D3E8D1F748AC12;
// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<UnityEngine.Quaternion,UnityEngine.Vector3,DG.Tweening.Plugins.Options.QuaternionOptions>
struct ABSTweenPlugin_3_t3823C0F935A3168B9E48DC90ABD9A0CED3D7BB82;
// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.Options.VectorOptions>
struct ABSTweenPlugin_3_tE5A78BE46D046C07A6356B8AB596B2D00F9295E7;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Action`1<TMPro.TMP_TextInfo>
struct Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1;
// DG.Tweening.Core.DOGetter`1<UnityEngine.Color>
struct DOGetter_1_t4DFFF7454A1BCD259676FED36CCF2114E34B5B95;
// DG.Tweening.Core.DOGetter`1<UnityEngine.Quaternion>
struct DOGetter_1_tB89DD12456B8E79576BB70E1CA6DF899686410D3;
// DG.Tweening.Core.DOGetter`1<UnityEngine.Vector3>
struct DOGetter_1_t709462C08281F3AA5DFEF36CAF91404B1004C338;
// DG.Tweening.Core.DOSetter`1<UnityEngine.Color>
struct DOSetter_1_t5E2B8A5C7040616545D7D029D20C4BF5F3E6DA89;
// DG.Tweening.Core.DOSetter`1<UnityEngine.Quaternion>
struct DOSetter_1_t9EFF8DD70A15F455A6FE698A22BD0FE9683AC28E;
// DG.Tweening.Core.DOSetter`1<UnityEngine.Vector3>
struct DOSetter_1_t02E8F9920F174322F1CF5AC8BCDEAABD14A03358;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1;
// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset>
struct Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C;
// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset>
struct Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5;
// System.Collections.Generic.List`1<ArmyEnemy>
struct List_1_tE8332A13AE0F0FF8326595223E3E738FCB53912C;
// System.Collections.Generic.List`1<System.Boolean>
struct List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<UnityEngine.RectTransform>
struct List_1_t5ED555E220A2C0CA4F1CC393401AF0D7BA5B456B;
// System.Collections.Generic.List`1<RowEnemy>
struct List_1_t09D143B09E6E0E7D300E26051BA7D55EBF012469;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED;
// System.Collections.Generic.Queue`1<System.Action>
struct Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA;
// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5;
// System.Threading.Tasks.TaskCompletionSource`1<System.Boolean>
struct TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14;
// System.Threading.Tasks.Task`1<System.Boolean>
struct Task_1_t824317F4B958F7512E8F7300511752937A6C6043;
// DG.Tweening.TweenCallback`1<System.Int32>
struct TweenCallback_1_tF0ADCA0C226C9C243ACB55E67D852E4BB53AEB67;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Color,UnityEngine.Color,DG.Tweening.Plugins.Options.ColorOptions>
struct TweenerCore_3_tC0593021331EF2AF46590E2184F512C0D38FD4C3;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Quaternion,UnityEngine.Vector3,DG.Tweening.Plugins.Options.QuaternionOptions>
struct TweenerCore_3_t392C54729BB024F5802F8E205C583653C4E886E3;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.Options.VectorOptions>
struct TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77;
// TMPro.TMP_TextProcessingStack`1<System.Int32>[]
struct TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2;
// System.Action[]
struct ActionU5BU5D_tF6161335A0A12A221AB081D78725C8AB6FE506D2;
// ArmyEnemy[]
struct ArmyEnemyU5BU5D_tF197349111465A61B39FE891CAA4DD3FC16C24FB;
// System.Boolean[]
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.Color32[]
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
// System.Decimal[]
struct DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// TMPro.FontWeight[]
struct FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// TMPro.HighlightState[]
struct HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622;
// TMPro.HorizontalAlignmentOptions[]
struct HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
// TMPro.MaterialReference[]
struct MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.RaycastHit2D[]
struct RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7;
// TMPro.RichTextTagAttribute[]
struct RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D;
// RowEnemy[]
struct RowEnemyU5BU5D_tA851C4DF9A6CAB5A12473D431020227EF2820BB6;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// TMPro.TMP_CharacterInfo[]
struct TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99;
// TMPro.TMP_ColorGradient[]
struct TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A;
// TMPro.TMP_SubMeshUI[]
struct TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// TMPro.WordWrapState[]
struct WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9;
// TMPro.TMP_Text/UnicodeChar[]
struct UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// ArmyEnemy
struct ArmyEnemy_t5291EA653FD944478FE7F0532725391126EFAC95;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// BulletController
struct BulletController_t68B005C1CEB960B7DE01B7BB76A976624E9858A5;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.Collider2D
struct Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// System.Threading.ContextCallback
struct ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// DG.Tweening.EaseFunction
struct EaseFunction_t0F945D9D726B0915C5FBF30862E987EC3AC12A04;
// EnemyController
struct EnemyController_tBB576F8CA41609F61E7D9AD27B14D49FB5A11C4A;
// EnemyHP
struct EnemyHP_t4325F0CE402CF433AABB25D2AA0A6945A27C9F3E;
// System.Exception
struct Exception_t;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// UnityEngine.UI.GridLayoutGroup
struct GridLayoutGroup_tEE9C68F88C13E6BD716BBD356D008ACFB63F1940;
// GunController
struct GunController_t7AFE6A92E37B9C51D7A5860FB2A93194D28E71D9;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// TMPro.ITextPreprocessor
struct ITextPreprocessor_tDBB49C8B68D7B80E8D233B9D9666C43981EFAAB9;
// UnityEngine.InputSystem.InputActionState
struct InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700;
// InputManager
struct InputManager_t29A2200021AE0E0EB6F34CB1B9DF031B3AE02677;
// UnityEngine.InputSystem.InputValue
struct InputValue_t4F053958518BDF6FD85C55F31B0597C9521B4231;
// UnityEngine.UI.LayoutElement
struct LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A;
// UnityEngine.UI.LayoutGroup
struct LayoutGroup_t32417833C700E77EDFA7C20034DAFD26604E05CE;
// LevelArmy
struct LevelArmy_t2FF55B4DCEAE7CB9E011C7003F10438A6EF31E0D;
// ManagerScore
struct ManagerScore_tEA2640F9E15FCE4A35A098CE608EAAB30B03341B;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// MovingBackground
struct MovingBackground_tD48A0A7758B27C9D87C59CAEE3D4BDD2E6F53EDC;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// PlayerController
struct PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectOffset
struct RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F;
// RowEnemy
struct RowEnemy_t2EF20FA4770986CA2A4FF42842E44F9498C60045;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A;
// DG.Tweening.Sequence
struct Sequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C;
// System.Threading.Tasks.StackGuard
struct StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352;
// System.String
struct String_t;
// TMPro.TMP_Character
struct TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35;
// TMPro.TMP_ColorGradient
struct TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB;
// TMPro.TMP_FontAsset
struct TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160;
// TMPro.TMP_SpriteAnimator
struct TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4;
// TMPro.TMP_SpriteAsset
struct TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39;
// TMPro.TMP_Style
struct TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C;
// TMPro.TMP_StyleSheet
struct TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859;
// TMPro.TMP_TextElement
struct TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5;
// TMPro.TMP_TextInfo
struct TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D;
// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E;
// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// DG.Tweening.TweenCallback
struct TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24;
// System.Type
struct Type_t;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityMainThreadDispatcher
struct UnityMainThreadDispatcher_tCBFCAE330E237A494F8AD7303087FCEB5A9B03EE;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3;
// EnemyController/<FireEnemy>d__46
struct U3CFireEnemyU3Ed__46_t176C607D294F550F05A90680A12394419CAC8019;
// EnemyController/addScore
struct addScore_tD00A6AAD847AA5BC2F408B3161000D4210BAE6E3;
// EnemyController/damage
struct damage_tC5C439FFD24395BBE32C1A980C0FD6CAB0EEA247;
// GunController/<Reload>d__6
struct U3CReloadU3Ed__6_t628014D211AF69CCF85ED6CA98A6C3B12DFA04F8;
// ManagerScore/<SeeMasage>d__29
struct U3CSeeMasageU3Ed__29_t90E5209DABAE5C4686ACF00479EA80A8EED8686B;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540;
// UnityMainThreadDispatcher/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_t112364A02F40FBC0B3E8199966A6E0BC48A1BC60;
// UnityMainThreadDispatcher/<>c__DisplayClass4_0
struct U3CU3Ec__DisplayClass4_0_t41FED6820AB073CB7C64AB00BD3526AD7C543A9D;
// UnityMainThreadDispatcher/<ActionWrapper>d__5
struct U3CActionWrapperU3Ed__5_tF23089DC082690C12960166C6E45C869BF9939E0;

IL2CPP_EXTERN_C RuntimeClass* Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Physics2D_t64C0DB5246067DAC2E83A52558A0AC68AF3BE94D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CActionWrapperU3Ed__5_tF23089DC082690C12960166C6E45C869BF9939E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CFireEnemyU3Ed__46_t176C607D294F550F05A90680A12394419CAC8019_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CReloadU3Ed__6_t628014D211AF69CCF85ED6CA98A6C3B12DFA04F8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CSeeMasageU3Ed__29_t90E5209DABAE5C4686ACF00479EA80A8EED8686B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass2_0_t112364A02F40FBC0B3E8199966A6E0BC48A1BC60_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass4_0_t41FED6820AB073CB7C64AB00BD3526AD7C543A9D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityMainThreadDispatcher_tCBFCAE330E237A494F8AD7303087FCEB5A9B03EE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* addScore_tD00A6AAD847AA5BC2F408B3161000D4210BAE6E3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* damage_tC5C439FFD24395BBE32C1A980C0FD6CAB0EEA247_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral02C39B3BF8704112F5A0533C142CD1171887C7C7;
IL2CPP_EXTERN_C String_t* _stringLiteral23114468D04FA2B7A2DA455B545DB914D0A3ED94;
IL2CPP_EXTERN_C String_t* _stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7;
IL2CPP_EXTERN_C String_t* _stringLiteral679C291DDDABA344C75D8BC842F0F95E46B6B2EA;
IL2CPP_EXTERN_C String_t* _stringLiteralC2D45B8CC3AE8A41E9F54EE5C905537205526C7D;
IL2CPP_EXTERN_C String_t* _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70;
IL2CPP_EXTERN_C String_t* _stringLiteralDC8C7F445CAD9C1F2B4B8895597B9BAC7462F50C;
IL2CPP_EXTERN_C String_t* _stringLiteralF5858D2F810A295A39EB6037250B7AB2AA56FB1D;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisEnemyHP_t4325F0CE402CF433AABB25D2AA0A6945A27C9F3E_mA6F818C24BC65C9BF00BA6D5455FF93CDF093CCB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m20744EC386B8AC8AC63C85A74805C99501EB8F48_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m9EE5F0139D318AEF5BAB6719C9B3F5D5D0A38E5C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m1D653C01DE3239887CB159B7FD92B3EC1361B51D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m5733CB09191684FB6786BFA75ABF6978F39EE823_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m7B066E79D57364B77E4BE2A2F567DDF33AF27799_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mF2C536319871A057EF46DDB6BEE424BA1325EA9F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisEnemyHP_t4325F0CE402CF433AABB25D2AA0A6945A27C9F3E_mD8D79A38B1B77044341029CE43038AEBA28284DC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisGridLayoutGroup_tEE9C68F88C13E6BD716BBD356D008ACFB63F1940_mDF4A2E04045EFD3D063DDB65366582425319C960_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m9E552507CE5EACBA6A9E0470BB5F15669379B956_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_mBDBF977A8C7734F6EDD83FC65C6FDDE74427611E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputValue_Get_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mBA56AD2906D3B6F2B87F3DE248CB62E1AA4D2293_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m11FE8D8E0C66BD2FF01A44DEFB6DFACEFC22C7D6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m4710091EBAF4884CCC91C3A611A44EB349EAC34C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_m520E9B7A0934E12858F175443D6FC696A45987C2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_mCCE85D4D5326536C4B214C73D07030F4CCD18485_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m41969899D3257B63DFB0E09C78A18D1869EC180C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m4573A12BFDA535926500C04E88A94540C95C395D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m467023CDC012B63A6D7D3455058126A1229206A5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m89A66076DE282BA1AC99038CB2E9825E24AA9B3A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mF2F931E0D11021A019B6314239D394E95EFF6F49_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ManagerScore_AddScore_mF2EA50B5706C32A0BF0D3E5F584ABFDA4C2A856F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ManagerScore_ChechVolna_mD77E535B6BF0F6D712B6518793CEA38550F8AFBC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ManagerScore_Damage_m483E78F5F0BE918DCCD7C0E86807EC4173942760_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Dequeue_m67206C56B5CF9749EFAEF48FAA0D82E2AD8D960E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Enqueue_m9B59C0455EACB768D8D74CA1F57E003C91F6E3D4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1__ctor_mCB1D86FC102A8C3B82A02702CAEDAE815FE04272_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_get_Count_mB986A63C8D68BD8606522BF24176D36503CFD9C3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1_TrySetException_m439CB88F99980A2A50B1588B7ACD795274C8D7EE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1_TrySetResult_m3B4D8D267C1B26945C3C417057DEB50C56B689B1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1__ctor_mBAB8D6EFEAD1AA6482D19D7CE639528BE66AF646_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1_get_Task_m068E06095F165AE266E15C328CBDA1543429EC66_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CActionWrapperU3Ed__5_System_Collections_IEnumerator_Reset_m2E3C55B7DF0FAE95862C7A9C369E177D02706EFD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CFireEnemyU3Ed__46_System_Collections_IEnumerator_Reset_m5C2D15C7611CA4182EE356ADE061EBA3ABED4E7C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CReloadU3Ed__6_System_Collections_IEnumerator_Reset_m67B87F6B264F9C3F12C84CF27129FA20A667DCEE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CSeeMasageU3Ed__29_System_Collections_IEnumerator_Reset_m02ED5CF10CD3ADBFD1ECF4435328FD1203F09ED0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass2_0_U3CEnqueueU3Eb__0_m9DCF63AE3D8BF2E9C9874C84E2D644E0193132CC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass4_0_U3CEnqueueAsyncU3Eg__WrappedActionU7C0_mF22148EFA0776594EC9B22FE8399FC0AC64D4F2C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityMainThreadDispatcher_Instance_m8E2987185D2965CACCC754B3278C59237C7E8D8D_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};

// System.Collections.Generic.List`1<ArmyEnemy>
struct List_1_tE8332A13AE0F0FF8326595223E3E738FCB53912C  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ArmyEnemyU5BU5D_tF197349111465A61B39FE891CAA4DD3FC16C24FB* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tE8332A13AE0F0FF8326595223E3E738FCB53912C_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ArmyEnemyU5BU5D_tF197349111465A61B39FE891CAA4DD3FC16C24FB* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Boolean>
struct List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<RowEnemy>
struct List_1_t09D143B09E6E0E7D300E26051BA7D55EBF012469  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	RowEnemyU5BU5D_tA851C4DF9A6CAB5A12473D431020227EF2820BB6* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t09D143B09E6E0E7D300E26051BA7D55EBF012469_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	RowEnemyU5BU5D_tA851C4DF9A6CAB5A12473D431020227EF2820BB6* ___s_emptyArray_5;
};

// System.Collections.Generic.Queue`1<System.Action>
struct Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA  : public RuntimeObject
{
	// T[] System.Collections.Generic.Queue`1::_array
	ActionU5BU5D_tF6161335A0A12A221AB081D78725C8AB6FE506D2* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;
	// System.Object System.Collections.Generic.Queue`1::_syncRoot
	RuntimeObject* ____syncRoot_5;
};

// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5  : public RuntimeObject
{
	// T[] System.Collections.Generic.Queue`1::_array
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;
	// System.Object System.Collections.Generic.Queue`1::_syncRoot
	RuntimeObject* ____syncRoot_5;
};

// System.Threading.Tasks.TaskCompletionSource`1<System.Boolean>
struct TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14  : public RuntimeObject
{
	// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1::_task
	Task_1_t824317F4B958F7512E8F7300511752937A6C6043* ____task_0;
};

// DG.Tweening.Core.ABSSequentiable
struct ABSSequentiable_t05DF85FC63E3650D2D4CF6ABBA0F43263EB8CE89  : public RuntimeObject
{
	// DG.Tweening.TweenType DG.Tweening.Core.ABSSequentiable::tweenType
	int32_t ___tweenType_0;
	// System.Single DG.Tweening.Core.ABSSequentiable::sequencedPosition
	float ___sequencedPosition_1;
	// System.Single DG.Tweening.Core.ABSSequentiable::sequencedEndPosition
	float ___sequencedEndPosition_2;
	// DG.Tweening.TweenCallback DG.Tweening.Core.ABSSequentiable::onStart
	TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___onStart_3;
};
struct Il2CppArrayBounds;

// MathParameters
struct MathParameters_t6DD272BAE327D3E676F7632DFEC1BD5F38F8663E  : public RuntimeObject
{
};

// ModificateRectTransform
struct ModificateRectTransform_t6A072BB148DC0B18CE825AC1AA6F40602B9EE47D  : public RuntimeObject
{
};

// RowEnemy
struct RowEnemy_t2EF20FA4770986CA2A4FF42842E44F9498C60045  : public RuntimeObject
{
	// System.Collections.Generic.List`1<System.Boolean> RowEnemy::_isPlace
	List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* ____isPlace_0;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572  : public RuntimeObject
{
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_1;
	// System.Delegate System.Threading.Tasks.Task::m_action
	Delegate_t* ___m_action_2;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject* ___m_stateObject_3;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___m_taskScheduler_4;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_parent_5;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_6;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject* ___m_continuationObject_7;
	// System.Threading.Tasks.Task/ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540* ___m_contingentProperties_10;
};

struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticFields
{
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_0;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject* ___s_taskCompletionSentinel_8;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_9;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_taskCancelCallback_11;
	// System.Func`1<System.Threading.Tasks.Task/ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1* ___s_createContingentProperties_14;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::<Factory>k__BackingField
	TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* ___U3CFactoryU3Ek__BackingField_15;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::<CompletedTask>k__BackingField
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___U3CCompletedTaskU3Ek__BackingField_16;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED* ___s_IsExceptionObservedByParentPredicate_17;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007* ___s_ecCallback_18;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___s_IsTaskContinuationNullPredicate_19;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55* ___s_currentActiveTasks_20;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject* ___s_activeTasksLock_21;
};

struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_ThreadStaticFields
{
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___t_currentTask_12;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352* ___t_stackGuard_13;
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

// EnemyController/<FireEnemy>d__46
struct U3CFireEnemyU3Ed__46_t176C607D294F550F05A90680A12394419CAC8019  : public RuntimeObject
{
	// System.Int32 EnemyController/<FireEnemy>d__46::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object EnemyController/<FireEnemy>d__46::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// EnemyController EnemyController/<FireEnemy>d__46::<>4__this
	EnemyController_tBB576F8CA41609F61E7D9AD27B14D49FB5A11C4A* ___U3CU3E4__this_2;
	// UnityEngine.GameObject EnemyController/<FireEnemy>d__46::bullet
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___bullet_3;
	// UnityEngine.Transform EnemyController/<FireEnemy>d__46::enemy
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___enemy_4;
};

// GunController/<Reload>d__6
struct U3CReloadU3Ed__6_t628014D211AF69CCF85ED6CA98A6C3B12DFA04F8  : public RuntimeObject
{
	// System.Int32 GunController/<Reload>d__6::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object GunController/<Reload>d__6::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// GunController GunController/<Reload>d__6::<>4__this
	GunController_t7AFE6A92E37B9C51D7A5860FB2A93194D28E71D9* ___U3CU3E4__this_2;
};

// ManagerScore/<SeeMasage>d__29
struct U3CSeeMasageU3Ed__29_t90E5209DABAE5C4686ACF00479EA80A8EED8686B  : public RuntimeObject
{
	// System.Int32 ManagerScore/<SeeMasage>d__29::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object ManagerScore/<SeeMasage>d__29::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// ManagerScore ManagerScore/<SeeMasage>d__29::<>4__this
	ManagerScore_tEA2640F9E15FCE4A35A098CE608EAAB30B03341B* ___U3CU3E4__this_2;
	// System.Int32 ManagerScore/<SeeMasage>d__29::volnaa
	int32_t ___volnaa_3;
	// TMPro.TextMeshProUGUI ManagerScore/<SeeMasage>d__29::<trans>5__2
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___U3CtransU3E5__2_4;
};

// UnityMainThreadDispatcher/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_t112364A02F40FBC0B3E8199966A6E0BC48A1BC60  : public RuntimeObject
{
	// UnityMainThreadDispatcher UnityMainThreadDispatcher/<>c__DisplayClass2_0::<>4__this
	UnityMainThreadDispatcher_tCBFCAE330E237A494F8AD7303087FCEB5A9B03EE* ___U3CU3E4__this_0;
	// System.Collections.IEnumerator UnityMainThreadDispatcher/<>c__DisplayClass2_0::action
	RuntimeObject* ___action_1;
};

// UnityMainThreadDispatcher/<>c__DisplayClass4_0
struct U3CU3Ec__DisplayClass4_0_t41FED6820AB073CB7C64AB00BD3526AD7C543A9D  : public RuntimeObject
{
	// System.Action UnityMainThreadDispatcher/<>c__DisplayClass4_0::action
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___action_0;
	// System.Threading.Tasks.TaskCompletionSource`1<System.Boolean> UnityMainThreadDispatcher/<>c__DisplayClass4_0::tcs
	TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14* ___tcs_1;
};

// UnityMainThreadDispatcher/<ActionWrapper>d__5
struct U3CActionWrapperU3Ed__5_tF23089DC082690C12960166C6E45C869BF9939E0  : public RuntimeObject
{
	// System.Int32 UnityMainThreadDispatcher/<ActionWrapper>d__5::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object UnityMainThreadDispatcher/<ActionWrapper>d__5::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// System.Action UnityMainThreadDispatcher/<ActionWrapper>d__5::a
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___a_2;
};

// System.Collections.Generic.List`1/Enumerator<System.Boolean>
struct Enumerator_tCC04FB1803AFE7880193CE87A1E4C0C010165DA6 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	bool ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<RowEnemy>
struct Enumerator_t4C73AA8AE76FF12165CFE3487C91A2B65158873F 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t09D143B09E6E0E7D300E26051BA7D55EBF012469* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RowEnemy_t2EF20FA4770986CA2A4FF42842E44F9498C60045* ____current_3;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight>
struct TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions>
struct TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Int32>
struct TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Single>
struct TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	float ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient>
struct TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// System.Threading.Tasks.Task`1<System.Boolean>
struct Task_1_t824317F4B958F7512E8F7300511752937A6C6043  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	bool ___m_result_22;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
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

// UnityEngine.Color32
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};
};

// DG.Tweening.Plugins.Options.ColorOptions
struct ColorOptions_t9F2151E3A21F3FE2A41BEEF7D288D670C2685F39 
{
	// System.Boolean DG.Tweening.Plugins.Options.ColorOptions::alphaOnly
	bool ___alphaOnly_0;
};
// Native definition for P/Invoke marshalling of DG.Tweening.Plugins.Options.ColorOptions
struct ColorOptions_t9F2151E3A21F3FE2A41BEEF7D288D670C2685F39_marshaled_pinvoke
{
	int32_t ___alphaOnly_0;
};
// Native definition for COM marshalling of DG.Tweening.Plugins.Options.ColorOptions
struct ColorOptions_t9F2151E3A21F3FE2A41BEEF7D288D670C2685F39_marshaled_com
{
	int32_t ___alphaOnly_0;
};

// UnityEngine.DrivenRectTransformTracker
struct DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 
{
	union
	{
		struct
		{
		};
		uint8_t DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1__padding[1];
	};
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

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B 
{
	// System.Int32 TMPro.MaterialReference::index
	int32_t ___index_0;
	// TMPro.TMP_FontAsset TMPro.MaterialReference::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// TMPro.TMP_SpriteAsset TMPro.MaterialReference::spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	// UnityEngine.Material TMPro.MaterialReference::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	// System.Boolean TMPro.MaterialReference::isDefaultMaterial
	bool ___isDefaultMaterial_4;
	// System.Boolean TMPro.MaterialReference::isFallbackMaterial
	bool ___isFallbackMaterial_5;
	// UnityEngine.Material TMPro.MaterialReference::fallbackMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	// System.Single TMPro.MaterialReference::padding
	float ___padding_7;
	// System.Int32 TMPro.MaterialReference::referenceCount
	int32_t ___referenceCount_8;
};
// Native definition for P/Invoke marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_pinvoke
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};
// Native definition for COM marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_com
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;
};

struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix_17;
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

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// TMPro.TMP_FontStyleStack
struct TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC 
{
	// System.Byte TMPro.TMP_FontStyleStack::bold
	uint8_t ___bold_0;
	// System.Byte TMPro.TMP_FontStyleStack::italic
	uint8_t ___italic_1;
	// System.Byte TMPro.TMP_FontStyleStack::underline
	uint8_t ___underline_2;
	// System.Byte TMPro.TMP_FontStyleStack::strikethrough
	uint8_t ___strikethrough_3;
	// System.Byte TMPro.TMP_FontStyleStack::highlight
	uint8_t ___highlight_4;
	// System.Byte TMPro.TMP_FontStyleStack::superscript
	uint8_t ___superscript_5;
	// System.Byte TMPro.TMP_FontStyleStack::subscript
	uint8_t ___subscript_6;
	// System.Byte TMPro.TMP_FontStyleStack::uppercase
	uint8_t ___uppercase_7;
	// System.Byte TMPro.TMP_FontStyleStack::lowercase
	uint8_t ___lowercase_8;
	// System.Byte TMPro.TMP_FontStyleStack::smallcaps
	uint8_t ___smallcaps_9;
};

// TMPro.TMP_Offset
struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 
{
	// System.Single TMPro.TMP_Offset::m_Left
	float ___m_Left_0;
	// System.Single TMPro.TMP_Offset::m_Right
	float ___m_Right_1;
	// System.Single TMPro.TMP_Offset::m_Top
	float ___m_Top_2;
	// System.Single TMPro.TMP_Offset::m_Bottom
	float ___m_Bottom_3;
};

struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6_StaticFields
{
	// TMPro.TMP_Offset TMPro.TMP_Offset::k_ZeroOffset
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___k_ZeroOffset_4;
};

// DG.Tweening.Tween
struct Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C  : public ABSSequentiable_t05DF85FC63E3650D2D4CF6ABBA0F43263EB8CE89
{
	// System.Single DG.Tweening.Tween::timeScale
	float ___timeScale_4;
	// System.Boolean DG.Tweening.Tween::isBackwards
	bool ___isBackwards_5;
	// System.Boolean DG.Tweening.Tween::isInverted
	bool ___isInverted_6;
	// System.Object DG.Tweening.Tween::id
	RuntimeObject* ___id_7;
	// System.String DG.Tweening.Tween::stringId
	String_t* ___stringId_8;
	// System.Int32 DG.Tweening.Tween::intId
	int32_t ___intId_9;
	// System.Object DG.Tweening.Tween::target
	RuntimeObject* ___target_10;
	// DG.Tweening.UpdateType DG.Tweening.Tween::updateType
	int32_t ___updateType_11;
	// System.Boolean DG.Tweening.Tween::isIndependentUpdate
	bool ___isIndependentUpdate_12;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onPlay
	TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___onPlay_13;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onPause
	TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___onPause_14;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onRewind
	TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___onRewind_15;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onUpdate
	TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___onUpdate_16;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onStepComplete
	TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___onStepComplete_17;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onComplete
	TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___onComplete_18;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onKill
	TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___onKill_19;
	// DG.Tweening.TweenCallback`1<System.Int32> DG.Tweening.Tween::onWaypointChange
	TweenCallback_1_tF0ADCA0C226C9C243ACB55E67D852E4BB53AEB67* ___onWaypointChange_20;
	// System.Boolean DG.Tweening.Tween::isFrom
	bool ___isFrom_21;
	// System.Boolean DG.Tweening.Tween::isBlendable
	bool ___isBlendable_22;
	// System.Boolean DG.Tweening.Tween::isRecyclable
	bool ___isRecyclable_23;
	// System.Boolean DG.Tweening.Tween::isSpeedBased
	bool ___isSpeedBased_24;
	// System.Boolean DG.Tweening.Tween::autoKill
	bool ___autoKill_25;
	// System.Single DG.Tweening.Tween::duration
	float ___duration_26;
	// System.Int32 DG.Tweening.Tween::loops
	int32_t ___loops_27;
	// DG.Tweening.LoopType DG.Tweening.Tween::loopType
	int32_t ___loopType_28;
	// System.Single DG.Tweening.Tween::delay
	float ___delay_29;
	// System.Boolean DG.Tweening.Tween::<isRelative>k__BackingField
	bool ___U3CisRelativeU3Ek__BackingField_30;
	// DG.Tweening.Ease DG.Tweening.Tween::easeType
	int32_t ___easeType_31;
	// DG.Tweening.EaseFunction DG.Tweening.Tween::customEase
	EaseFunction_t0F945D9D726B0915C5FBF30862E987EC3AC12A04* ___customEase_32;
	// System.Single DG.Tweening.Tween::easeOvershootOrAmplitude
	float ___easeOvershootOrAmplitude_33;
	// System.Single DG.Tweening.Tween::easePeriod
	float ___easePeriod_34;
	// System.String DG.Tweening.Tween::debugTargetId
	String_t* ___debugTargetId_35;
	// System.Type DG.Tweening.Tween::typeofT1
	Type_t* ___typeofT1_36;
	// System.Type DG.Tweening.Tween::typeofT2
	Type_t* ___typeofT2_37;
	// System.Type DG.Tweening.Tween::typeofTPlugOptions
	Type_t* ___typeofTPlugOptions_38;
	// System.Boolean DG.Tweening.Tween::<active>k__BackingField
	bool ___U3CactiveU3Ek__BackingField_39;
	// System.Boolean DG.Tweening.Tween::isSequenced
	bool ___isSequenced_40;
	// DG.Tweening.Sequence DG.Tweening.Tween::sequenceParent
	Sequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C* ___sequenceParent_41;
	// System.Int32 DG.Tweening.Tween::activeId
	int32_t ___activeId_42;
	// DG.Tweening.Core.Enums.SpecialStartupMode DG.Tweening.Tween::specialStartupMode
	int32_t ___specialStartupMode_43;
	// System.Boolean DG.Tweening.Tween::creationLocked
	bool ___creationLocked_44;
	// System.Boolean DG.Tweening.Tween::startupDone
	bool ___startupDone_45;
	// System.Boolean DG.Tweening.Tween::<playedOnce>k__BackingField
	bool ___U3CplayedOnceU3Ek__BackingField_46;
	// System.Single DG.Tweening.Tween::<position>k__BackingField
	float ___U3CpositionU3Ek__BackingField_47;
	// System.Single DG.Tweening.Tween::fullDuration
	float ___fullDuration_48;
	// System.Int32 DG.Tweening.Tween::completedLoops
	int32_t ___completedLoops_49;
	// System.Boolean DG.Tweening.Tween::isPlaying
	bool ___isPlaying_50;
	// System.Boolean DG.Tweening.Tween::isComplete
	bool ___isComplete_51;
	// System.Single DG.Tweening.Tween::elapsedDelay
	float ___elapsedDelay_52;
	// System.Boolean DG.Tweening.Tween::delayComplete
	bool ___delayComplete_53;
	// System.Int32 DG.Tweening.Tween::miscInt
	int32_t ___miscInt_54;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

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

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
};

// DG.Tweening.Plugins.Options.VectorOptions
struct VectorOptions_t2814CC842518C92C9DFC5DE6F7A73824758D3EF9 
{
	// DG.Tweening.AxisConstraint DG.Tweening.Plugins.Options.VectorOptions::axisConstraint
	int32_t ___axisConstraint_0;
	// System.Boolean DG.Tweening.Plugins.Options.VectorOptions::snapping
	bool ___snapping_1;
};
// Native definition for P/Invoke marshalling of DG.Tweening.Plugins.Options.VectorOptions
struct VectorOptions_t2814CC842518C92C9DFC5DE6F7A73824758D3EF9_marshaled_pinvoke
{
	int32_t ___axisConstraint_0;
	int32_t ___snapping_1;
};
// Native definition for COM marshalling of DG.Tweening.Plugins.Options.VectorOptions
struct VectorOptions_t2814CC842518C92C9DFC5DE6F7A73824758D3EF9_marshaled_com
{
	int32_t ___axisConstraint_0;
	int32_t ___snapping_1;
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

// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	float ___m_Seconds_0;
};

// UnityEngine.InputSystem.InputAction/CallbackContext
struct CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8 
{
	// UnityEngine.InputSystem.InputActionState UnityEngine.InputSystem.InputAction/CallbackContext::m_State
	InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* ___m_State_0;
	// System.Int32 UnityEngine.InputSystem.InputAction/CallbackContext::m_ActionIndex
	int32_t ___m_ActionIndex_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputAction/CallbackContext
struct CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8_marshaled_pinvoke
{
	InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* ___m_State_0;
	int32_t ___m_ActionIndex_1;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputAction/CallbackContext
struct CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8_marshaled_com
{
	InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* ___m_State_0;
	int32_t ___m_ActionIndex_1;
};

// TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 
{
	// TMPro.TMP_Character TMPro.TMP_Text/SpecialCharacter::character
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	// TMPro.TMP_FontAsset TMPro.TMP_Text/SpecialCharacter::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// UnityEngine.Material TMPro.TMP_Text/SpecialCharacter::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	// System.Int32 TMPro.TMP_Text/SpecialCharacter::materialIndex
	int32_t ___materialIndex_3;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_pinvoke
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};
// Native definition for COM marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_com
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};

// TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 
{
	// System.UInt32[] TMPro.TMP_Text/TextBackingContainer::m_Array
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___m_Array_0;
	// System.Int32 TMPro.TMP_Text/TextBackingContainer::m_Count
	int32_t ___m_Count_1;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_pinvoke
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};
// Native definition for COM marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_com
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};

// System.Nullable`1<UnityEngine.InputSystem.InputAction/CallbackContext>
struct Nullable_1_t69306F42657D3DC9EDCF5E87D81E582BDE7DAC42 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8 ___value_1;
};

// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32>
struct TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference>
struct TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
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

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
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

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
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

// TMPro.Extents
struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 
{
	// UnityEngine.Vector2 TMPro.Extents::min
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___min_2;
	// UnityEngine.Vector2 TMPro.Extents::max
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___max_3;
};

struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8_StaticFields
{
	// TMPro.Extents TMPro.Extents::zero
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___zero_0;
	// TMPro.Extents TMPro.Extents::uninitialized
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___uninitialized_1;
};

// TMPro.HighlightState
struct HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B 
{
	// UnityEngine.Color32 TMPro.HighlightState::color
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color_0;
	// TMPro.TMP_Offset TMPro.HighlightState::padding
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___padding_1;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
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

// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;
};

// DG.Tweening.Plugins.Options.QuaternionOptions
struct QuaternionOptions_t1B83700718F7417854E4B6FB0E1726E183F69718 
{
	// DG.Tweening.RotateMode DG.Tweening.Plugins.Options.QuaternionOptions::rotateMode
	int32_t ___rotateMode_0;
	// DG.Tweening.AxisConstraint DG.Tweening.Plugins.Options.QuaternionOptions::axisConstraint
	int32_t ___axisConstraint_1;
	// UnityEngine.Vector3 DG.Tweening.Plugins.Options.QuaternionOptions::up
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___up_2;
	// System.Boolean DG.Tweening.Plugins.Options.QuaternionOptions::dynamicLookAt
	bool ___dynamicLookAt_3;
	// UnityEngine.Vector3 DG.Tweening.Plugins.Options.QuaternionOptions::dynamicLookAtWorldPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___dynamicLookAtWorldPosition_4;
};
// Native definition for P/Invoke marshalling of DG.Tweening.Plugins.Options.QuaternionOptions
struct QuaternionOptions_t1B83700718F7417854E4B6FB0E1726E183F69718_marshaled_pinvoke
{
	int32_t ___rotateMode_0;
	int32_t ___axisConstraint_1;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___up_2;
	int32_t ___dynamicLookAt_3;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___dynamicLookAtWorldPosition_4;
};
// Native definition for COM marshalling of DG.Tweening.Plugins.Options.QuaternionOptions
struct QuaternionOptions_t1B83700718F7417854E4B6FB0E1726E183F69718_marshaled_com
{
	int32_t ___rotateMode_0;
	int32_t ___axisConstraint_1;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___up_2;
	int32_t ___dynamicLookAt_3;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___dynamicLookAtWorldPosition_4;
};

// UnityEngine.RaycastHit2D
struct RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA 
{
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Centroid
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Centroid_0;
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Point
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Point_1;
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Normal
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Normal_2;
	// System.Single UnityEngine.RaycastHit2D::m_Distance
	float ___m_Distance_3;
	// System.Single UnityEngine.RaycastHit2D::m_Fraction
	float ___m_Fraction_4;
	// System.Int32 UnityEngine.RaycastHit2D::m_Collider
	int32_t ___m_Collider_5;
};

// UnityEngine.RectOffset
struct RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5  : public RuntimeObject
{
	// System.IntPtr UnityEngine.RectOffset::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Object UnityEngine.RectOffset::m_SourceStyle
	RuntimeObject* ___m_SourceStyle_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.RectOffset
struct RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppIUnknown* ___m_SourceStyle_1;
};
// Native definition for COM marshalling of UnityEngine.RectOffset
struct RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppIUnknown* ___m_SourceStyle_1;
};

// DG.Tweening.Tweener
struct Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140  : public Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C
{
	// System.Boolean DG.Tweening.Tweener::hasManuallySetStartValue
	bool ___hasManuallySetStartValue_55;
	// System.Boolean DG.Tweening.Tweener::isFromAllowed
	bool ___isFromAllowed_56;
};

// TMPro.VertexGradient
struct VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F 
{
	// UnityEngine.Color TMPro.VertexGradient::topLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topLeft_0;
	// UnityEngine.Color TMPro.VertexGradient::topRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topRight_1;
	// UnityEngine.Color TMPro.VertexGradient::bottomLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomLeft_2;
	// UnityEngine.Color TMPro.VertexGradient::bottomRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomRight_3;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState>
struct TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// DG.Tweening.Core.TweenerCore`3<UnityEngine.Color,UnityEngine.Color,DG.Tweening.Plugins.Options.ColorOptions>
struct TweenerCore_3_tC0593021331EF2AF46590E2184F512C0D38FD4C3  : public Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140
{
	// T2 DG.Tweening.Core.TweenerCore`3::startValue
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___startValue_57;
	// T2 DG.Tweening.Core.TweenerCore`3::endValue
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___endValue_58;
	// T2 DG.Tweening.Core.TweenerCore`3::changeValue
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___changeValue_59;
	// TPlugOptions DG.Tweening.Core.TweenerCore`3::plugOptions
	ColorOptions_t9F2151E3A21F3FE2A41BEEF7D288D670C2685F39 ___plugOptions_60;
	// DG.Tweening.Core.DOGetter`1<T1> DG.Tweening.Core.TweenerCore`3::getter
	DOGetter_1_t4DFFF7454A1BCD259676FED36CCF2114E34B5B95* ___getter_61;
	// DG.Tweening.Core.DOSetter`1<T1> DG.Tweening.Core.TweenerCore`3::setter
	DOSetter_1_t5E2B8A5C7040616545D7D029D20C4BF5F3E6DA89* ___setter_62;
	// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<T1,T2,TPlugOptions> DG.Tweening.Core.TweenerCore`3::tweenPlugin
	ABSTweenPlugin_3_tC26278B0CA053BAF4547345679D3E8D1F748AC12* ___tweenPlugin_63;
	// System.Type DG.Tweening.Core.TweenerCore`3::_colorType
	Type_t* ____colorType_65;
	// System.Type DG.Tweening.Core.TweenerCore`3::_color32Type
	Type_t* ____color32Type_66;
};

// DG.Tweening.Core.TweenerCore`3<UnityEngine.Quaternion,UnityEngine.Vector3,DG.Tweening.Plugins.Options.QuaternionOptions>
struct TweenerCore_3_t392C54729BB024F5802F8E205C583653C4E886E3  : public Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140
{
	// T2 DG.Tweening.Core.TweenerCore`3::startValue
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___startValue_57;
	// T2 DG.Tweening.Core.TweenerCore`3::endValue
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___endValue_58;
	// T2 DG.Tweening.Core.TweenerCore`3::changeValue
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___changeValue_59;
	// TPlugOptions DG.Tweening.Core.TweenerCore`3::plugOptions
	QuaternionOptions_t1B83700718F7417854E4B6FB0E1726E183F69718 ___plugOptions_60;
	// DG.Tweening.Core.DOGetter`1<T1> DG.Tweening.Core.TweenerCore`3::getter
	DOGetter_1_tB89DD12456B8E79576BB70E1CA6DF899686410D3* ___getter_61;
	// DG.Tweening.Core.DOSetter`1<T1> DG.Tweening.Core.TweenerCore`3::setter
	DOSetter_1_t9EFF8DD70A15F455A6FE698A22BD0FE9683AC28E* ___setter_62;
	// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<T1,T2,TPlugOptions> DG.Tweening.Core.TweenerCore`3::tweenPlugin
	ABSTweenPlugin_3_t3823C0F935A3168B9E48DC90ABD9A0CED3D7BB82* ___tweenPlugin_63;
	// System.Type DG.Tweening.Core.TweenerCore`3::_colorType
	Type_t* ____colorType_65;
	// System.Type DG.Tweening.Core.TweenerCore`3::_color32Type
	Type_t* ____color32Type_66;
};

// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.Options.VectorOptions>
struct TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77  : public Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140
{
	// T2 DG.Tweening.Core.TweenerCore`3::startValue
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___startValue_57;
	// T2 DG.Tweening.Core.TweenerCore`3::endValue
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___endValue_58;
	// T2 DG.Tweening.Core.TweenerCore`3::changeValue
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___changeValue_59;
	// TPlugOptions DG.Tweening.Core.TweenerCore`3::plugOptions
	VectorOptions_t2814CC842518C92C9DFC5DE6F7A73824758D3EF9 ___plugOptions_60;
	// DG.Tweening.Core.DOGetter`1<T1> DG.Tweening.Core.TweenerCore`3::getter
	DOGetter_1_t709462C08281F3AA5DFEF36CAF91404B1004C338* ___getter_61;
	// DG.Tweening.Core.DOSetter`1<T1> DG.Tweening.Core.TweenerCore`3::setter
	DOSetter_1_t02E8F9920F174322F1CF5AC8BCDEAABD14A03358* ___setter_62;
	// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<T1,T2,TPlugOptions> DG.Tweening.Core.TweenerCore`3::tweenPlugin
	ABSTweenPlugin_3_tE5A78BE46D046C07A6356B8AB596B2D00F9295E7* ___tweenPlugin_63;
	// System.Type DG.Tweening.Core.TweenerCore`3::_colorType
	Type_t* ____colorType_65;
	// System.Type DG.Tweening.Core.TweenerCore`3::_color32Type
	Type_t* ____color32Type_66;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.InputSystem.InputValue
struct InputValue_t4F053958518BDF6FD85C55F31B0597C9521B4231  : public RuntimeObject
{
	// System.Nullable`1<UnityEngine.InputSystem.InputAction/CallbackContext> UnityEngine.InputSystem.InputValue::m_Context
	Nullable_1_t69306F42657D3DC9EDCF5E87D81E582BDE7DAC42 ___m_Context_0;
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// TMPro.TMP_LineInfo
struct TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 
{
	// System.Int32 TMPro.TMP_LineInfo::controlCharacterCount
	int32_t ___controlCharacterCount_0;
	// System.Int32 TMPro.TMP_LineInfo::characterCount
	int32_t ___characterCount_1;
	// System.Int32 TMPro.TMP_LineInfo::visibleCharacterCount
	int32_t ___visibleCharacterCount_2;
	// System.Int32 TMPro.TMP_LineInfo::spaceCount
	int32_t ___spaceCount_3;
	// System.Int32 TMPro.TMP_LineInfo::wordCount
	int32_t ___wordCount_4;
	// System.Int32 TMPro.TMP_LineInfo::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.TMP_LineInfo::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.TMP_LineInfo::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.TMP_LineInfo::lastVisibleCharacterIndex
	int32_t ___lastVisibleCharacterIndex_8;
	// System.Single TMPro.TMP_LineInfo::length
	float ___length_9;
	// System.Single TMPro.TMP_LineInfo::lineHeight
	float ___lineHeight_10;
	// System.Single TMPro.TMP_LineInfo::ascender
	float ___ascender_11;
	// System.Single TMPro.TMP_LineInfo::baseline
	float ___baseline_12;
	// System.Single TMPro.TMP_LineInfo::descender
	float ___descender_13;
	// System.Single TMPro.TMP_LineInfo::maxAdvance
	float ___maxAdvance_14;
	// System.Single TMPro.TMP_LineInfo::width
	float ___width_15;
	// System.Single TMPro.TMP_LineInfo::marginLeft
	float ___marginLeft_16;
	// System.Single TMPro.TMP_LineInfo::marginRight
	float ___marginRight_17;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_LineInfo::alignment
	int32_t ___alignment_18;
	// TMPro.Extents TMPro.TMP_LineInfo::lineExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___lineExtents_19;
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};

// ArmyEnemy
struct ArmyEnemy_t5291EA653FD944478FE7F0532725391126EFAC95  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.Collections.Generic.List`1<RowEnemy> ArmyEnemy::_PolkEnemies
	List_1_t09D143B09E6E0E7D300E26051BA7D55EBF012469* ____PolkEnemies_4;
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// LevelArmy
struct LevelArmy_t2FF55B4DCEAE7CB9E011C7003F10438A6EF31E0D  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.Collections.Generic.List`1<ArmyEnemy> LevelArmy::Enemies
	List_1_tE8332A13AE0F0FF8326595223E3E738FCB53912C* ___Enemies_4;
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.Rigidbody2D
struct Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A 
{
	// System.Int32 TMPro.WordWrapState::previous_WordBreak
	int32_t ___previous_WordBreak_0;
	// System.Int32 TMPro.WordWrapState::total_CharacterCount
	int32_t ___total_CharacterCount_1;
	// System.Int32 TMPro.WordWrapState::visible_CharacterCount
	int32_t ___visible_CharacterCount_2;
	// System.Int32 TMPro.WordWrapState::visible_SpriteCount
	int32_t ___visible_SpriteCount_3;
	// System.Int32 TMPro.WordWrapState::visible_LinkCount
	int32_t ___visible_LinkCount_4;
	// System.Int32 TMPro.WordWrapState::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.WordWrapState::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.WordWrapState::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.WordWrapState::lastVisibleCharIndex
	int32_t ___lastVisibleCharIndex_8;
	// System.Int32 TMPro.WordWrapState::lineNumber
	int32_t ___lineNumber_9;
	// System.Single TMPro.WordWrapState::maxCapHeight
	float ___maxCapHeight_10;
	// System.Single TMPro.WordWrapState::maxAscender
	float ___maxAscender_11;
	// System.Single TMPro.WordWrapState::maxDescender
	float ___maxDescender_12;
	// System.Single TMPro.WordWrapState::startOfLineAscender
	float ___startOfLineAscender_13;
	// System.Single TMPro.WordWrapState::maxLineAscender
	float ___maxLineAscender_14;
	// System.Single TMPro.WordWrapState::maxLineDescender
	float ___maxLineDescender_15;
	// System.Single TMPro.WordWrapState::pageAscender
	float ___pageAscender_16;
	// TMPro.HorizontalAlignmentOptions TMPro.WordWrapState::horizontalAlignment
	int32_t ___horizontalAlignment_17;
	// System.Single TMPro.WordWrapState::marginLeft
	float ___marginLeft_18;
	// System.Single TMPro.WordWrapState::marginRight
	float ___marginRight_19;
	// System.Single TMPro.WordWrapState::xAdvance
	float ___xAdvance_20;
	// System.Single TMPro.WordWrapState::preferredWidth
	float ___preferredWidth_21;
	// System.Single TMPro.WordWrapState::preferredHeight
	float ___preferredHeight_22;
	// System.Single TMPro.WordWrapState::previousLineScale
	float ___previousLineScale_23;
	// System.Int32 TMPro.WordWrapState::wordCount
	int32_t ___wordCount_24;
	// TMPro.FontStyles TMPro.WordWrapState::fontStyle
	int32_t ___fontStyle_25;
	// System.Int32 TMPro.WordWrapState::italicAngle
	int32_t ___italicAngle_26;
	// System.Single TMPro.WordWrapState::fontScaleMultiplier
	float ___fontScaleMultiplier_27;
	// System.Single TMPro.WordWrapState::currentFontSize
	float ___currentFontSize_28;
	// System.Single TMPro.WordWrapState::baselineOffset
	float ___baselineOffset_29;
	// System.Single TMPro.WordWrapState::lineOffset
	float ___lineOffset_30;
	// System.Boolean TMPro.WordWrapState::isDrivenLineSpacing
	bool ___isDrivenLineSpacing_31;
	// System.Single TMPro.WordWrapState::glyphHorizontalAdvanceAdjustment
	float ___glyphHorizontalAdvanceAdjustment_32;
	// System.Single TMPro.WordWrapState::cSpace
	float ___cSpace_33;
	// System.Single TMPro.WordWrapState::mSpace
	float ___mSpace_34;
	// TMPro.TMP_TextInfo TMPro.WordWrapState::textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	// TMPro.TMP_LineInfo TMPro.WordWrapState::lineInfo
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	// UnityEngine.Color32 TMPro.WordWrapState::vertexColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	// UnityEngine.Color32 TMPro.WordWrapState::underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	// UnityEngine.Color32 TMPro.WordWrapState::strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	// UnityEngine.Color32 TMPro.WordWrapState::highlightColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	// TMPro.TMP_FontStyleStack TMPro.WordWrapState::basicStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::italicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::highlightColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.WordWrapState::highlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.WordWrapState::colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.WordWrapState::fontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::styleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::baselineStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.WordWrapState::materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.WordWrapState::lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	// System.Int32 TMPro.WordWrapState::spriteAnimationID
	int32_t ___spriteAnimationID_57;
	// TMPro.TMP_FontAsset TMPro.WordWrapState::currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	// TMPro.TMP_SpriteAsset TMPro.WordWrapState::currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	// UnityEngine.Material TMPro.WordWrapState::currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	// System.Int32 TMPro.WordWrapState::currentMaterialIndex
	int32_t ___currentMaterialIndex_61;
	// TMPro.Extents TMPro.WordWrapState::meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	// System.Boolean TMPro.WordWrapState::tagNoParsing
	bool ___tagNoParsing_63;
	// System.Boolean TMPro.WordWrapState::isNonBreakingSpace
	bool ___isNonBreakingSpace_64;
};
// Native definition for P/Invoke marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_pinvoke
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};
// Native definition for COM marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_com
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};

// EnemyController/addScore
struct addScore_tD00A6AAD847AA5BC2F408B3161000D4210BAE6E3  : public MulticastDelegate_t
{
};

// EnemyController/damage
struct damage_tC5C439FFD24395BBE32C1A980C0FD6CAB0EEA247  : public MulticastDelegate_t
{
};

// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState>
struct TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.Collider2D
struct Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5  : public Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1
{
};

struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_StaticFields
{
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24* ___reapplyDrivenProperties_4;
};

// BulletController
struct BulletController_t68B005C1CEB960B7DE01B7BB76A976624E9858A5  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Rigidbody2D BulletController::_rb
	Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* ____rb_4;
	// System.Single BulletController::force
	float ___force_5;
	// System.Single BulletController::_damage
	float ____damage_6;
};

// EnemyController
struct EnemyController_tBB576F8CA41609F61E7D9AD27B14D49FB5A11C4A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 EnemyController::row
	int32_t ___row_4;
	// System.Int32 EnemyController::collumn
	int32_t ___collumn_5;
	// System.Collections.Generic.List`1<ArmyEnemy> EnemyController::enemysPosition
	List_1_tE8332A13AE0F0FF8326595223E3E738FCB53912C* ___enemysPosition_6;
	// UnityEngine.Vector2 EnemyController::sizeEnemy
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___sizeEnemy_7;
	// System.Single EnemyController::speed
	float ___speed_8;
	// UnityEngine.RectTransform EnemyController::_parentField
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ____parentField_9;
	// UnityEngine.GameObject EnemyController::fieldWithEnemy
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___fieldWithEnemy_10;
	// UnityEngine.GameObject EnemyController::prefabEnemy
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___prefabEnemy_11;
	// UnityEngine.GameObject EnemyController::prefabEmpty
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___prefabEmpty_12;
	// UnityEngine.GameObject EnemyController::finisGameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___finisGameObject_13;
	// UnityEngine.GameObject EnemyController::prefabBullet
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___prefabBullet_14;
	// System.Boolean EnemyController::fire
	bool ___fire_15;
	// EnemyController/damage EnemyController::PlayerDamage
	damage_tC5C439FFD24395BBE32C1A980C0FD6CAB0EEA247* ___PlayerDamage_16;
	// EnemyController/addScore EnemyController::NextVolna
	addScore_tD00A6AAD847AA5BC2F408B3161000D4210BAE6E3* ___NextVolna_17;
	// EnemyController/addScore EnemyController::EnemyKill
	addScore_tD00A6AAD847AA5BC2F408B3161000D4210BAE6E3* ___EnemyKill_18;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> EnemyController::enemys
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___enemys_19;
	// UnityEngine.RectTransform EnemyController::enemyField
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___enemyField_20;
	// UnityEngine.UI.GridLayoutGroup EnemyController::enemyLayoutGroup
	GridLayoutGroup_tEE9C68F88C13E6BD716BBD356D008ACFB63F1940* ___enemyLayoutGroup_21;
	// UnityEngine.Vector3 EnemyController::_startPositionEnemy
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____startPositionEnemy_22;
	// UnityEngine.Vector3 EnemyController::_finishPositionEnemy
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____finishPositionEnemy_23;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> EnemyController::fireenemy
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___fireenemy_24;
	// System.Int32 EnemyController::volna
	int32_t ___volna_25;
	// UnityEngine.GameObject EnemyController::bullet
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___bullet_26;
	// UnityEngine.Rigidbody2D EnemyController::_rbBullet
	Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* ____rbBullet_27;
	// System.Int32 EnemyController::numb
	int32_t ___numb_28;
};

// EnemyHP
struct EnemyHP_t4325F0CE402CF433AABB25D2AA0A6945A27C9F3E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single EnemyHP::_HP
	float ____HP_4;
	// System.Int32 EnemyHP::score
	int32_t ___score_5;
	// EnemyController EnemyHP::_controller
	EnemyController_tBB576F8CA41609F61E7D9AD27B14D49FB5A11C4A* ____controller_6;
	// UnityEngine.GameObject EnemyHP::enemyup
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___enemyup_7;
};

// GunController
struct GunController_t7AFE6A92E37B9C51D7A5860FB2A93194D28E71D9  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject GunController::bullet
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___bullet_4;
	// System.Single GunController::speed
	float ___speed_5;
	// UnityEngine.Transform GunController::gunPos
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___gunPos_6;
	// System.Boolean GunController::finish
	bool ___finish_7;
};

// InputManager
struct InputManager_t29A2200021AE0E0EB6F34CB1B9DF031B3AE02677  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// PlayerController InputManager::_controller
	PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* ____controller_4;
	// ManagerScore InputManager::_manager
	ManagerScore_tEA2640F9E15FCE4A35A098CE608EAAB30B03341B* ____manager_5;
	// UnityEngine.Vector2 InputManager::direction
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___direction_6;
};

// ManagerScore
struct ManagerScore_tEA2640F9E15FCE4A35A098CE608EAAB30B03341B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 ManagerScore::_totalScore
	int32_t ____totalScore_4;
	// TMPro.TextMeshProUGUI ManagerScore::textScore
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___textScore_5;
	// UnityEngine.GameObject ManagerScore::_panelGameOver
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____panelGameOver_6;
	// UnityEngine.GameObject ManagerScore::_panelLives
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____panelLives_7;
	// UnityEngine.GameObject ManagerScore::_prefabHP
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____prefabHP_8;
	// UnityEngine.GameObject ManagerScore::_panelStart
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____panelStart_9;
	// UnityEngine.GameObject ManagerScore::_MasageVolna
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____MasageVolna_10;
	// LevelArmy ManagerScore::_levelEasy
	LevelArmy_t2FF55B4DCEAE7CB9E011C7003F10438A6EF31E0D* ____levelEasy_11;
	// LevelArmy ManagerScore::_levelMedium
	LevelArmy_t2FF55B4DCEAE7CB9E011C7003F10438A6EF31E0D* ____levelMedium_12;
	// LevelArmy ManagerScore::_levelHard
	LevelArmy_t2FF55B4DCEAE7CB9E011C7003F10438A6EF31E0D* ____levelHard_13;
	// EnemyController ManagerScore::_enemyController
	EnemyController_tBB576F8CA41609F61E7D9AD27B14D49FB5A11C4A* ____enemyController_14;
	// InputManager ManagerScore::_inputManager
	InputManager_t29A2200021AE0E0EB6F34CB1B9DF031B3AE02677* ____inputManager_15;
	// GunController ManagerScore::_gun
	GunController_t7AFE6A92E37B9C51D7A5860FB2A93194D28E71D9* ____gun_16;
	// MovingBackground ManagerScore::_background
	MovingBackground_tD48A0A7758B27C9D87C59CAEE3D4BDD2E6F53EDC* ____background_17;
	// UnityEngine.Vector2 ManagerScore::sizeHeart
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___sizeHeart_18;
	// System.Int32 ManagerScore::hpPlayerMax
	int32_t ___hpPlayerMax_19;
	// System.Single ManagerScore::_speedEasy
	float ____speedEasy_20;
	// System.Single ManagerScore::_speedMedium
	float ____speedMedium_21;
	// System.Single ManagerScore::_speedHard
	float ____speedHard_22;
	// System.Single ManagerScore::_speedEnableMasage
	float ____speedEnableMasage_23;
	// UnityEngine.RectTransform ManagerScore::_livesTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ____livesTransform_24;
	// UnityEngine.UI.GridLayoutGroup ManagerScore::_livesGroup
	GridLayoutGroup_tEE9C68F88C13E6BD716BBD356D008ACFB63F1940* ____livesGroup_25;
	// System.Int32 ManagerScore::countVoln
	int32_t ___countVoln_26;
};

// MovingBackground
struct MovingBackground_tD48A0A7758B27C9D87C59CAEE3D4BDD2E6F53EDC  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single MovingBackground::speed
	float ___speed_4;
	// UnityEngine.GameObject MovingBackground::_bodyBackGround
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____bodyBackGround_5;
	// UnityEngine.Transform MovingBackground::_endPoint
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____endPoint_6;
	// UnityEngine.Vector3 MovingBackground::startpos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___startpos_7;
};

// PlayerController
struct PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform PlayerController::_bodyPlayer
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____bodyPlayer_4;
	// System.Single PlayerController::speed
	float ___speed_5;
	// UnityEngine.Vector2 PlayerController::ogranichenie
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___ogranichenie_6;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityMainThreadDispatcher
struct UnityMainThreadDispatcher_tCBFCAE330E237A494F8AD7303087FCEB5A9B03EE  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

struct UnityMainThreadDispatcher_tCBFCAE330E237A494F8AD7303087FCEB5A9B03EE_StaticFields
{
	// System.Collections.Generic.Queue`1<System.Action> UnityMainThreadDispatcher::_executionQueue
	Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA* ____executionQueue_4;
	// UnityMainThreadDispatcher UnityMainThreadDispatcher::_instance
	UnityMainThreadDispatcher_tCBFCAE330E237A494F8AD7303087FCEB5A9B03EE* ____instance_5;
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_21;
};

// UnityEngine.UI.LayoutGroup
struct LayoutGroup_t32417833C700E77EDFA7C20034DAFD26604E05CE  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.RectOffset UnityEngine.UI.LayoutGroup::m_Padding
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* ___m_Padding_4;
	// UnityEngine.TextAnchor UnityEngine.UI.LayoutGroup::m_ChildAlignment
	int32_t ___m_ChildAlignment_5;
	// UnityEngine.RectTransform UnityEngine.UI.LayoutGroup::m_Rect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_Rect_6;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.LayoutGroup::m_Tracker
	DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 ___m_Tracker_7;
	// UnityEngine.Vector2 UnityEngine.UI.LayoutGroup::m_TotalMinSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_TotalMinSize_8;
	// UnityEngine.Vector2 UnityEngine.UI.LayoutGroup::m_TotalPreferredSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_TotalPreferredSize_9;
	// UnityEngine.Vector2 UnityEngine.UI.LayoutGroup::m_TotalFlexibleSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_TotalFlexibleSize_10;
	// System.Collections.Generic.List`1<UnityEngine.RectTransform> UnityEngine.UI.LayoutGroup::m_RectChildren
	List_1_t5ED555E220A2C0CA4F1CC393401AF0D7BA5B456B* ___m_RectChildren_11;
};

// UnityEngine.UI.GridLayoutGroup
struct GridLayoutGroup_tEE9C68F88C13E6BD716BBD356D008ACFB63F1940  : public LayoutGroup_t32417833C700E77EDFA7C20034DAFD26604E05CE
{
	// UnityEngine.UI.GridLayoutGroup/Corner UnityEngine.UI.GridLayoutGroup::m_StartCorner
	int32_t ___m_StartCorner_12;
	// UnityEngine.UI.GridLayoutGroup/Axis UnityEngine.UI.GridLayoutGroup::m_StartAxis
	int32_t ___m_StartAxis_13;
	// UnityEngine.Vector2 UnityEngine.UI.GridLayoutGroup::m_CellSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_CellSize_14;
	// UnityEngine.Vector2 UnityEngine.UI.GridLayoutGroup::m_Spacing
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Spacing_15;
	// UnityEngine.UI.GridLayoutGroup/Constraint UnityEngine.UI.GridLayoutGroup::m_Constraint
	int32_t ___m_Constraint_16;
	// System.Int32 UnityEngine.UI.GridLayoutGroup::m_ConstraintCount
	int32_t ___m_ConstraintCount_17;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_35;
};

// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// System.String TMPro.TMP_Text::m_text
	String_t* ___m_text_36;
	// System.Boolean TMPro.TMP_Text::m_IsTextBackingStringDirty
	bool ___m_IsTextBackingStringDirty_37;
	// TMPro.ITextPreprocessor TMPro.TMP_Text::m_TextPreprocessor
	RuntimeObject* ___m_TextPreprocessor_38;
	// System.Boolean TMPro.TMP_Text::m_isRightToLeft
	bool ___m_isRightToLeft_39;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_fontAsset_40;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_currentFontAsset_41;
	// System.Boolean TMPro.TMP_Text::m_isSDFShader
	bool ___m_isSDFShader_42;
	// UnityEngine.Material TMPro.TMP_Text::m_sharedMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_sharedMaterial_43;
	// UnityEngine.Material TMPro.TMP_Text::m_currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_currentMaterial_44;
	// System.Int32 TMPro.TMP_Text::m_currentMaterialIndex
	int32_t ___m_currentMaterialIndex_48;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontSharedMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontSharedMaterials_49;
	// UnityEngine.Material TMPro.TMP_Text::m_fontMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_fontMaterial_50;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontMaterials_51;
	// System.Boolean TMPro.TMP_Text::m_isMaterialDirty
	bool ___m_isMaterialDirty_52;
	// UnityEngine.Color32 TMPro.TMP_Text::m_fontColor32
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_fontColor32_53;
	// UnityEngine.Color TMPro.TMP_Text::m_fontColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_fontColor_54;
	// UnityEngine.Color32 TMPro.TMP_Text::m_underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_underlineColor_56;
	// UnityEngine.Color32 TMPro.TMP_Text::m_strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_strikethroughColor_57;
	// System.Boolean TMPro.TMP_Text::m_enableVertexGradient
	bool ___m_enableVertexGradient_58;
	// TMPro.ColorMode TMPro.TMP_Text::m_colorMode
	int32_t ___m_colorMode_59;
	// TMPro.VertexGradient TMPro.TMP_Text::m_fontColorGradient
	VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F ___m_fontColorGradient_60;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_fontColorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_fontColorGradientPreset_61;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_spriteAsset_62;
	// System.Boolean TMPro.TMP_Text::m_tintAllSprites
	bool ___m_tintAllSprites_63;
	// System.Boolean TMPro.TMP_Text::m_tintSprite
	bool ___m_tintSprite_64;
	// UnityEngine.Color32 TMPro.TMP_Text::m_spriteColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_spriteColor_65;
	// TMPro.TMP_StyleSheet TMPro.TMP_Text::m_StyleSheet
	TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859* ___m_StyleSheet_66;
	// TMPro.TMP_Style TMPro.TMP_Text::m_TextStyle
	TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C* ___m_TextStyle_67;
	// System.Int32 TMPro.TMP_Text::m_TextStyleHashCode
	int32_t ___m_TextStyleHashCode_68;
	// System.Boolean TMPro.TMP_Text::m_overrideHtmlColors
	bool ___m_overrideHtmlColors_69;
	// UnityEngine.Color32 TMPro.TMP_Text::m_faceColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_faceColor_70;
	// UnityEngine.Color32 TMPro.TMP_Text::m_outlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_outlineColor_71;
	// System.Single TMPro.TMP_Text::m_outlineWidth
	float ___m_outlineWidth_72;
	// System.Single TMPro.TMP_Text::m_fontSize
	float ___m_fontSize_73;
	// System.Single TMPro.TMP_Text::m_currentFontSize
	float ___m_currentFontSize_74;
	// System.Single TMPro.TMP_Text::m_fontSizeBase
	float ___m_fontSizeBase_75;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_sizeStack_76;
	// TMPro.FontWeight TMPro.TMP_Text::m_fontWeight
	int32_t ___m_fontWeight_77;
	// TMPro.FontWeight TMPro.TMP_Text::m_FontWeightInternal
	int32_t ___m_FontWeightInternal_78;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.TMP_Text::m_FontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___m_FontWeightStack_79;
	// System.Boolean TMPro.TMP_Text::m_enableAutoSizing
	bool ___m_enableAutoSizing_80;
	// System.Single TMPro.TMP_Text::m_maxFontSize
	float ___m_maxFontSize_81;
	// System.Single TMPro.TMP_Text::m_minFontSize
	float ___m_minFontSize_82;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeIterationCount
	int32_t ___m_AutoSizeIterationCount_83;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeMaxIterationCount
	int32_t ___m_AutoSizeMaxIterationCount_84;
	// System.Boolean TMPro.TMP_Text::m_IsAutoSizePointSizeSet
	bool ___m_IsAutoSizePointSizeSet_85;
	// System.Single TMPro.TMP_Text::m_fontSizeMin
	float ___m_fontSizeMin_86;
	// System.Single TMPro.TMP_Text::m_fontSizeMax
	float ___m_fontSizeMax_87;
	// TMPro.FontStyles TMPro.TMP_Text::m_fontStyle
	int32_t ___m_fontStyle_88;
	// TMPro.FontStyles TMPro.TMP_Text::m_FontStyleInternal
	int32_t ___m_FontStyleInternal_89;
	// TMPro.TMP_FontStyleStack TMPro.TMP_Text::m_fontStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___m_fontStyleStack_90;
	// System.Boolean TMPro.TMP_Text::m_isUsingBold
	bool ___m_isUsingBold_91;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_HorizontalAlignment
	int32_t ___m_HorizontalAlignment_92;
	// TMPro.VerticalAlignmentOptions TMPro.TMP_Text::m_VerticalAlignment
	int32_t ___m_VerticalAlignment_93;
	// TMPro.TextAlignmentOptions TMPro.TMP_Text::m_textAlignment
	int32_t ___m_textAlignment_94;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_lineJustification
	int32_t ___m_lineJustification_95;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.TMP_Text::m_lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___m_lineJustificationStack_96;
	// UnityEngine.Vector3[] TMPro.TMP_Text::m_textContainerLocalCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_textContainerLocalCorners_97;
	// System.Single TMPro.TMP_Text::m_characterSpacing
	float ___m_characterSpacing_98;
	// System.Single TMPro.TMP_Text::m_cSpacing
	float ___m_cSpacing_99;
	// System.Single TMPro.TMP_Text::m_monoSpacing
	float ___m_monoSpacing_100;
	// System.Single TMPro.TMP_Text::m_wordSpacing
	float ___m_wordSpacing_101;
	// System.Single TMPro.TMP_Text::m_lineSpacing
	float ___m_lineSpacing_102;
	// System.Single TMPro.TMP_Text::m_lineSpacingDelta
	float ___m_lineSpacingDelta_103;
	// System.Single TMPro.TMP_Text::m_lineHeight
	float ___m_lineHeight_104;
	// System.Boolean TMPro.TMP_Text::m_IsDrivenLineSpacing
	bool ___m_IsDrivenLineSpacing_105;
	// System.Single TMPro.TMP_Text::m_lineSpacingMax
	float ___m_lineSpacingMax_106;
	// System.Single TMPro.TMP_Text::m_paragraphSpacing
	float ___m_paragraphSpacing_107;
	// System.Single TMPro.TMP_Text::m_charWidthMaxAdj
	float ___m_charWidthMaxAdj_108;
	// System.Single TMPro.TMP_Text::m_charWidthAdjDelta
	float ___m_charWidthAdjDelta_109;
	// System.Boolean TMPro.TMP_Text::m_enableWordWrapping
	bool ___m_enableWordWrapping_110;
	// System.Boolean TMPro.TMP_Text::m_isCharacterWrappingEnabled
	bool ___m_isCharacterWrappingEnabled_111;
	// System.Boolean TMPro.TMP_Text::m_isNonBreakingSpace
	bool ___m_isNonBreakingSpace_112;
	// System.Boolean TMPro.TMP_Text::m_isIgnoringAlignment
	bool ___m_isIgnoringAlignment_113;
	// System.Single TMPro.TMP_Text::m_wordWrappingRatios
	float ___m_wordWrappingRatios_114;
	// TMPro.TextOverflowModes TMPro.TMP_Text::m_overflowMode
	int32_t ___m_overflowMode_115;
	// System.Int32 TMPro.TMP_Text::m_firstOverflowCharacterIndex
	int32_t ___m_firstOverflowCharacterIndex_116;
	// TMPro.TMP_Text TMPro.TMP_Text::m_linkedTextComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___m_linkedTextComponent_117;
	// TMPro.TMP_Text TMPro.TMP_Text::parentLinkedComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___parentLinkedComponent_118;
	// System.Boolean TMPro.TMP_Text::m_isTextTruncated
	bool ___m_isTextTruncated_119;
	// System.Boolean TMPro.TMP_Text::m_enableKerning
	bool ___m_enableKerning_120;
	// System.Single TMPro.TMP_Text::m_GlyphHorizontalAdvanceAdjustment
	float ___m_GlyphHorizontalAdvanceAdjustment_121;
	// System.Boolean TMPro.TMP_Text::m_enableExtraPadding
	bool ___m_enableExtraPadding_122;
	// System.Boolean TMPro.TMP_Text::checkPaddingRequired
	bool ___checkPaddingRequired_123;
	// System.Boolean TMPro.TMP_Text::m_isRichText
	bool ___m_isRichText_124;
	// System.Boolean TMPro.TMP_Text::m_parseCtrlCharacters
	bool ___m_parseCtrlCharacters_125;
	// System.Boolean TMPro.TMP_Text::m_isOverlay
	bool ___m_isOverlay_126;
	// System.Boolean TMPro.TMP_Text::m_isOrthographic
	bool ___m_isOrthographic_127;
	// System.Boolean TMPro.TMP_Text::m_isCullingEnabled
	bool ___m_isCullingEnabled_128;
	// System.Boolean TMPro.TMP_Text::m_isMaskingEnabled
	bool ___m_isMaskingEnabled_129;
	// System.Boolean TMPro.TMP_Text::isMaskUpdateRequired
	bool ___isMaskUpdateRequired_130;
	// System.Boolean TMPro.TMP_Text::m_ignoreCulling
	bool ___m_ignoreCulling_131;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_horizontalMapping
	int32_t ___m_horizontalMapping_132;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_verticalMapping
	int32_t ___m_verticalMapping_133;
	// System.Single TMPro.TMP_Text::m_uvLineOffset
	float ___m_uvLineOffset_134;
	// TMPro.TextRenderFlags TMPro.TMP_Text::m_renderMode
	int32_t ___m_renderMode_135;
	// TMPro.VertexSortingOrder TMPro.TMP_Text::m_geometrySortingOrder
	int32_t ___m_geometrySortingOrder_136;
	// System.Boolean TMPro.TMP_Text::m_IsTextObjectScaleStatic
	bool ___m_IsTextObjectScaleStatic_137;
	// System.Boolean TMPro.TMP_Text::m_VertexBufferAutoSizeReduction
	bool ___m_VertexBufferAutoSizeReduction_138;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacter
	int32_t ___m_firstVisibleCharacter_139;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleCharacters
	int32_t ___m_maxVisibleCharacters_140;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleWords
	int32_t ___m_maxVisibleWords_141;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleLines
	int32_t ___m_maxVisibleLines_142;
	// System.Boolean TMPro.TMP_Text::m_useMaxVisibleDescender
	bool ___m_useMaxVisibleDescender_143;
	// System.Int32 TMPro.TMP_Text::m_pageToDisplay
	int32_t ___m_pageToDisplay_144;
	// System.Boolean TMPro.TMP_Text::m_isNewPage
	bool ___m_isNewPage_145;
	// UnityEngine.Vector4 TMPro.TMP_Text::m_margin
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_margin_146;
	// System.Single TMPro.TMP_Text::m_marginLeft
	float ___m_marginLeft_147;
	// System.Single TMPro.TMP_Text::m_marginRight
	float ___m_marginRight_148;
	// System.Single TMPro.TMP_Text::m_marginWidth
	float ___m_marginWidth_149;
	// System.Single TMPro.TMP_Text::m_marginHeight
	float ___m_marginHeight_150;
	// System.Single TMPro.TMP_Text::m_width
	float ___m_width_151;
	// TMPro.TMP_TextInfo TMPro.TMP_Text::m_textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___m_textInfo_152;
	// System.Boolean TMPro.TMP_Text::m_havePropertiesChanged
	bool ___m_havePropertiesChanged_153;
	// System.Boolean TMPro.TMP_Text::m_isUsingLegacyAnimationComponent
	bool ___m_isUsingLegacyAnimationComponent_154;
	// UnityEngine.Transform TMPro.TMP_Text::m_transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_transform_155;
	// UnityEngine.RectTransform TMPro.TMP_Text::m_rectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_rectTransform_156;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousRectTransformSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousRectTransformSize_157;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousPivotPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousPivotPosition_158;
	// System.Boolean TMPro.TMP_Text::<autoSizeTextContainer>k__BackingField
	bool ___U3CautoSizeTextContainerU3Ek__BackingField_159;
	// System.Boolean TMPro.TMP_Text::m_autoSizeTextContainer
	bool ___m_autoSizeTextContainer_160;
	// UnityEngine.Mesh TMPro.TMP_Text::m_mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_mesh_161;
	// System.Boolean TMPro.TMP_Text::m_isVolumetricText
	bool ___m_isVolumetricText_162;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TMP_Text::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_165;
	// TMPro.TMP_SpriteAnimator TMPro.TMP_Text::m_spriteAnimator
	TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4* ___m_spriteAnimator_166;
	// System.Single TMPro.TMP_Text::m_flexibleHeight
	float ___m_flexibleHeight_167;
	// System.Single TMPro.TMP_Text::m_flexibleWidth
	float ___m_flexibleWidth_168;
	// System.Single TMPro.TMP_Text::m_minWidth
	float ___m_minWidth_169;
	// System.Single TMPro.TMP_Text::m_minHeight
	float ___m_minHeight_170;
	// System.Single TMPro.TMP_Text::m_maxWidth
	float ___m_maxWidth_171;
	// System.Single TMPro.TMP_Text::m_maxHeight
	float ___m_maxHeight_172;
	// UnityEngine.UI.LayoutElement TMPro.TMP_Text::m_LayoutElement
	LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A* ___m_LayoutElement_173;
	// System.Single TMPro.TMP_Text::m_preferredWidth
	float ___m_preferredWidth_174;
	// System.Single TMPro.TMP_Text::m_renderedWidth
	float ___m_renderedWidth_175;
	// System.Boolean TMPro.TMP_Text::m_isPreferredWidthDirty
	bool ___m_isPreferredWidthDirty_176;
	// System.Single TMPro.TMP_Text::m_preferredHeight
	float ___m_preferredHeight_177;
	// System.Single TMPro.TMP_Text::m_renderedHeight
	float ___m_renderedHeight_178;
	// System.Boolean TMPro.TMP_Text::m_isPreferredHeightDirty
	bool ___m_isPreferredHeightDirty_179;
	// System.Boolean TMPro.TMP_Text::m_isCalculatingPreferredValues
	bool ___m_isCalculatingPreferredValues_180;
	// System.Int32 TMPro.TMP_Text::m_layoutPriority
	int32_t ___m_layoutPriority_181;
	// System.Boolean TMPro.TMP_Text::m_isLayoutDirty
	bool ___m_isLayoutDirty_182;
	// System.Boolean TMPro.TMP_Text::m_isAwake
	bool ___m_isAwake_183;
	// System.Boolean TMPro.TMP_Text::m_isWaitingOnResourceLoad
	bool ___m_isWaitingOnResourceLoad_184;
	// TMPro.TMP_Text/TextInputSources TMPro.TMP_Text::m_inputSource
	int32_t ___m_inputSource_185;
	// System.Single TMPro.TMP_Text::m_fontScaleMultiplier
	float ___m_fontScaleMultiplier_186;
	// System.Single TMPro.TMP_Text::tag_LineIndent
	float ___tag_LineIndent_190;
	// System.Single TMPro.TMP_Text::tag_Indent
	float ___tag_Indent_191;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_indentStack_192;
	// System.Boolean TMPro.TMP_Text::tag_NoParsing
	bool ___tag_NoParsing_193;
	// System.Boolean TMPro.TMP_Text::m_isParsingText
	bool ___m_isParsingText_194;
	// UnityEngine.Matrix4x4 TMPro.TMP_Text::m_FXMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_FXMatrix_195;
	// System.Boolean TMPro.TMP_Text::m_isFXMatrixSet
	bool ___m_isFXMatrixSet_196;
	// TMPro.TMP_Text/UnicodeChar[] TMPro.TMP_Text::m_TextProcessingArray
	UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5* ___m_TextProcessingArray_197;
	// System.Int32 TMPro.TMP_Text::m_InternalTextProcessingArraySize
	int32_t ___m_InternalTextProcessingArraySize_198;
	// TMPro.TMP_CharacterInfo[] TMPro.TMP_Text::m_internalCharacterInfo
	TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99* ___m_internalCharacterInfo_199;
	// System.Int32 TMPro.TMP_Text::m_totalCharacterCount
	int32_t ___m_totalCharacterCount_200;
	// System.Int32 TMPro.TMP_Text::m_characterCount
	int32_t ___m_characterCount_207;
	// System.Int32 TMPro.TMP_Text::m_firstCharacterOfLine
	int32_t ___m_firstCharacterOfLine_208;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacterOfLine
	int32_t ___m_firstVisibleCharacterOfLine_209;
	// System.Int32 TMPro.TMP_Text::m_lastCharacterOfLine
	int32_t ___m_lastCharacterOfLine_210;
	// System.Int32 TMPro.TMP_Text::m_lastVisibleCharacterOfLine
	int32_t ___m_lastVisibleCharacterOfLine_211;
	// System.Int32 TMPro.TMP_Text::m_lineNumber
	int32_t ___m_lineNumber_212;
	// System.Int32 TMPro.TMP_Text::m_lineVisibleCharacterCount
	int32_t ___m_lineVisibleCharacterCount_213;
	// System.Int32 TMPro.TMP_Text::m_pageNumber
	int32_t ___m_pageNumber_214;
	// System.Single TMPro.TMP_Text::m_PageAscender
	float ___m_PageAscender_215;
	// System.Single TMPro.TMP_Text::m_maxTextAscender
	float ___m_maxTextAscender_216;
	// System.Single TMPro.TMP_Text::m_maxCapHeight
	float ___m_maxCapHeight_217;
	// System.Single TMPro.TMP_Text::m_ElementAscender
	float ___m_ElementAscender_218;
	// System.Single TMPro.TMP_Text::m_ElementDescender
	float ___m_ElementDescender_219;
	// System.Single TMPro.TMP_Text::m_maxLineAscender
	float ___m_maxLineAscender_220;
	// System.Single TMPro.TMP_Text::m_maxLineDescender
	float ___m_maxLineDescender_221;
	// System.Single TMPro.TMP_Text::m_startOfLineAscender
	float ___m_startOfLineAscender_222;
	// System.Single TMPro.TMP_Text::m_startOfLineDescender
	float ___m_startOfLineDescender_223;
	// System.Single TMPro.TMP_Text::m_lineOffset
	float ___m_lineOffset_224;
	// TMPro.Extents TMPro.TMP_Text::m_meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___m_meshExtents_225;
	// UnityEngine.Color32 TMPro.TMP_Text::m_htmlColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_htmlColor_226;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_colorStack_227;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_underlineColorStack_228;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_strikethroughColorStack_229;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.TMP_Text::m_HighlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___m_HighlightStateStack_230;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_colorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_colorGradientPreset_231;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.TMP_Text::m_colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___m_colorGradientStack_232;
	// System.Boolean TMPro.TMP_Text::m_colorGradientPresetIsTinted
	bool ___m_colorGradientPresetIsTinted_233;
	// System.Single TMPro.TMP_Text::m_tabSpacing
	float ___m_tabSpacing_234;
	// System.Single TMPro.TMP_Text::m_spacing
	float ___m_spacing_235;
	// TMPro.TMP_TextProcessingStack`1<System.Int32>[] TMPro.TMP_Text::m_TextStyleStacks
	TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2* ___m_TextStyleStacks_236;
	// System.Int32 TMPro.TMP_Text::m_TextStyleStackDepth
	int32_t ___m_TextStyleStackDepth_237;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_ItalicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_ItalicAngleStack_238;
	// System.Int32 TMPro.TMP_Text::m_ItalicAngle
	int32_t ___m_ItalicAngle_239;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_actionStack_240;
	// System.Single TMPro.TMP_Text::m_padding
	float ___m_padding_241;
	// System.Single TMPro.TMP_Text::m_baselineOffset
	float ___m_baselineOffset_242;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_baselineOffsetStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_baselineOffsetStack_243;
	// System.Single TMPro.TMP_Text::m_xAdvance
	float ___m_xAdvance_244;
	// TMPro.TMP_TextElementType TMPro.TMP_Text::m_textElementType
	int32_t ___m_textElementType_245;
	// TMPro.TMP_TextElement TMPro.TMP_Text::m_cached_TextElement
	TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5* ___m_cached_TextElement_246;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Ellipsis
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Ellipsis_247;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Underline
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Underline_248;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_defaultSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_defaultSpriteAsset_249;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_currentSpriteAsset_250;
	// System.Int32 TMPro.TMP_Text::m_spriteCount
	int32_t ___m_spriteCount_251;
	// System.Int32 TMPro.TMP_Text::m_spriteIndex
	int32_t ___m_spriteIndex_252;
	// System.Int32 TMPro.TMP_Text::m_spriteAnimationID
	int32_t ___m_spriteAnimationID_253;
	// System.Boolean TMPro.TMP_Text::m_ignoreActiveState
	bool ___m_ignoreActiveState_256;
	// TMPro.TMP_Text/TextBackingContainer TMPro.TMP_Text::m_TextBackingArray
	TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 ___m_TextBackingArray_257;
	// System.Decimal[] TMPro.TMP_Text::k_Power
	DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615* ___k_Power_258;
};

struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_StaticFields
{
	// TMPro.MaterialReference[] TMPro.TMP_Text::m_materialReferences
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___m_materialReferences_45;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> TMPro.TMP_Text::m_materialReferenceIndexLookup
	Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* ___m_materialReferenceIndexLookup_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.TMP_Text::m_materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___m_materialReferenceStack_47;
	// UnityEngine.Color32 TMPro.TMP_Text::s_colorWhite
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___s_colorWhite_55;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset> TMPro.TMP_Text::OnFontAssetRequest
	Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C* ___OnFontAssetRequest_163;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset> TMPro.TMP_Text::OnSpriteAssetRequest
	Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5* ___OnSpriteAssetRequest_164;
	// System.Char[] TMPro.TMP_Text::m_htmlTag
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_htmlTag_187;
	// TMPro.RichTextTagAttribute[] TMPro.TMP_Text::m_xmlAttribute
	RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D* ___m_xmlAttribute_188;
	// System.Single[] TMPro.TMP_Text::m_attributeParameterValues
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___m_attributeParameterValues_189;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedWordWrapState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedWordWrapState_201;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLineState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLineState_202;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedEllipsisState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedEllipsisState_203;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLastValidState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLastValidState_204;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedSoftLineBreakState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedSoftLineBreakState_205;
	// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState> TMPro.TMP_Text::m_EllipsisInsertionCandidateStack
	TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F ___m_EllipsisInsertionCandidateStack_206;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_ParseTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseTextMarker_254;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_InsertNewLineMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_InsertNewLineMarker_255;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargePositiveVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargePositiveVector2_259;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargeNegativeVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargeNegativeVector2_260;
	// System.Single TMPro.TMP_Text::k_LargePositiveFloat
	float ___k_LargePositiveFloat_261;
	// System.Single TMPro.TMP_Text::k_LargeNegativeFloat
	float ___k_LargeNegativeFloat_262;
	// System.Int32 TMPro.TMP_Text::k_LargePositiveInt
	int32_t ___k_LargePositiveInt_263;
	// System.Int32 TMPro.TMP_Text::k_LargeNegativeInt
	int32_t ___k_LargeNegativeInt_264;
};

// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957  : public TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9
{
	// System.Boolean TMPro.TextMeshProUGUI::m_isRebuildingLayout
	bool ___m_isRebuildingLayout_265;
	// UnityEngine.Coroutine TMPro.TextMeshProUGUI::m_DelayedGraphicRebuild
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DelayedGraphicRebuild_266;
	// UnityEngine.Coroutine TMPro.TextMeshProUGUI::m_DelayedMaterialRebuild
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DelayedMaterialRebuild_267;
	// UnityEngine.Rect TMPro.TextMeshProUGUI::m_ClipRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_ClipRect_268;
	// System.Boolean TMPro.TextMeshProUGUI::m_ValidRect
	bool ___m_ValidRect_269;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TextMeshProUGUI::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_270;
	// System.Boolean TMPro.TextMeshProUGUI::m_hasFontAssetChanged
	bool ___m_hasFontAssetChanged_271;
	// TMPro.TMP_SubMeshUI[] TMPro.TextMeshProUGUI::m_subTextObjects
	TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29* ___m_subTextObjects_272;
	// System.Single TMPro.TextMeshProUGUI::m_previousLossyScaleY
	float ___m_previousLossyScaleY_273;
	// UnityEngine.Vector3[] TMPro.TextMeshProUGUI::m_RectTransformCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_RectTransformCorners_274;
	// UnityEngine.CanvasRenderer TMPro.TextMeshProUGUI::m_canvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_canvasRenderer_275;
	// UnityEngine.Canvas TMPro.TextMeshProUGUI::m_canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_canvas_276;
	// System.Single TMPro.TextMeshProUGUI::m_CanvasScaleFactor
	float ___m_CanvasScaleFactor_277;
	// System.Boolean TMPro.TextMeshProUGUI::m_isFirstAllocation
	bool ___m_isFirstAllocation_278;
	// System.Int32 TMPro.TextMeshProUGUI::m_max_characters
	int32_t ___m_max_characters_279;
	// UnityEngine.Material TMPro.TextMeshProUGUI::m_baseMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_baseMaterial_280;
	// System.Boolean TMPro.TextMeshProUGUI::m_isScrollRegionSet
	bool ___m_isScrollRegionSet_281;
	// UnityEngine.Vector4 TMPro.TextMeshProUGUI::m_maskOffset
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_maskOffset_282;
	// UnityEngine.Matrix4x4 TMPro.TextMeshProUGUI::m_EnvMapMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_EnvMapMatrix_283;
	// System.Boolean TMPro.TextMeshProUGUI::m_isRegisteredForEvents
	bool ___m_isRegisteredForEvents_284;
};

struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_StaticFields
{
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextMarker_285;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SetArraySizesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SetArraySizesMarker_286;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIMarker_287;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ParseMarkupTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseMarkupTextMarker_288;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_CharacterLookupMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CharacterLookupMarker_289;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleGPOSFeaturesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleGPOSFeaturesMarker_290;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_CalculateVerticesPositionMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CalculateVerticesPositionMarker_291;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ComputeTextMetricsMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeTextMetricsMarker_292;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleVisibleCharacterMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVisibleCharacterMarker_293;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleWhiteSpacesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleWhiteSpacesMarker_294;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleHorizontalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleHorizontalLineBreakingMarker_295;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleVerticalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVerticalLineBreakingMarker_296;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SaveGlyphVertexDataMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveGlyphVertexDataMarker_297;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ComputeCharacterAdvanceMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeCharacterAdvanceMarker_298;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleCarriageReturnMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleCarriageReturnMarker_299;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleLineTerminationMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleLineTerminationMarker_300;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SavePageInfoMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SavePageInfoMarker_301;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SaveProcessingStatesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveProcessingStatesMarker_302;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIMarker_303;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIIMarker_304;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.RaycastHit2D[]
struct RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7  : public RuntimeArray
{
	ALIGN_FIELD (8) RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA m_Items[1];

	inline RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA value)
	{
		m_Items[index] = value;
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_mCD6FC6BB14BA9EF1A4B314841EB4D40675E3C1DB_gshared (RuntimeObject* ___original0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Boolean>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tCC04FB1803AFE7880193CE87A1E4C0C010165DA6 List_1_GetEnumerator_m4710091EBAF4884CCC91C3A611A44EB349EAC34C_gshared (List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Boolean>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m20744EC386B8AC8AC63C85A74805C99501EB8F48_gshared (Enumerator_tCC04FB1803AFE7880193CE87A1E4C0C010165DA6* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Boolean>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Enumerator_get_Current_m7B066E79D57364B77E4BE2A2F567DDF33AF27799_gshared_inline (Enumerator_tCC04FB1803AFE7880193CE87A1E4C0C010165DA6* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Boolean>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m1D653C01DE3239887CB159B7FD92B3EC1361B51D_gshared (Enumerator_tCC04FB1803AFE7880193CE87A1E4C0C010165DA6* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m872899879F710B2E55BC157F35464F03877C8DFA_gshared (RuntimeObject* ___original0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent1, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m2A2DD50EC8EB54C91AF71E02DFD6969174D82B08_gshared (RuntimeObject* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method) ;
// TValue UnityEngine.InputSystem.InputValue::Get<UnityEngine.Vector2>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 InputValue_Get_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mBA56AD2906D3B6F2B87F3DE248CB62E1AA4D2293_gshared (InputValue_t4F053958518BDF6FD85C55F31B0597C9521B4231* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Boolean>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4573A12BFDA535926500C04E88A94540C95C395D_gshared_inline (List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.Queue`1<System.Object>::Dequeue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_Dequeue_m86B243DF9EC238316EC3D27DF3E0AB8DB0987E84_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Queue`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m1768ADA9855B7CDA14C9C42E098A287F1A39C3A2_gshared_inline (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<System.Object>::Enqueue(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_m5CB8CF3906F1289F92036F0973EC5BE3450402EF_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Boolean>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskCompletionSource_1__ctor_mBAB8D6EFEAD1AA6482D19D7CE639528BE66AF646_gshared (TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14* __this, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1<System.Boolean>::get_Task()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Task_1_t824317F4B958F7512E8F7300511752937A6C6043* TaskCompletionSource_1_get_Task_m068E06095F165AE266E15C328CBDA1543429EC66_gshared_inline (TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m6E2A5A8173E0CC524496D5155C737DF8FD10D0EB_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) ;
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Boolean>::TrySetResult(TResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskCompletionSource_1_TrySetResult_m3B4D8D267C1B26945C3C417057DEB50C56B689B1_gshared (TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14* __this, bool ___result0, const RuntimeMethod* method) ;
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Boolean>::TrySetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskCompletionSource_1_TrySetException_m439CB88F99980A2A50B1588B7ACD795274C8D7EE_gshared (TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14* __this, Exception_t* ___exception0, const RuntimeMethod* method) ;

// UnityEngine.Vector2 UnityEngine.Vector2::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_up_mF4D6DB00DEA7D055940165B85FFE1CEF6F7CD3AA_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m4EEB2FF3F4830390A53CE9B6076FB31801D65EED_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody2D::AddForce(UnityEngine.Vector2,UnityEngine.ForceMode2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_AddForce_mDD5CAE0137A42660C2D585B090D7E24496976E1B (Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___force0, int32_t ___mode1, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GameObject::CompareTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_CompareTag_m6378BE50D009A93D46036F74CC3F7E2ECB0636E5 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___tag0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<EnemyHP>()
inline EnemyHP_t4325F0CE402CF433AABB25D2AA0A6945A27C9F3E* Component_GetComponent_TisEnemyHP_t4325F0CE402CF433AABB25D2AA0A6945A27C9F3E_mA6F818C24BC65C9BF00BA6D5455FF93CDF093CCB (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  EnemyHP_t4325F0CE402CF433AABB25D2AA0A6945A27C9F3E* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void EnemyHP::Damage(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyHP_Damage_m2C942F022C5C60408806C2EA0315CC16CDFD6B43 (EnemyHP_t4325F0CE402CF433AABB25D2AA0A6945A27C9F3E* __this, float ___damage0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C (Delegate_t* ___a0, Delegate_t* ___b1, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116 (Delegate_t* ___source0, Delegate_t* ___value1, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.RectTransform>()
inline RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// T UnityEngine.GameObject::GetComponent<UnityEngine.UI.GridLayoutGroup>()
inline GridLayoutGroup_tEE9C68F88C13E6BD716BBD356D008ACFB63F1940* GameObject_GetComponent_TisGridLayoutGroup_tEE9C68F88C13E6BD716BBD356D008ACFB63F1940_mDF4A2E04045EFD3D063DDB65366582425319C960 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  GridLayoutGroup_tEE9C68F88C13E6BD716BBD356D008ACFB63F1940* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void UnityEngine.UI.GridLayoutGroup::set_cellSize(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridLayoutGroup_set_cellSize_m0A3FF07694BDBF52D973597978FC87B0941BE5F9 (GridLayoutGroup_tEE9C68F88C13E6BD716BBD356D008ACFB63F1940* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mCD6FC6BB14BA9EF1A4B314841EB4D40675E3C1DB_gshared)(___original0, method);
}
// T UnityEngine.GameObject::GetComponent<UnityEngine.Rigidbody2D>()
inline Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* GameObject_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m9E552507CE5EACBA6A9E0470BB5F15669379B956 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void UnityEngine.Rigidbody2D::set_isKinematic(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_set_isKinematic_m7C68AB4CFB6D301F0EDF0BFF66FB121ED3CC7853 (Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void EnemyController::ClearGameObject(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyController_ClearGameObject_m713983240709D7B36F60F1F33D698682D0A67E65 (EnemyController_tBB576F8CA41609F61E7D9AD27B14D49FB5A11C4A* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___cleanerObject0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<RowEnemy>::get_Count()
inline int32_t List_1_get_Count_m467023CDC012B63A6D7D3455058126A1229206A5_inline (List_1_t09D143B09E6E0E7D300E26051BA7D55EBF012469* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t09D143B09E6E0E7D300E26051BA7D55EBF012469*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Int32 MathParameters::MatchCollumnEnemy(System.Collections.Generic.List`1<RowEnemy>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MathParameters_MatchCollumnEnemy_m8CAD731221855CD27DDB3A39188A35F9ED0FA279 (List_1_t09D143B09E6E0E7D300E26051BA7D55EBF012469* ___army0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.UI.GridLayoutGroup::get_spacing()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GridLayoutGroup_get_spacing_m19BC15652BF18D051B0998C14F13DB83191F3E58_inline (GridLayoutGroup_tEE9C68F88C13E6BD716BBD356D008ACFB63F1940* __this, const RuntimeMethod* method) ;
// UnityEngine.RectOffset UnityEngine.UI.LayoutGroup::get_padding()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* LayoutGroup_get_padding_m91ABA3C588704717EDC82E72BA6D1B82711FE83C_inline (LayoutGroup_t32417833C700E77EDFA7C20034DAFD26604E05CE* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.RectOffset::get_bottom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RectOffset_get_bottom_mDF9C1EC125F94245D5532C34FCFB65BE0F2A9D0B (RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 MathParameters::MathSizeField(System.Int32,System.Int32,UnityEngine.Vector2,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 MathParameters_MathSizeField_m1D51DA5E499380A110406FC4B08A61325344348B (int32_t ___row0, int32_t ___collumn1, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___sizeenemy2, float ___spacining3, const RuntimeMethod* method) ;
// System.Void ModificateRectTransform::SetSize(UnityEngine.RectTransform,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModificateRectTransform_SetSize_m7254BE703F21042B201C1B68F07B85E0D619C562 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___trans0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___newSize1, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Transform::get_childCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void EnemyController/addScore::Invoke(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void addScore_Invoke_m6AD376B99A7A12257157EA85B19B7A481F464625_inline (addScore_tD00A6AAD847AA5BC2F408B3161000D4210BAE6E3* __this, int32_t ___score0, const RuntimeMethod* method) ;
// System.Void EnemyController::SetSizeField(System.Collections.Generic.List`1<RowEnemy>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyController_SetSizeField_m5538A40C749CDE30576AE676D5DBE5171C80A248 (EnemyController_tBB576F8CA41609F61E7D9AD27B14D49FB5A11C4A* __this, List_1_t09D143B09E6E0E7D300E26051BA7D55EBF012469* ___army0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::.ctor()
inline void List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// T System.Collections.Generic.List`1<RowEnemy>::get_Item(System.Int32)
inline RowEnemy_t2EF20FA4770986CA2A4FF42842E44F9498C60045* List_1_get_Item_mF2F931E0D11021A019B6314239D394E95EFF6F49 (List_1_t09D143B09E6E0E7D300E26051BA7D55EBF012469* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  RowEnemy_t2EF20FA4770986CA2A4FF42842E44F9498C60045* (*) (List_1_t09D143B09E6E0E7D300E26051BA7D55EBF012469*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Boolean>::GetEnumerator()
inline Enumerator_tCC04FB1803AFE7880193CE87A1E4C0C010165DA6 List_1_GetEnumerator_m4710091EBAF4884CCC91C3A611A44EB349EAC34C (List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tCC04FB1803AFE7880193CE87A1E4C0C010165DA6 (*) (List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A*, const RuntimeMethod*))List_1_GetEnumerator_m4710091EBAF4884CCC91C3A611A44EB349EAC34C_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<System.Boolean>::Dispose()
inline void Enumerator_Dispose_m20744EC386B8AC8AC63C85A74805C99501EB8F48 (Enumerator_tCC04FB1803AFE7880193CE87A1E4C0C010165DA6* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tCC04FB1803AFE7880193CE87A1E4C0C010165DA6*, const RuntimeMethod*))Enumerator_Dispose_m20744EC386B8AC8AC63C85A74805C99501EB8F48_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<System.Boolean>::get_Current()
inline bool Enumerator_get_Current_m7B066E79D57364B77E4BE2A2F567DDF33AF27799_inline (Enumerator_tCC04FB1803AFE7880193CE87A1E4C0C010165DA6* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tCC04FB1803AFE7880193CE87A1E4C0C010165DA6*, const RuntimeMethod*))Enumerator_get_Current_m7B066E79D57364B77E4BE2A2F567DDF33AF27799_gshared_inline)(__this, method);
}
// System.Void EnemyController::CreateGameObject(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyController_CreateGameObject_m9ACAFB86332ECFEA63E3C0E5CC732F5C4E4FCF0A (EnemyController_tBB576F8CA41609F61E7D9AD27B14D49FB5A11C4A* __this, bool ___last0, const RuntimeMethod* method) ;
// System.Void EnemyController::CreateEmpty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyController_CreateEmpty_m521572066871A67F8F59EB181656745C96734919 (EnemyController_tBB576F8CA41609F61E7D9AD27B14D49FB5A11C4A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Boolean>::MoveNext()
inline bool Enumerator_MoveNext_m1D653C01DE3239887CB159B7FD92B3EC1361B51D (Enumerator_tCC04FB1803AFE7880193CE87A1E4C0C010165DA6* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tCC04FB1803AFE7880193CE87A1E4C0C010165DA6*, const RuntimeMethod*))Enumerator_MoveNext_m1D653C01DE3239887CB159B7FD92B3EC1361B51D_gshared)(__this, method);
}
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.Options.VectorOptions> DG.Tweening.ShortcutExtensions::DOMove(UnityEngine.Transform,UnityEngine.Vector3,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* ShortcutExtensions_DOMove_m32C4BD3E44498A3C651F30108F0D3402416B868B (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___target0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___endValue1, float ___duration2, bool ___snapping3, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<UnityEngine.GameObject>::Remove(T)
inline bool List_1_Remove_mCCE85D4D5326536C4B214C73D07030F4CCD18485 (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared)(__this, ___item0, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Add(T)
inline void List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Count()
inline int32_t List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void DG.Tweening.DOTween::Clear(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOTween_Clear_m00E6CE855B140B49066A2340F6E2877D203E8F35 (bool ___destroy0, const RuntimeMethod* method) ;
// System.Void EnemyController::RemovePositionArmy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyController_RemovePositionArmy_m041084DF14C8C8769A2C748B84BE48014B365D2A (EnemyController_tBB576F8CA41609F61E7D9AD27B14D49FB5A11C4A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<ArmyEnemy>::get_Item(System.Int32)
inline ArmyEnemy_t5291EA653FD944478FE7F0532725391126EFAC95* List_1_get_Item_m89A66076DE282BA1AC99038CB2E9825E24AA9B3A (List_1_tE8332A13AE0F0FF8326595223E3E738FCB53912C* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  ArmyEnemy_t5291EA653FD944478FE7F0532725391126EFAC95* (*) (List_1_tE8332A13AE0F0FF8326595223E3E738FCB53912C*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Boolean System.Collections.Generic.List`1<ArmyEnemy>::Remove(T)
inline bool List_1_Remove_m520E9B7A0934E12858F175443D6FC696A45987C2 (List_1_tE8332A13AE0F0FF8326595223E3E738FCB53912C* __this, ArmyEnemy_t5291EA653FD944478FE7F0532725391126EFAC95* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tE8332A13AE0F0FF8326595223E3E738FCB53912C*, ArmyEnemy_t5291EA653FD944478FE7F0532725391126EFAC95*, const RuntimeMethod*))List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared)(__this, ___item0, method);
}
// System.Int32 System.Collections.Generic.List`1<ArmyEnemy>::get_Count()
inline int32_t List_1_get_Count_m41969899D3257B63DFB0E09C78A18D1869EC180C_inline (List_1_tE8332A13AE0F0FF8326595223E3E738FCB53912C* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tE8332A13AE0F0FF8326595223E3E738FCB53912C*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void EnemyController::CreateArmyEnemy(System.Collections.Generic.List`1<RowEnemy>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyController_CreateArmyEnemy_mC25A6E81980215C9F753F9BB5B14B3437324AF0E (EnemyController_tBB576F8CA41609F61E7D9AD27B14D49FB5A11C4A* __this, List_1_t09D143B09E6E0E7D300E26051BA7D55EBF012469* ___enemysPoss0, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Transform)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent1, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m872899879F710B2E55BC157F35464F03877C8DFA_gshared)(___original0, ___parent1, method);
}
// T UnityEngine.GameObject::GetComponent<EnemyHP>()
inline EnemyHP_t4325F0CE402CF433AABB25D2AA0A6945A27C9F3E* GameObject_GetComponent_TisEnemyHP_t4325F0CE402CF433AABB25D2AA0A6945A27C9F3E_mD8D79A38B1B77044341029CE43038AEBA28284DC (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  EnemyHP_t4325F0CE402CF433AABB25D2AA0A6945A27C9F3E* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void EnemyHP::SetController(EnemyController)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EnemyHP_SetController_mEF07A9B168621448580464807FE37740F43727AA_inline (EnemyHP_t4325F0CE402CF433AABB25D2AA0A6945A27C9F3E* __this, EnemyController_tBB576F8CA41609F61E7D9AD27B14D49FB5A11C4A* ___controller0, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30 (String_t* ___format0, RuntimeObject* ___arg01, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void EnemyController::Fire()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyController_Fire_m12D4F33B837FC525D29FD45B32C8370837FC101C (EnemyController_tBB576F8CA41609F61E7D9AD27B14D49FB5A11C4A* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8 (int32_t ___minInclusive0, int32_t ___maxExclusive1, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Item(System.Int32)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979 (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Collections.IEnumerator EnemyController::FireEnemy(UnityEngine.Transform,UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* EnemyController_FireEnemy_m39870AE872C8A3825CC745460AE47850CD933AE2 (EnemyController_tBB576F8CA41609F61E7D9AD27B14D49FB5A11C4A* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___enemy0, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___bullet1, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// System.Void EnemyController/damage::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void damage_Invoke_mCC093F6C7897ABF8083B1FE67D2E92E07DD63A96_inline (damage_tC5C439FFD24395BBE32C1A980C0FD6CAB0EEA247* __this, const RuntimeMethod* method) ;
// System.Void EnemyController/<FireEnemy>d__46::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFireEnemyU3Ed__46__ctor_m896646E0E0274CBEAC2D3230152D163C1D49D7FD (U3CFireEnemyU3Ed__46_t176C607D294F550F05A90680A12394419CAC8019* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* __this, float ___seconds0, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject EnemyHP::UpEnemy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* EnemyHP_UpEnemy_m4FBA25E187BFBB53D662CDB1969F1F78FFB4AEB1 (EnemyHP_t4325F0CE402CF433AABB25D2AA0A6945A27C9F3E* __this, const RuntimeMethod* method) ;
// System.Void EnemyController::KillEnemy(UnityEngine.GameObject,System.Int32,UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyController_KillEnemy_m6F0D7F33EFF24F9031008F5CB4E30A6569A2D189 (EnemyController_tBB576F8CA41609F61E7D9AD27B14D49FB5A11C4A* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___body0, int32_t ___score1, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___nextfire2, const RuntimeMethod* method) ;
// System.Void EnemyController::StartFire()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyController_StartFire_m89BF6A96CCE9AFC70325052AE4E5E3BDED5AAE25 (EnemyController_tBB576F8CA41609F61E7D9AD27B14D49FB5A11C4A* __this, const RuntimeMethod* method) ;
// System.Void EnemyHP::DestroyEnemy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyHP_DestroyEnemy_mAC783EC382DE5835BF392D207AE2E043711E0216 (EnemyHP_t4325F0CE402CF433AABB25D2AA0A6945A27C9F3E* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) ;
// UnityEngine.RaycastHit2D[] UnityEngine.Physics2D::RaycastAll(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* Physics2D_RaycastAll_m31A665A3ED5DF27710705A28C660E698DCF163C9 (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___origin0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___direction1, const RuntimeMethod* method) ;
// UnityEngine.Collider2D UnityEngine.RaycastHit2D::get_collider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* RaycastHit2D_get_collider_mB56DFCD16B708852EEBDBB490BC8665DBF7487FD (RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Component::CompareTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Component_CompareTag_mE6F8897E84F12DF12D302FFC4D58204D51096FC5 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, String_t* ___tag0, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.RaycastHit2D::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* RaycastHit2D_get_transform_mA5E3F8DC9914E79D3C9F6F3F2515B49EEBB4564A (RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA* __this, const RuntimeMethod* method) ;
// System.Void EnemyController::DamagePlayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyController_DamagePlayer_m103D25CDDD6CD5D59B398D5D83C3684304D93957 (EnemyController_tBB576F8CA41609F61E7D9AD27B14D49FB5A11C4A* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator GunController::Reload()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GunController_Reload_mB8A5BD3C146F1F75F0C865F931EF7AAC4EA4702B (GunController_t7AFE6A92E37B9C51D7A5860FB2A93194D28E71D9* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline (const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m2A2DD50EC8EB54C91AF71E02DFD6969174D82B08_gshared)(___original0, ___position1, ___rotation2, method);
}
// System.Void GunController/<Reload>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReloadU3Ed__6__ctor_m01F9FDB94A2009F4612858DFEE7498FCBA1AE808 (U3CReloadU3Ed__6_t628014D211AF69CCF85ED6CA98A6C3B12DFA04F8* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void GunController::Fire()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GunController_Fire_mBD600A2F51289DE03F932FCCCB63F0AEA4C8C9B0 (GunController_t7AFE6A92E37B9C51D7A5860FB2A93194D28E71D9* __this, const RuntimeMethod* method) ;
// TValue UnityEngine.InputSystem.InputValue::Get<UnityEngine.Vector2>()
inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 InputValue_Get_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mBA56AD2906D3B6F2B87F3DE248CB62E1AA4D2293 (InputValue_t4F053958518BDF6FD85C55F31B0597C9521B4231* __this, const RuntimeMethod* method)
{
	return ((  Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 (*) (InputValue_t4F053958518BDF6FD85C55F31B0597C9521B4231*, const RuntimeMethod*))InputValue_Get_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mBA56AD2906D3B6F2B87F3DE248CB62E1AA4D2293_gshared)(__this, method);
}
// System.Void PlayerController::RotatePlayer(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_RotatePlayer_m51FE0D6CE0EB4A18B90139BE981D21BFD17BE309 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___directionmoving0, const RuntimeMethod* method) ;
// System.Void ManagerScore::RestartGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManagerScore_RestartGame_mB170ABD83FD254DBD36A3BB953170A763BC4527B (ManagerScore_tEA2640F9E15FCE4A35A098CE608EAAB30B03341B* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector2::op_Equality(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_op_Equality_m5447BF12C18339431AB8AF02FA463C543D88D463_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___lhs0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rhs1, const RuntimeMethod* method) ;
// System.Void PlayerController::Move(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_Move_m36B0423FB418CAB1625366E66BA566D26A8AE11D (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___directionmoving0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void EnemyController/addScore::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void addScore__ctor_mCBCD5A3A8C93CFEFD81ECDEB6C766FCF27235FBC (addScore_tD00A6AAD847AA5BC2F408B3161000D4210BAE6E3* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void EnemyController::add_EnemyKill(EnemyController/addScore)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyController_add_EnemyKill_m1719A10ACBBF03FB713C1A64EE3261B68C77449A (EnemyController_tBB576F8CA41609F61E7D9AD27B14D49FB5A11C4A* __this, addScore_tD00A6AAD847AA5BC2F408B3161000D4210BAE6E3* ___value0, const RuntimeMethod* method) ;
// System.Void EnemyController/damage::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void damage__ctor_m3967878663873E7F7305125C87BA76245AB9AE8C (damage_tC5C439FFD24395BBE32C1A980C0FD6CAB0EEA247* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void EnemyController::add_PlayerDamage(EnemyController/damage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyController_add_PlayerDamage_mBBA28C2758A899FD9C9A6A52405FC7869B2441D4 (EnemyController_tBB576F8CA41609F61E7D9AD27B14D49FB5A11C4A* __this, damage_tC5C439FFD24395BBE32C1A980C0FD6CAB0EEA247* ___value0, const RuntimeMethod* method) ;
// System.Void EnemyController::add_NextVolna(EnemyController/addScore)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyController_add_NextVolna_m13BB15A753B75E86CFC6F42F52FB635E0FF98B42 (EnemyController_tBB576F8CA41609F61E7D9AD27B14D49FB5A11C4A* __this, addScore_tD00A6AAD847AA5BC2F408B3161000D4210BAE6E3* ___value0, const RuntimeMethod* method) ;
// System.Void ManagerScore::Finish(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManagerScore_Finish_m67EFA43C43EBB7E1A195764195DCF241C3FF6F7F (ManagerScore_tEA2640F9E15FCE4A35A098CE608EAAB30B03341B* __this, bool ___win0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator ManagerScore::SeeMasage(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ManagerScore_SeeMasage_m0D32E2159DD45773393D1C4D2A512F82F3704DC7 (ManagerScore_tEA2640F9E15FCE4A35A098CE608EAAB30B03341B* __this, int32_t ___volnaa0, const RuntimeMethod* method) ;
// System.Void EnemyController::LosePlayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyController_LosePlayer_m9EE5D93A98D32E7812B6F70C459ABAF33D8C70DE (EnemyController_tBB576F8CA41609F61E7D9AD27B14D49FB5A11C4A* __this, const RuntimeMethod* method) ;
// System.Void GunController::Restart(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GunController_Restart_mF72A215A651548928D5F29E13ACC3FBDE5947122_inline (GunController_t7AFE6A92E37B9C51D7A5860FB2A93194D28E71D9* __this, bool ___znach0, const RuntimeMethod* method) ;
// System.Void ManagerScore/<SeeMasage>d__29::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSeeMasageU3Ed__29__ctor_m89677A97569A8660F0F3781665B3EB46A747149E (U3CSeeMasageU3Ed__29_t90E5209DABAE5C4686ACF00479EA80A8EED8686B* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void MovingBackground::StartMoving()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MovingBackground_StartMoving_m334E58D7DF7FABA5FD939594D53602326CD73E3D (MovingBackground_tD48A0A7758B27C9D87C59CAEE3D4BDD2E6F53EDC* __this, const RuntimeMethod* method) ;
// System.Void ManagerScore::AddScore(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManagerScore_AddScore_mF2EA50B5706C32A0BF0D3E5F584ABFDA4C2A856F (ManagerScore_tEA2640F9E15FCE4A35A098CE608EAAB30B03341B* __this, int32_t ___score0, const RuntimeMethod* method) ;
// System.Void ManagerScore::CreateIconHP(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManagerScore_CreateIconHP_mDAAF6B3034CCEB7FA55F4C7700476E7B31876FA4 (ManagerScore_tEA2640F9E15FCE4A35A098CE608EAAB30B03341B* __this, int32_t ___hp0, const RuntimeMethod* method) ;
// System.Void EnemyController::StartAttack(System.Collections.Generic.List`1<ArmyEnemy>,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyController_StartAttack_m25140CD4BD71B9453E07C82C054D26DF89DE6DAB (EnemyController_tBB576F8CA41609F61E7D9AD27B14D49FB5A11C4A* __this, List_1_tE8332A13AE0F0FF8326595223E3E738FCB53912C* ___armyEnemies0, float ___speedattack1, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<TMPro.TextMeshProUGUI>()
inline TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* GameObject_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_mBDBF977A8C7734F6EDD83FC65C6FDDE74427611E (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Color,UnityEngine.Color,DG.Tweening.Plugins.Options.ColorOptions> DG.Tweening.DOTweenModuleUI::DOFade(UnityEngine.UI.Graphic,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_tC0593021331EF2AF46590E2184F512C0D38FD4C3* DOTweenModuleUI_DOFade_m3B026C515EBD5B21A4F0062F72003DEA9E6A1306 (Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___target0, float ___endValue1, float ___duration2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<RowEnemy>::GetEnumerator()
inline Enumerator_t4C73AA8AE76FF12165CFE3487C91A2B65158873F List_1_GetEnumerator_m11FE8D8E0C66BD2FF01A44DEFB6DFACEFC22C7D6 (List_1_t09D143B09E6E0E7D300E26051BA7D55EBF012469* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t4C73AA8AE76FF12165CFE3487C91A2B65158873F (*) (List_1_t09D143B09E6E0E7D300E26051BA7D55EBF012469*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<RowEnemy>::Dispose()
inline void Enumerator_Dispose_m9EE5F0139D318AEF5BAB6719C9B3F5D5D0A38E5C (Enumerator_t4C73AA8AE76FF12165CFE3487C91A2B65158873F* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t4C73AA8AE76FF12165CFE3487C91A2B65158873F*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<RowEnemy>::get_Current()
inline RowEnemy_t2EF20FA4770986CA2A4FF42842E44F9498C60045* Enumerator_get_Current_mF2C536319871A057EF46DDB6BEE424BA1325EA9F_inline (Enumerator_t4C73AA8AE76FF12165CFE3487C91A2B65158873F* __this, const RuntimeMethod* method)
{
	return ((  RowEnemy_t2EF20FA4770986CA2A4FF42842E44F9498C60045* (*) (Enumerator_t4C73AA8AE76FF12165CFE3487C91A2B65158873F*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<System.Boolean>::get_Count()
inline int32_t List_1_get_Count_m4573A12BFDA535926500C04E88A94540C95C395D_inline (List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A*, const RuntimeMethod*))List_1_get_Count_m4573A12BFDA535926500C04E88A94540C95C395D_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<RowEnemy>::MoveNext()
inline bool Enumerator_MoveNext_m5733CB09191684FB6786BFA75ABF6978F39EE823 (Enumerator_t4C73AA8AE76FF12165CFE3487C91A2B65158873F* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t4C73AA8AE76FF12165CFE3487C91A2B65158873F*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::set_pivot(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_pivot_m79D0177D383D432A93C2615F1932B739B1C6E146 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::set_anchorMin(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_anchorMin_m931442ABE3368D6D4309F43DF1D64AB64B0F52E3 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::set_anchorMax(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_anchorMax_m52829ABEDD229ABD3DA20BCA676FA1DCA4A39B7D (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Rect UnityEngine.RectTransform::get_rect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Rect::get_size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Rect_get_size_mFB990FFC0FE0152179C8C74A59E4AC258CB44267 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.RectTransform::get_pivot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 RectTransform_get_pivot_mA8334AF05AA7FF09A173A2430F2BB9E85E5CBFFF (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Subtraction(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Subtraction_m664419831773D5BBF06D9DE4E515F6409B2F92B8_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.RectTransform::get_offsetMin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 RectTransform_get_offsetMin_mD02BE5256DADAF02CEEF99214C4E80478CD5287B (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::set_offsetMin(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_offsetMin_m07F38B4105C7CA9CC9FBDC9ED0DB008602880AB9 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.RectTransform::get_offsetMax()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 RectTransform_get_offsetMax_m6A51C62A2C69780EFD879D3CFE4EE2CBF4AD3D73 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Addition(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Addition_m704B5B98EAFE885978381E21B7F89D9DF83C2A60_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::set_offsetMax(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_offsetMax_m5514D09D86516F2C0E25FA6D11A3A4274D3D002D (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m57EE8D709A93B2B0FF8D499FA2947B1D61CB1FD6_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, float ___t2, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_left()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_left_m9D9A16C5D268435428ADF448F6B5E8C1EC3A57B4_inline (const RuntimeMethod* method) ;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Quaternion,UnityEngine.Vector3,DG.Tweening.Plugins.Options.QuaternionOptions> DG.Tweening.ShortcutExtensions::DORotate(UnityEngine.Transform,UnityEngine.Vector3,System.Single,DG.Tweening.RotateMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_t392C54729BB024F5802F8E205C583653C4E886E3* ShortcutExtensions_DORotate_m8395F402E150567DABF9EB86CF1846C7A4D32E03 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___target0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___endValue1, float ___duration2, int32_t ___mode3, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_right()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_right_mCE2D0142663361ED4B48C36873786986D25A6E0A_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.ScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF (ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9 (RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4 (RuntimeObject* ___obj0, bool* ___lockTaken1, const RuntimeMethod* method) ;
// T System.Collections.Generic.Queue`1<System.Action>::Dequeue()
inline Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* Queue_1_Dequeue_m67206C56B5CF9749EFAEF48FAA0D82E2AD8D960E (Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA* __this, const RuntimeMethod* method)
{
	return ((  Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* (*) (Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA*, const RuntimeMethod*))Queue_1_Dequeue_m86B243DF9EC238316EC3D27DF3E0AB8DB0987E84_gshared)(__this, method);
}
// System.Void System.Action::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Queue`1<System.Action>::get_Count()
inline int32_t Queue_1_get_Count_mB986A63C8D68BD8606522BF24176D36503CFD9C3_inline (Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA*, const RuntimeMethod*))Queue_1_get_Count_m1768ADA9855B7CDA14C9C42E098A287F1A39C3A2_gshared_inline)(__this, method);
}
// System.Void UnityMainThreadDispatcher/<>c__DisplayClass2_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0__ctor_m8A970E6582E1302186F63B9E37705398F45BA973 (U3CU3Ec__DisplayClass2_0_t112364A02F40FBC0B3E8199966A6E0BC48A1BC60* __this, const RuntimeMethod* method) ;
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<System.Action>::Enqueue(T)
inline void Queue_1_Enqueue_m9B59C0455EACB768D8D74CA1F57E003C91F6E3D4 (Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___item0, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA*, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*, const RuntimeMethod*))Queue_1_Enqueue_m5CB8CF3906F1289F92036F0973EC5BE3450402EF_gshared)(__this, ___item0, method);
}
// System.Collections.IEnumerator UnityMainThreadDispatcher::ActionWrapper(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnityMainThreadDispatcher_ActionWrapper_mA9140D8E54337437EAA9E9E3EC19EEDBD0503EF7 (UnityMainThreadDispatcher_tCBFCAE330E237A494F8AD7303087FCEB5A9B03EE* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___a0, const RuntimeMethod* method) ;
// System.Void UnityMainThreadDispatcher::Enqueue(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMainThreadDispatcher_Enqueue_m3DC7FEF4D9722834BC491A5C13EF1249BF757480 (UnityMainThreadDispatcher_tCBFCAE330E237A494F8AD7303087FCEB5A9B03EE* __this, RuntimeObject* ___action0, const RuntimeMethod* method) ;
// System.Void UnityMainThreadDispatcher/<>c__DisplayClass4_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0__ctor_m70225B853DFA571BD40B2C66E4C5891332F22581 (U3CU3Ec__DisplayClass4_0_t41FED6820AB073CB7C64AB00BD3526AD7C543A9D* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Boolean>::.ctor()
inline void TaskCompletionSource_1__ctor_mBAB8D6EFEAD1AA6482D19D7CE639528BE66AF646 (TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14* __this, const RuntimeMethod* method)
{
	((  void (*) (TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14*, const RuntimeMethod*))TaskCompletionSource_1__ctor_mBAB8D6EFEAD1AA6482D19D7CE639528BE66AF646_gshared)(__this, method);
}
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1<System.Boolean>::get_Task()
inline Task_1_t824317F4B958F7512E8F7300511752937A6C6043* TaskCompletionSource_1_get_Task_m068E06095F165AE266E15C328CBDA1543429EC66_inline (TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14* __this, const RuntimeMethod* method)
{
	return ((  Task_1_t824317F4B958F7512E8F7300511752937A6C6043* (*) (TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14*, const RuntimeMethod*))TaskCompletionSource_1_get_Task_m068E06095F165AE266E15C328CBDA1543429EC66_gshared_inline)(__this, method);
}
// System.Void UnityMainThreadDispatcher/<ActionWrapper>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CActionWrapperU3Ed__5__ctor_m9BDFC74813CC5245F648664F8DF0E750728D2DAB (U3CActionWrapperU3Ed__5_tF23089DC082690C12960166C6E45C869BF9939E0* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Boolean UnityMainThreadDispatcher::Exists()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityMainThreadDispatcher_Exists_m4A3738101EECAF49321FACD4314AB0835141892F (const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m303AA1C4DC810349F285B4809E426CBBA8F834F9 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___target0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<System.Action>::.ctor()
inline void Queue_1__ctor_mCB1D86FC102A8C3B82A02702CAEDAE815FE04272 (Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA* __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA*, const RuntimeMethod*))Queue_1__ctor_m6E2A5A8173E0CC524496D5155C737DF8FD10D0EB_gshared)(__this, method);
}
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Boolean>::TrySetResult(TResult)
inline bool TaskCompletionSource_1_TrySetResult_m3B4D8D267C1B26945C3C417057DEB50C56B689B1 (TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14* __this, bool ___result0, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14*, bool, const RuntimeMethod*))TaskCompletionSource_1_TrySetResult_m3B4D8D267C1B26945C3C417057DEB50C56B689B1_gshared)(__this, ___result0, method);
}
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Boolean>::TrySetException(System.Exception)
inline bool TaskCompletionSource_1_TrySetException_m439CB88F99980A2A50B1588B7ACD795274C8D7EE (TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14* __this, Exception_t* ___exception0, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14*, Exception_t*, const RuntimeMethod*))TaskCompletionSource_1_TrySetException_m439CB88F99980A2A50B1588B7ACD795274C8D7EE_gshared)(__this, ___exception0, method);
}
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline (float ___value0, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void BulletController::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BulletController_OnEnable_m35EC0F7DCF54D2416B3A832A7EFDE20896B31F7F (BulletController_t68B005C1CEB960B7DE01B7BB76A976624E9858A5* __this, const RuntimeMethod* method) 
{
	{
		// _rb.AddForce(Vector2.up * force, ForceMode2D.Impulse);
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_0 = __this->____rb_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = Vector2_get_up_mF4D6DB00DEA7D055940165B85FFE1CEF6F7CD3AA_inline(NULL);
		float L_2 = __this->___force_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = Vector2_op_Multiply_m4EEB2FF3F4830390A53CE9B6076FB31801D65EED_inline(L_1, L_2, NULL);
		NullCheck(L_0);
		Rigidbody2D_AddForce_mDD5CAE0137A42660C2D585B090D7E24496976E1B(L_0, L_3, 1, NULL);
		// }
		return;
	}
}
// System.Void BulletController::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BulletController_OnTriggerEnter2D_m12CC271050D73F1098DFE8094F77511C3B47B362 (BulletController_t68B005C1CEB960B7DE01B7BB76A976624E9858A5* __this, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___collision0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisEnemyHP_t4325F0CE402CF433AABB25D2AA0A6945A27C9F3E_mA6F818C24BC65C9BF00BA6D5455FF93CDF093CCB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDC8C7F445CAD9C1F2B4B8895597B9BAC7462F50C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collision.gameObject.CompareTag("DeleteBullet"))
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_0 = ___collision0;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = GameObject_CompareTag_m6378BE50D009A93D46036F74CC3F7E2ECB0636E5(L_1, _stringLiteralDC8C7F445CAD9C1F2B4B8895597B9BAC7462F50C, NULL);
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		// Destroy(this.gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_3, NULL);
	}

IL_001d:
	{
		// if (collision.gameObject.CompareTag("Enemy"))
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_4 = ___collision0;
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_4, NULL);
		NullCheck(L_5);
		bool L_6;
		L_6 = GameObject_CompareTag_m6378BE50D009A93D46036F74CC3F7E2ECB0636E5(L_5, _stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7, NULL);
		if (!L_6)
		{
			goto IL_004b;
		}
	}
	{
		// collision.GetComponent<EnemyHP>().Damage(_damage);
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_7 = ___collision0;
		NullCheck(L_7);
		EnemyHP_t4325F0CE402CF433AABB25D2AA0A6945A27C9F3E* L_8;
		L_8 = Component_GetComponent_TisEnemyHP_t4325F0CE402CF433AABB25D2AA0A6945A27C9F3E_mA6F818C24BC65C9BF00BA6D5455FF93CDF093CCB(L_7, Component_GetComponent_TisEnemyHP_t4325F0CE402CF433AABB25D2AA0A6945A27C9F3E_mA6F818C24BC65C9BF00BA6D5455FF93CDF093CCB_RuntimeMethod_var);
		float L_9 = __this->____damage_6;
		NullCheck(L_8);
		EnemyHP_Damage_m2C942F022C5C60408806C2EA0315CC16CDFD6B43(L_8, L_9, NULL);
		// Destroy(this.gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
		L_10 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_10, NULL);
	}

IL_004b:
	{
		// }
		return;
	}
}
// System.Void BulletController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BulletController__ctor_mE8F501E410EA15E4ACA6706043D2A820186FAD0D (BulletController_t68B005C1CEB960B7DE01B7BB76A976624E9858A5* __this, const RuntimeMethod* method) 
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
// System.Void EnemyController::add_PlayerDamage(EnemyController/damage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyController_add_PlayerDamage_mBBA28C2758A899FD9C9A6A52405FC7869B2441D4 (EnemyController_tBB576F8CA41609F61E7D9AD27B14D49FB5A11C4A* __this, damage_tC5C439FFD24395BBE32C1A980C0FD6CAB0EEA247* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&damage_tC5C439FFD24395BBE32C1A980C0FD6CAB0EEA247_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	damage_tC5C439FFD24395BBE32C1A980C0FD6CAB0EEA247* V_0 = NULL;
	damage_tC5C439FFD24395BBE32C1A980C0FD6CAB0EEA247* V_1 = NULL;
	damage_tC5C439FFD24395BBE32C1A980C0FD6CAB0EEA247* V_2 = NULL;
	{
		damage_tC5C439FFD24395BBE32C1A980C0FD6CAB0EEA247* L_0 = __this->___PlayerDamage_16;
		V_0 = L_0;
	}

IL_0007:
	{
		damage_tC5C439FFD24395BBE32C1A980C0FD6CAB0EEA247* L_1 = V_0;
		V_1 = L_1;
		damage_tC5C439FFD24395BBE32C1A980C0FD6CAB0EEA247* L_2 = V_1;
		damage_tC5C439FFD24395BBE32C1A980C0FD6CAB0EEA247* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		V_2 = ((damage_tC5C439FFD24395BBE32C1A980C0FD6CAB0EEA247*)CastclassSealed((RuntimeObject*)L_4, damage_tC5C439FFD24395BBE32C1A980C0FD6CAB0EEA247_il2cpp_TypeInfo_var));
		damage_tC5C439FFD24395BBE32C1A980C0FD6CAB0EEA247** L_5 = (&__this->___PlayerDamage_16);
		damage_tC5C439FFD24395BBE32C1A980C0FD6CAB0EEA247* L_6 = V_2;
		damage_tC5C439FFD24395BBE32C1A980C0FD6CAB0EEA247* L_7 = V_1;
		damage_tC5C439FFD24395BBE32C1A980C0FD6CAB0EEA247* L_8;
		L_8 = InterlockedCompareExchangeImpl<damage_tC5C439FFD24395BBE32C1A980C0FD6CAB0EEA247*>(L_5, L_6, L_7);
		V_0 = L_8;
		damage_tC5C439FFD24395BBE32C1A980C0FD6CAB0EEA247* L_9 = V_0;
		damage_tC5C439FFD24395BBE32C1A980C0FD6CAB0EEA247* L_10 = V_1;
		if ((!(((RuntimeObject*)(damage_tC5C439FFD24395BBE32C1A980C0FD6CAB0EEA247*)L_9) == ((RuntimeObject*)(damage_tC5C439FFD24395BBE32C1A980C0FD6CAB0EEA247*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void EnemyController::remove_PlayerDamage(EnemyController/damage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyController_remove_PlayerDamage_mC8A2B29C5C6B34CBB2C42D98959D562096C56FDE (EnemyController_tBB576F8CA41609F61E7D9AD27B14D49FB5A11C4A* __this, damage_tC5C439FFD24395BBE32C1A980C0FD6CAB0EEA247* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&damage_tC5C439FFD24395BBE32C1A980C0FD6CAB0EEA247_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	damage_tC5C439FFD24395BBE32C1A980C0FD6CAB0EEA247* V_0 = NULL;
	damage_tC5C439FFD24395BBE32C1A980C0FD6CAB0EEA247* V_1 = NULL;
	damage_tC5C439FFD24395BBE32C1A980C0FD6CAB0EEA247* V_2 = NULL;
	{
		damage_tC5C439FFD24395BBE32C1A980C0FD6CAB0EEA247* L_0 = __this->___PlayerDamage_16;
		V_0 = L_0;
	}

IL_0007:
	{
		damage_tC5C439FFD24395BBE32C1A980C0FD6CAB0EEA247* L_1 = V_0;
		V_1 = L_1;
		damage_tC5C439FFD24395BBE32C1A980C0FD6CAB0EEA247* L_2 = V_1;
		damage_tC5C439FFD24395BBE32C1A980C0FD6CAB0EEA247* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		V_2 = ((damage_tC5C439FFD24395BBE32C1A980C0FD6CAB0EEA247*)CastclassSealed((RuntimeObject*)L_4, damage_tC5C439FFD24395BBE32C1A980C0FD6CAB0EEA247_il2cpp_TypeInfo_var));
		damage_tC5C439FFD24395BBE32C1A980C0FD6CAB0EEA247** L_5 = (&__this->___PlayerDamage_16);
		damage_tC5C439FFD24395BBE32C1A980C0FD6CAB0EEA247* L_6 = V_2;
		damage_tC5C439FFD24395BBE32C1A980C0FD6CAB0EEA247* L_7 = V_1;
		damage_tC5C439FFD24395BBE32C1A980C0FD6CAB0EEA247* L_8;
		L_8 = InterlockedCompareExchangeImpl<damage_tC5C439FFD24395BBE32C1A980C0FD6CAB0EEA247*>(L_5, L_6, L_7);
		V_0 = L_8;
		damage_tC5C439FFD24395BBE32C1A980C0FD6CAB0EEA247* L_9 = V_0;
		damage_tC5C439FFD24395BBE32C1A980C0FD6CAB0EEA247* L_10 = V_1;
		if ((!(((RuntimeObject*)(damage_tC5C439FFD24395BBE32C1A980C0FD6CAB0EEA247*)L_9) == ((RuntimeObject*)(damage_tC5C439FFD24395BBE32C1A980C0FD6CAB0EEA247*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void EnemyController::add_NextVolna(EnemyController/addScore)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyController_add_NextVolna_m13BB15A753B75E86CFC6F42F52FB635E0FF98B42 (EnemyController_tBB576F8CA41609F61E7D9AD27B14D49FB5A11C4A* __this, addScore_tD00A6AAD847AA5BC2F408B3161000D4210BAE6E3* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&addScore_tD00A6AAD847AA5BC2F408B3161000D4210BAE6E3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	addScore_tD00A6AAD847AA5BC2F408B3161000D4210BAE6E3* V_0 = NULL;
	addScore_tD00A6AAD847AA5BC2F408B3161000D4210BAE6E3* V_1 = NULL;
	addScore_tD00A6AAD847AA5BC2F408B3161000D4210BAE6E3* V_2 = NULL;
	{
		addScore_tD00A6AAD847AA5BC2F408B3161000D4210BAE6E3* L_0 = __this->___NextVolna_17;
		V_0 = L_0;
	}

IL_0007:
	{
		addScore_tD00A6AAD847AA5BC2F408B3161000D4210BAE6E3* L_1 = V_0;
		V_1 = L_1;
		addScore_tD00A6AAD847AA5BC2F408B3161000D4210BAE6E3* L_2 = V_1;
		addScore_tD00A6AAD847AA5BC2F408B3161000D4210BAE6E3* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		V_2 = ((addScore_tD00A6AAD847AA5BC2F408B3161000D4210BAE6E3*)CastclassSealed((RuntimeObject*)L_4, addScore_tD00A6AAD847AA5BC2F408B3161000D4210BAE6E3_il2cpp_TypeInfo_var));
		addScore_tD00A6AAD847AA5BC2F408B3161000D4210BAE6E3** L_5 = (&__this->___NextVolna_17);
		addScore_tD00A6AAD847AA5BC2F408B3161000D4210BAE6E3* L_6 = V_2;
		addScore_tD00A6AAD847AA5BC2F408B3161000D4210BAE6E3* L_7 = V_1;
		addScore_tD00A6AAD847AA5BC2F408B3161000D4210BAE6E3* L_8;
		L_8 = InterlockedCompareExchangeImpl<addScore_tD00A6AAD847AA5BC2F408B3161000D4210BAE6E3*>(L_5, L_6, L_7);
		V_0 = L_8;
		addScore_tD00A6AAD847AA5BC2F408B3161000D4210BAE6E3* L_9 = V_0;
		addScore_tD00A6AAD847AA5BC2F408B3161000D4210BAE6E3* L_10 = V_1;
		if ((!(((RuntimeObject*)(addScore_tD00A6AAD847AA5BC2F408B3161000D4210BAE6E3*)L_9) == ((RuntimeObject*)(addScore_tD00A6AAD847AA5BC2F408B3161000D4210BAE6E3*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void EnemyController::remove_NextVolna(EnemyController/addScore)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyController_remove_NextVolna_mDC9BA6B738ED918F64D480C228150DFD3C9B02C7 (EnemyController_tBB576F8CA41609F61E7D9AD27B14D49FB5A11C4A* __this, addScore_tD00A6AAD847AA5BC2F408B3161000D4210BAE6E3* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&addScore_tD00A6AAD847AA5BC2F408B3161000D4210BAE6E3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	addScore_tD00A6AAD847AA5BC2F408B3161000D4210BAE6E3* V_0 = NULL;
	addScore_tD00A6AAD847AA5BC2F408B3161000D4210BAE6E3* V_1 = NULL;
	addScore_tD00A6AAD847AA5BC2F408B3161000D4210BAE6E3* V_2 = NULL;
	{
		addScore_tD00A6AAD847AA5BC2F408B3161000D4210BAE6E3* L_0 = __this->___NextVolna_17;
		V_0 = L_0;
	}

IL_0007:
	{
		addScore_tD00A6AAD847AA5BC2F408B3161000D4210BAE6E3* L_1 = V_0;
		V_1 = L_1;
		addScore_tD00A6AAD847AA5BC2F408B3161000D4210BAE6E3* L_2 = V_1;
		addScore_tD00A6AAD847AA5BC2F408B3161000D4210BAE6E3* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		V_2 = ((addScore_tD00A6AAD847AA5BC2F408B3161000D4210BAE6E3*)CastclassSealed((RuntimeObject*)L_4, addScore_tD00A6AAD847AA5BC2F408B3161000D4210BAE6E3_il2cpp_TypeInfo_var));
		addScore_tD00A6AAD847AA5BC2F408B3161000D4210BAE6E3** L_5 = (&__this->___NextVolna_17);
		addScore_tD00A6AAD847AA5BC2F408B3161000D4210BAE6E3* L_6 = V_2;
		addScore_tD00A6AAD847AA5BC2F408B3161000D4210BAE6E3* L_7 = V_1;
		addScore_tD00A6AAD847AA5BC2F408B3161000D4210BAE6E3* L_8;
		L_8 = InterlockedCompareExchangeImpl<addScore_tD00A6AAD847AA5BC2F408B3161000D4210BAE6E3*>(L_5, L_6, L_7);
		V_0 = L_8;
		addScore_tD00A6AAD847AA5BC2F408B3161000D4210BAE6E3* L_9 = V_0;
		addScore_tD00A6AAD847AA5BC2F408B3161000D4210BAE6E3* L_10 = V_1;
		if ((!(((RuntimeObject*)(addScore_tD00A6AAD847AA5BC2F408B3161000D4210BAE6E3*)L_9) == ((RuntimeObject*)(addScore_tD00A6AAD847AA5BC2F408B3161000D4210BAE6E3*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void EnemyController::add_EnemyKill(EnemyController/addScore)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyController_add_EnemyKill_m1719A10ACBBF03FB713C1A64EE3261B68C77449A (EnemyController_tBB576F8CA41609F61E7D9AD27B14D49FB5A11C4A* __this, addScore_tD00A6AAD847AA5BC2F408B3161000D4210BAE6E3* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&addScore_tD00A6AAD847AA5BC2F408B3161000D4210BAE6E3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	addScore_tD00A6AAD847AA5BC2F408B3161000D4210BAE6E3* V_0 = NULL;
	addScore_tD00A6AAD847AA5BC2F408B3161000D4210BAE6E3* V_1 = NULL;
	addScore_tD00A6AAD847AA5BC2F408B3161000D4210BAE6E3* V_2 = NULL;
	{
		addScore_tD00A6AAD847AA5BC2F408B3161000D4210BAE6E3* L_0 = __this->___EnemyKill_18;
		V_0 = L_0;
	}

IL_0007:
	{
		addScore_tD00A6AAD847AA5BC2F408B3161000D4210BAE6E3* L_1 = V_0;
		V_1 = L_1;
		addScore_tD00A6AAD847AA5BC2F408B3161000D4210BAE6E3* L_2 = V_1;
		addScore_tD00A6AAD847AA5BC2F408B3161000D4210BAE6E3* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		V_2 = ((addScore_tD00A6AAD847AA5BC2F408B3161000D4210BAE6E3*)CastclassSealed((RuntimeObject*)L_4, addScore_tD00A6AAD847AA5BC2F408B3161000D4210BAE6E3_il2cpp_TypeInfo_var));
		addScore_tD00A6AAD847AA5BC2F408B3161000D4210BAE6E3** L_5 = (&__this->___EnemyKill_18);
		addScore_tD00A6AAD847AA5BC2F408B3161000D4210BAE6E3* L_6 = V_2;
		addScore_tD00A6AAD847AA5BC2F408B3161000D4210BAE6E3* L_7 = V_1;
		addScore_tD00A6AAD847AA5BC2F408B3161000D4210BAE6E3* L_8;
		L_8 = InterlockedCompareExchangeImpl<addScore_tD00A6AAD847AA5BC2F408B3161000D4210BAE6E3*>(L_5, L_6, L_7);
		V_0 = L_8;
		addScore_tD00A6AAD847AA5BC2F408B3161000D4210BAE6E3* L_9 = V_0;
		addScore_tD00A6AAD847AA5BC2F408B3161000D4210BAE6E3* L_10 = V_1;
		if ((!(((RuntimeObject*)(addScore_tD00A6AAD847AA5BC2F408B3161000D4210BAE6E3*)L_9) == ((RuntimeObject*)(addScore_tD00A6AAD847AA5BC2F408B3161000D4210BAE6E3*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void EnemyController::remove_EnemyKill(EnemyController/addScore)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyController_remove_EnemyKill_m00474125D7555A793410678F54A0ED81C856B6B3 (EnemyController_tBB576F8CA41609F61E7D9AD27B14D49FB5A11C4A* __this, addScore_tD00A6AAD847AA5BC2F408B3161000D4210BAE6E3* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&addScore_tD00A6AAD847AA5BC2F408B3161000D4210BAE6E3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	addScore_tD00A6AAD847AA5BC2F408B3161000D4210BAE6E3* V_0 = NULL;
	addScore_tD00A6AAD847AA5BC2F408B3161000D4210BAE6E3* V_1 = NULL;
	addScore_tD00A6AAD847AA5BC2F408B3161000D4210BAE6E3* V_2 = NULL;
	{
		addScore_tD00A6AAD847AA5BC2F408B3161000D4210BAE6E3* L_0 = __this->___EnemyKill_18;
		V_0 = L_0;
	}

IL_0007:
	{
		addScore_tD00A6AAD847AA5BC2F408B3161000D4210BAE6E3* L_1 = V_0;
		V_1 = L_1;
		addScore_tD00A6AAD847AA5BC2F408B3161000D4210BAE6E3* L_2 = V_1;
		addScore_tD00A6AAD847AA5BC2F408B3161000D4210BAE6E3* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		V_2 = ((addScore_tD00A6AAD847AA5BC2F408B3161000D4210BAE6E3*)CastclassSealed((RuntimeObject*)L_4, addScore_tD00A6AAD847AA5BC2F408B3161000D4210BAE6E3_il2cpp_TypeInfo_var));
		addScore_tD00A6AAD847AA5BC2F408B3161000D4210BAE6E3** L_5 = (&__this->___EnemyKill_18);
		addScore_tD00A6AAD847AA5BC2F408B3161000D4210BAE6E3* L_6 = V_2;
		addScore_tD00A6AAD847AA5BC2F408B3161000D4210BAE6E3* L_7 = V_1;
		addScore_tD00A6AAD847AA5BC2F408B3161000D4210BAE6E3* L_8;
		L_8 = InterlockedCompareExchangeImpl<addScore_tD00A6AAD847AA5BC2F408B3161000D4210BAE6E3*>(L_5, L_6, L_7);
		V_0 = L_8;
		addScore_tD00A6AAD847AA5BC2F408B3161000D4210BAE6E3* L_9 = V_0;
		addScore_tD00A6AAD847AA5BC2F408B3161000D4210BAE6E3* L_10 = V_1;
		if ((!(((RuntimeObject*)(addScore_tD00A6AAD847AA5BC2F408B3161000D4210BAE6E3*)L_9) == ((RuntimeObject*)(addScore_tD00A6AAD847AA5BC2F408B3161000D4210BAE6E3*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void EnemyController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyController_Start_mD47FA99710AFEDA91637E73B4109FC0125032604 (EnemyController_tBB576F8CA41609F61E7D9AD27B14D49FB5A11C4A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisGridLayoutGroup_tEE9C68F88C13E6BD716BBD356D008ACFB63F1940_mDF4A2E04045EFD3D063DDB65366582425319C960_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m9E552507CE5EACBA6A9E0470BB5F15669379B956_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// enemyField = fieldWithEnemy.GetComponent<RectTransform>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___fieldWithEnemy_10;
		NullCheck(L_0);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_1;
		L_1 = GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4(L_0, GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var);
		__this->___enemyField_20 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___enemyField_20), (void*)L_1);
		// enemyLayoutGroup = fieldWithEnemy.GetComponent<GridLayoutGroup>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___fieldWithEnemy_10;
		NullCheck(L_2);
		GridLayoutGroup_tEE9C68F88C13E6BD716BBD356D008ACFB63F1940* L_3;
		L_3 = GameObject_GetComponent_TisGridLayoutGroup_tEE9C68F88C13E6BD716BBD356D008ACFB63F1940_mDF4A2E04045EFD3D063DDB65366582425319C960(L_2, GameObject_GetComponent_TisGridLayoutGroup_tEE9C68F88C13E6BD716BBD356D008ACFB63F1940_mDF4A2E04045EFD3D063DDB65366582425319C960_RuntimeMethod_var);
		__this->___enemyLayoutGroup_21 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___enemyLayoutGroup_21), (void*)L_3);
		// enemyLayoutGroup.cellSize = sizeEnemy;
		GridLayoutGroup_tEE9C68F88C13E6BD716BBD356D008ACFB63F1940* L_4 = __this->___enemyLayoutGroup_21;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = __this->___sizeEnemy_7;
		NullCheck(L_4);
		GridLayoutGroup_set_cellSize_m0A3FF07694BDBF52D973597978FC87B0941BE5F9(L_4, L_5, NULL);
		// _startPositionEnemy = _parentField.position;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_6 = __this->____parentField_9;
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_6, NULL);
		__this->____startPositionEnemy_22 = L_7;
		// var pos = finisGameObject.transform.position;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = __this->___finisGameObject_13;
		NullCheck(L_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_8, NULL);
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_9, NULL);
		V_0 = L_10;
		// _finishPositionEnemy = new Vector3(pos.x, pos.y - 5, pos.z);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = V_0;
		float L_12 = L_11.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		float L_14 = L_13.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = V_0;
		float L_16 = L_15.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		memset((&L_17), 0, sizeof(L_17));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_17), L_12, ((float)il2cpp_codegen_subtract(L_14, (5.0f))), L_16, /*hidden argument*/NULL);
		__this->____finishPositionEnemy_23 = L_17;
		// bullet = Instantiate(prefabBullet);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18 = __this->___prefabBullet_14;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19;
		L_19 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D(L_18, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D_RuntimeMethod_var);
		__this->___bullet_26 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___bullet_26), (void*)L_19);
		// _rbBullet = bullet.GetComponent<Rigidbody2D>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20 = __this->___bullet_26;
		NullCheck(L_20);
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_21;
		L_21 = GameObject_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m9E552507CE5EACBA6A9E0470BB5F15669379B956(L_20, GameObject_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m9E552507CE5EACBA6A9E0470BB5F15669379B956_RuntimeMethod_var);
		__this->____rbBullet_27 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____rbBullet_27), (void*)L_21);
		// _rbBullet.isKinematic = true;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_22 = __this->____rbBullet_27;
		NullCheck(L_22);
		Rigidbody2D_set_isKinematic_m7C68AB4CFB6D301F0EDF0BFF66FB121ED3CC7853(L_22, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void EnemyController::RemovePositionArmy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyController_RemovePositionArmy_m041084DF14C8C8769A2C748B84BE48014B365D2A (EnemyController_tBB576F8CA41609F61E7D9AD27B14D49FB5A11C4A* __this, const RuntimeMethod* method) 
{
	{
		// _parentField.position =_startPositionEnemy;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = __this->____parentField_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = __this->____startPositionEnemy_22;
		NullCheck(L_0);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_0, L_1, NULL);
		// ClearGameObject(fieldWithEnemy);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___fieldWithEnemy_10;
		EnemyController_ClearGameObject_m713983240709D7B36F60F1F33D698682D0A67E65(__this, L_2, NULL);
		// }
		return;
	}
}
// System.Void EnemyController::SetSizeField(System.Collections.Generic.List`1<RowEnemy>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyController_SetSizeField_m5538A40C749CDE30576AE676D5DBE5171C80A248 (EnemyController_tBB576F8CA41609F61E7D9AD27B14D49FB5A11C4A* __this, List_1_t09D143B09E6E0E7D300E26051BA7D55EBF012469* ___army0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m467023CDC012B63A6D7D3455058126A1229206A5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// row = army.Count;
		List_1_t09D143B09E6E0E7D300E26051BA7D55EBF012469* L_0 = ___army0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m467023CDC012B63A6D7D3455058126A1229206A5_inline(L_0, List_1_get_Count_m467023CDC012B63A6D7D3455058126A1229206A5_RuntimeMethod_var);
		__this->___row_4 = L_1;
		// collumn = MathParameters.MatchCollumnEnemy(army);
		List_1_t09D143B09E6E0E7D300E26051BA7D55EBF012469* L_2 = ___army0;
		int32_t L_3;
		L_3 = MathParameters_MatchCollumnEnemy_m8CAD731221855CD27DDB3A39188A35F9ED0FA279(L_2, NULL);
		__this->___collumn_5 = L_3;
		// var size = MathParameters.MathSizeField(row, collumn, sizeEnemy, enemyLayoutGroup.spacing.x+enemyLayoutGroup.padding.bottom);
		int32_t L_4 = __this->___row_4;
		int32_t L_5 = __this->___collumn_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = __this->___sizeEnemy_7;
		GridLayoutGroup_tEE9C68F88C13E6BD716BBD356D008ACFB63F1940* L_7 = __this->___enemyLayoutGroup_21;
		NullCheck(L_7);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		L_8 = GridLayoutGroup_get_spacing_m19BC15652BF18D051B0998C14F13DB83191F3E58_inline(L_7, NULL);
		float L_9 = L_8.___x_0;
		GridLayoutGroup_tEE9C68F88C13E6BD716BBD356D008ACFB63F1940* L_10 = __this->___enemyLayoutGroup_21;
		NullCheck(L_10);
		RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* L_11;
		L_11 = LayoutGroup_get_padding_m91ABA3C588704717EDC82E72BA6D1B82711FE83C_inline(L_10, NULL);
		NullCheck(L_11);
		int32_t L_12;
		L_12 = RectOffset_get_bottom_mDF9C1EC125F94245D5532C34FCFB65BE0F2A9D0B(L_11, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13;
		L_13 = MathParameters_MathSizeField_m1D51DA5E499380A110406FC4B08A61325344348B(L_4, L_5, L_6, ((float)il2cpp_codegen_add(L_9, ((float)L_12))), NULL);
		V_0 = L_13;
		// enemyField.SetSize(size);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_14 = __this->___enemyField_20;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15 = V_0;
		ModificateRectTransform_SetSize_m7254BE703F21042B201C1B68F07B85E0D619C562(L_14, L_15, NULL);
		// }
		return;
	}
}
// System.Void EnemyController::ClearGameObject(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyController_ClearGameObject_m713983240709D7B36F60F1F33D698682D0A67E65 (EnemyController_tBB576F8CA41609F61E7D9AD27B14D49FB5A11C4A* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___cleanerObject0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// var children = cleanerObject.transform.childCount;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___cleanerObject0;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0(L_1, NULL);
		V_0 = L_2;
		// if(children == 0) return;
		int32_t L_3 = V_0;
		if (L_3)
		{
			goto IL_0010;
		}
	}
	{
		// if(children == 0) return;
		return;
	}

IL_0010:
	{
		// Debug.Log(children);
		int32_t L_4 = V_0;
		int32_t L_5 = L_4;
		RuntimeObject* L_6 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_5);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_6, NULL);
		// for (int i = 0; i < children; i++)
		V_1 = 0;
		goto IL_0039;
	}

IL_001f:
	{
		// Destroy(cleanerObject.transform.GetChild(i).gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = ___cleanerObject0;
		NullCheck(L_7);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_7, NULL);
		int32_t L_9 = V_1;
		NullCheck(L_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_8, L_9, NULL);
		NullCheck(L_10);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11;
		L_11 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_10, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_11, NULL);
		// for (int i = 0; i < children; i++)
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0039:
	{
		// for (int i = 0; i < children; i++)
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		// }
		return;
	}
}
// System.Void EnemyController::CreateArmyEnemy(System.Collections.Generic.List`1<RowEnemy>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyController_CreateArmyEnemy_mC25A6E81980215C9F753F9BB5B14B3437324AF0E (EnemyController_tBB576F8CA41609F61E7D9AD27B14D49FB5A11C4A* __this, List_1_t09D143B09E6E0E7D300E26051BA7D55EBF012469* ___enemysPoss0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m20744EC386B8AC8AC63C85A74805C99501EB8F48_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m1D653C01DE3239887CB159B7FD92B3EC1361B51D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m7B066E79D57364B77E4BE2A2F567DDF33AF27799_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m4710091EBAF4884CCC91C3A611A44EB349EAC34C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m467023CDC012B63A6D7D3455058126A1229206A5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mF2F931E0D11021A019B6314239D394E95EFF6F49_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Enumerator_tCC04FB1803AFE7880193CE87A1E4C0C010165DA6 V_1;
	memset((&V_1), 0, sizeof(V_1));
	addScore_tD00A6AAD847AA5BC2F408B3161000D4210BAE6E3* G_B2_0 = NULL;
	addScore_tD00A6AAD847AA5BC2F408B3161000D4210BAE6E3* G_B1_0 = NULL;
	{
		// volna++;
		int32_t L_0 = __this->___volna_25;
		__this->___volna_25 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		// NextVolna?.Invoke(volna);
		addScore_tD00A6AAD847AA5BC2F408B3161000D4210BAE6E3* L_1 = __this->___NextVolna_17;
		addScore_tD00A6AAD847AA5BC2F408B3161000D4210BAE6E3* L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_001a;
		}
	}
	{
		goto IL_0025;
	}

IL_001a:
	{
		int32_t L_3 = __this->___volna_25;
		NullCheck(G_B2_0);
		addScore_Invoke_m6AD376B99A7A12257157EA85B19B7A481F464625_inline(G_B2_0, L_3, NULL);
	}

IL_0025:
	{
		// SetSizeField(enemysPoss);
		List_1_t09D143B09E6E0E7D300E26051BA7D55EBF012469* L_4 = ___enemysPoss0;
		EnemyController_SetSizeField_m5538A40C749CDE30576AE676D5DBE5171C80A248(__this, L_4, NULL);
		// enemyLayoutGroup.enabled = true;
		GridLayoutGroup_tEE9C68F88C13E6BD716BBD356D008ACFB63F1940* L_5 = __this->___enemyLayoutGroup_21;
		NullCheck(L_5);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_5, (bool)1, NULL);
		// fireenemy = new List<GameObject>();
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_6 = (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*)il2cpp_codegen_object_new(List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC(L_6, List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		__this->___fireenemy_24 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___fireenemy_24), (void*)L_6);
		// enemys = new List<GameObject>();
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_7 = (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*)il2cpp_codegen_object_new(List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC(L_7, List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		__this->___enemys_19 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___enemys_19), (void*)L_7);
		// for (int i = 0; i < enemysPoss.Count; i++)
		V_0 = 0;
		goto IL_00a5;
	}

IL_0052:
	{
		// foreach (var _is in enemysPoss[i]._isPlace)
		List_1_t09D143B09E6E0E7D300E26051BA7D55EBF012469* L_8 = ___enemysPoss0;
		int32_t L_9 = V_0;
		NullCheck(L_8);
		RowEnemy_t2EF20FA4770986CA2A4FF42842E44F9498C60045* L_10;
		L_10 = List_1_get_Item_mF2F931E0D11021A019B6314239D394E95EFF6F49(L_8, L_9, List_1_get_Item_mF2F931E0D11021A019B6314239D394E95EFF6F49_RuntimeMethod_var);
		NullCheck(L_10);
		List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* L_11 = L_10->____isPlace_0;
		NullCheck(L_11);
		Enumerator_tCC04FB1803AFE7880193CE87A1E4C0C010165DA6 L_12;
		L_12 = List_1_GetEnumerator_m4710091EBAF4884CCC91C3A611A44EB349EAC34C(L_11, List_1_GetEnumerator_m4710091EBAF4884CCC91C3A611A44EB349EAC34C_RuntimeMethod_var);
		V_1 = L_12;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0093:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m20744EC386B8AC8AC63C85A74805C99501EB8F48((&V_1), Enumerator_Dispose_m20744EC386B8AC8AC63C85A74805C99501EB8F48_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0088_1;
			}

IL_0066_1:
			{
				// foreach (var _is in enemysPoss[i]._isPlace)
				bool L_13;
				L_13 = Enumerator_get_Current_m7B066E79D57364B77E4BE2A2F567DDF33AF27799_inline((&V_1), Enumerator_get_Current_m7B066E79D57364B77E4BE2A2F567DDF33AF27799_RuntimeMethod_var);
				// if (_is)
				if (!L_13)
				{
					goto IL_0082_1;
				}
			}
			{
				// CreateGameObject(i == enemysPoss.Count-1);
				int32_t L_14 = V_0;
				List_1_t09D143B09E6E0E7D300E26051BA7D55EBF012469* L_15 = ___enemysPoss0;
				NullCheck(L_15);
				int32_t L_16;
				L_16 = List_1_get_Count_m467023CDC012B63A6D7D3455058126A1229206A5_inline(L_15, List_1_get_Count_m467023CDC012B63A6D7D3455058126A1229206A5_RuntimeMethod_var);
				EnemyController_CreateGameObject_m9ACAFB86332ECFEA63E3C0E5CC732F5C4E4FCF0A(__this, (bool)((((int32_t)L_14) == ((int32_t)((int32_t)il2cpp_codegen_subtract(L_16, 1))))? 1 : 0), NULL);
				goto IL_0088_1;
			}

IL_0082_1:
			{
				// CreateEmpty();
				EnemyController_CreateEmpty_m521572066871A67F8F59EB181656745C96734919(__this, NULL);
			}

IL_0088_1:
			{
				// foreach (var _is in enemysPoss[i]._isPlace)
				bool L_17;
				L_17 = Enumerator_MoveNext_m1D653C01DE3239887CB159B7FD92B3EC1361B51D((&V_1), Enumerator_MoveNext_m1D653C01DE3239887CB159B7FD92B3EC1361B51D_RuntimeMethod_var);
				if (L_17)
				{
					goto IL_0066_1;
				}
			}
			{
				goto IL_00a1;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00a1:
	{
		// for (int i = 0; i < enemysPoss.Count; i++)
		int32_t L_18 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_00a5:
	{
		// for (int i = 0; i < enemysPoss.Count; i++)
		int32_t L_19 = V_0;
		List_1_t09D143B09E6E0E7D300E26051BA7D55EBF012469* L_20 = ___enemysPoss0;
		NullCheck(L_20);
		int32_t L_21;
		L_21 = List_1_get_Count_m467023CDC012B63A6D7D3455058126A1229206A5_inline(L_20, List_1_get_Count_m467023CDC012B63A6D7D3455058126A1229206A5_RuntimeMethod_var);
		if ((((int32_t)L_19) < ((int32_t)L_21)))
		{
			goto IL_0052;
		}
	}
	{
		// _parentField.DOMove(_finishPositionEnemy, speed);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_22 = __this->____parentField_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23 = __this->____finishPositionEnemy_23;
		float L_24 = __this->___speed_8;
		TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* L_25;
		L_25 = ShortcutExtensions_DOMove_m32C4BD3E44498A3C651F30108F0D3402416B868B(L_22, L_23, L_24, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void EnemyController::KillEnemy(UnityEngine.GameObject,System.Int32,UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyController_KillEnemy_m6F0D7F33EFF24F9031008F5CB4E30A6569A2D189 (EnemyController_tBB576F8CA41609F61E7D9AD27B14D49FB5A11C4A* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___body0, int32_t ___score1, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___nextfire2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_m520E9B7A0934E12858F175443D6FC696A45987C2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_mCCE85D4D5326536C4B214C73D07030F4CCD18485_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m41969899D3257B63DFB0E09C78A18D1869EC180C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m89A66076DE282BA1AC99038CB2E9825E24AA9B3A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	addScore_tD00A6AAD847AA5BC2F408B3161000D4210BAE6E3* G_B2_0 = NULL;
	addScore_tD00A6AAD847AA5BC2F408B3161000D4210BAE6E3* G_B1_0 = NULL;
	{
		// enemyLayoutGroup.enabled = false;
		GridLayoutGroup_tEE9C68F88C13E6BD716BBD356D008ACFB63F1940* L_0 = __this->___enemyLayoutGroup_21;
		NullCheck(L_0);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_0, (bool)0, NULL);
		// EnemyKill?.Invoke(score);
		addScore_tD00A6AAD847AA5BC2F408B3161000D4210BAE6E3* L_1 = __this->___EnemyKill_18;
		addScore_tD00A6AAD847AA5BC2F408B3161000D4210BAE6E3* L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0018;
		}
	}
	{
		goto IL_001e;
	}

IL_0018:
	{
		int32_t L_3 = ___score1;
		NullCheck(G_B2_0);
		addScore_Invoke_m6AD376B99A7A12257157EA85B19B7A481F464625_inline(G_B2_0, L_3, NULL);
	}

IL_001e:
	{
		// enemys.Remove(body);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_4 = __this->___enemys_19;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = ___body0;
		NullCheck(L_4);
		bool L_6;
		L_6 = List_1_Remove_mCCE85D4D5326536C4B214C73D07030F4CCD18485(L_4, L_5, List_1_Remove_mCCE85D4D5326536C4B214C73D07030F4CCD18485_RuntimeMethod_var);
		// fireenemy.Remove(body);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_7 = __this->___fireenemy_24;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = ___body0;
		NullCheck(L_7);
		bool L_9;
		L_9 = List_1_Remove_mCCE85D4D5326536C4B214C73D07030F4CCD18485(L_7, L_8, List_1_Remove_mCCE85D4D5326536C4B214C73D07030F4CCD18485_RuntimeMethod_var);
		// if(nextfire != null) fireenemy.Add(nextfire);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = ___nextfire2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_10, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_11)
		{
			goto IL_004d;
		}
	}
	{
		// if(nextfire != null) fireenemy.Add(nextfire);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_12 = __this->___fireenemy_24;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = ___nextfire2;
		NullCheck(L_12);
		List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline(L_12, L_13, List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
	}

IL_004d:
	{
		// if (enemys.Count == 0)
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_14 = __this->___enemys_19;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_14, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		if (L_15)
		{
			goto IL_00a2;
		}
	}
	{
		// DOTween.Clear();
		il2cpp_codegen_runtime_class_init_inline(DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		DOTween_Clear_m00E6CE855B140B49066A2340F6E2877D203E8F35((bool)0, NULL);
		// RemovePositionArmy();
		EnemyController_RemovePositionArmy_m041084DF14C8C8769A2C748B84BE48014B365D2A(__this, NULL);
		// enemysPosition.Remove(enemysPosition[0]);
		List_1_tE8332A13AE0F0FF8326595223E3E738FCB53912C* L_16 = __this->___enemysPosition_6;
		List_1_tE8332A13AE0F0FF8326595223E3E738FCB53912C* L_17 = __this->___enemysPosition_6;
		NullCheck(L_17);
		ArmyEnemy_t5291EA653FD944478FE7F0532725391126EFAC95* L_18;
		L_18 = List_1_get_Item_m89A66076DE282BA1AC99038CB2E9825E24AA9B3A(L_17, 0, List_1_get_Item_m89A66076DE282BA1AC99038CB2E9825E24AA9B3A_RuntimeMethod_var);
		NullCheck(L_16);
		bool L_19;
		L_19 = List_1_Remove_m520E9B7A0934E12858F175443D6FC696A45987C2(L_16, L_18, List_1_Remove_m520E9B7A0934E12858F175443D6FC696A45987C2_RuntimeMethod_var);
		// if (enemysPosition.Count != 0)
		List_1_tE8332A13AE0F0FF8326595223E3E738FCB53912C* L_20 = __this->___enemysPosition_6;
		NullCheck(L_20);
		int32_t L_21;
		L_21 = List_1_get_Count_m41969899D3257B63DFB0E09C78A18D1869EC180C_inline(L_20, List_1_get_Count_m41969899D3257B63DFB0E09C78A18D1869EC180C_RuntimeMethod_var);
		if (!L_21)
		{
			goto IL_00a2;
		}
	}
	{
		// CreateArmyEnemy(enemysPosition[0]._PolkEnemies);
		List_1_tE8332A13AE0F0FF8326595223E3E738FCB53912C* L_22 = __this->___enemysPosition_6;
		NullCheck(L_22);
		ArmyEnemy_t5291EA653FD944478FE7F0532725391126EFAC95* L_23;
		L_23 = List_1_get_Item_m89A66076DE282BA1AC99038CB2E9825E24AA9B3A(L_22, 0, List_1_get_Item_m89A66076DE282BA1AC99038CB2E9825E24AA9B3A_RuntimeMethod_var);
		NullCheck(L_23);
		List_1_t09D143B09E6E0E7D300E26051BA7D55EBF012469* L_24 = L_23->____PolkEnemies_4;
		EnemyController_CreateArmyEnemy_mC25A6E81980215C9F753F9BB5B14B3437324AF0E(__this, L_24, NULL);
	}

IL_00a2:
	{
		// }
		return;
	}
}
// System.Void EnemyController::CreateGameObject(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyController_CreateGameObject_m9ACAFB86332ECFEA63E3C0E5CC732F5C4E4FCF0A (EnemyController_tBB576F8CA41609F61E7D9AD27B14D49FB5A11C4A* __this, bool ___last0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisEnemyHP_t4325F0CE402CF433AABB25D2AA0A6945A27C9F3E_mD8D79A38B1B77044341029CE43038AEBA28284DC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral23114468D04FA2B7A2DA455B545DB914D0A3ED94);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	{
		// GameObject enemy = Instantiate(prefabEnemy, fieldWithEnemy.transform);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___prefabEnemy_11;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___fieldWithEnemy_10;
		NullCheck(L_1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934(L_0, L_2, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934_RuntimeMethod_var);
		V_0 = L_3;
		// enemy.GetComponent<EnemyHP>().SetController(this);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = V_0;
		NullCheck(L_4);
		EnemyHP_t4325F0CE402CF433AABB25D2AA0A6945A27C9F3E* L_5;
		L_5 = GameObject_GetComponent_TisEnemyHP_t4325F0CE402CF433AABB25D2AA0A6945A27C9F3E_mD8D79A38B1B77044341029CE43038AEBA28284DC(L_4, GameObject_GetComponent_TisEnemyHP_t4325F0CE402CF433AABB25D2AA0A6945A27C9F3E_mD8D79A38B1B77044341029CE43038AEBA28284DC_RuntimeMethod_var);
		NullCheck(L_5);
		EnemyHP_SetController_mEF07A9B168621448580464807FE37740F43727AA_inline(L_5, __this, NULL);
		// enemys.Add(enemy);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_6 = __this->___enemys_19;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = V_0;
		NullCheck(L_6);
		List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline(L_6, L_7, List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		// numb++;
		int32_t L_8 = __this->___numb_28;
		__this->___numb_28 = ((int32_t)il2cpp_codegen_add(L_8, 1));
		// enemy.name = $"{numb}";
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = V_0;
		int32_t L_10 = __this->___numb_28;
		int32_t L_11 = L_10;
		RuntimeObject* L_12 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_11);
		String_t* L_13;
		L_13 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteral23114468D04FA2B7A2DA455B545DB914D0A3ED94, L_12, NULL);
		NullCheck(L_9);
		Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(L_9, L_13, NULL);
		// if(last) fireenemy.Add(enemy);
		bool L_14 = ___last0;
		if (!L_14)
		{
			goto IL_0067;
		}
	}
	{
		// if(last) fireenemy.Add(enemy);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_15 = __this->___fireenemy_24;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16 = V_0;
		NullCheck(L_15);
		List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline(L_15, L_16, List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
	}

IL_0067:
	{
		// }
		return;
	}
}
// System.Void EnemyController::CreateEmpty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyController_CreateEmpty_m521572066871A67F8F59EB181656745C96734919 (EnemyController_tBB576F8CA41609F61E7D9AD27B14D49FB5A11C4A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Instantiate(prefabEmpty, fieldWithEnemy.transform);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___prefabEmpty_12;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___fieldWithEnemy_10;
		NullCheck(L_1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934(L_0, L_2, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void EnemyController::StartFire()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyController_StartFire_m89BF6A96CCE9AFC70325052AE4E5E3BDED5AAE25 (EnemyController_tBB576F8CA41609F61E7D9AD27B14D49FB5A11C4A* __this, const RuntimeMethod* method) 
{
	{
		// if(fire) return;
		bool L_0 = __this->___fire_15;
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if(fire) return;
		return;
	}

IL_0009:
	{
		// fire = true;
		__this->___fire_15 = (bool)1;
		// _rbBullet.isKinematic = false;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_1 = __this->____rbBullet_27;
		NullCheck(L_1);
		Rigidbody2D_set_isKinematic_m7C68AB4CFB6D301F0EDF0BFF66FB121ED3CC7853(L_1, (bool)0, NULL);
		// Fire();
		EnemyController_Fire_m12D4F33B837FC525D29FD45B32C8370837FC101C(__this, NULL);
		// }
		return;
	}
}
// System.Void EnemyController::Fire()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyController_Fire_m12D4F33B837FC525D29FD45B32C8370837FC101C (EnemyController_tBB576F8CA41609F61E7D9AD27B14D49FB5A11C4A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// var enemy = Random.Range(0, fireenemy.Count-1);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = __this->___fireenemy_24;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_0, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		int32_t L_2;
		L_2 = Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8(0, ((int32_t)il2cpp_codegen_subtract(L_1, 1)), NULL);
		V_0 = L_2;
		// _rbBullet.isKinematic = true;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_3 = __this->____rbBullet_27;
		NullCheck(L_3);
		Rigidbody2D_set_isKinematic_m7C68AB4CFB6D301F0EDF0BFF66FB121ED3CC7853(L_3, (bool)1, NULL);
		// StartCoroutine(FireEnemy(fireenemy[enemy].transform, bullet));
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_4 = __this->___fireenemy_24;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_4, L_5, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_6, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = __this->___bullet_26;
		RuntimeObject* L_9;
		L_9 = EnemyController_FireEnemy_m39870AE872C8A3825CC745460AE47850CD933AE2(__this, L_7, L_8, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_10;
		L_10 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_9, NULL);
		// }
		return;
	}
}
// System.Void EnemyController::DamagePlayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyController_DamagePlayer_m103D25CDDD6CD5D59B398D5D83C3684304D93957 (EnemyController_tBB576F8CA41609F61E7D9AD27B14D49FB5A11C4A* __this, const RuntimeMethod* method) 
{
	damage_tC5C439FFD24395BBE32C1A980C0FD6CAB0EEA247* G_B2_0 = NULL;
	damage_tC5C439FFD24395BBE32C1A980C0FD6CAB0EEA247* G_B1_0 = NULL;
	{
		// PlayerDamage?.Invoke();
		damage_tC5C439FFD24395BBE32C1A980C0FD6CAB0EEA247* L_0 = __this->___PlayerDamage_16;
		damage_tC5C439FFD24395BBE32C1A980C0FD6CAB0EEA247* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		NullCheck(G_B2_0);
		damage_Invoke_mCC093F6C7897ABF8083B1FE67D2E92E07DD63A96_inline(G_B2_0, NULL);
		// }
		return;
	}
}
// System.Void EnemyController::StartAttack(System.Collections.Generic.List`1<ArmyEnemy>,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyController_StartAttack_m25140CD4BD71B9453E07C82C054D26DF89DE6DAB (EnemyController_tBB576F8CA41609F61E7D9AD27B14D49FB5A11C4A* __this, List_1_tE8332A13AE0F0FF8326595223E3E738FCB53912C* ___armyEnemies0, float ___speedattack1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m89A66076DE282BA1AC99038CB2E9825E24AA9B3A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// enemysPosition = armyEnemies;
		List_1_tE8332A13AE0F0FF8326595223E3E738FCB53912C* L_0 = ___armyEnemies0;
		__this->___enemysPosition_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___enemysPosition_6), (void*)L_0);
		// speed = speedattack;
		float L_1 = ___speedattack1;
		__this->___speed_8 = L_1;
		// CreateArmyEnemy(enemysPosition[0]._PolkEnemies);
		List_1_tE8332A13AE0F0FF8326595223E3E738FCB53912C* L_2 = __this->___enemysPosition_6;
		NullCheck(L_2);
		ArmyEnemy_t5291EA653FD944478FE7F0532725391126EFAC95* L_3;
		L_3 = List_1_get_Item_m89A66076DE282BA1AC99038CB2E9825E24AA9B3A(L_2, 0, List_1_get_Item_m89A66076DE282BA1AC99038CB2E9825E24AA9B3A_RuntimeMethod_var);
		NullCheck(L_3);
		List_1_t09D143B09E6E0E7D300E26051BA7D55EBF012469* L_4 = L_3->____PolkEnemies_4;
		EnemyController_CreateArmyEnemy_mC25A6E81980215C9F753F9BB5B14B3437324AF0E(__this, L_4, NULL);
		// }
		return;
	}
}
// System.Void EnemyController::LosePlayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyController_LosePlayer_m9EE5D93A98D32E7812B6F70C459ABAF33D8C70DE (EnemyController_tBB576F8CA41609F61E7D9AD27B14D49FB5A11C4A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DOTween.Clear();
		il2cpp_codegen_runtime_class_init_inline(DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		DOTween_Clear_m00E6CE855B140B49066A2340F6E2877D203E8F35((bool)0, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator EnemyController::FireEnemy(UnityEngine.Transform,UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* EnemyController_FireEnemy_m39870AE872C8A3825CC745460AE47850CD933AE2 (EnemyController_tBB576F8CA41609F61E7D9AD27B14D49FB5A11C4A* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___enemy0, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___bullet1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CFireEnemyU3Ed__46_t176C607D294F550F05A90680A12394419CAC8019_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CFireEnemyU3Ed__46_t176C607D294F550F05A90680A12394419CAC8019* L_0 = (U3CFireEnemyU3Ed__46_t176C607D294F550F05A90680A12394419CAC8019*)il2cpp_codegen_object_new(U3CFireEnemyU3Ed__46_t176C607D294F550F05A90680A12394419CAC8019_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CFireEnemyU3Ed__46__ctor_m896646E0E0274CBEAC2D3230152D163C1D49D7FD(L_0, 0, NULL);
		U3CFireEnemyU3Ed__46_t176C607D294F550F05A90680A12394419CAC8019* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		U3CFireEnemyU3Ed__46_t176C607D294F550F05A90680A12394419CAC8019* L_2 = L_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = ___enemy0;
		NullCheck(L_2);
		L_2->___enemy_4 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___enemy_4), (void*)L_3);
		U3CFireEnemyU3Ed__46_t176C607D294F550F05A90680A12394419CAC8019* L_4 = L_2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = ___bullet1;
		NullCheck(L_4);
		L_4->___bullet_3 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___bullet_3), (void*)L_5);
		return L_4;
	}
}
// System.Void EnemyController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyController__ctor_m984FF7EBF9BF2923A09FA943862B8941E9FFECCD (EnemyController_tBB576F8CA41609F61E7D9AD27B14D49FB5A11C4A* __this, const RuntimeMethod* method) 
{
	{
		// private bool fire = true;
		__this->___fire_15 = (bool)1;
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
void addScore_Invoke_m6AD376B99A7A12257157EA85B19B7A481F464625_Multicast(addScore_tD00A6AAD847AA5BC2F408B3161000D4210BAE6E3* __this, int32_t ___score0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		addScore_tD00A6AAD847AA5BC2F408B3161000D4210BAE6E3* currentDelegate = reinterpret_cast<addScore_tD00A6AAD847AA5BC2F408B3161000D4210BAE6E3*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___score0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void addScore_Invoke_m6AD376B99A7A12257157EA85B19B7A481F464625_Open(addScore_tD00A6AAD847AA5BC2F408B3161000D4210BAE6E3* __this, int32_t ___score0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___score0, method);
}
void addScore_Invoke_m6AD376B99A7A12257157EA85B19B7A481F464625_OpenStaticInvoker(addScore_tD00A6AAD847AA5BC2F408B3161000D4210BAE6E3* __this, int32_t ___score0, const RuntimeMethod* method)
{
	InvokerActionInvoker1< int32_t >::Invoke(__this->___method_ptr_0, method, NULL, ___score0);
}
void addScore_Invoke_m6AD376B99A7A12257157EA85B19B7A481F464625_ClosedStaticInvoker(addScore_tD00A6AAD847AA5BC2F408B3161000D4210BAE6E3* __this, int32_t ___score0, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___score0);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_addScore_tD00A6AAD847AA5BC2F408B3161000D4210BAE6E3 (addScore_tD00A6AAD847AA5BC2F408B3161000D4210BAE6E3* __this, int32_t ___score0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___score0);

}
// System.Void EnemyController/addScore::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void addScore__ctor_mCBCD5A3A8C93CFEFD81ECDEB6C766FCF27235FBC (addScore_tD00A6AAD847AA5BC2F408B3161000D4210BAE6E3* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&addScore_Invoke_m6AD376B99A7A12257157EA85B19B7A481F464625_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&addScore_Invoke_m6AD376B99A7A12257157EA85B19B7A481F464625_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&addScore_Invoke_m6AD376B99A7A12257157EA85B19B7A481F464625_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&addScore_Invoke_m6AD376B99A7A12257157EA85B19B7A481F464625_Multicast;
}
// System.Void EnemyController/addScore::Invoke(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void addScore_Invoke_m6AD376B99A7A12257157EA85B19B7A481F464625 (addScore_tD00A6AAD847AA5BC2F408B3161000D4210BAE6E3* __this, int32_t ___score0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___score0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult EnemyController/addScore::BeginInvoke(System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* addScore_BeginInvoke_m1D91A0BF98FCE2E2084A0431C7934390E01D04E1 (addScore_tD00A6AAD847AA5BC2F408B3161000D4210BAE6E3* __this, int32_t ___score0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &___score0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void EnemyController/addScore::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void addScore_EndInvoke_mFE79A7855B4B1FC64369E5B6EBF6BFD50A88EFA1 (addScore_tD00A6AAD847AA5BC2F408B3161000D4210BAE6E3* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void damage_Invoke_mCC093F6C7897ABF8083B1FE67D2E92E07DD63A96_Multicast(damage_tC5C439FFD24395BBE32C1A980C0FD6CAB0EEA247* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		damage_tC5C439FFD24395BBE32C1A980C0FD6CAB0EEA247* currentDelegate = reinterpret_cast<damage_tC5C439FFD24395BBE32C1A980C0FD6CAB0EEA247*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void damage_Invoke_mCC093F6C7897ABF8083B1FE67D2E92E07DD63A96_Open(damage_tC5C439FFD24395BBE32C1A980C0FD6CAB0EEA247* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void damage_Invoke_mCC093F6C7897ABF8083B1FE67D2E92E07DD63A96_OpenStaticInvoker(damage_tC5C439FFD24395BBE32C1A980C0FD6CAB0EEA247* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker0::Invoke(__this->___method_ptr_0, method, NULL);
}
void damage_Invoke_mCC093F6C7897ABF8083B1FE67D2E92E07DD63A96_ClosedStaticInvoker(damage_tC5C439FFD24395BBE32C1A980C0FD6CAB0EEA247* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker1< RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_damage_tC5C439FFD24395BBE32C1A980C0FD6CAB0EEA247 (damage_tC5C439FFD24395BBE32C1A980C0FD6CAB0EEA247* __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void EnemyController/damage::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void damage__ctor_m3967878663873E7F7305125C87BA76245AB9AE8C (damage_tC5C439FFD24395BBE32C1A980C0FD6CAB0EEA247* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 0;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&damage_Invoke_mCC093F6C7897ABF8083B1FE67D2E92E07DD63A96_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&damage_Invoke_mCC093F6C7897ABF8083B1FE67D2E92E07DD63A96_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&damage_Invoke_mCC093F6C7897ABF8083B1FE67D2E92E07DD63A96_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&damage_Invoke_mCC093F6C7897ABF8083B1FE67D2E92E07DD63A96_Multicast;
}
// System.Void EnemyController/damage::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void damage_Invoke_mCC093F6C7897ABF8083B1FE67D2E92E07DD63A96 (damage_tC5C439FFD24395BBE32C1A980C0FD6CAB0EEA247* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult EnemyController/damage::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* damage_BeginInvoke_m4BD9C3236D2F07A41923E8BC5100918F07C0C38E (damage_tC5C439FFD24395BBE32C1A980C0FD6CAB0EEA247* __this, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback0, RuntimeObject* ___object1, const RuntimeMethod* method) 
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);
}
// System.Void EnemyController/damage::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void damage_EndInvoke_mA2846924DE1116A2EA776D6F6FD87D2E527762C2 (damage_tC5C439FFD24395BBE32C1A980C0FD6CAB0EEA247* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void EnemyController/<FireEnemy>d__46::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFireEnemyU3Ed__46__ctor_m896646E0E0274CBEAC2D3230152D163C1D49D7FD (U3CFireEnemyU3Ed__46_t176C607D294F550F05A90680A12394419CAC8019* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void EnemyController/<FireEnemy>d__46::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFireEnemyU3Ed__46_System_IDisposable_Dispose_m85AC9C6848CEF3FA1FAC5B07F6CFD28A9C7055B0 (U3CFireEnemyU3Ed__46_t176C607D294F550F05A90680A12394419CAC8019* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean EnemyController/<FireEnemy>d__46::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CFireEnemyU3Ed__46_MoveNext_m02E08EE8F34E34FA27803AB7F06C9ACE47971E7F (U3CFireEnemyU3Ed__46_t176C607D294F550F05A90680A12394419CAC8019* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	EnemyController_tBB576F8CA41609F61E7D9AD27B14D49FB5A11C4A* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		EnemyController_tBB576F8CA41609F61E7D9AD27B14D49FB5A11C4A* L_1 = __this->___U3CU3E4__this_2;
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
			goto IL_005e;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// _rbBullet.isKinematic = false;
		EnemyController_tBB576F8CA41609F61E7D9AD27B14D49FB5A11C4A* L_4 = V_1;
		NullCheck(L_4);
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_5 = L_4->____rbBullet_27;
		NullCheck(L_5);
		Rigidbody2D_set_isKinematic_m7C68AB4CFB6D301F0EDF0BFF66FB121ED3CC7853(L_5, (bool)0, NULL);
		// bullet.transform.position = enemy.position;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___bullet_3;
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_6, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8 = __this->___enemy_4;
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_8, NULL);
		NullCheck(L_7);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_7, L_9, NULL);
		// yield return new WaitForSeconds(1);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_10 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_10, (1.0f), NULL);
		__this->___U3CU3E2__current_1 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_10);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_005e:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// Fire();
		EnemyController_tBB576F8CA41609F61E7D9AD27B14D49FB5A11C4A* L_11 = V_1;
		NullCheck(L_11);
		EnemyController_Fire_m12D4F33B837FC525D29FD45B32C8370837FC101C(L_11, NULL);
		// }
		return (bool)0;
	}
}
// System.Object EnemyController/<FireEnemy>d__46::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CFireEnemyU3Ed__46_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mC0EA87D7507D90A7F0372F99F9E698E813F6EFC6 (U3CFireEnemyU3Ed__46_t176C607D294F550F05A90680A12394419CAC8019* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void EnemyController/<FireEnemy>d__46::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFireEnemyU3Ed__46_System_Collections_IEnumerator_Reset_m5C2D15C7611CA4182EE356ADE061EBA3ABED4E7C (U3CFireEnemyU3Ed__46_t176C607D294F550F05A90680A12394419CAC8019* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CFireEnemyU3Ed__46_System_Collections_IEnumerator_Reset_m5C2D15C7611CA4182EE356ADE061EBA3ABED4E7C_RuntimeMethod_var)));
	}
}
// System.Object EnemyController/<FireEnemy>d__46::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CFireEnemyU3Ed__46_System_Collections_IEnumerator_get_Current_m6950071DBAEEA330062E22E80BF2B770B3F4EC97 (U3CFireEnemyU3Ed__46_t176C607D294F550F05A90680A12394419CAC8019* __this, const RuntimeMethod* method) 
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
// System.Void EnemyHP::Damage(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyHP_Damage_m2C942F022C5C60408806C2EA0315CC16CDFD6B43 (EnemyHP_t4325F0CE402CF433AABB25D2AA0A6945A27C9F3E* __this, float ___damage0, const RuntimeMethod* method) 
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	{
		// _HP -= damage;
		float L_0 = __this->____HP_4;
		float L_1 = ___damage0;
		__this->____HP_4 = ((float)il2cpp_codegen_subtract(L_0, L_1));
		// if (_HP <= 0)
		float L_2 = __this->____HP_4;
		if ((!(((float)L_2) <= ((float)(0.0f)))))
		{
			goto IL_0052;
		}
	}
	{
		// var en = UpEnemy();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = EnemyHP_UpEnemy_m4FBA25E187BFBB53D662CDB1969F1F78FFB4AEB1(__this, NULL);
		V_0 = L_3;
		// enemyup = en;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = V_0;
		__this->___enemyup_7 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___enemyup_7), (void*)L_4);
		// _controller.KillEnemy(this.gameObject, score, en);
		EnemyController_tBB576F8CA41609F61E7D9AD27B14D49FB5A11C4A* L_5 = __this->____controller_6;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		int32_t L_7 = __this->___score_5;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = V_0;
		NullCheck(L_5);
		EnemyController_KillEnemy_m6F0D7F33EFF24F9031008F5CB4E30A6569A2D189(L_5, L_6, L_7, L_8, NULL);
		// _controller.StartFire();
		EnemyController_tBB576F8CA41609F61E7D9AD27B14D49FB5A11C4A* L_9 = __this->____controller_6;
		NullCheck(L_9);
		EnemyController_StartFire_m89BF6A96CCE9AFC70325052AE4E5E3BDED5AAE25(L_9, NULL);
		// DestroyEnemy();
		EnemyHP_DestroyEnemy_mAC783EC382DE5835BF392D207AE2E043711E0216(__this, NULL);
	}

IL_0052:
	{
		// }
		return;
	}
}
// UnityEngine.GameObject EnemyHP::UpEnemy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* EnemyHP_UpEnemy_m4FBA25E187BFBB53D662CDB1969F1F78FFB4AEB1 (EnemyHP_t4325F0CE402CF433AABB25D2AA0A6945A27C9F3E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Physics2D_t64C0DB5246067DAC2E83A52558A0AC68AF3BE94D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7);
		s_Il2CppMethodInitialized = true;
	}
	RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* V_0 = NULL;
	{
		// RaycastHit2D[] hit = Physics2D.RaycastAll(transform.position, Vector2.up*200);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline(L_1, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = Vector2_get_up_mF4D6DB00DEA7D055940165B85FFE1CEF6F7CD3AA_inline(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = Vector2_op_Multiply_m4EEB2FF3F4830390A53CE9B6076FB31801D65EED_inline(L_3, (200.0f), NULL);
		il2cpp_codegen_runtime_class_init_inline(Physics2D_t64C0DB5246067DAC2E83A52558A0AC68AF3BE94D_il2cpp_TypeInfo_var);
		RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* L_5;
		L_5 = Physics2D_RaycastAll_m31A665A3ED5DF27710705A28C660E698DCF163C9(L_2, L_4, NULL);
		V_0 = L_5;
		// if (hit.Length <= 1) return null;
		RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* L_6 = V_0;
		NullCheck(L_6);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length))) > ((int32_t)1)))
		{
			goto IL_002d;
		}
	}
	{
		// if (hit.Length <= 1) return null;
		return (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
	}

IL_002d:
	{
		// if (hit[1].collider.CompareTag("Enemy"))
		RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* L_7 = V_0;
		NullCheck(L_7);
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_8;
		L_8 = RaycastHit2D_get_collider_mB56DFCD16B708852EEBDBB490BC8665DBF7487FD(((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(1))), NULL);
		NullCheck(L_8);
		bool L_9;
		L_9 = Component_CompareTag_mE6F8897E84F12DF12D302FFC4D58204D51096FC5(L_8, _stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7, NULL);
		if (!L_9)
		{
			goto IL_0057;
		}
	}
	{
		// return hit[1].transform.gameObject;
		RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* L_10 = V_0;
		NullCheck(L_10);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = RaycastHit2D_get_transform_mA5E3F8DC9914E79D3C9F6F3F2515B49EEBB4564A(((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(1))), NULL);
		NullCheck(L_11);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12;
		L_12 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_11, NULL);
		return L_12;
	}

IL_0057:
	{
		// return null;
		return (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
	}
}
// System.Void EnemyHP::SetController(EnemyController)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyHP_SetController_mEF07A9B168621448580464807FE37740F43727AA (EnemyHP_t4325F0CE402CF433AABB25D2AA0A6945A27C9F3E* __this, EnemyController_tBB576F8CA41609F61E7D9AD27B14D49FB5A11C4A* ___controller0, const RuntimeMethod* method) 
{
	{
		// public void SetController(EnemyController controller) => _controller = controller;
		EnemyController_tBB576F8CA41609F61E7D9AD27B14D49FB5A11C4A* L_0 = ___controller0;
		__this->____controller_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____controller_6), (void*)L_0);
		return;
	}
}
// System.Void EnemyHP::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyHP_OnTriggerEnter2D_mB30B3B0B1A4EB7187146F4403C6050DBBF9BE5A9 (EnemyHP_t4325F0CE402CF433AABB25D2AA0A6945A27C9F3E* __this, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF5858D2F810A295A39EB6037250B7AB2AA56FB1D);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	{
		// var gameobj = other.gameObject;
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_0 = ___other0;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		V_0 = L_1;
		// if (gameobj.CompareTag("Player") | gameobj.CompareTag("FInishForEnemy"))
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = V_0;
		NullCheck(L_2);
		bool L_3;
		L_3 = GameObject_CompareTag_m6378BE50D009A93D46036F74CC3F7E2ECB0636E5(L_2, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = V_0;
		NullCheck(L_4);
		bool L_5;
		L_5 = GameObject_CompareTag_m6378BE50D009A93D46036F74CC3F7E2ECB0636E5(L_4, _stringLiteralF5858D2F810A295A39EB6037250B7AB2AA56FB1D, NULL);
		if (!((int32_t)((int32_t)L_3|(int32_t)L_5)))
		{
			goto IL_0049;
		}
	}
	{
		// _controller.DamagePlayer();
		EnemyController_tBB576F8CA41609F61E7D9AD27B14D49FB5A11C4A* L_6 = __this->____controller_6;
		NullCheck(L_6);
		EnemyController_DamagePlayer_m103D25CDDD6CD5D59B398D5D83C3684304D93957(L_6, NULL);
		// _controller.KillEnemy(this.gameObject, 0, UpEnemy());
		EnemyController_tBB576F8CA41609F61E7D9AD27B14D49FB5A11C4A* L_7 = __this->____controller_6;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = EnemyHP_UpEnemy_m4FBA25E187BFBB53D662CDB1969F1F78FFB4AEB1(__this, NULL);
		NullCheck(L_7);
		EnemyController_KillEnemy_m6F0D7F33EFF24F9031008F5CB4E30A6569A2D189(L_7, L_8, 0, L_9, NULL);
		// DestroyEnemy();
		EnemyHP_DestroyEnemy_mAC783EC382DE5835BF392D207AE2E043711E0216(__this, NULL);
	}

IL_0049:
	{
		// }
		return;
	}
}
// System.Void EnemyHP::DestroyEnemy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyHP_DestroyEnemy_mAC783EC382DE5835BF392D207AE2E043711E0216 (EnemyHP_t4325F0CE402CF433AABB25D2AA0A6945A27C9F3E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private void DestroyEnemy() => Destroy(this.gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_0, NULL);
		return;
	}
}
// System.Void EnemyHP::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyHP__ctor_m2A18417A936A42002D14F08A999EBB8142789167 (EnemyHP_t4325F0CE402CF433AABB25D2AA0A6945A27C9F3E* __this, const RuntimeMethod* method) 
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
// System.Void GunController::Fire()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GunController_Fire_mBD600A2F51289DE03F932FCCCB63F0AEA4C8C9B0 (GunController_t7AFE6A92E37B9C51D7A5860FB2A93194D28E71D9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(finish) return;
		bool L_0 = __this->___finish_7;
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if(finish) return;
		return;
	}

IL_0009:
	{
		// StartCoroutine(Reload());
		RuntimeObject* L_1;
		L_1 = GunController_Reload_mB8A5BD3C146F1F75F0C865F931EF7AAC4EA4702B(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_2;
		L_2 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_1, NULL);
		// Instantiate(bullet, gunPos.position, Quaternion.identity);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___bullet_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = __this->___gunPos_6;
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6;
		L_6 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_3, L_5, L_6, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void GunController::Restart(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GunController_Restart_mF72A215A651548928D5F29E13ACC3FBDE5947122 (GunController_t7AFE6A92E37B9C51D7A5860FB2A93194D28E71D9* __this, bool ___znach0, const RuntimeMethod* method) 
{
	{
		// finish = znach;
		bool L_0 = ___znach0;
		__this->___finish_7 = L_0;
		// }
		return;
	}
}
// System.Collections.IEnumerator GunController::Reload()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GunController_Reload_mB8A5BD3C146F1F75F0C865F931EF7AAC4EA4702B (GunController_t7AFE6A92E37B9C51D7A5860FB2A93194D28E71D9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CReloadU3Ed__6_t628014D211AF69CCF85ED6CA98A6C3B12DFA04F8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CReloadU3Ed__6_t628014D211AF69CCF85ED6CA98A6C3B12DFA04F8* L_0 = (U3CReloadU3Ed__6_t628014D211AF69CCF85ED6CA98A6C3B12DFA04F8*)il2cpp_codegen_object_new(U3CReloadU3Ed__6_t628014D211AF69CCF85ED6CA98A6C3B12DFA04F8_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CReloadU3Ed__6__ctor_m01F9FDB94A2009F4612858DFEE7498FCBA1AE808(L_0, 0, NULL);
		U3CReloadU3Ed__6_t628014D211AF69CCF85ED6CA98A6C3B12DFA04F8* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void GunController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GunController__ctor_m909818F6EA5301033F25095C923F38FF13B3934A (GunController_t7AFE6A92E37B9C51D7A5860FB2A93194D28E71D9* __this, const RuntimeMethod* method) 
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
// System.Void GunController/<Reload>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReloadU3Ed__6__ctor_m01F9FDB94A2009F4612858DFEE7498FCBA1AE808 (U3CReloadU3Ed__6_t628014D211AF69CCF85ED6CA98A6C3B12DFA04F8* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void GunController/<Reload>d__6::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReloadU3Ed__6_System_IDisposable_Dispose_mF9801FA8755572810C22C22990A50A7BAC00B4B1 (U3CReloadU3Ed__6_t628014D211AF69CCF85ED6CA98A6C3B12DFA04F8* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean GunController/<Reload>d__6::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CReloadU3Ed__6_MoveNext_m5F0BB840ED69F6769553C4AF6685EFB601E92590 (U3CReloadU3Ed__6_t628014D211AF69CCF85ED6CA98A6C3B12DFA04F8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GunController_t7AFE6A92E37B9C51D7A5860FB2A93194D28E71D9* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		GunController_t7AFE6A92E37B9C51D7A5860FB2A93194D28E71D9* L_1 = __this->___U3CU3E4__this_2;
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
			goto IL_0038;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitForSeconds(speed);
		GunController_t7AFE6A92E37B9C51D7A5860FB2A93194D28E71D9* L_4 = V_1;
		NullCheck(L_4);
		float L_5 = L_4->___speed_5;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_6 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_6, L_5, NULL);
		__this->___U3CU3E2__current_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_6);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0038:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// Fire();
		GunController_t7AFE6A92E37B9C51D7A5860FB2A93194D28E71D9* L_7 = V_1;
		NullCheck(L_7);
		GunController_Fire_mBD600A2F51289DE03F932FCCCB63F0AEA4C8C9B0(L_7, NULL);
		// }
		return (bool)0;
	}
}
// System.Object GunController/<Reload>d__6::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CReloadU3Ed__6_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m2AE26294EB4D35D6E84321C2913DEDF1E7223535 (U3CReloadU3Ed__6_t628014D211AF69CCF85ED6CA98A6C3B12DFA04F8* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void GunController/<Reload>d__6::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReloadU3Ed__6_System_Collections_IEnumerator_Reset_m67B87F6B264F9C3F12C84CF27129FA20A667DCEE (U3CReloadU3Ed__6_t628014D211AF69CCF85ED6CA98A6C3B12DFA04F8* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CReloadU3Ed__6_System_Collections_IEnumerator_Reset_m67B87F6B264F9C3F12C84CF27129FA20A667DCEE_RuntimeMethod_var)));
	}
}
// System.Object GunController/<Reload>d__6::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CReloadU3Ed__6_System_Collections_IEnumerator_get_Current_mE6117F7ED363FBA1B1BA98609E5D0367BE462E63 (U3CReloadU3Ed__6_t628014D211AF69CCF85ED6CA98A6C3B12DFA04F8* __this, const RuntimeMethod* method) 
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
// System.Void InputManager::OnMoving(UnityEngine.InputSystem.InputValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputManager_OnMoving_m34B9C60408D85C91BE07343DC71AB83B759D7F2F (InputManager_t29A2200021AE0E0EB6F34CB1B9DF031B3AE02677* __this, InputValue_t4F053958518BDF6FD85C55F31B0597C9521B4231* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputValue_Get_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mBA56AD2906D3B6F2B87F3DE248CB62E1AA4D2293_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// direction = value.Get<Vector2>();
		InputValue_t4F053958518BDF6FD85C55F31B0597C9521B4231* L_0 = ___value0;
		NullCheck(L_0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = InputValue_Get_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mBA56AD2906D3B6F2B87F3DE248CB62E1AA4D2293(L_0, InputValue_Get_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mBA56AD2906D3B6F2B87F3DE248CB62E1AA4D2293_RuntimeMethod_var);
		__this->___direction_6 = L_1;
		// _controller.RotatePlayer(direction);
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_2 = __this->____controller_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = __this->___direction_6;
		NullCheck(L_2);
		PlayerController_RotatePlayer_m51FE0D6CE0EB4A18B90139BE981D21BFD17BE309(L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Void InputManager::OnRestartGame(UnityEngine.InputSystem.InputValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputManager_OnRestartGame_m2BC332A983DCB78679382FAE5F6925ED3D6AB915 (InputManager_t29A2200021AE0E0EB6F34CB1B9DF031B3AE02677* __this, InputValue_t4F053958518BDF6FD85C55F31B0597C9521B4231* ___value0, const RuntimeMethod* method) 
{
	{
		// _manager.RestartGame();
		ManagerScore_tEA2640F9E15FCE4A35A098CE608EAAB30B03341B* L_0 = __this->____manager_5;
		NullCheck(L_0);
		ManagerScore_RestartGame_mB170ABD83FD254DBD36A3BB953170A763BC4527B(L_0, NULL);
		// }
		return;
	}
}
// System.Void InputManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputManager_Update_m5CEF4B04E7336E0F24B004F98C71799F3DFD5656 (InputManager_t29A2200021AE0E0EB6F34CB1B9DF031B3AE02677* __this, const RuntimeMethod* method) 
{
	{
		// if(direction == Vector2.zero) return;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->___direction_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline(NULL);
		bool L_2;
		L_2 = Vector2_op_Equality_m5447BF12C18339431AB8AF02FA463C543D88D463_inline(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_0013;
		}
	}
	{
		// if(direction == Vector2.zero) return;
		return;
	}

IL_0013:
	{
		// _controller.Move(direction);
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_3 = __this->____controller_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = __this->___direction_6;
		NullCheck(L_3);
		PlayerController_Move_m36B0423FB418CAB1625366E66BA566D26A8AE11D(L_3, L_4, NULL);
		// }
		return;
	}
}
// System.Void InputManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputManager__ctor_m52D2F3B9FA0D50C52BCC92486F49B300E9334C2A (InputManager_t29A2200021AE0E0EB6F34CB1B9DF031B3AE02677* __this, const RuntimeMethod* method) 
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
// System.Void ManagerScore::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManagerScore_Start_m979518CC472CE0142C48F52719F4E979A142D04A (ManagerScore_tEA2640F9E15FCE4A35A098CE608EAAB30B03341B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisGridLayoutGroup_tEE9C68F88C13E6BD716BBD356D008ACFB63F1940_mDF4A2E04045EFD3D063DDB65366582425319C960_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManagerScore_AddScore_mF2EA50B5706C32A0BF0D3E5F584ABFDA4C2A856F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManagerScore_ChechVolna_mD77E535B6BF0F6D712B6518793CEA38550F8AFBC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManagerScore_Damage_m483E78F5F0BE918DCCD7C0E86807EC4173942760_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&addScore_tD00A6AAD847AA5BC2F408B3161000D4210BAE6E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&damage_tC5C439FFD24395BBE32C1A980C0FD6CAB0EEA247_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _panelGameOver.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->____panelGameOver_6;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// _livesGroup = _panelLives.GetComponent<GridLayoutGroup>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->____panelLives_7;
		NullCheck(L_1);
		GridLayoutGroup_tEE9C68F88C13E6BD716BBD356D008ACFB63F1940* L_2;
		L_2 = GameObject_GetComponent_TisGridLayoutGroup_tEE9C68F88C13E6BD716BBD356D008ACFB63F1940_mDF4A2E04045EFD3D063DDB65366582425319C960(L_1, GameObject_GetComponent_TisGridLayoutGroup_tEE9C68F88C13E6BD716BBD356D008ACFB63F1940_mDF4A2E04045EFD3D063DDB65366582425319C960_RuntimeMethod_var);
		__this->____livesGroup_25 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____livesGroup_25), (void*)L_2);
		// _livesTransform = _panelLives.GetComponent<RectTransform>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->____panelLives_7;
		NullCheck(L_3);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_4;
		L_4 = GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4(L_3, GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var);
		__this->____livesTransform_24 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____livesTransform_24), (void*)L_4);
		// _enemyController.EnemyKill += AddScore;
		EnemyController_tBB576F8CA41609F61E7D9AD27B14D49FB5A11C4A* L_5 = __this->____enemyController_14;
		addScore_tD00A6AAD847AA5BC2F408B3161000D4210BAE6E3* L_6 = (addScore_tD00A6AAD847AA5BC2F408B3161000D4210BAE6E3*)il2cpp_codegen_object_new(addScore_tD00A6AAD847AA5BC2F408B3161000D4210BAE6E3_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		addScore__ctor_mCBCD5A3A8C93CFEFD81ECDEB6C766FCF27235FBC(L_6, __this, (intptr_t)((void*)ManagerScore_AddScore_mF2EA50B5706C32A0BF0D3E5F584ABFDA4C2A856F_RuntimeMethod_var), NULL);
		NullCheck(L_5);
		EnemyController_add_EnemyKill_m1719A10ACBBF03FB713C1A64EE3261B68C77449A(L_5, L_6, NULL);
		// _enemyController.PlayerDamage += Damage;
		EnemyController_tBB576F8CA41609F61E7D9AD27B14D49FB5A11C4A* L_7 = __this->____enemyController_14;
		damage_tC5C439FFD24395BBE32C1A980C0FD6CAB0EEA247* L_8 = (damage_tC5C439FFD24395BBE32C1A980C0FD6CAB0EEA247*)il2cpp_codegen_object_new(damage_tC5C439FFD24395BBE32C1A980C0FD6CAB0EEA247_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		damage__ctor_m3967878663873E7F7305125C87BA76245AB9AE8C(L_8, __this, (intptr_t)((void*)ManagerScore_Damage_m483E78F5F0BE918DCCD7C0E86807EC4173942760_RuntimeMethod_var), NULL);
		NullCheck(L_7);
		EnemyController_add_PlayerDamage_mBBA28C2758A899FD9C9A6A52405FC7869B2441D4(L_7, L_8, NULL);
		// _enemyController.NextVolna += ChechVolna;
		EnemyController_tBB576F8CA41609F61E7D9AD27B14D49FB5A11C4A* L_9 = __this->____enemyController_14;
		addScore_tD00A6AAD847AA5BC2F408B3161000D4210BAE6E3* L_10 = (addScore_tD00A6AAD847AA5BC2F408B3161000D4210BAE6E3*)il2cpp_codegen_object_new(addScore_tD00A6AAD847AA5BC2F408B3161000D4210BAE6E3_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		addScore__ctor_mCBCD5A3A8C93CFEFD81ECDEB6C766FCF27235FBC(L_10, __this, (intptr_t)((void*)ManagerScore_ChechVolna_mD77E535B6BF0F6D712B6518793CEA38550F8AFBC_RuntimeMethod_var), NULL);
		NullCheck(L_9);
		EnemyController_add_NextVolna_m13BB15A753B75E86CFC6F42F52FB635E0FF98B42(L_9, L_10, NULL);
		// _inputManager.enabled = false;
		InputManager_t29A2200021AE0E0EB6F34CB1B9DF031B3AE02677* L_11 = __this->____inputManager_15;
		NullCheck(L_11);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_11, (bool)0, NULL);
		// _MasageVolna.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = __this->____MasageVolna_10;
		NullCheck(L_12);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_12, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void ManagerScore::AddScore(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManagerScore_AddScore_mF2EA50B5706C32A0BF0D3E5F584ABFDA4C2A856F (ManagerScore_tEA2640F9E15FCE4A35A098CE608EAAB30B03341B* __this, int32_t ___score0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral679C291DDDABA344C75D8BC842F0F95E46B6B2EA);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _totalScore += score;
		int32_t L_0 = __this->____totalScore_4;
		int32_t L_1 = ___score0;
		__this->____totalScore_4 = ((int32_t)il2cpp_codegen_add(L_0, L_1));
		// textScore.text = $"Score: {_totalScore}";
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_2 = __this->___textScore_5;
		int32_t L_3 = __this->____totalScore_4;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteral679C291DDDABA344C75D8BC842F0F95E46B6B2EA, L_5, NULL);
		NullCheck(L_2);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_2, L_6);
		// }
		return;
	}
}
// System.Void ManagerScore::CreateIconHP(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManagerScore_CreateIconHP_mDAAF6B3034CCEB7FA55F4C7700476E7B31876FA4 (ManagerScore_tEA2640F9E15FCE4A35A098CE608EAAB30B03341B* __this, int32_t ___hp0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		// _panelLives.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->____panelLives_7;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// var size = MathParameters.MathSizeField(1, hp, sizeHeart, _livesGroup.spacing.x+_livesGroup.padding.bottom);
		int32_t L_1 = ___hp0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = __this->___sizeHeart_18;
		GridLayoutGroup_tEE9C68F88C13E6BD716BBD356D008ACFB63F1940* L_3 = __this->____livesGroup_25;
		NullCheck(L_3);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = GridLayoutGroup_get_spacing_m19BC15652BF18D051B0998C14F13DB83191F3E58_inline(L_3, NULL);
		float L_5 = L_4.___x_0;
		GridLayoutGroup_tEE9C68F88C13E6BD716BBD356D008ACFB63F1940* L_6 = __this->____livesGroup_25;
		NullCheck(L_6);
		RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* L_7;
		L_7 = LayoutGroup_get_padding_m91ABA3C588704717EDC82E72BA6D1B82711FE83C_inline(L_6, NULL);
		NullCheck(L_7);
		int32_t L_8;
		L_8 = RectOffset_get_bottom_mDF9C1EC125F94245D5532C34FCFB65BE0F2A9D0B(L_7, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9;
		L_9 = MathParameters_MathSizeField_m1D51DA5E499380A110406FC4B08A61325344348B(1, L_1, L_2, ((float)il2cpp_codegen_add(L_5, ((float)L_8))), NULL);
		V_0 = L_9;
		// _livesGroup.cellSize = sizeHeart;
		GridLayoutGroup_tEE9C68F88C13E6BD716BBD356D008ACFB63F1940* L_10 = __this->____livesGroup_25;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11 = __this->___sizeHeart_18;
		NullCheck(L_10);
		GridLayoutGroup_set_cellSize_m0A3FF07694BDBF52D973597978FC87B0941BE5F9(L_10, L_11, NULL);
		// _livesTransform.SetSize(size);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_12 = __this->____livesTransform_24;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13 = V_0;
		ModificateRectTransform_SetSize_m7254BE703F21042B201C1B68F07B85E0D619C562(L_12, L_13, NULL);
		// for (int i = 0; i < hp; i++)
		V_1 = 0;
		goto IL_0078;
	}

IL_005d:
	{
		// Instantiate(_prefabHP, _panelLives.transform);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = __this->____prefabHP_8;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = __this->____panelLives_7;
		NullCheck(L_15);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_15, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17;
		L_17 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934(L_14, L_16, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934_RuntimeMethod_var);
		// for (int i = 0; i < hp; i++)
		int32_t L_18 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_0078:
	{
		// for (int i = 0; i < hp; i++)
		int32_t L_19 = V_1;
		int32_t L_20 = ___hp0;
		if ((((int32_t)L_19) < ((int32_t)L_20)))
		{
			goto IL_005d;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ManagerScore::ChechVolna(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManagerScore_ChechVolna_mD77E535B6BF0F6D712B6518793CEA38550F8AFBC (ManagerScore_tEA2640F9E15FCE4A35A098CE608EAAB30B03341B* __this, int32_t ___volna0, const RuntimeMethod* method) 
{
	{
		// if (volna == countVoln)
		int32_t L_0 = ___volna0;
		int32_t L_1 = __this->___countVoln_26;
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_0011;
		}
	}
	{
		// Finish(true);
		ManagerScore_Finish_m67EFA43C43EBB7E1A195764195DCF241C3FF6F7F(__this, (bool)1, NULL);
		// return;
		return;
	}

IL_0011:
	{
		// StartCoroutine(SeeMasage(volna));
		int32_t L_2 = ___volna0;
		RuntimeObject* L_3;
		L_3 = ManagerScore_SeeMasage_m0D32E2159DD45773393D1C4D2A512F82F3704DC7(__this, L_2, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_4;
		L_4 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_3, NULL);
		// }
		return;
	}
}
// System.Void ManagerScore::Damage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManagerScore_Damage_m483E78F5F0BE918DCCD7C0E86807EC4173942760 (ManagerScore_tEA2640F9E15FCE4A35A098CE608EAAB30B03341B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(_panelLives.transform.childCount != 0) Destroy(_panelLives.transform.GetChild(0).gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->____panelLives_7;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0(L_1, NULL);
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		// if(_panelLives.transform.childCount != 0) Destroy(_panelLives.transform.GetChild(0).gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->____panelLives_7;
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_3, NULL);
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_4, 0, NULL);
		NullCheck(L_5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_5, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_6, NULL);
	}

IL_002d:
	{
		// hpPlayerMax -= 1;
		int32_t L_7 = __this->___hpPlayerMax_19;
		__this->___hpPlayerMax_19 = ((int32_t)il2cpp_codegen_subtract(L_7, 1));
		// if (hpPlayerMax == 0)
		int32_t L_8 = __this->___hpPlayerMax_19;
		if (L_8)
		{
			goto IL_004a;
		}
	}
	{
		// Finish(false);
		ManagerScore_Finish_m67EFA43C43EBB7E1A195764195DCF241C3FF6F7F(__this, (bool)0, NULL);
	}

IL_004a:
	{
		// }
		return;
	}
}
// System.Void ManagerScore::Finish(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManagerScore_Finish_m67EFA43C43EBB7E1A195764195DCF241C3FF6F7F (ManagerScore_tEA2640F9E15FCE4A35A098CE608EAAB30B03341B* __this, bool ___win0, const RuntimeMethod* method) 
{
	{
		// if (win)
		bool L_0 = ___win0;
		if (!L_0)
		{
			goto IL_003f;
		}
	}
	{
		// _inputManager.enabled = false;
		InputManager_t29A2200021AE0E0EB6F34CB1B9DF031B3AE02677* L_1 = __this->____inputManager_15;
		NullCheck(L_1);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_1, (bool)0, NULL);
		// _enemyController.LosePlayer();
		EnemyController_tBB576F8CA41609F61E7D9AD27B14D49FB5A11C4A* L_2 = __this->____enemyController_14;
		NullCheck(L_2);
		EnemyController_LosePlayer_m9EE5D93A98D32E7812B6F70C459ABAF33D8C70DE(L_2, NULL);
		// _panelGameOver.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->____panelGameOver_6;
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)1, NULL);
		// _gun.Restart(true);
		GunController_t7AFE6A92E37B9C51D7A5860FB2A93194D28E71D9* L_4 = __this->____gun_16;
		NullCheck(L_4);
		GunController_Restart_mF72A215A651548928D5F29E13ACC3FBDE5947122_inline(L_4, (bool)1, NULL);
		// _panelLives.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->____panelLives_7;
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)0, NULL);
		return;
	}

IL_003f:
	{
		// _gun.Restart(true);
		GunController_t7AFE6A92E37B9C51D7A5860FB2A93194D28E71D9* L_6 = __this->____gun_16;
		NullCheck(L_6);
		GunController_Restart_mF72A215A651548928D5F29E13ACC3FBDE5947122_inline(L_6, (bool)1, NULL);
		// _inputManager.enabled = false;
		InputManager_t29A2200021AE0E0EB6F34CB1B9DF031B3AE02677* L_7 = __this->____inputManager_15;
		NullCheck(L_7);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_7, (bool)0, NULL);
		// _enemyController.LosePlayer();
		EnemyController_tBB576F8CA41609F61E7D9AD27B14D49FB5A11C4A* L_8 = __this->____enemyController_14;
		NullCheck(L_8);
		EnemyController_LosePlayer_m9EE5D93A98D32E7812B6F70C459ABAF33D8C70DE(L_8, NULL);
		// _panelGameOver.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = __this->____panelGameOver_6;
		NullCheck(L_9);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_9, (bool)1, NULL);
		// _panelLives.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = __this->____panelLives_7;
		NullCheck(L_10);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_10, (bool)0, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator ManagerScore::SeeMasage(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ManagerScore_SeeMasage_m0D32E2159DD45773393D1C4D2A512F82F3704DC7 (ManagerScore_tEA2640F9E15FCE4A35A098CE608EAAB30B03341B* __this, int32_t ___volnaa0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CSeeMasageU3Ed__29_t90E5209DABAE5C4686ACF00479EA80A8EED8686B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CSeeMasageU3Ed__29_t90E5209DABAE5C4686ACF00479EA80A8EED8686B* L_0 = (U3CSeeMasageU3Ed__29_t90E5209DABAE5C4686ACF00479EA80A8EED8686B*)il2cpp_codegen_object_new(U3CSeeMasageU3Ed__29_t90E5209DABAE5C4686ACF00479EA80A8EED8686B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CSeeMasageU3Ed__29__ctor_m89677A97569A8660F0F3781665B3EB46A747149E(L_0, 0, NULL);
		U3CSeeMasageU3Ed__29_t90E5209DABAE5C4686ACF00479EA80A8EED8686B* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		U3CSeeMasageU3Ed__29_t90E5209DABAE5C4686ACF00479EA80A8EED8686B* L_2 = L_1;
		int32_t L_3 = ___volnaa0;
		NullCheck(L_2);
		L_2->___volnaa_3 = L_3;
		return L_2;
	}
}
// System.Void ManagerScore::StartGame(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManagerScore_StartGame_m78499B00AC8D1AC64E671A97C539F3A535016BD3 (ManagerScore_tEA2640F9E15FCE4A35A098CE608EAAB30B03341B* __this, int32_t ___slognost0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m41969899D3257B63DFB0E09C78A18D1869EC180C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _panelStart.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->____panelStart_9;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// _background.StartMoving();
		MovingBackground_tD48A0A7758B27C9D87C59CAEE3D4BDD2E6F53EDC* L_1 = __this->____background_17;
		NullCheck(L_1);
		MovingBackground_StartMoving_m334E58D7DF7FABA5FD939594D53602326CD73E3D(L_1, NULL);
		// AddScore(0);
		ManagerScore_AddScore_mF2EA50B5706C32A0BF0D3E5F584ABFDA4C2A856F(__this, 0, NULL);
		// _gun.Restart(false);
		GunController_t7AFE6A92E37B9C51D7A5860FB2A93194D28E71D9* L_2 = __this->____gun_16;
		NullCheck(L_2);
		GunController_Restart_mF72A215A651548928D5F29E13ACC3FBDE5947122_inline(L_2, (bool)0, NULL);
		// _gun.Fire();
		GunController_t7AFE6A92E37B9C51D7A5860FB2A93194D28E71D9* L_3 = __this->____gun_16;
		NullCheck(L_3);
		GunController_Fire_mBD600A2F51289DE03F932FCCCB63F0AEA4C8C9B0(L_3, NULL);
		int32_t L_4 = ___slognost0;
		switch (L_4)
		{
			case 0:
			{
				goto IL_0048;
			}
			case 1:
			{
				goto IL_0093;
			}
			case 2:
			{
				goto IL_00ee;
			}
		}
	}
	{
		return;
	}

IL_0048:
	{
		// CreateIconHP(hpPlayerMax);
		int32_t L_5 = __this->___hpPlayerMax_19;
		ManagerScore_CreateIconHP_mDAAF6B3034CCEB7FA55F4C7700476E7B31876FA4(__this, L_5, NULL);
		// _enemyController.StartAttack(_levelEasy.Enemies, _speedEasy);
		EnemyController_tBB576F8CA41609F61E7D9AD27B14D49FB5A11C4A* L_6 = __this->____enemyController_14;
		LevelArmy_t2FF55B4DCEAE7CB9E011C7003F10438A6EF31E0D* L_7 = __this->____levelEasy_11;
		NullCheck(L_7);
		List_1_tE8332A13AE0F0FF8326595223E3E738FCB53912C* L_8 = L_7->___Enemies_4;
		float L_9 = __this->____speedEasy_20;
		NullCheck(L_6);
		EnemyController_StartAttack_m25140CD4BD71B9453E07C82C054D26DF89DE6DAB(L_6, L_8, L_9, NULL);
		// countVoln = _levelEasy.Enemies.Count;
		LevelArmy_t2FF55B4DCEAE7CB9E011C7003F10438A6EF31E0D* L_10 = __this->____levelEasy_11;
		NullCheck(L_10);
		List_1_tE8332A13AE0F0FF8326595223E3E738FCB53912C* L_11 = L_10->___Enemies_4;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = List_1_get_Count_m41969899D3257B63DFB0E09C78A18D1869EC180C_inline(L_11, List_1_get_Count_m41969899D3257B63DFB0E09C78A18D1869EC180C_RuntimeMethod_var);
		__this->___countVoln_26 = L_12;
		// _inputManager.enabled = true;
		InputManager_t29A2200021AE0E0EB6F34CB1B9DF031B3AE02677* L_13 = __this->____inputManager_15;
		NullCheck(L_13);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_13, (bool)1, NULL);
		// break;
		return;
	}

IL_0093:
	{
		// CreateIconHP(hpPlayerMax-1);
		int32_t L_14 = __this->___hpPlayerMax_19;
		ManagerScore_CreateIconHP_mDAAF6B3034CCEB7FA55F4C7700476E7B31876FA4(__this, ((int32_t)il2cpp_codegen_subtract(L_14, 1)), NULL);
		// hpPlayerMax -= 1;
		int32_t L_15 = __this->___hpPlayerMax_19;
		__this->___hpPlayerMax_19 = ((int32_t)il2cpp_codegen_subtract(L_15, 1));
		// _enemyController.StartAttack(_levelMedium.Enemies, _speedMedium);
		EnemyController_tBB576F8CA41609F61E7D9AD27B14D49FB5A11C4A* L_16 = __this->____enemyController_14;
		LevelArmy_t2FF55B4DCEAE7CB9E011C7003F10438A6EF31E0D* L_17 = __this->____levelMedium_12;
		NullCheck(L_17);
		List_1_tE8332A13AE0F0FF8326595223E3E738FCB53912C* L_18 = L_17->___Enemies_4;
		float L_19 = __this->____speedMedium_21;
		NullCheck(L_16);
		EnemyController_StartAttack_m25140CD4BD71B9453E07C82C054D26DF89DE6DAB(L_16, L_18, L_19, NULL);
		// countVoln = _levelMedium.Enemies.Count;
		LevelArmy_t2FF55B4DCEAE7CB9E011C7003F10438A6EF31E0D* L_20 = __this->____levelMedium_12;
		NullCheck(L_20);
		List_1_tE8332A13AE0F0FF8326595223E3E738FCB53912C* L_21 = L_20->___Enemies_4;
		NullCheck(L_21);
		int32_t L_22;
		L_22 = List_1_get_Count_m41969899D3257B63DFB0E09C78A18D1869EC180C_inline(L_21, List_1_get_Count_m41969899D3257B63DFB0E09C78A18D1869EC180C_RuntimeMethod_var);
		__this->___countVoln_26 = L_22;
		// _inputManager.enabled = true;
		InputManager_t29A2200021AE0E0EB6F34CB1B9DF031B3AE02677* L_23 = __this->____inputManager_15;
		NullCheck(L_23);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_23, (bool)1, NULL);
		// break;
		return;
	}

IL_00ee:
	{
		// CreateIconHP(1);
		ManagerScore_CreateIconHP_mDAAF6B3034CCEB7FA55F4C7700476E7B31876FA4(__this, 1, NULL);
		// hpPlayerMax = 1;
		__this->___hpPlayerMax_19 = 1;
		// _enemyController.StartAttack(_levelHard.Enemies, _speedHard);
		EnemyController_tBB576F8CA41609F61E7D9AD27B14D49FB5A11C4A* L_24 = __this->____enemyController_14;
		LevelArmy_t2FF55B4DCEAE7CB9E011C7003F10438A6EF31E0D* L_25 = __this->____levelHard_13;
		NullCheck(L_25);
		List_1_tE8332A13AE0F0FF8326595223E3E738FCB53912C* L_26 = L_25->___Enemies_4;
		float L_27 = __this->____speedHard_22;
		NullCheck(L_24);
		EnemyController_StartAttack_m25140CD4BD71B9453E07C82C054D26DF89DE6DAB(L_24, L_26, L_27, NULL);
		// countVoln = _levelHard.Enemies.Count;
		LevelArmy_t2FF55B4DCEAE7CB9E011C7003F10438A6EF31E0D* L_28 = __this->____levelHard_13;
		NullCheck(L_28);
		List_1_tE8332A13AE0F0FF8326595223E3E738FCB53912C* L_29 = L_28->___Enemies_4;
		NullCheck(L_29);
		int32_t L_30;
		L_30 = List_1_get_Count_m41969899D3257B63DFB0E09C78A18D1869EC180C_inline(L_29, List_1_get_Count_m41969899D3257B63DFB0E09C78A18D1869EC180C_RuntimeMethod_var);
		__this->___countVoln_26 = L_30;
		// _inputManager.enabled = true;
		InputManager_t29A2200021AE0E0EB6F34CB1B9DF031B3AE02677* L_31 = __this->____inputManager_15;
		NullCheck(L_31);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_31, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void ManagerScore::RestartGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManagerScore_RestartGame_mB170ABD83FD254DBD36A3BB953170A763BC4527B (ManagerScore_tEA2640F9E15FCE4A35A098CE608EAAB30B03341B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _gun.Restart(true);
		GunController_t7AFE6A92E37B9C51D7A5860FB2A93194D28E71D9* L_0 = __this->____gun_16;
		NullCheck(L_0);
		GunController_Restart_mF72A215A651548928D5F29E13ACC3FBDE5947122_inline(L_0, (bool)1, NULL);
		// _inputManager.enabled = false;
		InputManager_t29A2200021AE0E0EB6F34CB1B9DF031B3AE02677* L_1 = __this->____inputManager_15;
		NullCheck(L_1);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_1, (bool)0, NULL);
		// _MasageVolna.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->____MasageVolna_10;
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)0, NULL);
		// _panelGameOver.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->____panelGameOver_6;
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)0, NULL);
		// _panelStart.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->____panelStart_9;
		NullCheck(L_4);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)1, NULL);
		// _enemyController.RemovePositionArmy();
		EnemyController_tBB576F8CA41609F61E7D9AD27B14D49FB5A11C4A* L_5 = __this->____enemyController_14;
		NullCheck(L_5);
		EnemyController_RemovePositionArmy_m041084DF14C8C8769A2C748B84BE48014B365D2A(L_5, NULL);
		// _totalScore =0;
		__this->____totalScore_4 = 0;
		// textScore.text = String.Empty;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_6 = __this->___textScore_5;
		String_t* L_7 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		NullCheck(L_6);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_6, L_7);
		// }
		return;
	}
}
// System.Void ManagerScore::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManagerScore__ctor_mF1CDAE6E5671FAF0FEA1077018C53EE6CC8AE564 (ManagerScore_tEA2640F9E15FCE4A35A098CE608EAAB30B03341B* __this, const RuntimeMethod* method) 
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
// System.Void ManagerScore/<SeeMasage>d__29::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSeeMasageU3Ed__29__ctor_m89677A97569A8660F0F3781665B3EB46A747149E (U3CSeeMasageU3Ed__29_t90E5209DABAE5C4686ACF00479EA80A8EED8686B* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void ManagerScore/<SeeMasage>d__29::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSeeMasageU3Ed__29_System_IDisposable_Dispose_m17D02E203E5905DBD0924A8F2F12A620C7FC11ED (U3CSeeMasageU3Ed__29_t90E5209DABAE5C4686ACF00479EA80A8EED8686B* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean ManagerScore/<SeeMasage>d__29::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CSeeMasageU3Ed__29_MoveNext_m91CF79DDE80DBB7887B3A50F3BC8950A211638AE (U3CSeeMasageU3Ed__29_t90E5209DABAE5C4686ACF00479EA80A8EED8686B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_mBDBF977A8C7734F6EDD83FC65C6FDDE74427611E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral02C39B3BF8704112F5A0533C142CD1171887C7C7);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ManagerScore_tEA2640F9E15FCE4A35A098CE608EAAB30B03341B* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		ManagerScore_tEA2640F9E15FCE4A35A098CE608EAAB30B03341B* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_009d;
			}
			case 2:
			{
				goto IL_00d5;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// _MasageVolna.SetActive(true);
		ManagerScore_tEA2640F9E15FCE4A35A098CE608EAAB30B03341B* L_3 = V_1;
		NullCheck(L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = L_3->____MasageVolna_10;
		NullCheck(L_4);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)1, NULL);
		// var trans = _MasageVolna.GetComponent<TextMeshProUGUI>();
		ManagerScore_tEA2640F9E15FCE4A35A098CE608EAAB30B03341B* L_5 = V_1;
		NullCheck(L_5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = L_5->____MasageVolna_10;
		NullCheck(L_6);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_7;
		L_7 = GameObject_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_mBDBF977A8C7734F6EDD83FC65C6FDDE74427611E(L_6, GameObject_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_mBDBF977A8C7734F6EDD83FC65C6FDDE74427611E_RuntimeMethod_var);
		__this->___U3CtransU3E5__2_4 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CtransU3E5__2_4), (void*)L_7);
		// trans.text = $"Volna {volnaa}";
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_8 = __this->___U3CtransU3E5__2_4;
		int32_t L_9 = __this->___volnaa_3;
		int32_t L_10 = L_9;
		RuntimeObject* L_11 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_10);
		String_t* L_12;
		L_12 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteral02C39B3BF8704112F5A0533C142CD1171887C7C7, L_11, NULL);
		NullCheck(L_8);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_8, L_12);
		// trans.DOFade(1, _speedEnableMasage);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_13 = __this->___U3CtransU3E5__2_4;
		ManagerScore_tEA2640F9E15FCE4A35A098CE608EAAB30B03341B* L_14 = V_1;
		NullCheck(L_14);
		float L_15 = L_14->____speedEnableMasage_23;
		TweenerCore_3_tC0593021331EF2AF46590E2184F512C0D38FD4C3* L_16;
		L_16 = DOTweenModuleUI_DOFade_m3B026C515EBD5B21A4F0062F72003DEA9E6A1306(L_13, (1.0f), L_15, NULL);
		// yield return new WaitForSeconds(2 + _speedEnableMasage);
		ManagerScore_tEA2640F9E15FCE4A35A098CE608EAAB30B03341B* L_17 = V_1;
		NullCheck(L_17);
		float L_18 = L_17->____speedEnableMasage_23;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_19 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_19);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_19, ((float)il2cpp_codegen_add((2.0f), L_18)), NULL);
		__this->___U3CU3E2__current_1 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_19);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_009d:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// trans.DOFade(0, _speedEnableMasage);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_20 = __this->___U3CtransU3E5__2_4;
		ManagerScore_tEA2640F9E15FCE4A35A098CE608EAAB30B03341B* L_21 = V_1;
		NullCheck(L_21);
		float L_22 = L_21->____speedEnableMasage_23;
		TweenerCore_3_tC0593021331EF2AF46590E2184F512C0D38FD4C3* L_23;
		L_23 = DOTweenModuleUI_DOFade_m3B026C515EBD5B21A4F0062F72003DEA9E6A1306(L_20, (0.0f), L_22, NULL);
		// yield return new WaitForSeconds(_speedEnableMasage);
		ManagerScore_tEA2640F9E15FCE4A35A098CE608EAAB30B03341B* L_24 = V_1;
		NullCheck(L_24);
		float L_25 = L_24->____speedEnableMasage_23;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_26 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_26);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_26, L_25, NULL);
		__this->___U3CU3E2__current_1 = L_26;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_26);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_00d5:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// _MasageVolna.SetActive(false);
		ManagerScore_tEA2640F9E15FCE4A35A098CE608EAAB30B03341B* L_27 = V_1;
		NullCheck(L_27);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_28 = L_27->____MasageVolna_10;
		NullCheck(L_28);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_28, (bool)0, NULL);
		// }
		return (bool)0;
	}
}
// System.Object ManagerScore/<SeeMasage>d__29::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSeeMasageU3Ed__29_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mE7C7C0796A7D6E6937EDA16D51FA544C233469D6 (U3CSeeMasageU3Ed__29_t90E5209DABAE5C4686ACF00479EA80A8EED8686B* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void ManagerScore/<SeeMasage>d__29::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSeeMasageU3Ed__29_System_Collections_IEnumerator_Reset_m02ED5CF10CD3ADBFD1ECF4435328FD1203F09ED0 (U3CSeeMasageU3Ed__29_t90E5209DABAE5C4686ACF00479EA80A8EED8686B* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CSeeMasageU3Ed__29_System_Collections_IEnumerator_Reset_m02ED5CF10CD3ADBFD1ECF4435328FD1203F09ED0_RuntimeMethod_var)));
	}
}
// System.Object ManagerScore/<SeeMasage>d__29::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSeeMasageU3Ed__29_System_Collections_IEnumerator_get_Current_mD6695FEE57AADB87FC7FECAAB88E66A19935AAAE (U3CSeeMasageU3Ed__29_t90E5209DABAE5C4686ACF00479EA80A8EED8686B* __this, const RuntimeMethod* method) 
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
// UnityEngine.Vector2 MathParameters::MathSizeField(System.Int32,System.Int32,UnityEngine.Vector2,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 MathParameters_MathSizeField_m1D51DA5E499380A110406FC4B08A61325344348B (int32_t ___row0, int32_t ___collumn1, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___sizeenemy2, float ___spacining3, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// var size_x = (sizeenemy.x + spacining) * collumn;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___sizeenemy2;
		float L_1 = L_0.___x_0;
		float L_2 = ___spacining3;
		int32_t L_3 = ___collumn1;
		// var size_y = (sizeenemy.y + spacining) * row;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___sizeenemy2;
		float L_5 = L_4.___y_1;
		float L_6 = ___spacining3;
		int32_t L_7 = ___row0;
		V_0 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_add(L_5, L_6)), ((float)L_7)));
		// return new Vector2(size_x, size_y);
		float L_8 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_9), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_add(L_1, L_2)), ((float)L_3))), L_8, /*hidden argument*/NULL);
		return L_9;
	}
}
// System.Int32 MathParameters::MatchCollumnEnemy(System.Collections.Generic.List`1<RowEnemy>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MathParameters_MatchCollumnEnemy_m8CAD731221855CD27DDB3A39188A35F9ED0FA279 (List_1_t09D143B09E6E0E7D300E26051BA7D55EBF012469* ___army0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m9EE5F0139D318AEF5BAB6719C9B3F5D5D0A38E5C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m5733CB09191684FB6786BFA75ABF6978F39EE823_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mF2C536319871A057EF46DDB6BEE424BA1325EA9F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m11FE8D8E0C66BD2FF01A44DEFB6DFACEFC22C7D6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4573A12BFDA535926500C04E88A94540C95C395D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Enumerator_t4C73AA8AE76FF12165CFE3487C91A2B65158873F V_1;
	memset((&V_1), 0, sizeof(V_1));
	RowEnemy_t2EF20FA4770986CA2A4FF42842E44F9498C60045* V_2 = NULL;
	{
		// int collumn = 0;
		V_0 = 0;
		// foreach (RowEnemy row in army)
		List_1_t09D143B09E6E0E7D300E26051BA7D55EBF012469* L_0 = ___army0;
		NullCheck(L_0);
		Enumerator_t4C73AA8AE76FF12165CFE3487C91A2B65158873F L_1;
		L_1 = List_1_GetEnumerator_m11FE8D8E0C66BD2FF01A44DEFB6DFACEFC22C7D6(L_0, List_1_GetEnumerator_m11FE8D8E0C66BD2FF01A44DEFB6DFACEFC22C7D6_RuntimeMethod_var);
		V_1 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0038:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m9EE5F0139D318AEF5BAB6719C9B3F5D5D0A38E5C((&V_1), Enumerator_Dispose_m9EE5F0139D318AEF5BAB6719C9B3F5D5D0A38E5C_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_002d_1;
			}

IL_000b_1:
			{
				// foreach (RowEnemy row in army)
				RowEnemy_t2EF20FA4770986CA2A4FF42842E44F9498C60045* L_2;
				L_2 = Enumerator_get_Current_mF2C536319871A057EF46DDB6BEE424BA1325EA9F_inline((&V_1), Enumerator_get_Current_mF2C536319871A057EF46DDB6BEE424BA1325EA9F_RuntimeMethod_var);
				V_2 = L_2;
				// if (row._isPlace.Count > collumn) collumn = row._isPlace.Count;
				RowEnemy_t2EF20FA4770986CA2A4FF42842E44F9498C60045* L_3 = V_2;
				NullCheck(L_3);
				List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* L_4 = L_3->____isPlace_0;
				NullCheck(L_4);
				int32_t L_5;
				L_5 = List_1_get_Count_m4573A12BFDA535926500C04E88A94540C95C395D_inline(L_4, List_1_get_Count_m4573A12BFDA535926500C04E88A94540C95C395D_RuntimeMethod_var);
				int32_t L_6 = V_0;
				if ((((int32_t)L_5) <= ((int32_t)L_6)))
				{
					goto IL_002d_1;
				}
			}
			{
				// if (row._isPlace.Count > collumn) collumn = row._isPlace.Count;
				RowEnemy_t2EF20FA4770986CA2A4FF42842E44F9498C60045* L_7 = V_2;
				NullCheck(L_7);
				List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* L_8 = L_7->____isPlace_0;
				NullCheck(L_8);
				int32_t L_9;
				L_9 = List_1_get_Count_m4573A12BFDA535926500C04E88A94540C95C395D_inline(L_8, List_1_get_Count_m4573A12BFDA535926500C04E88A94540C95C395D_RuntimeMethod_var);
				V_0 = L_9;
			}

IL_002d_1:
			{
				// foreach (RowEnemy row in army)
				bool L_10;
				L_10 = Enumerator_MoveNext_m5733CB09191684FB6786BFA75ABF6978F39EE823((&V_1), Enumerator_MoveNext_m5733CB09191684FB6786BFA75ABF6978F39EE823_RuntimeMethod_var);
				if (L_10)
				{
					goto IL_000b_1;
				}
			}
			{
				goto IL_0046;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0046:
	{
		// return collumn;
		int32_t L_11 = V_0;
		return L_11;
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
// System.Void ModificateRectTransform::SetDefaultScale(UnityEngine.RectTransform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModificateRectTransform_SetDefaultScale_mCF4ECA87D80BE748C1C671E17789CC6EE0CA7886 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___trans0, const RuntimeMethod* method) 
{
	{
		// trans.localScale = new Vector3(1, 1, 1);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = ___trans0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_1), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void ModificateRectTransform::SetPivotAndAnchors(UnityEngine.RectTransform,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModificateRectTransform_SetPivotAndAnchors_mF9A41760C3F0E842A71E8FCA5DBD73CBB66A7CD1 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___trans0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___aVec1, const RuntimeMethod* method) 
{
	{
		// trans.pivot = aVec;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = ___trans0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___aVec1;
		NullCheck(L_0);
		RectTransform_set_pivot_m79D0177D383D432A93C2615F1932B739B1C6E146(L_0, L_1, NULL);
		// trans.anchorMin = aVec;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_2 = ___trans0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___aVec1;
		NullCheck(L_2);
		RectTransform_set_anchorMin_m931442ABE3368D6D4309F43DF1D64AB64B0F52E3(L_2, L_3, NULL);
		// trans.anchorMax = aVec;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_4 = ___trans0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = ___aVec1;
		NullCheck(L_4);
		RectTransform_set_anchorMax_m52829ABEDD229ABD3DA20BCA676FA1DCA4A39B7D(L_4, L_5, NULL);
		// }
		return;
	}
}
// UnityEngine.Vector2 ModificateRectTransform::GetSize(UnityEngine.RectTransform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ModificateRectTransform_GetSize_m1483D7B316FB63AC0545F414F7D2419AAAB4169F (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___trans0, const RuntimeMethod* method) 
{
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return trans.rect.size;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = ___trans0;
		NullCheck(L_0);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_1;
		L_1 = RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488(L_0, NULL);
		V_0 = L_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = Rect_get_size_mFB990FFC0FE0152179C8C74A59E4AC258CB44267((&V_0), NULL);
		return L_2;
	}
}
// System.Single ModificateRectTransform::GetWidth(UnityEngine.RectTransform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ModificateRectTransform_GetWidth_mFED384917EFE6A4EEEC42A24EB83999305CF854C (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___trans0, const RuntimeMethod* method) 
{
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return trans.rect.width;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = ___trans0;
		NullCheck(L_0);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_1;
		L_1 = RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488(L_0, NULL);
		V_0 = L_1;
		float L_2;
		L_2 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&V_0), NULL);
		return L_2;
	}
}
// System.Single ModificateRectTransform::GetHeight(UnityEngine.RectTransform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ModificateRectTransform_GetHeight_m89A431763F8942D28057F8E4301183BCF15826DD (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___trans0, const RuntimeMethod* method) 
{
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return trans.rect.height;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = ___trans0;
		NullCheck(L_0);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_1;
		L_1 = RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488(L_0, NULL);
		V_0 = L_1;
		float L_2;
		L_2 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&V_0), NULL);
		return L_2;
	}
}
// System.Void ModificateRectTransform::SetPositionOfPivot(UnityEngine.RectTransform,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModificateRectTransform_SetPositionOfPivot_m1A8E8691C87C11B45FD6982D162CFA7341395506 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___trans0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___newPos1, const RuntimeMethod* method) 
{
	{
		// trans.localPosition = new Vector3(newPos.x, newPos.y, trans.localPosition.z);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = ___trans0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___newPos1;
		float L_2 = L_1.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___newPos1;
		float L_4 = L_3.___y_1;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_5 = ___trans0;
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_5, NULL);
		float L_7 = L_6.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_8), L_2, L_4, L_7, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_0, L_8, NULL);
		// }
		return;
	}
}
// System.Void ModificateRectTransform::SetLeftBottomPosition(UnityEngine.RectTransform,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModificateRectTransform_SetLeftBottomPosition_m8AB64E78B307E41B7F003995DC6F2E8E3867FF1D (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___trans0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___newPos1, const RuntimeMethod* method) 
{
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// trans.localPosition = new Vector3(newPos.x + (trans.pivot.x * trans.rect.width), newPos.y + (trans.pivot.y * trans.rect.height), trans.localPosition.z);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = ___trans0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___newPos1;
		float L_2 = L_1.___x_0;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_3 = ___trans0;
		NullCheck(L_3);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = RectTransform_get_pivot_mA8334AF05AA7FF09A173A2430F2BB9E85E5CBFFF(L_3, NULL);
		float L_5 = L_4.___x_0;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_6 = ___trans0;
		NullCheck(L_6);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_7;
		L_7 = RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488(L_6, NULL);
		V_0 = L_7;
		float L_8;
		L_8 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&V_0), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = ___newPos1;
		float L_10 = L_9.___y_1;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_11 = ___trans0;
		NullCheck(L_11);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12;
		L_12 = RectTransform_get_pivot_mA8334AF05AA7FF09A173A2430F2BB9E85E5CBFFF(L_11, NULL);
		float L_13 = L_12.___y_1;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_14 = ___trans0;
		NullCheck(L_14);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_15;
		L_15 = RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488(L_14, NULL);
		V_0 = L_15;
		float L_16;
		L_16 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&V_0), NULL);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_17 = ___trans0;
		NullCheck(L_17);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_17, NULL);
		float L_19 = L_18.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		memset((&L_20), 0, sizeof(L_20));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_20), ((float)il2cpp_codegen_add(L_2, ((float)il2cpp_codegen_multiply(L_5, L_8)))), ((float)il2cpp_codegen_add(L_10, ((float)il2cpp_codegen_multiply(L_13, L_16)))), L_19, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_0, L_20, NULL);
		// }
		return;
	}
}
// System.Void ModificateRectTransform::SetLeftTopPosition(UnityEngine.RectTransform,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModificateRectTransform_SetLeftTopPosition_m250227E27FE9D991D329E04B0016DAB10B99A8CC (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___trans0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___newPos1, const RuntimeMethod* method) 
{
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// trans.localPosition = new Vector3(newPos.x + (trans.pivot.x * trans.rect.width), newPos.y - ((1f - trans.pivot.y) * trans.rect.height), trans.localPosition.z);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = ___trans0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___newPos1;
		float L_2 = L_1.___x_0;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_3 = ___trans0;
		NullCheck(L_3);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = RectTransform_get_pivot_mA8334AF05AA7FF09A173A2430F2BB9E85E5CBFFF(L_3, NULL);
		float L_5 = L_4.___x_0;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_6 = ___trans0;
		NullCheck(L_6);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_7;
		L_7 = RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488(L_6, NULL);
		V_0 = L_7;
		float L_8;
		L_8 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&V_0), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = ___newPos1;
		float L_10 = L_9.___y_1;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_11 = ___trans0;
		NullCheck(L_11);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12;
		L_12 = RectTransform_get_pivot_mA8334AF05AA7FF09A173A2430F2BB9E85E5CBFFF(L_11, NULL);
		float L_13 = L_12.___y_1;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_14 = ___trans0;
		NullCheck(L_14);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_15;
		L_15 = RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488(L_14, NULL);
		V_0 = L_15;
		float L_16;
		L_16 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&V_0), NULL);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_17 = ___trans0;
		NullCheck(L_17);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_17, NULL);
		float L_19 = L_18.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		memset((&L_20), 0, sizeof(L_20));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_20), ((float)il2cpp_codegen_add(L_2, ((float)il2cpp_codegen_multiply(L_5, L_8)))), ((float)il2cpp_codegen_subtract(L_10, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract((1.0f), L_13)), L_16)))), L_19, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_0, L_20, NULL);
		// }
		return;
	}
}
// System.Void ModificateRectTransform::SetRightBottomPosition(UnityEngine.RectTransform,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModificateRectTransform_SetRightBottomPosition_mA8FEBDB85DC31A7E0D0314BECC5A3665DAF3F809 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___trans0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___newPos1, const RuntimeMethod* method) 
{
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// trans.localPosition = new Vector3(newPos.x - ((1f - trans.pivot.x) * trans.rect.width), newPos.y + (trans.pivot.y * trans.rect.height), trans.localPosition.z);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = ___trans0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___newPos1;
		float L_2 = L_1.___x_0;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_3 = ___trans0;
		NullCheck(L_3);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = RectTransform_get_pivot_mA8334AF05AA7FF09A173A2430F2BB9E85E5CBFFF(L_3, NULL);
		float L_5 = L_4.___x_0;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_6 = ___trans0;
		NullCheck(L_6);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_7;
		L_7 = RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488(L_6, NULL);
		V_0 = L_7;
		float L_8;
		L_8 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&V_0), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = ___newPos1;
		float L_10 = L_9.___y_1;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_11 = ___trans0;
		NullCheck(L_11);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12;
		L_12 = RectTransform_get_pivot_mA8334AF05AA7FF09A173A2430F2BB9E85E5CBFFF(L_11, NULL);
		float L_13 = L_12.___y_1;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_14 = ___trans0;
		NullCheck(L_14);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_15;
		L_15 = RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488(L_14, NULL);
		V_0 = L_15;
		float L_16;
		L_16 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&V_0), NULL);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_17 = ___trans0;
		NullCheck(L_17);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_17, NULL);
		float L_19 = L_18.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		memset((&L_20), 0, sizeof(L_20));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_20), ((float)il2cpp_codegen_subtract(L_2, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract((1.0f), L_5)), L_8)))), ((float)il2cpp_codegen_add(L_10, ((float)il2cpp_codegen_multiply(L_13, L_16)))), L_19, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_0, L_20, NULL);
		// }
		return;
	}
}
// System.Void ModificateRectTransform::SetRightTopPosition(UnityEngine.RectTransform,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModificateRectTransform_SetRightTopPosition_mDCB52848FD17960B6A3E759484DFF6A88CA605B3 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___trans0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___newPos1, const RuntimeMethod* method) 
{
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// trans.localPosition = new Vector3(newPos.x - ((1f - trans.pivot.x) * trans.rect.width), newPos.y - ((1f - trans.pivot.y) * trans.rect.height), trans.localPosition.z);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = ___trans0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___newPos1;
		float L_2 = L_1.___x_0;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_3 = ___trans0;
		NullCheck(L_3);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = RectTransform_get_pivot_mA8334AF05AA7FF09A173A2430F2BB9E85E5CBFFF(L_3, NULL);
		float L_5 = L_4.___x_0;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_6 = ___trans0;
		NullCheck(L_6);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_7;
		L_7 = RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488(L_6, NULL);
		V_0 = L_7;
		float L_8;
		L_8 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&V_0), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = ___newPos1;
		float L_10 = L_9.___y_1;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_11 = ___trans0;
		NullCheck(L_11);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12;
		L_12 = RectTransform_get_pivot_mA8334AF05AA7FF09A173A2430F2BB9E85E5CBFFF(L_11, NULL);
		float L_13 = L_12.___y_1;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_14 = ___trans0;
		NullCheck(L_14);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_15;
		L_15 = RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488(L_14, NULL);
		V_0 = L_15;
		float L_16;
		L_16 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&V_0), NULL);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_17 = ___trans0;
		NullCheck(L_17);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_17, NULL);
		float L_19 = L_18.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		memset((&L_20), 0, sizeof(L_20));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_20), ((float)il2cpp_codegen_subtract(L_2, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract((1.0f), L_5)), L_8)))), ((float)il2cpp_codegen_subtract(L_10, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract((1.0f), L_13)), L_16)))), L_19, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_0, L_20, NULL);
		// }
		return;
	}
}
// System.Void ModificateRectTransform::SetSize(UnityEngine.RectTransform,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModificateRectTransform_SetSize_m7254BE703F21042B201C1B68F07B85E0D619C562 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___trans0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___newSize1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// Vector2 oldSize = trans.rect.size;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = ___trans0;
		NullCheck(L_0);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_1;
		L_1 = RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488(L_0, NULL);
		V_2 = L_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = Rect_get_size_mFB990FFC0FE0152179C8C74A59E4AC258CB44267((&V_2), NULL);
		V_0 = L_2;
		// Vector2 deltaSize = newSize - oldSize;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___newSize1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = Vector2_op_Subtraction_m664419831773D5BBF06D9DE4E515F6409B2F92B8_inline(L_3, L_4, NULL);
		V_1 = L_5;
		// trans.offsetMin = trans.offsetMin - new Vector2(deltaSize.x * trans.pivot.x, deltaSize.y * trans.pivot.y);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_6 = ___trans0;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_7 = ___trans0;
		NullCheck(L_7);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		L_8 = RectTransform_get_offsetMin_mD02BE5256DADAF02CEEF99214C4E80478CD5287B(L_7, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_1;
		float L_10 = L_9.___x_0;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_11 = ___trans0;
		NullCheck(L_11);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12;
		L_12 = RectTransform_get_pivot_mA8334AF05AA7FF09A173A2430F2BB9E85E5CBFFF(L_11, NULL);
		float L_13 = L_12.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14 = V_1;
		float L_15 = L_14.___y_1;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_16 = ___trans0;
		NullCheck(L_16);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_17;
		L_17 = RectTransform_get_pivot_mA8334AF05AA7FF09A173A2430F2BB9E85E5CBFFF(L_16, NULL);
		float L_18 = L_17.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_19;
		memset((&L_19), 0, sizeof(L_19));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_19), ((float)il2cpp_codegen_multiply(L_10, L_13)), ((float)il2cpp_codegen_multiply(L_15, L_18)), /*hidden argument*/NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_20;
		L_20 = Vector2_op_Subtraction_m664419831773D5BBF06D9DE4E515F6409B2F92B8_inline(L_8, L_19, NULL);
		NullCheck(L_6);
		RectTransform_set_offsetMin_m07F38B4105C7CA9CC9FBDC9ED0DB008602880AB9(L_6, L_20, NULL);
		// trans.offsetMax = trans.offsetMax + new Vector2(deltaSize.x * (1f - trans.pivot.x), deltaSize.y * (1f - trans.pivot.y));
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_21 = ___trans0;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_22 = ___trans0;
		NullCheck(L_22);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_23;
		L_23 = RectTransform_get_offsetMax_m6A51C62A2C69780EFD879D3CFE4EE2CBF4AD3D73(L_22, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_24 = V_1;
		float L_25 = L_24.___x_0;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_26 = ___trans0;
		NullCheck(L_26);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_27;
		L_27 = RectTransform_get_pivot_mA8334AF05AA7FF09A173A2430F2BB9E85E5CBFFF(L_26, NULL);
		float L_28 = L_27.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_29 = V_1;
		float L_30 = L_29.___y_1;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_31 = ___trans0;
		NullCheck(L_31);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_32;
		L_32 = RectTransform_get_pivot_mA8334AF05AA7FF09A173A2430F2BB9E85E5CBFFF(L_31, NULL);
		float L_33 = L_32.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_34;
		memset((&L_34), 0, sizeof(L_34));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_34), ((float)il2cpp_codegen_multiply(L_25, ((float)il2cpp_codegen_subtract((1.0f), L_28)))), ((float)il2cpp_codegen_multiply(L_30, ((float)il2cpp_codegen_subtract((1.0f), L_33)))), /*hidden argument*/NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_35;
		L_35 = Vector2_op_Addition_m704B5B98EAFE885978381E21B7F89D9DF83C2A60_inline(L_23, L_34, NULL);
		NullCheck(L_21);
		RectTransform_set_offsetMax_m5514D09D86516F2C0E25FA6D11A3A4274D3D002D(L_21, L_35, NULL);
		// }
		return;
	}
}
// System.Void ModificateRectTransform::SetWidth(UnityEngine.RectTransform,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModificateRectTransform_SetWidth_m60B3BA6113DDBAA51C8993CE201FC76FF98A51AC (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___trans0, float ___newSize1, const RuntimeMethod* method) 
{
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// SetSize(trans, new Vector2(newSize, trans.rect.size.y));
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = ___trans0;
		float L_1 = ___newSize1;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_2 = ___trans0;
		NullCheck(L_2);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_3;
		L_3 = RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488(L_2, NULL);
		V_0 = L_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = Rect_get_size_mFB990FFC0FE0152179C8C74A59E4AC258CB44267((&V_0), NULL);
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), L_1, L_5, /*hidden argument*/NULL);
		ModificateRectTransform_SetSize_m7254BE703F21042B201C1B68F07B85E0D619C562(L_0, L_6, NULL);
		// }
		return;
	}
}
// System.Void ModificateRectTransform::SetHeight(UnityEngine.RectTransform,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModificateRectTransform_SetHeight_mE62E1CAAC3F662CFFF4999EE1163D62CFE07D0EF (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___trans0, float ___newSize1, const RuntimeMethod* method) 
{
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// SetSize(trans, new Vector2(trans.rect.size.x, newSize));
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = ___trans0;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_1 = ___trans0;
		NullCheck(L_1);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_2;
		L_2 = RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488(L_1, NULL);
		V_0 = L_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = Rect_get_size_mFB990FFC0FE0152179C8C74A59E4AC258CB44267((&V_0), NULL);
		float L_4 = L_3.___x_0;
		float L_5 = ___newSize1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), L_4, L_5, /*hidden argument*/NULL);
		ModificateRectTransform_SetSize_m7254BE703F21042B201C1B68F07B85E0D619C562(L_0, L_6, NULL);
		// }
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
// System.Void MovingBackground::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MovingBackground_Start_m3BF29AAC00AAA49EA01DF4DFF067C7FFB5360DF6 (MovingBackground_tD48A0A7758B27C9D87C59CAEE3D4BDD2E6F53EDC* __this, const RuntimeMethod* method) 
{
	{
		// startpos = transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		__this->___startpos_7 = L_1;
		// }
		return;
	}
}
// System.Void MovingBackground::StartMoving()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MovingBackground_StartMoving_m334E58D7DF7FABA5FD939594D53602326CD73E3D (MovingBackground_tD48A0A7758B27C9D87C59CAEE3D4BDD2E6F53EDC* __this, const RuntimeMethod* method) 
{
	{
		// transform.position = startpos;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = __this->___startpos_7;
		NullCheck(L_0);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_0, L_1, NULL);
		// _bodyBackGround.transform.DOMove(_endPoint.position, speed);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->____bodyBackGround_5;
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_2, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = __this->____endPoint_6;
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		float L_6 = __this->___speed_4;
		TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* L_7;
		L_7 = ShortcutExtensions_DOMove_m32C4BD3E44498A3C651F30108F0D3402416B868B(L_3, L_5, L_6, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void MovingBackground::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MovingBackground__ctor_m5F16B60FEBF701436C8B7978060685AD0AE3428A (MovingBackground_tD48A0A7758B27C9D87C59CAEE3D4BDD2E6F53EDC* __this, const RuntimeMethod* method) 
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
// System.Void PlayerController::Move(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_Move_m36B0423FB418CAB1625366E66BA566D26A8AE11D (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___directionmoving0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var move = new Vector3(directionmoving.x * speed, 0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___directionmoving0;
		float L_1 = L_0.___x_0;
		float L_2 = __this->___speed_5;
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&V_0), ((float)il2cpp_codegen_multiply(L_1, L_2)), (0.0f), NULL);
		// _bodyPlayer.position = Vector3.Lerp(_bodyPlayer.position, _bodyPlayer.position + move, Time.deltaTime);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = __this->____bodyPlayer_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = __this->____bodyPlayer_4;
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = __this->____bodyPlayer_4;
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_6, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_7, L_8, NULL);
		float L_10;
		L_10 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector3_Lerp_m57EE8D709A93B2B0FF8D499FA2947B1D61CB1FD6_inline(L_5, L_9, L_10, NULL);
		NullCheck(L_3);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_3, L_11, NULL);
		// _bodyPlayer.position = new Vector3(Mathf.Clamp(_bodyPlayer.position.x, ogranichenie.x, ogranichenie.y),
		//     _bodyPlayer.position.y);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12 = __this->____bodyPlayer_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13 = __this->____bodyPlayer_4;
		NullCheck(L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_13, NULL);
		float L_15 = L_14.___x_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_16 = (&__this->___ogranichenie_6);
		float L_17 = L_16->___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_18 = (&__this->___ogranichenie_6);
		float L_19 = L_18->___y_1;
		float L_20;
		L_20 = Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline(L_15, L_17, L_19, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21 = __this->____bodyPlayer_4;
		NullCheck(L_21);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_21, NULL);
		float L_23 = L_22.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		memset((&L_24), 0, sizeof(L_24));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_24), L_20, L_23, /*hidden argument*/NULL);
		NullCheck(L_12);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_12, L_24, NULL);
		// }
		return;
	}
}
// System.Void PlayerController::RotatePlayer(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_RotatePlayer_m51FE0D6CE0EB4A18B90139BE981D21BFD17BE309 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___directionmoving0, const RuntimeMethod* method) 
{
	{
		// if (directionmoving == Vector2.left)
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___directionmoving0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = Vector2_get_left_m9D9A16C5D268435428ADF448F6B5E8C1EC3A57B4_inline(NULL);
		bool L_2;
		L_2 = Vector2_op_Equality_m5447BF12C18339431AB8AF02FA463C543D88D463_inline(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_0033;
		}
	}
	{
		// _bodyPlayer.DORotate(new Vector3(0, -35, 0), 0.3f);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = __this->____bodyPlayer_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_4), (0.0f), (-35.0f), (0.0f), /*hidden argument*/NULL);
		TweenerCore_3_t392C54729BB024F5802F8E205C583653C4E886E3* L_5;
		L_5 = ShortcutExtensions_DORotate_m8395F402E150567DABF9EB86CF1846C7A4D32E03(L_3, L_4, (0.300000012f), 0, NULL);
	}

IL_0033:
	{
		// if (directionmoving == Vector2.right)
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___directionmoving0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		L_7 = Vector2_get_right_mCE2D0142663361ED4B48C36873786986D25A6E0A_inline(NULL);
		bool L_8;
		L_8 = Vector2_op_Equality_m5447BF12C18339431AB8AF02FA463C543D88D463_inline(L_6, L_7, NULL);
		if (!L_8)
		{
			goto IL_0066;
		}
	}
	{
		// _bodyPlayer.DORotate(new Vector3(0, 35, 0), 0.3f);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9 = __this->____bodyPlayer_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_10), (0.0f), (35.0f), (0.0f), /*hidden argument*/NULL);
		TweenerCore_3_t392C54729BB024F5802F8E205C583653C4E886E3* L_11;
		L_11 = ShortcutExtensions_DORotate_m8395F402E150567DABF9EB86CF1846C7A4D32E03(L_9, L_10, (0.300000012f), 0, NULL);
	}

IL_0066:
	{
		// if (directionmoving == Vector2.zero)
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12 = ___directionmoving0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13;
		L_13 = Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline(NULL);
		bool L_14;
		L_14 = Vector2_op_Equality_m5447BF12C18339431AB8AF02FA463C543D88D463_inline(L_12, L_13, NULL);
		if (!L_14)
		{
			goto IL_008b;
		}
	}
	{
		// _bodyPlayer.DORotate(Vector3.zero, speed);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15 = __this->____bodyPlayer_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		float L_17 = __this->___speed_5;
		TweenerCore_3_t392C54729BB024F5802F8E205C583653C4E886E3* L_18;
		L_18 = ShortcutExtensions_DORotate_m8395F402E150567DABF9EB86CF1846C7A4D32E03(L_15, L_16, L_17, 0, NULL);
	}

IL_008b:
	{
		// }
		return;
	}
}
// System.Void PlayerController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController__ctor_mDDAB7C7D82E1A5B3E6C197B1AB9D653DFE554F33 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
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
// System.Void ArmyEnemy::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArmyEnemy__ctor_mD483BE6D0E502220641560FCE23EE72134C6A60A (ArmyEnemy_t5291EA653FD944478FE7F0532725391126EFAC95* __this, const RuntimeMethod* method) 
{
	{
		ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF(__this, NULL);
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
// System.Void RowEnemy::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RowEnemy__ctor_m8AFE3E733701F88362DDE20BB20E05FF41EB8986 (RowEnemy_t2EF20FA4770986CA2A4FF42842E44F9498C60045* __this, const RuntimeMethod* method) 
{
	{
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
// System.Void LevelArmy::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelArmy__ctor_m418E56630FEE7F373A60C9322C27FD8FEE5AB152 (LevelArmy_t2FF55B4DCEAE7CB9E011C7003F10438A6EF31E0D* __this, const RuntimeMethod* method) 
{
	{
		ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF(__this, NULL);
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
// System.Void UnityMainThreadDispatcher::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMainThreadDispatcher_Update_mA4581B031CF68811CC6957B72109257C5FB953BA (UnityMainThreadDispatcher_tCBFCAE330E237A494F8AD7303087FCEB5A9B03EE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Dequeue_m67206C56B5CF9749EFAEF48FAA0D82E2AD8D960E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_get_Count_mB986A63C8D68BD8606522BF24176D36503CFD9C3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityMainThreadDispatcher_tCBFCAE330E237A494F8AD7303087FCEB5A9B03EE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA* V_0 = NULL;
	bool V_1 = false;
	{
		// lock(_executionQueue) {
		il2cpp_codegen_runtime_class_init_inline(UnityMainThreadDispatcher_tCBFCAE330E237A494F8AD7303087FCEB5A9B03EE_il2cpp_TypeInfo_var);
		Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA* L_0 = ((UnityMainThreadDispatcher_tCBFCAE330E237A494F8AD7303087FCEB5A9B03EE_StaticFields*)il2cpp_codegen_static_fields_for(UnityMainThreadDispatcher_tCBFCAE330E237A494F8AD7303087FCEB5A9B03EE_il2cpp_TypeInfo_var))->____executionQueue_4;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0030:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_0039;
					}
				}
				{
					Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA* L_2 = V_0;
					Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9(L_2, NULL);
				}

IL_0039:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA* L_3 = V_0;
				Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4(L_3, (&V_1), NULL);
				goto IL_0021_1;
			}

IL_0012_1:
			{
				// _executionQueue.Dequeue().Invoke();
				il2cpp_codegen_runtime_class_init_inline(UnityMainThreadDispatcher_tCBFCAE330E237A494F8AD7303087FCEB5A9B03EE_il2cpp_TypeInfo_var);
				Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA* L_4 = ((UnityMainThreadDispatcher_tCBFCAE330E237A494F8AD7303087FCEB5A9B03EE_StaticFields*)il2cpp_codegen_static_fields_for(UnityMainThreadDispatcher_tCBFCAE330E237A494F8AD7303087FCEB5A9B03EE_il2cpp_TypeInfo_var))->____executionQueue_4;
				NullCheck(L_4);
				Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_5;
				L_5 = Queue_1_Dequeue_m67206C56B5CF9749EFAEF48FAA0D82E2AD8D960E(L_4, Queue_1_Dequeue_m67206C56B5CF9749EFAEF48FAA0D82E2AD8D960E_RuntimeMethod_var);
				NullCheck(L_5);
				Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_5, NULL);
			}

IL_0021_1:
			{
				// while (_executionQueue.Count > 0) {
				il2cpp_codegen_runtime_class_init_inline(UnityMainThreadDispatcher_tCBFCAE330E237A494F8AD7303087FCEB5A9B03EE_il2cpp_TypeInfo_var);
				Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA* L_6 = ((UnityMainThreadDispatcher_tCBFCAE330E237A494F8AD7303087FCEB5A9B03EE_StaticFields*)il2cpp_codegen_static_fields_for(UnityMainThreadDispatcher_tCBFCAE330E237A494F8AD7303087FCEB5A9B03EE_il2cpp_TypeInfo_var))->____executionQueue_4;
				NullCheck(L_6);
				int32_t L_7;
				L_7 = Queue_1_get_Count_mB986A63C8D68BD8606522BF24176D36503CFD9C3_inline(L_6, Queue_1_get_Count_mB986A63C8D68BD8606522BF24176D36503CFD9C3_RuntimeMethod_var);
				if ((((int32_t)L_7) > ((int32_t)0)))
				{
					goto IL_0012_1;
				}
			}
			{
				// }
				goto IL_003a;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003a:
	{
		// }
		return;
	}
}
// System.Void UnityMainThreadDispatcher::Enqueue(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMainThreadDispatcher_Enqueue_m3DC7FEF4D9722834BC491A5C13EF1249BF757480 (UnityMainThreadDispatcher_tCBFCAE330E237A494F8AD7303087FCEB5A9B03EE* __this, RuntimeObject* ___action0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Enqueue_m9B59C0455EACB768D8D74CA1F57E003C91F6E3D4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass2_0_U3CEnqueueU3Eb__0_m9DCF63AE3D8BF2E9C9874C84E2D644E0193132CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass2_0_t112364A02F40FBC0B3E8199966A6E0BC48A1BC60_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityMainThreadDispatcher_tCBFCAE330E237A494F8AD7303087FCEB5A9B03EE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass2_0_t112364A02F40FBC0B3E8199966A6E0BC48A1BC60* V_0 = NULL;
	Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA* V_1 = NULL;
	bool V_2 = false;
	{
		U3CU3Ec__DisplayClass2_0_t112364A02F40FBC0B3E8199966A6E0BC48A1BC60* L_0 = (U3CU3Ec__DisplayClass2_0_t112364A02F40FBC0B3E8199966A6E0BC48A1BC60*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass2_0_t112364A02F40FBC0B3E8199966A6E0BC48A1BC60_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass2_0__ctor_m8A970E6582E1302186F63B9E37705398F45BA973(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass2_0_t112364A02F40FBC0B3E8199966A6E0BC48A1BC60* L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_0 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_0), (void*)__this);
		U3CU3Ec__DisplayClass2_0_t112364A02F40FBC0B3E8199966A6E0BC48A1BC60* L_2 = V_0;
		RuntimeObject* L_3 = ___action0;
		NullCheck(L_2);
		L_2->___action_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___action_1), (void*)L_3);
		// lock (_executionQueue) {
		il2cpp_codegen_runtime_class_init_inline(UnityMainThreadDispatcher_tCBFCAE330E237A494F8AD7303087FCEB5A9B03EE_il2cpp_TypeInfo_var);
		Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA* L_4 = ((UnityMainThreadDispatcher_tCBFCAE330E237A494F8AD7303087FCEB5A9B03EE_StaticFields*)il2cpp_codegen_static_fields_for(UnityMainThreadDispatcher_tCBFCAE330E237A494F8AD7303087FCEB5A9B03EE_il2cpp_TypeInfo_var))->____executionQueue_4;
		V_1 = L_4;
		V_2 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_003c:
			{// begin finally (depth: 1)
				{
					bool L_5 = V_2;
					if (!L_5)
					{
						goto IL_0045;
					}
				}
				{
					Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA* L_6 = V_1;
					Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9(L_6, NULL);
				}

IL_0045:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA* L_7 = V_1;
			Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4(L_7, (&V_2), NULL);
			// _executionQueue.Enqueue (() => {
			//     StartCoroutine (action);
			// });
			il2cpp_codegen_runtime_class_init_inline(UnityMainThreadDispatcher_tCBFCAE330E237A494F8AD7303087FCEB5A9B03EE_il2cpp_TypeInfo_var);
			Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA* L_8 = ((UnityMainThreadDispatcher_tCBFCAE330E237A494F8AD7303087FCEB5A9B03EE_StaticFields*)il2cpp_codegen_static_fields_for(UnityMainThreadDispatcher_tCBFCAE330E237A494F8AD7303087FCEB5A9B03EE_il2cpp_TypeInfo_var))->____executionQueue_4;
			U3CU3Ec__DisplayClass2_0_t112364A02F40FBC0B3E8199966A6E0BC48A1BC60* L_9 = V_0;
			Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_10 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
			NullCheck(L_10);
			Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_10, L_9, (intptr_t)((void*)U3CU3Ec__DisplayClass2_0_U3CEnqueueU3Eb__0_m9DCF63AE3D8BF2E9C9874C84E2D644E0193132CC_RuntimeMethod_var), NULL);
			NullCheck(L_8);
			Queue_1_Enqueue_m9B59C0455EACB768D8D74CA1F57E003C91F6E3D4(L_8, L_10, Queue_1_Enqueue_m9B59C0455EACB768D8D74CA1F57E003C91F6E3D4_RuntimeMethod_var);
			// }
			goto IL_0046;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0046:
	{
		// }
		return;
	}
}
// System.Void UnityMainThreadDispatcher::Enqueue(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMainThreadDispatcher_Enqueue_m41C8F287DAD216F87A4E3CC547B1D4E4E9760C14 (UnityMainThreadDispatcher_tCBFCAE330E237A494F8AD7303087FCEB5A9B03EE* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___action0, const RuntimeMethod* method) 
{
	{
		// Enqueue(ActionWrapper(action));
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ___action0;
		RuntimeObject* L_1;
		L_1 = UnityMainThreadDispatcher_ActionWrapper_mA9140D8E54337437EAA9E9E3EC19EEDBD0503EF7(__this, L_0, NULL);
		UnityMainThreadDispatcher_Enqueue_m3DC7FEF4D9722834BC491A5C13EF1249BF757480(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Threading.Tasks.Task UnityMainThreadDispatcher::EnqueueAsync(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* UnityMainThreadDispatcher_EnqueueAsync_m0BCC28431763AA0CBF211AA2A9170195F3454788 (UnityMainThreadDispatcher_tCBFCAE330E237A494F8AD7303087FCEB5A9B03EE* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___action0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1__ctor_mBAB8D6EFEAD1AA6482D19D7CE639528BE66AF646_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_get_Task_m068E06095F165AE266E15C328CBDA1543429EC66_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass4_0_U3CEnqueueAsyncU3Eg__WrappedActionU7C0_mF22148EFA0776594EC9B22FE8399FC0AC64D4F2C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass4_0_t41FED6820AB073CB7C64AB00BD3526AD7C543A9D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass4_0_t41FED6820AB073CB7C64AB00BD3526AD7C543A9D* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass4_0_t41FED6820AB073CB7C64AB00BD3526AD7C543A9D* L_0 = (U3CU3Ec__DisplayClass4_0_t41FED6820AB073CB7C64AB00BD3526AD7C543A9D*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass4_0_t41FED6820AB073CB7C64AB00BD3526AD7C543A9D_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass4_0__ctor_m70225B853DFA571BD40B2C66E4C5891332F22581(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass4_0_t41FED6820AB073CB7C64AB00BD3526AD7C543A9D* L_1 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = ___action0;
		NullCheck(L_1);
		L_1->___action_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___action_0), (void*)L_2);
		// var tcs = new TaskCompletionSource<bool>();
		U3CU3Ec__DisplayClass4_0_t41FED6820AB073CB7C64AB00BD3526AD7C543A9D* L_3 = V_0;
		TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14* L_4 = (TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14*)il2cpp_codegen_object_new(TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		TaskCompletionSource_1__ctor_mBAB8D6EFEAD1AA6482D19D7CE639528BE66AF646(L_4, TaskCompletionSource_1__ctor_mBAB8D6EFEAD1AA6482D19D7CE639528BE66AF646_RuntimeMethod_var);
		NullCheck(L_3);
		L_3->___tcs_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___tcs_1), (void*)L_4);
		// Enqueue(ActionWrapper(WrappedAction));
		U3CU3Ec__DisplayClass4_0_t41FED6820AB073CB7C64AB00BD3526AD7C543A9D* L_5 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_6, L_5, (intptr_t)((void*)U3CU3Ec__DisplayClass4_0_U3CEnqueueAsyncU3Eg__WrappedActionU7C0_mF22148EFA0776594EC9B22FE8399FC0AC64D4F2C_RuntimeMethod_var), NULL);
		RuntimeObject* L_7;
		L_7 = UnityMainThreadDispatcher_ActionWrapper_mA9140D8E54337437EAA9E9E3EC19EEDBD0503EF7(__this, L_6, NULL);
		UnityMainThreadDispatcher_Enqueue_m3DC7FEF4D9722834BC491A5C13EF1249BF757480(__this, L_7, NULL);
		// return tcs.Task;
		U3CU3Ec__DisplayClass4_0_t41FED6820AB073CB7C64AB00BD3526AD7C543A9D* L_8 = V_0;
		NullCheck(L_8);
		TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14* L_9 = L_8->___tcs_1;
		NullCheck(L_9);
		Task_1_t824317F4B958F7512E8F7300511752937A6C6043* L_10;
		L_10 = TaskCompletionSource_1_get_Task_m068E06095F165AE266E15C328CBDA1543429EC66_inline(L_9, TaskCompletionSource_1_get_Task_m068E06095F165AE266E15C328CBDA1543429EC66_RuntimeMethod_var);
		return L_10;
	}
}
// System.Collections.IEnumerator UnityMainThreadDispatcher::ActionWrapper(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnityMainThreadDispatcher_ActionWrapper_mA9140D8E54337437EAA9E9E3EC19EEDBD0503EF7 (UnityMainThreadDispatcher_tCBFCAE330E237A494F8AD7303087FCEB5A9B03EE* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___a0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CActionWrapperU3Ed__5_tF23089DC082690C12960166C6E45C869BF9939E0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CActionWrapperU3Ed__5_tF23089DC082690C12960166C6E45C869BF9939E0* L_0 = (U3CActionWrapperU3Ed__5_tF23089DC082690C12960166C6E45C869BF9939E0*)il2cpp_codegen_object_new(U3CActionWrapperU3Ed__5_tF23089DC082690C12960166C6E45C869BF9939E0_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CActionWrapperU3Ed__5__ctor_m9BDFC74813CC5245F648664F8DF0E750728D2DAB(L_0, 0, NULL);
		U3CActionWrapperU3Ed__5_tF23089DC082690C12960166C6E45C869BF9939E0* L_1 = L_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = ___a0;
		NullCheck(L_1);
		L_1->___a_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___a_2), (void*)L_2);
		return L_1;
	}
}
// System.Boolean UnityMainThreadDispatcher::Exists()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityMainThreadDispatcher_Exists_m4A3738101EECAF49321FACD4314AB0835141892F (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityMainThreadDispatcher_tCBFCAE330E237A494F8AD7303087FCEB5A9B03EE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return _instance != null;
		il2cpp_codegen_runtime_class_init_inline(UnityMainThreadDispatcher_tCBFCAE330E237A494F8AD7303087FCEB5A9B03EE_il2cpp_TypeInfo_var);
		UnityMainThreadDispatcher_tCBFCAE330E237A494F8AD7303087FCEB5A9B03EE* L_0 = ((UnityMainThreadDispatcher_tCBFCAE330E237A494F8AD7303087FCEB5A9B03EE_StaticFields*)il2cpp_codegen_static_fields_for(UnityMainThreadDispatcher_tCBFCAE330E237A494F8AD7303087FCEB5A9B03EE_il2cpp_TypeInfo_var))->____instance_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		return L_1;
	}
}
// UnityMainThreadDispatcher UnityMainThreadDispatcher::Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityMainThreadDispatcher_tCBFCAE330E237A494F8AD7303087FCEB5A9B03EE* UnityMainThreadDispatcher_Instance_m8E2987185D2965CACCC754B3278C59237C7E8D8D (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityMainThreadDispatcher_tCBFCAE330E237A494F8AD7303087FCEB5A9B03EE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!Exists ()) {
		il2cpp_codegen_runtime_class_init_inline(UnityMainThreadDispatcher_tCBFCAE330E237A494F8AD7303087FCEB5A9B03EE_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = UnityMainThreadDispatcher_Exists_m4A3738101EECAF49321FACD4314AB0835141892F(NULL);
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		// throw new Exception ("UnityMainThreadDispatcher could not find the UnityMainThreadDispatcher object. Please ensure you have added the MainThreadExecutor Prefab to your scene.");
		Exception_t* L_1 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC2D45B8CC3AE8A41E9F54EE5C905537205526C7D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnityMainThreadDispatcher_Instance_m8E2987185D2965CACCC754B3278C59237C7E8D8D_RuntimeMethod_var)));
	}

IL_0012:
	{
		// return _instance;
		il2cpp_codegen_runtime_class_init_inline(UnityMainThreadDispatcher_tCBFCAE330E237A494F8AD7303087FCEB5A9B03EE_il2cpp_TypeInfo_var);
		UnityMainThreadDispatcher_tCBFCAE330E237A494F8AD7303087FCEB5A9B03EE* L_2 = ((UnityMainThreadDispatcher_tCBFCAE330E237A494F8AD7303087FCEB5A9B03EE_StaticFields*)il2cpp_codegen_static_fields_for(UnityMainThreadDispatcher_tCBFCAE330E237A494F8AD7303087FCEB5A9B03EE_il2cpp_TypeInfo_var))->____instance_5;
		return L_2;
	}
}
// System.Void UnityMainThreadDispatcher::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMainThreadDispatcher_Awake_m518E1A8505DD06DAC84D9A11FE8C69E5501307AB (UnityMainThreadDispatcher_tCBFCAE330E237A494F8AD7303087FCEB5A9B03EE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityMainThreadDispatcher_tCBFCAE330E237A494F8AD7303087FCEB5A9B03EE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_instance == null) {
		il2cpp_codegen_runtime_class_init_inline(UnityMainThreadDispatcher_tCBFCAE330E237A494F8AD7303087FCEB5A9B03EE_il2cpp_TypeInfo_var);
		UnityMainThreadDispatcher_tCBFCAE330E237A494F8AD7303087FCEB5A9B03EE* L_0 = ((UnityMainThreadDispatcher_tCBFCAE330E237A494F8AD7303087FCEB5A9B03EE_StaticFields*)il2cpp_codegen_static_fields_for(UnityMainThreadDispatcher_tCBFCAE330E237A494F8AD7303087FCEB5A9B03EE_il2cpp_TypeInfo_var))->____instance_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		// _instance = this;
		il2cpp_codegen_runtime_class_init_inline(UnityMainThreadDispatcher_tCBFCAE330E237A494F8AD7303087FCEB5A9B03EE_il2cpp_TypeInfo_var);
		((UnityMainThreadDispatcher_tCBFCAE330E237A494F8AD7303087FCEB5A9B03EE_StaticFields*)il2cpp_codegen_static_fields_for(UnityMainThreadDispatcher_tCBFCAE330E237A494F8AD7303087FCEB5A9B03EE_il2cpp_TypeInfo_var))->____instance_5 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((UnityMainThreadDispatcher_tCBFCAE330E237A494F8AD7303087FCEB5A9B03EE_StaticFields*)il2cpp_codegen_static_fields_for(UnityMainThreadDispatcher_tCBFCAE330E237A494F8AD7303087FCEB5A9B03EE_il2cpp_TypeInfo_var))->____instance_5), (void*)__this);
		// DontDestroyOnLoad(this.gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m303AA1C4DC810349F285B4809E426CBBA8F834F9(L_2, NULL);
	}

IL_001e:
	{
		// }
		return;
	}
}
// System.Void UnityMainThreadDispatcher::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMainThreadDispatcher_OnDestroy_mA5CE8D1450187C2F82327C120CC24BDC97B1830E (UnityMainThreadDispatcher_tCBFCAE330E237A494F8AD7303087FCEB5A9B03EE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityMainThreadDispatcher_tCBFCAE330E237A494F8AD7303087FCEB5A9B03EE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _instance = null;
		il2cpp_codegen_runtime_class_init_inline(UnityMainThreadDispatcher_tCBFCAE330E237A494F8AD7303087FCEB5A9B03EE_il2cpp_TypeInfo_var);
		((UnityMainThreadDispatcher_tCBFCAE330E237A494F8AD7303087FCEB5A9B03EE_StaticFields*)il2cpp_codegen_static_fields_for(UnityMainThreadDispatcher_tCBFCAE330E237A494F8AD7303087FCEB5A9B03EE_il2cpp_TypeInfo_var))->____instance_5 = (UnityMainThreadDispatcher_tCBFCAE330E237A494F8AD7303087FCEB5A9B03EE*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((UnityMainThreadDispatcher_tCBFCAE330E237A494F8AD7303087FCEB5A9B03EE_StaticFields*)il2cpp_codegen_static_fields_for(UnityMainThreadDispatcher_tCBFCAE330E237A494F8AD7303087FCEB5A9B03EE_il2cpp_TypeInfo_var))->____instance_5), (void*)(UnityMainThreadDispatcher_tCBFCAE330E237A494F8AD7303087FCEB5A9B03EE*)NULL);
		// }
		return;
	}
}
// System.Void UnityMainThreadDispatcher::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMainThreadDispatcher__ctor_mEE26CFC31BB55E3BBC0BFBF761C2CD9A9CD3E5A1 (UnityMainThreadDispatcher_tCBFCAE330E237A494F8AD7303087FCEB5A9B03EE* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void UnityMainThreadDispatcher::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMainThreadDispatcher__cctor_mB22AD43DAD8C3BAACA4DCC6BC33B0924A9F48AD4 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1__ctor_mCB1D86FC102A8C3B82A02702CAEDAE815FE04272_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityMainThreadDispatcher_tCBFCAE330E237A494F8AD7303087FCEB5A9B03EE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly Queue<Action> _executionQueue = new Queue<Action>();
		Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA* L_0 = (Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA*)il2cpp_codegen_object_new(Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Queue_1__ctor_mCB1D86FC102A8C3B82A02702CAEDAE815FE04272(L_0, Queue_1__ctor_mCB1D86FC102A8C3B82A02702CAEDAE815FE04272_RuntimeMethod_var);
		((UnityMainThreadDispatcher_tCBFCAE330E237A494F8AD7303087FCEB5A9B03EE_StaticFields*)il2cpp_codegen_static_fields_for(UnityMainThreadDispatcher_tCBFCAE330E237A494F8AD7303087FCEB5A9B03EE_il2cpp_TypeInfo_var))->____executionQueue_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((UnityMainThreadDispatcher_tCBFCAE330E237A494F8AD7303087FCEB5A9B03EE_StaticFields*)il2cpp_codegen_static_fields_for(UnityMainThreadDispatcher_tCBFCAE330E237A494F8AD7303087FCEB5A9B03EE_il2cpp_TypeInfo_var))->____executionQueue_4), (void*)L_0);
		// private static UnityMainThreadDispatcher _instance = null;
		((UnityMainThreadDispatcher_tCBFCAE330E237A494F8AD7303087FCEB5A9B03EE_StaticFields*)il2cpp_codegen_static_fields_for(UnityMainThreadDispatcher_tCBFCAE330E237A494F8AD7303087FCEB5A9B03EE_il2cpp_TypeInfo_var))->____instance_5 = (UnityMainThreadDispatcher_tCBFCAE330E237A494F8AD7303087FCEB5A9B03EE*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((UnityMainThreadDispatcher_tCBFCAE330E237A494F8AD7303087FCEB5A9B03EE_StaticFields*)il2cpp_codegen_static_fields_for(UnityMainThreadDispatcher_tCBFCAE330E237A494F8AD7303087FCEB5A9B03EE_il2cpp_TypeInfo_var))->____instance_5), (void*)(UnityMainThreadDispatcher_tCBFCAE330E237A494F8AD7303087FCEB5A9B03EE*)NULL);
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
// System.Void UnityMainThreadDispatcher/<>c__DisplayClass2_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0__ctor_m8A970E6582E1302186F63B9E37705398F45BA973 (U3CU3Ec__DisplayClass2_0_t112364A02F40FBC0B3E8199966A6E0BC48A1BC60* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void UnityMainThreadDispatcher/<>c__DisplayClass2_0::<Enqueue>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0_U3CEnqueueU3Eb__0_m9DCF63AE3D8BF2E9C9874C84E2D644E0193132CC (U3CU3Ec__DisplayClass2_0_t112364A02F40FBC0B3E8199966A6E0BC48A1BC60* __this, const RuntimeMethod* method) 
{
	{
		// StartCoroutine (action);
		UnityMainThreadDispatcher_tCBFCAE330E237A494F8AD7303087FCEB5A9B03EE* L_0 = __this->___U3CU3E4__this_0;
		RuntimeObject* L_1 = __this->___action_1;
		NullCheck(L_0);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_2;
		L_2 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(L_0, L_1, NULL);
		// });
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
// System.Void UnityMainThreadDispatcher/<>c__DisplayClass4_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0__ctor_m70225B853DFA571BD40B2C66E4C5891332F22581 (U3CU3Ec__DisplayClass4_0_t41FED6820AB073CB7C64AB00BD3526AD7C543A9D* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void UnityMainThreadDispatcher/<>c__DisplayClass4_0::<EnqueueAsync>g__WrappedAction|0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0_U3CEnqueueAsyncU3Eg__WrappedActionU7C0_mF22148EFA0776594EC9B22FE8399FC0AC64D4F2C (U3CU3Ec__DisplayClass4_0_t41FED6820AB073CB7C64AB00BD3526AD7C543A9D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_TrySetResult_m3B4D8D267C1B26945C3C417057DEB50C56B689B1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t* V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		// action();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___action_0;
		NullCheck(L_0);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_0, NULL);
		// tcs.TrySetResult(true);
		TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14* L_1 = __this->___tcs_1;
		NullCheck(L_1);
		bool L_2;
		L_2 = TaskCompletionSource_1_TrySetResult_m3B4D8D267C1B26945C3C417057DEB50C56B689B1(L_1, (bool)1, TaskCompletionSource_1_TrySetResult_m3B4D8D267C1B26945C3C417057DEB50C56B689B1_RuntimeMethod_var);
		// } catch (Exception ex)
		goto IL_002a;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_001a;
		}
		throw e;
	}

CATCH_001a:
	{// begin catch(System.Exception)
		// } catch (Exception ex)
		V_0 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		// tcs.TrySetException(ex);
		TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14* L_3 = __this->___tcs_1;
		Exception_t* L_4 = V_0;
		NullCheck(L_3);
		bool L_5;
		L_5 = TaskCompletionSource_1_TrySetException_m439CB88F99980A2A50B1588B7ACD795274C8D7EE(L_3, L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TaskCompletionSource_1_TrySetException_m439CB88F99980A2A50B1588B7ACD795274C8D7EE_RuntimeMethod_var)));
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_002a;
	}// end catch (depth: 1)

IL_002a:
	{
		// }
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
// System.Void UnityMainThreadDispatcher/<ActionWrapper>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CActionWrapperU3Ed__5__ctor_m9BDFC74813CC5245F648664F8DF0E750728D2DAB (U3CActionWrapperU3Ed__5_tF23089DC082690C12960166C6E45C869BF9939E0* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void UnityMainThreadDispatcher/<ActionWrapper>d__5::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CActionWrapperU3Ed__5_System_IDisposable_Dispose_m6DFCB0B4116846E2C9857DAC58A7BE5E74D58FDB (U3CActionWrapperU3Ed__5_tF23089DC082690C12960166C6E45C869BF9939E0* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean UnityMainThreadDispatcher/<ActionWrapper>d__5::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CActionWrapperU3Ed__5_MoveNext_m539BDACB125A526C06DE11B32E9E3A694E95BECA (U3CActionWrapperU3Ed__5_tF23089DC082690C12960166C6E45C869BF9939E0* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0032;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// a();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = __this->___a_2;
		NullCheck(L_3);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_3, NULL);
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0032:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// }
		return (bool)0;
	}
}
// System.Object UnityMainThreadDispatcher/<ActionWrapper>d__5::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CActionWrapperU3Ed__5_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mE7AE1A8ED6FA260A9DF0C9CC5C3E9E162DAD64BA (U3CActionWrapperU3Ed__5_tF23089DC082690C12960166C6E45C869BF9939E0* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void UnityMainThreadDispatcher/<ActionWrapper>d__5::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CActionWrapperU3Ed__5_System_Collections_IEnumerator_Reset_m2E3C55B7DF0FAE95862C7A9C369E177D02706EFD (U3CActionWrapperU3Ed__5_tF23089DC082690C12960166C6E45C869BF9939E0* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CActionWrapperU3Ed__5_System_Collections_IEnumerator_Reset_m2E3C55B7DF0FAE95862C7A9C369E177D02706EFD_RuntimeMethod_var)));
	}
}
// System.Object UnityMainThreadDispatcher/<ActionWrapper>d__5::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CActionWrapperU3Ed__5_System_Collections_IEnumerator_get_Current_m6D440EABF1C1B20808A448DEB30CD4826B28723B (U3CActionWrapperU3Ed__5_tF23089DC082690C12960166C6E45C869BF9939E0* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_up_mF4D6DB00DEA7D055940165B85FFE1CEF6F7CD3AA_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___upVector_4;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m4EEB2FF3F4830390A53CE9B6076FB31801D65EED_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		float L_2 = ___d1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___a0;
		float L_4 = L_3.___y_1;
		float L_5 = ___d1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GridLayoutGroup_get_spacing_m19BC15652BF18D051B0998C14F13DB83191F3E58_inline (GridLayoutGroup_tEE9C68F88C13E6BD716BBD356D008ACFB63F1940* __this, const RuntimeMethod* method) 
{
	{
		// public Vector2 spacing { get { return m_Spacing; } set { SetProperty(ref m_Spacing, value); } }
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->___m_Spacing_15;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* LayoutGroup_get_padding_m91ABA3C588704717EDC82E72BA6D1B82711FE83C_inline (LayoutGroup_t32417833C700E77EDFA7C20034DAFD26604E05CE* __this, const RuntimeMethod* method) 
{
	{
		// public RectOffset padding { get { return m_Padding; } set { SetProperty(ref m_Padding, value); } }
		RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* L_0 = __this->___m_Padding_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void addScore_Invoke_m6AD376B99A7A12257157EA85B19B7A481F464625_inline (addScore_tD00A6AAD847AA5BC2F408B3161000D4210BAE6E3* __this, int32_t ___score0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___score0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EnemyHP_SetController_mEF07A9B168621448580464807FE37740F43727AA_inline (EnemyHP_t4325F0CE402CF433AABB25D2AA0A6945A27C9F3E* __this, EnemyController_tBB576F8CA41609F61E7D9AD27B14D49FB5A11C4A* ___controller0, const RuntimeMethod* method) 
{
	{
		// public void SetController(EnemyController controller) => _controller = controller;
		EnemyController_tBB576F8CA41609F61E7D9AD27B14D49FB5A11C4A* L_0 = ___controller0;
		__this->____controller_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____controller_6), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void damage_Invoke_mCC093F6C7897ABF8083B1FE67D2E92E07DD63A96_inline (damage_tC5C439FFD24395BBE32C1A980C0FD6CAB0EEA247* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___v0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___v0;
		float L_3 = L_2.___y_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline (const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___zeroVector_2;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_op_Equality_m5447BF12C18339431AB8AF02FA463C543D88D463_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___lhs0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rhs1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___lhs0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___rhs1;
		float L_3 = L_2.___x_0;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___lhs0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___rhs1;
		float L_7 = L_6.___y_1;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		float L_8 = V_0;
		float L_9 = V_0;
		float L_10 = V_1;
		float L_11 = V_1;
		V_2 = (bool)((((float)((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_8, L_9)), ((float)il2cpp_codegen_multiply(L_10, L_11))))) < ((float)(9.99999944E-11f)))? 1 : 0);
		goto IL_002e;
	}

IL_002e:
	{
		bool L_12 = V_2;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GunController_Restart_mF72A215A651548928D5F29E13ACC3FBDE5947122_inline (GunController_t7AFE6A92E37B9C51D7A5860FB2A93194D28E71D9* __this, bool ___znach0, const RuntimeMethod* method) 
{
	{
		// finish = znach;
		bool L_0 = ___znach0;
		__this->___finish_7 = L_0;
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Subtraction_m664419831773D5BBF06D9DE4E515F6409B2F92B8_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___b1;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___a0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___b1;
		float L_7 = L_6.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Addition_m704B5B98EAFE885978381E21B7F89D9DF83C2A60_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___b1;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___a0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___b1;
		float L_7 = L_6.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		__this->___z_4 = (0.0f);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m57EE8D709A93B2B0FF8D499FA2947B1D61CB1FD6_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, float ___t2, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___t2;
		float L_1;
		L_1 = Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline(L_0, NULL);
		___t2 = L_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___a0;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___b1;
		float L_5 = L_4.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___x_2;
		float L_8 = ___t2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___a0;
		float L_10 = L_9.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = ___b1;
		float L_12 = L_11.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = ___a0;
		float L_14 = L_13.___y_3;
		float L_15 = ___t2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = ___a0;
		float L_17 = L_16.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = ___b1;
		float L_19 = L_18.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = ___a0;
		float L_21 = L_20.___z_4;
		float L_22 = ___t2;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	float V_2 = 0.0f;
	{
		float L_0 = ___value0;
		float L_1 = ___min1;
		V_0 = (bool)((((float)L_0) < ((float)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		float L_3 = ___min1;
		___value0 = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		float L_4 = ___value0;
		float L_5 = ___max2;
		V_1 = (bool)((((float)L_4) > ((float)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		float L_7 = ___max2;
		___value0 = L_7;
	}

IL_0019:
	{
		float L_8 = ___value0;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		float L_9 = V_2;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_left_m9D9A16C5D268435428ADF448F6B5E8C1EC3A57B4_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___leftVector_6;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_right_mCE2D0142663361ED4B48C36873786986D25A6E0A_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___rightVector_7;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline (const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Enumerator_get_Current_m7B066E79D57364B77E4BE2A2F567DDF33AF27799_gshared_inline (Enumerator_tCC04FB1803AFE7880193CE87A1E4C0C010165DA6* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4573A12BFDA535926500C04E88A94540C95C395D_gshared_inline (List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m1768ADA9855B7CDA14C9C42E098A287F1A39C3A2_gshared_inline (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Task_1_t824317F4B958F7512E8F7300511752937A6C6043* TaskCompletionSource_1_get_Task_m068E06095F165AE266E15C328CBDA1543429EC66_gshared_inline (TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14* __this, const RuntimeMethod* method) 
{
	{
		Task_1_t824317F4B958F7512E8F7300511752937A6C6043* L_0 = (Task_1_t824317F4B958F7512E8F7300511752937A6C6043*)__this->____task_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline (float ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___value0;
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
		float L_2 = ___value0;
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
		float L_4 = ___value0;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}
