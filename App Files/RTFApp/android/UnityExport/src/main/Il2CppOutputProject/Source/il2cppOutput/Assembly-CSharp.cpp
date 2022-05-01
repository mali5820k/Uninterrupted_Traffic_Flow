#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
struct GenericVirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InvokerActionInvoker1;
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
struct InvokerActionInvoker2<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// <>f__AnonymousType0`4<System.Int32,System.Object,System.Object,System.Object>
struct U3CU3Ef__AnonymousType0_4_t87E69E279093DFC4580EF2B2E42CCE84BA36F057;
// <>f__AnonymousType0`4<System.Int32,System.String,System.String,Newtonsoft.Json.Linq.JObject>
struct U3CU3Ef__AnonymousType0_4_t5FFD29B4BCAF7AC3517A208CD71554E9AC16EC39;
// <>f__AnonymousType0`4<System.Int32,System.String,System.String,System.Object>
struct U3CU3Ef__AnonymousType0_4_t4EE67C7C14929546FBC41AC6C44494555CA83454;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907;
// System.Collections.Generic.Dictionary`2<System.Int32,UnityMessage>
struct Dictionary_2_t7019529726DC9B660C51BEDBA75D6102D49A8275;
// System.Collections.Generic.IEnumerable`1<Newtonsoft.Json.Linq.JToken>
struct IEnumerable_1_t1447BF8E1A962EF1787C1E07658EB94E72BA2CEF;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_tDBFC8496F14612776AF930DBF84AFE7D06D1F0E9;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,UnityMessage>
struct KeyCollection_t9634554F662AFF13699B7E2AEC323DC40CE0D268;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,UnityMessage>
struct ValueCollection_tE53755816A57C9C89A737DF3FDEA18187BD3145B;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,UnityMessage>[]
struct EntryU5BU5D_tDCE2A1E4103052C47561512BF6611A3104D53B11;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// Newtonsoft.Json.Linq.JTokenType[]
struct JTokenTypeU5BU5D_tDCF677D46AB555A7276A6A1795A099AA73056DA0;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.ComponentModel.AddingNewEventHandler
struct AddingNewEventHandler_tD9BAC60F604446ED14967643F63A83CE2A5C3701;
// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03;
// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0;
// Arrow_Deleter
struct Arrow_Deleter_t30BF59F933D9F646F81A49CBC31566F656C76194;
// Arrow_Spawner
struct Arrow_Spawner_tA592D697E6BE60D8EA4A80508AD104F694215A6C;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// Event_Listener_From_React
struct Event_Listener_From_React_t691FF151C9C4AA503E2A764A57CDE053376A1F5C;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.GlobalJavaObjectRef
struct GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// Newtonsoft.Json.Linq.JContainer
struct JContainer_tFD3E2CD9B9D8D3CD73133B11A1F6BE77C5C8F95A;
// Newtonsoft.Json.Linq.JObject
struct JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1;
// Newtonsoft.Json.Linq.JPropertyKeyedCollection
struct JPropertyKeyedCollection_t4A44691A9942B8A7AEB4016F7405BF388D1E0632;
// Newtonsoft.Json.Linq.JToken
struct JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3;
// Newtonsoft.Json.Linq.JTokenEqualityComparer
struct JTokenEqualityComparer_t2B7EB6B1D12A8C94152AB2E690CC45F185373C46;
// System.ComponentModel.ListChangedEventHandler
struct ListChangedEventHandler_tDBF36F3E2C6B7538106878E1D5A7553C5EA77616;
// MessageHandler
struct MessageHandler_t5CBA985A6A31029C3532CC5B3EABEDF44ACBCFB5;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// Move_Car
struct Move_Car_t9ED0CA300BEFB06827E23449978E3F8FCFAA3740;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// System.Collections.Specialized.NotifyCollectionChangedEventHandler
struct NotifyCollectionChangedEventHandler_t521FADBD1190F88022BC2160A5F82FDFC08364AF;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// System.ComponentModel.PropertyChangedEventHandler
struct PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA;
// System.ComponentModel.PropertyChangingEventHandler
struct PropertyChangingEventHandler_tF293724DEA588C35A7E94C4F4413AEE6438FE9CD;
// Quit_Button
struct Quit_Button_tC108DCFE84167BA7969368E8A0DA81AF2AA3792A;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// Smooth_Camera_Follow
struct Smooth_Camera_Follow_tBD76252BE6D38613B5A2E411433B861709C46972;
// System.String
struct String_t;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnityMessage
struct UnityMessage_t536476F96F550BF743BDE7AFEA8F4A4641F6F51F;
// UnityMessageManager
struct UnityMessageManager_t55C0CD8495B9BA2855D6C614E661E729DF614002;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3;
// Arrow_Spawner/<Spawn_Arrow>d__6
struct U3CSpawn_ArrowU3Ed__6_t09916434D09A4F9925D4CBFC0F0166006073BAEF;
// UnityMessageManager/MessageDelegate
struct MessageDelegate_tD14A044E192668727C7CA3FCCFF76C636F8C298D;
// UnityMessageManager/MessageHandlerDelegate
struct MessageHandlerDelegate_tF830202AB59BFB778BA9227DA72E1E9FDFFA9CA8;

IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsAssemblyU2DCSharp[];
IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnityEngine_CoreModule[];
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t7019529726DC9B660C51BEDBA75D6102D49A8275_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MessageDelegate_tD14A044E192668727C7CA3FCCFF76C636F8C298D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MessageHandlerDelegate_tF830202AB59BFB778BA9227DA72E1E9FDFFA9CA8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MessageHandler_t5CBA985A6A31029C3532CC5B3EABEDF44ACBCFB5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CSpawn_ArrowU3Ed__6_t09916434D09A4F9925D4CBFC0F0166006073BAEF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ef__AnonymousType0_4_t4EE67C7C14929546FBC41AC6C44494555CA83454_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ef__AnonymousType0_4_t5FFD29B4BCAF7AC3517A208CD71554E9AC16EC39_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityMessageManager_t55C0CD8495B9BA2855D6C614E661E729DF614002_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral1E61E627781C7D1EA355244A3562DF11E46D69B4;
IL2CPP_EXTERN_C String_t* _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745;
IL2CPP_EXTERN_C String_t* _stringLiteral24C049E512CD1B48036BD162FF63700A57CA3469;
IL2CPP_EXTERN_C String_t* _stringLiteral2AD47C03F7A83F82E3B2ADFE8A60F1727FD3BEFD;
IL2CPP_EXTERN_C String_t* _stringLiteral996E5360F80E16B2189CC1E536C91CE68083F694;
IL2CPP_EXTERN_C String_t* _stringLiteralA2F4AC9DD8E1FAC5257E5F7BA5EE1C7C7E5F7AB1;
IL2CPP_EXTERN_C String_t* _stringLiteralA44A39671D4B7FA8FBE50D795EAB52248D5C5469;
IL2CPP_EXTERN_C String_t* _stringLiteralA9656A6CC60F35B16CF8F14C4BAE77A72EFF2602;
IL2CPP_EXTERN_C String_t* _stringLiteralADCE833DFEA59A5065B08C5BD4F87A7CBC89E71C;
IL2CPP_EXTERN_C String_t* _stringLiteralC8FB51AEBC12348E8C92F607223E1DAFCC4BAD49;
IL2CPP_EXTERN_C String_t* _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralE2D6DC29DE3D40BE0F06C25BD0CEB6AFDEAF1C4C;
IL2CPP_EXTERN_C String_t* _stringLiteralEA64C610DFA863C445196F98AE1C59C7E6F1B8EC;
IL2CPP_EXTERN_C String_t* _stringLiteralEAADFD9E2FF4DA35D71A3BECFA29C739DFACB9F1;
IL2CPP_EXTERN_C String_t* _stringLiteralFD518666B4F52417752311AE996CEA3A91ECF532;
IL2CPP_EXTERN_C const RuntimeMethod* Arrow_Deleter_OnTriggerEnter_mD59A49656BDAAB6E051894962AC800C44E8A3A60_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Arrow_Deleter_Update_m8E7EF6EB9142123420346A17D890C0B0887DEBCA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Arrow_Deleter__ctor_m8620C3A58E5A4CDC230E79644130922ACE013DE8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Arrow_Spawner_Spawn_Arrow_mDBF71B71F86432DFF8DBD55F3E42FBBD9F7AED15_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Arrow_Spawner_Update_mB66BB4C052960374549A08D906EE2F368C9520E6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Arrow_Spawner__ctor_m91483891E628325F059392E039AD216B91BF49CF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisArrow_Spawner_tA592D697E6BE60D8EA4A80508AD104F694215A6C_m6C47BC93DD4D33983C3C480DD317FAE0BE1BEE0E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mC6FC12DDCF60A4CF5763890CB20FEB4677B4194E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_mC65CD0AF1E825A0B89893DF8BA2EA0416D2BC0CD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_mA4619F1FFBEBA7E77460219CD6B4E97AAB76C04A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m793321E9D300EBEC85E1995E3128954E56A9703C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Event_Listener_From_React_Awake_m25A6C807D1607E2BA4E986B531DBB60EBB2B1D35_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Event_Listener_From_React_OnDestroy_m1530850242A5B3616075143375A974654A52BA23_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Event_Listener_From_React_Setup_m512465C30324D5AF25925CF0F7C06660DE6EB183_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Event_Listener_From_React_Update_mFA03015B43ACA125F9DE884EB6282644AF8C0D40_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Event_Listener_From_React_User_Car_Position_m4D90A68760487B661F77C0D4BE60B25EF773D458_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Event_Listener_From_React_User_Green_Arrow_Status_m2AD163BC2BDC2FE5E4F770E522F8D1C2A2868631_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Event_Listener_From_React_User_Grid_Resolution_m339BEA5D637F0FC16EDB4FB8ED2B360AE4240399_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Event_Listener_From_React_User_Grid_Size_m3D2709D115EA71EA07B559E43E9292B4632D2C30_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Event_Listener_From_React__ctor_mD0B69F7C4C0F06D290978ADE63479EA58E7DC35A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Extensions_Value_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3092267C93448D476CE9F21D518B204704D234B8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Extensions_Value_TisString_t_m2497E7CEFECAA73AFA2AC29B672F29E6489E1D30_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisUnityMessageManager_t55C0CD8495B9BA2855D6C614E661E729DF614002_mA22D83CA4AD22580593E79FD1964DBD57AA7671E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MessageHandler_Deserialize_mAF411EC208E02166C9302B5B54878A61C5EA03C5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MessageHandler__ctor_m6D62D4CD1FDC1ACBECA277EC939F7BF1A5C0EE0F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MessageHandler_getData_TisRuntimeObject_m24756BF831B0D45AA5D8D4A1FF41A01DFD5E3888_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MessageHandler_send_m3C7C735E5E60707CFF5545CB117B748643ABBA53_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Move_Car_Start_mFAC0B9737511E2B2649CEAD9208F70576E236644_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Move_Car_Update_m2AF8FB001367D9BF3CD29FAA6D27F1123AC60667_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Move_Car__ctor_m21961C913373868C7F0F1AA510632A49A91A6B54_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Quit_Button__ctor_mA28E1F715DE13255AF4D539CBAD730C91C6948B1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Quit_Button_quit_app_m56CB02AE3CE9D82CE566A3D88960334117B77AFC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Smooth_Camera_Follow_Start_mBFFEABE7A9FB6577DCD048EDB4A4EF7454B4C142_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Smooth_Camera_Follow_Update_m2E7AA4620F7C9D725214FB758A81B2425D7FBA13_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Smooth_Camera_Follow__ctor_m2FF4575F65CC53BB150105EDA0879A5CC45B29C2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CSpawn_ArrowU3Ed__6_MoveNext_mD7E207AFEBA063AB04EF9471B5F4E0994797A0FF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CSpawn_ArrowU3Ed__6_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mE58A9CE3D318AE330B7C2346A79D0FA2BA77B30C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CSpawn_ArrowU3Ed__6_System_Collections_IEnumerator_Reset_m38ED4C209F27FC0A6036F6CC8E586AACCFD237D9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CSpawn_ArrowU3Ed__6_System_Collections_IEnumerator_get_Current_m1E0697646FC37C9F2251173151609351AD1CA0EF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CSpawn_ArrowU3Ed__6_System_IDisposable_Dispose_m4A1AABB6CEAB54BB18B1145464BA6F0637C4E550_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CSpawn_ArrowU3Ed__6__ctor_m6D25CF80B2B844F9EF52A2832F9A0E60EC41D1CC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ef__AnonymousType0_4__ctor_m29CA8638117DD35A3ECF831C1C575ECD9A1CFF99_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ef__AnonymousType0_4__ctor_mA9CA12BE8F40DB9F200816875B785E4FC23A2200_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityMessageManager_Awake_m1F073A61731A99C308D4A668248137DBD9E7F3C9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityMessageManager_SendMessageToRN_mC44D7A9FF78F4564478804DFE24B83BDBD69DEE2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityMessageManager_SendMessageToRN_mDB8A3DFB48EA516CD6451C1D26C5F9912C5E9D6A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityMessageManager__cctor_mBFCCB608F0BA0EBDA646E2005B92FD5E0C0C5BC1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityMessageManager__ctor_mA4511CB120AE9C3096F93F3AC504156301DAB9F7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityMessageManager_add_OnMessage_m8842E4D444AF900692199658BFE2CB4088DF9E31_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityMessageManager_add_OnRNMessage_m7C51B9D3DE2967B5DE09E0D0B7EC1B63286E4427_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityMessageManager_generateId_m0B012964338C75AE18EDCBB09F0D011845A0052E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityMessageManager_get_Instance_mFA329586DD85236EFC2D0C69E92EAA27A48174A7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityMessageManager_onMessage_m844E444B72E9D34837224BE24F45BC4582962B97_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityMessageManager_onRNMessage_mF272F8B8D4D67741E2E321B5167348B605426F04_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityMessageManager_remove_OnMessage_m979E48B4644FB584C09CB452AC98F9FD83FD02A0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityMessageManager_remove_OnRNMessage_m696C13FE8E7028562BB4132E88745D9457ACF7D0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityMessageManager_set_Instance_mCF8082813C2EFD4D6608DE611D4D75F111CB9813_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityMessage__ctor_mB0E205137A7DD4D3E27548C36A0749055E1F64CB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vector3_Lerp_m57EE8D709A93B2B0FF8D499FA2947B1D61CB1FD6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Arrow_Deleter_t30BF59F933D9F646F81A49CBC31566F656C76194_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Arrow_Spawner_tA592D697E6BE60D8EA4A80508AD104F694215A6C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Event_Listener_From_React_t691FF151C9C4AA503E2A764A57CDE053376A1F5C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* MessageHandler_t5CBA985A6A31029C3532CC5B3EABEDF44ACBCFB5_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Move_Car_t9ED0CA300BEFB06827E23449978E3F8FCFAA3740_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Quit_Button_tC108DCFE84167BA7969368E8A0DA81AF2AA3792A_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Smooth_Camera_Follow_tBD76252BE6D38613B5A2E411433B861709C46972_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* U3CSpawn_ArrowU3Ed__6_t09916434D09A4F9925D4CBFC0F0166006073BAEF_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* UnityMessageManager_t55C0CD8495B9BA2855D6C614E661E729DF614002_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* UnityMessage_t536476F96F550BF743BDE7AFEA8F4A4641F6F51F_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

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

// <>f__AnonymousType0`4<System.Int32,System.String,System.String,Newtonsoft.Json.Linq.JObject>
struct U3CU3Ef__AnonymousType0_4_t5FFD29B4BCAF7AC3517A208CD71554E9AC16EC39  : public RuntimeObject
{
	// <id>j__TPar <>f__AnonymousType0`4::<id>i__Field
	int32_t ___U3CidU3Ei__Field_0;
	// <seq>j__TPar <>f__AnonymousType0`4::<seq>i__Field
	String_t* ___U3CseqU3Ei__Field_1;
	// <name>j__TPar <>f__AnonymousType0`4::<name>i__Field
	String_t* ___U3CnameU3Ei__Field_2;
	// <data>j__TPar <>f__AnonymousType0`4::<data>i__Field
	JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1* ___U3CdataU3Ei__Field_3;
};

// <>f__AnonymousType0`4<System.Int32,System.String,System.String,System.Object>
struct U3CU3Ef__AnonymousType0_4_t4EE67C7C14929546FBC41AC6C44494555CA83454  : public RuntimeObject
{
	// <id>j__TPar <>f__AnonymousType0`4::<id>i__Field
	int32_t ___U3CidU3Ei__Field_0;
	// <seq>j__TPar <>f__AnonymousType0`4::<seq>i__Field
	String_t* ___U3CseqU3Ei__Field_1;
	// <name>j__TPar <>f__AnonymousType0`4::<name>i__Field
	String_t* ___U3CnameU3Ei__Field_2;
	// <data>j__TPar <>f__AnonymousType0`4::<data>i__Field
	RuntimeObject* ___U3CdataU3Ei__Field_3;
};

// System.Collections.Generic.Dictionary`2<System.Int32,UnityMessage>
struct Dictionary_2_t7019529726DC9B660C51BEDBA75D6102D49A8275  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tDCE2A1E4103052C47561512BF6611A3104D53B11* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t9634554F662AFF13699B7E2AEC323DC40CE0D268* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tE53755816A57C9C89A737DF3FDEA18187BD3145B* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0  : public RuntimeObject
{
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jobject
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___m_jobject_1;
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jclass
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___m_jclass_2;
};

struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_StaticFields
{
	// System.Boolean UnityEngine.AndroidJavaObject::enableDebugPrints
	bool ___enableDebugPrints_0;
};
struct Il2CppArrayBounds;

// Newtonsoft.Json.Linq.JToken
struct JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3  : public RuntimeObject
{
	// Newtonsoft.Json.Linq.JContainer Newtonsoft.Json.Linq.JToken::_parent
	JContainer_tFD3E2CD9B9D8D3CD73133B11A1F6BE77C5C8F95A* ____parent_1;
	// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JToken::_previous
	JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3* ____previous_2;
	// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JToken::_next
	JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3* ____next_3;
	// System.Object Newtonsoft.Json.Linq.JToken::_annotations
	RuntimeObject* ____annotations_4;
};

struct JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3_StaticFields
{
	// Newtonsoft.Json.Linq.JTokenEqualityComparer Newtonsoft.Json.Linq.JToken::_equalityComparer
	JTokenEqualityComparer_t2B7EB6B1D12A8C94152AB2E690CC45F185373C46* ____equalityComparer_0;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::BooleanTypes
	JTokenTypeU5BU5D_tDCF677D46AB555A7276A6A1795A099AA73056DA0* ___BooleanTypes_5;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::NumberTypes
	JTokenTypeU5BU5D_tDCF677D46AB555A7276A6A1795A099AA73056DA0* ___NumberTypes_6;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::BigIntegerTypes
	JTokenTypeU5BU5D_tDCF677D46AB555A7276A6A1795A099AA73056DA0* ___BigIntegerTypes_7;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::StringTypes
	JTokenTypeU5BU5D_tDCF677D46AB555A7276A6A1795A099AA73056DA0* ___StringTypes_8;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::GuidTypes
	JTokenTypeU5BU5D_tDCF677D46AB555A7276A6A1795A099AA73056DA0* ___GuidTypes_9;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::TimeSpanTypes
	JTokenTypeU5BU5D_tDCF677D46AB555A7276A6A1795A099AA73056DA0* ___TimeSpanTypes_10;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::UriTypes
	JTokenTypeU5BU5D_tDCF677D46AB555A7276A6A1795A099AA73056DA0* ___UriTypes_11;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::CharTypes
	JTokenTypeU5BU5D_tDCF677D46AB555A7276A6A1795A099AA73056DA0* ___CharTypes_12;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::DateTimeTypes
	JTokenTypeU5BU5D_tDCF677D46AB555A7276A6A1795A099AA73056DA0* ___DateTimeTypes_13;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::BytesTypes
	JTokenTypeU5BU5D_tDCF677D46AB555A7276A6A1795A099AA73056DA0* ___BytesTypes_14;
};

