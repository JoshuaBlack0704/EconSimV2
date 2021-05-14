#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R, typename T1, typename T2>
struct VirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct VirtFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct VirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct VirtActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct VirtFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct VirtFuncInvoker5
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct GenericVirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct GenericVirtFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct GenericVirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct GenericVirtActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct GenericVirtFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct GenericVirtFuncInvoker5
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InterfaceActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InterfaceFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct InterfaceFuncInvoker5
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
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
template <typename R, typename T1, typename T2>
struct GenericInterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct GenericInterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct GenericInterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct GenericInterfaceActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct GenericInterfaceFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct GenericInterfaceFuncInvoker5
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};

// System.Action`1<System.Boolean>
struct Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83;
// System.Action`1<UnityEngine.Camera>
struct Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B;
// System.Action`1<UnityEngine.Font>
struct Action_1_tC07E78969BFFC97261F80F4C08915A046DFDD9C7;
// System.Action`1<System.IntPtr>
struct Action_1_t35A46FAEE6B0A26D311444DF75B6EAFC59EBD914;
// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t52B1AC8D9E5E1ED28DF6C46A37C9A1B00B394F9D;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Yoga.YogaNode>
struct IEnumerable_1_t2D7047B39A20CA3C020E30F2F8E888F56D9FBD61;
// System.Collections.Generic.IEnumerator`1<UnityEngine.Yoga.YogaNode>
struct IEnumerator_1_t9E261FB0B46CAF38E2418ACF956B7E8CC71F488E;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<UnityEngine.Yoga.YogaNode>
struct List_1_t5FEBCBE5E15CEDF8B8CBA2B1C4F123E01DDE02C8;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// UnityEngine.Rendering.VertexAttributeDescriptor[]
struct VertexAttributeDescriptorU5BU5D_tD5E8E25AC5B9F233FDC5658F2C11FB7412BBDBFF;
// UnityEngine.Yoga.YogaNode[]
struct YogaNodeU5BU5D_t60B6071B5E9D9765238F08B5673D6A48273769E1;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.Yoga.BaselineFunction
struct BaselineFunction_t7C180BD26F5C8850EEDDBEC2471D9A466EF0D24A;
// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// UnityEngine.Font
struct Font_tB53D3F362CB1A0B92307B362826F212AE2D2A6A9;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// System.InvalidOperationException
struct InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB;
// UnityEngine.Yoga.Logger
struct Logger_t4B20A24F23C7E3ACC57738D5E2C325474762C5D2;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// UnityEngine.MaterialPropertyBlock
struct MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0;
// UnityEngine.Yoga.MeasureFunction
struct MeasureFunction_tBD19E8A44621B4D553785068ECCF0439CD9666C6;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.String
struct String_t;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// System.WeakReference
struct WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76;
// UnityEngine.Yoga.YogaConfig
struct YogaConfig_tA06BDF520DE54384107CF42E1E9909DB1C28A7E7;
// UnityEngine.Yoga.YogaNode
struct YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D;
// UnityEngine.Font/FontTextureRebuildCallback
struct FontTextureRebuildCallback_tBF11A511EBD8D237A1C5885D460B42A45DDBB2DB;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t35A46FAEE6B0A26D311444DF75B6EAFC59EBD914_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t2D7047B39A20CA3C020E30F2F8E888F56D9FBD61_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t5FEBCBE5E15CEDF8B8CBA2B1C4F123E01DDE02C8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UIElementsRuntimeUtilityNative_tD46E29AA27E608332B332CC105C50AF116363578_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Utility_t6BB300FC47C7086829155B2BFB07A6EA848C621D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* YogaConfig_tA06BDF520DE54384107CF42E1E9909DB1C28A7E7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* YogaLogLevel_t06C7639E4D3A1CF30522D78A3E65C09C4FBF66E7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* YogaMeasureMode_tC1410798E2727CAFC5099EC884C7649A5B4D8DC8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral2EB7EACAE6B3BFBFD70862A8840592343396CF46;
IL2CPP_EXTERN_C String_t* _stringLiteral3E4595538801AB36CCD7E4EFDA9DD0272DEA19EF;
IL2CPP_EXTERN_C String_t* _stringLiteral52BC61F0345FADE03AB730C8F5BC70C5256D169E;
IL2CPP_EXTERN_C String_t* _stringLiteral67BE3EF2BBE376CBFE6CC45672B2C7742A3C2520;
IL2CPP_EXTERN_C String_t* _stringLiteral807D31E7D618CFE25644A0B838EBD88C978E78F1;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_mD46448B64FD6241AEBDC58583AABC7AB91A9B136_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_mEAB37079EB59D19D569529B0C5353085E6B5BFA5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Empty_TisYogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6_mB7295609BAE35EB4ACD394AC2745CB40A6633E09_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Insert_mCEFB978F7C64D2B3B412873D1ADA2B21FB5DD060_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_m4BE1835EE87937A24899808F207D4BE7C945085B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m165D313F7B61944C91EE854A3495CE48FC035A82_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m522E99226B0A21F41CA6CE5C283393A0B00565E1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m23719BFAA5CDAE8A711BF7795DD65E7ADECCC617_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArrayUnsafeUtility_GetUnsafePtr_TisTextVertex_t4993EB0C6C0D22422A68B1FA043B800D94C735B3_m4057325E5816B5BD009A38797B41AE89F1B1BA52_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1__ctor_m101008BFDB4E901343E8DA4F0969383ECDB0C1BE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnsafeUtility_SizeOf_TisTextVertex_t4993EB0C6C0D22422A68B1FA043B800D94C735B3_m24EBF391516080B8B4E4C5992337FAF271E51526_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* YogaConfig__ctor_mF223298368491BAAD47A029E58078455A4D17985_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* YogaNode_BaselineInternal_m0C45C415286A4FEA8E9C38A57B45B431FC6104BF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* YogaNode_MeasureInternal_mBB3AB5E64B70DD0BAFE665CEB264316F960E0BE8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* YogaNode__ctor_mBEF535DC862A4A1AF5501335E64584910F9188DF_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct VertexAttributeDescriptorU5BU5D_tD5E8E25AC5B9F233FDC5658F2C11FB7412BBDBFF;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t7D18733187A931E9811113AAEA88D52F26128295 
{
public:

public:
};


// System.Object


// System.Linq.EmptyEnumerable`1<System.Object>
struct EmptyEnumerable_1_tB6A330001520792410A46A172F103A91B1608883  : public RuntimeObject
{
public:

public:
};

struct EmptyEnumerable_1_tB6A330001520792410A46A172F103A91B1608883_StaticFields
{
public:
	// TElement[] System.Linq.EmptyEnumerable`1::Instance
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(EmptyEnumerable_1_tB6A330001520792410A46A172F103A91B1608883_StaticFields, ___Instance_0)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_Instance_0() const { return ___Instance_0; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____items_1)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Yoga.YogaNode>
struct List_1_t5FEBCBE5E15CEDF8B8CBA2B1C4F123E01DDE02C8  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	YogaNodeU5BU5D_t60B6071B5E9D9765238F08B5673D6A48273769E1* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t5FEBCBE5E15CEDF8B8CBA2B1C4F123E01DDE02C8, ____items_1)); }
	inline YogaNodeU5BU5D_t60B6071B5E9D9765238F08B5673D6A48273769E1* get__items_1() const { return ____items_1; }
	inline YogaNodeU5BU5D_t60B6071B5E9D9765238F08B5673D6A48273769E1** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(YogaNodeU5BU5D_t60B6071B5E9D9765238F08B5673D6A48273769E1* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t5FEBCBE5E15CEDF8B8CBA2B1C4F123E01DDE02C8, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t5FEBCBE5E15CEDF8B8CBA2B1C4F123E01DDE02C8, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t5FEBCBE5E15CEDF8B8CBA2B1C4F123E01DDE02C8, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t5FEBCBE5E15CEDF8B8CBA2B1C4F123E01DDE02C8_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	YogaNodeU5BU5D_t60B6071B5E9D9765238F08B5673D6A48273769E1* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t5FEBCBE5E15CEDF8B8CBA2B1C4F123E01DDE02C8_StaticFields, ____emptyArray_5)); }
	inline YogaNodeU5BU5D_t60B6071B5E9D9765238F08B5673D6A48273769E1* get__emptyArray_5() const { return ____emptyArray_5; }
	inline YogaNodeU5BU5D_t60B6071B5E9D9765238F08B5673D6A48273769E1** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(YogaNodeU5BU5D_t60B6071B5E9D9765238F08B5673D6A48273769E1* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// UnityEngine.Yoga.MeasureOutput
struct MeasureOutput_t42F09B441A88CBDC1B9621BF93F8C269FA602882  : public RuntimeObject
{
public:

public:
};


// UnityEngine.Yoga.Native
struct Native_tFAF7EACFD900864BAD8C4F8341331AA9D5B1D476  : public RuntimeObject
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


// UnityEngine.UIElements.TextNative
struct TextNative_tA0095AAB828A5B891DF4201F2E09DE96AE2758C8  : public RuntimeObject
{
public:

public:
};


// UnityEngine.UIElements.UIElementsRuntimeUtilityNative
struct UIElementsRuntimeUtilityNative_tD46E29AA27E608332B332CC105C50AF116363578  : public RuntimeObject
{
public:

public:
};

struct UIElementsRuntimeUtilityNative_tD46E29AA27E608332B332CC105C50AF116363578_StaticFields
{
public:
	// System.Action UnityEngine.UIElements.UIElementsRuntimeUtilityNative::RepaintOverlayPanelsCallback
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___RepaintOverlayPanelsCallback_0;
	// System.Action UnityEngine.UIElements.UIElementsRuntimeUtilityNative::UpdateRuntimePanelsCallback
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___UpdateRuntimePanelsCallback_1;

public:
	inline static int32_t get_offset_of_RepaintOverlayPanelsCallback_0() { return static_cast<int32_t>(offsetof(UIElementsRuntimeUtilityNative_tD46E29AA27E608332B332CC105C50AF116363578_StaticFields, ___RepaintOverlayPanelsCallback_0)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_RepaintOverlayPanelsCallback_0() const { return ___RepaintOverlayPanelsCallback_0; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_RepaintOverlayPanelsCallback_0() { return &___RepaintOverlayPanelsCallback_0; }
	inline void set_RepaintOverlayPanelsCallback_0(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___RepaintOverlayPanelsCallback_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RepaintOverlayPanelsCallback_0), (void*)value);
	}

	inline static int32_t get_offset_of_UpdateRuntimePanelsCallback_1() { return static_cast<int32_t>(offsetof(UIElementsRuntimeUtilityNative_tD46E29AA27E608332B332CC105C50AF116363578_StaticFields, ___UpdateRuntimePanelsCallback_1)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_UpdateRuntimePanelsCallback_1() const { return ___UpdateRuntimePanelsCallback_1; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_UpdateRuntimePanelsCallback_1() { return &___UpdateRuntimePanelsCallback_1; }
	inline void set_UpdateRuntimePanelsCallback_1(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___UpdateRuntimePanelsCallback_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UpdateRuntimePanelsCallback_1), (void*)value);
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

// UnityEngine.Yoga.YogaConstants
struct YogaConstants_tA26C6892CD5423C2E8AB93C8931EB3C078E9DAD9  : public RuntimeObject
{
public:

public:
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


// UnityEngine.Color
struct Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// UnityEngine.Color32
struct Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D 
{
public:
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

public:
	inline static int32_t get_offset_of_rgba_0() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___rgba_0)); }
	inline int32_t get_rgba_0() const { return ___rgba_0; }
	inline int32_t* get_address_of_rgba_0() { return &___rgba_0; }
	inline void set_rgba_0(int32_t value)
	{
		___rgba_0 = value;
	}

	inline static int32_t get_offset_of_r_1() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___r_1)); }
	inline uint8_t get_r_1() const { return ___r_1; }
	inline uint8_t* get_address_of_r_1() { return &___r_1; }
	inline void set_r_1(uint8_t value)
	{
		___r_1 = value;
	}

	inline static int32_t get_offset_of_g_2() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___g_2)); }
	inline uint8_t get_g_2() const { return ___g_2; }
	inline uint8_t* get_address_of_g_2() { return &___g_2; }
	inline void set_g_2(uint8_t value)
	{
		___g_2 = value;
	}

	inline static int32_t get_offset_of_b_3() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___b_3)); }
	inline uint8_t get_b_3() const { return ___b_3; }
	inline uint8_t* get_address_of_b_3() { return &___b_3; }
	inline void set_b_3(uint8_t value)
	{
		___b_3 = value;
	}

	inline static int32_t get_offset_of_a_4() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___a_4)); }
	inline uint8_t get_a_4() const { return ___a_4; }
	inline uint8_t* get_address_of_a_4() { return &___a_4; }
	inline void set_a_4(uint8_t value)
	{
		___a_4 = value;
	}
};


// UnityEngine.UIElements.UIR.DrawBufferRange
struct DrawBufferRange_t64390B1C102E890C49EC204E6E25A2D3E2D6ED3A 
{
public:
	// System.Int32 UnityEngine.UIElements.UIR.DrawBufferRange::firstIndex
	int32_t ___firstIndex_0;
	// System.Int32 UnityEngine.UIElements.UIR.DrawBufferRange::indexCount
	int32_t ___indexCount_1;
	// System.Int32 UnityEngine.UIElements.UIR.DrawBufferRange::minIndexVal
	int32_t ___minIndexVal_2;
	// System.Int32 UnityEngine.UIElements.UIR.DrawBufferRange::vertsReferenced
	int32_t ___vertsReferenced_3;

public:
	inline static int32_t get_offset_of_firstIndex_0() { return static_cast<int32_t>(offsetof(DrawBufferRange_t64390B1C102E890C49EC204E6E25A2D3E2D6ED3A, ___firstIndex_0)); }
	inline int32_t get_firstIndex_0() const { return ___firstIndex_0; }
	inline int32_t* get_address_of_firstIndex_0() { return &___firstIndex_0; }
	inline void set_firstIndex_0(int32_t value)
	{
		___firstIndex_0 = value;
	}

	inline static int32_t get_offset_of_indexCount_1() { return static_cast<int32_t>(offsetof(DrawBufferRange_t64390B1C102E890C49EC204E6E25A2D3E2D6ED3A, ___indexCount_1)); }
	inline int32_t get_indexCount_1() const { return ___indexCount_1; }
	inline int32_t* get_address_of_indexCount_1() { return &___indexCount_1; }
	inline void set_indexCount_1(int32_t value)
	{
		___indexCount_1 = value;
	}

	inline static int32_t get_offset_of_minIndexVal_2() { return static_cast<int32_t>(offsetof(DrawBufferRange_t64390B1C102E890C49EC204E6E25A2D3E2D6ED3A, ___minIndexVal_2)); }
	inline int32_t get_minIndexVal_2() const { return ___minIndexVal_2; }
	inline int32_t* get_address_of_minIndexVal_2() { return &___minIndexVal_2; }
	inline void set_minIndexVal_2(int32_t value)
	{
		___minIndexVal_2 = value;
	}

	inline static int32_t get_offset_of_vertsReferenced_3() { return static_cast<int32_t>(offsetof(DrawBufferRange_t64390B1C102E890C49EC204E6E25A2D3E2D6ED3A, ___vertsReferenced_3)); }
	inline int32_t get_vertsReferenced_3() const { return ___vertsReferenced_3; }
	inline int32_t* get_address_of_vertsReferenced_3() { return &___vertsReferenced_3; }
	inline void set_vertsReferenced_3(int32_t value)
	{
		___vertsReferenced_3 = value;
	}
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

// System.Runtime.InteropServices.GCHandle
struct GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 
{
public:
	// System.Int32 System.Runtime.InteropServices.GCHandle::handle
	int32_t ___handle_0;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603, ___handle_0)); }
	inline int32_t get_handle_0() const { return ___handle_0; }
	inline int32_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(int32_t value)
	{
		___handle_0 = value;
	}
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


// UnityEngine.Matrix4x4
struct Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 
{
public:
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

public:
	inline static int32_t get_offset_of_m00_0() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m00_0)); }
	inline float get_m00_0() const { return ___m00_0; }
	inline float* get_address_of_m00_0() { return &___m00_0; }
	inline void set_m00_0(float value)
	{
		___m00_0 = value;
	}

	inline static int32_t get_offset_of_m10_1() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m10_1)); }
	inline float get_m10_1() const { return ___m10_1; }
	inline float* get_address_of_m10_1() { return &___m10_1; }
	inline void set_m10_1(float value)
	{
		___m10_1 = value;
	}

	inline static int32_t get_offset_of_m20_2() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m20_2)); }
	inline float get_m20_2() const { return ___m20_2; }
	inline float* get_address_of_m20_2() { return &___m20_2; }
	inline void set_m20_2(float value)
	{
		___m20_2 = value;
	}

	inline static int32_t get_offset_of_m30_3() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m30_3)); }
	inline float get_m30_3() const { return ___m30_3; }
	inline float* get_address_of_m30_3() { return &___m30_3; }
	inline void set_m30_3(float value)
	{
		___m30_3 = value;
	}

	inline static int32_t get_offset_of_m01_4() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m01_4)); }
	inline float get_m01_4() const { return ___m01_4; }
	inline float* get_address_of_m01_4() { return &___m01_4; }
	inline void set_m01_4(float value)
	{
		___m01_4 = value;
	}

	inline static int32_t get_offset_of_m11_5() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m11_5)); }
	inline float get_m11_5() const { return ___m11_5; }
	inline float* get_address_of_m11_5() { return &___m11_5; }
	inline void set_m11_5(float value)
	{
		___m11_5 = value;
	}

	inline static int32_t get_offset_of_m21_6() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m21_6)); }
	inline float get_m21_6() const { return ___m21_6; }
	inline float* get_address_of_m21_6() { return &___m21_6; }
	inline void set_m21_6(float value)
	{
		___m21_6 = value;
	}

	inline static int32_t get_offset_of_m31_7() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m31_7)); }
	inline float get_m31_7() const { return ___m31_7; }
	inline float* get_address_of_m31_7() { return &___m31_7; }
	inline void set_m31_7(float value)
	{
		___m31_7 = value;
	}

	inline static int32_t get_offset_of_m02_8() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m02_8)); }
	inline float get_m02_8() const { return ___m02_8; }
	inline float* get_address_of_m02_8() { return &___m02_8; }
	inline void set_m02_8(float value)
	{
		___m02_8 = value;
	}

	inline static int32_t get_offset_of_m12_9() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m12_9)); }
	inline float get_m12_9() const { return ___m12_9; }
	inline float* get_address_of_m12_9() { return &___m12_9; }
	inline void set_m12_9(float value)
	{
		___m12_9 = value;
	}

	inline static int32_t get_offset_of_m22_10() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m22_10)); }
	inline float get_m22_10() const { return ___m22_10; }
	inline float* get_address_of_m22_10() { return &___m22_10; }
	inline void set_m22_10(float value)
	{
		___m22_10 = value;
	}

	inline static int32_t get_offset_of_m32_11() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m32_11)); }
	inline float get_m32_11() const { return ___m32_11; }
	inline float* get_address_of_m32_11() { return &___m32_11; }
	inline void set_m32_11(float value)
	{
		___m32_11 = value;
	}

	inline static int32_t get_offset_of_m03_12() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m03_12)); }
	inline float get_m03_12() const { return ___m03_12; }
	inline float* get_address_of_m03_12() { return &___m03_12; }
	inline void set_m03_12(float value)
	{
		___m03_12 = value;
	}

	inline static int32_t get_offset_of_m13_13() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m13_13)); }
	inline float get_m13_13() const { return ___m13_13; }
	inline float* get_address_of_m13_13() { return &___m13_13; }
	inline void set_m13_13(float value)
	{
		___m13_13 = value;
	}

	inline static int32_t get_offset_of_m23_14() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m23_14)); }
	inline float get_m23_14() const { return ___m23_14; }
	inline float* get_address_of_m23_14() { return &___m23_14; }
	inline void set_m23_14(float value)
	{
		___m23_14 = value;
	}

	inline static int32_t get_offset_of_m33_15() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m33_15)); }
	inline float get_m33_15() const { return ___m33_15; }
	inline float* get_address_of_m33_15() { return &___m33_15; }
	inline void set_m33_15(float value)
	{
		___m33_15 = value;
	}
};

struct Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_StaticFields
{
public:
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___identityMatrix_17;

public:
	inline static int32_t get_offset_of_zeroMatrix_16() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_StaticFields, ___zeroMatrix_16)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_zeroMatrix_16() const { return ___zeroMatrix_16; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_zeroMatrix_16() { return &___zeroMatrix_16; }
	inline void set_zeroMatrix_16(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___zeroMatrix_16 = value;
	}

	inline static int32_t get_offset_of_identityMatrix_17() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_StaticFields, ___identityMatrix_17)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_identityMatrix_17() const { return ___identityMatrix_17; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_identityMatrix_17() { return &___identityMatrix_17; }
	inline void set_identityMatrix_17(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___identityMatrix_17 = value;
	}
};


// UnityEngine.Rect
struct Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 
{
public:
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;

public:
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
	}
};


// UnityEngine.RectInt
struct RectInt_tE7B8105A280C1AC73A4157ED41F9B86C9BD91E49 
{
public:
	// System.Int32 UnityEngine.RectInt::m_XMin
	int32_t ___m_XMin_0;
	// System.Int32 UnityEngine.RectInt::m_YMin
	int32_t ___m_YMin_1;
	// System.Int32 UnityEngine.RectInt::m_Width
	int32_t ___m_Width_2;
	// System.Int32 UnityEngine.RectInt::m_Height
	int32_t ___m_Height_3;

public:
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(RectInt_tE7B8105A280C1AC73A4157ED41F9B86C9BD91E49, ___m_XMin_0)); }
	inline int32_t get_m_XMin_0() const { return ___m_XMin_0; }
	inline int32_t* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(int32_t value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(RectInt_tE7B8105A280C1AC73A4157ED41F9B86C9BD91E49, ___m_YMin_1)); }
	inline int32_t get_m_YMin_1() const { return ___m_YMin_1; }
	inline int32_t* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(int32_t value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(RectInt_tE7B8105A280C1AC73A4157ED41F9B86C9BD91E49, ___m_Width_2)); }
	inline int32_t get_m_Width_2() const { return ___m_Width_2; }
	inline int32_t* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(int32_t value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(RectInt_tE7B8105A280C1AC73A4157ED41F9B86C9BD91E49, ___m_Height_3)); }
	inline int32_t get_m_Height_3() const { return ___m_Height_3; }
	inline int32_t* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(int32_t value)
	{
		___m_Height_3 = value;
	}
};


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
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


// System.UInt32
struct UInt32_tE60352A06233E4E69DD198BCC67142159F686B15 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};


// System.UInt64
struct UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281 
{
public:
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
	{
		___m_value_0 = value;
	}
};


// System.UIntPtr
struct UIntPtr_t 
{
public:
	// System.Void* System.UIntPtr::_pointer
	void* ____pointer_1;

public:
	inline static int32_t get_offset_of__pointer_1() { return static_cast<int32_t>(offsetof(UIntPtr_t, ____pointer_1)); }
	inline void* get__pointer_1() const { return ____pointer_1; }
	inline void** get_address_of__pointer_1() { return &____pointer_1; }
	inline void set__pointer_1(void* value)
	{
		____pointer_1 = value;
	}
};

struct UIntPtr_t_StaticFields
{
public:
	// System.UIntPtr System.UIntPtr::Zero
	uintptr_t ___Zero_0;

public:
	inline static int32_t get_offset_of_Zero_0() { return static_cast<int32_t>(offsetof(UIntPtr_t_StaticFields, ___Zero_0)); }
	inline uintptr_t get_Zero_0() const { return ___Zero_0; }
	inline uintptr_t* get_address_of_Zero_0() { return &___Zero_0; }
	inline void set_Zero_0(uintptr_t value)
	{
		___Zero_0 = value;
	}
};


// UnityEngine.Vector2
struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
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


// UnityEngine.Yoga.YogaSize
struct YogaSize_tC805BF63DE9A9E4B9984B964AB0A1CFA04ADC1FD 
{
public:
	// System.Single UnityEngine.Yoga.YogaSize::width
	float ___width_0;
	// System.Single UnityEngine.Yoga.YogaSize::height
	float ___height_1;

public:
	inline static int32_t get_offset_of_width_0() { return static_cast<int32_t>(offsetof(YogaSize_tC805BF63DE9A9E4B9984B964AB0A1CFA04ADC1FD, ___width_0)); }
	inline float get_width_0() const { return ___width_0; }
	inline float* get_address_of_width_0() { return &___width_0; }
	inline void set_width_0(float value)
	{
		___width_0 = value;
	}

	inline static int32_t get_offset_of_height_1() { return static_cast<int32_t>(offsetof(YogaSize_tC805BF63DE9A9E4B9984B964AB0A1CFA04ADC1FD, ___height_1)); }
	inline float get_height_1() const { return ___height_1; }
	inline float* get_address_of_height_1() { return &___height_1; }
	inline void set_height_1(float value)
	{
		___height_1 = value;
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


// UnityEngine.Bounds
struct Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 
{
public:
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Extents_1;

public:
	inline static int32_t get_offset_of_m_Center_0() { return static_cast<int32_t>(offsetof(Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37, ___m_Center_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Center_0() const { return ___m_Center_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Center_0() { return &___m_Center_0; }
	inline void set_m_Center_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Center_0 = value;
	}

	inline static int32_t get_offset_of_m_Extents_1() { return static_cast<int32_t>(offsetof(Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37, ___m_Extents_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Extents_1() const { return ___m_Extents_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Extents_1() { return &___m_Extents_1; }
	inline void set_m_Extents_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Extents_1 = value;
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

// UnityEngine.FontStyle
struct FontStyle_t98609253DA79E5B3198BD60AD3518C5B6A2DCF96 
{
public:
	// System.Int32 UnityEngine.FontStyle::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FontStyle_t98609253DA79E5B3198BD60AD3518C5B6A2DCF96, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UIElements.UIR.GfxUpdateBufferRange
struct GfxUpdateBufferRange_t11F569267024B2295C7F30C6E951754053C03D66 
{
public:
	// System.UInt32 UnityEngine.UIElements.UIR.GfxUpdateBufferRange::offsetFromWriteStart
	uint32_t ___offsetFromWriteStart_0;
	// System.UInt32 UnityEngine.UIElements.UIR.GfxUpdateBufferRange::size
	uint32_t ___size_1;
	// System.UIntPtr UnityEngine.UIElements.UIR.GfxUpdateBufferRange::source
	uintptr_t ___source_2;

public:
	inline static int32_t get_offset_of_offsetFromWriteStart_0() { return static_cast<int32_t>(offsetof(GfxUpdateBufferRange_t11F569267024B2295C7F30C6E951754053C03D66, ___offsetFromWriteStart_0)); }
	inline uint32_t get_offsetFromWriteStart_0() const { return ___offsetFromWriteStart_0; }
	inline uint32_t* get_address_of_offsetFromWriteStart_0() { return &___offsetFromWriteStart_0; }
	inline void set_offsetFromWriteStart_0(uint32_t value)
	{
		___offsetFromWriteStart_0 = value;
	}

	inline static int32_t get_offset_of_size_1() { return static_cast<int32_t>(offsetof(GfxUpdateBufferRange_t11F569267024B2295C7F30C6E951754053C03D66, ___size_1)); }
	inline uint32_t get_size_1() const { return ___size_1; }
	inline uint32_t* get_address_of_size_1() { return &___size_1; }
	inline void set_size_1(uint32_t value)
	{
		___size_1 = value;
	}

	inline static int32_t get_offset_of_source_2() { return static_cast<int32_t>(offsetof(GfxUpdateBufferRange_t11F569267024B2295C7F30C6E951754053C03D66, ___source_2)); }
	inline uintptr_t get_source_2() const { return ___source_2; }
	inline uintptr_t* get_address_of_source_2() { return &___source_2; }
	inline void set_source_2(uintptr_t value)
	{
		___source_2 = value;
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


// UnityEngine.MaterialPropertyBlock
struct MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.MaterialPropertyBlock::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};


// Unity.Collections.NativeArrayOptions
struct NativeArrayOptions_t181E2A9B49F6D62868DE6428E4CDF148AEF558E3 
{
public:
	// System.Int32 Unity.Collections.NativeArrayOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NativeArrayOptions_t181E2A9B49F6D62868DE6428E4CDF148AEF558E3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
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


// UnityEngine.TextAnchor
struct TextAnchor_tA4C88E77C2D7312F43412275B01E1341A7CB2232 
{
public:
	// System.Int32 UnityEngine.TextAnchor::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextAnchor_tA4C88E77C2D7312F43412275B01E1341A7CB2232, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UIElements.TextVertex
struct TextVertex_t4993EB0C6C0D22422A68B1FA043B800D94C735B3 
{
public:
	// UnityEngine.Vector3 UnityEngine.UIElements.TextVertex::position
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position_0;
	// UnityEngine.Color32 UnityEngine.UIElements.TextVertex::color
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___color_1;
	// UnityEngine.Vector2 UnityEngine.UIElements.TextVertex::uv0
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___uv0_2;

public:
	inline static int32_t get_offset_of_position_0() { return static_cast<int32_t>(offsetof(TextVertex_t4993EB0C6C0D22422A68B1FA043B800D94C735B3, ___position_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_position_0() const { return ___position_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_position_0() { return &___position_0; }
	inline void set_position_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___position_0 = value;
	}

	inline static int32_t get_offset_of_color_1() { return static_cast<int32_t>(offsetof(TextVertex_t4993EB0C6C0D22422A68B1FA043B800D94C735B3, ___color_1)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_color_1() const { return ___color_1; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_color_1() { return &___color_1; }
	inline void set_color_1(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___color_1 = value;
	}

	inline static int32_t get_offset_of_uv0_2() { return static_cast<int32_t>(offsetof(TextVertex_t4993EB0C6C0D22422A68B1FA043B800D94C735B3, ___uv0_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_uv0_2() const { return ___uv0_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_uv0_2() { return &___uv0_2; }
	inline void set_uv0_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___uv0_2 = value;
	}
};


// UnityEngine.Rendering.VertexAttribute
struct VertexAttribute_t9B763063E3B1705070D4DB8BC32F21F0FB30867C 
{
public:
	// System.Int32 UnityEngine.Rendering.VertexAttribute::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VertexAttribute_t9B763063E3B1705070D4DB8BC32F21F0FB30867C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Rendering.VertexAttributeFormat
struct VertexAttributeFormat_tE5FC93A96237AAF63142B0E521925CAE4F283485 
{
public:
	// System.Int32 UnityEngine.Rendering.VertexAttributeFormat::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VertexAttributeFormat_tE5FC93A96237AAF63142B0E521925CAE4F283485, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.WeakReference
struct WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76  : public RuntimeObject
{
public:
	// System.Boolean System.WeakReference::isLongReference
	bool ___isLongReference_0;
	// System.Runtime.InteropServices.GCHandle System.WeakReference::gcHandle
	GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  ___gcHandle_1;

public:
	inline static int32_t get_offset_of_isLongReference_0() { return static_cast<int32_t>(offsetof(WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76, ___isLongReference_0)); }
	inline bool get_isLongReference_0() const { return ___isLongReference_0; }
	inline bool* get_address_of_isLongReference_0() { return &___isLongReference_0; }
	inline void set_isLongReference_0(bool value)
	{
		___isLongReference_0 = value;
	}

	inline static int32_t get_offset_of_gcHandle_1() { return static_cast<int32_t>(offsetof(WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76, ___gcHandle_1)); }
	inline GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  get_gcHandle_1() const { return ___gcHandle_1; }
	inline GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 * get_address_of_gcHandle_1() { return &___gcHandle_1; }
	inline void set_gcHandle_1(GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  value)
	{
		___gcHandle_1 = value;
	}
};


// UnityEngine.Yoga.YogaAlign
struct YogaAlign_t492448AAD39D37F9D061967E5493A1DBA224CEFF 
{
public:
	// System.Int32 UnityEngine.Yoga.YogaAlign::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(YogaAlign_t492448AAD39D37F9D061967E5493A1DBA224CEFF, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Yoga.YogaConfig
struct YogaConfig_tA06BDF520DE54384107CF42E1E9909DB1C28A7E7  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Yoga.YogaConfig::_ygConfig
	intptr_t ____ygConfig_1;
	// UnityEngine.Yoga.Logger UnityEngine.Yoga.YogaConfig::_logger
	Logger_t4B20A24F23C7E3ACC57738D5E2C325474762C5D2 * ____logger_2;

public:
	inline static int32_t get_offset_of__ygConfig_1() { return static_cast<int32_t>(offsetof(YogaConfig_tA06BDF520DE54384107CF42E1E9909DB1C28A7E7, ____ygConfig_1)); }
	inline intptr_t get__ygConfig_1() const { return ____ygConfig_1; }
	inline intptr_t* get_address_of__ygConfig_1() { return &____ygConfig_1; }
	inline void set__ygConfig_1(intptr_t value)
	{
		____ygConfig_1 = value;
	}

	inline static int32_t get_offset_of__logger_2() { return static_cast<int32_t>(offsetof(YogaConfig_tA06BDF520DE54384107CF42E1E9909DB1C28A7E7, ____logger_2)); }
	inline Logger_t4B20A24F23C7E3ACC57738D5E2C325474762C5D2 * get__logger_2() const { return ____logger_2; }
	inline Logger_t4B20A24F23C7E3ACC57738D5E2C325474762C5D2 ** get_address_of__logger_2() { return &____logger_2; }
	inline void set__logger_2(Logger_t4B20A24F23C7E3ACC57738D5E2C325474762C5D2 * value)
	{
		____logger_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____logger_2), (void*)value);
	}
};

struct YogaConfig_tA06BDF520DE54384107CF42E1E9909DB1C28A7E7_StaticFields
{
public:
	// UnityEngine.Yoga.YogaConfig UnityEngine.Yoga.YogaConfig::Default
	YogaConfig_tA06BDF520DE54384107CF42E1E9909DB1C28A7E7 * ___Default_0;

public:
	inline static int32_t get_offset_of_Default_0() { return static_cast<int32_t>(offsetof(YogaConfig_tA06BDF520DE54384107CF42E1E9909DB1C28A7E7_StaticFields, ___Default_0)); }
	inline YogaConfig_tA06BDF520DE54384107CF42E1E9909DB1C28A7E7 * get_Default_0() const { return ___Default_0; }
	inline YogaConfig_tA06BDF520DE54384107CF42E1E9909DB1C28A7E7 ** get_address_of_Default_0() { return &___Default_0; }
	inline void set_Default_0(YogaConfig_tA06BDF520DE54384107CF42E1E9909DB1C28A7E7 * value)
	{
		___Default_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Default_0), (void*)value);
	}
};


// UnityEngine.Yoga.YogaDirection
struct YogaDirection_tF819B9CE56C3BD55153F0FBD278E55D5FEB7079B 
{
public:
	// System.Int32 UnityEngine.Yoga.YogaDirection::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(YogaDirection_tF819B9CE56C3BD55153F0FBD278E55D5FEB7079B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Yoga.YogaDisplay
struct YogaDisplay_t8335E2F4F621C2ABBBAD1839D03FB9FA6B1E56FD 
{
public:
	// System.Int32 UnityEngine.Yoga.YogaDisplay::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(YogaDisplay_t8335E2F4F621C2ABBBAD1839D03FB9FA6B1E56FD, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Yoga.YogaEdge
struct YogaEdge_t5CF683D9A96DB5A9C20D24F4F47320D68097C624 
{
public:
	// System.Int32 UnityEngine.Yoga.YogaEdge::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(YogaEdge_t5CF683D9A96DB5A9C20D24F4F47320D68097C624, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Yoga.YogaFlexDirection
struct YogaFlexDirection_tB9A66F29473C1ADB22611BD5E13BDF6BDD9BD4DF 
{
public:
	// System.Int32 UnityEngine.Yoga.YogaFlexDirection::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(YogaFlexDirection_tB9A66F29473C1ADB22611BD5E13BDF6BDD9BD4DF, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Yoga.YogaJustify
struct YogaJustify_t24745696EE7E190DE8F2EAC7FDC0E5EED4430F6A 
{
public:
	// System.Int32 UnityEngine.Yoga.YogaJustify::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(YogaJustify_t24745696EE7E190DE8F2EAC7FDC0E5EED4430F6A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Yoga.YogaLogLevel
struct YogaLogLevel_t06C7639E4D3A1CF30522D78A3E65C09C4FBF66E7 
{
public:
	// System.Int32 UnityEngine.Yoga.YogaLogLevel::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(YogaLogLevel_t06C7639E4D3A1CF30522D78A3E65C09C4FBF66E7, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Yoga.YogaMeasureMode
struct YogaMeasureMode_tC1410798E2727CAFC5099EC884C7649A5B4D8DC8 
{
public:
	// System.Int32 UnityEngine.Yoga.YogaMeasureMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(YogaMeasureMode_tC1410798E2727CAFC5099EC884C7649A5B4D8DC8, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Yoga.YogaNode
struct YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Yoga.YogaNode::_ygNode
	intptr_t ____ygNode_0;
	// UnityEngine.Yoga.YogaConfig UnityEngine.Yoga.YogaNode::_config
	YogaConfig_tA06BDF520DE54384107CF42E1E9909DB1C28A7E7 * ____config_1;
	// System.WeakReference UnityEngine.Yoga.YogaNode::_parent
	WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * ____parent_2;
	// System.Collections.Generic.List`1<UnityEngine.Yoga.YogaNode> UnityEngine.Yoga.YogaNode::_children
	List_1_t5FEBCBE5E15CEDF8B8CBA2B1C4F123E01DDE02C8 * ____children_3;
	// UnityEngine.Yoga.MeasureFunction UnityEngine.Yoga.YogaNode::_measureFunction
	MeasureFunction_tBD19E8A44621B4D553785068ECCF0439CD9666C6 * ____measureFunction_4;
	// UnityEngine.Yoga.BaselineFunction UnityEngine.Yoga.YogaNode::_baselineFunction
	BaselineFunction_t7C180BD26F5C8850EEDDBEC2471D9A466EF0D24A * ____baselineFunction_5;
	// System.Object UnityEngine.Yoga.YogaNode::_data
	RuntimeObject * ____data_6;

public:
	inline static int32_t get_offset_of__ygNode_0() { return static_cast<int32_t>(offsetof(YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6, ____ygNode_0)); }
	inline intptr_t get__ygNode_0() const { return ____ygNode_0; }
	inline intptr_t* get_address_of__ygNode_0() { return &____ygNode_0; }
	inline void set__ygNode_0(intptr_t value)
	{
		____ygNode_0 = value;
	}

	inline static int32_t get_offset_of__config_1() { return static_cast<int32_t>(offsetof(YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6, ____config_1)); }
	inline YogaConfig_tA06BDF520DE54384107CF42E1E9909DB1C28A7E7 * get__config_1() const { return ____config_1; }
	inline YogaConfig_tA06BDF520DE54384107CF42E1E9909DB1C28A7E7 ** get_address_of__config_1() { return &____config_1; }
	inline void set__config_1(YogaConfig_tA06BDF520DE54384107CF42E1E9909DB1C28A7E7 * value)
	{
		____config_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____config_1), (void*)value);
	}

	inline static int32_t get_offset_of__parent_2() { return static_cast<int32_t>(offsetof(YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6, ____parent_2)); }
	inline WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * get__parent_2() const { return ____parent_2; }
	inline WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 ** get_address_of__parent_2() { return &____parent_2; }
	inline void set__parent_2(WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * value)
	{
		____parent_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____parent_2), (void*)value);
	}

	inline static int32_t get_offset_of__children_3() { return static_cast<int32_t>(offsetof(YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6, ____children_3)); }
	inline List_1_t5FEBCBE5E15CEDF8B8CBA2B1C4F123E01DDE02C8 * get__children_3() const { return ____children_3; }
	inline List_1_t5FEBCBE5E15CEDF8B8CBA2B1C4F123E01DDE02C8 ** get_address_of__children_3() { return &____children_3; }
	inline void set__children_3(List_1_t5FEBCBE5E15CEDF8B8CBA2B1C4F123E01DDE02C8 * value)
	{
		____children_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____children_3), (void*)value);
	}

	inline static int32_t get_offset_of__measureFunction_4() { return static_cast<int32_t>(offsetof(YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6, ____measureFunction_4)); }
	inline MeasureFunction_tBD19E8A44621B4D553785068ECCF0439CD9666C6 * get__measureFunction_4() const { return ____measureFunction_4; }
	inline MeasureFunction_tBD19E8A44621B4D553785068ECCF0439CD9666C6 ** get_address_of__measureFunction_4() { return &____measureFunction_4; }
	inline void set__measureFunction_4(MeasureFunction_tBD19E8A44621B4D553785068ECCF0439CD9666C6 * value)
	{
		____measureFunction_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____measureFunction_4), (void*)value);
	}

	inline static int32_t get_offset_of__baselineFunction_5() { return static_cast<int32_t>(offsetof(YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6, ____baselineFunction_5)); }
	inline BaselineFunction_t7C180BD26F5C8850EEDDBEC2471D9A466EF0D24A * get__baselineFunction_5() const { return ____baselineFunction_5; }
	inline BaselineFunction_t7C180BD26F5C8850EEDDBEC2471D9A466EF0D24A ** get_address_of__baselineFunction_5() { return &____baselineFunction_5; }
	inline void set__baselineFunction_5(BaselineFunction_t7C180BD26F5C8850EEDDBEC2471D9A466EF0D24A * value)
	{
		____baselineFunction_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____baselineFunction_5), (void*)value);
	}

	inline static int32_t get_offset_of__data_6() { return static_cast<int32_t>(offsetof(YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6, ____data_6)); }
	inline RuntimeObject * get__data_6() const { return ____data_6; }
	inline RuntimeObject ** get_address_of__data_6() { return &____data_6; }
	inline void set__data_6(RuntimeObject * value)
	{
		____data_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_6), (void*)value);
	}
};


// UnityEngine.Yoga.YogaOverflow
struct YogaOverflow_t0C71950207F00A484DE79E07B903A681BAD49473 
{
public:
	// System.Int32 UnityEngine.Yoga.YogaOverflow::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(YogaOverflow_t0C71950207F00A484DE79E07B903A681BAD49473, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Yoga.YogaPositionType
struct YogaPositionType_t9D73349C479537BD9B2D73E2F5924D391A12FCEA 
{
public:
	// System.Int32 UnityEngine.Yoga.YogaPositionType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(YogaPositionType_t9D73349C479537BD9B2D73E2F5924D391A12FCEA, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Yoga.YogaUnit
struct YogaUnit_t542EBDB4107B4451C0485143935191AA9E2C5985 
{
public:
	// System.Int32 UnityEngine.Yoga.YogaUnit::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(YogaUnit_t542EBDB4107B4451C0485143935191AA9E2C5985, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Yoga.YogaWrap
struct YogaWrap_t58D174B8331AA7061399D99203F83D942379956E 
{
public:
	// System.Int32 UnityEngine.Yoga.YogaWrap::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(YogaWrap_t58D174B8331AA7061399D99203F83D942379956E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UIElements.UIR.Utility/GPUBufferType
struct GPUBufferType_t2EEC397D18556CC970EA135797D401B8A34F9952 
{
public:
	// System.Int32 UnityEngine.UIElements.UIR.Utility/GPUBufferType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(GPUBufferType_t2EEC397D18556CC970EA135797D401B8A34F9952, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.UIElements.TextVertex>
struct NativeArray_1_tBC4AC2035CCDD9C5FE5733692EB415A4DF3D250C 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_tBC4AC2035CCDD9C5FE5733692EB415A4DF3D250C, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_tBC4AC2035CCDD9C5FE5733692EB415A4DF3D250C, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_tBC4AC2035CCDD9C5FE5733692EB415A4DF3D250C, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Font
struct Font_tB53D3F362CB1A0B92307B362826F212AE2D2A6A9  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:
	// UnityEngine.Font/FontTextureRebuildCallback UnityEngine.Font::m_FontTextureRebuildCallback
	FontTextureRebuildCallback_tBF11A511EBD8D237A1C5885D460B42A45DDBB2DB * ___m_FontTextureRebuildCallback_5;

public:
	inline static int32_t get_offset_of_m_FontTextureRebuildCallback_5() { return static_cast<int32_t>(offsetof(Font_tB53D3F362CB1A0B92307B362826F212AE2D2A6A9, ___m_FontTextureRebuildCallback_5)); }
	inline FontTextureRebuildCallback_tBF11A511EBD8D237A1C5885D460B42A45DDBB2DB * get_m_FontTextureRebuildCallback_5() const { return ___m_FontTextureRebuildCallback_5; }
	inline FontTextureRebuildCallback_tBF11A511EBD8D237A1C5885D460B42A45DDBB2DB ** get_address_of_m_FontTextureRebuildCallback_5() { return &___m_FontTextureRebuildCallback_5; }
	inline void set_m_FontTextureRebuildCallback_5(FontTextureRebuildCallback_tBF11A511EBD8D237A1C5885D460B42A45DDBB2DB * value)
	{
		___m_FontTextureRebuildCallback_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FontTextureRebuildCallback_5), (void*)value);
	}
};

struct Font_tB53D3F362CB1A0B92307B362826F212AE2D2A6A9_StaticFields
{
public:
	// System.Action`1<UnityEngine.Font> UnityEngine.Font::textureRebuilt
	Action_1_tC07E78969BFFC97261F80F4C08915A046DFDD9C7 * ___textureRebuilt_4;

public:
	inline static int32_t get_offset_of_textureRebuilt_4() { return static_cast<int32_t>(offsetof(Font_tB53D3F362CB1A0B92307B362826F212AE2D2A6A9_StaticFields, ___textureRebuilt_4)); }
	inline Action_1_tC07E78969BFFC97261F80F4C08915A046DFDD9C7 * get_textureRebuilt_4() const { return ___textureRebuilt_4; }
	inline Action_1_tC07E78969BFFC97261F80F4C08915A046DFDD9C7 ** get_address_of_textureRebuilt_4() { return &___textureRebuilt_4; }
	inline void set_textureRebuilt_4(Action_1_tC07E78969BFFC97261F80F4C08915A046DFDD9C7 * value)
	{
		___textureRebuilt_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textureRebuilt_4), (void*)value);
	}
};


// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
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


// UnityEngine.UIElements.TextNativeSettings
struct TextNativeSettings_t2C255BA301B06D04235208446E75F9CE0B3A4CE3 
{
public:
	// System.String UnityEngine.UIElements.TextNativeSettings::text
	String_t* ___text_0;
	// UnityEngine.Font UnityEngine.UIElements.TextNativeSettings::font
	Font_tB53D3F362CB1A0B92307B362826F212AE2D2A6A9 * ___font_1;
	// System.Int32 UnityEngine.UIElements.TextNativeSettings::size
	int32_t ___size_2;
	// System.Single UnityEngine.UIElements.TextNativeSettings::scaling
	float ___scaling_3;
	// UnityEngine.FontStyle UnityEngine.UIElements.TextNativeSettings::style
	int32_t ___style_4;
	// UnityEngine.Color UnityEngine.UIElements.TextNativeSettings::color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___color_5;
	// UnityEngine.TextAnchor UnityEngine.UIElements.TextNativeSettings::anchor
	int32_t ___anchor_6;
	// System.Boolean UnityEngine.UIElements.TextNativeSettings::wordWrap
	bool ___wordWrap_7;
	// System.Single UnityEngine.UIElements.TextNativeSettings::wordWrapWidth
	float ___wordWrapWidth_8;
	// System.Boolean UnityEngine.UIElements.TextNativeSettings::richText
	bool ___richText_9;

public:
	inline static int32_t get_offset_of_text_0() { return static_cast<int32_t>(offsetof(TextNativeSettings_t2C255BA301B06D04235208446E75F9CE0B3A4CE3, ___text_0)); }
	inline String_t* get_text_0() const { return ___text_0; }
	inline String_t** get_address_of_text_0() { return &___text_0; }
	inline void set_text_0(String_t* value)
	{
		___text_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___text_0), (void*)value);
	}

	inline static int32_t get_offset_of_font_1() { return static_cast<int32_t>(offsetof(TextNativeSettings_t2C255BA301B06D04235208446E75F9CE0B3A4CE3, ___font_1)); }
	inline Font_tB53D3F362CB1A0B92307B362826F212AE2D2A6A9 * get_font_1() const { return ___font_1; }
	inline Font_tB53D3F362CB1A0B92307B362826F212AE2D2A6A9 ** get_address_of_font_1() { return &___font_1; }
	inline void set_font_1(Font_tB53D3F362CB1A0B92307B362826F212AE2D2A6A9 * value)
	{
		___font_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___font_1), (void*)value);
	}

	inline static int32_t get_offset_of_size_2() { return static_cast<int32_t>(offsetof(TextNativeSettings_t2C255BA301B06D04235208446E75F9CE0B3A4CE3, ___size_2)); }
	inline int32_t get_size_2() const { return ___size_2; }
	inline int32_t* get_address_of_size_2() { return &___size_2; }
	inline void set_size_2(int32_t value)
	{
		___size_2 = value;
	}

	inline static int32_t get_offset_of_scaling_3() { return static_cast<int32_t>(offsetof(TextNativeSettings_t2C255BA301B06D04235208446E75F9CE0B3A4CE3, ___scaling_3)); }
	inline float get_scaling_3() const { return ___scaling_3; }
	inline float* get_address_of_scaling_3() { return &___scaling_3; }
	inline void set_scaling_3(float value)
	{
		___scaling_3 = value;
	}

	inline static int32_t get_offset_of_style_4() { return static_cast<int32_t>(offsetof(TextNativeSettings_t2C255BA301B06D04235208446E75F9CE0B3A4CE3, ___style_4)); }
	inline int32_t get_style_4() const { return ___style_4; }
	inline int32_t* get_address_of_style_4() { return &___style_4; }
	inline void set_style_4(int32_t value)
	{
		___style_4 = value;
	}

	inline static int32_t get_offset_of_color_5() { return static_cast<int32_t>(offsetof(TextNativeSettings_t2C255BA301B06D04235208446E75F9CE0B3A4CE3, ___color_5)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_color_5() const { return ___color_5; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_color_5() { return &___color_5; }
	inline void set_color_5(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___color_5 = value;
	}

	inline static int32_t get_offset_of_anchor_6() { return static_cast<int32_t>(offsetof(TextNativeSettings_t2C255BA301B06D04235208446E75F9CE0B3A4CE3, ___anchor_6)); }
	inline int32_t get_anchor_6() const { return ___anchor_6; }
	inline int32_t* get_address_of_anchor_6() { return &___anchor_6; }
	inline void set_anchor_6(int32_t value)
	{
		___anchor_6 = value;
	}

	inline static int32_t get_offset_of_wordWrap_7() { return static_cast<int32_t>(offsetof(TextNativeSettings_t2C255BA301B06D04235208446E75F9CE0B3A4CE3, ___wordWrap_7)); }
	inline bool get_wordWrap_7() const { return ___wordWrap_7; }
	inline bool* get_address_of_wordWrap_7() { return &___wordWrap_7; }
	inline void set_wordWrap_7(bool value)
	{
		___wordWrap_7 = value;
	}

	inline static int32_t get_offset_of_wordWrapWidth_8() { return static_cast<int32_t>(offsetof(TextNativeSettings_t2C255BA301B06D04235208446E75F9CE0B3A4CE3, ___wordWrapWidth_8)); }
	inline float get_wordWrapWidth_8() const { return ___wordWrapWidth_8; }
	inline float* get_address_of_wordWrapWidth_8() { return &___wordWrapWidth_8; }
	inline void set_wordWrapWidth_8(float value)
	{
		___wordWrapWidth_8 = value;
	}

	inline static int32_t get_offset_of_richText_9() { return static_cast<int32_t>(offsetof(TextNativeSettings_t2C255BA301B06D04235208446E75F9CE0B3A4CE3, ___richText_9)); }
	inline bool get_richText_9() const { return ___richText_9; }
	inline bool* get_address_of_richText_9() { return &___richText_9; }
	inline void set_richText_9(bool value)
	{
		___richText_9 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UIElements.TextNativeSettings
struct TextNativeSettings_t2C255BA301B06D04235208446E75F9CE0B3A4CE3_marshaled_pinvoke
{
	char* ___text_0;
	Font_tB53D3F362CB1A0B92307B362826F212AE2D2A6A9 * ___font_1;
	int32_t ___size_2;
	float ___scaling_3;
	int32_t ___style_4;
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___color_5;
	int32_t ___anchor_6;
	int32_t ___wordWrap_7;
	float ___wordWrapWidth_8;
	int32_t ___richText_9;
};
// Native definition for COM marshalling of UnityEngine.UIElements.TextNativeSettings
struct TextNativeSettings_t2C255BA301B06D04235208446E75F9CE0B3A4CE3_marshaled_com
{
	Il2CppChar* ___text_0;
	Font_tB53D3F362CB1A0B92307B362826F212AE2D2A6A9 * ___font_1;
	int32_t ___size_2;
	float ___scaling_3;
	int32_t ___style_4;
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___color_5;
	int32_t ___anchor_6;
	int32_t ___wordWrap_7;
	float ___wordWrapWidth_8;
	int32_t ___richText_9;
};

// UnityEngine.UIElements.UIR.Utility
struct Utility_t6BB300FC47C7086829155B2BFB07A6EA848C621D  : public RuntimeObject
{
public:

public:
};

struct Utility_t6BB300FC47C7086829155B2BFB07A6EA848C621D_StaticFields
{
public:
	// System.Action`1<System.Boolean> UnityEngine.UIElements.UIR.Utility::GraphicsResourcesRecreate
	Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * ___GraphicsResourcesRecreate_0;
	// System.Action UnityEngine.UIElements.UIR.Utility::EngineUpdate
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___EngineUpdate_1;
	// System.Action UnityEngine.UIElements.UIR.Utility::FlushPendingResources
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___FlushPendingResources_2;
	// System.Action`1<UnityEngine.Camera> UnityEngine.UIElements.UIR.Utility::RegisterIntermediateRenderers
	Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B * ___RegisterIntermediateRenderers_3;
	// System.Action`1<System.IntPtr> UnityEngine.UIElements.UIR.Utility::RenderNodeAdd
	Action_1_t35A46FAEE6B0A26D311444DF75B6EAFC59EBD914 * ___RenderNodeAdd_4;
	// System.Action`1<System.IntPtr> UnityEngine.UIElements.UIR.Utility::RenderNodeExecute
	Action_1_t35A46FAEE6B0A26D311444DF75B6EAFC59EBD914 * ___RenderNodeExecute_5;
	// System.Action`1<System.IntPtr> UnityEngine.UIElements.UIR.Utility::RenderNodeCleanup
	Action_1_t35A46FAEE6B0A26D311444DF75B6EAFC59EBD914 * ___RenderNodeCleanup_6;
	// Unity.Profiling.ProfilerMarker UnityEngine.UIElements.UIR.Utility::s_MarkerRaiseEngineUpdate
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___s_MarkerRaiseEngineUpdate_7;

public:
	inline static int32_t get_offset_of_GraphicsResourcesRecreate_0() { return static_cast<int32_t>(offsetof(Utility_t6BB300FC47C7086829155B2BFB07A6EA848C621D_StaticFields, ___GraphicsResourcesRecreate_0)); }
	inline Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * get_GraphicsResourcesRecreate_0() const { return ___GraphicsResourcesRecreate_0; }
	inline Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 ** get_address_of_GraphicsResourcesRecreate_0() { return &___GraphicsResourcesRecreate_0; }
	inline void set_GraphicsResourcesRecreate_0(Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * value)
	{
		___GraphicsResourcesRecreate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GraphicsResourcesRecreate_0), (void*)value);
	}

	inline static int32_t get_offset_of_EngineUpdate_1() { return static_cast<int32_t>(offsetof(Utility_t6BB300FC47C7086829155B2BFB07A6EA848C621D_StaticFields, ___EngineUpdate_1)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_EngineUpdate_1() const { return ___EngineUpdate_1; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_EngineUpdate_1() { return &___EngineUpdate_1; }
	inline void set_EngineUpdate_1(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___EngineUpdate_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EngineUpdate_1), (void*)value);
	}

	inline static int32_t get_offset_of_FlushPendingResources_2() { return static_cast<int32_t>(offsetof(Utility_t6BB300FC47C7086829155B2BFB07A6EA848C621D_StaticFields, ___FlushPendingResources_2)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_FlushPendingResources_2() const { return ___FlushPendingResources_2; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_FlushPendingResources_2() { return &___FlushPendingResources_2; }
	inline void set_FlushPendingResources_2(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___FlushPendingResources_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FlushPendingResources_2), (void*)value);
	}

	inline static int32_t get_offset_of_RegisterIntermediateRenderers_3() { return static_cast<int32_t>(offsetof(Utility_t6BB300FC47C7086829155B2BFB07A6EA848C621D_StaticFields, ___RegisterIntermediateRenderers_3)); }
	inline Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B * get_RegisterIntermediateRenderers_3() const { return ___RegisterIntermediateRenderers_3; }
	inline Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B ** get_address_of_RegisterIntermediateRenderers_3() { return &___RegisterIntermediateRenderers_3; }
	inline void set_RegisterIntermediateRenderers_3(Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B * value)
	{
		___RegisterIntermediateRenderers_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RegisterIntermediateRenderers_3), (void*)value);
	}

	inline static int32_t get_offset_of_RenderNodeAdd_4() { return static_cast<int32_t>(offsetof(Utility_t6BB300FC47C7086829155B2BFB07A6EA848C621D_StaticFields, ___RenderNodeAdd_4)); }
	inline Action_1_t35A46FAEE6B0A26D311444DF75B6EAFC59EBD914 * get_RenderNodeAdd_4() const { return ___RenderNodeAdd_4; }
	inline Action_1_t35A46FAEE6B0A26D311444DF75B6EAFC59EBD914 ** get_address_of_RenderNodeAdd_4() { return &___RenderNodeAdd_4; }
	inline void set_RenderNodeAdd_4(Action_1_t35A46FAEE6B0A26D311444DF75B6EAFC59EBD914 * value)
	{
		___RenderNodeAdd_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RenderNodeAdd_4), (void*)value);
	}

	inline static int32_t get_offset_of_RenderNodeExecute_5() { return static_cast<int32_t>(offsetof(Utility_t6BB300FC47C7086829155B2BFB07A6EA848C621D_StaticFields, ___RenderNodeExecute_5)); }
	inline Action_1_t35A46FAEE6B0A26D311444DF75B6EAFC59EBD914 * get_RenderNodeExecute_5() const { return ___RenderNodeExecute_5; }
	inline Action_1_t35A46FAEE6B0A26D311444DF75B6EAFC59EBD914 ** get_address_of_RenderNodeExecute_5() { return &___RenderNodeExecute_5; }
	inline void set_RenderNodeExecute_5(Action_1_t35A46FAEE6B0A26D311444DF75B6EAFC59EBD914 * value)
	{
		___RenderNodeExecute_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RenderNodeExecute_5), (void*)value);
	}

	inline static int32_t get_offset_of_RenderNodeCleanup_6() { return static_cast<int32_t>(offsetof(Utility_t6BB300FC47C7086829155B2BFB07A6EA848C621D_StaticFields, ___RenderNodeCleanup_6)); }
	inline Action_1_t35A46FAEE6B0A26D311444DF75B6EAFC59EBD914 * get_RenderNodeCleanup_6() const { return ___RenderNodeCleanup_6; }
	inline Action_1_t35A46FAEE6B0A26D311444DF75B6EAFC59EBD914 ** get_address_of_RenderNodeCleanup_6() { return &___RenderNodeCleanup_6; }
	inline void set_RenderNodeCleanup_6(Action_1_t35A46FAEE6B0A26D311444DF75B6EAFC59EBD914 * value)
	{
		___RenderNodeCleanup_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RenderNodeCleanup_6), (void*)value);
	}

	inline static int32_t get_offset_of_s_MarkerRaiseEngineUpdate_7() { return static_cast<int32_t>(offsetof(Utility_t6BB300FC47C7086829155B2BFB07A6EA848C621D_StaticFields, ___s_MarkerRaiseEngineUpdate_7)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_s_MarkerRaiseEngineUpdate_7() const { return ___s_MarkerRaiseEngineUpdate_7; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_s_MarkerRaiseEngineUpdate_7() { return &___s_MarkerRaiseEngineUpdate_7; }
	inline void set_s_MarkerRaiseEngineUpdate_7(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___s_MarkerRaiseEngineUpdate_7 = value;
	}
};


// UnityEngine.Rendering.VertexAttributeDescriptor
struct VertexAttributeDescriptor_t63A6AA231C2400B66A65E1B66732882B6C27E54E 
{
public:
	// UnityEngine.Rendering.VertexAttribute UnityEngine.Rendering.VertexAttributeDescriptor::<attribute>k__BackingField
	int32_t ___U3CattributeU3Ek__BackingField_0;
	// UnityEngine.Rendering.VertexAttributeFormat UnityEngine.Rendering.VertexAttributeDescriptor::<format>k__BackingField
	int32_t ___U3CformatU3Ek__BackingField_1;
	// System.Int32 UnityEngine.Rendering.VertexAttributeDescriptor::<dimension>k__BackingField
	int32_t ___U3CdimensionU3Ek__BackingField_2;
	// System.Int32 UnityEngine.Rendering.VertexAttributeDescriptor::<stream>k__BackingField
	int32_t ___U3CstreamU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CattributeU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(VertexAttributeDescriptor_t63A6AA231C2400B66A65E1B66732882B6C27E54E, ___U3CattributeU3Ek__BackingField_0)); }
	inline int32_t get_U3CattributeU3Ek__BackingField_0() const { return ___U3CattributeU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CattributeU3Ek__BackingField_0() { return &___U3CattributeU3Ek__BackingField_0; }
	inline void set_U3CattributeU3Ek__BackingField_0(int32_t value)
	{
		___U3CattributeU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CformatU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(VertexAttributeDescriptor_t63A6AA231C2400B66A65E1B66732882B6C27E54E, ___U3CformatU3Ek__BackingField_1)); }
	inline int32_t get_U3CformatU3Ek__BackingField_1() const { return ___U3CformatU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CformatU3Ek__BackingField_1() { return &___U3CformatU3Ek__BackingField_1; }
	inline void set_U3CformatU3Ek__BackingField_1(int32_t value)
	{
		___U3CformatU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CdimensionU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(VertexAttributeDescriptor_t63A6AA231C2400B66A65E1B66732882B6C27E54E, ___U3CdimensionU3Ek__BackingField_2)); }
	inline int32_t get_U3CdimensionU3Ek__BackingField_2() const { return ___U3CdimensionU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CdimensionU3Ek__BackingField_2() { return &___U3CdimensionU3Ek__BackingField_2; }
	inline void set_U3CdimensionU3Ek__BackingField_2(int32_t value)
	{
		___U3CdimensionU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CstreamU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(VertexAttributeDescriptor_t63A6AA231C2400B66A65E1B66732882B6C27E54E, ___U3CstreamU3Ek__BackingField_3)); }
	inline int32_t get_U3CstreamU3Ek__BackingField_3() const { return ___U3CstreamU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CstreamU3Ek__BackingField_3() { return &___U3CstreamU3Ek__BackingField_3; }
	inline void set_U3CstreamU3Ek__BackingField_3(int32_t value)
	{
		___U3CstreamU3Ek__BackingField_3 = value;
	}
};


// UnityEngine.Yoga.YogaValue
struct YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B 
{
public:
	// System.Single UnityEngine.Yoga.YogaValue::value
	float ___value_0;
	// UnityEngine.Yoga.YogaUnit UnityEngine.Yoga.YogaValue::unit
	int32_t ___unit_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B, ___value_0)); }
	inline float get_value_0() const { return ___value_0; }
	inline float* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(float value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_unit_1() { return static_cast<int32_t>(offsetof(YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B, ___unit_1)); }
	inline int32_t get_unit_1() const { return ___unit_1; }
	inline int32_t* get_address_of_unit_1() { return &___unit_1; }
	inline void set_unit_1(int32_t value)
	{
		___unit_1 = value;
	}
};


// System.Action`1<System.Boolean>
struct Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<UnityEngine.Camera>
struct Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<System.IntPtr>
struct Action_1_t35A46FAEE6B0A26D311444DF75B6EAFC59EBD914  : public MulticastDelegate_t
{
public:

public:
};


// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6  : public MulticastDelegate_t
{
public:

public:
};


// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Yoga.BaselineFunction
struct BaselineFunction_t7C180BD26F5C8850EEDDBEC2471D9A466EF0D24A  : public MulticastDelegate_t
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


// System.InvalidOperationException
struct InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// UnityEngine.Yoga.Logger
struct Logger_t4B20A24F23C7E3ACC57738D5E2C325474762C5D2  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Yoga.MeasureFunction
struct MeasureFunction_tBD19E8A44621B4D553785068ECCF0439CD9666C6  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};

struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPostRender_6;

public:
	inline static int32_t get_offset_of_onPreCull_4() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreCull_4)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreCull_4() const { return ___onPreCull_4; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreCull_4() { return &___onPreCull_4; }
	inline void set_onPreCull_4(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreCull_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreCull_4), (void*)value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreRender_5), (void*)value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPostRender_6), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// UnityEngine.Rendering.VertexAttributeDescriptor[]
struct VertexAttributeDescriptorU5BU5D_tD5E8E25AC5B9F233FDC5658F2C11FB7412BBDBFF  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) VertexAttributeDescriptor_t63A6AA231C2400B66A65E1B66732882B6C27E54E  m_Items[1];

public:
	inline VertexAttributeDescriptor_t63A6AA231C2400B66A65E1B66732882B6C27E54E  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline VertexAttributeDescriptor_t63A6AA231C2400B66A65E1B66732882B6C27E54E * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, VertexAttributeDescriptor_t63A6AA231C2400B66A65E1B66732882B6C27E54E  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline VertexAttributeDescriptor_t63A6AA231C2400B66A65E1B66732882B6C27E54E  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline VertexAttributeDescriptor_t63A6AA231C2400B66A65E1B66732882B6C27E54E * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, VertexAttributeDescriptor_t63A6AA231C2400B66A65E1B66732882B6C27E54E  value)
	{
		m_Items[index] = value;
	}
};
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.UIElements.TextVertex>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisTextVertex_t4993EB0C6C0D22422A68B1FA043B800D94C735B3_m24EBF391516080B8B4E4C5992337FAF271E51526_gshared (const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<UnityEngine.UIElements.TextVertex>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m101008BFDB4E901343E8DA4F0969383ECDB0C1BE_gshared (NativeArray_1_tBC4AC2035CCDD9C5FE5733692EB415A4DF3D250C * __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method);
// System.Void* Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::GetUnsafePtr<UnityEngine.UIElements.TextVertex>(Unity.Collections.NativeArray`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafePtr_TisTextVertex_t4993EB0C6C0D22422A68B1FA043B800D94C735B3_m4057325E5816B5BD009A38797B41AE89F1B1BA52_gshared (NativeArray_1_tBC4AC2035CCDD9C5FE5733692EB415A4DF3D250C  ___nativeArray0, const RuntimeMethod* method);
// System.Void System.Action`1<System.Boolean>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5_gshared (Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * __this, bool ___obj0, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_gshared (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void System.Action`1<System.IntPtr>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_mEAB37079EB59D19D569529B0C5353085E6B5BFA5_gshared (Action_1_t35A46FAEE6B0A26D311444DF75B6EAFC59EBD914 * __this, intptr_t ___obj0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mFEB2301A6F28290A828A979BA9CC847B16B3D538_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___capacity0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Insert(System.Int32,!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Insert_mFC500A19C486C8ED4E9F3BDBA9B079602D647741_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, RuntimeObject * ___item1, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m66148860899ECCAE9B323372032BFC1C255393D2_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Empty_TisRuntimeObject_m3146A50D269FEA10AD64F271E3C5E47FC5D7C2DD_gshared_inline (const RuntimeMethod* method);

// System.Boolean System.IntPtr::op_Equality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_mD94F3FE43A65684EFF984A7B95E70D2520C0AC73 (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method);
// System.Void UnityEngine.Yoga.Native::YGNodeFreeInternal(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeFreeInternal_mCA9F0DAD2E20A95CABD3951D3E42DAAC268F7292 (intptr_t ___ygNode0, const RuntimeMethod* method);
// System.Void UnityEngine.Yoga.Native::YGConfigFreeInternal(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGConfigFreeInternal_mD200B88033A535BB1A5ED1219B1E561DA6ED49A4 (intptr_t ___config0, const RuntimeMethod* method);
// System.Void* System.IntPtr::op_Explicit(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* IntPtr_op_Explicit_mE8B472FDC632CBD121F7ADF4F94546D6610BACDD (intptr_t ___value0, const RuntimeMethod* method);
// UnityEngine.Yoga.YogaSize UnityEngine.Yoga.YogaNode::MeasureInternal(UnityEngine.Yoga.YogaNode,System.Single,UnityEngine.Yoga.YogaMeasureMode,System.Single,UnityEngine.Yoga.YogaMeasureMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR YogaSize_tC805BF63DE9A9E4B9984B964AB0A1CFA04ADC1FD  YogaNode_MeasureInternal_mBB3AB5E64B70DD0BAFE665CEB264316F960E0BE8 (YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * ___node0, float ___width1, int32_t ___widthMode2, float ___height3, int32_t ___heightMode4, const RuntimeMethod* method);
// System.Single UnityEngine.Yoga.YogaNode::BaselineInternal(UnityEngine.Yoga.YogaNode,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float YogaNode_BaselineInternal_m0C45C415286A4FEA8E9C38A57B45B431FC6104BF (YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * ___node0, float ___width1, float ___height2, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485 (RuntimeObject * ___message0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828 (const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.UIElements.TextNative::DoGetCursorPosition(UnityEngine.UIElements.TextNativeSettings,UnityEngine.Rect,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  TextNative_DoGetCursorPosition_mFDBC5EF9136982DB1B1D8D99D14A01A482AD4ED4 (TextNativeSettings_t2C255BA301B06D04235208446E75F9CE0B3A4CE3  ___settings0, Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___rect1, int32_t ___cursorPosition2, const RuntimeMethod* method);
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C (String_t* ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.UIElements.TextNative::DoComputeTextWidth(UnityEngine.UIElements.TextNativeSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TextNative_DoComputeTextWidth_m47F92E5947EF9CD981F6BB9D4638F862FED9A741 (TextNativeSettings_t2C255BA301B06D04235208446E75F9CE0B3A4CE3  ___settings0, const RuntimeMethod* method);
// System.Single UnityEngine.UIElements.TextNative::DoComputeTextHeight(UnityEngine.UIElements.TextNativeSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TextNative_DoComputeTextHeight_m08980C0F3095C1C5FAEDF2C35FD34B7E55234942 (TextNativeSettings_t2C255BA301B06D04235208446E75F9CE0B3A4CE3  ___settings0, const RuntimeMethod* method);
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.UIElements.TextVertex>()
inline int32_t UnsafeUtility_SizeOf_TisTextVertex_t4993EB0C6C0D22422A68B1FA043B800D94C735B3_m24EBF391516080B8B4E4C5992337FAF271E51526 (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisTextVertex_t4993EB0C6C0D22422A68B1FA043B800D94C735B3_m24EBF391516080B8B4E4C5992337FAF271E51526_gshared)(method);
}
// System.Void UnityEngine.UIElements.TextNative::GetVertices(UnityEngine.UIElements.TextNativeSettings,System.IntPtr,System.Int32,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextNative_GetVertices_m9603A86C03C55C483932264E4A39151C56D1E7AD (TextNativeSettings_t2C255BA301B06D04235208446E75F9CE0B3A4CE3  ___settings0, intptr_t ___buffer1, int32_t ___vertexSize2, int32_t* ___vertexCount3, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<UnityEngine.UIElements.TextVertex>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
inline void NativeArray_1__ctor_m101008BFDB4E901343E8DA4F0969383ECDB0C1BE (NativeArray_1_tBC4AC2035CCDD9C5FE5733692EB415A4DF3D250C * __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tBC4AC2035CCDD9C5FE5733692EB415A4DF3D250C *, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_m101008BFDB4E901343E8DA4F0969383ECDB0C1BE_gshared)(__this, ___length0, ___allocator1, ___options2, method);
}
// System.Void* Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::GetUnsafePtr<UnityEngine.UIElements.TextVertex>(Unity.Collections.NativeArray`1<!!0>)
inline void* NativeArrayUnsafeUtility_GetUnsafePtr_TisTextVertex_t4993EB0C6C0D22422A68B1FA043B800D94C735B3_m4057325E5816B5BD009A38797B41AE89F1B1BA52 (NativeArray_1_tBC4AC2035CCDD9C5FE5733692EB415A4DF3D250C  ___nativeArray0, const RuntimeMethod* method)
{
	return ((  void* (*) (NativeArray_1_tBC4AC2035CCDD9C5FE5733692EB415A4DF3D250C , const RuntimeMethod*))NativeArrayUnsafeUtility_GetUnsafePtr_TisTextVertex_t4993EB0C6C0D22422A68B1FA043B800D94C735B3_m4057325E5816B5BD009A38797B41AE89F1B1BA52_gshared)(___nativeArray0, method);
}
// System.IntPtr System.IntPtr::op_Explicit(System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t IntPtr_op_Explicit_mBD40223EE90BDDF40A24C0F321D3398DEA300495 (void* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Assert(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Assert_m9AB596E4960380752FD4CB3292D07A86E995938B (bool ___condition0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.UIElements.TextNative::DoGetOffset(UnityEngine.UIElements.TextNativeSettings,UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  TextNative_DoGetOffset_m02D7C61C9E4DFA291F744E45F6F4900A426ACA4A (TextNativeSettings_t2C255BA301B06D04235208446E75F9CE0B3A4CE3  ___settings0, Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___rect1, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::get_magnitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mDDD40612220D8104E77E993E18A101A69A944991 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, const RuntimeMethod* method);
// System.Single UnityEngine.UIElements.TextNative::DoComputeTextWidth_Injected(UnityEngine.UIElements.TextNativeSettings&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TextNative_DoComputeTextWidth_Injected_m530A86F89EB85307C81194D863B3F18B4ACC3EA1 (TextNativeSettings_t2C255BA301B06D04235208446E75F9CE0B3A4CE3 * ___settings0, const RuntimeMethod* method);
// System.Single UnityEngine.UIElements.TextNative::DoComputeTextHeight_Injected(UnityEngine.UIElements.TextNativeSettings&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TextNative_DoComputeTextHeight_Injected_m361998DAEBDBBFAF8340855917701ADBB810437D (TextNativeSettings_t2C255BA301B06D04235208446E75F9CE0B3A4CE3 * ___settings0, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.TextNative::DoGetCursorPosition_Injected(UnityEngine.UIElements.TextNativeSettings&,UnityEngine.Rect&,System.Int32,UnityEngine.Vector2&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextNative_DoGetCursorPosition_Injected_m7DB0EF061F38D097DC03F7B79161283459798573 (TextNativeSettings_t2C255BA301B06D04235208446E75F9CE0B3A4CE3 * ___settings0, Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * ___rect1, int32_t ___cursorPosition2, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * ___ret3, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.TextNative::GetVertices_Injected(UnityEngine.UIElements.TextNativeSettings&,System.IntPtr,System.Int32,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextNative_GetVertices_Injected_m68FEC737EC8FDCB97D0D2A690D001C8F7A4D0569 (TextNativeSettings_t2C255BA301B06D04235208446E75F9CE0B3A4CE3 * ___settings0, intptr_t ___buffer1, int32_t ___vertexSize2, int32_t* ___vertexCount3, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.TextNative::DoGetOffset_Injected(UnityEngine.UIElements.TextNativeSettings&,UnityEngine.Rect&,UnityEngine.Vector2&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextNative_DoGetOffset_Injected_m4713B7C9AC2FC3DF3120F0F178B379289D55ED66 (TextNativeSettings_t2C255BA301B06D04235208446E75F9CE0B3A4CE3 * ___settings0, Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * ___rect1, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * ___ret2, const RuntimeMethod* method);
// System.Void System.Action::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * __this, const RuntimeMethod* method);
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55 (Delegate_t * ___a0, Delegate_t * ___b1, const RuntimeMethod* method);
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4 (Delegate_t * ___source0, Delegate_t * ___value1, const RuntimeMethod* method);
// System.Void System.Action`1<System.Boolean>::Invoke(!0)
inline void Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5 (Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * __this, bool ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 *, bool, const RuntimeMethod*))Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5_gshared)(__this, ___obj0, method);
}
// System.Void System.Action`1<UnityEngine.Camera>::Invoke(!0)
inline void Action_1_Invoke_mD46448B64FD6241AEBDC58583AABC7AB91A9B136 (Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B * __this, Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B *, Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C *, const RuntimeMethod*))Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_gshared)(__this, ___obj0, method);
}
// System.Void System.Action`1<System.IntPtr>::Invoke(!0)
inline void Action_1_Invoke_mEAB37079EB59D19D569529B0C5353085E6B5BFA5 (Action_1_t35A46FAEE6B0A26D311444DF75B6EAFC59EBD914 * __this, intptr_t ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t35A46FAEE6B0A26D311444DF75B6EAFC59EBD914 *, intptr_t, const RuntimeMethod*))Action_1_Invoke_mEAB37079EB59D19D569529B0C5353085E6B5BFA5_gshared)(__this, ___obj0, method);
}
// System.Void UnityEngine.UIElements.UIR.Utility::RegisterIntermediateRenderer_Injected(UnityEngine.Camera,UnityEngine.Material,UnityEngine.Matrix4x4&,UnityEngine.Bounds&,System.Int32,System.Int32,System.Boolean,System.Int32,System.UInt64,System.Int32,System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utility_RegisterIntermediateRenderer_Injected_m120AFED2C5F1B44887304C4F01193E1259B42E71 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___camera0, Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___material1, Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * ___transform2, Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 * ___aabb3, int32_t ___renderLayer4, int32_t ___shadowCasting5, bool ___receiveShadows6, int32_t ___sameDistanceSortPriority7, uint64_t ___sceneCullingMask8, int32_t ___rendererCallbackFlags9, intptr_t ___userData10, int32_t ___userDataSize11, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.UIR.Utility::SetScissorRect_Injected(UnityEngine.RectInt&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utility_SetScissorRect_Injected_mC4352D69FF93E1ECB03A758AE902760DC1456C1D (RectInt_tE7B8105A280C1AC73A4157ED41F9B86C9BD91E49 * ___scissorRect0, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.UIR.Utility::GetActiveViewport_Injected(UnityEngine.RectInt&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utility_GetActiveViewport_Injected_m9CBFE09239E629B5D7A721E8FA0E3432105DE2C1 (RectInt_tE7B8105A280C1AC73A4157ED41F9B86C9BD91E49 * ___ret0, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.UIR.Utility::GetUnityProjectionMatrix_Injected(UnityEngine.Matrix4x4&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utility_GetUnityProjectionMatrix_Injected_mC4E56A3E18DB993BB481EDE0A6ABC890F3FFE8B4 (Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * ___ret0, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.UIR.Utility::GetDeviceProjectionMatrix_Injected(UnityEngine.Matrix4x4&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utility_GetDeviceProjectionMatrix_Injected_mDBD190B8F1698397993FF46D75CD5E8275AC319C (Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * ___ret0, const RuntimeMethod* method);
// System.Void Unity.Profiling.ProfilerMarker::.ctor(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline (ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * __this, String_t* ___message0, const RuntimeMethod* method);
// System.IntPtr UnityEngine.Yoga.Native::YGConfigNew()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Native_YGConfigNew_mE833F137A28FEEF75528603EC1828E70DE3E9ABD (const RuntimeMethod* method);
// System.Void UnityEngine.Yoga.YogaConfig::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaConfig__ctor_mF223298368491BAAD47A029E58078455A4D17985 (YogaConfig_tA06BDF520DE54384107CF42E1E9909DB1C28A7E7 * __this, intptr_t ___ygConfig0, const RuntimeMethod* method);
// System.IntPtr UnityEngine.Yoga.YogaConfig::get_Handle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t YogaConfig_get_Handle_mD2EF807A42DE91ECAA72358BF057EC8014E0DAAA (YogaConfig_tA06BDF520DE54384107CF42E1E9909DB1C28A7E7 * __this, const RuntimeMethod* method);
// System.Boolean System.IntPtr::op_Inequality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_m212AF0E66AA81FEDC982B1C8A44ADDA24B995EB8 (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method);
// System.Void UnityEngine.Yoga.Native::YGConfigFree(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGConfigFree_mB97AD40C5DBEDC120FE9904BDCDFF7D2E0DD84A3 (intptr_t ___config0, const RuntimeMethod* method);
// System.Void System.Object::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Finalize_mC59C83CF4F7707E425FFA6362931C25D4C36676A (RuntimeObject * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Yoga.Native::YGConfigGetUseWebDefaults(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Native_YGConfigGetUseWebDefaults_mA65987BA65EE60236BAB8AB6E877DE4A387C9A31 (intptr_t ___config0, const RuntimeMethod* method);
// System.Void UnityEngine.Yoga.Native::YGConfigSetUseWebDefaults(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGConfigSetUseWebDefaults_m18473CEE9D49131766E3B0A2CFDF22AB38E11EDE (intptr_t ___config0, bool ___useWebDefaults1, const RuntimeMethod* method);
// System.Void UnityEngine.Yoga.Native::YGConfigSetPointScaleFactor(System.IntPtr,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGConfigSetPointScaleFactor_m25EC3A3C7ADA6B7ED8AAA11D620E1175E4353455 (intptr_t ___config0, float ___pixelsInPoint1, const RuntimeMethod* method);
// System.IntPtr UnityEngine.Yoga.Native::YGConfigGetDefault()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Native_YGConfigGetDefault_m7D26F4A06C4A4FC51A3E18F6ADD22F51A5E0BCF3 (const RuntimeMethod* method);
// System.Boolean System.Single::IsNaN(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Single_IsNaN_m458FF076EF1944D4D888A585F7C6C49DA4730599 (float ___f0, const RuntimeMethod* method);
// System.IntPtr UnityEngine.Yoga.Native::YGNodeNewWithConfig(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Native_YGNodeNewWithConfig_m34DD3C6182BCD5B1D77B9888F05605F76E2ED7BD (intptr_t ___config0, const RuntimeMethod* method);
// System.Void UnityEngine.Yoga.Native::YGNodeFree(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeFree_m6C303D358175411146CDF491B744D89A29343626 (intptr_t ___ygNode0, const RuntimeMethod* method);
// System.Void UnityEngine.Yoga.Native::YGNodeSetConfig(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeSetConfig_m3E223D988E63C4FA0B6E7C47E22A9113FA0FDD86 (intptr_t ___ygNode0, intptr_t ___config1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Yoga.Native::YGNodeIsDirty(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Native_YGNodeIsDirty_mC0D246AEA06E9A070468790663D5013ACFCD69D8 (intptr_t ___node0, const RuntimeMethod* method);
// System.Void UnityEngine.Yoga.Native::YGNodeMarkDirty(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeMarkDirty_m65AC700A66F6EAF61A621C4E22E3843ED6AE9ED7 (intptr_t ___node0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Yoga.Native::YGNodeGetHasNewLayout(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Native_YGNodeGetHasNewLayout_mF7AE5D415C94C0D890B90F70EF68C15281F9BBCD (intptr_t ___node0, const RuntimeMethod* method);
// System.Void UnityEngine.Yoga.Native::YGNodeCopyStyle(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeCopyStyle_m17EECD77E6C7EF07F498D9A63BC42B1279ADCAF3 (intptr_t ___dstNode0, intptr_t ___srcNode1, const RuntimeMethod* method);
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetFlexDirection(System.IntPtr,UnityEngine.Yoga.YogaFlexDirection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetFlexDirection_mD337C68CCC952EC9F063C4BB93024CFEBC16F6C9 (intptr_t ___node0, int32_t ___flexDirection1, const RuntimeMethod* method);
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetJustifyContent(System.IntPtr,UnityEngine.Yoga.YogaJustify)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetJustifyContent_m5743C6895CC78F92738C46D77BC2B2AAC9BFDA17 (intptr_t ___node0, int32_t ___justifyContent1, const RuntimeMethod* method);
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetDisplay(System.IntPtr,UnityEngine.Yoga.YogaDisplay)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetDisplay_m61D6B7A3DCBAE2ECC44FF026ACEF2060AC6CA392 (intptr_t ___node0, int32_t ___display1, const RuntimeMethod* method);
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetAlignItems(System.IntPtr,UnityEngine.Yoga.YogaAlign)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetAlignItems_mF4403BB7979A1A49D3AF2F9F33137F8356BD9EF1 (intptr_t ___node0, int32_t ___alignItems1, const RuntimeMethod* method);
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetAlignSelf(System.IntPtr,UnityEngine.Yoga.YogaAlign)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetAlignSelf_m85127A5FA62C25B124B6E20BAD2D96CD1A390B5C (intptr_t ___node0, int32_t ___alignSelf1, const RuntimeMethod* method);
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetAlignContent(System.IntPtr,UnityEngine.Yoga.YogaAlign)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetAlignContent_mADC90EB1C51EB326F0AC50723ED44DA9FEF6BEEC (intptr_t ___node0, int32_t ___alignContent1, const RuntimeMethod* method);
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetPositionType(System.IntPtr,UnityEngine.Yoga.YogaPositionType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetPositionType_m931E5D1662FDDFD56BC0B56220E0077EC857F7C9 (intptr_t ___node0, int32_t ___positionType1, const RuntimeMethod* method);
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetFlexWrap(System.IntPtr,UnityEngine.Yoga.YogaWrap)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetFlexWrap_mF4697BF10F0A88920F6B0564290CB73824B30D8D (intptr_t ___node0, int32_t ___flexWrap1, const RuntimeMethod* method);
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetFlex(System.IntPtr,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetFlex_mD48AD7688B7EFF2B211E926060D457686B2F2EA8 (intptr_t ___node0, float ___flex1, const RuntimeMethod* method);
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetFlexGrow(System.IntPtr,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetFlexGrow_m6C263F5E23F669552073B3BFB8D6B286397394D7 (intptr_t ___node0, float ___flexGrow1, const RuntimeMethod* method);
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetFlexShrink(System.IntPtr,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetFlexShrink_m96E5A55C91FF1CBA54E27FCB0B978B1521C8B65B (intptr_t ___node0, float ___flexShrink1, const RuntimeMethod* method);
// UnityEngine.Yoga.YogaUnit UnityEngine.Yoga.YogaValue::get_Unit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t YogaValue_get_Unit_m6D0E7755E95D4223A8F82DFE7CD7E72E0B7604C0 (YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Yoga.YogaValue::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float YogaValue_get_Value_mEFC5711E0F64ABCA0DC6E49C790217B97967ED4E (YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetFlexBasisPercent(System.IntPtr,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetFlexBasisPercent_m35BBB74B616C121FCCB61E4D123BCF3F3B0FFB7E (intptr_t ___node0, float ___flexBasis1, const RuntimeMethod* method);
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetFlexBasisAuto(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetFlexBasisAuto_m736FE09858DC0FE8675039649C90C6C0342A9106 (intptr_t ___node0, const RuntimeMethod* method);
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetFlexBasis(System.IntPtr,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetFlexBasis_m1C88BD795249E06BBA6F5104417116836ECD83D6 (intptr_t ___node0, float ___flexBasis1, const RuntimeMethod* method);
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetWidthPercent(System.IntPtr,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetWidthPercent_mA7697E8CBA3571C29B9AD5EFE6938895E84A8FD3 (intptr_t ___node0, float ___width1, const RuntimeMethod* method);
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetWidthAuto(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetWidthAuto_mFF75E6B4D8B3307525CF8C9D5F0BE8E0BFD6385F (intptr_t ___node0, const RuntimeMethod* method);
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetWidth(System.IntPtr,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetWidth_m4AF3873909E2D448C810B29D7F590893F4CBB1E9 (intptr_t ___node0, float ___width1, const RuntimeMethod* method);
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetHeightPercent(System.IntPtr,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetHeightPercent_mDC1CE1B843CAAD97F55885B68756DF07BBCB99CF (intptr_t ___node0, float ___height1, const RuntimeMethod* method);
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetHeightAuto(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetHeightAuto_mFC9F4A23BB7D826849EFA76216B8A7EDCF9A51AB (intptr_t ___node0, const RuntimeMethod* method);
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetHeight(System.IntPtr,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetHeight_m2673494A6716236B6682EA37B2B88A55753FB8C1 (intptr_t ___node0, float ___height1, const RuntimeMethod* method);
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetMaxWidthPercent(System.IntPtr,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetMaxWidthPercent_mE0E336463F2EF0BE14FD1589F9EDCFE285FAB49E (intptr_t ___node0, float ___maxWidth1, const RuntimeMethod* method);
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetMaxWidth(System.IntPtr,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetMaxWidth_m315A133A42ED064D365780F80D7A888D20CD467D (intptr_t ___node0, float ___maxWidth1, const RuntimeMethod* method);
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetMaxHeightPercent(System.IntPtr,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetMaxHeightPercent_mA3A4488019B086745E30A0497699911A20D02200 (intptr_t ___node0, float ___maxHeight1, const RuntimeMethod* method);
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetMaxHeight(System.IntPtr,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetMaxHeight_m1AA96D9430C774C071255FAE6B01754B03A00181 (intptr_t ___node0, float ___maxHeight1, const RuntimeMethod* method);
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetMinWidthPercent(System.IntPtr,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetMinWidthPercent_m3D8103930E9C61DF232833E2FD34A863F8F5B6FD (intptr_t ___node0, float ___minWidth1, const RuntimeMethod* method);
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetMinWidth(System.IntPtr,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetMinWidth_mF65AD8956B8F48616DEC66E05CB7FA2163097F85 (intptr_t ___node0, float ___minWidth1, const RuntimeMethod* method);
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetMinHeightPercent(System.IntPtr,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetMinHeightPercent_mAF845F4EA74D6F4B9A43BEB7DD3A00626B9AB8EA (intptr_t ___node0, float ___minHeight1, const RuntimeMethod* method);
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetMinHeight(System.IntPtr,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetMinHeight_m8789333D92D9D95B747E5BFA18EF13AC97DF9EE8 (intptr_t ___node0, float ___minHeight1, const RuntimeMethod* method);
// System.Single UnityEngine.Yoga.Native::YGNodeLayoutGetLeft(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Native_YGNodeLayoutGetLeft_m9C2544E2F70884B9D872E4F732710E1900588140 (intptr_t ___node0, const RuntimeMethod* method);
// System.Single UnityEngine.Yoga.Native::YGNodeLayoutGetTop(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Native_YGNodeLayoutGetTop_m0FFD848971C8B63B4261274C5CD4F910680CB700 (intptr_t ___node0, const RuntimeMethod* method);
// System.Single UnityEngine.Yoga.Native::YGNodeLayoutGetWidth(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Native_YGNodeLayoutGetWidth_m4C28192C45D735E29919D50925ECEDF5E9ED28C9 (intptr_t ___node0, const RuntimeMethod* method);
// System.Single UnityEngine.Yoga.Native::YGNodeLayoutGetHeight(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Native_YGNodeLayoutGetHeight_mB69A179FF0D0A1FD3C0246E5C3D9050B9A0DC9E9 (intptr_t ___node0, const RuntimeMethod* method);
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetOverflow(System.IntPtr,UnityEngine.Yoga.YogaOverflow)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetOverflow_mAC08C6D43FF77D391448DA8B1D19048B7B170809 (intptr_t ___node0, int32_t ___flexWrap1, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Yoga.YogaNode>::get_Count()
inline int32_t List_1_get_Count_m522E99226B0A21F41CA6CE5C283393A0B00565E1_inline (List_1_t5FEBCBE5E15CEDF8B8CBA2B1C4F123E01DDE02C8 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t5FEBCBE5E15CEDF8B8CBA2B1C4F123E01DDE02C8 *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// System.Void UnityEngine.Yoga.Native::YGNodeSetHasNewLayout(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeSetHasNewLayout_mBB767467C6892B1008AA30E5C47B4797C90DBE5C (intptr_t ___node0, bool ___hasNewLayout1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Yoga.YogaNode>::.ctor(System.Int32)
inline void List_1__ctor_m165D313F7B61944C91EE854A3495CE48FC035A82 (List_1_t5FEBCBE5E15CEDF8B8CBA2B1C4F123E01DDE02C8 * __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t5FEBCBE5E15CEDF8B8CBA2B1C4F123E01DDE02C8 *, int32_t, const RuntimeMethod*))List_1__ctor_mFEB2301A6F28290A828A979BA9CC847B16B3D538_gshared)(__this, ___capacity0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Yoga.YogaNode>::Insert(System.Int32,!0)
inline void List_1_Insert_mCEFB978F7C64D2B3B412873D1ADA2B21FB5DD060 (List_1_t5FEBCBE5E15CEDF8B8CBA2B1C4F123E01DDE02C8 * __this, int32_t ___index0, YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * ___item1, const RuntimeMethod* method)
{
	((  void (*) (List_1_t5FEBCBE5E15CEDF8B8CBA2B1C4F123E01DDE02C8 *, int32_t, YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 *, const RuntimeMethod*))List_1_Insert_mFC500A19C486C8ED4E9F3BDBA9B079602D647741_gshared)(__this, ___index0, ___item1, method);
}
// System.Void System.WeakReference::.ctor(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakReference__ctor_m11BFDB039514BDCE23425FD90E8C414D051B2F13 (WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * __this, RuntimeObject * ___target0, const RuntimeMethod* method);
// System.Void UnityEngine.Yoga.Native::YGNodeInsertChild(System.IntPtr,System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeInsertChild_m997013BB67EAB907B6827A00951079EB3FF25F73 (intptr_t ___node0, intptr_t ___child1, uint32_t ___index2, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.Yoga.YogaNode>::get_Item(System.Int32)
inline YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * List_1_get_Item_m23719BFAA5CDAE8A711BF7795DD65E7ADECCC617_inline (List_1_t5FEBCBE5E15CEDF8B8CBA2B1C4F123E01DDE02C8 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * (*) (List_1_t5FEBCBE5E15CEDF8B8CBA2B1C4F123E01DDE02C8 *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Yoga.YogaNode>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_m4BE1835EE87937A24899808F207D4BE7C945085B (List_1_t5FEBCBE5E15CEDF8B8CBA2B1C4F123E01DDE02C8 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t5FEBCBE5E15CEDF8B8CBA2B1C4F123E01DDE02C8 *, int32_t, const RuntimeMethod*))List_1_RemoveAt_m66148860899ECCAE9B323372032BFC1C255393D2_gshared)(__this, ___index0, method);
}
// System.Void UnityEngine.Yoga.Native::YGNodeRemoveChild(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeRemoveChild_mAD07F43A01FD48A6149B9A69F730EE91DCB501C0 (intptr_t ___node0, intptr_t ___child1, const RuntimeMethod* method);
// System.Void UnityEngine.Yoga.YogaNode::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaNode_RemoveAt_m666FC1531CE73CE3C5F356CC90DE33BDD8CA221C (YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Yoga.YogaNode::get_IsBaselineDefined()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool YogaNode_get_IsBaselineDefined_m125B599E9999B75477282256947971818C64A3E0 (YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Yoga.Native::YGSetManagedObject(System.IntPtr,UnityEngine.Yoga.YogaNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGSetManagedObject_m673178983DC9AD8AACC0D9C634F1FC1839B44DA0 (intptr_t ___ygNode0, YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * ___node1, const RuntimeMethod* method);
// System.Void UnityEngine.Yoga.Native::YGNodeRemoveMeasureFunc(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeRemoveMeasureFunc_mA517FB67B62876E9CDA30BC73FC96A076458A2E9 (intptr_t ___node0, const RuntimeMethod* method);
// System.Void UnityEngine.Yoga.Native::YGNodeSetMeasureFunc(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeSetMeasureFunc_mACE730FF0A2222CAEF76F44674D1B40918AF7B8B (intptr_t ___node0, const RuntimeMethod* method);
// UnityEngine.Yoga.YogaDirection UnityEngine.Yoga.Native::YGNodeStyleGetDirection(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Native_YGNodeStyleGetDirection_m06A8E8D697BADA981A42C00971E088246AE5E02D (intptr_t ___node0, const RuntimeMethod* method);
// System.Void UnityEngine.Yoga.Native::YGNodeCalculateLayout(System.IntPtr,System.Single,System.Single,UnityEngine.Yoga.YogaDirection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeCalculateLayout_m7115180FA93A5A9B06976343886A3B1AFD370F36 (intptr_t ___node0, float ___availableWidth1, float ___availableHeight2, int32_t ___parentDirection3, const RuntimeMethod* method);
// UnityEngine.Yoga.YogaSize UnityEngine.Yoga.MeasureFunction::Invoke(UnityEngine.Yoga.YogaNode,System.Single,UnityEngine.Yoga.YogaMeasureMode,System.Single,UnityEngine.Yoga.YogaMeasureMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR YogaSize_tC805BF63DE9A9E4B9984B964AB0A1CFA04ADC1FD  MeasureFunction_Invoke_mEAAC465A891BDA61A7E1804BF40929FE9C34CB58 (MeasureFunction_tBD19E8A44621B4D553785068ECCF0439CD9666C6 * __this, YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * ___node0, float ___width1, int32_t ___widthMode2, float ___height3, int32_t ___heightMode4, const RuntimeMethod* method);
// System.Single UnityEngine.Yoga.BaselineFunction::Invoke(UnityEngine.Yoga.YogaNode,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float BaselineFunction_Invoke_mAEC462B19D69EAC84C6F4D13058EF3DA25BBE647 (BaselineFunction_t7C180BD26F5C8850EEDDBEC2471D9A466EF0D24A * __this, YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * ___node0, float ___width1, float ___height2, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Empty<UnityEngine.Yoga.YogaNode>()
inline RuntimeObject* Enumerable_Empty_TisYogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6_mB7295609BAE35EB4ACD394AC2745CB40A6633E09_inline (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))Enumerable_Empty_TisRuntimeObject_m3146A50D269FEA10AD64F271E3C5E47FC5D7C2DD_gshared_inline)(method);
}
// System.Void UnityEngine.Yoga.YogaNode::SetStylePosition(UnityEngine.Yoga.YogaEdge,UnityEngine.Yoga.YogaValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaNode_SetStylePosition_m9FB5853087249A27BC3E9BC690B88156B0E88BFB (YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * __this, int32_t ___edge0, YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B  ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetPositionPercent(System.IntPtr,UnityEngine.Yoga.YogaEdge,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetPositionPercent_m0914E794B0CAF017C9942D528C97868BA42CDE02 (intptr_t ___node0, int32_t ___edge1, float ___position2, const RuntimeMethod* method);
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetPosition(System.IntPtr,UnityEngine.Yoga.YogaEdge,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetPosition_m0375E96047A4DEAF2B629F7F6395C0387E945CD4 (intptr_t ___node0, int32_t ___edge1, float ___position2, const RuntimeMethod* method);
// System.Void UnityEngine.Yoga.YogaNode::SetStyleMargin(UnityEngine.Yoga.YogaEdge,UnityEngine.Yoga.YogaValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaNode_SetStyleMargin_m7D36D72BB840BAD05FFE3D9C1C84BBE77B36681B (YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * __this, int32_t ___edge0, YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B  ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetMarginPercent(System.IntPtr,UnityEngine.Yoga.YogaEdge,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetMarginPercent_m78660EF35C712CE8B7EF72A00A9881338F9AD6D7 (intptr_t ___node0, int32_t ___edge1, float ___margin2, const RuntimeMethod* method);
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetMarginAuto(System.IntPtr,UnityEngine.Yoga.YogaEdge)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetMarginAuto_mB8125F645998A964419DA4006EB158DEFED0EBAE (intptr_t ___node0, int32_t ___edge1, const RuntimeMethod* method);
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetMargin(System.IntPtr,UnityEngine.Yoga.YogaEdge,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetMargin_m794F2082F3DB3CD5657CA8F593A5B20BDC394E9B (intptr_t ___node0, int32_t ___edge1, float ___margin2, const RuntimeMethod* method);
// System.Void UnityEngine.Yoga.YogaNode::SetStylePadding(UnityEngine.Yoga.YogaEdge,UnityEngine.Yoga.YogaValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaNode_SetStylePadding_mA741114B9FB6EE8D8B8B73187EFFB8D3130496AC (YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * __this, int32_t ___edge0, YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B  ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetPaddingPercent(System.IntPtr,UnityEngine.Yoga.YogaEdge,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetPaddingPercent_mDD045CB68F294C1211769AAF89DACA7FCD765412 (intptr_t ___node0, int32_t ___edge1, float ___padding2, const RuntimeMethod* method);
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetPadding(System.IntPtr,UnityEngine.Yoga.YogaEdge,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetPadding_m951E42923BE35DBDE4CB346128A8A47BDB09BB49 (intptr_t ___node0, int32_t ___edge1, float ___padding2, const RuntimeMethod* method);
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetBorder(System.IntPtr,UnityEngine.Yoga.YogaEdge,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetBorder_mEADDE749B55A699CF094D463856E5856BD417361 (intptr_t ___node0, int32_t ___edge1, float ___border2, const RuntimeMethod* method);
// System.Single UnityEngine.Yoga.Native::YGNodeLayoutGetMargin(System.IntPtr,UnityEngine.Yoga.YogaEdge)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Native_YGNodeLayoutGetMargin_mC23ED3D77B7FD20FDBD5B8CAA765B7DA8CAD9402 (intptr_t ___node0, int32_t ___edge1, const RuntimeMethod* method);
// System.Single UnityEngine.Yoga.Native::YGNodeLayoutGetPadding(System.IntPtr,UnityEngine.Yoga.YogaEdge)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Native_YGNodeLayoutGetPadding_m1A6212C89C759D60E2E2EE02E5C9CD6E05A33E41 (intptr_t ___node0, int32_t ___edge1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Yoga.YogaConstants::IsUndefined(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool YogaConstants_IsUndefined_m31D36808D971EE123C830220068474081F6C7410 (float ___value0, const RuntimeMethod* method);
// System.Boolean System.Single::Equals(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Single_Equals_m298A3A849F30B9900813BE6DD98AE6810CDBE914 (float* __this, float ___obj0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Yoga.YogaValue::Equals(UnityEngine.Yoga.YogaValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool YogaValue_Equals_m2358449AB013A9C9F92DAEFC2F55D11A490422EF (YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B * __this, YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B  ___other0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Yoga.YogaValue::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool YogaValue_Equals_m758B00D9044EBD5A0F47A1E50527AA781E2E94D5 (YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Int32 System.Single::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Single_GetHashCode_m7662E1812DDDBC85D464398740CFFC3588DFB2C9 (float* __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Yoga.YogaValue::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t YogaValue_GetHashCode_m0B7087DEF6ED1A319364823B9E8FF37C8E0398E1 (YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B * __this, const RuntimeMethod* method);
// UnityEngine.Yoga.YogaValue UnityEngine.Yoga.YogaValue::Point(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B  YogaValue_Point_m6E8304020D3C143EC19DF5A1099B5E59F8AAEE71 (float ___value0, const RuntimeMethod* method);
// System.IntPtr Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::CreateMarker(System.String,System.UInt16,Unity.Profiling.LowLevel.MarkerFlags,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t ProfilerUnsafeUtility_CreateMarker_m419027084C68545B765B9345949D8BFCB96C51AD (String_t* ___name0, uint16_t ___categoryId1, uint16_t ___flags2, int32_t ___metadataCount3, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929 (const RuntimeMethod* method);
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
// System.Void UnityEngine.Yoga.BaselineFunction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaselineFunction__ctor_m909E73515F8805EED0E15C6ED2CEC3A08CEB03B3 (BaselineFunction_t7C180BD26F5C8850EEDDBEC2471D9A466EF0D24A * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Single UnityEngine.Yoga.BaselineFunction::Invoke(UnityEngine.Yoga.YogaNode,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float BaselineFunction_Invoke_mAEC462B19D69EAC84C6F4D13058EF3DA25BBE647 (BaselineFunction_t7C180BD26F5C8850EEDDBEC2471D9A466EF0D24A * __this, YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * ___node0, float ___width1, float ___height2, const RuntimeMethod* method)
{
	float result = 0.0f;
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
			if (___parameterCount == 3)
			{
				// open
				typedef float (*FunctionPointerType) (YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 *, float, float, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___node0, ___width1, ___height2, targetMethod);
			}
			else
			{
				// closed
				typedef float (*FunctionPointerType) (void*, YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 *, float, float, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___node0, ___width1, ___height2, targetMethod);
			}
		}
		else if (___parameterCount != 3)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker2< float, float, float >::Invoke(targetMethod, ___node0, ___width1, ___height2);
					else
						result = GenericVirtFuncInvoker2< float, float, float >::Invoke(targetMethod, ___node0, ___width1, ___height2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker2< float, float, float >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___node0, ___width1, ___height2);
					else
						result = VirtFuncInvoker2< float, float, float >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___node0, ___width1, ___height2);
				}
			}
			else
			{
				typedef float (*FunctionPointerType) (YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 *, float, float, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___node0, ___width1, ___height2, targetMethod);
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
						result = GenericInterfaceFuncInvoker3< float, YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 *, float, float >::Invoke(targetMethod, targetThis, ___node0, ___width1, ___height2);
					else
						result = GenericVirtFuncInvoker3< float, YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 *, float, float >::Invoke(targetMethod, targetThis, ___node0, ___width1, ___height2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker3< float, YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 *, float, float >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___node0, ___width1, ___height2);
					else
						result = VirtFuncInvoker3< float, YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 *, float, float >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___node0, ___width1, ___height2);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef float (*FunctionPointerType) (YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 *, float, float, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___node0, ___width1, ___height2, targetMethod);
				}
				else
				{
					typedef float (*FunctionPointerType) (void*, YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 *, float, float, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___node0, ___width1, ___height2, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult UnityEngine.Yoga.BaselineFunction::BeginInvoke(UnityEngine.Yoga.YogaNode,System.Single,System.Single,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BaselineFunction_BeginInvoke_mDAEF4BF76CDDDDDB8539AC46D039C2F0B8660F9B (BaselineFunction_t7C180BD26F5C8850EEDDBEC2471D9A466EF0D24A * __this, YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * ___node0, float ___width1, float ___height2, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = ___node0;
	__d_args[1] = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &___width1);
	__d_args[2] = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &___height2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);;
}
// System.Single UnityEngine.Yoga.BaselineFunction::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float BaselineFunction_EndInvoke_m410F2B18598638BEF28F275D98B166EDB7170D34 (BaselineFunction_t7C180BD26F5C8850EEDDBEC2471D9A466EF0D24A * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(float*)UnBox ((RuntimeObject*)__result);;
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
// System.Void UnityEngine.Yoga.Logger::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Logger__ctor_m75E09744F8FD0FC6CD49FD63AD61ECB9A0F9AB47 (Logger_t4B20A24F23C7E3ACC57738D5E2C325474762C5D2 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Yoga.Logger::Invoke(UnityEngine.Yoga.YogaConfig,UnityEngine.Yoga.YogaNode,UnityEngine.Yoga.YogaLogLevel,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Logger_Invoke_m1470015C583899C7B2CB515036CD47C7F0F5C664 (Logger_t4B20A24F23C7E3ACC57738D5E2C325474762C5D2 * __this, YogaConfig_tA06BDF520DE54384107CF42E1E9909DB1C28A7E7 * ___config0, YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * ___node1, int32_t ___level2, String_t* ___message3, const RuntimeMethod* method)
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
			if (___parameterCount == 4)
			{
				// open
				typedef void (*FunctionPointerType) (YogaConfig_tA06BDF520DE54384107CF42E1E9909DB1C28A7E7 *, YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 *, int32_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___config0, ___node1, ___level2, ___message3, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, YogaConfig_tA06BDF520DE54384107CF42E1E9909DB1C28A7E7 *, YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 *, int32_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___config0, ___node1, ___level2, ___message3, targetMethod);
			}
		}
		else if (___parameterCount != 4)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker3< YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 *, int32_t, String_t* >::Invoke(targetMethod, ___config0, ___node1, ___level2, ___message3);
					else
						GenericVirtActionInvoker3< YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 *, int32_t, String_t* >::Invoke(targetMethod, ___config0, ___node1, ___level2, ___message3);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker3< YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 *, int32_t, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___config0, ___node1, ___level2, ___message3);
					else
						VirtActionInvoker3< YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 *, int32_t, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___config0, ___node1, ___level2, ___message3);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (YogaConfig_tA06BDF520DE54384107CF42E1E9909DB1C28A7E7 *, YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 *, int32_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___config0, ___node1, ___level2, ___message3, targetMethod);
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
						GenericInterfaceActionInvoker4< YogaConfig_tA06BDF520DE54384107CF42E1E9909DB1C28A7E7 *, YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 *, int32_t, String_t* >::Invoke(targetMethod, targetThis, ___config0, ___node1, ___level2, ___message3);
					else
						GenericVirtActionInvoker4< YogaConfig_tA06BDF520DE54384107CF42E1E9909DB1C28A7E7 *, YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 *, int32_t, String_t* >::Invoke(targetMethod, targetThis, ___config0, ___node1, ___level2, ___message3);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker4< YogaConfig_tA06BDF520DE54384107CF42E1E9909DB1C28A7E7 *, YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 *, int32_t, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___config0, ___node1, ___level2, ___message3);
					else
						VirtActionInvoker4< YogaConfig_tA06BDF520DE54384107CF42E1E9909DB1C28A7E7 *, YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 *, int32_t, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___config0, ___node1, ___level2, ___message3);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (YogaConfig_tA06BDF520DE54384107CF42E1E9909DB1C28A7E7 *, YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 *, int32_t, String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___config0, ___node1, ___level2, ___message3, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, YogaConfig_tA06BDF520DE54384107CF42E1E9909DB1C28A7E7 *, YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 *, int32_t, String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___config0, ___node1, ___level2, ___message3, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Yoga.Logger::BeginInvoke(UnityEngine.Yoga.YogaConfig,UnityEngine.Yoga.YogaNode,UnityEngine.Yoga.YogaLogLevel,System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Logger_BeginInvoke_m2E008B01C1EA03DFF67F42F846C9463FCA3FD07C (Logger_t4B20A24F23C7E3ACC57738D5E2C325474762C5D2 * __this, YogaConfig_tA06BDF520DE54384107CF42E1E9909DB1C28A7E7 * ___config0, YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * ___node1, int32_t ___level2, String_t* ___message3, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback4, RuntimeObject * ___object5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YogaLogLevel_t06C7639E4D3A1CF30522D78A3E65C09C4FBF66E7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[5] = {0};
	__d_args[0] = ___config0;
	__d_args[1] = ___node1;
	__d_args[2] = Box(YogaLogLevel_t06C7639E4D3A1CF30522D78A3E65C09C4FBF66E7_il2cpp_TypeInfo_var, &___level2);
	__d_args[3] = ___message3;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback4, (RuntimeObject*)___object5);;
}
// System.Void UnityEngine.Yoga.Logger::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Logger_EndInvoke_m91A54AC6F06DC77C35381EF48BCE12B58C599A35 (Logger_t4B20A24F23C7E3ACC57738D5E2C325474762C5D2 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void UnityEngine.Yoga.MeasureFunction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeasureFunction__ctor_m7038E9D4841CB6E3D7FDF401F6FF179B9F2B35C4 (MeasureFunction_tBD19E8A44621B4D553785068ECCF0439CD9666C6 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// UnityEngine.Yoga.YogaSize UnityEngine.Yoga.MeasureFunction::Invoke(UnityEngine.Yoga.YogaNode,System.Single,UnityEngine.Yoga.YogaMeasureMode,System.Single,UnityEngine.Yoga.YogaMeasureMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR YogaSize_tC805BF63DE9A9E4B9984B964AB0A1CFA04ADC1FD  MeasureFunction_Invoke_mEAAC465A891BDA61A7E1804BF40929FE9C34CB58 (MeasureFunction_tBD19E8A44621B4D553785068ECCF0439CD9666C6 * __this, YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * ___node0, float ___width1, int32_t ___widthMode2, float ___height3, int32_t ___heightMode4, const RuntimeMethod* method)
{
	YogaSize_tC805BF63DE9A9E4B9984B964AB0A1CFA04ADC1FD  result;
	memset((&result), 0, sizeof(result));
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
			if (___parameterCount == 5)
			{
				// open
				typedef YogaSize_tC805BF63DE9A9E4B9984B964AB0A1CFA04ADC1FD  (*FunctionPointerType) (YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 *, float, int32_t, float, int32_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___node0, ___width1, ___widthMode2, ___height3, ___heightMode4, targetMethod);
			}
			else
			{
				// closed
				typedef YogaSize_tC805BF63DE9A9E4B9984B964AB0A1CFA04ADC1FD  (*FunctionPointerType) (void*, YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 *, float, int32_t, float, int32_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___node0, ___width1, ___widthMode2, ___height3, ___heightMode4, targetMethod);
			}
		}
		else if (___parameterCount != 5)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker4< YogaSize_tC805BF63DE9A9E4B9984B964AB0A1CFA04ADC1FD , float, int32_t, float, int32_t >::Invoke(targetMethod, ___node0, ___width1, ___widthMode2, ___height3, ___heightMode4);
					else
						result = GenericVirtFuncInvoker4< YogaSize_tC805BF63DE9A9E4B9984B964AB0A1CFA04ADC1FD , float, int32_t, float, int32_t >::Invoke(targetMethod, ___node0, ___width1, ___widthMode2, ___height3, ___heightMode4);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker4< YogaSize_tC805BF63DE9A9E4B9984B964AB0A1CFA04ADC1FD , float, int32_t, float, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___node0, ___width1, ___widthMode2, ___height3, ___heightMode4);
					else
						result = VirtFuncInvoker4< YogaSize_tC805BF63DE9A9E4B9984B964AB0A1CFA04ADC1FD , float, int32_t, float, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___node0, ___width1, ___widthMode2, ___height3, ___heightMode4);
				}
			}
			else
			{
				typedef YogaSize_tC805BF63DE9A9E4B9984B964AB0A1CFA04ADC1FD  (*FunctionPointerType) (YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 *, float, int32_t, float, int32_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___node0, ___width1, ___widthMode2, ___height3, ___heightMode4, targetMethod);
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
						result = GenericInterfaceFuncInvoker5< YogaSize_tC805BF63DE9A9E4B9984B964AB0A1CFA04ADC1FD , YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 *, float, int32_t, float, int32_t >::Invoke(targetMethod, targetThis, ___node0, ___width1, ___widthMode2, ___height3, ___heightMode4);
					else
						result = GenericVirtFuncInvoker5< YogaSize_tC805BF63DE9A9E4B9984B964AB0A1CFA04ADC1FD , YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 *, float, int32_t, float, int32_t >::Invoke(targetMethod, targetThis, ___node0, ___width1, ___widthMode2, ___height3, ___heightMode4);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker5< YogaSize_tC805BF63DE9A9E4B9984B964AB0A1CFA04ADC1FD , YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 *, float, int32_t, float, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___node0, ___width1, ___widthMode2, ___height3, ___heightMode4);
					else
						result = VirtFuncInvoker5< YogaSize_tC805BF63DE9A9E4B9984B964AB0A1CFA04ADC1FD , YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 *, float, int32_t, float, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___node0, ___width1, ___widthMode2, ___height3, ___heightMode4);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef YogaSize_tC805BF63DE9A9E4B9984B964AB0A1CFA04ADC1FD  (*FunctionPointerType) (YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 *, float, int32_t, float, int32_t, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___node0, ___width1, ___widthMode2, ___height3, ___heightMode4, targetMethod);
				}
				else
				{
					typedef YogaSize_tC805BF63DE9A9E4B9984B964AB0A1CFA04ADC1FD  (*FunctionPointerType) (void*, YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 *, float, int32_t, float, int32_t, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___node0, ___width1, ___widthMode2, ___height3, ___heightMode4, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult UnityEngine.Yoga.MeasureFunction::BeginInvoke(UnityEngine.Yoga.YogaNode,System.Single,UnityEngine.Yoga.YogaMeasureMode,System.Single,UnityEngine.Yoga.YogaMeasureMode,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MeasureFunction_BeginInvoke_m57769D192664A7BEBA4F3FC778329F3270A6D0E4 (MeasureFunction_tBD19E8A44621B4D553785068ECCF0439CD9666C6 * __this, YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * ___node0, float ___width1, int32_t ___widthMode2, float ___height3, int32_t ___heightMode4, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback5, RuntimeObject * ___object6, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YogaMeasureMode_tC1410798E2727CAFC5099EC884C7649A5B4D8DC8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[6] = {0};
	__d_args[0] = ___node0;
	__d_args[1] = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &___width1);
	__d_args[2] = Box(YogaMeasureMode_tC1410798E2727CAFC5099EC884C7649A5B4D8DC8_il2cpp_TypeInfo_var, &___widthMode2);
	__d_args[3] = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &___height3);
	__d_args[4] = Box(YogaMeasureMode_tC1410798E2727CAFC5099EC884C7649A5B4D8DC8_il2cpp_TypeInfo_var, &___heightMode4);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback5, (RuntimeObject*)___object6);;
}
// UnityEngine.Yoga.YogaSize UnityEngine.Yoga.MeasureFunction::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR YogaSize_tC805BF63DE9A9E4B9984B964AB0A1CFA04ADC1FD  MeasureFunction_EndInvoke_mAB0815931B1091B252D55E8763440AA1EC957AB8 (MeasureFunction_tBD19E8A44621B4D553785068ECCF0439CD9666C6 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(YogaSize_tC805BF63DE9A9E4B9984B964AB0A1CFA04ADC1FD *)UnBox ((RuntimeObject*)__result);;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Yoga.YogaSize UnityEngine.Yoga.MeasureOutput::Make(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR YogaSize_tC805BF63DE9A9E4B9984B964AB0A1CFA04ADC1FD  MeasureOutput_Make_mBDF2C0A451F1AB8A85B8B4C68AF47C2BAACD0883 (float ___width0, float ___height1, const RuntimeMethod* method)
{
	YogaSize_tC805BF63DE9A9E4B9984B964AB0A1CFA04ADC1FD  V_0;
	memset((&V_0), 0, sizeof(V_0));
	YogaSize_tC805BF63DE9A9E4B9984B964AB0A1CFA04ADC1FD  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(YogaSize_tC805BF63DE9A9E4B9984B964AB0A1CFA04ADC1FD ));
		float L_0 = ___width0;
		(&V_0)->set_width_0(L_0);
		float L_1 = ___height1;
		(&V_0)->set_height_1(L_1);
		YogaSize_tC805BF63DE9A9E4B9984B964AB0A1CFA04ADC1FD  L_2 = V_0;
		V_1 = L_2;
		goto IL_001d;
	}

IL_001d:
	{
		YogaSize_tC805BF63DE9A9E4B9984B964AB0A1CFA04ADC1FD  L_3 = V_1;
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
// System.IntPtr UnityEngine.Yoga.Native::YGNodeNewWithConfig(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Native_YGNodeNewWithConfig_m34DD3C6182BCD5B1D77B9888F05605F76E2ED7BD (intptr_t ___config0, const RuntimeMethod* method)
{
	typedef intptr_t (*Native_YGNodeNewWithConfig_m34DD3C6182BCD5B1D77B9888F05605F76E2ED7BD_ftn) (intptr_t);
	static Native_YGNodeNewWithConfig_m34DD3C6182BCD5B1D77B9888F05605F76E2ED7BD_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeNewWithConfig_m34DD3C6182BCD5B1D77B9888F05605F76E2ED7BD_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeNewWithConfig(System.IntPtr)");
	intptr_t icallRetVal = _il2cpp_icall_func(___config0);
	return icallRetVal;
}
// System.Void UnityEngine.Yoga.Native::YGNodeFree(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeFree_m6C303D358175411146CDF491B744D89A29343626 (intptr_t ___ygNode0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		intptr_t L_0 = ___ygNode0;
		bool L_1;
		L_1 = IntPtr_op_Equality_mD94F3FE43A65684EFF984A7B95E70D2520C0AC73((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0012;
		}
	}
	{
		goto IL_0019;
	}

IL_0012:
	{
		intptr_t L_3 = ___ygNode0;
		Native_YGNodeFreeInternal_mCA9F0DAD2E20A95CABD3951D3E42DAAC268F7292((intptr_t)L_3, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void UnityEngine.Yoga.Native::YGNodeFreeInternal(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeFreeInternal_mCA9F0DAD2E20A95CABD3951D3E42DAAC268F7292 (intptr_t ___ygNode0, const RuntimeMethod* method)
{
	typedef void (*Native_YGNodeFreeInternal_mCA9F0DAD2E20A95CABD3951D3E42DAAC268F7292_ftn) (intptr_t);
	static Native_YGNodeFreeInternal_mCA9F0DAD2E20A95CABD3951D3E42DAAC268F7292_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeFreeInternal_mCA9F0DAD2E20A95CABD3951D3E42DAAC268F7292_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeFreeInternal(System.IntPtr)");
	_il2cpp_icall_func(___ygNode0);
}
// System.Void UnityEngine.Yoga.Native::YGSetManagedObject(System.IntPtr,UnityEngine.Yoga.YogaNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGSetManagedObject_m673178983DC9AD8AACC0D9C634F1FC1839B44DA0 (intptr_t ___ygNode0, YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * ___node1, const RuntimeMethod* method)
{
	typedef void (*Native_YGSetManagedObject_m673178983DC9AD8AACC0D9C634F1FC1839B44DA0_ftn) (intptr_t, YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 *);
	static Native_YGSetManagedObject_m673178983DC9AD8AACC0D9C634F1FC1839B44DA0_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGSetManagedObject_m673178983DC9AD8AACC0D9C634F1FC1839B44DA0_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGSetManagedObject(System.IntPtr,UnityEngine.Yoga.YogaNode)");
	_il2cpp_icall_func(___ygNode0, ___node1);
}
// System.Void UnityEngine.Yoga.Native::YGNodeSetConfig(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeSetConfig_m3E223D988E63C4FA0B6E7C47E22A9113FA0FDD86 (intptr_t ___ygNode0, intptr_t ___config1, const RuntimeMethod* method)
{
	typedef void (*Native_YGNodeSetConfig_m3E223D988E63C4FA0B6E7C47E22A9113FA0FDD86_ftn) (intptr_t, intptr_t);
	static Native_YGNodeSetConfig_m3E223D988E63C4FA0B6E7C47E22A9113FA0FDD86_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeSetConfig_m3E223D988E63C4FA0B6E7C47E22A9113FA0FDD86_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeSetConfig(System.IntPtr,System.IntPtr)");
	_il2cpp_icall_func(___ygNode0, ___config1);
}
// System.IntPtr UnityEngine.Yoga.Native::YGConfigGetDefault()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Native_YGConfigGetDefault_m7D26F4A06C4A4FC51A3E18F6ADD22F51A5E0BCF3 (const RuntimeMethod* method)
{
	typedef intptr_t (*Native_YGConfigGetDefault_m7D26F4A06C4A4FC51A3E18F6ADD22F51A5E0BCF3_ftn) ();
	static Native_YGConfigGetDefault_m7D26F4A06C4A4FC51A3E18F6ADD22F51A5E0BCF3_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGConfigGetDefault_m7D26F4A06C4A4FC51A3E18F6ADD22F51A5E0BCF3_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGConfigGetDefault()");
	intptr_t icallRetVal = _il2cpp_icall_func();
	return icallRetVal;
}
// System.IntPtr UnityEngine.Yoga.Native::YGConfigNew()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Native_YGConfigNew_mE833F137A28FEEF75528603EC1828E70DE3E9ABD (const RuntimeMethod* method)
{
	typedef intptr_t (*Native_YGConfigNew_mE833F137A28FEEF75528603EC1828E70DE3E9ABD_ftn) ();
	static Native_YGConfigNew_mE833F137A28FEEF75528603EC1828E70DE3E9ABD_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGConfigNew_mE833F137A28FEEF75528603EC1828E70DE3E9ABD_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGConfigNew()");
	intptr_t icallRetVal = _il2cpp_icall_func();
	return icallRetVal;
}
// System.Void UnityEngine.Yoga.Native::YGConfigFree(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGConfigFree_mB97AD40C5DBEDC120FE9904BDCDFF7D2E0DD84A3 (intptr_t ___config0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		intptr_t L_0 = ___config0;
		bool L_1;
		L_1 = IntPtr_op_Equality_mD94F3FE43A65684EFF984A7B95E70D2520C0AC73((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0012;
		}
	}
	{
		goto IL_0019;
	}

IL_0012:
	{
		intptr_t L_3 = ___config0;
		Native_YGConfigFreeInternal_mD200B88033A535BB1A5ED1219B1E561DA6ED49A4((intptr_t)L_3, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void UnityEngine.Yoga.Native::YGConfigFreeInternal(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGConfigFreeInternal_mD200B88033A535BB1A5ED1219B1E561DA6ED49A4 (intptr_t ___config0, const RuntimeMethod* method)
{
	typedef void (*Native_YGConfigFreeInternal_mD200B88033A535BB1A5ED1219B1E561DA6ED49A4_ftn) (intptr_t);
	static Native_YGConfigFreeInternal_mD200B88033A535BB1A5ED1219B1E561DA6ED49A4_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGConfigFreeInternal_mD200B88033A535BB1A5ED1219B1E561DA6ED49A4_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGConfigFreeInternal(System.IntPtr)");
	_il2cpp_icall_func(___config0);
}
// System.Void UnityEngine.Yoga.Native::YGConfigSetUseWebDefaults(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGConfigSetUseWebDefaults_m18473CEE9D49131766E3B0A2CFDF22AB38E11EDE (intptr_t ___config0, bool ___useWebDefaults1, const RuntimeMethod* method)
{
	typedef void (*Native_YGConfigSetUseWebDefaults_m18473CEE9D49131766E3B0A2CFDF22AB38E11EDE_ftn) (intptr_t, bool);
	static Native_YGConfigSetUseWebDefaults_m18473CEE9D49131766E3B0A2CFDF22AB38E11EDE_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGConfigSetUseWebDefaults_m18473CEE9D49131766E3B0A2CFDF22AB38E11EDE_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGConfigSetUseWebDefaults(System.IntPtr,System.Boolean)");
	_il2cpp_icall_func(___config0, ___useWebDefaults1);
}
// System.Boolean UnityEngine.Yoga.Native::YGConfigGetUseWebDefaults(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Native_YGConfigGetUseWebDefaults_mA65987BA65EE60236BAB8AB6E877DE4A387C9A31 (intptr_t ___config0, const RuntimeMethod* method)
{
	typedef bool (*Native_YGConfigGetUseWebDefaults_mA65987BA65EE60236BAB8AB6E877DE4A387C9A31_ftn) (intptr_t);
	static Native_YGConfigGetUseWebDefaults_mA65987BA65EE60236BAB8AB6E877DE4A387C9A31_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGConfigGetUseWebDefaults_mA65987BA65EE60236BAB8AB6E877DE4A387C9A31_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGConfigGetUseWebDefaults(System.IntPtr)");
	bool icallRetVal = _il2cpp_icall_func(___config0);
	return icallRetVal;
}
// System.Void UnityEngine.Yoga.Native::YGConfigSetPointScaleFactor(System.IntPtr,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGConfigSetPointScaleFactor_m25EC3A3C7ADA6B7ED8AAA11D620E1175E4353455 (intptr_t ___config0, float ___pixelsInPoint1, const RuntimeMethod* method)
{
	typedef void (*Native_YGConfigSetPointScaleFactor_m25EC3A3C7ADA6B7ED8AAA11D620E1175E4353455_ftn) (intptr_t, float);
	static Native_YGConfigSetPointScaleFactor_m25EC3A3C7ADA6B7ED8AAA11D620E1175E4353455_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGConfigSetPointScaleFactor_m25EC3A3C7ADA6B7ED8AAA11D620E1175E4353455_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGConfigSetPointScaleFactor(System.IntPtr,System.Single)");
	_il2cpp_icall_func(___config0, ___pixelsInPoint1);
}
// System.Void UnityEngine.Yoga.Native::YGNodeInsertChild(System.IntPtr,System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeInsertChild_m997013BB67EAB907B6827A00951079EB3FF25F73 (intptr_t ___node0, intptr_t ___child1, uint32_t ___index2, const RuntimeMethod* method)
{
	typedef void (*Native_YGNodeInsertChild_m997013BB67EAB907B6827A00951079EB3FF25F73_ftn) (intptr_t, intptr_t, uint32_t);
	static Native_YGNodeInsertChild_m997013BB67EAB907B6827A00951079EB3FF25F73_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeInsertChild_m997013BB67EAB907B6827A00951079EB3FF25F73_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeInsertChild(System.IntPtr,System.IntPtr,System.UInt32)");
	_il2cpp_icall_func(___node0, ___child1, ___index2);
}
// System.Void UnityEngine.Yoga.Native::YGNodeRemoveChild(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeRemoveChild_mAD07F43A01FD48A6149B9A69F730EE91DCB501C0 (intptr_t ___node0, intptr_t ___child1, const RuntimeMethod* method)
{
	typedef void (*Native_YGNodeRemoveChild_mAD07F43A01FD48A6149B9A69F730EE91DCB501C0_ftn) (intptr_t, intptr_t);
	static Native_YGNodeRemoveChild_mAD07F43A01FD48A6149B9A69F730EE91DCB501C0_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeRemoveChild_mAD07F43A01FD48A6149B9A69F730EE91DCB501C0_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeRemoveChild(System.IntPtr,System.IntPtr)");
	_il2cpp_icall_func(___node0, ___child1);
}
// System.Void UnityEngine.Yoga.Native::YGNodeCalculateLayout(System.IntPtr,System.Single,System.Single,UnityEngine.Yoga.YogaDirection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeCalculateLayout_m7115180FA93A5A9B06976343886A3B1AFD370F36 (intptr_t ___node0, float ___availableWidth1, float ___availableHeight2, int32_t ___parentDirection3, const RuntimeMethod* method)
{
	typedef void (*Native_YGNodeCalculateLayout_m7115180FA93A5A9B06976343886A3B1AFD370F36_ftn) (intptr_t, float, float, int32_t);
	static Native_YGNodeCalculateLayout_m7115180FA93A5A9B06976343886A3B1AFD370F36_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeCalculateLayout_m7115180FA93A5A9B06976343886A3B1AFD370F36_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeCalculateLayout(System.IntPtr,System.Single,System.Single,UnityEngine.Yoga.YogaDirection)");
	_il2cpp_icall_func(___node0, ___availableWidth1, ___availableHeight2, ___parentDirection3);
}
// System.Void UnityEngine.Yoga.Native::YGNodeMarkDirty(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeMarkDirty_m65AC700A66F6EAF61A621C4E22E3843ED6AE9ED7 (intptr_t ___node0, const RuntimeMethod* method)
{
	typedef void (*Native_YGNodeMarkDirty_m65AC700A66F6EAF61A621C4E22E3843ED6AE9ED7_ftn) (intptr_t);
	static Native_YGNodeMarkDirty_m65AC700A66F6EAF61A621C4E22E3843ED6AE9ED7_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeMarkDirty_m65AC700A66F6EAF61A621C4E22E3843ED6AE9ED7_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeMarkDirty(System.IntPtr)");
	_il2cpp_icall_func(___node0);
}
// System.Boolean UnityEngine.Yoga.Native::YGNodeIsDirty(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Native_YGNodeIsDirty_mC0D246AEA06E9A070468790663D5013ACFCD69D8 (intptr_t ___node0, const RuntimeMethod* method)
{
	typedef bool (*Native_YGNodeIsDirty_mC0D246AEA06E9A070468790663D5013ACFCD69D8_ftn) (intptr_t);
	static Native_YGNodeIsDirty_mC0D246AEA06E9A070468790663D5013ACFCD69D8_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeIsDirty_mC0D246AEA06E9A070468790663D5013ACFCD69D8_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeIsDirty(System.IntPtr)");
	bool icallRetVal = _il2cpp_icall_func(___node0);
	return icallRetVal;
}
// System.Void UnityEngine.Yoga.Native::YGNodeCopyStyle(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeCopyStyle_m17EECD77E6C7EF07F498D9A63BC42B1279ADCAF3 (intptr_t ___dstNode0, intptr_t ___srcNode1, const RuntimeMethod* method)
{
	typedef void (*Native_YGNodeCopyStyle_m17EECD77E6C7EF07F498D9A63BC42B1279ADCAF3_ftn) (intptr_t, intptr_t);
	static Native_YGNodeCopyStyle_m17EECD77E6C7EF07F498D9A63BC42B1279ADCAF3_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeCopyStyle_m17EECD77E6C7EF07F498D9A63BC42B1279ADCAF3_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeCopyStyle(System.IntPtr,System.IntPtr)");
	_il2cpp_icall_func(___dstNode0, ___srcNode1);
}
// System.Void UnityEngine.Yoga.Native::YGNodeSetMeasureFunc(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeSetMeasureFunc_mACE730FF0A2222CAEF76F44674D1B40918AF7B8B (intptr_t ___node0, const RuntimeMethod* method)
{
	typedef void (*Native_YGNodeSetMeasureFunc_mACE730FF0A2222CAEF76F44674D1B40918AF7B8B_ftn) (intptr_t);
	static Native_YGNodeSetMeasureFunc_mACE730FF0A2222CAEF76F44674D1B40918AF7B8B_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeSetMeasureFunc_mACE730FF0A2222CAEF76F44674D1B40918AF7B8B_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeSetMeasureFunc(System.IntPtr)");
	_il2cpp_icall_func(___node0);
}
// System.Void UnityEngine.Yoga.Native::YGNodeRemoveMeasureFunc(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeRemoveMeasureFunc_mA517FB67B62876E9CDA30BC73FC96A076458A2E9 (intptr_t ___node0, const RuntimeMethod* method)
{
	typedef void (*Native_YGNodeRemoveMeasureFunc_mA517FB67B62876E9CDA30BC73FC96A076458A2E9_ftn) (intptr_t);
	static Native_YGNodeRemoveMeasureFunc_mA517FB67B62876E9CDA30BC73FC96A076458A2E9_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeRemoveMeasureFunc_mA517FB67B62876E9CDA30BC73FC96A076458A2E9_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeRemoveMeasureFunc(System.IntPtr)");
	_il2cpp_icall_func(___node0);
}
// System.Void UnityEngine.Yoga.Native::YGNodeMeasureInvoke(UnityEngine.Yoga.YogaNode,System.Single,UnityEngine.Yoga.YogaMeasureMode,System.Single,UnityEngine.Yoga.YogaMeasureMode,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeMeasureInvoke_mDF9008D55FE16A426B971C97E6B257357747BECF (YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * ___node0, float ___width1, int32_t ___widthMode2, float ___height3, int32_t ___heightMode4, intptr_t ___returnValueAddress5, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = ___returnValueAddress5;
		void* L_1;
		L_1 = IntPtr_op_Explicit_mE8B472FDC632CBD121F7ADF4F94546D6610BACDD((intptr_t)L_0, /*hidden argument*/NULL);
		YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * L_2 = ___node0;
		float L_3 = ___width1;
		int32_t L_4 = ___widthMode2;
		float L_5 = ___height3;
		int32_t L_6 = ___heightMode4;
		YogaSize_tC805BF63DE9A9E4B9984B964AB0A1CFA04ADC1FD  L_7;
		L_7 = YogaNode_MeasureInternal_mBB3AB5E64B70DD0BAFE665CEB264316F960E0BE8(L_2, L_3, L_4, L_5, L_6, /*hidden argument*/NULL);
		*(YogaSize_tC805BF63DE9A9E4B9984B964AB0A1CFA04ADC1FD *)L_1 = L_7;
		return;
	}
}
// System.Void UnityEngine.Yoga.Native::YGNodeBaselineInvoke(UnityEngine.Yoga.YogaNode,System.Single,System.Single,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeBaselineInvoke_mA30BA255CCB39372EE7EE1E6AD67A6AAE6CC4E79 (YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * ___node0, float ___width1, float ___height2, intptr_t ___returnValueAddress3, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = ___returnValueAddress3;
		void* L_1;
		L_1 = IntPtr_op_Explicit_mE8B472FDC632CBD121F7ADF4F94546D6610BACDD((intptr_t)L_0, /*hidden argument*/NULL);
		YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * L_2 = ___node0;
		float L_3 = ___width1;
		float L_4 = ___height2;
		float L_5;
		L_5 = YogaNode_BaselineInternal_m0C45C415286A4FEA8E9C38A57B45B431FC6104BF(L_2, L_3, L_4, /*hidden argument*/NULL);
		*((float*)L_1) = (float)L_5;
		return;
	}
}
// System.Void UnityEngine.Yoga.Native::YGNodeSetHasNewLayout(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeSetHasNewLayout_mBB767467C6892B1008AA30E5C47B4797C90DBE5C (intptr_t ___node0, bool ___hasNewLayout1, const RuntimeMethod* method)
{
	typedef void (*Native_YGNodeSetHasNewLayout_mBB767467C6892B1008AA30E5C47B4797C90DBE5C_ftn) (intptr_t, bool);
	static Native_YGNodeSetHasNewLayout_mBB767467C6892B1008AA30E5C47B4797C90DBE5C_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeSetHasNewLayout_mBB767467C6892B1008AA30E5C47B4797C90DBE5C_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeSetHasNewLayout(System.IntPtr,System.Boolean)");
	_il2cpp_icall_func(___node0, ___hasNewLayout1);
}
// System.Boolean UnityEngine.Yoga.Native::YGNodeGetHasNewLayout(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Native_YGNodeGetHasNewLayout_mF7AE5D415C94C0D890B90F70EF68C15281F9BBCD (intptr_t ___node0, const RuntimeMethod* method)
{
	typedef bool (*Native_YGNodeGetHasNewLayout_mF7AE5D415C94C0D890B90F70EF68C15281F9BBCD_ftn) (intptr_t);
	static Native_YGNodeGetHasNewLayout_mF7AE5D415C94C0D890B90F70EF68C15281F9BBCD_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeGetHasNewLayout_mF7AE5D415C94C0D890B90F70EF68C15281F9BBCD_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeGetHasNewLayout(System.IntPtr)");
	bool icallRetVal = _il2cpp_icall_func(___node0);
	return icallRetVal;
}
// UnityEngine.Yoga.YogaDirection UnityEngine.Yoga.Native::YGNodeStyleGetDirection(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Native_YGNodeStyleGetDirection_m06A8E8D697BADA981A42C00971E088246AE5E02D (intptr_t ___node0, const RuntimeMethod* method)
{
	typedef int32_t (*Native_YGNodeStyleGetDirection_m06A8E8D697BADA981A42C00971E088246AE5E02D_ftn) (intptr_t);
	static Native_YGNodeStyleGetDirection_m06A8E8D697BADA981A42C00971E088246AE5E02D_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeStyleGetDirection_m06A8E8D697BADA981A42C00971E088246AE5E02D_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeStyleGetDirection(System.IntPtr)");
	int32_t icallRetVal = _il2cpp_icall_func(___node0);
	return icallRetVal;
}
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetFlexDirection(System.IntPtr,UnityEngine.Yoga.YogaFlexDirection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetFlexDirection_mD337C68CCC952EC9F063C4BB93024CFEBC16F6C9 (intptr_t ___node0, int32_t ___flexDirection1, const RuntimeMethod* method)
{
	typedef void (*Native_YGNodeStyleSetFlexDirection_mD337C68CCC952EC9F063C4BB93024CFEBC16F6C9_ftn) (intptr_t, int32_t);
	static Native_YGNodeStyleSetFlexDirection_mD337C68CCC952EC9F063C4BB93024CFEBC16F6C9_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeStyleSetFlexDirection_mD337C68CCC952EC9F063C4BB93024CFEBC16F6C9_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeStyleSetFlexDirection(System.IntPtr,UnityEngine.Yoga.YogaFlexDirection)");
	_il2cpp_icall_func(___node0, ___flexDirection1);
}
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetJustifyContent(System.IntPtr,UnityEngine.Yoga.YogaJustify)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetJustifyContent_m5743C6895CC78F92738C46D77BC2B2AAC9BFDA17 (intptr_t ___node0, int32_t ___justifyContent1, const RuntimeMethod* method)
{
	typedef void (*Native_YGNodeStyleSetJustifyContent_m5743C6895CC78F92738C46D77BC2B2AAC9BFDA17_ftn) (intptr_t, int32_t);
	static Native_YGNodeStyleSetJustifyContent_m5743C6895CC78F92738C46D77BC2B2AAC9BFDA17_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeStyleSetJustifyContent_m5743C6895CC78F92738C46D77BC2B2AAC9BFDA17_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeStyleSetJustifyContent(System.IntPtr,UnityEngine.Yoga.YogaJustify)");
	_il2cpp_icall_func(___node0, ___justifyContent1);
}
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetAlignContent(System.IntPtr,UnityEngine.Yoga.YogaAlign)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetAlignContent_mADC90EB1C51EB326F0AC50723ED44DA9FEF6BEEC (intptr_t ___node0, int32_t ___alignContent1, const RuntimeMethod* method)
{
	typedef void (*Native_YGNodeStyleSetAlignContent_mADC90EB1C51EB326F0AC50723ED44DA9FEF6BEEC_ftn) (intptr_t, int32_t);
	static Native_YGNodeStyleSetAlignContent_mADC90EB1C51EB326F0AC50723ED44DA9FEF6BEEC_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeStyleSetAlignContent_mADC90EB1C51EB326F0AC50723ED44DA9FEF6BEEC_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeStyleSetAlignContent(System.IntPtr,UnityEngine.Yoga.YogaAlign)");
	_il2cpp_icall_func(___node0, ___alignContent1);
}
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetAlignItems(System.IntPtr,UnityEngine.Yoga.YogaAlign)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetAlignItems_mF4403BB7979A1A49D3AF2F9F33137F8356BD9EF1 (intptr_t ___node0, int32_t ___alignItems1, const RuntimeMethod* method)
{
	typedef void (*Native_YGNodeStyleSetAlignItems_mF4403BB7979A1A49D3AF2F9F33137F8356BD9EF1_ftn) (intptr_t, int32_t);
	static Native_YGNodeStyleSetAlignItems_mF4403BB7979A1A49D3AF2F9F33137F8356BD9EF1_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeStyleSetAlignItems_mF4403BB7979A1A49D3AF2F9F33137F8356BD9EF1_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeStyleSetAlignItems(System.IntPtr,UnityEngine.Yoga.YogaAlign)");
	_il2cpp_icall_func(___node0, ___alignItems1);
}
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetAlignSelf(System.IntPtr,UnityEngine.Yoga.YogaAlign)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetAlignSelf_m85127A5FA62C25B124B6E20BAD2D96CD1A390B5C (intptr_t ___node0, int32_t ___alignSelf1, const RuntimeMethod* method)
{
	typedef void (*Native_YGNodeStyleSetAlignSelf_m85127A5FA62C25B124B6E20BAD2D96CD1A390B5C_ftn) (intptr_t, int32_t);
	static Native_YGNodeStyleSetAlignSelf_m85127A5FA62C25B124B6E20BAD2D96CD1A390B5C_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeStyleSetAlignSelf_m85127A5FA62C25B124B6E20BAD2D96CD1A390B5C_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeStyleSetAlignSelf(System.IntPtr,UnityEngine.Yoga.YogaAlign)");
	_il2cpp_icall_func(___node0, ___alignSelf1);
}
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetPositionType(System.IntPtr,UnityEngine.Yoga.YogaPositionType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetPositionType_m931E5D1662FDDFD56BC0B56220E0077EC857F7C9 (intptr_t ___node0, int32_t ___positionType1, const RuntimeMethod* method)
{
	typedef void (*Native_YGNodeStyleSetPositionType_m931E5D1662FDDFD56BC0B56220E0077EC857F7C9_ftn) (intptr_t, int32_t);
	static Native_YGNodeStyleSetPositionType_m931E5D1662FDDFD56BC0B56220E0077EC857F7C9_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeStyleSetPositionType_m931E5D1662FDDFD56BC0B56220E0077EC857F7C9_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeStyleSetPositionType(System.IntPtr,UnityEngine.Yoga.YogaPositionType)");
	_il2cpp_icall_func(___node0, ___positionType1);
}
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetFlexWrap(System.IntPtr,UnityEngine.Yoga.YogaWrap)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetFlexWrap_mF4697BF10F0A88920F6B0564290CB73824B30D8D (intptr_t ___node0, int32_t ___flexWrap1, const RuntimeMethod* method)
{
	typedef void (*Native_YGNodeStyleSetFlexWrap_mF4697BF10F0A88920F6B0564290CB73824B30D8D_ftn) (intptr_t, int32_t);
	static Native_YGNodeStyleSetFlexWrap_mF4697BF10F0A88920F6B0564290CB73824B30D8D_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeStyleSetFlexWrap_mF4697BF10F0A88920F6B0564290CB73824B30D8D_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeStyleSetFlexWrap(System.IntPtr,UnityEngine.Yoga.YogaWrap)");
	_il2cpp_icall_func(___node0, ___flexWrap1);
}
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetOverflow(System.IntPtr,UnityEngine.Yoga.YogaOverflow)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetOverflow_mAC08C6D43FF77D391448DA8B1D19048B7B170809 (intptr_t ___node0, int32_t ___flexWrap1, const RuntimeMethod* method)
{
	typedef void (*Native_YGNodeStyleSetOverflow_mAC08C6D43FF77D391448DA8B1D19048B7B170809_ftn) (intptr_t, int32_t);
	static Native_YGNodeStyleSetOverflow_mAC08C6D43FF77D391448DA8B1D19048B7B170809_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeStyleSetOverflow_mAC08C6D43FF77D391448DA8B1D19048B7B170809_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeStyleSetOverflow(System.IntPtr,UnityEngine.Yoga.YogaOverflow)");
	_il2cpp_icall_func(___node0, ___flexWrap1);
}
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetDisplay(System.IntPtr,UnityEngine.Yoga.YogaDisplay)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetDisplay_m61D6B7A3DCBAE2ECC44FF026ACEF2060AC6CA392 (intptr_t ___node0, int32_t ___display1, const RuntimeMethod* method)
{
	typedef void (*Native_YGNodeStyleSetDisplay_m61D6B7A3DCBAE2ECC44FF026ACEF2060AC6CA392_ftn) (intptr_t, int32_t);
	static Native_YGNodeStyleSetDisplay_m61D6B7A3DCBAE2ECC44FF026ACEF2060AC6CA392_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeStyleSetDisplay_m61D6B7A3DCBAE2ECC44FF026ACEF2060AC6CA392_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeStyleSetDisplay(System.IntPtr,UnityEngine.Yoga.YogaDisplay)");
	_il2cpp_icall_func(___node0, ___display1);
}
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetFlex(System.IntPtr,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetFlex_mD48AD7688B7EFF2B211E926060D457686B2F2EA8 (intptr_t ___node0, float ___flex1, const RuntimeMethod* method)
{
	typedef void (*Native_YGNodeStyleSetFlex_mD48AD7688B7EFF2B211E926060D457686B2F2EA8_ftn) (intptr_t, float);
	static Native_YGNodeStyleSetFlex_mD48AD7688B7EFF2B211E926060D457686B2F2EA8_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeStyleSetFlex_mD48AD7688B7EFF2B211E926060D457686B2F2EA8_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeStyleSetFlex(System.IntPtr,System.Single)");
	_il2cpp_icall_func(___node0, ___flex1);
}
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetFlexGrow(System.IntPtr,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetFlexGrow_m6C263F5E23F669552073B3BFB8D6B286397394D7 (intptr_t ___node0, float ___flexGrow1, const RuntimeMethod* method)
{
	typedef void (*Native_YGNodeStyleSetFlexGrow_m6C263F5E23F669552073B3BFB8D6B286397394D7_ftn) (intptr_t, float);
	static Native_YGNodeStyleSetFlexGrow_m6C263F5E23F669552073B3BFB8D6B286397394D7_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeStyleSetFlexGrow_m6C263F5E23F669552073B3BFB8D6B286397394D7_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeStyleSetFlexGrow(System.IntPtr,System.Single)");
	_il2cpp_icall_func(___node0, ___flexGrow1);
}
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetFlexShrink(System.IntPtr,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetFlexShrink_m96E5A55C91FF1CBA54E27FCB0B978B1521C8B65B (intptr_t ___node0, float ___flexShrink1, const RuntimeMethod* method)
{
	typedef void (*Native_YGNodeStyleSetFlexShrink_m96E5A55C91FF1CBA54E27FCB0B978B1521C8B65B_ftn) (intptr_t, float);
	static Native_YGNodeStyleSetFlexShrink_m96E5A55C91FF1CBA54E27FCB0B978B1521C8B65B_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeStyleSetFlexShrink_m96E5A55C91FF1CBA54E27FCB0B978B1521C8B65B_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeStyleSetFlexShrink(System.IntPtr,System.Single)");
	_il2cpp_icall_func(___node0, ___flexShrink1);
}
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetFlexBasis(System.IntPtr,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetFlexBasis_m1C88BD795249E06BBA6F5104417116836ECD83D6 (intptr_t ___node0, float ___flexBasis1, const RuntimeMethod* method)
{
	typedef void (*Native_YGNodeStyleSetFlexBasis_m1C88BD795249E06BBA6F5104417116836ECD83D6_ftn) (intptr_t, float);
	static Native_YGNodeStyleSetFlexBasis_m1C88BD795249E06BBA6F5104417116836ECD83D6_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeStyleSetFlexBasis_m1C88BD795249E06BBA6F5104417116836ECD83D6_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeStyleSetFlexBasis(System.IntPtr,System.Single)");
	_il2cpp_icall_func(___node0, ___flexBasis1);
}
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetFlexBasisPercent(System.IntPtr,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetFlexBasisPercent_m35BBB74B616C121FCCB61E4D123BCF3F3B0FFB7E (intptr_t ___node0, float ___flexBasis1, const RuntimeMethod* method)
{
	typedef void (*Native_YGNodeStyleSetFlexBasisPercent_m35BBB74B616C121FCCB61E4D123BCF3F3B0FFB7E_ftn) (intptr_t, float);
	static Native_YGNodeStyleSetFlexBasisPercent_m35BBB74B616C121FCCB61E4D123BCF3F3B0FFB7E_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeStyleSetFlexBasisPercent_m35BBB74B616C121FCCB61E4D123BCF3F3B0FFB7E_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeStyleSetFlexBasisPercent(System.IntPtr,System.Single)");
	_il2cpp_icall_func(___node0, ___flexBasis1);
}
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetFlexBasisAuto(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetFlexBasisAuto_m736FE09858DC0FE8675039649C90C6C0342A9106 (intptr_t ___node0, const RuntimeMethod* method)
{
	typedef void (*Native_YGNodeStyleSetFlexBasisAuto_m736FE09858DC0FE8675039649C90C6C0342A9106_ftn) (intptr_t);
	static Native_YGNodeStyleSetFlexBasisAuto_m736FE09858DC0FE8675039649C90C6C0342A9106_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeStyleSetFlexBasisAuto_m736FE09858DC0FE8675039649C90C6C0342A9106_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeStyleSetFlexBasisAuto(System.IntPtr)");
	_il2cpp_icall_func(___node0);
}
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetWidth(System.IntPtr,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetWidth_m4AF3873909E2D448C810B29D7F590893F4CBB1E9 (intptr_t ___node0, float ___width1, const RuntimeMethod* method)
{
	typedef void (*Native_YGNodeStyleSetWidth_m4AF3873909E2D448C810B29D7F590893F4CBB1E9_ftn) (intptr_t, float);
	static Native_YGNodeStyleSetWidth_m4AF3873909E2D448C810B29D7F590893F4CBB1E9_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeStyleSetWidth_m4AF3873909E2D448C810B29D7F590893F4CBB1E9_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeStyleSetWidth(System.IntPtr,System.Single)");
	_il2cpp_icall_func(___node0, ___width1);
}
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetWidthPercent(System.IntPtr,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetWidthPercent_mA7697E8CBA3571C29B9AD5EFE6938895E84A8FD3 (intptr_t ___node0, float ___width1, const RuntimeMethod* method)
{
	typedef void (*Native_YGNodeStyleSetWidthPercent_mA7697E8CBA3571C29B9AD5EFE6938895E84A8FD3_ftn) (intptr_t, float);
	static Native_YGNodeStyleSetWidthPercent_mA7697E8CBA3571C29B9AD5EFE6938895E84A8FD3_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeStyleSetWidthPercent_mA7697E8CBA3571C29B9AD5EFE6938895E84A8FD3_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeStyleSetWidthPercent(System.IntPtr,System.Single)");
	_il2cpp_icall_func(___node0, ___width1);
}
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetWidthAuto(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetWidthAuto_mFF75E6B4D8B3307525CF8C9D5F0BE8E0BFD6385F (intptr_t ___node0, const RuntimeMethod* method)
{
	typedef void (*Native_YGNodeStyleSetWidthAuto_mFF75E6B4D8B3307525CF8C9D5F0BE8E0BFD6385F_ftn) (intptr_t);
	static Native_YGNodeStyleSetWidthAuto_mFF75E6B4D8B3307525CF8C9D5F0BE8E0BFD6385F_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeStyleSetWidthAuto_mFF75E6B4D8B3307525CF8C9D5F0BE8E0BFD6385F_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeStyleSetWidthAuto(System.IntPtr)");
	_il2cpp_icall_func(___node0);
}
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetHeight(System.IntPtr,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetHeight_m2673494A6716236B6682EA37B2B88A55753FB8C1 (intptr_t ___node0, float ___height1, const RuntimeMethod* method)
{
	typedef void (*Native_YGNodeStyleSetHeight_m2673494A6716236B6682EA37B2B88A55753FB8C1_ftn) (intptr_t, float);
	static Native_YGNodeStyleSetHeight_m2673494A6716236B6682EA37B2B88A55753FB8C1_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeStyleSetHeight_m2673494A6716236B6682EA37B2B88A55753FB8C1_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeStyleSetHeight(System.IntPtr,System.Single)");
	_il2cpp_icall_func(___node0, ___height1);
}
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetHeightPercent(System.IntPtr,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetHeightPercent_mDC1CE1B843CAAD97F55885B68756DF07BBCB99CF (intptr_t ___node0, float ___height1, const RuntimeMethod* method)
{
	typedef void (*Native_YGNodeStyleSetHeightPercent_mDC1CE1B843CAAD97F55885B68756DF07BBCB99CF_ftn) (intptr_t, float);
	static Native_YGNodeStyleSetHeightPercent_mDC1CE1B843CAAD97F55885B68756DF07BBCB99CF_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeStyleSetHeightPercent_mDC1CE1B843CAAD97F55885B68756DF07BBCB99CF_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeStyleSetHeightPercent(System.IntPtr,System.Single)");
	_il2cpp_icall_func(___node0, ___height1);
}
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetHeightAuto(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetHeightAuto_mFC9F4A23BB7D826849EFA76216B8A7EDCF9A51AB (intptr_t ___node0, const RuntimeMethod* method)
{
	typedef void (*Native_YGNodeStyleSetHeightAuto_mFC9F4A23BB7D826849EFA76216B8A7EDCF9A51AB_ftn) (intptr_t);
	static Native_YGNodeStyleSetHeightAuto_mFC9F4A23BB7D826849EFA76216B8A7EDCF9A51AB_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeStyleSetHeightAuto_mFC9F4A23BB7D826849EFA76216B8A7EDCF9A51AB_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeStyleSetHeightAuto(System.IntPtr)");
	_il2cpp_icall_func(___node0);
}
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetMinWidth(System.IntPtr,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetMinWidth_mF65AD8956B8F48616DEC66E05CB7FA2163097F85 (intptr_t ___node0, float ___minWidth1, const RuntimeMethod* method)
{
	typedef void (*Native_YGNodeStyleSetMinWidth_mF65AD8956B8F48616DEC66E05CB7FA2163097F85_ftn) (intptr_t, float);
	static Native_YGNodeStyleSetMinWidth_mF65AD8956B8F48616DEC66E05CB7FA2163097F85_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeStyleSetMinWidth_mF65AD8956B8F48616DEC66E05CB7FA2163097F85_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeStyleSetMinWidth(System.IntPtr,System.Single)");
	_il2cpp_icall_func(___node0, ___minWidth1);
}
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetMinWidthPercent(System.IntPtr,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetMinWidthPercent_m3D8103930E9C61DF232833E2FD34A863F8F5B6FD (intptr_t ___node0, float ___minWidth1, const RuntimeMethod* method)
{
	typedef void (*Native_YGNodeStyleSetMinWidthPercent_m3D8103930E9C61DF232833E2FD34A863F8F5B6FD_ftn) (intptr_t, float);
	static Native_YGNodeStyleSetMinWidthPercent_m3D8103930E9C61DF232833E2FD34A863F8F5B6FD_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeStyleSetMinWidthPercent_m3D8103930E9C61DF232833E2FD34A863F8F5B6FD_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeStyleSetMinWidthPercent(System.IntPtr,System.Single)");
	_il2cpp_icall_func(___node0, ___minWidth1);
}
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetMinHeight(System.IntPtr,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetMinHeight_m8789333D92D9D95B747E5BFA18EF13AC97DF9EE8 (intptr_t ___node0, float ___minHeight1, const RuntimeMethod* method)
{
	typedef void (*Native_YGNodeStyleSetMinHeight_m8789333D92D9D95B747E5BFA18EF13AC97DF9EE8_ftn) (intptr_t, float);
	static Native_YGNodeStyleSetMinHeight_m8789333D92D9D95B747E5BFA18EF13AC97DF9EE8_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeStyleSetMinHeight_m8789333D92D9D95B747E5BFA18EF13AC97DF9EE8_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeStyleSetMinHeight(System.IntPtr,System.Single)");
	_il2cpp_icall_func(___node0, ___minHeight1);
}
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetMinHeightPercent(System.IntPtr,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetMinHeightPercent_mAF845F4EA74D6F4B9A43BEB7DD3A00626B9AB8EA (intptr_t ___node0, float ___minHeight1, const RuntimeMethod* method)
{
	typedef void (*Native_YGNodeStyleSetMinHeightPercent_mAF845F4EA74D6F4B9A43BEB7DD3A00626B9AB8EA_ftn) (intptr_t, float);
	static Native_YGNodeStyleSetMinHeightPercent_mAF845F4EA74D6F4B9A43BEB7DD3A00626B9AB8EA_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeStyleSetMinHeightPercent_mAF845F4EA74D6F4B9A43BEB7DD3A00626B9AB8EA_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeStyleSetMinHeightPercent(System.IntPtr,System.Single)");
	_il2cpp_icall_func(___node0, ___minHeight1);
}
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetMaxWidth(System.IntPtr,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetMaxWidth_m315A133A42ED064D365780F80D7A888D20CD467D (intptr_t ___node0, float ___maxWidth1, const RuntimeMethod* method)
{
	typedef void (*Native_YGNodeStyleSetMaxWidth_m315A133A42ED064D365780F80D7A888D20CD467D_ftn) (intptr_t, float);
	static Native_YGNodeStyleSetMaxWidth_m315A133A42ED064D365780F80D7A888D20CD467D_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeStyleSetMaxWidth_m315A133A42ED064D365780F80D7A888D20CD467D_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeStyleSetMaxWidth(System.IntPtr,System.Single)");
	_il2cpp_icall_func(___node0, ___maxWidth1);
}
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetMaxWidthPercent(System.IntPtr,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetMaxWidthPercent_mE0E336463F2EF0BE14FD1589F9EDCFE285FAB49E (intptr_t ___node0, float ___maxWidth1, const RuntimeMethod* method)
{
	typedef void (*Native_YGNodeStyleSetMaxWidthPercent_mE0E336463F2EF0BE14FD1589F9EDCFE285FAB49E_ftn) (intptr_t, float);
	static Native_YGNodeStyleSetMaxWidthPercent_mE0E336463F2EF0BE14FD1589F9EDCFE285FAB49E_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeStyleSetMaxWidthPercent_mE0E336463F2EF0BE14FD1589F9EDCFE285FAB49E_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeStyleSetMaxWidthPercent(System.IntPtr,System.Single)");
	_il2cpp_icall_func(___node0, ___maxWidth1);
}
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetMaxHeight(System.IntPtr,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetMaxHeight_m1AA96D9430C774C071255FAE6B01754B03A00181 (intptr_t ___node0, float ___maxHeight1, const RuntimeMethod* method)
{
	typedef void (*Native_YGNodeStyleSetMaxHeight_m1AA96D9430C774C071255FAE6B01754B03A00181_ftn) (intptr_t, float);
	static Native_YGNodeStyleSetMaxHeight_m1AA96D9430C774C071255FAE6B01754B03A00181_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeStyleSetMaxHeight_m1AA96D9430C774C071255FAE6B01754B03A00181_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeStyleSetMaxHeight(System.IntPtr,System.Single)");
	_il2cpp_icall_func(___node0, ___maxHeight1);
}
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetMaxHeightPercent(System.IntPtr,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetMaxHeightPercent_mA3A4488019B086745E30A0497699911A20D02200 (intptr_t ___node0, float ___maxHeight1, const RuntimeMethod* method)
{
	typedef void (*Native_YGNodeStyleSetMaxHeightPercent_mA3A4488019B086745E30A0497699911A20D02200_ftn) (intptr_t, float);
	static Native_YGNodeStyleSetMaxHeightPercent_mA3A4488019B086745E30A0497699911A20D02200_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeStyleSetMaxHeightPercent_mA3A4488019B086745E30A0497699911A20D02200_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeStyleSetMaxHeightPercent(System.IntPtr,System.Single)");
	_il2cpp_icall_func(___node0, ___maxHeight1);
}
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetPosition(System.IntPtr,UnityEngine.Yoga.YogaEdge,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetPosition_m0375E96047A4DEAF2B629F7F6395C0387E945CD4 (intptr_t ___node0, int32_t ___edge1, float ___position2, const RuntimeMethod* method)
{
	typedef void (*Native_YGNodeStyleSetPosition_m0375E96047A4DEAF2B629F7F6395C0387E945CD4_ftn) (intptr_t, int32_t, float);
	static Native_YGNodeStyleSetPosition_m0375E96047A4DEAF2B629F7F6395C0387E945CD4_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeStyleSetPosition_m0375E96047A4DEAF2B629F7F6395C0387E945CD4_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeStyleSetPosition(System.IntPtr,UnityEngine.Yoga.YogaEdge,System.Single)");
	_il2cpp_icall_func(___node0, ___edge1, ___position2);
}
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetPositionPercent(System.IntPtr,UnityEngine.Yoga.YogaEdge,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetPositionPercent_m0914E794B0CAF017C9942D528C97868BA42CDE02 (intptr_t ___node0, int32_t ___edge1, float ___position2, const RuntimeMethod* method)
{
	typedef void (*Native_YGNodeStyleSetPositionPercent_m0914E794B0CAF017C9942D528C97868BA42CDE02_ftn) (intptr_t, int32_t, float);
	static Native_YGNodeStyleSetPositionPercent_m0914E794B0CAF017C9942D528C97868BA42CDE02_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeStyleSetPositionPercent_m0914E794B0CAF017C9942D528C97868BA42CDE02_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeStyleSetPositionPercent(System.IntPtr,UnityEngine.Yoga.YogaEdge,System.Single)");
	_il2cpp_icall_func(___node0, ___edge1, ___position2);
}
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetMargin(System.IntPtr,UnityEngine.Yoga.YogaEdge,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetMargin_m794F2082F3DB3CD5657CA8F593A5B20BDC394E9B (intptr_t ___node0, int32_t ___edge1, float ___margin2, const RuntimeMethod* method)
{
	typedef void (*Native_YGNodeStyleSetMargin_m794F2082F3DB3CD5657CA8F593A5B20BDC394E9B_ftn) (intptr_t, int32_t, float);
	static Native_YGNodeStyleSetMargin_m794F2082F3DB3CD5657CA8F593A5B20BDC394E9B_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeStyleSetMargin_m794F2082F3DB3CD5657CA8F593A5B20BDC394E9B_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeStyleSetMargin(System.IntPtr,UnityEngine.Yoga.YogaEdge,System.Single)");
	_il2cpp_icall_func(___node0, ___edge1, ___margin2);
}
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetMarginPercent(System.IntPtr,UnityEngine.Yoga.YogaEdge,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetMarginPercent_m78660EF35C712CE8B7EF72A00A9881338F9AD6D7 (intptr_t ___node0, int32_t ___edge1, float ___margin2, const RuntimeMethod* method)
{
	typedef void (*Native_YGNodeStyleSetMarginPercent_m78660EF35C712CE8B7EF72A00A9881338F9AD6D7_ftn) (intptr_t, int32_t, float);
	static Native_YGNodeStyleSetMarginPercent_m78660EF35C712CE8B7EF72A00A9881338F9AD6D7_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeStyleSetMarginPercent_m78660EF35C712CE8B7EF72A00A9881338F9AD6D7_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeStyleSetMarginPercent(System.IntPtr,UnityEngine.Yoga.YogaEdge,System.Single)");
	_il2cpp_icall_func(___node0, ___edge1, ___margin2);
}
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetMarginAuto(System.IntPtr,UnityEngine.Yoga.YogaEdge)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetMarginAuto_mB8125F645998A964419DA4006EB158DEFED0EBAE (intptr_t ___node0, int32_t ___edge1, const RuntimeMethod* method)
{
	typedef void (*Native_YGNodeStyleSetMarginAuto_mB8125F645998A964419DA4006EB158DEFED0EBAE_ftn) (intptr_t, int32_t);
	static Native_YGNodeStyleSetMarginAuto_mB8125F645998A964419DA4006EB158DEFED0EBAE_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeStyleSetMarginAuto_mB8125F645998A964419DA4006EB158DEFED0EBAE_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeStyleSetMarginAuto(System.IntPtr,UnityEngine.Yoga.YogaEdge)");
	_il2cpp_icall_func(___node0, ___edge1);
}
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetPadding(System.IntPtr,UnityEngine.Yoga.YogaEdge,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetPadding_m951E42923BE35DBDE4CB346128A8A47BDB09BB49 (intptr_t ___node0, int32_t ___edge1, float ___padding2, const RuntimeMethod* method)
{
	typedef void (*Native_YGNodeStyleSetPadding_m951E42923BE35DBDE4CB346128A8A47BDB09BB49_ftn) (intptr_t, int32_t, float);
	static Native_YGNodeStyleSetPadding_m951E42923BE35DBDE4CB346128A8A47BDB09BB49_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeStyleSetPadding_m951E42923BE35DBDE4CB346128A8A47BDB09BB49_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeStyleSetPadding(System.IntPtr,UnityEngine.Yoga.YogaEdge,System.Single)");
	_il2cpp_icall_func(___node0, ___edge1, ___padding2);
}
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetPaddingPercent(System.IntPtr,UnityEngine.Yoga.YogaEdge,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetPaddingPercent_mDD045CB68F294C1211769AAF89DACA7FCD765412 (intptr_t ___node0, int32_t ___edge1, float ___padding2, const RuntimeMethod* method)
{
	typedef void (*Native_YGNodeStyleSetPaddingPercent_mDD045CB68F294C1211769AAF89DACA7FCD765412_ftn) (intptr_t, int32_t, float);
	static Native_YGNodeStyleSetPaddingPercent_mDD045CB68F294C1211769AAF89DACA7FCD765412_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeStyleSetPaddingPercent_mDD045CB68F294C1211769AAF89DACA7FCD765412_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeStyleSetPaddingPercent(System.IntPtr,UnityEngine.Yoga.YogaEdge,System.Single)");
	_il2cpp_icall_func(___node0, ___edge1, ___padding2);
}
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetBorder(System.IntPtr,UnityEngine.Yoga.YogaEdge,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetBorder_mEADDE749B55A699CF094D463856E5856BD417361 (intptr_t ___node0, int32_t ___edge1, float ___border2, const RuntimeMethod* method)
{
	typedef void (*Native_YGNodeStyleSetBorder_mEADDE749B55A699CF094D463856E5856BD417361_ftn) (intptr_t, int32_t, float);
	static Native_YGNodeStyleSetBorder_mEADDE749B55A699CF094D463856E5856BD417361_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeStyleSetBorder_mEADDE749B55A699CF094D463856E5856BD417361_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeStyleSetBorder(System.IntPtr,UnityEngine.Yoga.YogaEdge,System.Single)");
	_il2cpp_icall_func(___node0, ___edge1, ___border2);
}
// System.Single UnityEngine.Yoga.Native::YGNodeLayoutGetLeft(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Native_YGNodeLayoutGetLeft_m9C2544E2F70884B9D872E4F732710E1900588140 (intptr_t ___node0, const RuntimeMethod* method)
{
	typedef float (*Native_YGNodeLayoutGetLeft_m9C2544E2F70884B9D872E4F732710E1900588140_ftn) (intptr_t);
	static Native_YGNodeLayoutGetLeft_m9C2544E2F70884B9D872E4F732710E1900588140_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeLayoutGetLeft_m9C2544E2F70884B9D872E4F732710E1900588140_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeLayoutGetLeft(System.IntPtr)");
	float icallRetVal = _il2cpp_icall_func(___node0);
	return icallRetVal;
}
// System.Single UnityEngine.Yoga.Native::YGNodeLayoutGetTop(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Native_YGNodeLayoutGetTop_m0FFD848971C8B63B4261274C5CD4F910680CB700 (intptr_t ___node0, const RuntimeMethod* method)
{
	typedef float (*Native_YGNodeLayoutGetTop_m0FFD848971C8B63B4261274C5CD4F910680CB700_ftn) (intptr_t);
	static Native_YGNodeLayoutGetTop_m0FFD848971C8B63B4261274C5CD4F910680CB700_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeLayoutGetTop_m0FFD848971C8B63B4261274C5CD4F910680CB700_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeLayoutGetTop(System.IntPtr)");
	float icallRetVal = _il2cpp_icall_func(___node0);
	return icallRetVal;
}
// System.Single UnityEngine.Yoga.Native::YGNodeLayoutGetWidth(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Native_YGNodeLayoutGetWidth_m4C28192C45D735E29919D50925ECEDF5E9ED28C9 (intptr_t ___node0, const RuntimeMethod* method)
{
	typedef float (*Native_YGNodeLayoutGetWidth_m4C28192C45D735E29919D50925ECEDF5E9ED28C9_ftn) (intptr_t);
	static Native_YGNodeLayoutGetWidth_m4C28192C45D735E29919D50925ECEDF5E9ED28C9_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeLayoutGetWidth_m4C28192C45D735E29919D50925ECEDF5E9ED28C9_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeLayoutGetWidth(System.IntPtr)");
	float icallRetVal = _il2cpp_icall_func(___node0);
	return icallRetVal;
}
// System.Single UnityEngine.Yoga.Native::YGNodeLayoutGetHeight(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Native_YGNodeLayoutGetHeight_mB69A179FF0D0A1FD3C0246E5C3D9050B9A0DC9E9 (intptr_t ___node0, const RuntimeMethod* method)
{
	typedef float (*Native_YGNodeLayoutGetHeight_mB69A179FF0D0A1FD3C0246E5C3D9050B9A0DC9E9_ftn) (intptr_t);
	static Native_YGNodeLayoutGetHeight_mB69A179FF0D0A1FD3C0246E5C3D9050B9A0DC9E9_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeLayoutGetHeight_mB69A179FF0D0A1FD3C0246E5C3D9050B9A0DC9E9_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeLayoutGetHeight(System.IntPtr)");
	float icallRetVal = _il2cpp_icall_func(___node0);
	return icallRetVal;
}
// System.Single UnityEngine.Yoga.Native::YGNodeLayoutGetMargin(System.IntPtr,UnityEngine.Yoga.YogaEdge)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Native_YGNodeLayoutGetMargin_mC23ED3D77B7FD20FDBD5B8CAA765B7DA8CAD9402 (intptr_t ___node0, int32_t ___edge1, const RuntimeMethod* method)
{
	typedef float (*Native_YGNodeLayoutGetMargin_mC23ED3D77B7FD20FDBD5B8CAA765B7DA8CAD9402_ftn) (intptr_t, int32_t);
	static Native_YGNodeLayoutGetMargin_mC23ED3D77B7FD20FDBD5B8CAA765B7DA8CAD9402_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeLayoutGetMargin_mC23ED3D77B7FD20FDBD5B8CAA765B7DA8CAD9402_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeLayoutGetMargin(System.IntPtr,UnityEngine.Yoga.YogaEdge)");
	float icallRetVal = _il2cpp_icall_func(___node0, ___edge1);
	return icallRetVal;
}
// System.Single UnityEngine.Yoga.Native::YGNodeLayoutGetPadding(System.IntPtr,UnityEngine.Yoga.YogaEdge)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Native_YGNodeLayoutGetPadding_m1A6212C89C759D60E2E2EE02E5C9CD6E05A33E41 (intptr_t ___node0, int32_t ___edge1, const RuntimeMethod* method)
{
	typedef float (*Native_YGNodeLayoutGetPadding_m1A6212C89C759D60E2E2EE02E5C9CD6E05A33E41_ftn) (intptr_t, int32_t);
	static Native_YGNodeLayoutGetPadding_m1A6212C89C759D60E2E2EE02E5C9CD6E05A33E41_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeLayoutGetPadding_m1A6212C89C759D60E2E2EE02E5C9CD6E05A33E41_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeLayoutGetPadding(System.IntPtr,UnityEngine.Yoga.YogaEdge)");
	float icallRetVal = _il2cpp_icall_func(___node0, ___edge1);
	return icallRetVal;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Vector2 UnityEngine.UIElements.TextNative::GetCursorPosition(UnityEngine.UIElements.TextNativeSettings,UnityEngine.Rect,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  TextNative_GetCursorPosition_mEEDD0EFAB4D077182361E691646B1D7F850731B2 (TextNativeSettings_t2C255BA301B06D04235208446E75F9CE0B3A4CE3  ___settings0, Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___rect1, int32_t ___cursorIndex2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral67BE3EF2BBE376CBFE6CC45672B2C7742A3C2520);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		TextNativeSettings_t2C255BA301B06D04235208446E75F9CE0B3A4CE3  L_0 = ___settings0;
		Font_tB53D3F362CB1A0B92307B362826F212AE2D2A6A9 * L_1 = L_0.get_font_1();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_1, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0025;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(_stringLiteral67BE3EF2BBE376CBFE6CC45672B2C7742A3C2520, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4;
		L_4 = Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828(/*hidden argument*/NULL);
		V_1 = L_4;
		goto IL_0030;
	}

IL_0025:
	{
		TextNativeSettings_t2C255BA301B06D04235208446E75F9CE0B3A4CE3  L_5 = ___settings0;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_6 = ___rect1;
		int32_t L_7 = ___cursorIndex2;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_8;
		L_8 = TextNative_DoGetCursorPosition_mFDBC5EF9136982DB1B1D8D99D14A01A482AD4ED4(L_5, L_6, L_7, /*hidden argument*/NULL);
		V_1 = L_8;
		goto IL_0030;
	}

IL_0030:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_9 = V_1;
		return L_9;
	}
}
// System.Single UnityEngine.UIElements.TextNative::ComputeTextWidth(UnityEngine.UIElements.TextNativeSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TextNative_ComputeTextWidth_m28873C2A990E267C2E069342373645A3FD249375 (TextNativeSettings_t2C255BA301B06D04235208446E75F9CE0B3A4CE3  ___settings0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral67BE3EF2BBE376CBFE6CC45672B2C7742A3C2520);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		TextNativeSettings_t2C255BA301B06D04235208446E75F9CE0B3A4CE3  L_0 = ___settings0;
		Font_tB53D3F362CB1A0B92307B362826F212AE2D2A6A9 * L_1 = L_0.get_font_1();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_1, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0025;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(_stringLiteral67BE3EF2BBE376CBFE6CC45672B2C7742A3C2520, /*hidden argument*/NULL);
		V_1 = (0.0f);
		goto IL_0045;
	}

IL_0025:
	{
		TextNativeSettings_t2C255BA301B06D04235208446E75F9CE0B3A4CE3  L_4 = ___settings0;
		String_t* L_5 = L_4.get_text_0();
		bool L_6;
		L_6 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_5, /*hidden argument*/NULL);
		V_2 = L_6;
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_003c;
		}
	}
	{
		V_1 = (0.0f);
		goto IL_0045;
	}

IL_003c:
	{
		TextNativeSettings_t2C255BA301B06D04235208446E75F9CE0B3A4CE3  L_8 = ___settings0;
		float L_9;
		L_9 = TextNative_DoComputeTextWidth_m47F92E5947EF9CD981F6BB9D4638F862FED9A741(L_8, /*hidden argument*/NULL);
		V_1 = L_9;
		goto IL_0045;
	}

IL_0045:
	{
		float L_10 = V_1;
		return L_10;
	}
}
// System.Single UnityEngine.UIElements.TextNative::ComputeTextHeight(UnityEngine.UIElements.TextNativeSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TextNative_ComputeTextHeight_m89B61D89C549FD1473367E6D07469B7B0EB11470 (TextNativeSettings_t2C255BA301B06D04235208446E75F9CE0B3A4CE3  ___settings0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral67BE3EF2BBE376CBFE6CC45672B2C7742A3C2520);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		TextNativeSettings_t2C255BA301B06D04235208446E75F9CE0B3A4CE3  L_0 = ___settings0;
		Font_tB53D3F362CB1A0B92307B362826F212AE2D2A6A9 * L_1 = L_0.get_font_1();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_1, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0025;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(_stringLiteral67BE3EF2BBE376CBFE6CC45672B2C7742A3C2520, /*hidden argument*/NULL);
		V_1 = (0.0f);
		goto IL_0045;
	}

IL_0025:
	{
		TextNativeSettings_t2C255BA301B06D04235208446E75F9CE0B3A4CE3  L_4 = ___settings0;
		String_t* L_5 = L_4.get_text_0();
		bool L_6;
		L_6 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_5, /*hidden argument*/NULL);
		V_2 = L_6;
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_003c;
		}
	}
	{
		V_1 = (0.0f);
		goto IL_0045;
	}

IL_003c:
	{
		TextNativeSettings_t2C255BA301B06D04235208446E75F9CE0B3A4CE3  L_8 = ___settings0;
		float L_9;
		L_9 = TextNative_DoComputeTextHeight_m08980C0F3095C1C5FAEDF2C35FD34B7E55234942(L_8, /*hidden argument*/NULL);
		V_1 = L_9;
		goto IL_0045;
	}

IL_0045:
	{
		float L_10 = V_1;
		return L_10;
	}
}
// Unity.Collections.NativeArray`1<UnityEngine.UIElements.TextVertex> UnityEngine.UIElements.TextNative::GetVertices(UnityEngine.UIElements.TextNativeSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tBC4AC2035CCDD9C5FE5733692EB415A4DF3D250C  TextNative_GetVertices_m390A780F31522BA8017824CF1C2C4271A3F01F58 (TextNativeSettings_t2C255BA301B06D04235208446E75F9CE0B3A4CE3  ___settings0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArrayUnsafeUtility_GetUnsafePtr_TisTextVertex_t4993EB0C6C0D22422A68B1FA043B800D94C735B3_m4057325E5816B5BD009A38797B41AE89F1B1BA52_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1__ctor_m101008BFDB4E901343E8DA4F0969383ECDB0C1BE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeUtility_SizeOf_TisTextVertex_t4993EB0C6C0D22422A68B1FA043B800D94C735B3_m24EBF391516080B8B4E4C5992337FAF271E51526_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	NativeArray_1_tBC4AC2035CCDD9C5FE5733692EB415A4DF3D250C  V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	NativeArray_1_tBC4AC2035CCDD9C5FE5733692EB415A4DF3D250C  V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		V_0 = 0;
		TextNativeSettings_t2C255BA301B06D04235208446E75F9CE0B3A4CE3  L_0 = ___settings0;
		int32_t L_1;
		L_1 = UnsafeUtility_SizeOf_TisTextVertex_t4993EB0C6C0D22422A68B1FA043B800D94C735B3_m24EBF391516080B8B4E4C5992337FAF271E51526(/*hidden argument*/UnsafeUtility_SizeOf_TisTextVertex_t4993EB0C6C0D22422A68B1FA043B800D94C735B3_m24EBF391516080B8B4E4C5992337FAF271E51526_RuntimeMethod_var);
		TextNative_GetVertices_m9603A86C03C55C483932264E4A39151C56D1E7AD(L_0, (intptr_t)(0), L_1, (int32_t*)(&V_0), /*hidden argument*/NULL);
		int32_t L_2 = V_0;
		NativeArray_1__ctor_m101008BFDB4E901343E8DA4F0969383ECDB0C1BE((NativeArray_1_tBC4AC2035CCDD9C5FE5733692EB415A4DF3D250C *)(&V_1), L_2, 2, 0, /*hidden argument*/NativeArray_1__ctor_m101008BFDB4E901343E8DA4F0969383ECDB0C1BE_RuntimeMethod_var);
		int32_t L_3 = V_0;
		V_2 = (bool)((((int32_t)L_3) > ((int32_t)0))? 1 : 0);
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_0053;
		}
	}
	{
		TextNativeSettings_t2C255BA301B06D04235208446E75F9CE0B3A4CE3  L_5 = ___settings0;
		NativeArray_1_tBC4AC2035CCDD9C5FE5733692EB415A4DF3D250C  L_6 = V_1;
		void* L_7;
		L_7 = NativeArrayUnsafeUtility_GetUnsafePtr_TisTextVertex_t4993EB0C6C0D22422A68B1FA043B800D94C735B3_m4057325E5816B5BD009A38797B41AE89F1B1BA52(L_6, /*hidden argument*/NativeArrayUnsafeUtility_GetUnsafePtr_TisTextVertex_t4993EB0C6C0D22422A68B1FA043B800D94C735B3_m4057325E5816B5BD009A38797B41AE89F1B1BA52_RuntimeMethod_var);
		intptr_t L_8;
		L_8 = IntPtr_op_Explicit_mBD40223EE90BDDF40A24C0F321D3398DEA300495((void*)(void*)L_7, /*hidden argument*/NULL);
		int32_t L_9;
		L_9 = UnsafeUtility_SizeOf_TisTextVertex_t4993EB0C6C0D22422A68B1FA043B800D94C735B3_m24EBF391516080B8B4E4C5992337FAF271E51526(/*hidden argument*/UnsafeUtility_SizeOf_TisTextVertex_t4993EB0C6C0D22422A68B1FA043B800D94C735B3_m24EBF391516080B8B4E4C5992337FAF271E51526_RuntimeMethod_var);
		TextNative_GetVertices_m9603A86C03C55C483932264E4A39151C56D1E7AD(L_5, (intptr_t)L_8, L_9, (int32_t*)(&V_0), /*hidden argument*/NULL);
		int32_t L_10 = V_0;
		int32_t L_11;
		L_11 = IL2CPP_NATIVEARRAY_GET_LENGTH(((NativeArray_1_tBC4AC2035CCDD9C5FE5733692EB415A4DF3D250C *)(&V_1))->___m_Length_1);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Assert_m9AB596E4960380752FD4CB3292D07A86E995938B((bool)((((int32_t)L_10) == ((int32_t)L_11))? 1 : 0), /*hidden argument*/NULL);
	}

IL_0053:
	{
		NativeArray_1_tBC4AC2035CCDD9C5FE5733692EB415A4DF3D250C  L_12 = V_1;
		V_3 = L_12;
		goto IL_0057;
	}

IL_0057:
	{
		NativeArray_1_tBC4AC2035CCDD9C5FE5733692EB415A4DF3D250C  L_13 = V_3;
		return L_13;
	}
}
// UnityEngine.Vector2 UnityEngine.UIElements.TextNative::GetOffset(UnityEngine.UIElements.TextNativeSettings,UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  TextNative_GetOffset_mE2723CF9D57595EB46702EBD64BB173BDD04DAB7 (TextNativeSettings_t2C255BA301B06D04235208446E75F9CE0B3A4CE3  ___settings0, Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___screenRect1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral67BE3EF2BBE376CBFE6CC45672B2C7742A3C2520);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_1;
	memset((&V_1), 0, sizeof(V_1));
	String_t* G_B4_0 = NULL;
	TextNativeSettings_t2C255BA301B06D04235208446E75F9CE0B3A4CE3 * G_B4_1 = NULL;
	String_t* G_B3_0 = NULL;
	TextNativeSettings_t2C255BA301B06D04235208446E75F9CE0B3A4CE3 * G_B3_1 = NULL;
	{
		TextNativeSettings_t2C255BA301B06D04235208446E75F9CE0B3A4CE3  L_0 = ___settings0;
		Font_tB53D3F362CB1A0B92307B362826F212AE2D2A6A9 * L_1 = L_0.get_font_1();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_1, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_002f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(_stringLiteral67BE3EF2BBE376CBFE6CC45672B2C7742A3C2520, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_4), (0.0f), (0.0f), /*hidden argument*/NULL);
		V_1 = L_4;
		goto IL_004f;
	}

IL_002f:
	{
		TextNativeSettings_t2C255BA301B06D04235208446E75F9CE0B3A4CE3  L_5 = ___settings0;
		String_t* L_6 = L_5.get_text_0();
		String_t* L_7 = L_6;
		G_B3_0 = L_7;
		G_B3_1 = (&___settings0);
		if (L_7)
		{
			G_B4_0 = L_7;
			G_B4_1 = (&___settings0);
			goto IL_0040;
		}
	}
	{
		G_B4_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		G_B4_1 = G_B3_1;
	}

IL_0040:
	{
		G_B4_1->set_text_0(G_B4_0);
		TextNativeSettings_t2C255BA301B06D04235208446E75F9CE0B3A4CE3  L_8 = ___settings0;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_9 = ___screenRect1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_10;
		L_10 = TextNative_DoGetOffset_m02D7C61C9E4DFA291F744E45F6F4900A426ACA4A(L_8, L_9, /*hidden argument*/NULL);
		V_1 = L_10;
		goto IL_004f;
	}

IL_004f:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_11 = V_1;
		return L_11;
	}
}
// System.Single UnityEngine.UIElements.TextNative::ComputeTextScaling(UnityEngine.Matrix4x4,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TextNative_ComputeTextScaling_mD1F00BA8DF4498FA3F55FAC4BBD56275E18B4506 (Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___worldMatrix0, float ___pixelsPerPoint1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_0 = ___worldMatrix0;
		float L_1 = L_0.get_m00_0();
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_2 = ___worldMatrix0;
		float L_3 = L_2.get_m10_1();
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_4 = ___worldMatrix0;
		float L_5 = L_4.get_m20_2();
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_0), L_1, L_3, L_5, /*hidden argument*/NULL);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_6 = ___worldMatrix0;
		float L_7 = L_6.get_m01_4();
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_8 = ___worldMatrix0;
		float L_9 = L_8.get_m11_5();
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_10 = ___worldMatrix0;
		float L_11 = L_10.get_m21_6();
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_1), L_7, L_9, L_11, /*hidden argument*/NULL);
		float L_12;
		L_12 = Vector3_get_magnitude_mDDD40612220D8104E77E993E18A101A69A944991((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_0), /*hidden argument*/NULL);
		float L_13;
		L_13 = Vector3_get_magnitude_mDDD40612220D8104E77E993E18A101A69A944991((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_1), /*hidden argument*/NULL);
		V_2 = ((float)((float)((float)il2cpp_codegen_add((float)L_12, (float)L_13))/(float)(2.0f)));
		float L_14 = V_2;
		float L_15 = ___pixelsPerPoint1;
		V_3 = ((float)il2cpp_codegen_multiply((float)L_14, (float)L_15));
		goto IL_004f;
	}

IL_004f:
	{
		float L_16 = V_3;
		return L_16;
	}
}
// System.Single UnityEngine.UIElements.TextNative::DoComputeTextWidth(UnityEngine.UIElements.TextNativeSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TextNative_DoComputeTextWidth_m47F92E5947EF9CD981F6BB9D4638F862FED9A741 (TextNativeSettings_t2C255BA301B06D04235208446E75F9CE0B3A4CE3  ___settings0, const RuntimeMethod* method)
{
	{
		float L_0;
		L_0 = TextNative_DoComputeTextWidth_Injected_m530A86F89EB85307C81194D863B3F18B4ACC3EA1((TextNativeSettings_t2C255BA301B06D04235208446E75F9CE0B3A4CE3 *)(&___settings0), /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Single UnityEngine.UIElements.TextNative::DoComputeTextHeight(UnityEngine.UIElements.TextNativeSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TextNative_DoComputeTextHeight_m08980C0F3095C1C5FAEDF2C35FD34B7E55234942 (TextNativeSettings_t2C255BA301B06D04235208446E75F9CE0B3A4CE3  ___settings0, const RuntimeMethod* method)
{
	{
		float L_0;
		L_0 = TextNative_DoComputeTextHeight_Injected_m361998DAEBDBBFAF8340855917701ADBB810437D((TextNativeSettings_t2C255BA301B06D04235208446E75F9CE0B3A4CE3 *)(&___settings0), /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Vector2 UnityEngine.UIElements.TextNative::DoGetCursorPosition(UnityEngine.UIElements.TextNativeSettings,UnityEngine.Rect,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  TextNative_DoGetCursorPosition_mFDBC5EF9136982DB1B1D8D99D14A01A482AD4ED4 (TextNativeSettings_t2C255BA301B06D04235208446E75F9CE0B3A4CE3  ___settings0, Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___rect1, int32_t ___cursorPosition2, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___cursorPosition2;
		TextNative_DoGetCursorPosition_Injected_m7DB0EF061F38D097DC03F7B79161283459798573((TextNativeSettings_t2C255BA301B06D04235208446E75F9CE0B3A4CE3 *)(&___settings0), (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&___rect1), L_0, (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&V_0), /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.UIElements.TextNative::GetVertices(UnityEngine.UIElements.TextNativeSettings,System.IntPtr,System.Int32,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextNative_GetVertices_m9603A86C03C55C483932264E4A39151C56D1E7AD (TextNativeSettings_t2C255BA301B06D04235208446E75F9CE0B3A4CE3  ___settings0, intptr_t ___buffer1, int32_t ___vertexSize2, int32_t* ___vertexCount3, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = ___buffer1;
		int32_t L_1 = ___vertexSize2;
		int32_t* L_2 = ___vertexCount3;
		TextNative_GetVertices_Injected_m68FEC737EC8FDCB97D0D2A690D001C8F7A4D0569((TextNativeSettings_t2C255BA301B06D04235208446E75F9CE0B3A4CE3 *)(&___settings0), (intptr_t)L_0, L_1, (int32_t*)L_2, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector2 UnityEngine.UIElements.TextNative::DoGetOffset(UnityEngine.UIElements.TextNativeSettings,UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  TextNative_DoGetOffset_m02D7C61C9E4DFA291F744E45F6F4900A426ACA4A (TextNativeSettings_t2C255BA301B06D04235208446E75F9CE0B3A4CE3  ___settings0, Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___rect1, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		TextNative_DoGetOffset_Injected_m4713B7C9AC2FC3DF3120F0F178B379289D55ED66((TextNativeSettings_t2C255BA301B06D04235208446E75F9CE0B3A4CE3 *)(&___settings0), (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&___rect1), (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&V_0), /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = V_0;
		return L_0;
	}
}
// System.Single UnityEngine.UIElements.TextNative::DoComputeTextWidth_Injected(UnityEngine.UIElements.TextNativeSettings&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TextNative_DoComputeTextWidth_Injected_m530A86F89EB85307C81194D863B3F18B4ACC3EA1 (TextNativeSettings_t2C255BA301B06D04235208446E75F9CE0B3A4CE3 * ___settings0, const RuntimeMethod* method)
{
	typedef float (*TextNative_DoComputeTextWidth_Injected_m530A86F89EB85307C81194D863B3F18B4ACC3EA1_ftn) (TextNativeSettings_t2C255BA301B06D04235208446E75F9CE0B3A4CE3 *);
	static TextNative_DoComputeTextWidth_Injected_m530A86F89EB85307C81194D863B3F18B4ACC3EA1_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextNative_DoComputeTextWidth_Injected_m530A86F89EB85307C81194D863B3F18B4ACC3EA1_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.UIElements.TextNative::DoComputeTextWidth_Injected(UnityEngine.UIElements.TextNativeSettings&)");
	float icallRetVal = _il2cpp_icall_func(___settings0);
	return icallRetVal;
}
// System.Single UnityEngine.UIElements.TextNative::DoComputeTextHeight_Injected(UnityEngine.UIElements.TextNativeSettings&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TextNative_DoComputeTextHeight_Injected_m361998DAEBDBBFAF8340855917701ADBB810437D (TextNativeSettings_t2C255BA301B06D04235208446E75F9CE0B3A4CE3 * ___settings0, const RuntimeMethod* method)
{
	typedef float (*TextNative_DoComputeTextHeight_Injected_m361998DAEBDBBFAF8340855917701ADBB810437D_ftn) (TextNativeSettings_t2C255BA301B06D04235208446E75F9CE0B3A4CE3 *);
	static TextNative_DoComputeTextHeight_Injected_m361998DAEBDBBFAF8340855917701ADBB810437D_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextNative_DoComputeTextHeight_Injected_m361998DAEBDBBFAF8340855917701ADBB810437D_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.UIElements.TextNative::DoComputeTextHeight_Injected(UnityEngine.UIElements.TextNativeSettings&)");
	float icallRetVal = _il2cpp_icall_func(___settings0);
	return icallRetVal;
}
// System.Void UnityEngine.UIElements.TextNative::DoGetCursorPosition_Injected(UnityEngine.UIElements.TextNativeSettings&,UnityEngine.Rect&,System.Int32,UnityEngine.Vector2&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextNative_DoGetCursorPosition_Injected_m7DB0EF061F38D097DC03F7B79161283459798573 (TextNativeSettings_t2C255BA301B06D04235208446E75F9CE0B3A4CE3 * ___settings0, Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * ___rect1, int32_t ___cursorPosition2, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * ___ret3, const RuntimeMethod* method)
{
	typedef void (*TextNative_DoGetCursorPosition_Injected_m7DB0EF061F38D097DC03F7B79161283459798573_ftn) (TextNativeSettings_t2C255BA301B06D04235208446E75F9CE0B3A4CE3 *, Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *, int32_t, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *);
	static TextNative_DoGetCursorPosition_Injected_m7DB0EF061F38D097DC03F7B79161283459798573_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextNative_DoGetCursorPosition_Injected_m7DB0EF061F38D097DC03F7B79161283459798573_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.UIElements.TextNative::DoGetCursorPosition_Injected(UnityEngine.UIElements.TextNativeSettings&,UnityEngine.Rect&,System.Int32,UnityEngine.Vector2&)");
	_il2cpp_icall_func(___settings0, ___rect1, ___cursorPosition2, ___ret3);
}
// System.Void UnityEngine.UIElements.TextNative::GetVertices_Injected(UnityEngine.UIElements.TextNativeSettings&,System.IntPtr,System.Int32,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextNative_GetVertices_Injected_m68FEC737EC8FDCB97D0D2A690D001C8F7A4D0569 (TextNativeSettings_t2C255BA301B06D04235208446E75F9CE0B3A4CE3 * ___settings0, intptr_t ___buffer1, int32_t ___vertexSize2, int32_t* ___vertexCount3, const RuntimeMethod* method)
{
	typedef void (*TextNative_GetVertices_Injected_m68FEC737EC8FDCB97D0D2A690D001C8F7A4D0569_ftn) (TextNativeSettings_t2C255BA301B06D04235208446E75F9CE0B3A4CE3 *, intptr_t, int32_t, int32_t*);
	static TextNative_GetVertices_Injected_m68FEC737EC8FDCB97D0D2A690D001C8F7A4D0569_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextNative_GetVertices_Injected_m68FEC737EC8FDCB97D0D2A690D001C8F7A4D0569_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.UIElements.TextNative::GetVertices_Injected(UnityEngine.UIElements.TextNativeSettings&,System.IntPtr,System.Int32,System.Int32&)");
	_il2cpp_icall_func(___settings0, ___buffer1, ___vertexSize2, ___vertexCount3);
}
// System.Void UnityEngine.UIElements.TextNative::DoGetOffset_Injected(UnityEngine.UIElements.TextNativeSettings&,UnityEngine.Rect&,UnityEngine.Vector2&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextNative_DoGetOffset_Injected_m4713B7C9AC2FC3DF3120F0F178B379289D55ED66 (TextNativeSettings_t2C255BA301B06D04235208446E75F9CE0B3A4CE3 * ___settings0, Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * ___rect1, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * ___ret2, const RuntimeMethod* method)
{
	typedef void (*TextNative_DoGetOffset_Injected_m4713B7C9AC2FC3DF3120F0F178B379289D55ED66_ftn) (TextNativeSettings_t2C255BA301B06D04235208446E75F9CE0B3A4CE3 *, Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *);
	static TextNative_DoGetOffset_Injected_m4713B7C9AC2FC3DF3120F0F178B379289D55ED66_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextNative_DoGetOffset_Injected_m4713B7C9AC2FC3DF3120F0F178B379289D55ED66_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.UIElements.TextNative::DoGetOffset_Injected(UnityEngine.UIElements.TextNativeSettings&,UnityEngine.Rect&,UnityEngine.Vector2&)");
	_il2cpp_icall_func(___settings0, ___rect1, ___ret2);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.UIElements.TextNativeSettings
IL2CPP_EXTERN_C void TextNativeSettings_t2C255BA301B06D04235208446E75F9CE0B3A4CE3_marshal_pinvoke(const TextNativeSettings_t2C255BA301B06D04235208446E75F9CE0B3A4CE3& unmarshaled, TextNativeSettings_t2C255BA301B06D04235208446E75F9CE0B3A4CE3_marshaled_pinvoke& marshaled)
{
	Exception_t* ___font_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'font' of type 'TextNativeSettings': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___font_1Exception, NULL);
}
IL2CPP_EXTERN_C void TextNativeSettings_t2C255BA301B06D04235208446E75F9CE0B3A4CE3_marshal_pinvoke_back(const TextNativeSettings_t2C255BA301B06D04235208446E75F9CE0B3A4CE3_marshaled_pinvoke& marshaled, TextNativeSettings_t2C255BA301B06D04235208446E75F9CE0B3A4CE3& unmarshaled)
{
	Exception_t* ___font_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'font' of type 'TextNativeSettings': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___font_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.UIElements.TextNativeSettings
IL2CPP_EXTERN_C void TextNativeSettings_t2C255BA301B06D04235208446E75F9CE0B3A4CE3_marshal_pinvoke_cleanup(TextNativeSettings_t2C255BA301B06D04235208446E75F9CE0B3A4CE3_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.UIElements.TextNativeSettings
IL2CPP_EXTERN_C void TextNativeSettings_t2C255BA301B06D04235208446E75F9CE0B3A4CE3_marshal_com(const TextNativeSettings_t2C255BA301B06D04235208446E75F9CE0B3A4CE3& unmarshaled, TextNativeSettings_t2C255BA301B06D04235208446E75F9CE0B3A4CE3_marshaled_com& marshaled)
{
	Exception_t* ___font_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'font' of type 'TextNativeSettings': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___font_1Exception, NULL);
}
IL2CPP_EXTERN_C void TextNativeSettings_t2C255BA301B06D04235208446E75F9CE0B3A4CE3_marshal_com_back(const TextNativeSettings_t2C255BA301B06D04235208446E75F9CE0B3A4CE3_marshaled_com& marshaled, TextNativeSettings_t2C255BA301B06D04235208446E75F9CE0B3A4CE3& unmarshaled)
{
	Exception_t* ___font_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'font' of type 'TextNativeSettings': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___font_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.UIElements.TextNativeSettings
IL2CPP_EXTERN_C void TextNativeSettings_t2C255BA301B06D04235208446E75F9CE0B3A4CE3_marshal_com_cleanup(TextNativeSettings_t2C255BA301B06D04235208446E75F9CE0B3A4CE3_marshaled_com& marshaled)
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.UIElements.UIElementsRuntimeUtilityNative::RepaintOverlayPanels()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIElementsRuntimeUtilityNative_RepaintOverlayPanels_mB7B050FAB713DC4C1F0DFDC334A406B105633430 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIElementsRuntimeUtilityNative_tD46E29AA27E608332B332CC105C50AF116363578_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B2_0 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B1_0 = NULL;
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = ((UIElementsRuntimeUtilityNative_tD46E29AA27E608332B332CC105C50AF116363578_StaticFields*)il2cpp_codegen_static_fields_for(UIElementsRuntimeUtilityNative_tD46E29AA27E608332B332CC105C50AF116363578_il2cpp_TypeInfo_var))->get_RepaintOverlayPanelsCallback_0();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		goto IL_0012;
	}

IL_000c:
	{
		NullCheck(G_B2_0);
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(G_B2_0, /*hidden argument*/NULL);
	}

IL_0012:
	{
		return;
	}
}
// System.Void UnityEngine.UIElements.UIElementsRuntimeUtilityNative::UpdateRuntimePanels()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIElementsRuntimeUtilityNative_UpdateRuntimePanels_m440951CB8CB88C12BA3FCCB6DE957FC1282651F3 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIElementsRuntimeUtilityNative_tD46E29AA27E608332B332CC105C50AF116363578_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B2_0 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B1_0 = NULL;
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = ((UIElementsRuntimeUtilityNative_tD46E29AA27E608332B332CC105C50AF116363578_StaticFields*)il2cpp_codegen_static_fields_for(UIElementsRuntimeUtilityNative_tD46E29AA27E608332B332CC105C50AF116363578_il2cpp_TypeInfo_var))->get_UpdateRuntimePanelsCallback_1();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		goto IL_0012;
	}

IL_000c:
	{
		NullCheck(G_B2_0);
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(G_B2_0, /*hidden argument*/NULL);
	}

IL_0012:
	{
		return;
	}
}
// System.Void UnityEngine.UIElements.UIElementsRuntimeUtilityNative::RegisterPlayerloopCallback()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIElementsRuntimeUtilityNative_RegisterPlayerloopCallback_mDE172649892BC91CE04CD865C0730AE971054DB7 (const RuntimeMethod* method)
{
	typedef void (*UIElementsRuntimeUtilityNative_RegisterPlayerloopCallback_mDE172649892BC91CE04CD865C0730AE971054DB7_ftn) ();
	static UIElementsRuntimeUtilityNative_RegisterPlayerloopCallback_mDE172649892BC91CE04CD865C0730AE971054DB7_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UIElementsRuntimeUtilityNative_RegisterPlayerloopCallback_mDE172649892BC91CE04CD865C0730AE971054DB7_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.UIElements.UIElementsRuntimeUtilityNative::RegisterPlayerloopCallback()");
	_il2cpp_icall_func();
}
// System.Void UnityEngine.UIElements.UIElementsRuntimeUtilityNative::UnregisterPlayerloopCallback()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIElementsRuntimeUtilityNative_UnregisterPlayerloopCallback_m174A0E6E44BFF4587DAAF48B4648280B08F9A185 (const RuntimeMethod* method)
{
	typedef void (*UIElementsRuntimeUtilityNative_UnregisterPlayerloopCallback_m174A0E6E44BFF4587DAAF48B4648280B08F9A185_ftn) ();
	static UIElementsRuntimeUtilityNative_UnregisterPlayerloopCallback_m174A0E6E44BFF4587DAAF48B4648280B08F9A185_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UIElementsRuntimeUtilityNative_UnregisterPlayerloopCallback_m174A0E6E44BFF4587DAAF48B4648280B08F9A185_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.UIElements.UIElementsRuntimeUtilityNative::UnregisterPlayerloopCallback()");
	_il2cpp_icall_func();
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.UIElements.UIR.Utility::add_GraphicsResourcesRecreate(System.Action`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utility_add_GraphicsResourcesRecreate_mC29797548D66A0B6F3815F21AC63824B7EB62053 (Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utility_t6BB300FC47C7086829155B2BFB07A6EA848C621D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * V_0 = NULL;
	Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * V_1 = NULL;
	Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * V_2 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Utility_t6BB300FC47C7086829155B2BFB07A6EA848C621D_il2cpp_TypeInfo_var);
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_0 = ((Utility_t6BB300FC47C7086829155B2BFB07A6EA848C621D_StaticFields*)il2cpp_codegen_static_fields_for(Utility_t6BB300FC47C7086829155B2BFB07A6EA848C621D_il2cpp_TypeInfo_var))->get_GraphicsResourcesRecreate_0();
		V_0 = L_0;
	}

IL_0006:
	{
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_1 = V_0;
		V_1 = L_1;
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_2 = V_1;
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 *)CastclassSealed((RuntimeObject*)L_4, Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83_il2cpp_TypeInfo_var));
		IL2CPP_RUNTIME_CLASS_INIT(Utility_t6BB300FC47C7086829155B2BFB07A6EA848C621D_il2cpp_TypeInfo_var);
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_5 = V_2;
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_6 = V_1;
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 *>((Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 **)(((Utility_t6BB300FC47C7086829155B2BFB07A6EA848C621D_StaticFields*)il2cpp_codegen_static_fields_for(Utility_t6BB300FC47C7086829155B2BFB07A6EA848C621D_il2cpp_TypeInfo_var))->get_address_of_GraphicsResourcesRecreate_0()), L_5, L_6);
		V_0 = L_7;
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_8 = V_0;
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 *)L_8) == ((RuntimeObject*)(Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 *)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.UIElements.UIR.Utility::remove_GraphicsResourcesRecreate(System.Action`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utility_remove_GraphicsResourcesRecreate_mC651E0F12830D91A0C4DD075EE0AEF7F7C770125 (Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utility_t6BB300FC47C7086829155B2BFB07A6EA848C621D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * V_0 = NULL;
	Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * V_1 = NULL;
	Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * V_2 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Utility_t6BB300FC47C7086829155B2BFB07A6EA848C621D_il2cpp_TypeInfo_var);
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_0 = ((Utility_t6BB300FC47C7086829155B2BFB07A6EA848C621D_StaticFields*)il2cpp_codegen_static_fields_for(Utility_t6BB300FC47C7086829155B2BFB07A6EA848C621D_il2cpp_TypeInfo_var))->get_GraphicsResourcesRecreate_0();
		V_0 = L_0;
	}

IL_0006:
	{
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_1 = V_0;
		V_1 = L_1;
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_2 = V_1;
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 *)CastclassSealed((RuntimeObject*)L_4, Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83_il2cpp_TypeInfo_var));
		IL2CPP_RUNTIME_CLASS_INIT(Utility_t6BB300FC47C7086829155B2BFB07A6EA848C621D_il2cpp_TypeInfo_var);
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_5 = V_2;
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_6 = V_1;
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 *>((Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 **)(((Utility_t6BB300FC47C7086829155B2BFB07A6EA848C621D_StaticFields*)il2cpp_codegen_static_fields_for(Utility_t6BB300FC47C7086829155B2BFB07A6EA848C621D_il2cpp_TypeInfo_var))->get_address_of_GraphicsResourcesRecreate_0()), L_5, L_6);
		V_0 = L_7;
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_8 = V_0;
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 *)L_8) == ((RuntimeObject*)(Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 *)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.UIElements.UIR.Utility::add_EngineUpdate(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utility_add_EngineUpdate_m8B0994AF497CEDBAC8A1300C36047ED50701C1F7 (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utility_t6BB300FC47C7086829155B2BFB07A6EA848C621D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_0 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_1 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_2 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Utility_t6BB300FC47C7086829155B2BFB07A6EA848C621D_il2cpp_TypeInfo_var);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = ((Utility_t6BB300FC47C7086829155B2BFB07A6EA848C621D_StaticFields*)il2cpp_codegen_static_fields_for(Utility_t6BB300FC47C7086829155B2BFB07A6EA848C621D_il2cpp_TypeInfo_var))->get_EngineUpdate_1();
		V_0 = L_0;
	}

IL_0006:
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = V_0;
		V_1 = L_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_2 = V_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)CastclassSealed((RuntimeObject*)L_4, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var));
		IL2CPP_RUNTIME_CLASS_INIT(Utility_t6BB300FC47C7086829155B2BFB07A6EA848C621D_il2cpp_TypeInfo_var);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_5 = V_2;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_6 = V_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *>((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 **)(((Utility_t6BB300FC47C7086829155B2BFB07A6EA848C621D_StaticFields*)il2cpp_codegen_static_fields_for(Utility_t6BB300FC47C7086829155B2BFB07A6EA848C621D_il2cpp_TypeInfo_var))->get_address_of_EngineUpdate_1()), L_5, L_6);
		V_0 = L_7;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_8 = V_0;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_8) == ((RuntimeObject*)(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.UIElements.UIR.Utility::remove_EngineUpdate(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utility_remove_EngineUpdate_m7862B4EE96EA7D557CC56B89208E720CE40449A9 (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utility_t6BB300FC47C7086829155B2BFB07A6EA848C621D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_0 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_1 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_2 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Utility_t6BB300FC47C7086829155B2BFB07A6EA848C621D_il2cpp_TypeInfo_var);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = ((Utility_t6BB300FC47C7086829155B2BFB07A6EA848C621D_StaticFields*)il2cpp_codegen_static_fields_for(Utility_t6BB300FC47C7086829155B2BFB07A6EA848C621D_il2cpp_TypeInfo_var))->get_EngineUpdate_1();
		V_0 = L_0;
	}

IL_0006:
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = V_0;
		V_1 = L_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_2 = V_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)CastclassSealed((RuntimeObject*)L_4, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var));
		IL2CPP_RUNTIME_CLASS_INIT(Utility_t6BB300FC47C7086829155B2BFB07A6EA848C621D_il2cpp_TypeInfo_var);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_5 = V_2;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_6 = V_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *>((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 **)(((Utility_t6BB300FC47C7086829155B2BFB07A6EA848C621D_StaticFields*)il2cpp_codegen_static_fields_for(Utility_t6BB300FC47C7086829155B2BFB07A6EA848C621D_il2cpp_TypeInfo_var))->get_address_of_EngineUpdate_1()), L_5, L_6);
		V_0 = L_7;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_8 = V_0;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_8) == ((RuntimeObject*)(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.UIElements.UIR.Utility::add_FlushPendingResources(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utility_add_FlushPendingResources_m176AEA1DF6BF3DF608F7D085F9B55B7C58DFFC18 (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utility_t6BB300FC47C7086829155B2BFB07A6EA848C621D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_0 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_1 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_2 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Utility_t6BB300FC47C7086829155B2BFB07A6EA848C621D_il2cpp_TypeInfo_var);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = ((Utility_t6BB300FC47C7086829155B2BFB07A6EA848C621D_StaticFields*)il2cpp_codegen_static_fields_for(Utility_t6BB300FC47C7086829155B2BFB07A6EA848C621D_il2cpp_TypeInfo_var))->get_FlushPendingResources_2();
		V_0 = L_0;
	}

IL_0006:
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = V_0;
		V_1 = L_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_2 = V_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)CastclassSealed((RuntimeObject*)L_4, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var));
		IL2CPP_RUNTIME_CLASS_INIT(Utility_t6BB300FC47C7086829155B2BFB07A6EA848C621D_il2cpp_TypeInfo_var);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_5 = V_2;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_6 = V_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *>((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 **)(((Utility_t6BB300FC47C7086829155B2BFB07A6EA848C621D_StaticFields*)il2cpp_codegen_static_fields_for(Utility_t6BB300FC47C7086829155B2BFB07A6EA848C621D_il2cpp_TypeInfo_var))->get_address_of_FlushPendingResources_2()), L_5, L_6);
		V_0 = L_7;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_8 = V_0;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_8) == ((RuntimeObject*)(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.UIElements.UIR.Utility::remove_FlushPendingResources(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utility_remove_FlushPendingResources_m56BA89A3789B612256A53FAAF9DF82EA48A99724 (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utility_t6BB300FC47C7086829155B2BFB07A6EA848C621D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_0 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_1 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_2 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Utility_t6BB300FC47C7086829155B2BFB07A6EA848C621D_il2cpp_TypeInfo_var);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = ((Utility_t6BB300FC47C7086829155B2BFB07A6EA848C621D_StaticFields*)il2cpp_codegen_static_fields_for(Utility_t6BB300FC47C7086829155B2BFB07A6EA848C621D_il2cpp_TypeInfo_var))->get_FlushPendingResources_2();
		V_0 = L_0;
	}

IL_0006:
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = V_0;
		V_1 = L_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_2 = V_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)CastclassSealed((RuntimeObject*)L_4, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var));
		IL2CPP_RUNTIME_CLASS_INIT(Utility_t6BB300FC47C7086829155B2BFB07A6EA848C621D_il2cpp_TypeInfo_var);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_5 = V_2;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_6 = V_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *>((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 **)(((Utility_t6BB300FC47C7086829155B2BFB07A6EA848C621D_StaticFields*)il2cpp_codegen_static_fields_for(Utility_t6BB300FC47C7086829155B2BFB07A6EA848C621D_il2cpp_TypeInfo_var))->get_address_of_FlushPendingResources_2()), L_5, L_6);
		V_0 = L_7;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_8 = V_0;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_8) == ((RuntimeObject*)(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.UIElements.UIR.Utility::add_RegisterIntermediateRenderers(System.Action`1<UnityEngine.Camera>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utility_add_RegisterIntermediateRenderers_m9630185D80DB9B07D1DBFD503D1AB029DFBA2D2E (Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utility_t6BB300FC47C7086829155B2BFB07A6EA848C621D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B * V_0 = NULL;
	Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B * V_1 = NULL;
	Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B * V_2 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Utility_t6BB300FC47C7086829155B2BFB07A6EA848C621D_il2cpp_TypeInfo_var);
		Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B * L_0 = ((Utility_t6BB300FC47C7086829155B2BFB07A6EA848C621D_StaticFields*)il2cpp_codegen_static_fields_for(Utility_t6BB300FC47C7086829155B2BFB07A6EA848C621D_il2cpp_TypeInfo_var))->get_RegisterIntermediateRenderers_3();
		V_0 = L_0;
	}

IL_0006:
	{
		Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B * L_1 = V_0;
		V_1 = L_1;
		Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B * L_2 = V_1;
		Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B *)CastclassSealed((RuntimeObject*)L_4, Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B_il2cpp_TypeInfo_var));
		IL2CPP_RUNTIME_CLASS_INIT(Utility_t6BB300FC47C7086829155B2BFB07A6EA848C621D_il2cpp_TypeInfo_var);
		Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B * L_5 = V_2;
		Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B * L_6 = V_1;
		Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B * L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B *>((Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B **)(((Utility_t6BB300FC47C7086829155B2BFB07A6EA848C621D_StaticFields*)il2cpp_codegen_static_fields_for(Utility_t6BB300FC47C7086829155B2BFB07A6EA848C621D_il2cpp_TypeInfo_var))->get_address_of_RegisterIntermediateRenderers_3()), L_5, L_6);
		V_0 = L_7;
		Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B * L_8 = V_0;
		Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B * L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B *)L_8) == ((RuntimeObject*)(Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B *)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.UIElements.UIR.Utility::remove_RegisterIntermediateRenderers(System.Action`1<UnityEngine.Camera>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utility_remove_RegisterIntermediateRenderers_mB5E8642A6C2063C80197F767D334D997667525A6 (Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utility_t6BB300FC47C7086829155B2BFB07A6EA848C621D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B * V_0 = NULL;
	Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B * V_1 = NULL;
	Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B * V_2 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Utility_t6BB300FC47C7086829155B2BFB07A6EA848C621D_il2cpp_TypeInfo_var);
		Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B * L_0 = ((Utility_t6BB300FC47C7086829155B2BFB07A6EA848C621D_StaticFields*)il2cpp_codegen_static_fields_for(Utility_t6BB300FC47C7086829155B2BFB07A6EA848C621D_il2cpp_TypeInfo_var))->get_RegisterIntermediateRenderers_3();
		V_0 = L_0;
	}

IL_0006:
	{
		Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B * L_1 = V_0;
		V_1 = L_1;
		Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B * L_2 = V_1;
		Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B *)CastclassSealed((RuntimeObject*)L_4, Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B_il2cpp_TypeInfo_var));
		IL2CPP_RUNTIME_CLASS_INIT(Utility_t6BB300FC47C7086829155B2BFB07A6EA848C621D_il2cpp_TypeInfo_var);
		Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B * L_5 = V_2;
		Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B * L_6 = V_1;
		Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B * L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B *>((Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B **)(((Utility_t6BB300FC47C7086829155B2BFB07A6EA848C621D_StaticFields*)il2cpp_codegen_static_fields_for(Utility_t6BB300FC47C7086829155B2BFB07A6EA848C621D_il2cpp_TypeInfo_var))->get_address_of_RegisterIntermediateRenderers_3()), L_5, L_6);
		V_0 = L_7;
		Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B * L_8 = V_0;
		Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B * L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B *)L_8) == ((RuntimeObject*)(Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B *)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.UIElements.UIR.Utility::add_RenderNodeExecute(System.Action`1<System.IntPtr>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utility_add_RenderNodeExecute_m551B4BBE6F583821DC0B71D428C2D3B198843E0E (Action_1_t35A46FAEE6B0A26D311444DF75B6EAFC59EBD914 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t35A46FAEE6B0A26D311444DF75B6EAFC59EBD914_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utility_t6BB300FC47C7086829155B2BFB07A6EA848C621D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t35A46FAEE6B0A26D311444DF75B6EAFC59EBD914 * V_0 = NULL;
	Action_1_t35A46FAEE6B0A26D311444DF75B6EAFC59EBD914 * V_1 = NULL;
	Action_1_t35A46FAEE6B0A26D311444DF75B6EAFC59EBD914 * V_2 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Utility_t6BB300FC47C7086829155B2BFB07A6EA848C621D_il2cpp_TypeInfo_var);
		Action_1_t35A46FAEE6B0A26D311444DF75B6EAFC59EBD914 * L_0 = ((Utility_t6BB300FC47C7086829155B2BFB07A6EA848C621D_StaticFields*)il2cpp_codegen_static_fields_for(Utility_t6BB300FC47C7086829155B2BFB07A6EA848C621D_il2cpp_TypeInfo_var))->get_RenderNodeExecute_5();
		V_0 = L_0;
	}

IL_0006:
	{
		Action_1_t35A46FAEE6B0A26D311444DF75B6EAFC59EBD914 * L_1 = V_0;
		V_1 = L_1;
		Action_1_t35A46FAEE6B0A26D311444DF75B6EAFC59EBD914 * L_2 = V_1;
		Action_1_t35A46FAEE6B0A26D311444DF75B6EAFC59EBD914 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_1_t35A46FAEE6B0A26D311444DF75B6EAFC59EBD914 *)CastclassSealed((RuntimeObject*)L_4, Action_1_t35A46FAEE6B0A26D311444DF75B6EAFC59EBD914_il2cpp_TypeInfo_var));
		IL2CPP_RUNTIME_CLASS_INIT(Utility_t6BB300FC47C7086829155B2BFB07A6EA848C621D_il2cpp_TypeInfo_var);
		Action_1_t35A46FAEE6B0A26D311444DF75B6EAFC59EBD914 * L_5 = V_2;
		Action_1_t35A46FAEE6B0A26D311444DF75B6EAFC59EBD914 * L_6 = V_1;
		Action_1_t35A46FAEE6B0A26D311444DF75B6EAFC59EBD914 * L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_1_t35A46FAEE6B0A26D311444DF75B6EAFC59EBD914 *>((Action_1_t35A46FAEE6B0A26D311444DF75B6EAFC59EBD914 **)(((Utility_t6BB300FC47C7086829155B2BFB07A6EA848C621D_StaticFields*)il2cpp_codegen_static_fields_for(Utility_t6BB300FC47C7086829155B2BFB07A6EA848C621D_il2cpp_TypeInfo_var))->get_address_of_RenderNodeExecute_5()), L_5, L_6);
		V_0 = L_7;
		Action_1_t35A46FAEE6B0A26D311444DF75B6EAFC59EBD914 * L_8 = V_0;
		Action_1_t35A46FAEE6B0A26D311444DF75B6EAFC59EBD914 * L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t35A46FAEE6B0A26D311444DF75B6EAFC59EBD914 *)L_8) == ((RuntimeObject*)(Action_1_t35A46FAEE6B0A26D311444DF75B6EAFC59EBD914 *)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.UIElements.UIR.Utility::remove_RenderNodeExecute(System.Action`1<System.IntPtr>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utility_remove_RenderNodeExecute_mBFA08C7DD5B7E3BF5954B2824A9B21F081CB1149 (Action_1_t35A46FAEE6B0A26D311444DF75B6EAFC59EBD914 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t35A46FAEE6B0A26D311444DF75B6EAFC59EBD914_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utility_t6BB300FC47C7086829155B2BFB07A6EA848C621D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t35A46FAEE6B0A26D311444DF75B6EAFC59EBD914 * V_0 = NULL;
	Action_1_t35A46FAEE6B0A26D311444DF75B6EAFC59EBD914 * V_1 = NULL;
	Action_1_t35A46FAEE6B0A26D311444DF75B6EAFC59EBD914 * V_2 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Utility_t6BB300FC47C7086829155B2BFB07A6EA848C621D_il2cpp_TypeInfo_var);
		Action_1_t35A46FAEE6B0A26D311444DF75B6EAFC59EBD914 * L_0 = ((Utility_t6BB300FC47C7086829155B2BFB07A6EA848C621D_StaticFields*)il2cpp_codegen_static_fields_for(Utility_t6BB300FC47C7086829155B2BFB07A6EA848C621D_il2cpp_TypeInfo_var))->get_RenderNodeExecute_5();
		V_0 = L_0;
	}

IL_0006:
	{
		Action_1_t35A46FAEE6B0A26D311444DF75B6EAFC59EBD914 * L_1 = V_0;
		V_1 = L_1;
		Action_1_t35A46FAEE6B0A26D311444DF75B6EAFC59EBD914 * L_2 = V_1;
		Action_1_t35A46FAEE6B0A26D311444DF75B6EAFC59EBD914 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_1_t35A46FAEE6B0A26D311444DF75B6EAFC59EBD914 *)CastclassSealed((RuntimeObject*)L_4, Action_1_t35A46FAEE6B0A26D311444DF75B6EAFC59EBD914_il2cpp_TypeInfo_var));
		IL2CPP_RUNTIME_CLASS_INIT(Utility_t6BB300FC47C7086829155B2BFB07A6EA848C621D_il2cpp_TypeInfo_var);
		Action_1_t35A46FAEE6B0A26D311444DF75B6EAFC59EBD914 * L_5 = V_2;
		Action_1_t35A46FAEE6B0A26D311444DF75B6EAFC59EBD914 * L_6 = V_1;
		Action_1_t35A46FAEE6B0A26D311444DF75B6EAFC59EBD914 * L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_1_t35A46FAEE6B0A26D311444DF75B6EAFC59EBD914 *>((Action_1_t35A46FAEE6B0A26D311444DF75B6EAFC59EBD914 **)(((Utility_t6BB300FC47C7086829155B2BFB07A6EA848C621D_StaticFields*)il2cpp_codegen_static_fields_for(Utility_t6BB300FC47C7086829155B2BFB07A6EA848C621D_il2cpp_TypeInfo_var))->get_address_of_RenderNodeExecute_5()), L_5, L_6);
		V_0 = L_7;
		Action_1_t35A46FAEE6B0A26D311444DF75B6EAFC59EBD914 * L_8 = V_0;
		Action_1_t35A46FAEE6B0A26D311444DF75B6EAFC59EBD914 * L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t35A46FAEE6B0A26D311444DF75B6EAFC59EBD914 *)L_8) == ((RuntimeObject*)(Action_1_t35A46FAEE6B0A26D311444DF75B6EAFC59EBD914 *)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.UIElements.UIR.Utility::RaiseGraphicsResourcesRecreate(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utility_RaiseGraphicsResourcesRecreate_m90D9F79323894598B8C514E3AF751AD17109AC39 (bool ___recreate0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utility_t6BB300FC47C7086829155B2BFB07A6EA848C621D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * G_B2_0 = NULL;
	Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * G_B1_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Utility_t6BB300FC47C7086829155B2BFB07A6EA848C621D_il2cpp_TypeInfo_var);
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_0 = ((Utility_t6BB300FC47C7086829155B2BFB07A6EA848C621D_StaticFields*)il2cpp_codegen_static_fields_for(Utility_t6BB300FC47C7086829155B2BFB07A6EA848C621D_il2cpp_TypeInfo_var))->get_GraphicsResourcesRecreate_0();
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		goto IL_0013;
	}

IL_000c:
	{
		bool L_2 = ___recreate0;
		NullCheck(G_B2_0);
		Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5(G_B2_0, L_2, /*hidden argument*/Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5_RuntimeMethod_var);
	}

IL_0013:
	{
		return;
	}
}
// System.Void UnityEngine.UIElements.UIR.Utility::RaiseEngineUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utility_RaiseEngineUpdate_m191BF62A251055F88508B6238C0258165D166A3D (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utility_t6BB300FC47C7086829155B2BFB07A6EA848C621D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Utility_t6BB300FC47C7086829155B2BFB07A6EA848C621D_il2cpp_TypeInfo_var);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = ((Utility_t6BB300FC47C7086829155B2BFB07A6EA848C621D_StaticFields*)il2cpp_codegen_static_fields_for(Utility_t6BB300FC47C7086829155B2BFB07A6EA848C621D_il2cpp_TypeInfo_var))->get_EngineUpdate_1();
		V_0 = (bool)((!(((RuntimeObject*)(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Utility_t6BB300FC47C7086829155B2BFB07A6EA848C621D_il2cpp_TypeInfo_var);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_2 = ((Utility_t6BB300FC47C7086829155B2BFB07A6EA848C621D_StaticFields*)il2cpp_codegen_static_fields_for(Utility_t6BB300FC47C7086829155B2BFB07A6EA848C621D_il2cpp_TypeInfo_var))->get_EngineUpdate_1();
		NullCheck(L_2);
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(L_2, /*hidden argument*/NULL);
	}

IL_001a:
	{
		return;
	}
}
// System.Void UnityEngine.UIElements.UIR.Utility::RaiseFlushPendingResources()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utility_RaiseFlushPendingResources_m9A1E1BC67215C90EE8F34A3ADFB1A13D88D26C8C (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utility_t6BB300FC47C7086829155B2BFB07A6EA848C621D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B2_0 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B1_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Utility_t6BB300FC47C7086829155B2BFB07A6EA848C621D_il2cpp_TypeInfo_var);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = ((Utility_t6BB300FC47C7086829155B2BFB07A6EA848C621D_StaticFields*)il2cpp_codegen_static_fields_for(Utility_t6BB300FC47C7086829155B2BFB07A6EA848C621D_il2cpp_TypeInfo_var))->get_FlushPendingResources_2();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		goto IL_0012;
	}

IL_000c:
	{
		NullCheck(G_B2_0);
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(G_B2_0, /*hidden argument*/NULL);
	}

IL_0012:
	{
		return;
	}
}
// System.Void UnityEngine.UIElements.UIR.Utility::RaiseRegisterIntermediateRenderers(UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utility_RaiseRegisterIntermediateRenderers_m8598BA1C8CD6EEB98E80246AE0822536E415E2A8 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___camera0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_mD46448B64FD6241AEBDC58583AABC7AB91A9B136_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utility_t6BB300FC47C7086829155B2BFB07A6EA848C621D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B * G_B2_0 = NULL;
	Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B * G_B1_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Utility_t6BB300FC47C7086829155B2BFB07A6EA848C621D_il2cpp_TypeInfo_var);
		Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B * L_0 = ((Utility_t6BB300FC47C7086829155B2BFB07A6EA848C621D_StaticFields*)il2cpp_codegen_static_fields_for(Utility_t6BB300FC47C7086829155B2BFB07A6EA848C621D_il2cpp_TypeInfo_var))->get_RegisterIntermediateRenderers_3();
		Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		goto IL_0013;
	}

IL_000c:
	{
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_2 = ___camera0;
		NullCheck(G_B2_0);
		Action_1_Invoke_mD46448B64FD6241AEBDC58583AABC7AB91A9B136(G_B2_0, L_2, /*hidden argument*/Action_1_Invoke_mD46448B64FD6241AEBDC58583AABC7AB91A9B136_RuntimeMethod_var);
	}

IL_0013:
	{
		return;
	}
}
// System.Void UnityEngine.UIElements.UIR.Utility::RaiseRenderNodeAdd(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utility_RaiseRenderNodeAdd_m23A5CF90F2D9B393F320CDB08AAB6968A835B9BF (intptr_t ___userData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_mEAB37079EB59D19D569529B0C5353085E6B5BFA5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utility_t6BB300FC47C7086829155B2BFB07A6EA848C621D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t35A46FAEE6B0A26D311444DF75B6EAFC59EBD914 * G_B2_0 = NULL;
	Action_1_t35A46FAEE6B0A26D311444DF75B6EAFC59EBD914 * G_B1_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Utility_t6BB300FC47C7086829155B2BFB07A6EA848C621D_il2cpp_TypeInfo_var);
		Action_1_t35A46FAEE6B0A26D311444DF75B6EAFC59EBD914 * L_0 = ((Utility_t6BB300FC47C7086829155B2BFB07A6EA848C621D_StaticFields*)il2cpp_codegen_static_fields_for(Utility_t6BB300FC47C7086829155B2BFB07A6EA848C621D_il2cpp_TypeInfo_var))->get_RenderNodeAdd_4();
		Action_1_t35A46FAEE6B0A26D311444DF75B6EAFC59EBD914 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		goto IL_0013;
	}

IL_000c:
	{
		intptr_t L_2 = ___userData0;
		NullCheck(G_B2_0);
		Action_1_Invoke_mEAB37079EB59D19D569529B0C5353085E6B5BFA5(G_B2_0, (intptr_t)L_2, /*hidden argument*/Action_1_Invoke_mEAB37079EB59D19D569529B0C5353085E6B5BFA5_RuntimeMethod_var);
	}

IL_0013:
	{
		return;
	}
}
// System.Void UnityEngine.UIElements.UIR.Utility::RaiseRenderNodeExecute(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utility_RaiseRenderNodeExecute_m8C280A8AA3CD4785DB575A75725081C713F364BA (intptr_t ___userData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_mEAB37079EB59D19D569529B0C5353085E6B5BFA5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utility_t6BB300FC47C7086829155B2BFB07A6EA848C621D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t35A46FAEE6B0A26D311444DF75B6EAFC59EBD914 * G_B2_0 = NULL;
	Action_1_t35A46FAEE6B0A26D311444DF75B6EAFC59EBD914 * G_B1_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Utility_t6BB300FC47C7086829155B2BFB07A6EA848C621D_il2cpp_TypeInfo_var);
		Action_1_t35A46FAEE6B0A26D311444DF75B6EAFC59EBD914 * L_0 = ((Utility_t6BB300FC47C7086829155B2BFB07A6EA848C621D_StaticFields*)il2cpp_codegen_static_fields_for(Utility_t6BB300FC47C7086829155B2BFB07A6EA848C621D_il2cpp_TypeInfo_var))->get_RenderNodeExecute_5();
		Action_1_t35A46FAEE6B0A26D311444DF75B6EAFC59EBD914 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		goto IL_0013;
	}

IL_000c:
	{
		intptr_t L_2 = ___userData0;
		NullCheck(G_B2_0);
		Action_1_Invoke_mEAB37079EB59D19D569529B0C5353085E6B5BFA5(G_B2_0, (intptr_t)L_2, /*hidden argument*/Action_1_Invoke_mEAB37079EB59D19D569529B0C5353085E6B5BFA5_RuntimeMethod_var);
	}

IL_0013:
	{
		return;
	}
}
// System.Void UnityEngine.UIElements.UIR.Utility::RaiseRenderNodeCleanup(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utility_RaiseRenderNodeCleanup_mBA3A9A383F4EB05533AB855CC9EF611CBEFFF49B (intptr_t ___userData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_mEAB37079EB59D19D569529B0C5353085E6B5BFA5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utility_t6BB300FC47C7086829155B2BFB07A6EA848C621D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t35A46FAEE6B0A26D311444DF75B6EAFC59EBD914 * G_B2_0 = NULL;
	Action_1_t35A46FAEE6B0A26D311444DF75B6EAFC59EBD914 * G_B1_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Utility_t6BB300FC47C7086829155B2BFB07A6EA848C621D_il2cpp_TypeInfo_var);
		Action_1_t35A46FAEE6B0A26D311444DF75B6EAFC59EBD914 * L_0 = ((Utility_t6BB300FC47C7086829155B2BFB07A6EA848C621D_StaticFields*)il2cpp_codegen_static_fields_for(Utility_t6BB300FC47C7086829155B2BFB07A6EA848C621D_il2cpp_TypeInfo_var))->get_RenderNodeCleanup_6();
		Action_1_t35A46FAEE6B0A26D311444DF75B6EAFC59EBD914 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		goto IL_0013;
	}

IL_000c:
	{
		intptr_t L_2 = ___userData0;
		NullCheck(G_B2_0);
		Action_1_Invoke_mEAB37079EB59D19D569529B0C5353085E6B5BFA5(G_B2_0, (intptr_t)L_2, /*hidden argument*/Action_1_Invoke_mEAB37079EB59D19D569529B0C5353085E6B5BFA5_RuntimeMethod_var);
	}

IL_0013:
	{
		return;
	}
}
// System.IntPtr UnityEngine.UIElements.UIR.Utility::AllocateBuffer(System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Utility_AllocateBuffer_m25525375CBC69000D11517E8F8504B1C3A6AA2DF (int32_t ___elementCount0, int32_t ___elementStride1, bool ___vertexBuffer2, const RuntimeMethod* method)
{
	typedef intptr_t (*Utility_AllocateBuffer_m25525375CBC69000D11517E8F8504B1C3A6AA2DF_ftn) (int32_t, int32_t, bool);
	static Utility_AllocateBuffer_m25525375CBC69000D11517E8F8504B1C3A6AA2DF_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Utility_AllocateBuffer_m25525375CBC69000D11517E8F8504B1C3A6AA2DF_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.UIElements.UIR.Utility::AllocateBuffer(System.Int32,System.Int32,System.Boolean)");
	intptr_t icallRetVal = _il2cpp_icall_func(___elementCount0, ___elementStride1, ___vertexBuffer2);
	return icallRetVal;
}
// System.Void UnityEngine.UIElements.UIR.Utility::FreeBuffer(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utility_FreeBuffer_m53808C050F83AA1516119AB88B806EA72493DE5B (intptr_t ___buffer0, const RuntimeMethod* method)
{
	typedef void (*Utility_FreeBuffer_m53808C050F83AA1516119AB88B806EA72493DE5B_ftn) (intptr_t);
	static Utility_FreeBuffer_m53808C050F83AA1516119AB88B806EA72493DE5B_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Utility_FreeBuffer_m53808C050F83AA1516119AB88B806EA72493DE5B_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.UIElements.UIR.Utility::FreeBuffer(System.IntPtr)");
	_il2cpp_icall_func(___buffer0);
}
// System.Void UnityEngine.UIElements.UIR.Utility::UpdateBufferRanges(System.IntPtr,System.IntPtr,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utility_UpdateBufferRanges_m4D0093981B1BE6D5ACAC7528E58AA2EC1CD66E31 (intptr_t ___buffer0, intptr_t ___ranges1, int32_t ___rangeCount2, int32_t ___writeRangeStart3, int32_t ___writeRangeEnd4, const RuntimeMethod* method)
{
	typedef void (*Utility_UpdateBufferRanges_m4D0093981B1BE6D5ACAC7528E58AA2EC1CD66E31_ftn) (intptr_t, intptr_t, int32_t, int32_t, int32_t);
	static Utility_UpdateBufferRanges_m4D0093981B1BE6D5ACAC7528E58AA2EC1CD66E31_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Utility_UpdateBufferRanges_m4D0093981B1BE6D5ACAC7528E58AA2EC1CD66E31_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.UIElements.UIR.Utility::UpdateBufferRanges(System.IntPtr,System.IntPtr,System.Int32,System.Int32,System.Int32)");
	_il2cpp_icall_func(___buffer0, ___ranges1, ___rangeCount2, ___writeRangeStart3, ___writeRangeEnd4);
}
// System.Void UnityEngine.UIElements.UIR.Utility::SetVectorArray(UnityEngine.MaterialPropertyBlock,System.Int32,System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utility_SetVectorArray_m528158038B117FB20AA25EA8EBA44B26BFE5B5AA (MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * ___props0, int32_t ___name1, intptr_t ___vector4s2, int32_t ___count3, const RuntimeMethod* method)
{
	typedef void (*Utility_SetVectorArray_m528158038B117FB20AA25EA8EBA44B26BFE5B5AA_ftn) (MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 *, int32_t, intptr_t, int32_t);
	static Utility_SetVectorArray_m528158038B117FB20AA25EA8EBA44B26BFE5B5AA_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Utility_SetVectorArray_m528158038B117FB20AA25EA8EBA44B26BFE5B5AA_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.UIElements.UIR.Utility::SetVectorArray(UnityEngine.MaterialPropertyBlock,System.Int32,System.IntPtr,System.Int32)");
	_il2cpp_icall_func(___props0, ___name1, ___vector4s2, ___count3);
}
// System.IntPtr UnityEngine.UIElements.UIR.Utility::GetVertexDeclaration(UnityEngine.Rendering.VertexAttributeDescriptor[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Utility_GetVertexDeclaration_m8C9D6DC8202EA19FF6D75F2824932477A6580D27 (VertexAttributeDescriptorU5BU5D_tD5E8E25AC5B9F233FDC5658F2C11FB7412BBDBFF* ___vertexAttributes0, const RuntimeMethod* method)
{
	typedef intptr_t (*Utility_GetVertexDeclaration_m8C9D6DC8202EA19FF6D75F2824932477A6580D27_ftn) (VertexAttributeDescriptorU5BU5D_tD5E8E25AC5B9F233FDC5658F2C11FB7412BBDBFF*);
	static Utility_GetVertexDeclaration_m8C9D6DC8202EA19FF6D75F2824932477A6580D27_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Utility_GetVertexDeclaration_m8C9D6DC8202EA19FF6D75F2824932477A6580D27_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.UIElements.UIR.Utility::GetVertexDeclaration(UnityEngine.Rendering.VertexAttributeDescriptor[])");
	intptr_t icallRetVal = _il2cpp_icall_func(___vertexAttributes0);
	return icallRetVal;
}
// System.Void UnityEngine.UIElements.UIR.Utility::RegisterIntermediateRenderer(UnityEngine.Camera,UnityEngine.Material,UnityEngine.Matrix4x4,UnityEngine.Bounds,System.Int32,System.Int32,System.Boolean,System.Int32,System.UInt64,System.Int32,System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utility_RegisterIntermediateRenderer_mFDF184F7DBE75D258D08F3DE050D4BB4C717F611 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___camera0, Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___material1, Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___transform2, Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  ___aabb3, int32_t ___renderLayer4, int32_t ___shadowCasting5, bool ___receiveShadows6, int32_t ___sameDistanceSortPriority7, uint64_t ___sceneCullingMask8, int32_t ___rendererCallbackFlags9, intptr_t ___userData10, int32_t ___userDataSize11, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utility_t6BB300FC47C7086829155B2BFB07A6EA848C621D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_0 = ___camera0;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_1 = ___material1;
		int32_t L_2 = ___renderLayer4;
		int32_t L_3 = ___shadowCasting5;
		bool L_4 = ___receiveShadows6;
		int32_t L_5 = ___sameDistanceSortPriority7;
		uint64_t L_6 = ___sceneCullingMask8;
		int32_t L_7 = ___rendererCallbackFlags9;
		intptr_t L_8 = ___userData10;
		int32_t L_9 = ___userDataSize11;
		IL2CPP_RUNTIME_CLASS_INIT(Utility_t6BB300FC47C7086829155B2BFB07A6EA848C621D_il2cpp_TypeInfo_var);
		Utility_RegisterIntermediateRenderer_Injected_m120AFED2C5F1B44887304C4F01193E1259B42E71(L_0, L_1, (Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)(&___transform2), (Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 *)(&___aabb3), L_2, L_3, L_4, L_5, L_6, L_7, (intptr_t)L_8, L_9, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.UIElements.UIR.Utility::DrawRanges(System.IntPtr,System.IntPtr*,System.Int32,System.IntPtr,System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utility_DrawRanges_m401362E58941EC4245F436A3F32705C8FC3FCD92 (intptr_t ___ib0, intptr_t* ___vertexStreams1, int32_t ___streamCount2, intptr_t ___ranges3, int32_t ___rangeCount4, intptr_t ___vertexDecl5, const RuntimeMethod* method)
{
	typedef void (*Utility_DrawRanges_m401362E58941EC4245F436A3F32705C8FC3FCD92_ftn) (intptr_t, intptr_t*, int32_t, intptr_t, int32_t, intptr_t);
	static Utility_DrawRanges_m401362E58941EC4245F436A3F32705C8FC3FCD92_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Utility_DrawRanges_m401362E58941EC4245F436A3F32705C8FC3FCD92_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.UIElements.UIR.Utility::DrawRanges(System.IntPtr,System.IntPtr*,System.Int32,System.IntPtr,System.Int32,System.IntPtr)");
	_il2cpp_icall_func(___ib0, ___vertexStreams1, ___streamCount2, ___ranges3, ___rangeCount4, ___vertexDecl5);
}
// System.Void UnityEngine.UIElements.UIR.Utility::SetPropertyBlock(UnityEngine.MaterialPropertyBlock)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utility_SetPropertyBlock_mF63E62CFC3365A49628A19826B404160D9F95DB7 (MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * ___props0, const RuntimeMethod* method)
{
	typedef void (*Utility_SetPropertyBlock_mF63E62CFC3365A49628A19826B404160D9F95DB7_ftn) (MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 *);
	static Utility_SetPropertyBlock_mF63E62CFC3365A49628A19826B404160D9F95DB7_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Utility_SetPropertyBlock_mF63E62CFC3365A49628A19826B404160D9F95DB7_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.UIElements.UIR.Utility::SetPropertyBlock(UnityEngine.MaterialPropertyBlock)");
	_il2cpp_icall_func(___props0);
}
// System.Void UnityEngine.UIElements.UIR.Utility::SetScissorRect(UnityEngine.RectInt)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utility_SetScissorRect_mAADC13A157BA617CD104DB24513C628C733981D4 (RectInt_tE7B8105A280C1AC73A4157ED41F9B86C9BD91E49  ___scissorRect0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utility_t6BB300FC47C7086829155B2BFB07A6EA848C621D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Utility_t6BB300FC47C7086829155B2BFB07A6EA848C621D_il2cpp_TypeInfo_var);
		Utility_SetScissorRect_Injected_mC4352D69FF93E1ECB03A758AE902760DC1456C1D((RectInt_tE7B8105A280C1AC73A4157ED41F9B86C9BD91E49 *)(&___scissorRect0), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.UIElements.UIR.Utility::DisableScissor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utility_DisableScissor_m0924B975BA13D8502AFC21FE73162D0DB9A41512 (const RuntimeMethod* method)
{
	typedef void (*Utility_DisableScissor_m0924B975BA13D8502AFC21FE73162D0DB9A41512_ftn) ();
	static Utility_DisableScissor_m0924B975BA13D8502AFC21FE73162D0DB9A41512_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Utility_DisableScissor_m0924B975BA13D8502AFC21FE73162D0DB9A41512_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.UIElements.UIR.Utility::DisableScissor()");
	_il2cpp_icall_func();
}
// System.UInt32 UnityEngine.UIElements.UIR.Utility::InsertCPUFence()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Utility_InsertCPUFence_m50CB626BBCFE77DCCE844A931662D843E9EBAA1B (const RuntimeMethod* method)
{
	typedef uint32_t (*Utility_InsertCPUFence_m50CB626BBCFE77DCCE844A931662D843E9EBAA1B_ftn) ();
	static Utility_InsertCPUFence_m50CB626BBCFE77DCCE844A931662D843E9EBAA1B_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Utility_InsertCPUFence_m50CB626BBCFE77DCCE844A931662D843E9EBAA1B_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.UIElements.UIR.Utility::InsertCPUFence()");
	uint32_t icallRetVal = _il2cpp_icall_func();
	return icallRetVal;
}
// System.Boolean UnityEngine.UIElements.UIR.Utility::CPUFencePassed(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utility_CPUFencePassed_mE2D005C7178A9E098257DA5ADA59F6DC434156D8 (uint32_t ___fence0, const RuntimeMethod* method)
{
	typedef bool (*Utility_CPUFencePassed_mE2D005C7178A9E098257DA5ADA59F6DC434156D8_ftn) (uint32_t);
	static Utility_CPUFencePassed_mE2D005C7178A9E098257DA5ADA59F6DC434156D8_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Utility_CPUFencePassed_mE2D005C7178A9E098257DA5ADA59F6DC434156D8_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.UIElements.UIR.Utility::CPUFencePassed(System.UInt32)");
	bool icallRetVal = _il2cpp_icall_func(___fence0);
	return icallRetVal;
}
// System.Void UnityEngine.UIElements.UIR.Utility::WaitForCPUFencePassed(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utility_WaitForCPUFencePassed_m72A782BF7850D72981B348AACDCFC92C10C2CFAA (uint32_t ___fence0, const RuntimeMethod* method)
{
	typedef void (*Utility_WaitForCPUFencePassed_m72A782BF7850D72981B348AACDCFC92C10C2CFAA_ftn) (uint32_t);
	static Utility_WaitForCPUFencePassed_m72A782BF7850D72981B348AACDCFC92C10C2CFAA_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Utility_WaitForCPUFencePassed_m72A782BF7850D72981B348AACDCFC92C10C2CFAA_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.UIElements.UIR.Utility::WaitForCPUFencePassed(System.UInt32)");
	_il2cpp_icall_func(___fence0);
}
// System.Void UnityEngine.UIElements.UIR.Utility::SyncRenderThread()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utility_SyncRenderThread_mA3A80EB2E9536AF7F79A1B118B5ED9CABEA00147 (const RuntimeMethod* method)
{
	typedef void (*Utility_SyncRenderThread_mA3A80EB2E9536AF7F79A1B118B5ED9CABEA00147_ftn) ();
	static Utility_SyncRenderThread_mA3A80EB2E9536AF7F79A1B118B5ED9CABEA00147_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Utility_SyncRenderThread_mA3A80EB2E9536AF7F79A1B118B5ED9CABEA00147_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.UIElements.UIR.Utility::SyncRenderThread()");
	_il2cpp_icall_func();
}
// UnityEngine.RectInt UnityEngine.UIElements.UIR.Utility::GetActiveViewport()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RectInt_tE7B8105A280C1AC73A4157ED41F9B86C9BD91E49  Utility_GetActiveViewport_m5B566CA13295352EC5C14CB6F2157A697AC5F7AA (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utility_t6BB300FC47C7086829155B2BFB07A6EA848C621D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RectInt_tE7B8105A280C1AC73A4157ED41F9B86C9BD91E49  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		IL2CPP_RUNTIME_CLASS_INIT(Utility_t6BB300FC47C7086829155B2BFB07A6EA848C621D_il2cpp_TypeInfo_var);
		Utility_GetActiveViewport_Injected_m9CBFE09239E629B5D7A721E8FA0E3432105DE2C1((RectInt_tE7B8105A280C1AC73A4157ED41F9B86C9BD91E49 *)(&V_0), /*hidden argument*/NULL);
		RectInt_tE7B8105A280C1AC73A4157ED41F9B86C9BD91E49  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.UIElements.UIR.Utility::ProfileDrawChainBegin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utility_ProfileDrawChainBegin_m81E8834AFE481B9D3A0785A9826E972112EFFFBC (const RuntimeMethod* method)
{
	typedef void (*Utility_ProfileDrawChainBegin_m81E8834AFE481B9D3A0785A9826E972112EFFFBC_ftn) ();
	static Utility_ProfileDrawChainBegin_m81E8834AFE481B9D3A0785A9826E972112EFFFBC_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Utility_ProfileDrawChainBegin_m81E8834AFE481B9D3A0785A9826E972112EFFFBC_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.UIElements.UIR.Utility::ProfileDrawChainBegin()");
	_il2cpp_icall_func();
}
// System.Void UnityEngine.UIElements.UIR.Utility::ProfileDrawChainEnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utility_ProfileDrawChainEnd_m5C4984248123F9B927A871C106602478CD78C033 (const RuntimeMethod* method)
{
	typedef void (*Utility_ProfileDrawChainEnd_m5C4984248123F9B927A871C106602478CD78C033_ftn) ();
	static Utility_ProfileDrawChainEnd_m5C4984248123F9B927A871C106602478CD78C033_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Utility_ProfileDrawChainEnd_m5C4984248123F9B927A871C106602478CD78C033_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.UIElements.UIR.Utility::ProfileDrawChainEnd()");
	_il2cpp_icall_func();
}
// System.Void UnityEngine.UIElements.UIR.Utility::ProfileImmediateRendererBegin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utility_ProfileImmediateRendererBegin_m9355DD500468BDE29F9E1B87A870899E367EDAE5 (const RuntimeMethod* method)
{
	typedef void (*Utility_ProfileImmediateRendererBegin_m9355DD500468BDE29F9E1B87A870899E367EDAE5_ftn) ();
	static Utility_ProfileImmediateRendererBegin_m9355DD500468BDE29F9E1B87A870899E367EDAE5_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Utility_ProfileImmediateRendererBegin_m9355DD500468BDE29F9E1B87A870899E367EDAE5_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.UIElements.UIR.Utility::ProfileImmediateRendererBegin()");
	_il2cpp_icall_func();
}
// System.Void UnityEngine.UIElements.UIR.Utility::ProfileImmediateRendererEnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utility_ProfileImmediateRendererEnd_mB9AC1337463513802BA8174B5B1063206B2BB903 (const RuntimeMethod* method)
{
	typedef void (*Utility_ProfileImmediateRendererEnd_mB9AC1337463513802BA8174B5B1063206B2BB903_ftn) ();
	static Utility_ProfileImmediateRendererEnd_mB9AC1337463513802BA8174B5B1063206B2BB903_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Utility_ProfileImmediateRendererEnd_mB9AC1337463513802BA8174B5B1063206B2BB903_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.UIElements.UIR.Utility::ProfileImmediateRendererEnd()");
	_il2cpp_icall_func();
}
// System.Void UnityEngine.UIElements.UIR.Utility::NotifyOfUIREvents(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utility_NotifyOfUIREvents_m2F146FF50ED385E9E02594E5737949AEDE3066AE (bool ___subscribe0, const RuntimeMethod* method)
{
	typedef void (*Utility_NotifyOfUIREvents_m2F146FF50ED385E9E02594E5737949AEDE3066AE_ftn) (bool);
	static Utility_NotifyOfUIREvents_m2F146FF50ED385E9E02594E5737949AEDE3066AE_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Utility_NotifyOfUIREvents_m2F146FF50ED385E9E02594E5737949AEDE3066AE_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.UIElements.UIR.Utility::NotifyOfUIREvents(System.Boolean)");
	_il2cpp_icall_func(___subscribe0);
}
// UnityEngine.Matrix4x4 UnityEngine.UIElements.UIR.Utility::GetUnityProjectionMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  Utility_GetUnityProjectionMatrix_mF629ED200BD44A570B011E8C3374786C065362C0 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utility_t6BB300FC47C7086829155B2BFB07A6EA848C621D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		IL2CPP_RUNTIME_CLASS_INIT(Utility_t6BB300FC47C7086829155B2BFB07A6EA848C621D_il2cpp_TypeInfo_var);
		Utility_GetUnityProjectionMatrix_Injected_mC4E56A3E18DB993BB481EDE0A6ABC890F3FFE8B4((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)(&V_0), /*hidden argument*/NULL);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_0 = V_0;
		return L_0;
	}
}
// UnityEngine.Matrix4x4 UnityEngine.UIElements.UIR.Utility::GetDeviceProjectionMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  Utility_GetDeviceProjectionMatrix_m2D5AC166573387273C9514B0B5DDFFFA17D9A21C (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utility_t6BB300FC47C7086829155B2BFB07A6EA848C621D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		IL2CPP_RUNTIME_CLASS_INIT(Utility_t6BB300FC47C7086829155B2BFB07A6EA848C621D_il2cpp_TypeInfo_var);
		Utility_GetDeviceProjectionMatrix_Injected_mDBD190B8F1698397993FF46D75CD5E8275AC319C((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)(&V_0), /*hidden argument*/NULL);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.UIElements.UIR.Utility::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utility__cctor_m3A3377BE2146E8A477AE1D3DF019A72C0212CFAA (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utility_t6BB300FC47C7086829155B2BFB07A6EA848C621D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3E4595538801AB36CCD7E4EFDA9DD0272DEA19EF);
		s_Il2CppMethodInitialized = true;
	}
	{
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_0;
		memset((&L_0), 0, sizeof(L_0));
		ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline((&L_0), _stringLiteral3E4595538801AB36CCD7E4EFDA9DD0272DEA19EF, /*hidden argument*/NULL);
		((Utility_t6BB300FC47C7086829155B2BFB07A6EA848C621D_StaticFields*)il2cpp_codegen_static_fields_for(Utility_t6BB300FC47C7086829155B2BFB07A6EA848C621D_il2cpp_TypeInfo_var))->set_s_MarkerRaiseEngineUpdate_7(L_0);
		return;
	}
}
// System.Void UnityEngine.UIElements.UIR.Utility::RegisterIntermediateRenderer_Injected(UnityEngine.Camera,UnityEngine.Material,UnityEngine.Matrix4x4&,UnityEngine.Bounds&,System.Int32,System.Int32,System.Boolean,System.Int32,System.UInt64,System.Int32,System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utility_RegisterIntermediateRenderer_Injected_m120AFED2C5F1B44887304C4F01193E1259B42E71 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___camera0, Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___material1, Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * ___transform2, Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 * ___aabb3, int32_t ___renderLayer4, int32_t ___shadowCasting5, bool ___receiveShadows6, int32_t ___sameDistanceSortPriority7, uint64_t ___sceneCullingMask8, int32_t ___rendererCallbackFlags9, intptr_t ___userData10, int32_t ___userDataSize11, const RuntimeMethod* method)
{
	typedef void (*Utility_RegisterIntermediateRenderer_Injected_m120AFED2C5F1B44887304C4F01193E1259B42E71_ftn) (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C *, Material_t8927C00353A72755313F046D0CE85178AE8218EE *, Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *, Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 *, int32_t, int32_t, bool, int32_t, uint64_t, int32_t, intptr_t, int32_t);
	static Utility_RegisterIntermediateRenderer_Injected_m120AFED2C5F1B44887304C4F01193E1259B42E71_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Utility_RegisterIntermediateRenderer_Injected_m120AFED2C5F1B44887304C4F01193E1259B42E71_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.UIElements.UIR.Utility::RegisterIntermediateRenderer_Injected(UnityEngine.Camera,UnityEngine.Material,UnityEngine.Matrix4x4&,UnityEngine.Bounds&,System.Int32,System.Int32,System.Boolean,System.Int32,System.UInt64,System.Int32,System.IntPtr,System.Int32)");
	_il2cpp_icall_func(___camera0, ___material1, ___transform2, ___aabb3, ___renderLayer4, ___shadowCasting5, ___receiveShadows6, ___sameDistanceSortPriority7, ___sceneCullingMask8, ___rendererCallbackFlags9, ___userData10, ___userDataSize11);
}
// System.Void UnityEngine.UIElements.UIR.Utility::SetScissorRect_Injected(UnityEngine.RectInt&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utility_SetScissorRect_Injected_mC4352D69FF93E1ECB03A758AE902760DC1456C1D (RectInt_tE7B8105A280C1AC73A4157ED41F9B86C9BD91E49 * ___scissorRect0, const RuntimeMethod* method)
{
	typedef void (*Utility_SetScissorRect_Injected_mC4352D69FF93E1ECB03A758AE902760DC1456C1D_ftn) (RectInt_tE7B8105A280C1AC73A4157ED41F9B86C9BD91E49 *);
	static Utility_SetScissorRect_Injected_mC4352D69FF93E1ECB03A758AE902760DC1456C1D_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Utility_SetScissorRect_Injected_mC4352D69FF93E1ECB03A758AE902760DC1456C1D_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.UIElements.UIR.Utility::SetScissorRect_Injected(UnityEngine.RectInt&)");
	_il2cpp_icall_func(___scissorRect0);
}
// System.Void UnityEngine.UIElements.UIR.Utility::GetActiveViewport_Injected(UnityEngine.RectInt&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utility_GetActiveViewport_Injected_m9CBFE09239E629B5D7A721E8FA0E3432105DE2C1 (RectInt_tE7B8105A280C1AC73A4157ED41F9B86C9BD91E49 * ___ret0, const RuntimeMethod* method)
{
	typedef void (*Utility_GetActiveViewport_Injected_m9CBFE09239E629B5D7A721E8FA0E3432105DE2C1_ftn) (RectInt_tE7B8105A280C1AC73A4157ED41F9B86C9BD91E49 *);
	static Utility_GetActiveViewport_Injected_m9CBFE09239E629B5D7A721E8FA0E3432105DE2C1_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Utility_GetActiveViewport_Injected_m9CBFE09239E629B5D7A721E8FA0E3432105DE2C1_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.UIElements.UIR.Utility::GetActiveViewport_Injected(UnityEngine.RectInt&)");
	_il2cpp_icall_func(___ret0);
}
// System.Void UnityEngine.UIElements.UIR.Utility::GetUnityProjectionMatrix_Injected(UnityEngine.Matrix4x4&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utility_GetUnityProjectionMatrix_Injected_mC4E56A3E18DB993BB481EDE0A6ABC890F3FFE8B4 (Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * ___ret0, const RuntimeMethod* method)
{
	typedef void (*Utility_GetUnityProjectionMatrix_Injected_mC4E56A3E18DB993BB481EDE0A6ABC890F3FFE8B4_ftn) (Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *);
	static Utility_GetUnityProjectionMatrix_Injected_mC4E56A3E18DB993BB481EDE0A6ABC890F3FFE8B4_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Utility_GetUnityProjectionMatrix_Injected_mC4E56A3E18DB993BB481EDE0A6ABC890F3FFE8B4_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.UIElements.UIR.Utility::GetUnityProjectionMatrix_Injected(UnityEngine.Matrix4x4&)");
	_il2cpp_icall_func(___ret0);
}
// System.Void UnityEngine.UIElements.UIR.Utility::GetDeviceProjectionMatrix_Injected(UnityEngine.Matrix4x4&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utility_GetDeviceProjectionMatrix_Injected_mDBD190B8F1698397993FF46D75CD5E8275AC319C (Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * ___ret0, const RuntimeMethod* method)
{
	typedef void (*Utility_GetDeviceProjectionMatrix_Injected_mDBD190B8F1698397993FF46D75CD5E8275AC319C_ftn) (Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *);
	static Utility_GetDeviceProjectionMatrix_Injected_mDBD190B8F1698397993FF46D75CD5E8275AC319C_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Utility_GetDeviceProjectionMatrix_Injected_mDBD190B8F1698397993FF46D75CD5E8275AC319C_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.UIElements.UIR.Utility::GetDeviceProjectionMatrix_Injected(UnityEngine.Matrix4x4&)");
	_il2cpp_icall_func(___ret0);
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
// System.Void UnityEngine.Yoga.YogaConfig::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaConfig__ctor_mF223298368491BAAD47A029E58078455A4D17985 (YogaConfig_tA06BDF520DE54384107CF42E1E9909DB1C28A7E7 * __this, intptr_t ___ygConfig0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		intptr_t L_0 = ___ygConfig0;
		__this->set__ygConfig_1((intptr_t)L_0);
		intptr_t L_1 = __this->get__ygConfig_1();
		bool L_2;
		L_2 = IntPtr_op_Equality_mD94F3FE43A65684EFF984A7B95E70D2520C0AC73((intptr_t)L_1, (intptr_t)(0), /*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_002f;
		}
	}
	{
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_4 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral52BC61F0345FADE03AB730C8F5BC70C5256D169E)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&YogaConfig__ctor_mF223298368491BAAD47A029E58078455A4D17985_RuntimeMethod_var)));
	}

IL_002f:
	{
		return;
	}
}
// System.Void UnityEngine.Yoga.YogaConfig::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaConfig__ctor_m29916B570D3E753205B290D354EE1CEA3DF470F0 (YogaConfig_tA06BDF520DE54384107CF42E1E9909DB1C28A7E7 * __this, const RuntimeMethod* method)
{
	{
		intptr_t L_0;
		L_0 = Native_YGConfigNew_mE833F137A28FEEF75528603EC1828E70DE3E9ABD(/*hidden argument*/NULL);
		YogaConfig__ctor_mF223298368491BAAD47A029E58078455A4D17985(__this, (intptr_t)L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Yoga.YogaConfig::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaConfig_Finalize_m319E9A885EC01FC2093731EF33F22CEACE04ACD2 (YogaConfig_tA06BDF520DE54384107CF42E1E9909DB1C28A7E7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YogaConfig_tA06BDF520DE54384107CF42E1E9909DB1C28A7E7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
	}

IL_0001:
	try
	{ // begin try (depth: 1)
		{
			intptr_t L_0;
			L_0 = YogaConfig_get_Handle_mD2EF807A42DE91ECAA72358BF057EC8014E0DAAA(__this, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(YogaConfig_tA06BDF520DE54384107CF42E1E9909DB1C28A7E7_il2cpp_TypeInfo_var);
			YogaConfig_tA06BDF520DE54384107CF42E1E9909DB1C28A7E7 * L_1 = ((YogaConfig_tA06BDF520DE54384107CF42E1E9909DB1C28A7E7_StaticFields*)il2cpp_codegen_static_fields_for(YogaConfig_tA06BDF520DE54384107CF42E1E9909DB1C28A7E7_il2cpp_TypeInfo_var))->get_Default_0();
			NullCheck(L_1);
			intptr_t L_2;
			L_2 = YogaConfig_get_Handle_mD2EF807A42DE91ECAA72358BF057EC8014E0DAAA(L_1, /*hidden argument*/NULL);
			bool L_3;
			L_3 = IntPtr_op_Inequality_m212AF0E66AA81FEDC982B1C8A44ADDA24B995EB8((intptr_t)L_0, (intptr_t)L_2, /*hidden argument*/NULL);
			V_0 = L_3;
			bool L_4 = V_0;
			if (!L_4)
			{
				goto IL_0029;
			}
		}

IL_001b:
		{
			intptr_t L_5;
			L_5 = YogaConfig_get_Handle_mD2EF807A42DE91ECAA72358BF057EC8014E0DAAA(__this, /*hidden argument*/NULL);
			Native_YGConfigFree_mB97AD40C5DBEDC120FE9904BDCDFF7D2E0DD84A3((intptr_t)L_5, /*hidden argument*/NULL);
		}

IL_0029:
		{
			IL2CPP_LEAVE(0x33, FINALLY_002b);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_002b;
	}

FINALLY_002b:
	{ // begin finally (depth: 1)
		Object_Finalize_mC59C83CF4F7707E425FFA6362931C25D4C36676A(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(43)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(43)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x33, IL_0033)
	}

IL_0033:
	{
		return;
	}
}
// System.IntPtr UnityEngine.Yoga.YogaConfig::get_Handle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t YogaConfig_get_Handle_mD2EF807A42DE91ECAA72358BF057EC8014E0DAAA (YogaConfig_tA06BDF520DE54384107CF42E1E9909DB1C28A7E7 * __this, const RuntimeMethod* method)
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = __this->get__ygConfig_1();
		V_0 = (intptr_t)L_0;
		goto IL_000a;
	}

IL_000a:
	{
		intptr_t L_1 = V_0;
		return (intptr_t)L_1;
	}
}
// System.Boolean UnityEngine.Yoga.YogaConfig::get_UseWebDefaults()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool YogaConfig_get_UseWebDefaults_m3A0FCFA7A1CFD0C8D1D74EB76998E8FBA61A6C09 (YogaConfig_tA06BDF520DE54384107CF42E1E9909DB1C28A7E7 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		intptr_t L_0 = __this->get__ygConfig_1();
		bool L_1;
		L_1 = Native_YGConfigGetUseWebDefaults_mA65987BA65EE60236BAB8AB6E877DE4A387C9A31((intptr_t)L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.Yoga.YogaConfig::set_UseWebDefaults(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaConfig_set_UseWebDefaults_mAAF49DEBCCEC33A82FFE83AA8DA2D7CDADFF1142 (YogaConfig_tA06BDF520DE54384107CF42E1E9909DB1C28A7E7 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = __this->get__ygConfig_1();
		bool L_1 = ___value0;
		Native_YGConfigSetUseWebDefaults_m18473CEE9D49131766E3B0A2CFDF22AB38E11EDE((intptr_t)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Yoga.YogaConfig::set_PointScaleFactor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaConfig_set_PointScaleFactor_m43DD8922EDE04A68410F8FC8D709D10F6D035DA2 (YogaConfig_tA06BDF520DE54384107CF42E1E9909DB1C28A7E7 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = __this->get__ygConfig_1();
		float L_1 = ___value0;
		Native_YGConfigSetPointScaleFactor_m25EC3A3C7ADA6B7ED8AAA11D620E1175E4353455((intptr_t)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Yoga.YogaConfig::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaConfig__cctor_mDFD4190A3DCBC10165B10108B86918A71D6128F3 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YogaConfig_tA06BDF520DE54384107CF42E1E9909DB1C28A7E7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0;
		L_0 = Native_YGConfigGetDefault_m7D26F4A06C4A4FC51A3E18F6ADD22F51A5E0BCF3(/*hidden argument*/NULL);
		YogaConfig_tA06BDF520DE54384107CF42E1E9909DB1C28A7E7 * L_1 = (YogaConfig_tA06BDF520DE54384107CF42E1E9909DB1C28A7E7 *)il2cpp_codegen_object_new(YogaConfig_tA06BDF520DE54384107CF42E1E9909DB1C28A7E7_il2cpp_TypeInfo_var);
		YogaConfig__ctor_mF223298368491BAAD47A029E58078455A4D17985(L_1, (intptr_t)L_0, /*hidden argument*/NULL);
		((YogaConfig_tA06BDF520DE54384107CF42E1E9909DB1C28A7E7_StaticFields*)il2cpp_codegen_static_fields_for(YogaConfig_tA06BDF520DE54384107CF42E1E9909DB1C28A7E7_il2cpp_TypeInfo_var))->set_Default_0(L_1);
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
// System.Boolean UnityEngine.Yoga.YogaConstants::IsUndefined(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool YogaConstants_IsUndefined_m31D36808D971EE123C830220068474081F6C7410 (float ___value0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		float L_0 = ___value0;
		bool L_1;
		L_1 = Single_IsNaN_m458FF076EF1944D4D888A585F7C6C49DA4730599(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		bool L_2 = V_0;
		return L_2;
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
// System.Void UnityEngine.Yoga.YogaNode::.ctor(UnityEngine.Yoga.YogaConfig)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaNode__ctor_mBEF535DC862A4A1AF5501335E64584910F9188DF (YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * __this, YogaConfig_tA06BDF520DE54384107CF42E1E9909DB1C28A7E7 * ___config0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YogaConfig_tA06BDF520DE54384107CF42E1E9909DB1C28A7E7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * G_B2_0 = NULL;
	YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * G_B1_0 = NULL;
	YogaConfig_tA06BDF520DE54384107CF42E1E9909DB1C28A7E7 * G_B3_0 = NULL;
	YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * G_B3_1 = NULL;
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		YogaConfig_tA06BDF520DE54384107CF42E1E9909DB1C28A7E7 * L_0 = ___config0;
		G_B1_0 = __this;
		if (!L_0)
		{
			G_B2_0 = __this;
			goto IL_000f;
		}
	}
	{
		YogaConfig_tA06BDF520DE54384107CF42E1E9909DB1C28A7E7 * L_1 = ___config0;
		G_B3_0 = L_1;
		G_B3_1 = G_B1_0;
		goto IL_0014;
	}

IL_000f:
	{
		IL2CPP_RUNTIME_CLASS_INIT(YogaConfig_tA06BDF520DE54384107CF42E1E9909DB1C28A7E7_il2cpp_TypeInfo_var);
		YogaConfig_tA06BDF520DE54384107CF42E1E9909DB1C28A7E7 * L_2 = ((YogaConfig_tA06BDF520DE54384107CF42E1E9909DB1C28A7E7_StaticFields*)il2cpp_codegen_static_fields_for(YogaConfig_tA06BDF520DE54384107CF42E1E9909DB1C28A7E7_il2cpp_TypeInfo_var))->get_Default_0();
		G_B3_0 = L_2;
		G_B3_1 = G_B2_0;
	}

IL_0014:
	{
		NullCheck(G_B3_1);
		G_B3_1->set__config_1(G_B3_0);
		YogaConfig_tA06BDF520DE54384107CF42E1E9909DB1C28A7E7 * L_3 = __this->get__config_1();
		NullCheck(L_3);
		intptr_t L_4;
		L_4 = YogaConfig_get_Handle_mD2EF807A42DE91ECAA72358BF057EC8014E0DAAA(L_3, /*hidden argument*/NULL);
		intptr_t L_5;
		L_5 = Native_YGNodeNewWithConfig_m34DD3C6182BCD5B1D77B9888F05605F76E2ED7BD((intptr_t)L_4, /*hidden argument*/NULL);
		__this->set__ygNode_0((intptr_t)L_5);
		intptr_t L_6 = __this->get__ygNode_0();
		bool L_7;
		L_7 = IntPtr_op_Equality_mD94F3FE43A65684EFF984A7B95E70D2520C0AC73((intptr_t)L_6, (intptr_t)(0), /*hidden argument*/NULL);
		V_0 = L_7;
		bool L_8 = V_0;
		if (!L_8)
		{
			goto IL_004f;
		}
	}
	{
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_9 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral52BC61F0345FADE03AB730C8F5BC70C5256D169E)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&YogaNode__ctor_mBEF535DC862A4A1AF5501335E64584910F9188DF_RuntimeMethod_var)));
	}

IL_004f:
	{
		return;
	}
}
// System.Void UnityEngine.Yoga.YogaNode::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaNode_Finalize_m1EE3AC41EBD4CFB75DEC0AC735F32A1362B78AF5 (YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * __this, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
	}

IL_0001:
	try
	{ // begin try (depth: 1)
		intptr_t L_0 = __this->get__ygNode_0();
		Native_YGNodeFree_m6C303D358175411146CDF491B744D89A29343626((intptr_t)L_0, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x18, FINALLY_0010);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0010;
	}

FINALLY_0010:
	{ // begin finally (depth: 1)
		Object_Finalize_mC59C83CF4F7707E425FFA6362931C25D4C36676A(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(16)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(16)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x18, IL_0018)
	}

IL_0018:
	{
		return;
	}
}
// System.Void UnityEngine.Yoga.YogaNode::set_Config(UnityEngine.Yoga.YogaConfig)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaNode_set_Config_m3BAE49A56C0203A9D2B0C0037084DB6638E61096 (YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * __this, YogaConfig_tA06BDF520DE54384107CF42E1E9909DB1C28A7E7 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YogaConfig_tA06BDF520DE54384107CF42E1E9909DB1C28A7E7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	YogaConfig_tA06BDF520DE54384107CF42E1E9909DB1C28A7E7 * G_B2_0 = NULL;
	YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * G_B2_1 = NULL;
	YogaConfig_tA06BDF520DE54384107CF42E1E9909DB1C28A7E7 * G_B1_0 = NULL;
	YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * G_B1_1 = NULL;
	{
		YogaConfig_tA06BDF520DE54384107CF42E1E9909DB1C28A7E7 * L_0 = ___value0;
		YogaConfig_tA06BDF520DE54384107CF42E1E9909DB1C28A7E7 * L_1 = L_0;
		G_B1_0 = L_1;
		G_B1_1 = __this;
		if (L_1)
		{
			G_B2_0 = L_1;
			G_B2_1 = __this;
			goto IL_000c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(YogaConfig_tA06BDF520DE54384107CF42E1E9909DB1C28A7E7_il2cpp_TypeInfo_var);
		YogaConfig_tA06BDF520DE54384107CF42E1E9909DB1C28A7E7 * L_2 = ((YogaConfig_tA06BDF520DE54384107CF42E1E9909DB1C28A7E7_StaticFields*)il2cpp_codegen_static_fields_for(YogaConfig_tA06BDF520DE54384107CF42E1E9909DB1C28A7E7_il2cpp_TypeInfo_var))->get_Default_0();
		G_B2_0 = L_2;
		G_B2_1 = G_B1_1;
	}

IL_000c:
	{
		NullCheck(G_B2_1);
		G_B2_1->set__config_1(G_B2_0);
		intptr_t L_3 = __this->get__ygNode_0();
		YogaConfig_tA06BDF520DE54384107CF42E1E9909DB1C28A7E7 * L_4 = __this->get__config_1();
		NullCheck(L_4);
		intptr_t L_5;
		L_5 = YogaConfig_get_Handle_mD2EF807A42DE91ECAA72358BF057EC8014E0DAAA(L_4, /*hidden argument*/NULL);
		Native_YGNodeSetConfig_m3E223D988E63C4FA0B6E7C47E22A9113FA0FDD86((intptr_t)L_3, (intptr_t)L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.Yoga.YogaNode::get_IsDirty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool YogaNode_get_IsDirty_m87AA05B2FDFA3FB8A7687BFF34BE22966ECA98EB (YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		intptr_t L_0 = __this->get__ygNode_0();
		bool L_1;
		L_1 = Native_YGNodeIsDirty_mC0D246AEA06E9A070468790663D5013ACFCD69D8((intptr_t)L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.Yoga.YogaNode::MarkDirty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaNode_MarkDirty_m9B1C0AB822E53500298B00E465BB0E911D97AE03 (YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * __this, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = __this->get__ygNode_0();
		Native_YGNodeMarkDirty_m65AC700A66F6EAF61A621C4E22E3843ED6AE9ED7((intptr_t)L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.Yoga.YogaNode::get_HasNewLayout()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool YogaNode_get_HasNewLayout_m10493BEB0879137B1999DC121E40B37393CC43E8 (YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		intptr_t L_0 = __this->get__ygNode_0();
		bool L_1;
		L_1 = Native_YGNodeGetHasNewLayout_mF7AE5D415C94C0D890B90F70EF68C15281F9BBCD((intptr_t)L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Boolean UnityEngine.Yoga.YogaNode::get_IsMeasureDefined()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool YogaNode_get_IsMeasureDefined_mFA702131C777907247568D947E96DEC05F501FBA (YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		MeasureFunction_tBD19E8A44621B4D553785068ECCF0439CD9666C6 * L_0 = __this->get__measureFunction_4();
		V_0 = (bool)((!(((RuntimeObject*)(MeasureFunction_tBD19E8A44621B4D553785068ECCF0439CD9666C6 *)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		goto IL_000d;
	}

IL_000d:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Boolean UnityEngine.Yoga.YogaNode::get_IsBaselineDefined()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool YogaNode_get_IsBaselineDefined_m125B599E9999B75477282256947971818C64A3E0 (YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		BaselineFunction_t7C180BD26F5C8850EEDDBEC2471D9A466EF0D24A * L_0 = __this->get__baselineFunction_5();
		V_0 = (bool)((!(((RuntimeObject*)(BaselineFunction_t7C180BD26F5C8850EEDDBEC2471D9A466EF0D24A *)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		goto IL_000d;
	}

IL_000d:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Yoga.YogaNode::CopyStyle(UnityEngine.Yoga.YogaNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaNode_CopyStyle_m83DF5ABC7F064AA85D078746491B71B0B7B6BE0A (YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * __this, YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * ___srcNode0, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = __this->get__ygNode_0();
		YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * L_1 = ___srcNode0;
		NullCheck(L_1);
		intptr_t L_2 = L_1->get__ygNode_0();
		Native_YGNodeCopyStyle_m17EECD77E6C7EF07F498D9A63BC42B1279ADCAF3((intptr_t)L_0, (intptr_t)L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Yoga.YogaNode::set_FlexDirection(UnityEngine.Yoga.YogaFlexDirection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaNode_set_FlexDirection_mADA4BB75D477DC19DDDD786598797EEA5E1E232D (YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = __this->get__ygNode_0();
		int32_t L_1 = ___value0;
		Native_YGNodeStyleSetFlexDirection_mD337C68CCC952EC9F063C4BB93024CFEBC16F6C9((intptr_t)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Yoga.YogaNode::set_JustifyContent(UnityEngine.Yoga.YogaJustify)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaNode_set_JustifyContent_m5242DBF9983E1D4C652704F0C151FEE4DD6A2CE3 (YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = __this->get__ygNode_0();
		int32_t L_1 = ___value0;
		Native_YGNodeStyleSetJustifyContent_m5743C6895CC78F92738C46D77BC2B2AAC9BFDA17((intptr_t)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Yoga.YogaNode::set_Display(UnityEngine.Yoga.YogaDisplay)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaNode_set_Display_m0817E869D9844A6C9B6663045DDBF41B71AA8067 (YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = __this->get__ygNode_0();
		int32_t L_1 = ___value0;
		Native_YGNodeStyleSetDisplay_m61D6B7A3DCBAE2ECC44FF026ACEF2060AC6CA392((intptr_t)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Yoga.YogaNode::set_AlignItems(UnityEngine.Yoga.YogaAlign)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaNode_set_AlignItems_m6CFE61C57AE9E57FC8B3E7CC86B36E008AB321AA (YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = __this->get__ygNode_0();
		int32_t L_1 = ___value0;
		Native_YGNodeStyleSetAlignItems_mF4403BB7979A1A49D3AF2F9F33137F8356BD9EF1((intptr_t)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Yoga.YogaNode::set_AlignSelf(UnityEngine.Yoga.YogaAlign)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaNode_set_AlignSelf_mF02A678E0744D13C0CC4BC22BC87F87927428F4F (YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = __this->get__ygNode_0();
		int32_t L_1 = ___value0;
		Native_YGNodeStyleSetAlignSelf_m85127A5FA62C25B124B6E20BAD2D96CD1A390B5C((intptr_t)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Yoga.YogaNode::set_AlignContent(UnityEngine.Yoga.YogaAlign)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaNode_set_AlignContent_m9424D5D51ED52403749CFD05B0BFE13162CB1BEA (YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = __this->get__ygNode_0();
		int32_t L_1 = ___value0;
		Native_YGNodeStyleSetAlignContent_mADC90EB1C51EB326F0AC50723ED44DA9FEF6BEEC((intptr_t)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Yoga.YogaNode::set_PositionType(UnityEngine.Yoga.YogaPositionType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaNode_set_PositionType_m1769F2B8291DAE297958DAB0B7511E2795492D18 (YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = __this->get__ygNode_0();
		int32_t L_1 = ___value0;
		Native_YGNodeStyleSetPositionType_m931E5D1662FDDFD56BC0B56220E0077EC857F7C9((intptr_t)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Yoga.YogaNode::set_Wrap(UnityEngine.Yoga.YogaWrap)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaNode_set_Wrap_mF49124818049A5B9DCEE7EBF02763981B3E274A6 (YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = __this->get__ygNode_0();
		int32_t L_1 = ___value0;
		Native_YGNodeStyleSetFlexWrap_mF4697BF10F0A88920F6B0564290CB73824B30D8D((intptr_t)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Yoga.YogaNode::set_Flex(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaNode_set_Flex_m5C61BD7CC06A5CE35D5ABEF64E508198E7E2EAF7 (YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = __this->get__ygNode_0();
		float L_1 = ___value0;
		Native_YGNodeStyleSetFlex_mD48AD7688B7EFF2B211E926060D457686B2F2EA8((intptr_t)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Yoga.YogaNode::set_FlexGrow(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaNode_set_FlexGrow_mE8098DC8D1B956A2176FE5CE10F920832367FE9E (YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = __this->get__ygNode_0();
		float L_1 = ___value0;
		Native_YGNodeStyleSetFlexGrow_m6C263F5E23F669552073B3BFB8D6B286397394D7((intptr_t)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Yoga.YogaNode::set_FlexShrink(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaNode_set_FlexShrink_mEA40361817D0644D51151ABD1B822FD253D4618E (YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = __this->get__ygNode_0();
		float L_1 = ___value0;
		Native_YGNodeStyleSetFlexShrink_m96E5A55C91FF1CBA54E27FCB0B978B1521C8B65B((intptr_t)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Yoga.YogaNode::set_FlexBasis(UnityEngine.Yoga.YogaValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaNode_set_FlexBasis_mAA4DAD54A9FF219C994C4E9336483D1B4A291ACA (YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * __this, YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B  ___value0, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	{
		int32_t L_0;
		L_0 = YogaValue_get_Unit_m6D0E7755E95D4223A8F82DFE7CD7E72E0B7604C0((YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B *)(&___value0), /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)2))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		intptr_t L_2 = __this->get__ygNode_0();
		float L_3;
		L_3 = YogaValue_get_Value_mEFC5711E0F64ABCA0DC6E49C790217B97967ED4E((YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B *)(&___value0), /*hidden argument*/NULL);
		Native_YGNodeStyleSetFlexBasisPercent_m35BBB74B616C121FCCB61E4D123BCF3F3B0FFB7E((intptr_t)L_2, L_3, /*hidden argument*/NULL);
		goto IL_0059;
	}

IL_0026:
	{
		int32_t L_4;
		L_4 = YogaValue_get_Unit_m6D0E7755E95D4223A8F82DFE7CD7E72E0B7604C0((YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B *)(&___value0), /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)3))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0044;
		}
	}
	{
		intptr_t L_6 = __this->get__ygNode_0();
		Native_YGNodeStyleSetFlexBasisAuto_m736FE09858DC0FE8675039649C90C6C0342A9106((intptr_t)L_6, /*hidden argument*/NULL);
		goto IL_0059;
	}

IL_0044:
	{
		intptr_t L_7 = __this->get__ygNode_0();
		float L_8;
		L_8 = YogaValue_get_Value_mEFC5711E0F64ABCA0DC6E49C790217B97967ED4E((YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B *)(&___value0), /*hidden argument*/NULL);
		Native_YGNodeStyleSetFlexBasis_m1C88BD795249E06BBA6F5104417116836ECD83D6((intptr_t)L_7, L_8, /*hidden argument*/NULL);
	}

IL_0059:
	{
		return;
	}
}
// System.Void UnityEngine.Yoga.YogaNode::set_Width(UnityEngine.Yoga.YogaValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaNode_set_Width_mE9BD6078D4984ED590A7205D90E8C20D47A94847 (YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * __this, YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B  ___value0, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	{
		int32_t L_0;
		L_0 = YogaValue_get_Unit_m6D0E7755E95D4223A8F82DFE7CD7E72E0B7604C0((YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B *)(&___value0), /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)2))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		intptr_t L_2 = __this->get__ygNode_0();
		float L_3;
		L_3 = YogaValue_get_Value_mEFC5711E0F64ABCA0DC6E49C790217B97967ED4E((YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B *)(&___value0), /*hidden argument*/NULL);
		Native_YGNodeStyleSetWidthPercent_mA7697E8CBA3571C29B9AD5EFE6938895E84A8FD3((intptr_t)L_2, L_3, /*hidden argument*/NULL);
		goto IL_0059;
	}

IL_0026:
	{
		int32_t L_4;
		L_4 = YogaValue_get_Unit_m6D0E7755E95D4223A8F82DFE7CD7E72E0B7604C0((YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B *)(&___value0), /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)3))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0044;
		}
	}
	{
		intptr_t L_6 = __this->get__ygNode_0();
		Native_YGNodeStyleSetWidthAuto_mFF75E6B4D8B3307525CF8C9D5F0BE8E0BFD6385F((intptr_t)L_6, /*hidden argument*/NULL);
		goto IL_0059;
	}

IL_0044:
	{
		intptr_t L_7 = __this->get__ygNode_0();
		float L_8;
		L_8 = YogaValue_get_Value_mEFC5711E0F64ABCA0DC6E49C790217B97967ED4E((YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B *)(&___value0), /*hidden argument*/NULL);
		Native_YGNodeStyleSetWidth_m4AF3873909E2D448C810B29D7F590893F4CBB1E9((intptr_t)L_7, L_8, /*hidden argument*/NULL);
	}

IL_0059:
	{
		return;
	}
}
// System.Void UnityEngine.Yoga.YogaNode::set_Height(UnityEngine.Yoga.YogaValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaNode_set_Height_m197FD1C7ECAB10C889C3E9AF6FC013BEDB6EB15B (YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * __this, YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B  ___value0, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	{
		int32_t L_0;
		L_0 = YogaValue_get_Unit_m6D0E7755E95D4223A8F82DFE7CD7E72E0B7604C0((YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B *)(&___value0), /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)2))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		intptr_t L_2 = __this->get__ygNode_0();
		float L_3;
		L_3 = YogaValue_get_Value_mEFC5711E0F64ABCA0DC6E49C790217B97967ED4E((YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B *)(&___value0), /*hidden argument*/NULL);
		Native_YGNodeStyleSetHeightPercent_mDC1CE1B843CAAD97F55885B68756DF07BBCB99CF((intptr_t)L_2, L_3, /*hidden argument*/NULL);
		goto IL_0059;
	}

IL_0026:
	{
		int32_t L_4;
		L_4 = YogaValue_get_Unit_m6D0E7755E95D4223A8F82DFE7CD7E72E0B7604C0((YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B *)(&___value0), /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)3))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0044;
		}
	}
	{
		intptr_t L_6 = __this->get__ygNode_0();
		Native_YGNodeStyleSetHeightAuto_mFC9F4A23BB7D826849EFA76216B8A7EDCF9A51AB((intptr_t)L_6, /*hidden argument*/NULL);
		goto IL_0059;
	}

IL_0044:
	{
		intptr_t L_7 = __this->get__ygNode_0();
		float L_8;
		L_8 = YogaValue_get_Value_mEFC5711E0F64ABCA0DC6E49C790217B97967ED4E((YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B *)(&___value0), /*hidden argument*/NULL);
		Native_YGNodeStyleSetHeight_m2673494A6716236B6682EA37B2B88A55753FB8C1((intptr_t)L_7, L_8, /*hidden argument*/NULL);
	}

IL_0059:
	{
		return;
	}
}
// System.Void UnityEngine.Yoga.YogaNode::set_MaxWidth(UnityEngine.Yoga.YogaValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaNode_set_MaxWidth_m539D355D4332C0032B0BB2CCC0468EC8B055BD1A (YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * __this, YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B  ___value0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		int32_t L_0;
		L_0 = YogaValue_get_Unit_m6D0E7755E95D4223A8F82DFE7CD7E72E0B7604C0((YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B *)(&___value0), /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)2))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		intptr_t L_2 = __this->get__ygNode_0();
		float L_3;
		L_3 = YogaValue_get_Value_mEFC5711E0F64ABCA0DC6E49C790217B97967ED4E((YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B *)(&___value0), /*hidden argument*/NULL);
		Native_YGNodeStyleSetMaxWidthPercent_mE0E336463F2EF0BE14FD1589F9EDCFE285FAB49E((intptr_t)L_2, L_3, /*hidden argument*/NULL);
		goto IL_003b;
	}

IL_0026:
	{
		intptr_t L_4 = __this->get__ygNode_0();
		float L_5;
		L_5 = YogaValue_get_Value_mEFC5711E0F64ABCA0DC6E49C790217B97967ED4E((YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B *)(&___value0), /*hidden argument*/NULL);
		Native_YGNodeStyleSetMaxWidth_m315A133A42ED064D365780F80D7A888D20CD467D((intptr_t)L_4, L_5, /*hidden argument*/NULL);
	}

IL_003b:
	{
		return;
	}
}
// System.Void UnityEngine.Yoga.YogaNode::set_MaxHeight(UnityEngine.Yoga.YogaValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaNode_set_MaxHeight_m579C695AD7617777A48528D0F63EF490C91100F7 (YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * __this, YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B  ___value0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		int32_t L_0;
		L_0 = YogaValue_get_Unit_m6D0E7755E95D4223A8F82DFE7CD7E72E0B7604C0((YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B *)(&___value0), /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)2))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		intptr_t L_2 = __this->get__ygNode_0();
		float L_3;
		L_3 = YogaValue_get_Value_mEFC5711E0F64ABCA0DC6E49C790217B97967ED4E((YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B *)(&___value0), /*hidden argument*/NULL);
		Native_YGNodeStyleSetMaxHeightPercent_mA3A4488019B086745E30A0497699911A20D02200((intptr_t)L_2, L_3, /*hidden argument*/NULL);
		goto IL_003b;
	}

IL_0026:
	{
		intptr_t L_4 = __this->get__ygNode_0();
		float L_5;
		L_5 = YogaValue_get_Value_mEFC5711E0F64ABCA0DC6E49C790217B97967ED4E((YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B *)(&___value0), /*hidden argument*/NULL);
		Native_YGNodeStyleSetMaxHeight_m1AA96D9430C774C071255FAE6B01754B03A00181((intptr_t)L_4, L_5, /*hidden argument*/NULL);
	}

IL_003b:
	{
		return;
	}
}
// System.Void UnityEngine.Yoga.YogaNode::set_MinWidth(UnityEngine.Yoga.YogaValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaNode_set_MinWidth_m8BF72A99F22B75B5CDB8A7AA07D2F197D765BC25 (YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * __this, YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B  ___value0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		int32_t L_0;
		L_0 = YogaValue_get_Unit_m6D0E7755E95D4223A8F82DFE7CD7E72E0B7604C0((YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B *)(&___value0), /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)2))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		intptr_t L_2 = __this->get__ygNode_0();
		float L_3;
		L_3 = YogaValue_get_Value_mEFC5711E0F64ABCA0DC6E49C790217B97967ED4E((YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B *)(&___value0), /*hidden argument*/NULL);
		Native_YGNodeStyleSetMinWidthPercent_m3D8103930E9C61DF232833E2FD34A863F8F5B6FD((intptr_t)L_2, L_3, /*hidden argument*/NULL);
		goto IL_003b;
	}

IL_0026:
	{
		intptr_t L_4 = __this->get__ygNode_0();
		float L_5;
		L_5 = YogaValue_get_Value_mEFC5711E0F64ABCA0DC6E49C790217B97967ED4E((YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B *)(&___value0), /*hidden argument*/NULL);
		Native_YGNodeStyleSetMinWidth_mF65AD8956B8F48616DEC66E05CB7FA2163097F85((intptr_t)L_4, L_5, /*hidden argument*/NULL);
	}

IL_003b:
	{
		return;
	}
}
// System.Void UnityEngine.Yoga.YogaNode::set_MinHeight(UnityEngine.Yoga.YogaValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaNode_set_MinHeight_m5229DCC9469DBDA336935D7D944D6414611FD2A2 (YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * __this, YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B  ___value0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		int32_t L_0;
		L_0 = YogaValue_get_Unit_m6D0E7755E95D4223A8F82DFE7CD7E72E0B7604C0((YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B *)(&___value0), /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)2))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		intptr_t L_2 = __this->get__ygNode_0();
		float L_3;
		L_3 = YogaValue_get_Value_mEFC5711E0F64ABCA0DC6E49C790217B97967ED4E((YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B *)(&___value0), /*hidden argument*/NULL);
		Native_YGNodeStyleSetMinHeightPercent_mAF845F4EA74D6F4B9A43BEB7DD3A00626B9AB8EA((intptr_t)L_2, L_3, /*hidden argument*/NULL);
		goto IL_003b;
	}

IL_0026:
	{
		intptr_t L_4 = __this->get__ygNode_0();
		float L_5;
		L_5 = YogaValue_get_Value_mEFC5711E0F64ABCA0DC6E49C790217B97967ED4E((YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B *)(&___value0), /*hidden argument*/NULL);
		Native_YGNodeStyleSetMinHeight_m8789333D92D9D95B747E5BFA18EF13AC97DF9EE8((intptr_t)L_4, L_5, /*hidden argument*/NULL);
	}

IL_003b:
	{
		return;
	}
}
// System.Single UnityEngine.Yoga.YogaNode::get_LayoutX()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float YogaNode_get_LayoutX_m1A4606447374A029635A1DDEE27024E726CA5D3E (YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		intptr_t L_0 = __this->get__ygNode_0();
		float L_1;
		L_1 = Native_YGNodeLayoutGetLeft_m9C2544E2F70884B9D872E4F732710E1900588140((intptr_t)L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		float L_2 = V_0;
		return L_2;
	}
}
// System.Single UnityEngine.Yoga.YogaNode::get_LayoutY()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float YogaNode_get_LayoutY_mFFED1F0E16A3F05BF0A9F3B3167C1FA990B9919B (YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		intptr_t L_0 = __this->get__ygNode_0();
		float L_1;
		L_1 = Native_YGNodeLayoutGetTop_m0FFD848971C8B63B4261274C5CD4F910680CB700((intptr_t)L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		float L_2 = V_0;
		return L_2;
	}
}
// System.Single UnityEngine.Yoga.YogaNode::get_LayoutWidth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float YogaNode_get_LayoutWidth_m344A4C1DFC2F74B4224A79E3F24F4907E8D223FE (YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		intptr_t L_0 = __this->get__ygNode_0();
		float L_1;
		L_1 = Native_YGNodeLayoutGetWidth_m4C28192C45D735E29919D50925ECEDF5E9ED28C9((intptr_t)L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		float L_2 = V_0;
		return L_2;
	}
}
// System.Single UnityEngine.Yoga.YogaNode::get_LayoutHeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float YogaNode_get_LayoutHeight_m8FA46A982DC3DC46539CC4D861A3D16DAC74B741 (YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		intptr_t L_0 = __this->get__ygNode_0();
		float L_1;
		L_1 = Native_YGNodeLayoutGetHeight_mB69A179FF0D0A1FD3C0246E5C3D9050B9A0DC9E9((intptr_t)L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		float L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.Yoga.YogaNode::set_Overflow(UnityEngine.Yoga.YogaOverflow)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaNode_set_Overflow_mBB4BDB568E58F688A42FA8EDEFDAD9225B22725D (YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = __this->get__ygNode_0();
		int32_t L_1 = ___value0;
		Native_YGNodeStyleSetOverflow_mAC08C6D43FF77D391448DA8B1D19048B7B170809((intptr_t)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 UnityEngine.Yoga.YogaNode::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t YogaNode_get_Count_m5C51BCECC428A2273F516147BF93D261F290D7CC (YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m522E99226B0A21F41CA6CE5C283393A0B00565E1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		List_1_t5FEBCBE5E15CEDF8B8CBA2B1C4F123E01DDE02C8 * L_0 = __this->get__children_3();
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_0017;
	}

IL_000c:
	{
		List_1_t5FEBCBE5E15CEDF8B8CBA2B1C4F123E01DDE02C8 * L_1 = __this->get__children_3();
		NullCheck(L_1);
		int32_t L_2;
		L_2 = List_1_get_Count_m522E99226B0A21F41CA6CE5C283393A0B00565E1_inline(L_1, /*hidden argument*/List_1_get_Count_m522E99226B0A21F41CA6CE5C283393A0B00565E1_RuntimeMethod_var);
		G_B3_0 = L_2;
	}

IL_0017:
	{
		V_0 = G_B3_0;
		goto IL_001a;
	}

IL_001a:
	{
		int32_t L_3 = V_0;
		return L_3;
	}
}
// System.Void UnityEngine.Yoga.YogaNode::MarkLayoutSeen()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaNode_MarkLayoutSeen_m9FF97E96D57653763D851094292740010E70CFAC (YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * __this, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = __this->get__ygNode_0();
		Native_YGNodeSetHasNewLayout_mBB767467C6892B1008AA30E5C47B4797C90DBE5C((intptr_t)L_0, (bool)0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Yoga.YogaNode::Insert(System.Int32,UnityEngine.Yoga.YogaNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaNode_Insert_m3DEECB3A58FD523279B8A2668E35BB2BE43ADC66 (YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * __this, int32_t ___index0, YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * ___node1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Insert_mCEFB978F7C64D2B3B412873D1ADA2B21FB5DD060_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m165D313F7B61944C91EE854A3495CE48FC035A82_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t5FEBCBE5E15CEDF8B8CBA2B1C4F123E01DDE02C8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		List_1_t5FEBCBE5E15CEDF8B8CBA2B1C4F123E01DDE02C8 * L_0 = __this->get__children_3();
		V_0 = (bool)((((RuntimeObject*)(List_1_t5FEBCBE5E15CEDF8B8CBA2B1C4F123E01DDE02C8 *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		List_1_t5FEBCBE5E15CEDF8B8CBA2B1C4F123E01DDE02C8 * L_2 = (List_1_t5FEBCBE5E15CEDF8B8CBA2B1C4F123E01DDE02C8 *)il2cpp_codegen_object_new(List_1_t5FEBCBE5E15CEDF8B8CBA2B1C4F123E01DDE02C8_il2cpp_TypeInfo_var);
		List_1__ctor_m165D313F7B61944C91EE854A3495CE48FC035A82(L_2, 4, /*hidden argument*/List_1__ctor_m165D313F7B61944C91EE854A3495CE48FC035A82_RuntimeMethod_var);
		__this->set__children_3(L_2);
	}

IL_001c:
	{
		List_1_t5FEBCBE5E15CEDF8B8CBA2B1C4F123E01DDE02C8 * L_3 = __this->get__children_3();
		int32_t L_4 = ___index0;
		YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * L_5 = ___node1;
		NullCheck(L_3);
		List_1_Insert_mCEFB978F7C64D2B3B412873D1ADA2B21FB5DD060(L_3, L_4, L_5, /*hidden argument*/List_1_Insert_mCEFB978F7C64D2B3B412873D1ADA2B21FB5DD060_RuntimeMethod_var);
		YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * L_6 = ___node1;
		WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * L_7 = (WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 *)il2cpp_codegen_object_new(WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76_il2cpp_TypeInfo_var);
		WeakReference__ctor_m11BFDB039514BDCE23425FD90E8C414D051B2F13(L_7, __this, /*hidden argument*/NULL);
		NullCheck(L_6);
		L_6->set__parent_2(L_7);
		intptr_t L_8 = __this->get__ygNode_0();
		YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * L_9 = ___node1;
		NullCheck(L_9);
		intptr_t L_10 = L_9->get__ygNode_0();
		int32_t L_11 = ___index0;
		Native_YGNodeInsertChild_m997013BB67EAB907B6827A00951079EB3FF25F73((intptr_t)L_8, (intptr_t)L_10, L_11, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Yoga.YogaNode::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaNode_RemoveAt_m666FC1531CE73CE3C5F356CC90DE33BDD8CA221C (YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_m4BE1835EE87937A24899808F207D4BE7C945085B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m23719BFAA5CDAE8A711BF7795DD65E7ADECCC617_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * V_0 = NULL;
	{
		List_1_t5FEBCBE5E15CEDF8B8CBA2B1C4F123E01DDE02C8 * L_0 = __this->get__children_3();
		int32_t L_1 = ___index0;
		NullCheck(L_0);
		YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * L_2;
		L_2 = List_1_get_Item_m23719BFAA5CDAE8A711BF7795DD65E7ADECCC617_inline(L_0, L_1, /*hidden argument*/List_1_get_Item_m23719BFAA5CDAE8A711BF7795DD65E7ADECCC617_RuntimeMethod_var);
		V_0 = L_2;
		YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * L_3 = V_0;
		NullCheck(L_3);
		L_3->set__parent_2((WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 *)NULL);
		List_1_t5FEBCBE5E15CEDF8B8CBA2B1C4F123E01DDE02C8 * L_4 = __this->get__children_3();
		int32_t L_5 = ___index0;
		NullCheck(L_4);
		List_1_RemoveAt_m4BE1835EE87937A24899808F207D4BE7C945085B(L_4, L_5, /*hidden argument*/List_1_RemoveAt_m4BE1835EE87937A24899808F207D4BE7C945085B_RuntimeMethod_var);
		intptr_t L_6 = __this->get__ygNode_0();
		YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * L_7 = V_0;
		NullCheck(L_7);
		intptr_t L_8 = L_7->get__ygNode_0();
		Native_YGNodeRemoveChild_mAD07F43A01FD48A6149B9A69F730EE91DCB501C0((intptr_t)L_6, (intptr_t)L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Yoga.YogaNode::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaNode_Clear_m7F0086CE823E523D35430325DC1E01AE31D101D4 (YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m522E99226B0A21F41CA6CE5C283393A0B00565E1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		List_1_t5FEBCBE5E15CEDF8B8CBA2B1C4F123E01DDE02C8 * L_0 = __this->get__children_3();
		V_0 = (bool)((!(((RuntimeObject*)(List_1_t5FEBCBE5E15CEDF8B8CBA2B1C4F123E01DDE02C8 *)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_003a;
		}
	}
	{
		goto IL_0027;
	}

IL_0011:
	{
		List_1_t5FEBCBE5E15CEDF8B8CBA2B1C4F123E01DDE02C8 * L_2 = __this->get__children_3();
		NullCheck(L_2);
		int32_t L_3;
		L_3 = List_1_get_Count_m522E99226B0A21F41CA6CE5C283393A0B00565E1_inline(L_2, /*hidden argument*/List_1_get_Count_m522E99226B0A21F41CA6CE5C283393A0B00565E1_RuntimeMethod_var);
		YogaNode_RemoveAt_m666FC1531CE73CE3C5F356CC90DE33BDD8CA221C(__this, ((int32_t)il2cpp_codegen_subtract((int32_t)L_3, (int32_t)1)), /*hidden argument*/NULL);
	}

IL_0027:
	{
		List_1_t5FEBCBE5E15CEDF8B8CBA2B1C4F123E01DDE02C8 * L_4 = __this->get__children_3();
		NullCheck(L_4);
		int32_t L_5;
		L_5 = List_1_get_Count_m522E99226B0A21F41CA6CE5C283393A0B00565E1_inline(L_4, /*hidden argument*/List_1_get_Count_m522E99226B0A21F41CA6CE5C283393A0B00565E1_RuntimeMethod_var);
		V_1 = (bool)((((int32_t)L_5) > ((int32_t)0))? 1 : 0);
		bool L_6 = V_1;
		if (L_6)
		{
			goto IL_0011;
		}
	}
	{
	}

IL_003a:
	{
		return;
	}
}
// System.Void UnityEngine.Yoga.YogaNode::SetMeasureFunction(UnityEngine.Yoga.MeasureFunction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaNode_SetMeasureFunction_m9666C3424DAA0A5CB64E4C2CE799D052F9123E4A (YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * __this, MeasureFunction_tBD19E8A44621B4D553785068ECCF0439CD9666C6 * ___measureFunction0, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	{
		MeasureFunction_tBD19E8A44621B4D553785068ECCF0439CD9666C6 * L_0 = ___measureFunction0;
		__this->set__measureFunction_4(L_0);
		MeasureFunction_tBD19E8A44621B4D553785068ECCF0439CD9666C6 * L_1 = ___measureFunction0;
		V_0 = (bool)((((RuntimeObject*)(MeasureFunction_tBD19E8A44621B4D553785068ECCF0439CD9666C6 *)L_1) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_003c;
		}
	}
	{
		bool L_3;
		L_3 = YogaNode_get_IsBaselineDefined_m125B599E9999B75477282256947971818C64A3E0(__this, /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_002d;
		}
	}
	{
		intptr_t L_5 = __this->get__ygNode_0();
		Native_YGSetManagedObject_m673178983DC9AD8AACC0D9C634F1FC1839B44DA0((intptr_t)L_5, (YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 *)NULL, /*hidden argument*/NULL);
	}

IL_002d:
	{
		intptr_t L_6 = __this->get__ygNode_0();
		Native_YGNodeRemoveMeasureFunc_mA517FB67B62876E9CDA30BC73FC96A076458A2E9((intptr_t)L_6, /*hidden argument*/NULL);
		goto IL_0057;
	}

IL_003c:
	{
		intptr_t L_7 = __this->get__ygNode_0();
		Native_YGSetManagedObject_m673178983DC9AD8AACC0D9C634F1FC1839B44DA0((intptr_t)L_7, __this, /*hidden argument*/NULL);
		intptr_t L_8 = __this->get__ygNode_0();
		Native_YGNodeSetMeasureFunc_mACE730FF0A2222CAEF76F44674D1B40918AF7B8B((intptr_t)L_8, /*hidden argument*/NULL);
	}

IL_0057:
	{
		return;
	}
}
// System.Void UnityEngine.Yoga.YogaNode::CalculateLayout(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaNode_CalculateLayout_mA4F00619563264A11BE5CF49AB42602C6F23EEDD (YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * __this, float ___width0, float ___height1, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = __this->get__ygNode_0();
		float L_1 = ___width0;
		float L_2 = ___height1;
		intptr_t L_3 = __this->get__ygNode_0();
		int32_t L_4;
		L_4 = Native_YGNodeStyleGetDirection_m06A8E8D697BADA981A42C00971E088246AE5E02D((intptr_t)L_3, /*hidden argument*/NULL);
		Native_YGNodeCalculateLayout_m7115180FA93A5A9B06976343886A3B1AFD370F36((intptr_t)L_0, L_1, L_2, L_4, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Yoga.YogaSize UnityEngine.Yoga.YogaNode::MeasureInternal(UnityEngine.Yoga.YogaNode,System.Single,UnityEngine.Yoga.YogaMeasureMode,System.Single,UnityEngine.Yoga.YogaMeasureMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR YogaSize_tC805BF63DE9A9E4B9984B964AB0A1CFA04ADC1FD  YogaNode_MeasureInternal_mBB3AB5E64B70DD0BAFE665CEB264316F960E0BE8 (YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * ___node0, float ___width1, int32_t ___widthMode2, float ___height3, int32_t ___heightMode4, const RuntimeMethod* method)
{
	bool V_0 = false;
	YogaSize_tC805BF63DE9A9E4B9984B964AB0A1CFA04ADC1FD  V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t G_B3_0 = 0;
	{
		YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * L_0 = ___node0;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * L_1 = ___node0;
		NullCheck(L_1);
		MeasureFunction_tBD19E8A44621B4D553785068ECCF0439CD9666C6 * L_2 = L_1->get__measureFunction_4();
		G_B3_0 = ((((RuntimeObject*)(MeasureFunction_tBD19E8A44621B4D553785068ECCF0439CD9666C6 *)L_2) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		goto IL_0010;
	}

IL_000f:
	{
		G_B3_0 = 1;
	}

IL_0010:
	{
		V_0 = (bool)G_B3_0;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0020;
		}
	}
	{
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_4 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral807D31E7D618CFE25644A0B838EBD88C978E78F1)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&YogaNode_MeasureInternal_mBB3AB5E64B70DD0BAFE665CEB264316F960E0BE8_RuntimeMethod_var)));
	}

IL_0020:
	{
		YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * L_5 = ___node0;
		NullCheck(L_5);
		MeasureFunction_tBD19E8A44621B4D553785068ECCF0439CD9666C6 * L_6 = L_5->get__measureFunction_4();
		YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * L_7 = ___node0;
		float L_8 = ___width1;
		int32_t L_9 = ___widthMode2;
		float L_10 = ___height3;
		int32_t L_11 = ___heightMode4;
		NullCheck(L_6);
		YogaSize_tC805BF63DE9A9E4B9984B964AB0A1CFA04ADC1FD  L_12;
		L_12 = MeasureFunction_Invoke_mEAAC465A891BDA61A7E1804BF40929FE9C34CB58(L_6, L_7, L_8, L_9, L_10, L_11, /*hidden argument*/NULL);
		V_1 = L_12;
		goto IL_0034;
	}

IL_0034:
	{
		YogaSize_tC805BF63DE9A9E4B9984B964AB0A1CFA04ADC1FD  L_13 = V_1;
		return L_13;
	}
}
// System.Single UnityEngine.Yoga.YogaNode::BaselineInternal(UnityEngine.Yoga.YogaNode,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float YogaNode_BaselineInternal_m0C45C415286A4FEA8E9C38A57B45B431FC6104BF (YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * ___node0, float ___width1, float ___height2, const RuntimeMethod* method)
{
	bool V_0 = false;
	float V_1 = 0.0f;
	int32_t G_B3_0 = 0;
	{
		YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * L_0 = ___node0;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * L_1 = ___node0;
		NullCheck(L_1);
		BaselineFunction_t7C180BD26F5C8850EEDDBEC2471D9A466EF0D24A * L_2 = L_1->get__baselineFunction_5();
		G_B3_0 = ((((RuntimeObject*)(BaselineFunction_t7C180BD26F5C8850EEDDBEC2471D9A466EF0D24A *)L_2) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		goto IL_0010;
	}

IL_000f:
	{
		G_B3_0 = 1;
	}

IL_0010:
	{
		V_0 = (bool)G_B3_0;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0020;
		}
	}
	{
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_4 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2EB7EACAE6B3BFBFD70862A8840592343396CF46)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&YogaNode_BaselineInternal_m0C45C415286A4FEA8E9C38A57B45B431FC6104BF_RuntimeMethod_var)));
	}

IL_0020:
	{
		YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * L_5 = ___node0;
		NullCheck(L_5);
		BaselineFunction_t7C180BD26F5C8850EEDDBEC2471D9A466EF0D24A * L_6 = L_5->get__baselineFunction_5();
		YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * L_7 = ___node0;
		float L_8 = ___width1;
		float L_9 = ___height2;
		NullCheck(L_6);
		float L_10;
		L_10 = BaselineFunction_Invoke_mAEC462B19D69EAC84C6F4D13058EF3DA25BBE647(L_6, L_7, L_8, L_9, /*hidden argument*/NULL);
		V_1 = L_10;
		goto IL_0031;
	}

IL_0031:
	{
		float L_11 = V_1;
		return L_11;
	}
}
// System.Collections.Generic.IEnumerator`1<UnityEngine.Yoga.YogaNode> UnityEngine.Yoga.YogaNode::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* YogaNode_GetEnumerator_m5F93328C6F34A2D6B2719B86FD3DC97E5C0544F3 (YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Empty_TisYogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6_mB7295609BAE35EB4ACD394AC2745CB40A6633E09_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t2D7047B39A20CA3C020E30F2F8E888F56D9FBD61_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	{
		List_1_t5FEBCBE5E15CEDF8B8CBA2B1C4F123E01DDE02C8 * L_0 = __this->get__children_3();
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_1;
		L_1 = Enumerable_Empty_TisYogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6_mB7295609BAE35EB4ACD394AC2745CB40A6633E09_inline(/*hidden argument*/Enumerable_Empty_TisYogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6_mB7295609BAE35EB4ACD394AC2745CB40A6633E09_RuntimeMethod_var);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<UnityEngine.Yoga.YogaNode>::GetEnumerator() */, IEnumerable_1_t2D7047B39A20CA3C020E30F2F8E888F56D9FBD61_il2cpp_TypeInfo_var, L_1);
		G_B3_0 = L_2;
		goto IL_0020;
	}

IL_0015:
	{
		List_1_t5FEBCBE5E15CEDF8B8CBA2B1C4F123E01DDE02C8 * L_3 = __this->get__children_3();
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<UnityEngine.Yoga.YogaNode>::GetEnumerator() */, IEnumerable_1_t2D7047B39A20CA3C020E30F2F8E888F56D9FBD61_il2cpp_TypeInfo_var, L_3);
		G_B3_0 = L_4;
	}

IL_0020:
	{
		V_0 = G_B3_0;
		goto IL_0023;
	}

IL_0023:
	{
		RuntimeObject* L_5 = V_0;
		return L_5;
	}
}
// System.Collections.IEnumerator UnityEngine.Yoga.YogaNode::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* YogaNode_System_Collections_IEnumerable_GetEnumerator_m7537F71E66B2BB24889E2F37350166112D609A5E (YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Empty_TisYogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6_mB7295609BAE35EB4ACD394AC2745CB40A6633E09_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t2D7047B39A20CA3C020E30F2F8E888F56D9FBD61_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	{
		List_1_t5FEBCBE5E15CEDF8B8CBA2B1C4F123E01DDE02C8 * L_0 = __this->get__children_3();
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_1;
		L_1 = Enumerable_Empty_TisYogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6_mB7295609BAE35EB4ACD394AC2745CB40A6633E09_inline(/*hidden argument*/Enumerable_Empty_TisYogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6_mB7295609BAE35EB4ACD394AC2745CB40A6633E09_RuntimeMethod_var);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<UnityEngine.Yoga.YogaNode>::GetEnumerator() */, IEnumerable_1_t2D7047B39A20CA3C020E30F2F8E888F56D9FBD61_il2cpp_TypeInfo_var, L_1);
		G_B3_0 = L_2;
		goto IL_0020;
	}

IL_0015:
	{
		List_1_t5FEBCBE5E15CEDF8B8CBA2B1C4F123E01DDE02C8 * L_3 = __this->get__children_3();
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<UnityEngine.Yoga.YogaNode>::GetEnumerator() */, IEnumerable_1_t2D7047B39A20CA3C020E30F2F8E888F56D9FBD61_il2cpp_TypeInfo_var, L_3);
		G_B3_0 = L_4;
	}

IL_0020:
	{
		V_0 = G_B3_0;
		goto IL_0023;
	}

IL_0023:
	{
		RuntimeObject* L_5 = V_0;
		return L_5;
	}
}
// System.Void UnityEngine.Yoga.YogaNode::set_Left(UnityEngine.Yoga.YogaValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaNode_set_Left_mBB71D419ED57AA451FB6824C40051DD8D1367AAD (YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * __this, YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B  ___value0, const RuntimeMethod* method)
{
	{
		YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B  L_0 = ___value0;
		YogaNode_SetStylePosition_m9FB5853087249A27BC3E9BC690B88156B0E88BFB(__this, 0, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Yoga.YogaNode::set_Top(UnityEngine.Yoga.YogaValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaNode_set_Top_m8466041B9C790FBD7EE6A7D4E943580A64251458 (YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * __this, YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B  ___value0, const RuntimeMethod* method)
{
	{
		YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B  L_0 = ___value0;
		YogaNode_SetStylePosition_m9FB5853087249A27BC3E9BC690B88156B0E88BFB(__this, 1, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Yoga.YogaNode::set_Right(UnityEngine.Yoga.YogaValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaNode_set_Right_m1F43EA618B0CE67F404C18B145E430A2CEC97FEF (YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * __this, YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B  ___value0, const RuntimeMethod* method)
{
	{
		YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B  L_0 = ___value0;
		YogaNode_SetStylePosition_m9FB5853087249A27BC3E9BC690B88156B0E88BFB(__this, 2, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Yoga.YogaNode::set_Bottom(UnityEngine.Yoga.YogaValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaNode_set_Bottom_mBDAE0C54FB4A71E8C38CA8DE29F7F13C7C569A3B (YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * __this, YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B  ___value0, const RuntimeMethod* method)
{
	{
		YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B  L_0 = ___value0;
		YogaNode_SetStylePosition_m9FB5853087249A27BC3E9BC690B88156B0E88BFB(__this, 3, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Yoga.YogaNode::SetStylePosition(UnityEngine.Yoga.YogaEdge,UnityEngine.Yoga.YogaValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaNode_SetStylePosition_m9FB5853087249A27BC3E9BC690B88156B0E88BFB (YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * __this, int32_t ___edge0, YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B  ___value1, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		int32_t L_0;
		L_0 = YogaValue_get_Unit_m6D0E7755E95D4223A8F82DFE7CD7E72E0B7604C0((YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B *)(&___value1), /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)2))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		intptr_t L_2 = __this->get__ygNode_0();
		int32_t L_3 = ___edge0;
		float L_4;
		L_4 = YogaValue_get_Value_mEFC5711E0F64ABCA0DC6E49C790217B97967ED4E((YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B *)(&___value1), /*hidden argument*/NULL);
		Native_YGNodeStyleSetPositionPercent_m0914E794B0CAF017C9942D528C97868BA42CDE02((intptr_t)L_2, L_3, L_4, /*hidden argument*/NULL);
		goto IL_003d;
	}

IL_0027:
	{
		intptr_t L_5 = __this->get__ygNode_0();
		int32_t L_6 = ___edge0;
		float L_7;
		L_7 = YogaValue_get_Value_mEFC5711E0F64ABCA0DC6E49C790217B97967ED4E((YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B *)(&___value1), /*hidden argument*/NULL);
		Native_YGNodeStyleSetPosition_m0375E96047A4DEAF2B629F7F6395C0387E945CD4((intptr_t)L_5, L_6, L_7, /*hidden argument*/NULL);
	}

IL_003d:
	{
		return;
	}
}
// System.Void UnityEngine.Yoga.YogaNode::set_MarginLeft(UnityEngine.Yoga.YogaValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaNode_set_MarginLeft_m0838220DF4C6C93285CACFBA4A9D32D54D1390D8 (YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * __this, YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B  ___value0, const RuntimeMethod* method)
{
	{
		YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B  L_0 = ___value0;
		YogaNode_SetStyleMargin_m7D36D72BB840BAD05FFE3D9C1C84BBE77B36681B(__this, 0, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Yoga.YogaNode::set_MarginTop(UnityEngine.Yoga.YogaValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaNode_set_MarginTop_mA0D7A2EDE80222AF76957F49563D906FCF1EEDF2 (YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * __this, YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B  ___value0, const RuntimeMethod* method)
{
	{
		YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B  L_0 = ___value0;
		YogaNode_SetStyleMargin_m7D36D72BB840BAD05FFE3D9C1C84BBE77B36681B(__this, 1, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Yoga.YogaNode::set_MarginRight(UnityEngine.Yoga.YogaValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaNode_set_MarginRight_m1970210F2C7B1F53626C004B1A068A02DA07ECA7 (YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * __this, YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B  ___value0, const RuntimeMethod* method)
{
	{
		YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B  L_0 = ___value0;
		YogaNode_SetStyleMargin_m7D36D72BB840BAD05FFE3D9C1C84BBE77B36681B(__this, 2, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Yoga.YogaNode::set_MarginBottom(UnityEngine.Yoga.YogaValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaNode_set_MarginBottom_m7C25AF84142974E51EF7A5D8493511CC163FA261 (YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * __this, YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B  ___value0, const RuntimeMethod* method)
{
	{
		YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B  L_0 = ___value0;
		YogaNode_SetStyleMargin_m7D36D72BB840BAD05FFE3D9C1C84BBE77B36681B(__this, 3, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Yoga.YogaNode::SetStyleMargin(UnityEngine.Yoga.YogaEdge,UnityEngine.Yoga.YogaValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaNode_SetStyleMargin_m7D36D72BB840BAD05FFE3D9C1C84BBE77B36681B (YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * __this, int32_t ___edge0, YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B  ___value1, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	{
		int32_t L_0;
		L_0 = YogaValue_get_Unit_m6D0E7755E95D4223A8F82DFE7CD7E72E0B7604C0((YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B *)(&___value1), /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)2))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		intptr_t L_2 = __this->get__ygNode_0();
		int32_t L_3 = ___edge0;
		float L_4;
		L_4 = YogaValue_get_Value_mEFC5711E0F64ABCA0DC6E49C790217B97967ED4E((YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B *)(&___value1), /*hidden argument*/NULL);
		Native_YGNodeStyleSetMarginPercent_m78660EF35C712CE8B7EF72A00A9881338F9AD6D7((intptr_t)L_2, L_3, L_4, /*hidden argument*/NULL);
		goto IL_005c;
	}

IL_0027:
	{
		int32_t L_5;
		L_5 = YogaValue_get_Unit_m6D0E7755E95D4223A8F82DFE7CD7E72E0B7604C0((YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B *)(&___value1), /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)L_5) == ((int32_t)3))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		intptr_t L_7 = __this->get__ygNode_0();
		int32_t L_8 = ___edge0;
		Native_YGNodeStyleSetMarginAuto_mB8125F645998A964419DA4006EB158DEFED0EBAE((intptr_t)L_7, L_8, /*hidden argument*/NULL);
		goto IL_005c;
	}

IL_0046:
	{
		intptr_t L_9 = __this->get__ygNode_0();
		int32_t L_10 = ___edge0;
		float L_11;
		L_11 = YogaValue_get_Value_mEFC5711E0F64ABCA0DC6E49C790217B97967ED4E((YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B *)(&___value1), /*hidden argument*/NULL);
		Native_YGNodeStyleSetMargin_m794F2082F3DB3CD5657CA8F593A5B20BDC394E9B((intptr_t)L_9, L_10, L_11, /*hidden argument*/NULL);
	}

IL_005c:
	{
		return;
	}
}
// System.Void UnityEngine.Yoga.YogaNode::set_PaddingLeft(UnityEngine.Yoga.YogaValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaNode_set_PaddingLeft_mE351AF67A2DF93215D940FC6F2B5AD4A0385ABDC (YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * __this, YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B  ___value0, const RuntimeMethod* method)
{
	{
		YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B  L_0 = ___value0;
		YogaNode_SetStylePadding_mA741114B9FB6EE8D8B8B73187EFFB8D3130496AC(__this, 0, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Yoga.YogaNode::set_PaddingTop(UnityEngine.Yoga.YogaValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaNode_set_PaddingTop_m7693882BC214F451C10FD8D771EF8772EF9C54FB (YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * __this, YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B  ___value0, const RuntimeMethod* method)
{
	{
		YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B  L_0 = ___value0;
		YogaNode_SetStylePadding_mA741114B9FB6EE8D8B8B73187EFFB8D3130496AC(__this, 1, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Yoga.YogaNode::set_PaddingRight(UnityEngine.Yoga.YogaValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaNode_set_PaddingRight_m0C705C36F1278AF1EAB7319C68724D38A7A6B7BA (YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * __this, YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B  ___value0, const RuntimeMethod* method)
{
	{
		YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B  L_0 = ___value0;
		YogaNode_SetStylePadding_mA741114B9FB6EE8D8B8B73187EFFB8D3130496AC(__this, 2, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Yoga.YogaNode::set_PaddingBottom(UnityEngine.Yoga.YogaValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaNode_set_PaddingBottom_mB033E59809B1C1CDF4C314A95A0DC4012E35E415 (YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * __this, YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B  ___value0, const RuntimeMethod* method)
{
	{
		YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B  L_0 = ___value0;
		YogaNode_SetStylePadding_mA741114B9FB6EE8D8B8B73187EFFB8D3130496AC(__this, 3, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Yoga.YogaNode::SetStylePadding(UnityEngine.Yoga.YogaEdge,UnityEngine.Yoga.YogaValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaNode_SetStylePadding_mA741114B9FB6EE8D8B8B73187EFFB8D3130496AC (YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * __this, int32_t ___edge0, YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B  ___value1, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		int32_t L_0;
		L_0 = YogaValue_get_Unit_m6D0E7755E95D4223A8F82DFE7CD7E72E0B7604C0((YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B *)(&___value1), /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)2))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		intptr_t L_2 = __this->get__ygNode_0();
		int32_t L_3 = ___edge0;
		float L_4;
		L_4 = YogaValue_get_Value_mEFC5711E0F64ABCA0DC6E49C790217B97967ED4E((YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B *)(&___value1), /*hidden argument*/NULL);
		Native_YGNodeStyleSetPaddingPercent_mDD045CB68F294C1211769AAF89DACA7FCD765412((intptr_t)L_2, L_3, L_4, /*hidden argument*/NULL);
		goto IL_003d;
	}

IL_0027:
	{
		intptr_t L_5 = __this->get__ygNode_0();
		int32_t L_6 = ___edge0;
		float L_7;
		L_7 = YogaValue_get_Value_mEFC5711E0F64ABCA0DC6E49C790217B97967ED4E((YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B *)(&___value1), /*hidden argument*/NULL);
		Native_YGNodeStyleSetPadding_m951E42923BE35DBDE4CB346128A8A47BDB09BB49((intptr_t)L_5, L_6, L_7, /*hidden argument*/NULL);
	}

IL_003d:
	{
		return;
	}
}
// System.Void UnityEngine.Yoga.YogaNode::set_BorderLeftWidth(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaNode_set_BorderLeftWidth_mBDCF4DFCD476CEABEE57CD3BE2858409364E1869 (YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = __this->get__ygNode_0();
		float L_1 = ___value0;
		Native_YGNodeStyleSetBorder_mEADDE749B55A699CF094D463856E5856BD417361((intptr_t)L_0, 0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Yoga.YogaNode::set_BorderTopWidth(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaNode_set_BorderTopWidth_m18736263A0B349B23819F4DEAB3D464DC3AE9FBF (YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = __this->get__ygNode_0();
		float L_1 = ___value0;
		Native_YGNodeStyleSetBorder_mEADDE749B55A699CF094D463856E5856BD417361((intptr_t)L_0, 1, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Yoga.YogaNode::set_BorderRightWidth(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaNode_set_BorderRightWidth_mA1F849651EDCF0B01381BBBB3522540EBC092391 (YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = __this->get__ygNode_0();
		float L_1 = ___value0;
		Native_YGNodeStyleSetBorder_mEADDE749B55A699CF094D463856E5856BD417361((intptr_t)L_0, 2, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Yoga.YogaNode::set_BorderBottomWidth(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaNode_set_BorderBottomWidth_m3F2F47B69083DD6623FCFAD697D7E6E5C5929FCF (YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = __this->get__ygNode_0();
		float L_1 = ___value0;
		Native_YGNodeStyleSetBorder_mEADDE749B55A699CF094D463856E5856BD417361((intptr_t)L_0, 3, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Single UnityEngine.Yoga.YogaNode::get_LayoutMarginLeft()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float YogaNode_get_LayoutMarginLeft_m2AD6DCA008D9D7852BEB6033A64C1561EA13D4B7 (YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		intptr_t L_0 = __this->get__ygNode_0();
		float L_1;
		L_1 = Native_YGNodeLayoutGetMargin_mC23ED3D77B7FD20FDBD5B8CAA765B7DA8CAD9402((intptr_t)L_0, 0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_0010;
	}

IL_0010:
	{
		float L_2 = V_0;
		return L_2;
	}
}
// System.Single UnityEngine.Yoga.YogaNode::get_LayoutMarginTop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float YogaNode_get_LayoutMarginTop_mF696DFC4E8459C6F34B3D8A9DE11CE07F265A1D7 (YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		intptr_t L_0 = __this->get__ygNode_0();
		float L_1;
		L_1 = Native_YGNodeLayoutGetMargin_mC23ED3D77B7FD20FDBD5B8CAA765B7DA8CAD9402((intptr_t)L_0, 1, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_0010;
	}

IL_0010:
	{
		float L_2 = V_0;
		return L_2;
	}
}
// System.Single UnityEngine.Yoga.YogaNode::get_LayoutMarginRight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float YogaNode_get_LayoutMarginRight_m98AA68A921ADD7E9ADA88CF1DE7653A947B54B8F (YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		intptr_t L_0 = __this->get__ygNode_0();
		float L_1;
		L_1 = Native_YGNodeLayoutGetMargin_mC23ED3D77B7FD20FDBD5B8CAA765B7DA8CAD9402((intptr_t)L_0, 2, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_0010;
	}

IL_0010:
	{
		float L_2 = V_0;
		return L_2;
	}
}
// System.Single UnityEngine.Yoga.YogaNode::get_LayoutMarginBottom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float YogaNode_get_LayoutMarginBottom_m9CB4D1C8F7E91ECF9D74A6B207FCC2CDFC7ABF3E (YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		intptr_t L_0 = __this->get__ygNode_0();
		float L_1;
		L_1 = Native_YGNodeLayoutGetMargin_mC23ED3D77B7FD20FDBD5B8CAA765B7DA8CAD9402((intptr_t)L_0, 3, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_0010;
	}

IL_0010:
	{
		float L_2 = V_0;
		return L_2;
	}
}
// System.Single UnityEngine.Yoga.YogaNode::get_LayoutPaddingLeft()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float YogaNode_get_LayoutPaddingLeft_m60136F588059EFBE20869C2CF58C4B7C01D78762 (YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		intptr_t L_0 = __this->get__ygNode_0();
		float L_1;
		L_1 = Native_YGNodeLayoutGetPadding_m1A6212C89C759D60E2E2EE02E5C9CD6E05A33E41((intptr_t)L_0, 0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_0010;
	}

IL_0010:
	{
		float L_2 = V_0;
		return L_2;
	}
}
// System.Single UnityEngine.Yoga.YogaNode::get_LayoutPaddingTop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float YogaNode_get_LayoutPaddingTop_m61ED52690FE06E9BA70B9A5C8BD7AFA6C5E9DAB7 (YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		intptr_t L_0 = __this->get__ygNode_0();
		float L_1;
		L_1 = Native_YGNodeLayoutGetPadding_m1A6212C89C759D60E2E2EE02E5C9CD6E05A33E41((intptr_t)L_0, 1, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_0010;
	}

IL_0010:
	{
		float L_2 = V_0;
		return L_2;
	}
}
// System.Single UnityEngine.Yoga.YogaNode::get_LayoutPaddingRight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float YogaNode_get_LayoutPaddingRight_mA51F27FF7B495AB8582F33C036E13B8E8E8F050E (YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		intptr_t L_0 = __this->get__ygNode_0();
		float L_1;
		L_1 = Native_YGNodeLayoutGetPadding_m1A6212C89C759D60E2E2EE02E5C9CD6E05A33E41((intptr_t)L_0, 2, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_0010;
	}

IL_0010:
	{
		float L_2 = V_0;
		return L_2;
	}
}
// System.Single UnityEngine.Yoga.YogaNode::get_LayoutPaddingBottom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float YogaNode_get_LayoutPaddingBottom_m9EC9DA20FFC052293BCB948797D178CFC0B7C9C2 (YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		intptr_t L_0 = __this->get__ygNode_0();
		float L_1;
		L_1 = Native_YGNodeLayoutGetPadding_m1A6212C89C759D60E2E2EE02E5C9CD6E05A33E41((intptr_t)L_0, 3, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_0010;
	}

IL_0010:
	{
		float L_2 = V_0;
		return L_2;
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
// UnityEngine.Yoga.YogaUnit UnityEngine.Yoga.YogaValue::get_Unit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t YogaValue_get_Unit_m6D0E7755E95D4223A8F82DFE7CD7E72E0B7604C0 (YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_unit_1();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t YogaValue_get_Unit_m6D0E7755E95D4223A8F82DFE7CD7E72E0B7604C0_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B * _thisAdjusted = reinterpret_cast<YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = YogaValue_get_Unit_m6D0E7755E95D4223A8F82DFE7CD7E72E0B7604C0(_thisAdjusted, method);
	return _returnValue;
}
// System.Single UnityEngine.Yoga.YogaValue::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float YogaValue_get_Value_mEFC5711E0F64ABCA0DC6E49C790217B97967ED4E (YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->get_value_0();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		float L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  float YogaValue_get_Value_mEFC5711E0F64ABCA0DC6E49C790217B97967ED4E_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B * _thisAdjusted = reinterpret_cast<YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B *>(__this + _offset);
	float _returnValue;
	_returnValue = YogaValue_get_Value_mEFC5711E0F64ABCA0DC6E49C790217B97967ED4E(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.Yoga.YogaValue UnityEngine.Yoga.YogaValue::Point(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B  YogaValue_Point_m6E8304020D3C143EC19DF5A1099B5E59F8AAEE71 (float ___value0, const RuntimeMethod* method)
{
	YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B  V_0;
	memset((&V_0), 0, sizeof(V_0));
	YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B  V_1;
	memset((&V_1), 0, sizeof(V_1));
	YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B * G_B2_0 = NULL;
	YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B * G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B * G_B3_1 = NULL;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B ));
		float L_0 = ___value0;
		(&V_0)->set_value_0(L_0);
		float L_1 = ___value0;
		bool L_2;
		L_2 = YogaConstants_IsUndefined_m31D36808D971EE123C830220068474081F6C7410(L_1, /*hidden argument*/NULL);
		G_B1_0 = (&V_0);
		if (L_2)
		{
			G_B2_0 = (&V_0);
			goto IL_001e;
		}
	}
	{
		G_B3_0 = 1;
		G_B3_1 = G_B1_0;
		goto IL_001f;
	}

IL_001e:
	{
		G_B3_0 = 0;
		G_B3_1 = G_B2_0;
	}

IL_001f:
	{
		G_B3_1->set_unit_1(G_B3_0);
		YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B  L_3 = V_0;
		V_1 = L_3;
		goto IL_0028;
	}

IL_0028:
	{
		YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B  L_4 = V_1;
		return L_4;
	}
}
// System.Boolean UnityEngine.Yoga.YogaValue::Equals(UnityEngine.Yoga.YogaValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool YogaValue_Equals_m2358449AB013A9C9F92DAEFC2F55D11A490422EF (YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B * __this, YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B  ___other0, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	bool V_1 = false;
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	{
		int32_t L_0;
		L_0 = YogaValue_get_Unit_m6D0E7755E95D4223A8F82DFE7CD7E72E0B7604C0((YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B *)__this, /*hidden argument*/NULL);
		int32_t L_1;
		L_1 = YogaValue_get_Unit_m6D0E7755E95D4223A8F82DFE7CD7E72E0B7604C0((YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B *)(&___other0), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_0035;
		}
	}
	{
		float L_2;
		L_2 = YogaValue_get_Value_mEFC5711E0F64ABCA0DC6E49C790217B97967ED4E((YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B *)__this, /*hidden argument*/NULL);
		V_0 = L_2;
		float L_3;
		L_3 = YogaValue_get_Value_mEFC5711E0F64ABCA0DC6E49C790217B97967ED4E((YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B *)(&___other0), /*hidden argument*/NULL);
		bool L_4;
		L_4 = Single_Equals_m298A3A849F30B9900813BE6DD98AE6810CDBE914((float*)(&V_0), L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0032;
		}
	}
	{
		int32_t L_5;
		L_5 = YogaValue_get_Unit_m6D0E7755E95D4223A8F82DFE7CD7E72E0B7604C0((YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B *)__this, /*hidden argument*/NULL);
		G_B4_0 = ((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
		goto IL_0033;
	}

IL_0032:
	{
		G_B4_0 = 1;
	}

IL_0033:
	{
		G_B6_0 = G_B4_0;
		goto IL_0036;
	}

IL_0035:
	{
		G_B6_0 = 0;
	}

IL_0036:
	{
		V_1 = (bool)G_B6_0;
		goto IL_0039;
	}

IL_0039:
	{
		bool L_6 = V_1;
		return L_6;
	}
}
IL2CPP_EXTERN_C  bool YogaValue_Equals_m2358449AB013A9C9F92DAEFC2F55D11A490422EF_AdjustorThunk (RuntimeObject * __this, YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B * _thisAdjusted = reinterpret_cast<YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B *>(__this + _offset);
	bool _returnValue;
	_returnValue = YogaValue_Equals_m2358449AB013A9C9F92DAEFC2F55D11A490422EF(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Yoga.YogaValue::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool YogaValue_Equals_m758B00D9044EBD5A0F47A1E50527AA781E2E94D5 (YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B5_0 = 0;
	{
		RuntimeObject * L_0 = ___obj0;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_0027;
	}

IL_000d:
	{
		RuntimeObject * L_2 = ___obj0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_2, YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B_il2cpp_TypeInfo_var)))
		{
			goto IL_0023;
		}
	}
	{
		RuntimeObject * L_3 = ___obj0;
		bool L_4;
		L_4 = YogaValue_Equals_m2358449AB013A9C9F92DAEFC2F55D11A490422EF((YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B *)__this, ((*(YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B *)((YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B *)UnBox(L_3, YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		G_B5_0 = ((int32_t)(L_4));
		goto IL_0024;
	}

IL_0023:
	{
		G_B5_0 = 0;
	}

IL_0024:
	{
		V_1 = (bool)G_B5_0;
		goto IL_0027;
	}

IL_0027:
	{
		bool L_5 = V_1;
		return L_5;
	}
}
IL2CPP_EXTERN_C  bool YogaValue_Equals_m758B00D9044EBD5A0F47A1E50527AA781E2E94D5_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B * _thisAdjusted = reinterpret_cast<YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B *>(__this + _offset);
	bool _returnValue;
	_returnValue = YogaValue_Equals_m758B00D9044EBD5A0F47A1E50527AA781E2E94D5(_thisAdjusted, ___obj0, method);
	return _returnValue;
}
// System.Int32 UnityEngine.Yoga.YogaValue::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t YogaValue_GetHashCode_m0B7087DEF6ED1A319364823B9E8FF37C8E0398E1 (YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	{
		float L_0;
		L_0 = YogaValue_get_Value_mEFC5711E0F64ABCA0DC6E49C790217B97967ED4E((YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B *)__this, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1;
		L_1 = Single_GetHashCode_m7662E1812DDDBC85D464398740CFFC3588DFB2C9((float*)(&V_0), /*hidden argument*/NULL);
		int32_t L_2;
		L_2 = YogaValue_get_Unit_m6D0E7755E95D4223A8F82DFE7CD7E72E0B7604C0((YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B *)__this, /*hidden argument*/NULL);
		V_1 = ((int32_t)((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_1, (int32_t)((int32_t)397)))^(int32_t)L_2));
		goto IL_0020;
	}

IL_0020:
	{
		int32_t L_3 = V_1;
		return L_3;
	}
}
IL2CPP_EXTERN_C  int32_t YogaValue_GetHashCode_m0B7087DEF6ED1A319364823B9E8FF37C8E0398E1_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B * _thisAdjusted = reinterpret_cast<YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = YogaValue_GetHashCode_m0B7087DEF6ED1A319364823B9E8FF37C8E0398E1(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.Yoga.YogaValue UnityEngine.Yoga.YogaValue::Auto()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B  YogaValue_Auto_m8BB1C9D9F00F6616ABAA935483C7535836981872 (const RuntimeMethod* method)
{
	YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B  V_0;
	memset((&V_0), 0, sizeof(V_0));
	YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B ));
		(&V_0)->set_value_0((std::numeric_limits<float>::quiet_NaN()));
		(&V_0)->set_unit_1(3);
		YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B  L_0 = V_0;
		V_1 = L_0;
		goto IL_0021;
	}

IL_0021:
	{
		YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B  L_1 = V_1;
		return L_1;
	}
}
// UnityEngine.Yoga.YogaValue UnityEngine.Yoga.YogaValue::Percent(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B  YogaValue_Percent_mA2B500579A28F2FDD86F6E7F653DD17E626650BA (float ___value0, const RuntimeMethod* method)
{
	YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B  V_0;
	memset((&V_0), 0, sizeof(V_0));
	YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B  V_1;
	memset((&V_1), 0, sizeof(V_1));
	YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B * G_B2_0 = NULL;
	YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B * G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B * G_B3_1 = NULL;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B ));
		float L_0 = ___value0;
		(&V_0)->set_value_0(L_0);
		float L_1 = ___value0;
		bool L_2;
		L_2 = YogaConstants_IsUndefined_m31D36808D971EE123C830220068474081F6C7410(L_1, /*hidden argument*/NULL);
		G_B1_0 = (&V_0);
		if (L_2)
		{
			G_B2_0 = (&V_0);
			goto IL_001e;
		}
	}
	{
		G_B3_0 = 2;
		G_B3_1 = G_B1_0;
		goto IL_001f;
	}

IL_001e:
	{
		G_B3_0 = 0;
		G_B3_1 = G_B2_0;
	}

IL_001f:
	{
		G_B3_1->set_unit_1(G_B3_0);
		YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B  L_3 = V_0;
		V_1 = L_3;
		goto IL_0028;
	}

IL_0028:
	{
		YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B  L_4 = V_1;
		return L_4;
	}
}
// UnityEngine.Yoga.YogaValue UnityEngine.Yoga.YogaValue::op_Implicit(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B  YogaValue_op_Implicit_m771DCC184993B9C53C6838D3FAD09E813D8A21ED (float ___pointValue0, const RuntimeMethod* method)
{
	YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___pointValue0;
		YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B  L_1;
		L_1 = YogaValue_Point_m6E8304020D3C143EC19DF5A1099B5E59F8AAEE71(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		YogaValue_t9B47A294D1D784BCD4EA15617CE88C4558893E5B  L_2 = V_0;
		return L_2;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_0(L_0);
		float L_1 = ___y1;
		__this->set_y_1(L_1);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		float L_2 = ___z2;
		__this->set_z_4(L_2);
		return;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929(/*hidden argument*/NULL);
	}

IL_000e:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get__items_1();
		int32_t L_3 = ___index0;
		RuntimeObject * L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_2, (int32_t)L_3);
		return (RuntimeObject *)L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Empty_TisRuntimeObject_m3146A50D269FEA10AD64F271E3C5E47FC5D7C2DD_gshared_inline (const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = ((EmptyEnumerable_1_tB6A330001520792410A46A172F103A91B1608883_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		return (RuntimeObject*)L_0;
	}
}
