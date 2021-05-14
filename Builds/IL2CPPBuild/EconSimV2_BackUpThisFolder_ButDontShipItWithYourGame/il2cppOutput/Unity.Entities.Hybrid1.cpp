#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
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
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Collections.Generic.Dictionary`2<UnityEngine.GameObject,System.Int32>
struct Dictionary_2_t4C2FB1CAF9188DADBB3D9EC66581072D16870B9B;
// System.Collections.Generic.Dictionary`2<System.Type,Unity.Entities.ComponentSystemBase>
struct Dictionary_2_tD6066C27E39214D9F5B08C241F9C5FB62A7B63B3;
// System.Func`2<Unity.Entities.ComponentType,System.Boolean>
struct Func_2_tE27876FCDC8BF5EB27DCC21BFDE49DB270AC6C13;
// System.Func`2<UnityEngine.GameObject,System.Int32>
struct Func_2_tFA3D86D150CCC78E800EC5AC7D7E87E0E601B2AA;
// System.Func`2<System.Int32Enum,System.ValueTuple`2<System.Int32Enum,System.Object>>
struct Func_2_t70BE69A6921C4166AFE0A18F5A68AD527FF214C7;
// System.Func`2<GameObjectConversion.LogType,System.ValueTuple`2<GameObjectConversion.LogType,System.String>>
struct Func_2_tFE4B20B363C884A7ED294D0081233424ACEB474A;
// System.Collections.Generic.HashSet`1<UnityEngine.GameObject>
struct HashSet_1_t77825C5E92A478ADAC0C07A97589EB9CBFF229E3;
// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B;
// System.Collections.Generic.HashSet`1<UnityEngine.Object>
struct HashSet_1_t658A4F799C39BCEF71EEB383AC1FCCFDC8447673;
// System.Collections.Generic.IEnumerable`1<System.ValueTuple`2<System.Int32Enum,System.Object>>
struct IEnumerable_1_t802128B1CC01D88DC47A34988A5392F860D55239;
// System.Collections.Generic.IEnumerable`1<System.ValueTuple`2<GameObjectConversion.LogType,System.String>>
struct IEnumerable_1_t765D02FC82EAA431FBE22313C81B632BD2BD6C56;
// System.Collections.Generic.IEnumerable`1<System.Int32Enum>
struct IEnumerable_1_t28FB40D8E33C5846AB04F37C78130A4948569C7C;
// System.Collections.Generic.IEnumerable`1<GameObjectConversion.LogType>
struct IEnumerable_1_tCFAB1BF143106D024AF24E68077C3351BB70231F;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_tBD60400523D840591A17E4CBBACC79397F68FAA2;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.List`1<System.Int32>>
struct IEnumerator_1_t007D767FE56C6A383049D5868C8986A2F67CEAF7;
// System.Collections.Generic.IEnumerator`1<System.ValueTuple`2<System.Int32,Unity.Entities.Conversion.LogEventData>>
struct IEnumerator_1_tDD466CCEF39320631AB38C461BEA704998D56F89;
// System.Collections.Generic.IEnumerator`1<System.ValueTuple`2<GameObjectConversion.LogType,System.String>>
struct IEnumerator_1_tFBD7711C3EF3EB848E7FE4C7DAFBD023DC3D4007;
// System.Collections.Generic.IEnumerator`1<System.Int32>
struct IEnumerator_1_t72AB4B40AF5290B386215B0BFADC8919D394DCAB;
// System.Collections.Generic.IEnumerator`1<System.String>
struct IEnumerator_1_t0DE5AA701B682A891412350E63D3E441F98F205C;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.GameObject>
struct IEqualityComparer_1_t0433C5574AE0B8AB9FB6B71065909FA236452BBA;
// System.Collections.Generic.List`1<System.Attribute>
struct List_1_tD9744FC9973F836851CCD7BEBF915691AB28EC10;
// System.Collections.Generic.List`1<UnityEngine.Component>
struct List_1_tA3929E98F6AC5A6E95EF799D2E3294F214358C0F;
// System.Collections.Generic.List`1<Unity.Entities.ComponentSystemBase>
struct List_1_t3F15B202D7C7B7EEB8B86FFA8C5D2156C6F32C78;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5;
// System.Collections.Generic.List`1<Unity.Entities.IConvertGameObjectToEntity>
struct List_1_t316A5776D1E7716EA27F8F3084A23ECE9A43C29A;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<UnityEngine.Object>
struct List_1_t9D216521E6A213FF8562D215598D336ABB5474F4;
// System.Collections.Generic.List`1<Unity.Entities.World>
struct List_1_t84AC7439EE119A84B7D9198C8EB4AC483255C192;
// System.Predicate`1<Unity.Entities.ConvertToEntity>
struct Predicate_1_t318C861BD2BFCB8E8F668410F7FC94C99159678F;
// Unity.Properties.Property`2<Unity.Entities.CompanionLink,UnityEngine.GameObject>
struct Property_2_t9C350B218BDC64D644B957D1AB5A01F89D95B9D8;
// Unity.Properties.Property`2<System.Object,System.Object>
struct Property_2_tD7C7F959BE068E5DB2625A4229EEFE1C3F3413FE;
// System.Collections.Generic.Stack`1<System.Object>
struct Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981;
// System.Collections.Generic.Stack`1<UnityEngine.Transform>
struct Stack_1_t947A852F0DF179B04BC160BDA03DAC7B3F07460F;
// System.Collections.Generic.HashSet`1/Slot<UnityEngine.GameObject>[]
struct SlotU5BU5D_t4D48CE6F05DD1508F93D1238C2AD82830DDF9227;
// System.ValueTuple`2<System.Int32Enum,System.Object>[]
struct ValueTuple_2U5BU5D_t6D955F3197425C088F7E3D4EAE26EEA3B95DAA15;
// System.ValueTuple`2<GameObjectConversion.LogType,System.String>[]
struct ValueTuple_2U5BU5D_t6FC2579E1768D70AD4F2224939E5F390B3BD4608;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// Unity.Entities.EntityArchetype[]
struct EntityArchetypeU5BU5D_t65426B198983693FD94AFA96C0327282DFA3E2CA;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642;
// Unity.Entities.IConvertGameObjectToEntity[]
struct IConvertGameObjectToEntityU5BU5D_tA9DF7C957E6752426C70484E512C78FBBBCA81ED;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// Unity.Entities.Conversion.LogEventData[]
struct LogEventDataU5BU5D_t297A076CEB7438F3BBF18FEC1A58490451063CCC;
// UnityEngine.Object[]
struct ObjectU5BU5D_t1256A8B00BB71C7F582BF08257BE4F826FF64873;
// System.SByte[]
struct SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// UnityEngine.Transform[]
struct TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// Unity.Entities.CompanionLink
struct CompanionLink_t41731339806AAA3D199C80AC4E62FC893D428FA2;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// Unity.Entities.Conversion.ConvertGameObjectToEntitySystem
struct ConvertGameObjectToEntitySystem_t98D507A5987792091C6805F64C272FFF43E48498;
// Unity.Entities.ConvertToEntity
struct ConvertToEntity_t52854E5BDADE29922A64486FCB764A2ABB0EA040;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// Unity.Entities.EntityCommandBufferData
struct EntityCommandBufferData_t54C8C95E18B79C35853D6A104DCD8ECC9F66CBAA;
// Unity.Entities.EntityDataAccess
struct EntityDataAccess_t14BF0F7A8F7622E7E73B5E3C0D52313B1F8D73D2;
// Unity.Entities.EntityQueryCache
struct EntityQueryCache_t91D2DBE7CB9A419E17A808271A782A08DFB96179;
// Unity.Entities.EntityQueryImpl
struct EntityQueryImpl_tF4EC3E0E8B8074B8B417E3B175695ED99F01B421;
// System.IO.FileInfo
struct FileInfo_t6C8B2EAA1E23F9E6D7C287C58E4EEEB2049ABAB9;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// Unity.Entities.Conversion.GameObjectConversionMappingSystem
struct GameObjectConversionMappingSystem_tD834531091319F873FDC1E5EDB439CE9654312DD;
// Unity.Entities.GameObjectConversionSettings
struct GameObjectConversionSettings_t67DD3850032853AEAD3BB89021BCCFEA5318BE3C;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerable
struct IEnumerable_t47A618747A1BB2A868710316F7372094849163A2;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046;
// Unity.Entities.Conversion.JournalingUnityLogger
struct JournalingUnityLogger_t4B8A989B4D03D03C25986C8E6F7B5CE90EEDB6D5;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1;
// StopConvertToEntity
struct StopConvertToEntity_t8D04CD984FF5CEFE36F851147629FD1F0DB85C68;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// Unity.Entities.SystemState
struct SystemState_t36E4EBEDC1A8DE324669E6A495E2CD70B8B12D95;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// System.Type
struct Type_t;
// Unity.Collections.LowLevel.Unsafe.UnsafeHashMapData
struct UnsafeHashMapData_tBE4CCB191438EEFAF585DE1AD96D342825E64C82;
// Unity.Collections.LowLevel.Unsafe.UnsafeList
struct UnsafeList_t45363E05DB545743D4FBBA9793AA68E6A32634AA;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// Unity.Entities.World
struct World_tC5274CBB5238670C9A07FA5705DD82B5196C9A07;
// Unity.Entities.WorldUnmanagedImpl
struct WorldUnmanagedImpl_tF0B016C8B4F3F50C47B0FE9A703C9865A1A99967;
// Unity.Entities.Conversion.ConversionJournalData/<SelectLogEventsOrdered>d__43
struct U3CSelectLogEventsOrderedU3Ed__43_t5CB6C746560478F190074FB2DD44764B9DC886BF;
// GameObjectConversion.ConversionLogUtils/<>c
struct U3CU3Ec_t2837DE7A38FEEE254E0CA2388F8A3843A0FCD5D7;
// GameObjectConversion.ConversionLogUtils/<ParseConversionLog>d__0
struct U3CParseConversionLogU3Ed__0_t545008DA4AF19BE77424D4CC2D1D620EF42B9BD3;
// Unity.Entities.Conversion.ConvertGameObjectToEntitySystem/<>c__DisplayClass1_0
struct U3CU3Ec__DisplayClass1_0_t9FBA1A3547AFEEF2D8D2F740195F4B795E56187F;
// Unity.Entities.ConvertToEntitySystem/<>c
struct U3CU3Ec_t8A22BBA68B61DFC9EC097D4580B47F507D718AB5;
// Unity.Entities.Conversion.GameObjectConversionMappingSystem/<>c
struct U3CU3Ec_t43693085741BED5C3AB7F55341F17CBD3273F0AD;
// Unity.Entities.GameObjectConversionSettings/ExportedAsset
struct ExportedAsset_t38651E80B7E37878015D8E2B869FF5C251672D65;
// Unity.Entities.GameObjectConversionUtility/<>c
struct U3CU3Ec_tCC99DC24F6BBD3C1732D5A88EFDDF7A4D51A0D0D;
// Unity.Entities.Conversion.MultiListDebugUtility/<SelectAllLists>d__1
struct U3CSelectAllListsU3Ed__1_t681808CD9B2F449764F76B111AE4D38F0938A623;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE;
// Unity.Properties.Generated.Unity_Entities_CompanionLink_PropertyBag/Companion_Property
struct Companion_Property_tBD5185C195780B95CB3CFBF31BEBEF89A2C303CD;
// Unity.Entities.Conversion.IncrementalConversionContext/RemoveFromHierarchy/Exec
struct Exec_t13626ECD14E784C7148B8520FD71A4D0A5468675;

IL2CPP_EXTERN_C RuntimeClass* BurstCompiler_t99F34BDE62961CF5A5ACEFBB6522F1343BF085D2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Children_t22E7C284A8562300D30C3F11E2C477C8ECEF77D6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exec_t13626ECD14E784C7148B8520FD71A4D0A5468675_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tFE4B20B363C884A7ED294D0081233424ACEB474A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashSet_1_t77825C5E92A478ADAC0C07A97589EB9CBFF229E3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_tBD60400523D840591A17E4CBBACC79397F68FAA2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t0DE5AA701B682A891412350E63D3E441F98F205C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t9D216521E6A213FF8562D215598D336ABB5474F4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LogEventDataU5BU5D_t297A076CEB7438F3BBF18FEC1A58490451063CCC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LogType_tD38249D9C1B645969AE6009D7DCEA678B72A725B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RemoveFromHierarchy_t3865B184595D47CA96262E2CC565E2B4A1FA1E37_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Stack_1_t947A852F0DF179B04BC160BDA03DAC7B3F07460F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CParseConversionLogU3Ed__0_t545008DA4AF19BE77424D4CC2D1D620EF42B9BD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CSelectAllListsU3Ed__1_t681808CD9B2F449764F76B111AE4D38F0938A623_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CSelectLogEventsOrderedU3Ed__43_t5CB6C746560478F190074FB2DD44764B9DC886BF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t2837DE7A38FEEE254E0CA2388F8A3843A0FCD5D7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t43693085741BED5C3AB7F55341F17CBD3273F0AD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t8A22BBA68B61DFC9EC097D4580B47F507D718AB5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tCC99DC24F6BBD3C1732D5A88EFDDF7A4D51A0D0D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ValueTuple_2_t21E30194CC22968E9B81643812C516AAF6C66093_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ValueTuple_2_t5123C212FD35A05E1C2FB02EC85E106EFA9B5782_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral1B8DDA7E646DED715ECE3B936CF716EA7768BE89;
IL2CPP_EXTERN_C String_t* _stringLiteral4AEA76658D1C173733F9DE3CA3A2ACB6C3E205D2;
IL2CPP_EXTERN_C String_t* _stringLiteral604D744C706DF22219F7174D1F4FF18F610A1BE0;
IL2CPP_EXTERN_C String_t* _stringLiteral701320A8BBB3180BDF66BAF571530BE126D8FE55;
IL2CPP_EXTERN_C String_t* _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisLogEventData_t13585C99A55DB1722FFE891AD83B6D8EFAE593A1_mEA601FE4948CE7C3CB43DEE7E3C25B0251160182_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BurstCompiler_CompileFunctionPointer_TisExec_t13626ECD14E784C7148B8520FD71A4D0A5468675_m2EE736A92B4DADF4E342C3BD124383091340CD47_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInParent_TisConvertToEntity_t52854E5BDADE29922A64486FCB764A2ABB0EA040_m2EE5B59A030248A9ECE067454D5017D66B7B86C0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInParent_TisStopConvertToEntity_t8D04CD984FF5CEFE36F851147629FD1F0DB85C68_m67A00A0AFFCFE1CCEF4A7110C7CF86FC55397D94_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisStopConvertToEntity_t8D04CD984FF5CEFE36F851147629FD1F0DB85C68_m6C293C61CB12358A40A3DFDF3269457A7775D774_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Cast_TisLogType_tD38249D9C1B645969AE6009D7DCEA678B72A725B_mC6F5FEFAD2D9DB4C397292626763E07838DDBE50_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Select_TisLogType_tD38249D9C1B645969AE6009D7DCEA678B72A725B_TisValueTuple_2_t5123C212FD35A05E1C2FB02EC85E106EFA9B5782_mCB3921C163FC2E7CBB0B0D88AD36636FA371363D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToArray_TisValueTuple_2_t5123C212FD35A05E1C2FB02EC85E106EFA9B5782_m61978F2F210BA22BF527BB993FD5B9EB604CF8FB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m1BA5A217EE1F04EC997FF95CA595646E06C1B52B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m673C580EA95E7DCB6C15662690C38DFCCB0F734E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m740CBDF222F51FFDE7E86716999541DE775F5801_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mA3B351B37128A8711612EDE71903537F0972DF40_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Reset_mC2D623CB35FED773F29BACCEE4C88144939B6343_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m494B18CB859AAD5742046CA5CDC9118C911C9A38_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m9CDCED7DEC6E463491CBAF504C60F72A2108D9D9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_mDD8238A62346741BE6B58494AE4EE2B1D3633D10_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FunctionPointer_1_get_Invoke_m4F6B34AEBBA4D79DBB2E7E246F029F6C43949931_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FunctionPointer_1_get_IsCreated_m0E94FF6DCA0FF3B1ED02ACC51A5771AB909E6683_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Clear_mDF4692C2E8DF02D17D06E465401059197AEA2389_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1__ctor_m1B28A53D18B635B3D4B43D03DE4D370F3EB29FF2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m7DF03CE7132B7D4C6AA2AEEA9BD1A8755AE12432_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mC986281A0F6F526F49A46B32BA044A00F562B121_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m859B0EE8491FDDEB1A3F7115D334B863E025BBC8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m8786AF4A4AE06CDD3B907914EE860C2748ED2EA4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MultiListEnumerator_2_Count_mCDB7347ACDAECA9E271992006A7E9AB188ABDE3D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MultiListEnumerator_2_Dispose_m2645099A83D350B53B0740BE004662D0DCC24562_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MultiListEnumerator_2_MoveNext_mFA976D72900425EEB9DD1E049F5410637AA44636_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MultiListEnumerator_2_Reset_mD3990D3684B96458ED35E6EAA88F581BAA8D01F7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MultiListEnumerator_2_get_Current_m4AFC6704DDD282C714AD537BB9BC7412C2648BD6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MultiList_2_TrySelectList_m4B7276AD07401DF8A46F86E332C0A4FB9A5FBD49_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1_GetEnumerator_m4AB49881FD946B436235290D53A917EEDF8E43FF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeHashMap_2_GetKeyValueArrays_m71DD792B1D1DB36C8EDFE5FA8A4DD1DDEF0C4A4D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeHashMap_2_TryAdd_mE53CE4E1682EB266540ADCCF1DDFAEE7959A54AC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeHashSet_1_Dispose_m8BF5871BAA311BC6BC8258BDADA80280985CB168_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeHashSet_1_ToNativeArray_m696576DFA3BCD824DA04772423A073E402D15DF8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeHashSet_1__ctor_m1C6183546A28FA0E8D7D1288AD53572D16BC84DA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeKeyValueArrays_2_Dispose_m58D26A9B94021185317C5365046F9AC097F77D21_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeList_1_AddRange_m357987151FA8A9EF6D59B076AD4C4346736E412D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeList_1_Add_m5237766797735D3AE742B808D9ACF0F9318687FB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeList_1__ctor_mBAE35EFBB4C7AC3B4A43CC67C5796BDCC9D954BB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeList_1_get_Item_mA9983E9C959E1D5B95B39FC7C40CF287E32D47FD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeList_1_get_Length_mB5AB45D0A3072AE6178CF6AC58DAA1D4E3C28902_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeList_1_set_Length_m6104401699865BEA6A0EB4EEF806E0A8546F88EF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Property_2__ctor_m1BAA1B1B55A36F058B42D189CA9E56A126FA4B81_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RemoveFromHierarchy_Execute_mA5C8393416C867F6F1AB271FA55CFA87BA1D8606_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Clear_mEC19CFF96CF41EDF007BC9DE1187EDC56E087AE3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1__ctor_m6B316383CD52D4A0BA0ABA35B1F6779F18397F61_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CParseConversionLogU3Ed__0_System_Collections_IEnumerator_Reset_m649D945A97AD34486495ECEF764097DBEFEF9FFD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CSelectAllListsU3Ed__1_System_Collections_IEnumerator_Reset_mE9F4B5927B16F4AC5B3861A292C199ABC7780721_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CSelectLogEventsOrderedU3Ed__43_System_Collections_IEnumerator_Reset_mD8EB686C873D16F054D9825E74E905A2A8D5B52E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CParseConversionLogU3Eb__0_0_m10DD3F4997241DCC4A5E3728B7360B0D39E40CF5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnsafeUtility_AsRef_TisRemoveFromHierarchy_t3865B184595D47CA96262E2CC565E2B4A1FA1E37_m1ADDED420D48E2E4DCD693D38EE4F89930E0B143_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueTuple_2__ctor_m693695462F1DE67A78C8EF7622061960FB0D81E7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueTuple_2__ctor_mCA6D2CD588BA1E915EFB689A55086899944CA194_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* World_GetExistingSystem_TisGameObjectConversionMappingSystem_tD834531091319F873FDC1E5EDB439CE9654312DD_m88515F8D73556A994C599F29E5BD784490D573B0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* LogType_tD38249D9C1B645969AE6009D7DCEA678B72A725B_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct EntityCommandBufferData_t54C8C95E18B79C35853D6A104DCD8ECC9F66CBAA ;
struct EntityDataAccess_t14BF0F7A8F7622E7E73B5E3C0D52313B1F8D73D2 ;
struct EntityQueryImpl_tF4EC3E0E8B8074B8B417E3B175695ED99F01B421 ;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct WorldUnmanagedImpl_tF0B016C8B4F3F50C47B0FE9A703C9865A1A99967 ;

struct ValueTuple_2U5BU5D_t6FC2579E1768D70AD4F2224939E5F390B3BD4608;
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
struct LogEventDataU5BU5D_t297A076CEB7438F3BBF18FEC1A58490451063CCC;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.EmptyArray`1<Unity.Entities.Conversion.LogEventData>
struct EmptyArray_1_t86B48FB94301ACEC404B9050083935C880655690  : public RuntimeObject
{
public:

public:
};

struct EmptyArray_1_t86B48FB94301ACEC404B9050083935C880655690_StaticFields
{
public:
	// T[] System.EmptyArray`1::Value
	LogEventDataU5BU5D_t297A076CEB7438F3BBF18FEC1A58490451063CCC* ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(EmptyArray_1_t86B48FB94301ACEC404B9050083935C880655690_StaticFields, ___Value_0)); }
	inline LogEventDataU5BU5D_t297A076CEB7438F3BBF18FEC1A58490451063CCC* get_Value_0() const { return ___Value_0; }
	inline LogEventDataU5BU5D_t297A076CEB7438F3BBF18FEC1A58490451063CCC** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(LogEventDataU5BU5D_t297A076CEB7438F3BBF18FEC1A58490451063CCC* value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Value_0), (void*)value);
	}
};


// System.Collections.Generic.HashSet`1<UnityEngine.GameObject>
struct HashSet_1_t77825C5E92A478ADAC0C07A97589EB9CBFF229E3  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____buckets_7;
	// System.Collections.Generic.HashSet`1/Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_t4D48CE6F05DD1508F93D1238C2AD82830DDF9227* ____slots_8;
	// System.Int32 System.Collections.Generic.HashSet`1::_count
	int32_t ____count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::_lastIndex
	int32_t ____lastIndex_10;
	// System.Int32 System.Collections.Generic.HashSet`1::_freeList
	int32_t ____freeList_11;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::_comparer
	RuntimeObject* ____comparer_12;
	// System.Int32 System.Collections.Generic.HashSet`1::_version
	int32_t ____version_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::_siInfo
	SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * ____siInfo_14;

public:
	inline static int32_t get_offset_of__buckets_7() { return static_cast<int32_t>(offsetof(HashSet_1_t77825C5E92A478ADAC0C07A97589EB9CBFF229E3, ____buckets_7)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__buckets_7() const { return ____buckets_7; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__buckets_7() { return &____buckets_7; }
	inline void set__buckets_7(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		____buckets_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buckets_7), (void*)value);
	}

	inline static int32_t get_offset_of__slots_8() { return static_cast<int32_t>(offsetof(HashSet_1_t77825C5E92A478ADAC0C07A97589EB9CBFF229E3, ____slots_8)); }
	inline SlotU5BU5D_t4D48CE6F05DD1508F93D1238C2AD82830DDF9227* get__slots_8() const { return ____slots_8; }
	inline SlotU5BU5D_t4D48CE6F05DD1508F93D1238C2AD82830DDF9227** get_address_of__slots_8() { return &____slots_8; }
	inline void set__slots_8(SlotU5BU5D_t4D48CE6F05DD1508F93D1238C2AD82830DDF9227* value)
	{
		____slots_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____slots_8), (void*)value);
	}

	inline static int32_t get_offset_of__count_9() { return static_cast<int32_t>(offsetof(HashSet_1_t77825C5E92A478ADAC0C07A97589EB9CBFF229E3, ____count_9)); }
	inline int32_t get__count_9() const { return ____count_9; }
	inline int32_t* get_address_of__count_9() { return &____count_9; }
	inline void set__count_9(int32_t value)
	{
		____count_9 = value;
	}

	inline static int32_t get_offset_of__lastIndex_10() { return static_cast<int32_t>(offsetof(HashSet_1_t77825C5E92A478ADAC0C07A97589EB9CBFF229E3, ____lastIndex_10)); }
	inline int32_t get__lastIndex_10() const { return ____lastIndex_10; }
	inline int32_t* get_address_of__lastIndex_10() { return &____lastIndex_10; }
	inline void set__lastIndex_10(int32_t value)
	{
		____lastIndex_10 = value;
	}

	inline static int32_t get_offset_of__freeList_11() { return static_cast<int32_t>(offsetof(HashSet_1_t77825C5E92A478ADAC0C07A97589EB9CBFF229E3, ____freeList_11)); }
	inline int32_t get__freeList_11() const { return ____freeList_11; }
	inline int32_t* get_address_of__freeList_11() { return &____freeList_11; }
	inline void set__freeList_11(int32_t value)
	{
		____freeList_11 = value;
	}

	inline static int32_t get_offset_of__comparer_12() { return static_cast<int32_t>(offsetof(HashSet_1_t77825C5E92A478ADAC0C07A97589EB9CBFF229E3, ____comparer_12)); }
	inline RuntimeObject* get__comparer_12() const { return ____comparer_12; }
	inline RuntimeObject** get_address_of__comparer_12() { return &____comparer_12; }
	inline void set__comparer_12(RuntimeObject* value)
	{
		____comparer_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____comparer_12), (void*)value);
	}

	inline static int32_t get_offset_of__version_13() { return static_cast<int32_t>(offsetof(HashSet_1_t77825C5E92A478ADAC0C07A97589EB9CBFF229E3, ____version_13)); }
	inline int32_t get__version_13() const { return ____version_13; }
	inline int32_t* get_address_of__version_13() { return &____version_13; }
	inline void set__version_13(int32_t value)
	{
		____version_13 = value;
	}

	inline static int32_t get_offset_of__siInfo_14() { return static_cast<int32_t>(offsetof(HashSet_1_t77825C5E92A478ADAC0C07A97589EB9CBFF229E3, ____siInfo_14)); }
	inline SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * get__siInfo_14() const { return ____siInfo_14; }
	inline SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 ** get_address_of__siInfo_14() { return &____siInfo_14; }
	inline void set__siInfo_14(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * value)
	{
		____siInfo_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____siInfo_14), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5, ____items_1)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get__items_1() const { return ____items_1; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5_StaticFields, ____emptyArray_5)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get__emptyArray_5() const { return ____emptyArray_5; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<Unity.Entities.IConvertGameObjectToEntity>
struct List_1_t316A5776D1E7716EA27F8F3084A23ECE9A43C29A  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	IConvertGameObjectToEntityU5BU5D_tA9DF7C957E6752426C70484E512C78FBBBCA81ED* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t316A5776D1E7716EA27F8F3084A23ECE9A43C29A, ____items_1)); }
	inline IConvertGameObjectToEntityU5BU5D_tA9DF7C957E6752426C70484E512C78FBBBCA81ED* get__items_1() const { return ____items_1; }
	inline IConvertGameObjectToEntityU5BU5D_tA9DF7C957E6752426C70484E512C78FBBBCA81ED** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(IConvertGameObjectToEntityU5BU5D_tA9DF7C957E6752426C70484E512C78FBBBCA81ED* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t316A5776D1E7716EA27F8F3084A23ECE9A43C29A, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t316A5776D1E7716EA27F8F3084A23ECE9A43C29A, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t316A5776D1E7716EA27F8F3084A23ECE9A43C29A, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t316A5776D1E7716EA27F8F3084A23ECE9A43C29A_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	IConvertGameObjectToEntityU5BU5D_tA9DF7C957E6752426C70484E512C78FBBBCA81ED* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t316A5776D1E7716EA27F8F3084A23ECE9A43C29A_StaticFields, ____emptyArray_5)); }
	inline IConvertGameObjectToEntityU5BU5D_tA9DF7C957E6752426C70484E512C78FBBBCA81ED* get__emptyArray_5() const { return ____emptyArray_5; }
	inline IConvertGameObjectToEntityU5BU5D_tA9DF7C957E6752426C70484E512C78FBBBCA81ED** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(IConvertGameObjectToEntityU5BU5D_tA9DF7C957E6752426C70484E512C78FBBBCA81ED* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Int32>
struct List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7, ____items_1)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__items_1() const { return ____items_1; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_StaticFields, ____emptyArray_5)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Object>
struct List_1_t9D216521E6A213FF8562D215598D336ABB5474F4  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t1256A8B00BB71C7F582BF08257BE4F826FF64873* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t9D216521E6A213FF8562D215598D336ABB5474F4, ____items_1)); }
	inline ObjectU5BU5D_t1256A8B00BB71C7F582BF08257BE4F826FF64873* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_t1256A8B00BB71C7F582BF08257BE4F826FF64873** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_t1256A8B00BB71C7F582BF08257BE4F826FF64873* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t9D216521E6A213FF8562D215598D336ABB5474F4, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t9D216521E6A213FF8562D215598D336ABB5474F4, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t9D216521E6A213FF8562D215598D336ABB5474F4, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t9D216521E6A213FF8562D215598D336ABB5474F4_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_t1256A8B00BB71C7F582BF08257BE4F826FF64873* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t9D216521E6A213FF8562D215598D336ABB5474F4_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_t1256A8B00BB71C7F582BF08257BE4F826FF64873* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_t1256A8B00BB71C7F582BF08257BE4F826FF64873** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_t1256A8B00BB71C7F582BF08257BE4F826FF64873* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// Unity.Properties.Property`2<Unity.Entities.CompanionLink,UnityEngine.GameObject>
struct Property_2_t9C350B218BDC64D644B957D1AB5A01F89D95B9D8  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<System.Attribute> Unity.Properties.Property`2::m_Attributes
	List_1_tD9744FC9973F836851CCD7BEBF915691AB28EC10 * ___m_Attributes_0;

public:
	inline static int32_t get_offset_of_m_Attributes_0() { return static_cast<int32_t>(offsetof(Property_2_t9C350B218BDC64D644B957D1AB5A01F89D95B9D8, ___m_Attributes_0)); }
	inline List_1_tD9744FC9973F836851CCD7BEBF915691AB28EC10 * get_m_Attributes_0() const { return ___m_Attributes_0; }
	inline List_1_tD9744FC9973F836851CCD7BEBF915691AB28EC10 ** get_address_of_m_Attributes_0() { return &___m_Attributes_0; }
	inline void set_m_Attributes_0(List_1_tD9744FC9973F836851CCD7BEBF915691AB28EC10 * value)
	{
		___m_Attributes_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Attributes_0), (void*)value);
	}
};


// System.Collections.Generic.Stack`1<UnityEngine.Transform>
struct Stack_1_t947A852F0DF179B04BC160BDA03DAC7B3F07460F  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Stack`1::_array
	TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* ____array_0;
	// System.Int32 System.Collections.Generic.Stack`1::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Generic.Stack`1::_version
	int32_t ____version_2;
	// System.Object System.Collections.Generic.Stack`1::_syncRoot
	RuntimeObject * ____syncRoot_3;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Stack_1_t947A852F0DF179B04BC160BDA03DAC7B3F07460F, ____array_0)); }
	inline TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* get__array_0() const { return ____array_0; }
	inline TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__size_1() { return static_cast<int32_t>(offsetof(Stack_1_t947A852F0DF179B04BC160BDA03DAC7B3F07460F, ____size_1)); }
	inline int32_t get__size_1() const { return ____size_1; }
	inline int32_t* get_address_of__size_1() { return &____size_1; }
	inline void set__size_1(int32_t value)
	{
		____size_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(Stack_1_t947A852F0DF179B04BC160BDA03DAC7B3F07460F, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}

	inline static int32_t get_offset_of__syncRoot_3() { return static_cast<int32_t>(offsetof(Stack_1_t947A852F0DF179B04BC160BDA03DAC7B3F07460F, ____syncRoot_3)); }
	inline RuntimeObject * get__syncRoot_3() const { return ____syncRoot_3; }
	inline RuntimeObject ** get_address_of__syncRoot_3() { return &____syncRoot_3; }
	inline void set__syncRoot_3(RuntimeObject * value)
	{
		____syncRoot_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_3), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// Unity.Entities.ComponentSystemBase
struct ComponentSystemBase_t8008ABC5BDE453061672EA262B5698047849A3BC  : public RuntimeObject
{
public:
	// Unity.Entities.SystemState* Unity.Entities.ComponentSystemBase::m_StatePtr
	SystemState_t36E4EBEDC1A8DE324669E6A495E2CD70B8B12D95 * ___m_StatePtr_0;

public:
	inline static int32_t get_offset_of_m_StatePtr_0() { return static_cast<int32_t>(offsetof(ComponentSystemBase_t8008ABC5BDE453061672EA262B5698047849A3BC, ___m_StatePtr_0)); }
	inline SystemState_t36E4EBEDC1A8DE324669E6A495E2CD70B8B12D95 * get_m_StatePtr_0() const { return ___m_StatePtr_0; }
	inline SystemState_t36E4EBEDC1A8DE324669E6A495E2CD70B8B12D95 ** get_address_of_m_StatePtr_0() { return &___m_StatePtr_0; }
	inline void set_m_StatePtr_0(SystemState_t36E4EBEDC1A8DE324669E6A495E2CD70B8B12D95 * value)
	{
		___m_StatePtr_0 = value;
	}
};


// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.Text.StringBuilder
struct StringBuilder_t  : public RuntimeObject
{
public:
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t * ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;

public:
	inline static int32_t get_offset_of_m_ChunkChars_0() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkChars_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_m_ChunkChars_0() const { return ___m_ChunkChars_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_m_ChunkChars_0() { return &___m_ChunkChars_0; }
	inline void set_m_ChunkChars_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___m_ChunkChars_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChunkChars_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChunkPrevious_1() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkPrevious_1)); }
	inline StringBuilder_t * get_m_ChunkPrevious_1() const { return ___m_ChunkPrevious_1; }
	inline StringBuilder_t ** get_address_of_m_ChunkPrevious_1() { return &___m_ChunkPrevious_1; }
	inline void set_m_ChunkPrevious_1(StringBuilder_t * value)
	{
		___m_ChunkPrevious_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChunkPrevious_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChunkLength_2() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkLength_2)); }
	inline int32_t get_m_ChunkLength_2() const { return ___m_ChunkLength_2; }
	inline int32_t* get_address_of_m_ChunkLength_2() { return &___m_ChunkLength_2; }
	inline void set_m_ChunkLength_2(int32_t value)
	{
		___m_ChunkLength_2 = value;
	}

	inline static int32_t get_offset_of_m_ChunkOffset_3() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkOffset_3)); }
	inline int32_t get_m_ChunkOffset_3() const { return ___m_ChunkOffset_3; }
	inline int32_t* get_address_of_m_ChunkOffset_3() { return &___m_ChunkOffset_3; }
	inline void set_m_ChunkOffset_3(int32_t value)
	{
		___m_ChunkOffset_3 = value;
	}

	inline static int32_t get_offset_of_m_MaxCapacity_4() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_MaxCapacity_4)); }
	inline int32_t get_m_MaxCapacity_4() const { return ___m_MaxCapacity_4; }
	inline int32_t* get_address_of_m_MaxCapacity_4() { return &___m_MaxCapacity_4; }
	inline void set_m_MaxCapacity_4(int32_t value)
	{
		___m_MaxCapacity_4 = value;
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// GameObjectConversion.ConversionLogUtils/<>c
struct U3CU3Ec_t2837DE7A38FEEE254E0CA2388F8A3843A0FCD5D7  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t2837DE7A38FEEE254E0CA2388F8A3843A0FCD5D7_StaticFields
{
public:
	// GameObjectConversion.ConversionLogUtils/<>c GameObjectConversion.ConversionLogUtils/<>c::<>9
	U3CU3Ec_t2837DE7A38FEEE254E0CA2388F8A3843A0FCD5D7 * ___U3CU3E9_0;
	// System.Func`2<GameObjectConversion.LogType,System.ValueTuple`2<GameObjectConversion.LogType,System.String>> GameObjectConversion.ConversionLogUtils/<>c::<>9__0_0
	Func_2_tFE4B20B363C884A7ED294D0081233424ACEB474A * ___U3CU3E9__0_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t2837DE7A38FEEE254E0CA2388F8A3843A0FCD5D7_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t2837DE7A38FEEE254E0CA2388F8A3843A0FCD5D7 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t2837DE7A38FEEE254E0CA2388F8A3843A0FCD5D7 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t2837DE7A38FEEE254E0CA2388F8A3843A0FCD5D7 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__0_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t2837DE7A38FEEE254E0CA2388F8A3843A0FCD5D7_StaticFields, ___U3CU3E9__0_0_1)); }
	inline Func_2_tFE4B20B363C884A7ED294D0081233424ACEB474A * get_U3CU3E9__0_0_1() const { return ___U3CU3E9__0_0_1; }
	inline Func_2_tFE4B20B363C884A7ED294D0081233424ACEB474A ** get_address_of_U3CU3E9__0_0_1() { return &___U3CU3E9__0_0_1; }
	inline void set_U3CU3E9__0_0_1(Func_2_tFE4B20B363C884A7ED294D0081233424ACEB474A * value)
	{
		___U3CU3E9__0_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__0_0_1), (void*)value);
	}
};


// Unity.Entities.Conversion.ConvertGameObjectToEntitySystem/<>c__DisplayClass1_0
struct U3CU3Ec__DisplayClass1_0_t9FBA1A3547AFEEF2D8D2F740195F4B795E56187F  : public RuntimeObject
{
public:
	// Unity.Entities.Conversion.ConvertGameObjectToEntitySystem Unity.Entities.Conversion.ConvertGameObjectToEntitySystem/<>c__DisplayClass1_0::<>4__this
	ConvertGameObjectToEntitySystem_t98D507A5987792091C6805F64C272FFF43E48498 * ___U3CU3E4__this_0;
	// System.Collections.Generic.List`1<Unity.Entities.IConvertGameObjectToEntity> Unity.Entities.Conversion.ConvertGameObjectToEntitySystem/<>c__DisplayClass1_0::convertibles
	List_1_t316A5776D1E7716EA27F8F3084A23ECE9A43C29A * ___convertibles_1;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass1_0_t9FBA1A3547AFEEF2D8D2F740195F4B795E56187F, ___U3CU3E4__this_0)); }
	inline ConvertGameObjectToEntitySystem_t98D507A5987792091C6805F64C272FFF43E48498 * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline ConvertGameObjectToEntitySystem_t98D507A5987792091C6805F64C272FFF43E48498 ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(ConvertGameObjectToEntitySystem_t98D507A5987792091C6805F64C272FFF43E48498 * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_convertibles_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass1_0_t9FBA1A3547AFEEF2D8D2F740195F4B795E56187F, ___convertibles_1)); }
	inline List_1_t316A5776D1E7716EA27F8F3084A23ECE9A43C29A * get_convertibles_1() const { return ___convertibles_1; }
	inline List_1_t316A5776D1E7716EA27F8F3084A23ECE9A43C29A ** get_address_of_convertibles_1() { return &___convertibles_1; }
	inline void set_convertibles_1(List_1_t316A5776D1E7716EA27F8F3084A23ECE9A43C29A * value)
	{
		___convertibles_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___convertibles_1), (void*)value);
	}
};


// Unity.Entities.ConvertToEntitySystem/<>c
struct U3CU3Ec_t8A22BBA68B61DFC9EC097D4580B47F507D718AB5  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t8A22BBA68B61DFC9EC097D4580B47F507D718AB5_StaticFields
{
public:
	// Unity.Entities.ConvertToEntitySystem/<>c Unity.Entities.ConvertToEntitySystem/<>c::<>9
	U3CU3Ec_t8A22BBA68B61DFC9EC097D4580B47F507D718AB5 * ___U3CU3E9_0;
	// System.Predicate`1<Unity.Entities.ConvertToEntity> Unity.Entities.ConvertToEntitySystem/<>c::<>9__14_0
	Predicate_1_t318C861BD2BFCB8E8F668410F7FC94C99159678F * ___U3CU3E9__14_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t8A22BBA68B61DFC9EC097D4580B47F507D718AB5_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t8A22BBA68B61DFC9EC097D4580B47F507D718AB5 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t8A22BBA68B61DFC9EC097D4580B47F507D718AB5 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t8A22BBA68B61DFC9EC097D4580B47F507D718AB5 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__14_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t8A22BBA68B61DFC9EC097D4580B47F507D718AB5_StaticFields, ___U3CU3E9__14_0_1)); }
	inline Predicate_1_t318C861BD2BFCB8E8F668410F7FC94C99159678F * get_U3CU3E9__14_0_1() const { return ___U3CU3E9__14_0_1; }
	inline Predicate_1_t318C861BD2BFCB8E8F668410F7FC94C99159678F ** get_address_of_U3CU3E9__14_0_1() { return &___U3CU3E9__14_0_1; }
	inline void set_U3CU3E9__14_0_1(Predicate_1_t318C861BD2BFCB8E8F668410F7FC94C99159678F * value)
	{
		___U3CU3E9__14_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__14_0_1), (void*)value);
	}
};


// Unity.Entities.Conversion.GameObjectConversionMappingSystem/<>c
struct U3CU3Ec_t43693085741BED5C3AB7F55341F17CBD3273F0AD  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t43693085741BED5C3AB7F55341F17CBD3273F0AD_StaticFields
{
public:
	// Unity.Entities.Conversion.GameObjectConversionMappingSystem/<>c Unity.Entities.Conversion.GameObjectConversionMappingSystem/<>c::<>9
	U3CU3Ec_t43693085741BED5C3AB7F55341F17CBD3273F0AD * ___U3CU3E9_0;
	// System.Func`2<Unity.Entities.ComponentType,System.Boolean> Unity.Entities.Conversion.GameObjectConversionMappingSystem/<>c::<>9__63_3
	Func_2_tE27876FCDC8BF5EB27DCC21BFDE49DB270AC6C13 * ___U3CU3E9__63_3_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t43693085741BED5C3AB7F55341F17CBD3273F0AD_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t43693085741BED5C3AB7F55341F17CBD3273F0AD * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t43693085741BED5C3AB7F55341F17CBD3273F0AD ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t43693085741BED5C3AB7F55341F17CBD3273F0AD * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__63_3_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t43693085741BED5C3AB7F55341F17CBD3273F0AD_StaticFields, ___U3CU3E9__63_3_1)); }
	inline Func_2_tE27876FCDC8BF5EB27DCC21BFDE49DB270AC6C13 * get_U3CU3E9__63_3_1() const { return ___U3CU3E9__63_3_1; }
	inline Func_2_tE27876FCDC8BF5EB27DCC21BFDE49DB270AC6C13 ** get_address_of_U3CU3E9__63_3_1() { return &___U3CU3E9__63_3_1; }
	inline void set_U3CU3E9__63_3_1(Func_2_tE27876FCDC8BF5EB27DCC21BFDE49DB270AC6C13 * value)
	{
		___U3CU3E9__63_3_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__63_3_1), (void*)value);
	}
};


// Unity.Entities.GameObjectConversionUtility/<>c
struct U3CU3Ec_tCC99DC24F6BBD3C1732D5A88EFDDF7A4D51A0D0D  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tCC99DC24F6BBD3C1732D5A88EFDDF7A4D51A0D0D_StaticFields
{
public:
	// Unity.Entities.GameObjectConversionUtility/<>c Unity.Entities.GameObjectConversionUtility/<>c::<>9
	U3CU3Ec_tCC99DC24F6BBD3C1732D5A88EFDDF7A4D51A0D0D * ___U3CU3E9_0;
	// System.Func`2<UnityEngine.GameObject,System.Int32> Unity.Entities.GameObjectConversionUtility/<>c::<>9__16_0
	Func_2_tFA3D86D150CCC78E800EC5AC7D7E87E0E601B2AA * ___U3CU3E9__16_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tCC99DC24F6BBD3C1732D5A88EFDDF7A4D51A0D0D_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tCC99DC24F6BBD3C1732D5A88EFDDF7A4D51A0D0D * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tCC99DC24F6BBD3C1732D5A88EFDDF7A4D51A0D0D ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tCC99DC24F6BBD3C1732D5A88EFDDF7A4D51A0D0D * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__16_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tCC99DC24F6BBD3C1732D5A88EFDDF7A4D51A0D0D_StaticFields, ___U3CU3E9__16_0_1)); }
	inline Func_2_tFA3D86D150CCC78E800EC5AC7D7E87E0E601B2AA * get_U3CU3E9__16_0_1() const { return ___U3CU3E9__16_0_1; }
	inline Func_2_tFA3D86D150CCC78E800EC5AC7D7E87E0E601B2AA ** get_address_of_U3CU3E9__16_0_1() { return &___U3CU3E9__16_0_1; }
	inline void set_U3CU3E9__16_0_1(Func_2_tFA3D86D150CCC78E800EC5AC7D7E87E0E601B2AA * value)
	{
		___U3CU3E9__16_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__16_0_1), (void*)value);
	}
};


// Unity.Entities.Conversion.MultiListArrayData`1<Unity.Entities.Conversion.LogEventData>
struct MultiListArrayData_1_t0727AB2A094DF060683A2FBCC16471BF2B52C728 
{
public:
	// T[] Unity.Entities.Conversion.MultiListArrayData`1::Data
	LogEventDataU5BU5D_t297A076CEB7438F3BBF18FEC1A58490451063CCC* ___Data_0;

public:
	inline static int32_t get_offset_of_Data_0() { return static_cast<int32_t>(offsetof(MultiListArrayData_1_t0727AB2A094DF060683A2FBCC16471BF2B52C728, ___Data_0)); }
	inline LogEventDataU5BU5D_t297A076CEB7438F3BBF18FEC1A58490451063CCC* get_Data_0() const { return ___Data_0; }
	inline LogEventDataU5BU5D_t297A076CEB7438F3BBF18FEC1A58490451063CCC** get_address_of_Data_0() { return &___Data_0; }
	inline void set_Data_0(LogEventDataU5BU5D_t297A076CEB7438F3BBF18FEC1A58490451063CCC* value)
	{
		___Data_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Data_0), (void*)value);
	}
};


// Unity.Entities.Conversion.MultiListArrayData`1<System.Type>
struct MultiListArrayData_1_t6251CC3C723E7724C62818EB1C815BC44248A3AA 
{
public:
	// T[] Unity.Entities.Conversion.MultiListArrayData`1::Data
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___Data_0;

public:
	inline static int32_t get_offset_of_Data_0() { return static_cast<int32_t>(offsetof(MultiListArrayData_1_t6251CC3C723E7724C62818EB1C815BC44248A3AA, ___Data_0)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_Data_0() const { return ___Data_0; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_Data_0() { return &___Data_0; }
	inline void set_Data_0(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___Data_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Data_0), (void*)value);
	}
};


// Unity.Collections.NativeMultiHashMapIterator`1<System.Int32>
struct NativeMultiHashMapIterator_1_tC41C31BDDC7265EE318B3488B3D577BE3731E026 
{
public:
	// TKey Unity.Collections.NativeMultiHashMapIterator`1::key
	int32_t ___key_0;
	// System.Int32 Unity.Collections.NativeMultiHashMapIterator`1::NextEntryIndex
	int32_t ___NextEntryIndex_1;
	// System.Int32 Unity.Collections.NativeMultiHashMapIterator`1::EntryIndex
	int32_t ___EntryIndex_2;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(NativeMultiHashMapIterator_1_tC41C31BDDC7265EE318B3488B3D577BE3731E026, ___key_0)); }
	inline int32_t get_key_0() const { return ___key_0; }
	inline int32_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(int32_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_NextEntryIndex_1() { return static_cast<int32_t>(offsetof(NativeMultiHashMapIterator_1_tC41C31BDDC7265EE318B3488B3D577BE3731E026, ___NextEntryIndex_1)); }
	inline int32_t get_NextEntryIndex_1() const { return ___NextEntryIndex_1; }
	inline int32_t* get_address_of_NextEntryIndex_1() { return &___NextEntryIndex_1; }
	inline void set_NextEntryIndex_1(int32_t value)
	{
		___NextEntryIndex_1 = value;
	}

	inline static int32_t get_offset_of_EntryIndex_2() { return static_cast<int32_t>(offsetof(NativeMultiHashMapIterator_1_tC41C31BDDC7265EE318B3488B3D577BE3731E026, ___EntryIndex_2)); }
	inline int32_t get_EntryIndex_2() const { return ___EntryIndex_2; }
	inline int32_t* get_address_of_EntryIndex_2() { return &___EntryIndex_2; }
	inline void set_EntryIndex_2(int32_t value)
	{
		___EntryIndex_2 = value;
	}
};


// Unity.Entities.World/NoAllocReadOnlyCollection`1<Unity.Entities.ComponentSystemBase>
struct NoAllocReadOnlyCollection_1_t3ECE9AA8150FFEF9B06892853E38309BF4091FB5 
{
public:
	// System.Collections.Generic.List`1<T> Unity.Entities.World/NoAllocReadOnlyCollection`1::m_Source
	List_1_t3F15B202D7C7B7EEB8B86FFA8C5D2156C6F32C78 * ___m_Source_0;

public:
	inline static int32_t get_offset_of_m_Source_0() { return static_cast<int32_t>(offsetof(NoAllocReadOnlyCollection_1_t3ECE9AA8150FFEF9B06892853E38309BF4091FB5, ___m_Source_0)); }
	inline List_1_t3F15B202D7C7B7EEB8B86FFA8C5D2156C6F32C78 * get_m_Source_0() const { return ___m_Source_0; }
	inline List_1_t3F15B202D7C7B7EEB8B86FFA8C5D2156C6F32C78 ** get_address_of_m_Source_0() { return &___m_Source_0; }
	inline void set_m_Source_0(List_1_t3F15B202D7C7B7EEB8B86FFA8C5D2156C6F32C78 * value)
	{
		___m_Source_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Source_0), (void*)value);
	}
};


// Unity.Entities.World/NoAllocReadOnlyCollection`1<Unity.Entities.World>
struct NoAllocReadOnlyCollection_1_t80544BA80B59053667CC4B79E3461635AA6E5EE4 
{
public:
	// System.Collections.Generic.List`1<T> Unity.Entities.World/NoAllocReadOnlyCollection`1::m_Source
	List_1_t84AC7439EE119A84B7D9198C8EB4AC483255C192 * ___m_Source_0;

public:
	inline static int32_t get_offset_of_m_Source_0() { return static_cast<int32_t>(offsetof(NoAllocReadOnlyCollection_1_t80544BA80B59053667CC4B79E3461635AA6E5EE4, ___m_Source_0)); }
	inline List_1_t84AC7439EE119A84B7D9198C8EB4AC483255C192 * get_m_Source_0() const { return ___m_Source_0; }
	inline List_1_t84AC7439EE119A84B7D9198C8EB4AC483255C192 ** get_address_of_m_Source_0() { return &___m_Source_0; }
	inline void set_m_Source_0(List_1_t84AC7439EE119A84B7D9198C8EB4AC483255C192 * value)
	{
		___m_Source_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Source_0), (void*)value);
	}
};


// Unity.Burst.SharedStatic`1<System.UInt64>
struct SharedStatic_1_t3BF4833AD74181586FD1838757D84AD9921C1258 
{
public:
	// System.Void* Unity.Burst.SharedStatic`1::_buffer
	void* ____buffer_0;

public:
	inline static int32_t get_offset_of__buffer_0() { return static_cast<int32_t>(offsetof(SharedStatic_1_t3BF4833AD74181586FD1838757D84AD9921C1258, ____buffer_0)); }
	inline void* get__buffer_0() const { return ____buffer_0; }
	inline void** get_address_of__buffer_0() { return &____buffer_0; }
	inline void set__buffer_0(void* value)
	{
		____buffer_0 = value;
	}
};


// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// Unity.Entities.EntityQuery
struct EntityQuery_tDCA25A292AF939DB4C25632A20819FADAF418109 
{
public:
	// Unity.Entities.EntityQueryImpl* Unity.Entities.EntityQuery::__impl
	EntityQueryImpl_tF4EC3E0E8B8074B8B417E3B175695ED99F01B421 * _____impl_0;
	// System.UInt64 Unity.Entities.EntityQuery::__seqno
	uint64_t _____seqno_1;

public:
	inline static int32_t get_offset_of___impl_0() { return static_cast<int32_t>(offsetof(EntityQuery_tDCA25A292AF939DB4C25632A20819FADAF418109, _____impl_0)); }
	inline EntityQueryImpl_tF4EC3E0E8B8074B8B417E3B175695ED99F01B421 * get___impl_0() const { return _____impl_0; }
	inline EntityQueryImpl_tF4EC3E0E8B8074B8B417E3B175695ED99F01B421 ** get_address_of___impl_0() { return &_____impl_0; }
	inline void set___impl_0(EntityQueryImpl_tF4EC3E0E8B8074B8B417E3B175695ED99F01B421 * value)
	{
		_____impl_0 = value;
	}

	inline static int32_t get_offset_of___seqno_1() { return static_cast<int32_t>(offsetof(EntityQuery_tDCA25A292AF939DB4C25632A20819FADAF418109, _____seqno_1)); }
	inline uint64_t get___seqno_1() const { return _____seqno_1; }
	inline uint64_t* get_address_of___seqno_1() { return &_____seqno_1; }
	inline void set___seqno_1(uint64_t value)
	{
		_____seqno_1 = value;
	}
};

// Native definition for P/Invoke marshalling of Unity.Entities.EntityQuery
struct EntityQuery_tDCA25A292AF939DB4C25632A20819FADAF418109_marshaled_pinvoke
{
	EntityQueryImpl_tF4EC3E0E8B8074B8B417E3B175695ED99F01B421 * _____impl_0;
	uint64_t _____seqno_1;
};
// Native definition for COM marshalling of Unity.Entities.EntityQuery
struct EntityQuery_tDCA25A292AF939DB4C25632A20819FADAF418109_marshaled_com
{
	EntityQueryImpl_tF4EC3E0E8B8074B8B417E3B175695ED99F01B421 * _____impl_0;
	uint64_t _____seqno_1;
};

// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// UnityEngine.SceneManagement.Scene
struct Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE 
{
public:
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE, ___m_Handle_0)); }
	inline int32_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline int32_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(int32_t value)
	{
		___m_Handle_0 = value;
	}
};


// System.UInt16
struct UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD 
{
public:
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD, ___m_value_0)); }
	inline uint16_t get_m_value_0() const { return ___m_value_0; }
	inline uint16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint16_t value)
	{
		___m_value_0 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// Unity.Mathematics.uint4
struct uint4_t646D1C6030F449510629C1CDBC418BC46ABE3635 
{
public:
	// System.UInt32 Unity.Mathematics.uint4::x
	uint32_t ___x_0;
	// System.UInt32 Unity.Mathematics.uint4::y
	uint32_t ___y_1;
	// System.UInt32 Unity.Mathematics.uint4::z
	uint32_t ___z_2;
	// System.UInt32 Unity.Mathematics.uint4::w
	uint32_t ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(uint4_t646D1C6030F449510629C1CDBC418BC46ABE3635, ___x_0)); }
	inline uint32_t get_x_0() const { return ___x_0; }
	inline uint32_t* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(uint32_t value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(uint4_t646D1C6030F449510629C1CDBC418BC46ABE3635, ___y_1)); }
	inline uint32_t get_y_1() const { return ___y_1; }
	inline uint32_t* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(uint32_t value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(uint4_t646D1C6030F449510629C1CDBC418BC46ABE3635, ___z_2)); }
	inline uint32_t get_z_2() const { return ___z_2; }
	inline uint32_t* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(uint32_t value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(uint4_t646D1C6030F449510629C1CDBC418BC46ABE3635, ___w_3)); }
	inline uint32_t get_w_3() const { return ___w_3; }
	inline uint32_t* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(uint32_t value)
	{
		___w_3 = value;
	}
};

struct uint4_t646D1C6030F449510629C1CDBC418BC46ABE3635_StaticFields
{
public:
	// Unity.Mathematics.uint4 Unity.Mathematics.uint4::zero
	uint4_t646D1C6030F449510629C1CDBC418BC46ABE3635  ___zero_4;

public:
	inline static int32_t get_offset_of_zero_4() { return static_cast<int32_t>(offsetof(uint4_t646D1C6030F449510629C1CDBC418BC46ABE3635_StaticFields, ___zero_4)); }
	inline uint4_t646D1C6030F449510629C1CDBC418BC46ABE3635  get_zero_4() const { return ___zero_4; }
	inline uint4_t646D1C6030F449510629C1CDBC418BC46ABE3635 * get_address_of_zero_4() { return &___zero_4; }
	inline void set_zero_4(uint4_t646D1C6030F449510629C1CDBC418BC46ABE3635  value)
	{
		___zero_4 = value;
	}
};


// Unity.Collections.AllocatorManager/AllocatorHandle
struct AllocatorHandle_tAFA82A7B19AC002D983535C10C63DE0AD2EE3F1A 
{
public:
	// System.Int32 Unity.Collections.AllocatorManager/AllocatorHandle::Value
	int32_t ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(AllocatorHandle_tAFA82A7B19AC002D983535C10C63DE0AD2EE3F1A, ___Value_0)); }
	inline int32_t get_Value_0() const { return ___Value_0; }
	inline int32_t* get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(int32_t value)
	{
		___Value_0 = value;
	}
};


// GameObjectConversion.ConversionLogUtils/<>c__DisplayClass0_0
struct U3CU3Ec__DisplayClass0_0_t41624A5E3E9C403B934AB4EE05AF471AF6F77CF2 
{
public:
	// System.ValueTuple`2<GameObjectConversion.LogType,System.String>[] GameObjectConversion.ConversionLogUtils/<>c__DisplayClass0_0::allLogTypes
	ValueTuple_2U5BU5D_t6FC2579E1768D70AD4F2224939E5F390B3BD4608* ___allLogTypes_0;

public:
	inline static int32_t get_offset_of_allLogTypes_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass0_0_t41624A5E3E9C403B934AB4EE05AF471AF6F77CF2, ___allLogTypes_0)); }
	inline ValueTuple_2U5BU5D_t6FC2579E1768D70AD4F2224939E5F390B3BD4608* get_allLogTypes_0() const { return ___allLogTypes_0; }
	inline ValueTuple_2U5BU5D_t6FC2579E1768D70AD4F2224939E5F390B3BD4608** get_address_of_allLogTypes_0() { return &___allLogTypes_0; }
	inline void set_allLogTypes_0(ValueTuple_2U5BU5D_t6FC2579E1768D70AD4F2224939E5F390B3BD4608* value)
	{
		___allLogTypes_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___allLogTypes_0), (void*)value);
	}
};


// Unity.Entities.Conversion.GameObjectConversionMappingSystem/CachedCollections
struct CachedCollections_tB24E1D8BBB0133DF4FECA0A3E8D3E491B8DD4BD4 
{
public:
	// System.Collections.Generic.List`1<UnityEngine.GameObject> Unity.Entities.Conversion.GameObjectConversionMappingSystem/CachedCollections::OldGameObjects
	List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * ___OldGameObjects_0;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> Unity.Entities.Conversion.GameObjectConversionMappingSystem/CachedCollections::NewGameObjects
	List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * ___NewGameObjects_1;
	// System.Collections.Generic.List`1<UnityEngine.Object> Unity.Entities.Conversion.GameObjectConversionMappingSystem/CachedCollections::TmpObjects
	List_1_t9D216521E6A213FF8562D215598D336ABB5474F4 * ___TmpObjects_2;
	// System.Collections.Generic.Stack`1<UnityEngine.Transform> Unity.Entities.Conversion.GameObjectConversionMappingSystem/CachedCollections::Transforms
	Stack_1_t947A852F0DF179B04BC160BDA03DAC7B3F07460F * ___Transforms_3;
	// System.Collections.Generic.HashSet`1<UnityEngine.GameObject> Unity.Entities.Conversion.GameObjectConversionMappingSystem/CachedCollections::GameObjectsWithEntities
	HashSet_1_t77825C5E92A478ADAC0C07A97589EB9CBFF229E3 * ___GameObjectsWithEntities_4;

public:
	inline static int32_t get_offset_of_OldGameObjects_0() { return static_cast<int32_t>(offsetof(CachedCollections_tB24E1D8BBB0133DF4FECA0A3E8D3E491B8DD4BD4, ___OldGameObjects_0)); }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * get_OldGameObjects_0() const { return ___OldGameObjects_0; }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 ** get_address_of_OldGameObjects_0() { return &___OldGameObjects_0; }
	inline void set_OldGameObjects_0(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * value)
	{
		___OldGameObjects_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OldGameObjects_0), (void*)value);
	}

	inline static int32_t get_offset_of_NewGameObjects_1() { return static_cast<int32_t>(offsetof(CachedCollections_tB24E1D8BBB0133DF4FECA0A3E8D3E491B8DD4BD4, ___NewGameObjects_1)); }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * get_NewGameObjects_1() const { return ___NewGameObjects_1; }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 ** get_address_of_NewGameObjects_1() { return &___NewGameObjects_1; }
	inline void set_NewGameObjects_1(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * value)
	{
		___NewGameObjects_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NewGameObjects_1), (void*)value);
	}

	inline static int32_t get_offset_of_TmpObjects_2() { return static_cast<int32_t>(offsetof(CachedCollections_tB24E1D8BBB0133DF4FECA0A3E8D3E491B8DD4BD4, ___TmpObjects_2)); }
	inline List_1_t9D216521E6A213FF8562D215598D336ABB5474F4 * get_TmpObjects_2() const { return ___TmpObjects_2; }
	inline List_1_t9D216521E6A213FF8562D215598D336ABB5474F4 ** get_address_of_TmpObjects_2() { return &___TmpObjects_2; }
	inline void set_TmpObjects_2(List_1_t9D216521E6A213FF8562D215598D336ABB5474F4 * value)
	{
		___TmpObjects_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TmpObjects_2), (void*)value);
	}

	inline static int32_t get_offset_of_Transforms_3() { return static_cast<int32_t>(offsetof(CachedCollections_tB24E1D8BBB0133DF4FECA0A3E8D3E491B8DD4BD4, ___Transforms_3)); }
	inline Stack_1_t947A852F0DF179B04BC160BDA03DAC7B3F07460F * get_Transforms_3() const { return ___Transforms_3; }
	inline Stack_1_t947A852F0DF179B04BC160BDA03DAC7B3F07460F ** get_address_of_Transforms_3() { return &___Transforms_3; }
	inline void set_Transforms_3(Stack_1_t947A852F0DF179B04BC160BDA03DAC7B3F07460F * value)
	{
		___Transforms_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Transforms_3), (void*)value);
	}

	inline static int32_t get_offset_of_GameObjectsWithEntities_4() { return static_cast<int32_t>(offsetof(CachedCollections_tB24E1D8BBB0133DF4FECA0A3E8D3E491B8DD4BD4, ___GameObjectsWithEntities_4)); }
	inline HashSet_1_t77825C5E92A478ADAC0C07A97589EB9CBFF229E3 * get_GameObjectsWithEntities_4() const { return ___GameObjectsWithEntities_4; }
	inline HashSet_1_t77825C5E92A478ADAC0C07A97589EB9CBFF229E3 ** get_address_of_GameObjectsWithEntities_4() { return &___GameObjectsWithEntities_4; }
	inline void set_GameObjectsWithEntities_4(HashSet_1_t77825C5E92A478ADAC0C07A97589EB9CBFF229E3 * value)
	{
		___GameObjectsWithEntities_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GameObjectsWithEntities_4), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Unity.Entities.Conversion.GameObjectConversionMappingSystem/CachedCollections
struct CachedCollections_tB24E1D8BBB0133DF4FECA0A3E8D3E491B8DD4BD4_marshaled_pinvoke
{
	List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * ___OldGameObjects_0;
	List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * ___NewGameObjects_1;
	List_1_t9D216521E6A213FF8562D215598D336ABB5474F4 * ___TmpObjects_2;
	Stack_1_t947A852F0DF179B04BC160BDA03DAC7B3F07460F * ___Transforms_3;
	HashSet_1_t77825C5E92A478ADAC0C07A97589EB9CBFF229E3 * ___GameObjectsWithEntities_4;
};
// Native definition for COM marshalling of Unity.Entities.Conversion.GameObjectConversionMappingSystem/CachedCollections
struct CachedCollections_tB24E1D8BBB0133DF4FECA0A3E8D3E491B8DD4BD4_marshaled_com
{
	List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * ___OldGameObjects_0;
	List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * ___NewGameObjects_1;
	List_1_t9D216521E6A213FF8562D215598D336ABB5474F4 * ___TmpObjects_2;
	Stack_1_t947A852F0DF179B04BC160BDA03DAC7B3F07460F * ___Transforms_3;
	HashSet_1_t77825C5E92A478ADAC0C07A97589EB9CBFF229E3 * ___GameObjectsWithEntities_4;
};

// Unity.Entities.GameObjectConversionUtility/Conversion
struct Conversion_t7DFF4B71AB43ADC70ECB67EC0800F6D23CBF01EF 
{
public:
	// Unity.Entities.Conversion.GameObjectConversionMappingSystem Unity.Entities.GameObjectConversionUtility/Conversion::<MappingSystem>k__BackingField
	GameObjectConversionMappingSystem_tD834531091319F873FDC1E5EDB439CE9654312DD * ___U3CMappingSystemU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CMappingSystemU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Conversion_t7DFF4B71AB43ADC70ECB67EC0800F6D23CBF01EF, ___U3CMappingSystemU3Ek__BackingField_0)); }
	inline GameObjectConversionMappingSystem_tD834531091319F873FDC1E5EDB439CE9654312DD * get_U3CMappingSystemU3Ek__BackingField_0() const { return ___U3CMappingSystemU3Ek__BackingField_0; }
	inline GameObjectConversionMappingSystem_tD834531091319F873FDC1E5EDB439CE9654312DD ** get_address_of_U3CMappingSystemU3Ek__BackingField_0() { return &___U3CMappingSystemU3Ek__BackingField_0; }
	inline void set_U3CMappingSystemU3Ek__BackingField_0(GameObjectConversionMappingSystem_tD834531091319F873FDC1E5EDB439CE9654312DD * value)
	{
		___U3CMappingSystemU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CMappingSystemU3Ek__BackingField_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Unity.Entities.GameObjectConversionUtility/Conversion
struct Conversion_t7DFF4B71AB43ADC70ECB67EC0800F6D23CBF01EF_marshaled_pinvoke
{
	GameObjectConversionMappingSystem_tD834531091319F873FDC1E5EDB439CE9654312DD * ___U3CMappingSystemU3Ek__BackingField_0;
};
// Native definition for COM marshalling of Unity.Entities.GameObjectConversionUtility/Conversion
struct Conversion_t7DFF4B71AB43ADC70ECB67EC0800F6D23CBF01EF_marshaled_com
{
	GameObjectConversionMappingSystem_tD834531091319F873FDC1E5EDB439CE9654312DD * ___U3CMappingSystemU3Ek__BackingField_0;
};

// Unity.Entities.GameObjectConversionUtility/DeclaredReferenceObjectsTag
struct DeclaredReferenceObjectsTag_t7427E75555821C297D6C66E60BEC67C2C3DA2716 
{
public:
	union
	{
		struct
		{
		};
		uint8_t DeclaredReferenceObjectsTag_t7427E75555821C297D6C66E60BEC67C2C3DA2716__padding[1];
	};

public:
};


// Unity.Entities.IncrementalConversionChanges/ParentChange
struct ParentChange_t7E009AD8AC121B7AF5FFB7415DA76E090E6557FA 
{
public:
	// System.Int32 Unity.Entities.IncrementalConversionChanges/ParentChange::InstanceId
	int32_t ___InstanceId_0;
	// System.Int32 Unity.Entities.IncrementalConversionChanges/ParentChange::PreviousParentInstanceId
	int32_t ___PreviousParentInstanceId_1;
	// System.Int32 Unity.Entities.IncrementalConversionChanges/ParentChange::NewParentInstanceId
	int32_t ___NewParentInstanceId_2;

public:
	inline static int32_t get_offset_of_InstanceId_0() { return static_cast<int32_t>(offsetof(ParentChange_t7E009AD8AC121B7AF5FFB7415DA76E090E6557FA, ___InstanceId_0)); }
	inline int32_t get_InstanceId_0() const { return ___InstanceId_0; }
	inline int32_t* get_address_of_InstanceId_0() { return &___InstanceId_0; }
	inline void set_InstanceId_0(int32_t value)
	{
		___InstanceId_0 = value;
	}

	inline static int32_t get_offset_of_PreviousParentInstanceId_1() { return static_cast<int32_t>(offsetof(ParentChange_t7E009AD8AC121B7AF5FFB7415DA76E090E6557FA, ___PreviousParentInstanceId_1)); }
	inline int32_t get_PreviousParentInstanceId_1() const { return ___PreviousParentInstanceId_1; }
	inline int32_t* get_address_of_PreviousParentInstanceId_1() { return &___PreviousParentInstanceId_1; }
	inline void set_PreviousParentInstanceId_1(int32_t value)
	{
		___PreviousParentInstanceId_1 = value;
	}

	inline static int32_t get_offset_of_NewParentInstanceId_2() { return static_cast<int32_t>(offsetof(ParentChange_t7E009AD8AC121B7AF5FFB7415DA76E090E6557FA, ___NewParentInstanceId_2)); }
	inline int32_t get_NewParentInstanceId_2() const { return ___NewParentInstanceId_2; }
	inline int32_t* get_address_of_NewParentInstanceId_2() { return &___NewParentInstanceId_2; }
	inline void set_NewParentInstanceId_2(int32_t value)
	{
		___NewParentInstanceId_2 = value;
	}
};


// Unity.Properties.Generated.Unity_Entities_CompanionLink_PropertyBag/Companion_Property
struct Companion_Property_tBD5185C195780B95CB3CFBF31BEBEF89A2C303CD  : public Property_2_t9C350B218BDC64D644B957D1AB5A01F89D95B9D8
{
public:

public:
};


// Unity.Burst.FunctionPointer`1<System.Object>
struct FunctionPointer_1_t34D59AD2EA448B624FAA01B7CC28902A058C40A9 
{
public:
	// System.IntPtr Unity.Burst.FunctionPointer`1::_ptr
	intptr_t ____ptr_0;

public:
	inline static int32_t get_offset_of__ptr_0() { return static_cast<int32_t>(offsetof(FunctionPointer_1_t34D59AD2EA448B624FAA01B7CC28902A058C40A9, ____ptr_0)); }
	inline intptr_t get__ptr_0() const { return ____ptr_0; }
	inline intptr_t* get_address_of__ptr_0() { return &____ptr_0; }
	inline void set__ptr_0(intptr_t value)
	{
		____ptr_0 = value;
	}
};


// Unity.Burst.FunctionPointer`1<Unity.Entities.Conversion.IncrementalConversionContext/RemoveFromHierarchy/Exec>
struct FunctionPointer_1_tD12692C63FF46B37BE3A4C8FFFB6D3951E5E56DD 
{
public:
	// System.IntPtr Unity.Burst.FunctionPointer`1::_ptr
	intptr_t ____ptr_0;

public:
	inline static int32_t get_offset_of__ptr_0() { return static_cast<int32_t>(offsetof(FunctionPointer_1_tD12692C63FF46B37BE3A4C8FFFB6D3951E5E56DD, ____ptr_0)); }
	inline intptr_t get__ptr_0() const { return ____ptr_0; }
	inline intptr_t* get_address_of__ptr_0() { return &____ptr_0; }
	inline void set__ptr_0(intptr_t value)
	{
		____ptr_0 = value;
	}
};


// Unity.Collections.LowLevel.Unsafe.UnsafeList`1<System.Int32>
struct UnsafeList_1_t0160F425C28D7D8E9DA796AD7C293EE00D425DF9 
{
public:
	// T* Unity.Collections.LowLevel.Unsafe.UnsafeList`1::Ptr
	int32_t* ___Ptr_0;
	// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeList`1::length
	int32_t ___length_1;
	// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeList`1::capacity
	int32_t ___capacity_2;
	// Unity.Collections.AllocatorManager/AllocatorHandle Unity.Collections.LowLevel.Unsafe.UnsafeList`1::Allocator
	AllocatorHandle_tAFA82A7B19AC002D983535C10C63DE0AD2EE3F1A  ___Allocator_3;

public:
	inline static int32_t get_offset_of_Ptr_0() { return static_cast<int32_t>(offsetof(UnsafeList_1_t0160F425C28D7D8E9DA796AD7C293EE00D425DF9, ___Ptr_0)); }
	inline int32_t* get_Ptr_0() const { return ___Ptr_0; }
	inline int32_t** get_address_of_Ptr_0() { return &___Ptr_0; }
	inline void set_Ptr_0(int32_t* value)
	{
		___Ptr_0 = value;
	}

	inline static int32_t get_offset_of_length_1() { return static_cast<int32_t>(offsetof(UnsafeList_1_t0160F425C28D7D8E9DA796AD7C293EE00D425DF9, ___length_1)); }
	inline int32_t get_length_1() const { return ___length_1; }
	inline int32_t* get_address_of_length_1() { return &___length_1; }
	inline void set_length_1(int32_t value)
	{
		___length_1 = value;
	}

	inline static int32_t get_offset_of_capacity_2() { return static_cast<int32_t>(offsetof(UnsafeList_1_t0160F425C28D7D8E9DA796AD7C293EE00D425DF9, ___capacity_2)); }
	inline int32_t get_capacity_2() const { return ___capacity_2; }
	inline int32_t* get_address_of_capacity_2() { return &___capacity_2; }
	inline void set_capacity_2(int32_t value)
	{
		___capacity_2 = value;
	}

	inline static int32_t get_offset_of_Allocator_3() { return static_cast<int32_t>(offsetof(UnsafeList_1_t0160F425C28D7D8E9DA796AD7C293EE00D425DF9, ___Allocator_3)); }
	inline AllocatorHandle_tAFA82A7B19AC002D983535C10C63DE0AD2EE3F1A  get_Allocator_3() const { return ___Allocator_3; }
	inline AllocatorHandle_tAFA82A7B19AC002D983535C10C63DE0AD2EE3F1A * get_address_of_Allocator_3() { return &___Allocator_3; }
	inline void set_Allocator_3(AllocatorHandle_tAFA82A7B19AC002D983535C10C63DE0AD2EE3F1A  value)
	{
		___Allocator_3 = value;
	}
};


// Unity.Collections.Allocator
struct Allocator_t9888223DEF4F46F3419ECFCCD0753599BEE52A05 
{
public:
	// System.Int32 Unity.Collections.Allocator::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Allocator_t9888223DEF4F46F3419ECFCCD0753599BEE52A05, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Reflection.BindingFlags
struct BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.Entities.Conversion.ConversionState
struct ConversionState_t6DC25C75F41E79A2F3427FBC953CE5550E6435D7 
{
public:
	// System.Int32 Unity.Entities.Conversion.ConversionState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ConversionState_t6DC25C75F41E79A2F3427FBC953CE5550E6435D7, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Delegate
struct Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// Unity.Entities.Hash128
struct Hash128_t8214C0670F24DF267392561913434E82117B6131 
{
public:
	// Unity.Mathematics.uint4 Unity.Entities.Hash128::Value
	uint4_t646D1C6030F449510629C1CDBC418BC46ABE3635  ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(Hash128_t8214C0670F24DF267392561913434E82117B6131, ___Value_0)); }
	inline uint4_t646D1C6030F449510629C1CDBC418BC46ABE3635  get_Value_0() const { return ___Value_0; }
	inline uint4_t646D1C6030F449510629C1CDBC418BC46ABE3635 * get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(uint4_t646D1C6030F449510629C1CDBC418BC46ABE3635  value)
	{
		___Value_0 = value;
	}
};

struct Hash128_t8214C0670F24DF267392561913434E82117B6131_StaticFields
{
public:
	// System.Char[] Unity.Entities.Hash128::k_HexToLiteral
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___k_HexToLiteral_1;
	// System.SByte[] Unity.Entities.Hash128::k_LiteralToHex
	SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7* ___k_LiteralToHex_2;

public:
	inline static int32_t get_offset_of_k_HexToLiteral_1() { return static_cast<int32_t>(offsetof(Hash128_t8214C0670F24DF267392561913434E82117B6131_StaticFields, ___k_HexToLiteral_1)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_k_HexToLiteral_1() const { return ___k_HexToLiteral_1; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_k_HexToLiteral_1() { return &___k_HexToLiteral_1; }
	inline void set_k_HexToLiteral_1(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___k_HexToLiteral_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___k_HexToLiteral_1), (void*)value);
	}

	inline static int32_t get_offset_of_k_LiteralToHex_2() { return static_cast<int32_t>(offsetof(Hash128_t8214C0670F24DF267392561913434E82117B6131_StaticFields, ___k_LiteralToHex_2)); }
	inline SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7* get_k_LiteralToHex_2() const { return ___k_LiteralToHex_2; }
	inline SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7** get_address_of_k_LiteralToHex_2() { return &___k_LiteralToHex_2; }
	inline void set_k_LiteralToHex_2(SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7* value)
	{
		___k_LiteralToHex_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___k_LiteralToHex_2), (void*)value);
	}
};


// UnityEngine.HideFlags
struct HideFlags_tDC64149E37544FF83B2B4222D3E9DC8188766A12 
{
public:
	// System.Int32 UnityEngine.HideFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(HideFlags_tDC64149E37544FF83B2B4222D3E9DC8188766A12, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Int32Enum
struct Int32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C 
{
public:
	// System.Int32 System.Int32Enum::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Int32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// GameObjectConversion.LogType
struct LogType_tD38249D9C1B645969AE6009D7DCEA678B72A725B 
{
public:
	// System.Int32 GameObjectConversion.LogType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LogType_tD38249D9C1B645969AE6009D7DCEA678B72A725B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.LogType
struct LogType_tF490DBF8368BD4EBA703B2824CB76A853820F773 
{
public:
	// System.Int32 UnityEngine.LogType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LogType_tF490DBF8368BD4EBA703B2824CB76A853820F773, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.Profiling.LowLevel.MarkerFlags
struct MarkerFlags_t4A8B5185BAD24803CE9A57187867CB93451AA9E8 
{
public:
	// System.UInt16 Unity.Profiling.LowLevel.MarkerFlags::value__
	uint16_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MarkerFlags_t4A8B5185BAD24803CE9A57187867CB93451AA9E8, ___value___2)); }
	inline uint16_t get_value___2() const { return ___value___2; }
	inline uint16_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint16_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 
{
public:
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};


// System.RuntimeTypeHandle
struct RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// UnityEngine.Jobs.TransformAccessArray
struct TransformAccessArray_t676ED880D1A6275E04515FACDA438C07E11A2A6E 
{
public:
	// System.IntPtr UnityEngine.Jobs.TransformAccessArray::m_TransformArray
	intptr_t ___m_TransformArray_0;

public:
	inline static int32_t get_offset_of_m_TransformArray_0() { return static_cast<int32_t>(offsetof(TransformAccessArray_t676ED880D1A6275E04515FACDA438C07E11A2A6E, ___m_TransformArray_0)); }
	inline intptr_t get_m_TransformArray_0() const { return ___m_TransformArray_0; }
	inline intptr_t* get_address_of_m_TransformArray_0() { return &___m_TransformArray_0; }
	inline void set_m_TransformArray_0(intptr_t value)
	{
		___m_TransformArray_0 = value;
	}
};


// Unity.Entities.ComponentType/AccessMode
struct AccessMode_tC18A32540E98A6711B943BEE8E79B672A111E30F 
{
public:
	// System.Int32 Unity.Entities.ComponentType/AccessMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AccessMode_tC18A32540E98A6711B943BEE8E79B672A111E30F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.Entities.ConvertToEntity/Mode
struct Mode_t7B0F62ADB28A0BAD534026B8285387F84B011074 
{
public:
	// System.Int32 Unity.Entities.ConvertToEntity/Mode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Mode_t7B0F62ADB28A0BAD534026B8285387F84B011074, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.Entities.GameObjectConversionUtility/ConversionFlags
struct ConversionFlags_t8B8094ED3F181C2C7FF53F0A881901F0BB5280E1 
{
public:
	// System.UInt32 Unity.Entities.GameObjectConversionUtility/ConversionFlags::value__
	uint32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ConversionFlags_t8B8094ED3F181C2C7FF53F0A881901F0BB5280E1, ___value___2)); }
	inline uint32_t get_value___2() const { return ___value___2; }
	inline uint32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint32_t value)
	{
		___value___2 = value;
	}
};


// Unity.Collections.NativeArray`1<Unity.Entities.Entity>
struct NativeArray_1_t587B0E555A435D1A1EACD16A8F3C3EBCF3497F5E 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t587B0E555A435D1A1EACD16A8F3C3EBCF3497F5E, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t587B0E555A435D1A1EACD16A8F3C3EBCF3497F5E, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t587B0E555A435D1A1EACD16A8F3C3EBCF3497F5E, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<System.Int32>
struct NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeList`1<System.Int32>
struct NativeList_1_t37924D67F0E4D83DE506A261B7A05AE619630C80 
{
public:
	// Unity.Collections.LowLevel.Unsafe.UnsafeList* Unity.Collections.NativeList`1::m_ListData
	UnsafeList_t45363E05DB545743D4FBBA9793AA68E6A32634AA * ___m_ListData_0;
	// Unity.Collections.Allocator Unity.Collections.NativeList`1::m_DeprecatedAllocator
	int32_t ___m_DeprecatedAllocator_1;

public:
	inline static int32_t get_offset_of_m_ListData_0() { return static_cast<int32_t>(offsetof(NativeList_1_t37924D67F0E4D83DE506A261B7A05AE619630C80, ___m_ListData_0)); }
	inline UnsafeList_t45363E05DB545743D4FBBA9793AA68E6A32634AA * get_m_ListData_0() const { return ___m_ListData_0; }
	inline UnsafeList_t45363E05DB545743D4FBBA9793AA68E6A32634AA ** get_address_of_m_ListData_0() { return &___m_ListData_0; }
	inline void set_m_ListData_0(UnsafeList_t45363E05DB545743D4FBBA9793AA68E6A32634AA * value)
	{
		___m_ListData_0 = value;
	}

	inline static int32_t get_offset_of_m_DeprecatedAllocator_1() { return static_cast<int32_t>(offsetof(NativeList_1_t37924D67F0E4D83DE506A261B7A05AE619630C80, ___m_DeprecatedAllocator_1)); }
	inline int32_t get_m_DeprecatedAllocator_1() const { return ___m_DeprecatedAllocator_1; }
	inline int32_t* get_address_of_m_DeprecatedAllocator_1() { return &___m_DeprecatedAllocator_1; }
	inline void set_m_DeprecatedAllocator_1(int32_t value)
	{
		___m_DeprecatedAllocator_1 = value;
	}
};


// Unity.Collections.NativeList`1<Unity.Entities.IncrementalConversionChanges/ParentChange>
struct NativeList_1_tC1B2ACAF93B58294FE63019BB607DF267B7D2C52 
{
public:
	// Unity.Collections.LowLevel.Unsafe.UnsafeList* Unity.Collections.NativeList`1::m_ListData
	UnsafeList_t45363E05DB545743D4FBBA9793AA68E6A32634AA * ___m_ListData_0;
	// Unity.Collections.Allocator Unity.Collections.NativeList`1::m_DeprecatedAllocator
	int32_t ___m_DeprecatedAllocator_1;

public:
	inline static int32_t get_offset_of_m_ListData_0() { return static_cast<int32_t>(offsetof(NativeList_1_tC1B2ACAF93B58294FE63019BB607DF267B7D2C52, ___m_ListData_0)); }
	inline UnsafeList_t45363E05DB545743D4FBBA9793AA68E6A32634AA * get_m_ListData_0() const { return ___m_ListData_0; }
	inline UnsafeList_t45363E05DB545743D4FBBA9793AA68E6A32634AA ** get_address_of_m_ListData_0() { return &___m_ListData_0; }
	inline void set_m_ListData_0(UnsafeList_t45363E05DB545743D4FBBA9793AA68E6A32634AA * value)
	{
		___m_ListData_0 = value;
	}

	inline static int32_t get_offset_of_m_DeprecatedAllocator_1() { return static_cast<int32_t>(offsetof(NativeList_1_tC1B2ACAF93B58294FE63019BB607DF267B7D2C52, ___m_DeprecatedAllocator_1)); }
	inline int32_t get_m_DeprecatedAllocator_1() const { return ___m_DeprecatedAllocator_1; }
	inline int32_t* get_address_of_m_DeprecatedAllocator_1() { return &___m_DeprecatedAllocator_1; }
	inline void set_m_DeprecatedAllocator_1(int32_t value)
	{
		___m_DeprecatedAllocator_1 = value;
	}
};


// Unity.Collections.LowLevel.Unsafe.UnsafeHashMap`2<System.Int32,System.Boolean>
struct UnsafeHashMap_2_t0C220140F7AC7AD9015BDC26CCB820C1939548B0 
{
public:
	// Unity.Collections.LowLevel.Unsafe.UnsafeHashMapData* Unity.Collections.LowLevel.Unsafe.UnsafeHashMap`2::m_Buffer
	UnsafeHashMapData_tBE4CCB191438EEFAF585DE1AD96D342825E64C82 * ___m_Buffer_0;
	// Unity.Collections.Allocator Unity.Collections.LowLevel.Unsafe.UnsafeHashMap`2::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_1;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(UnsafeHashMap_2_t0C220140F7AC7AD9015BDC26CCB820C1939548B0, ___m_Buffer_0)); }
	inline UnsafeHashMapData_tBE4CCB191438EEFAF585DE1AD96D342825E64C82 * get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline UnsafeHashMapData_tBE4CCB191438EEFAF585DE1AD96D342825E64C82 ** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(UnsafeHashMapData_tBE4CCB191438EEFAF585DE1AD96D342825E64C82 * value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_1() { return static_cast<int32_t>(offsetof(UnsafeHashMap_2_t0C220140F7AC7AD9015BDC26CCB820C1939548B0, ___m_AllocatorLabel_1)); }
	inline int32_t get_m_AllocatorLabel_1() const { return ___m_AllocatorLabel_1; }
	inline int32_t* get_address_of_m_AllocatorLabel_1() { return &___m_AllocatorLabel_1; }
	inline void set_m_AllocatorLabel_1(int32_t value)
	{
		___m_AllocatorLabel_1 = value;
	}
};


// Unity.Collections.LowLevel.Unsafe.UnsafeHashMap`2<System.Int32,Unity.Entities.DependencyTracker>
struct UnsafeHashMap_2_t8608EB55E326B753BD7C70DC3D1217F0634ED116 
{
public:
	// Unity.Collections.LowLevel.Unsafe.UnsafeHashMapData* Unity.Collections.LowLevel.Unsafe.UnsafeHashMap`2::m_Buffer
	UnsafeHashMapData_tBE4CCB191438EEFAF585DE1AD96D342825E64C82 * ___m_Buffer_0;
	// Unity.Collections.Allocator Unity.Collections.LowLevel.Unsafe.UnsafeHashMap`2::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_1;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(UnsafeHashMap_2_t8608EB55E326B753BD7C70DC3D1217F0634ED116, ___m_Buffer_0)); }
	inline UnsafeHashMapData_tBE4CCB191438EEFAF585DE1AD96D342825E64C82 * get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline UnsafeHashMapData_tBE4CCB191438EEFAF585DE1AD96D342825E64C82 ** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(UnsafeHashMapData_tBE4CCB191438EEFAF585DE1AD96D342825E64C82 * value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_1() { return static_cast<int32_t>(offsetof(UnsafeHashMap_2_t8608EB55E326B753BD7C70DC3D1217F0634ED116, ___m_AllocatorLabel_1)); }
	inline int32_t get_m_AllocatorLabel_1() const { return ___m_AllocatorLabel_1; }
	inline int32_t* get_address_of_m_AllocatorLabel_1() { return &___m_AllocatorLabel_1; }
	inline void set_m_AllocatorLabel_1(int32_t value)
	{
		___m_AllocatorLabel_1 = value;
	}
};


// Unity.Collections.LowLevel.Unsafe.UnsafeHashMap`2<System.Int32,System.Int32>
struct UnsafeHashMap_2_tEDA27A37C890E43DCEF57D0ED98675E874D3FC33 
{
public:
	// Unity.Collections.LowLevel.Unsafe.UnsafeHashMapData* Unity.Collections.LowLevel.Unsafe.UnsafeHashMap`2::m_Buffer
	UnsafeHashMapData_tBE4CCB191438EEFAF585DE1AD96D342825E64C82 * ___m_Buffer_0;
	// Unity.Collections.Allocator Unity.Collections.LowLevel.Unsafe.UnsafeHashMap`2::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_1;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(UnsafeHashMap_2_tEDA27A37C890E43DCEF57D0ED98675E874D3FC33, ___m_Buffer_0)); }
	inline UnsafeHashMapData_tBE4CCB191438EEFAF585DE1AD96D342825E64C82 * get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline UnsafeHashMapData_tBE4CCB191438EEFAF585DE1AD96D342825E64C82 ** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(UnsafeHashMapData_tBE4CCB191438EEFAF585DE1AD96D342825E64C82 * value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_1() { return static_cast<int32_t>(offsetof(UnsafeHashMap_2_tEDA27A37C890E43DCEF57D0ED98675E874D3FC33, ___m_AllocatorLabel_1)); }
	inline int32_t get_m_AllocatorLabel_1() const { return ___m_AllocatorLabel_1; }
	inline int32_t* get_address_of_m_AllocatorLabel_1() { return &___m_AllocatorLabel_1; }
	inline void set_m_AllocatorLabel_1(int32_t value)
	{
		___m_AllocatorLabel_1 = value;
	}
};


// Unity.Collections.LowLevel.Unsafe.UnsafeMultiHashMap`2<System.Int32,System.Int32>
struct UnsafeMultiHashMap_2_tA121FA0D1413562195B1AE4895E538F446393F19 
{
public:
	// Unity.Collections.LowLevel.Unsafe.UnsafeHashMapData* Unity.Collections.LowLevel.Unsafe.UnsafeMultiHashMap`2::m_Buffer
	UnsafeHashMapData_tBE4CCB191438EEFAF585DE1AD96D342825E64C82 * ___m_Buffer_0;
	// Unity.Collections.Allocator Unity.Collections.LowLevel.Unsafe.UnsafeMultiHashMap`2::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_1;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(UnsafeMultiHashMap_2_tA121FA0D1413562195B1AE4895E538F446393F19, ___m_Buffer_0)); }
	inline UnsafeHashMapData_tBE4CCB191438EEFAF585DE1AD96D342825E64C82 * get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline UnsafeHashMapData_tBE4CCB191438EEFAF585DE1AD96D342825E64C82 ** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(UnsafeHashMapData_tBE4CCB191438EEFAF585DE1AD96D342825E64C82 * value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_1() { return static_cast<int32_t>(offsetof(UnsafeMultiHashMap_2_tA121FA0D1413562195B1AE4895E538F446393F19, ___m_AllocatorLabel_1)); }
	inline int32_t get_m_AllocatorLabel_1() const { return ___m_AllocatorLabel_1; }
	inline int32_t* get_address_of_m_AllocatorLabel_1() { return &___m_AllocatorLabel_1; }
	inline void set_m_AllocatorLabel_1(int32_t value)
	{
		___m_AllocatorLabel_1 = value;
	}
};


// System.ValueTuple`2<System.Int32Enum,System.Object>
struct ValueTuple_2_tE20326652B164D9D7311B4DAAD79974CD5B0565E 
{
public:
	// T1 System.ValueTuple`2::Item1
	int32_t ___Item1_0;
	// T2 System.ValueTuple`2::Item2
	RuntimeObject * ___Item2_1;

public:
	inline static int32_t get_offset_of_Item1_0() { return static_cast<int32_t>(offsetof(ValueTuple_2_tE20326652B164D9D7311B4DAAD79974CD5B0565E, ___Item1_0)); }
	inline int32_t get_Item1_0() const { return ___Item1_0; }
	inline int32_t* get_address_of_Item1_0() { return &___Item1_0; }
	inline void set_Item1_0(int32_t value)
	{
		___Item1_0 = value;
	}

	inline static int32_t get_offset_of_Item2_1() { return static_cast<int32_t>(offsetof(ValueTuple_2_tE20326652B164D9D7311B4DAAD79974CD5B0565E, ___Item2_1)); }
	inline RuntimeObject * get_Item2_1() const { return ___Item2_1; }
	inline RuntimeObject ** get_address_of_Item2_1() { return &___Item2_1; }
	inline void set_Item2_1(RuntimeObject * value)
	{
		___Item2_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Item2_1), (void*)value);
	}
};


// System.ValueTuple`2<GameObjectConversion.LogType,System.String>
struct ValueTuple_2_t5123C212FD35A05E1C2FB02EC85E106EFA9B5782 
{
public:
	// T1 System.ValueTuple`2::Item1
	int32_t ___Item1_0;
	// T2 System.ValueTuple`2::Item2
	String_t* ___Item2_1;

public:
	inline static int32_t get_offset_of_Item1_0() { return static_cast<int32_t>(offsetof(ValueTuple_2_t5123C212FD35A05E1C2FB02EC85E106EFA9B5782, ___Item1_0)); }
	inline int32_t get_Item1_0() const { return ___Item1_0; }
	inline int32_t* get_address_of_Item1_0() { return &___Item1_0; }
	inline void set_Item1_0(int32_t value)
	{
		___Item1_0 = value;
	}

	inline static int32_t get_offset_of_Item2_1() { return static_cast<int32_t>(offsetof(ValueTuple_2_t5123C212FD35A05E1C2FB02EC85E106EFA9B5782, ___Item2_1)); }
	inline String_t* get_Item2_1() const { return ___Item2_1; }
	inline String_t** get_address_of_Item2_1() { return &___Item2_1; }
	inline void set_Item2_1(String_t* value)
	{
		___Item2_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Item2_1), (void*)value);
	}
};


// Unity.Entities.CompanionLink
struct CompanionLink_t41731339806AAA3D199C80AC4E62FC893D428FA2  : public RuntimeObject
{
public:
	// UnityEngine.GameObject Unity.Entities.CompanionLink::Companion
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Companion_2;

public:
	inline static int32_t get_offset_of_Companion_2() { return static_cast<int32_t>(offsetof(CompanionLink_t41731339806AAA3D199C80AC4E62FC893D428FA2, ___Companion_2)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_Companion_2() const { return ___Companion_2; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_Companion_2() { return &___Companion_2; }
	inline void set_Companion_2(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___Companion_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Companion_2), (void*)value);
	}
};

struct CompanionLink_t41731339806AAA3D199C80AC4E62FC893D428FA2_StaticFields
{
public:
	// System.Int32 Unity.Entities.CompanionLink::s_CompanionNameUniqueId
	int32_t ___s_CompanionNameUniqueId_0;

public:
	inline static int32_t get_offset_of_s_CompanionNameUniqueId_0() { return static_cast<int32_t>(offsetof(CompanionLink_t41731339806AAA3D199C80AC4E62FC893D428FA2_StaticFields, ___s_CompanionNameUniqueId_0)); }
	inline int32_t get_s_CompanionNameUniqueId_0() const { return ___s_CompanionNameUniqueId_0; }
	inline int32_t* get_address_of_s_CompanionNameUniqueId_0() { return &___s_CompanionNameUniqueId_0; }
	inline void set_s_CompanionNameUniqueId_0(int32_t value)
	{
		___s_CompanionNameUniqueId_0 = value;
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// Unity.Entities.ComponentType
struct ComponentType_tEA24A4AB5BA78DEF7C2CEF25A05426D1F51D8370 
{
public:
	// System.Int32 Unity.Entities.ComponentType::TypeIndex
	int32_t ___TypeIndex_0;
	// Unity.Entities.ComponentType/AccessMode Unity.Entities.ComponentType::AccessModeType
	int32_t ___AccessModeType_1;

public:
	inline static int32_t get_offset_of_TypeIndex_0() { return static_cast<int32_t>(offsetof(ComponentType_tEA24A4AB5BA78DEF7C2CEF25A05426D1F51D8370, ___TypeIndex_0)); }
	inline int32_t get_TypeIndex_0() const { return ___TypeIndex_0; }
	inline int32_t* get_address_of_TypeIndex_0() { return &___TypeIndex_0; }
	inline void set_TypeIndex_0(int32_t value)
	{
		___TypeIndex_0 = value;
	}

	inline static int32_t get_offset_of_AccessModeType_1() { return static_cast<int32_t>(offsetof(ComponentType_tEA24A4AB5BA78DEF7C2CEF25A05426D1F51D8370, ___AccessModeType_1)); }
	inline int32_t get_AccessModeType_1() const { return ___AccessModeType_1; }
	inline int32_t* get_address_of_AccessModeType_1() { return &___AccessModeType_1; }
	inline void set_AccessModeType_1(int32_t value)
	{
		___AccessModeType_1 = value;
	}
};


// Unity.Entities.EntityCommandBuffer
struct EntityCommandBuffer_t1392F60C43F18D06C981E0F5BCDC2255DE40A764 
{
public:
	// Unity.Entities.EntityCommandBufferData* Unity.Entities.EntityCommandBuffer::m_Data
	EntityCommandBufferData_t54C8C95E18B79C35853D6A104DCD8ECC9F66CBAA * ___m_Data_0;
	// System.Int32 Unity.Entities.EntityCommandBuffer::SystemID
	int32_t ___SystemID_1;

public:
	inline static int32_t get_offset_of_m_Data_0() { return static_cast<int32_t>(offsetof(EntityCommandBuffer_t1392F60C43F18D06C981E0F5BCDC2255DE40A764, ___m_Data_0)); }
	inline EntityCommandBufferData_t54C8C95E18B79C35853D6A104DCD8ECC9F66CBAA * get_m_Data_0() const { return ___m_Data_0; }
	inline EntityCommandBufferData_t54C8C95E18B79C35853D6A104DCD8ECC9F66CBAA ** get_address_of_m_Data_0() { return &___m_Data_0; }
	inline void set_m_Data_0(EntityCommandBufferData_t54C8C95E18B79C35853D6A104DCD8ECC9F66CBAA * value)
	{
		___m_Data_0 = value;
	}

	inline static int32_t get_offset_of_SystemID_1() { return static_cast<int32_t>(offsetof(EntityCommandBuffer_t1392F60C43F18D06C981E0F5BCDC2255DE40A764, ___SystemID_1)); }
	inline int32_t get_SystemID_1() const { return ___SystemID_1; }
	inline int32_t* get_address_of_SystemID_1() { return &___SystemID_1; }
	inline void set_SystemID_1(int32_t value)
	{
		___SystemID_1 = value;
	}
};

struct EntityCommandBuffer_t1392F60C43F18D06C981E0F5BCDC2255DE40A764_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Unity.Entities.EntityCommandBuffer::k_ProfileEcbPlayback
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___k_ProfileEcbPlayback_2;

public:
	inline static int32_t get_offset_of_k_ProfileEcbPlayback_2() { return static_cast<int32_t>(offsetof(EntityCommandBuffer_t1392F60C43F18D06C981E0F5BCDC2255DE40A764_StaticFields, ___k_ProfileEcbPlayback_2)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_k_ProfileEcbPlayback_2() const { return ___k_ProfileEcbPlayback_2; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_k_ProfileEcbPlayback_2() { return &___k_ProfileEcbPlayback_2; }
	inline void set_k_ProfileEcbPlayback_2(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___k_ProfileEcbPlayback_2 = value;
	}
};

// Native definition for P/Invoke marshalling of Unity.Entities.EntityCommandBuffer
struct EntityCommandBuffer_t1392F60C43F18D06C981E0F5BCDC2255DE40A764_marshaled_pinvoke
{
	EntityCommandBufferData_t54C8C95E18B79C35853D6A104DCD8ECC9F66CBAA * ___m_Data_0;
	int32_t ___SystemID_1;
};
// Native definition for COM marshalling of Unity.Entities.EntityCommandBuffer
struct EntityCommandBuffer_t1392F60C43F18D06C981E0F5BCDC2255DE40A764_marshaled_com
{
	EntityCommandBufferData_t54C8C95E18B79C35853D6A104DCD8ECC9F66CBAA * ___m_Data_0;
	int32_t ___SystemID_1;
};

// Unity.Entities.EntityManager
struct EntityManager_t375E301E0D409D57A32EB6EEFEE4DCFA936B3FD0 
{
public:
	// Unity.Entities.EntityDataAccess* Unity.Entities.EntityManager::m_EntityDataAccess
	EntityDataAccess_t14BF0F7A8F7622E7E73B5E3C0D52313B1F8D73D2 * ___m_EntityDataAccess_0;

public:
	inline static int32_t get_offset_of_m_EntityDataAccess_0() { return static_cast<int32_t>(offsetof(EntityManager_t375E301E0D409D57A32EB6EEFEE4DCFA936B3FD0, ___m_EntityDataAccess_0)); }
	inline EntityDataAccess_t14BF0F7A8F7622E7E73B5E3C0D52313B1F8D73D2 * get_m_EntityDataAccess_0() const { return ___m_EntityDataAccess_0; }
	inline EntityDataAccess_t14BF0F7A8F7622E7E73B5E3C0D52313B1F8D73D2 ** get_address_of_m_EntityDataAccess_0() { return &___m_EntityDataAccess_0; }
	inline void set_m_EntityDataAccess_0(EntityDataAccess_t14BF0F7A8F7622E7E73B5E3C0D52313B1F8D73D2 * value)
	{
		___m_EntityDataAccess_0 = value;
	}
};

struct EntityManager_t375E301E0D409D57A32EB6EEFEE4DCFA936B3FD0_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Unity.Entities.EntityManager::k_ProfileMoveSharedComponents
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___k_ProfileMoveSharedComponents_1;
	// Unity.Profiling.ProfilerMarker Unity.Entities.EntityManager::k_ProfileMoveManagedComponents
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___k_ProfileMoveManagedComponents_2;

public:
	inline static int32_t get_offset_of_k_ProfileMoveSharedComponents_1() { return static_cast<int32_t>(offsetof(EntityManager_t375E301E0D409D57A32EB6EEFEE4DCFA936B3FD0_StaticFields, ___k_ProfileMoveSharedComponents_1)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_k_ProfileMoveSharedComponents_1() const { return ___k_ProfileMoveSharedComponents_1; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_k_ProfileMoveSharedComponents_1() { return &___k_ProfileMoveSharedComponents_1; }
	inline void set_k_ProfileMoveSharedComponents_1(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___k_ProfileMoveSharedComponents_1 = value;
	}

	inline static int32_t get_offset_of_k_ProfileMoveManagedComponents_2() { return static_cast<int32_t>(offsetof(EntityManager_t375E301E0D409D57A32EB6EEFEE4DCFA936B3FD0_StaticFields, ___k_ProfileMoveManagedComponents_2)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_k_ProfileMoveManagedComponents_2() const { return ___k_ProfileMoveManagedComponents_2; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_k_ProfileMoveManagedComponents_2() { return &___k_ProfileMoveManagedComponents_2; }
	inline void set_k_ProfileMoveManagedComponents_2(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___k_ProfileMoveManagedComponents_2 = value;
	}
};

// Native definition for P/Invoke marshalling of Unity.Entities.EntityManager
struct EntityManager_t375E301E0D409D57A32EB6EEFEE4DCFA936B3FD0_marshaled_pinvoke
{
	EntityDataAccess_t14BF0F7A8F7622E7E73B5E3C0D52313B1F8D73D2 * ___m_EntityDataAccess_0;
};
// Native definition for COM marshalling of Unity.Entities.EntityManager
struct EntityManager_t375E301E0D409D57A32EB6EEFEE4DCFA936B3FD0_marshaled_com
{
	EntityDataAccess_t14BF0F7A8F7622E7E73B5E3C0D52313B1F8D73D2 * ___m_EntityDataAccess_0;
};

// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// Unity.Entities.Conversion.LogEventData
struct LogEventData_t13585C99A55DB1722FFE891AD83B6D8EFAE593A1 
{
public:
	// UnityEngine.LogType Unity.Entities.Conversion.LogEventData::Type
	int32_t ___Type_0;
	// System.String Unity.Entities.Conversion.LogEventData::Message
	String_t* ___Message_1;
	// System.String Unity.Entities.Conversion.LogEventData::Stacktrace
	String_t* ___Stacktrace_2;

public:
	inline static int32_t get_offset_of_Type_0() { return static_cast<int32_t>(offsetof(LogEventData_t13585C99A55DB1722FFE891AD83B6D8EFAE593A1, ___Type_0)); }
	inline int32_t get_Type_0() const { return ___Type_0; }
	inline int32_t* get_address_of_Type_0() { return &___Type_0; }
	inline void set_Type_0(int32_t value)
	{
		___Type_0 = value;
	}

	inline static int32_t get_offset_of_Message_1() { return static_cast<int32_t>(offsetof(LogEventData_t13585C99A55DB1722FFE891AD83B6D8EFAE593A1, ___Message_1)); }
	inline String_t* get_Message_1() const { return ___Message_1; }
	inline String_t** get_address_of_Message_1() { return &___Message_1; }
	inline void set_Message_1(String_t* value)
	{
		___Message_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Message_1), (void*)value);
	}

	inline static int32_t get_offset_of_Stacktrace_2() { return static_cast<int32_t>(offsetof(LogEventData_t13585C99A55DB1722FFE891AD83B6D8EFAE593A1, ___Stacktrace_2)); }
	inline String_t* get_Stacktrace_2() const { return ___Stacktrace_2; }
	inline String_t** get_address_of_Stacktrace_2() { return &___Stacktrace_2; }
	inline void set_Stacktrace_2(String_t* value)
	{
		___Stacktrace_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Stacktrace_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Unity.Entities.Conversion.LogEventData
struct LogEventData_t13585C99A55DB1722FFE891AD83B6D8EFAE593A1_marshaled_pinvoke
{
	int32_t ___Type_0;
	char* ___Message_1;
	char* ___Stacktrace_2;
};
// Native definition for COM marshalling of Unity.Entities.Conversion.LogEventData
struct LogEventData_t13585C99A55DB1722FFE891AD83B6D8EFAE593A1_marshaled_com
{
	int32_t ___Type_0;
	Il2CppChar* ___Message_1;
	Il2CppChar* ___Stacktrace_2;
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// System.Type
struct Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// Unity.Entities.GameObjectConversionSettings/ExportedAsset
struct ExportedAsset_t38651E80B7E37878015D8E2B869FF5C251672D65  : public RuntimeObject
{
public:
	// Unity.Entities.Hash128 Unity.Entities.GameObjectConversionSettings/ExportedAsset::Guid
	Hash128_t8214C0670F24DF267392561913434E82117B6131  ___Guid_0;
	// System.String Unity.Entities.GameObjectConversionSettings/ExportedAsset::AssetPath
	String_t* ___AssetPath_1;
	// System.IO.FileInfo Unity.Entities.GameObjectConversionSettings/ExportedAsset::ExportFileInfo
	FileInfo_t6C8B2EAA1E23F9E6D7C287C58E4EEEB2049ABAB9 * ___ExportFileInfo_2;
	// System.Boolean Unity.Entities.GameObjectConversionSettings/ExportedAsset::Exported
	bool ___Exported_3;

public:
	inline static int32_t get_offset_of_Guid_0() { return static_cast<int32_t>(offsetof(ExportedAsset_t38651E80B7E37878015D8E2B869FF5C251672D65, ___Guid_0)); }
	inline Hash128_t8214C0670F24DF267392561913434E82117B6131  get_Guid_0() const { return ___Guid_0; }
	inline Hash128_t8214C0670F24DF267392561913434E82117B6131 * get_address_of_Guid_0() { return &___Guid_0; }
	inline void set_Guid_0(Hash128_t8214C0670F24DF267392561913434E82117B6131  value)
	{
		___Guid_0 = value;
	}

	inline static int32_t get_offset_of_AssetPath_1() { return static_cast<int32_t>(offsetof(ExportedAsset_t38651E80B7E37878015D8E2B869FF5C251672D65, ___AssetPath_1)); }
	inline String_t* get_AssetPath_1() const { return ___AssetPath_1; }
	inline String_t** get_address_of_AssetPath_1() { return &___AssetPath_1; }
	inline void set_AssetPath_1(String_t* value)
	{
		___AssetPath_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AssetPath_1), (void*)value);
	}

	inline static int32_t get_offset_of_ExportFileInfo_2() { return static_cast<int32_t>(offsetof(ExportedAsset_t38651E80B7E37878015D8E2B869FF5C251672D65, ___ExportFileInfo_2)); }
	inline FileInfo_t6C8B2EAA1E23F9E6D7C287C58E4EEEB2049ABAB9 * get_ExportFileInfo_2() const { return ___ExportFileInfo_2; }
	inline FileInfo_t6C8B2EAA1E23F9E6D7C287C58E4EEEB2049ABAB9 ** get_address_of_ExportFileInfo_2() { return &___ExportFileInfo_2; }
	inline void set_ExportFileInfo_2(FileInfo_t6C8B2EAA1E23F9E6D7C287C58E4EEEB2049ABAB9 * value)
	{
		___ExportFileInfo_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ExportFileInfo_2), (void*)value);
	}

	inline static int32_t get_offset_of_Exported_3() { return static_cast<int32_t>(offsetof(ExportedAsset_t38651E80B7E37878015D8E2B869FF5C251672D65, ___Exported_3)); }
	inline bool get_Exported_3() const { return ___Exported_3; }
	inline bool* get_address_of_Exported_3() { return &___Exported_3; }
	inline void set_Exported_3(bool value)
	{
		___Exported_3 = value;
	}
};


// Unity.Collections.NativeArray`1/Enumerator<System.Int32>
struct Enumerator_tEE96FCD9D1EF14200B36BEAB6F34FA5FAFC27544 
{
public:
	// Unity.Collections.NativeArray`1<T> Unity.Collections.NativeArray`1/Enumerator::m_Array
	NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99  ___m_Array_0;
	// System.Int32 Unity.Collections.NativeArray`1/Enumerator::m_Index
	int32_t ___m_Index_1;

public:
	inline static int32_t get_offset_of_m_Array_0() { return static_cast<int32_t>(offsetof(Enumerator_tEE96FCD9D1EF14200B36BEAB6F34FA5FAFC27544, ___m_Array_0)); }
	inline NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99  get_m_Array_0() const { return ___m_Array_0; }
	inline NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99 * get_address_of_m_Array_0() { return &___m_Array_0; }
	inline void set_m_Array_0(NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99  value)
	{
		___m_Array_0 = value;
	}

	inline static int32_t get_offset_of_m_Index_1() { return static_cast<int32_t>(offsetof(Enumerator_tEE96FCD9D1EF14200B36BEAB6F34FA5FAFC27544, ___m_Index_1)); }
	inline int32_t get_m_Index_1() const { return ___m_Index_1; }
	inline int32_t* get_address_of_m_Index_1() { return &___m_Index_1; }
	inline void set_m_Index_1(int32_t value)
	{
		___m_Index_1 = value;
	}
};


// System.Func`2<GameObjectConversion.LogType,System.ValueTuple`2<GameObjectConversion.LogType,System.String>>
struct Func_2_tFE4B20B363C884A7ED294D0081233424ACEB474A  : public MulticastDelegate_t
{
public:

public:
};


// Unity.Entities.Conversion.MultiListEnumerator`2<Unity.Entities.Conversion.LogEventData,Unity.Entities.Conversion.MultiListArrayData`1<Unity.Entities.Conversion.LogEventData>>
struct MultiListEnumerator_2_tCC7D1B309E3ABDC97AA7AA4F5EFAB39555DB9F6F 
{
public:
	// I Unity.Entities.Conversion.MultiListEnumerator`2::m_Data
	MultiListArrayData_1_t0727AB2A094DF060683A2FBCC16471BF2B52C728  ___m_Data_0;
	// Unity.Collections.NativeArray`1<System.Int32> Unity.Entities.Conversion.MultiListEnumerator`2::m_Next
	NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99  ___m_Next_1;
	// System.Int32 Unity.Entities.Conversion.MultiListEnumerator`2::m_StartIndex
	int32_t ___m_StartIndex_2;
	// System.Int32 Unity.Entities.Conversion.MultiListEnumerator`2::m_CurIndex
	int32_t ___m_CurIndex_3;
	// System.Boolean Unity.Entities.Conversion.MultiListEnumerator`2::m_IsFirst
	bool ___m_IsFirst_4;

public:
	inline static int32_t get_offset_of_m_Data_0() { return static_cast<int32_t>(offsetof(MultiListEnumerator_2_tCC7D1B309E3ABDC97AA7AA4F5EFAB39555DB9F6F, ___m_Data_0)); }
	inline MultiListArrayData_1_t0727AB2A094DF060683A2FBCC16471BF2B52C728  get_m_Data_0() const { return ___m_Data_0; }
	inline MultiListArrayData_1_t0727AB2A094DF060683A2FBCC16471BF2B52C728 * get_address_of_m_Data_0() { return &___m_Data_0; }
	inline void set_m_Data_0(MultiListArrayData_1_t0727AB2A094DF060683A2FBCC16471BF2B52C728  value)
	{
		___m_Data_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Data_0))->___Data_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_Next_1() { return static_cast<int32_t>(offsetof(MultiListEnumerator_2_tCC7D1B309E3ABDC97AA7AA4F5EFAB39555DB9F6F, ___m_Next_1)); }
	inline NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99  get_m_Next_1() const { return ___m_Next_1; }
	inline NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99 * get_address_of_m_Next_1() { return &___m_Next_1; }
	inline void set_m_Next_1(NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99  value)
	{
		___m_Next_1 = value;
	}

	inline static int32_t get_offset_of_m_StartIndex_2() { return static_cast<int32_t>(offsetof(MultiListEnumerator_2_tCC7D1B309E3ABDC97AA7AA4F5EFAB39555DB9F6F, ___m_StartIndex_2)); }
	inline int32_t get_m_StartIndex_2() const { return ___m_StartIndex_2; }
	inline int32_t* get_address_of_m_StartIndex_2() { return &___m_StartIndex_2; }
	inline void set_m_StartIndex_2(int32_t value)
	{
		___m_StartIndex_2 = value;
	}

	inline static int32_t get_offset_of_m_CurIndex_3() { return static_cast<int32_t>(offsetof(MultiListEnumerator_2_tCC7D1B309E3ABDC97AA7AA4F5EFAB39555DB9F6F, ___m_CurIndex_3)); }
	inline int32_t get_m_CurIndex_3() const { return ___m_CurIndex_3; }
	inline int32_t* get_address_of_m_CurIndex_3() { return &___m_CurIndex_3; }
	inline void set_m_CurIndex_3(int32_t value)
	{
		___m_CurIndex_3 = value;
	}

	inline static int32_t get_offset_of_m_IsFirst_4() { return static_cast<int32_t>(offsetof(MultiListEnumerator_2_tCC7D1B309E3ABDC97AA7AA4F5EFAB39555DB9F6F, ___m_IsFirst_4)); }
	inline bool get_m_IsFirst_4() const { return ___m_IsFirst_4; }
	inline bool* get_address_of_m_IsFirst_4() { return &___m_IsFirst_4; }
	inline void set_m_IsFirst_4(bool value)
	{
		___m_IsFirst_4 = value;
	}
};


// Unity.Entities.Conversion.MultiListNativeArrayData`1<Unity.Entities.Entity>
struct MultiListNativeArrayData_1_tA534DDE7059DAC272EF3ADB43459906C6CCA7F93 
{
public:
	// Unity.Collections.NativeArray`1<T> Unity.Entities.Conversion.MultiListNativeArrayData`1::Data
	NativeArray_1_t587B0E555A435D1A1EACD16A8F3C3EBCF3497F5E  ___Data_0;

public:
	inline static int32_t get_offset_of_Data_0() { return static_cast<int32_t>(offsetof(MultiListNativeArrayData_1_tA534DDE7059DAC272EF3ADB43459906C6CCA7F93, ___Data_0)); }
	inline NativeArray_1_t587B0E555A435D1A1EACD16A8F3C3EBCF3497F5E  get_Data_0() const { return ___Data_0; }
	inline NativeArray_1_t587B0E555A435D1A1EACD16A8F3C3EBCF3497F5E * get_address_of_Data_0() { return &___Data_0; }
	inline void set_Data_0(NativeArray_1_t587B0E555A435D1A1EACD16A8F3C3EBCF3497F5E  value)
	{
		___Data_0 = value;
	}
};


// Unity.Entities.Conversion.MultiList`2<Unity.Entities.Conversion.LogEventData,Unity.Entities.Conversion.MultiListArrayData`1<Unity.Entities.Conversion.LogEventData>>
struct MultiList_2_tD5B56EBEA5E9740DA1E48BE0BEFBA4938ABEF4BF 
{
public:
	// Unity.Collections.NativeArray`1<System.Int32> Unity.Entities.Conversion.MultiList`2::HeadIds
	NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99  ___HeadIds_0;
	// Unity.Collections.NativeArray`1<System.Int32> Unity.Entities.Conversion.MultiList`2::Next
	NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99  ___Next_1;
	// System.Int32 Unity.Entities.Conversion.MultiList`2::NextFree
	int32_t ___NextFree_2;
	// I Unity.Entities.Conversion.MultiList`2::Data
	MultiListArrayData_1_t0727AB2A094DF060683A2FBCC16471BF2B52C728  ___Data_3;

public:
	inline static int32_t get_offset_of_HeadIds_0() { return static_cast<int32_t>(offsetof(MultiList_2_tD5B56EBEA5E9740DA1E48BE0BEFBA4938ABEF4BF, ___HeadIds_0)); }
	inline NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99  get_HeadIds_0() const { return ___HeadIds_0; }
	inline NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99 * get_address_of_HeadIds_0() { return &___HeadIds_0; }
	inline void set_HeadIds_0(NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99  value)
	{
		___HeadIds_0 = value;
	}

	inline static int32_t get_offset_of_Next_1() { return static_cast<int32_t>(offsetof(MultiList_2_tD5B56EBEA5E9740DA1E48BE0BEFBA4938ABEF4BF, ___Next_1)); }
	inline NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99  get_Next_1() const { return ___Next_1; }
	inline NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99 * get_address_of_Next_1() { return &___Next_1; }
	inline void set_Next_1(NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99  value)
	{
		___Next_1 = value;
	}

	inline static int32_t get_offset_of_NextFree_2() { return static_cast<int32_t>(offsetof(MultiList_2_tD5B56EBEA5E9740DA1E48BE0BEFBA4938ABEF4BF, ___NextFree_2)); }
	inline int32_t get_NextFree_2() const { return ___NextFree_2; }
	inline int32_t* get_address_of_NextFree_2() { return &___NextFree_2; }
	inline void set_NextFree_2(int32_t value)
	{
		___NextFree_2 = value;
	}

	inline static int32_t get_offset_of_Data_3() { return static_cast<int32_t>(offsetof(MultiList_2_tD5B56EBEA5E9740DA1E48BE0BEFBA4938ABEF4BF, ___Data_3)); }
	inline MultiListArrayData_1_t0727AB2A094DF060683A2FBCC16471BF2B52C728  get_Data_3() const { return ___Data_3; }
	inline MultiListArrayData_1_t0727AB2A094DF060683A2FBCC16471BF2B52C728 * get_address_of_Data_3() { return &___Data_3; }
	inline void set_Data_3(MultiListArrayData_1_t0727AB2A094DF060683A2FBCC16471BF2B52C728  value)
	{
		___Data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___Data_3))->___Data_0), (void*)NULL);
	}
};


// Unity.Entities.Conversion.MultiList`2<System.Type,Unity.Entities.Conversion.MultiListArrayData`1<System.Type>>
struct MultiList_2_t8D15B0201AF84D0D92EF88318A5731FF5FA4569D 
{
public:
	// Unity.Collections.NativeArray`1<System.Int32> Unity.Entities.Conversion.MultiList`2::HeadIds
	NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99  ___HeadIds_0;
	// Unity.Collections.NativeArray`1<System.Int32> Unity.Entities.Conversion.MultiList`2::Next
	NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99  ___Next_1;
	// System.Int32 Unity.Entities.Conversion.MultiList`2::NextFree
	int32_t ___NextFree_2;
	// I Unity.Entities.Conversion.MultiList`2::Data
	MultiListArrayData_1_t6251CC3C723E7724C62818EB1C815BC44248A3AA  ___Data_3;

public:
	inline static int32_t get_offset_of_HeadIds_0() { return static_cast<int32_t>(offsetof(MultiList_2_t8D15B0201AF84D0D92EF88318A5731FF5FA4569D, ___HeadIds_0)); }
	inline NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99  get_HeadIds_0() const { return ___HeadIds_0; }
	inline NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99 * get_address_of_HeadIds_0() { return &___HeadIds_0; }
	inline void set_HeadIds_0(NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99  value)
	{
		___HeadIds_0 = value;
	}

	inline static int32_t get_offset_of_Next_1() { return static_cast<int32_t>(offsetof(MultiList_2_t8D15B0201AF84D0D92EF88318A5731FF5FA4569D, ___Next_1)); }
	inline NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99  get_Next_1() const { return ___Next_1; }
	inline NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99 * get_address_of_Next_1() { return &___Next_1; }
	inline void set_Next_1(NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99  value)
	{
		___Next_1 = value;
	}

	inline static int32_t get_offset_of_NextFree_2() { return static_cast<int32_t>(offsetof(MultiList_2_t8D15B0201AF84D0D92EF88318A5731FF5FA4569D, ___NextFree_2)); }
	inline int32_t get_NextFree_2() const { return ___NextFree_2; }
	inline int32_t* get_address_of_NextFree_2() { return &___NextFree_2; }
	inline void set_NextFree_2(int32_t value)
	{
		___NextFree_2 = value;
	}

	inline static int32_t get_offset_of_Data_3() { return static_cast<int32_t>(offsetof(MultiList_2_t8D15B0201AF84D0D92EF88318A5731FF5FA4569D, ___Data_3)); }
	inline MultiListArrayData_1_t6251CC3C723E7724C62818EB1C815BC44248A3AA  get_Data_3() const { return ___Data_3; }
	inline MultiListArrayData_1_t6251CC3C723E7724C62818EB1C815BC44248A3AA * get_address_of_Data_3() { return &___Data_3; }
	inline void set_Data_3(MultiListArrayData_1_t6251CC3C723E7724C62818EB1C815BC44248A3AA  value)
	{
		___Data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___Data_3))->___Data_0), (void*)NULL);
	}
};


// Unity.Collections.NativeHashMap`2<System.Int32,System.Boolean>
struct NativeHashMap_2_t977D8B51ED64BBFA8F25F7393936358BC6087EBB 
{
public:
	// Unity.Collections.LowLevel.Unsafe.UnsafeHashMap`2<TKey,TValue> Unity.Collections.NativeHashMap`2::m_HashMapData
	UnsafeHashMap_2_t0C220140F7AC7AD9015BDC26CCB820C1939548B0  ___m_HashMapData_0;

public:
	inline static int32_t get_offset_of_m_HashMapData_0() { return static_cast<int32_t>(offsetof(NativeHashMap_2_t977D8B51ED64BBFA8F25F7393936358BC6087EBB, ___m_HashMapData_0)); }
	inline UnsafeHashMap_2_t0C220140F7AC7AD9015BDC26CCB820C1939548B0  get_m_HashMapData_0() const { return ___m_HashMapData_0; }
	inline UnsafeHashMap_2_t0C220140F7AC7AD9015BDC26CCB820C1939548B0 * get_address_of_m_HashMapData_0() { return &___m_HashMapData_0; }
	inline void set_m_HashMapData_0(UnsafeHashMap_2_t0C220140F7AC7AD9015BDC26CCB820C1939548B0  value)
	{
		___m_HashMapData_0 = value;
	}
};


// Unity.Collections.NativeHashMap`2<System.Int32,Unity.Entities.DependencyTracker>
struct NativeHashMap_2_t61357ED1FC7257561AD2B5F834BA8A4269884AAE 
{
public:
	// Unity.Collections.LowLevel.Unsafe.UnsafeHashMap`2<TKey,TValue> Unity.Collections.NativeHashMap`2::m_HashMapData
	UnsafeHashMap_2_t8608EB55E326B753BD7C70DC3D1217F0634ED116  ___m_HashMapData_0;

public:
	inline static int32_t get_offset_of_m_HashMapData_0() { return static_cast<int32_t>(offsetof(NativeHashMap_2_t61357ED1FC7257561AD2B5F834BA8A4269884AAE, ___m_HashMapData_0)); }
	inline UnsafeHashMap_2_t8608EB55E326B753BD7C70DC3D1217F0634ED116  get_m_HashMapData_0() const { return ___m_HashMapData_0; }
	inline UnsafeHashMap_2_t8608EB55E326B753BD7C70DC3D1217F0634ED116 * get_address_of_m_HashMapData_0() { return &___m_HashMapData_0; }
	inline void set_m_HashMapData_0(UnsafeHashMap_2_t8608EB55E326B753BD7C70DC3D1217F0634ED116  value)
	{
		___m_HashMapData_0 = value;
	}
};


// Unity.Collections.NativeHashMap`2<System.Int32,System.Int32>
struct NativeHashMap_2_tA2C896278E1577EA31B2632511A058B9731235C2 
{
public:
	// Unity.Collections.LowLevel.Unsafe.UnsafeHashMap`2<TKey,TValue> Unity.Collections.NativeHashMap`2::m_HashMapData
	UnsafeHashMap_2_tEDA27A37C890E43DCEF57D0ED98675E874D3FC33  ___m_HashMapData_0;

public:
	inline static int32_t get_offset_of_m_HashMapData_0() { return static_cast<int32_t>(offsetof(NativeHashMap_2_tA2C896278E1577EA31B2632511A058B9731235C2, ___m_HashMapData_0)); }
	inline UnsafeHashMap_2_tEDA27A37C890E43DCEF57D0ED98675E874D3FC33  get_m_HashMapData_0() const { return ___m_HashMapData_0; }
	inline UnsafeHashMap_2_tEDA27A37C890E43DCEF57D0ED98675E874D3FC33 * get_address_of_m_HashMapData_0() { return &___m_HashMapData_0; }
	inline void set_m_HashMapData_0(UnsafeHashMap_2_tEDA27A37C890E43DCEF57D0ED98675E874D3FC33  value)
	{
		___m_HashMapData_0 = value;
	}
};


// Unity.Collections.NativeKeyValueArrays`2<System.Int32,System.Int32>
struct NativeKeyValueArrays_2_t5F9F4BC8CC70775F900ECD85C18A5EA810621FC9 
{
public:
	// Unity.Collections.NativeArray`1<TKey> Unity.Collections.NativeKeyValueArrays`2::Keys
	NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99  ___Keys_0;
	// Unity.Collections.NativeArray`1<TValue> Unity.Collections.NativeKeyValueArrays`2::Values
	NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99  ___Values_1;

public:
	inline static int32_t get_offset_of_Keys_0() { return static_cast<int32_t>(offsetof(NativeKeyValueArrays_2_t5F9F4BC8CC70775F900ECD85C18A5EA810621FC9, ___Keys_0)); }
	inline NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99  get_Keys_0() const { return ___Keys_0; }
	inline NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99 * get_address_of_Keys_0() { return &___Keys_0; }
	inline void set_Keys_0(NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99  value)
	{
		___Keys_0 = value;
	}

	inline static int32_t get_offset_of_Values_1() { return static_cast<int32_t>(offsetof(NativeKeyValueArrays_2_t5F9F4BC8CC70775F900ECD85C18A5EA810621FC9, ___Values_1)); }
	inline NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99  get_Values_1() const { return ___Values_1; }
	inline NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99 * get_address_of_Values_1() { return &___Values_1; }
	inline void set_Values_1(NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99  value)
	{
		___Values_1 = value;
	}
};


// Unity.Collections.NativeMultiHashMap`2<System.Int32,System.Int32>
struct NativeMultiHashMap_2_t4328C288A94A6BE03785C8FF74A83E3DF6AB7A56 
{
public:
	// Unity.Collections.LowLevel.Unsafe.UnsafeMultiHashMap`2<TKey,TValue> Unity.Collections.NativeMultiHashMap`2::m_MultiHashMapData
	UnsafeMultiHashMap_2_tA121FA0D1413562195B1AE4895E538F446393F19  ___m_MultiHashMapData_0;

public:
	inline static int32_t get_offset_of_m_MultiHashMapData_0() { return static_cast<int32_t>(offsetof(NativeMultiHashMap_2_t4328C288A94A6BE03785C8FF74A83E3DF6AB7A56, ___m_MultiHashMapData_0)); }
	inline UnsafeMultiHashMap_2_tA121FA0D1413562195B1AE4895E538F446393F19  get_m_MultiHashMapData_0() const { return ___m_MultiHashMapData_0; }
	inline UnsafeMultiHashMap_2_tA121FA0D1413562195B1AE4895E538F446393F19 * get_address_of_m_MultiHashMapData_0() { return &___m_MultiHashMapData_0; }
	inline void set_m_MultiHashMapData_0(UnsafeMultiHashMap_2_tA121FA0D1413562195B1AE4895E538F446393F19  value)
	{
		___m_MultiHashMapData_0 = value;
	}
};


// System.ValueTuple`2<System.Int32,Unity.Entities.Conversion.LogEventData>
struct ValueTuple_2_t21E30194CC22968E9B81643812C516AAF6C66093 
{
public:
	// T1 System.ValueTuple`2::Item1
	int32_t ___Item1_0;
	// T2 System.ValueTuple`2::Item2
	LogEventData_t13585C99A55DB1722FFE891AD83B6D8EFAE593A1  ___Item2_1;

public:
	inline static int32_t get_offset_of_Item1_0() { return static_cast<int32_t>(offsetof(ValueTuple_2_t21E30194CC22968E9B81643812C516AAF6C66093, ___Item1_0)); }
	inline int32_t get_Item1_0() const { return ___Item1_0; }
	inline int32_t* get_address_of_Item1_0() { return &___Item1_0; }
	inline void set_Item1_0(int32_t value)
	{
		___Item1_0 = value;
	}

	inline static int32_t get_offset_of_Item2_1() { return static_cast<int32_t>(offsetof(ValueTuple_2_t21E30194CC22968E9B81643812C516AAF6C66093, ___Item2_1)); }
	inline LogEventData_t13585C99A55DB1722FFE891AD83B6D8EFAE593A1  get_Item2_1() const { return ___Item2_1; }
	inline LogEventData_t13585C99A55DB1722FFE891AD83B6D8EFAE593A1 * get_address_of_Item2_1() { return &___Item2_1; }
	inline void set_Item2_1(LogEventData_t13585C99A55DB1722FFE891AD83B6D8EFAE593A1  value)
	{
		___Item2_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___Item2_1))->___Message_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___Item2_1))->___Stacktrace_2), (void*)NULL);
		#endif
	}
};


// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// Unity.Entities.ComponentSystem
struct ComponentSystem_t258C48C930D4C2524A052337E22D95554615F98C  : public ComponentSystemBase_t8008ABC5BDE453061672EA262B5698047849A3BC
{
public:
	// Unity.Entities.EntityCommandBuffer Unity.Entities.ComponentSystem::m_DeferredEntities
	EntityCommandBuffer_t1392F60C43F18D06C981E0F5BCDC2255DE40A764  ___m_DeferredEntities_1;
	// Unity.Entities.EntityQueryCache Unity.Entities.ComponentSystem::m_EntityQueryCache
	EntityQueryCache_t91D2DBE7CB9A419E17A808271A782A08DFB96179 * ___m_EntityQueryCache_2;

public:
	inline static int32_t get_offset_of_m_DeferredEntities_1() { return static_cast<int32_t>(offsetof(ComponentSystem_t258C48C930D4C2524A052337E22D95554615F98C, ___m_DeferredEntities_1)); }
	inline EntityCommandBuffer_t1392F60C43F18D06C981E0F5BCDC2255DE40A764  get_m_DeferredEntities_1() const { return ___m_DeferredEntities_1; }
	inline EntityCommandBuffer_t1392F60C43F18D06C981E0F5BCDC2255DE40A764 * get_address_of_m_DeferredEntities_1() { return &___m_DeferredEntities_1; }
	inline void set_m_DeferredEntities_1(EntityCommandBuffer_t1392F60C43F18D06C981E0F5BCDC2255DE40A764  value)
	{
		___m_DeferredEntities_1 = value;
	}

	inline static int32_t get_offset_of_m_EntityQueryCache_2() { return static_cast<int32_t>(offsetof(ComponentSystem_t258C48C930D4C2524A052337E22D95554615F98C, ___m_EntityQueryCache_2)); }
	inline EntityQueryCache_t91D2DBE7CB9A419E17A808271A782A08DFB96179 * get_m_EntityQueryCache_2() const { return ___m_EntityQueryCache_2; }
	inline EntityQueryCache_t91D2DBE7CB9A419E17A808271A782A08DFB96179 ** get_address_of_m_EntityQueryCache_2() { return &___m_EntityQueryCache_2; }
	inline void set_m_EntityQueryCache_2(EntityQueryCache_t91D2DBE7CB9A419E17A808271A782A08DFB96179 * value)
	{
		___m_EntityQueryCache_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_EntityQueryCache_2), (void*)value);
	}
};


// Unity.Entities.DependencyTracker
struct DependencyTracker_t1E00B24B7D3375633864E7895FB5C4D3CD5627BB 
{
public:
	// Unity.Collections.LowLevel.Unsafe.UnsafeMultiHashMap`2<System.Int32,System.Int32> Unity.Entities.DependencyTracker::_dependentsByInstanceId
	UnsafeMultiHashMap_2_tA121FA0D1413562195B1AE4895E538F446393F19  ____dependentsByInstanceId_0;
	// Unity.Collections.LowLevel.Unsafe.UnsafeMultiHashMap`2<System.Int32,System.Int32> Unity.Entities.DependencyTracker::_dependenciesByInstanceId
	UnsafeMultiHashMap_2_tA121FA0D1413562195B1AE4895E538F446393F19  ____dependenciesByInstanceId_1;

public:
	inline static int32_t get_offset_of__dependentsByInstanceId_0() { return static_cast<int32_t>(offsetof(DependencyTracker_t1E00B24B7D3375633864E7895FB5C4D3CD5627BB, ____dependentsByInstanceId_0)); }
	inline UnsafeMultiHashMap_2_tA121FA0D1413562195B1AE4895E538F446393F19  get__dependentsByInstanceId_0() const { return ____dependentsByInstanceId_0; }
	inline UnsafeMultiHashMap_2_tA121FA0D1413562195B1AE4895E538F446393F19 * get_address_of__dependentsByInstanceId_0() { return &____dependentsByInstanceId_0; }
	inline void set__dependentsByInstanceId_0(UnsafeMultiHashMap_2_tA121FA0D1413562195B1AE4895E538F446393F19  value)
	{
		____dependentsByInstanceId_0 = value;
	}

	inline static int32_t get_offset_of__dependenciesByInstanceId_1() { return static_cast<int32_t>(offsetof(DependencyTracker_t1E00B24B7D3375633864E7895FB5C4D3CD5627BB, ____dependenciesByInstanceId_1)); }
	inline UnsafeMultiHashMap_2_tA121FA0D1413562195B1AE4895E538F446393F19  get__dependenciesByInstanceId_1() const { return ____dependenciesByInstanceId_1; }
	inline UnsafeMultiHashMap_2_tA121FA0D1413562195B1AE4895E538F446393F19 * get_address_of__dependenciesByInstanceId_1() { return &____dependenciesByInstanceId_1; }
	inline void set__dependenciesByInstanceId_1(UnsafeMultiHashMap_2_tA121FA0D1413562195B1AE4895E538F446393F19  value)
	{
		____dependenciesByInstanceId_1 = value;
	}
};


// Unity.Entities.Conversion.IncrementalConversionData
struct IncrementalConversionData_t0061035E6E6416DBD4488143EA4705ED5DD70FA6 
{
public:
	// Unity.Collections.NativeList`1<System.Int32> Unity.Entities.Conversion.IncrementalConversionData::ChangedAssets
	NativeList_1_t37924D67F0E4D83DE506A261B7A05AE619630C80  ___ChangedAssets_0;
	// Unity.Collections.NativeList`1<System.Int32> Unity.Entities.Conversion.IncrementalConversionData::DeletedAssets
	NativeList_1_t37924D67F0E4D83DE506A261B7A05AE619630C80  ___DeletedAssets_1;
	// Unity.Collections.NativeList`1<System.Int32> Unity.Entities.Conversion.IncrementalConversionData::RemovedInstanceIds
	NativeList_1_t37924D67F0E4D83DE506A261B7A05AE619630C80  ___RemovedInstanceIds_2;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> Unity.Entities.Conversion.IncrementalConversionData::ChangedGameObjects
	List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * ___ChangedGameObjects_3;
	// System.Collections.Generic.List`1<UnityEngine.Component> Unity.Entities.Conversion.IncrementalConversionData::ChangedComponents
	List_1_tA3929E98F6AC5A6E95EF799D2E3294F214358C0F * ___ChangedComponents_4;
	// Unity.Collections.NativeList`1<System.Int32> Unity.Entities.Conversion.IncrementalConversionData::ReconvertHierarchyRequests
	NativeList_1_t37924D67F0E4D83DE506A261B7A05AE619630C80  ___ReconvertHierarchyRequests_5;
	// Unity.Collections.NativeList`1<System.Int32> Unity.Entities.Conversion.IncrementalConversionData::ReconvertSingleRequests
	NativeList_1_t37924D67F0E4D83DE506A261B7A05AE619630C80  ___ReconvertSingleRequests_6;
	// Unity.Collections.NativeList`1<System.Int32> Unity.Entities.Conversion.IncrementalConversionData::_changedGameObjectInstanceIds
	NativeList_1_t37924D67F0E4D83DE506A261B7A05AE619630C80  ____changedGameObjectInstanceIds_7;
	// Unity.Collections.NativeList`1<Unity.Entities.IncrementalConversionChanges/ParentChange> Unity.Entities.Conversion.IncrementalConversionData::ParentChangeInstanceIds
	NativeList_1_tC1B2ACAF93B58294FE63019BB607DF267B7D2C52  ___ParentChangeInstanceIds_8;

public:
	inline static int32_t get_offset_of_ChangedAssets_0() { return static_cast<int32_t>(offsetof(IncrementalConversionData_t0061035E6E6416DBD4488143EA4705ED5DD70FA6, ___ChangedAssets_0)); }
	inline NativeList_1_t37924D67F0E4D83DE506A261B7A05AE619630C80  get_ChangedAssets_0() const { return ___ChangedAssets_0; }
	inline NativeList_1_t37924D67F0E4D83DE506A261B7A05AE619630C80 * get_address_of_ChangedAssets_0() { return &___ChangedAssets_0; }
	inline void set_ChangedAssets_0(NativeList_1_t37924D67F0E4D83DE506A261B7A05AE619630C80  value)
	{
		___ChangedAssets_0 = value;
	}

	inline static int32_t get_offset_of_DeletedAssets_1() { return static_cast<int32_t>(offsetof(IncrementalConversionData_t0061035E6E6416DBD4488143EA4705ED5DD70FA6, ___DeletedAssets_1)); }
	inline NativeList_1_t37924D67F0E4D83DE506A261B7A05AE619630C80  get_DeletedAssets_1() const { return ___DeletedAssets_1; }
	inline NativeList_1_t37924D67F0E4D83DE506A261B7A05AE619630C80 * get_address_of_DeletedAssets_1() { return &___DeletedAssets_1; }
	inline void set_DeletedAssets_1(NativeList_1_t37924D67F0E4D83DE506A261B7A05AE619630C80  value)
	{
		___DeletedAssets_1 = value;
	}

	inline static int32_t get_offset_of_RemovedInstanceIds_2() { return static_cast<int32_t>(offsetof(IncrementalConversionData_t0061035E6E6416DBD4488143EA4705ED5DD70FA6, ___RemovedInstanceIds_2)); }
	inline NativeList_1_t37924D67F0E4D83DE506A261B7A05AE619630C80  get_RemovedInstanceIds_2() const { return ___RemovedInstanceIds_2; }
	inline NativeList_1_t37924D67F0E4D83DE506A261B7A05AE619630C80 * get_address_of_RemovedInstanceIds_2() { return &___RemovedInstanceIds_2; }
	inline void set_RemovedInstanceIds_2(NativeList_1_t37924D67F0E4D83DE506A261B7A05AE619630C80  value)
	{
		___RemovedInstanceIds_2 = value;
	}

	inline static int32_t get_offset_of_ChangedGameObjects_3() { return static_cast<int32_t>(offsetof(IncrementalConversionData_t0061035E6E6416DBD4488143EA4705ED5DD70FA6, ___ChangedGameObjects_3)); }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * get_ChangedGameObjects_3() const { return ___ChangedGameObjects_3; }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 ** get_address_of_ChangedGameObjects_3() { return &___ChangedGameObjects_3; }
	inline void set_ChangedGameObjects_3(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * value)
	{
		___ChangedGameObjects_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ChangedGameObjects_3), (void*)value);
	}

	inline static int32_t get_offset_of_ChangedComponents_4() { return static_cast<int32_t>(offsetof(IncrementalConversionData_t0061035E6E6416DBD4488143EA4705ED5DD70FA6, ___ChangedComponents_4)); }
	inline List_1_tA3929E98F6AC5A6E95EF799D2E3294F214358C0F * get_ChangedComponents_4() const { return ___ChangedComponents_4; }
	inline List_1_tA3929E98F6AC5A6E95EF799D2E3294F214358C0F ** get_address_of_ChangedComponents_4() { return &___ChangedComponents_4; }
	inline void set_ChangedComponents_4(List_1_tA3929E98F6AC5A6E95EF799D2E3294F214358C0F * value)
	{
		___ChangedComponents_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ChangedComponents_4), (void*)value);
	}

	inline static int32_t get_offset_of_ReconvertHierarchyRequests_5() { return static_cast<int32_t>(offsetof(IncrementalConversionData_t0061035E6E6416DBD4488143EA4705ED5DD70FA6, ___ReconvertHierarchyRequests_5)); }
	inline NativeList_1_t37924D67F0E4D83DE506A261B7A05AE619630C80  get_ReconvertHierarchyRequests_5() const { return ___ReconvertHierarchyRequests_5; }
	inline NativeList_1_t37924D67F0E4D83DE506A261B7A05AE619630C80 * get_address_of_ReconvertHierarchyRequests_5() { return &___ReconvertHierarchyRequests_5; }
	inline void set_ReconvertHierarchyRequests_5(NativeList_1_t37924D67F0E4D83DE506A261B7A05AE619630C80  value)
	{
		___ReconvertHierarchyRequests_5 = value;
	}

	inline static int32_t get_offset_of_ReconvertSingleRequests_6() { return static_cast<int32_t>(offsetof(IncrementalConversionData_t0061035E6E6416DBD4488143EA4705ED5DD70FA6, ___ReconvertSingleRequests_6)); }
	inline NativeList_1_t37924D67F0E4D83DE506A261B7A05AE619630C80  get_ReconvertSingleRequests_6() const { return ___ReconvertSingleRequests_6; }
	inline NativeList_1_t37924D67F0E4D83DE506A261B7A05AE619630C80 * get_address_of_ReconvertSingleRequests_6() { return &___ReconvertSingleRequests_6; }
	inline void set_ReconvertSingleRequests_6(NativeList_1_t37924D67F0E4D83DE506A261B7A05AE619630C80  value)
	{
		___ReconvertSingleRequests_6 = value;
	}

	inline static int32_t get_offset_of__changedGameObjectInstanceIds_7() { return static_cast<int32_t>(offsetof(IncrementalConversionData_t0061035E6E6416DBD4488143EA4705ED5DD70FA6, ____changedGameObjectInstanceIds_7)); }
	inline NativeList_1_t37924D67F0E4D83DE506A261B7A05AE619630C80  get__changedGameObjectInstanceIds_7() const { return ____changedGameObjectInstanceIds_7; }
	inline NativeList_1_t37924D67F0E4D83DE506A261B7A05AE619630C80 * get_address_of__changedGameObjectInstanceIds_7() { return &____changedGameObjectInstanceIds_7; }
	inline void set__changedGameObjectInstanceIds_7(NativeList_1_t37924D67F0E4D83DE506A261B7A05AE619630C80  value)
	{
		____changedGameObjectInstanceIds_7 = value;
	}

	inline static int32_t get_offset_of_ParentChangeInstanceIds_8() { return static_cast<int32_t>(offsetof(IncrementalConversionData_t0061035E6E6416DBD4488143EA4705ED5DD70FA6, ___ParentChangeInstanceIds_8)); }
	inline NativeList_1_tC1B2ACAF93B58294FE63019BB607DF267B7D2C52  get_ParentChangeInstanceIds_8() const { return ___ParentChangeInstanceIds_8; }
	inline NativeList_1_tC1B2ACAF93B58294FE63019BB607DF267B7D2C52 * get_address_of_ParentChangeInstanceIds_8() { return &___ParentChangeInstanceIds_8; }
	inline void set_ParentChangeInstanceIds_8(NativeList_1_tC1B2ACAF93B58294FE63019BB607DF267B7D2C52  value)
	{
		___ParentChangeInstanceIds_8 = value;
	}
};

// Native definition for P/Invoke marshalling of Unity.Entities.Conversion.IncrementalConversionData
struct IncrementalConversionData_t0061035E6E6416DBD4488143EA4705ED5DD70FA6_marshaled_pinvoke
{
	NativeList_1_t37924D67F0E4D83DE506A261B7A05AE619630C80  ___ChangedAssets_0;
	NativeList_1_t37924D67F0E4D83DE506A261B7A05AE619630C80  ___DeletedAssets_1;
	NativeList_1_t37924D67F0E4D83DE506A261B7A05AE619630C80  ___RemovedInstanceIds_2;
	List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * ___ChangedGameObjects_3;
	List_1_tA3929E98F6AC5A6E95EF799D2E3294F214358C0F * ___ChangedComponents_4;
	NativeList_1_t37924D67F0E4D83DE506A261B7A05AE619630C80  ___ReconvertHierarchyRequests_5;
	NativeList_1_t37924D67F0E4D83DE506A261B7A05AE619630C80  ___ReconvertSingleRequests_6;
	NativeList_1_t37924D67F0E4D83DE506A261B7A05AE619630C80  ____changedGameObjectInstanceIds_7;
	NativeList_1_tC1B2ACAF93B58294FE63019BB607DF267B7D2C52  ___ParentChangeInstanceIds_8;
};
// Native definition for COM marshalling of Unity.Entities.Conversion.IncrementalConversionData
struct IncrementalConversionData_t0061035E6E6416DBD4488143EA4705ED5DD70FA6_marshaled_com
{
	NativeList_1_t37924D67F0E4D83DE506A261B7A05AE619630C80  ___ChangedAssets_0;
	NativeList_1_t37924D67F0E4D83DE506A261B7A05AE619630C80  ___DeletedAssets_1;
	NativeList_1_t37924D67F0E4D83DE506A261B7A05AE619630C80  ___RemovedInstanceIds_2;
	List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * ___ChangedGameObjects_3;
	List_1_tA3929E98F6AC5A6E95EF799D2E3294F214358C0F * ___ChangedComponents_4;
	NativeList_1_t37924D67F0E4D83DE506A261B7A05AE619630C80  ___ReconvertHierarchyRequests_5;
	NativeList_1_t37924D67F0E4D83DE506A261B7A05AE619630C80  ___ReconvertSingleRequests_6;
	NativeList_1_t37924D67F0E4D83DE506A261B7A05AE619630C80  ____changedGameObjectInstanceIds_7;
	NativeList_1_tC1B2ACAF93B58294FE63019BB607DF267B7D2C52  ___ParentChangeInstanceIds_8;
};

// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// Unity.Entities.WorldUnmanaged
struct WorldUnmanaged_t3D7386D577607F0071D19B5A2EEBFBA2B90A8DD7 
{
public:
	// Unity.Entities.WorldUnmanagedImpl* Unity.Entities.WorldUnmanaged::m_Impl
	WorldUnmanagedImpl_tF0B016C8B4F3F50C47B0FE9A703C9865A1A99967 * ___m_Impl_0;
	// Unity.Entities.EntityManager Unity.Entities.WorldUnmanaged::m_EntityManager
	EntityManager_t375E301E0D409D57A32EB6EEFEE4DCFA936B3FD0  ___m_EntityManager_1;

public:
	inline static int32_t get_offset_of_m_Impl_0() { return static_cast<int32_t>(offsetof(WorldUnmanaged_t3D7386D577607F0071D19B5A2EEBFBA2B90A8DD7, ___m_Impl_0)); }
	inline WorldUnmanagedImpl_tF0B016C8B4F3F50C47B0FE9A703C9865A1A99967 * get_m_Impl_0() const { return ___m_Impl_0; }
	inline WorldUnmanagedImpl_tF0B016C8B4F3F50C47B0FE9A703C9865A1A99967 ** get_address_of_m_Impl_0() { return &___m_Impl_0; }
	inline void set_m_Impl_0(WorldUnmanagedImpl_tF0B016C8B4F3F50C47B0FE9A703C9865A1A99967 * value)
	{
		___m_Impl_0 = value;
	}

	inline static int32_t get_offset_of_m_EntityManager_1() { return static_cast<int32_t>(offsetof(WorldUnmanaged_t3D7386D577607F0071D19B5A2EEBFBA2B90A8DD7, ___m_EntityManager_1)); }
	inline EntityManager_t375E301E0D409D57A32EB6EEFEE4DCFA936B3FD0  get_m_EntityManager_1() const { return ___m_EntityManager_1; }
	inline EntityManager_t375E301E0D409D57A32EB6EEFEE4DCFA936B3FD0 * get_address_of_m_EntityManager_1() { return &___m_EntityManager_1; }
	inline void set_m_EntityManager_1(EntityManager_t375E301E0D409D57A32EB6EEFEE4DCFA936B3FD0  value)
	{
		___m_EntityManager_1 = value;
	}
};

struct WorldUnmanaged_t3D7386D577607F0071D19B5A2EEBFBA2B90A8DD7_StaticFields
{
public:
	// Unity.Burst.SharedStatic`1<System.UInt64> Unity.Entities.WorldUnmanaged::ms_NextSequenceNumber
	SharedStatic_1_t3BF4833AD74181586FD1838757D84AD9921C1258  ___ms_NextSequenceNumber_2;

public:
	inline static int32_t get_offset_of_ms_NextSequenceNumber_2() { return static_cast<int32_t>(offsetof(WorldUnmanaged_t3D7386D577607F0071D19B5A2EEBFBA2B90A8DD7_StaticFields, ___ms_NextSequenceNumber_2)); }
	inline SharedStatic_1_t3BF4833AD74181586FD1838757D84AD9921C1258  get_ms_NextSequenceNumber_2() const { return ___ms_NextSequenceNumber_2; }
	inline SharedStatic_1_t3BF4833AD74181586FD1838757D84AD9921C1258 * get_address_of_ms_NextSequenceNumber_2() { return &___ms_NextSequenceNumber_2; }
	inline void set_ms_NextSequenceNumber_2(SharedStatic_1_t3BF4833AD74181586FD1838757D84AD9921C1258  value)
	{
		___ms_NextSequenceNumber_2 = value;
	}
};

// Native definition for P/Invoke marshalling of Unity.Entities.WorldUnmanaged
struct WorldUnmanaged_t3D7386D577607F0071D19B5A2EEBFBA2B90A8DD7_marshaled_pinvoke
{
	WorldUnmanagedImpl_tF0B016C8B4F3F50C47B0FE9A703C9865A1A99967 * ___m_Impl_0;
	EntityManager_t375E301E0D409D57A32EB6EEFEE4DCFA936B3FD0_marshaled_pinvoke ___m_EntityManager_1;
};
// Native definition for COM marshalling of Unity.Entities.WorldUnmanaged
struct WorldUnmanaged_t3D7386D577607F0071D19B5A2EEBFBA2B90A8DD7_marshaled_com
{
	WorldUnmanagedImpl_tF0B016C8B4F3F50C47B0FE9A703C9865A1A99967 * ___m_Impl_0;
	EntityManager_t375E301E0D409D57A32EB6EEFEE4DCFA936B3FD0_marshaled_com ___m_EntityManager_1;
};

// GameObjectConversion.ConversionLogUtils/<ParseConversionLog>d__0
struct U3CParseConversionLogU3Ed__0_t545008DA4AF19BE77424D4CC2D1D620EF42B9BD3  : public RuntimeObject
{
public:
	// System.Int32 GameObjectConversion.ConversionLogUtils/<ParseConversionLog>d__0::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.ValueTuple`2<GameObjectConversion.LogType,System.String> GameObjectConversion.ConversionLogUtils/<ParseConversionLog>d__0::<>2__current
	ValueTuple_2_t5123C212FD35A05E1C2FB02EC85E106EFA9B5782  ___U3CU3E2__current_1;
	// System.Int32 GameObjectConversion.ConversionLogUtils/<ParseConversionLog>d__0::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// System.String GameObjectConversion.ConversionLogUtils/<ParseConversionLog>d__0::conversionLogPath
	String_t* ___conversionLogPath_3;
	// System.String GameObjectConversion.ConversionLogUtils/<ParseConversionLog>d__0::<>3__conversionLogPath
	String_t* ___U3CU3E3__conversionLogPath_4;
	// GameObjectConversion.ConversionLogUtils/<>c__DisplayClass0_0 GameObjectConversion.ConversionLogUtils/<ParseConversionLog>d__0::<>8__1
	U3CU3Ec__DisplayClass0_0_t41624A5E3E9C403B934AB4EE05AF471AF6F77CF2  ___U3CU3E8__1_5;
	// System.Text.StringBuilder GameObjectConversion.ConversionLogUtils/<ParseConversionLog>d__0::<currentLog>5__2
	StringBuilder_t * ___U3CcurrentLogU3E5__2_6;
	// System.Collections.Generic.IEnumerator`1<System.String> GameObjectConversion.ConversionLogUtils/<ParseConversionLog>d__0::<>7__wrap2
	RuntimeObject* ___U3CU3E7__wrap2_7;
	// System.String GameObjectConversion.ConversionLogUtils/<ParseConversionLog>d__0::<line>5__4
	String_t* ___U3ClineU3E5__4_8;
	// GameObjectConversion.LogType GameObjectConversion.ConversionLogUtils/<ParseConversionLog>d__0::<logType>5__5
	int32_t ___U3ClogTypeU3E5__5_9;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CParseConversionLogU3Ed__0_t545008DA4AF19BE77424D4CC2D1D620EF42B9BD3, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CParseConversionLogU3Ed__0_t545008DA4AF19BE77424D4CC2D1D620EF42B9BD3, ___U3CU3E2__current_1)); }
	inline ValueTuple_2_t5123C212FD35A05E1C2FB02EC85E106EFA9B5782  get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline ValueTuple_2_t5123C212FD35A05E1C2FB02EC85E106EFA9B5782 * get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(ValueTuple_2_t5123C212FD35A05E1C2FB02EC85E106EFA9B5782  value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E2__current_1))->___Item2_1), (void*)NULL);
	}

	inline static int32_t get_offset_of_U3CU3El__initialThreadId_2() { return static_cast<int32_t>(offsetof(U3CParseConversionLogU3Ed__0_t545008DA4AF19BE77424D4CC2D1D620EF42B9BD3, ___U3CU3El__initialThreadId_2)); }
	inline int32_t get_U3CU3El__initialThreadId_2() const { return ___U3CU3El__initialThreadId_2; }
	inline int32_t* get_address_of_U3CU3El__initialThreadId_2() { return &___U3CU3El__initialThreadId_2; }
	inline void set_U3CU3El__initialThreadId_2(int32_t value)
	{
		___U3CU3El__initialThreadId_2 = value;
	}

	inline static int32_t get_offset_of_conversionLogPath_3() { return static_cast<int32_t>(offsetof(U3CParseConversionLogU3Ed__0_t545008DA4AF19BE77424D4CC2D1D620EF42B9BD3, ___conversionLogPath_3)); }
	inline String_t* get_conversionLogPath_3() const { return ___conversionLogPath_3; }
	inline String_t** get_address_of_conversionLogPath_3() { return &___conversionLogPath_3; }
	inline void set_conversionLogPath_3(String_t* value)
	{
		___conversionLogPath_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___conversionLogPath_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E3__conversionLogPath_4() { return static_cast<int32_t>(offsetof(U3CParseConversionLogU3Ed__0_t545008DA4AF19BE77424D4CC2D1D620EF42B9BD3, ___U3CU3E3__conversionLogPath_4)); }
	inline String_t* get_U3CU3E3__conversionLogPath_4() const { return ___U3CU3E3__conversionLogPath_4; }
	inline String_t** get_address_of_U3CU3E3__conversionLogPath_4() { return &___U3CU3E3__conversionLogPath_4; }
	inline void set_U3CU3E3__conversionLogPath_4(String_t* value)
	{
		___U3CU3E3__conversionLogPath_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E3__conversionLogPath_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E8__1_5() { return static_cast<int32_t>(offsetof(U3CParseConversionLogU3Ed__0_t545008DA4AF19BE77424D4CC2D1D620EF42B9BD3, ___U3CU3E8__1_5)); }
	inline U3CU3Ec__DisplayClass0_0_t41624A5E3E9C403B934AB4EE05AF471AF6F77CF2  get_U3CU3E8__1_5() const { return ___U3CU3E8__1_5; }
	inline U3CU3Ec__DisplayClass0_0_t41624A5E3E9C403B934AB4EE05AF471AF6F77CF2 * get_address_of_U3CU3E8__1_5() { return &___U3CU3E8__1_5; }
	inline void set_U3CU3E8__1_5(U3CU3Ec__DisplayClass0_0_t41624A5E3E9C403B934AB4EE05AF471AF6F77CF2  value)
	{
		___U3CU3E8__1_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E8__1_5))->___allLogTypes_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_U3CcurrentLogU3E5__2_6() { return static_cast<int32_t>(offsetof(U3CParseConversionLogU3Ed__0_t545008DA4AF19BE77424D4CC2D1D620EF42B9BD3, ___U3CcurrentLogU3E5__2_6)); }
	inline StringBuilder_t * get_U3CcurrentLogU3E5__2_6() const { return ___U3CcurrentLogU3E5__2_6; }
	inline StringBuilder_t ** get_address_of_U3CcurrentLogU3E5__2_6() { return &___U3CcurrentLogU3E5__2_6; }
	inline void set_U3CcurrentLogU3E5__2_6(StringBuilder_t * value)
	{
		___U3CcurrentLogU3E5__2_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CcurrentLogU3E5__2_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap2_7() { return static_cast<int32_t>(offsetof(U3CParseConversionLogU3Ed__0_t545008DA4AF19BE77424D4CC2D1D620EF42B9BD3, ___U3CU3E7__wrap2_7)); }
	inline RuntimeObject* get_U3CU3E7__wrap2_7() const { return ___U3CU3E7__wrap2_7; }
	inline RuntimeObject** get_address_of_U3CU3E7__wrap2_7() { return &___U3CU3E7__wrap2_7; }
	inline void set_U3CU3E7__wrap2_7(RuntimeObject* value)
	{
		___U3CU3E7__wrap2_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E7__wrap2_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3ClineU3E5__4_8() { return static_cast<int32_t>(offsetof(U3CParseConversionLogU3Ed__0_t545008DA4AF19BE77424D4CC2D1D620EF42B9BD3, ___U3ClineU3E5__4_8)); }
	inline String_t* get_U3ClineU3E5__4_8() const { return ___U3ClineU3E5__4_8; }
	inline String_t** get_address_of_U3ClineU3E5__4_8() { return &___U3ClineU3E5__4_8; }
	inline void set_U3ClineU3E5__4_8(String_t* value)
	{
		___U3ClineU3E5__4_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3ClineU3E5__4_8), (void*)value);
	}

	inline static int32_t get_offset_of_U3ClogTypeU3E5__5_9() { return static_cast<int32_t>(offsetof(U3CParseConversionLogU3Ed__0_t545008DA4AF19BE77424D4CC2D1D620EF42B9BD3, ___U3ClogTypeU3E5__5_9)); }
	inline int32_t get_U3ClogTypeU3E5__5_9() const { return ___U3ClogTypeU3E5__5_9; }
	inline int32_t* get_address_of_U3ClogTypeU3E5__5_9() { return &___U3ClogTypeU3E5__5_9; }
	inline void set_U3ClogTypeU3E5__5_9(int32_t value)
	{
		___U3ClogTypeU3E5__5_9 = value;
	}
};


// Unity.Entities.Conversion.IncrementalConversionContext/RemoveFromHierarchy/Exec
struct Exec_t13626ECD14E784C7148B8520FD71A4D0A5468675  : public MulticastDelegate_t
{
public:

public:
};


// Unity.Collections.NativeMultiHashMap`2/Enumerator<System.Int32,System.Int32>
struct Enumerator_tCBD2A52574F899C4C90698BB0A64BD8557E28A1A 
{
public:
	// Unity.Collections.NativeMultiHashMap`2<TKey,TValue> Unity.Collections.NativeMultiHashMap`2/Enumerator::hashmap
	NativeMultiHashMap_2_t4328C288A94A6BE03785C8FF74A83E3DF6AB7A56  ___hashmap_0;
	// TKey Unity.Collections.NativeMultiHashMap`2/Enumerator::key
	int32_t ___key_1;
	// System.Boolean Unity.Collections.NativeMultiHashMap`2/Enumerator::isFirst
	bool ___isFirst_2;
	// TValue Unity.Collections.NativeMultiHashMap`2/Enumerator::value
	int32_t ___value_3;
	// Unity.Collections.NativeMultiHashMapIterator`1<TKey> Unity.Collections.NativeMultiHashMap`2/Enumerator::iterator
	NativeMultiHashMapIterator_1_tC41C31BDDC7265EE318B3488B3D577BE3731E026  ___iterator_4;

public:
	inline static int32_t get_offset_of_hashmap_0() { return static_cast<int32_t>(offsetof(Enumerator_tCBD2A52574F899C4C90698BB0A64BD8557E28A1A, ___hashmap_0)); }
	inline NativeMultiHashMap_2_t4328C288A94A6BE03785C8FF74A83E3DF6AB7A56  get_hashmap_0() const { return ___hashmap_0; }
	inline NativeMultiHashMap_2_t4328C288A94A6BE03785C8FF74A83E3DF6AB7A56 * get_address_of_hashmap_0() { return &___hashmap_0; }
	inline void set_hashmap_0(NativeMultiHashMap_2_t4328C288A94A6BE03785C8FF74A83E3DF6AB7A56  value)
	{
		___hashmap_0 = value;
	}

	inline static int32_t get_offset_of_key_1() { return static_cast<int32_t>(offsetof(Enumerator_tCBD2A52574F899C4C90698BB0A64BD8557E28A1A, ___key_1)); }
	inline int32_t get_key_1() const { return ___key_1; }
	inline int32_t* get_address_of_key_1() { return &___key_1; }
	inline void set_key_1(int32_t value)
	{
		___key_1 = value;
	}

	inline static int32_t get_offset_of_isFirst_2() { return static_cast<int32_t>(offsetof(Enumerator_tCBD2A52574F899C4C90698BB0A64BD8557E28A1A, ___isFirst_2)); }
	inline bool get_isFirst_2() const { return ___isFirst_2; }
	inline bool* get_address_of_isFirst_2() { return &___isFirst_2; }
	inline void set_isFirst_2(bool value)
	{
		___isFirst_2 = value;
	}

	inline static int32_t get_offset_of_value_3() { return static_cast<int32_t>(offsetof(Enumerator_tCBD2A52574F899C4C90698BB0A64BD8557E28A1A, ___value_3)); }
	inline int32_t get_value_3() const { return ___value_3; }
	inline int32_t* get_address_of_value_3() { return &___value_3; }
	inline void set_value_3(int32_t value)
	{
		___value_3 = value;
	}

	inline static int32_t get_offset_of_iterator_4() { return static_cast<int32_t>(offsetof(Enumerator_tCBD2A52574F899C4C90698BB0A64BD8557E28A1A, ___iterator_4)); }
	inline NativeMultiHashMapIterator_1_tC41C31BDDC7265EE318B3488B3D577BE3731E026  get_iterator_4() const { return ___iterator_4; }
	inline NativeMultiHashMapIterator_1_tC41C31BDDC7265EE318B3488B3D577BE3731E026 * get_address_of_iterator_4() { return &___iterator_4; }
	inline void set_iterator_4(NativeMultiHashMapIterator_1_tC41C31BDDC7265EE318B3488B3D577BE3731E026  value)
	{
		___iterator_4 = value;
	}
};


// Unity.Entities.Conversion.MultiList`2<Unity.Entities.Entity,Unity.Entities.Conversion.MultiListNativeArrayData`1<Unity.Entities.Entity>>
struct MultiList_2_t1541CFF032FBFF28E5984B09B890CD38D4D26142 
{
public:
	// Unity.Collections.NativeArray`1<System.Int32> Unity.Entities.Conversion.MultiList`2::HeadIds
	NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99  ___HeadIds_0;
	// Unity.Collections.NativeArray`1<System.Int32> Unity.Entities.Conversion.MultiList`2::Next
	NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99  ___Next_1;
	// System.Int32 Unity.Entities.Conversion.MultiList`2::NextFree
	int32_t ___NextFree_2;
	// I Unity.Entities.Conversion.MultiList`2::Data
	MultiListNativeArrayData_1_tA534DDE7059DAC272EF3ADB43459906C6CCA7F93  ___Data_3;

public:
	inline static int32_t get_offset_of_HeadIds_0() { return static_cast<int32_t>(offsetof(MultiList_2_t1541CFF032FBFF28E5984B09B890CD38D4D26142, ___HeadIds_0)); }
	inline NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99  get_HeadIds_0() const { return ___HeadIds_0; }
	inline NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99 * get_address_of_HeadIds_0() { return &___HeadIds_0; }
	inline void set_HeadIds_0(NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99  value)
	{
		___HeadIds_0 = value;
	}

	inline static int32_t get_offset_of_Next_1() { return static_cast<int32_t>(offsetof(MultiList_2_t1541CFF032FBFF28E5984B09B890CD38D4D26142, ___Next_1)); }
	inline NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99  get_Next_1() const { return ___Next_1; }
	inline NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99 * get_address_of_Next_1() { return &___Next_1; }
	inline void set_Next_1(NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99  value)
	{
		___Next_1 = value;
	}

	inline static int32_t get_offset_of_NextFree_2() { return static_cast<int32_t>(offsetof(MultiList_2_t1541CFF032FBFF28E5984B09B890CD38D4D26142, ___NextFree_2)); }
	inline int32_t get_NextFree_2() const { return ___NextFree_2; }
	inline int32_t* get_address_of_NextFree_2() { return &___NextFree_2; }
	inline void set_NextFree_2(int32_t value)
	{
		___NextFree_2 = value;
	}

	inline static int32_t get_offset_of_Data_3() { return static_cast<int32_t>(offsetof(MultiList_2_t1541CFF032FBFF28E5984B09B890CD38D4D26142, ___Data_3)); }
	inline MultiListNativeArrayData_1_tA534DDE7059DAC272EF3ADB43459906C6CCA7F93  get_Data_3() const { return ___Data_3; }
	inline MultiListNativeArrayData_1_tA534DDE7059DAC272EF3ADB43459906C6CCA7F93 * get_address_of_Data_3() { return &___Data_3; }
	inline void set_Data_3(MultiListNativeArrayData_1_tA534DDE7059DAC272EF3ADB43459906C6CCA7F93  value)
	{
		___Data_3 = value;
	}
};


// Unity.Collections.NativeHashSet`1<System.Int32>
struct NativeHashSet_1_t88F362074B652B4D4F194604B629EE17A41B3976 
{
public:
	// Unity.Collections.NativeHashMap`2<T,System.Boolean> Unity.Collections.NativeHashSet`1::m_Data
	NativeHashMap_2_t977D8B51ED64BBFA8F25F7393936358BC6087EBB  ___m_Data_0;

public:
	inline static int32_t get_offset_of_m_Data_0() { return static_cast<int32_t>(offsetof(NativeHashSet_1_t88F362074B652B4D4F194604B629EE17A41B3976, ___m_Data_0)); }
	inline NativeHashMap_2_t977D8B51ED64BBFA8F25F7393936358BC6087EBB  get_m_Data_0() const { return ___m_Data_0; }
	inline NativeHashMap_2_t977D8B51ED64BBFA8F25F7393936358BC6087EBB * get_address_of_m_Data_0() { return &___m_Data_0; }
	inline void set_m_Data_0(NativeHashMap_2_t977D8B51ED64BBFA8F25F7393936358BC6087EBB  value)
	{
		___m_Data_0 = value;
	}
};


// GameObjectConversionSystem
struct GameObjectConversionSystem_t1E3F2F994B0CADEDBDE17FFD785BFBD780433A41  : public ComponentSystem_t258C48C930D4C2524A052337E22D95554615F98C
{
public:
	// Unity.Entities.Conversion.GameObjectConversionMappingSystem GameObjectConversionSystem::m_MappingSystem
	GameObjectConversionMappingSystem_tD834531091319F873FDC1E5EDB439CE9654312DD * ___m_MappingSystem_3;

public:
	inline static int32_t get_offset_of_m_MappingSystem_3() { return static_cast<int32_t>(offsetof(GameObjectConversionSystem_t1E3F2F994B0CADEDBDE17FFD785BFBD780433A41, ___m_MappingSystem_3)); }
	inline GameObjectConversionMappingSystem_tD834531091319F873FDC1E5EDB439CE9654312DD * get_m_MappingSystem_3() const { return ___m_MappingSystem_3; }
	inline GameObjectConversionMappingSystem_tD834531091319F873FDC1E5EDB439CE9654312DD ** get_address_of_m_MappingSystem_3() { return &___m_MappingSystem_3; }
	inline void set_m_MappingSystem_3(GameObjectConversionMappingSystem_tD834531091319F873FDC1E5EDB439CE9654312DD * value)
	{
		___m_MappingSystem_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MappingSystem_3), (void*)value);
	}
};


// Unity.Entities.Conversion.IncrementalHierarchy
struct IncrementalHierarchy_t8D79F54D0D4356A9D0CC9C596D9E8A1B2CEDA8FC 
{
public:
	// Unity.Collections.NativeList`1<System.Int32> Unity.Entities.Conversion.IncrementalHierarchy::InstanceId
	NativeList_1_t37924D67F0E4D83DE506A261B7A05AE619630C80  ___InstanceId_0;
	// Unity.Collections.NativeList`1<System.Int32> Unity.Entities.Conversion.IncrementalHierarchy::ParentIndex
	NativeList_1_t37924D67F0E4D83DE506A261B7A05AE619630C80  ___ParentIndex_1;
	// UnityEngine.Jobs.TransformAccessArray Unity.Entities.Conversion.IncrementalHierarchy::TransformArray
	TransformAccessArray_t676ED880D1A6275E04515FACDA438C07E11A2A6E  ___TransformArray_2;
	// Unity.Collections.NativeMultiHashMap`2<System.Int32,System.Int32> Unity.Entities.Conversion.IncrementalHierarchy::ChildIndicesByIndex
	NativeMultiHashMap_2_t4328C288A94A6BE03785C8FF74A83E3DF6AB7A56  ___ChildIndicesByIndex_3;
	// Unity.Collections.NativeHashMap`2<System.Int32,System.Int32> Unity.Entities.Conversion.IncrementalHierarchy::IndexByInstanceId
	NativeHashMap_2_tA2C896278E1577EA31B2632511A058B9731235C2  ___IndexByInstanceId_4;

public:
	inline static int32_t get_offset_of_InstanceId_0() { return static_cast<int32_t>(offsetof(IncrementalHierarchy_t8D79F54D0D4356A9D0CC9C596D9E8A1B2CEDA8FC, ___InstanceId_0)); }
	inline NativeList_1_t37924D67F0E4D83DE506A261B7A05AE619630C80  get_InstanceId_0() const { return ___InstanceId_0; }
	inline NativeList_1_t37924D67F0E4D83DE506A261B7A05AE619630C80 * get_address_of_InstanceId_0() { return &___InstanceId_0; }
	inline void set_InstanceId_0(NativeList_1_t37924D67F0E4D83DE506A261B7A05AE619630C80  value)
	{
		___InstanceId_0 = value;
	}

	inline static int32_t get_offset_of_ParentIndex_1() { return static_cast<int32_t>(offsetof(IncrementalHierarchy_t8D79F54D0D4356A9D0CC9C596D9E8A1B2CEDA8FC, ___ParentIndex_1)); }
	inline NativeList_1_t37924D67F0E4D83DE506A261B7A05AE619630C80  get_ParentIndex_1() const { return ___ParentIndex_1; }
	inline NativeList_1_t37924D67F0E4D83DE506A261B7A05AE619630C80 * get_address_of_ParentIndex_1() { return &___ParentIndex_1; }
	inline void set_ParentIndex_1(NativeList_1_t37924D67F0E4D83DE506A261B7A05AE619630C80  value)
	{
		___ParentIndex_1 = value;
	}

	inline static int32_t get_offset_of_TransformArray_2() { return static_cast<int32_t>(offsetof(IncrementalHierarchy_t8D79F54D0D4356A9D0CC9C596D9E8A1B2CEDA8FC, ___TransformArray_2)); }
	inline TransformAccessArray_t676ED880D1A6275E04515FACDA438C07E11A2A6E  get_TransformArray_2() const { return ___TransformArray_2; }
	inline TransformAccessArray_t676ED880D1A6275E04515FACDA438C07E11A2A6E * get_address_of_TransformArray_2() { return &___TransformArray_2; }
	inline void set_TransformArray_2(TransformAccessArray_t676ED880D1A6275E04515FACDA438C07E11A2A6E  value)
	{
		___TransformArray_2 = value;
	}

	inline static int32_t get_offset_of_ChildIndicesByIndex_3() { return static_cast<int32_t>(offsetof(IncrementalHierarchy_t8D79F54D0D4356A9D0CC9C596D9E8A1B2CEDA8FC, ___ChildIndicesByIndex_3)); }
	inline NativeMultiHashMap_2_t4328C288A94A6BE03785C8FF74A83E3DF6AB7A56  get_ChildIndicesByIndex_3() const { return ___ChildIndicesByIndex_3; }
	inline NativeMultiHashMap_2_t4328C288A94A6BE03785C8FF74A83E3DF6AB7A56 * get_address_of_ChildIndicesByIndex_3() { return &___ChildIndicesByIndex_3; }
	inline void set_ChildIndicesByIndex_3(NativeMultiHashMap_2_t4328C288A94A6BE03785C8FF74A83E3DF6AB7A56  value)
	{
		___ChildIndicesByIndex_3 = value;
	}

	inline static int32_t get_offset_of_IndexByInstanceId_4() { return static_cast<int32_t>(offsetof(IncrementalHierarchy_t8D79F54D0D4356A9D0CC9C596D9E8A1B2CEDA8FC, ___IndexByInstanceId_4)); }
	inline NativeHashMap_2_tA2C896278E1577EA31B2632511A058B9731235C2  get_IndexByInstanceId_4() const { return ___IndexByInstanceId_4; }
	inline NativeHashMap_2_tA2C896278E1577EA31B2632511A058B9731235C2 * get_address_of_IndexByInstanceId_4() { return &___IndexByInstanceId_4; }
	inline void set_IndexByInstanceId_4(NativeHashMap_2_tA2C896278E1577EA31B2632511A058B9731235C2  value)
	{
		___IndexByInstanceId_4 = value;
	}
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072  : public Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1
{
public:

public:
};

struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_StaticFields
{
public:
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE * ___reapplyDrivenProperties_4;

public:
	inline static int32_t get_offset_of_reapplyDrivenProperties_4() { return static_cast<int32_t>(offsetof(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_StaticFields, ___reapplyDrivenProperties_4)); }
	inline ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE * get_reapplyDrivenProperties_4() const { return ___reapplyDrivenProperties_4; }
	inline ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE ** get_address_of_reapplyDrivenProperties_4() { return &___reapplyDrivenProperties_4; }
	inline void set_reapplyDrivenProperties_4(ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE * value)
	{
		___reapplyDrivenProperties_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___reapplyDrivenProperties_4), (void*)value);
	}
};


// Unity.Entities.Conversion.SceneHierarchy
struct SceneHierarchy_tD5CB36F0069FD8DBC527EC7B6E17F9780204C258 
{
public:
	// Unity.Collections.NativeArray`1<System.Int32> Unity.Entities.Conversion.SceneHierarchy::_instanceId
	NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99  ____instanceId_0;
	// Unity.Collections.NativeArray`1<System.Int32> Unity.Entities.Conversion.SceneHierarchy::_parentIndex
	NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99  ____parentIndex_1;
	// Unity.Collections.NativeHashMap`2<System.Int32,System.Int32> Unity.Entities.Conversion.SceneHierarchy::_indexByInstanceId
	NativeHashMap_2_tA2C896278E1577EA31B2632511A058B9731235C2  ____indexByInstanceId_2;
	// Unity.Collections.NativeMultiHashMap`2<System.Int32,System.Int32> Unity.Entities.Conversion.SceneHierarchy::_childIndicesByIndex
	NativeMultiHashMap_2_t4328C288A94A6BE03785C8FF74A83E3DF6AB7A56  ____childIndicesByIndex_3;

public:
	inline static int32_t get_offset_of__instanceId_0() { return static_cast<int32_t>(offsetof(SceneHierarchy_tD5CB36F0069FD8DBC527EC7B6E17F9780204C258, ____instanceId_0)); }
	inline NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99  get__instanceId_0() const { return ____instanceId_0; }
	inline NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99 * get_address_of__instanceId_0() { return &____instanceId_0; }
	inline void set__instanceId_0(NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99  value)
	{
		____instanceId_0 = value;
	}

	inline static int32_t get_offset_of__parentIndex_1() { return static_cast<int32_t>(offsetof(SceneHierarchy_tD5CB36F0069FD8DBC527EC7B6E17F9780204C258, ____parentIndex_1)); }
	inline NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99  get__parentIndex_1() const { return ____parentIndex_1; }
	inline NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99 * get_address_of__parentIndex_1() { return &____parentIndex_1; }
	inline void set__parentIndex_1(NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99  value)
	{
		____parentIndex_1 = value;
	}

	inline static int32_t get_offset_of__indexByInstanceId_2() { return static_cast<int32_t>(offsetof(SceneHierarchy_tD5CB36F0069FD8DBC527EC7B6E17F9780204C258, ____indexByInstanceId_2)); }
	inline NativeHashMap_2_tA2C896278E1577EA31B2632511A058B9731235C2  get__indexByInstanceId_2() const { return ____indexByInstanceId_2; }
	inline NativeHashMap_2_tA2C896278E1577EA31B2632511A058B9731235C2 * get_address_of__indexByInstanceId_2() { return &____indexByInstanceId_2; }
	inline void set__indexByInstanceId_2(NativeHashMap_2_tA2C896278E1577EA31B2632511A058B9731235C2  value)
	{
		____indexByInstanceId_2 = value;
	}

	inline static int32_t get_offset_of__childIndicesByIndex_3() { return static_cast<int32_t>(offsetof(SceneHierarchy_tD5CB36F0069FD8DBC527EC7B6E17F9780204C258, ____childIndicesByIndex_3)); }
	inline NativeMultiHashMap_2_t4328C288A94A6BE03785C8FF74A83E3DF6AB7A56  get__childIndicesByIndex_3() const { return ____childIndicesByIndex_3; }
	inline NativeMultiHashMap_2_t4328C288A94A6BE03785C8FF74A83E3DF6AB7A56 * get_address_of__childIndicesByIndex_3() { return &____childIndicesByIndex_3; }
	inline void set__childIndicesByIndex_3(NativeMultiHashMap_2_t4328C288A94A6BE03785C8FF74A83E3DF6AB7A56  value)
	{
		____childIndicesByIndex_3 = value;
	}
};


// Unity.Entities.World
struct World_tC5274CBB5238670C9A07FA5705DD82B5196C9A07  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<System.Type,Unity.Entities.ComponentSystemBase> Unity.Entities.World::m_SystemLookup
	Dictionary_2_tD6066C27E39214D9F5B08C241F9C5FB62A7B63B3 * ___m_SystemLookup_2;
	// System.Collections.Generic.List`1<Unity.Entities.ComponentSystemBase> Unity.Entities.World::m_Systems
	List_1_t3F15B202D7C7B7EEB8B86FFA8C5D2156C6F32C78 * ___m_Systems_4;
	// Unity.Entities.World/NoAllocReadOnlyCollection`1<Unity.Entities.ComponentSystemBase> Unity.Entities.World::<Systems>k__BackingField
	NoAllocReadOnlyCollection_1_t3ECE9AA8150FFEF9B06892853E38309BF4091FB5  ___U3CSystemsU3Ek__BackingField_5;
	// Unity.Entities.WorldUnmanaged Unity.Entities.World::m_Unmanaged
	WorldUnmanaged_t3D7386D577607F0071D19B5A2EEBFBA2B90A8DD7  ___m_Unmanaged_6;
	// System.String Unity.Entities.World::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_7;
	// Unity.Entities.EntityQuery Unity.Entities.World::m_TimeSingletonQuery
	EntityQuery_tDCA25A292AF939DB4C25632A20819FADAF418109  ___m_TimeSingletonQuery_8;
	// System.Boolean Unity.Entities.World::<QuitUpdate>k__BackingField
	bool ___U3CQuitUpdateU3Ek__BackingField_9;

public:
	inline static int32_t get_offset_of_m_SystemLookup_2() { return static_cast<int32_t>(offsetof(World_tC5274CBB5238670C9A07FA5705DD82B5196C9A07, ___m_SystemLookup_2)); }
	inline Dictionary_2_tD6066C27E39214D9F5B08C241F9C5FB62A7B63B3 * get_m_SystemLookup_2() const { return ___m_SystemLookup_2; }
	inline Dictionary_2_tD6066C27E39214D9F5B08C241F9C5FB62A7B63B3 ** get_address_of_m_SystemLookup_2() { return &___m_SystemLookup_2; }
	inline void set_m_SystemLookup_2(Dictionary_2_tD6066C27E39214D9F5B08C241F9C5FB62A7B63B3 * value)
	{
		___m_SystemLookup_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SystemLookup_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Systems_4() { return static_cast<int32_t>(offsetof(World_tC5274CBB5238670C9A07FA5705DD82B5196C9A07, ___m_Systems_4)); }
	inline List_1_t3F15B202D7C7B7EEB8B86FFA8C5D2156C6F32C78 * get_m_Systems_4() const { return ___m_Systems_4; }
	inline List_1_t3F15B202D7C7B7EEB8B86FFA8C5D2156C6F32C78 ** get_address_of_m_Systems_4() { return &___m_Systems_4; }
	inline void set_m_Systems_4(List_1_t3F15B202D7C7B7EEB8B86FFA8C5D2156C6F32C78 * value)
	{
		___m_Systems_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Systems_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CSystemsU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(World_tC5274CBB5238670C9A07FA5705DD82B5196C9A07, ___U3CSystemsU3Ek__BackingField_5)); }
	inline NoAllocReadOnlyCollection_1_t3ECE9AA8150FFEF9B06892853E38309BF4091FB5  get_U3CSystemsU3Ek__BackingField_5() const { return ___U3CSystemsU3Ek__BackingField_5; }
	inline NoAllocReadOnlyCollection_1_t3ECE9AA8150FFEF9B06892853E38309BF4091FB5 * get_address_of_U3CSystemsU3Ek__BackingField_5() { return &___U3CSystemsU3Ek__BackingField_5; }
	inline void set_U3CSystemsU3Ek__BackingField_5(NoAllocReadOnlyCollection_1_t3ECE9AA8150FFEF9B06892853E38309BF4091FB5  value)
	{
		___U3CSystemsU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CSystemsU3Ek__BackingField_5))->___m_Source_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_Unmanaged_6() { return static_cast<int32_t>(offsetof(World_tC5274CBB5238670C9A07FA5705DD82B5196C9A07, ___m_Unmanaged_6)); }
	inline WorldUnmanaged_t3D7386D577607F0071D19B5A2EEBFBA2B90A8DD7  get_m_Unmanaged_6() const { return ___m_Unmanaged_6; }
	inline WorldUnmanaged_t3D7386D577607F0071D19B5A2EEBFBA2B90A8DD7 * get_address_of_m_Unmanaged_6() { return &___m_Unmanaged_6; }
	inline void set_m_Unmanaged_6(WorldUnmanaged_t3D7386D577607F0071D19B5A2EEBFBA2B90A8DD7  value)
	{
		___m_Unmanaged_6 = value;
	}

	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(World_tC5274CBB5238670C9A07FA5705DD82B5196C9A07, ___U3CNameU3Ek__BackingField_7)); }
	inline String_t* get_U3CNameU3Ek__BackingField_7() const { return ___U3CNameU3Ek__BackingField_7; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_7() { return &___U3CNameU3Ek__BackingField_7; }
	inline void set_U3CNameU3Ek__BackingField_7(String_t* value)
	{
		___U3CNameU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNameU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_TimeSingletonQuery_8() { return static_cast<int32_t>(offsetof(World_tC5274CBB5238670C9A07FA5705DD82B5196C9A07, ___m_TimeSingletonQuery_8)); }
	inline EntityQuery_tDCA25A292AF939DB4C25632A20819FADAF418109  get_m_TimeSingletonQuery_8() const { return ___m_TimeSingletonQuery_8; }
	inline EntityQuery_tDCA25A292AF939DB4C25632A20819FADAF418109 * get_address_of_m_TimeSingletonQuery_8() { return &___m_TimeSingletonQuery_8; }
	inline void set_m_TimeSingletonQuery_8(EntityQuery_tDCA25A292AF939DB4C25632A20819FADAF418109  value)
	{
		___m_TimeSingletonQuery_8 = value;
	}

	inline static int32_t get_offset_of_U3CQuitUpdateU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(World_tC5274CBB5238670C9A07FA5705DD82B5196C9A07, ___U3CQuitUpdateU3Ek__BackingField_9)); }
	inline bool get_U3CQuitUpdateU3Ek__BackingField_9() const { return ___U3CQuitUpdateU3Ek__BackingField_9; }
	inline bool* get_address_of_U3CQuitUpdateU3Ek__BackingField_9() { return &___U3CQuitUpdateU3Ek__BackingField_9; }
	inline void set_U3CQuitUpdateU3Ek__BackingField_9(bool value)
	{
		___U3CQuitUpdateU3Ek__BackingField_9 = value;
	}
};

struct World_tC5274CBB5238670C9A07FA5705DD82B5196C9A07_StaticFields
{
public:
	// System.Collections.Generic.List`1<Unity.Entities.World> Unity.Entities.World::s_AllWorlds
	List_1_t84AC7439EE119A84B7D9198C8EB4AC483255C192 * ___s_AllWorlds_0;
	// Unity.Entities.World Unity.Entities.World::<DefaultGameObjectInjectionWorld>k__BackingField
	World_tC5274CBB5238670C9A07FA5705DD82B5196C9A07 * ___U3CDefaultGameObjectInjectionWorldU3Ek__BackingField_1;
	// Unity.Entities.World/NoAllocReadOnlyCollection`1<Unity.Entities.World> Unity.Entities.World::<All>k__BackingField
	NoAllocReadOnlyCollection_1_t80544BA80B59053667CC4B79E3461635AA6E5EE4  ___U3CAllU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_s_AllWorlds_0() { return static_cast<int32_t>(offsetof(World_tC5274CBB5238670C9A07FA5705DD82B5196C9A07_StaticFields, ___s_AllWorlds_0)); }
	inline List_1_t84AC7439EE119A84B7D9198C8EB4AC483255C192 * get_s_AllWorlds_0() const { return ___s_AllWorlds_0; }
	inline List_1_t84AC7439EE119A84B7D9198C8EB4AC483255C192 ** get_address_of_s_AllWorlds_0() { return &___s_AllWorlds_0; }
	inline void set_s_AllWorlds_0(List_1_t84AC7439EE119A84B7D9198C8EB4AC483255C192 * value)
	{
		___s_AllWorlds_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_AllWorlds_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CDefaultGameObjectInjectionWorldU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(World_tC5274CBB5238670C9A07FA5705DD82B5196C9A07_StaticFields, ___U3CDefaultGameObjectInjectionWorldU3Ek__BackingField_1)); }
	inline World_tC5274CBB5238670C9A07FA5705DD82B5196C9A07 * get_U3CDefaultGameObjectInjectionWorldU3Ek__BackingField_1() const { return ___U3CDefaultGameObjectInjectionWorldU3Ek__BackingField_1; }
	inline World_tC5274CBB5238670C9A07FA5705DD82B5196C9A07 ** get_address_of_U3CDefaultGameObjectInjectionWorldU3Ek__BackingField_1() { return &___U3CDefaultGameObjectInjectionWorldU3Ek__BackingField_1; }
	inline void set_U3CDefaultGameObjectInjectionWorldU3Ek__BackingField_1(World_tC5274CBB5238670C9A07FA5705DD82B5196C9A07 * value)
	{
		___U3CDefaultGameObjectInjectionWorldU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDefaultGameObjectInjectionWorldU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CAllU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(World_tC5274CBB5238670C9A07FA5705DD82B5196C9A07_StaticFields, ___U3CAllU3Ek__BackingField_3)); }
	inline NoAllocReadOnlyCollection_1_t80544BA80B59053667CC4B79E3461635AA6E5EE4  get_U3CAllU3Ek__BackingField_3() const { return ___U3CAllU3Ek__BackingField_3; }
	inline NoAllocReadOnlyCollection_1_t80544BA80B59053667CC4B79E3461635AA6E5EE4 * get_address_of_U3CAllU3Ek__BackingField_3() { return &___U3CAllU3Ek__BackingField_3; }
	inline void set_U3CAllU3Ek__BackingField_3(NoAllocReadOnlyCollection_1_t80544BA80B59053667CC4B79E3461635AA6E5EE4  value)
	{
		___U3CAllU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CAllU3Ek__BackingField_3))->___m_Source_0), (void*)NULL);
	}
};


// Unity.Entities.DependencyTracker/CollectDependencies
struct CollectDependencies_t8F4396371AA9FE16C7871EDE545853FF084F3DB5 
{
public:
	// Unity.Entities.DependencyTracker Unity.Entities.DependencyTracker/CollectDependencies::Dependencies
	DependencyTracker_t1E00B24B7D3375633864E7895FB5C4D3CD5627BB  ___Dependencies_0;
	// Unity.Collections.NativeList`1<System.Int32> Unity.Entities.DependencyTracker/CollectDependencies::OutputIds
	NativeList_1_t37924D67F0E4D83DE506A261B7A05AE619630C80  ___OutputIds_1;
	// Unity.Collections.NativeArray`1<System.Int32> Unity.Entities.DependencyTracker/CollectDependencies::ChangedInstanceIds
	NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99  ___ChangedInstanceIds_2;

public:
	inline static int32_t get_offset_of_Dependencies_0() { return static_cast<int32_t>(offsetof(CollectDependencies_t8F4396371AA9FE16C7871EDE545853FF084F3DB5, ___Dependencies_0)); }
	inline DependencyTracker_t1E00B24B7D3375633864E7895FB5C4D3CD5627BB  get_Dependencies_0() const { return ___Dependencies_0; }
	inline DependencyTracker_t1E00B24B7D3375633864E7895FB5C4D3CD5627BB * get_address_of_Dependencies_0() { return &___Dependencies_0; }
	inline void set_Dependencies_0(DependencyTracker_t1E00B24B7D3375633864E7895FB5C4D3CD5627BB  value)
	{
		___Dependencies_0 = value;
	}

	inline static int32_t get_offset_of_OutputIds_1() { return static_cast<int32_t>(offsetof(CollectDependencies_t8F4396371AA9FE16C7871EDE545853FF084F3DB5, ___OutputIds_1)); }
	inline NativeList_1_t37924D67F0E4D83DE506A261B7A05AE619630C80  get_OutputIds_1() const { return ___OutputIds_1; }
	inline NativeList_1_t37924D67F0E4D83DE506A261B7A05AE619630C80 * get_address_of_OutputIds_1() { return &___OutputIds_1; }
	inline void set_OutputIds_1(NativeList_1_t37924D67F0E4D83DE506A261B7A05AE619630C80  value)
	{
		___OutputIds_1 = value;
	}

	inline static int32_t get_offset_of_ChangedInstanceIds_2() { return static_cast<int32_t>(offsetof(CollectDependencies_t8F4396371AA9FE16C7871EDE545853FF084F3DB5, ___ChangedInstanceIds_2)); }
	inline NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99  get_ChangedInstanceIds_2() const { return ___ChangedInstanceIds_2; }
	inline NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99 * get_address_of_ChangedInstanceIds_2() { return &___ChangedInstanceIds_2; }
	inline void set_ChangedInstanceIds_2(NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99  value)
	{
		___ChangedInstanceIds_2 = value;
	}
};


// Unity.Entities.Conversion.MultiListDebugUtility/<SelectAllLists>d__1
struct U3CSelectAllListsU3Ed__1_t681808CD9B2F449764F76B111AE4D38F0938A623  : public RuntimeObject
{
public:
	// System.Int32 Unity.Entities.Conversion.MultiListDebugUtility/<SelectAllLists>d__1::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Collections.Generic.List`1<System.Int32> Unity.Entities.Conversion.MultiListDebugUtility/<SelectAllLists>d__1::<>2__current
	List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * ___U3CU3E2__current_1;
	// System.Int32 Unity.Entities.Conversion.MultiListDebugUtility/<SelectAllLists>d__1::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// Unity.Collections.NativeArray`1<System.Int32> Unity.Entities.Conversion.MultiListDebugUtility/<SelectAllLists>d__1::headIds
	NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99  ___headIds_3;
	// Unity.Collections.NativeArray`1<System.Int32> Unity.Entities.Conversion.MultiListDebugUtility/<SelectAllLists>d__1::<>3__headIds
	NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99  ___U3CU3E3__headIds_4;
	// Unity.Collections.NativeArray`1<System.Int32> Unity.Entities.Conversion.MultiListDebugUtility/<SelectAllLists>d__1::next
	NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99  ___next_5;
	// Unity.Collections.NativeArray`1<System.Int32> Unity.Entities.Conversion.MultiListDebugUtility/<SelectAllLists>d__1::<>3__next
	NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99  ___U3CU3E3__next_6;
	// Unity.Collections.NativeArray`1/Enumerator<System.Int32> Unity.Entities.Conversion.MultiListDebugUtility/<SelectAllLists>d__1::<>7__wrap1
	Enumerator_tEE96FCD9D1EF14200B36BEAB6F34FA5FAFC27544  ___U3CU3E7__wrap1_7;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CSelectAllListsU3Ed__1_t681808CD9B2F449764F76B111AE4D38F0938A623, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CSelectAllListsU3Ed__1_t681808CD9B2F449764F76B111AE4D38F0938A623, ___U3CU3E2__current_1)); }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3El__initialThreadId_2() { return static_cast<int32_t>(offsetof(U3CSelectAllListsU3Ed__1_t681808CD9B2F449764F76B111AE4D38F0938A623, ___U3CU3El__initialThreadId_2)); }
	inline int32_t get_U3CU3El__initialThreadId_2() const { return ___U3CU3El__initialThreadId_2; }
	inline int32_t* get_address_of_U3CU3El__initialThreadId_2() { return &___U3CU3El__initialThreadId_2; }
	inline void set_U3CU3El__initialThreadId_2(int32_t value)
	{
		___U3CU3El__initialThreadId_2 = value;
	}

	inline static int32_t get_offset_of_headIds_3() { return static_cast<int32_t>(offsetof(U3CSelectAllListsU3Ed__1_t681808CD9B2F449764F76B111AE4D38F0938A623, ___headIds_3)); }
	inline NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99  get_headIds_3() const { return ___headIds_3; }
	inline NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99 * get_address_of_headIds_3() { return &___headIds_3; }
	inline void set_headIds_3(NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99  value)
	{
		___headIds_3 = value;
	}

	inline static int32_t get_offset_of_U3CU3E3__headIds_4() { return static_cast<int32_t>(offsetof(U3CSelectAllListsU3Ed__1_t681808CD9B2F449764F76B111AE4D38F0938A623, ___U3CU3E3__headIds_4)); }
	inline NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99  get_U3CU3E3__headIds_4() const { return ___U3CU3E3__headIds_4; }
	inline NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99 * get_address_of_U3CU3E3__headIds_4() { return &___U3CU3E3__headIds_4; }
	inline void set_U3CU3E3__headIds_4(NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99  value)
	{
		___U3CU3E3__headIds_4 = value;
	}

	inline static int32_t get_offset_of_next_5() { return static_cast<int32_t>(offsetof(U3CSelectAllListsU3Ed__1_t681808CD9B2F449764F76B111AE4D38F0938A623, ___next_5)); }
	inline NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99  get_next_5() const { return ___next_5; }
	inline NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99 * get_address_of_next_5() { return &___next_5; }
	inline void set_next_5(NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99  value)
	{
		___next_5 = value;
	}

	inline static int32_t get_offset_of_U3CU3E3__next_6() { return static_cast<int32_t>(offsetof(U3CSelectAllListsU3Ed__1_t681808CD9B2F449764F76B111AE4D38F0938A623, ___U3CU3E3__next_6)); }
	inline NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99  get_U3CU3E3__next_6() const { return ___U3CU3E3__next_6; }
	inline NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99 * get_address_of_U3CU3E3__next_6() { return &___U3CU3E3__next_6; }
	inline void set_U3CU3E3__next_6(NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99  value)
	{
		___U3CU3E3__next_6 = value;
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap1_7() { return static_cast<int32_t>(offsetof(U3CSelectAllListsU3Ed__1_t681808CD9B2F449764F76B111AE4D38F0938A623, ___U3CU3E7__wrap1_7)); }
	inline Enumerator_tEE96FCD9D1EF14200B36BEAB6F34FA5FAFC27544  get_U3CU3E7__wrap1_7() const { return ___U3CU3E7__wrap1_7; }
	inline Enumerator_tEE96FCD9D1EF14200B36BEAB6F34FA5FAFC27544 * get_address_of_U3CU3E7__wrap1_7() { return &___U3CU3E7__wrap1_7; }
	inline void set_U3CU3E7__wrap1_7(Enumerator_tEE96FCD9D1EF14200B36BEAB6F34FA5FAFC27544  value)
	{
		___U3CU3E7__wrap1_7 = value;
	}
};


// Unity.Entities.Conversion.ConversionDependencies
struct ConversionDependencies_t2308B1F29F887398DA6F5A03D97AF4DDA08F37F8 
{
public:
	// Unity.Entities.DependencyTracker Unity.Entities.Conversion.ConversionDependencies::GameObjectDependencyTracker
	DependencyTracker_t1E00B24B7D3375633864E7895FB5C4D3CD5627BB  ___GameObjectDependencyTracker_0;
	// Unity.Collections.NativeHashMap`2<System.Int32,Unity.Entities.DependencyTracker> Unity.Entities.Conversion.ConversionDependencies::_componentDependenciesByTypeIndex
	NativeHashMap_2_t61357ED1FC7257561AD2B5F834BA8A4269884AAE  ____componentDependenciesByTypeIndex_1;
	// Unity.Collections.NativeHashSet`1<System.Int32> Unity.Entities.Conversion.ConversionDependencies::_unresolvedComponentInstanceIds
	NativeHashSet_1_t88F362074B652B4D4F194604B629EE17A41B3976  ____unresolvedComponentInstanceIds_2;
	// System.Boolean Unity.Entities.Conversion.ConversionDependencies::_isLiveLink
	bool ____isLiveLink_3;

public:
	inline static int32_t get_offset_of_GameObjectDependencyTracker_0() { return static_cast<int32_t>(offsetof(ConversionDependencies_t2308B1F29F887398DA6F5A03D97AF4DDA08F37F8, ___GameObjectDependencyTracker_0)); }
	inline DependencyTracker_t1E00B24B7D3375633864E7895FB5C4D3CD5627BB  get_GameObjectDependencyTracker_0() const { return ___GameObjectDependencyTracker_0; }
	inline DependencyTracker_t1E00B24B7D3375633864E7895FB5C4D3CD5627BB * get_address_of_GameObjectDependencyTracker_0() { return &___GameObjectDependencyTracker_0; }
	inline void set_GameObjectDependencyTracker_0(DependencyTracker_t1E00B24B7D3375633864E7895FB5C4D3CD5627BB  value)
	{
		___GameObjectDependencyTracker_0 = value;
	}

	inline static int32_t get_offset_of__componentDependenciesByTypeIndex_1() { return static_cast<int32_t>(offsetof(ConversionDependencies_t2308B1F29F887398DA6F5A03D97AF4DDA08F37F8, ____componentDependenciesByTypeIndex_1)); }
	inline NativeHashMap_2_t61357ED1FC7257561AD2B5F834BA8A4269884AAE  get__componentDependenciesByTypeIndex_1() const { return ____componentDependenciesByTypeIndex_1; }
	inline NativeHashMap_2_t61357ED1FC7257561AD2B5F834BA8A4269884AAE * get_address_of__componentDependenciesByTypeIndex_1() { return &____componentDependenciesByTypeIndex_1; }
	inline void set__componentDependenciesByTypeIndex_1(NativeHashMap_2_t61357ED1FC7257561AD2B5F834BA8A4269884AAE  value)
	{
		____componentDependenciesByTypeIndex_1 = value;
	}

	inline static int32_t get_offset_of__unresolvedComponentInstanceIds_2() { return static_cast<int32_t>(offsetof(ConversionDependencies_t2308B1F29F887398DA6F5A03D97AF4DDA08F37F8, ____unresolvedComponentInstanceIds_2)); }
	inline NativeHashSet_1_t88F362074B652B4D4F194604B629EE17A41B3976  get__unresolvedComponentInstanceIds_2() const { return ____unresolvedComponentInstanceIds_2; }
	inline NativeHashSet_1_t88F362074B652B4D4F194604B629EE17A41B3976 * get_address_of__unresolvedComponentInstanceIds_2() { return &____unresolvedComponentInstanceIds_2; }
	inline void set__unresolvedComponentInstanceIds_2(NativeHashSet_1_t88F362074B652B4D4F194604B629EE17A41B3976  value)
	{
		____unresolvedComponentInstanceIds_2 = value;
	}

	inline static int32_t get_offset_of__isLiveLink_3() { return static_cast<int32_t>(offsetof(ConversionDependencies_t2308B1F29F887398DA6F5A03D97AF4DDA08F37F8, ____isLiveLink_3)); }
	inline bool get__isLiveLink_3() const { return ____isLiveLink_3; }
	inline bool* get_address_of__isLiveLink_3() { return &____isLiveLink_3; }
	inline void set__isLiveLink_3(bool value)
	{
		____isLiveLink_3 = value;
	}
};

// Native definition for P/Invoke marshalling of Unity.Entities.Conversion.ConversionDependencies
struct ConversionDependencies_t2308B1F29F887398DA6F5A03D97AF4DDA08F37F8_marshaled_pinvoke
{
	DependencyTracker_t1E00B24B7D3375633864E7895FB5C4D3CD5627BB  ___GameObjectDependencyTracker_0;
	NativeHashMap_2_t61357ED1FC7257561AD2B5F834BA8A4269884AAE  ____componentDependenciesByTypeIndex_1;
	NativeHashSet_1_t88F362074B652B4D4F194604B629EE17A41B3976  ____unresolvedComponentInstanceIds_2;
	int32_t ____isLiveLink_3;
};
// Native definition for COM marshalling of Unity.Entities.Conversion.ConversionDependencies
struct ConversionDependencies_t2308B1F29F887398DA6F5A03D97AF4DDA08F37F8_marshaled_com
{
	DependencyTracker_t1E00B24B7D3375633864E7895FB5C4D3CD5627BB  ___GameObjectDependencyTracker_0;
	NativeHashMap_2_t61357ED1FC7257561AD2B5F834BA8A4269884AAE  ____componentDependenciesByTypeIndex_1;
	NativeHashSet_1_t88F362074B652B4D4F194604B629EE17A41B3976  ____unresolvedComponentInstanceIds_2;
	int32_t ____isLiveLink_3;
};

// Unity.Entities.Conversion.ConversionJournalData
struct ConversionJournalData_t011F007E9CB17D8E21647F619DC5B34A043E35B1 
{
public:
	// Unity.Collections.NativeHashMap`2<System.Int32,System.Int32> Unity.Entities.Conversion.ConversionJournalData::m_HeadIdIndices
	NativeHashMap_2_tA2C896278E1577EA31B2632511A058B9731235C2  ___m_HeadIdIndices_0;
	// Unity.Collections.NativeList`1<System.Int32> Unity.Entities.Conversion.ConversionJournalData::m_FreeHeadIds
	NativeList_1_t37924D67F0E4D83DE506A261B7A05AE619630C80  ___m_FreeHeadIds_1;
	// System.Int32 Unity.Entities.Conversion.ConversionJournalData::m_HeadIdCount
	int32_t ___m_HeadIdCount_2;
	// System.Collections.Generic.Dictionary`2<UnityEngine.GameObject,System.Int32> Unity.Entities.Conversion.ConversionJournalData::m_NewHybridHeadIdIndices
	Dictionary_2_t4C2FB1CAF9188DADBB3D9EC66581072D16870B9B * ___m_NewHybridHeadIdIndices_3;
	// Unity.Entities.Conversion.MultiList`2<Unity.Entities.Entity,Unity.Entities.Conversion.MultiListNativeArrayData`1<Unity.Entities.Entity>> Unity.Entities.Conversion.ConversionJournalData::m_Entities
	MultiList_2_t1541CFF032FBFF28E5984B09B890CD38D4D26142  ___m_Entities_4;
	// Unity.Entities.Conversion.MultiList`2<Unity.Entities.Conversion.LogEventData,Unity.Entities.Conversion.MultiListArrayData`1<Unity.Entities.Conversion.LogEventData>> Unity.Entities.Conversion.ConversionJournalData::m_LogEvents
	MultiList_2_tD5B56EBEA5E9740DA1E48BE0BEFBA4938ABEF4BF  ___m_LogEvents_5;
	// Unity.Entities.Conversion.MultiList`2<System.Type,Unity.Entities.Conversion.MultiListArrayData`1<System.Type>> Unity.Entities.Conversion.ConversionJournalData::m_HybridTypes
	MultiList_2_t8D15B0201AF84D0D92EF88318A5731FF5FA4569D  ___m_HybridTypes_6;

public:
	inline static int32_t get_offset_of_m_HeadIdIndices_0() { return static_cast<int32_t>(offsetof(ConversionJournalData_t011F007E9CB17D8E21647F619DC5B34A043E35B1, ___m_HeadIdIndices_0)); }
	inline NativeHashMap_2_tA2C896278E1577EA31B2632511A058B9731235C2  get_m_HeadIdIndices_0() const { return ___m_HeadIdIndices_0; }
	inline NativeHashMap_2_tA2C896278E1577EA31B2632511A058B9731235C2 * get_address_of_m_HeadIdIndices_0() { return &___m_HeadIdIndices_0; }
	inline void set_m_HeadIdIndices_0(NativeHashMap_2_tA2C896278E1577EA31B2632511A058B9731235C2  value)
	{
		___m_HeadIdIndices_0 = value;
	}

	inline static int32_t get_offset_of_m_FreeHeadIds_1() { return static_cast<int32_t>(offsetof(ConversionJournalData_t011F007E9CB17D8E21647F619DC5B34A043E35B1, ___m_FreeHeadIds_1)); }
	inline NativeList_1_t37924D67F0E4D83DE506A261B7A05AE619630C80  get_m_FreeHeadIds_1() const { return ___m_FreeHeadIds_1; }
	inline NativeList_1_t37924D67F0E4D83DE506A261B7A05AE619630C80 * get_address_of_m_FreeHeadIds_1() { return &___m_FreeHeadIds_1; }
	inline void set_m_FreeHeadIds_1(NativeList_1_t37924D67F0E4D83DE506A261B7A05AE619630C80  value)
	{
		___m_FreeHeadIds_1 = value;
	}

	inline static int32_t get_offset_of_m_HeadIdCount_2() { return static_cast<int32_t>(offsetof(ConversionJournalData_t011F007E9CB17D8E21647F619DC5B34A043E35B1, ___m_HeadIdCount_2)); }
	inline int32_t get_m_HeadIdCount_2() const { return ___m_HeadIdCount_2; }
	inline int32_t* get_address_of_m_HeadIdCount_2() { return &___m_HeadIdCount_2; }
	inline void set_m_HeadIdCount_2(int32_t value)
	{
		___m_HeadIdCount_2 = value;
	}

	inline static int32_t get_offset_of_m_NewHybridHeadIdIndices_3() { return static_cast<int32_t>(offsetof(ConversionJournalData_t011F007E9CB17D8E21647F619DC5B34A043E35B1, ___m_NewHybridHeadIdIndices_3)); }
	inline Dictionary_2_t4C2FB1CAF9188DADBB3D9EC66581072D16870B9B * get_m_NewHybridHeadIdIndices_3() const { return ___m_NewHybridHeadIdIndices_3; }
	inline Dictionary_2_t4C2FB1CAF9188DADBB3D9EC66581072D16870B9B ** get_address_of_m_NewHybridHeadIdIndices_3() { return &___m_NewHybridHeadIdIndices_3; }
	inline void set_m_NewHybridHeadIdIndices_3(Dictionary_2_t4C2FB1CAF9188DADBB3D9EC66581072D16870B9B * value)
	{
		___m_NewHybridHeadIdIndices_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_NewHybridHeadIdIndices_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_Entities_4() { return static_cast<int32_t>(offsetof(ConversionJournalData_t011F007E9CB17D8E21647F619DC5B34A043E35B1, ___m_Entities_4)); }
	inline MultiList_2_t1541CFF032FBFF28E5984B09B890CD38D4D26142  get_m_Entities_4() const { return ___m_Entities_4; }
	inline MultiList_2_t1541CFF032FBFF28E5984B09B890CD38D4D26142 * get_address_of_m_Entities_4() { return &___m_Entities_4; }
	inline void set_m_Entities_4(MultiList_2_t1541CFF032FBFF28E5984B09B890CD38D4D26142  value)
	{
		___m_Entities_4 = value;
	}

	inline static int32_t get_offset_of_m_LogEvents_5() { return static_cast<int32_t>(offsetof(ConversionJournalData_t011F007E9CB17D8E21647F619DC5B34A043E35B1, ___m_LogEvents_5)); }
	inline MultiList_2_tD5B56EBEA5E9740DA1E48BE0BEFBA4938ABEF4BF  get_m_LogEvents_5() const { return ___m_LogEvents_5; }
	inline MultiList_2_tD5B56EBEA5E9740DA1E48BE0BEFBA4938ABEF4BF * get_address_of_m_LogEvents_5() { return &___m_LogEvents_5; }
	inline void set_m_LogEvents_5(MultiList_2_tD5B56EBEA5E9740DA1E48BE0BEFBA4938ABEF4BF  value)
	{
		___m_LogEvents_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_LogEvents_5))->___Data_3))->___Data_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_HybridTypes_6() { return static_cast<int32_t>(offsetof(ConversionJournalData_t011F007E9CB17D8E21647F619DC5B34A043E35B1, ___m_HybridTypes_6)); }
	inline MultiList_2_t8D15B0201AF84D0D92EF88318A5731FF5FA4569D  get_m_HybridTypes_6() const { return ___m_HybridTypes_6; }
	inline MultiList_2_t8D15B0201AF84D0D92EF88318A5731FF5FA4569D * get_address_of_m_HybridTypes_6() { return &___m_HybridTypes_6; }
	inline void set_m_HybridTypes_6(MultiList_2_t8D15B0201AF84D0D92EF88318A5731FF5FA4569D  value)
	{
		___m_HybridTypes_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_HybridTypes_6))->___Data_3))->___Data_0), (void*)NULL);
	}
};

// Native definition for P/Invoke marshalling of Unity.Entities.Conversion.ConversionJournalData
struct ConversionJournalData_t011F007E9CB17D8E21647F619DC5B34A043E35B1_marshaled_pinvoke
{
	NativeHashMap_2_tA2C896278E1577EA31B2632511A058B9731235C2  ___m_HeadIdIndices_0;
	NativeList_1_t37924D67F0E4D83DE506A261B7A05AE619630C80  ___m_FreeHeadIds_1;
	int32_t ___m_HeadIdCount_2;
	Dictionary_2_t4C2FB1CAF9188DADBB3D9EC66581072D16870B9B * ___m_NewHybridHeadIdIndices_3;
	MultiList_2_t1541CFF032FBFF28E5984B09B890CD38D4D26142  ___m_Entities_4;
	MultiList_2_tD5B56EBEA5E9740DA1E48BE0BEFBA4938ABEF4BF  ___m_LogEvents_5;
	MultiList_2_t8D15B0201AF84D0D92EF88318A5731FF5FA4569D  ___m_HybridTypes_6;
};
// Native definition for COM marshalling of Unity.Entities.Conversion.ConversionJournalData
struct ConversionJournalData_t011F007E9CB17D8E21647F619DC5B34A043E35B1_marshaled_com
{
	NativeHashMap_2_tA2C896278E1577EA31B2632511A058B9731235C2  ___m_HeadIdIndices_0;
	NativeList_1_t37924D67F0E4D83DE506A261B7A05AE619630C80  ___m_FreeHeadIds_1;
	int32_t ___m_HeadIdCount_2;
	Dictionary_2_t4C2FB1CAF9188DADBB3D9EC66581072D16870B9B * ___m_NewHybridHeadIdIndices_3;
	MultiList_2_t1541CFF032FBFF28E5984B09B890CD38D4D26142  ___m_Entities_4;
	MultiList_2_tD5B56EBEA5E9740DA1E48BE0BEFBA4938ABEF4BF  ___m_LogEvents_5;
	MultiList_2_t8D15B0201AF84D0D92EF88318A5731FF5FA4569D  ___m_HybridTypes_6;
};

// Unity.Entities.Conversion.ConvertGameObjectToEntitySystem
struct ConvertGameObjectToEntitySystem_t98D507A5987792091C6805F64C272FFF43E48498  : public GameObjectConversionSystem_t1E3F2F994B0CADEDBDE17FFD785BFBD780433A41
{
public:

public:
};


// Unity.Entities.ConvertToEntity
struct ConvertToEntity_t52854E5BDADE29922A64486FCB764A2ABB0EA040  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// Unity.Entities.ConvertToEntity/Mode Unity.Entities.ConvertToEntity::ConversionMode
	int32_t ___ConversionMode_4;

public:
	inline static int32_t get_offset_of_ConversionMode_4() { return static_cast<int32_t>(offsetof(ConvertToEntity_t52854E5BDADE29922A64486FCB764A2ABB0EA040, ___ConversionMode_4)); }
	inline int32_t get_ConversionMode_4() const { return ___ConversionMode_4; }
	inline int32_t* get_address_of_ConversionMode_4() { return &___ConversionMode_4; }
	inline void set_ConversionMode_4(int32_t value)
	{
		___ConversionMode_4 = value;
	}
};


// StopConvertToEntity
struct StopConvertToEntity_t8D04CD984FF5CEFE36F851147629FD1F0DB85C68  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// Unity.Entities.Conversion.IncrementalConversionContext/RemoveFromHierarchy
struct RemoveFromHierarchy_t3865B184595D47CA96262E2CC565E2B4A1FA1E37 
{
public:
	// Unity.Entities.Conversion.IncrementalHierarchy Unity.Entities.Conversion.IncrementalConversionContext/RemoveFromHierarchy::Hierarchy
	IncrementalHierarchy_t8D79F54D0D4356A9D0CC9C596D9E8A1B2CEDA8FC  ___Hierarchy_0;
	// Unity.Collections.NativeArray`1<System.Int32> Unity.Entities.Conversion.IncrementalConversionContext/RemoveFromHierarchy::DeletedInstanceIds
	NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99  ___DeletedInstanceIds_1;
	// Unity.Collections.NativeArray`1<System.Int32> Unity.Entities.Conversion.IncrementalConversionContext/RemoveFromHierarchy::ReconvertHierarchyInstanceIds
	NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99  ___ReconvertHierarchyInstanceIds_2;
	// Unity.Collections.NativeList`1<System.Int32> Unity.Entities.Conversion.IncrementalConversionContext/RemoveFromHierarchy::RemovedInstanceIds
	NativeList_1_t37924D67F0E4D83DE506A261B7A05AE619630C80  ___RemovedInstanceIds_3;

public:
	inline static int32_t get_offset_of_Hierarchy_0() { return static_cast<int32_t>(offsetof(RemoveFromHierarchy_t3865B184595D47CA96262E2CC565E2B4A1FA1E37, ___Hierarchy_0)); }
	inline IncrementalHierarchy_t8D79F54D0D4356A9D0CC9C596D9E8A1B2CEDA8FC  get_Hierarchy_0() const { return ___Hierarchy_0; }
	inline IncrementalHierarchy_t8D79F54D0D4356A9D0CC9C596D9E8A1B2CEDA8FC * get_address_of_Hierarchy_0() { return &___Hierarchy_0; }
	inline void set_Hierarchy_0(IncrementalHierarchy_t8D79F54D0D4356A9D0CC9C596D9E8A1B2CEDA8FC  value)
	{
		___Hierarchy_0 = value;
	}

	inline static int32_t get_offset_of_DeletedInstanceIds_1() { return static_cast<int32_t>(offsetof(RemoveFromHierarchy_t3865B184595D47CA96262E2CC565E2B4A1FA1E37, ___DeletedInstanceIds_1)); }
	inline NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99  get_DeletedInstanceIds_1() const { return ___DeletedInstanceIds_1; }
	inline NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99 * get_address_of_DeletedInstanceIds_1() { return &___DeletedInstanceIds_1; }
	inline void set_DeletedInstanceIds_1(NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99  value)
	{
		___DeletedInstanceIds_1 = value;
	}

	inline static int32_t get_offset_of_ReconvertHierarchyInstanceIds_2() { return static_cast<int32_t>(offsetof(RemoveFromHierarchy_t3865B184595D47CA96262E2CC565E2B4A1FA1E37, ___ReconvertHierarchyInstanceIds_2)); }
	inline NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99  get_ReconvertHierarchyInstanceIds_2() const { return ___ReconvertHierarchyInstanceIds_2; }
	inline NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99 * get_address_of_ReconvertHierarchyInstanceIds_2() { return &___ReconvertHierarchyInstanceIds_2; }
	inline void set_ReconvertHierarchyInstanceIds_2(NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99  value)
	{
		___ReconvertHierarchyInstanceIds_2 = value;
	}

	inline static int32_t get_offset_of_RemovedInstanceIds_3() { return static_cast<int32_t>(offsetof(RemoveFromHierarchy_t3865B184595D47CA96262E2CC565E2B4A1FA1E37, ___RemovedInstanceIds_3)); }
	inline NativeList_1_t37924D67F0E4D83DE506A261B7A05AE619630C80  get_RemovedInstanceIds_3() const { return ___RemovedInstanceIds_3; }
	inline NativeList_1_t37924D67F0E4D83DE506A261B7A05AE619630C80 * get_address_of_RemovedInstanceIds_3() { return &___RemovedInstanceIds_3; }
	inline void set_RemovedInstanceIds_3(NativeList_1_t37924D67F0E4D83DE506A261B7A05AE619630C80  value)
	{
		___RemovedInstanceIds_3 = value;
	}
};

struct RemoveFromHierarchy_t3865B184595D47CA96262E2CC565E2B4A1FA1E37_StaticFields
{
public:
	// Unity.Burst.FunctionPointer`1<Unity.Entities.Conversion.IncrementalConversionContext/RemoveFromHierarchy/Exec> Unity.Entities.Conversion.IncrementalConversionContext/RemoveFromHierarchy::_burstFunction
	FunctionPointer_1_tD12692C63FF46B37BE3A4C8FFFB6D3951E5E56DD  ____burstFunction_4;
	// Unity.Profiling.ProfilerMarker Unity.Entities.Conversion.IncrementalConversionContext/RemoveFromHierarchy::Marker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___Marker_5;

public:
	inline static int32_t get_offset_of__burstFunction_4() { return static_cast<int32_t>(offsetof(RemoveFromHierarchy_t3865B184595D47CA96262E2CC565E2B4A1FA1E37_StaticFields, ____burstFunction_4)); }
	inline FunctionPointer_1_tD12692C63FF46B37BE3A4C8FFFB6D3951E5E56DD  get__burstFunction_4() const { return ____burstFunction_4; }
	inline FunctionPointer_1_tD12692C63FF46B37BE3A4C8FFFB6D3951E5E56DD * get_address_of__burstFunction_4() { return &____burstFunction_4; }
	inline void set__burstFunction_4(FunctionPointer_1_tD12692C63FF46B37BE3A4C8FFFB6D3951E5E56DD  value)
	{
		____burstFunction_4 = value;
	}

	inline static int32_t get_offset_of_Marker_5() { return static_cast<int32_t>(offsetof(RemoveFromHierarchy_t3865B184595D47CA96262E2CC565E2B4A1FA1E37_StaticFields, ___Marker_5)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_Marker_5() const { return ___Marker_5; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_Marker_5() { return &___Marker_5; }
	inline void set_Marker_5(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___Marker_5 = value;
	}
};


// Unity.Entities.Conversion.SceneHierarchy/Children
struct Children_t22E7C284A8562300D30C3F11E2C477C8ECEF77D6 
{
public:
	// Unity.Collections.NativeMultiHashMap`2/Enumerator<System.Int32,System.Int32> Unity.Entities.Conversion.SceneHierarchy/Children::_iter
	Enumerator_tCBD2A52574F899C4C90698BB0A64BD8557E28A1A  ____iter_0;

public:
	inline static int32_t get_offset_of__iter_0() { return static_cast<int32_t>(offsetof(Children_t22E7C284A8562300D30C3F11E2C477C8ECEF77D6, ____iter_0)); }
	inline Enumerator_tCBD2A52574F899C4C90698BB0A64BD8557E28A1A  get__iter_0() const { return ____iter_0; }
	inline Enumerator_tCBD2A52574F899C4C90698BB0A64BD8557E28A1A * get_address_of__iter_0() { return &____iter_0; }
	inline void set__iter_0(Enumerator_tCBD2A52574F899C4C90698BB0A64BD8557E28A1A  value)
	{
		____iter_0 = value;
	}
};

// Native definition for P/Invoke marshalling of Unity.Entities.Conversion.SceneHierarchy/Children
struct Children_t22E7C284A8562300D30C3F11E2C477C8ECEF77D6_marshaled_pinvoke
{
	Enumerator_tCBD2A52574F899C4C90698BB0A64BD8557E28A1A  ____iter_0;
};
// Native definition for COM marshalling of Unity.Entities.Conversion.SceneHierarchy/Children
struct Children_t22E7C284A8562300D30C3F11E2C477C8ECEF77D6_marshaled_com
{
	Enumerator_tCBD2A52574F899C4C90698BB0A64BD8557E28A1A  ____iter_0;
};

// Unity.Entities.Conversion.SceneHierarchyExtensions/CollectHierarchyInstanceIdsAndIndicesJob
struct CollectHierarchyInstanceIdsAndIndicesJob_t847F690D8238871B1D4201D6D275D8F48CE43461 
{
public:
	// Unity.Entities.Conversion.SceneHierarchy Unity.Entities.Conversion.SceneHierarchyExtensions/CollectHierarchyInstanceIdsAndIndicesJob::Hierarchy
	SceneHierarchy_tD5CB36F0069FD8DBC527EC7B6E17F9780204C258  ___Hierarchy_0;
	// Unity.Collections.NativeList`1<System.Int32> Unity.Entities.Conversion.SceneHierarchyExtensions/CollectHierarchyInstanceIdsAndIndicesJob::VisitedInstanceIds
	NativeList_1_t37924D67F0E4D83DE506A261B7A05AE619630C80  ___VisitedInstanceIds_1;
	// Unity.Collections.NativeHashMap`2<System.Int32,System.Boolean> Unity.Entities.Conversion.SceneHierarchyExtensions/CollectHierarchyInstanceIdsAndIndicesJob::VisitedIndices
	NativeHashMap_2_t977D8B51ED64BBFA8F25F7393936358BC6087EBB  ___VisitedIndices_2;

public:
	inline static int32_t get_offset_of_Hierarchy_0() { return static_cast<int32_t>(offsetof(CollectHierarchyInstanceIdsAndIndicesJob_t847F690D8238871B1D4201D6D275D8F48CE43461, ___Hierarchy_0)); }
	inline SceneHierarchy_tD5CB36F0069FD8DBC527EC7B6E17F9780204C258  get_Hierarchy_0() const { return ___Hierarchy_0; }
	inline SceneHierarchy_tD5CB36F0069FD8DBC527EC7B6E17F9780204C258 * get_address_of_Hierarchy_0() { return &___Hierarchy_0; }
	inline void set_Hierarchy_0(SceneHierarchy_tD5CB36F0069FD8DBC527EC7B6E17F9780204C258  value)
	{
		___Hierarchy_0 = value;
	}

	inline static int32_t get_offset_of_VisitedInstanceIds_1() { return static_cast<int32_t>(offsetof(CollectHierarchyInstanceIdsAndIndicesJob_t847F690D8238871B1D4201D6D275D8F48CE43461, ___VisitedInstanceIds_1)); }
	inline NativeList_1_t37924D67F0E4D83DE506A261B7A05AE619630C80  get_VisitedInstanceIds_1() const { return ___VisitedInstanceIds_1; }
	inline NativeList_1_t37924D67F0E4D83DE506A261B7A05AE619630C80 * get_address_of_VisitedInstanceIds_1() { return &___VisitedInstanceIds_1; }
	inline void set_VisitedInstanceIds_1(NativeList_1_t37924D67F0E4D83DE506A261B7A05AE619630C80  value)
	{
		___VisitedInstanceIds_1 = value;
	}

	inline static int32_t get_offset_of_VisitedIndices_2() { return static_cast<int32_t>(offsetof(CollectHierarchyInstanceIdsAndIndicesJob_t847F690D8238871B1D4201D6D275D8F48CE43461, ___VisitedIndices_2)); }
	inline NativeHashMap_2_t977D8B51ED64BBFA8F25F7393936358BC6087EBB  get_VisitedIndices_2() const { return ___VisitedIndices_2; }
	inline NativeHashMap_2_t977D8B51ED64BBFA8F25F7393936358BC6087EBB * get_address_of_VisitedIndices_2() { return &___VisitedIndices_2; }
	inline void set_VisitedIndices_2(NativeHashMap_2_t977D8B51ED64BBFA8F25F7393936358BC6087EBB  value)
	{
		___VisitedIndices_2 = value;
	}
};


// Unity.Entities.Conversion.SceneHierarchyExtensions/CollectHierarchyInstanceIdsJob
struct CollectHierarchyInstanceIdsJob_t445787F5F4BB00F07919FF4055525490E3F16745 
{
public:
	// Unity.Entities.Conversion.SceneHierarchy Unity.Entities.Conversion.SceneHierarchyExtensions/CollectHierarchyInstanceIdsJob::Hierarchy
	SceneHierarchy_tD5CB36F0069FD8DBC527EC7B6E17F9780204C258  ___Hierarchy_0;
	// Unity.Collections.NativeArray`1<System.Int32> Unity.Entities.Conversion.SceneHierarchyExtensions/CollectHierarchyInstanceIdsJob::Roots
	NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99  ___Roots_1;
	// Unity.Collections.NativeHashSet`1<System.Int32> Unity.Entities.Conversion.SceneHierarchyExtensions/CollectHierarchyInstanceIdsJob::VisitedInstances
	NativeHashSet_1_t88F362074B652B4D4F194604B629EE17A41B3976  ___VisitedInstances_2;

public:
	inline static int32_t get_offset_of_Hierarchy_0() { return static_cast<int32_t>(offsetof(CollectHierarchyInstanceIdsJob_t445787F5F4BB00F07919FF4055525490E3F16745, ___Hierarchy_0)); }
	inline SceneHierarchy_tD5CB36F0069FD8DBC527EC7B6E17F9780204C258  get_Hierarchy_0() const { return ___Hierarchy_0; }
	inline SceneHierarchy_tD5CB36F0069FD8DBC527EC7B6E17F9780204C258 * get_address_of_Hierarchy_0() { return &___Hierarchy_0; }
	inline void set_Hierarchy_0(SceneHierarchy_tD5CB36F0069FD8DBC527EC7B6E17F9780204C258  value)
	{
		___Hierarchy_0 = value;
	}

	inline static int32_t get_offset_of_Roots_1() { return static_cast<int32_t>(offsetof(CollectHierarchyInstanceIdsJob_t445787F5F4BB00F07919FF4055525490E3F16745, ___Roots_1)); }
	inline NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99  get_Roots_1() const { return ___Roots_1; }
	inline NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99 * get_address_of_Roots_1() { return &___Roots_1; }
	inline void set_Roots_1(NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99  value)
	{
		___Roots_1 = value;
	}

	inline static int32_t get_offset_of_VisitedInstances_2() { return static_cast<int32_t>(offsetof(CollectHierarchyInstanceIdsJob_t445787F5F4BB00F07919FF4055525490E3F16745, ___VisitedInstances_2)); }
	inline NativeHashSet_1_t88F362074B652B4D4F194604B629EE17A41B3976  get_VisitedInstances_2() const { return ___VisitedInstances_2; }
	inline NativeHashSet_1_t88F362074B652B4D4F194604B629EE17A41B3976 * get_address_of_VisitedInstances_2() { return &___VisitedInstances_2; }
	inline void set_VisitedInstances_2(NativeHashSet_1_t88F362074B652B4D4F194604B629EE17A41B3976  value)
	{
		___VisitedInstances_2 = value;
	}
};


// Unity.Entities.Conversion.IncrementalConversionContext
struct IncrementalConversionContext_tB7A46CF95DD1E57F305CC5DD000C478BC996D630 
{
public:
	// Unity.Entities.Conversion.ConversionDependencies Unity.Entities.Conversion.IncrementalConversionContext::Dependencies
	ConversionDependencies_t2308B1F29F887398DA6F5A03D97AF4DDA08F37F8  ___Dependencies_0;
	// Unity.Entities.Conversion.IncrementalHierarchy Unity.Entities.Conversion.IncrementalConversionContext::Hierarchy
	IncrementalHierarchy_t8D79F54D0D4356A9D0CC9C596D9E8A1B2CEDA8FC  ___Hierarchy_1;
	// UnityEngine.SceneManagement.Scene Unity.Entities.Conversion.IncrementalConversionContext::Scene
	Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  ___Scene_2;

public:
	inline static int32_t get_offset_of_Dependencies_0() { return static_cast<int32_t>(offsetof(IncrementalConversionContext_tB7A46CF95DD1E57F305CC5DD000C478BC996D630, ___Dependencies_0)); }
	inline ConversionDependencies_t2308B1F29F887398DA6F5A03D97AF4DDA08F37F8  get_Dependencies_0() const { return ___Dependencies_0; }
	inline ConversionDependencies_t2308B1F29F887398DA6F5A03D97AF4DDA08F37F8 * get_address_of_Dependencies_0() { return &___Dependencies_0; }
	inline void set_Dependencies_0(ConversionDependencies_t2308B1F29F887398DA6F5A03D97AF4DDA08F37F8  value)
	{
		___Dependencies_0 = value;
	}

	inline static int32_t get_offset_of_Hierarchy_1() { return static_cast<int32_t>(offsetof(IncrementalConversionContext_tB7A46CF95DD1E57F305CC5DD000C478BC996D630, ___Hierarchy_1)); }
	inline IncrementalHierarchy_t8D79F54D0D4356A9D0CC9C596D9E8A1B2CEDA8FC  get_Hierarchy_1() const { return ___Hierarchy_1; }
	inline IncrementalHierarchy_t8D79F54D0D4356A9D0CC9C596D9E8A1B2CEDA8FC * get_address_of_Hierarchy_1() { return &___Hierarchy_1; }
	inline void set_Hierarchy_1(IncrementalHierarchy_t8D79F54D0D4356A9D0CC9C596D9E8A1B2CEDA8FC  value)
	{
		___Hierarchy_1 = value;
	}

	inline static int32_t get_offset_of_Scene_2() { return static_cast<int32_t>(offsetof(IncrementalConversionContext_tB7A46CF95DD1E57F305CC5DD000C478BC996D630, ___Scene_2)); }
	inline Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  get_Scene_2() const { return ___Scene_2; }
	inline Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE * get_address_of_Scene_2() { return &___Scene_2; }
	inline void set_Scene_2(Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  value)
	{
		___Scene_2 = value;
	}
};

struct IncrementalConversionContext_tB7A46CF95DD1E57F305CC5DD000C478BC996D630_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Unity.Entities.Conversion.IncrementalConversionContext::_parentChangeHierarchyMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ____parentChangeHierarchyMarker_3;
	// Unity.Profiling.ProfilerMarker Unity.Entities.Conversion.IncrementalConversionContext::_deleteFromHierarchyMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ____deleteFromHierarchyMarker_4;
	// Unity.Profiling.ProfilerMarker Unity.Entities.Conversion.IncrementalConversionContext::_registerNewInstancesMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ____registerNewInstancesMarker_5;
	// Unity.Profiling.ProfilerMarker Unity.Entities.Conversion.IncrementalConversionContext::_collectNewGameObjectsMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ____collectNewGameObjectsMarker_6;
	// Unity.Profiling.ProfilerMarker Unity.Entities.Conversion.IncrementalConversionContext::_updateHierarchyMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ____updateHierarchyMarker_7;
	// System.Collections.Generic.List`1<UnityEngine.Object> Unity.Entities.Conversion.IncrementalConversionContext::ObjectCache
	List_1_t9D216521E6A213FF8562D215598D336ABB5474F4 * ___ObjectCache_8;

public:
	inline static int32_t get_offset_of__parentChangeHierarchyMarker_3() { return static_cast<int32_t>(offsetof(IncrementalConversionContext_tB7A46CF95DD1E57F305CC5DD000C478BC996D630_StaticFields, ____parentChangeHierarchyMarker_3)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get__parentChangeHierarchyMarker_3() const { return ____parentChangeHierarchyMarker_3; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of__parentChangeHierarchyMarker_3() { return &____parentChangeHierarchyMarker_3; }
	inline void set__parentChangeHierarchyMarker_3(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		____parentChangeHierarchyMarker_3 = value;
	}

	inline static int32_t get_offset_of__deleteFromHierarchyMarker_4() { return static_cast<int32_t>(offsetof(IncrementalConversionContext_tB7A46CF95DD1E57F305CC5DD000C478BC996D630_StaticFields, ____deleteFromHierarchyMarker_4)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get__deleteFromHierarchyMarker_4() const { return ____deleteFromHierarchyMarker_4; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of__deleteFromHierarchyMarker_4() { return &____deleteFromHierarchyMarker_4; }
	inline void set__deleteFromHierarchyMarker_4(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		____deleteFromHierarchyMarker_4 = value;
	}

	inline static int32_t get_offset_of__registerNewInstancesMarker_5() { return static_cast<int32_t>(offsetof(IncrementalConversionContext_tB7A46CF95DD1E57F305CC5DD000C478BC996D630_StaticFields, ____registerNewInstancesMarker_5)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get__registerNewInstancesMarker_5() const { return ____registerNewInstancesMarker_5; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of__registerNewInstancesMarker_5() { return &____registerNewInstancesMarker_5; }
	inline void set__registerNewInstancesMarker_5(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		____registerNewInstancesMarker_5 = value;
	}

	inline static int32_t get_offset_of__collectNewGameObjectsMarker_6() { return static_cast<int32_t>(offsetof(IncrementalConversionContext_tB7A46CF95DD1E57F305CC5DD000C478BC996D630_StaticFields, ____collectNewGameObjectsMarker_6)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get__collectNewGameObjectsMarker_6() const { return ____collectNewGameObjectsMarker_6; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of__collectNewGameObjectsMarker_6() { return &____collectNewGameObjectsMarker_6; }
	inline void set__collectNewGameObjectsMarker_6(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		____collectNewGameObjectsMarker_6 = value;
	}

	inline static int32_t get_offset_of__updateHierarchyMarker_7() { return static_cast<int32_t>(offsetof(IncrementalConversionContext_tB7A46CF95DD1E57F305CC5DD000C478BC996D630_StaticFields, ____updateHierarchyMarker_7)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get__updateHierarchyMarker_7() const { return ____updateHierarchyMarker_7; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of__updateHierarchyMarker_7() { return &____updateHierarchyMarker_7; }
	inline void set__updateHierarchyMarker_7(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		____updateHierarchyMarker_7 = value;
	}

	inline static int32_t get_offset_of_ObjectCache_8() { return static_cast<int32_t>(offsetof(IncrementalConversionContext_tB7A46CF95DD1E57F305CC5DD000C478BC996D630_StaticFields, ___ObjectCache_8)); }
	inline List_1_t9D216521E6A213FF8562D215598D336ABB5474F4 * get_ObjectCache_8() const { return ___ObjectCache_8; }
	inline List_1_t9D216521E6A213FF8562D215598D336ABB5474F4 ** get_address_of_ObjectCache_8() { return &___ObjectCache_8; }
	inline void set_ObjectCache_8(List_1_t9D216521E6A213FF8562D215598D336ABB5474F4 * value)
	{
		___ObjectCache_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ObjectCache_8), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Unity.Entities.Conversion.IncrementalConversionContext
struct IncrementalConversionContext_tB7A46CF95DD1E57F305CC5DD000C478BC996D630_marshaled_pinvoke
{
	ConversionDependencies_t2308B1F29F887398DA6F5A03D97AF4DDA08F37F8_marshaled_pinvoke ___Dependencies_0;
	IncrementalHierarchy_t8D79F54D0D4356A9D0CC9C596D9E8A1B2CEDA8FC  ___Hierarchy_1;
	Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  ___Scene_2;
};
// Native definition for COM marshalling of Unity.Entities.Conversion.IncrementalConversionContext
struct IncrementalConversionContext_tB7A46CF95DD1E57F305CC5DD000C478BC996D630_marshaled_com
{
	ConversionDependencies_t2308B1F29F887398DA6F5A03D97AF4DDA08F37F8_marshaled_com ___Dependencies_0;
	IncrementalHierarchy_t8D79F54D0D4356A9D0CC9C596D9E8A1B2CEDA8FC  ___Hierarchy_1;
	Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  ___Scene_2;
};

// Unity.Entities.Conversion.ConversionJournalData/<SelectLogEventsOrdered>d__43
struct U3CSelectLogEventsOrderedU3Ed__43_t5CB6C746560478F190074FB2DD44764B9DC886BF  : public RuntimeObject
{
public:
	// System.Int32 Unity.Entities.Conversion.ConversionJournalData/<SelectLogEventsOrdered>d__43::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.ValueTuple`2<System.Int32,Unity.Entities.Conversion.LogEventData> Unity.Entities.Conversion.ConversionJournalData/<SelectLogEventsOrdered>d__43::<>2__current
	ValueTuple_2_t21E30194CC22968E9B81643812C516AAF6C66093  ___U3CU3E2__current_1;
	// System.Int32 Unity.Entities.Conversion.ConversionJournalData/<SelectLogEventsOrdered>d__43::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// Unity.Entities.Conversion.ConversionJournalData Unity.Entities.Conversion.ConversionJournalData/<SelectLogEventsOrdered>d__43::<>4__this
	ConversionJournalData_t011F007E9CB17D8E21647F619DC5B34A043E35B1  ___U3CU3E4__this_3;
	// Unity.Entities.Conversion.ConversionJournalData Unity.Entities.Conversion.ConversionJournalData/<SelectLogEventsOrdered>d__43::<>3__<>4__this
	ConversionJournalData_t011F007E9CB17D8E21647F619DC5B34A043E35B1  ___U3CU3E3__U3CU3E4__this_4;
	// Unity.Collections.NativeKeyValueArrays`2<System.Int32,System.Int32> Unity.Entities.Conversion.ConversionJournalData/<SelectLogEventsOrdered>d__43::<headIdIndices>5__2
	NativeKeyValueArrays_2_t5F9F4BC8CC70775F900ECD85C18A5EA810621FC9  ___U3CheadIdIndicesU3E5__2_5;
	// Unity.Entities.Conversion.LogEventData[] Unity.Entities.Conversion.ConversionJournalData/<SelectLogEventsOrdered>d__43::<events>5__3
	LogEventDataU5BU5D_t297A076CEB7438F3BBF18FEC1A58490451063CCC* ___U3CeventsU3E5__3_6;
	// System.Int32 Unity.Entities.Conversion.ConversionJournalData/<SelectLogEventsOrdered>d__43::<i>5__4
	int32_t ___U3CiU3E5__4_7;
	// System.Int32 Unity.Entities.Conversion.ConversionJournalData/<SelectLogEventsOrdered>d__43::<objectInstanceId>5__5
	int32_t ___U3CobjectInstanceIdU3E5__5_8;
	// Unity.Entities.Conversion.MultiListEnumerator`2<Unity.Entities.Conversion.LogEventData,Unity.Entities.Conversion.MultiListArrayData`1<Unity.Entities.Conversion.LogEventData>> Unity.Entities.Conversion.ConversionJournalData/<SelectLogEventsOrdered>d__43::<>7__wrap5
	MultiListEnumerator_2_tCC7D1B309E3ABDC97AA7AA4F5EFAB39555DB9F6F  ___U3CU3E7__wrap5_9;
	// System.Int32 Unity.Entities.Conversion.ConversionJournalData/<SelectLogEventsOrdered>d__43::<count>5__7
	int32_t ___U3CcountU3E5__7_10;
	// System.Int32 Unity.Entities.Conversion.ConversionJournalData/<SelectLogEventsOrdered>d__43::<e>5__8
	int32_t ___U3CeU3E5__8_11;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CSelectLogEventsOrderedU3Ed__43_t5CB6C746560478F190074FB2DD44764B9DC886BF, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CSelectLogEventsOrderedU3Ed__43_t5CB6C746560478F190074FB2DD44764B9DC886BF, ___U3CU3E2__current_1)); }
	inline ValueTuple_2_t21E30194CC22968E9B81643812C516AAF6C66093  get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline ValueTuple_2_t21E30194CC22968E9B81643812C516AAF6C66093 * get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(ValueTuple_2_t21E30194CC22968E9B81643812C516AAF6C66093  value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3E2__current_1))->___Item2_1))->___Message_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3E2__current_1))->___Item2_1))->___Stacktrace_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3El__initialThreadId_2() { return static_cast<int32_t>(offsetof(U3CSelectLogEventsOrderedU3Ed__43_t5CB6C746560478F190074FB2DD44764B9DC886BF, ___U3CU3El__initialThreadId_2)); }
	inline int32_t get_U3CU3El__initialThreadId_2() const { return ___U3CU3El__initialThreadId_2; }
	inline int32_t* get_address_of_U3CU3El__initialThreadId_2() { return &___U3CU3El__initialThreadId_2; }
	inline void set_U3CU3El__initialThreadId_2(int32_t value)
	{
		___U3CU3El__initialThreadId_2 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CSelectLogEventsOrderedU3Ed__43_t5CB6C746560478F190074FB2DD44764B9DC886BF, ___U3CU3E4__this_3)); }
	inline ConversionJournalData_t011F007E9CB17D8E21647F619DC5B34A043E35B1  get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline ConversionJournalData_t011F007E9CB17D8E21647F619DC5B34A043E35B1 * get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(ConversionJournalData_t011F007E9CB17D8E21647F619DC5B34A043E35B1  value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E4__this_3))->___m_NewHybridHeadIdIndices_3), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CU3E4__this_3))->___m_LogEvents_5))->___Data_3))->___Data_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CU3E4__this_3))->___m_HybridTypes_6))->___Data_3))->___Data_0), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E3__U3CU3E4__this_4() { return static_cast<int32_t>(offsetof(U3CSelectLogEventsOrderedU3Ed__43_t5CB6C746560478F190074FB2DD44764B9DC886BF, ___U3CU3E3__U3CU3E4__this_4)); }
	inline ConversionJournalData_t011F007E9CB17D8E21647F619DC5B34A043E35B1  get_U3CU3E3__U3CU3E4__this_4() const { return ___U3CU3E3__U3CU3E4__this_4; }
	inline ConversionJournalData_t011F007E9CB17D8E21647F619DC5B34A043E35B1 * get_address_of_U3CU3E3__U3CU3E4__this_4() { return &___U3CU3E3__U3CU3E4__this_4; }
	inline void set_U3CU3E3__U3CU3E4__this_4(ConversionJournalData_t011F007E9CB17D8E21647F619DC5B34A043E35B1  value)
	{
		___U3CU3E3__U3CU3E4__this_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E3__U3CU3E4__this_4))->___m_NewHybridHeadIdIndices_3), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CU3E3__U3CU3E4__this_4))->___m_LogEvents_5))->___Data_3))->___Data_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CU3E3__U3CU3E4__this_4))->___m_HybridTypes_6))->___Data_3))->___Data_0), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CheadIdIndicesU3E5__2_5() { return static_cast<int32_t>(offsetof(U3CSelectLogEventsOrderedU3Ed__43_t5CB6C746560478F190074FB2DD44764B9DC886BF, ___U3CheadIdIndicesU3E5__2_5)); }
	inline NativeKeyValueArrays_2_t5F9F4BC8CC70775F900ECD85C18A5EA810621FC9  get_U3CheadIdIndicesU3E5__2_5() const { return ___U3CheadIdIndicesU3E5__2_5; }
	inline NativeKeyValueArrays_2_t5F9F4BC8CC70775F900ECD85C18A5EA810621FC9 * get_address_of_U3CheadIdIndicesU3E5__2_5() { return &___U3CheadIdIndicesU3E5__2_5; }
	inline void set_U3CheadIdIndicesU3E5__2_5(NativeKeyValueArrays_2_t5F9F4BC8CC70775F900ECD85C18A5EA810621FC9  value)
	{
		___U3CheadIdIndicesU3E5__2_5 = value;
	}

	inline static int32_t get_offset_of_U3CeventsU3E5__3_6() { return static_cast<int32_t>(offsetof(U3CSelectLogEventsOrderedU3Ed__43_t5CB6C746560478F190074FB2DD44764B9DC886BF, ___U3CeventsU3E5__3_6)); }
	inline LogEventDataU5BU5D_t297A076CEB7438F3BBF18FEC1A58490451063CCC* get_U3CeventsU3E5__3_6() const { return ___U3CeventsU3E5__3_6; }
	inline LogEventDataU5BU5D_t297A076CEB7438F3BBF18FEC1A58490451063CCC** get_address_of_U3CeventsU3E5__3_6() { return &___U3CeventsU3E5__3_6; }
	inline void set_U3CeventsU3E5__3_6(LogEventDataU5BU5D_t297A076CEB7438F3BBF18FEC1A58490451063CCC* value)
	{
		___U3CeventsU3E5__3_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CeventsU3E5__3_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CiU3E5__4_7() { return static_cast<int32_t>(offsetof(U3CSelectLogEventsOrderedU3Ed__43_t5CB6C746560478F190074FB2DD44764B9DC886BF, ___U3CiU3E5__4_7)); }
	inline int32_t get_U3CiU3E5__4_7() const { return ___U3CiU3E5__4_7; }
	inline int32_t* get_address_of_U3CiU3E5__4_7() { return &___U3CiU3E5__4_7; }
	inline void set_U3CiU3E5__4_7(int32_t value)
	{
		___U3CiU3E5__4_7 = value;
	}

	inline static int32_t get_offset_of_U3CobjectInstanceIdU3E5__5_8() { return static_cast<int32_t>(offsetof(U3CSelectLogEventsOrderedU3Ed__43_t5CB6C746560478F190074FB2DD44764B9DC886BF, ___U3CobjectInstanceIdU3E5__5_8)); }
	inline int32_t get_U3CobjectInstanceIdU3E5__5_8() const { return ___U3CobjectInstanceIdU3E5__5_8; }
	inline int32_t* get_address_of_U3CobjectInstanceIdU3E5__5_8() { return &___U3CobjectInstanceIdU3E5__5_8; }
	inline void set_U3CobjectInstanceIdU3E5__5_8(int32_t value)
	{
		___U3CobjectInstanceIdU3E5__5_8 = value;
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap5_9() { return static_cast<int32_t>(offsetof(U3CSelectLogEventsOrderedU3Ed__43_t5CB6C746560478F190074FB2DD44764B9DC886BF, ___U3CU3E7__wrap5_9)); }
	inline MultiListEnumerator_2_tCC7D1B309E3ABDC97AA7AA4F5EFAB39555DB9F6F  get_U3CU3E7__wrap5_9() const { return ___U3CU3E7__wrap5_9; }
	inline MultiListEnumerator_2_tCC7D1B309E3ABDC97AA7AA4F5EFAB39555DB9F6F * get_address_of_U3CU3E7__wrap5_9() { return &___U3CU3E7__wrap5_9; }
	inline void set_U3CU3E7__wrap5_9(MultiListEnumerator_2_tCC7D1B309E3ABDC97AA7AA4F5EFAB39555DB9F6F  value)
	{
		___U3CU3E7__wrap5_9 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3E7__wrap5_9))->___m_Data_0))->___Data_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_U3CcountU3E5__7_10() { return static_cast<int32_t>(offsetof(U3CSelectLogEventsOrderedU3Ed__43_t5CB6C746560478F190074FB2DD44764B9DC886BF, ___U3CcountU3E5__7_10)); }
	inline int32_t get_U3CcountU3E5__7_10() const { return ___U3CcountU3E5__7_10; }
	inline int32_t* get_address_of_U3CcountU3E5__7_10() { return &___U3CcountU3E5__7_10; }
	inline void set_U3CcountU3E5__7_10(int32_t value)
	{
		___U3CcountU3E5__7_10 = value;
	}

	inline static int32_t get_offset_of_U3CeU3E5__8_11() { return static_cast<int32_t>(offsetof(U3CSelectLogEventsOrderedU3Ed__43_t5CB6C746560478F190074FB2DD44764B9DC886BF, ___U3CeU3E5__8_11)); }
	inline int32_t get_U3CeU3E5__8_11() const { return ___U3CeU3E5__8_11; }
	inline int32_t* get_address_of_U3CeU3E5__8_11() { return &___U3CeU3E5__8_11; }
	inline void set_U3CeU3E5__8_11(int32_t value)
	{
		___U3CeU3E5__8_11 = value;
	}
};


// Unity.Entities.Conversion.GameObjectConversionMappingSystem
struct GameObjectConversionMappingSystem_tD834531091319F873FDC1E5EDB439CE9654312DD  : public ComponentSystem_t258C48C930D4C2524A052337E22D95554615F98C
{
public:
	// Unity.Entities.GameObjectConversionSettings Unity.Entities.Conversion.GameObjectConversionMappingSystem::<Settings>k__BackingField
	GameObjectConversionSettings_t67DD3850032853AEAD3BB89021BCCFEA5318BE3C * ___U3CSettingsU3Ek__BackingField_9;
	// Unity.Entities.Conversion.IncrementalConversionContext Unity.Entities.Conversion.GameObjectConversionMappingSystem::m_LiveConversionContext
	IncrementalConversionContext_tB7A46CF95DD1E57F305CC5DD000C478BC996D630  ___m_LiveConversionContext_10;
	// Unity.Entities.Conversion.IncrementalConversionData Unity.Entities.Conversion.GameObjectConversionMappingSystem::m_IncrementalConversionData
	IncrementalConversionData_t0061035E6E6416DBD4488143EA4705ED5DD70FA6  ___m_IncrementalConversionData_11;
	// Unity.Entities.EntityManager Unity.Entities.Conversion.GameObjectConversionMappingSystem::m_DstManager
	EntityManager_t375E301E0D409D57A32EB6EEFEE4DCFA936B3FD0  ___m_DstManager_12;
	// Unity.Entities.Conversion.JournalingUnityLogger Unity.Entities.Conversion.GameObjectConversionMappingSystem::m_JournalingUnityLogger
	JournalingUnityLogger_t4B8A989B4D03D03C25986C8E6F7B5CE90EEDB6D5 * ___m_JournalingUnityLogger_13;
	// Unity.Entities.Conversion.ConversionState Unity.Entities.Conversion.GameObjectConversionMappingSystem::m_ConversionState
	int32_t ___m_ConversionState_14;
	// System.Int32 Unity.Entities.Conversion.GameObjectConversionMappingSystem::m_BeginConvertingRefCount
	int32_t ___m_BeginConvertingRefCount_15;
	// Unity.Entities.Conversion.ConversionJournalData Unity.Entities.Conversion.GameObjectConversionMappingSystem::m_JournalData
	ConversionJournalData_t011F007E9CB17D8E21647F619DC5B34A043E35B1  ___m_JournalData_16;
	// Unity.Entities.EntityArchetype[] Unity.Entities.Conversion.GameObjectConversionMappingSystem::m_Archetypes
	EntityArchetypeU5BU5D_t65426B198983693FD94AFA96C0327282DFA3E2CA* ___m_Archetypes_17;
	// System.Collections.Generic.HashSet`1<UnityEngine.GameObject> Unity.Entities.Conversion.GameObjectConversionMappingSystem::m_DstPrefabs
	HashSet_1_t77825C5E92A478ADAC0C07A97589EB9CBFF229E3 * ___m_DstPrefabs_18;
	// System.Collections.Generic.HashSet`1<UnityEngine.GameObject> Unity.Entities.Conversion.GameObjectConversionMappingSystem::m_DstLinkedEntityGroups
	HashSet_1_t77825C5E92A478ADAC0C07A97589EB9CBFF229E3 * ___m_DstLinkedEntityGroups_19;
	// System.Collections.Generic.HashSet`1<UnityEngine.Object> Unity.Entities.Conversion.GameObjectConversionMappingSystem::m_DstAssets
	HashSet_1_t658A4F799C39BCEF71EEB383AC1FCCFDC8447673 * ___m_DstAssets_20;
	// Unity.Entities.EntityQuery Unity.Entities.Conversion.GameObjectConversionMappingSystem::m_SceneSectionEntityQuery
	EntityQuery_tDCA25A292AF939DB4C25632A20819FADAF418109  ___m_SceneSectionEntityQuery_21;
	// Unity.Entities.Conversion.GameObjectConversionMappingSystem/CachedCollections Unity.Entities.Conversion.GameObjectConversionMappingSystem::_cachedCollections
	CachedCollections_tB24E1D8BBB0133DF4FECA0A3E8D3E491B8DD4BD4  ____cachedCollections_22;
	// Unity.Collections.LowLevel.Unsafe.UnsafeList`1<System.Int32> Unity.Entities.Conversion.GameObjectConversionMappingSystem::m_EntityIdsChached
	UnsafeList_1_t0160F425C28D7D8E9DA796AD7C293EE00D425DF9  ___m_EntityIdsChached_31;

public:
	inline static int32_t get_offset_of_U3CSettingsU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(GameObjectConversionMappingSystem_tD834531091319F873FDC1E5EDB439CE9654312DD, ___U3CSettingsU3Ek__BackingField_9)); }
	inline GameObjectConversionSettings_t67DD3850032853AEAD3BB89021BCCFEA5318BE3C * get_U3CSettingsU3Ek__BackingField_9() const { return ___U3CSettingsU3Ek__BackingField_9; }
	inline GameObjectConversionSettings_t67DD3850032853AEAD3BB89021BCCFEA5318BE3C ** get_address_of_U3CSettingsU3Ek__BackingField_9() { return &___U3CSettingsU3Ek__BackingField_9; }
	inline void set_U3CSettingsU3Ek__BackingField_9(GameObjectConversionSettings_t67DD3850032853AEAD3BB89021BCCFEA5318BE3C * value)
	{
		___U3CSettingsU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSettingsU3Ek__BackingField_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_LiveConversionContext_10() { return static_cast<int32_t>(offsetof(GameObjectConversionMappingSystem_tD834531091319F873FDC1E5EDB439CE9654312DD, ___m_LiveConversionContext_10)); }
	inline IncrementalConversionContext_tB7A46CF95DD1E57F305CC5DD000C478BC996D630  get_m_LiveConversionContext_10() const { return ___m_LiveConversionContext_10; }
	inline IncrementalConversionContext_tB7A46CF95DD1E57F305CC5DD000C478BC996D630 * get_address_of_m_LiveConversionContext_10() { return &___m_LiveConversionContext_10; }
	inline void set_m_LiveConversionContext_10(IncrementalConversionContext_tB7A46CF95DD1E57F305CC5DD000C478BC996D630  value)
	{
		___m_LiveConversionContext_10 = value;
	}

	inline static int32_t get_offset_of_m_IncrementalConversionData_11() { return static_cast<int32_t>(offsetof(GameObjectConversionMappingSystem_tD834531091319F873FDC1E5EDB439CE9654312DD, ___m_IncrementalConversionData_11)); }
	inline IncrementalConversionData_t0061035E6E6416DBD4488143EA4705ED5DD70FA6  get_m_IncrementalConversionData_11() const { return ___m_IncrementalConversionData_11; }
	inline IncrementalConversionData_t0061035E6E6416DBD4488143EA4705ED5DD70FA6 * get_address_of_m_IncrementalConversionData_11() { return &___m_IncrementalConversionData_11; }
	inline void set_m_IncrementalConversionData_11(IncrementalConversionData_t0061035E6E6416DBD4488143EA4705ED5DD70FA6  value)
	{
		___m_IncrementalConversionData_11 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_IncrementalConversionData_11))->___ChangedGameObjects_3), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_IncrementalConversionData_11))->___ChangedComponents_4), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_DstManager_12() { return static_cast<int32_t>(offsetof(GameObjectConversionMappingSystem_tD834531091319F873FDC1E5EDB439CE9654312DD, ___m_DstManager_12)); }
	inline EntityManager_t375E301E0D409D57A32EB6EEFEE4DCFA936B3FD0  get_m_DstManager_12() const { return ___m_DstManager_12; }
	inline EntityManager_t375E301E0D409D57A32EB6EEFEE4DCFA936B3FD0 * get_address_of_m_DstManager_12() { return &___m_DstManager_12; }
	inline void set_m_DstManager_12(EntityManager_t375E301E0D409D57A32EB6EEFEE4DCFA936B3FD0  value)
	{
		___m_DstManager_12 = value;
	}

	inline static int32_t get_offset_of_m_JournalingUnityLogger_13() { return static_cast<int32_t>(offsetof(GameObjectConversionMappingSystem_tD834531091319F873FDC1E5EDB439CE9654312DD, ___m_JournalingUnityLogger_13)); }
	inline JournalingUnityLogger_t4B8A989B4D03D03C25986C8E6F7B5CE90EEDB6D5 * get_m_JournalingUnityLogger_13() const { return ___m_JournalingUnityLogger_13; }
	inline JournalingUnityLogger_t4B8A989B4D03D03C25986C8E6F7B5CE90EEDB6D5 ** get_address_of_m_JournalingUnityLogger_13() { return &___m_JournalingUnityLogger_13; }
	inline void set_m_JournalingUnityLogger_13(JournalingUnityLogger_t4B8A989B4D03D03C25986C8E6F7B5CE90EEDB6D5 * value)
	{
		___m_JournalingUnityLogger_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_JournalingUnityLogger_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_ConversionState_14() { return static_cast<int32_t>(offsetof(GameObjectConversionMappingSystem_tD834531091319F873FDC1E5EDB439CE9654312DD, ___m_ConversionState_14)); }
	inline int32_t get_m_ConversionState_14() const { return ___m_ConversionState_14; }
	inline int32_t* get_address_of_m_ConversionState_14() { return &___m_ConversionState_14; }
	inline void set_m_ConversionState_14(int32_t value)
	{
		___m_ConversionState_14 = value;
	}

	inline static int32_t get_offset_of_m_BeginConvertingRefCount_15() { return static_cast<int32_t>(offsetof(GameObjectConversionMappingSystem_tD834531091319F873FDC1E5EDB439CE9654312DD, ___m_BeginConvertingRefCount_15)); }
	inline int32_t get_m_BeginConvertingRefCount_15() const { return ___m_BeginConvertingRefCount_15; }
	inline int32_t* get_address_of_m_BeginConvertingRefCount_15() { return &___m_BeginConvertingRefCount_15; }
	inline void set_m_BeginConvertingRefCount_15(int32_t value)
	{
		___m_BeginConvertingRefCount_15 = value;
	}

	inline static int32_t get_offset_of_m_JournalData_16() { return static_cast<int32_t>(offsetof(GameObjectConversionMappingSystem_tD834531091319F873FDC1E5EDB439CE9654312DD, ___m_JournalData_16)); }
	inline ConversionJournalData_t011F007E9CB17D8E21647F619DC5B34A043E35B1  get_m_JournalData_16() const { return ___m_JournalData_16; }
	inline ConversionJournalData_t011F007E9CB17D8E21647F619DC5B34A043E35B1 * get_address_of_m_JournalData_16() { return &___m_JournalData_16; }
	inline void set_m_JournalData_16(ConversionJournalData_t011F007E9CB17D8E21647F619DC5B34A043E35B1  value)
	{
		___m_JournalData_16 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_JournalData_16))->___m_NewHybridHeadIdIndices_3), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_JournalData_16))->___m_LogEvents_5))->___Data_3))->___Data_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_JournalData_16))->___m_HybridTypes_6))->___Data_3))->___Data_0), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Archetypes_17() { return static_cast<int32_t>(offsetof(GameObjectConversionMappingSystem_tD834531091319F873FDC1E5EDB439CE9654312DD, ___m_Archetypes_17)); }
	inline EntityArchetypeU5BU5D_t65426B198983693FD94AFA96C0327282DFA3E2CA* get_m_Archetypes_17() const { return ___m_Archetypes_17; }
	inline EntityArchetypeU5BU5D_t65426B198983693FD94AFA96C0327282DFA3E2CA** get_address_of_m_Archetypes_17() { return &___m_Archetypes_17; }
	inline void set_m_Archetypes_17(EntityArchetypeU5BU5D_t65426B198983693FD94AFA96C0327282DFA3E2CA* value)
	{
		___m_Archetypes_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Archetypes_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_DstPrefabs_18() { return static_cast<int32_t>(offsetof(GameObjectConversionMappingSystem_tD834531091319F873FDC1E5EDB439CE9654312DD, ___m_DstPrefabs_18)); }
	inline HashSet_1_t77825C5E92A478ADAC0C07A97589EB9CBFF229E3 * get_m_DstPrefabs_18() const { return ___m_DstPrefabs_18; }
	inline HashSet_1_t77825C5E92A478ADAC0C07A97589EB9CBFF229E3 ** get_address_of_m_DstPrefabs_18() { return &___m_DstPrefabs_18; }
	inline void set_m_DstPrefabs_18(HashSet_1_t77825C5E92A478ADAC0C07A97589EB9CBFF229E3 * value)
	{
		___m_DstPrefabs_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DstPrefabs_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_DstLinkedEntityGroups_19() { return static_cast<int32_t>(offsetof(GameObjectConversionMappingSystem_tD834531091319F873FDC1E5EDB439CE9654312DD, ___m_DstLinkedEntityGroups_19)); }
	inline HashSet_1_t77825C5E92A478ADAC0C07A97589EB9CBFF229E3 * get_m_DstLinkedEntityGroups_19() const { return ___m_DstLinkedEntityGroups_19; }
	inline HashSet_1_t77825C5E92A478ADAC0C07A97589EB9CBFF229E3 ** get_address_of_m_DstLinkedEntityGroups_19() { return &___m_DstLinkedEntityGroups_19; }
	inline void set_m_DstLinkedEntityGroups_19(HashSet_1_t77825C5E92A478ADAC0C07A97589EB9CBFF229E3 * value)
	{
		___m_DstLinkedEntityGroups_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DstLinkedEntityGroups_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_DstAssets_20() { return static_cast<int32_t>(offsetof(GameObjectConversionMappingSystem_tD834531091319F873FDC1E5EDB439CE9654312DD, ___m_DstAssets_20)); }
	inline HashSet_1_t658A4F799C39BCEF71EEB383AC1FCCFDC8447673 * get_m_DstAssets_20() const { return ___m_DstAssets_20; }
	inline HashSet_1_t658A4F799C39BCEF71EEB383AC1FCCFDC8447673 ** get_address_of_m_DstAssets_20() { return &___m_DstAssets_20; }
	inline void set_m_DstAssets_20(HashSet_1_t658A4F799C39BCEF71EEB383AC1FCCFDC8447673 * value)
	{
		___m_DstAssets_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DstAssets_20), (void*)value);
	}

	inline static int32_t get_offset_of_m_SceneSectionEntityQuery_21() { return static_cast<int32_t>(offsetof(GameObjectConversionMappingSystem_tD834531091319F873FDC1E5EDB439CE9654312DD, ___m_SceneSectionEntityQuery_21)); }
	inline EntityQuery_tDCA25A292AF939DB4C25632A20819FADAF418109  get_m_SceneSectionEntityQuery_21() const { return ___m_SceneSectionEntityQuery_21; }
	inline EntityQuery_tDCA25A292AF939DB4C25632A20819FADAF418109 * get_address_of_m_SceneSectionEntityQuery_21() { return &___m_SceneSectionEntityQuery_21; }
	inline void set_m_SceneSectionEntityQuery_21(EntityQuery_tDCA25A292AF939DB4C25632A20819FADAF418109  value)
	{
		___m_SceneSectionEntityQuery_21 = value;
	}

	inline static int32_t get_offset_of__cachedCollections_22() { return static_cast<int32_t>(offsetof(GameObjectConversionMappingSystem_tD834531091319F873FDC1E5EDB439CE9654312DD, ____cachedCollections_22)); }
	inline CachedCollections_tB24E1D8BBB0133DF4FECA0A3E8D3E491B8DD4BD4  get__cachedCollections_22() const { return ____cachedCollections_22; }
	inline CachedCollections_tB24E1D8BBB0133DF4FECA0A3E8D3E491B8DD4BD4 * get_address_of__cachedCollections_22() { return &____cachedCollections_22; }
	inline void set__cachedCollections_22(CachedCollections_tB24E1D8BBB0133DF4FECA0A3E8D3E491B8DD4BD4  value)
	{
		____cachedCollections_22 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&____cachedCollections_22))->___OldGameObjects_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&____cachedCollections_22))->___NewGameObjects_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&____cachedCollections_22))->___TmpObjects_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&____cachedCollections_22))->___Transforms_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&____cachedCollections_22))->___GameObjectsWithEntities_4), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_EntityIdsChached_31() { return static_cast<int32_t>(offsetof(GameObjectConversionMappingSystem_tD834531091319F873FDC1E5EDB439CE9654312DD, ___m_EntityIdsChached_31)); }
	inline UnsafeList_1_t0160F425C28D7D8E9DA796AD7C293EE00D425DF9  get_m_EntityIdsChached_31() const { return ___m_EntityIdsChached_31; }
	inline UnsafeList_1_t0160F425C28D7D8E9DA796AD7C293EE00D425DF9 * get_address_of_m_EntityIdsChached_31() { return &___m_EntityIdsChached_31; }
	inline void set_m_EntityIdsChached_31(UnsafeList_1_t0160F425C28D7D8E9DA796AD7C293EE00D425DF9  value)
	{
		___m_EntityIdsChached_31 = value;
	}
};

struct GameObjectConversionMappingSystem_tD834531091319F873FDC1E5EDB439CE9654312DD_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Component> Unity.Entities.Conversion.GameObjectConversionMappingSystem::s_ComponentsCache
	List_1_tA3929E98F6AC5A6E95EF799D2E3294F214358C0F * ___s_ComponentsCache_8;
	// Unity.Profiling.ProfilerMarker Unity.Entities.Conversion.GameObjectConversionMappingSystem::m_CreateEntity
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___m_CreateEntity_23;
	// Unity.Profiling.ProfilerMarker Unity.Entities.Conversion.GameObjectConversionMappingSystem::m_CreatePrimaryEntities
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___m_CreatePrimaryEntities_24;
	// Unity.Profiling.ProfilerMarker Unity.Entities.Conversion.GameObjectConversionMappingSystem::m_CreateAdditional
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___m_CreateAdditional_25;
	// Unity.Profiling.ProfilerMarker Unity.Entities.Conversion.GameObjectConversionMappingSystem::IncrementalClearEntities
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___IncrementalClearEntities_26;
	// Unity.Profiling.ProfilerMarker Unity.Entities.Conversion.GameObjectConversionMappingSystem::IncrementalCreateEntitiesOld
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___IncrementalCreateEntitiesOld_27;
	// Unity.Profiling.ProfilerMarker Unity.Entities.Conversion.GameObjectConversionMappingSystem::IncrementalCreateEntitiesNew
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___IncrementalCreateEntitiesNew_28;
	// Unity.Profiling.ProfilerMarker Unity.Entities.Conversion.GameObjectConversionMappingSystem::IncrementalDeleteEntities
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___IncrementalDeleteEntities_29;
	// Unity.Profiling.ProfilerMarker Unity.Entities.Conversion.GameObjectConversionMappingSystem::IncrementalCollectDependencies
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___IncrementalCollectDependencies_30;

public:
	inline static int32_t get_offset_of_s_ComponentsCache_8() { return static_cast<int32_t>(offsetof(GameObjectConversionMappingSystem_tD834531091319F873FDC1E5EDB439CE9654312DD_StaticFields, ___s_ComponentsCache_8)); }
	inline List_1_tA3929E98F6AC5A6E95EF799D2E3294F214358C0F * get_s_ComponentsCache_8() const { return ___s_ComponentsCache_8; }
	inline List_1_tA3929E98F6AC5A6E95EF799D2E3294F214358C0F ** get_address_of_s_ComponentsCache_8() { return &___s_ComponentsCache_8; }
	inline void set_s_ComponentsCache_8(List_1_tA3929E98F6AC5A6E95EF799D2E3294F214358C0F * value)
	{
		___s_ComponentsCache_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ComponentsCache_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_CreateEntity_23() { return static_cast<int32_t>(offsetof(GameObjectConversionMappingSystem_tD834531091319F873FDC1E5EDB439CE9654312DD_StaticFields, ___m_CreateEntity_23)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_m_CreateEntity_23() const { return ___m_CreateEntity_23; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_m_CreateEntity_23() { return &___m_CreateEntity_23; }
	inline void set_m_CreateEntity_23(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___m_CreateEntity_23 = value;
	}

	inline static int32_t get_offset_of_m_CreatePrimaryEntities_24() { return static_cast<int32_t>(offsetof(GameObjectConversionMappingSystem_tD834531091319F873FDC1E5EDB439CE9654312DD_StaticFields, ___m_CreatePrimaryEntities_24)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_m_CreatePrimaryEntities_24() const { return ___m_CreatePrimaryEntities_24; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_m_CreatePrimaryEntities_24() { return &___m_CreatePrimaryEntities_24; }
	inline void set_m_CreatePrimaryEntities_24(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___m_CreatePrimaryEntities_24 = value;
	}

	inline static int32_t get_offset_of_m_CreateAdditional_25() { return static_cast<int32_t>(offsetof(GameObjectConversionMappingSystem_tD834531091319F873FDC1E5EDB439CE9654312DD_StaticFields, ___m_CreateAdditional_25)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_m_CreateAdditional_25() const { return ___m_CreateAdditional_25; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_m_CreateAdditional_25() { return &___m_CreateAdditional_25; }
	inline void set_m_CreateAdditional_25(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___m_CreateAdditional_25 = value;
	}

	inline static int32_t get_offset_of_IncrementalClearEntities_26() { return static_cast<int32_t>(offsetof(GameObjectConversionMappingSystem_tD834531091319F873FDC1E5EDB439CE9654312DD_StaticFields, ___IncrementalClearEntities_26)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_IncrementalClearEntities_26() const { return ___IncrementalClearEntities_26; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_IncrementalClearEntities_26() { return &___IncrementalClearEntities_26; }
	inline void set_IncrementalClearEntities_26(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___IncrementalClearEntities_26 = value;
	}

	inline static int32_t get_offset_of_IncrementalCreateEntitiesOld_27() { return static_cast<int32_t>(offsetof(GameObjectConversionMappingSystem_tD834531091319F873FDC1E5EDB439CE9654312DD_StaticFields, ___IncrementalCreateEntitiesOld_27)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_IncrementalCreateEntitiesOld_27() const { return ___IncrementalCreateEntitiesOld_27; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_IncrementalCreateEntitiesOld_27() { return &___IncrementalCreateEntitiesOld_27; }
	inline void set_IncrementalCreateEntitiesOld_27(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___IncrementalCreateEntitiesOld_27 = value;
	}

	inline static int32_t get_offset_of_IncrementalCreateEntitiesNew_28() { return static_cast<int32_t>(offsetof(GameObjectConversionMappingSystem_tD834531091319F873FDC1E5EDB439CE9654312DD_StaticFields, ___IncrementalCreateEntitiesNew_28)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_IncrementalCreateEntitiesNew_28() const { return ___IncrementalCreateEntitiesNew_28; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_IncrementalCreateEntitiesNew_28() { return &___IncrementalCreateEntitiesNew_28; }
	inline void set_IncrementalCreateEntitiesNew_28(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___IncrementalCreateEntitiesNew_28 = value;
	}

	inline static int32_t get_offset_of_IncrementalDeleteEntities_29() { return static_cast<int32_t>(offsetof(GameObjectConversionMappingSystem_tD834531091319F873FDC1E5EDB439CE9654312DD_StaticFields, ___IncrementalDeleteEntities_29)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_IncrementalDeleteEntities_29() const { return ___IncrementalDeleteEntities_29; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_IncrementalDeleteEntities_29() { return &___IncrementalDeleteEntities_29; }
	inline void set_IncrementalDeleteEntities_29(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___IncrementalDeleteEntities_29 = value;
	}

	inline static int32_t get_offset_of_IncrementalCollectDependencies_30() { return static_cast<int32_t>(offsetof(GameObjectConversionMappingSystem_tD834531091319F873FDC1E5EDB439CE9654312DD_StaticFields, ___IncrementalCollectDependencies_30)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_IncrementalCollectDependencies_30() const { return ___IncrementalCollectDependencies_30; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_IncrementalCollectDependencies_30() { return &___IncrementalCollectDependencies_30; }
	inline void set_IncrementalCollectDependencies_30(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___IncrementalCollectDependencies_30 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Unity.Entities.Conversion.LogEventData[]
struct LogEventDataU5BU5D_t297A076CEB7438F3BBF18FEC1A58490451063CCC  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) LogEventData_t13585C99A55DB1722FFE891AD83B6D8EFAE593A1  m_Items[1];

public:
	inline LogEventData_t13585C99A55DB1722FFE891AD83B6D8EFAE593A1  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline LogEventData_t13585C99A55DB1722FFE891AD83B6D8EFAE593A1 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, LogEventData_t13585C99A55DB1722FFE891AD83B6D8EFAE593A1  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Message_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Stacktrace_2), (void*)NULL);
		#endif
	}
	inline LogEventData_t13585C99A55DB1722FFE891AD83B6D8EFAE593A1  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline LogEventData_t13585C99A55DB1722FFE891AD83B6D8EFAE593A1 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, LogEventData_t13585C99A55DB1722FFE891AD83B6D8EFAE593A1  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Message_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Stacktrace_2), (void*)NULL);
		#endif
	}
};
// System.ValueTuple`2<GameObjectConversion.LogType,System.String>[]
struct ValueTuple_2U5BU5D_t6FC2579E1768D70AD4F2224939E5F390B3BD4608  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ValueTuple_2_t5123C212FD35A05E1C2FB02EC85E106EFA9B5782  m_Items[1];

public:
	inline ValueTuple_2_t5123C212FD35A05E1C2FB02EC85E106EFA9B5782  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ValueTuple_2_t5123C212FD35A05E1C2FB02EC85E106EFA9B5782 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ValueTuple_2_t5123C212FD35A05E1C2FB02EC85E106EFA9B5782  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Item2_1), (void*)NULL);
	}
	inline ValueTuple_2_t5123C212FD35A05E1C2FB02EC85E106EFA9B5782  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ValueTuple_2_t5123C212FD35A05E1C2FB02EC85E106EFA9B5782 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ValueTuple_2_t5123C212FD35A05E1C2FB02EC85E106EFA9B5782  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Item2_1), (void*)NULL);
	}
};
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// Unity.Collections.NativeKeyValueArrays`2<!0,!1> Unity.Collections.NativeHashMap`2<System.Int32,System.Int32>::GetKeyValueArrays(Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeKeyValueArrays_2_t5F9F4BC8CC70775F900ECD85C18A5EA810621FC9  NativeHashMap_2_GetKeyValueArrays_m71DD792B1D1DB36C8EDFE5FA8A4DD1DDEF0C4A4D_gshared (NativeHashMap_2_tA2C896278E1577EA31B2632511A058B9731235C2 * __this, int32_t ___allocator0, const RuntimeMethod* method);
// !!0[] System.Array::Empty<Unity.Entities.Conversion.LogEventData>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LogEventDataU5BU5D_t297A076CEB7438F3BBF18FEC1A58490451063CCC* Array_Empty_TisLogEventData_t13585C99A55DB1722FFE891AD83B6D8EFAE593A1_mEA601FE4948CE7C3CB43DEE7E3C25B0251160182_gshared_inline (const RuntimeMethod* method);
// System.Boolean Unity.Entities.Conversion.MultiList`2<Unity.Entities.Conversion.LogEventData,Unity.Entities.Conversion.MultiListArrayData`1<Unity.Entities.Conversion.LogEventData>>::TrySelectList(System.Int32,Unity.Entities.Conversion.MultiListEnumerator`2<T,I>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MultiList_2_TrySelectList_m4B7276AD07401DF8A46F86E332C0A4FB9A5FBD49_gshared (MultiList_2_tD5B56EBEA5E9740DA1E48BE0BEFBA4938ABEF4BF * __this, int32_t ___headIdIndex0, MultiListEnumerator_2_tCC7D1B309E3ABDC97AA7AA4F5EFAB39555DB9F6F * ___iter1, const RuntimeMethod* method);
// System.Int32 Unity.Entities.Conversion.MultiListEnumerator`2<Unity.Entities.Conversion.LogEventData,Unity.Entities.Conversion.MultiListArrayData`1<Unity.Entities.Conversion.LogEventData>>::Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MultiListEnumerator_2_Count_mCDB7347ACDAECA9E271992006A7E9AB188ABDE3D_gshared (MultiListEnumerator_2_tCC7D1B309E3ABDC97AA7AA4F5EFAB39555DB9F6F * __this, const RuntimeMethod* method);
// System.Void Unity.Entities.Conversion.MultiListEnumerator`2<Unity.Entities.Conversion.LogEventData,Unity.Entities.Conversion.MultiListArrayData`1<Unity.Entities.Conversion.LogEventData>>::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultiListEnumerator_2_Reset_mD3990D3684B96458ED35E6EAA88F581BAA8D01F7_gshared (MultiListEnumerator_2_tCC7D1B309E3ABDC97AA7AA4F5EFAB39555DB9F6F * __this, const RuntimeMethod* method);
// System.Boolean Unity.Entities.Conversion.MultiListEnumerator`2<Unity.Entities.Conversion.LogEventData,Unity.Entities.Conversion.MultiListArrayData`1<Unity.Entities.Conversion.LogEventData>>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MultiListEnumerator_2_MoveNext_mFA976D72900425EEB9DD1E049F5410637AA44636_gshared (MultiListEnumerator_2_tCC7D1B309E3ABDC97AA7AA4F5EFAB39555DB9F6F * __this, const RuntimeMethod* method);
// T Unity.Entities.Conversion.MultiListEnumerator`2<Unity.Entities.Conversion.LogEventData,Unity.Entities.Conversion.MultiListArrayData`1<Unity.Entities.Conversion.LogEventData>>::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LogEventData_t13585C99A55DB1722FFE891AD83B6D8EFAE593A1  MultiListEnumerator_2_get_Current_m4AFC6704DDD282C714AD537BB9BC7412C2648BD6_gshared (MultiListEnumerator_2_tCC7D1B309E3ABDC97AA7AA4F5EFAB39555DB9F6F * __this, const RuntimeMethod* method);
// System.Void System.ValueTuple`2<System.Int32,Unity.Entities.Conversion.LogEventData>::.ctor(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueTuple_2__ctor_mCA6D2CD588BA1E915EFB689A55086899944CA194_gshared (ValueTuple_2_t21E30194CC22968E9B81643812C516AAF6C66093 * __this, int32_t ___item10, LogEventData_t13585C99A55DB1722FFE891AD83B6D8EFAE593A1  ___item21, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeKeyValueArrays`2<System.Int32,System.Int32>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeKeyValueArrays_2_Dispose_m58D26A9B94021185317C5365046F9AC097F77D21_gshared (NativeKeyValueArrays_2_t5F9F4BC8CC70775F900ECD85C18A5EA810621FC9 * __this, const RuntimeMethod* method);
// System.Void Unity.Entities.Conversion.MultiListEnumerator`2<Unity.Entities.Conversion.LogEventData,Unity.Entities.Conversion.MultiListArrayData`1<Unity.Entities.Conversion.LogEventData>>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultiListEnumerator_2_Dispose_m2645099A83D350B53B0740BE004662D0DCC24562_gshared (MultiListEnumerator_2_tCC7D1B309E3ABDC97AA7AA4F5EFAB39555DB9F6F * __this, const RuntimeMethod* method);
// System.Void System.ValueTuple`2<System.Int32Enum,System.Object>::.ctor(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueTuple_2__ctor_m205CF857D576549B0AC2A6A5AA1BF8FE4655A39F_gshared (ValueTuple_2_tE20326652B164D9D7311B4DAAD79974CD5B0565E * __this, int32_t ___item10, RuntimeObject * ___item21, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Cast<System.Int32Enum>(System.Collections.IEnumerable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Cast_TisInt32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C_mBB706720FF62BED92CDB7DB6586C1B0FBF13A4BD_gshared (RuntimeObject* ___source0, const RuntimeMethod* method);
// System.Void System.Func`2<System.Int32Enum,System.ValueTuple`2<System.Int32Enum,System.Object>>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_mA5D63EFB81A1A5A1FEB0FFE9371F5ADDB50E50EE_gshared (Func_2_t70BE69A6921C4166AFE0A18F5A68AD527FF214C7 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!1> System.Linq.Enumerable::Select<System.Int32Enum,System.ValueTuple`2<System.Int32Enum,System.Object>>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Select_TisInt32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C_TisValueTuple_2_tE20326652B164D9D7311B4DAAD79974CD5B0565E_m4F5FE00713425AFCD19BE439AF73A44D3765D1BB_gshared (RuntimeObject* ___source0, Func_2_t70BE69A6921C4166AFE0A18F5A68AD527FF214C7 * ___selector1, const RuntimeMethod* method);
// !!0[] System.Linq.Enumerable::ToArray<System.ValueTuple`2<System.Int32Enum,System.Object>>(System.Collections.Generic.IEnumerable`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_2U5BU5D_t6D955F3197425C088F7E3D4EAE26EEA3B95DAA15* Enumerable_ToArray_TisValueTuple_2_tE20326652B164D9D7311B4DAAD79974CD5B0565E_m1F2FAD25F21A09AD8B74380FE225CDEB92701C92_gshared (RuntimeObject* ___source0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponentInParent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponentInParent_TisRuntimeObject_mADA186D1675BEA6779C469918206294354385EC3_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Stack`1<System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_Clear_m108C5704F0CF0E476FED5C71BF7A4AA5804F3A61_gshared (Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.HashSet`1<System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_Clear_mF7FBC7E3AE9E541ED2D5E0000DA5A167A123067F_gshared (HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Stack`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1__ctor_mD782ADAC3AB9809F63B681213A7A39784A9A169A_gshared (Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m2CDA40DEC2900A9CB00F8348FF386DF44ABD0EC7_gshared (HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B * __this, const RuntimeMethod* method);
// !!0 Unity.Entities.World::GetExistingSystem<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * World_GetExistingSystem_TisRuntimeObject_m35438BA6CEFDC2CBE23FBDE40D33C506FEB3516C_gshared (World_tC5274CBB5238670C9A07FA5705DD82B5196C9A07 * __this, const RuntimeMethod* method);
// !!0& Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AsRef<Unity.Entities.Conversion.IncrementalConversionContext/RemoveFromHierarchy>(System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RemoveFromHierarchy_t3865B184595D47CA96262E2CC565E2B4A1FA1E37 * UnsafeUtility_AsRef_TisRemoveFromHierarchy_t3865B184595D47CA96262E2CC565E2B4A1FA1E37_m1ADDED420D48E2E4DCD693D38EE4F89930E0B143_gshared (void* ___ptr0, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeHashSet`1<System.Int32>::.ctor(System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeHashSet_1__ctor_m1C6183546A28FA0E8D7D1288AD53572D16BC84DA_gshared (NativeHashSet_1_t88F362074B652B4D4F194604B629EE17A41B3976 * __this, int32_t ___capacity0, int32_t ___allocator1, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1<!0> Unity.Collections.NativeHashSet`1<System.Int32>::ToNativeArray(Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99  NativeHashSet_1_ToNativeArray_m696576DFA3BCD824DA04772423A073E402D15DF8_gshared (NativeHashSet_1_t88F362074B652B4D4F194604B629EE17A41B3976 * __this, int32_t ___allocator0, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeList`1<System.Int32>::AddRange(Unity.Collections.NativeArray`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeList_1_AddRange_m357987151FA8A9EF6D59B076AD4C4346736E412D_gshared (NativeList_1_t37924D67F0E4D83DE506A261B7A05AE619630C80 * __this, NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99  ___elements0, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeHashSet`1<System.Int32>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeHashSet_1_Dispose_m8BF5871BAA311BC6BC8258BDADA80280985CB168_gshared (NativeHashSet_1_t88F362074B652B4D4F194604B629EE17A41B3976 * __this, const RuntimeMethod* method);
// System.Boolean Unity.Burst.FunctionPointer`1<System.Object>::get_IsCreated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FunctionPointer_1_get_IsCreated_mA51D29AC3E69DA6C5B999F075DFE234A9B60B067_gshared (FunctionPointer_1_t34D59AD2EA448B624FAA01B7CC28902A058C40A9 * __this, const RuntimeMethod* method);
// Unity.Burst.FunctionPointer`1<!!0> Unity.Burst.BurstCompiler::CompileFunctionPointer<System.Object>(!!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FunctionPointer_1_t34D59AD2EA448B624FAA01B7CC28902A058C40A9  BurstCompiler_CompileFunctionPointer_TisRuntimeObject_m658D754600ACD927B578222EDB4C863C0B8C80B3_gshared (RuntimeObject * ___delegateMethod0, const RuntimeMethod* method);
// !0 Unity.Burst.FunctionPointer`1<System.Object>::get_Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * FunctionPointer_1_get_Invoke_m142905CFEEF6A1EC8290685C247CBDA721AFA95D_gshared (FunctionPointer_1_t34D59AD2EA448B624FAA01B7CC28902A058C40A9 * __this, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1/Enumerator<!0> Unity.Collections.NativeArray`1<System.Int32>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tEE96FCD9D1EF14200B36BEAB6F34FA5FAFC27544  NativeArray_1_GetEnumerator_m4AB49881FD946B436235290D53A917EEDF8E43FF_gshared (NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99 * __this, const RuntimeMethod* method);
// !0 Unity.Collections.NativeArray`1/Enumerator<System.Int32>::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Enumerator_get_Current_m9CDCED7DEC6E463491CBAF504C60F72A2108D9D9_gshared (Enumerator_tEE96FCD9D1EF14200B36BEAB6F34FA5FAFC27544 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD_gshared (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_gshared (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, int32_t ___item0, const RuntimeMethod* method);
// System.Boolean Unity.Collections.NativeArray`1/Enumerator<System.Int32>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m740CBDF222F51FFDE7E86716999541DE775F5801_gshared (Enumerator_tEE96FCD9D1EF14200B36BEAB6F34FA5FAFC27544 * __this, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1/Enumerator<System.Int32>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m1BA5A217EE1F04EC997FF95CA595646E06C1B52B_gshared (Enumerator_tEE96FCD9D1EF14200B36BEAB6F34FA5FAFC27544 * __this, const RuntimeMethod* method);
// System.Boolean Unity.Collections.NativeMultiHashMap`2/Enumerator<System.Int32,System.Int32>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mA3B351B37128A8711612EDE71903537F0972DF40_gshared (Enumerator_tCBD2A52574F899C4C90698BB0A64BD8557E28A1A * __this, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeMultiHashMap`2/Enumerator<System.Int32,System.Int32>::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Reset_mC2D623CB35FED773F29BACCEE4C88144939B6343_gshared (Enumerator_tCBD2A52574F899C4C90698BB0A64BD8557E28A1A * __this, const RuntimeMethod* method);
// !1 Unity.Collections.NativeMultiHashMap`2/Enumerator<System.Int32,System.Int32>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Enumerator_get_Current_m494B18CB859AAD5742046CA5CDC9118C911C9A38_gshared_inline (Enumerator_tCBD2A52574F899C4C90698BB0A64BD8557E28A1A * __this, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeMultiHashMap`2/Enumerator<System.Int32,System.Int32>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m673C580EA95E7DCB6C15662690C38DFCCB0F734E_gshared (Enumerator_tCBD2A52574F899C4C90698BB0A64BD8557E28A1A * __this, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeList`1<System.Int32>::.ctor(System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeList_1__ctor_mBAE35EFBB4C7AC3B4A43CC67C5796BDCC9D954BB_gshared (NativeList_1_t37924D67F0E4D83DE506A261B7A05AE619630C80 * __this, int32_t ___initialCapacity0, int32_t ___allocator1, const RuntimeMethod* method);
// !0 Unity.Collections.NativeList`1<System.Int32>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeList_1_get_Item_mA9983E9C959E1D5B95B39FC7C40CF287E32D47FD_gshared (NativeList_1_t37924D67F0E4D83DE506A261B7A05AE619630C80 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeList`1<System.Int32>::Add(!0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeList_1_Add_m5237766797735D3AE742B808D9ACF0F9318687FB_gshared (NativeList_1_t37924D67F0E4D83DE506A261B7A05AE619630C80 * __this, int32_t* ___value0, const RuntimeMethod* method);
// System.Boolean Unity.Collections.NativeHashMap`2<System.Int32,System.Boolean>::TryAdd(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeHashMap_2_TryAdd_mE53CE4E1682EB266540ADCCF1DDFAEE7959A54AC_gshared (NativeHashMap_2_t977D8B51ED64BBFA8F25F7393936358BC6087EBB * __this, int32_t ___key0, bool ___item1, const RuntimeMethod* method);
// System.Int32 Unity.Collections.NativeList`1<System.Int32>::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeList_1_get_Length_mB5AB45D0A3072AE6178CF6AC58DAA1D4E3C28902_gshared (NativeList_1_t37924D67F0E4D83DE506A261B7A05AE619630C80 * __this, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeList`1<System.Int32>::set_Length(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeList_1_set_Length_m6104401699865BEA6A0EB4EEF806E0A8546F88EF_gshared (NativeList_1_t37924D67F0E4D83DE506A261B7A05AE619630C80 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void Unity.Properties.Property`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Property_2__ctor_m90E88124233F7B39ED69F3DA62BC129DE0B5C2DC_gshared (Property_2_tD7C7F959BE068E5DB2625A4229EEFE1C3F3413FE * __this, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Int32 System.Environment::get_CurrentManagedThreadId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D (const RuntimeMethod* method);
// System.Void Unity.Entities.Conversion.ConversionJournalData/<SelectLogEventsOrdered>d__43::<>m__Finally2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSelectLogEventsOrderedU3Ed__43_U3CU3Em__Finally2_m46A895D23D2CA826D7C9F76739B9B8E6CB9550A0 (U3CSelectLogEventsOrderedU3Ed__43_t5CB6C746560478F190074FB2DD44764B9DC886BF * __this, const RuntimeMethod* method);
// System.Void Unity.Entities.Conversion.ConversionJournalData/<SelectLogEventsOrdered>d__43::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSelectLogEventsOrderedU3Ed__43_U3CU3Em__Finally1_m9C6C83A773FEE4F2AC6D565745168E6EDFA54C81 (U3CSelectLogEventsOrderedU3Ed__43_t5CB6C746560478F190074FB2DD44764B9DC886BF * __this, const RuntimeMethod* method);
// Unity.Collections.NativeKeyValueArrays`2<!0,!1> Unity.Collections.NativeHashMap`2<System.Int32,System.Int32>::GetKeyValueArrays(Unity.Collections.Allocator)
inline NativeKeyValueArrays_2_t5F9F4BC8CC70775F900ECD85C18A5EA810621FC9  NativeHashMap_2_GetKeyValueArrays_m71DD792B1D1DB36C8EDFE5FA8A4DD1DDEF0C4A4D (NativeHashMap_2_tA2C896278E1577EA31B2632511A058B9731235C2 * __this, int32_t ___allocator0, const RuntimeMethod* method)
{
	return ((  NativeKeyValueArrays_2_t5F9F4BC8CC70775F900ECD85C18A5EA810621FC9  (*) (NativeHashMap_2_tA2C896278E1577EA31B2632511A058B9731235C2 *, int32_t, const RuntimeMethod*))NativeHashMap_2_GetKeyValueArrays_m71DD792B1D1DB36C8EDFE5FA8A4DD1DDEF0C4A4D_gshared)(__this, ___allocator0, method);
}
// !!0[] System.Array::Empty<Unity.Entities.Conversion.LogEventData>()
inline LogEventDataU5BU5D_t297A076CEB7438F3BBF18FEC1A58490451063CCC* Array_Empty_TisLogEventData_t13585C99A55DB1722FFE891AD83B6D8EFAE593A1_mEA601FE4948CE7C3CB43DEE7E3C25B0251160182_inline (const RuntimeMethod* method)
{
	return ((  LogEventDataU5BU5D_t297A076CEB7438F3BBF18FEC1A58490451063CCC* (*) (const RuntimeMethod*))Array_Empty_TisLogEventData_t13585C99A55DB1722FFE891AD83B6D8EFAE593A1_mEA601FE4948CE7C3CB43DEE7E3C25B0251160182_gshared_inline)(method);
}
// System.Boolean Unity.Entities.Conversion.MultiList`2<Unity.Entities.Conversion.LogEventData,Unity.Entities.Conversion.MultiListArrayData`1<Unity.Entities.Conversion.LogEventData>>::TrySelectList(System.Int32,Unity.Entities.Conversion.MultiListEnumerator`2<T,I>&)
inline bool MultiList_2_TrySelectList_m4B7276AD07401DF8A46F86E332C0A4FB9A5FBD49 (MultiList_2_tD5B56EBEA5E9740DA1E48BE0BEFBA4938ABEF4BF * __this, int32_t ___headIdIndex0, MultiListEnumerator_2_tCC7D1B309E3ABDC97AA7AA4F5EFAB39555DB9F6F * ___iter1, const RuntimeMethod* method)
{
	return ((  bool (*) (MultiList_2_tD5B56EBEA5E9740DA1E48BE0BEFBA4938ABEF4BF *, int32_t, MultiListEnumerator_2_tCC7D1B309E3ABDC97AA7AA4F5EFAB39555DB9F6F *, const RuntimeMethod*))MultiList_2_TrySelectList_m4B7276AD07401DF8A46F86E332C0A4FB9A5FBD49_gshared)(__this, ___headIdIndex0, ___iter1, method);
}
// System.Int32 Unity.Entities.Conversion.MultiListEnumerator`2<Unity.Entities.Conversion.LogEventData,Unity.Entities.Conversion.MultiListArrayData`1<Unity.Entities.Conversion.LogEventData>>::Count()
inline int32_t MultiListEnumerator_2_Count_mCDB7347ACDAECA9E271992006A7E9AB188ABDE3D (MultiListEnumerator_2_tCC7D1B309E3ABDC97AA7AA4F5EFAB39555DB9F6F * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (MultiListEnumerator_2_tCC7D1B309E3ABDC97AA7AA4F5EFAB39555DB9F6F *, const RuntimeMethod*))MultiListEnumerator_2_Count_mCDB7347ACDAECA9E271992006A7E9AB188ABDE3D_gshared)(__this, method);
}
// System.Boolean Unity.Entities.Conversion.MultiList::CalcExpandCapacity(System.Int32,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MultiList_CalcExpandCapacity_mF0F6E59850EEC772C34FA668EC23514CAD57FD72 (int32_t ___current0, int32_t* ___needed1, const RuntimeMethod* method);
// System.Void Unity.Entities.Conversion.MultiListEnumerator`2<Unity.Entities.Conversion.LogEventData,Unity.Entities.Conversion.MultiListArrayData`1<Unity.Entities.Conversion.LogEventData>>::Reset()
inline void MultiListEnumerator_2_Reset_mD3990D3684B96458ED35E6EAA88F581BAA8D01F7 (MultiListEnumerator_2_tCC7D1B309E3ABDC97AA7AA4F5EFAB39555DB9F6F * __this, const RuntimeMethod* method)
{
	((  void (*) (MultiListEnumerator_2_tCC7D1B309E3ABDC97AA7AA4F5EFAB39555DB9F6F *, const RuntimeMethod*))MultiListEnumerator_2_Reset_mD3990D3684B96458ED35E6EAA88F581BAA8D01F7_gshared)(__this, method);
}
// System.Boolean Unity.Entities.Conversion.MultiListEnumerator`2<Unity.Entities.Conversion.LogEventData,Unity.Entities.Conversion.MultiListArrayData`1<Unity.Entities.Conversion.LogEventData>>::MoveNext()
inline bool MultiListEnumerator_2_MoveNext_mFA976D72900425EEB9DD1E049F5410637AA44636 (MultiListEnumerator_2_tCC7D1B309E3ABDC97AA7AA4F5EFAB39555DB9F6F * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (MultiListEnumerator_2_tCC7D1B309E3ABDC97AA7AA4F5EFAB39555DB9F6F *, const RuntimeMethod*))MultiListEnumerator_2_MoveNext_mFA976D72900425EEB9DD1E049F5410637AA44636_gshared)(__this, method);
}
// T Unity.Entities.Conversion.MultiListEnumerator`2<Unity.Entities.Conversion.LogEventData,Unity.Entities.Conversion.MultiListArrayData`1<Unity.Entities.Conversion.LogEventData>>::get_Current()
inline LogEventData_t13585C99A55DB1722FFE891AD83B6D8EFAE593A1  MultiListEnumerator_2_get_Current_m4AFC6704DDD282C714AD537BB9BC7412C2648BD6 (MultiListEnumerator_2_tCC7D1B309E3ABDC97AA7AA4F5EFAB39555DB9F6F * __this, const RuntimeMethod* method)
{
	return ((  LogEventData_t13585C99A55DB1722FFE891AD83B6D8EFAE593A1  (*) (MultiListEnumerator_2_tCC7D1B309E3ABDC97AA7AA4F5EFAB39555DB9F6F *, const RuntimeMethod*))MultiListEnumerator_2_get_Current_m4AFC6704DDD282C714AD537BB9BC7412C2648BD6_gshared)(__this, method);
}
// System.Void System.ValueTuple`2<System.Int32,Unity.Entities.Conversion.LogEventData>::.ctor(!0,!1)
inline void ValueTuple_2__ctor_mCA6D2CD588BA1E915EFB689A55086899944CA194 (ValueTuple_2_t21E30194CC22968E9B81643812C516AAF6C66093 * __this, int32_t ___item10, LogEventData_t13585C99A55DB1722FFE891AD83B6D8EFAE593A1  ___item21, const RuntimeMethod* method)
{
	((  void (*) (ValueTuple_2_t21E30194CC22968E9B81643812C516AAF6C66093 *, int32_t, LogEventData_t13585C99A55DB1722FFE891AD83B6D8EFAE593A1 , const RuntimeMethod*))ValueTuple_2__ctor_mCA6D2CD588BA1E915EFB689A55086899944CA194_gshared)(__this, ___item10, ___item21, method);
}
// System.Void Unity.Entities.Conversion.ConversionJournalData/<SelectLogEventsOrdered>d__43::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSelectLogEventsOrderedU3Ed__43_System_IDisposable_Dispose_m714B9F339144FBF1FE54006B7E158B0306231034 (U3CSelectLogEventsOrderedU3Ed__43_t5CB6C746560478F190074FB2DD44764B9DC886BF * __this, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeKeyValueArrays`2<System.Int32,System.Int32>::Dispose()
inline void NativeKeyValueArrays_2_Dispose_m58D26A9B94021185317C5365046F9AC097F77D21 (NativeKeyValueArrays_2_t5F9F4BC8CC70775F900ECD85C18A5EA810621FC9 * __this, const RuntimeMethod* method)
{
	((  void (*) (NativeKeyValueArrays_2_t5F9F4BC8CC70775F900ECD85C18A5EA810621FC9 *, const RuntimeMethod*))NativeKeyValueArrays_2_Dispose_m58D26A9B94021185317C5365046F9AC097F77D21_gshared)(__this, method);
}
// System.Void Unity.Entities.Conversion.MultiListEnumerator`2<Unity.Entities.Conversion.LogEventData,Unity.Entities.Conversion.MultiListArrayData`1<Unity.Entities.Conversion.LogEventData>>::Dispose()
inline void MultiListEnumerator_2_Dispose_m2645099A83D350B53B0740BE004662D0DCC24562 (MultiListEnumerator_2_tCC7D1B309E3ABDC97AA7AA4F5EFAB39555DB9F6F * __this, const RuntimeMethod* method)
{
	((  void (*) (MultiListEnumerator_2_tCC7D1B309E3ABDC97AA7AA4F5EFAB39555DB9F6F *, const RuntimeMethod*))MultiListEnumerator_2_Dispose_m2645099A83D350B53B0740BE004662D0DCC24562_gshared)(__this, method);
}
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.Void Unity.Entities.Conversion.ConversionJournalData/<SelectLogEventsOrdered>d__43::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSelectLogEventsOrderedU3Ed__43__ctor_m6846FF3508E30DFABDF80B2768267E865DBC7E21 (U3CSelectLogEventsOrderedU3Ed__43_t5CB6C746560478F190074FB2DD44764B9DC886BF * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<System.ValueTuple`2<System.Int32,Unity.Entities.Conversion.LogEventData>> Unity.Entities.Conversion.ConversionJournalData/<SelectLogEventsOrdered>d__43::System.Collections.Generic.IEnumerable<(System.Int32objectInstanceId,Unity.Entities.Conversion.LogEventData)>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSelectLogEventsOrderedU3Ed__43_System_Collections_Generic_IEnumerableU3CU28System_Int32objectInstanceIdU2CUnity_Entities_Conversion_LogEventDataU29U3E_GetEnumerator_m99BBC3C0BF14650F391F72402FED41ED2162C4F2 (U3CSelectLogEventsOrderedU3Ed__43_t5CB6C746560478F190074FB2DD44764B9DC886BF * __this, const RuntimeMethod* method);
// System.Void GameObjectConversion.ConversionLogUtils/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m4AB8C25ACAAE7F4B8A63357ECA2387BB11185AE3 (U3CU3Ec_t2837DE7A38FEEE254E0CA2388F8A3843A0FCD5D7 * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void System.ValueTuple`2<GameObjectConversion.LogType,System.String>::.ctor(!0,!1)
inline void ValueTuple_2__ctor_m693695462F1DE67A78C8EF7622061960FB0D81E7 (ValueTuple_2_t5123C212FD35A05E1C2FB02EC85E106EFA9B5782 * __this, int32_t ___item10, String_t* ___item21, const RuntimeMethod* method)
{
	((  void (*) (ValueTuple_2_t5123C212FD35A05E1C2FB02EC85E106EFA9B5782 *, int32_t, String_t*, const RuntimeMethod*))ValueTuple_2__ctor_m205CF857D576549B0AC2A6A5AA1BF8FE4655A39F_gshared)(__this, ___item10, ___item21, method);
}
// System.Void GameObjectConversion.ConversionLogUtils/<ParseConversionLog>d__0::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CParseConversionLogU3Ed__0_U3CU3Em__Finally1_m0C2F6DBD10C5300E39B899494EC411A80DF3925A (U3CParseConversionLogU3Ed__0_t545008DA4AF19BE77424D4CC2D1D620EF42B9BD3 * __this, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// System.Array System.Enum::GetValues(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeArray * Enum_GetValues_m8EEC6B32F297FDB2F7375DC8B197E0E1AB8643BD (Type_t * ___enumType0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Cast<GameObjectConversion.LogType>(System.Collections.IEnumerable)
inline RuntimeObject* Enumerable_Cast_TisLogType_tD38249D9C1B645969AE6009D7DCEA678B72A725B_mC6F5FEFAD2D9DB4C397292626763E07838DDBE50 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_Cast_TisInt32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C_mBB706720FF62BED92CDB7DB6586C1B0FBF13A4BD_gshared)(___source0, method);
}
// System.Void System.Func`2<GameObjectConversion.LogType,System.ValueTuple`2<GameObjectConversion.LogType,System.String>>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mDD8238A62346741BE6B58494AE4EE2B1D3633D10 (Func_2_tFE4B20B363C884A7ED294D0081233424ACEB474A * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tFE4B20B363C884A7ED294D0081233424ACEB474A *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_mA5D63EFB81A1A5A1FEB0FFE9371F5ADDB50E50EE_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<!!1> System.Linq.Enumerable::Select<GameObjectConversion.LogType,System.ValueTuple`2<GameObjectConversion.LogType,System.String>>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
inline RuntimeObject* Enumerable_Select_TisLogType_tD38249D9C1B645969AE6009D7DCEA678B72A725B_TisValueTuple_2_t5123C212FD35A05E1C2FB02EC85E106EFA9B5782_mCB3921C163FC2E7CBB0B0D88AD36636FA371363D (RuntimeObject* ___source0, Func_2_tFE4B20B363C884A7ED294D0081233424ACEB474A * ___selector1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_tFE4B20B363C884A7ED294D0081233424ACEB474A *, const RuntimeMethod*))Enumerable_Select_TisInt32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C_TisValueTuple_2_tE20326652B164D9D7311B4DAAD79974CD5B0565E_m4F5FE00713425AFCD19BE439AF73A44D3765D1BB_gshared)(___source0, ___selector1, method);
}
// !!0[] System.Linq.Enumerable::ToArray<System.ValueTuple`2<GameObjectConversion.LogType,System.String>>(System.Collections.Generic.IEnumerable`1<!!0>)
inline ValueTuple_2U5BU5D_t6FC2579E1768D70AD4F2224939E5F390B3BD4608* Enumerable_ToArray_TisValueTuple_2_t5123C212FD35A05E1C2FB02EC85E106EFA9B5782_m61978F2F210BA22BF527BB993FD5B9EB604CF8FB (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  ValueTuple_2U5BU5D_t6FC2579E1768D70AD4F2224939E5F390B3BD4608* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToArray_TisValueTuple_2_tE20326652B164D9D7311B4DAAD79974CD5B0565E_m1F2FAD25F21A09AD8B74380FE225CDEB92701C92_gshared)(___source0, method);
}
// System.Collections.Generic.IEnumerable`1<System.String> System.IO.File::ReadLines(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* File_ReadLines_m07CA92A6B0869EE9A5EF21CA4F9453061C6F0BF6 (String_t* ___path0, const RuntimeMethod* method);
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9 (StringBuilder_t * __this, const RuntimeMethod* method);
// GameObjectConversion.LogType GameObjectConversion.ConversionLogUtils::<ParseConversionLog>g__GetLogType|0_1(System.String,GameObjectConversion.ConversionLogUtils/<>c__DisplayClass0_0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ConversionLogUtils_U3CParseConversionLogU3Eg__GetLogTypeU7C0_1_mC97E8AE124DFEABE6F6F4B7723E48F96F7B5F6A3 (String_t* ___currentLine0, U3CU3Ec__DisplayClass0_0_t41624A5E3E9C403B934AB4EE05AF471AF6F77CF2 * p1, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::AppendLine(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_AppendLine_m4FBF9761747825683B04B18842DF906473EEF7C8 (StringBuilder_t * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Int32 System.Text.StringBuilder::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StringBuilder_get_Length_m680500263C59ACFD9582BF2AEEED8E92C87FF5C0 (StringBuilder_t * __this, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Clear_m3D1F9F2F9EBA938807B7667DC2021D882B9B8FA1 (StringBuilder_t * __this, const RuntimeMethod* method);
// System.Void GameObjectConversion.ConversionLogUtils/<ParseConversionLog>d__0::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CParseConversionLogU3Ed__0_System_IDisposable_Dispose_mCB9CD77A69C3461C8B9827E4617291E820B45522 (U3CParseConversionLogU3Ed__0_t545008DA4AF19BE77424D4CC2D1D620EF42B9BD3 * __this, const RuntimeMethod* method);
// System.Void GameObjectConversion.ConversionLogUtils/<ParseConversionLog>d__0::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CParseConversionLogU3Ed__0__ctor_mCEF4E7E48ABA7B6F15E8E92D490333BFB13E6EBB (U3CParseConversionLogU3Ed__0_t545008DA4AF19BE77424D4CC2D1D620EF42B9BD3 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<System.ValueTuple`2<GameObjectConversion.LogType,System.String>> GameObjectConversion.ConversionLogUtils/<ParseConversionLog>d__0::System.Collections.Generic.IEnumerable<(GameObjectConversion.LogTypeType,System.StringContent)>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CParseConversionLogU3Ed__0_System_Collections_Generic_IEnumerableU3CU28GameObjectConversion_LogTypeTypeU2CSystem_StringContentU29U3E_GetEnumerator_m0C1DD6CCF20493F6D2C216DD7643BC45FA90724E (U3CParseConversionLogU3Ed__0_t545008DA4AF19BE77424D4CC2D1D620EF42B9BD3 * __this, const RuntimeMethod* method);
// System.Void Unity.Entities.Conversion.ConvertGameObjectToEntitySystem::Convert(UnityEngine.Transform,System.Collections.Generic.List`1<Unity.Entities.IConvertGameObjectToEntity>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConvertGameObjectToEntitySystem_Convert_mC63CDBF5116E3B7E96FED1F92FCA4EEBD43DBAC4 (ConvertGameObjectToEntitySystem_t98D507A5987792091C6805F64C272FFF43E48498 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___transform0, List_1_t316A5776D1E7716EA27F8F3084A23ECE9A43C29A * ___convertibles1, const RuntimeMethod* method);
// System.Void Unity.Entities.ConvertToEntitySystem/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mAF0915B3488EE84EA5452B63A993CEF79E1BBAEA (U3CU3Ec_t8A22BBA68B61DFC9EC097D4580B47F507D718AB5 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<StopConvertToEntity>()
inline StopConvertToEntity_t8D04CD984FF5CEFE36F851147629FD1F0DB85C68 * Component_GetComponent_TisStopConvertToEntity_t8D04CD984FF5CEFE36F851147629FD1F0DB85C68_m6C293C61CB12358A40A3DFDF3269457A7775D774 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  StopConvertToEntity_t8D04CD984FF5CEFE36F851147629FD1F0DB85C68 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void Unity.Debug::LogWarning(System.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m880A9AD0BB124D17C7F54DD0773FE4258F1A2416 (RuntimeObject * ___message0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___context1, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Transform::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponentInParent<Unity.Entities.ConvertToEntity>()
inline ConvertToEntity_t52854E5BDADE29922A64486FCB764A2ABB0EA040 * Component_GetComponentInParent_TisConvertToEntity_t52854E5BDADE29922A64486FCB764A2ABB0EA040_m2EE5B59A030248A9ECE067454D5017D66B7B86C0 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  ConvertToEntity_t52854E5BDADE29922A64486FCB764A2ABB0EA040 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponentInParent_TisRuntimeObject_mADA186D1675BEA6779C469918206294354385EC3_gshared)(__this, method);
}
// !!0 UnityEngine.Component::GetComponentInParent<StopConvertToEntity>()
inline StopConvertToEntity_t8D04CD984FF5CEFE36F851147629FD1F0DB85C68 * Component_GetComponentInParent_TisStopConvertToEntity_t8D04CD984FF5CEFE36F851147629FD1F0DB85C68_m67A00A0AFFCFE1CCEF4A7110C7CF86FC55397D94 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  StopConvertToEntity_t8D04CD984FF5CEFE36F851147629FD1F0DB85C68 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponentInParent_TisRuntimeObject_mADA186D1675BEA6779C469918206294354385EC3_gshared)(__this, method);
}
// System.Void Unity.Entities.DependencyTracker::CalculateDirectDependents(Unity.Collections.NativeArray`1<System.Int32>,Unity.Collections.NativeList`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DependencyTracker_CalculateDirectDependents_m887016733A573D88EBA6F43F08324D0A1496900C (DependencyTracker_t1E00B24B7D3375633864E7895FB5C4D3CD5627BB * __this, NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99  ___instanceIds0, NativeList_1_t37924D67F0E4D83DE506A261B7A05AE619630C80  ___outDependents1, const RuntimeMethod* method);
// System.Void Unity.Entities.DependencyTracker/CollectDependencies::Execute()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void CollectDependencies_Execute_mFF47C20DBF458E00A4D46AD7730E6CCE974E9288 (CollectDependencies_t8F4396371AA9FE16C7871EDE545853FF084F3DB5 * IL2CPP_PARAMETER_RESTRICT __this, const RuntimeMethod* method);
// System.Void Unity.Entities.Conversion.GameObjectConversionMappingSystem/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mD01497EF91DD729D965F15AAAC5CA4F1A62CE9DC (U3CU3Ec_t43693085741BED5C3AB7F55341F17CBD3273F0AD * __this, const RuntimeMethod* method);
// System.Type Unity.Entities.ComponentType::GetManagedType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * ComponentType_GetManagedType_m24DA0811B230B99E184DD5B824E293E3A4FB0721 (ComponentType_tEA24A4AB5BA78DEF7C2CEF25A05426D1F51D8370 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Clear()
inline void List_1_Clear_m7DF03CE7132B7D4C6AA2AEEA9BD1A8755AE12432 (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *, const RuntimeMethod*))List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Object>::Clear()
inline void List_1_Clear_mC986281A0F6F526F49A46B32BA044A00F562B121 (List_1_t9D216521E6A213FF8562D215598D336ABB5474F4 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t9D216521E6A213FF8562D215598D336ABB5474F4 *, const RuntimeMethod*))List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Stack`1<UnityEngine.Transform>::Clear()
inline void Stack_1_Clear_mEC19CFF96CF41EDF007BC9DE1187EDC56E087AE3 (Stack_1_t947A852F0DF179B04BC160BDA03DAC7B3F07460F * __this, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_t947A852F0DF179B04BC160BDA03DAC7B3F07460F *, const RuntimeMethod*))Stack_1_Clear_m108C5704F0CF0E476FED5C71BF7A4AA5804F3A61_gshared)(__this, method);
}
// System.Void System.Collections.Generic.HashSet`1<UnityEngine.GameObject>::Clear()
inline void HashSet_1_Clear_mDF4692C2E8DF02D17D06E465401059197AEA2389 (HashSet_1_t77825C5E92A478ADAC0C07A97589EB9CBFF229E3 * __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t77825C5E92A478ADAC0C07A97589EB9CBFF229E3 *, const RuntimeMethod*))HashSet_1_Clear_mF7FBC7E3AE9E541ED2D5E0000DA5A167A123067F_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::.ctor()
inline void List_1__ctor_m859B0EE8491FDDEB1A3F7115D334B863E025BBC8 (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Object>::.ctor()
inline void List_1__ctor_m8786AF4A4AE06CDD3B907914EE860C2748ED2EA4 (List_1_t9D216521E6A213FF8562D215598D336ABB5474F4 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t9D216521E6A213FF8562D215598D336ABB5474F4 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Stack`1<UnityEngine.Transform>::.ctor()
inline void Stack_1__ctor_m6B316383CD52D4A0BA0ABA35B1F6779F18397F61 (Stack_1_t947A852F0DF179B04BC160BDA03DAC7B3F07460F * __this, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_t947A852F0DF179B04BC160BDA03DAC7B3F07460F *, const RuntimeMethod*))Stack_1__ctor_mD782ADAC3AB9809F63B681213A7A39784A9A169A_gshared)(__this, method);
}
// System.Void System.Collections.Generic.HashSet`1<UnityEngine.GameObject>::.ctor()
inline void HashSet_1__ctor_m1B28A53D18B635B3D4B43D03DE4D370F3EB29FF2 (HashSet_1_t77825C5E92A478ADAC0C07A97589EB9CBFF229E3 * __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t77825C5E92A478ADAC0C07A97589EB9CBFF229E3 *, const RuntimeMethod*))HashSet_1__ctor_m2CDA40DEC2900A9CB00F8348FF386DF44ABD0EC7_gshared)(__this, method);
}
// System.Void Unity.Entities.Conversion.GameObjectConversionMappingSystem/CachedCollections::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CachedCollections_Init_m636171D4A1AE6CE96CF9D6CC81FC9B7E2C4E6EAF (CachedCollections_tB24E1D8BBB0133DF4FECA0A3E8D3E491B8DD4BD4 * __this, const RuntimeMethod* method);
// System.Void Unity.Entities.GameObjectConversionUtility/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m442A10D4C41DD3391F196CE9BC8964472B22BB01 (U3CU3Ec_tCC99DC24F6BBD3C1732D5A88EFDDF7A4D51A0D0D * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Object::GetInstanceID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Object_GetInstanceID_m7CF962BC1DB5C03F3522F88728CB2F514582B501 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, const RuntimeMethod* method);
// Unity.Entities.Conversion.GameObjectConversionMappingSystem Unity.Entities.GameObjectConversionUtility/Conversion::get_MappingSystem()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObjectConversionMappingSystem_tD834531091319F873FDC1E5EDB439CE9654312DD * Conversion_get_MappingSystem_m7C152D0A7C4D00070AED5CBE4560208D9B4999A2_inline (Conversion_t7DFF4B71AB43ADC70ECB67EC0800F6D23CBF01EF * __this, const RuntimeMethod* method);
// !!0 Unity.Entities.World::GetExistingSystem<Unity.Entities.Conversion.GameObjectConversionMappingSystem>()
inline GameObjectConversionMappingSystem_tD834531091319F873FDC1E5EDB439CE9654312DD * World_GetExistingSystem_TisGameObjectConversionMappingSystem_tD834531091319F873FDC1E5EDB439CE9654312DD_m88515F8D73556A994C599F29E5BD784490D573B0 (World_tC5274CBB5238670C9A07FA5705DD82B5196C9A07 * __this, const RuntimeMethod* method)
{
	return ((  GameObjectConversionMappingSystem_tD834531091319F873FDC1E5EDB439CE9654312DD * (*) (World_tC5274CBB5238670C9A07FA5705DD82B5196C9A07 *, const RuntimeMethod*))World_GetExistingSystem_TisRuntimeObject_m35438BA6CEFDC2CBE23FBDE40D33C506FEB3516C_gshared)(__this, method);
}
// System.Void Unity.Entities.Conversion.GameObjectConversionMappingSystem::BeginConversion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObjectConversionMappingSystem_BeginConversion_m61F11047D0ADE0075776CBF9074654A1F9F9D14E (GameObjectConversionMappingSystem_tD834531091319F873FDC1E5EDB439CE9654312DD * __this, const RuntimeMethod* method);
// System.Void Unity.Entities.GameObjectConversionUtility/Conversion::.ctor(Unity.Entities.World)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Conversion__ctor_mCB8F404D0E7F0CBE8AE860378782A111560443A2 (Conversion_t7DFF4B71AB43ADC70ECB67EC0800F6D23CBF01EF * __this, World_tC5274CBB5238670C9A07FA5705DD82B5196C9A07 * ___conversionWorld0, const RuntimeMethod* method);
// System.Void Unity.Entities.Conversion.GameObjectConversionMappingSystem::EndConversion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObjectConversionMappingSystem_EndConversion_m008A7229F664A3CAD3D4746ADD1B2E002F4B7FE2 (GameObjectConversionMappingSystem_tD834531091319F873FDC1E5EDB439CE9654312DD * __this, const RuntimeMethod* method);
// System.Void Unity.Entities.GameObjectConversionUtility/Conversion::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Conversion_Dispose_mDF063AA49A8ABD2FC8EDE47C99C5A7F35E64BAF0 (Conversion_t7DFF4B71AB43ADC70ECB67EC0800F6D23CBF01EF * __this, const RuntimeMethod* method);
// !!0& Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AsRef<Unity.Entities.Conversion.IncrementalConversionContext/RemoveFromHierarchy>(System.Void*)
inline RemoveFromHierarchy_t3865B184595D47CA96262E2CC565E2B4A1FA1E37 * UnsafeUtility_AsRef_TisRemoveFromHierarchy_t3865B184595D47CA96262E2CC565E2B4A1FA1E37_m1ADDED420D48E2E4DCD693D38EE4F89930E0B143 (void* ___ptr0, const RuntimeMethod* method)
{
	return ((  RemoveFromHierarchy_t3865B184595D47CA96262E2CC565E2B4A1FA1E37 * (*) (void*, const RuntimeMethod*))UnsafeUtility_AsRef_TisRemoveFromHierarchy_t3865B184595D47CA96262E2CC565E2B4A1FA1E37_m1ADDED420D48E2E4DCD693D38EE4F89930E0B143_gshared)(___ptr0, method);
}
// System.Void Unity.Collections.NativeHashSet`1<System.Int32>::.ctor(System.Int32,Unity.Collections.Allocator)
inline void NativeHashSet_1__ctor_m1C6183546A28FA0E8D7D1288AD53572D16BC84DA (NativeHashSet_1_t88F362074B652B4D4F194604B629EE17A41B3976 * __this, int32_t ___capacity0, int32_t ___allocator1, const RuntimeMethod* method)
{
	((  void (*) (NativeHashSet_1_t88F362074B652B4D4F194604B629EE17A41B3976 *, int32_t, int32_t, const RuntimeMethod*))NativeHashSet_1__ctor_m1C6183546A28FA0E8D7D1288AD53572D16BC84DA_gshared)(__this, ___capacity0, ___allocator1, method);
}
// Unity.Entities.Conversion.SceneHierarchy Unity.Entities.Conversion.IncrementalHierarchy::AsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SceneHierarchy_tD5CB36F0069FD8DBC527EC7B6E17F9780204C258  IncrementalHierarchy_AsReadOnly_m1412FFA7519FE55643A33C4ED328BCA84794826D (IncrementalHierarchy_t8D79F54D0D4356A9D0CC9C596D9E8A1B2CEDA8FC * __this, const RuntimeMethod* method);
// System.Void Unity.Entities.Conversion.SceneHierarchyExtensions::CollectHierarchyInstanceIds(Unity.Entities.Conversion.SceneHierarchy,Unity.Collections.NativeArray`1<System.Int32>,Unity.Collections.NativeHashSet`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneHierarchyExtensions_CollectHierarchyInstanceIds_m225CBE1204605B36EA52821DAD53E237C978219E (SceneHierarchy_tD5CB36F0069FD8DBC527EC7B6E17F9780204C258  ___hierarchy0, NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99  ___rootInstanceIds1, NativeHashSet_1_t88F362074B652B4D4F194604B629EE17A41B3976  ___visitedInstanceIds2, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1<!0> Unity.Collections.NativeHashSet`1<System.Int32>::ToNativeArray(Unity.Collections.Allocator)
inline NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99  NativeHashSet_1_ToNativeArray_m696576DFA3BCD824DA04772423A073E402D15DF8 (NativeHashSet_1_t88F362074B652B4D4F194604B629EE17A41B3976 * __this, int32_t ___allocator0, const RuntimeMethod* method)
{
	return ((  NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99  (*) (NativeHashSet_1_t88F362074B652B4D4F194604B629EE17A41B3976 *, int32_t, const RuntimeMethod*))NativeHashSet_1_ToNativeArray_m696576DFA3BCD824DA04772423A073E402D15DF8_gshared)(__this, ___allocator0, method);
}
// System.Void Unity.Entities.Conversion.IncrementalHierarchyFunctions::Remove(Unity.Entities.Conversion.IncrementalHierarchy,Unity.Collections.NativeArray`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IncrementalHierarchyFunctions_Remove_mA49CFFF234390F94064AAC9698F9472FEAFD0689 (IncrementalHierarchy_t8D79F54D0D4356A9D0CC9C596D9E8A1B2CEDA8FC  ___hierarchy0, NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99  ___instances1, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeList`1<System.Int32>::AddRange(Unity.Collections.NativeArray`1<!0>)
inline void NativeList_1_AddRange_m357987151FA8A9EF6D59B076AD4C4346736E412D (NativeList_1_t37924D67F0E4D83DE506A261B7A05AE619630C80 * __this, NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99  ___elements0, const RuntimeMethod* method)
{
	((  void (*) (NativeList_1_t37924D67F0E4D83DE506A261B7A05AE619630C80 *, NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99 , const RuntimeMethod*))NativeList_1_AddRange_m357987151FA8A9EF6D59B076AD4C4346736E412D_gshared)(__this, ___elements0, method);
}
// System.Void Unity.Collections.NativeHashSet`1<System.Int32>::Dispose()
inline void NativeHashSet_1_Dispose_m8BF5871BAA311BC6BC8258BDADA80280985CB168 (NativeHashSet_1_t88F362074B652B4D4F194604B629EE17A41B3976 * __this, const RuntimeMethod* method)
{
	((  void (*) (NativeHashSet_1_t88F362074B652B4D4F194604B629EE17A41B3976 *, const RuntimeMethod*))NativeHashSet_1_Dispose_m8BF5871BAA311BC6BC8258BDADA80280985CB168_gshared)(__this, method);
}
// System.Boolean Unity.Burst.FunctionPointer`1<Unity.Entities.Conversion.IncrementalConversionContext/RemoveFromHierarchy/Exec>::get_IsCreated()
inline bool FunctionPointer_1_get_IsCreated_m0E94FF6DCA0FF3B1ED02ACC51A5771AB909E6683 (FunctionPointer_1_tD12692C63FF46B37BE3A4C8FFFB6D3951E5E56DD * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (FunctionPointer_1_tD12692C63FF46B37BE3A4C8FFFB6D3951E5E56DD *, const RuntimeMethod*))FunctionPointer_1_get_IsCreated_mA51D29AC3E69DA6C5B999F075DFE234A9B60B067_gshared)(__this, method);
}
// System.Void Unity.Entities.Conversion.IncrementalConversionContext/RemoveFromHierarchy/Exec::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exec__ctor_m17809861465491795E4BF9A83E956B90BAF87166 (Exec_t13626ECD14E784C7148B8520FD71A4D0A5468675 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// Unity.Burst.FunctionPointer`1<!!0> Unity.Burst.BurstCompiler::CompileFunctionPointer<Unity.Entities.Conversion.IncrementalConversionContext/RemoveFromHierarchy/Exec>(!!0)
inline FunctionPointer_1_tD12692C63FF46B37BE3A4C8FFFB6D3951E5E56DD  BurstCompiler_CompileFunctionPointer_TisExec_t13626ECD14E784C7148B8520FD71A4D0A5468675_m2EE736A92B4DADF4E342C3BD124383091340CD47 (Exec_t13626ECD14E784C7148B8520FD71A4D0A5468675 * ___delegateMethod0, const RuntimeMethod* method)
{
	return ((  FunctionPointer_1_tD12692C63FF46B37BE3A4C8FFFB6D3951E5E56DD  (*) (Exec_t13626ECD14E784C7148B8520FD71A4D0A5468675 *, const RuntimeMethod*))BurstCompiler_CompileFunctionPointer_TisRuntimeObject_m658D754600ACD927B578222EDB4C863C0B8C80B3_gshared)(___delegateMethod0, method);
}
// !0 Unity.Burst.FunctionPointer`1<Unity.Entities.Conversion.IncrementalConversionContext/RemoveFromHierarchy/Exec>::get_Invoke()
inline Exec_t13626ECD14E784C7148B8520FD71A4D0A5468675 * FunctionPointer_1_get_Invoke_m4F6B34AEBBA4D79DBB2E7E246F029F6C43949931 (FunctionPointer_1_tD12692C63FF46B37BE3A4C8FFFB6D3951E5E56DD * __this, const RuntimeMethod* method)
{
	return ((  Exec_t13626ECD14E784C7148B8520FD71A4D0A5468675 * (*) (FunctionPointer_1_tD12692C63FF46B37BE3A4C8FFFB6D3951E5E56DD *, const RuntimeMethod*))FunctionPointer_1_get_Invoke_m142905CFEEF6A1EC8290685C247CBDA721AFA95D_gshared)(__this, method);
}
// System.Void Unity.Entities.Conversion.IncrementalConversionContext/RemoveFromHierarchy/Exec::Invoke(System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exec_Invoke_m80214B313E4782849890CB06881AEC91EC6F6C63 (Exec_t13626ECD14E784C7148B8520FD71A4D0A5468675 * __this, void* ___ptr0, const RuntimeMethod* method);
// System.Void Unity.Entities.Conversion.IncrementalConversionContext/RemoveFromHierarchy::RunWithBurst()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoveFromHierarchy_RunWithBurst_m0EBF3B8D9EC326FD7EFC7285A17F5E8367536295 (RemoveFromHierarchy_t3865B184595D47CA96262E2CC565E2B4A1FA1E37 * __this, const RuntimeMethod* method);
// System.Void Unity.Profiling.ProfilerMarker::.ctor(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline (ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Void Unity.Entities.Conversion.MultiListDebugUtility/<SelectAllLists>d__1::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSelectAllListsU3Ed__1_U3CU3Em__Finally1_mB3EAEEF4AE63CBEEBF62E5D31ECA6427CBFA2FD7 (U3CSelectAllListsU3Ed__1_t681808CD9B2F449764F76B111AE4D38F0938A623 * __this, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1/Enumerator<!0> Unity.Collections.NativeArray`1<System.Int32>::GetEnumerator()
inline Enumerator_tEE96FCD9D1EF14200B36BEAB6F34FA5FAFC27544  NativeArray_1_GetEnumerator_m4AB49881FD946B436235290D53A917EEDF8E43FF (NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tEE96FCD9D1EF14200B36BEAB6F34FA5FAFC27544  (*) (NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99 *, const RuntimeMethod*))NativeArray_1_GetEnumerator_m4AB49881FD946B436235290D53A917EEDF8E43FF_gshared)(__this, method);
}
// !0 Unity.Collections.NativeArray`1/Enumerator<System.Int32>::get_Current()
inline int32_t Enumerator_get_Current_m9CDCED7DEC6E463491CBAF504C60F72A2108D9D9 (Enumerator_tEE96FCD9D1EF14200B36BEAB6F34FA5FAFC27544 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Enumerator_tEE96FCD9D1EF14200B36BEAB6F34FA5FAFC27544 *, const RuntimeMethod*))Enumerator_get_Current_m9CDCED7DEC6E463491CBAF504C60F72A2108D9D9_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
inline void List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *, const RuntimeMethod*))List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(!0)
inline void List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, int32_t ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *, int32_t, const RuntimeMethod*))List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_gshared)(__this, ___item0, method);
}
// System.Boolean Unity.Collections.NativeArray`1/Enumerator<System.Int32>::MoveNext()
inline bool Enumerator_MoveNext_m740CBDF222F51FFDE7E86716999541DE775F5801 (Enumerator_tEE96FCD9D1EF14200B36BEAB6F34FA5FAFC27544 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tEE96FCD9D1EF14200B36BEAB6F34FA5FAFC27544 *, const RuntimeMethod*))Enumerator_MoveNext_m740CBDF222F51FFDE7E86716999541DE775F5801_gshared)(__this, method);
}
// System.Void Unity.Entities.Conversion.MultiListDebugUtility/<SelectAllLists>d__1::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSelectAllListsU3Ed__1_System_IDisposable_Dispose_m2466C6D89215529C63B321B94A698E41792B9ACB (U3CSelectAllListsU3Ed__1_t681808CD9B2F449764F76B111AE4D38F0938A623 * __this, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1/Enumerator<System.Int32>::Dispose()
inline void Enumerator_Dispose_m1BA5A217EE1F04EC997FF95CA595646E06C1B52B (Enumerator_tEE96FCD9D1EF14200B36BEAB6F34FA5FAFC27544 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tEE96FCD9D1EF14200B36BEAB6F34FA5FAFC27544 *, const RuntimeMethod*))Enumerator_Dispose_m1BA5A217EE1F04EC997FF95CA595646E06C1B52B_gshared)(__this, method);
}
// System.Void Unity.Entities.Conversion.MultiListDebugUtility/<SelectAllLists>d__1::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSelectAllListsU3Ed__1__ctor_m2BA9FA0DE6A887D8562C989A9A8DF2947857B437 (U3CSelectAllListsU3Ed__1_t681808CD9B2F449764F76B111AE4D38F0938A623 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.List`1<System.Int32>> Unity.Entities.Conversion.MultiListDebugUtility/<SelectAllLists>d__1::System.Collections.Generic.IEnumerable<System.Collections.Generic.List<System.Int32>>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSelectAllListsU3Ed__1_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_ListU3CSystem_Int32U3EU3E_GetEnumerator_m48BAECE9CA13EB26A7EC58B95192C1CA57A29909 (U3CSelectAllListsU3Ed__1_t681808CD9B2F449764F76B111AE4D38F0938A623 * __this, const RuntimeMethod* method);
// System.Void Unity.Entities.Conversion.SceneHierarchy/Children::.ctor(Unity.Collections.NativeMultiHashMap`2/Enumerator<System.Int32,System.Int32>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Children__ctor_mF7F91EF7713B066A283AB0E81E975FCF2A9BF1EB_inline (Children_t22E7C284A8562300D30C3F11E2C477C8ECEF77D6 * __this, Enumerator_tCBD2A52574F899C4C90698BB0A64BD8557E28A1A  ___iter0, const RuntimeMethod* method);
// System.Boolean Unity.Collections.NativeMultiHashMap`2/Enumerator<System.Int32,System.Int32>::MoveNext()
inline bool Enumerator_MoveNext_mA3B351B37128A8711612EDE71903537F0972DF40 (Enumerator_tCBD2A52574F899C4C90698BB0A64BD8557E28A1A * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tCBD2A52574F899C4C90698BB0A64BD8557E28A1A *, const RuntimeMethod*))Enumerator_MoveNext_mA3B351B37128A8711612EDE71903537F0972DF40_gshared)(__this, method);
}
// System.Boolean Unity.Entities.Conversion.SceneHierarchy/Children::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Children_MoveNext_m5C8C55FBB1F78E135165070AF6AB01F1DF862CA3 (Children_t22E7C284A8562300D30C3F11E2C477C8ECEF77D6 * __this, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeMultiHashMap`2/Enumerator<System.Int32,System.Int32>::Reset()
inline void Enumerator_Reset_mC2D623CB35FED773F29BACCEE4C88144939B6343 (Enumerator_tCBD2A52574F899C4C90698BB0A64BD8557E28A1A * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tCBD2A52574F899C4C90698BB0A64BD8557E28A1A *, const RuntimeMethod*))Enumerator_Reset_mC2D623CB35FED773F29BACCEE4C88144939B6343_gshared)(__this, method);
}
// System.Void Unity.Entities.Conversion.SceneHierarchy/Children::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Children_Reset_m1B1248A2EB01E84B00ECF3AD59461A67376A8314 (Children_t22E7C284A8562300D30C3F11E2C477C8ECEF77D6 * __this, const RuntimeMethod* method);
// !1 Unity.Collections.NativeMultiHashMap`2/Enumerator<System.Int32,System.Int32>::get_Current()
inline int32_t Enumerator_get_Current_m494B18CB859AAD5742046CA5CDC9118C911C9A38_inline (Enumerator_tCBD2A52574F899C4C90698BB0A64BD8557E28A1A * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Enumerator_tCBD2A52574F899C4C90698BB0A64BD8557E28A1A *, const RuntimeMethod*))Enumerator_get_Current_m494B18CB859AAD5742046CA5CDC9118C911C9A38_gshared_inline)(__this, method);
}
// System.Int32 Unity.Entities.Conversion.SceneHierarchy/Children::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Children_get_Current_mE24ABDF0BED58E38F754EB1F93D38E4AC52F5318 (Children_t22E7C284A8562300D30C3F11E2C477C8ECEF77D6 * __this, const RuntimeMethod* method);
// System.Object Unity.Entities.Conversion.SceneHierarchy/Children::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Children_System_Collections_IEnumerator_get_Current_mC4B420EF19C87522B68F5C140A664329D43B75FB (Children_t22E7C284A8562300D30C3F11E2C477C8ECEF77D6 * __this, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeMultiHashMap`2/Enumerator<System.Int32,System.Int32>::Dispose()
inline void Enumerator_Dispose_m673C580EA95E7DCB6C15662690C38DFCCB0F734E (Enumerator_tCBD2A52574F899C4C90698BB0A64BD8557E28A1A * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tCBD2A52574F899C4C90698BB0A64BD8557E28A1A *, const RuntimeMethod*))Enumerator_Dispose_m673C580EA95E7DCB6C15662690C38DFCCB0F734E_gshared)(__this, method);
}
// System.Void Unity.Entities.Conversion.SceneHierarchy/Children::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Children_Dispose_m257B4F3E34B171590738F0B11FC8CEBC057EA350 (Children_t22E7C284A8562300D30C3F11E2C477C8ECEF77D6 * __this, const RuntimeMethod* method);
// Unity.Entities.Conversion.SceneHierarchy/Children Unity.Entities.Conversion.SceneHierarchy/Children::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Children_t22E7C284A8562300D30C3F11E2C477C8ECEF77D6  Children_GetEnumerator_m4EB218A98EBE2D674D2A3608E4777E9E22534089 (Children_t22E7C284A8562300D30C3F11E2C477C8ECEF77D6 * __this, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<System.Int32> Unity.Entities.Conversion.SceneHierarchy/Children::System.Collections.Generic.IEnumerable<System.Int32>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Children_System_Collections_Generic_IEnumerableU3CSystem_Int32U3E_GetEnumerator_mFD1DECC17A31EB75C439E73FD9DBF2F1A9B8626D (Children_t22E7C284A8562300D30C3F11E2C477C8ECEF77D6 * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator Unity.Entities.Conversion.SceneHierarchy/Children::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Children_System_Collections_IEnumerable_GetEnumerator_m3B3E8879009CEABAE36CF3D006C62D62C50ADB27 (Children_t22E7C284A8562300D30C3F11E2C477C8ECEF77D6 * __this, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeList`1<System.Int32>::.ctor(System.Int32,Unity.Collections.Allocator)
inline void NativeList_1__ctor_mBAE35EFBB4C7AC3B4A43CC67C5796BDCC9D954BB (NativeList_1_t37924D67F0E4D83DE506A261B7A05AE619630C80 * __this, int32_t ___initialCapacity0, int32_t ___allocator1, const RuntimeMethod* method)
{
	((  void (*) (NativeList_1_t37924D67F0E4D83DE506A261B7A05AE619630C80 *, int32_t, int32_t, const RuntimeMethod*))NativeList_1__ctor_mBAE35EFBB4C7AC3B4A43CC67C5796BDCC9D954BB_gshared)(__this, ___initialCapacity0, ___allocator1, method);
}
// !0 Unity.Collections.NativeList`1<System.Int32>::get_Item(System.Int32)
inline int32_t NativeList_1_get_Item_mA9983E9C959E1D5B95B39FC7C40CF287E32D47FD (NativeList_1_t37924D67F0E4D83DE506A261B7A05AE619630C80 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NativeList_1_t37924D67F0E4D83DE506A261B7A05AE619630C80 *, int32_t, const RuntimeMethod*))NativeList_1_get_Item_mA9983E9C959E1D5B95B39FC7C40CF287E32D47FD_gshared)(__this, ___index0, method);
}
// System.Boolean Unity.Entities.Conversion.SceneHierarchy::TryGetIndexForInstanceId(System.Int32,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SceneHierarchy_TryGetIndexForInstanceId_m650AFC8F1BC9DD44633162977F0C07C97B54D1A8 (SceneHierarchy_tD5CB36F0069FD8DBC527EC7B6E17F9780204C258 * __this, int32_t ___instanceId0, int32_t* ___index1, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeList`1<System.Int32>::Add(!0&)
inline void NativeList_1_Add_m5237766797735D3AE742B808D9ACF0F9318687FB (NativeList_1_t37924D67F0E4D83DE506A261B7A05AE619630C80 * __this, int32_t* ___value0, const RuntimeMethod* method)
{
	((  void (*) (NativeList_1_t37924D67F0E4D83DE506A261B7A05AE619630C80 *, int32_t*, const RuntimeMethod*))NativeList_1_Add_m5237766797735D3AE742B808D9ACF0F9318687FB_gshared)(__this, ___value0, method);
}
// System.Boolean Unity.Collections.NativeHashMap`2<System.Int32,System.Boolean>::TryAdd(!0,!1)
inline bool NativeHashMap_2_TryAdd_mE53CE4E1682EB266540ADCCF1DDFAEE7959A54AC (NativeHashMap_2_t977D8B51ED64BBFA8F25F7393936358BC6087EBB * __this, int32_t ___key0, bool ___item1, const RuntimeMethod* method)
{
	return ((  bool (*) (NativeHashMap_2_t977D8B51ED64BBFA8F25F7393936358BC6087EBB *, int32_t, bool, const RuntimeMethod*))NativeHashMap_2_TryAdd_mE53CE4E1682EB266540ADCCF1DDFAEE7959A54AC_gshared)(__this, ___key0, ___item1, method);
}
// System.Int32 Unity.Collections.NativeList`1<System.Int32>::get_Length()
inline int32_t NativeList_1_get_Length_mB5AB45D0A3072AE6178CF6AC58DAA1D4E3C28902 (NativeList_1_t37924D67F0E4D83DE506A261B7A05AE619630C80 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NativeList_1_t37924D67F0E4D83DE506A261B7A05AE619630C80 *, const RuntimeMethod*))NativeList_1_get_Length_mB5AB45D0A3072AE6178CF6AC58DAA1D4E3C28902_gshared)(__this, method);
}
// System.Void Unity.Collections.NativeList`1<System.Int32>::set_Length(System.Int32)
inline void NativeList_1_set_Length_m6104401699865BEA6A0EB4EEF806E0A8546F88EF (NativeList_1_t37924D67F0E4D83DE506A261B7A05AE619630C80 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	((  void (*) (NativeList_1_t37924D67F0E4D83DE506A261B7A05AE619630C80 *, int32_t, const RuntimeMethod*))NativeList_1_set_Length_m6104401699865BEA6A0EB4EEF806E0A8546F88EF_gshared)(__this, ___value0, method);
}
// System.Int32 Unity.Entities.Conversion.SceneHierarchy::GetInstanceIdForIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SceneHierarchy_GetInstanceIdForIndex_m46E1E3A1BEA506056CCB307BBF21BC0E85D7A41E (SceneHierarchy_tD5CB36F0069FD8DBC527EC7B6E17F9780204C258 * __this, int32_t ___index0, const RuntimeMethod* method);
// Unity.Entities.Conversion.SceneHierarchy/Children Unity.Entities.Conversion.SceneHierarchy::GetChildIndicesForIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Children_t22E7C284A8562300D30C3F11E2C477C8ECEF77D6  SceneHierarchy_GetChildIndicesForIndex_m36E89FF41BCD5410743FACC9F313AEBB7B17F9EC (SceneHierarchy_tD5CB36F0069FD8DBC527EC7B6E17F9780204C258 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void Unity.Entities.Conversion.SceneHierarchyExtensions/CollectHierarchyInstanceIdsAndIndicesJob::Execute()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void CollectHierarchyInstanceIdsAndIndicesJob_Execute_mF6206205C83920753BADE6DDBC7239FE89C934B6 (CollectHierarchyInstanceIdsAndIndicesJob_t847F690D8238871B1D4201D6D275D8F48CE43461 * IL2CPP_PARAMETER_RESTRICT __this, const RuntimeMethod* method);
// System.Void Unity.Entities.Conversion.SceneHierarchyExtensions/CollectHierarchyInstanceIdsJob::Unity.Jobs.IJob.Execute()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void CollectHierarchyInstanceIdsJob_Unity_Jobs_IJob_Execute_m91DA44C523567936A10C482E1B67A86817344E28 (CollectHierarchyInstanceIdsJob_t445787F5F4BB00F07919FF4055525490E3F16745 * IL2CPP_PARAMETER_RESTRICT __this, const RuntimeMethod* method);
// System.Void Unity.Properties.Property`2<Unity.Entities.CompanionLink,UnityEngine.GameObject>::.ctor()
inline void Property_2__ctor_m1BAA1B1B55A36F058B42D189CA9E56A126FA4B81 (Property_2_t9C350B218BDC64D644B957D1AB5A01F89D95B9D8 * __this, const RuntimeMethod* method)
{
	((  void (*) (Property_2_t9C350B218BDC64D644B957D1AB5A01F89D95B9D8 *, const RuntimeMethod*))Property_2__ctor_m90E88124233F7B39ED69F3DA62BC129DE0B5C2DC_gshared)(__this, method);
}
// System.IntPtr Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::CreateMarker(System.String,System.UInt16,Unity.Profiling.LowLevel.MarkerFlags,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t ProfilerUnsafeUtility_CreateMarker_m419027084C68545B765B9345949D8BFCB96C51AD (String_t* ___name0, uint16_t ___categoryId1, uint16_t ___flags2, int32_t ___metadataCount3, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Entities.Conversion.ConversionJournalData/<SelectLogEventsOrdered>d__43::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSelectLogEventsOrderedU3Ed__43__ctor_m6846FF3508E30DFABDF80B2768267E865DBC7E21 (U3CSelectLogEventsOrderedU3Ed__43_t5CB6C746560478F190074FB2DD44764B9DC886BF * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		int32_t L_1;
		L_1 = Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D(/*hidden argument*/NULL);
		__this->set_U3CU3El__initialThreadId_2(L_1);
		return;
	}
}
// System.Void Unity.Entities.Conversion.ConversionJournalData/<SelectLogEventsOrdered>d__43::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSelectLogEventsOrderedU3Ed__43_System_IDisposable_Dispose_m714B9F339144FBF1FE54006B7E158B0306231034 (U3CSelectLogEventsOrderedU3Ed__43_t5CB6C746560478F190074FB2DD44764B9DC886BF * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)((int32_t)-4)))) > ((uint32_t)1))))
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_002f;
		}
	}

IL_0012:
	{
	}

IL_0013:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_3 = V_0;
			if ((((int32_t)L_3) == ((int32_t)((int32_t)-4))))
			{
				goto IL_001e;
			}
		}

IL_0018:
		{
			int32_t L_4 = V_0;
			if ((((int32_t)L_4) == ((int32_t)1)))
			{
				goto IL_001e;
			}
		}

IL_001c:
		{
			IL2CPP_LEAVE(0x2F, FINALLY_0028);
		}

IL_001e:
		{
		}

IL_001f:
		try
		{ // begin try (depth: 2)
			IL2CPP_LEAVE(0x2F, FINALLY_0021);
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_0021;
		}

FINALLY_0021:
		{ // begin finally (depth: 2)
			U3CSelectLogEventsOrderedU3Ed__43_U3CU3Em__Finally2_m46A895D23D2CA826D7C9F76739B9B8E6CB9550A0(__this, /*hidden argument*/NULL);
			IL2CPP_END_FINALLY(33)
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(33)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_END_CLEANUP(0x2F, FINALLY_0028);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0028;
	}

FINALLY_0028:
	{ // begin finally (depth: 1)
		U3CSelectLogEventsOrderedU3Ed__43_U3CU3Em__Finally1_m9C6C83A773FEE4F2AC6D565745168E6EDFA54C81(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(40)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(40)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x2F, IL_002f)
	}

IL_002f:
	{
		return;
	}
}
// System.Boolean Unity.Entities.Conversion.ConversionJournalData/<SelectLogEventsOrdered>d__43::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CSelectLogEventsOrderedU3Ed__43_MoveNext_m59D5C172489B34313D04E35E59698227C4E926ED (U3CSelectLogEventsOrderedU3Ed__43_t5CB6C746560478F190074FB2DD44764B9DC886BF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisLogEventData_t13585C99A55DB1722FFE891AD83B6D8EFAE593A1_mEA601FE4948CE7C3CB43DEE7E3C25B0251160182_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogEventDataU5BU5D_t297A076CEB7438F3BBF18FEC1A58490451063CCC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MultiListEnumerator_2_Count_mCDB7347ACDAECA9E271992006A7E9AB188ABDE3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MultiListEnumerator_2_MoveNext_mFA976D72900425EEB9DD1E049F5410637AA44636_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MultiListEnumerator_2_Reset_mD3990D3684B96458ED35E6EAA88F581BAA8D01F7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MultiListEnumerator_2_get_Current_m4AFC6704DDD282C714AD537BB9BC7412C2648BD6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MultiList_2_TrySelectList_m4B7276AD07401DF8A46F86E332C0A4FB9A5FBD49_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashMap_2_GetKeyValueArrays_m71DD792B1D1DB36C8EDFE5FA8A4DD1DDEF0C4A4D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueTuple_2__ctor_mCA6D2CD588BA1E915EFB689A55086899944CA194_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	MultiListEnumerator_2_tCC7D1B309E3ABDC97AA7AA4F5EFAB39555DB9F6F  V_2;
	memset((&V_2), 0, sizeof(V_2));
	NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99  V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_0 = __this->get_U3CU3E1__state_0();
			V_1 = L_0;
			int32_t L_1 = V_1;
			if (!L_1)
			{
				goto IL_0018;
			}
		}

IL_000a:
		{
			int32_t L_2 = V_1;
			if ((((int32_t)L_2) == ((int32_t)1)))
			{
				goto IL_017b;
			}
		}

IL_0011:
		{
			V_0 = (bool)0;
			goto IL_0213;
		}

IL_0018:
		{
			__this->set_U3CU3E1__state_0((-1));
			// using (var headIdIndices = m_HeadIdIndices.GetKeyValueArrays(Allocator.Temp))
			ConversionJournalData_t011F007E9CB17D8E21647F619DC5B34A043E35B1 * L_3 = __this->get_address_of_U3CU3E4__this_3();
			NativeHashMap_2_tA2C896278E1577EA31B2632511A058B9731235C2 * L_4 = L_3->get_address_of_m_HeadIdIndices_0();
			NativeKeyValueArrays_2_t5F9F4BC8CC70775F900ECD85C18A5EA810621FC9  L_5;
			L_5 = NativeHashMap_2_GetKeyValueArrays_m71DD792B1D1DB36C8EDFE5FA8A4DD1DDEF0C4A4D((NativeHashMap_2_tA2C896278E1577EA31B2632511A058B9731235C2 *)L_4, 2, /*hidden argument*/NativeHashMap_2_GetKeyValueArrays_m71DD792B1D1DB36C8EDFE5FA8A4DD1DDEF0C4A4D_RuntimeMethod_var);
			__this->set_U3CheadIdIndicesU3E5__2_5(L_5);
			__this->set_U3CU3E1__state_0(((int32_t)-3));
			// var events = Array.Empty<LogEventData>();
			LogEventDataU5BU5D_t297A076CEB7438F3BBF18FEC1A58490451063CCC* L_6;
			L_6 = Array_Empty_TisLogEventData_t13585C99A55DB1722FFE891AD83B6D8EFAE593A1_mEA601FE4948CE7C3CB43DEE7E3C25B0251160182_inline(/*hidden argument*/Array_Empty_TisLogEventData_t13585C99A55DB1722FFE891AD83B6D8EFAE593A1_mEA601FE4948CE7C3CB43DEE7E3C25B0251160182_RuntimeMethod_var);
			__this->set_U3CeventsU3E5__3_6(L_6);
			// for (var i = 0; i < headIdIndices.Keys.Length; ++i)
			__this->set_U3CiU3E5__4_7(0);
			goto IL_01d1;
		}

IL_0055:
		{
			// var objectInstanceId = headIdIndices.Keys[i];
			NativeKeyValueArrays_2_t5F9F4BC8CC70775F900ECD85C18A5EA810621FC9 * L_7 = __this->get_address_of_U3CheadIdIndicesU3E5__2_5();
			NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99  L_8 = L_7->get_Keys_0();
			V_3 = L_8;
			int32_t L_9 = __this->get_U3CiU3E5__4_7();
			int32_t L_10;
			L_10 = IL2CPP_NATIVEARRAY_GET_ITEM(int32_t, ((NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99 *)(&V_3))->___m_Buffer_0, L_9);
			__this->set_U3CobjectInstanceIdU3E5__5_8(L_10);
			// if (m_LogEvents.TrySelectList(headIdIndices.Values[i], out var iter))
			ConversionJournalData_t011F007E9CB17D8E21647F619DC5B34A043E35B1 * L_11 = __this->get_address_of_U3CU3E4__this_3();
			MultiList_2_tD5B56EBEA5E9740DA1E48BE0BEFBA4938ABEF4BF * L_12 = L_11->get_address_of_m_LogEvents_5();
			NativeKeyValueArrays_2_t5F9F4BC8CC70775F900ECD85C18A5EA810621FC9 * L_13 = __this->get_address_of_U3CheadIdIndicesU3E5__2_5();
			NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99  L_14 = L_13->get_Values_1();
			V_3 = L_14;
			int32_t L_15 = __this->get_U3CiU3E5__4_7();
			int32_t L_16;
			L_16 = IL2CPP_NATIVEARRAY_GET_ITEM(int32_t, ((NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99 *)(&V_3))->___m_Buffer_0, L_15);
			bool L_17;
			L_17 = MultiList_2_TrySelectList_m4B7276AD07401DF8A46F86E332C0A4FB9A5FBD49((MultiList_2_tD5B56EBEA5E9740DA1E48BE0BEFBA4938ABEF4BF *)L_12, L_16, (MultiListEnumerator_2_tCC7D1B309E3ABDC97AA7AA4F5EFAB39555DB9F6F *)(&V_2), /*hidden argument*/MultiList_2_TrySelectList_m4B7276AD07401DF8A46F86E332C0A4FB9A5FBD49_RuntimeMethod_var);
			if (!L_17)
			{
				goto IL_01bf;
			}
		}

IL_00a4:
		{
			// using (iter)
			MultiListEnumerator_2_tCC7D1B309E3ABDC97AA7AA4F5EFAB39555DB9F6F  L_18 = V_2;
			__this->set_U3CU3E7__wrap5_9(L_18);
			__this->set_U3CU3E1__state_0(((int32_t)-4));
			// var count = iter.Count();
			int32_t L_19;
			L_19 = MultiListEnumerator_2_Count_mCDB7347ACDAECA9E271992006A7E9AB188ABDE3D((MultiListEnumerator_2_tCC7D1B309E3ABDC97AA7AA4F5EFAB39555DB9F6F *)(&V_2), /*hidden argument*/MultiListEnumerator_2_Count_mCDB7347ACDAECA9E271992006A7E9AB188ABDE3D_RuntimeMethod_var);
			__this->set_U3CcountU3E5__7_10(L_19);
			// if (count == 0)
			int32_t L_20 = __this->get_U3CcountU3E5__7_10();
			if (!L_20)
			{
				goto IL_01ab;
			}
		}

IL_00cb:
		{
			// var newCount = count;
			int32_t L_21 = __this->get_U3CcountU3E5__7_10();
			V_4 = L_21;
			// if (MultiList.CalcExpandCapacity(events.Length, ref newCount))
			LogEventDataU5BU5D_t297A076CEB7438F3BBF18FEC1A58490451063CCC* L_22 = __this->get_U3CeventsU3E5__3_6();
			NullCheck(L_22);
			bool L_23;
			L_23 = MultiList_CalcExpandCapacity_mF0F6E59850EEC772C34FA668EC23514CAD57FD72(((int32_t)((int32_t)(((RuntimeArray*)L_22)->max_length))), (int32_t*)(&V_4), /*hidden argument*/NULL);
			if (!L_23)
			{
				goto IL_00f1;
			}
		}

IL_00e4:
		{
			// events = new LogEventData[newCount];
			int32_t L_24 = V_4;
			LogEventDataU5BU5D_t297A076CEB7438F3BBF18FEC1A58490451063CCC* L_25 = (LogEventDataU5BU5D_t297A076CEB7438F3BBF18FEC1A58490451063CCC*)(LogEventDataU5BU5D_t297A076CEB7438F3BBF18FEC1A58490451063CCC*)SZArrayNew(LogEventDataU5BU5D_t297A076CEB7438F3BBF18FEC1A58490451063CCC_il2cpp_TypeInfo_var, (uint32_t)L_24);
			__this->set_U3CeventsU3E5__3_6(L_25);
		}

IL_00f1:
		{
			// iter.Reset();
			MultiListEnumerator_2_Reset_mD3990D3684B96458ED35E6EAA88F581BAA8D01F7((MultiListEnumerator_2_tCC7D1B309E3ABDC97AA7AA4F5EFAB39555DB9F6F *)(&V_2), /*hidden argument*/MultiListEnumerator_2_Reset_mD3990D3684B96458ED35E6EAA88F581BAA8D01F7_RuntimeMethod_var);
			// iter.MoveNext();
			bool L_26;
			L_26 = MultiListEnumerator_2_MoveNext_mFA976D72900425EEB9DD1E049F5410637AA44636((MultiListEnumerator_2_tCC7D1B309E3ABDC97AA7AA4F5EFAB39555DB9F6F *)(&V_2), /*hidden argument*/MultiListEnumerator_2_MoveNext_mFA976D72900425EEB9DD1E049F5410637AA44636_RuntimeMethod_var);
			// events[0] = iter.Current;
			LogEventDataU5BU5D_t297A076CEB7438F3BBF18FEC1A58490451063CCC* L_27 = __this->get_U3CeventsU3E5__3_6();
			LogEventData_t13585C99A55DB1722FFE891AD83B6D8EFAE593A1  L_28;
			L_28 = MultiListEnumerator_2_get_Current_m4AFC6704DDD282C714AD537BB9BC7412C2648BD6((MultiListEnumerator_2_tCC7D1B309E3ABDC97AA7AA4F5EFAB39555DB9F6F *)(&V_2), /*hidden argument*/MultiListEnumerator_2_get_Current_m4AFC6704DDD282C714AD537BB9BC7412C2648BD6_RuntimeMethod_var);
			NullCheck(L_27);
			(L_27)->SetAt(static_cast<il2cpp_array_size_t>(0), (LogEventData_t13585C99A55DB1722FFE891AD83B6D8EFAE593A1 )L_28);
			// for (var e = count - 1; iter.MoveNext(); --e)
			int32_t L_29 = __this->get_U3CcountU3E5__7_10();
			V_5 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_29, (int32_t)1));
			goto IL_0139;
		}

IL_011f:
		{
			// events[e] = iter.Current;
			LogEventDataU5BU5D_t297A076CEB7438F3BBF18FEC1A58490451063CCC* L_30 = __this->get_U3CeventsU3E5__3_6();
			int32_t L_31 = V_5;
			LogEventData_t13585C99A55DB1722FFE891AD83B6D8EFAE593A1  L_32;
			L_32 = MultiListEnumerator_2_get_Current_m4AFC6704DDD282C714AD537BB9BC7412C2648BD6((MultiListEnumerator_2_tCC7D1B309E3ABDC97AA7AA4F5EFAB39555DB9F6F *)(&V_2), /*hidden argument*/MultiListEnumerator_2_get_Current_m4AFC6704DDD282C714AD537BB9BC7412C2648BD6_RuntimeMethod_var);
			NullCheck(L_30);
			(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_31), (LogEventData_t13585C99A55DB1722FFE891AD83B6D8EFAE593A1 )L_32);
			// for (var e = count - 1; iter.MoveNext(); --e)
			int32_t L_33 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_33, (int32_t)1));
		}

IL_0139:
		{
			// for (var e = count - 1; iter.MoveNext(); --e)
			bool L_34;
			L_34 = MultiListEnumerator_2_MoveNext_mFA976D72900425EEB9DD1E049F5410637AA44636((MultiListEnumerator_2_tCC7D1B309E3ABDC97AA7AA4F5EFAB39555DB9F6F *)(&V_2), /*hidden argument*/MultiListEnumerator_2_MoveNext_mFA976D72900425EEB9DD1E049F5410637AA44636_RuntimeMethod_var);
			if (L_34)
			{
				goto IL_011f;
			}
		}

IL_0142:
		{
			// for (var e = 0; e < count; ++e)
			__this->set_U3CeU3E5__8_11(0);
			goto IL_0195;
		}

IL_014b:
		{
			// yield return (objectInstanceId, events[e]);
			int32_t L_35 = __this->get_U3CobjectInstanceIdU3E5__5_8();
			LogEventDataU5BU5D_t297A076CEB7438F3BBF18FEC1A58490451063CCC* L_36 = __this->get_U3CeventsU3E5__3_6();
			int32_t L_37 = __this->get_U3CeU3E5__8_11();
			NullCheck(L_36);
			int32_t L_38 = L_37;
			LogEventData_t13585C99A55DB1722FFE891AD83B6D8EFAE593A1  L_39 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
			ValueTuple_2_t21E30194CC22968E9B81643812C516AAF6C66093  L_40;
			memset((&L_40), 0, sizeof(L_40));
			ValueTuple_2__ctor_mCA6D2CD588BA1E915EFB689A55086899944CA194((&L_40), L_35, L_39, /*hidden argument*/ValueTuple_2__ctor_mCA6D2CD588BA1E915EFB689A55086899944CA194_RuntimeMethod_var);
			__this->set_U3CU3E2__current_1(L_40);
			__this->set_U3CU3E1__state_0(1);
			V_0 = (bool)1;
			goto IL_0213;
		}

IL_017b:
		{
			__this->set_U3CU3E1__state_0(((int32_t)-4));
			// for (var e = 0; e < count; ++e)
			int32_t L_41 = __this->get_U3CeU3E5__8_11();
			V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_41, (int32_t)1));
			int32_t L_42 = V_6;
			__this->set_U3CeU3E5__8_11(L_42);
		}

IL_0195:
		{
			// for (var e = 0; e < count; ++e)
			int32_t L_43 = __this->get_U3CeU3E5__8_11();
			int32_t L_44 = __this->get_U3CcountU3E5__7_10();
			if ((((int32_t)L_43) < ((int32_t)L_44)))
			{
				goto IL_014b;
			}
		}

IL_01a3:
		{
			// }
			U3CSelectLogEventsOrderedU3Ed__43_U3CU3Em__Finally2_m46A895D23D2CA826D7C9F76739B9B8E6CB9550A0(__this, /*hidden argument*/NULL);
			goto IL_01b3;
		}

IL_01ab:
		{
			U3CSelectLogEventsOrderedU3Ed__43_U3CU3Em__Finally2_m46A895D23D2CA826D7C9F76739B9B8E6CB9550A0(__this, /*hidden argument*/NULL);
			goto IL_01bf;
		}

IL_01b3:
		{
			MultiListEnumerator_2_tCC7D1B309E3ABDC97AA7AA4F5EFAB39555DB9F6F * L_45 = __this->get_address_of_U3CU3E7__wrap5_9();
			il2cpp_codegen_initobj(L_45, sizeof(MultiListEnumerator_2_tCC7D1B309E3ABDC97AA7AA4F5EFAB39555DB9F6F ));
		}

IL_01bf:
		{
			// for (var i = 0; i < headIdIndices.Keys.Length; ++i)
			int32_t L_46 = __this->get_U3CiU3E5__4_7();
			V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_46, (int32_t)1));
			int32_t L_47 = V_6;
			__this->set_U3CiU3E5__4_7(L_47);
		}

IL_01d1:
		{
			// for (var i = 0; i < headIdIndices.Keys.Length; ++i)
			int32_t L_48 = __this->get_U3CiU3E5__4_7();
			NativeKeyValueArrays_2_t5F9F4BC8CC70775F900ECD85C18A5EA810621FC9 * L_49 = __this->get_address_of_U3CheadIdIndicesU3E5__2_5();
			NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99  L_50 = L_49->get_Keys_0();
			V_3 = L_50;
			int32_t L_51;
			L_51 = IL2CPP_NATIVEARRAY_GET_LENGTH(((NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99 *)(&V_3))->___m_Length_1);
			if ((((int32_t)L_48) < ((int32_t)L_51)))
			{
				goto IL_0055;
			}
		}

IL_01ef:
		{
			// }
			__this->set_U3CeventsU3E5__3_6((LogEventDataU5BU5D_t297A076CEB7438F3BBF18FEC1A58490451063CCC*)NULL);
			U3CSelectLogEventsOrderedU3Ed__43_U3CU3Em__Finally1_m9C6C83A773FEE4F2AC6D565745168E6EDFA54C81(__this, /*hidden argument*/NULL);
			NativeKeyValueArrays_2_t5F9F4BC8CC70775F900ECD85C18A5EA810621FC9 * L_52 = __this->get_address_of_U3CheadIdIndicesU3E5__2_5();
			il2cpp_codegen_initobj(L_52, sizeof(NativeKeyValueArrays_2_t5F9F4BC8CC70775F900ECD85C18A5EA810621FC9 ));
			// }
			V_0 = (bool)0;
			goto IL_0213;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FAULT_020c;
	}

FAULT_020c:
	{ // begin fault (depth: 1)
		U3CSelectLogEventsOrderedU3Ed__43_System_IDisposable_Dispose_m714B9F339144FBF1FE54006B7E158B0306231034(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(524)
	} // end fault
	IL2CPP_CLEANUP(524)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0213:
	{
		bool L_53 = V_0;
		return L_53;
	}
}
// System.Void Unity.Entities.Conversion.ConversionJournalData/<SelectLogEventsOrdered>d__43::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSelectLogEventsOrderedU3Ed__43_U3CU3Em__Finally1_m9C6C83A773FEE4F2AC6D565745168E6EDFA54C81 (U3CSelectLogEventsOrderedU3Ed__43_t5CB6C746560478F190074FB2DD44764B9DC886BF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeKeyValueArrays_2_Dispose_m58D26A9B94021185317C5365046F9AC097F77D21_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_U3CU3E1__state_0((-1));
		NativeKeyValueArrays_2_t5F9F4BC8CC70775F900ECD85C18A5EA810621FC9 * L_0 = __this->get_address_of_U3CheadIdIndicesU3E5__2_5();
		NativeKeyValueArrays_2_Dispose_m58D26A9B94021185317C5365046F9AC097F77D21((NativeKeyValueArrays_2_t5F9F4BC8CC70775F900ECD85C18A5EA810621FC9 *)L_0, /*hidden argument*/NativeKeyValueArrays_2_Dispose_m58D26A9B94021185317C5365046F9AC097F77D21_RuntimeMethod_var);
		return;
	}
}
// System.Void Unity.Entities.Conversion.ConversionJournalData/<SelectLogEventsOrdered>d__43::<>m__Finally2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSelectLogEventsOrderedU3Ed__43_U3CU3Em__Finally2_m46A895D23D2CA826D7C9F76739B9B8E6CB9550A0 (U3CSelectLogEventsOrderedU3Ed__43_t5CB6C746560478F190074FB2DD44764B9DC886BF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MultiListEnumerator_2_Dispose_m2645099A83D350B53B0740BE004662D0DCC24562_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_U3CU3E1__state_0(((int32_t)-3));
		MultiListEnumerator_2_tCC7D1B309E3ABDC97AA7AA4F5EFAB39555DB9F6F * L_0 = __this->get_address_of_U3CU3E7__wrap5_9();
		MultiListEnumerator_2_Dispose_m2645099A83D350B53B0740BE004662D0DCC24562((MultiListEnumerator_2_tCC7D1B309E3ABDC97AA7AA4F5EFAB39555DB9F6F *)L_0, /*hidden argument*/MultiListEnumerator_2_Dispose_m2645099A83D350B53B0740BE004662D0DCC24562_RuntimeMethod_var);
		return;
	}
}
// System.ValueTuple`2<System.Int32,Unity.Entities.Conversion.LogEventData> Unity.Entities.Conversion.ConversionJournalData/<SelectLogEventsOrdered>d__43::System.Collections.Generic.IEnumerator<(System.Int32objectInstanceId,Unity.Entities.Conversion.LogEventData)>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_2_t21E30194CC22968E9B81643812C516AAF6C66093  U3CSelectLogEventsOrderedU3Ed__43_System_Collections_Generic_IEnumeratorU3CU28System_Int32objectInstanceIdU2CUnity_Entities_Conversion_LogEventDataU29U3E_get_Current_m51F3ED626AC44B5076937944F4B9F55283C8D0B4 (U3CSelectLogEventsOrderedU3Ed__43_t5CB6C746560478F190074FB2DD44764B9DC886BF * __this, const RuntimeMethod* method)
{
	{
		ValueTuple_2_t21E30194CC22968E9B81643812C516AAF6C66093  L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Unity.Entities.Conversion.ConversionJournalData/<SelectLogEventsOrdered>d__43::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSelectLogEventsOrderedU3Ed__43_System_Collections_IEnumerator_Reset_mD8EB686C873D16F054D9825E74E905A2A8D5B52E (U3CSelectLogEventsOrderedU3Ed__43_t5CB6C746560478F190074FB2DD44764B9DC886BF * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CSelectLogEventsOrderedU3Ed__43_System_Collections_IEnumerator_Reset_mD8EB686C873D16F054D9825E74E905A2A8D5B52E_RuntimeMethod_var)));
	}
}
// System.Object Unity.Entities.Conversion.ConversionJournalData/<SelectLogEventsOrdered>d__43::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CSelectLogEventsOrderedU3Ed__43_System_Collections_IEnumerator_get_Current_m2AB87958E32E0ED691E22112440165DBCCBDACE3 (U3CSelectLogEventsOrderedU3Ed__43_t5CB6C746560478F190074FB2DD44764B9DC886BF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueTuple_2_t21E30194CC22968E9B81643812C516AAF6C66093_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ValueTuple_2_t21E30194CC22968E9B81643812C516AAF6C66093  L_0 = __this->get_U3CU3E2__current_1();
		ValueTuple_2_t21E30194CC22968E9B81643812C516AAF6C66093  L_1 = L_0;
		RuntimeObject * L_2 = Box(ValueTuple_2_t21E30194CC22968E9B81643812C516AAF6C66093_il2cpp_TypeInfo_var, &L_1);
		return L_2;
	}
}
// System.Collections.Generic.IEnumerator`1<System.ValueTuple`2<System.Int32,Unity.Entities.Conversion.LogEventData>> Unity.Entities.Conversion.ConversionJournalData/<SelectLogEventsOrdered>d__43::System.Collections.Generic.IEnumerable<(System.Int32objectInstanceId,Unity.Entities.Conversion.LogEventData)>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSelectLogEventsOrderedU3Ed__43_System_Collections_Generic_IEnumerableU3CU28System_Int32objectInstanceIdU2CUnity_Entities_Conversion_LogEventDataU29U3E_GetEnumerator_m99BBC3C0BF14650F391F72402FED41ED2162C4F2 (U3CSelectLogEventsOrderedU3Ed__43_t5CB6C746560478F190074FB2DD44764B9DC886BF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CSelectLogEventsOrderedU3Ed__43_t5CB6C746560478F190074FB2DD44764B9DC886BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CSelectLogEventsOrderedU3Ed__43_t5CB6C746560478F190074FB2DD44764B9DC886BF * V_0 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_1 = __this->get_U3CU3El__initialThreadId_2();
		int32_t L_2;
		L_2 = Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		__this->set_U3CU3E1__state_0(0);
		V_0 = __this;
		goto IL_0029;
	}

IL_0022:
	{
		U3CSelectLogEventsOrderedU3Ed__43_t5CB6C746560478F190074FB2DD44764B9DC886BF * L_3 = (U3CSelectLogEventsOrderedU3Ed__43_t5CB6C746560478F190074FB2DD44764B9DC886BF *)il2cpp_codegen_object_new(U3CSelectLogEventsOrderedU3Ed__43_t5CB6C746560478F190074FB2DD44764B9DC886BF_il2cpp_TypeInfo_var);
		U3CSelectLogEventsOrderedU3Ed__43__ctor_m6846FF3508E30DFABDF80B2768267E865DBC7E21(L_3, 0, /*hidden argument*/NULL);
		V_0 = L_3;
	}

IL_0029:
	{
		U3CSelectLogEventsOrderedU3Ed__43_t5CB6C746560478F190074FB2DD44764B9DC886BF * L_4 = V_0;
		ConversionJournalData_t011F007E9CB17D8E21647F619DC5B34A043E35B1  L_5 = __this->get_U3CU3E3__U3CU3E4__this_4();
		NullCheck(L_4);
		L_4->set_U3CU3E4__this_3(L_5);
		U3CSelectLogEventsOrderedU3Ed__43_t5CB6C746560478F190074FB2DD44764B9DC886BF * L_6 = V_0;
		return L_6;
	}
}
// System.Collections.IEnumerator Unity.Entities.Conversion.ConversionJournalData/<SelectLogEventsOrdered>d__43::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSelectLogEventsOrderedU3Ed__43_System_Collections_IEnumerable_GetEnumerator_mC4A5A1ECBA7A46B3CBA6C351335B3B4D4E346101 (U3CSelectLogEventsOrderedU3Ed__43_t5CB6C746560478F190074FB2DD44764B9DC886BF * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0;
		L_0 = U3CSelectLogEventsOrderedU3Ed__43_System_Collections_Generic_IEnumerableU3CU28System_Int32objectInstanceIdU2CUnity_Entities_Conversion_LogEventDataU29U3E_GetEnumerator_m99BBC3C0BF14650F391F72402FED41ED2162C4F2(__this, /*hidden argument*/NULL);
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
// System.Void GameObjectConversion.ConversionLogUtils/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mD5A436B1B8A54AD839C57CC5E35D19715FF7CBA0 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t2837DE7A38FEEE254E0CA2388F8A3843A0FCD5D7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t2837DE7A38FEEE254E0CA2388F8A3843A0FCD5D7 * L_0 = (U3CU3Ec_t2837DE7A38FEEE254E0CA2388F8A3843A0FCD5D7 *)il2cpp_codegen_object_new(U3CU3Ec_t2837DE7A38FEEE254E0CA2388F8A3843A0FCD5D7_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m4AB8C25ACAAE7F4B8A63357ECA2387BB11185AE3(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t2837DE7A38FEEE254E0CA2388F8A3843A0FCD5D7_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t2837DE7A38FEEE254E0CA2388F8A3843A0FCD5D7_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void GameObjectConversion.ConversionLogUtils/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m4AB8C25ACAAE7F4B8A63357ECA2387BB11185AE3 (U3CU3Ec_t2837DE7A38FEEE254E0CA2388F8A3843A0FCD5D7 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.ValueTuple`2<GameObjectConversion.LogType,System.String> GameObjectConversion.ConversionLogUtils/<>c::<ParseConversionLog>b__0_0(GameObjectConversion.LogType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_2_t5123C212FD35A05E1C2FB02EC85E106EFA9B5782  U3CU3Ec_U3CParseConversionLogU3Eb__0_0_m10DD3F4997241DCC4A5E3728B7360B0D39E40CF5 (U3CU3Ec_t2837DE7A38FEEE254E0CA2388F8A3843A0FCD5D7 * __this, int32_t ___logType0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogType_tD38249D9C1B645969AE6009D7DCEA678B72A725B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueTuple_2__ctor_m693695462F1DE67A78C8EF7622061960FB0D81E7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Enum.GetValues(typeof(LogType)).Cast<LogType>().Select(logType => (logType, $"{logType.ToString()}:")).ToArray();
		int32_t L_0 = ___logType0;
		RuntimeObject * L_1 = Box(LogType_tD38249D9C1B645969AE6009D7DCEA678B72A725B_il2cpp_TypeInfo_var, (&___logType0));
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_1);
		___logType0 = *(int32_t*)UnBox(L_1);
		String_t* L_3;
		L_3 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_2, _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D, /*hidden argument*/NULL);
		ValueTuple_2_t5123C212FD35A05E1C2FB02EC85E106EFA9B5782  L_4;
		memset((&L_4), 0, sizeof(L_4));
		ValueTuple_2__ctor_m693695462F1DE67A78C8EF7622061960FB0D81E7((&L_4), L_0, L_3, /*hidden argument*/ValueTuple_2__ctor_m693695462F1DE67A78C8EF7622061960FB0D81E7_RuntimeMethod_var);
		return L_4;
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
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GameObjectConversion.ConversionLogUtils/<ParseConversionLog>d__0::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CParseConversionLogU3Ed__0__ctor_mCEF4E7E48ABA7B6F15E8E92D490333BFB13E6EBB (U3CParseConversionLogU3Ed__0_t545008DA4AF19BE77424D4CC2D1D620EF42B9BD3 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		int32_t L_1;
		L_1 = Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D(/*hidden argument*/NULL);
		__this->set_U3CU3El__initialThreadId_2(L_1);
		return;
	}
}
// System.Void GameObjectConversion.ConversionLogUtils/<ParseConversionLog>d__0::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CParseConversionLogU3Ed__0_System_IDisposable_Dispose_mCB9CD77A69C3461C8B9827E4617291E820B45522 (U3CParseConversionLogU3Ed__0_t545008DA4AF19BE77424D4CC2D1D620EF42B9BD3 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_001a;
		}
	}

IL_0010:
	{
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		IL2CPP_LEAVE(0x1A, FINALLY_0013);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0013;
	}

FINALLY_0013:
	{ // begin finally (depth: 1)
		U3CParseConversionLogU3Ed__0_U3CU3Em__Finally1_m0C2F6DBD10C5300E39B899494EC411A80DF3925A(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(19)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(19)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x1A, IL_001a)
	}

IL_001a:
	{
		return;
	}
}
// System.Boolean GameObjectConversion.ConversionLogUtils/<ParseConversionLog>d__0::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CParseConversionLogU3Ed__0_MoveNext_m8F50531A8D4C0B90720B343AB73578172FB2FC8A (U3CParseConversionLogU3Ed__0_t545008DA4AF19BE77424D4CC2D1D620EF42B9BD3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Cast_TisLogType_tD38249D9C1B645969AE6009D7DCEA678B72A725B_mC6F5FEFAD2D9DB4C397292626763E07838DDBE50_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Select_TisLogType_tD38249D9C1B645969AE6009D7DCEA678B72A725B_TisValueTuple_2_t5123C212FD35A05E1C2FB02EC85E106EFA9B5782_mCB3921C163FC2E7CBB0B0D88AD36636FA371363D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToArray_TisValueTuple_2_t5123C212FD35A05E1C2FB02EC85E106EFA9B5782_m61978F2F210BA22BF527BB993FD5B9EB604CF8FB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2__ctor_mDD8238A62346741BE6B58494AE4EE2B1D3633D10_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tFE4B20B363C884A7ED294D0081233424ACEB474A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tBD60400523D840591A17E4CBBACC79397F68FAA2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t0DE5AA701B682A891412350E63D3E441F98F205C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogType_tD38249D9C1B645969AE6009D7DCEA678B72A725B_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CParseConversionLogU3Eb__0_0_m10DD3F4997241DCC4A5E3728B7360B0D39E40CF5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t2837DE7A38FEEE254E0CA2388F8A3843A0FCD5D7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueTuple_2__ctor_m693695462F1DE67A78C8EF7622061960FB0D81E7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	int32_t V_3 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 4> __leave_targets;
	Func_2_tFE4B20B363C884A7ED294D0081233424ACEB474A * G_B4_0 = NULL;
	RuntimeObject* G_B4_1 = NULL;
	U3CU3Ec__DisplayClass0_0_t41624A5E3E9C403B934AB4EE05AF471AF6F77CF2 * G_B4_2 = NULL;
	Func_2_tFE4B20B363C884A7ED294D0081233424ACEB474A * G_B3_0 = NULL;
	RuntimeObject* G_B3_1 = NULL;
	U3CU3Ec__DisplayClass0_0_t41624A5E3E9C403B934AB4EE05AF471AF6F77CF2 * G_B3_2 = NULL;

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_0 = __this->get_U3CU3E1__state_0();
			V_1 = L_0;
			int32_t L_1 = V_1;
			switch (L_1)
			{
				case 0:
				{
					goto IL_0020;
				}
				case 1:
				{
					goto IL_0119;
				}
				case 2:
				{
					goto IL_019e;
				}
			}
		}

IL_0019:
		{
			V_0 = (bool)0;
			goto IL_01b0;
		}

IL_0020:
		{
			__this->set_U3CU3E1__state_0((-1));
			// (LogType logType, string)[] allLogTypes =
			//     Enum.GetValues(typeof(LogType)).Cast<LogType>().Select(logType => (logType, $"{logType.ToString()}:")).ToArray();
			U3CU3Ec__DisplayClass0_0_t41624A5E3E9C403B934AB4EE05AF471AF6F77CF2 * L_2 = __this->get_address_of_U3CU3E8__1_5();
			RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_3 = { reinterpret_cast<intptr_t> (LogType_tD38249D9C1B645969AE6009D7DCEA678B72A725B_0_0_0_var) };
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_4;
			L_4 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_3, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var);
			RuntimeArray * L_5;
			L_5 = Enum_GetValues_m8EEC6B32F297FDB2F7375DC8B197E0E1AB8643BD(L_4, /*hidden argument*/NULL);
			RuntimeObject* L_6;
			L_6 = Enumerable_Cast_TisLogType_tD38249D9C1B645969AE6009D7DCEA678B72A725B_mC6F5FEFAD2D9DB4C397292626763E07838DDBE50(L_5, /*hidden argument*/Enumerable_Cast_TisLogType_tD38249D9C1B645969AE6009D7DCEA678B72A725B_mC6F5FEFAD2D9DB4C397292626763E07838DDBE50_RuntimeMethod_var);
			IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t2837DE7A38FEEE254E0CA2388F8A3843A0FCD5D7_il2cpp_TypeInfo_var);
			Func_2_tFE4B20B363C884A7ED294D0081233424ACEB474A * L_7 = ((U3CU3Ec_t2837DE7A38FEEE254E0CA2388F8A3843A0FCD5D7_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t2837DE7A38FEEE254E0CA2388F8A3843A0FCD5D7_il2cpp_TypeInfo_var))->get_U3CU3E9__0_0_1();
			Func_2_tFE4B20B363C884A7ED294D0081233424ACEB474A * L_8 = L_7;
			G_B3_0 = L_8;
			G_B3_1 = L_6;
			G_B3_2 = L_2;
			if (L_8)
			{
				G_B4_0 = L_8;
				G_B4_1 = L_6;
				G_B4_2 = L_2;
				goto IL_0060;
			}
		}

IL_0049:
		{
			IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t2837DE7A38FEEE254E0CA2388F8A3843A0FCD5D7_il2cpp_TypeInfo_var);
			U3CU3Ec_t2837DE7A38FEEE254E0CA2388F8A3843A0FCD5D7 * L_9 = ((U3CU3Ec_t2837DE7A38FEEE254E0CA2388F8A3843A0FCD5D7_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t2837DE7A38FEEE254E0CA2388F8A3843A0FCD5D7_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
			Func_2_tFE4B20B363C884A7ED294D0081233424ACEB474A * L_10 = (Func_2_tFE4B20B363C884A7ED294D0081233424ACEB474A *)il2cpp_codegen_object_new(Func_2_tFE4B20B363C884A7ED294D0081233424ACEB474A_il2cpp_TypeInfo_var);
			Func_2__ctor_mDD8238A62346741BE6B58494AE4EE2B1D3633D10(L_10, L_9, (intptr_t)((intptr_t)U3CU3Ec_U3CParseConversionLogU3Eb__0_0_m10DD3F4997241DCC4A5E3728B7360B0D39E40CF5_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_mDD8238A62346741BE6B58494AE4EE2B1D3633D10_RuntimeMethod_var);
			Func_2_tFE4B20B363C884A7ED294D0081233424ACEB474A * L_11 = L_10;
			((U3CU3Ec_t2837DE7A38FEEE254E0CA2388F8A3843A0FCD5D7_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t2837DE7A38FEEE254E0CA2388F8A3843A0FCD5D7_il2cpp_TypeInfo_var))->set_U3CU3E9__0_0_1(L_11);
			G_B4_0 = L_11;
			G_B4_1 = G_B3_1;
			G_B4_2 = G_B3_2;
		}

IL_0060:
		{
			RuntimeObject* L_12;
			L_12 = Enumerable_Select_TisLogType_tD38249D9C1B645969AE6009D7DCEA678B72A725B_TisValueTuple_2_t5123C212FD35A05E1C2FB02EC85E106EFA9B5782_mCB3921C163FC2E7CBB0B0D88AD36636FA371363D(G_B4_1, G_B4_0, /*hidden argument*/Enumerable_Select_TisLogType_tD38249D9C1B645969AE6009D7DCEA678B72A725B_TisValueTuple_2_t5123C212FD35A05E1C2FB02EC85E106EFA9B5782_mCB3921C163FC2E7CBB0B0D88AD36636FA371363D_RuntimeMethod_var);
			ValueTuple_2U5BU5D_t6FC2579E1768D70AD4F2224939E5F390B3BD4608* L_13;
			L_13 = Enumerable_ToArray_TisValueTuple_2_t5123C212FD35A05E1C2FB02EC85E106EFA9B5782_m61978F2F210BA22BF527BB993FD5B9EB604CF8FB(L_12, /*hidden argument*/Enumerable_ToArray_TisValueTuple_2_t5123C212FD35A05E1C2FB02EC85E106EFA9B5782_m61978F2F210BA22BF527BB993FD5B9EB604CF8FB_RuntimeMethod_var);
			G_B4_2->set_allLogTypes_0(L_13);
			// var conversionLogLines = File.ReadLines(conversionLogPath);
			String_t* L_14 = __this->get_conversionLogPath_3();
			RuntimeObject* L_15;
			L_15 = File_ReadLines_m07CA92A6B0869EE9A5EF21CA4F9453061C6F0BF6(L_14, /*hidden argument*/NULL);
			V_2 = L_15;
			// var currentLog = new StringBuilder();
			StringBuilder_t * L_16 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
			StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9(L_16, /*hidden argument*/NULL);
			__this->set_U3CcurrentLogU3E5__2_6(L_16);
			// LogType currentLogType = LogType.Line;
			V_3 = 5;
			// foreach (string line in conversionLogLines)
			RuntimeObject* L_17 = V_2;
			NullCheck(L_17);
			RuntimeObject* L_18;
			L_18 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.String>::GetEnumerator() */, IEnumerable_1_tBD60400523D840591A17E4CBBACC79397F68FAA2_il2cpp_TypeInfo_var, L_17);
			__this->set_U3CU3E7__wrap2_7(L_18);
			__this->set_U3CU3E1__state_0(((int32_t)-3));
			goto IL_014d;
		}

IL_00a1:
		{
			// foreach (string line in conversionLogLines)
			RuntimeObject* L_19 = __this->get_U3CU3E7__wrap2_7();
			NullCheck(L_19);
			String_t* L_20;
			L_20 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.String>::get_Current() */, IEnumerator_1_t0DE5AA701B682A891412350E63D3E441F98F205C_il2cpp_TypeInfo_var, L_19);
			__this->set_U3ClineU3E5__4_8(L_20);
			// LogType logType = GetLogType(line);
			String_t* L_21 = __this->get_U3ClineU3E5__4_8();
			U3CU3Ec__DisplayClass0_0_t41624A5E3E9C403B934AB4EE05AF471AF6F77CF2 * L_22 = __this->get_address_of_U3CU3E8__1_5();
			int32_t L_23;
			L_23 = ConversionLogUtils_U3CParseConversionLogU3Eg__GetLogTypeU7C0_1_mC97E8AE124DFEABE6F6F4B7723E48F96F7B5F6A3(L_21, (U3CU3Ec__DisplayClass0_0_t41624A5E3E9C403B934AB4EE05AF471AF6F77CF2 *)L_22, /*hidden argument*/NULL);
			__this->set_U3ClogTypeU3E5__5_9(L_23);
			// if (logType == LogType.Line)
			int32_t L_24 = __this->get_U3ClogTypeU3E5__5_9();
			if ((!(((uint32_t)L_24) == ((uint32_t)5))))
			{
				goto IL_00e6;
			}
		}

IL_00d2:
		{
			// currentLog.AppendLine(line);
			StringBuilder_t * L_25 = __this->get_U3CcurrentLogU3E5__2_6();
			String_t* L_26 = __this->get_U3ClineU3E5__4_8();
			NullCheck(L_25);
			StringBuilder_t * L_27;
			L_27 = StringBuilder_AppendLine_m4FBF9761747825683B04B18842DF906473EEF7C8(L_25, L_26, /*hidden argument*/NULL);
			// }
			goto IL_0146;
		}

IL_00e6:
		{
			// if (currentLog.Length > 0)
			StringBuilder_t * L_28 = __this->get_U3CcurrentLogU3E5__2_6();
			NullCheck(L_28);
			int32_t L_29;
			L_29 = StringBuilder_get_Length_m680500263C59ACFD9582BF2AEEED8E92C87FF5C0(L_28, /*hidden argument*/NULL);
			if ((((int32_t)L_29) <= ((int32_t)0)))
			{
				goto IL_012d;
			}
		}

IL_00f4:
		{
			// yield return (currentLogType, currentLog.ToString());
			int32_t L_30 = V_3;
			StringBuilder_t * L_31 = __this->get_U3CcurrentLogU3E5__2_6();
			NullCheck(L_31);
			String_t* L_32;
			L_32 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_31);
			ValueTuple_2_t5123C212FD35A05E1C2FB02EC85E106EFA9B5782  L_33;
			memset((&L_33), 0, sizeof(L_33));
			ValueTuple_2__ctor_m693695462F1DE67A78C8EF7622061960FB0D81E7((&L_33), L_30, L_32, /*hidden argument*/ValueTuple_2__ctor_m693695462F1DE67A78C8EF7622061960FB0D81E7_RuntimeMethod_var);
			__this->set_U3CU3E2__current_1(L_33);
			__this->set_U3CU3E1__state_0(1);
			V_0 = (bool)1;
			goto IL_01b0;
		}

IL_0119:
		{
			__this->set_U3CU3E1__state_0(((int32_t)-3));
			// currentLog.Clear();
			StringBuilder_t * L_34 = __this->get_U3CcurrentLogU3E5__2_6();
			NullCheck(L_34);
			StringBuilder_t * L_35;
			L_35 = StringBuilder_Clear_m3D1F9F2F9EBA938807B7667DC2021D882B9B8FA1(L_34, /*hidden argument*/NULL);
		}

IL_012d:
		{
			// currentLogType = logType;
			int32_t L_36 = __this->get_U3ClogTypeU3E5__5_9();
			V_3 = L_36;
			// currentLog.AppendLine(line);
			StringBuilder_t * L_37 = __this->get_U3CcurrentLogU3E5__2_6();
			String_t* L_38 = __this->get_U3ClineU3E5__4_8();
			NullCheck(L_37);
			StringBuilder_t * L_39;
			L_39 = StringBuilder_AppendLine_m4FBF9761747825683B04B18842DF906473EEF7C8(L_37, L_38, /*hidden argument*/NULL);
		}

IL_0146:
		{
			// }
			__this->set_U3ClineU3E5__4_8((String_t*)NULL);
		}

IL_014d:
		{
			// foreach (string line in conversionLogLines)
			RuntimeObject* L_40 = __this->get_U3CU3E7__wrap2_7();
			NullCheck(L_40);
			bool L_41;
			L_41 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_40);
			if (L_41)
			{
				goto IL_00a1;
			}
		}

IL_015d:
		{
			U3CParseConversionLogU3Ed__0_U3CU3Em__Finally1_m0C2F6DBD10C5300E39B899494EC411A80DF3925A(__this, /*hidden argument*/NULL);
			__this->set_U3CU3E7__wrap2_7((RuntimeObject*)NULL);
			// if (currentLog.Length > 0 && currentLogType != LogType.Line)
			StringBuilder_t * L_42 = __this->get_U3CcurrentLogU3E5__2_6();
			NullCheck(L_42);
			int32_t L_43;
			L_43 = StringBuilder_get_Length_m680500263C59ACFD9582BF2AEEED8E92C87FF5C0(L_42, /*hidden argument*/NULL);
			if ((((int32_t)L_43) <= ((int32_t)0)))
			{
				goto IL_01a5;
			}
		}

IL_0178:
		{
			int32_t L_44 = V_3;
			if ((((int32_t)L_44) == ((int32_t)5)))
			{
				goto IL_01a5;
			}
		}

IL_017c:
		{
			// yield return (currentLogType, currentLog.ToString());
			int32_t L_45 = V_3;
			StringBuilder_t * L_46 = __this->get_U3CcurrentLogU3E5__2_6();
			NullCheck(L_46);
			String_t* L_47;
			L_47 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_46);
			ValueTuple_2_t5123C212FD35A05E1C2FB02EC85E106EFA9B5782  L_48;
			memset((&L_48), 0, sizeof(L_48));
			ValueTuple_2__ctor_m693695462F1DE67A78C8EF7622061960FB0D81E7((&L_48), L_45, L_47, /*hidden argument*/ValueTuple_2__ctor_m693695462F1DE67A78C8EF7622061960FB0D81E7_RuntimeMethod_var);
			__this->set_U3CU3E2__current_1(L_48);
			__this->set_U3CU3E1__state_0(2);
			V_0 = (bool)1;
			goto IL_01b0;
		}

IL_019e:
		{
			__this->set_U3CU3E1__state_0((-1));
		}

IL_01a5:
		{
			// }
			V_0 = (bool)0;
			goto IL_01b0;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FAULT_01a9;
	}

FAULT_01a9:
	{ // begin fault (depth: 1)
		U3CParseConversionLogU3Ed__0_System_IDisposable_Dispose_mCB9CD77A69C3461C8B9827E4617291E820B45522(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(425)
	} // end fault
	IL2CPP_CLEANUP(425)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_01b0:
	{
		bool L_49 = V_0;
		return L_49;
	}
}
// System.Void GameObjectConversion.ConversionLogUtils/<ParseConversionLog>d__0::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CParseConversionLogU3Ed__0_U3CU3Em__Finally1_m0C2F6DBD10C5300E39B899494EC411A80DF3925A (U3CParseConversionLogU3Ed__0_t545008DA4AF19BE77424D4CC2D1D620EF42B9BD3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_U3CU3E1__state_0((-1));
		RuntimeObject* L_0 = __this->get_U3CU3E7__wrap2_7();
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject* L_1 = __this->get_U3CU3E7__wrap2_7();
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_1);
	}

IL_001a:
	{
		return;
	}
}
// System.ValueTuple`2<GameObjectConversion.LogType,System.String> GameObjectConversion.ConversionLogUtils/<ParseConversionLog>d__0::System.Collections.Generic.IEnumerator<(GameObjectConversion.LogTypeType,System.StringContent)>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_2_t5123C212FD35A05E1C2FB02EC85E106EFA9B5782  U3CParseConversionLogU3Ed__0_System_Collections_Generic_IEnumeratorU3CU28GameObjectConversion_LogTypeTypeU2CSystem_StringContentU29U3E_get_Current_mFF2767ADEC14C5ED445B8C796974FC7EF5B13C19 (U3CParseConversionLogU3Ed__0_t545008DA4AF19BE77424D4CC2D1D620EF42B9BD3 * __this, const RuntimeMethod* method)
{
	{
		ValueTuple_2_t5123C212FD35A05E1C2FB02EC85E106EFA9B5782  L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void GameObjectConversion.ConversionLogUtils/<ParseConversionLog>d__0::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CParseConversionLogU3Ed__0_System_Collections_IEnumerator_Reset_m649D945A97AD34486495ECEF764097DBEFEF9FFD (U3CParseConversionLogU3Ed__0_t545008DA4AF19BE77424D4CC2D1D620EF42B9BD3 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CParseConversionLogU3Ed__0_System_Collections_IEnumerator_Reset_m649D945A97AD34486495ECEF764097DBEFEF9FFD_RuntimeMethod_var)));
	}
}
// System.Object GameObjectConversion.ConversionLogUtils/<ParseConversionLog>d__0::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CParseConversionLogU3Ed__0_System_Collections_IEnumerator_get_Current_m1D854B8DF8132C1AFD2663B1EF83E314C379377F (U3CParseConversionLogU3Ed__0_t545008DA4AF19BE77424D4CC2D1D620EF42B9BD3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueTuple_2_t5123C212FD35A05E1C2FB02EC85E106EFA9B5782_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ValueTuple_2_t5123C212FD35A05E1C2FB02EC85E106EFA9B5782  L_0 = __this->get_U3CU3E2__current_1();
		ValueTuple_2_t5123C212FD35A05E1C2FB02EC85E106EFA9B5782  L_1 = L_0;
		RuntimeObject * L_2 = Box(ValueTuple_2_t5123C212FD35A05E1C2FB02EC85E106EFA9B5782_il2cpp_TypeInfo_var, &L_1);
		return L_2;
	}
}
// System.Collections.Generic.IEnumerator`1<System.ValueTuple`2<GameObjectConversion.LogType,System.String>> GameObjectConversion.ConversionLogUtils/<ParseConversionLog>d__0::System.Collections.Generic.IEnumerable<(GameObjectConversion.LogTypeType,System.StringContent)>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CParseConversionLogU3Ed__0_System_Collections_Generic_IEnumerableU3CU28GameObjectConversion_LogTypeTypeU2CSystem_StringContentU29U3E_GetEnumerator_m0C1DD6CCF20493F6D2C216DD7643BC45FA90724E (U3CParseConversionLogU3Ed__0_t545008DA4AF19BE77424D4CC2D1D620EF42B9BD3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CParseConversionLogU3Ed__0_t545008DA4AF19BE77424D4CC2D1D620EF42B9BD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CParseConversionLogU3Ed__0_t545008DA4AF19BE77424D4CC2D1D620EF42B9BD3 * V_0 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_1 = __this->get_U3CU3El__initialThreadId_2();
		int32_t L_2;
		L_2 = Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		__this->set_U3CU3E1__state_0(0);
		V_0 = __this;
		goto IL_0029;
	}

IL_0022:
	{
		U3CParseConversionLogU3Ed__0_t545008DA4AF19BE77424D4CC2D1D620EF42B9BD3 * L_3 = (U3CParseConversionLogU3Ed__0_t545008DA4AF19BE77424D4CC2D1D620EF42B9BD3 *)il2cpp_codegen_object_new(U3CParseConversionLogU3Ed__0_t545008DA4AF19BE77424D4CC2D1D620EF42B9BD3_il2cpp_TypeInfo_var);
		U3CParseConversionLogU3Ed__0__ctor_mCEF4E7E48ABA7B6F15E8E92D490333BFB13E6EBB(L_3, 0, /*hidden argument*/NULL);
		V_0 = L_3;
	}

IL_0029:
	{
		U3CParseConversionLogU3Ed__0_t545008DA4AF19BE77424D4CC2D1D620EF42B9BD3 * L_4 = V_0;
		String_t* L_5 = __this->get_U3CU3E3__conversionLogPath_4();
		NullCheck(L_4);
		L_4->set_conversionLogPath_3(L_5);
		U3CParseConversionLogU3Ed__0_t545008DA4AF19BE77424D4CC2D1D620EF42B9BD3 * L_6 = V_0;
		return L_6;
	}
}
// System.Collections.IEnumerator GameObjectConversion.ConversionLogUtils/<ParseConversionLog>d__0::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CParseConversionLogU3Ed__0_System_Collections_IEnumerable_GetEnumerator_mC41A6278A377F726BBB7697E560CB88F82180F59 (U3CParseConversionLogU3Ed__0_t545008DA4AF19BE77424D4CC2D1D620EF42B9BD3 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0;
		L_0 = U3CParseConversionLogU3Ed__0_System_Collections_Generic_IEnumerableU3CU28GameObjectConversion_LogTypeTypeU2CSystem_StringContentU29U3E_GetEnumerator_m0C1DD6CCF20493F6D2C216DD7643BC45FA90724E(__this, /*hidden argument*/NULL);
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
// System.Void Unity.Entities.Conversion.ConvertGameObjectToEntitySystem/<>c__DisplayClass1_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass1_0__ctor_mF0EE5ABDDC15F88DC96CC62B2EDD85E3E3CEF824 (U3CU3Ec__DisplayClass1_0_t9FBA1A3547AFEEF2D8D2F740195F4B795E56187F * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Unity.Entities.Conversion.ConvertGameObjectToEntitySystem/<>c__DisplayClass1_0::<OnUpdate>b__0(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass1_0_U3COnUpdateU3Eb__0_m166ADF7663AA99131DBD33C3C3E6125F6FCC9066 (U3CU3Ec__DisplayClass1_0_t9FBA1A3547AFEEF2D8D2F740195F4B795E56187F * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___transform0, const RuntimeMethod* method)
{
	{
		// Entities.ForEach((Transform transform) => Convert(transform, convertibles));
		ConvertGameObjectToEntitySystem_t98D507A5987792091C6805F64C272FFF43E48498 * L_0 = __this->get_U3CU3E4__this_0();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1 = ___transform0;
		List_1_t316A5776D1E7716EA27F8F3084A23ECE9A43C29A * L_2 = __this->get_convertibles_1();
		NullCheck(L_0);
		ConvertGameObjectToEntitySystem_Convert_mC63CDBF5116E3B7E96FED1F92FCA4EEBD43DBAC4(L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Unity.Entities.Conversion.ConvertGameObjectToEntitySystem/<>c__DisplayClass1_0::<OnUpdate>b__1(UnityEngine.RectTransform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass1_0_U3COnUpdateU3Eb__1_mBA616D1D4EE52E68658044415C6F044D34C0D84B (U3CU3Ec__DisplayClass1_0_t9FBA1A3547AFEEF2D8D2F740195F4B795E56187F * __this, RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___transform0, const RuntimeMethod* method)
{
	{
		// Entities.ForEach((RectTransform transform) => Convert(transform, convertibles));
		ConvertGameObjectToEntitySystem_t98D507A5987792091C6805F64C272FFF43E48498 * L_0 = __this->get_U3CU3E4__this_0();
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_1 = ___transform0;
		List_1_t316A5776D1E7716EA27F8F3084A23ECE9A43C29A * L_2 = __this->get_convertibles_1();
		NullCheck(L_0);
		ConvertGameObjectToEntitySystem_Convert_mC63CDBF5116E3B7E96FED1F92FCA4EEBD43DBAC4(L_0, L_1, L_2, /*hidden argument*/NULL);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Entities.ConvertToEntitySystem/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m81C348DE9086C45DB8A2135D425B269CFAA8491D (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t8A22BBA68B61DFC9EC097D4580B47F507D718AB5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t8A22BBA68B61DFC9EC097D4580B47F507D718AB5 * L_0 = (U3CU3Ec_t8A22BBA68B61DFC9EC097D4580B47F507D718AB5 *)il2cpp_codegen_object_new(U3CU3Ec_t8A22BBA68B61DFC9EC097D4580B47F507D718AB5_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mAF0915B3488EE84EA5452B63A993CEF79E1BBAEA(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t8A22BBA68B61DFC9EC097D4580B47F507D718AB5_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t8A22BBA68B61DFC9EC097D4580B47F507D718AB5_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Unity.Entities.ConvertToEntitySystem/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mAF0915B3488EE84EA5452B63A993CEF79E1BBAEA (U3CU3Ec_t8A22BBA68B61DFC9EC097D4580B47F507D718AB5 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Unity.Entities.ConvertToEntitySystem/<>c::<Convert>b__14_0(Unity.Entities.ConvertToEntity)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CConvertU3Eb__14_0_m48F3AAA24ACDD2B4EFFD7E8883237A8E37E9D35A (U3CU3Ec_t8A22BBA68B61DFC9EC097D4580B47F507D718AB5 * __this, ConvertToEntity_t52854E5BDADE29922A64486FCB764A2ABB0EA040 * ___convert0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInParent_TisConvertToEntity_t52854E5BDADE29922A64486FCB764A2ABB0EA040_m2EE5B59A030248A9ECE067454D5017D66B7B86C0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInParent_TisStopConvertToEntity_t8D04CD984FF5CEFE36F851147629FD1F0DB85C68_m67A00A0AFFCFE1CCEF4A7110C7CF86FC55397D94_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisStopConvertToEntity_t8D04CD984FF5CEFE36F851147629FD1F0DB85C68_m6C293C61CB12358A40A3DFDF3269457A7775D774_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4AEA76658D1C173733F9DE3CA3A2ACB6C3E205D2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral701320A8BBB3180BDF66BAF571530BE126D8FE55);
		s_Il2CppMethodInitialized = true;
	}
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * V_0 = NULL;
	int32_t G_B7_0 = 0;
	int32_t G_B10_0 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B9_0 = 0;
	{
		// if (convert == null)
		ConvertToEntity_t52854E5BDADE29922A64486FCB764A2ABB0EA040 * L_0 = ___convert0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000b;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_000b:
	{
		// if (convert.GetComponent<StopConvertToEntity>() != null)
		ConvertToEntity_t52854E5BDADE29922A64486FCB764A2ABB0EA040 * L_2 = ___convert0;
		NullCheck(L_2);
		StopConvertToEntity_t8D04CD984FF5CEFE36F851147629FD1F0DB85C68 * L_3;
		L_3 = Component_GetComponent_TisStopConvertToEntity_t8D04CD984FF5CEFE36F851147629FD1F0DB85C68_m6C293C61CB12358A40A3DFDF3269457A7775D774(L_2, /*hidden argument*/Component_GetComponent_TisStopConvertToEntity_t8D04CD984FF5CEFE36F851147629FD1F0DB85C68_m6C293C61CB12358A40A3DFDF3269457A7775D774_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_3, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_002b;
		}
	}
	{
		// LogWarning(
		//     $"{nameof(ConvertToEntity)} will be ignored because of a {nameof(StopConvertToEntity)} on the same GameObject",
		//     convert.gameObject);
		ConvertToEntity_t52854E5BDADE29922A64486FCB764A2ABB0EA040 * L_5 = ___convert0;
		NullCheck(L_5);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6;
		L_6 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_5, /*hidden argument*/NULL);
		Debug_LogWarning_m880A9AD0BB124D17C7F54DD0773FE4258F1A2416(_stringLiteral701320A8BBB3180BDF66BAF571530BE126D8FE55, L_6, /*hidden argument*/NULL);
		// return true;
		return (bool)1;
	}

IL_002b:
	{
		// var parent = convert.transform.parent;
		ConvertToEntity_t52854E5BDADE29922A64486FCB764A2ABB0EA040 * L_7 = ___convert0;
		NullCheck(L_7);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8;
		L_8 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9;
		L_9 = Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9(L_8, /*hidden argument*/NULL);
		V_0 = L_9;
		// var remove = parent != null && parent.GetComponentInParent<ConvertToEntity>() != null;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_10, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_004e;
		}
	}
	{
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_12 = V_0;
		NullCheck(L_12);
		ConvertToEntity_t52854E5BDADE29922A64486FCB764A2ABB0EA040 * L_13;
		L_13 = Component_GetComponentInParent_TisConvertToEntity_t52854E5BDADE29922A64486FCB764A2ABB0EA040_m2EE5B59A030248A9ECE067454D5017D66B7B86C0(L_12, /*hidden argument*/Component_GetComponentInParent_TisConvertToEntity_t52854E5BDADE29922A64486FCB764A2ABB0EA040_m2EE5B59A030248A9ECE067454D5017D66B7B86C0_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_13, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		G_B7_0 = ((int32_t)(L_14));
		goto IL_004f;
	}

IL_004e:
	{
		G_B7_0 = 0;
	}

IL_004f:
	{
		// if (remove && parent.GetComponentInParent<StopConvertToEntity>() != null)
		int32_t L_15 = G_B7_0;
		G_B8_0 = L_15;
		if (!L_15)
		{
			G_B10_0 = L_15;
			goto IL_0070;
		}
	}
	{
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_16 = V_0;
		NullCheck(L_16);
		StopConvertToEntity_t8D04CD984FF5CEFE36F851147629FD1F0DB85C68 * L_17;
		L_17 = Component_GetComponentInParent_TisStopConvertToEntity_t8D04CD984FF5CEFE36F851147629FD1F0DB85C68_m67A00A0AFFCFE1CCEF4A7110C7CF86FC55397D94(L_16, /*hidden argument*/Component_GetComponentInParent_TisStopConvertToEntity_t8D04CD984FF5CEFE36F851147629FD1F0DB85C68_m67A00A0AFFCFE1CCEF4A7110C7CF86FC55397D94_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_18;
		L_18 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_17, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		G_B9_0 = G_B8_0;
		if (!L_18)
		{
			G_B10_0 = G_B8_0;
			goto IL_0070;
		}
	}
	{
		// LogWarning(
		//     $"{nameof(ConvertToEntity)} will be ignored because of a {nameof(StopConvertToEntity)} higher in the hierarchy",
		//     convert.gameObject);
		ConvertToEntity_t52854E5BDADE29922A64486FCB764A2ABB0EA040 * L_19 = ___convert0;
		NullCheck(L_19);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_20;
		L_20 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_19, /*hidden argument*/NULL);
		Debug_LogWarning_m880A9AD0BB124D17C7F54DD0773FE4258F1A2416(_stringLiteral4AEA76658D1C173733F9DE3CA3A2ACB6C3E205D2, L_20, /*hidden argument*/NULL);
		G_B10_0 = G_B9_0;
	}

IL_0070:
	{
		// return remove;
		return (bool)G_B10_0;
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
// System.Void Unity.Entities.DependencyTracker/CollectDependencies::Execute()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void CollectDependencies_Execute_mFF47C20DBF458E00A4D46AD7730E6CCE974E9288 (CollectDependencies_t8F4396371AA9FE16C7871EDE545853FF084F3DB5 * IL2CPP_PARAMETER_RESTRICT __this, const RuntimeMethod* method)
{
	{
		// Dependencies.CalculateDirectDependents(ChangedInstanceIds, OutputIds);
		DependencyTracker_t1E00B24B7D3375633864E7895FB5C4D3CD5627BB * L_0 = __this->get_address_of_Dependencies_0();
		NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99  L_1 = __this->get_ChangedInstanceIds_2();
		NativeList_1_t37924D67F0E4D83DE506A261B7A05AE619630C80  L_2 = __this->get_OutputIds_1();
		DependencyTracker_CalculateDirectDependents_m887016733A573D88EBA6F43F08324D0A1496900C((DependencyTracker_t1E00B24B7D3375633864E7895FB5C4D3CD5627BB *)L_0, L_1, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void CollectDependencies_Execute_mFF47C20DBF458E00A4D46AD7730E6CCE974E9288_AdjustorThunk (RuntimeObject * IL2CPP_PARAMETER_RESTRICT __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	CollectDependencies_t8F4396371AA9FE16C7871EDE545853FF084F3DB5 * _thisAdjusted = reinterpret_cast<CollectDependencies_t8F4396371AA9FE16C7871EDE545853FF084F3DB5 *>(__this + _offset);
	CollectDependencies_Execute_mFF47C20DBF458E00A4D46AD7730E6CCE974E9288(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Entities.Conversion.GameObjectConversionMappingSystem/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m24944BCEBE6CC30CAF2B54DEA17DAA3AEA8B3247 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t43693085741BED5C3AB7F55341F17CBD3273F0AD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t43693085741BED5C3AB7F55341F17CBD3273F0AD * L_0 = (U3CU3Ec_t43693085741BED5C3AB7F55341F17CBD3273F0AD *)il2cpp_codegen_object_new(U3CU3Ec_t43693085741BED5C3AB7F55341F17CBD3273F0AD_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mD01497EF91DD729D965F15AAAC5CA4F1A62CE9DC(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t43693085741BED5C3AB7F55341F17CBD3273F0AD_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t43693085741BED5C3AB7F55341F17CBD3273F0AD_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Unity.Entities.Conversion.GameObjectConversionMappingSystem/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mD01497EF91DD729D965F15AAAC5CA4F1A62CE9DC (U3CU3Ec_t43693085741BED5C3AB7F55341F17CBD3273F0AD * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Unity.Entities.Conversion.GameObjectConversionMappingSystem/<>c::<CreatePrimaryEntities>b__63_3(Unity.Entities.ComponentType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CCreatePrimaryEntitiesU3Eb__63_3_mBB57AC90E23CB47517F241AB84EBA98B9543FAB1 (U3CU3Ec_t43693085741BED5C3AB7F55341F17CBD3273F0AD * __this, ComponentType_tEA24A4AB5BA78DEF7C2CEF25A05426D1F51D8370  ___t0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var derivedType = types.FirstOrDefault(t => typeof(UnityObject).IsAssignableFrom(t.GetManagedType()));
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_0, /*hidden argument*/NULL);
		Type_t * L_2;
		L_2 = ComponentType_GetManagedType_m24DA0811B230B99E184DD5B824E293E3A4FB0721((ComponentType_tEA24A4AB5BA78DEF7C2CEF25A05426D1F51D8370 *)(&___t0), /*hidden argument*/NULL);
		NullCheck(L_1);
		bool L_3;
		L_3 = VirtFuncInvoker1< bool, Type_t * >::Invoke(113 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_1, L_2);
		return L_3;
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
// Conversion methods for marshalling of: Unity.Entities.Conversion.GameObjectConversionMappingSystem/CachedCollections
IL2CPP_EXTERN_C void CachedCollections_tB24E1D8BBB0133DF4FECA0A3E8D3E491B8DD4BD4_marshal_pinvoke(const CachedCollections_tB24E1D8BBB0133DF4FECA0A3E8D3E491B8DD4BD4& unmarshaled, CachedCollections_tB24E1D8BBB0133DF4FECA0A3E8D3E491B8DD4BD4_marshaled_pinvoke& marshaled)
{
	Exception_t* ___OldGameObjects_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'OldGameObjects' of type 'CachedCollections'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___OldGameObjects_0Exception, NULL);
}
IL2CPP_EXTERN_C void CachedCollections_tB24E1D8BBB0133DF4FECA0A3E8D3E491B8DD4BD4_marshal_pinvoke_back(const CachedCollections_tB24E1D8BBB0133DF4FECA0A3E8D3E491B8DD4BD4_marshaled_pinvoke& marshaled, CachedCollections_tB24E1D8BBB0133DF4FECA0A3E8D3E491B8DD4BD4& unmarshaled)
{
	Exception_t* ___OldGameObjects_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'OldGameObjects' of type 'CachedCollections'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___OldGameObjects_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Unity.Entities.Conversion.GameObjectConversionMappingSystem/CachedCollections
IL2CPP_EXTERN_C void CachedCollections_tB24E1D8BBB0133DF4FECA0A3E8D3E491B8DD4BD4_marshal_pinvoke_cleanup(CachedCollections_tB24E1D8BBB0133DF4FECA0A3E8D3E491B8DD4BD4_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Unity.Entities.Conversion.GameObjectConversionMappingSystem/CachedCollections
IL2CPP_EXTERN_C void CachedCollections_tB24E1D8BBB0133DF4FECA0A3E8D3E491B8DD4BD4_marshal_com(const CachedCollections_tB24E1D8BBB0133DF4FECA0A3E8D3E491B8DD4BD4& unmarshaled, CachedCollections_tB24E1D8BBB0133DF4FECA0A3E8D3E491B8DD4BD4_marshaled_com& marshaled)
{
	Exception_t* ___OldGameObjects_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'OldGameObjects' of type 'CachedCollections'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___OldGameObjects_0Exception, NULL);
}
IL2CPP_EXTERN_C void CachedCollections_tB24E1D8BBB0133DF4FECA0A3E8D3E491B8DD4BD4_marshal_com_back(const CachedCollections_tB24E1D8BBB0133DF4FECA0A3E8D3E491B8DD4BD4_marshaled_com& marshaled, CachedCollections_tB24E1D8BBB0133DF4FECA0A3E8D3E491B8DD4BD4& unmarshaled)
{
	Exception_t* ___OldGameObjects_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'OldGameObjects' of type 'CachedCollections'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___OldGameObjects_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Unity.Entities.Conversion.GameObjectConversionMappingSystem/CachedCollections
IL2CPP_EXTERN_C void CachedCollections_tB24E1D8BBB0133DF4FECA0A3E8D3E491B8DD4BD4_marshal_com_cleanup(CachedCollections_tB24E1D8BBB0133DF4FECA0A3E8D3E491B8DD4BD4_marshaled_com& marshaled)
{
}
// System.Void Unity.Entities.Conversion.GameObjectConversionMappingSystem/CachedCollections::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CachedCollections_Init_m636171D4A1AE6CE96CF9D6CC81FC9B7E2C4E6EAF (CachedCollections_tB24E1D8BBB0133DF4FECA0A3E8D3E491B8DD4BD4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Clear_mDF4692C2E8DF02D17D06E465401059197AEA2389_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1__ctor_m1B28A53D18B635B3D4B43D03DE4D370F3EB29FF2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_t77825C5E92A478ADAC0C07A97589EB9CBFF229E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m7DF03CE7132B7D4C6AA2AEEA9BD1A8755AE12432_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mC986281A0F6F526F49A46B32BA044A00F562B121_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m859B0EE8491FDDEB1A3F7115D334B863E025BBC8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m8786AF4A4AE06CDD3B907914EE860C2748ED2EA4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t9D216521E6A213FF8562D215598D336ABB5474F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Clear_mEC19CFF96CF41EDF007BC9DE1187EDC56E087AE3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1__ctor_m6B316383CD52D4A0BA0ABA35B1F6779F18397F61_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_t947A852F0DF179B04BC160BDA03DAC7B3F07460F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (OldGameObjects != null)
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_0 = __this->get_OldGameObjects_0();
		if (!L_0)
		{
			goto IL_0040;
		}
	}
	{
		// OldGameObjects.Clear();
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_1 = __this->get_OldGameObjects_0();
		NullCheck(L_1);
		List_1_Clear_m7DF03CE7132B7D4C6AA2AEEA9BD1A8755AE12432(L_1, /*hidden argument*/List_1_Clear_m7DF03CE7132B7D4C6AA2AEEA9BD1A8755AE12432_RuntimeMethod_var);
		// NewGameObjects.Clear();
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_2 = __this->get_NewGameObjects_1();
		NullCheck(L_2);
		List_1_Clear_m7DF03CE7132B7D4C6AA2AEEA9BD1A8755AE12432(L_2, /*hidden argument*/List_1_Clear_m7DF03CE7132B7D4C6AA2AEEA9BD1A8755AE12432_RuntimeMethod_var);
		// TmpObjects.Clear();
		List_1_t9D216521E6A213FF8562D215598D336ABB5474F4 * L_3 = __this->get_TmpObjects_2();
		NullCheck(L_3);
		List_1_Clear_mC986281A0F6F526F49A46B32BA044A00F562B121(L_3, /*hidden argument*/List_1_Clear_mC986281A0F6F526F49A46B32BA044A00F562B121_RuntimeMethod_var);
		// Transforms.Clear();
		Stack_1_t947A852F0DF179B04BC160BDA03DAC7B3F07460F * L_4 = __this->get_Transforms_3();
		NullCheck(L_4);
		Stack_1_Clear_mEC19CFF96CF41EDF007BC9DE1187EDC56E087AE3(L_4, /*hidden argument*/Stack_1_Clear_mEC19CFF96CF41EDF007BC9DE1187EDC56E087AE3_RuntimeMethod_var);
		// GameObjectsWithEntities.Clear();
		HashSet_1_t77825C5E92A478ADAC0C07A97589EB9CBFF229E3 * L_5 = __this->get_GameObjectsWithEntities_4();
		NullCheck(L_5);
		HashSet_1_Clear_mDF4692C2E8DF02D17D06E465401059197AEA2389(L_5, /*hidden argument*/HashSet_1_Clear_mDF4692C2E8DF02D17D06E465401059197AEA2389_RuntimeMethod_var);
		// }
		return;
	}

IL_0040:
	{
		// OldGameObjects = new List<GameObject>();
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_6 = (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *)il2cpp_codegen_object_new(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5_il2cpp_TypeInfo_var);
		List_1__ctor_m859B0EE8491FDDEB1A3F7115D334B863E025BBC8(L_6, /*hidden argument*/List_1__ctor_m859B0EE8491FDDEB1A3F7115D334B863E025BBC8_RuntimeMethod_var);
		__this->set_OldGameObjects_0(L_6);
		// NewGameObjects = new List<GameObject>();
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_7 = (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *)il2cpp_codegen_object_new(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5_il2cpp_TypeInfo_var);
		List_1__ctor_m859B0EE8491FDDEB1A3F7115D334B863E025BBC8(L_7, /*hidden argument*/List_1__ctor_m859B0EE8491FDDEB1A3F7115D334B863E025BBC8_RuntimeMethod_var);
		__this->set_NewGameObjects_1(L_7);
		// TmpObjects = new List<UnityEngine.Object>();
		List_1_t9D216521E6A213FF8562D215598D336ABB5474F4 * L_8 = (List_1_t9D216521E6A213FF8562D215598D336ABB5474F4 *)il2cpp_codegen_object_new(List_1_t9D216521E6A213FF8562D215598D336ABB5474F4_il2cpp_TypeInfo_var);
		List_1__ctor_m8786AF4A4AE06CDD3B907914EE860C2748ED2EA4(L_8, /*hidden argument*/List_1__ctor_m8786AF4A4AE06CDD3B907914EE860C2748ED2EA4_RuntimeMethod_var);
		__this->set_TmpObjects_2(L_8);
		// Transforms = new Stack<Transform>();
		Stack_1_t947A852F0DF179B04BC160BDA03DAC7B3F07460F * L_9 = (Stack_1_t947A852F0DF179B04BC160BDA03DAC7B3F07460F *)il2cpp_codegen_object_new(Stack_1_t947A852F0DF179B04BC160BDA03DAC7B3F07460F_il2cpp_TypeInfo_var);
		Stack_1__ctor_m6B316383CD52D4A0BA0ABA35B1F6779F18397F61(L_9, /*hidden argument*/Stack_1__ctor_m6B316383CD52D4A0BA0ABA35B1F6779F18397F61_RuntimeMethod_var);
		__this->set_Transforms_3(L_9);
		// GameObjectsWithEntities = new HashSet<GameObject>();
		HashSet_1_t77825C5E92A478ADAC0C07A97589EB9CBFF229E3 * L_10 = (HashSet_1_t77825C5E92A478ADAC0C07A97589EB9CBFF229E3 *)il2cpp_codegen_object_new(HashSet_1_t77825C5E92A478ADAC0C07A97589EB9CBFF229E3_il2cpp_TypeInfo_var);
		HashSet_1__ctor_m1B28A53D18B635B3D4B43D03DE4D370F3EB29FF2(L_10, /*hidden argument*/HashSet_1__ctor_m1B28A53D18B635B3D4B43D03DE4D370F3EB29FF2_RuntimeMethod_var);
		__this->set_GameObjectsWithEntities_4(L_10);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void CachedCollections_Init_m636171D4A1AE6CE96CF9D6CC81FC9B7E2C4E6EAF_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	CachedCollections_tB24E1D8BBB0133DF4FECA0A3E8D3E491B8DD4BD4 * _thisAdjusted = reinterpret_cast<CachedCollections_tB24E1D8BBB0133DF4FECA0A3E8D3E491B8DD4BD4 *>(__this + _offset);
	CachedCollections_Init_m636171D4A1AE6CE96CF9D6CC81FC9B7E2C4E6EAF(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Entities.GameObjectConversionSettings/ExportedAsset::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExportedAsset__ctor_m985BAD29C49C7D35DF7A750F6FDE4A5875516B50 (ExportedAsset_t38651E80B7E37878015D8E2B869FF5C251672D65 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void Unity.Entities.GameObjectConversionUtility/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mE51EE7A15DA533B9D79E3EA8D63B40CF9D646297 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tCC99DC24F6BBD3C1732D5A88EFDDF7A4D51A0D0D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tCC99DC24F6BBD3C1732D5A88EFDDF7A4D51A0D0D * L_0 = (U3CU3Ec_tCC99DC24F6BBD3C1732D5A88EFDDF7A4D51A0D0D *)il2cpp_codegen_object_new(U3CU3Ec_tCC99DC24F6BBD3C1732D5A88EFDDF7A4D51A0D0D_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m442A10D4C41DD3391F196CE9BC8964472B22BB01(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tCC99DC24F6BBD3C1732D5A88EFDDF7A4D51A0D0D_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tCC99DC24F6BBD3C1732D5A88EFDDF7A4D51A0D0D_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Unity.Entities.GameObjectConversionUtility/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m442A10D4C41DD3391F196CE9BC8964472B22BB01 (U3CU3Ec_tCC99DC24F6BBD3C1732D5A88EFDDF7A4D51A0D0D * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 Unity.Entities.GameObjectConversionUtility/<>c::<ConvertIncremental>b__16_0(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3CConvertIncrementalU3Eb__16_0_mC1EAA565046E9A321804E073A120425549FE6103 (U3CU3Ec_tCC99DC24F6BBD3C1732D5A88EFDDF7A4D51A0D0D * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___go0, const RuntimeMethod* method)
{
	{
		// ReconvertHierarchyInstanceIds = new NativeArray<int>(gameObjects.Select(go => go.GetInstanceID()).ToArray(), Allocator.TempJob),
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = ___go0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Object_GetInstanceID_m7CF962BC1DB5C03F3522F88728CB2F514582B501(L_0, /*hidden argument*/NULL);
		return L_1;
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
// Conversion methods for marshalling of: Unity.Entities.GameObjectConversionUtility/Conversion
IL2CPP_EXTERN_C void Conversion_t7DFF4B71AB43ADC70ECB67EC0800F6D23CBF01EF_marshal_pinvoke(const Conversion_t7DFF4B71AB43ADC70ECB67EC0800F6D23CBF01EF& unmarshaled, Conversion_t7DFF4B71AB43ADC70ECB67EC0800F6D23CBF01EF_marshaled_pinvoke& marshaled)
{
	Exception_t* ___U3CMappingSystemU3Ek__BackingField_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<MappingSystem>k__BackingField' of type 'Conversion': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CMappingSystemU3Ek__BackingField_0Exception, NULL);
}
IL2CPP_EXTERN_C void Conversion_t7DFF4B71AB43ADC70ECB67EC0800F6D23CBF01EF_marshal_pinvoke_back(const Conversion_t7DFF4B71AB43ADC70ECB67EC0800F6D23CBF01EF_marshaled_pinvoke& marshaled, Conversion_t7DFF4B71AB43ADC70ECB67EC0800F6D23CBF01EF& unmarshaled)
{
	Exception_t* ___U3CMappingSystemU3Ek__BackingField_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<MappingSystem>k__BackingField' of type 'Conversion': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CMappingSystemU3Ek__BackingField_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Unity.Entities.GameObjectConversionUtility/Conversion
IL2CPP_EXTERN_C void Conversion_t7DFF4B71AB43ADC70ECB67EC0800F6D23CBF01EF_marshal_pinvoke_cleanup(Conversion_t7DFF4B71AB43ADC70ECB67EC0800F6D23CBF01EF_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Unity.Entities.GameObjectConversionUtility/Conversion
IL2CPP_EXTERN_C void Conversion_t7DFF4B71AB43ADC70ECB67EC0800F6D23CBF01EF_marshal_com(const Conversion_t7DFF4B71AB43ADC70ECB67EC0800F6D23CBF01EF& unmarshaled, Conversion_t7DFF4B71AB43ADC70ECB67EC0800F6D23CBF01EF_marshaled_com& marshaled)
{
	Exception_t* ___U3CMappingSystemU3Ek__BackingField_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<MappingSystem>k__BackingField' of type 'Conversion': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CMappingSystemU3Ek__BackingField_0Exception, NULL);
}
IL2CPP_EXTERN_C void Conversion_t7DFF4B71AB43ADC70ECB67EC0800F6D23CBF01EF_marshal_com_back(const Conversion_t7DFF4B71AB43ADC70ECB67EC0800F6D23CBF01EF_marshaled_com& marshaled, Conversion_t7DFF4B71AB43ADC70ECB67EC0800F6D23CBF01EF& unmarshaled)
{
	Exception_t* ___U3CMappingSystemU3Ek__BackingField_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<MappingSystem>k__BackingField' of type 'Conversion': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CMappingSystemU3Ek__BackingField_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Unity.Entities.GameObjectConversionUtility/Conversion
IL2CPP_EXTERN_C void Conversion_t7DFF4B71AB43ADC70ECB67EC0800F6D23CBF01EF_marshal_com_cleanup(Conversion_t7DFF4B71AB43ADC70ECB67EC0800F6D23CBF01EF_marshaled_com& marshaled)
{
}
// Unity.Entities.Conversion.GameObjectConversionMappingSystem Unity.Entities.GameObjectConversionUtility/Conversion::get_MappingSystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObjectConversionMappingSystem_tD834531091319F873FDC1E5EDB439CE9654312DD * Conversion_get_MappingSystem_m7C152D0A7C4D00070AED5CBE4560208D9B4999A2 (Conversion_t7DFF4B71AB43ADC70ECB67EC0800F6D23CBF01EF * __this, const RuntimeMethod* method)
{
	{
		// public GameObjectConversionMappingSystem MappingSystem { get; }
		GameObjectConversionMappingSystem_tD834531091319F873FDC1E5EDB439CE9654312DD * L_0 = __this->get_U3CMappingSystemU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C  GameObjectConversionMappingSystem_tD834531091319F873FDC1E5EDB439CE9654312DD * Conversion_get_MappingSystem_m7C152D0A7C4D00070AED5CBE4560208D9B4999A2_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Conversion_t7DFF4B71AB43ADC70ECB67EC0800F6D23CBF01EF * _thisAdjusted = reinterpret_cast<Conversion_t7DFF4B71AB43ADC70ECB67EC0800F6D23CBF01EF *>(__this + _offset);
	GameObjectConversionMappingSystem_tD834531091319F873FDC1E5EDB439CE9654312DD * _returnValue;
	_returnValue = Conversion_get_MappingSystem_m7C152D0A7C4D00070AED5CBE4560208D9B4999A2_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.Entities.GameObjectConversionUtility/Conversion::.ctor(Unity.Entities.World)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Conversion__ctor_mCB8F404D0E7F0CBE8AE860378782A111560443A2 (Conversion_t7DFF4B71AB43ADC70ECB67EC0800F6D23CBF01EF * __this, World_tC5274CBB5238670C9A07FA5705DD82B5196C9A07 * ___conversionWorld0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&World_GetExistingSystem_TisGameObjectConversionMappingSystem_tD834531091319F873FDC1E5EDB439CE9654312DD_m88515F8D73556A994C599F29E5BD784490D573B0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// MappingSystem = conversionWorld.GetExistingSystem<GameObjectConversionMappingSystem>();
		World_tC5274CBB5238670C9A07FA5705DD82B5196C9A07 * L_0 = ___conversionWorld0;
		NullCheck(L_0);
		GameObjectConversionMappingSystem_tD834531091319F873FDC1E5EDB439CE9654312DD * L_1;
		L_1 = World_GetExistingSystem_TisGameObjectConversionMappingSystem_tD834531091319F873FDC1E5EDB439CE9654312DD_m88515F8D73556A994C599F29E5BD784490D573B0(L_0, /*hidden argument*/World_GetExistingSystem_TisGameObjectConversionMappingSystem_tD834531091319F873FDC1E5EDB439CE9654312DD_m88515F8D73556A994C599F29E5BD784490D573B0_RuntimeMethod_var);
		__this->set_U3CMappingSystemU3Ek__BackingField_0(L_1);
		// MappingSystem.BeginConversion();
		GameObjectConversionMappingSystem_tD834531091319F873FDC1E5EDB439CE9654312DD * L_2;
		L_2 = Conversion_get_MappingSystem_m7C152D0A7C4D00070AED5CBE4560208D9B4999A2_inline((Conversion_t7DFF4B71AB43ADC70ECB67EC0800F6D23CBF01EF *)__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		GameObjectConversionMappingSystem_BeginConversion_m61F11047D0ADE0075776CBF9074654A1F9F9D14E(L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void Conversion__ctor_mCB8F404D0E7F0CBE8AE860378782A111560443A2_AdjustorThunk (RuntimeObject * __this, World_tC5274CBB5238670C9A07FA5705DD82B5196C9A07 * ___conversionWorld0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Conversion_t7DFF4B71AB43ADC70ECB67EC0800F6D23CBF01EF * _thisAdjusted = reinterpret_cast<Conversion_t7DFF4B71AB43ADC70ECB67EC0800F6D23CBF01EF *>(__this + _offset);
	Conversion__ctor_mCB8F404D0E7F0CBE8AE860378782A111560443A2(_thisAdjusted, ___conversionWorld0, method);
}
// System.Void Unity.Entities.GameObjectConversionUtility/Conversion::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Conversion_Dispose_mDF063AA49A8ABD2FC8EDE47C99C5A7F35E64BAF0 (Conversion_t7DFF4B71AB43ADC70ECB67EC0800F6D23CBF01EF * __this, const RuntimeMethod* method)
{
	{
		// MappingSystem.EndConversion();
		GameObjectConversionMappingSystem_tD834531091319F873FDC1E5EDB439CE9654312DD * L_0;
		L_0 = Conversion_get_MappingSystem_m7C152D0A7C4D00070AED5CBE4560208D9B4999A2_inline((Conversion_t7DFF4B71AB43ADC70ECB67EC0800F6D23CBF01EF *)__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		GameObjectConversionMappingSystem_EndConversion_m008A7229F664A3CAD3D4746ADD1B2E002F4B7FE2(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void Conversion_Dispose_mDF063AA49A8ABD2FC8EDE47C99C5A7F35E64BAF0_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Conversion_t7DFF4B71AB43ADC70ECB67EC0800F6D23CBF01EF * _thisAdjusted = reinterpret_cast<Conversion_t7DFF4B71AB43ADC70ECB67EC0800F6D23CBF01EF *>(__this + _offset);
	Conversion_Dispose_mDF063AA49A8ABD2FC8EDE47C99C5A7F35E64BAF0(_thisAdjusted, method);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Entities.Conversion.IncrementalConversionContext/RemoveFromHierarchy::Execute(System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoveFromHierarchy_Execute_mA5C8393416C867F6F1AB271FA55CFA87BA1D8606 (void* ___ptr0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1_Dispose_m8BF5871BAA311BC6BC8258BDADA80280985CB168_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1_ToNativeArray_m696576DFA3BCD824DA04772423A073E402D15DF8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashSet_1__ctor_m1C6183546A28FA0E8D7D1288AD53572D16BC84DA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_AddRange_m357987151FA8A9EF6D59B076AD4C4346736E412D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeUtility_AsRef_TisRemoveFromHierarchy_t3865B184595D47CA96262E2CC565E2B4A1FA1E37_m1ADDED420D48E2E4DCD693D38EE4F89930E0B143_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RemoveFromHierarchy_t3865B184595D47CA96262E2CC565E2B4A1FA1E37 * V_0 = NULL;
	int32_t V_1 = 0;
	NativeHashSet_1_t88F362074B652B4D4F194604B629EE17A41B3976  V_2;
	memset((&V_2), 0, sizeof(V_2));
	NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99  V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// ref var data = ref UnsafeUtility.AsRef<RemoveFromHierarchy>(ptr);
		void* L_0 = ___ptr0;
		RemoveFromHierarchy_t3865B184595D47CA96262E2CC565E2B4A1FA1E37 * L_1;
		L_1 = UnsafeUtility_AsRef_TisRemoveFromHierarchy_t3865B184595D47CA96262E2CC565E2B4A1FA1E37_m1ADDED420D48E2E4DCD693D38EE4F89930E0B143((void*)(void*)L_0, /*hidden argument*/UnsafeUtility_AsRef_TisRemoveFromHierarchy_t3865B184595D47CA96262E2CC565E2B4A1FA1E37_m1ADDED420D48E2E4DCD693D38EE4F89930E0B143_RuntimeMethod_var);
		V_0 = (RemoveFromHierarchy_t3865B184595D47CA96262E2CC565E2B4A1FA1E37 *)L_1;
		// int capacity = data.DeletedInstanceIds.Length + data.ReconvertHierarchyInstanceIds.Length;
		RemoveFromHierarchy_t3865B184595D47CA96262E2CC565E2B4A1FA1E37 * L_2 = V_0;
		NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99 * L_3 = L_2->get_address_of_DeletedInstanceIds_1();
		int32_t L_4;
		L_4 = IL2CPP_NATIVEARRAY_GET_LENGTH(((NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99 *)L_3)->___m_Length_1);
		RemoveFromHierarchy_t3865B184595D47CA96262E2CC565E2B4A1FA1E37 * L_5 = V_0;
		NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99 * L_6 = L_5->get_address_of_ReconvertHierarchyInstanceIds_2();
		int32_t L_7;
		L_7 = IL2CPP_NATIVEARRAY_GET_LENGTH(((NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99 *)L_6)->___m_Length_1);
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)L_7));
		// var deletedInstances = new NativeHashSet<int>(capacity, Allocator.TempJob);
		int32_t L_8 = V_1;
		NativeHashSet_1__ctor_m1C6183546A28FA0E8D7D1288AD53572D16BC84DA((NativeHashSet_1_t88F362074B652B4D4F194604B629EE17A41B3976 *)(&V_2), L_8, 3, /*hidden argument*/NativeHashSet_1__ctor_m1C6183546A28FA0E8D7D1288AD53572D16BC84DA_RuntimeMethod_var);
		// data.Hierarchy.AsReadOnly().CollectHierarchyInstanceIds(data.DeletedInstanceIds, deletedInstances);
		RemoveFromHierarchy_t3865B184595D47CA96262E2CC565E2B4A1FA1E37 * L_9 = V_0;
		IncrementalHierarchy_t8D79F54D0D4356A9D0CC9C596D9E8A1B2CEDA8FC * L_10 = L_9->get_address_of_Hierarchy_0();
		SceneHierarchy_tD5CB36F0069FD8DBC527EC7B6E17F9780204C258  L_11;
		L_11 = IncrementalHierarchy_AsReadOnly_m1412FFA7519FE55643A33C4ED328BCA84794826D((IncrementalHierarchy_t8D79F54D0D4356A9D0CC9C596D9E8A1B2CEDA8FC *)L_10, /*hidden argument*/NULL);
		RemoveFromHierarchy_t3865B184595D47CA96262E2CC565E2B4A1FA1E37 * L_12 = V_0;
		NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99  L_13 = L_12->get_DeletedInstanceIds_1();
		NativeHashSet_1_t88F362074B652B4D4F194604B629EE17A41B3976  L_14 = V_2;
		SceneHierarchyExtensions_CollectHierarchyInstanceIds_m225CBE1204605B36EA52821DAD53E237C978219E(L_11, L_13, L_14, /*hidden argument*/NULL);
		// data.Hierarchy.AsReadOnly().CollectHierarchyInstanceIds(data.ReconvertHierarchyInstanceIds, deletedInstances);
		RemoveFromHierarchy_t3865B184595D47CA96262E2CC565E2B4A1FA1E37 * L_15 = V_0;
		IncrementalHierarchy_t8D79F54D0D4356A9D0CC9C596D9E8A1B2CEDA8FC * L_16 = L_15->get_address_of_Hierarchy_0();
		SceneHierarchy_tD5CB36F0069FD8DBC527EC7B6E17F9780204C258  L_17;
		L_17 = IncrementalHierarchy_AsReadOnly_m1412FFA7519FE55643A33C4ED328BCA84794826D((IncrementalHierarchy_t8D79F54D0D4356A9D0CC9C596D9E8A1B2CEDA8FC *)L_16, /*hidden argument*/NULL);
		RemoveFromHierarchy_t3865B184595D47CA96262E2CC565E2B4A1FA1E37 * L_18 = V_0;
		NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99  L_19 = L_18->get_ReconvertHierarchyInstanceIds_2();
		NativeHashSet_1_t88F362074B652B4D4F194604B629EE17A41B3976  L_20 = V_2;
		SceneHierarchyExtensions_CollectHierarchyInstanceIds_m225CBE1204605B36EA52821DAD53E237C978219E(L_17, L_19, L_20, /*hidden argument*/NULL);
		// var arr = deletedInstances.ToNativeArray(Allocator.Temp);
		NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99  L_21;
		L_21 = NativeHashSet_1_ToNativeArray_m696576DFA3BCD824DA04772423A073E402D15DF8((NativeHashSet_1_t88F362074B652B4D4F194604B629EE17A41B3976 *)(&V_2), 2, /*hidden argument*/NativeHashSet_1_ToNativeArray_m696576DFA3BCD824DA04772423A073E402D15DF8_RuntimeMethod_var);
		V_3 = L_21;
		// IncrementalHierarchyFunctions.Remove(data.Hierarchy, arr);
		RemoveFromHierarchy_t3865B184595D47CA96262E2CC565E2B4A1FA1E37 * L_22 = V_0;
		IncrementalHierarchy_t8D79F54D0D4356A9D0CC9C596D9E8A1B2CEDA8FC  L_23 = L_22->get_Hierarchy_0();
		NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99  L_24 = V_3;
		IncrementalHierarchyFunctions_Remove_mA49CFFF234390F94064AAC9698F9472FEAFD0689(L_23, L_24, /*hidden argument*/NULL);
		// data.RemovedInstanceIds.AddRange(arr);
		RemoveFromHierarchy_t3865B184595D47CA96262E2CC565E2B4A1FA1E37 * L_25 = V_0;
		NativeList_1_t37924D67F0E4D83DE506A261B7A05AE619630C80 * L_26 = L_25->get_address_of_RemovedInstanceIds_3();
		NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99  L_27 = V_3;
		NativeList_1_AddRange_m357987151FA8A9EF6D59B076AD4C4346736E412D((NativeList_1_t37924D67F0E4D83DE506A261B7A05AE619630C80 *)L_26, L_27, /*hidden argument*/NativeList_1_AddRange_m357987151FA8A9EF6D59B076AD4C4346736E412D_RuntimeMethod_var);
		// deletedInstances.Dispose();
		NativeHashSet_1_Dispose_m8BF5871BAA311BC6BC8258BDADA80280985CB168((NativeHashSet_1_t88F362074B652B4D4F194604B629EE17A41B3976 *)(&V_2), /*hidden argument*/NativeHashSet_1_Dispose_m8BF5871BAA311BC6BC8258BDADA80280985CB168_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Unity.Entities.Conversion.IncrementalConversionContext/RemoveFromHierarchy::RunWithBurst()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoveFromHierarchy_RunWithBurst_m0EBF3B8D9EC326FD7EFC7285A17F5E8367536295 (RemoveFromHierarchy_t3865B184595D47CA96262E2CC565E2B4A1FA1E37 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstCompiler_CompileFunctionPointer_TisExec_t13626ECD14E784C7148B8520FD71A4D0A5468675_m2EE736A92B4DADF4E342C3BD124383091340CD47_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstCompiler_t99F34BDE62961CF5A5ACEFBB6522F1343BF085D2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exec_t13626ECD14E784C7148B8520FD71A4D0A5468675_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FunctionPointer_1_get_Invoke_m4F6B34AEBBA4D79DBB2E7E246F029F6C43949931_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FunctionPointer_1_get_IsCreated_m0E94FF6DCA0FF3B1ED02ACC51A5771AB909E6683_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RemoveFromHierarchy_Execute_mA5C8393416C867F6F1AB271FA55CFA87BA1D8606_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RemoveFromHierarchy_t3865B184595D47CA96262E2CC565E2B4A1FA1E37_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RemoveFromHierarchy_t3865B184595D47CA96262E2CC565E2B4A1FA1E37  V_0;
	memset((&V_0), 0, sizeof(V_0));
	void* V_1 = NULL;
	{
		// var data = this;
		RemoveFromHierarchy_t3865B184595D47CA96262E2CC565E2B4A1FA1E37  L_0 = (*(RemoveFromHierarchy_t3865B184595D47CA96262E2CC565E2B4A1FA1E37 *)__this);
		V_0 = L_0;
		// void* ptr = UnsafeUtility.AddressOf(ref data);
		void* L_1;
		L_1 = il2cpp_codegen_unsafe_cast((RemoveFromHierarchy_t3865B184595D47CA96262E2CC565E2B4A1FA1E37 *)(&V_0));
		V_1 = (void*)L_1;
		// if (!_burstFunction.IsCreated)
		IL2CPP_RUNTIME_CLASS_INIT(RemoveFromHierarchy_t3865B184595D47CA96262E2CC565E2B4A1FA1E37_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = FunctionPointer_1_get_IsCreated_m0E94FF6DCA0FF3B1ED02ACC51A5771AB909E6683((FunctionPointer_1_tD12692C63FF46B37BE3A4C8FFFB6D3951E5E56DD *)(((RemoveFromHierarchy_t3865B184595D47CA96262E2CC565E2B4A1FA1E37_StaticFields*)il2cpp_codegen_static_fields_for(RemoveFromHierarchy_t3865B184595D47CA96262E2CC565E2B4A1FA1E37_il2cpp_TypeInfo_var))->get_address_of__burstFunction_4()), /*hidden argument*/FunctionPointer_1_get_IsCreated_m0E94FF6DCA0FF3B1ED02ACC51A5771AB909E6683_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0031;
		}
	}
	{
		// _burstFunction = BurstCompiler.CompileFunctionPointer<Exec>(Execute);
		Exec_t13626ECD14E784C7148B8520FD71A4D0A5468675 * L_3 = (Exec_t13626ECD14E784C7148B8520FD71A4D0A5468675 *)il2cpp_codegen_object_new(Exec_t13626ECD14E784C7148B8520FD71A4D0A5468675_il2cpp_TypeInfo_var);
		Exec__ctor_m17809861465491795E4BF9A83E956B90BAF87166(L_3, NULL, (intptr_t)((intptr_t)RemoveFromHierarchy_Execute_mA5C8393416C867F6F1AB271FA55CFA87BA1D8606_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(BurstCompiler_t99F34BDE62961CF5A5ACEFBB6522F1343BF085D2_il2cpp_TypeInfo_var);
		FunctionPointer_1_tD12692C63FF46B37BE3A4C8FFFB6D3951E5E56DD  L_4;
		L_4 = BurstCompiler_CompileFunctionPointer_TisExec_t13626ECD14E784C7148B8520FD71A4D0A5468675_m2EE736A92B4DADF4E342C3BD124383091340CD47(L_3, /*hidden argument*/BurstCompiler_CompileFunctionPointer_TisExec_t13626ECD14E784C7148B8520FD71A4D0A5468675_m2EE736A92B4DADF4E342C3BD124383091340CD47_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(RemoveFromHierarchy_t3865B184595D47CA96262E2CC565E2B4A1FA1E37_il2cpp_TypeInfo_var);
		((RemoveFromHierarchy_t3865B184595D47CA96262E2CC565E2B4A1FA1E37_StaticFields*)il2cpp_codegen_static_fields_for(RemoveFromHierarchy_t3865B184595D47CA96262E2CC565E2B4A1FA1E37_il2cpp_TypeInfo_var))->set__burstFunction_4(L_4);
	}

IL_0031:
	{
		// _burstFunction.Invoke(ptr);
		IL2CPP_RUNTIME_CLASS_INIT(RemoveFromHierarchy_t3865B184595D47CA96262E2CC565E2B4A1FA1E37_il2cpp_TypeInfo_var);
		Exec_t13626ECD14E784C7148B8520FD71A4D0A5468675 * L_5;
		L_5 = FunctionPointer_1_get_Invoke_m4F6B34AEBBA4D79DBB2E7E246F029F6C43949931((FunctionPointer_1_tD12692C63FF46B37BE3A4C8FFFB6D3951E5E56DD *)(((RemoveFromHierarchy_t3865B184595D47CA96262E2CC565E2B4A1FA1E37_StaticFields*)il2cpp_codegen_static_fields_for(RemoveFromHierarchy_t3865B184595D47CA96262E2CC565E2B4A1FA1E37_il2cpp_TypeInfo_var))->get_address_of__burstFunction_4()), /*hidden argument*/FunctionPointer_1_get_Invoke_m4F6B34AEBBA4D79DBB2E7E246F029F6C43949931_RuntimeMethod_var);
		void* L_6 = V_1;
		NullCheck(L_5);
		Exec_Invoke_m80214B313E4782849890CB06881AEC91EC6F6C63(L_5, (void*)(void*)L_6, /*hidden argument*/NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void RemoveFromHierarchy_RunWithBurst_m0EBF3B8D9EC326FD7EFC7285A17F5E8367536295_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	RemoveFromHierarchy_t3865B184595D47CA96262E2CC565E2B4A1FA1E37 * _thisAdjusted = reinterpret_cast<RemoveFromHierarchy_t3865B184595D47CA96262E2CC565E2B4A1FA1E37 *>(__this + _offset);
	RemoveFromHierarchy_RunWithBurst_m0EBF3B8D9EC326FD7EFC7285A17F5E8367536295(_thisAdjusted, method);
}
// System.Void Unity.Entities.Conversion.IncrementalConversionContext/RemoveFromHierarchy::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoveFromHierarchy__cctor_mA90D6B7600D8DF124914090510DD7476A6F903DA (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RemoveFromHierarchy_t3865B184595D47CA96262E2CC565E2B4A1FA1E37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B8DDA7E646DED715ECE3B936CF716EA7768BE89);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static readonly ProfilerMarker Marker = new ProfilerMarker(nameof(RemoveFromHierarchy));
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_0;
		memset((&L_0), 0, sizeof(L_0));
		ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline((&L_0), _stringLiteral1B8DDA7E646DED715ECE3B936CF716EA7768BE89, /*hidden argument*/NULL);
		((RemoveFromHierarchy_t3865B184595D47CA96262E2CC565E2B4A1FA1E37_StaticFields*)il2cpp_codegen_static_fields_for(RemoveFromHierarchy_t3865B184595D47CA96262E2CC565E2B4A1FA1E37_il2cpp_TypeInfo_var))->set_Marker_5(L_0);
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
// System.Void Unity.Entities.Conversion.MultiListDebugUtility/<SelectAllLists>d__1::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSelectAllListsU3Ed__1__ctor_m2BA9FA0DE6A887D8562C989A9A8DF2947857B437 (U3CSelectAllListsU3Ed__1_t681808CD9B2F449764F76B111AE4D38F0938A623 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		int32_t L_1;
		L_1 = Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D(/*hidden argument*/NULL);
		__this->set_U3CU3El__initialThreadId_2(L_1);
		return;
	}
}
// System.Void Unity.Entities.Conversion.MultiListDebugUtility/<SelectAllLists>d__1::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSelectAllListsU3Ed__1_System_IDisposable_Dispose_m2466C6D89215529C63B321B94A698E41792B9ACB (U3CSelectAllListsU3Ed__1_t681808CD9B2F449764F76B111AE4D38F0938A623 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_001a;
		}
	}

IL_0010:
	{
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		IL2CPP_LEAVE(0x1A, FINALLY_0013);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0013;
	}

FINALLY_0013:
	{ // begin finally (depth: 1)
		U3CSelectAllListsU3Ed__1_U3CU3Em__Finally1_mB3EAEEF4AE63CBEEBF62E5D31ECA6427CBFA2FD7(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(19)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(19)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x1A, IL_001a)
	}

IL_001a:
	{
		return;
	}
}
// System.Boolean Unity.Entities.Conversion.MultiListDebugUtility/<SelectAllLists>d__1::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CSelectAllListsU3Ed__1_MoveNext_mD83F3FDE73E3E331E2020811BB429D4BF1834E9F (U3CSelectAllListsU3Ed__1_t681808CD9B2F449764F76B111AE4D38F0938A623 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m740CBDF222F51FFDE7E86716999541DE775F5801_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m9CDCED7DEC6E463491CBAF504C60F72A2108D9D9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_GetEnumerator_m4AB49881FD946B436235290D53A917EEDF8E43FF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * V_3 = NULL;
	int32_t V_4 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_0 = __this->get_U3CU3E1__state_0();
			V_1 = L_0;
			int32_t L_1 = V_1;
			if (!L_1)
			{
				goto IL_0015;
			}
		}

IL_000a:
		{
			int32_t L_2 = V_1;
			if ((((int32_t)L_2) == ((int32_t)1)))
			{
				goto IL_0080;
			}
		}

IL_000e:
		{
			V_0 = (bool)0;
			goto IL_00b2;
		}

IL_0015:
		{
			__this->set_U3CU3E1__state_0((-1));
			// foreach (var headId in headIds)
			NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99 * L_3 = __this->get_address_of_headIds_3();
			Enumerator_tEE96FCD9D1EF14200B36BEAB6F34FA5FAFC27544  L_4;
			L_4 = NativeArray_1_GetEnumerator_m4AB49881FD946B436235290D53A917EEDF8E43FF((NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99 *)L_3, /*hidden argument*/NativeArray_1_GetEnumerator_m4AB49881FD946B436235290D53A917EEDF8E43FF_RuntimeMethod_var);
			__this->set_U3CU3E7__wrap1_7(L_4);
			__this->set_U3CU3E1__state_0(((int32_t)-3));
			goto IL_0088;
		}

IL_0037:
		{
			// foreach (var headId in headIds)
			Enumerator_tEE96FCD9D1EF14200B36BEAB6F34FA5FAFC27544 * L_5 = __this->get_address_of_U3CU3E7__wrap1_7();
			int32_t L_6;
			L_6 = Enumerator_get_Current_m9CDCED7DEC6E463491CBAF504C60F72A2108D9D9((Enumerator_tEE96FCD9D1EF14200B36BEAB6F34FA5FAFC27544 *)L_5, /*hidden argument*/Enumerator_get_Current_m9CDCED7DEC6E463491CBAF504C60F72A2108D9D9_RuntimeMethod_var);
			V_2 = L_6;
			// if (headId >= 0)
			int32_t L_7 = V_2;
			if ((((int32_t)L_7) < ((int32_t)0)))
			{
				goto IL_0088;
			}
		}

IL_0047:
		{
			// var list = new List<int>();
			List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_8 = (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *)il2cpp_codegen_object_new(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_il2cpp_TypeInfo_var);
			List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD(L_8, /*hidden argument*/List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD_RuntimeMethod_var);
			V_3 = L_8;
			// for (var i = headId; i >= 0; i = next[i])
			int32_t L_9 = V_2;
			V_4 = L_9;
			goto IL_0069;
		}

IL_0052:
		{
			// list.Add(i);
			List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_10 = V_3;
			int32_t L_11 = V_4;
			NullCheck(L_10);
			List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F(L_10, L_11, /*hidden argument*/List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
			// for (var i = headId; i >= 0; i = next[i])
			NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99 * L_12 = __this->get_address_of_next_5();
			int32_t L_13 = V_4;
			int32_t L_14;
			L_14 = IL2CPP_NATIVEARRAY_GET_ITEM(int32_t, ((NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99 *)L_12)->___m_Buffer_0, L_13);
			V_4 = L_14;
		}

IL_0069:
		{
			// for (var i = headId; i >= 0; i = next[i])
			int32_t L_15 = V_4;
			if ((((int32_t)L_15) >= ((int32_t)0)))
			{
				goto IL_0052;
			}
		}

IL_006e:
		{
			// yield return list;
			List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_16 = V_3;
			__this->set_U3CU3E2__current_1(L_16);
			__this->set_U3CU3E1__state_0(1);
			V_0 = (bool)1;
			goto IL_00b2;
		}

IL_0080:
		{
			__this->set_U3CU3E1__state_0(((int32_t)-3));
		}

IL_0088:
		{
			// foreach (var headId in headIds)
			Enumerator_tEE96FCD9D1EF14200B36BEAB6F34FA5FAFC27544 * L_17 = __this->get_address_of_U3CU3E7__wrap1_7();
			bool L_18;
			L_18 = Enumerator_MoveNext_m740CBDF222F51FFDE7E86716999541DE775F5801((Enumerator_tEE96FCD9D1EF14200B36BEAB6F34FA5FAFC27544 *)L_17, /*hidden argument*/Enumerator_MoveNext_m740CBDF222F51FFDE7E86716999541DE775F5801_RuntimeMethod_var);
			if (L_18)
			{
				goto IL_0037;
			}
		}

IL_0095:
		{
			U3CSelectAllListsU3Ed__1_U3CU3Em__Finally1_mB3EAEEF4AE63CBEEBF62E5D31ECA6427CBFA2FD7(__this, /*hidden argument*/NULL);
			Enumerator_tEE96FCD9D1EF14200B36BEAB6F34FA5FAFC27544 * L_19 = __this->get_address_of_U3CU3E7__wrap1_7();
			il2cpp_codegen_initobj(L_19, sizeof(Enumerator_tEE96FCD9D1EF14200B36BEAB6F34FA5FAFC27544 ));
			// }
			V_0 = (bool)0;
			goto IL_00b2;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FAULT_00ab;
	}

FAULT_00ab:
	{ // begin fault (depth: 1)
		U3CSelectAllListsU3Ed__1_System_IDisposable_Dispose_m2466C6D89215529C63B321B94A698E41792B9ACB(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(171)
	} // end fault
	IL2CPP_CLEANUP(171)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00b2:
	{
		bool L_20 = V_0;
		return L_20;
	}
}
// System.Void Unity.Entities.Conversion.MultiListDebugUtility/<SelectAllLists>d__1::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSelectAllListsU3Ed__1_U3CU3Em__Finally1_mB3EAEEF4AE63CBEEBF62E5D31ECA6427CBFA2FD7 (U3CSelectAllListsU3Ed__1_t681808CD9B2F449764F76B111AE4D38F0938A623 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m1BA5A217EE1F04EC997FF95CA595646E06C1B52B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_U3CU3E1__state_0((-1));
		Enumerator_tEE96FCD9D1EF14200B36BEAB6F34FA5FAFC27544 * L_0 = __this->get_address_of_U3CU3E7__wrap1_7();
		Enumerator_Dispose_m1BA5A217EE1F04EC997FF95CA595646E06C1B52B((Enumerator_tEE96FCD9D1EF14200B36BEAB6F34FA5FAFC27544 *)L_0, /*hidden argument*/Enumerator_Dispose_m1BA5A217EE1F04EC997FF95CA595646E06C1B52B_RuntimeMethod_var);
		return;
	}
}
// System.Collections.Generic.List`1<System.Int32> Unity.Entities.Conversion.MultiListDebugUtility/<SelectAllLists>d__1::System.Collections.Generic.IEnumerator<System.Collections.Generic.List<System.Int32>>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * U3CSelectAllListsU3Ed__1_System_Collections_Generic_IEnumeratorU3CSystem_Collections_Generic_ListU3CSystem_Int32U3EU3E_get_Current_mFFBDE40A5F3283F40DB446FF161E160288A77193 (U3CSelectAllListsU3Ed__1_t681808CD9B2F449764F76B111AE4D38F0938A623 * __this, const RuntimeMethod* method)
{
	{
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Unity.Entities.Conversion.MultiListDebugUtility/<SelectAllLists>d__1::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSelectAllListsU3Ed__1_System_Collections_IEnumerator_Reset_mE9F4B5927B16F4AC5B3861A292C199ABC7780721 (U3CSelectAllListsU3Ed__1_t681808CD9B2F449764F76B111AE4D38F0938A623 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CSelectAllListsU3Ed__1_System_Collections_IEnumerator_Reset_mE9F4B5927B16F4AC5B3861A292C199ABC7780721_RuntimeMethod_var)));
	}
}
// System.Object Unity.Entities.Conversion.MultiListDebugUtility/<SelectAllLists>d__1::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CSelectAllListsU3Ed__1_System_Collections_IEnumerator_get_Current_m5DCA52F9D0EE4A57339B84CE5736DC6075C5577D (U3CSelectAllListsU3Ed__1_t681808CD9B2F449764F76B111AE4D38F0938A623 * __this, const RuntimeMethod* method)
{
	{
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.List`1<System.Int32>> Unity.Entities.Conversion.MultiListDebugUtility/<SelectAllLists>d__1::System.Collections.Generic.IEnumerable<System.Collections.Generic.List<System.Int32>>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSelectAllListsU3Ed__1_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_ListU3CSystem_Int32U3EU3E_GetEnumerator_m48BAECE9CA13EB26A7EC58B95192C1CA57A29909 (U3CSelectAllListsU3Ed__1_t681808CD9B2F449764F76B111AE4D38F0938A623 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CSelectAllListsU3Ed__1_t681808CD9B2F449764F76B111AE4D38F0938A623_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CSelectAllListsU3Ed__1_t681808CD9B2F449764F76B111AE4D38F0938A623 * V_0 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_1 = __this->get_U3CU3El__initialThreadId_2();
		int32_t L_2;
		L_2 = Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		__this->set_U3CU3E1__state_0(0);
		V_0 = __this;
		goto IL_0029;
	}

IL_0022:
	{
		U3CSelectAllListsU3Ed__1_t681808CD9B2F449764F76B111AE4D38F0938A623 * L_3 = (U3CSelectAllListsU3Ed__1_t681808CD9B2F449764F76B111AE4D38F0938A623 *)il2cpp_codegen_object_new(U3CSelectAllListsU3Ed__1_t681808CD9B2F449764F76B111AE4D38F0938A623_il2cpp_TypeInfo_var);
		U3CSelectAllListsU3Ed__1__ctor_m2BA9FA0DE6A887D8562C989A9A8DF2947857B437(L_3, 0, /*hidden argument*/NULL);
		V_0 = L_3;
	}

IL_0029:
	{
		U3CSelectAllListsU3Ed__1_t681808CD9B2F449764F76B111AE4D38F0938A623 * L_4 = V_0;
		NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99  L_5 = __this->get_U3CU3E3__headIds_4();
		NullCheck(L_4);
		L_4->set_headIds_3(L_5);
		U3CSelectAllListsU3Ed__1_t681808CD9B2F449764F76B111AE4D38F0938A623 * L_6 = V_0;
		NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99  L_7 = __this->get_U3CU3E3__next_6();
		NullCheck(L_6);
		L_6->set_next_5(L_7);
		U3CSelectAllListsU3Ed__1_t681808CD9B2F449764F76B111AE4D38F0938A623 * L_8 = V_0;
		return L_8;
	}
}
// System.Collections.IEnumerator Unity.Entities.Conversion.MultiListDebugUtility/<SelectAllLists>d__1::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSelectAllListsU3Ed__1_System_Collections_IEnumerable_GetEnumerator_m89E185D9D754AA5AE057F140E7FFAAB9DF8A7C5B (U3CSelectAllListsU3Ed__1_t681808CD9B2F449764F76B111AE4D38F0938A623 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0;
		L_0 = U3CSelectAllListsU3Ed__1_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_ListU3CSystem_Int32U3EU3E_GetEnumerator_m48BAECE9CA13EB26A7EC58B95192C1CA57A29909(__this, /*hidden argument*/NULL);
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
// Conversion methods for marshalling of: Unity.Entities.Conversion.SceneHierarchy/Children
IL2CPP_EXTERN_C void Children_t22E7C284A8562300D30C3F11E2C477C8ECEF77D6_marshal_pinvoke(const Children_t22E7C284A8562300D30C3F11E2C477C8ECEF77D6& unmarshaled, Children_t22E7C284A8562300D30C3F11E2C477C8ECEF77D6_marshaled_pinvoke& marshaled)
{
	Exception_t* ____iter_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_iter' of type 'Children'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____iter_0Exception, NULL);
}
IL2CPP_EXTERN_C void Children_t22E7C284A8562300D30C3F11E2C477C8ECEF77D6_marshal_pinvoke_back(const Children_t22E7C284A8562300D30C3F11E2C477C8ECEF77D6_marshaled_pinvoke& marshaled, Children_t22E7C284A8562300D30C3F11E2C477C8ECEF77D6& unmarshaled)
{
	Exception_t* ____iter_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_iter' of type 'Children'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____iter_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Unity.Entities.Conversion.SceneHierarchy/Children
IL2CPP_EXTERN_C void Children_t22E7C284A8562300D30C3F11E2C477C8ECEF77D6_marshal_pinvoke_cleanup(Children_t22E7C284A8562300D30C3F11E2C477C8ECEF77D6_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Unity.Entities.Conversion.SceneHierarchy/Children
IL2CPP_EXTERN_C void Children_t22E7C284A8562300D30C3F11E2C477C8ECEF77D6_marshal_com(const Children_t22E7C284A8562300D30C3F11E2C477C8ECEF77D6& unmarshaled, Children_t22E7C284A8562300D30C3F11E2C477C8ECEF77D6_marshaled_com& marshaled)
{
	Exception_t* ____iter_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_iter' of type 'Children'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____iter_0Exception, NULL);
}
IL2CPP_EXTERN_C void Children_t22E7C284A8562300D30C3F11E2C477C8ECEF77D6_marshal_com_back(const Children_t22E7C284A8562300D30C3F11E2C477C8ECEF77D6_marshaled_com& marshaled, Children_t22E7C284A8562300D30C3F11E2C477C8ECEF77D6& unmarshaled)
{
	Exception_t* ____iter_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_iter' of type 'Children'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____iter_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Unity.Entities.Conversion.SceneHierarchy/Children
IL2CPP_EXTERN_C void Children_t22E7C284A8562300D30C3F11E2C477C8ECEF77D6_marshal_com_cleanup(Children_t22E7C284A8562300D30C3F11E2C477C8ECEF77D6_marshaled_com& marshaled)
{
}
// System.Void Unity.Entities.Conversion.SceneHierarchy/Children::.ctor(Unity.Collections.NativeMultiHashMap`2/Enumerator<System.Int32,System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Children__ctor_mF7F91EF7713B066A283AB0E81E975FCF2A9BF1EB (Children_t22E7C284A8562300D30C3F11E2C477C8ECEF77D6 * __this, Enumerator_tCBD2A52574F899C4C90698BB0A64BD8557E28A1A  ___iter0, const RuntimeMethod* method)
{
	{
		// _iter = iter;
		Enumerator_tCBD2A52574F899C4C90698BB0A64BD8557E28A1A  L_0 = ___iter0;
		__this->set__iter_0(L_0);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void Children__ctor_mF7F91EF7713B066A283AB0E81E975FCF2A9BF1EB_AdjustorThunk (RuntimeObject * __this, Enumerator_tCBD2A52574F899C4C90698BB0A64BD8557E28A1A  ___iter0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Children_t22E7C284A8562300D30C3F11E2C477C8ECEF77D6 * _thisAdjusted = reinterpret_cast<Children_t22E7C284A8562300D30C3F11E2C477C8ECEF77D6 *>(__this + _offset);
	Children__ctor_mF7F91EF7713B066A283AB0E81E975FCF2A9BF1EB_inline(_thisAdjusted, ___iter0, method);
}
// System.Boolean Unity.Entities.Conversion.SceneHierarchy/Children::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Children_MoveNext_m5C8C55FBB1F78E135165070AF6AB01F1DF862CA3 (Children_t22E7C284A8562300D30C3F11E2C477C8ECEF77D6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mA3B351B37128A8711612EDE71903537F0972DF40_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public bool MoveNext() => _iter.MoveNext();
		Enumerator_tCBD2A52574F899C4C90698BB0A64BD8557E28A1A * L_0 = __this->get_address_of__iter_0();
		bool L_1;
		L_1 = Enumerator_MoveNext_mA3B351B37128A8711612EDE71903537F0972DF40((Enumerator_tCBD2A52574F899C4C90698BB0A64BD8557E28A1A *)L_0, /*hidden argument*/Enumerator_MoveNext_mA3B351B37128A8711612EDE71903537F0972DF40_RuntimeMethod_var);
		return L_1;
	}
}
IL2CPP_EXTERN_C  bool Children_MoveNext_m5C8C55FBB1F78E135165070AF6AB01F1DF862CA3_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Children_t22E7C284A8562300D30C3F11E2C477C8ECEF77D6 * _thisAdjusted = reinterpret_cast<Children_t22E7C284A8562300D30C3F11E2C477C8ECEF77D6 *>(__this + _offset);
	bool _returnValue;
	_returnValue = Children_MoveNext_m5C8C55FBB1F78E135165070AF6AB01F1DF862CA3(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.Entities.Conversion.SceneHierarchy/Children::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Children_Reset_m1B1248A2EB01E84B00ECF3AD59461A67376A8314 (Children_t22E7C284A8562300D30C3F11E2C477C8ECEF77D6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Reset_mC2D623CB35FED773F29BACCEE4C88144939B6343_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public void Reset() => _iter.Reset();
		Enumerator_tCBD2A52574F899C4C90698BB0A64BD8557E28A1A * L_0 = __this->get_address_of__iter_0();
		Enumerator_Reset_mC2D623CB35FED773F29BACCEE4C88144939B6343((Enumerator_tCBD2A52574F899C4C90698BB0A64BD8557E28A1A *)L_0, /*hidden argument*/Enumerator_Reset_mC2D623CB35FED773F29BACCEE4C88144939B6343_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void Children_Reset_m1B1248A2EB01E84B00ECF3AD59461A67376A8314_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Children_t22E7C284A8562300D30C3F11E2C477C8ECEF77D6 * _thisAdjusted = reinterpret_cast<Children_t22E7C284A8562300D30C3F11E2C477C8ECEF77D6 *>(__this + _offset);
	Children_Reset_m1B1248A2EB01E84B00ECF3AD59461A67376A8314(_thisAdjusted, method);
}
// System.Int32 Unity.Entities.Conversion.SceneHierarchy/Children::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Children_get_Current_mE24ABDF0BED58E38F754EB1F93D38E4AC52F5318 (Children_t22E7C284A8562300D30C3F11E2C477C8ECEF77D6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m494B18CB859AAD5742046CA5CDC9118C911C9A38_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public int Current => _iter.Current;
		Enumerator_tCBD2A52574F899C4C90698BB0A64BD8557E28A1A * L_0 = __this->get_address_of__iter_0();
		int32_t L_1;
		L_1 = Enumerator_get_Current_m494B18CB859AAD5742046CA5CDC9118C911C9A38_inline((Enumerator_tCBD2A52574F899C4C90698BB0A64BD8557E28A1A *)L_0, /*hidden argument*/Enumerator_get_Current_m494B18CB859AAD5742046CA5CDC9118C911C9A38_RuntimeMethod_var);
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t Children_get_Current_mE24ABDF0BED58E38F754EB1F93D38E4AC52F5318_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Children_t22E7C284A8562300D30C3F11E2C477C8ECEF77D6 * _thisAdjusted = reinterpret_cast<Children_t22E7C284A8562300D30C3F11E2C477C8ECEF77D6 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = Children_get_Current_mE24ABDF0BED58E38F754EB1F93D38E4AC52F5318(_thisAdjusted, method);
	return _returnValue;
}
// System.Object Unity.Entities.Conversion.SceneHierarchy/Children::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Children_System_Collections_IEnumerator_get_Current_mC4B420EF19C87522B68F5C140A664329D43B75FB (Children_t22E7C284A8562300D30C3F11E2C477C8ECEF77D6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// object IEnumerator.Current => Current;
		int32_t L_0;
		L_0 = Children_get_Current_mE24ABDF0BED58E38F754EB1F93D38E4AC52F5318((Children_t22E7C284A8562300D30C3F11E2C477C8ECEF77D6 *)__this, /*hidden argument*/NULL);
		int32_t L_1 = L_0;
		RuntimeObject * L_2 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C  RuntimeObject * Children_System_Collections_IEnumerator_get_Current_mC4B420EF19C87522B68F5C140A664329D43B75FB_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Children_t22E7C284A8562300D30C3F11E2C477C8ECEF77D6 * _thisAdjusted = reinterpret_cast<Children_t22E7C284A8562300D30C3F11E2C477C8ECEF77D6 *>(__this + _offset);
	RuntimeObject * _returnValue;
	_returnValue = Children_System_Collections_IEnumerator_get_Current_mC4B420EF19C87522B68F5C140A664329D43B75FB(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.Entities.Conversion.SceneHierarchy/Children::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Children_Dispose_m257B4F3E34B171590738F0B11FC8CEBC057EA350 (Children_t22E7C284A8562300D30C3F11E2C477C8ECEF77D6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m673C580EA95E7DCB6C15662690C38DFCCB0F734E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public void Dispose() => _iter.Dispose();
		Enumerator_tCBD2A52574F899C4C90698BB0A64BD8557E28A1A * L_0 = __this->get_address_of__iter_0();
		Enumerator_Dispose_m673C580EA95E7DCB6C15662690C38DFCCB0F734E((Enumerator_tCBD2A52574F899C4C90698BB0A64BD8557E28A1A *)L_0, /*hidden argument*/Enumerator_Dispose_m673C580EA95E7DCB6C15662690C38DFCCB0F734E_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void Children_Dispose_m257B4F3E34B171590738F0B11FC8CEBC057EA350_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Children_t22E7C284A8562300D30C3F11E2C477C8ECEF77D6 * _thisAdjusted = reinterpret_cast<Children_t22E7C284A8562300D30C3F11E2C477C8ECEF77D6 *>(__this + _offset);
	Children_Dispose_m257B4F3E34B171590738F0B11FC8CEBC057EA350(_thisAdjusted, method);
}
// Unity.Entities.Conversion.SceneHierarchy/Children Unity.Entities.Conversion.SceneHierarchy/Children::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Children_t22E7C284A8562300D30C3F11E2C477C8ECEF77D6  Children_GetEnumerator_m4EB218A98EBE2D674D2A3608E4777E9E22534089 (Children_t22E7C284A8562300D30C3F11E2C477C8ECEF77D6 * __this, const RuntimeMethod* method)
{
	{
		// public Children GetEnumerator() => this;
		Children_t22E7C284A8562300D30C3F11E2C477C8ECEF77D6  L_0 = (*(Children_t22E7C284A8562300D30C3F11E2C477C8ECEF77D6 *)__this);
		return L_0;
	}
}
IL2CPP_EXTERN_C  Children_t22E7C284A8562300D30C3F11E2C477C8ECEF77D6  Children_GetEnumerator_m4EB218A98EBE2D674D2A3608E4777E9E22534089_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Children_t22E7C284A8562300D30C3F11E2C477C8ECEF77D6 * _thisAdjusted = reinterpret_cast<Children_t22E7C284A8562300D30C3F11E2C477C8ECEF77D6 *>(__this + _offset);
	Children_t22E7C284A8562300D30C3F11E2C477C8ECEF77D6  _returnValue;
	_returnValue = Children_GetEnumerator_m4EB218A98EBE2D674D2A3608E4777E9E22534089(_thisAdjusted, method);
	return _returnValue;
}
// System.Collections.Generic.IEnumerator`1<System.Int32> Unity.Entities.Conversion.SceneHierarchy/Children::System.Collections.Generic.IEnumerable<System.Int32>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Children_System_Collections_Generic_IEnumerableU3CSystem_Int32U3E_GetEnumerator_mFD1DECC17A31EB75C439E73FD9DBF2F1A9B8626D (Children_t22E7C284A8562300D30C3F11E2C477C8ECEF77D6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Children_t22E7C284A8562300D30C3F11E2C477C8ECEF77D6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// IEnumerator<int> IEnumerable<int>.GetEnumerator() => this;
		Children_t22E7C284A8562300D30C3F11E2C477C8ECEF77D6  L_0 = (*(Children_t22E7C284A8562300D30C3F11E2C477C8ECEF77D6 *)__this);
		Children_t22E7C284A8562300D30C3F11E2C477C8ECEF77D6  L_1 = L_0;
		RuntimeObject * L_2 = Box(Children_t22E7C284A8562300D30C3F11E2C477C8ECEF77D6_il2cpp_TypeInfo_var, &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* Children_System_Collections_Generic_IEnumerableU3CSystem_Int32U3E_GetEnumerator_mFD1DECC17A31EB75C439E73FD9DBF2F1A9B8626D_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Children_t22E7C284A8562300D30C3F11E2C477C8ECEF77D6 * _thisAdjusted = reinterpret_cast<Children_t22E7C284A8562300D30C3F11E2C477C8ECEF77D6 *>(__this + _offset);
	RuntimeObject* _returnValue;
	_returnValue = Children_System_Collections_Generic_IEnumerableU3CSystem_Int32U3E_GetEnumerator_mFD1DECC17A31EB75C439E73FD9DBF2F1A9B8626D(_thisAdjusted, method);
	return _returnValue;
}
// System.Collections.IEnumerator Unity.Entities.Conversion.SceneHierarchy/Children::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Children_System_Collections_IEnumerable_GetEnumerator_m3B3E8879009CEABAE36CF3D006C62D62C50ADB27 (Children_t22E7C284A8562300D30C3F11E2C477C8ECEF77D6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Children_t22E7C284A8562300D30C3F11E2C477C8ECEF77D6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// IEnumerator IEnumerable.GetEnumerator() => (this as IEnumerable<int>).GetEnumerator();
		Children_t22E7C284A8562300D30C3F11E2C477C8ECEF77D6  L_0 = (*(Children_t22E7C284A8562300D30C3F11E2C477C8ECEF77D6 *)__this);
		Children_t22E7C284A8562300D30C3F11E2C477C8ECEF77D6  L_1 = L_0;
		RuntimeObject * L_2 = Box(Children_t22E7C284A8562300D30C3F11E2C477C8ECEF77D6_il2cpp_TypeInfo_var, &L_1);
		RuntimeObject* L_3;
		L_3 = Children_System_Collections_Generic_IEnumerableU3CSystem_Int32U3E_GetEnumerator_mFD1DECC17A31EB75C439E73FD9DBF2F1A9B8626D((Children_t22E7C284A8562300D30C3F11E2C477C8ECEF77D6 *)UnBox(L_2, Children_t22E7C284A8562300D30C3F11E2C477C8ECEF77D6_il2cpp_TypeInfo_var), /*hidden argument*/NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* Children_System_Collections_IEnumerable_GetEnumerator_m3B3E8879009CEABAE36CF3D006C62D62C50ADB27_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Children_t22E7C284A8562300D30C3F11E2C477C8ECEF77D6 * _thisAdjusted = reinterpret_cast<Children_t22E7C284A8562300D30C3F11E2C477C8ECEF77D6 *>(__this + _offset);
	RuntimeObject* _returnValue;
	_returnValue = Children_System_Collections_IEnumerable_GetEnumerator_m3B3E8879009CEABAE36CF3D006C62D62C50ADB27(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Entities.Conversion.SceneHierarchyExtensions/CollectHierarchyInstanceIdsAndIndicesJob::Execute()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void CollectHierarchyInstanceIdsAndIndicesJob_Execute_mF6206205C83920753BADE6DDBC7239FE89C934B6 (CollectHierarchyInstanceIdsAndIndicesJob_t847F690D8238871B1D4201D6D275D8F48CE43461 * IL2CPP_PARAMETER_RESTRICT __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeHashMap_2_TryAdd_mE53CE4E1682EB266540ADCCF1DDFAEE7959A54AC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_Add_m5237766797735D3AE742B808D9ACF0F9318687FB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1__ctor_mBAE35EFBB4C7AC3B4A43CC67C5796BDCC9D954BB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_get_Item_mA9983E9C959E1D5B95B39FC7C40CF287E32D47FD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_get_Length_mB5AB45D0A3072AE6178CF6AC58DAA1D4E3C28902_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_set_Length_m6104401699865BEA6A0EB4EEF806E0A8546F88EF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	NativeList_1_t37924D67F0E4D83DE506A261B7A05AE619630C80  V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Children_t22E7C284A8562300D30C3F11E2C477C8ECEF77D6  V_4;
	memset((&V_4), 0, sizeof(V_4));
	int32_t V_5 = 0;
	{
		// var openIndices = new NativeList<int>(0, Allocator.Temp);
		NativeList_1__ctor_mBAE35EFBB4C7AC3B4A43CC67C5796BDCC9D954BB((NativeList_1_t37924D67F0E4D83DE506A261B7A05AE619630C80 *)(&V_0), 0, 2, /*hidden argument*/NativeList_1__ctor_mBAE35EFBB4C7AC3B4A43CC67C5796BDCC9D954BB_RuntimeMethod_var);
		// for (int i = 0; i < VisitedInstanceIds.Length; i++)
		V_1 = 0;
		goto IL_0043;
	}

IL_000d:
	{
		// if (Hierarchy.TryGetIndexForInstanceId(VisitedInstanceIds[i], out int idx))
		SceneHierarchy_tD5CB36F0069FD8DBC527EC7B6E17F9780204C258 * L_0 = __this->get_address_of_Hierarchy_0();
		NativeList_1_t37924D67F0E4D83DE506A261B7A05AE619630C80 * L_1 = __this->get_address_of_VisitedInstanceIds_1();
		int32_t L_2 = V_1;
		int32_t L_3;
		L_3 = NativeList_1_get_Item_mA9983E9C959E1D5B95B39FC7C40CF287E32D47FD((NativeList_1_t37924D67F0E4D83DE506A261B7A05AE619630C80 *)L_1, L_2, /*hidden argument*/NativeList_1_get_Item_mA9983E9C959E1D5B95B39FC7C40CF287E32D47FD_RuntimeMethod_var);
		bool L_4;
		L_4 = SceneHierarchy_TryGetIndexForInstanceId_m650AFC8F1BC9DD44633162977F0C07C97B54D1A8((SceneHierarchy_tD5CB36F0069FD8DBC527EC7B6E17F9780204C258 *)L_0, L_3, (int32_t*)(&V_2), /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_003f;
		}
	}
	{
		// openIndices.Add(idx);
		NativeList_1_Add_m5237766797735D3AE742B808D9ACF0F9318687FB((NativeList_1_t37924D67F0E4D83DE506A261B7A05AE619630C80 *)(&V_0), (int32_t*)(&V_2), /*hidden argument*/NativeList_1_Add_m5237766797735D3AE742B808D9ACF0F9318687FB_RuntimeMethod_var);
		// VisitedIndices.TryAdd(idx, true);
		NativeHashMap_2_t977D8B51ED64BBFA8F25F7393936358BC6087EBB * L_5 = __this->get_address_of_VisitedIndices_2();
		int32_t L_6 = V_2;
		bool L_7;
		L_7 = NativeHashMap_2_TryAdd_mE53CE4E1682EB266540ADCCF1DDFAEE7959A54AC((NativeHashMap_2_t977D8B51ED64BBFA8F25F7393936358BC6087EBB *)L_5, L_6, (bool)1, /*hidden argument*/NativeHashMap_2_TryAdd_mE53CE4E1682EB266540ADCCF1DDFAEE7959A54AC_RuntimeMethod_var);
	}

IL_003f:
	{
		// for (int i = 0; i < VisitedInstanceIds.Length; i++)
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_0043:
	{
		// for (int i = 0; i < VisitedInstanceIds.Length; i++)
		int32_t L_9 = V_1;
		NativeList_1_t37924D67F0E4D83DE506A261B7A05AE619630C80 * L_10 = __this->get_address_of_VisitedInstanceIds_1();
		int32_t L_11;
		L_11 = NativeList_1_get_Length_mB5AB45D0A3072AE6178CF6AC58DAA1D4E3C28902((NativeList_1_t37924D67F0E4D83DE506A261B7A05AE619630C80 *)L_10, /*hidden argument*/NativeList_1_get_Length_mB5AB45D0A3072AE6178CF6AC58DAA1D4E3C28902_RuntimeMethod_var);
		if ((((int32_t)L_9) < ((int32_t)L_11)))
		{
			goto IL_000d;
		}
	}
	{
		goto IL_00cc;
	}

IL_0053:
	{
		// int idx = openIndices[openIndices.Length - 1];
		int32_t L_12;
		L_12 = NativeList_1_get_Length_mB5AB45D0A3072AE6178CF6AC58DAA1D4E3C28902((NativeList_1_t37924D67F0E4D83DE506A261B7A05AE619630C80 *)(&V_0), /*hidden argument*/NativeList_1_get_Length_mB5AB45D0A3072AE6178CF6AC58DAA1D4E3C28902_RuntimeMethod_var);
		int32_t L_13;
		L_13 = NativeList_1_get_Item_mA9983E9C959E1D5B95B39FC7C40CF287E32D47FD((NativeList_1_t37924D67F0E4D83DE506A261B7A05AE619630C80 *)(&V_0), ((int32_t)il2cpp_codegen_subtract((int32_t)L_12, (int32_t)1)), /*hidden argument*/NativeList_1_get_Item_mA9983E9C959E1D5B95B39FC7C40CF287E32D47FD_RuntimeMethod_var);
		V_3 = L_13;
		// openIndices.Length--;
		NativeList_1_t37924D67F0E4D83DE506A261B7A05AE619630C80 * L_14 = (&V_0);
		int32_t L_15;
		L_15 = NativeList_1_get_Length_mB5AB45D0A3072AE6178CF6AC58DAA1D4E3C28902((NativeList_1_t37924D67F0E4D83DE506A261B7A05AE619630C80 *)L_14, /*hidden argument*/NativeList_1_get_Length_mB5AB45D0A3072AE6178CF6AC58DAA1D4E3C28902_RuntimeMethod_var);
		V_5 = L_15;
		int32_t L_16 = V_5;
		NativeList_1_set_Length_m6104401699865BEA6A0EB4EEF806E0A8546F88EF((NativeList_1_t37924D67F0E4D83DE506A261B7A05AE619630C80 *)L_14, ((int32_t)il2cpp_codegen_subtract((int32_t)L_16, (int32_t)1)), /*hidden argument*/NativeList_1_set_Length_m6104401699865BEA6A0EB4EEF806E0A8546F88EF_RuntimeMethod_var);
		// if (VisitedIndices.TryAdd(idx, false))
		NativeHashMap_2_t977D8B51ED64BBFA8F25F7393936358BC6087EBB * L_17 = __this->get_address_of_VisitedIndices_2();
		int32_t L_18 = V_3;
		bool L_19;
		L_19 = NativeHashMap_2_TryAdd_mE53CE4E1682EB266540ADCCF1DDFAEE7959A54AC((NativeHashMap_2_t977D8B51ED64BBFA8F25F7393936358BC6087EBB *)L_17, L_18, (bool)0, /*hidden argument*/NativeHashMap_2_TryAdd_mE53CE4E1682EB266540ADCCF1DDFAEE7959A54AC_RuntimeMethod_var);
		if (!L_19)
		{
			goto IL_00a1;
		}
	}
	{
		// VisitedInstanceIds.Add(Hierarchy.GetInstanceIdForIndex(idx));
		NativeList_1_t37924D67F0E4D83DE506A261B7A05AE619630C80 * L_20 = __this->get_address_of_VisitedInstanceIds_1();
		SceneHierarchy_tD5CB36F0069FD8DBC527EC7B6E17F9780204C258 * L_21 = __this->get_address_of_Hierarchy_0();
		int32_t L_22 = V_3;
		int32_t L_23;
		L_23 = SceneHierarchy_GetInstanceIdForIndex_m46E1E3A1BEA506056CCB307BBF21BC0E85D7A41E((SceneHierarchy_tD5CB36F0069FD8DBC527EC7B6E17F9780204C258 *)L_21, L_22, /*hidden argument*/NULL);
		V_5 = L_23;
		NativeList_1_Add_m5237766797735D3AE742B808D9ACF0F9318687FB((NativeList_1_t37924D67F0E4D83DE506A261B7A05AE619630C80 *)L_20, (int32_t*)(&V_5), /*hidden argument*/NativeList_1_Add_m5237766797735D3AE742B808D9ACF0F9318687FB_RuntimeMethod_var);
	}

IL_00a1:
	{
		// var iter = Hierarchy.GetChildIndicesForIndex(idx);
		SceneHierarchy_tD5CB36F0069FD8DBC527EC7B6E17F9780204C258 * L_24 = __this->get_address_of_Hierarchy_0();
		int32_t L_25 = V_3;
		Children_t22E7C284A8562300D30C3F11E2C477C8ECEF77D6  L_26;
		L_26 = SceneHierarchy_GetChildIndicesForIndex_m36E89FF41BCD5410743FACC9F313AEBB7B17F9EC((SceneHierarchy_tD5CB36F0069FD8DBC527EC7B6E17F9780204C258 *)L_24, L_25, /*hidden argument*/NULL);
		V_4 = L_26;
		goto IL_00c3;
	}

IL_00b1:
	{
		// openIndices.Add(iter.Current);
		int32_t L_27;
		L_27 = Children_get_Current_mE24ABDF0BED58E38F754EB1F93D38E4AC52F5318((Children_t22E7C284A8562300D30C3F11E2C477C8ECEF77D6 *)(&V_4), /*hidden argument*/NULL);
		V_5 = L_27;
		NativeList_1_Add_m5237766797735D3AE742B808D9ACF0F9318687FB((NativeList_1_t37924D67F0E4D83DE506A261B7A05AE619630C80 *)(&V_0), (int32_t*)(&V_5), /*hidden argument*/NativeList_1_Add_m5237766797735D3AE742B808D9ACF0F9318687FB_RuntimeMethod_var);
	}

IL_00c3:
	{
		// while (iter.MoveNext())
		bool L_28;
		L_28 = Children_MoveNext_m5C8C55FBB1F78E135165070AF6AB01F1DF862CA3((Children_t22E7C284A8562300D30C3F11E2C477C8ECEF77D6 *)(&V_4), /*hidden argument*/NULL);
		if (L_28)
		{
			goto IL_00b1;
		}
	}

IL_00cc:
	{
		// while (openIndices.Length > 0)
		int32_t L_29;
		L_29 = NativeList_1_get_Length_mB5AB45D0A3072AE6178CF6AC58DAA1D4E3C28902((NativeList_1_t37924D67F0E4D83DE506A261B7A05AE619630C80 *)(&V_0), /*hidden argument*/NativeList_1_get_Length_mB5AB45D0A3072AE6178CF6AC58DAA1D4E3C28902_RuntimeMethod_var);
		if ((((int32_t)L_29) > ((int32_t)0)))
		{
			goto IL_0053;
		}
	}
	{
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void CollectHierarchyInstanceIdsAndIndicesJob_Execute_mF6206205C83920753BADE6DDBC7239FE89C934B6_AdjustorThunk (RuntimeObject * IL2CPP_PARAMETER_RESTRICT __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	CollectHierarchyInstanceIdsAndIndicesJob_t847F690D8238871B1D4201D6D275D8F48CE43461 * _thisAdjusted = reinterpret_cast<CollectHierarchyInstanceIdsAndIndicesJob_t847F690D8238871B1D4201D6D275D8F48CE43461 *>(__this + _offset);
	CollectHierarchyInstanceIdsAndIndicesJob_Execute_mF6206205C83920753BADE6DDBC7239FE89C934B6(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Entities.Conversion.SceneHierarchyExtensions/CollectHierarchyInstanceIdsJob::Unity.Jobs.IJob.Execute()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void CollectHierarchyInstanceIdsJob_Unity_Jobs_IJob_Execute_m91DA44C523567936A10C482E1B67A86817344E28 (CollectHierarchyInstanceIdsJob_t445787F5F4BB00F07919FF4055525490E3F16745 * IL2CPP_PARAMETER_RESTRICT __this, const RuntimeMethod* method)
{
	{
		// CollectHierarchyInstanceIds(Hierarchy, Roots, VisitedInstances);
		SceneHierarchy_tD5CB36F0069FD8DBC527EC7B6E17F9780204C258  L_0 = __this->get_Hierarchy_0();
		NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99  L_1 = __this->get_Roots_1();
		NativeHashSet_1_t88F362074B652B4D4F194604B629EE17A41B3976  L_2 = __this->get_VisitedInstances_2();
		SceneHierarchyExtensions_CollectHierarchyInstanceIds_m225CBE1204605B36EA52821DAD53E237C978219E(L_0, L_1, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void CollectHierarchyInstanceIdsJob_Unity_Jobs_IJob_Execute_m91DA44C523567936A10C482E1B67A86817344E28_AdjustorThunk (RuntimeObject * IL2CPP_PARAMETER_RESTRICT __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	CollectHierarchyInstanceIdsJob_t445787F5F4BB00F07919FF4055525490E3F16745 * _thisAdjusted = reinterpret_cast<CollectHierarchyInstanceIdsJob_t445787F5F4BB00F07919FF4055525490E3F16745 *>(__this + _offset);
	CollectHierarchyInstanceIdsJob_Unity_Jobs_IJob_Execute_m91DA44C523567936A10C482E1B67A86817344E28(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String Unity.Properties.Generated.Unity_Entities_CompanionLink_PropertyBag/Companion_Property::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Companion_Property_get_Name_m180121FBD6622F4B2A7DBCB0FBB7CCE1F020009C (Companion_Property_tBD5185C195780B95CB3CFBF31BEBEF89A2C303CD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral604D744C706DF22219F7174D1F4FF18F610A1BE0);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral604D744C706DF22219F7174D1F4FF18F610A1BE0;
	}
}
// System.Boolean Unity.Properties.Generated.Unity_Entities_CompanionLink_PropertyBag/Companion_Property::get_IsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Companion_Property_get_IsReadOnly_m76E9900B7A2B35B274C46AF0EF668D611CBEEC59 (Companion_Property_tBD5185C195780B95CB3CFBF31BEBEF89A2C303CD * __this, const RuntimeMethod* method)
{
	{
		return (bool)0;
	}
}
// System.Void Unity.Properties.Generated.Unity_Entities_CompanionLink_PropertyBag/Companion_Property::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Companion_Property__ctor_m47C09C5F80F40B7B609895D7089F59A0A75F70FC (Companion_Property_tBD5185C195780B95CB3CFBF31BEBEF89A2C303CD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Property_2__ctor_m1BAA1B1B55A36F058B42D189CA9E56A126FA4B81_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Property_2__ctor_m1BAA1B1B55A36F058B42D189CA9E56A126FA4B81(__this, /*hidden argument*/Property_2__ctor_m1BAA1B1B55A36F058B42D189CA9E56A126FA4B81_RuntimeMethod_var);
		return;
	}
}
// UnityEngine.GameObject Unity.Properties.Generated.Unity_Entities_CompanionLink_PropertyBag/Companion_Property::GetValue(Unity.Entities.CompanionLink&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Companion_Property_GetValue_m3A15481DB3B565FE73DEF54ECDC12653B145D340 (Companion_Property_tBD5185C195780B95CB3CFBF31BEBEF89A2C303CD * __this, CompanionLink_t41731339806AAA3D199C80AC4E62FC893D428FA2 ** ___container0, const RuntimeMethod* method)
{
	{
		CompanionLink_t41731339806AAA3D199C80AC4E62FC893D428FA2 ** L_0 = ___container0;
		CompanionLink_t41731339806AAA3D199C80AC4E62FC893D428FA2 * L_1 = *((CompanionLink_t41731339806AAA3D199C80AC4E62FC893D428FA2 **)L_0);
		NullCheck(L_1);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = L_1->get_Companion_2();
		return L_2;
	}
}
// System.Void Unity.Properties.Generated.Unity_Entities_CompanionLink_PropertyBag/Companion_Property::SetValue(Unity.Entities.CompanionLink&,UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Companion_Property_SetValue_mB3A1337668504AE45697F56669D3DB82D257B61F (Companion_Property_tBD5185C195780B95CB3CFBF31BEBEF89A2C303CD * __this, CompanionLink_t41731339806AAA3D199C80AC4E62FC893D428FA2 ** ___container0, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___value1, const RuntimeMethod* method)
{
	{
		CompanionLink_t41731339806AAA3D199C80AC4E62FC893D428FA2 ** L_0 = ___container0;
		CompanionLink_t41731339806AAA3D199C80AC4E62FC893D428FA2 * L_1 = *((CompanionLink_t41731339806AAA3D199C80AC4E62FC893D428FA2 **)L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = ___value1;
		NullCheck(L_1);
		L_1->set_Companion_2(L_2);
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_Exec_t13626ECD14E784C7148B8520FD71A4D0A5468675 (Exec_t13626ECD14E784C7148B8520FD71A4D0A5468675 * __this, void* ___ptr0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(void*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___ptr0);

}
// System.Void Unity.Entities.Conversion.IncrementalConversionContext/RemoveFromHierarchy/Exec::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exec__ctor_m17809861465491795E4BF9A83E956B90BAF87166 (Exec_t13626ECD14E784C7148B8520FD71A4D0A5468675 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Unity.Entities.Conversion.IncrementalConversionContext/RemoveFromHierarchy/Exec::Invoke(System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exec_Invoke_m80214B313E4782849890CB06881AEC91EC6F6C63 (Exec_t13626ECD14E784C7148B8520FD71A4D0A5468675 * __this, void* ___ptr0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___ptr0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___ptr0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< void* >::Invoke(targetMethod, targetThis, ___ptr0);
					else
						GenericVirtActionInvoker1< void* >::Invoke(targetMethod, targetThis, ___ptr0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< void* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___ptr0);
					else
						VirtActionInvoker1< void* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___ptr0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___ptr0, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, void*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___ptr0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Unity.Entities.Conversion.IncrementalConversionContext/RemoveFromHierarchy/Exec::BeginInvoke(System.Void*,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Exec_BeginInvoke_m1303AB7394A75057B75815BEA39FFA8EB5B22266 (Exec_t13626ECD14E784C7148B8520FD71A4D0A5468675 * __this, void* ___ptr0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___ptr0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void Unity.Entities.Conversion.IncrementalConversionContext/RemoveFromHierarchy/Exec::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exec_EndInvoke_m5AF64C9A33D53DEDD29C0886DAAADC0DE3BC80A7 (Exec_t13626ECD14E784C7148B8520FD71A4D0A5468675 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObjectConversionMappingSystem_tD834531091319F873FDC1E5EDB439CE9654312DD * Conversion_get_MappingSystem_m7C152D0A7C4D00070AED5CBE4560208D9B4999A2_inline (Conversion_t7DFF4B71AB43ADC70ECB67EC0800F6D23CBF01EF * __this, const RuntimeMethod* method)
{
	{
		// public GameObjectConversionMappingSystem MappingSystem { get; }
		GameObjectConversionMappingSystem_tD834531091319F873FDC1E5EDB439CE9654312DD * L_0 = __this->get_U3CMappingSystemU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline (ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___name0;
		intptr_t L_1;
		L_1 = ProfilerUnsafeUtility_CreateMarker_m419027084C68545B765B9345949D8BFCB96C51AD(L_0, (uint16_t)1, 0, 0, /*hidden argument*/NULL);
		__this->set_m_Ptr_0((intptr_t)L_1);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Children__ctor_mF7F91EF7713B066A283AB0E81E975FCF2A9BF1EB_inline (Children_t22E7C284A8562300D30C3F11E2C477C8ECEF77D6 * __this, Enumerator_tCBD2A52574F899C4C90698BB0A64BD8557E28A1A  ___iter0, const RuntimeMethod* method)
{
	{
		// _iter = iter;
		Enumerator_tCBD2A52574F899C4C90698BB0A64BD8557E28A1A  L_0 = ___iter0;
		__this->set__iter_0(L_0);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LogEventDataU5BU5D_t297A076CEB7438F3BBF18FEC1A58490451063CCC* Array_Empty_TisLogEventData_t13585C99A55DB1722FFE891AD83B6D8EFAE593A1_mEA601FE4948CE7C3CB43DEE7E3C25B0251160182_gshared_inline (const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		LogEventDataU5BU5D_t297A076CEB7438F3BBF18FEC1A58490451063CCC* L_0 = ((EmptyArray_1_t86B48FB94301ACEC404B9050083935C880655690_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Value_0();
		return (LogEventDataU5BU5D_t297A076CEB7438F3BBF18FEC1A58490451063CCC*)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Enumerator_get_Current_m494B18CB859AAD5742046CA5CDC9118C911C9A38_gshared_inline (Enumerator_tCBD2A52574F899C4C90698BB0A64BD8557E28A1A * __this, const RuntimeMethod* method)
{
	{
		// public TValue Current => value;
		int32_t L_0 = (int32_t)__this->get_value_3();
		return (int32_t)L_0;
	}
}