// MessageHandler
struct MessageHandler_t5CBA985A6A31029C3532CC5B3EABEDF44ACBCFB5  : public RuntimeObject
{
	// System.Int32 MessageHandler::id
	int32_t ___id_0;
	// System.String MessageHandler::seq
	String_t* ___seq_1;
	// System.String MessageHandler::name
	String_t* ___name_2;
	// Newtonsoft.Json.Linq.JToken MessageHandler::data
	JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3* ___data_3;
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

// UnityMessage
struct UnityMessage_t536476F96F550BF743BDE7AFEA8F4A4641F6F51F  : public RuntimeObject
{
	// System.String UnityMessage::name
	String_t* ___name_0;
	// Newtonsoft.Json.Linq.JObject UnityMessage::data
	JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1* ___data_1;
	// System.Action`1<System.Object> UnityMessage::callBack
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___callBack_2;
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

// Arrow_Spawner/<Spawn_Arrow>d__6
struct U3CSpawn_ArrowU3Ed__6_t09916434D09A4F9925D4CBFC0F0166006073BAEF  : public RuntimeObject
{
	// System.Int32 Arrow_Spawner/<Spawn_Arrow>d__6::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Arrow_Spawner/<Spawn_Arrow>d__6::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Arrow_Spawner Arrow_Spawner/<Spawn_Arrow>d__6::<>4__this
	Arrow_Spawner_tA592D697E6BE60D8EA4A80508AD104F694215A6C* ___U3CU3E4__this_2;
	// System.Single Arrow_Spawner/<Spawn_Arrow>d__6::waitTime
	float ___waitTime_3;
};

// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03  : public AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0
{
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

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
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

// Newtonsoft.Json.Linq.JContainer
struct JContainer_tFD3E2CD9B9D8D3CD73133B11A1F6BE77C5C8F95A  : public JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3
{
	// System.ComponentModel.ListChangedEventHandler Newtonsoft.Json.Linq.JContainer::_listChanged
	ListChangedEventHandler_tDBF36F3E2C6B7538106878E1D5A7553C5EA77616* ____listChanged_15;
	// System.ComponentModel.AddingNewEventHandler Newtonsoft.Json.Linq.JContainer::_addingNew
	AddingNewEventHandler_tD9BAC60F604446ED14967643F63A83CE2A5C3701* ____addingNew_16;
	// System.Collections.Specialized.NotifyCollectionChangedEventHandler Newtonsoft.Json.Linq.JContainer::_collectionChanged
	NotifyCollectionChangedEventHandler_t521FADBD1190F88022BC2160A5F82FDFC08364AF* ____collectionChanged_17;
	// System.Object Newtonsoft.Json.Linq.JContainer::_syncRoot
	RuntimeObject* ____syncRoot_18;
	// System.Boolean Newtonsoft.Json.Linq.JContainer::_busy
	bool ____busy_19;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
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

// Newtonsoft.Json.Linq.JObject
struct JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1  : public JContainer_tFD3E2CD9B9D8D3CD73133B11A1F6BE77C5C8F95A
{
	// Newtonsoft.Json.Linq.JPropertyKeyedCollection Newtonsoft.Json.Linq.JObject::_properties
	JPropertyKeyedCollection_t4A44691A9942B8A7AEB4016F7405BF388D1E0632* ____properties_20;
	// System.ComponentModel.PropertyChangedEventHandler Newtonsoft.Json.Linq.JObject::PropertyChanged
	PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA* ___PropertyChanged_21;
	// System.ComponentModel.PropertyChangingEventHandler Newtonsoft.Json.Linq.JObject::PropertyChanging
	PropertyChangingEventHandler_tF293724DEA588C35A7E94C4F4413AEE6438FE9CD* ___PropertyChanging_22;
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

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
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

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87  : public MulticastDelegate_t
{
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
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

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityMessageManager/MessageDelegate
struct MessageDelegate_tD14A044E192668727C7CA3FCCFF76C636F8C298D  : public MulticastDelegate_t
{
};

// UnityMessageManager/MessageHandlerDelegate
struct MessageHandlerDelegate_tF830202AB59BFB778BA9227DA72E1E9FDFFA9CA8  : public MulticastDelegate_t
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// Arrow_Deleter
struct Arrow_Deleter_t30BF59F933D9F646F81A49CBC31566F656C76194  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single Arrow_Deleter::speed
	float ___speed_4;
};

// Arrow_Spawner
struct Arrow_Spawner_tA592D697E6BE60D8EA4A80508AD104F694215A6C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single Arrow_Spawner::green_arrow_scale
	float ___green_arrow_scale_4;
	// UnityEngine.GameObject Arrow_Spawner::GreenArrow
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___GreenArrow_5;
	// System.Single Arrow_Spawner::angle_offset
	float ___angle_offset_6;
	// System.Boolean Arrow_Spawner::mutex
	bool ___mutex_7;
	// Event_Listener_From_React Arrow_Spawner::react_values
	Event_Listener_From_React_t691FF151C9C4AA503E2A764A57CDE053376A1F5C* ___react_values_8;
};

// Event_Listener_From_React
struct Event_Listener_From_React_t691FF151C9C4AA503E2A764A57CDE053376A1F5C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Vector3 Event_Listener_From_React::user_position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___user_position_4;
	// System.Single Event_Listener_From_React::traffic_light_period_in_seconds
	float ___traffic_light_period_in_seconds_5;
	// System.Int32 Event_Listener_From_React::user_grid_resolution_x
	int32_t ___user_grid_resolution_x_6;
	// System.Int32 Event_Listener_From_React::user_grid_resolution_y
	int32_t ___user_grid_resolution_y_7;
	// System.Single Event_Listener_From_React::user_grid_size_x
	float ___user_grid_size_x_8;
	// System.Single Event_Listener_From_React::user_grid_size_y
	float ___user_grid_size_y_9;
	// System.Boolean Event_Listener_From_React::green_arrow_status
	bool ___green_arrow_status_10;
	// System.Single Event_Listener_From_React::green_arrow_period
	float ___green_arrow_period_11;
};

// Move_Car
struct Move_Car_t9ED0CA300BEFB06827E23449978E3F8FCFAA3740  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Vector3 Move_Car::starting_position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___starting_position_4;
	// System.Single Move_Car::car_speed
	float ___car_speed_5;
};

// Quit_Button
struct Quit_Button_tC108DCFE84167BA7969368E8A0DA81AF2AA3792A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Smooth_Camera_Follow
struct Smooth_Camera_Follow_tBD76252BE6D38613B5A2E411433B861709C46972  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform Smooth_Camera_Follow::user_vehicle
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___user_vehicle_4;
	// System.Single Smooth_Camera_Follow::follow_speed
	float ___follow_speed_5;
	// UnityEngine.Vector3 Smooth_Camera_Follow::view_offset
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___view_offset_6;
	// UnityEngine.Vector3 Smooth_Camera_Follow::desired_position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___desired_position_7;
	// UnityEngine.Vector3 Smooth_Camera_Follow::smoothed_position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___smoothed_position_8;
};

// UnityMessageManager
struct UnityMessageManager_t55C0CD8495B9BA2855D6C614E661E729DF614002  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityMessageManager/MessageDelegate UnityMessageManager::OnMessage
	MessageDelegate_tD14A044E192668727C7CA3FCCFF76C636F8C298D* ___OnMessage_7;
	// UnityMessageManager/MessageHandlerDelegate UnityMessageManager::OnRNMessage
	MessageHandlerDelegate_tF830202AB59BFB778BA9227DA72E1E9FDFFA9CA8* ___OnRNMessage_8;
	// System.Collections.Generic.Dictionary`2<System.Int32,UnityMessage> UnityMessageManager::waitCallbackMessageMap
	Dictionary_2_t7019529726DC9B660C51BEDBA75D6102D49A8275* ___waitCallbackMessageMap_9;
};

struct UnityMessageManager_t55C0CD8495B9BA2855D6C614E661E729DF614002_StaticFields
{
	// System.Int32 UnityMessageManager::ID
	int32_t ___ID_5;
	// UnityMessageManager UnityMessageManager::<Instance>k__BackingField
	UnityMessageManager_t55C0CD8495B9BA2855D6C614E661E729DF614002* ___U3CInstanceU3Ek__BackingField_6;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C  : public RuntimeArray
{
	ALIGN_FIELD (8) float m_Items[1];

	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
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


// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m872899879F710B2E55BC157F35464F03877C8DFA_gshared (RuntimeObject* ___original0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent1, const RuntimeMethod* method) ;
// U Newtonsoft.Json.Linq.Extensions::Value<System.Object>(System.Collections.Generic.IEnumerable`1<Newtonsoft.Json.Linq.JToken>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Extensions_Value_TisRuntimeObject_mAF6EBA58652B6AD49FA0ABA70115C4B422647464_gshared (RuntimeObject* ___value0, const RuntimeMethod* method) ;
// U Newtonsoft.Json.Linq.Extensions::Value<System.Int32>(System.Collections.Generic.IEnumerable`1<Newtonsoft.Json.Linq.JToken>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Extensions_Value_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3092267C93448D476CE9F21D518B204704D234B8_gshared (RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Void <>f__AnonymousType0`4<System.Int32,System.Object,System.Object,System.Object>::.ctor(<id>j__TPar,<seq>j__TPar,<name>j__TPar,<data>j__TPar)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ef__AnonymousType0_4__ctor_m21606653EECD94777A0BDE5940565770B138F3F4_gshared (U3CU3Ef__AnonymousType0_4_t87E69E279093DFC4580EF2B2E42CCE84BA36F057* __this, int32_t ___id0, RuntimeObject* ___seq1, RuntimeObject* ___name2, RuntimeObject* ___data3, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mAF1EF7DA16BD70E252EA5C4B0F74DE519A02CBCD_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m7316301B8CF47FB538886B229B2749EC160B9D5C_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___key0, RuntimeObject** ___value1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m12BAB2F82E34CAA21A7245AB61E48F106340C1A4_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___key0, const RuntimeMethod* method) ;
// T MessageHandler::getData<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MessageHandler_getData_TisRuntimeObject_m24756BF831B0D45AA5D8D4A1FF41A01DFD5E3888_gshared (MessageHandler_t5CBA985A6A31029C3532CC5B3EABEDF44ACBCFB5* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m92E9AB321FBD7147CA109C822D99C8B0610C27B7_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, const RuntimeMethod* method) ;

// T UnityEngine.Component::GetComponent<Arrow_Spawner>()
inline Arrow_Spawner_tA592D697E6BE60D8EA4A80508AD104F694215A6C* Component_GetComponent_TisArrow_Spawner_tA592D697E6BE60D8EA4A80508AD104F694215A6C_m6C47BC93DD4D33983C3C480DD317FAE0BE1BEE0E (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Arrow_Spawner_tA592D697E6BE60D8EA4A80508AD104F694215A6C* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___exists0, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m0E1B4CF8C29EB7FC8658C2C84C57F49C0DD12C91 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, float ___t1, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator Arrow_Spawner::Spawn_Arrow(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Arrow_Spawner_Spawn_Arrow_mDBF71B71F86432DFF8DBD55F3E42FBBD9F7AED15 (Arrow_Spawner_tA592D697E6BE60D8EA4A80508AD104F694215A6C* __this, float ___waitTime0, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// System.Void Arrow_Spawner/<Spawn_Arrow>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpawn_ArrowU3Ed__6__ctor_m6D25CF80B2B844F9EF52A2832F9A0E60EC41D1CC (U3CSpawn_ArrowU3Ed__6_t09916434D09A4F9925D4CBFC0F0166006073BAEF* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* __this, float ___seconds0, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Transform)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent1, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m872899879F710B2E55BC157F35464F03877C8DFA_gshared)(___original0, ___parent1, method);
}
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_eulerAngles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_eulerAngles(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_eulerAngles_m9F0BC484A7915A51FAB87230644229B75BACA004 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// UnityMessageManager UnityMessageManager::get_Instance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnityMessageManager_t55C0CD8495B9BA2855D6C614E661E729DF614002* UnityMessageManager_get_Instance_mFA329586DD85236EFC2D0C69E92EAA27A48174A7_inline (const RuntimeMethod* method) ;
// System.Void UnityMessageManager/MessageDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageDelegate__ctor_m072A79953B4D2581E0213262217A4B6E4DC9EF3E (MessageDelegate_tD14A044E192668727C7CA3FCCFF76C636F8C298D* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityMessageManager::add_OnMessage(UnityMessageManager/MessageDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMessageManager_add_OnMessage_m8842E4D444AF900692199658BFE2CB4088DF9E31 (UnityMessageManager_t55C0CD8495B9BA2855D6C614E661E729DF614002* __this, MessageDelegate_tD14A044E192668727C7CA3FCCFF76C636F8C298D* ___value0, const RuntimeMethod* method) ;
// Newtonsoft.Json.Linq.JObject Newtonsoft.Json.Linq.JObject::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1* JObject_Parse_mAFE39B83D08F5D889D34F83E017661FF28E4D0AC (String_t* ___json0, const RuntimeMethod* method) ;
// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JObject::GetValue(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3* JObject_GetValue_m4F5588B32404E992D225DDF4DBB7B5B033A254A2 (JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1* __this, String_t* ___propertyName0, const RuntimeMethod* method) ;
// U Newtonsoft.Json.Linq.Extensions::Value<System.String>(System.Collections.Generic.IEnumerable`1<Newtonsoft.Json.Linq.JToken>)
inline String_t* Extensions_Value_TisString_t_m2497E7CEFECAA73AFA2AC29B672F29E6489E1D30 (RuntimeObject* ___value0, const RuntimeMethod* method)
{
	return ((  String_t* (*) (RuntimeObject*, const RuntimeMethod*))Extensions_Value_TisRuntimeObject_mAF6EBA58652B6AD49FA0ABA70115C4B422647464_gshared)(___value0, method);
}
// System.Void Event_Listener_From_React::User_Car_Position(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Event_Listener_From_React_User_Car_Position_m4D90A68760487B661F77C0D4BE60B25EF773D458 (Event_Listener_From_React_t691FF151C9C4AA503E2A764A57CDE053376A1F5C* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void Event_Listener_From_React::User_Grid_Resolution(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Event_Listener_From_React_User_Grid_Resolution_m339BEA5D637F0FC16EDB4FB8ED2B360AE4240399 (Event_Listener_From_React_t691FF151C9C4AA503E2A764A57CDE053376A1F5C* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void Event_Listener_From_React::User_Grid_Size(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Event_Listener_From_React_User_Grid_Size_m3D2709D115EA71EA07B559E43E9292B4632D2C30 (Event_Listener_From_React_t691FF151C9C4AA503E2A764A57CDE053376A1F5C* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void Event_Listener_From_React::User_Green_Arrow_Status(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Event_Listener_From_React_User_Green_Arrow_Status_m2AD163BC2BDC2FE5E4F770E522F8D1C2A2868631 (Event_Listener_From_React_t691FF151C9C4AA503E2A764A57CDE053376A1F5C* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.String[] System.String::Split(System.String,System.StringSplitOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* String_Split_m15EB0AE498D606D2ABC49FC5F1EC3E29121F8AFB (String_t* __this, String_t* ___separator0, int32_t ___options1, const RuntimeMethod* method) ;
// System.Boolean System.Single::TryParse(System.String,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Single_TryParse_mF23E88B4B12DDC9E82179BB2483A714005BF006F (String_t* ___s0, float* ___result1, const RuntimeMethod* method) ;
// System.Boolean System.Int32::TryParse(System.String,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Int32_TryParse_mFC6BFCB86964E2BCA4052155B10983837A695EA4 (String_t* ___s0, int32_t* ___result1, const RuntimeMethod* method) ;
// System.Boolean System.Boolean::TryParse(System.String,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Boolean_TryParse_mACDFEB12D4D8B25F9AAA56678FEFC0724D49776F (String_t* ___value0, bool* ___result1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Application::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_Quit_m965C6D4CA85A24DD95B347D22837074F19C58134 (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m57EE8D709A93B2B0FF8D499FA2947B1D61CB1FD6_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, float ___t2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::LookAt(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_LookAt_mFEF7353E4CAEB85D5F7CEEF9276C3B8D6E314C6C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition0, const RuntimeMethod* method) ;
// U Newtonsoft.Json.Linq.Extensions::Value<System.Int32>(System.Collections.Generic.IEnumerable`1<Newtonsoft.Json.Linq.JToken>)
inline int32_t Extensions_Value_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3092267C93448D476CE9F21D518B204704D234B8 (RuntimeObject* ___value0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RuntimeObject*, const RuntimeMethod*))Extensions_Value_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3092267C93448D476CE9F21D518B204704D234B8_gshared)(___value0, method);
}
// System.Void MessageHandler::.ctor(System.Int32,System.String,System.String,Newtonsoft.Json.Linq.JToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageHandler__ctor_m6D62D4CD1FDC1ACBECA277EC939F7BF1A5C0EE0F (MessageHandler_t5CBA985A6A31029C3532CC5B3EABEDF44ACBCFB5* __this, int32_t ___id0, String_t* ___seq1, String_t* ___name2, JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3* ___data3, const RuntimeMethod* method) ;
// System.Void <>f__AnonymousType0`4<System.Int32,System.String,System.String,System.Object>::.ctor(<id>j__TPar,<seq>j__TPar,<name>j__TPar,<data>j__TPar)
inline void U3CU3Ef__AnonymousType0_4__ctor_mA9CA12BE8F40DB9F200816875B785E4FC23A2200 (U3CU3Ef__AnonymousType0_4_t4EE67C7C14929546FBC41AC6C44494555CA83454* __this, int32_t ___id0, String_t* ___seq1, String_t* ___name2, RuntimeObject* ___data3, const RuntimeMethod* method)
{
	((  void (*) (U3CU3Ef__AnonymousType0_4_t4EE67C7C14929546FBC41AC6C44494555CA83454*, int32_t, String_t*, String_t*, RuntimeObject*, const RuntimeMethod*))U3CU3Ef__AnonymousType0_4__ctor_m21606653EECD94777A0BDE5940565770B138F3F4_gshared)(__this, ___id0, ___seq1, ___name2, ___data3, method);
}
// Newtonsoft.Json.Linq.JObject Newtonsoft.Json.Linq.JObject::FromObject(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1* JObject_FromObject_m5173BDC2D9FC1B112F5895863E74860550DE915B (RuntimeObject* ___o0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void UnityMessageManager::SendMessageToRN(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMessageManager_SendMessageToRN_mC44D7A9FF78F4564478804DFE24B83BDBD69DEE2 (UnityMessageManager_t55C0CD8495B9BA2855D6C614E661E729DF614002* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C (Delegate_t* ___a0, Delegate_t* ___b1, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116 (Delegate_t* ___source0, Delegate_t* ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m303AA1C4DC810349F285B4809E426CBBA8F834F9 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___target0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<UnityMessageManager>()
inline UnityMessageManager_t55C0CD8495B9BA2855D6C614E661E729DF614002* GameObject_AddComponent_TisUnityMessageManager_t55C0CD8495B9BA2855D6C614E661E729DF614002_mA22D83CA4AD22580593E79FD1964DBD57AA7671E (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  UnityMessageManager_t55C0CD8495B9BA2855D6C614E661E729DF614002* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void UnityMessageManager::set_Instance(UnityMessageManager)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnityMessageManager_set_Instance_mCF8082813C2EFD4D6608DE611D4D75F111CB9813_inline (UnityMessageManager_t55C0CD8495B9BA2855D6C614E661E729DF614002* ___value0, const RuntimeMethod* method) ;
// UnityEngine.RuntimePlatform UnityEngine.Application::get_platform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Application_get_platform_m1AB34E71D9885B120F6021EB2B11DCB28CD6008D (const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJavaClass::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389 (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* __this, String_t* ___className0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJavaObject::CallStatic(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.Int32 UnityMessageManager::generateId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityMessageManager_generateId_m0B012964338C75AE18EDCBB09F0D011845A0052E (const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityMessage>::Add(TKey,TValue)
inline void Dictionary_2_Add_mC6FC12DDCF60A4CF5763890CB20FEB4677B4194E (Dictionary_2_t7019529726DC9B660C51BEDBA75D6102D49A8275* __this, int32_t ___key0, UnityMessage_t536476F96F550BF743BDE7AFEA8F4A4641F6F51F* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t7019529726DC9B660C51BEDBA75D6102D49A8275*, int32_t, UnityMessage_t536476F96F550BF743BDE7AFEA8F4A4641F6F51F*, const RuntimeMethod*))Dictionary_2_Add_mAF1EF7DA16BD70E252EA5C4B0F74DE519A02CBCD_gshared)(__this, ___key0, ___value1, method);
}
// System.Void <>f__AnonymousType0`4<System.Int32,System.String,System.String,Newtonsoft.Json.Linq.JObject>::.ctor(<id>j__TPar,<seq>j__TPar,<name>j__TPar,<data>j__TPar)
inline void U3CU3Ef__AnonymousType0_4__ctor_m29CA8638117DD35A3ECF831C1C575ECD9A1CFF99 (U3CU3Ef__AnonymousType0_4_t5FFD29B4BCAF7AC3517A208CD71554E9AC16EC39* __this, int32_t ___id0, String_t* ___seq1, String_t* ___name2, JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1* ___data3, const RuntimeMethod* method)
{
	((  void (*) (U3CU3Ef__AnonymousType0_4_t5FFD29B4BCAF7AC3517A208CD71554E9AC16EC39*, int32_t, String_t*, String_t*, JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1*, const RuntimeMethod*))U3CU3Ef__AnonymousType0_4__ctor_m21606653EECD94777A0BDE5940565770B138F3F4_gshared)(__this, ___id0, ___seq1, ___name2, ___data3, method);
}
// System.Void UnityMessageManager/MessageDelegate::Invoke(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MessageDelegate_Invoke_m5C88BF65BFF94836174CF133488C77B334853DCC_inline (MessageDelegate_tD14A044E192668727C7CA3FCCFF76C636F8C298D* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Boolean System.String::StartsWith(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_StartsWith_mF75DBA1EB709811E711B44E26FF919C88A8E65C0 (String_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.String System.String::Replace(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166 (String_t* __this, String_t* ___oldValue0, String_t* ___newValue1, const RuntimeMethod* method) ;
// MessageHandler MessageHandler::Deserialize(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MessageHandler_t5CBA985A6A31029C3532CC5B3EABEDF44ACBCFB5* MessageHandler_Deserialize_mAF411EC208E02166C9302B5B54878A61C5EA03C5 (String_t* ___message0, const RuntimeMethod* method) ;
// System.Boolean System.String::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D (String_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityMessage>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_mA4619F1FFBEBA7E77460219CD6B4E97AAB76C04A (Dictionary_2_t7019529726DC9B660C51BEDBA75D6102D49A8275* __this, int32_t ___key0, UnityMessage_t536476F96F550BF743BDE7AFEA8F4A4641F6F51F** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t7019529726DC9B660C51BEDBA75D6102D49A8275*, int32_t, UnityMessage_t536476F96F550BF743BDE7AFEA8F4A4641F6F51F**, const RuntimeMethod*))Dictionary_2_TryGetValue_m7316301B8CF47FB538886B229B2749EC160B9D5C_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityMessage>::Remove(TKey)
inline bool Dictionary_2_Remove_mC65CD0AF1E825A0B89893DF8BA2EA0416D2BC0CD (Dictionary_2_t7019529726DC9B660C51BEDBA75D6102D49A8275* __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t7019529726DC9B660C51BEDBA75D6102D49A8275*, int32_t, const RuntimeMethod*))Dictionary_2_Remove_m12BAB2F82E34CAA21A7245AB61E48F106340C1A4_gshared)(__this, ___key0, method);
}
// T MessageHandler::getData<System.Object>()
inline RuntimeObject* MessageHandler_getData_TisRuntimeObject_m24756BF831B0D45AA5D8D4A1FF41A01DFD5E3888 (MessageHandler_t5CBA985A6A31029C3532CC5B3EABEDF44ACBCFB5* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (MessageHandler_t5CBA985A6A31029C3532CC5B3EABEDF44ACBCFB5*, const RuntimeMethod*))MessageHandler_getData_TisRuntimeObject_m24756BF831B0D45AA5D8D4A1FF41A01DFD5E3888_gshared)(__this, method);
}
// System.Void System.Action`1<System.Object>::Invoke(T)
inline void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, RuntimeObject*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___obj0, method);
}
// System.Void UnityMessageManager/MessageHandlerDelegate::Invoke(MessageHandler)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MessageHandlerDelegate_Invoke_mC612A87743048C33E692A082D52C47AB68181A80_inline (MessageHandlerDelegate_tF830202AB59BFB778BA9227DA72E1E9FDFFA9CA8* __this, MessageHandler_t5CBA985A6A31029C3532CC5B3EABEDF44ACBCFB5* ___handler0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityMessage>::.ctor()
inline void Dictionary_2__ctor_m793321E9D300EBEC85E1995E3128954E56A9703C (Dictionary_2_t7019529726DC9B660C51BEDBA75D6102D49A8275* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t7019529726DC9B660C51BEDBA75D6102D49A8275*, const RuntimeMethod*))Dictionary_2__ctor_m92E9AB321FBD7147CA109C822D99C8B0610C27B7_gshared)(__this, method);
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
// System.Void Arrow_Deleter::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Arrow_Deleter_Update_m8E7EF6EB9142123420346A17D890C0B0887DEBCA (Arrow_Deleter_t30BF59F933D9F646F81A49CBC31566F656C76194* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Arrow_Deleter_Update_m8E7EF6EB9142123420346A17D890C0B0887DEBCA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Arrow_Deleter_t30BF59F933D9F646F81A49CBC31566F656C76194_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Arrow_Deleter_Update_m8E7EF6EB9142123420346A17D890C0B0887DEBCA_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 0));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 1));
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 2));
		return;
	}
}
// System.Void Arrow_Deleter::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Arrow_Deleter_OnTriggerEnter_mD59A49656BDAAB6E051894962AC800C44E8A3A60 (Arrow_Deleter_t30BF59F933D9F646F81A49CBC31566F656C76194* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___collider0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Arrow_Deleter_OnTriggerEnter_mD59A49656BDAAB6E051894962AC800C44E8A3A60_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Arrow_Deleter_t30BF59F933D9F646F81A49CBC31566F656C76194_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisArrow_Spawner_tA592D697E6BE60D8EA4A80508AD104F694215A6C_m6C47BC93DD4D33983C3C480DD317FAE0BE1BEE0E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___collider0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Arrow_Deleter_OnTriggerEnter_mD59A49656BDAAB6E051894962AC800C44E8A3A60_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 3));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 4));
	{
		// Arrow_Spawner other = collider.GetComponent<Arrow_Spawner>();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 5));
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___collider0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6));
		NullCheck(L_0);
		Arrow_Spawner_tA592D697E6BE60D8EA4A80508AD104F694215A6C* L_1;
		L_1 = Component_GetComponent_TisArrow_Spawner_tA592D697E6BE60D8EA4A80508AD104F694215A6C_m6C47BC93DD4D33983C3C480DD317FAE0BE1BEE0E(L_0, Component_GetComponent_TisArrow_Spawner_tA592D697E6BE60D8EA4A80508AD104F694215A6C_m6C47BC93DD4D33983C3C480DD317FAE0BE1BEE0E_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6));
		// if (other) {
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 7));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 8));
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 8));
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		// Destroy(this.gameObject, 4f);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 9));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 10));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 10));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 11));
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_m0E1B4CF8C29EB7FC8658C2C84C57F49C0DD12C91(L_3, (4.0f), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 11));
	}

IL_001d:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 12));
		return;
	}
}
// System.Void Arrow_Deleter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Arrow_Deleter__ctor_m8620C3A58E5A4CDC230E79644130922ACE013DE8 (Arrow_Deleter_t30BF59F933D9F646F81A49CBC31566F656C76194* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Arrow_Deleter__ctor_m8620C3A58E5A4CDC230E79644130922ACE013DE8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Arrow_Deleter_t30BF59F933D9F646F81A49CBC31566F656C76194_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Arrow_Deleter__ctor_m8620C3A58E5A4CDC230E79644130922ACE013DE8_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 13));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 14));
	{
		// public float speed = 1f;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 15));
		__this->___speed_4 = (1.0f);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 16));
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 16));
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
// System.Void Arrow_Spawner::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Arrow_Spawner_Update_mB66BB4C052960374549A08D906EE2F368C9520E6 (Arrow_Spawner_tA592D697E6BE60D8EA4A80508AD104F694215A6C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Arrow_Spawner_Update_mB66BB4C052960374549A08D906EE2F368C9520E6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Arrow_Spawner_tA592D697E6BE60D8EA4A80508AD104F694215A6C_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Arrow_Spawner_Update_mB66BB4C052960374549A08D906EE2F368C9520E6_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 17));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 18));
	{
		// if (!mutex && react_values.green_arrow_status) {
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 19));
		bool L_0 = __this->___mutex_7;
		if (L_0)
		{
			goto IL_002d;
		}
	}
	{
		Event_Listener_From_React_t691FF151C9C4AA503E2A764A57CDE053376A1F5C* L_1 = __this->___react_values_8;
		NullCheck(L_1);
		bool L_2 = L_1->___green_arrow_status_10;
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		// StartCoroutine(Spawn_Arrow(react_values.green_arrow_period));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 20));
		Event_Listener_From_React_t691FF151C9C4AA503E2A764A57CDE053376A1F5C* L_3 = __this->___react_values_8;
		NullCheck(L_3);
		float L_4 = L_3->___green_arrow_period_11;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 21));
		RuntimeObject* L_5;
		L_5 = Arrow_Spawner_Spawn_Arrow_mDBF71B71F86432DFF8DBD55F3E42FBBD9F7AED15(__this, L_4, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 21));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 22));
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_6;
		L_6 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_5, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 22));
	}

IL_002d:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 23));
		return;
	}
}
// System.Collections.IEnumerator Arrow_Spawner::Spawn_Arrow(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Arrow_Spawner_Spawn_Arrow_mDBF71B71F86432DFF8DBD55F3E42FBBD9F7AED15 (Arrow_Spawner_tA592D697E6BE60D8EA4A80508AD104F694215A6C* __this, float ___waitTime0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Arrow_Spawner_Spawn_Arrow_mDBF71B71F86432DFF8DBD55F3E42FBBD9F7AED15_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CSpawn_ArrowU3Ed__6_t09916434D09A4F9925D4CBFC0F0166006073BAEF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Arrow_Spawner_Spawn_Arrow_mDBF71B71F86432DFF8DBD55F3E42FBBD9F7AED15_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		U3CSpawn_ArrowU3Ed__6_t09916434D09A4F9925D4CBFC0F0166006073BAEF* L_0 = (U3CSpawn_ArrowU3Ed__6_t09916434D09A4F9925D4CBFC0F0166006073BAEF*)il2cpp_codegen_object_new(U3CSpawn_ArrowU3Ed__6_t09916434D09A4F9925D4CBFC0F0166006073BAEF_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CSpawn_ArrowU3Ed__6__ctor_m6D25CF80B2B844F9EF52A2832F9A0E60EC41D1CC(L_0, 0, NULL);
		U3CSpawn_ArrowU3Ed__6_t09916434D09A4F9925D4CBFC0F0166006073BAEF* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		U3CSpawn_ArrowU3Ed__6_t09916434D09A4F9925D4CBFC0F0166006073BAEF* L_2 = L_1;
		float L_3 = ___waitTime0;
		NullCheck(L_2);
		L_2->___waitTime_3 = L_3;
		return L_2;
	}
}
// System.Void Arrow_Spawner::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Arrow_Spawner__ctor_m91483891E628325F059392E039AD216B91BF49CF (Arrow_Spawner_tA592D697E6BE60D8EA4A80508AD104F694215A6C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Arrow_Spawner__ctor_m91483891E628325F059392E039AD216B91BF49CF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Arrow_Spawner_tA592D697E6BE60D8EA4A80508AD104F694215A6C_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Arrow_Spawner__ctor_m91483891E628325F059392E039AD216B91BF49CF_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 24));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 25));
	{
		// public float green_arrow_scale = 1f; // For one block length
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 26));
		__this->___green_arrow_scale_4 = (1.0f);
		// public float angle_offset = -90f;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 27));
		__this->___angle_offset_6 = (-90.0f);
		// public bool mutex = true;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 28));
		__this->___mutex_7 = (bool)1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 29));
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 29));
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
// System.Void Arrow_Spawner/<Spawn_Arrow>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpawn_ArrowU3Ed__6__ctor_m6D25CF80B2B844F9EF52A2832F9A0E60EC41D1CC (U3CSpawn_ArrowU3Ed__6_t09916434D09A4F9925D4CBFC0F0166006073BAEF* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CSpawn_ArrowU3Ed__6__ctor_m6D25CF80B2B844F9EF52A2832F9A0E60EC41D1CC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, U3CSpawn_ArrowU3Ed__6__ctor_m6D25CF80B2B844F9EF52A2832F9A0E60EC41D1CC_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Arrow_Spawner/<Spawn_Arrow>d__6::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpawn_ArrowU3Ed__6_System_IDisposable_Dispose_m4A1AABB6CEAB54BB18B1145464BA6F0637C4E550 (U3CSpawn_ArrowU3Ed__6_t09916434D09A4F9925D4CBFC0F0166006073BAEF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CSpawn_ArrowU3Ed__6_System_IDisposable_Dispose_m4A1AABB6CEAB54BB18B1145464BA6F0637C4E550_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, U3CSpawn_ArrowU3Ed__6_System_IDisposable_Dispose_m4A1AABB6CEAB54BB18B1145464BA6F0637C4E550_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		return;
	}
}
// System.Boolean Arrow_Spawner/<Spawn_Arrow>d__6::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CSpawn_ArrowU3Ed__6_MoveNext_mD7E207AFEBA063AB04EF9471B5F4E0994797A0FF (U3CSpawn_ArrowU3Ed__6_t09916434D09A4F9925D4CBFC0F0166006073BAEF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Arrow_Spawner_tA592D697E6BE60D8EA4A80508AD104F694215A6C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CSpawn_ArrowU3Ed__6_MoveNext_mD7E207AFEBA063AB04EF9471B5F4E0994797A0FF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CSpawn_ArrowU3Ed__6_t09916434D09A4F9925D4CBFC0F0166006073BAEF_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Arrow_Spawner_tA592D697E6BE60D8EA4A80508AD104F694215A6C* V_1 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_2 = NULL;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_2));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, U3CSpawn_ArrowU3Ed__6_MoveNext_mD7E207AFEBA063AB04EF9471B5F4E0994797A0FF_RuntimeMethod_var, methodExecutionContextThis, NULL, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 30));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 31));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 32));
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		Arrow_Spawner_tA592D697E6BE60D8EA4A80508AD104F694215A6C* L_1 = __this->___U3CU3E4__this_2;
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
			goto IL_0042;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// if (mutex) {
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 33));
		Arrow_Spawner_tA592D697E6BE60D8EA4A80508AD104F694215A6C* L_4 = V_1;
		NullCheck(L_4);
		bool L_5 = L_4->___mutex_7;
		if (!L_5)
		{
			goto IL_0028;
		}
	}
	{
		// yield break;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 34));
		return (bool)0;
	}

IL_0028:
	{
		// yield return new WaitForSeconds(waitTime);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 35));
		float L_6 = __this->___waitTime_3;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 36));
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_7 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_7, L_6, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 36));
		__this->___U3CU3E2__current_1 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_7);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0042:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 37));
		__this->___U3CU3E1__state_0 = (-1);
		// GameObject spawned_Arrow = GameObject.Instantiate(GreenArrow, transform);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 38));
		Arrow_Spawner_tA592D697E6BE60D8EA4A80508AD104F694215A6C* L_8 = V_1;
		NullCheck(L_8);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = L_8->___GreenArrow_5;
		Arrow_Spawner_tA592D697E6BE60D8EA4A80508AD104F694215A6C* L_10 = V_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 39));
		NullCheck(L_10);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_10, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 39));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 40));
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12;
		L_12 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934(L_9, L_11, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 40));
		V_2 = L_12;
		// spawned_Arrow.transform.eulerAngles = new Vector3(spawned_Arrow.transform.eulerAngles.x, spawned_Arrow.transform.eulerAngles.y + -90f, spawned_Arrow.transform.eulerAngles.z);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 41));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = V_2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 42));
		NullCheck(L_13);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_13, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 42));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = V_2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 43));
		NullCheck(L_15);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_15, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 43));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 44));
		NullCheck(L_16);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_16, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 44));
		float L_18 = L_17.___x_2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19 = V_2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 45));
		NullCheck(L_19);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20;
		L_20 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_19, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 45));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 46));
		NullCheck(L_20);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_20, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 46));
		float L_22 = L_21.___y_3;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_23 = V_2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 47));
		NullCheck(L_23);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24;
		L_24 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_23, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 47));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 48));
		NullCheck(L_24);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_24, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 48));
		float L_26 = L_25.___z_4;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 49));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		memset((&L_27), 0, sizeof(L_27));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_27), L_18, ((float)il2cpp_codegen_add(L_22, (-90.0f))), L_26, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 49));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 50));
		NullCheck(L_14);
		Transform_set_eulerAngles_m9F0BC484A7915A51FAB87230644229B75BACA004(L_14, L_27, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 50));
		// mutex = false;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 51));
		Arrow_Spawner_tA592D697E6BE60D8EA4A80508AD104F694215A6C* L_28 = V_1;
		NullCheck(L_28);
		L_28->___mutex_7 = (bool)0;
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 52));
		return (bool)0;
	}
}
// System.Object Arrow_Spawner/<Spawn_Arrow>d__6::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSpawn_ArrowU3Ed__6_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mE58A9CE3D318AE330B7C2346A79D0FA2BA77B30C (U3CSpawn_ArrowU3Ed__6_t09916434D09A4F9925D4CBFC0F0166006073BAEF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CSpawn_ArrowU3Ed__6_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mE58A9CE3D318AE330B7C2346A79D0FA2BA77B30C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, U3CSpawn_ArrowU3Ed__6_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mE58A9CE3D318AE330B7C2346A79D0FA2BA77B30C_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Arrow_Spawner/<Spawn_Arrow>d__6::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpawn_ArrowU3Ed__6_System_Collections_IEnumerator_Reset_m38ED4C209F27FC0A6036F6CC8E586AACCFD237D9 (U3CSpawn_ArrowU3Ed__6_t09916434D09A4F9925D4CBFC0F0166006073BAEF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CSpawn_ArrowU3Ed__6_System_Collections_IEnumerator_Reset_m38ED4C209F27FC0A6036F6CC8E586AACCFD237D9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, U3CSpawn_ArrowU3Ed__6_System_Collections_IEnumerator_Reset_m38ED4C209F27FC0A6036F6CC8E586AACCFD237D9_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CSpawn_ArrowU3Ed__6_System_Collections_IEnumerator_Reset_m38ED4C209F27FC0A6036F6CC8E586AACCFD237D9_RuntimeMethod_var)));
	}
}
// System.Object Arrow_Spawner/<Spawn_Arrow>d__6::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSpawn_ArrowU3Ed__6_System_Collections_IEnumerator_get_Current_m1E0697646FC37C9F2251173151609351AD1CA0EF (U3CSpawn_ArrowU3Ed__6_t09916434D09A4F9925D4CBFC0F0166006073BAEF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CSpawn_ArrowU3Ed__6_System_Collections_IEnumerator_get_Current_m1E0697646FC37C9F2251173151609351AD1CA0EF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, U3CSpawn_ArrowU3Ed__6_System_Collections_IEnumerator_get_Current_m1E0697646FC37C9F2251173151609351AD1CA0EF_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
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
// System.Void Event_Listener_From_React::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Event_Listener_From_React_Awake_m25A6C807D1607E2BA4E986B531DBB60EBB2B1D35 (Event_Listener_From_React_t691FF151C9C4AA503E2A764A57CDE053376A1F5C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Event_Listener_From_React_Awake_m25A6C807D1607E2BA4E986B531DBB60EBB2B1D35_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Event_Listener_From_React_Setup_m512465C30324D5AF25925CF0F7C06660DE6EB183_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Event_Listener_From_React_User_Car_Position_m4D90A68760487B661F77C0D4BE60B25EF773D458_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Event_Listener_From_React_User_Green_Arrow_Status_m2AD163BC2BDC2FE5E4F770E522F8D1C2A2868631_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Event_Listener_From_React_User_Grid_Resolution_m339BEA5D637F0FC16EDB4FB8ED2B360AE4240399_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Event_Listener_From_React_User_Grid_Size_m3D2709D115EA71EA07B559E43E9292B4632D2C30_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Event_Listener_From_React_t691FF151C9C4AA503E2A764A57CDE053376A1F5C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageDelegate_tD14A044E192668727C7CA3FCCFF76C636F8C298D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityMessageManager_t55C0CD8495B9BA2855D6C614E661E729DF614002_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Event_Listener_From_React_Awake_m25A6C807D1607E2BA4E986B531DBB60EBB2B1D35_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 53));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 54));
	{
		// UnityMessageManager.Instance.OnMessage += Setup;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 55));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 56));
		il2cpp_codegen_runtime_class_init_inline(UnityMessageManager_t55C0CD8495B9BA2855D6C614E661E729DF614002_il2cpp_TypeInfo_var);
		UnityMessageManager_t55C0CD8495B9BA2855D6C614E661E729DF614002* L_0;
		L_0 = UnityMessageManager_get_Instance_mFA329586DD85236EFC2D0C69E92EAA27A48174A7_inline(NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 56));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 57));
		MessageDelegate_tD14A044E192668727C7CA3FCCFF76C636F8C298D* L_1 = (MessageDelegate_tD14A044E192668727C7CA3FCCFF76C636F8C298D*)il2cpp_codegen_object_new(MessageDelegate_tD14A044E192668727C7CA3FCCFF76C636F8C298D_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		MessageDelegate__ctor_m072A79953B4D2581E0213262217A4B6E4DC9EF3E(L_1, __this, (intptr_t)((void*)Event_Listener_From_React_Setup_m512465C30324D5AF25925CF0F7C06660DE6EB183_RuntimeMethod_var), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 57));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 58));
		NullCheck(L_0);
		UnityMessageManager_add_OnMessage_m8842E4D444AF900692199658BFE2CB4088DF9E31(L_0, L_1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 58));
		// UnityMessageManager.Instance.OnMessage += User_Car_Position;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 59));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 60));
		UnityMessageManager_t55C0CD8495B9BA2855D6C614E661E729DF614002* L_2;
		L_2 = UnityMessageManager_get_Instance_mFA329586DD85236EFC2D0C69E92EAA27A48174A7_inline(NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 60));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 61));
		MessageDelegate_tD14A044E192668727C7CA3FCCFF76C636F8C298D* L_3 = (MessageDelegate_tD14A044E192668727C7CA3FCCFF76C636F8C298D*)il2cpp_codegen_object_new(MessageDelegate_tD14A044E192668727C7CA3FCCFF76C636F8C298D_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		MessageDelegate__ctor_m072A79953B4D2581E0213262217A4B6E4DC9EF3E(L_3, __this, (intptr_t)((void*)Event_Listener_From_React_User_Car_Position_m4D90A68760487B661F77C0D4BE60B25EF773D458_RuntimeMethod_var), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 61));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 62));
		NullCheck(L_2);
		UnityMessageManager_add_OnMessage_m8842E4D444AF900692199658BFE2CB4088DF9E31(L_2, L_3, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 62));
		// UnityMessageManager.Instance.OnMessage += User_Grid_Resolution;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 63));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 64));
		UnityMessageManager_t55C0CD8495B9BA2855D6C614E661E729DF614002* L_4;
		L_4 = UnityMessageManager_get_Instance_mFA329586DD85236EFC2D0C69E92EAA27A48174A7_inline(NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 64));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 65));
		MessageDelegate_tD14A044E192668727C7CA3FCCFF76C636F8C298D* L_5 = (MessageDelegate_tD14A044E192668727C7CA3FCCFF76C636F8C298D*)il2cpp_codegen_object_new(MessageDelegate_tD14A044E192668727C7CA3FCCFF76C636F8C298D_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		MessageDelegate__ctor_m072A79953B4D2581E0213262217A4B6E4DC9EF3E(L_5, __this, (intptr_t)((void*)Event_Listener_From_React_User_Grid_Resolution_m339BEA5D637F0FC16EDB4FB8ED2B360AE4240399_RuntimeMethod_var), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 65));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 66));
		NullCheck(L_4);
		UnityMessageManager_add_OnMessage_m8842E4D444AF900692199658BFE2CB4088DF9E31(L_4, L_5, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 66));
		// UnityMessageManager.Instance.OnMessage += User_Grid_Size;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 67));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 68));
		UnityMessageManager_t55C0CD8495B9BA2855D6C614E661E729DF614002* L_6;
		L_6 = UnityMessageManager_get_Instance_mFA329586DD85236EFC2D0C69E92EAA27A48174A7_inline(NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 68));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 69));
		MessageDelegate_tD14A044E192668727C7CA3FCCFF76C636F8C298D* L_7 = (MessageDelegate_tD14A044E192668727C7CA3FCCFF76C636F8C298D*)il2cpp_codegen_object_new(MessageDelegate_tD14A044E192668727C7CA3FCCFF76C636F8C298D_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		MessageDelegate__ctor_m072A79953B4D2581E0213262217A4B6E4DC9EF3E(L_7, __this, (intptr_t)((void*)Event_Listener_From_React_User_Grid_Size_m3D2709D115EA71EA07B559E43E9292B4632D2C30_RuntimeMethod_var), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 69));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 70));
		NullCheck(L_6);
		UnityMessageManager_add_OnMessage_m8842E4D444AF900692199658BFE2CB4088DF9E31(L_6, L_7, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 70));
		// UnityMessageManager.Instance.OnMessage += User_Green_Arrow_Status;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 71));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 72));
		UnityMessageManager_t55C0CD8495B9BA2855D6C614E661E729DF614002* L_8;
		L_8 = UnityMessageManager_get_Instance_mFA329586DD85236EFC2D0C69E92EAA27A48174A7_inline(NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 72));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 73));
		MessageDelegate_tD14A044E192668727C7CA3FCCFF76C636F8C298D* L_9 = (MessageDelegate_tD14A044E192668727C7CA3FCCFF76C636F8C298D*)il2cpp_codegen_object_new(MessageDelegate_tD14A044E192668727C7CA3FCCFF76C636F8C298D_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		MessageDelegate__ctor_m072A79953B4D2581E0213262217A4B6E4DC9EF3E(L_9, __this, (intptr_t)((void*)Event_Listener_From_React_User_Green_Arrow_Status_m2AD163BC2BDC2FE5E4F770E522F8D1C2A2868631_RuntimeMethod_var), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 73));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 74));
		NullCheck(L_8);
		UnityMessageManager_add_OnMessage_m8842E4D444AF900692199658BFE2CB4088DF9E31(L_8, L_9, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 74));
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 75));
		return;
	}
}
// System.Void Event_Listener_From_React::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Event_Listener_From_React_OnDestroy_m1530850242A5B3616075143375A974654A52BA23 (Event_Listener_From_React_t691FF151C9C4AA503E2A764A57CDE053376A1F5C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Event_Listener_From_React_OnDestroy_m1530850242A5B3616075143375A974654A52BA23_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Event_Listener_From_React_t691FF151C9C4AA503E2A764A57CDE053376A1F5C_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Event_Listener_From_React_OnDestroy_m1530850242A5B3616075143375A974654A52BA23_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 76));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 77));
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 78));
		return;
	}
}
// System.Void Event_Listener_From_React::Setup(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Event_Listener_From_React_Setup_m512465C30324D5AF25925CF0F7C06660DE6EB183 (Event_Listener_From_React_t691FF151C9C4AA503E2A764A57CDE053376A1F5C* __this, String_t* ___message0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Event_Listener_From_React_Setup_m512465C30324D5AF25925CF0F7C06660DE6EB183_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Event_Listener_From_React_t691FF151C9C4AA503E2A764A57CDE053376A1F5C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Extensions_Value_TisString_t_m2497E7CEFECAA73AFA2AC29B672F29E6489E1D30_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1E61E627781C7D1EA355244A3562DF11E46D69B4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA9656A6CC60F35B16CF8F14C4BAE77A72EFF2602);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC8FB51AEBC12348E8C92F607223E1DAFCC4BAD49);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEAADFD9E2FF4DA35D71A3BECFA29C739DFACB9F1);
		s_Il2CppMethodInitialized = true;
	}
	JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1* V_0 = NULL;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___message0));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Event_Listener_From_React_Setup_m512465C30324D5AF25925CF0F7C06660DE6EB183_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 79));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 80));
	{
		// JObject m = JObject.Parse(message);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 81));
		String_t* L_0 = ___message0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 82));
		JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1* L_1;
		L_1 = JObject_Parse_mAFE39B83D08F5D889D34F83E017661FF28E4D0AC(L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 82));
		V_0 = L_1;
		// User_Car_Position(m.GetValue("car_position").Value<string>());
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 83));
		JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1* L_2 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 84));
		NullCheck(L_2);
		JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3* L_3;
		L_3 = JObject_GetValue_m4F5588B32404E992D225DDF4DBB7B5B033A254A2(L_2, _stringLiteralA9656A6CC60F35B16CF8F14C4BAE77A72EFF2602, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 84));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 85));
		String_t* L_4;
		L_4 = Extensions_Value_TisString_t_m2497E7CEFECAA73AFA2AC29B672F29E6489E1D30(L_3, Extensions_Value_TisString_t_m2497E7CEFECAA73AFA2AC29B672F29E6489E1D30_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 85));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 86));
		Event_Listener_From_React_User_Car_Position_m4D90A68760487B661F77C0D4BE60B25EF773D458(__this, L_4, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 86));
		// User_Grid_Resolution(m.GetValue("grid_resolution").Value<string>());
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 87));
		JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1* L_5 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 88));
		NullCheck(L_5);
		JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3* L_6;
		L_6 = JObject_GetValue_m4F5588B32404E992D225DDF4DBB7B5B033A254A2(L_5, _stringLiteralEAADFD9E2FF4DA35D71A3BECFA29C739DFACB9F1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 88));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 89));
		String_t* L_7;
		L_7 = Extensions_Value_TisString_t_m2497E7CEFECAA73AFA2AC29B672F29E6489E1D30(L_6, Extensions_Value_TisString_t_m2497E7CEFECAA73AFA2AC29B672F29E6489E1D30_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 89));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 90));
		Event_Listener_From_React_User_Grid_Resolution_m339BEA5D637F0FC16EDB4FB8ED2B360AE4240399(__this, L_7, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 90));
		// User_Grid_Size(m.GetValue("grid_size").Value<string>());
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 91));
		JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1* L_8 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 92));
		NullCheck(L_8);
		JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3* L_9;
		L_9 = JObject_GetValue_m4F5588B32404E992D225DDF4DBB7B5B033A254A2(L_8, _stringLiteral1E61E627781C7D1EA355244A3562DF11E46D69B4, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 92));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 93));
		String_t* L_10;
		L_10 = Extensions_Value_TisString_t_m2497E7CEFECAA73AFA2AC29B672F29E6489E1D30(L_9, Extensions_Value_TisString_t_m2497E7CEFECAA73AFA2AC29B672F29E6489E1D30_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 93));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 94));
		Event_Listener_From_React_User_Grid_Size_m3D2709D115EA71EA07B559E43E9292B4632D2C30(__this, L_10, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 94));
		// User_Green_Arrow_Status(m.GetValue("green_arrow_status").Value<string>());
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 95));
		JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1* L_11 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 96));
		NullCheck(L_11);
		JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3* L_12;
		L_12 = JObject_GetValue_m4F5588B32404E992D225DDF4DBB7B5B033A254A2(L_11, _stringLiteralC8FB51AEBC12348E8C92F607223E1DAFCC4BAD49, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 96));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 97));
		String_t* L_13;
		L_13 = Extensions_Value_TisString_t_m2497E7CEFECAA73AFA2AC29B672F29E6489E1D30(L_12, Extensions_Value_TisString_t_m2497E7CEFECAA73AFA2AC29B672F29E6489E1D30_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 97));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 98));
		Event_Listener_From_React_User_Green_Arrow_Status_m2AD163BC2BDC2FE5E4F770E522F8D1C2A2868631(__this, L_13, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 98));
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 99));
		return;
	}
}
// System.Void Event_Listener_From_React::User_Car_Position(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Event_Listener_From_React_User_Car_Position_m4D90A68760487B661F77C0D4BE60B25EF773D458 (Event_Listener_From_React_t691FF151C9C4AA503E2A764A57CDE053376A1F5C* __this, String_t* ___message0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Event_Listener_From_React_User_Car_Position_m4D90A68760487B661F77C0D4BE60B25EF773D458_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Event_Listener_From_React_t691FF151C9C4AA503E2A764A57CDE053376A1F5C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_0 = NULL;
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* V_1 = NULL;
	int32_t V_2 = 0;
	float V_3 = 0.0f;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___message0));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1), (&V_2), (&V_3));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Event_Listener_From_React_User_Car_Position_m4D90A68760487B661F77C0D4BE60B25EF773D458_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 100));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 101));
	{
		// string[] values = message.Split(" ");
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 102));
		String_t* L_0 = ___message0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 103));
		NullCheck(L_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1;
		L_1 = String_Split_m15EB0AE498D606D2ABC49FC5F1EC3E29121F8AFB(L_0, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, 0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 103));
		V_0 = L_1;
		// float[] converted_values = new float[values.Length];
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 104));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = V_0;
		NullCheck(L_2);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_3 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length)));
		V_1 = L_3;
		// for (int i = 0; i < values.Length; i++) {
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 105));
		V_2 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 106));
		goto IL_002d;
	}

IL_001a:
	{
		// float.TryParse(values[i], out float result);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 107));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = V_0;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		String_t* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 108));
		bool L_8;
		L_8 = Single_TryParse_mF23E88B4B12DDC9E82179BB2483A714005BF006F(L_7, (&V_3), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 108));
		// converted_values[i] = result;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 109));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_9 = V_1;
		int32_t L_10 = V_2;
		float L_11 = V_3;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(L_10), (float)L_11);
		// for (int i = 0; i < values.Length; i++) {
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 110));
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_002d:
	{
		// for (int i = 0; i < values.Length; i++) {
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 111));
		int32_t L_13 = V_2;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = V_0;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_001a;
		}
	}
	{
		// user_position = new Vector3(converted_values[0], 0f, converted_values[1]);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 112));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_15 = V_1;
		NullCheck(L_15);
		int32_t L_16 = 0;
		float L_17 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_18 = V_1;
		NullCheck(L_18);
		int32_t L_19 = 1;
		float L_20 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 113));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		memset((&L_21), 0, sizeof(L_21));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_21), L_17, (0.0f), L_20, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 113));
		__this->___user_position_4 = L_21;
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 114));
		return;
	}
}
// System.Void Event_Listener_From_React::User_Grid_Resolution(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Event_Listener_From_React_User_Grid_Resolution_m339BEA5D637F0FC16EDB4FB8ED2B360AE4240399 (Event_Listener_From_React_t691FF151C9C4AA503E2A764A57CDE053376A1F5C* __this, String_t* ___message0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Event_Listener_From_React_User_Grid_Resolution_m339BEA5D637F0FC16EDB4FB8ED2B360AE4240399_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Event_Listener_From_React_t691FF151C9C4AA503E2A764A57CDE053376A1F5C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_0 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___message0));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1), (&V_2), (&V_3));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Event_Listener_From_React_User_Grid_Resolution_m339BEA5D637F0FC16EDB4FB8ED2B360AE4240399_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 115));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 116));
	{
		// string[] values = message.Split(" ");
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 117));
		String_t* L_0 = ___message0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 118));
		NullCheck(L_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1;
		L_1 = String_Split_m15EB0AE498D606D2ABC49FC5F1EC3E29121F8AFB(L_0, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, 0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 118));
		V_0 = L_1;
		// int[] converted_values = new int[values.Length];
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 119));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = V_0;
		NullCheck(L_2);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length)));
		V_1 = L_3;
		// for (int i = 0; i < values.Length; i++)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 120));
		V_2 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 121));
		goto IL_002d;
	}

IL_001a:
	{
		// int.TryParse(values[i], out int result);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 122));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = V_0;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		String_t* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 123));
		bool L_8;
		L_8 = Int32_TryParse_mFC6BFCB86964E2BCA4052155B10983837A695EA4(L_7, (&V_3), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 123));
		// converted_values[i] = result;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 124));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_1;
		int32_t L_10 = V_2;
		int32_t L_11 = V_3;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(L_10), (int32_t)L_11);
		// for (int i = 0; i < values.Length; i++)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 125));
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_002d:
	{
		// for (int i = 0; i < values.Length; i++)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 126));
		int32_t L_13 = V_2;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = V_0;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_001a;
		}
	}
	{
		// user_grid_resolution_x = converted_values[0];
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 127));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_15 = V_1;
		NullCheck(L_15);
		int32_t L_16 = 0;
		int32_t L_17 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		__this->___user_grid_resolution_x_6 = L_17;
		// user_grid_resolution_x = converted_values[1];
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 128));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_18 = V_1;
		NullCheck(L_18);
		int32_t L_19 = 1;
		int32_t L_20 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		__this->___user_grid_resolution_x_6 = L_20;
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 129));
		return;
	}
}
// System.Void Event_Listener_From_React::User_Grid_Size(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Event_Listener_From_React_User_Grid_Size_m3D2709D115EA71EA07B559E43E9292B4632D2C30 (Event_Listener_From_React_t691FF151C9C4AA503E2A764A57CDE053376A1F5C* __this, String_t* ___message0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Event_Listener_From_React_User_Grid_Size_m3D2709D115EA71EA07B559E43E9292B4632D2C30_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Event_Listener_From_React_t691FF151C9C4AA503E2A764A57CDE053376A1F5C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_0 = NULL;
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* V_1 = NULL;
	int32_t V_2 = 0;
	float V_3 = 0.0f;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___message0));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1), (&V_2), (&V_3));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Event_Listener_From_React_User_Grid_Size_m3D2709D115EA71EA07B559E43E9292B4632D2C30_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 130));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 131));
	{
		// string[] values = message.Split(" ");
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 132));
		String_t* L_0 = ___message0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 133));
		NullCheck(L_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1;
		L_1 = String_Split_m15EB0AE498D606D2ABC49FC5F1EC3E29121F8AFB(L_0, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, 0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 133));
		V_0 = L_1;
		// float[] converted_values = new float[values.Length];
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 134));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = V_0;
		NullCheck(L_2);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_3 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length)));
		V_1 = L_3;
		// for (int i = 0; i < values.Length; i++)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 135));
		V_2 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 136));
		goto IL_002d;
	}

IL_001a:
	{
		// float.TryParse(values[i], out float result);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 137));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = V_0;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		String_t* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 138));
		bool L_8;
		L_8 = Single_TryParse_mF23E88B4B12DDC9E82179BB2483A714005BF006F(L_7, (&V_3), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 138));
		// converted_values[i] = result;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 139));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_9 = V_1;
		int32_t L_10 = V_2;
		float L_11 = V_3;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(L_10), (float)L_11);
		// for (int i = 0; i < values.Length; i++)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 140));
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_002d:
	{
		// for (int i = 0; i < values.Length; i++)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 141));
		int32_t L_13 = V_2;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = V_0;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_001a;
		}
	}
	{
		// user_grid_size_x = converted_values[0];
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 142));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_15 = V_1;
		NullCheck(L_15);
		int32_t L_16 = 0;
		float L_17 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		__this->___user_grid_size_x_8 = L_17;
		// user_grid_size_y = converted_values[1];
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 143));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_18 = V_1;
		NullCheck(L_18);
		int32_t L_19 = 1;
		float L_20 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		__this->___user_grid_size_y_9 = L_20;
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 144));
		return;
	}
}
// System.Void Event_Listener_From_React::User_Green_Arrow_Status(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Event_Listener_From_React_User_Green_Arrow_Status_m2AD163BC2BDC2FE5E4F770E522F8D1C2A2868631 (Event_Listener_From_React_t691FF151C9C4AA503E2A764A57CDE053376A1F5C* __this, String_t* ___message0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Event_Listener_From_React_User_Green_Arrow_Status_m2AD163BC2BDC2FE5E4F770E522F8D1C2A2868631_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Event_Listener_From_React_t691FF151C9C4AA503E2A764A57CDE053376A1F5C_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___message0));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Event_Listener_From_React_User_Green_Arrow_Status_m2AD163BC2BDC2FE5E4F770E522F8D1C2A2868631_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 145));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 146));
	{
		// bool.TryParse(message, out bool result);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 147));
		String_t* L_0 = ___message0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 148));
		il2cpp_codegen_runtime_class_init_inline(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Boolean_TryParse_mACDFEB12D4D8B25F9AAA56678FEFC0724D49776F(L_0, (&V_0), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 148));
		// green_arrow_status = result;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 149));
		bool L_2 = V_0;
		__this->___green_arrow_status_10 = L_2;
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 150));
		return;
	}
}
// System.Void Event_Listener_From_React::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Event_Listener_From_React_Update_mFA03015B43ACA125F9DE884EB6282644AF8C0D40 (Event_Listener_From_React_t691FF151C9C4AA503E2A764A57CDE053376A1F5C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Event_Listener_From_React_Update_mFA03015B43ACA125F9DE884EB6282644AF8C0D40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Event_Listener_From_React_t691FF151C9C4AA503E2A764A57CDE053376A1F5C_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Event_Listener_From_React_Update_mFA03015B43ACA125F9DE884EB6282644AF8C0D40_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 151));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 152));
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 153));
		return;
	}
}
// System.Void Event_Listener_From_React::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Event_Listener_From_React__ctor_mD0B69F7C4C0F06D290978ADE63479EA58E7DC35A (Event_Listener_From_React_t691FF151C9C4AA503E2A764A57CDE053376A1F5C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Event_Listener_From_React__ctor_mD0B69F7C4C0F06D290978ADE63479EA58E7DC35A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Event_Listener_From_React_t691FF151C9C4AA503E2A764A57CDE053376A1F5C_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Event_Listener_From_React__ctor_mD0B69F7C4C0F06D290978ADE63479EA58E7DC35A_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 154));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 155));
	{
		// public float traffic_light_period_in_seconds = 10f;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 156));
		__this->___traffic_light_period_in_seconds_5 = (10.0f);
		// public int user_grid_resolution_x, user_grid_resolution_y = 1920; // This is really just the pixel-resolution of the grid;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 157));
		__this->___user_grid_resolution_y_7 = ((int32_t)1920);
		// public float user_grid_size_x, user_grid_size_y = 28f; // By default this is 28 feet.
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 158));
		__this->___user_grid_size_y_9 = (28.0f);
		// public float green_arrow_period = 10f;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 159));
		__this->___green_arrow_period_11 = (10.0f);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 160));
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 160));
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
// System.Void Move_Car::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Move_Car_Start_mFAC0B9737511E2B2649CEAD9208F70576E236644 (Move_Car_t9ED0CA300BEFB06827E23449978E3F8FCFAA3740* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Move_Car_Start_mFAC0B9737511E2B2649CEAD9208F70576E236644_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Move_Car_t9ED0CA300BEFB06827E23449978E3F8FCFAA3740_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Move_Car_Start_mFAC0B9737511E2B2649CEAD9208F70576E236644_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 161));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 162));
	{
		// starting_position = transform.position;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 163));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 164));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 164));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 165));
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 165));
		__this->___starting_position_4 = L_1;
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 166));
		return;
	}
}
// System.Void Move_Car::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Move_Car_Update_m2AF8FB001367D9BF3CD29FAA6D27F1123AC60667 (Move_Car_t9ED0CA300BEFB06827E23449978E3F8FCFAA3740* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Move_Car_Update_m2AF8FB001367D9BF3CD29FAA6D27F1123AC60667_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Move_Car_t9ED0CA300BEFB06827E23449978E3F8FCFAA3740_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Move_Car_Update_m2AF8FB001367D9BF3CD29FAA6D27F1123AC60667_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 167));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 168));
	{
		// if ((transform.position - starting_position).magnitude > 28) {
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 169));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 170));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 170));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 171));
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 171));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = __this->___starting_position_4;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 172));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_1, L_2, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 172));
		V_0 = L_3;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 173));
		float L_4;
		L_4 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_0), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 173));
		if ((!(((float)L_4) > ((float)(28.0f)))))
		{
			goto IL_0036;
		}
	}
	{
		// transform.position = starting_position;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 174));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 175));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 175));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = __this->___starting_position_4;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 176));
		NullCheck(L_5);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_5, L_6, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 176));
	}

IL_0036:
	{
		// transform.position = transform.position + new Vector3(car_speed, 0, 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 177));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 178));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 178));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 179));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 179));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 180));
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_8, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 180));
		float L_10 = __this->___car_speed_5;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 181));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		memset((&L_11), 0, sizeof(L_11));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_11), L_10, (0.0f), (0.0f), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 181));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 182));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_9, L_11, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 182));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 183));
		NullCheck(L_7);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_7, L_12, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 183));
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 184));
		return;
	}
}
// System.Void Move_Car::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Move_Car__ctor_m21961C913373868C7F0F1AA510632A49A91A6B54 (Move_Car_t9ED0CA300BEFB06827E23449978E3F8FCFAA3740* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Move_Car__ctor_m21961C913373868C7F0F1AA510632A49A91A6B54_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Move_Car_t9ED0CA300BEFB06827E23449978E3F8FCFAA3740_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Move_Car__ctor_m21961C913373868C7F0F1AA510632A49A91A6B54_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 185));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 186));
	{
		// public float car_speed = 0.25f;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 187));
		__this->___car_speed_5 = (0.25f);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 188));
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 188));
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
// System.Void Quit_Button::quit_app()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Quit_Button_quit_app_m56CB02AE3CE9D82CE566A3D88960334117B77AFC (Quit_Button_tC108DCFE84167BA7969368E8A0DA81AF2AA3792A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quit_Button_quit_app_m56CB02AE3CE9D82CE566A3D88960334117B77AFC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quit_Button_tC108DCFE84167BA7969368E8A0DA81AF2AA3792A_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Quit_Button_quit_app_m56CB02AE3CE9D82CE566A3D88960334117B77AFC_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 189));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 190));
	{
		// Application.Quit();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 191));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 192));
		Application_Quit_m965C6D4CA85A24DD95B347D22837074F19C58134(NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 192));
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 193));
		return;
	}
}
// System.Void Quit_Button::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Quit_Button__ctor_mA28E1F715DE13255AF4D539CBAD730C91C6948B1 (Quit_Button_tC108DCFE84167BA7969368E8A0DA81AF2AA3792A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quit_Button__ctor_mA28E1F715DE13255AF4D539CBAD730C91C6948B1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Quit_Button__ctor_mA28E1F715DE13255AF4D539CBAD730C91C6948B1_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
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
// System.Void Smooth_Camera_Follow::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Smooth_Camera_Follow_Start_mBFFEABE7A9FB6577DCD048EDB4A4EF7454B4C142 (Smooth_Camera_Follow_tBD76252BE6D38613B5A2E411433B861709C46972* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Smooth_Camera_Follow_Start_mBFFEABE7A9FB6577DCD048EDB4A4EF7454B4C142_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Smooth_Camera_Follow_tBD76252BE6D38613B5A2E411433B861709C46972_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Smooth_Camera_Follow_Start_mBFFEABE7A9FB6577DCD048EDB4A4EF7454B4C142_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 194));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 195));
	{
		// transform.position = user_vehicle.position + view_offset;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 196));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 197));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 197));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = __this->___user_vehicle_4;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 198));
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 198));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = __this->___view_offset_6;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 199));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_2, L_3, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 199));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 200));
		NullCheck(L_0);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_0, L_4, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 200));
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 201));
		return;
	}
}
// System.Void Smooth_Camera_Follow::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Smooth_Camera_Follow_Update_m2E7AA4620F7C9D725214FB758A81B2425D7FBA13 (Smooth_Camera_Follow_tBD76252BE6D38613B5A2E411433B861709C46972* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Smooth_Camera_Follow_Update_m2E7AA4620F7C9D725214FB758A81B2425D7FBA13_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Smooth_Camera_Follow_tBD76252BE6D38613B5A2E411433B861709C46972_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Smooth_Camera_Follow_Update_m2E7AA4620F7C9D725214FB758A81B2425D7FBA13_RuntimeMethod_var, methodExecutionContextThis, NULL, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 202));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 203));
	{
		// desired_position = user_vehicle.position + view_offset;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 204));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___user_vehicle_4;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 205));
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 205));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = __this->___view_offset_6;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 206));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_1, L_2, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 206));
		__this->___desired_position_7 = L_3;
		// smoothed_position = Vector3.Lerp(transform.position, desired_position, follow_speed);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 207));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 208));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 208));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 209));
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 209));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = __this->___desired_position_7;
		float L_7 = __this->___follow_speed_5;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 210));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_Lerp_m57EE8D709A93B2B0FF8D499FA2947B1D61CB1FD6_inline(L_5, L_6, L_7, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 210));
		__this->___smoothed_position_8 = L_8;
		// transform.position = smoothed_position;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 211));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 212));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 212));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = __this->___smoothed_position_8;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 213));
		NullCheck(L_9);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_9, L_10, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 213));
		// Vector3 look_ahead_dist = new Vector3 (user_vehicle.position.x + 2f, user_vehicle.position.y, user_vehicle.position.z);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 214));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11 = __this->___user_vehicle_4;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 215));
		NullCheck(L_11);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_11, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 215));
		float L_13 = L_12.___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14 = __this->___user_vehicle_4;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 216));
		NullCheck(L_14);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_14, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 216));
		float L_16 = L_15.___y_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17 = __this->___user_vehicle_4;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 217));
		NullCheck(L_17);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_17, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 217));
		float L_19 = L_18.___z_4;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 218));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_0), ((float)il2cpp_codegen_add(L_13, (2.0f))), L_16, L_19, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 218));
		// transform.LookAt(look_ahead_dist);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 219));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 220));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20;
		L_20 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 220));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 221));
		NullCheck(L_20);
		Transform_LookAt_mFEF7353E4CAEB85D5F7CEEF9276C3B8D6E314C6C(L_20, L_21, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 221));
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 222));
		return;
	}
}
// System.Void Smooth_Camera_Follow::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Smooth_Camera_Follow__ctor_m2FF4575F65CC53BB150105EDA0879A5CC45B29C2 (Smooth_Camera_Follow_tBD76252BE6D38613B5A2E411433B861709C46972* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Smooth_Camera_Follow__ctor_m2FF4575F65CC53BB150105EDA0879A5CC45B29C2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Smooth_Camera_Follow_tBD76252BE6D38613B5A2E411433B861709C46972_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Smooth_Camera_Follow__ctor_m2FF4575F65CC53BB150105EDA0879A5CC45B29C2_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 223));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 224));
	{
		// public float follow_speed = 1f;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 225));
		__this->___follow_speed_5 = (1.0f);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 226));
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 226));
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
// MessageHandler MessageHandler::Deserialize(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MessageHandler_t5CBA985A6A31029C3532CC5B3EABEDF44ACBCFB5* MessageHandler_Deserialize_mAF411EC208E02166C9302B5B54878A61C5EA03C5 (String_t* ___message0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Extensions_Value_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3092267C93448D476CE9F21D518B204704D234B8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Extensions_Value_TisString_t_m2497E7CEFECAA73AFA2AC29B672F29E6489E1D30_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageHandler_Deserialize_mAF411EC208E02166C9302B5B54878A61C5EA03C5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageHandler_t5CBA985A6A31029C3532CC5B3EABEDF44ACBCFB5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24C049E512CD1B48036BD162FF63700A57CA3469);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral996E5360F80E16B2189CC1E536C91CE68083F694);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA44A39671D4B7FA8FBE50D795EAB52248D5C5469);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F);
		s_Il2CppMethodInitialized = true;
	}
	JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1* V_0 = NULL;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___message0));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, MessageHandler_Deserialize_mAF411EC208E02166C9302B5B54878A61C5EA03C5_RuntimeMethod_var, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 227));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 228));
	{
		// JObject m = JObject.Parse(message);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 229));
		String_t* L_0 = ___message0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 230));
		JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1* L_1;
		L_1 = JObject_Parse_mAFE39B83D08F5D889D34F83E017661FF28E4D0AC(L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 230));
		V_0 = L_1;
		// MessageHandler handler = new MessageHandler(
		//     m.GetValue("id").Value<int>(),
		//     m.GetValue("seq").Value<string>(),
		//     m.GetValue("name").Value<string>(),
		//     m.GetValue("data")
		// );
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 231));
		JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1* L_2 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 232));
		NullCheck(L_2);
		JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3* L_3;
		L_3 = JObject_GetValue_m4F5588B32404E992D225DDF4DBB7B5B033A254A2(L_2, _stringLiteral996E5360F80E16B2189CC1E536C91CE68083F694, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 232));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 233));
		int32_t L_4;
		L_4 = Extensions_Value_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3092267C93448D476CE9F21D518B204704D234B8(L_3, Extensions_Value_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3092267C93448D476CE9F21D518B204704D234B8_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 233));
		JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1* L_5 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 234));
		NullCheck(L_5);
		JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3* L_6;
		L_6 = JObject_GetValue_m4F5588B32404E992D225DDF4DBB7B5B033A254A2(L_5, _stringLiteral24C049E512CD1B48036BD162FF63700A57CA3469, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 234));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 235));
		String_t* L_7;
		L_7 = Extensions_Value_TisString_t_m2497E7CEFECAA73AFA2AC29B672F29E6489E1D30(L_6, Extensions_Value_TisString_t_m2497E7CEFECAA73AFA2AC29B672F29E6489E1D30_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 235));
		JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1* L_8 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 236));
		NullCheck(L_8);
		JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3* L_9;
		L_9 = JObject_GetValue_m4F5588B32404E992D225DDF4DBB7B5B033A254A2(L_8, _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 236));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 237));
		String_t* L_10;
		L_10 = Extensions_Value_TisString_t_m2497E7CEFECAA73AFA2AC29B672F29E6489E1D30(L_9, Extensions_Value_TisString_t_m2497E7CEFECAA73AFA2AC29B672F29E6489E1D30_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 237));
		JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1* L_11 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 238));
		NullCheck(L_11);
		JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3* L_12;
		L_12 = JObject_GetValue_m4F5588B32404E992D225DDF4DBB7B5B033A254A2(L_11, _stringLiteralA44A39671D4B7FA8FBE50D795EAB52248D5C5469, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 238));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 239));
		MessageHandler_t5CBA985A6A31029C3532CC5B3EABEDF44ACBCFB5* L_13 = (MessageHandler_t5CBA985A6A31029C3532CC5B3EABEDF44ACBCFB5*)il2cpp_codegen_object_new(MessageHandler_t5CBA985A6A31029C3532CC5B3EABEDF44ACBCFB5_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		MessageHandler__ctor_m6D62D4CD1FDC1ACBECA277EC939F7BF1A5C0EE0F(L_13, L_4, L_7, L_10, L_12, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 239));
		// return handler;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 240));
		return L_13;
	}
}
// System.Void MessageHandler::.ctor(System.Int32,System.String,System.String,Newtonsoft.Json.Linq.JToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageHandler__ctor_m6D62D4CD1FDC1ACBECA277EC939F7BF1A5C0EE0F (MessageHandler_t5CBA985A6A31029C3532CC5B3EABEDF44ACBCFB5* __this, int32_t ___id0, String_t* ___seq1, String_t* ___name2, JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3* ___data3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageHandler__ctor_m6D62D4CD1FDC1ACBECA277EC939F7BF1A5C0EE0F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageHandler_t5CBA985A6A31029C3532CC5B3EABEDF44ACBCFB5_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___id0), (&___seq1), (&___name2), (&___data3));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, MessageHandler__ctor_m6D62D4CD1FDC1ACBECA277EC939F7BF1A5C0EE0F_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 245));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 246));
	{
		// public MessageHandler(int id, string seq, string name, JToken data)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 247));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 248));
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 248));
		// this.id = id;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 249));
		int32_t L_0 = ___id0;
		__this->___id_0 = L_0;
		// this.seq = seq;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 250));
		String_t* L_1 = ___seq1;
		__this->___seq_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___seq_1), (void*)L_1);
		// this.name = name;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 251));
		String_t* L_2 = ___name2;
		__this->___name_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___name_2), (void*)L_2);
		// this.data = data;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 252));
		JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3* L_3 = ___data3;
		__this->___data_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___data_3), (void*)L_3);
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 253));
		return;
	}
}
// System.Void MessageHandler::send(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageHandler_send_m3C7C735E5E60707CFF5545CB117B748643ABBA53 (MessageHandler_t5CBA985A6A31029C3532CC5B3EABEDF44ACBCFB5* __this, RuntimeObject* ___data0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageHandler_send_m3C7C735E5E60707CFF5545CB117B748643ABBA53_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageHandler_t5CBA985A6A31029C3532CC5B3EABEDF44ACBCFB5_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ef__AnonymousType0_4__ctor_mA9CA12BE8F40DB9F200816875B785E4FC23A2200_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ef__AnonymousType0_4_t4EE67C7C14929546FBC41AC6C44494555CA83454_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityMessageManager_t55C0CD8495B9BA2855D6C614E661E729DF614002_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA2F4AC9DD8E1FAC5257E5F7BA5EE1C7C7E5F7AB1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEA64C610DFA863C445196F98AE1C59C7E6F1B8EC);
		s_Il2CppMethodInitialized = true;
	}
	JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1* V_0 = NULL;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___data0));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, MessageHandler_send_m3C7C735E5E60707CFF5545CB117B748643ABBA53_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 254));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 255));
	{
		// JObject o = JObject.FromObject(new
		// {
		//     id = id,
		//     seq = "end",
		//     name = name,
		//     data = data
		// });
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 256));
		int32_t L_0 = __this->___id_0;
		String_t* L_1 = __this->___name_2;
		RuntimeObject* L_2 = ___data0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 257));
		U3CU3Ef__AnonymousType0_4_t4EE67C7C14929546FBC41AC6C44494555CA83454* L_3 = (U3CU3Ef__AnonymousType0_4_t4EE67C7C14929546FBC41AC6C44494555CA83454*)il2cpp_codegen_object_new(U3CU3Ef__AnonymousType0_4_t4EE67C7C14929546FBC41AC6C44494555CA83454_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		U3CU3Ef__AnonymousType0_4__ctor_mA9CA12BE8F40DB9F200816875B785E4FC23A2200(L_3, L_0, _stringLiteralA2F4AC9DD8E1FAC5257E5F7BA5EE1C7C7E5F7AB1, L_1, L_2, U3CU3Ef__AnonymousType0_4__ctor_mA9CA12BE8F40DB9F200816875B785E4FC23A2200_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 257));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 258));
		JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1* L_4;
		L_4 = JObject_FromObject_m5173BDC2D9FC1B112F5895863E74860550DE915B(L_3, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 258));
		V_0 = L_4;
		// UnityMessageManager.Instance.SendMessageToRN(UnityMessageManager.MessagePrefix + o.ToString());
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 259));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 260));
		il2cpp_codegen_runtime_class_init_inline(UnityMessageManager_t55C0CD8495B9BA2855D6C614E661E729DF614002_il2cpp_TypeInfo_var);
		UnityMessageManager_t55C0CD8495B9BA2855D6C614E661E729DF614002* L_5;
		L_5 = UnityMessageManager_get_Instance_mFA329586DD85236EFC2D0C69E92EAA27A48174A7_inline(NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 260));
		JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1* L_6 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 261));
		NullCheck(L_6);
		String_t* L_7;
		L_7 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_6);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 261));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 262));
		String_t* L_8;
		L_8 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteralEA64C610DFA863C445196F98AE1C59C7E6F1B8EC, L_7, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 262));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 263));
		NullCheck(L_5);
		UnityMessageManager_SendMessageToRN_mC44D7A9FF78F4564478804DFE24B83BDBD69DEE2(L_5, L_8, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 263));
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 264));
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
// System.Void UnityMessage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMessage__ctor_mB0E205137A7DD4D3E27548C36A0749055E1F64CB (UnityMessage_t536476F96F550BF743BDE7AFEA8F4A4641F6F51F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityMessage__ctor_mB0E205137A7DD4D3E27548C36A0749055E1F64CB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, UnityMessage__ctor_mB0E205137A7DD4D3E27548C36A0749055E1F64CB_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
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
// System.Int32 UnityMessageManager::generateId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityMessageManager_generateId_m0B012964338C75AE18EDCBB09F0D011845A0052E (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityMessageManager_generateId_m0B012964338C75AE18EDCBB09F0D011845A0052E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityMessageManager_t55C0CD8495B9BA2855D6C614E661E729DF614002_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, UnityMessageManager_generateId_m0B012964338C75AE18EDCBB09F0D011845A0052E_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 265));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 266));
	{
		// ID = ID + 1;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 267));
		il2cpp_codegen_runtime_class_init_inline(UnityMessageManager_t55C0CD8495B9BA2855D6C614E661E729DF614002_il2cpp_TypeInfo_var);
		int32_t L_0 = ((UnityMessageManager_t55C0CD8495B9BA2855D6C614E661E729DF614002_StaticFields*)il2cpp_codegen_static_fields_for(UnityMessageManager_t55C0CD8495B9BA2855D6C614E661E729DF614002_il2cpp_TypeInfo_var))->___ID_5;
		((UnityMessageManager_t55C0CD8495B9BA2855D6C614E661E729DF614002_StaticFields*)il2cpp_codegen_static_fields_for(UnityMessageManager_t55C0CD8495B9BA2855D6C614E661E729DF614002_il2cpp_TypeInfo_var))->___ID_5 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		// return ID;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 268));
		int32_t L_1 = ((UnityMessageManager_t55C0CD8495B9BA2855D6C614E661E729DF614002_StaticFields*)il2cpp_codegen_static_fields_for(UnityMessageManager_t55C0CD8495B9BA2855D6C614E661E729DF614002_il2cpp_TypeInfo_var))->___ID_5;
		return L_1;
	}
}
// UnityMessageManager UnityMessageManager::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityMessageManager_t55C0CD8495B9BA2855D6C614E661E729DF614002* UnityMessageManager_get_Instance_mFA329586DD85236EFC2D0C69E92EAA27A48174A7 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityMessageManager_get_Instance_mFA329586DD85236EFC2D0C69E92EAA27A48174A7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityMessageManager_t55C0CD8495B9BA2855D6C614E661E729DF614002_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, UnityMessageManager_get_Instance_mFA329586DD85236EFC2D0C69E92EAA27A48174A7_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 269));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 270));
	{
		// public static UnityMessageManager Instance { get; private set; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 271));
		il2cpp_codegen_runtime_class_init_inline(UnityMessageManager_t55C0CD8495B9BA2855D6C614E661E729DF614002_il2cpp_TypeInfo_var);
		UnityMessageManager_t55C0CD8495B9BA2855D6C614E661E729DF614002* L_0 = ((UnityMessageManager_t55C0CD8495B9BA2855D6C614E661E729DF614002_StaticFields*)il2cpp_codegen_static_fields_for(UnityMessageManager_t55C0CD8495B9BA2855D6C614E661E729DF614002_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_6;
		return L_0;
	}
}
// System.Void UnityMessageManager::set_Instance(UnityMessageManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMessageManager_set_Instance_mCF8082813C2EFD4D6608DE611D4D75F111CB9813 (UnityMessageManager_t55C0CD8495B9BA2855D6C614E661E729DF614002* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityMessageManager_set_Instance_mCF8082813C2EFD4D6608DE611D4D75F111CB9813_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityMessageManager_t55C0CD8495B9BA2855D6C614E661E729DF614002_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___value0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, UnityMessageManager_set_Instance_mCF8082813C2EFD4D6608DE611D4D75F111CB9813_RuntimeMethod_var, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 272));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 273));
	{
		// public static UnityMessageManager Instance { get; private set; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 274));
		UnityMessageManager_t55C0CD8495B9BA2855D6C614E661E729DF614002* L_0 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(UnityMessageManager_t55C0CD8495B9BA2855D6C614E661E729DF614002_il2cpp_TypeInfo_var);
		((UnityMessageManager_t55C0CD8495B9BA2855D6C614E661E729DF614002_StaticFields*)il2cpp_codegen_static_fields_for(UnityMessageManager_t55C0CD8495B9BA2855D6C614E661E729DF614002_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((UnityMessageManager_t55C0CD8495B9BA2855D6C614E661E729DF614002_StaticFields*)il2cpp_codegen_static_fields_for(UnityMessageManager_t55C0CD8495B9BA2855D6C614E661E729DF614002_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_6), (void*)L_0);
		return;
	}
}
// System.Void UnityMessageManager::add_OnMessage(UnityMessageManager/MessageDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMessageManager_add_OnMessage_m8842E4D444AF900692199658BFE2CB4088DF9E31 (UnityMessageManager_t55C0CD8495B9BA2855D6C614E661E729DF614002* __this, MessageDelegate_tD14A044E192668727C7CA3FCCFF76C636F8C298D* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageDelegate_tD14A044E192668727C7CA3FCCFF76C636F8C298D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityMessageManager_add_OnMessage_m8842E4D444AF900692199658BFE2CB4088DF9E31_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	MessageDelegate_tD14A044E192668727C7CA3FCCFF76C636F8C298D* V_0 = NULL;
	MessageDelegate_tD14A044E192668727C7CA3FCCFF76C636F8C298D* V_1 = NULL;
	MessageDelegate_tD14A044E192668727C7CA3FCCFF76C636F8C298D* V_2 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, UnityMessageManager_add_OnMessage_m8842E4D444AF900692199658BFE2CB4088DF9E31_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		MessageDelegate_tD14A044E192668727C7CA3FCCFF76C636F8C298D* L_0 = __this->___OnMessage_7;
		V_0 = L_0;
	}

IL_0007:
	{
		CHECK_PAUSE_POINT;
		MessageDelegate_tD14A044E192668727C7CA3FCCFF76C636F8C298D* L_1 = V_0;
		V_1 = L_1;
		MessageDelegate_tD14A044E192668727C7CA3FCCFF76C636F8C298D* L_2 = V_1;
		MessageDelegate_tD14A044E192668727C7CA3FCCFF76C636F8C298D* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		V_2 = ((MessageDelegate_tD14A044E192668727C7CA3FCCFF76C636F8C298D*)CastclassSealed((RuntimeObject*)L_4, MessageDelegate_tD14A044E192668727C7CA3FCCFF76C636F8C298D_il2cpp_TypeInfo_var));
		MessageDelegate_tD14A044E192668727C7CA3FCCFF76C636F8C298D** L_5 = (&__this->___OnMessage_7);
		MessageDelegate_tD14A044E192668727C7CA3FCCFF76C636F8C298D* L_6 = V_2;
		MessageDelegate_tD14A044E192668727C7CA3FCCFF76C636F8C298D* L_7 = V_1;
		MessageDelegate_tD14A044E192668727C7CA3FCCFF76C636F8C298D* L_8;
		L_8 = InterlockedCompareExchangeImpl<MessageDelegate_tD14A044E192668727C7CA3FCCFF76C636F8C298D*>(L_5, L_6, L_7);
		V_0 = L_8;
		MessageDelegate_tD14A044E192668727C7CA3FCCFF76C636F8C298D* L_9 = V_0;
		MessageDelegate_tD14A044E192668727C7CA3FCCFF76C636F8C298D* L_10 = V_1;
		if ((!(((RuntimeObject*)(MessageDelegate_tD14A044E192668727C7CA3FCCFF76C636F8C298D*)L_9) == ((RuntimeObject*)(MessageDelegate_tD14A044E192668727C7CA3FCCFF76C636F8C298D*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityMessageManager::remove_OnMessage(UnityMessageManager/MessageDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMessageManager_remove_OnMessage_m979E48B4644FB584C09CB452AC98F9FD83FD02A0 (UnityMessageManager_t55C0CD8495B9BA2855D6C614E661E729DF614002* __this, MessageDelegate_tD14A044E192668727C7CA3FCCFF76C636F8C298D* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageDelegate_tD14A044E192668727C7CA3FCCFF76C636F8C298D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityMessageManager_remove_OnMessage_m979E48B4644FB584C09CB452AC98F9FD83FD02A0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	MessageDelegate_tD14A044E192668727C7CA3FCCFF76C636F8C298D* V_0 = NULL;
	MessageDelegate_tD14A044E192668727C7CA3FCCFF76C636F8C298D* V_1 = NULL;
	MessageDelegate_tD14A044E192668727C7CA3FCCFF76C636F8C298D* V_2 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, UnityMessageManager_remove_OnMessage_m979E48B4644FB584C09CB452AC98F9FD83FD02A0_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		MessageDelegate_tD14A044E192668727C7CA3FCCFF76C636F8C298D* L_0 = __this->___OnMessage_7;
		V_0 = L_0;
	}

IL_0007:
	{
		CHECK_PAUSE_POINT;
		MessageDelegate_tD14A044E192668727C7CA3FCCFF76C636F8C298D* L_1 = V_0;
		V_1 = L_1;
		MessageDelegate_tD14A044E192668727C7CA3FCCFF76C636F8C298D* L_2 = V_1;
		MessageDelegate_tD14A044E192668727C7CA3FCCFF76C636F8C298D* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		V_2 = ((MessageDelegate_tD14A044E192668727C7CA3FCCFF76C636F8C298D*)CastclassSealed((RuntimeObject*)L_4, MessageDelegate_tD14A044E192668727C7CA3FCCFF76C636F8C298D_il2cpp_TypeInfo_var));
		MessageDelegate_tD14A044E192668727C7CA3FCCFF76C636F8C298D** L_5 = (&__this->___OnMessage_7);
		MessageDelegate_tD14A044E192668727C7CA3FCCFF76C636F8C298D* L_6 = V_2;
		MessageDelegate_tD14A044E192668727C7CA3FCCFF76C636F8C298D* L_7 = V_1;
		MessageDelegate_tD14A044E192668727C7CA3FCCFF76C636F8C298D* L_8;
		L_8 = InterlockedCompareExchangeImpl<MessageDelegate_tD14A044E192668727C7CA3FCCFF76C636F8C298D*>(L_5, L_6, L_7);
		V_0 = L_8;
		MessageDelegate_tD14A044E192668727C7CA3FCCFF76C636F8C298D* L_9 = V_0;
		MessageDelegate_tD14A044E192668727C7CA3FCCFF76C636F8C298D* L_10 = V_1;
		if ((!(((RuntimeObject*)(MessageDelegate_tD14A044E192668727C7CA3FCCFF76C636F8C298D*)L_9) == ((RuntimeObject*)(MessageDelegate_tD14A044E192668727C7CA3FCCFF76C636F8C298D*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityMessageManager::add_OnRNMessage(UnityMessageManager/MessageHandlerDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMessageManager_add_OnRNMessage_m7C51B9D3DE2967B5DE09E0D0B7EC1B63286E4427 (UnityMessageManager_t55C0CD8495B9BA2855D6C614E661E729DF614002* __this, MessageHandlerDelegate_tF830202AB59BFB778BA9227DA72E1E9FDFFA9CA8* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageHandlerDelegate_tF830202AB59BFB778BA9227DA72E1E9FDFFA9CA8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityMessageManager_add_OnRNMessage_m7C51B9D3DE2967B5DE09E0D0B7EC1B63286E4427_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	MessageHandlerDelegate_tF830202AB59BFB778BA9227DA72E1E9FDFFA9CA8* V_0 = NULL;
	MessageHandlerDelegate_tF830202AB59BFB778BA9227DA72E1E9FDFFA9CA8* V_1 = NULL;
	MessageHandlerDelegate_tF830202AB59BFB778BA9227DA72E1E9FDFFA9CA8* V_2 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, UnityMessageManager_add_OnRNMessage_m7C51B9D3DE2967B5DE09E0D0B7EC1B63286E4427_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		MessageHandlerDelegate_tF830202AB59BFB778BA9227DA72E1E9FDFFA9CA8* L_0 = __this->___OnRNMessage_8;
		V_0 = L_0;
	}

IL_0007:
	{
		CHECK_PAUSE_POINT;
		MessageHandlerDelegate_tF830202AB59BFB778BA9227DA72E1E9FDFFA9CA8* L_1 = V_0;
		V_1 = L_1;
		MessageHandlerDelegate_tF830202AB59BFB778BA9227DA72E1E9FDFFA9CA8* L_2 = V_1;
		MessageHandlerDelegate_tF830202AB59BFB778BA9227DA72E1E9FDFFA9CA8* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		V_2 = ((MessageHandlerDelegate_tF830202AB59BFB778BA9227DA72E1E9FDFFA9CA8*)CastclassSealed((RuntimeObject*)L_4, MessageHandlerDelegate_tF830202AB59BFB778BA9227DA72E1E9FDFFA9CA8_il2cpp_TypeInfo_var));
		MessageHandlerDelegate_tF830202AB59BFB778BA9227DA72E1E9FDFFA9CA8** L_5 = (&__this->___OnRNMessage_8);
		MessageHandlerDelegate_tF830202AB59BFB778BA9227DA72E1E9FDFFA9CA8* L_6 = V_2;
		MessageHandlerDelegate_tF830202AB59BFB778BA9227DA72E1E9FDFFA9CA8* L_7 = V_1;
		MessageHandlerDelegate_tF830202AB59BFB778BA9227DA72E1E9FDFFA9CA8* L_8;
		L_8 = InterlockedCompareExchangeImpl<MessageHandlerDelegate_tF830202AB59BFB778BA9227DA72E1E9FDFFA9CA8*>(L_5, L_6, L_7);
		V_0 = L_8;
		MessageHandlerDelegate_tF830202AB59BFB778BA9227DA72E1E9FDFFA9CA8* L_9 = V_0;
		MessageHandlerDelegate_tF830202AB59BFB778BA9227DA72E1E9FDFFA9CA8* L_10 = V_1;
		if ((!(((RuntimeObject*)(MessageHandlerDelegate_tF830202AB59BFB778BA9227DA72E1E9FDFFA9CA8*)L_9) == ((RuntimeObject*)(MessageHandlerDelegate_tF830202AB59BFB778BA9227DA72E1E9FDFFA9CA8*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityMessageManager::remove_OnRNMessage(UnityMessageManager/MessageHandlerDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMessageManager_remove_OnRNMessage_m696C13FE8E7028562BB4132E88745D9457ACF7D0 (UnityMessageManager_t55C0CD8495B9BA2855D6C614E661E729DF614002* __this, MessageHandlerDelegate_tF830202AB59BFB778BA9227DA72E1E9FDFFA9CA8* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageHandlerDelegate_tF830202AB59BFB778BA9227DA72E1E9FDFFA9CA8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityMessageManager_remove_OnRNMessage_m696C13FE8E7028562BB4132E88745D9457ACF7D0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	MessageHandlerDelegate_tF830202AB59BFB778BA9227DA72E1E9FDFFA9CA8* V_0 = NULL;
	MessageHandlerDelegate_tF830202AB59BFB778BA9227DA72E1E9FDFFA9CA8* V_1 = NULL;
	MessageHandlerDelegate_tF830202AB59BFB778BA9227DA72E1E9FDFFA9CA8* V_2 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, UnityMessageManager_remove_OnRNMessage_m696C13FE8E7028562BB4132E88745D9457ACF7D0_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		MessageHandlerDelegate_tF830202AB59BFB778BA9227DA72E1E9FDFFA9CA8* L_0 = __this->___OnRNMessage_8;
		V_0 = L_0;
	}

IL_0007:
	{
		CHECK_PAUSE_POINT;
		MessageHandlerDelegate_tF830202AB59BFB778BA9227DA72E1E9FDFFA9CA8* L_1 = V_0;
		V_1 = L_1;
		MessageHandlerDelegate_tF830202AB59BFB778BA9227DA72E1E9FDFFA9CA8* L_2 = V_1;
		MessageHandlerDelegate_tF830202AB59BFB778BA9227DA72E1E9FDFFA9CA8* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		V_2 = ((MessageHandlerDelegate_tF830202AB59BFB778BA9227DA72E1E9FDFFA9CA8*)CastclassSealed((RuntimeObject*)L_4, MessageHandlerDelegate_tF830202AB59BFB778BA9227DA72E1E9FDFFA9CA8_il2cpp_TypeInfo_var));
		MessageHandlerDelegate_tF830202AB59BFB778BA9227DA72E1E9FDFFA9CA8** L_5 = (&__this->___OnRNMessage_8);
		MessageHandlerDelegate_tF830202AB59BFB778BA9227DA72E1E9FDFFA9CA8* L_6 = V_2;
		MessageHandlerDelegate_tF830202AB59BFB778BA9227DA72E1E9FDFFA9CA8* L_7 = V_1;
		MessageHandlerDelegate_tF830202AB59BFB778BA9227DA72E1E9FDFFA9CA8* L_8;
		L_8 = InterlockedCompareExchangeImpl<MessageHandlerDelegate_tF830202AB59BFB778BA9227DA72E1E9FDFFA9CA8*>(L_5, L_6, L_7);
		V_0 = L_8;
		MessageHandlerDelegate_tF830202AB59BFB778BA9227DA72E1E9FDFFA9CA8* L_9 = V_0;
		MessageHandlerDelegate_tF830202AB59BFB778BA9227DA72E1E9FDFFA9CA8* L_10 = V_1;
		if ((!(((RuntimeObject*)(MessageHandlerDelegate_tF830202AB59BFB778BA9227DA72E1E9FDFFA9CA8*)L_9) == ((RuntimeObject*)(MessageHandlerDelegate_tF830202AB59BFB778BA9227DA72E1E9FDFFA9CA8*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityMessageManager::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMessageManager__cctor_mBFCCB608F0BA0EBDA646E2005B92FD5E0C0C5BC1 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisUnityMessageManager_t55C0CD8495B9BA2855D6C614E661E729DF614002_mA22D83CA4AD22580593E79FD1964DBD57AA7671E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityMessageManager__cctor_mBFCCB608F0BA0EBDA646E2005B92FD5E0C0C5BC1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE2D6DC29DE3D40BE0F06C25BD0CEB6AFDEAF1C4C);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, UnityMessageManager__cctor_mBFCCB608F0BA0EBDA646E2005B92FD5E0C0C5BC1_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 275));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 276));
	{
		// GameObject go = new GameObject("UnityMessageManager");
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 277));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 278));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_0, _stringLiteralE2D6DC29DE3D40BE0F06C25BD0CEB6AFDEAF1C4C, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 278));
		// DontDestroyOnLoad(go);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 279));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = L_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 280));
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m303AA1C4DC810349F285B4809E426CBBA8F834F9(L_1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 280));
		// Instance = go.AddComponent<UnityMessageManager>();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 281));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 282));
		NullCheck(L_1);
		UnityMessageManager_t55C0CD8495B9BA2855D6C614E661E729DF614002* L_2;
		L_2 = GameObject_AddComponent_TisUnityMessageManager_t55C0CD8495B9BA2855D6C614E661E729DF614002_mA22D83CA4AD22580593E79FD1964DBD57AA7671E(L_1, GameObject_AddComponent_TisUnityMessageManager_t55C0CD8495B9BA2855D6C614E661E729DF614002_mA22D83CA4AD22580593E79FD1964DBD57AA7671E_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 282));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 283));
		UnityMessageManager_set_Instance_mCF8082813C2EFD4D6608DE611D4D75F111CB9813_inline(L_2, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 283));
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 284));
		return;
	}
}
// System.Void UnityMessageManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMessageManager_Awake_m1F073A61731A99C308D4A668248137DBD9E7F3C9 (UnityMessageManager_t55C0CD8495B9BA2855D6C614E661E729DF614002* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityMessageManager_Awake_m1F073A61731A99C308D4A668248137DBD9E7F3C9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityMessageManager_t55C0CD8495B9BA2855D6C614E661E729DF614002_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, UnityMessageManager_Awake_m1F073A61731A99C308D4A668248137DBD9E7F3C9_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 285));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 286));
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 287));
		return;
	}
}
// System.Void UnityMessageManager::SendMessageToRN(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMessageManager_SendMessageToRN_mC44D7A9FF78F4564478804DFE24B83BDBD69DEE2 (UnityMessageManager_t55C0CD8495B9BA2855D6C614E661E729DF614002* __this, String_t* ___message0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityMessageManager_SendMessageToRN_mC44D7A9FF78F4564478804DFE24B83BDBD69DEE2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityMessageManager_t55C0CD8495B9BA2855D6C614E661E729DF614002_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralADCE833DFEA59A5065B08C5BD4F87A7CBC89E71C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFD518666B4F52417752311AE996CEA3A91ECF532);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* V_0 = NULL;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___message0));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, UnityMessageManager_SendMessageToRN_mC44D7A9FF78F4564478804DFE24B83BDBD69DEE2_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 288));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 289));
	{
		// if (Application.platform == RuntimePlatform.Android)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 290));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 291));
		int32_t L_0;
		L_0 = Application_get_platform_m1AB34E71D9885B120F6021EB2B11DCB28CD6008D(NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 291));
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)11)))))
		{
			goto IL_0035;
		}
	}
	{
		// using (AndroidJavaClass jc = new AndroidJavaClass("no.asmadsen.unity.view.UnityUtils"))
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 292));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 293));
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_1 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389(L_1, _stringLiteralADCE833DFEA59A5065B08C5BD4F87A7CBC89E71C, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 293));
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002b:
			{// begin finally (depth: 1)
				STORE_TRY_ID(methodExecutionContext, -1);
				{
					CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 297));
					AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_2 = V_0;
					if (!L_2)
					{
						goto IL_0034;
					}
				}
				{
					AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_3 = V_0;
					STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 298));
					NullCheck(L_3);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_3);
					CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 298));
				}

IL_0034:
				{
					CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 299));
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			STORE_TRY_ID(methodExecutionContext, 0);
			// jc.CallStatic("onUnityMessage", message);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 294));
			AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_4 = V_0;
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = L_5;
			String_t* L_7 = ___message0;
			NullCheck(L_6);
			ArrayElementTypeCheck (L_6, L_7);
			(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_7);
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 295));
			NullCheck(L_4);
			AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_4, _stringLiteralFD518666B4F52417752311AE996CEA3A91ECF532, L_6, NULL);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 295));
			// }
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 296));
			goto IL_003d;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0035:
	{
		// else if (Application.platform == RuntimePlatform.IPhonePlayer)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 300));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 301));
		int32_t L_8;
		L_8 = Application_get_platform_m1AB34E71D9885B120F6021EB2B11DCB28CD6008D(NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 301));
	}

IL_003d:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 302));
		return;
	}
}
// System.Void UnityMessageManager::SendMessageToRN(UnityMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMessageManager_SendMessageToRN_mDB8A3DFB48EA516CD6451C1D26C5F9912C5E9D6A (UnityMessageManager_t55C0CD8495B9BA2855D6C614E661E729DF614002* __this, UnityMessage_t536476F96F550BF743BDE7AFEA8F4A4641F6F51F* ___message0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mC6FC12DDCF60A4CF5763890CB20FEB4677B4194E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ef__AnonymousType0_4__ctor_m29CA8638117DD35A3ECF831C1C575ECD9A1CFF99_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ef__AnonymousType0_4_t5FFD29B4BCAF7AC3517A208CD71554E9AC16EC39_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityMessageManager_SendMessageToRN_mDB8A3DFB48EA516CD6451C1D26C5F9912C5E9D6A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityMessageManager_t55C0CD8495B9BA2855D6C614E661E729DF614002_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityMessageManager_t55C0CD8495B9BA2855D6C614E661E729DF614002_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2AD47C03F7A83F82E3B2ADFE8A60F1727FD3BEFD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEA64C610DFA863C445196F98AE1C59C7E6F1B8EC);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1* V_1 = NULL;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___message0));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, UnityMessageManager_SendMessageToRN_mDB8A3DFB48EA516CD6451C1D26C5F9912C5E9D6A_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 303));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 304));
	int32_t G_B4_0 = 0;
	int32_t G_B3_0 = 0;
	String_t* G_B5_0 = NULL;
	int32_t G_B5_1 = 0;
	{
		// int id = generateId();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 305));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 306));
		il2cpp_codegen_runtime_class_init_inline(UnityMessageManager_t55C0CD8495B9BA2855D6C614E661E729DF614002_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = UnityMessageManager_generateId_m0B012964338C75AE18EDCBB09F0D011845A0052E(NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 306));
		V_0 = L_0;
		// if (message.callBack != null)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 307));
		UnityMessage_t536476F96F550BF743BDE7AFEA8F4A4641F6F51F* L_1 = ___message0;
		NullCheck(L_1);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_2 = L_1->___callBack_2;
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		// waitCallbackMessageMap.Add(id, message);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 308));
		Dictionary_2_t7019529726DC9B660C51BEDBA75D6102D49A8275* L_3 = __this->___waitCallbackMessageMap_9;
		int32_t L_4 = V_0;
		UnityMessage_t536476F96F550BF743BDE7AFEA8F4A4641F6F51F* L_5 = ___message0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 309));
		NullCheck(L_3);
		Dictionary_2_Add_mC6FC12DDCF60A4CF5763890CB20FEB4677B4194E(L_3, L_4, L_5, Dictionary_2_Add_mC6FC12DDCF60A4CF5763890CB20FEB4677B4194E_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 309));
	}

IL_001b:
	{
		// JObject o = JObject.FromObject(new
		// {
		//     id = id,
		//     seq = message.callBack != null ? "start" : "",
		//     name = message.name,
		//     data = message.data
		// });
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 310));
		int32_t L_6 = V_0;
		UnityMessage_t536476F96F550BF743BDE7AFEA8F4A4641F6F51F* L_7 = ___message0;
		NullCheck(L_7);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_8 = L_7->___callBack_2;
		G_B3_0 = L_6;
		if (L_8)
		{
			G_B4_0 = L_6;
			goto IL_002b;
		}
	}
	{
		G_B5_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		G_B5_1 = G_B3_0;
		goto IL_0030;
	}

IL_002b:
	{
		G_B5_0 = _stringLiteral2AD47C03F7A83F82E3B2ADFE8A60F1727FD3BEFD;
		G_B5_1 = G_B4_0;
	}

IL_0030:
	{
		UnityMessage_t536476F96F550BF743BDE7AFEA8F4A4641F6F51F* L_9 = ___message0;
		NullCheck(L_9);
		String_t* L_10 = L_9->___name_0;
		UnityMessage_t536476F96F550BF743BDE7AFEA8F4A4641F6F51F* L_11 = ___message0;
		NullCheck(L_11);
		JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1* L_12 = L_11->___data_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 311));
		U3CU3Ef__AnonymousType0_4_t5FFD29B4BCAF7AC3517A208CD71554E9AC16EC39* L_13 = (U3CU3Ef__AnonymousType0_4_t5FFD29B4BCAF7AC3517A208CD71554E9AC16EC39*)il2cpp_codegen_object_new(U3CU3Ef__AnonymousType0_4_t5FFD29B4BCAF7AC3517A208CD71554E9AC16EC39_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		U3CU3Ef__AnonymousType0_4__ctor_m29CA8638117DD35A3ECF831C1C575ECD9A1CFF99(L_13, G_B5_1, G_B5_0, L_10, L_12, U3CU3Ef__AnonymousType0_4__ctor_m29CA8638117DD35A3ECF831C1C575ECD9A1CFF99_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 311));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 312));
		JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1* L_14;
		L_14 = JObject_FromObject_m5173BDC2D9FC1B112F5895863E74860550DE915B(L_13, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 312));
		V_1 = L_14;
		// UnityMessageManager.Instance.SendMessageToRN(MessagePrefix + o.ToString());
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 313));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 314));
		il2cpp_codegen_runtime_class_init_inline(UnityMessageManager_t55C0CD8495B9BA2855D6C614E661E729DF614002_il2cpp_TypeInfo_var);
		UnityMessageManager_t55C0CD8495B9BA2855D6C614E661E729DF614002* L_15;
		L_15 = UnityMessageManager_get_Instance_mFA329586DD85236EFC2D0C69E92EAA27A48174A7_inline(NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 314));
		JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1* L_16 = V_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 315));
		NullCheck(L_16);
		String_t* L_17;
		L_17 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_16);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 315));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 316));
		String_t* L_18;
		L_18 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteralEA64C610DFA863C445196F98AE1C59C7E6F1B8EC, L_17, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 316));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 317));
		NullCheck(L_15);
		UnityMessageManager_SendMessageToRN_mC44D7A9FF78F4564478804DFE24B83BDBD69DEE2(L_15, L_18, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 317));
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 318));
		return;
	}
}
// System.Void UnityMessageManager::onMessage(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMessageManager_onMessage_m844E444B72E9D34837224BE24F45BC4582962B97 (UnityMessageManager_t55C0CD8495B9BA2855D6C614E661E729DF614002* __this, String_t* ___message0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityMessageManager_onMessage_m844E444B72E9D34837224BE24F45BC4582962B97_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityMessageManager_t55C0CD8495B9BA2855D6C614E661E729DF614002_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___message0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, UnityMessageManager_onMessage_m844E444B72E9D34837224BE24F45BC4582962B97_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 319));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 320));
	{
		// if (OnMessage != null)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 321));
		MessageDelegate_tD14A044E192668727C7CA3FCCFF76C636F8C298D* L_0 = __this->___OnMessage_7;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// OnMessage(message);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 322));
		MessageDelegate_tD14A044E192668727C7CA3FCCFF76C636F8C298D* L_1 = __this->___OnMessage_7;
		String_t* L_2 = ___message0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 323));
		NullCheck(L_1);
		MessageDelegate_Invoke_m5C88BF65BFF94836174CF133488C77B334853DCC_inline(L_1, L_2, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 323));
	}

IL_0014:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 324));
		return;
	}
}
// System.Void UnityMessageManager::onRNMessage(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMessageManager_onRNMessage_mF272F8B8D4D67741E2E321B5167348B605426F04 (UnityMessageManager_t55C0CD8495B9BA2855D6C614E661E729DF614002* __this, String_t* ___message0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_mC65CD0AF1E825A0B89893DF8BA2EA0416D2BC0CD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mA4619F1FFBEBA7E77460219CD6B4E97AAB76C04A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageHandler_getData_TisRuntimeObject_m24756BF831B0D45AA5D8D4A1FF41A01DFD5E3888_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageHandler_t5CBA985A6A31029C3532CC5B3EABEDF44ACBCFB5_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityMessageManager_onRNMessage_mF272F8B8D4D67741E2E321B5167348B605426F04_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityMessageManager_t55C0CD8495B9BA2855D6C614E661E729DF614002_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityMessage_t536476F96F550BF743BDE7AFEA8F4A4641F6F51F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA2F4AC9DD8E1FAC5257E5F7BA5EE1C7C7E5F7AB1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEA64C610DFA863C445196F98AE1C59C7E6F1B8EC);
		s_Il2CppMethodInitialized = true;
	}
	MessageHandler_t5CBA985A6A31029C3532CC5B3EABEDF44ACBCFB5* V_0 = NULL;
	UnityMessage_t536476F96F550BF743BDE7AFEA8F4A4641F6F51F* V_1 = NULL;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___message0));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, UnityMessageManager_onRNMessage_mF272F8B8D4D67741E2E321B5167348B605426F04_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 325));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 326));
	{
		// if (message.StartsWith(MessagePrefix))
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 327));
		String_t* L_0 = ___message0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 328));
		NullCheck(L_0);
		bool L_1;
		L_1 = String_StartsWith_mF75DBA1EB709811E711B44E26FF919C88A8E65C0(L_0, _stringLiteralEA64C610DFA863C445196F98AE1C59C7E6F1B8EC, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 328));
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		// message = message.Replace(MessagePrefix, "");
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 329));
		String_t* L_2 = ___message0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 330));
		NullCheck(L_2);
		String_t* L_3;
		L_3 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_2, _stringLiteralEA64C610DFA863C445196F98AE1C59C7E6F1B8EC, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 330));
		___message0 = L_3;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 331));
		goto IL_0022;
	}

IL_0021:
	{
		// return;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 332));
		return;
	}

IL_0022:
	{
		// MessageHandler handler = MessageHandler.Deserialize(message);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 333));
		String_t* L_4 = ___message0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 334));
		MessageHandler_t5CBA985A6A31029C3532CC5B3EABEDF44ACBCFB5* L_5;
		L_5 = MessageHandler_Deserialize_mAF411EC208E02166C9302B5B54878A61C5EA03C5(L_4, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 334));
		V_0 = L_5;
		// if ("end".Equals(handler.seq))
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 335));
		MessageHandler_t5CBA985A6A31029C3532CC5B3EABEDF44ACBCFB5* L_6 = V_0;
		NullCheck(L_6);
		String_t* L_7 = L_6->___seq_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 336));
		NullCheck(_stringLiteralA2F4AC9DD8E1FAC5257E5F7BA5EE1C7C7E5F7AB1);
		bool L_8;
		L_8 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(_stringLiteralA2F4AC9DD8E1FAC5257E5F7BA5EE1C7C7E5F7AB1, L_7, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 336));
		if (!L_8)
		{
			goto IL_007c;
		}
	}
	{
		// if (waitCallbackMessageMap.TryGetValue(handler.id, out m))
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 337));
		Dictionary_2_t7019529726DC9B660C51BEDBA75D6102D49A8275* L_9 = __this->___waitCallbackMessageMap_9;
		MessageHandler_t5CBA985A6A31029C3532CC5B3EABEDF44ACBCFB5* L_10 = V_0;
		NullCheck(L_10);
		int32_t L_11 = L_10->___id_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 338));
		NullCheck(L_9);
		bool L_12;
		L_12 = Dictionary_2_TryGetValue_mA4619F1FFBEBA7E77460219CD6B4E97AAB76C04A(L_9, L_11, (&V_1), Dictionary_2_TryGetValue_mA4619F1FFBEBA7E77460219CD6B4E97AAB76C04A_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 338));
		if (!L_12)
		{
			goto IL_007b;
		}
	}
	{
		// waitCallbackMessageMap.Remove(handler.id);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 339));
		Dictionary_2_t7019529726DC9B660C51BEDBA75D6102D49A8275* L_13 = __this->___waitCallbackMessageMap_9;
		MessageHandler_t5CBA985A6A31029C3532CC5B3EABEDF44ACBCFB5* L_14 = V_0;
		NullCheck(L_14);
		int32_t L_15 = L_14->___id_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 340));
		NullCheck(L_13);
		bool L_16;
		L_16 = Dictionary_2_Remove_mC65CD0AF1E825A0B89893DF8BA2EA0416D2BC0CD(L_13, L_15, Dictionary_2_Remove_mC65CD0AF1E825A0B89893DF8BA2EA0416D2BC0CD_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 340));
		// if (m.callBack != null)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 341));
		UnityMessage_t536476F96F550BF743BDE7AFEA8F4A4641F6F51F* L_17 = V_1;
		NullCheck(L_17);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_18 = L_17->___callBack_2;
		if (!L_18)
		{
			goto IL_007b;
		}
	}
	{
		// m.callBack(handler.getData<object>()); // todo
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 342));
		UnityMessage_t536476F96F550BF743BDE7AFEA8F4A4641F6F51F* L_19 = V_1;
		NullCheck(L_19);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_20 = L_19->___callBack_2;
		MessageHandler_t5CBA985A6A31029C3532CC5B3EABEDF44ACBCFB5* L_21 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 343));
		NullCheck(L_21);
		RuntimeObject* L_22;
		L_22 = MessageHandler_getData_TisRuntimeObject_m24756BF831B0D45AA5D8D4A1FF41A01DFD5E3888(L_21, MessageHandler_getData_TisRuntimeObject_m24756BF831B0D45AA5D8D4A1FF41A01DFD5E3888_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 343));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 344));
		NullCheck(L_20);
		Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_inline(L_20, L_22, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 344));
	}

IL_007b:
	{
		// return;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 345));
		return;
	}

IL_007c:
	{
		// if (OnRNMessage != null)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 346));
		MessageHandlerDelegate_tF830202AB59BFB778BA9227DA72E1E9FDFFA9CA8* L_23 = __this->___OnRNMessage_8;
		if (!L_23)
		{
			goto IL_0090;
		}
	}
	{
		// OnRNMessage(handler);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 347));
		MessageHandlerDelegate_tF830202AB59BFB778BA9227DA72E1E9FDFFA9CA8* L_24 = __this->___OnRNMessage_8;
		MessageHandler_t5CBA985A6A31029C3532CC5B3EABEDF44ACBCFB5* L_25 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 348));
		NullCheck(L_24);
		MessageHandlerDelegate_Invoke_mC612A87743048C33E692A082D52C47AB68181A80_inline(L_24, L_25, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 348));
	}

IL_0090:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 349));
		return;
	}
}
// System.Void UnityMessageManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMessageManager__ctor_mA4511CB120AE9C3096F93F3AC504156301DAB9F7 (UnityMessageManager_t55C0CD8495B9BA2855D6C614E661E729DF614002* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m793321E9D300EBEC85E1995E3128954E56A9703C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t7019529726DC9B660C51BEDBA75D6102D49A8275_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityMessageManager__ctor_mA4511CB120AE9C3096F93F3AC504156301DAB9F7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityMessageManager_t55C0CD8495B9BA2855D6C614E661E729DF614002_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, UnityMessageManager__ctor_mA4511CB120AE9C3096F93F3AC504156301DAB9F7_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 350));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 351));
	{
		// private Dictionary<int, UnityMessage> waitCallbackMessageMap = new Dictionary<int, UnityMessage>();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 352));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 353));
		Dictionary_2_t7019529726DC9B660C51BEDBA75D6102D49A8275* L_0 = (Dictionary_2_t7019529726DC9B660C51BEDBA75D6102D49A8275*)il2cpp_codegen_object_new(Dictionary_2_t7019529726DC9B660C51BEDBA75D6102D49A8275_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m793321E9D300EBEC85E1995E3128954E56A9703C(L_0, Dictionary_2__ctor_m793321E9D300EBEC85E1995E3128954E56A9703C_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 353));
		__this->___waitCallbackMessageMap_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___waitCallbackMessageMap_9), (void*)L_0);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 354));
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 354));
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
void MessageDelegate_Invoke_m5C88BF65BFF94836174CF133488C77B334853DCC_Multicast(MessageDelegate_tD14A044E192668727C7CA3FCCFF76C636F8C298D* __this, String_t* ___message0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		MessageDelegate_tD14A044E192668727C7CA3FCCFF76C636F8C298D* currentDelegate = reinterpret_cast<MessageDelegate_tD14A044E192668727C7CA3FCCFF76C636F8C298D*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___message0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void MessageDelegate_Invoke_m5C88BF65BFF94836174CF133488C77B334853DCC_Open(MessageDelegate_tD14A044E192668727C7CA3FCCFF76C636F8C298D* __this, String_t* ___message0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___message0, method);
}
void MessageDelegate_Invoke_m5C88BF65BFF94836174CF133488C77B334853DCC_OpenStaticInvoker(MessageDelegate_tD14A044E192668727C7CA3FCCFF76C636F8C298D* __this, String_t* ___message0, const RuntimeMethod* method)
{
	InvokerActionInvoker1< String_t* >::Invoke(__this->___method_ptr_0, method, NULL, ___message0);
}
void MessageDelegate_Invoke_m5C88BF65BFF94836174CF133488C77B334853DCC_ClosedStaticInvoker(MessageDelegate_tD14A044E192668727C7CA3FCCFF76C636F8C298D* __this, String_t* ___message0, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___message0);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_MessageDelegate_tD14A044E192668727C7CA3FCCFF76C636F8C298D (MessageDelegate_tD14A044E192668727C7CA3FCCFF76C636F8C298D* __this, String_t* ___message0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___message0' to native representation
	char* ____message0_marshaled = NULL;
	____message0_marshaled = il2cpp_codegen_marshal_string(___message0);

	// Native function invocation
	il2cppPInvokeFunc(____message0_marshaled);

	// Marshaling cleanup of parameter '___message0' native representation
	il2cpp_codegen_marshal_free(____message0_marshaled);
	____message0_marshaled = NULL;

}
// System.Void UnityMessageManager/MessageDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageDelegate__ctor_m072A79953B4D2581E0213262217A4B6E4DC9EF3E (MessageDelegate_tD14A044E192668727C7CA3FCCFF76C636F8C298D* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&MessageDelegate_Invoke_m5C88BF65BFF94836174CF133488C77B334853DCC_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&MessageDelegate_Invoke_m5C88BF65BFF94836174CF133488C77B334853DCC_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&MessageDelegate_Invoke_m5C88BF65BFF94836174CF133488C77B334853DCC_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&MessageDelegate_Invoke_m5C88BF65BFF94836174CF133488C77B334853DCC_Open;
		}
		else
		{
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&MessageDelegate_Invoke_m5C88BF65BFF94836174CF133488C77B334853DCC_Multicast;
}
// System.Void UnityMessageManager/MessageDelegate::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageDelegate_Invoke_m5C88BF65BFF94836174CF133488C77B334853DCC (MessageDelegate_tD14A044E192668727C7CA3FCCFF76C636F8C298D* __this, String_t* ___message0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___message0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult UnityMessageManager/MessageDelegate::BeginInvoke(System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MessageDelegate_BeginInvoke_mBE7EE70496B9C6B3A8161EA15F617E3CA836C016 (MessageDelegate_tD14A044E192668727C7CA3FCCFF76C636F8C298D* __this, String_t* ___message0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___message0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityMessageManager/MessageDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageDelegate_EndInvoke_mB4EBDE0D4F999D929FD66E2D856F7A804D638148 (MessageDelegate_tD14A044E192668727C7CA3FCCFF76C636F8C298D* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
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
void MessageHandlerDelegate_Invoke_mC612A87743048C33E692A082D52C47AB68181A80_Multicast(MessageHandlerDelegate_tF830202AB59BFB778BA9227DA72E1E9FDFFA9CA8* __this, MessageHandler_t5CBA985A6A31029C3532CC5B3EABEDF44ACBCFB5* ___handler0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		MessageHandlerDelegate_tF830202AB59BFB778BA9227DA72E1E9FDFFA9CA8* currentDelegate = reinterpret_cast<MessageHandlerDelegate_tF830202AB59BFB778BA9227DA72E1E9FDFFA9CA8*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, MessageHandler_t5CBA985A6A31029C3532CC5B3EABEDF44ACBCFB5*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___handler0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void MessageHandlerDelegate_Invoke_mC612A87743048C33E692A082D52C47AB68181A80_Open(MessageHandlerDelegate_tF830202AB59BFB778BA9227DA72E1E9FDFFA9CA8* __this, MessageHandler_t5CBA985A6A31029C3532CC5B3EABEDF44ACBCFB5* ___handler0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (MessageHandler_t5CBA985A6A31029C3532CC5B3EABEDF44ACBCFB5*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___handler0, method);
}
void MessageHandlerDelegate_Invoke_mC612A87743048C33E692A082D52C47AB68181A80_OpenStaticInvoker(MessageHandlerDelegate_tF830202AB59BFB778BA9227DA72E1E9FDFFA9CA8* __this, MessageHandler_t5CBA985A6A31029C3532CC5B3EABEDF44ACBCFB5* ___handler0, const RuntimeMethod* method)
{
	InvokerActionInvoker1< MessageHandler_t5CBA985A6A31029C3532CC5B3EABEDF44ACBCFB5* >::Invoke(__this->___method_ptr_0, method, NULL, ___handler0);
}
void MessageHandlerDelegate_Invoke_mC612A87743048C33E692A082D52C47AB68181A80_ClosedStaticInvoker(MessageHandlerDelegate_tF830202AB59BFB778BA9227DA72E1E9FDFFA9CA8* __this, MessageHandler_t5CBA985A6A31029C3532CC5B3EABEDF44ACBCFB5* ___handler0, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, MessageHandler_t5CBA985A6A31029C3532CC5B3EABEDF44ACBCFB5* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___handler0);
}
void MessageHandlerDelegate_Invoke_mC612A87743048C33E692A082D52C47AB68181A80_OpenVirtual(MessageHandlerDelegate_tF830202AB59BFB778BA9227DA72E1E9FDFFA9CA8* __this, MessageHandler_t5CBA985A6A31029C3532CC5B3EABEDF44ACBCFB5* ___handler0, const RuntimeMethod* method)
{
	VirtualActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), ___handler0);
}
void MessageHandlerDelegate_Invoke_mC612A87743048C33E692A082D52C47AB68181A80_OpenInterface(MessageHandlerDelegate_tF830202AB59BFB778BA9227DA72E1E9FDFFA9CA8* __this, MessageHandler_t5CBA985A6A31029C3532CC5B3EABEDF44ACBCFB5* ___handler0, const RuntimeMethod* method)
{
	InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___handler0);
}
void MessageHandlerDelegate_Invoke_mC612A87743048C33E692A082D52C47AB68181A80_OpenGenericVirtual(MessageHandlerDelegate_tF830202AB59BFB778BA9227DA72E1E9FDFFA9CA8* __this, MessageHandler_t5CBA985A6A31029C3532CC5B3EABEDF44ACBCFB5* ___handler0, const RuntimeMethod* method)
{
	GenericVirtualActionInvoker0::Invoke(method, ___handler0);
}
void MessageHandlerDelegate_Invoke_mC612A87743048C33E692A082D52C47AB68181A80_OpenGenericInterface(MessageHandlerDelegate_tF830202AB59BFB778BA9227DA72E1E9FDFFA9CA8* __this, MessageHandler_t5CBA985A6A31029C3532CC5B3EABEDF44ACBCFB5* ___handler0, const RuntimeMethod* method)
{
	GenericInterfaceActionInvoker0::Invoke(method, ___handler0);
}
// System.Void UnityMessageManager/MessageHandlerDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageHandlerDelegate__ctor_m9D49A5D03589E382C69571E88278E84CA1F9FF4F (MessageHandlerDelegate_tF830202AB59BFB778BA9227DA72E1E9FDFFA9CA8* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&MessageHandlerDelegate_Invoke_mC612A87743048C33E692A082D52C47AB68181A80_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&MessageHandlerDelegate_Invoke_mC612A87743048C33E692A082D52C47AB68181A80_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&MessageHandlerDelegate_Invoke_mC612A87743048C33E692A082D52C47AB68181A80_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___method1))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&MessageHandlerDelegate_Invoke_mC612A87743048C33E692A082D52C47AB68181A80_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&MessageHandlerDelegate_Invoke_mC612A87743048C33E692A082D52C47AB68181A80_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&MessageHandlerDelegate_Invoke_mC612A87743048C33E692A082D52C47AB68181A80_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&MessageHandlerDelegate_Invoke_mC612A87743048C33E692A082D52C47AB68181A80_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&MessageHandlerDelegate_Invoke_mC612A87743048C33E692A082D52C47AB68181A80_Open;
			}
		}
		else
		{
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&MessageHandlerDelegate_Invoke_mC612A87743048C33E692A082D52C47AB68181A80_Multicast;
}
// System.Void UnityMessageManager/MessageHandlerDelegate::Invoke(MessageHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageHandlerDelegate_Invoke_mC612A87743048C33E692A082D52C47AB68181A80 (MessageHandlerDelegate_tF830202AB59BFB778BA9227DA72E1E9FDFFA9CA8* __this, MessageHandler_t5CBA985A6A31029C3532CC5B3EABEDF44ACBCFB5* ___handler0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, MessageHandler_t5CBA985A6A31029C3532CC5B3EABEDF44ACBCFB5*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___handler0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult UnityMessageManager/MessageHandlerDelegate::BeginInvoke(MessageHandler,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MessageHandlerDelegate_BeginInvoke_m1395182BD73CBCCF20E768F09ECEF37B9B835EA2 (MessageHandlerDelegate_tF830202AB59BFB778BA9227DA72E1E9FDFFA9CA8* __this, MessageHandler_t5CBA985A6A31029C3532CC5B3EABEDF44ACBCFB5* ___handler0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___handler0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityMessageManager/MessageHandlerDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageHandlerDelegate_EndInvoke_mE403CD191F1F35E443B9221558466560258C80F6 (MessageHandlerDelegate_tF830202AB59BFB778BA9227DA72E1E9FDFFA9CA8* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___x0), (&___y1), (&___z2));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7150));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7151));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7152));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7153));
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7154));
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7155));
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7156));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnityMessageManager_t55C0CD8495B9BA2855D6C614E661E729DF614002* UnityMessageManager_get_Instance_mFA329586DD85236EFC2D0C69E92EAA27A48174A7_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityMessageManager_get_Instance_mFA329586DD85236EFC2D0C69E92EAA27A48174A7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityMessageManager_t55C0CD8495B9BA2855D6C614E661E729DF614002_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, UnityMessageManager_get_Instance_mFA329586DD85236EFC2D0C69E92EAA27A48174A7_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 269));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 270));
	{
		// public static UnityMessageManager Instance { get; private set; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 271));
		il2cpp_codegen_runtime_class_init_inline(UnityMessageManager_t55C0CD8495B9BA2855D6C614E661E729DF614002_il2cpp_TypeInfo_var);
		UnityMessageManager_t55C0CD8495B9BA2855D6C614E661E729DF614002* L_0 = ((UnityMessageManager_t55C0CD8495B9BA2855D6C614E661E729DF614002_StaticFields*)il2cpp_codegen_static_fields_for(UnityMessageManager_t55C0CD8495B9BA2855D6C614E661E729DF614002_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___a0), (&___b1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_RuntimeMethod_var, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7372));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7373));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7374));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7375));
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
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7376));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), ((float)il2cpp_codegen_subtract(L_9, L_11)), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7376));
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7377));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7292));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7293));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7294));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7295));
		float L_0 = __this->___x_2;
		float L_1 = __this->___x_2;
		float L_2 = __this->___y_3;
		float L_3 = __this->___y_3;
		float L_4 = __this->___z_4;
		float L_5 = __this->___z_4;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7296));
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_6;
		L_6 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3)))), ((float)il2cpp_codegen_multiply(L_4, L_5))))));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7296));
		V_0 = ((float)L_6);
		goto IL_0034;
	}

IL_0034:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7297));
		float L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___a0), (&___b1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_RuntimeMethod_var, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7366));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7367));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7368));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7369));
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
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7370));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7370));
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7371));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m57EE8D709A93B2B0FF8D499FA2947B1D61CB1FD6_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, float ___t2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_Lerp_m57EE8D709A93B2B0FF8D499FA2947B1D61CB1FD6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___a0), (&___b1), (&___t2));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Vector3_Lerp_m57EE8D709A93B2B0FF8D499FA2947B1D61CB1FD6_RuntimeMethod_var, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7109));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7110));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7111));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7112));
		float L_0 = ___t2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7113));
		float L_1;
		L_1 = Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline(L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7113));
		___t2 = L_1;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7114));
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
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7115));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_23), ((float)il2cpp_codegen_add(L_3, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_5, L_7)), L_8)))), ((float)il2cpp_codegen_add(L_10, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_12, L_14)), L_15)))), ((float)il2cpp_codegen_add(L_17, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_19, L_21)), L_22)))), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7115));
		V_0 = L_23;
		goto IL_0053;
	}

IL_0053:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7116));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = V_0;
		return L_24;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnityMessageManager_set_Instance_mCF8082813C2EFD4D6608DE611D4D75F111CB9813_inline (UnityMessageManager_t55C0CD8495B9BA2855D6C614E661E729DF614002* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityMessageManager_set_Instance_mCF8082813C2EFD4D6608DE611D4D75F111CB9813_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityMessageManager_t55C0CD8495B9BA2855D6C614E661E729DF614002_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___value0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, UnityMessageManager_set_Instance_mCF8082813C2EFD4D6608DE611D4D75F111CB9813_RuntimeMethod_var, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 272));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 273));
	{
		// public static UnityMessageManager Instance { get; private set; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 274));
		UnityMessageManager_t55C0CD8495B9BA2855D6C614E661E729DF614002* L_0 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(UnityMessageManager_t55C0CD8495B9BA2855D6C614E661E729DF614002_il2cpp_TypeInfo_var);
		((UnityMessageManager_t55C0CD8495B9BA2855D6C614E661E729DF614002_StaticFields*)il2cpp_codegen_static_fields_for(UnityMessageManager_t55C0CD8495B9BA2855D6C614E661E729DF614002_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((UnityMessageManager_t55C0CD8495B9BA2855D6C614E661E729DF614002_StaticFields*)il2cpp_codegen_static_fields_for(UnityMessageManager_t55C0CD8495B9BA2855D6C614E661E729DF614002_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_6), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MessageDelegate_Invoke_m5C88BF65BFF94836174CF133488C77B334853DCC_inline (MessageDelegate_tD14A044E192668727C7CA3FCCFF76C636F8C298D* __this, String_t* ___message0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___message0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MessageHandlerDelegate_Invoke_mC612A87743048C33E692A082D52C47AB68181A80_inline (MessageHandlerDelegate_tF830202AB59BFB778BA9227DA72E1E9FDFFA9CA8* __this, MessageHandler_t5CBA985A6A31029C3532CC5B3EABEDF44ACBCFB5* ___handler0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, MessageHandler_t5CBA985A6A31029C3532CC5B3EABEDF44ACBCFB5*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___handler0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___obj0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline (float ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___value0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_RuntimeMethod_var, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7808));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7809));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7810));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7811));
		float L_0 = ___value0;
		V_0 = (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7812));
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7813));
		V_1 = (0.0f);
		goto IL_002d;
	}

IL_0015:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7814));
		float L_2 = ___value0;
		V_2 = (bool)((((float)L_2) > ((float)(1.0f)))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7815));
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7816));
		V_1 = (1.0f);
		goto IL_002d;
	}

IL_0029:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7817));
		float L_4 = ___value0;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7818));
		float L_5 = V_1;
		return L_5;
	}
}
