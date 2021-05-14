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
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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

// System.Action`1<UnityEngine.UIElements.BaseVisualElementPanel>
struct Action_1_tF8AEA2BF5A293F9FCAE523BDD73487F898EF64CA;
// System.Action`1<UnityEngine.UIElements.IPanel>
struct Action_1_tB95D7C9EAABB9B1D6566749267C21000DE5CD130;
// System.Action`1<UnityEngine.Material>
struct Action_1_t63C45C5B44E8772727060B2DE65BB77DD9B77BE0;
// System.Action`1<UnityEngine.UIElements.MeshGenerationContext>
struct Action_1_t233C4A43441782DC9CF3F90D88CB275BC4F89C34;
// System.Action`1<UnityEngine.UIElements.Panel>
struct Action_1_tC48F3EAA22CD0D3F9F99D8605323BA6DDB9C7D47;
// UnityEngine.UIElements.UIR.BasicNode`1<UnityEngine.UIElements.UIR.TextureEntry>
struct BasicNode_1_t0A731487837FD442B3BE0CFDBEEE805F7E80A02E;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.UIElements.StyleComplexSelector>
struct Dictionary_2_t81BDF95B4FE1FFCCE2088649A670EA4EBB30C03F;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.UIElements.VisualElement>
struct Dictionary_2_tE9E786ACC67A5C4EBCF1B89BA4158D0A60363D77;
// System.Collections.Generic.Dictionary`2<UnityEngine.Texture,UnityEngine.UIElements.DynamicAtlas/TextureInfo>
struct Dictionary_2_tC692C41DA3B6B1FAF3A4349307C7EE513C236CE6;
// System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.UIElements.VisualElement/TypeData>
struct Dictionary_2_t8AD70701F144D19A8E60092D16A4C4D0B9901229;
// System.Func`1<System.Int32>
struct Func_1_tCB4CC73D86ED9FF6219A185C0C591F956E5DD1BA;
// System.Func`1<System.Object>
struct Func_1_t807CEE610086E24A0167BAA97A64062016E09D49;
// System.Func`1<UnityEngine.Object>
struct Func_1_tAC616C71189A2A9710DCCC67B2B63B95BD51C170;
// System.Func`2<UnityEngine.Object,System.Boolean>
struct Func_2_t4490DFDA400FA49E72C851B7CFFE5584EE480800;
// System.Func`2<UnityEngine.Object,UnityEngine.Font>
struct Func_2_tB831D41C40E17E6DF736F7E8570A980BF700A714;
// System.Func`2<UnityEngine.Vector2,UnityEngine.Vector2>
struct Func_2_tB3D19331301201246DE473D608119BB47D418EB9;
// System.Func`2<UnityEngine.UIElements.VisualElement,UnityEngine.UIElements.UIR.TextCoreSettings>
struct Func_2_tC0378B2092D52DB44B62824DA30C71C32B050EA4;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t52B1AC8D9E5E1ED28DF6C46A37C9A1B00B394F9D;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UIElements.UIDocument>
struct IEnumerable_1_t69515B92C1F4B31EC8927F56C461FEEE532E79E4;
// System.Collections.Generic.IList`1<UnityEngine.UIElements.IEventDispatchingStrategy>
struct IList_1_t3A58498D82884B7C4F2F46AC345401ACBC468189;
// System.Collections.Generic.SortedDictionary`2/KeyCollection<UnityEngine.UIElements.UIDocumentHierarchicalIndex,UnityEngine.UIElements.UIDocument>
struct KeyCollection_t28CB4CF903A73E4A5E8CD4AE2C0088C258FB1619;
// UnityEngine.UIElements.KeyboardEventBase`1<UnityEngine.UIElements.KeyDownEvent>
struct KeyboardEventBase_1_t21A03EBF2C37353CE0F48477560D753D9A3F3F24;
// UnityEngine.UIElements.KeyboardEventBase`1<System.Object>
struct KeyboardEventBase_1_t69A112BDACF51D37126F2FA7FE5BAB6B7E3D4620;
// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.PropertyName,System.Object>>
struct List_1_t3F0CE5680E8E1FAF64EDF53405C8CCA7DC846CEC;
// System.Collections.Generic.List`1<UnityEngine.UIElements.IEventDispatchingStrategy>
struct List_1_tDB4893D11F8F1E02AB6C87CD8B761DC956B02D32;
// System.Collections.Generic.List`1<UnityEngine.UIElements.IEventHandler>
struct List_1_t98263B2C6950B707E321AE3A13E1E27A6D50354A;
// System.Collections.Generic.List`1<UnityEngine.UIElements.IPanel>
struct List_1_tB114B037925B819DCABBE08466412B77A419A324;
// System.Collections.Generic.List`1<UnityEngine.UIElements.Experimental.IValueAnimationUpdate>
struct List_1_t76D6F8AED226DECE77A81ACDB46AEB711DA629F9;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<UnityEngine.UIElements.UIR.RenderChainTextEntry>
struct List_1_tB8BCBA2CE4815A189DE79280CDA1D508FA541A68;
// System.Collections.Generic.List`1<System.String>
struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3;
// System.Collections.Generic.List`1<UnityEngine.UIElements.StyleSheet>
struct List_1_t0E9CFF2ACF7F3C4FB0A6A6465FA93E6BD367DAE5;
// System.Collections.Generic.List`1<UnityEngine.UIElements.TemplateAsset>
struct List_1_tDFFA476CF9738D49ECC91306D54FC2DE5F691CC6;
// System.Collections.Generic.List`1<UnityEngine.UIElements.UIDocument>
struct List_1_tAB773DE00C0DE14686075955D7FB71ACD6194509;
// System.Collections.Generic.List`1<UnityEngine.UIElements.VisualElement>
struct List_1_tF1CA7B1792CDC7EDFF5FCCC4AF767C8E127E2462;
// System.Collections.Generic.List`1<UnityEngine.UIElements.VisualElementAsset>
struct List_1_t165EB4070C47BAEDC3B39DF0DA5F92511A668FDC;
// System.Collections.Generic.List`1<UnityEngine.UIElements.FocusController/FocusedElement>
struct List_1_t01A91F79EEF1E6714C60371B363E291AA28D2AF3;
// System.Collections.Generic.List`1<UnityEngine.UIElements.VisualElementFocusRing/FocusRingRecord>
struct List_1_t7D62816A34175FC41F4540DD6D2B60E94DD2ED71;
// System.Collections.Generic.List`1<UnityEngine.UIElements.VisualTreeAsset/SlotDefinition>
struct List_1_tC46FD734126C183B42B3674E5A74558AB19AF03A;
// System.Collections.Generic.List`1<UnityEngine.UIElements.VisualTreeAsset/UsingEntry>
struct List_1_tE750469ADBDFBDA7C5EBB9A922A8196B3C6D59E7;
// System.Collections.Generic.SortedSet`1/Node<System.Collections.Generic.KeyValuePair`2<UnityEngine.UIElements.UIDocumentHierarchicalIndex,System.Object>>
struct Node_tA648B6C4B1917C6DAA9AD2B34FBAAF0E90CBB0D3;
// System.Collections.Generic.SortedSet`1/Node<System.Collections.Generic.KeyValuePair`2<UnityEngine.UIElements.UIDocumentHierarchicalIndex,UnityEngine.UIElements.UIDocument>>
struct Node_t14BDD4C7CE7BC32CFB4D1782A5EEF86598483A6C;
// UnityEngine.UIElements.ObjectPool`1<System.Collections.Generic.Queue`1<UnityEngine.UIElements.EventDispatcher/EventRecord>>
struct ObjectPool_1_t86AF8F0ECC9F289DD57826C7D447CAAD3184B34B;
// UnityEngine.UIElements.ObjectPool`1<UnityEngine.UIElements.KeyDownEvent>
struct ObjectPool_1_t776D216D3A8C6B8147ACB387C359DA2D34662C26;
// UnityEngine.UIElements.ObjectPool`1<UnityEngine.UIElements.NavigationMoveEvent>
struct ObjectPool_1_tF26D706EA84B9BAC341E54AA89A064C3DB907581;
// UnityEngine.UIElements.ObjectPool`1<System.Object>
struct ObjectPool_1_tC62E0B641AD7AF04DB36BE2D48FCBE4330C23DE0;
// UnityEngine.UIElements.ObjectPool`1<UnityEngine.UIElements.VisualElementFocusChangeTarget>
struct ObjectPool_1_t7EE10111EDB14D82798D40198FC5B7C2E6B1E35A;
// System.Collections.Generic.Queue`1<UnityEngine.UIElements.EventDispatcher/EventRecord>
struct Queue_1_t9846227641223AEA10F5321CB4AE7B2A5DB44AEA;
// System.Collections.Generic.SortedDictionary`2<UnityEngine.UIElements.UIDocumentHierarchicalIndex,System.Object>
struct SortedDictionary_2_t73881AFFC2372EDA019D0879247F77F1C9B2FB06;
// System.Collections.Generic.SortedDictionary`2<UnityEngine.UIElements.UIDocumentHierarchicalIndex,UnityEngine.UIElements.UIDocument>
struct SortedDictionary_2_tD6FDE7062F18D6B2948C91C6E3E4B6AB7018E0BB;
// System.Collections.Generic.SortedSet`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.UIElements.UIDocumentHierarchicalIndex,System.Object>>
struct SortedSet_1_tEF52DF30E6A1F0E13CC6CE2CBCC4EABE15306CE9;
// System.Collections.Generic.SortedSet`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.UIElements.UIDocumentHierarchicalIndex,UnityEngine.UIElements.UIDocument>>
struct SortedSet_1_tD24C654B011F982B85FAB0FFB426E31D3ECB430D;
// System.Collections.Generic.Stack`1<System.Collections.Generic.SortedSet`1/Node<System.Collections.Generic.KeyValuePair`2<UnityEngine.UIElements.UIDocumentHierarchicalIndex,System.Object>>>
struct Stack_1_tF3C6AA4D4B67C42CE1FE149C8F7A54EE7C18A4CC;
// System.Collections.Generic.Stack`1<System.Collections.Generic.SortedSet`1/Node<System.Collections.Generic.KeyValuePair`2<UnityEngine.UIElements.UIDocumentHierarchicalIndex,UnityEngine.UIElements.UIDocument>>>
struct Stack_1_t666CE40FCB5BDA936B365F988C46C170DA7C30DB;
// System.Collections.Generic.Stack`1<UnityEngine.UIElements.EventDispatcher/DispatchContext>
struct Stack_1_t45B9C1D269F88DFCEC0C89DFBD8CFEFF68565E18;
// System.Collections.Generic.TreeSet`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.UIElements.UIDocumentHierarchicalIndex,UnityEngine.UIElements.UIDocument>>
struct TreeSet_1_t68748C0CB83A6BC2120B1C5347DB0D3204CEB686;
// System.Collections.Generic.SortedDictionary`2/ValueCollection<UnityEngine.UIElements.UIDocumentHierarchicalIndex,System.Object>
struct ValueCollection_t7FCA5E2BC38DCE56CCF9C9DAD0602103C6B4A776;
// System.Collections.Generic.SortedDictionary`2/ValueCollection<UnityEngine.UIElements.UIDocumentHierarchicalIndex,UnityEngine.UIElements.UIDocument>
struct ValueCollection_t4350A1F9A865F1082C3579EA46CDE57E4827D2D0;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// UnityEngine.Color[]
struct ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// UnityEngine.UIElements.StyleSheets.Dimension[]
struct DimensionU5BU5D_t78DE573BBD4E2ABDF8FB32B1FEBBFB7E9E8B9AE2;
// UnityEngine.Display[]
struct DisplayU5BU5D_t3330058639C7A70B7B1FE7B4325E2B5D600CF4A6;
// UnityEngine.UIElements.IEventDispatchingStrategy[]
struct IEventDispatchingStrategyU5BU5D_tD5AD23CA9015E352F0B63E0C716DEA684584AE10;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// UnityEngine.Object[]
struct ObjectU5BU5D_t1256A8B00BB71C7F582BF08257BE4F826FF64873;
// UnityEngine.UIElements.StyleSheets.ScalableImage[]
struct ScalableImageU5BU5D_tD18AF6F2B0D365DB8AF04F6DCFD603681535BF2B;
// System.Single[]
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// UnityEngine.UIElements.StyleComplexSelector[]
struct StyleComplexSelectorU5BU5D_t177E5F31FB621168D02162416C4717278278FD3F;
// UnityEngine.UIElements.StyleRule[]
struct StyleRuleU5BU5D_tDDB41AFBA1F4E04B0AC3B52CFF91D719172EE92D;
// UnityEngine.UIElements.UIDocument[]
struct UIDocumentU5BU5D_t07C874E2F207A4181C854213623A407A46E7372B;
// UnityEngine.UIElements.StyleSheet/ImportStruct[]
struct ImportStructU5BU5D_tD7ACE95B34F597C406AADCB88C698803125BEBE4;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.UIElements.AtlasBase
struct AtlasBase_t04E16651AFF344EDD21EB14F2E9CF0B76DACA9E3;
// UnityEngine.UIElements.BaseRuntimePanel
struct BaseRuntimePanel_tE55DB58DC0A1F524F98CC999672C716946DA4754;
// UnityEngine.UIElements.BaseVisualElementPanel
struct BaseVisualElementPanel_tFF0B76C4FDAE6AA5D9A055D1FDD29AE67B93B95D;
// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9;
// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C;
// UnityEngine.UIElements.ClickDetector
struct ClickDetector_t49683B5220118314737CFDE86D066BB5A90F5BBB;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// UnityEngine.UIElements.ComputedStyle
struct ComputedStyle_tF8F838DB4D9AC943B38AD090B1E5BB64D4A15027;
// UnityEngine.UIElements.ContextualMenuManager
struct ContextualMenuManager_tA971837C9CD7DBDFCA02934FB02DF7B2D733ECB4;
// UnityEngine.UIElements.DefaultDispatchingStrategy
struct DefaultDispatchingStrategy_t7A05CA05D94BD04D7AEDE160F48422576C2E55A5;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// UnityEngine.Display
struct Display_t0A5D09F1F2EB8025FE40EE0F81E0D01BB47A9B44;
// UnityEngine.UIElements.DynamicAtlas
struct DynamicAtlas_t024D0D5DF3B5CCA7D05187B7745B0F6F83662D60;
// UnityEngine.UIElements.DynamicAtlasCustomFilter
struct DynamicAtlasCustomFilter_tCC685CA75B6C1A4A973B7401B0C37E35352476AA;
// UnityEngine.UIElements.DynamicAtlasPage
struct DynamicAtlasPage_tEBA1382749248D64AA785873B38F372CB4054FFF;
// UnityEngine.UIElements.DynamicAtlasSettings
struct DynamicAtlasSettings_t851C8E0D9506CB6B36AE277F8FCE439C89097806;
// UnityEngine.UIElements.ElementUnderPointer
struct ElementUnderPointer_t2E239D7BB884886ABFF26392EFFA31E045883908;
// UnityEngine.Event
struct Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E;
// UnityEngine.UIElements.EventBase
struct EventBase_tA1333DE2FD77BE5E6B06CFDC825252E0CCF00698;
// UnityEngine.UIElements.EventCallbackRegistry
struct EventCallbackRegistry_tC9477A9EF44640BD0FB0D79D7DCF715A8E226DA2;
// UnityEngine.UIElements.EventDispatcher
struct EventDispatcher_t86D9B0A3CA4441F30AA1A940D0D50F9AEC9912F2;
// UnityEngine.UIElements.FocusChangeDirection
struct FocusChangeDirection_t7E59BE4DF7F0B4024128F306581D21C2C5E02CF1;
// UnityEngine.UIElements.FocusController
struct FocusController_t0EE43A2ABFA352E752E8DA2B6D17FC322FC59764;
// UnityEngine.UIElements.Focusable
struct Focusable_tF2E839AB6DBE413F04FC62347D7074D7377FD1E1;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// UnityEngine.UIElements.GetViewDataDictionary
struct GetViewDataDictionary_tF4CE61C507D009B7FD8753159E1E893FF1147E5E;
// UnityEngine.UIElements.HierarchyEvent
struct HierarchyEvent_tC402676F418C72D382D1804DF58B7B40B36AFE56;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// UnityEngine.UIElements.IBinding
struct IBinding_tE7536594F22085AE70D65460F622B6DA20953002;
// UnityEngine.UIElements.ICursorManager
struct ICursorManager_t08DBCE45958873C8D3A75B99393BD57B1806976D;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// UnityEngine.UIElements.IEventDispatchingStrategy
struct IEventDispatchingStrategy_t1F21540437456B1C5EF0D0826378DDC95FB80F5F;
// UnityEngine.UIElements.IEventHandler
struct IEventHandler_t74B71CA4A845E5546E6D7970A8B13C3584C8639D;
// UnityEngine.UIElements.IFocusRing
struct IFocusRing_tDF41C1659D62CA776A56405F3C384B07AD1147F4;
// UnityEngine.UIElements.IMGUIContainer
struct IMGUIContainer_tF257F543C4DC9E60BCACBB529C06B2E8F835C06D;
// UnityEngine.UIElements.IPanel
struct IPanel_t6A5B44C823DF8F38AE23AFB274DA014B53AD7E59;
// UnityEngine.UIElements.IResolvedStyle
struct IResolvedStyle_tD4CBBB1BAED5377381A22608EFF0079E45D58520;
// UnityEngine.UIElements.IStyle
struct IStyle_t4D5F2A6CC5D5C040429B5E7D7CF779E6D915BEF5;
// UnityEngine.UIElements.InlineStyleAccess
struct InlineStyleAccess_t8FF96503AEB2FEC93A211DB91F5ECA43C691EF9D;
// UnityEngine.UIElements.InputWrapper
struct InputWrapper_t15D6015F150082A97E9AFE42FC9D74C62C568C85;
// UnityEngine.UIElements.KeyboardEventDispatchingStrategy
struct KeyboardEventDispatchingStrategy_t80BEA7051056C80A3C2B08B50A184B8B6D39FDE0;
// UnityEngine.UIElements.LoadResourceFunction
struct LoadResourceFunction_t078220B6FD54BC6A4F3A9F464A1A247D640FD2B5;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// UnityEngine.UIElements.UIR.MeshHandle
struct MeshHandle_tAD2C2136DE4DA1F3B85138153210B6BFC2D02C03;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// UnityEngine.UIElements.MouseEventDispatchingStrategy
struct MouseEventDispatchingStrategy_t1FA26BD52FADFAABD46BD3A9B16F23DAB22E4302;
// UnityEngine.UIElements.NavigateFocusRing
struct NavigateFocusRing_t44CF1D05515ADB539414B52A64A7602739E6B826;
// UnityEngine.UIElements.NavigationEventDispatchingStrategy
struct NavigationEventDispatchingStrategy_t2DEA6952B1FF4FEE78C9A20FA54C66E7F12F1992;
// UnityEngine.UIElements.NavigationMoveEvent
struct NavigationMoveEvent_t763AB890A80C1029C653DCEE3FBC522E60A62634;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// UnityEngine.UIElements.Panel
struct Panel_tCC064C952382FEF787E3FE61F6847A375A3DCD99;
// UnityEngine.UIElements.PanelSettings
struct PanelSettings_tA06886CA55D7F3105153641E0BA56FF15E8DCA69;
// UnityEngine.UIElements.PointerCaptureDispatchingStrategy
struct PointerCaptureDispatchingStrategy_t0599BD8824D9BE038701155B290A0732F73568B0;
// UnityEngine.UIElements.PointerDispatchState
struct PointerDispatchState_t8412E2316FACC4F8F4EC0CE7CFE35636EF63912A;
// UnityEngine.UIElements.PointerEventDispatchingStrategy
struct PointerEventDispatchingStrategy_t14CDABDD60FD11CD051E2B39DD430614D55534A9;
// UnityEngine.UIElements.PropagationPaths
struct PropagationPaths_t87A4CF30E0960BA42B42C814683A9C80FF60EA50;
// System.Text.RegularExpressions.Regex
struct Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F;
// UnityEngine.UIElements.UIR.RenderChainCommand
struct RenderChainCommand_tBBDDC53CB94BAE2250E9CF9990377A593754E5C4;
// UnityEngine.RenderTexture
struct RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849;
// UnityEngine.UIElements.RepaintData
struct RepaintData_t6B9F7CC75C7E95F627CEC015CB90D63217E4166D;
// UnityEngine.UIElements.RuntimePanel
struct RuntimePanel_t6D5485B3EB9C598452C70E12357282E046DD1409;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// UnityEngine.UIElements.SavePersistentViewData
struct SavePersistentViewData_tEEF0D942960A5DBFD2C45A9A170E3209913355BF;
// UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A;
// UnityEngine.Shader
struct Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// UnityEngine.UIElements.StyleSheet
struct StyleSheet_t7B6AD8DA876D813A48084D1587CF283490AA0093;
// UnityEngine.UIElements.StyleVariableContext
struct StyleVariableContext_t938925BC9799C7F449B8A91E1B5BDBECA4677875;
// UnityEngine.UIElements.TemplateContainer
struct TemplateContainer_tA9838A6F8D6003FCB93EFDF932BF2F1AD8D2C4DA;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// UnityEngine.UIElements.TextureRegistry
struct TextureRegistry_t1817572B284B75359FE2FD6E59F960BCFCA74845;
// UnityEngine.UIElements.TimeMsFunction
struct TimeMsFunction_t3F78BFA85034AAEB57E2725339F4327853F0C06B;
// UnityEngine.UIElements.TimerEventScheduler
struct TimerEventScheduler_tA20DF5107C5BD568BA6A461F2C3AFAEE7946525F;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// UnityEngine.UIElements.UIDocument
struct UIDocument_t008D811860584F44CEBB5AF575856E6EFCEBECC4;
// UnityEngine.UIElements.UIDocumentHierarchicalIndexComparer
struct UIDocumentHierarchicalIndexComparer_tE2E3032A6EA8A682C7EED7A3D2A85D3627F25928;
// UnityEngine.UIElements.UIDocumentList
struct UIDocumentList_t3D7C0E63339FDA7858C1D1AE3EB911CDB76C18C5;
// UnityEngine.UIElements.VisualElement
struct VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909;
// UnityEngine.UIElements.VisualElementFocusChangeTarget
struct VisualElementFocusChangeTarget_t168347905990062A6F59D1111069713C3D3F98EC;
// UnityEngine.UIElements.VisualElementFocusRing
struct VisualElementFocusRing_t9D8C7E1CD5CAD2B6220414541CB498B5FAB4946B;
// UnityEngine.UIElements.VisualTreeAsset
struct VisualTreeAsset_tF7210F261F2888C05E43C7B01200FBFEA655D5A9;
// UnityEngine.UIElements.VisualTreeUpdater
struct VisualTreeUpdater_t3CCD5BE874A8EEA082BFDD2E710387A0331C0EF9;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.Yoga.YogaConfig
struct YogaConfig_tA06BDF520DE54384107CF42E1E9909DB1C28A7E7;
// UnityEngine.Yoga.YogaNode
struct YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D;
// UnityEngine.Display/DisplaysUpdatedDelegate
struct DisplaysUpdatedDelegate_tC6A6AD44FAD98C9E28479FFF4BD3D9932458A6A1;
// UnityEngine.UIElements.NavigateFocusRing/ChangeDirection
struct ChangeDirection_t34BA68392D0BB026E61B81B65AD1B09CF9DB4D27;
// UnityEngine.UIElements.UIElementsRuntimeUtility/CreateRuntimePanelDelegate
struct CreateRuntimePanelDelegate_t0EEBC61860CC3E2C6777076F6F65CF11EE029F53;
// UnityEngine.UIElements.VisualElement/TypeData
struct TypeData_tC5B70027968DCA692CD8BD39D87872986F1029E5;

IL2CPP_EXTERN_C RuntimeClass* Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BaseRuntimePanel_tE55DB58DC0A1F524F98CC999672C716946DA4754_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BaseVisualElementPanel_tFF0B76C4FDAE6AA5D9A055D1FDD29AE67B93B95D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ChangeDirection_t34BA68392D0BB026E61B81B65AD1B09CF9DB4D27_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CreateRuntimePanelDelegate_t0EEBC61860CC3E2C6777076F6F65CF11EE029F53_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DefaultDispatchingStrategy_t7A05CA05D94BD04D7AEDE160F48422576C2E55A5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Display_t0A5D09F1F2EB8025FE40EE0F81E0D01BB47A9B44_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DynamicAtlasSettings_t851C8E0D9506CB6B36AE277F8FCE439C89097806_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DynamicAtlas_t024D0D5DF3B5CCA7D05187B7745B0F6F83662D60_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventBase_1_t5F2BBA518F7956A01DD2DAA3C80709A1904FF828_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventBase_1_tA50D96483E133B256F4EA87D789753E52559FFB5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventBase_1_tD5A5D4FABAF3A32C1E67D577C42C2B02858ABC13_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventDispatcher_t86D9B0A3CA4441F30AA1A940D0D50F9AEC9912F2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FocusChangeDirection_t7E59BE4DF7F0B4024128F306581D21C2C5E02CF1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FocusController_t0EE43A2ABFA352E752E8DA2B6D17FC322FC59764_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Focusable_tF2E839AB6DBE413F04FC62347D7074D7377FD1E1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IResolvedStyle_tD4CBBB1BAED5377381A22608EFF0079E45D58520_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IStyle_t4D5F2A6CC5D5C040429B5E7D7CF779E6D915BEF5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeyDownEvent_t87D460D7272EEC24CA83B1A07CAC2998CFCF0BAD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeyboardEventDispatchingStrategy_t80BEA7051056C80A3C2B08B50A184B8B6D39FDE0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tAB773DE00C0DE14686075955D7FB71ACD6194509_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tDB4893D11F8F1E02AB6C87CD8B761DC956B02D32_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MouseEventDispatchingStrategy_t1FA26BD52FADFAABD46BD3A9B16F23DAB22E4302_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NavigateFocusRing_t44CF1D05515ADB539414B52A64A7602739E6B826_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NavigationEventDispatchingStrategy_t2DEA6952B1FF4FEE78C9A20FA54C66E7F12F1992_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NavigationMoveEvent_t763AB890A80C1029C653DCEE3FBC522E60A62634_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PanelSettings_tA06886CA55D7F3105153641E0BA56FF15E8DCA69_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PointerCaptureDispatchingStrategy_t0599BD8824D9BE038701155B290A0732F73568B0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PointerEventDispatchingStrategy_t14CDABDD60FD11CD051E2B39DD430614D55534A9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimePanel_t6D5485B3EB9C598452C70E12357282E046DD1409_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Shaders_t5858FE9E27DFD22DD45601F3A468E40E775837E4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TemplateContainer_tA9838A6F8D6003FCB93EFDF932BF2F1AD8D2C4DA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TextDelegates_t7BDFD1ED4A9246F08974A6DF7C62E674A6618B6F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UIDocumentHierarchicalIndexComparer_tE2E3032A6EA8A682C7EED7A3D2A85D3627F25928_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UIDocumentHierarchyUtil_t62F44B7617F98EAA6346894F1E463F3C347F95AB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UIDocumentList_t3D7C0E63339FDA7858C1D1AE3EB911CDB76C18C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UIDocument_t008D811860584F44CEBB5AF575856E6EFCEBECC4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UIElementsRuntimeUtility_tB47913F94876E2A22C18B5D6B36CB71CFCDD8B2C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VisualElementFocusChangeDirection_t14A3CFA335037FB20713B566D5B993835A585951_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VisualElementFocusChangeTarget_t168347905990062A6F59D1111069713C3D3F98EC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VisualElementFocusRing_t9D8C7E1CD5CAD2B6220414541CB498B5FAB4946B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0A7A63B9C62BB3C9F95456E2AD9CAF0475D68EAD;
IL2CPP_EXTERN_C String_t* _stringLiteral2ECA7405B2C7C57064207C5E3B40B00021FF79A4;
IL2CPP_EXTERN_C String_t* _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D;
IL2CPP_EXTERN_C String_t* _stringLiteral83C7939D8DE0BBCA7545E4CE6E5443A6E69CA68C;
IL2CPP_EXTERN_C String_t* _stringLiteral8794A38DD1DBDE0D539E41A3D4F13B4F180F3B2B;
IL2CPP_EXTERN_C String_t* _stringLiteralC8B4992E5FEE587EA2295F1BD0BFB52535A5F706;
IL2CPP_EXTERN_C String_t* _stringLiteralDD5FCBAD6441ED902E09232588D1B0F6D723A233;
IL2CPP_EXTERN_C String_t* _stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC;
IL2CPP_EXTERN_C String_t* _stringLiteralFC92930F0D90EC784C2096A405253957D21033B9;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentsInParent_TisUIDocument_t008D811860584F44CEBB5AF575856E6EFCEBECC4_mE1D665EAD1815289915F3D1F6F6B951E91315358_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m27B05A7331A3E31017AE91D26A2EB7DDE63D7345_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m77A2C5259BC7AB16D78F6A2C6016EF4A282DF2CD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mAA7E17AE272D3F9A8750CCD6A77A1BC9BBB0AE3C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mBDF6727B42AB11D52CE47931EB4F4A17CE10238D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m99A2AC07EE601CFEC0FD97B320A0D7C881C8756B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mE640EE863C1AD4E7A6879F7C8172A3D0FF659024_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventBase_1_TypeId_mB167B9ECACCBAA359CD4FD47EB2FBE2D8FD925BF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventBase_1_TypeId_mB5697953131C722ED7EDC58AA9B32201EFA59562_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventBase_1_TypeId_mC91C0B8412E545DFDE7E320C54E7DA79622BEF7A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_1_Invoke_mA1E7E3771320CD31CD9816E3851252CE41DA2732_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyboardEventBase_1_get_character_m57DE81FFE9FD1B11F2D60C58C1D50919BD145778_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyboardEventBase_1_get_shiftKey_m1B4F3E9879A0AC60E712C6EA422C8790FEFFB863_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_AddRange_m82A20E629A172A44F1CC662F4F8EDDA523E04799_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m67147312F95905A091065C08C81E011F9AA6A8E5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m969E90236937A5E99BDF4CF9E995CAA0193C38E9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mBF8AA31F6AC6772502C89F036F15FDF85F89AB02_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m301D9E8B4A430B934D508A5C7055E605EA5B3B50_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Insert_m742EF6D9F0BC42614F983C7E1F6690E5698A17A3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_mE74BBD3C7F21D2E5560E4EA3BD33AD4DF89BFBDB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Reverse_m37775958EAD7F2378791BFB588459532DA7459ED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_mDEFFC768D9AAD376D27FC0FC1F7B57EE2E93479F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m9EEBC95380D8278BC7E7959E9B314087DB147FCA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mB8A598685BD0AE92EC90E211CDCC5C6D7F1554A3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mE9D25A015988790C35586B63300BF69CE2FD7BE1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m46E859E3CE7BCCF1CABF62E178A7A6AD5BD1164B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m9E9C3E57AC2ECB01351EE8C0FB88DA8919CF98F7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PanelSettings_OnTextSettingsImported_mE749AD645B65731A98C524CF1CBFC1B64E0F2A93_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PanelSettings_set_targetDisplay_m0E92DC714A9F7E96ACD24540F0F843785444E151_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RuntimePanel_Create_m1571E8867FCEAE5F0E0FC8BCFF4B0A1D4BB9A8C3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SortedDictionary_2_get_Values_m279548414E7A8F50A7AD40FBB6C1DE584B70038F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueCollection_GetEnumerator_mDFCF542E546DC04C52667586BFE53E5FBE64D909_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DisplayU5BU5D_t3330058639C7A70B7B1FE7B4325E2B5D600CF4A6;
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct UIDocumentU5BU5D_t07C874E2F207A4181C854213623A407A46E7372B;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t54901166000B6D301E274562E9E5C6D884067008 
{
public:

public:
};


// System.Object


// System.Collections.Generic.List`1<UnityEngine.UIElements.IEventDispatchingStrategy>
struct List_1_tDB4893D11F8F1E02AB6C87CD8B761DC956B02D32  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	IEventDispatchingStrategyU5BU5D_tD5AD23CA9015E352F0B63E0C716DEA684584AE10* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tDB4893D11F8F1E02AB6C87CD8B761DC956B02D32, ____items_1)); }
	inline IEventDispatchingStrategyU5BU5D_tD5AD23CA9015E352F0B63E0C716DEA684584AE10* get__items_1() const { return ____items_1; }
	inline IEventDispatchingStrategyU5BU5D_tD5AD23CA9015E352F0B63E0C716DEA684584AE10** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(IEventDispatchingStrategyU5BU5D_tD5AD23CA9015E352F0B63E0C716DEA684584AE10* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tDB4893D11F8F1E02AB6C87CD8B761DC956B02D32, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tDB4893D11F8F1E02AB6C87CD8B761DC956B02D32, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tDB4893D11F8F1E02AB6C87CD8B761DC956B02D32, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tDB4893D11F8F1E02AB6C87CD8B761DC956B02D32_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	IEventDispatchingStrategyU5BU5D_tD5AD23CA9015E352F0B63E0C716DEA684584AE10* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tDB4893D11F8F1E02AB6C87CD8B761DC956B02D32_StaticFields, ____emptyArray_5)); }
	inline IEventDispatchingStrategyU5BU5D_tD5AD23CA9015E352F0B63E0C716DEA684584AE10* get__emptyArray_5() const { return ____emptyArray_5; }
	inline IEventDispatchingStrategyU5BU5D_tD5AD23CA9015E352F0B63E0C716DEA684584AE10** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(IEventDispatchingStrategyU5BU5D_tD5AD23CA9015E352F0B63E0C716DEA684584AE10* value)
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


// System.Collections.Generic.List`1<UnityEngine.UIElements.UIDocument>
struct List_1_tAB773DE00C0DE14686075955D7FB71ACD6194509  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	UIDocumentU5BU5D_t07C874E2F207A4181C854213623A407A46E7372B* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tAB773DE00C0DE14686075955D7FB71ACD6194509, ____items_1)); }
	inline UIDocumentU5BU5D_t07C874E2F207A4181C854213623A407A46E7372B* get__items_1() const { return ____items_1; }
	inline UIDocumentU5BU5D_t07C874E2F207A4181C854213623A407A46E7372B** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(UIDocumentU5BU5D_t07C874E2F207A4181C854213623A407A46E7372B* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tAB773DE00C0DE14686075955D7FB71ACD6194509, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tAB773DE00C0DE14686075955D7FB71ACD6194509, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tAB773DE00C0DE14686075955D7FB71ACD6194509, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tAB773DE00C0DE14686075955D7FB71ACD6194509_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	UIDocumentU5BU5D_t07C874E2F207A4181C854213623A407A46E7372B* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tAB773DE00C0DE14686075955D7FB71ACD6194509_StaticFields, ____emptyArray_5)); }
	inline UIDocumentU5BU5D_t07C874E2F207A4181C854213623A407A46E7372B* get__emptyArray_5() const { return ____emptyArray_5; }
	inline UIDocumentU5BU5D_t07C874E2F207A4181C854213623A407A46E7372B** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(UIDocumentU5BU5D_t07C874E2F207A4181C854213623A407A46E7372B* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.SortedDictionary`2<UnityEngine.UIElements.UIDocumentHierarchicalIndex,UnityEngine.UIElements.UIDocument>
struct SortedDictionary_2_tD6FDE7062F18D6B2948C91C6E3E4B6AB7018E0BB  : public RuntimeObject
{
public:
	// System.Collections.Generic.SortedDictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.SortedDictionary`2::_keys
	KeyCollection_t28CB4CF903A73E4A5E8CD4AE2C0088C258FB1619 * ____keys_0;
	// System.Collections.Generic.SortedDictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.SortedDictionary`2::_values
	ValueCollection_t4350A1F9A865F1082C3579EA46CDE57E4827D2D0 * ____values_1;
	// System.Collections.Generic.TreeSet`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.SortedDictionary`2::_set
	TreeSet_1_t68748C0CB83A6BC2120B1C5347DB0D3204CEB686 * ____set_2;

public:
	inline static int32_t get_offset_of__keys_0() { return static_cast<int32_t>(offsetof(SortedDictionary_2_tD6FDE7062F18D6B2948C91C6E3E4B6AB7018E0BB, ____keys_0)); }
	inline KeyCollection_t28CB4CF903A73E4A5E8CD4AE2C0088C258FB1619 * get__keys_0() const { return ____keys_0; }
	inline KeyCollection_t28CB4CF903A73E4A5E8CD4AE2C0088C258FB1619 ** get_address_of__keys_0() { return &____keys_0; }
	inline void set__keys_0(KeyCollection_t28CB4CF903A73E4A5E8CD4AE2C0088C258FB1619 * value)
	{
		____keys_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____keys_0), (void*)value);
	}

	inline static int32_t get_offset_of__values_1() { return static_cast<int32_t>(offsetof(SortedDictionary_2_tD6FDE7062F18D6B2948C91C6E3E4B6AB7018E0BB, ____values_1)); }
	inline ValueCollection_t4350A1F9A865F1082C3579EA46CDE57E4827D2D0 * get__values_1() const { return ____values_1; }
	inline ValueCollection_t4350A1F9A865F1082C3579EA46CDE57E4827D2D0 ** get_address_of__values_1() { return &____values_1; }
	inline void set__values_1(ValueCollection_t4350A1F9A865F1082C3579EA46CDE57E4827D2D0 * value)
	{
		____values_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____values_1), (void*)value);
	}

	inline static int32_t get_offset_of__set_2() { return static_cast<int32_t>(offsetof(SortedDictionary_2_tD6FDE7062F18D6B2948C91C6E3E4B6AB7018E0BB, ____set_2)); }
	inline TreeSet_1_t68748C0CB83A6BC2120B1C5347DB0D3204CEB686 * get__set_2() const { return ____set_2; }
	inline TreeSet_1_t68748C0CB83A6BC2120B1C5347DB0D3204CEB686 ** get_address_of__set_2() { return &____set_2; }
	inline void set__set_2(TreeSet_1_t68748C0CB83A6BC2120B1C5347DB0D3204CEB686 * value)
	{
		____set_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____set_2), (void*)value);
	}
};


// System.Collections.Generic.SortedDictionary`2/ValueCollection<UnityEngine.UIElements.UIDocumentHierarchicalIndex,UnityEngine.UIElements.UIDocument>
struct ValueCollection_t4350A1F9A865F1082C3579EA46CDE57E4827D2D0  : public RuntimeObject
{
public:
	// System.Collections.Generic.SortedDictionary`2<TKey,TValue> System.Collections.Generic.SortedDictionary`2/ValueCollection::_dictionary
	SortedDictionary_2_tD6FDE7062F18D6B2948C91C6E3E4B6AB7018E0BB * ____dictionary_0;

public:
	inline static int32_t get_offset_of__dictionary_0() { return static_cast<int32_t>(offsetof(ValueCollection_t4350A1F9A865F1082C3579EA46CDE57E4827D2D0, ____dictionary_0)); }
	inline SortedDictionary_2_tD6FDE7062F18D6B2948C91C6E3E4B6AB7018E0BB * get__dictionary_0() const { return ____dictionary_0; }
	inline SortedDictionary_2_tD6FDE7062F18D6B2948C91C6E3E4B6AB7018E0BB ** get_address_of__dictionary_0() { return &____dictionary_0; }
	inline void set__dictionary_0(SortedDictionary_2_tD6FDE7062F18D6B2948C91C6E3E4B6AB7018E0BB * value)
	{
		____dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dictionary_0), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// UnityEngine.UIElements.AtlasBase
struct AtlasBase_t04E16651AFF344EDD21EB14F2E9CF0B76DACA9E3  : public RuntimeObject
{
public:
	// UnityEngine.UIElements.TextureRegistry UnityEngine.UIElements.AtlasBase::textureRegistry
	TextureRegistry_t1817572B284B75359FE2FD6E59F960BCFCA74845 * ___textureRegistry_0;

public:
	inline static int32_t get_offset_of_textureRegistry_0() { return static_cast<int32_t>(offsetof(AtlasBase_t04E16651AFF344EDD21EB14F2E9CF0B76DACA9E3, ___textureRegistry_0)); }
	inline TextureRegistry_t1817572B284B75359FE2FD6E59F960BCFCA74845 * get_textureRegistry_0() const { return ___textureRegistry_0; }
	inline TextureRegistry_t1817572B284B75359FE2FD6E59F960BCFCA74845 ** get_address_of_textureRegistry_0() { return &___textureRegistry_0; }
	inline void set_textureRegistry_0(TextureRegistry_t1817572B284B75359FE2FD6E59F960BCFCA74845 * value)
	{
		___textureRegistry_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textureRegistry_0), (void*)value);
	}
};


// UnityEngine.UIElements.CallbackEventHandler
struct CallbackEventHandler_t7AF609ED7BD54F43EA0D22897698207A508F380E  : public RuntimeObject
{
public:
	// UnityEngine.UIElements.EventCallbackRegistry UnityEngine.UIElements.CallbackEventHandler::m_CallbackRegistry
	EventCallbackRegistry_tC9477A9EF44640BD0FB0D79D7DCF715A8E226DA2 * ___m_CallbackRegistry_0;

public:
	inline static int32_t get_offset_of_m_CallbackRegistry_0() { return static_cast<int32_t>(offsetof(CallbackEventHandler_t7AF609ED7BD54F43EA0D22897698207A508F380E, ___m_CallbackRegistry_0)); }
	inline EventCallbackRegistry_tC9477A9EF44640BD0FB0D79D7DCF715A8E226DA2 * get_m_CallbackRegistry_0() const { return ___m_CallbackRegistry_0; }
	inline EventCallbackRegistry_tC9477A9EF44640BD0FB0D79D7DCF715A8E226DA2 ** get_address_of_m_CallbackRegistry_0() { return &___m_CallbackRegistry_0; }
	inline void set_m_CallbackRegistry_0(EventCallbackRegistry_tC9477A9EF44640BD0FB0D79D7DCF715A8E226DA2 * value)
	{
		___m_CallbackRegistry_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CallbackRegistry_0), (void*)value);
	}
};


// UnityEngine.UIElements.DefaultDispatchingStrategy
struct DefaultDispatchingStrategy_t7A05CA05D94BD04D7AEDE160F48422576C2E55A5  : public RuntimeObject
{
public:

public:
};


// UnityEngine.UIElements.EventDispatcher
struct EventDispatcher_t86D9B0A3CA4441F30AA1A940D0D50F9AEC9912F2  : public RuntimeObject
{
public:
	// UnityEngine.UIElements.ClickDetector UnityEngine.UIElements.EventDispatcher::m_ClickDetector
	ClickDetector_t49683B5220118314737CFDE86D066BB5A90F5BBB * ___m_ClickDetector_0;
	// System.Collections.Generic.List`1<UnityEngine.UIElements.IEventDispatchingStrategy> UnityEngine.UIElements.EventDispatcher::m_DispatchingStrategies
	List_1_tDB4893D11F8F1E02AB6C87CD8B761DC956B02D32 * ___m_DispatchingStrategies_1;
	// System.Collections.Generic.Queue`1<UnityEngine.UIElements.EventDispatcher/EventRecord> UnityEngine.UIElements.EventDispatcher::m_Queue
	Queue_1_t9846227641223AEA10F5321CB4AE7B2A5DB44AEA * ___m_Queue_3;
	// UnityEngine.UIElements.PointerDispatchState UnityEngine.UIElements.EventDispatcher::<pointerState>k__BackingField
	PointerDispatchState_t8412E2316FACC4F8F4EC0CE7CFE35636EF63912A * ___U3CpointerStateU3Ek__BackingField_4;
	// System.UInt32 UnityEngine.UIElements.EventDispatcher::m_GateCount
	uint32_t ___m_GateCount_5;
	// System.Collections.Generic.Stack`1<UnityEngine.UIElements.EventDispatcher/DispatchContext> UnityEngine.UIElements.EventDispatcher::m_DispatchContexts
	Stack_1_t45B9C1D269F88DFCEC0C89DFBD8CFEFF68565E18 * ___m_DispatchContexts_6;
	// System.Boolean UnityEngine.UIElements.EventDispatcher::m_Immediate
	bool ___m_Immediate_8;
	// System.Boolean UnityEngine.UIElements.EventDispatcher::<processingEvents>k__BackingField
	bool ___U3CprocessingEventsU3Ek__BackingField_9;

public:
	inline static int32_t get_offset_of_m_ClickDetector_0() { return static_cast<int32_t>(offsetof(EventDispatcher_t86D9B0A3CA4441F30AA1A940D0D50F9AEC9912F2, ___m_ClickDetector_0)); }
	inline ClickDetector_t49683B5220118314737CFDE86D066BB5A90F5BBB * get_m_ClickDetector_0() const { return ___m_ClickDetector_0; }
	inline ClickDetector_t49683B5220118314737CFDE86D066BB5A90F5BBB ** get_address_of_m_ClickDetector_0() { return &___m_ClickDetector_0; }
	inline void set_m_ClickDetector_0(ClickDetector_t49683B5220118314737CFDE86D066BB5A90F5BBB * value)
	{
		___m_ClickDetector_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ClickDetector_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_DispatchingStrategies_1() { return static_cast<int32_t>(offsetof(EventDispatcher_t86D9B0A3CA4441F30AA1A940D0D50F9AEC9912F2, ___m_DispatchingStrategies_1)); }
	inline List_1_tDB4893D11F8F1E02AB6C87CD8B761DC956B02D32 * get_m_DispatchingStrategies_1() const { return ___m_DispatchingStrategies_1; }
	inline List_1_tDB4893D11F8F1E02AB6C87CD8B761DC956B02D32 ** get_address_of_m_DispatchingStrategies_1() { return &___m_DispatchingStrategies_1; }
	inline void set_m_DispatchingStrategies_1(List_1_tDB4893D11F8F1E02AB6C87CD8B761DC956B02D32 * value)
	{
		___m_DispatchingStrategies_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DispatchingStrategies_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_Queue_3() { return static_cast<int32_t>(offsetof(EventDispatcher_t86D9B0A3CA4441F30AA1A940D0D50F9AEC9912F2, ___m_Queue_3)); }
	inline Queue_1_t9846227641223AEA10F5321CB4AE7B2A5DB44AEA * get_m_Queue_3() const { return ___m_Queue_3; }
	inline Queue_1_t9846227641223AEA10F5321CB4AE7B2A5DB44AEA ** get_address_of_m_Queue_3() { return &___m_Queue_3; }
	inline void set_m_Queue_3(Queue_1_t9846227641223AEA10F5321CB4AE7B2A5DB44AEA * value)
	{
		___m_Queue_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Queue_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpointerStateU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(EventDispatcher_t86D9B0A3CA4441F30AA1A940D0D50F9AEC9912F2, ___U3CpointerStateU3Ek__BackingField_4)); }
	inline PointerDispatchState_t8412E2316FACC4F8F4EC0CE7CFE35636EF63912A * get_U3CpointerStateU3Ek__BackingField_4() const { return ___U3CpointerStateU3Ek__BackingField_4; }
	inline PointerDispatchState_t8412E2316FACC4F8F4EC0CE7CFE35636EF63912A ** get_address_of_U3CpointerStateU3Ek__BackingField_4() { return &___U3CpointerStateU3Ek__BackingField_4; }
	inline void set_U3CpointerStateU3Ek__BackingField_4(PointerDispatchState_t8412E2316FACC4F8F4EC0CE7CFE35636EF63912A * value)
	{
		___U3CpointerStateU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpointerStateU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_GateCount_5() { return static_cast<int32_t>(offsetof(EventDispatcher_t86D9B0A3CA4441F30AA1A940D0D50F9AEC9912F2, ___m_GateCount_5)); }
	inline uint32_t get_m_GateCount_5() const { return ___m_GateCount_5; }
	inline uint32_t* get_address_of_m_GateCount_5() { return &___m_GateCount_5; }
	inline void set_m_GateCount_5(uint32_t value)
	{
		___m_GateCount_5 = value;
	}

	inline static int32_t get_offset_of_m_DispatchContexts_6() { return static_cast<int32_t>(offsetof(EventDispatcher_t86D9B0A3CA4441F30AA1A940D0D50F9AEC9912F2, ___m_DispatchContexts_6)); }
	inline Stack_1_t45B9C1D269F88DFCEC0C89DFBD8CFEFF68565E18 * get_m_DispatchContexts_6() const { return ___m_DispatchContexts_6; }
	inline Stack_1_t45B9C1D269F88DFCEC0C89DFBD8CFEFF68565E18 ** get_address_of_m_DispatchContexts_6() { return &___m_DispatchContexts_6; }
	inline void set_m_DispatchContexts_6(Stack_1_t45B9C1D269F88DFCEC0C89DFBD8CFEFF68565E18 * value)
	{
		___m_DispatchContexts_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DispatchContexts_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Immediate_8() { return static_cast<int32_t>(offsetof(EventDispatcher_t86D9B0A3CA4441F30AA1A940D0D50F9AEC9912F2, ___m_Immediate_8)); }
	inline bool get_m_Immediate_8() const { return ___m_Immediate_8; }
	inline bool* get_address_of_m_Immediate_8() { return &___m_Immediate_8; }
	inline void set_m_Immediate_8(bool value)
	{
		___m_Immediate_8 = value;
	}

	inline static int32_t get_offset_of_U3CprocessingEventsU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(EventDispatcher_t86D9B0A3CA4441F30AA1A940D0D50F9AEC9912F2, ___U3CprocessingEventsU3Ek__BackingField_9)); }
	inline bool get_U3CprocessingEventsU3Ek__BackingField_9() const { return ___U3CprocessingEventsU3Ek__BackingField_9; }
	inline bool* get_address_of_U3CprocessingEventsU3Ek__BackingField_9() { return &___U3CprocessingEventsU3Ek__BackingField_9; }
	inline void set_U3CprocessingEventsU3Ek__BackingField_9(bool value)
	{
		___U3CprocessingEventsU3Ek__BackingField_9 = value;
	}
};

struct EventDispatcher_t86D9B0A3CA4441F30AA1A940D0D50F9AEC9912F2_StaticFields
{
public:
	// UnityEngine.UIElements.ObjectPool`1<System.Collections.Generic.Queue`1<UnityEngine.UIElements.EventDispatcher/EventRecord>> UnityEngine.UIElements.EventDispatcher::k_EventQueuePool
	ObjectPool_1_t86AF8F0ECC9F289DD57826C7D447CAAD3184B34B * ___k_EventQueuePool_2;
	// UnityEngine.UIElements.IEventDispatchingStrategy[] UnityEngine.UIElements.EventDispatcher::s_EditorStrategies
	IEventDispatchingStrategyU5BU5D_tD5AD23CA9015E352F0B63E0C716DEA684584AE10* ___s_EditorStrategies_7;

public:
	inline static int32_t get_offset_of_k_EventQueuePool_2() { return static_cast<int32_t>(offsetof(EventDispatcher_t86D9B0A3CA4441F30AA1A940D0D50F9AEC9912F2_StaticFields, ___k_EventQueuePool_2)); }
	inline ObjectPool_1_t86AF8F0ECC9F289DD57826C7D447CAAD3184B34B * get_k_EventQueuePool_2() const { return ___k_EventQueuePool_2; }
	inline ObjectPool_1_t86AF8F0ECC9F289DD57826C7D447CAAD3184B34B ** get_address_of_k_EventQueuePool_2() { return &___k_EventQueuePool_2; }
	inline void set_k_EventQueuePool_2(ObjectPool_1_t86AF8F0ECC9F289DD57826C7D447CAAD3184B34B * value)
	{
		___k_EventQueuePool_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___k_EventQueuePool_2), (void*)value);
	}

	inline static int32_t get_offset_of_s_EditorStrategies_7() { return static_cast<int32_t>(offsetof(EventDispatcher_t86D9B0A3CA4441F30AA1A940D0D50F9AEC9912F2_StaticFields, ___s_EditorStrategies_7)); }
	inline IEventDispatchingStrategyU5BU5D_tD5AD23CA9015E352F0B63E0C716DEA684584AE10* get_s_EditorStrategies_7() const { return ___s_EditorStrategies_7; }
	inline IEventDispatchingStrategyU5BU5D_tD5AD23CA9015E352F0B63E0C716DEA684584AE10** get_address_of_s_EditorStrategies_7() { return &___s_EditorStrategies_7; }
	inline void set_s_EditorStrategies_7(IEventDispatchingStrategyU5BU5D_tD5AD23CA9015E352F0B63E0C716DEA684584AE10* value)
	{
		___s_EditorStrategies_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EditorStrategies_7), (void*)value);
	}
};


// UnityEngine.UIElements.FocusChangeDirection
struct FocusChangeDirection_t7E59BE4DF7F0B4024128F306581D21C2C5E02CF1  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.UIElements.FocusChangeDirection::m_Value
	int32_t ___m_Value_3;

public:
	inline static int32_t get_offset_of_m_Value_3() { return static_cast<int32_t>(offsetof(FocusChangeDirection_t7E59BE4DF7F0B4024128F306581D21C2C5E02CF1, ___m_Value_3)); }
	inline int32_t get_m_Value_3() const { return ___m_Value_3; }
	inline int32_t* get_address_of_m_Value_3() { return &___m_Value_3; }
	inline void set_m_Value_3(int32_t value)
	{
		___m_Value_3 = value;
	}
};

struct FocusChangeDirection_t7E59BE4DF7F0B4024128F306581D21C2C5E02CF1_StaticFields
{
public:
	// UnityEngine.UIElements.FocusChangeDirection UnityEngine.UIElements.FocusChangeDirection::<unspecified>k__BackingField
	FocusChangeDirection_t7E59BE4DF7F0B4024128F306581D21C2C5E02CF1 * ___U3CunspecifiedU3Ek__BackingField_0;
	// UnityEngine.UIElements.FocusChangeDirection UnityEngine.UIElements.FocusChangeDirection::<none>k__BackingField
	FocusChangeDirection_t7E59BE4DF7F0B4024128F306581D21C2C5E02CF1 * ___U3CnoneU3Ek__BackingField_1;
	// UnityEngine.UIElements.FocusChangeDirection UnityEngine.UIElements.FocusChangeDirection::<lastValue>k__BackingField
	FocusChangeDirection_t7E59BE4DF7F0B4024128F306581D21C2C5E02CF1 * ___U3ClastValueU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CunspecifiedU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(FocusChangeDirection_t7E59BE4DF7F0B4024128F306581D21C2C5E02CF1_StaticFields, ___U3CunspecifiedU3Ek__BackingField_0)); }
	inline FocusChangeDirection_t7E59BE4DF7F0B4024128F306581D21C2C5E02CF1 * get_U3CunspecifiedU3Ek__BackingField_0() const { return ___U3CunspecifiedU3Ek__BackingField_0; }
	inline FocusChangeDirection_t7E59BE4DF7F0B4024128F306581D21C2C5E02CF1 ** get_address_of_U3CunspecifiedU3Ek__BackingField_0() { return &___U3CunspecifiedU3Ek__BackingField_0; }
	inline void set_U3CunspecifiedU3Ek__BackingField_0(FocusChangeDirection_t7E59BE4DF7F0B4024128F306581D21C2C5E02CF1 * value)
	{
		___U3CunspecifiedU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CunspecifiedU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CnoneU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(FocusChangeDirection_t7E59BE4DF7F0B4024128F306581D21C2C5E02CF1_StaticFields, ___U3CnoneU3Ek__BackingField_1)); }
	inline FocusChangeDirection_t7E59BE4DF7F0B4024128F306581D21C2C5E02CF1 * get_U3CnoneU3Ek__BackingField_1() const { return ___U3CnoneU3Ek__BackingField_1; }
	inline FocusChangeDirection_t7E59BE4DF7F0B4024128F306581D21C2C5E02CF1 ** get_address_of_U3CnoneU3Ek__BackingField_1() { return &___U3CnoneU3Ek__BackingField_1; }
	inline void set_U3CnoneU3Ek__BackingField_1(FocusChangeDirection_t7E59BE4DF7F0B4024128F306581D21C2C5E02CF1 * value)
	{
		___U3CnoneU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnoneU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3ClastValueU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(FocusChangeDirection_t7E59BE4DF7F0B4024128F306581D21C2C5E02CF1_StaticFields, ___U3ClastValueU3Ek__BackingField_2)); }
	inline FocusChangeDirection_t7E59BE4DF7F0B4024128F306581D21C2C5E02CF1 * get_U3ClastValueU3Ek__BackingField_2() const { return ___U3ClastValueU3Ek__BackingField_2; }
	inline FocusChangeDirection_t7E59BE4DF7F0B4024128F306581D21C2C5E02CF1 ** get_address_of_U3ClastValueU3Ek__BackingField_2() { return &___U3ClastValueU3Ek__BackingField_2; }
	inline void set_U3ClastValueU3Ek__BackingField_2(FocusChangeDirection_t7E59BE4DF7F0B4024128F306581D21C2C5E02CF1 * value)
	{
		___U3ClastValueU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3ClastValueU3Ek__BackingField_2), (void*)value);
	}
};


// UnityEngine.UIElements.FocusController
struct FocusController_t0EE43A2ABFA352E752E8DA2B6D17FC322FC59764  : public RuntimeObject
{
public:
	// UnityEngine.UIElements.IFocusRing UnityEngine.UIElements.FocusController::<focusRing>k__BackingField
	RuntimeObject* ___U3CfocusRingU3Ek__BackingField_0;
	// System.Collections.Generic.List`1<UnityEngine.UIElements.FocusController/FocusedElement> UnityEngine.UIElements.FocusController::m_FocusedElements
	List_1_t01A91F79EEF1E6714C60371B363E291AA28D2AF3 * ___m_FocusedElements_1;
	// UnityEngine.UIElements.Focusable UnityEngine.UIElements.FocusController::m_LastFocusedElement
	Focusable_tF2E839AB6DBE413F04FC62347D7074D7377FD1E1 * ___m_LastFocusedElement_2;
	// UnityEngine.UIElements.Focusable UnityEngine.UIElements.FocusController::m_LastPendingFocusedElement
	Focusable_tF2E839AB6DBE413F04FC62347D7074D7377FD1E1 * ___m_LastPendingFocusedElement_3;
	// System.Int32 UnityEngine.UIElements.FocusController::m_PendingFocusCount
	int32_t ___m_PendingFocusCount_4;
	// System.Int32 UnityEngine.UIElements.FocusController::<imguiKeyboardControl>k__BackingField
	int32_t ___U3CimguiKeyboardControlU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_U3CfocusRingU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(FocusController_t0EE43A2ABFA352E752E8DA2B6D17FC322FC59764, ___U3CfocusRingU3Ek__BackingField_0)); }
	inline RuntimeObject* get_U3CfocusRingU3Ek__BackingField_0() const { return ___U3CfocusRingU3Ek__BackingField_0; }
	inline RuntimeObject** get_address_of_U3CfocusRingU3Ek__BackingField_0() { return &___U3CfocusRingU3Ek__BackingField_0; }
	inline void set_U3CfocusRingU3Ek__BackingField_0(RuntimeObject* value)
	{
		___U3CfocusRingU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CfocusRingU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_FocusedElements_1() { return static_cast<int32_t>(offsetof(FocusController_t0EE43A2ABFA352E752E8DA2B6D17FC322FC59764, ___m_FocusedElements_1)); }
	inline List_1_t01A91F79EEF1E6714C60371B363E291AA28D2AF3 * get_m_FocusedElements_1() const { return ___m_FocusedElements_1; }
	inline List_1_t01A91F79EEF1E6714C60371B363E291AA28D2AF3 ** get_address_of_m_FocusedElements_1() { return &___m_FocusedElements_1; }
	inline void set_m_FocusedElements_1(List_1_t01A91F79EEF1E6714C60371B363E291AA28D2AF3 * value)
	{
		___m_FocusedElements_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FocusedElements_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_LastFocusedElement_2() { return static_cast<int32_t>(offsetof(FocusController_t0EE43A2ABFA352E752E8DA2B6D17FC322FC59764, ___m_LastFocusedElement_2)); }
	inline Focusable_tF2E839AB6DBE413F04FC62347D7074D7377FD1E1 * get_m_LastFocusedElement_2() const { return ___m_LastFocusedElement_2; }
	inline Focusable_tF2E839AB6DBE413F04FC62347D7074D7377FD1E1 ** get_address_of_m_LastFocusedElement_2() { return &___m_LastFocusedElement_2; }
	inline void set_m_LastFocusedElement_2(Focusable_tF2E839AB6DBE413F04FC62347D7074D7377FD1E1 * value)
	{
		___m_LastFocusedElement_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LastFocusedElement_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_LastPendingFocusedElement_3() { return static_cast<int32_t>(offsetof(FocusController_t0EE43A2ABFA352E752E8DA2B6D17FC322FC59764, ___m_LastPendingFocusedElement_3)); }
	inline Focusable_tF2E839AB6DBE413F04FC62347D7074D7377FD1E1 * get_m_LastPendingFocusedElement_3() const { return ___m_LastPendingFocusedElement_3; }
	inline Focusable_tF2E839AB6DBE413F04FC62347D7074D7377FD1E1 ** get_address_of_m_LastPendingFocusedElement_3() { return &___m_LastPendingFocusedElement_3; }
	inline void set_m_LastPendingFocusedElement_3(Focusable_tF2E839AB6DBE413F04FC62347D7074D7377FD1E1 * value)
	{
		___m_LastPendingFocusedElement_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LastPendingFocusedElement_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_PendingFocusCount_4() { return static_cast<int32_t>(offsetof(FocusController_t0EE43A2ABFA352E752E8DA2B6D17FC322FC59764, ___m_PendingFocusCount_4)); }
	inline int32_t get_m_PendingFocusCount_4() const { return ___m_PendingFocusCount_4; }
	inline int32_t* get_address_of_m_PendingFocusCount_4() { return &___m_PendingFocusCount_4; }
	inline void set_m_PendingFocusCount_4(int32_t value)
	{
		___m_PendingFocusCount_4 = value;
	}

	inline static int32_t get_offset_of_U3CimguiKeyboardControlU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(FocusController_t0EE43A2ABFA352E752E8DA2B6D17FC322FC59764, ___U3CimguiKeyboardControlU3Ek__BackingField_5)); }
	inline int32_t get_U3CimguiKeyboardControlU3Ek__BackingField_5() const { return ___U3CimguiKeyboardControlU3Ek__BackingField_5; }
	inline int32_t* get_address_of_U3CimguiKeyboardControlU3Ek__BackingField_5() { return &___U3CimguiKeyboardControlU3Ek__BackingField_5; }
	inline void set_U3CimguiKeyboardControlU3Ek__BackingField_5(int32_t value)
	{
		___U3CimguiKeyboardControlU3Ek__BackingField_5 = value;
	}
};


// UnityEngine.UIElements.KeyboardEventDispatchingStrategy
struct KeyboardEventDispatchingStrategy_t80BEA7051056C80A3C2B08B50A184B8B6D39FDE0  : public RuntimeObject
{
public:

public:
};


// UnityEngine.UIElements.MouseEventDispatchingStrategy
struct MouseEventDispatchingStrategy_t1FA26BD52FADFAABD46BD3A9B16F23DAB22E4302  : public RuntimeObject
{
public:

public:
};


// UnityEngine.UIElements.NavigateFocusRing
struct NavigateFocusRing_t44CF1D05515ADB539414B52A64A7602739E6B826  : public RuntimeObject
{
public:
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.NavigateFocusRing::m_Root
	VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * ___m_Root_6;
	// UnityEngine.UIElements.VisualElementFocusRing UnityEngine.UIElements.NavigateFocusRing::m_Ring
	VisualElementFocusRing_t9D8C7E1CD5CAD2B6220414541CB498B5FAB4946B * ___m_Ring_7;

public:
	inline static int32_t get_offset_of_m_Root_6() { return static_cast<int32_t>(offsetof(NavigateFocusRing_t44CF1D05515ADB539414B52A64A7602739E6B826, ___m_Root_6)); }
	inline VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * get_m_Root_6() const { return ___m_Root_6; }
	inline VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 ** get_address_of_m_Root_6() { return &___m_Root_6; }
	inline void set_m_Root_6(VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * value)
	{
		___m_Root_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Root_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Ring_7() { return static_cast<int32_t>(offsetof(NavigateFocusRing_t44CF1D05515ADB539414B52A64A7602739E6B826, ___m_Ring_7)); }
	inline VisualElementFocusRing_t9D8C7E1CD5CAD2B6220414541CB498B5FAB4946B * get_m_Ring_7() const { return ___m_Ring_7; }
	inline VisualElementFocusRing_t9D8C7E1CD5CAD2B6220414541CB498B5FAB4946B ** get_address_of_m_Ring_7() { return &___m_Ring_7; }
	inline void set_m_Ring_7(VisualElementFocusRing_t9D8C7E1CD5CAD2B6220414541CB498B5FAB4946B * value)
	{
		___m_Ring_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Ring_7), (void*)value);
	}
};

struct NavigateFocusRing_t44CF1D05515ADB539414B52A64A7602739E6B826_StaticFields
{
public:
	// UnityEngine.UIElements.NavigateFocusRing/ChangeDirection UnityEngine.UIElements.NavigateFocusRing::Left
	ChangeDirection_t34BA68392D0BB026E61B81B65AD1B09CF9DB4D27 * ___Left_0;
	// UnityEngine.UIElements.NavigateFocusRing/ChangeDirection UnityEngine.UIElements.NavigateFocusRing::Right
	ChangeDirection_t34BA68392D0BB026E61B81B65AD1B09CF9DB4D27 * ___Right_1;
	// UnityEngine.UIElements.NavigateFocusRing/ChangeDirection UnityEngine.UIElements.NavigateFocusRing::Up
	ChangeDirection_t34BA68392D0BB026E61B81B65AD1B09CF9DB4D27 * ___Up_2;
	// UnityEngine.UIElements.NavigateFocusRing/ChangeDirection UnityEngine.UIElements.NavigateFocusRing::Down
	ChangeDirection_t34BA68392D0BB026E61B81B65AD1B09CF9DB4D27 * ___Down_3;
	// UnityEngine.UIElements.NavigateFocusRing/ChangeDirection UnityEngine.UIElements.NavigateFocusRing::Next
	ChangeDirection_t34BA68392D0BB026E61B81B65AD1B09CF9DB4D27 * ___Next_4;
	// UnityEngine.UIElements.NavigateFocusRing/ChangeDirection UnityEngine.UIElements.NavigateFocusRing::Previous
	ChangeDirection_t34BA68392D0BB026E61B81B65AD1B09CF9DB4D27 * ___Previous_5;

public:
	inline static int32_t get_offset_of_Left_0() { return static_cast<int32_t>(offsetof(NavigateFocusRing_t44CF1D05515ADB539414B52A64A7602739E6B826_StaticFields, ___Left_0)); }
	inline ChangeDirection_t34BA68392D0BB026E61B81B65AD1B09CF9DB4D27 * get_Left_0() const { return ___Left_0; }
	inline ChangeDirection_t34BA68392D0BB026E61B81B65AD1B09CF9DB4D27 ** get_address_of_Left_0() { return &___Left_0; }
	inline void set_Left_0(ChangeDirection_t34BA68392D0BB026E61B81B65AD1B09CF9DB4D27 * value)
	{
		___Left_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Left_0), (void*)value);
	}

	inline static int32_t get_offset_of_Right_1() { return static_cast<int32_t>(offsetof(NavigateFocusRing_t44CF1D05515ADB539414B52A64A7602739E6B826_StaticFields, ___Right_1)); }
	inline ChangeDirection_t34BA68392D0BB026E61B81B65AD1B09CF9DB4D27 * get_Right_1() const { return ___Right_1; }
	inline ChangeDirection_t34BA68392D0BB026E61B81B65AD1B09CF9DB4D27 ** get_address_of_Right_1() { return &___Right_1; }
	inline void set_Right_1(ChangeDirection_t34BA68392D0BB026E61B81B65AD1B09CF9DB4D27 * value)
	{
		___Right_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Right_1), (void*)value);
	}

	inline static int32_t get_offset_of_Up_2() { return static_cast<int32_t>(offsetof(NavigateFocusRing_t44CF1D05515ADB539414B52A64A7602739E6B826_StaticFields, ___Up_2)); }
	inline ChangeDirection_t34BA68392D0BB026E61B81B65AD1B09CF9DB4D27 * get_Up_2() const { return ___Up_2; }
	inline ChangeDirection_t34BA68392D0BB026E61B81B65AD1B09CF9DB4D27 ** get_address_of_Up_2() { return &___Up_2; }
	inline void set_Up_2(ChangeDirection_t34BA68392D0BB026E61B81B65AD1B09CF9DB4D27 * value)
	{
		___Up_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Up_2), (void*)value);
	}

	inline static int32_t get_offset_of_Down_3() { return static_cast<int32_t>(offsetof(NavigateFocusRing_t44CF1D05515ADB539414B52A64A7602739E6B826_StaticFields, ___Down_3)); }
	inline ChangeDirection_t34BA68392D0BB026E61B81B65AD1B09CF9DB4D27 * get_Down_3() const { return ___Down_3; }
	inline ChangeDirection_t34BA68392D0BB026E61B81B65AD1B09CF9DB4D27 ** get_address_of_Down_3() { return &___Down_3; }
	inline void set_Down_3(ChangeDirection_t34BA68392D0BB026E61B81B65AD1B09CF9DB4D27 * value)
	{
		___Down_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Down_3), (void*)value);
	}

	inline static int32_t get_offset_of_Next_4() { return static_cast<int32_t>(offsetof(NavigateFocusRing_t44CF1D05515ADB539414B52A64A7602739E6B826_StaticFields, ___Next_4)); }
	inline ChangeDirection_t34BA68392D0BB026E61B81B65AD1B09CF9DB4D27 * get_Next_4() const { return ___Next_4; }
	inline ChangeDirection_t34BA68392D0BB026E61B81B65AD1B09CF9DB4D27 ** get_address_of_Next_4() { return &___Next_4; }
	inline void set_Next_4(ChangeDirection_t34BA68392D0BB026E61B81B65AD1B09CF9DB4D27 * value)
	{
		___Next_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Next_4), (void*)value);
	}

	inline static int32_t get_offset_of_Previous_5() { return static_cast<int32_t>(offsetof(NavigateFocusRing_t44CF1D05515ADB539414B52A64A7602739E6B826_StaticFields, ___Previous_5)); }
	inline ChangeDirection_t34BA68392D0BB026E61B81B65AD1B09CF9DB4D27 * get_Previous_5() const { return ___Previous_5; }
	inline ChangeDirection_t34BA68392D0BB026E61B81B65AD1B09CF9DB4D27 ** get_address_of_Previous_5() { return &___Previous_5; }
	inline void set_Previous_5(ChangeDirection_t34BA68392D0BB026E61B81B65AD1B09CF9DB4D27 * value)
	{
		___Previous_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Previous_5), (void*)value);
	}
};


// UnityEngine.UIElements.NavigationEventDispatchingStrategy
struct NavigationEventDispatchingStrategy_t2DEA6952B1FF4FEE78C9A20FA54C66E7F12F1992  : public RuntimeObject
{
public:

public:
};


// UnityEngine.UIElements.PointerCaptureDispatchingStrategy
struct PointerCaptureDispatchingStrategy_t0599BD8824D9BE038701155B290A0732F73568B0  : public RuntimeObject
{
public:

public:
};


// UnityEngine.UIElements.PointerEventDispatchingStrategy
struct PointerEventDispatchingStrategy_t14CDABDD60FD11CD051E2B39DD430614D55534A9  : public RuntimeObject
{
public:

public:
};


// UnityEngine.UIElements.RuntimeEventDispatcher
struct RuntimeEventDispatcher_t5288505159545E9E141CCB491165278BE8654710  : public RuntimeObject
{
public:

public:
};


// UnityEngine.UIElements.RuntimePanelUtils
struct RuntimePanelUtils_t72C7235E23C4F27F463FDF645AB0D8F5FD6ADF03  : public RuntimeObject
{
public:

public:
};


// UnityEngine.UIElements.UIR.Shaders
struct Shaders_t5858FE9E27DFD22DD45601F3A468E40E775837E4  : public RuntimeObject
{
public:

public:
};

struct Shaders_t5858FE9E27DFD22DD45601F3A468E40E775837E4_StaticFields
{
public:
	// System.String UnityEngine.UIElements.UIR.Shaders::k_AtlasBlit
	String_t* ___k_AtlasBlit_0;
	// System.String UnityEngine.UIElements.UIR.Shaders::k_Editor
	String_t* ___k_Editor_1;
	// System.String UnityEngine.UIElements.UIR.Shaders::k_Runtime
	String_t* ___k_Runtime_2;
	// System.String UnityEngine.UIElements.UIR.Shaders::k_RuntimeWorld
	String_t* ___k_RuntimeWorld_3;
	// System.String UnityEngine.UIElements.UIR.Shaders::k_GraphView
	String_t* ___k_GraphView_4;

public:
	inline static int32_t get_offset_of_k_AtlasBlit_0() { return static_cast<int32_t>(offsetof(Shaders_t5858FE9E27DFD22DD45601F3A468E40E775837E4_StaticFields, ___k_AtlasBlit_0)); }
	inline String_t* get_k_AtlasBlit_0() const { return ___k_AtlasBlit_0; }
	inline String_t** get_address_of_k_AtlasBlit_0() { return &___k_AtlasBlit_0; }
	inline void set_k_AtlasBlit_0(String_t* value)
	{
		___k_AtlasBlit_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___k_AtlasBlit_0), (void*)value);
	}

	inline static int32_t get_offset_of_k_Editor_1() { return static_cast<int32_t>(offsetof(Shaders_t5858FE9E27DFD22DD45601F3A468E40E775837E4_StaticFields, ___k_Editor_1)); }
	inline String_t* get_k_Editor_1() const { return ___k_Editor_1; }
	inline String_t** get_address_of_k_Editor_1() { return &___k_Editor_1; }
	inline void set_k_Editor_1(String_t* value)
	{
		___k_Editor_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___k_Editor_1), (void*)value);
	}

	inline static int32_t get_offset_of_k_Runtime_2() { return static_cast<int32_t>(offsetof(Shaders_t5858FE9E27DFD22DD45601F3A468E40E775837E4_StaticFields, ___k_Runtime_2)); }
	inline String_t* get_k_Runtime_2() const { return ___k_Runtime_2; }
	inline String_t** get_address_of_k_Runtime_2() { return &___k_Runtime_2; }
	inline void set_k_Runtime_2(String_t* value)
	{
		___k_Runtime_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___k_Runtime_2), (void*)value);
	}

	inline static int32_t get_offset_of_k_RuntimeWorld_3() { return static_cast<int32_t>(offsetof(Shaders_t5858FE9E27DFD22DD45601F3A468E40E775837E4_StaticFields, ___k_RuntimeWorld_3)); }
	inline String_t* get_k_RuntimeWorld_3() const { return ___k_RuntimeWorld_3; }
	inline String_t** get_address_of_k_RuntimeWorld_3() { return &___k_RuntimeWorld_3; }
	inline void set_k_RuntimeWorld_3(String_t* value)
	{
		___k_RuntimeWorld_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___k_RuntimeWorld_3), (void*)value);
	}

	inline static int32_t get_offset_of_k_GraphView_4() { return static_cast<int32_t>(offsetof(Shaders_t5858FE9E27DFD22DD45601F3A468E40E775837E4_StaticFields, ___k_GraphView_4)); }
	inline String_t* get_k_GraphView_4() const { return ___k_GraphView_4; }
	inline String_t** get_address_of_k_GraphView_4() { return &___k_GraphView_4; }
	inline void set_k_GraphView_4(String_t* value)
	{
		___k_GraphView_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___k_GraphView_4), (void*)value);
	}
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


// UnityEngine.UIElements.TextDelegates
struct TextDelegates_t7BDFD1ED4A9246F08974A6DF7C62E674A6618B6F  : public RuntimeObject
{
public:

public:
};

struct TextDelegates_t7BDFD1ED4A9246F08974A6DF7C62E674A6618B6F_StaticFields
{
public:
	// System.Func`2<UnityEngine.Object,System.Boolean> UnityEngine.UIElements.TextDelegates::IsFontAsset
	Func_2_t4490DFDA400FA49E72C851B7CFFE5584EE480800 * ___IsFontAsset_0;
	// System.Func`1<UnityEngine.Object> UnityEngine.UIElements.TextDelegates::GetTextSettings
	Func_1_tAC616C71189A2A9710DCCC67B2B63B95BD51C170 * ___GetTextSettings_1;
	// System.Func`2<UnityEngine.Object,UnityEngine.Font> UnityEngine.UIElements.TextDelegates::GetFont
	Func_2_tB831D41C40E17E6DF736F7E8570A980BF700A714 * ___GetFont_2;
	// System.Func`2<UnityEngine.UIElements.VisualElement,UnityEngine.UIElements.UIR.TextCoreSettings> UnityEngine.UIElements.TextDelegates::GetTextCoreSettingsForElement
	Func_2_tC0378B2092D52DB44B62824DA30C71C32B050EA4 * ___GetTextCoreSettingsForElement_3;
	// System.Func`1<System.Int32> UnityEngine.UIElements.TextDelegates::GetIDGradientScale
	Func_1_tCB4CC73D86ED9FF6219A185C0C591F956E5DD1BA * ___GetIDGradientScale_4;
	// System.Action UnityEngine.UIElements.TextDelegates::OnTextSettingsImported
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___OnTextSettingsImported_5;

public:
	inline static int32_t get_offset_of_IsFontAsset_0() { return static_cast<int32_t>(offsetof(TextDelegates_t7BDFD1ED4A9246F08974A6DF7C62E674A6618B6F_StaticFields, ___IsFontAsset_0)); }
	inline Func_2_t4490DFDA400FA49E72C851B7CFFE5584EE480800 * get_IsFontAsset_0() const { return ___IsFontAsset_0; }
	inline Func_2_t4490DFDA400FA49E72C851B7CFFE5584EE480800 ** get_address_of_IsFontAsset_0() { return &___IsFontAsset_0; }
	inline void set_IsFontAsset_0(Func_2_t4490DFDA400FA49E72C851B7CFFE5584EE480800 * value)
	{
		___IsFontAsset_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IsFontAsset_0), (void*)value);
	}

	inline static int32_t get_offset_of_GetTextSettings_1() { return static_cast<int32_t>(offsetof(TextDelegates_t7BDFD1ED4A9246F08974A6DF7C62E674A6618B6F_StaticFields, ___GetTextSettings_1)); }
	inline Func_1_tAC616C71189A2A9710DCCC67B2B63B95BD51C170 * get_GetTextSettings_1() const { return ___GetTextSettings_1; }
	inline Func_1_tAC616C71189A2A9710DCCC67B2B63B95BD51C170 ** get_address_of_GetTextSettings_1() { return &___GetTextSettings_1; }
	inline void set_GetTextSettings_1(Func_1_tAC616C71189A2A9710DCCC67B2B63B95BD51C170 * value)
	{
		___GetTextSettings_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GetTextSettings_1), (void*)value);
	}

	inline static int32_t get_offset_of_GetFont_2() { return static_cast<int32_t>(offsetof(TextDelegates_t7BDFD1ED4A9246F08974A6DF7C62E674A6618B6F_StaticFields, ___GetFont_2)); }
	inline Func_2_tB831D41C40E17E6DF736F7E8570A980BF700A714 * get_GetFont_2() const { return ___GetFont_2; }
	inline Func_2_tB831D41C40E17E6DF736F7E8570A980BF700A714 ** get_address_of_GetFont_2() { return &___GetFont_2; }
	inline void set_GetFont_2(Func_2_tB831D41C40E17E6DF736F7E8570A980BF700A714 * value)
	{
		___GetFont_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GetFont_2), (void*)value);
	}

	inline static int32_t get_offset_of_GetTextCoreSettingsForElement_3() { return static_cast<int32_t>(offsetof(TextDelegates_t7BDFD1ED4A9246F08974A6DF7C62E674A6618B6F_StaticFields, ___GetTextCoreSettingsForElement_3)); }
	inline Func_2_tC0378B2092D52DB44B62824DA30C71C32B050EA4 * get_GetTextCoreSettingsForElement_3() const { return ___GetTextCoreSettingsForElement_3; }
	inline Func_2_tC0378B2092D52DB44B62824DA30C71C32B050EA4 ** get_address_of_GetTextCoreSettingsForElement_3() { return &___GetTextCoreSettingsForElement_3; }
	inline void set_GetTextCoreSettingsForElement_3(Func_2_tC0378B2092D52DB44B62824DA30C71C32B050EA4 * value)
	{
		___GetTextCoreSettingsForElement_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GetTextCoreSettingsForElement_3), (void*)value);
	}

	inline static int32_t get_offset_of_GetIDGradientScale_4() { return static_cast<int32_t>(offsetof(TextDelegates_t7BDFD1ED4A9246F08974A6DF7C62E674A6618B6F_StaticFields, ___GetIDGradientScale_4)); }
	inline Func_1_tCB4CC73D86ED9FF6219A185C0C591F956E5DD1BA * get_GetIDGradientScale_4() const { return ___GetIDGradientScale_4; }
	inline Func_1_tCB4CC73D86ED9FF6219A185C0C591F956E5DD1BA ** get_address_of_GetIDGradientScale_4() { return &___GetIDGradientScale_4; }
	inline void set_GetIDGradientScale_4(Func_1_tCB4CC73D86ED9FF6219A185C0C591F956E5DD1BA * value)
	{
		___GetIDGradientScale_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GetIDGradientScale_4), (void*)value);
	}

	inline static int32_t get_offset_of_OnTextSettingsImported_5() { return static_cast<int32_t>(offsetof(TextDelegates_t7BDFD1ED4A9246F08974A6DF7C62E674A6618B6F_StaticFields, ___OnTextSettingsImported_5)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_OnTextSettingsImported_5() const { return ___OnTextSettingsImported_5; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_OnTextSettingsImported_5() { return &___OnTextSettingsImported_5; }
	inline void set_OnTextSettingsImported_5(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___OnTextSettingsImported_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnTextSettingsImported_5), (void*)value);
	}
};


// UnityEngine.UIElements.UIDocumentHierarchicalIndexComparer
struct UIDocumentHierarchicalIndexComparer_tE2E3032A6EA8A682C7EED7A3D2A85D3627F25928  : public RuntimeObject
{
public:

public:
};


// UnityEngine.UIElements.UIDocumentHierarchyUtil
struct UIDocumentHierarchyUtil_t62F44B7617F98EAA6346894F1E463F3C347F95AB  : public RuntimeObject
{
public:

public:
};

struct UIDocumentHierarchyUtil_t62F44B7617F98EAA6346894F1E463F3C347F95AB_StaticFields
{
public:
	// UnityEngine.UIElements.UIDocumentHierarchicalIndexComparer UnityEngine.UIElements.UIDocumentHierarchyUtil::indexComparer
	UIDocumentHierarchicalIndexComparer_tE2E3032A6EA8A682C7EED7A3D2A85D3627F25928 * ___indexComparer_0;

public:
	inline static int32_t get_offset_of_indexComparer_0() { return static_cast<int32_t>(offsetof(UIDocumentHierarchyUtil_t62F44B7617F98EAA6346894F1E463F3C347F95AB_StaticFields, ___indexComparer_0)); }
	inline UIDocumentHierarchicalIndexComparer_tE2E3032A6EA8A682C7EED7A3D2A85D3627F25928 * get_indexComparer_0() const { return ___indexComparer_0; }
	inline UIDocumentHierarchicalIndexComparer_tE2E3032A6EA8A682C7EED7A3D2A85D3627F25928 ** get_address_of_indexComparer_0() { return &___indexComparer_0; }
	inline void set_indexComparer_0(UIDocumentHierarchicalIndexComparer_tE2E3032A6EA8A682C7EED7A3D2A85D3627F25928 * value)
	{
		___indexComparer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___indexComparer_0), (void*)value);
	}
};


// UnityEngine.UIElements.UIDocumentList
struct UIDocumentList_t3D7C0E63339FDA7858C1D1AE3EB911CDB76C18C5  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<UnityEngine.UIElements.UIDocument> UnityEngine.UIElements.UIDocumentList::m_AttachedUIDocuments
	List_1_tAB773DE00C0DE14686075955D7FB71ACD6194509 * ___m_AttachedUIDocuments_0;

public:
	inline static int32_t get_offset_of_m_AttachedUIDocuments_0() { return static_cast<int32_t>(offsetof(UIDocumentList_t3D7C0E63339FDA7858C1D1AE3EB911CDB76C18C5, ___m_AttachedUIDocuments_0)); }
	inline List_1_tAB773DE00C0DE14686075955D7FB71ACD6194509 * get_m_AttachedUIDocuments_0() const { return ___m_AttachedUIDocuments_0; }
	inline List_1_tAB773DE00C0DE14686075955D7FB71ACD6194509 ** get_address_of_m_AttachedUIDocuments_0() { return &___m_AttachedUIDocuments_0; }
	inline void set_m_AttachedUIDocuments_0(List_1_tAB773DE00C0DE14686075955D7FB71ACD6194509 * value)
	{
		___m_AttachedUIDocuments_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AttachedUIDocuments_0), (void*)value);
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

// System.Collections.Generic.SortedSet`1/Enumerator<System.Collections.Generic.KeyValuePair`2<UnityEngine.UIElements.UIDocumentHierarchicalIndex,System.Object>>
struct Enumerator_t83BB379B14B990511ED76743B12B7D911D0C8118 
{
public:
	// System.Collections.Generic.SortedSet`1<T> System.Collections.Generic.SortedSet`1/Enumerator::_tree
	SortedSet_1_tEF52DF30E6A1F0E13CC6CE2CBCC4EABE15306CE9 * ____tree_1;
	// System.Int32 System.Collections.Generic.SortedSet`1/Enumerator::_version
	int32_t ____version_2;
	// System.Collections.Generic.Stack`1<System.Collections.Generic.SortedSet`1/Node<T>> System.Collections.Generic.SortedSet`1/Enumerator::_stack
	Stack_1_tF3C6AA4D4B67C42CE1FE149C8F7A54EE7C18A4CC * ____stack_3;
	// System.Collections.Generic.SortedSet`1/Node<T> System.Collections.Generic.SortedSet`1/Enumerator::_current
	Node_tA648B6C4B1917C6DAA9AD2B34FBAAF0E90CBB0D3 * ____current_4;
	// System.Boolean System.Collections.Generic.SortedSet`1/Enumerator::_reverse
	bool ____reverse_5;

public:
	inline static int32_t get_offset_of__tree_1() { return static_cast<int32_t>(offsetof(Enumerator_t83BB379B14B990511ED76743B12B7D911D0C8118, ____tree_1)); }
	inline SortedSet_1_tEF52DF30E6A1F0E13CC6CE2CBCC4EABE15306CE9 * get__tree_1() const { return ____tree_1; }
	inline SortedSet_1_tEF52DF30E6A1F0E13CC6CE2CBCC4EABE15306CE9 ** get_address_of__tree_1() { return &____tree_1; }
	inline void set__tree_1(SortedSet_1_tEF52DF30E6A1F0E13CC6CE2CBCC4EABE15306CE9 * value)
	{
		____tree_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____tree_1), (void*)value);
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(Enumerator_t83BB379B14B990511ED76743B12B7D911D0C8118, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}

	inline static int32_t get_offset_of__stack_3() { return static_cast<int32_t>(offsetof(Enumerator_t83BB379B14B990511ED76743B12B7D911D0C8118, ____stack_3)); }
	inline Stack_1_tF3C6AA4D4B67C42CE1FE149C8F7A54EE7C18A4CC * get__stack_3() const { return ____stack_3; }
	inline Stack_1_tF3C6AA4D4B67C42CE1FE149C8F7A54EE7C18A4CC ** get_address_of__stack_3() { return &____stack_3; }
	inline void set__stack_3(Stack_1_tF3C6AA4D4B67C42CE1FE149C8F7A54EE7C18A4CC * value)
	{
		____stack_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stack_3), (void*)value);
	}

	inline static int32_t get_offset_of__current_4() { return static_cast<int32_t>(offsetof(Enumerator_t83BB379B14B990511ED76743B12B7D911D0C8118, ____current_4)); }
	inline Node_tA648B6C4B1917C6DAA9AD2B34FBAAF0E90CBB0D3 * get__current_4() const { return ____current_4; }
	inline Node_tA648B6C4B1917C6DAA9AD2B34FBAAF0E90CBB0D3 ** get_address_of__current_4() { return &____current_4; }
	inline void set__current_4(Node_tA648B6C4B1917C6DAA9AD2B34FBAAF0E90CBB0D3 * value)
	{
		____current_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____current_4), (void*)value);
	}

	inline static int32_t get_offset_of__reverse_5() { return static_cast<int32_t>(offsetof(Enumerator_t83BB379B14B990511ED76743B12B7D911D0C8118, ____reverse_5)); }
	inline bool get__reverse_5() const { return ____reverse_5; }
	inline bool* get_address_of__reverse_5() { return &____reverse_5; }
	inline void set__reverse_5(bool value)
	{
		____reverse_5 = value;
	}
};

struct Enumerator_t83BB379B14B990511ED76743B12B7D911D0C8118_StaticFields
{
public:
	// System.Collections.Generic.SortedSet`1/Node<T> System.Collections.Generic.SortedSet`1/Enumerator::s_dummyNode
	Node_tA648B6C4B1917C6DAA9AD2B34FBAAF0E90CBB0D3 * ___s_dummyNode_0;

public:
	inline static int32_t get_offset_of_s_dummyNode_0() { return static_cast<int32_t>(offsetof(Enumerator_t83BB379B14B990511ED76743B12B7D911D0C8118_StaticFields, ___s_dummyNode_0)); }
	inline Node_tA648B6C4B1917C6DAA9AD2B34FBAAF0E90CBB0D3 * get_s_dummyNode_0() const { return ___s_dummyNode_0; }
	inline Node_tA648B6C4B1917C6DAA9AD2B34FBAAF0E90CBB0D3 ** get_address_of_s_dummyNode_0() { return &___s_dummyNode_0; }
	inline void set_s_dummyNode_0(Node_tA648B6C4B1917C6DAA9AD2B34FBAAF0E90CBB0D3 * value)
	{
		___s_dummyNode_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_dummyNode_0), (void*)value);
	}
};


// System.Collections.Generic.SortedSet`1/Enumerator<System.Collections.Generic.KeyValuePair`2<UnityEngine.UIElements.UIDocumentHierarchicalIndex,UnityEngine.UIElements.UIDocument>>
struct Enumerator_tC4CD107C75C4B17C85FDACFD69FEFF45E7A82A53 
{
public:
	// System.Collections.Generic.SortedSet`1<T> System.Collections.Generic.SortedSet`1/Enumerator::_tree
	SortedSet_1_tD24C654B011F982B85FAB0FFB426E31D3ECB430D * ____tree_1;
	// System.Int32 System.Collections.Generic.SortedSet`1/Enumerator::_version
	int32_t ____version_2;
	// System.Collections.Generic.Stack`1<System.Collections.Generic.SortedSet`1/Node<T>> System.Collections.Generic.SortedSet`1/Enumerator::_stack
	Stack_1_t666CE40FCB5BDA936B365F988C46C170DA7C30DB * ____stack_3;
	// System.Collections.Generic.SortedSet`1/Node<T> System.Collections.Generic.SortedSet`1/Enumerator::_current
	Node_t14BDD4C7CE7BC32CFB4D1782A5EEF86598483A6C * ____current_4;
	// System.Boolean System.Collections.Generic.SortedSet`1/Enumerator::_reverse
	bool ____reverse_5;

public:
	inline static int32_t get_offset_of__tree_1() { return static_cast<int32_t>(offsetof(Enumerator_tC4CD107C75C4B17C85FDACFD69FEFF45E7A82A53, ____tree_1)); }
	inline SortedSet_1_tD24C654B011F982B85FAB0FFB426E31D3ECB430D * get__tree_1() const { return ____tree_1; }
	inline SortedSet_1_tD24C654B011F982B85FAB0FFB426E31D3ECB430D ** get_address_of__tree_1() { return &____tree_1; }
	inline void set__tree_1(SortedSet_1_tD24C654B011F982B85FAB0FFB426E31D3ECB430D * value)
	{
		____tree_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____tree_1), (void*)value);
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(Enumerator_tC4CD107C75C4B17C85FDACFD69FEFF45E7A82A53, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}

	inline static int32_t get_offset_of__stack_3() { return static_cast<int32_t>(offsetof(Enumerator_tC4CD107C75C4B17C85FDACFD69FEFF45E7A82A53, ____stack_3)); }
	inline Stack_1_t666CE40FCB5BDA936B365F988C46C170DA7C30DB * get__stack_3() const { return ____stack_3; }
	inline Stack_1_t666CE40FCB5BDA936B365F988C46C170DA7C30DB ** get_address_of__stack_3() { return &____stack_3; }
	inline void set__stack_3(Stack_1_t666CE40FCB5BDA936B365F988C46C170DA7C30DB * value)
	{
		____stack_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stack_3), (void*)value);
	}

	inline static int32_t get_offset_of__current_4() { return static_cast<int32_t>(offsetof(Enumerator_tC4CD107C75C4B17C85FDACFD69FEFF45E7A82A53, ____current_4)); }
	inline Node_t14BDD4C7CE7BC32CFB4D1782A5EEF86598483A6C * get__current_4() const { return ____current_4; }
	inline Node_t14BDD4C7CE7BC32CFB4D1782A5EEF86598483A6C ** get_address_of__current_4() { return &____current_4; }
	inline void set__current_4(Node_t14BDD4C7CE7BC32CFB4D1782A5EEF86598483A6C * value)
	{
		____current_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____current_4), (void*)value);
	}

	inline static int32_t get_offset_of__reverse_5() { return static_cast<int32_t>(offsetof(Enumerator_tC4CD107C75C4B17C85FDACFD69FEFF45E7A82A53, ____reverse_5)); }
	inline bool get__reverse_5() const { return ____reverse_5; }
	inline bool* get_address_of__reverse_5() { return &____reverse_5; }
	inline void set__reverse_5(bool value)
	{
		____reverse_5 = value;
	}
};

struct Enumerator_tC4CD107C75C4B17C85FDACFD69FEFF45E7A82A53_StaticFields
{
public:
	// System.Collections.Generic.SortedSet`1/Node<T> System.Collections.Generic.SortedSet`1/Enumerator::s_dummyNode
	Node_t14BDD4C7CE7BC32CFB4D1782A5EEF86598483A6C * ___s_dummyNode_0;

public:
	inline static int32_t get_offset_of_s_dummyNode_0() { return static_cast<int32_t>(offsetof(Enumerator_tC4CD107C75C4B17C85FDACFD69FEFF45E7A82A53_StaticFields, ___s_dummyNode_0)); }
	inline Node_t14BDD4C7CE7BC32CFB4D1782A5EEF86598483A6C * get_s_dummyNode_0() const { return ___s_dummyNode_0; }
	inline Node_t14BDD4C7CE7BC32CFB4D1782A5EEF86598483A6C ** get_address_of_s_dummyNode_0() { return &___s_dummyNode_0; }
	inline void set_s_dummyNode_0(Node_t14BDD4C7CE7BC32CFB4D1782A5EEF86598483A6C * value)
	{
		___s_dummyNode_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_dummyNode_0), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___list_0)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_list_0() const { return ___list_0; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<UnityEngine.UIElements.UIDocument>
struct Enumerator_tA397CC4887AB161D4CE3FBF104F8010A9DFCFE07 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_tAB773DE00C0DE14686075955D7FB71ACD6194509 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	UIDocument_t008D811860584F44CEBB5AF575856E6EFCEBECC4 * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tA397CC4887AB161D4CE3FBF104F8010A9DFCFE07, ___list_0)); }
	inline List_1_tAB773DE00C0DE14686075955D7FB71ACD6194509 * get_list_0() const { return ___list_0; }
	inline List_1_tAB773DE00C0DE14686075955D7FB71ACD6194509 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_tAB773DE00C0DE14686075955D7FB71ACD6194509 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tA397CC4887AB161D4CE3FBF104F8010A9DFCFE07, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tA397CC4887AB161D4CE3FBF104F8010A9DFCFE07, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tA397CC4887AB161D4CE3FBF104F8010A9DFCFE07, ___current_3)); }
	inline UIDocument_t008D811860584F44CEBB5AF575856E6EFCEBECC4 * get_current_3() const { return ___current_3; }
	inline UIDocument_t008D811860584F44CEBB5AF575856E6EFCEBECC4 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(UIDocument_t008D811860584F44CEBB5AF575856E6EFCEBECC4 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
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


// System.Char
struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___categoryForLatin1_3), (void*)value);
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

// UnityEngine.EventInterests
struct EventInterests_t4DC3B6F7CFFDBF0AC4DE302F9102C769B87B9D79 
{
public:
	// System.Boolean UnityEngine.EventInterests::<wantsMouseMove>k__BackingField
	bool ___U3CwantsMouseMoveU3Ek__BackingField_0;
	// System.Boolean UnityEngine.EventInterests::<wantsMouseEnterLeaveWindow>k__BackingField
	bool ___U3CwantsMouseEnterLeaveWindowU3Ek__BackingField_1;
	// System.Boolean UnityEngine.EventInterests::<wantsLessLayoutEvents>k__BackingField
	bool ___U3CwantsLessLayoutEventsU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CwantsMouseMoveU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(EventInterests_t4DC3B6F7CFFDBF0AC4DE302F9102C769B87B9D79, ___U3CwantsMouseMoveU3Ek__BackingField_0)); }
	inline bool get_U3CwantsMouseMoveU3Ek__BackingField_0() const { return ___U3CwantsMouseMoveU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CwantsMouseMoveU3Ek__BackingField_0() { return &___U3CwantsMouseMoveU3Ek__BackingField_0; }
	inline void set_U3CwantsMouseMoveU3Ek__BackingField_0(bool value)
	{
		___U3CwantsMouseMoveU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CwantsMouseEnterLeaveWindowU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(EventInterests_t4DC3B6F7CFFDBF0AC4DE302F9102C769B87B9D79, ___U3CwantsMouseEnterLeaveWindowU3Ek__BackingField_1)); }
	inline bool get_U3CwantsMouseEnterLeaveWindowU3Ek__BackingField_1() const { return ___U3CwantsMouseEnterLeaveWindowU3Ek__BackingField_1; }
	inline bool* get_address_of_U3CwantsMouseEnterLeaveWindowU3Ek__BackingField_1() { return &___U3CwantsMouseEnterLeaveWindowU3Ek__BackingField_1; }
	inline void set_U3CwantsMouseEnterLeaveWindowU3Ek__BackingField_1(bool value)
	{
		___U3CwantsMouseEnterLeaveWindowU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CwantsLessLayoutEventsU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(EventInterests_t4DC3B6F7CFFDBF0AC4DE302F9102C769B87B9D79, ___U3CwantsLessLayoutEventsU3Ek__BackingField_2)); }
	inline bool get_U3CwantsLessLayoutEventsU3Ek__BackingField_2() const { return ___U3CwantsLessLayoutEventsU3Ek__BackingField_2; }
	inline bool* get_address_of_U3CwantsLessLayoutEventsU3Ek__BackingField_2() { return &___U3CwantsLessLayoutEventsU3Ek__BackingField_2; }
	inline void set_U3CwantsLessLayoutEventsU3Ek__BackingField_2(bool value)
	{
		___U3CwantsLessLayoutEventsU3Ek__BackingField_2 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.EventInterests
struct EventInterests_t4DC3B6F7CFFDBF0AC4DE302F9102C769B87B9D79_marshaled_pinvoke
{
	int32_t ___U3CwantsMouseMoveU3Ek__BackingField_0;
	int32_t ___U3CwantsMouseEnterLeaveWindowU3Ek__BackingField_1;
	int32_t ___U3CwantsLessLayoutEventsU3Ek__BackingField_2;
};
// Native definition for COM marshalling of UnityEngine.EventInterests
struct EventInterests_t4DC3B6F7CFFDBF0AC4DE302F9102C769B87B9D79_marshaled_com
{
	int32_t ___U3CwantsMouseMoveU3Ek__BackingField_0;
	int32_t ___U3CwantsMouseEnterLeaveWindowU3Ek__BackingField_1;
	int32_t ___U3CwantsLessLayoutEventsU3Ek__BackingField_2;
};

// UnityEngine.UIElements.Focusable
struct Focusable_tF2E839AB6DBE413F04FC62347D7074D7377FD1E1  : public CallbackEventHandler_t7AF609ED7BD54F43EA0D22897698207A508F380E
{
public:
	// System.Boolean UnityEngine.UIElements.Focusable::<focusable>k__BackingField
	bool ___U3CfocusableU3Ek__BackingField_1;
	// System.Int32 UnityEngine.UIElements.Focusable::<tabIndex>k__BackingField
	int32_t ___U3CtabIndexU3Ek__BackingField_2;
	// System.Boolean UnityEngine.UIElements.Focusable::m_DelegatesFocus
	bool ___m_DelegatesFocus_3;
	// System.Boolean UnityEngine.UIElements.Focusable::m_ExcludeFromFocusRing
	bool ___m_ExcludeFromFocusRing_4;
	// System.Boolean UnityEngine.UIElements.Focusable::isIMGUIContainer
	bool ___isIMGUIContainer_5;

public:
	inline static int32_t get_offset_of_U3CfocusableU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Focusable_tF2E839AB6DBE413F04FC62347D7074D7377FD1E1, ___U3CfocusableU3Ek__BackingField_1)); }
	inline bool get_U3CfocusableU3Ek__BackingField_1() const { return ___U3CfocusableU3Ek__BackingField_1; }
	inline bool* get_address_of_U3CfocusableU3Ek__BackingField_1() { return &___U3CfocusableU3Ek__BackingField_1; }
	inline void set_U3CfocusableU3Ek__BackingField_1(bool value)
	{
		___U3CfocusableU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CtabIndexU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Focusable_tF2E839AB6DBE413F04FC62347D7074D7377FD1E1, ___U3CtabIndexU3Ek__BackingField_2)); }
	inline int32_t get_U3CtabIndexU3Ek__BackingField_2() const { return ___U3CtabIndexU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CtabIndexU3Ek__BackingField_2() { return &___U3CtabIndexU3Ek__BackingField_2; }
	inline void set_U3CtabIndexU3Ek__BackingField_2(int32_t value)
	{
		___U3CtabIndexU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_m_DelegatesFocus_3() { return static_cast<int32_t>(offsetof(Focusable_tF2E839AB6DBE413F04FC62347D7074D7377FD1E1, ___m_DelegatesFocus_3)); }
	inline bool get_m_DelegatesFocus_3() const { return ___m_DelegatesFocus_3; }
	inline bool* get_address_of_m_DelegatesFocus_3() { return &___m_DelegatesFocus_3; }
	inline void set_m_DelegatesFocus_3(bool value)
	{
		___m_DelegatesFocus_3 = value;
	}

	inline static int32_t get_offset_of_m_ExcludeFromFocusRing_4() { return static_cast<int32_t>(offsetof(Focusable_tF2E839AB6DBE413F04FC62347D7074D7377FD1E1, ___m_ExcludeFromFocusRing_4)); }
	inline bool get_m_ExcludeFromFocusRing_4() const { return ___m_ExcludeFromFocusRing_4; }
	inline bool* get_address_of_m_ExcludeFromFocusRing_4() { return &___m_ExcludeFromFocusRing_4; }
	inline void set_m_ExcludeFromFocusRing_4(bool value)
	{
		___m_ExcludeFromFocusRing_4 = value;
	}

	inline static int32_t get_offset_of_isIMGUIContainer_5() { return static_cast<int32_t>(offsetof(Focusable_tF2E839AB6DBE413F04FC62347D7074D7377FD1E1, ___isIMGUIContainer_5)); }
	inline bool get_isIMGUIContainer_5() const { return ___isIMGUIContainer_5; }
	inline bool* get_address_of_isIMGUIContainer_5() { return &___isIMGUIContainer_5; }
	inline void set_isIMGUIContainer_5(bool value)
	{
		___isIMGUIContainer_5 = value;
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


// System.Int64
struct Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
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


// UnityEngine.PropertyName
struct PropertyName_t1B3B39F9873F8967D3557FE2CCF4E415F909FEC1 
{
public:
	// System.Int32 UnityEngine.PropertyName::id
	int32_t ___id_0;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(PropertyName_t1B3B39F9873F8967D3557FE2CCF4E415F909FEC1, ___id_0)); }
	inline int32_t get_id_0() const { return ___id_0; }
	inline int32_t* get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(int32_t value)
	{
		___id_0 = value;
	}
};


// UnityEngine.Quaternion
struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___identityQuaternion_4 = value;
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


// UnityEngine.UIElements.UIDocumentHierarchicalIndex
struct UIDocumentHierarchicalIndex_t0612634E1FBC3EC410363E02999C10F635037FC3 
{
public:
	// System.Int32[] UnityEngine.UIElements.UIDocumentHierarchicalIndex::pathToParent
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___pathToParent_0;

public:
	inline static int32_t get_offset_of_pathToParent_0() { return static_cast<int32_t>(offsetof(UIDocumentHierarchicalIndex_t0612634E1FBC3EC410363E02999C10F635037FC3, ___pathToParent_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_pathToParent_0() const { return ___pathToParent_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_pathToParent_0() { return &___pathToParent_0; }
	inline void set_pathToParent_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___pathToParent_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pathToParent_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UIElements.UIDocumentHierarchicalIndex
struct UIDocumentHierarchicalIndex_t0612634E1FBC3EC410363E02999C10F635037FC3_marshaled_pinvoke
{
	Il2CppSafeArray/*NONE*/* ___pathToParent_0;
};
// Native definition for COM marshalling of UnityEngine.UIElements.UIDocumentHierarchicalIndex
struct UIDocumentHierarchicalIndex_t0612634E1FBC3EC410363E02999C10F635037FC3_marshaled_com
{
	Il2CppSafeArray/*NONE*/* ___pathToParent_0;
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


// UnityEngine.Vector2Int
struct Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 
{
public:
	// System.Int32 UnityEngine.Vector2Int::m_X
	int32_t ___m_X_0;
	// System.Int32 UnityEngine.Vector2Int::m_Y
	int32_t ___m_Y_1;

public:
	inline static int32_t get_offset_of_m_X_0() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9, ___m_X_0)); }
	inline int32_t get_m_X_0() const { return ___m_X_0; }
	inline int32_t* get_address_of_m_X_0() { return &___m_X_0; }
	inline void set_m_X_0(int32_t value)
	{
		___m_X_0 = value;
	}

	inline static int32_t get_offset_of_m_Y_1() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9, ___m_Y_1)); }
	inline int32_t get_m_Y_1() const { return ___m_Y_1; }
	inline int32_t* get_address_of_m_Y_1() { return &___m_Y_1; }
	inline void set_m_Y_1(int32_t value)
	{
		___m_Y_1 = value;
	}
};

struct Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields
{
public:
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Zero
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___s_Zero_2;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_One
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___s_One_3;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Up
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___s_Up_4;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Down
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___s_Down_5;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Left
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___s_Left_6;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Right
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___s_Right_7;

public:
	inline static int32_t get_offset_of_s_Zero_2() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields, ___s_Zero_2)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_s_Zero_2() const { return ___s_Zero_2; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_s_Zero_2() { return &___s_Zero_2; }
	inline void set_s_Zero_2(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___s_Zero_2 = value;
	}

	inline static int32_t get_offset_of_s_One_3() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields, ___s_One_3)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_s_One_3() const { return ___s_One_3; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_s_One_3() { return &___s_One_3; }
	inline void set_s_One_3(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___s_One_3 = value;
	}

	inline static int32_t get_offset_of_s_Up_4() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields, ___s_Up_4)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_s_Up_4() const { return ___s_Up_4; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_s_Up_4() { return &___s_Up_4; }
	inline void set_s_Up_4(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___s_Up_4 = value;
	}

	inline static int32_t get_offset_of_s_Down_5() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields, ___s_Down_5)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_s_Down_5() const { return ___s_Down_5; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_s_Down_5() { return &___s_Down_5; }
	inline void set_s_Down_5(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___s_Down_5 = value;
	}

	inline static int32_t get_offset_of_s_Left_6() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields, ___s_Left_6)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_s_Left_6() const { return ___s_Left_6; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_s_Left_6() { return &___s_Left_6; }
	inline void set_s_Left_6(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___s_Left_6 = value;
	}

	inline static int32_t get_offset_of_s_Right_7() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields, ___s_Right_7)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_s_Right_7() const { return ___s_Right_7; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_s_Right_7() { return &___s_Right_7; }
	inline void set_s_Right_7(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___s_Right_7 = value;
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


// UnityEngine.UIElements.VisualElementFocusChangeDirection
struct VisualElementFocusChangeDirection_t14A3CFA335037FB20713B566D5B993835A585951  : public FocusChangeDirection_t7E59BE4DF7F0B4024128F306581D21C2C5E02CF1
{
public:

public:
};

struct VisualElementFocusChangeDirection_t14A3CFA335037FB20713B566D5B993835A585951_StaticFields
{
public:
	// UnityEngine.UIElements.VisualElementFocusChangeDirection UnityEngine.UIElements.VisualElementFocusChangeDirection::s_Left
	VisualElementFocusChangeDirection_t14A3CFA335037FB20713B566D5B993835A585951 * ___s_Left_4;
	// UnityEngine.UIElements.VisualElementFocusChangeDirection UnityEngine.UIElements.VisualElementFocusChangeDirection::s_Right
	VisualElementFocusChangeDirection_t14A3CFA335037FB20713B566D5B993835A585951 * ___s_Right_5;

public:
	inline static int32_t get_offset_of_s_Left_4() { return static_cast<int32_t>(offsetof(VisualElementFocusChangeDirection_t14A3CFA335037FB20713B566D5B993835A585951_StaticFields, ___s_Left_4)); }
	inline VisualElementFocusChangeDirection_t14A3CFA335037FB20713B566D5B993835A585951 * get_s_Left_4() const { return ___s_Left_4; }
	inline VisualElementFocusChangeDirection_t14A3CFA335037FB20713B566D5B993835A585951 ** get_address_of_s_Left_4() { return &___s_Left_4; }
	inline void set_s_Left_4(VisualElementFocusChangeDirection_t14A3CFA335037FB20713B566D5B993835A585951 * value)
	{
		___s_Left_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Left_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_Right_5() { return static_cast<int32_t>(offsetof(VisualElementFocusChangeDirection_t14A3CFA335037FB20713B566D5B993835A585951_StaticFields, ___s_Right_5)); }
	inline VisualElementFocusChangeDirection_t14A3CFA335037FB20713B566D5B993835A585951 * get_s_Right_5() const { return ___s_Right_5; }
	inline VisualElementFocusChangeDirection_t14A3CFA335037FB20713B566D5B993835A585951 ** get_address_of_s_Right_5() { return &___s_Right_5; }
	inline void set_s_Right_5(VisualElementFocusChangeDirection_t14A3CFA335037FB20713B566D5B993835A585951 * value)
	{
		___s_Right_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Right_5), (void*)value);
	}
};


// UnityEngine.UIElements.VisualElementFocusChangeTarget
struct VisualElementFocusChangeTarget_t168347905990062A6F59D1111069713C3D3F98EC  : public FocusChangeDirection_t7E59BE4DF7F0B4024128F306581D21C2C5E02CF1
{
public:
	// UnityEngine.UIElements.Focusable UnityEngine.UIElements.VisualElementFocusChangeTarget::<target>k__BackingField
	Focusable_tF2E839AB6DBE413F04FC62347D7074D7377FD1E1 * ___U3CtargetU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_U3CtargetU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(VisualElementFocusChangeTarget_t168347905990062A6F59D1111069713C3D3F98EC, ___U3CtargetU3Ek__BackingField_5)); }
	inline Focusable_tF2E839AB6DBE413F04FC62347D7074D7377FD1E1 * get_U3CtargetU3Ek__BackingField_5() const { return ___U3CtargetU3Ek__BackingField_5; }
	inline Focusable_tF2E839AB6DBE413F04FC62347D7074D7377FD1E1 ** get_address_of_U3CtargetU3Ek__BackingField_5() { return &___U3CtargetU3Ek__BackingField_5; }
	inline void set_U3CtargetU3Ek__BackingField_5(Focusable_tF2E839AB6DBE413F04FC62347D7074D7377FD1E1 * value)
	{
		___U3CtargetU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CtargetU3Ek__BackingField_5), (void*)value);
	}
};

struct VisualElementFocusChangeTarget_t168347905990062A6F59D1111069713C3D3F98EC_StaticFields
{
public:
	// UnityEngine.UIElements.ObjectPool`1<UnityEngine.UIElements.VisualElementFocusChangeTarget> UnityEngine.UIElements.VisualElementFocusChangeTarget::Pool
	ObjectPool_1_t7EE10111EDB14D82798D40198FC5B7C2E6B1E35A * ___Pool_4;

public:
	inline static int32_t get_offset_of_Pool_4() { return static_cast<int32_t>(offsetof(VisualElementFocusChangeTarget_t168347905990062A6F59D1111069713C3D3F98EC_StaticFields, ___Pool_4)); }
	inline ObjectPool_1_t7EE10111EDB14D82798D40198FC5B7C2E6B1E35A * get_Pool_4() const { return ___Pool_4; }
	inline ObjectPool_1_t7EE10111EDB14D82798D40198FC5B7C2E6B1E35A ** get_address_of_Pool_4() { return &___Pool_4; }
	inline void set_Pool_4(ObjectPool_1_t7EE10111EDB14D82798D40198FC5B7C2E6B1E35A * value)
	{
		___Pool_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Pool_4), (void*)value);
	}
};


// UnityEngine.UIElements.VisualElementStyleSheetSet
struct VisualElementStyleSheetSet_tDDF1C0701442D9D8D928AC655823313F07E1B0F5 
{
public:
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.VisualElementStyleSheetSet::m_Element
	VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * ___m_Element_0;

public:
	inline static int32_t get_offset_of_m_Element_0() { return static_cast<int32_t>(offsetof(VisualElementStyleSheetSet_tDDF1C0701442D9D8D928AC655823313F07E1B0F5, ___m_Element_0)); }
	inline VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * get_m_Element_0() const { return ___m_Element_0; }
	inline VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 ** get_address_of_m_Element_0() { return &___m_Element_0; }
	inline void set_m_Element_0(VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * value)
	{
		___m_Element_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Element_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UIElements.VisualElementStyleSheetSet
struct VisualElementStyleSheetSet_tDDF1C0701442D9D8D928AC655823313F07E1B0F5_marshaled_pinvoke
{
	VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * ___m_Element_0;
};
// Native definition for COM marshalling of UnityEngine.UIElements.VisualElementStyleSheetSet
struct VisualElementStyleSheetSet_tDDF1C0701442D9D8D928AC655823313F07E1B0F5_marshaled_com
{
	VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * ___m_Element_0;
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


// UnityEngine.UIElements.NavigateFocusRing/ChangeDirection
struct ChangeDirection_t34BA68392D0BB026E61B81B65AD1B09CF9DB4D27  : public FocusChangeDirection_t7E59BE4DF7F0B4024128F306581D21C2C5E02CF1
{
public:

public:
};


// UnityEngine.UIElements.VisualElement/Hierarchy
struct Hierarchy_tC971D6D195075C1B878D4B2558ECAD4E5FF6861A 
{
public:
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.VisualElement/Hierarchy::m_Owner
	VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * ___m_Owner_0;

public:
	inline static int32_t get_offset_of_m_Owner_0() { return static_cast<int32_t>(offsetof(Hierarchy_tC971D6D195075C1B878D4B2558ECAD4E5FF6861A, ___m_Owner_0)); }
	inline VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * get_m_Owner_0() const { return ___m_Owner_0; }
	inline VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 ** get_address_of_m_Owner_0() { return &___m_Owner_0; }
	inline void set_m_Owner_0(VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * value)
	{
		___m_Owner_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Owner_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UIElements.VisualElement/Hierarchy
struct Hierarchy_tC971D6D195075C1B878D4B2558ECAD4E5FF6861A_marshaled_pinvoke
{
	VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * ___m_Owner_0;
};
// Native definition for COM marshalling of UnityEngine.UIElements.VisualElement/Hierarchy
struct Hierarchy_tC971D6D195075C1B878D4B2558ECAD4E5FF6861A_marshaled_com
{
	VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * ___m_Owner_0;
};

// System.Collections.Generic.SortedDictionary`2/Enumerator<UnityEngine.UIElements.UIDocumentHierarchicalIndex,System.Object>
struct Enumerator_t682025EC722C4629C3B3153DEDA91F08FF362F04 
{
public:
	// System.Collections.Generic.SortedSet`1/Enumerator<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.SortedDictionary`2/Enumerator::_treeEnum
	Enumerator_t83BB379B14B990511ED76743B12B7D911D0C8118  ____treeEnum_0;
	// System.Int32 System.Collections.Generic.SortedDictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_1;

public:
	inline static int32_t get_offset_of__treeEnum_0() { return static_cast<int32_t>(offsetof(Enumerator_t682025EC722C4629C3B3153DEDA91F08FF362F04, ____treeEnum_0)); }
	inline Enumerator_t83BB379B14B990511ED76743B12B7D911D0C8118  get__treeEnum_0() const { return ____treeEnum_0; }
	inline Enumerator_t83BB379B14B990511ED76743B12B7D911D0C8118 * get_address_of__treeEnum_0() { return &____treeEnum_0; }
	inline void set__treeEnum_0(Enumerator_t83BB379B14B990511ED76743B12B7D911D0C8118  value)
	{
		____treeEnum_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&____treeEnum_0))->____tree_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&____treeEnum_0))->____stack_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&____treeEnum_0))->____current_4), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of__getEnumeratorRetType_1() { return static_cast<int32_t>(offsetof(Enumerator_t682025EC722C4629C3B3153DEDA91F08FF362F04, ____getEnumeratorRetType_1)); }
	inline int32_t get__getEnumeratorRetType_1() const { return ____getEnumeratorRetType_1; }
	inline int32_t* get_address_of__getEnumeratorRetType_1() { return &____getEnumeratorRetType_1; }
	inline void set__getEnumeratorRetType_1(int32_t value)
	{
		____getEnumeratorRetType_1 = value;
	}
};


// System.Collections.Generic.SortedDictionary`2/Enumerator<UnityEngine.UIElements.UIDocumentHierarchicalIndex,UnityEngine.UIElements.UIDocument>
struct Enumerator_t4D922CA4220EF183D8E71A2050B54DD28AE1B165 
{
public:
	// System.Collections.Generic.SortedSet`1/Enumerator<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.SortedDictionary`2/Enumerator::_treeEnum
	Enumerator_tC4CD107C75C4B17C85FDACFD69FEFF45E7A82A53  ____treeEnum_0;
	// System.Int32 System.Collections.Generic.SortedDictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_1;

public:
	inline static int32_t get_offset_of__treeEnum_0() { return static_cast<int32_t>(offsetof(Enumerator_t4D922CA4220EF183D8E71A2050B54DD28AE1B165, ____treeEnum_0)); }
	inline Enumerator_tC4CD107C75C4B17C85FDACFD69FEFF45E7A82A53  get__treeEnum_0() const { return ____treeEnum_0; }
	inline Enumerator_tC4CD107C75C4B17C85FDACFD69FEFF45E7A82A53 * get_address_of__treeEnum_0() { return &____treeEnum_0; }
	inline void set__treeEnum_0(Enumerator_tC4CD107C75C4B17C85FDACFD69FEFF45E7A82A53  value)
	{
		____treeEnum_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&____treeEnum_0))->____tree_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&____treeEnum_0))->____stack_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&____treeEnum_0))->____current_4), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of__getEnumeratorRetType_1() { return static_cast<int32_t>(offsetof(Enumerator_t4D922CA4220EF183D8E71A2050B54DD28AE1B165, ____getEnumeratorRetType_1)); }
	inline int32_t get__getEnumeratorRetType_1() const { return ____getEnumeratorRetType_1; }
	inline int32_t* get_address_of__getEnumeratorRetType_1() { return &____getEnumeratorRetType_1; }
	inline void set__getEnumeratorRetType_1(int32_t value)
	{
		____getEnumeratorRetType_1 = value;
	}
};


// UnityEngine.UIElements.UIR.Implementation.ClipMethod
struct ClipMethod_t7C3CCEE963AFDDAEE9123FCB268653E66797A90E 
{
public:
	// System.Int32 UnityEngine.UIElements.UIR.Implementation.ClipMethod::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ClipMethod_t7C3CCEE963AFDDAEE9123FCB268653E66797A90E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.ColorSpace
struct ColorSpace_tAD694F94295170CB332A0F99BBE086F4AC8C15BA 
{
public:
	// System.Int32 UnityEngine.ColorSpace::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ColorSpace_tAD694F94295170CB332A0F99BBE086F4AC8C15BA, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UIElements.ContextType
struct ContextType_tAFFFF66CCF4C50D41944C8805D41985E86854128 
{
public:
	// System.Int32 UnityEngine.UIElements.ContextType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ContextType_tAFFFF66CCF4C50D41944C8805D41985E86854128, ___value___2)); }
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

// UnityEngine.Display
struct Display_t0A5D09F1F2EB8025FE40EE0F81E0D01BB47A9B44  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Display::nativeDisplay
	intptr_t ___nativeDisplay_0;

public:
	inline static int32_t get_offset_of_nativeDisplay_0() { return static_cast<int32_t>(offsetof(Display_t0A5D09F1F2EB8025FE40EE0F81E0D01BB47A9B44, ___nativeDisplay_0)); }
	inline intptr_t get_nativeDisplay_0() const { return ___nativeDisplay_0; }
	inline intptr_t* get_address_of_nativeDisplay_0() { return &___nativeDisplay_0; }
	inline void set_nativeDisplay_0(intptr_t value)
	{
		___nativeDisplay_0 = value;
	}
};

struct Display_t0A5D09F1F2EB8025FE40EE0F81E0D01BB47A9B44_StaticFields
{
public:
	// UnityEngine.Display[] UnityEngine.Display::displays
	DisplayU5BU5D_t3330058639C7A70B7B1FE7B4325E2B5D600CF4A6* ___displays_1;
	// UnityEngine.Display UnityEngine.Display::_mainDisplay
	Display_t0A5D09F1F2EB8025FE40EE0F81E0D01BB47A9B44 * ____mainDisplay_2;
	// UnityEngine.Display/DisplaysUpdatedDelegate UnityEngine.Display::onDisplaysUpdated
	DisplaysUpdatedDelegate_tC6A6AD44FAD98C9E28479FFF4BD3D9932458A6A1 * ___onDisplaysUpdated_3;

public:
	inline static int32_t get_offset_of_displays_1() { return static_cast<int32_t>(offsetof(Display_t0A5D09F1F2EB8025FE40EE0F81E0D01BB47A9B44_StaticFields, ___displays_1)); }
	inline DisplayU5BU5D_t3330058639C7A70B7B1FE7B4325E2B5D600CF4A6* get_displays_1() const { return ___displays_1; }
	inline DisplayU5BU5D_t3330058639C7A70B7B1FE7B4325E2B5D600CF4A6** get_address_of_displays_1() { return &___displays_1; }
	inline void set_displays_1(DisplayU5BU5D_t3330058639C7A70B7B1FE7B4325E2B5D600CF4A6* value)
	{
		___displays_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___displays_1), (void*)value);
	}

	inline static int32_t get_offset_of__mainDisplay_2() { return static_cast<int32_t>(offsetof(Display_t0A5D09F1F2EB8025FE40EE0F81E0D01BB47A9B44_StaticFields, ____mainDisplay_2)); }
	inline Display_t0A5D09F1F2EB8025FE40EE0F81E0D01BB47A9B44 * get__mainDisplay_2() const { return ____mainDisplay_2; }
	inline Display_t0A5D09F1F2EB8025FE40EE0F81E0D01BB47A9B44 ** get_address_of__mainDisplay_2() { return &____mainDisplay_2; }
	inline void set__mainDisplay_2(Display_t0A5D09F1F2EB8025FE40EE0F81E0D01BB47A9B44 * value)
	{
		____mainDisplay_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____mainDisplay_2), (void*)value);
	}

	inline static int32_t get_offset_of_onDisplaysUpdated_3() { return static_cast<int32_t>(offsetof(Display_t0A5D09F1F2EB8025FE40EE0F81E0D01BB47A9B44_StaticFields, ___onDisplaysUpdated_3)); }
	inline DisplaysUpdatedDelegate_tC6A6AD44FAD98C9E28479FFF4BD3D9932458A6A1 * get_onDisplaysUpdated_3() const { return ___onDisplaysUpdated_3; }
	inline DisplaysUpdatedDelegate_tC6A6AD44FAD98C9E28479FFF4BD3D9932458A6A1 ** get_address_of_onDisplaysUpdated_3() { return &___onDisplaysUpdated_3; }
	inline void set_onDisplaysUpdated_3(DisplaysUpdatedDelegate_tC6A6AD44FAD98C9E28479FFF4BD3D9932458A6A1 * value)
	{
		___onDisplaysUpdated_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onDisplaysUpdated_3), (void*)value);
	}
};


// UnityEngine.UIElements.DisplayStyle
struct DisplayStyle_tD3DD991353D6836E1B655D9C07505DE18FD05A2E 
{
public:
	// System.Int32 UnityEngine.UIElements.DisplayStyle::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DisplayStyle_tD3DD991353D6836E1B655D9C07505DE18FD05A2E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UIElements.DynamicAtlasFilters
struct DynamicAtlasFilters_tE04BEE535DCB04761C356825B98C8CE04F34B13D 
{
public:
	// System.Int32 UnityEngine.UIElements.DynamicAtlasFilters::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DynamicAtlasFilters_tE04BEE535DCB04761C356825B98C8CE04F34B13D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UIElements.DynamicAtlasFiltersInternal
struct DynamicAtlasFiltersInternal_t04B6CC3821AC8596B15A7B93FE024DE7E37B5CD7 
{
public:
	// System.Int32 UnityEngine.UIElements.DynamicAtlasFiltersInternal::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DynamicAtlasFiltersInternal_t04B6CC3821AC8596B15A7B93FE024DE7E37B5CD7, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.EventModifiers
struct EventModifiers_t74E579DA08774C9BED20643F03DA610285143BFA 
{
public:
	// System.Int32 UnityEngine.EventModifiers::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(EventModifiers_t74E579DA08774C9BED20643F03DA610285143BFA, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
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

// UnityEngine.IMECompositionMode
struct IMECompositionMode_t8755B1BD5D22F5DE23A46F79403A234844D7A5C8 
{
public:
	// System.Int32 UnityEngine.IMECompositionMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(IMECompositionMode_t8755B1BD5D22F5DE23A46F79403A234844D7A5C8, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.KeyCode
struct KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4 
{
public:
	// System.Int32 UnityEngine.KeyCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4, ___value___2)); }
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

// UnityEngine.UIElements.UIR.OwnedState
struct OwnedState_tF656434CCC3EA7FA6667951D3C7F62EA5D35A0E3 
{
public:
	// System.Byte UnityEngine.UIElements.UIR.OwnedState::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(OwnedState_tF656434CCC3EA7FA6667951D3C7F62EA5D35A0E3, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UIElements.PanelClearSettings
struct PanelClearSettings_t3A957E91B3B162582F4BFEF32D08A44BE0BF2B93 
{
public:
	// System.Boolean UnityEngine.UIElements.PanelClearSettings::clearDepthStencil
	bool ___clearDepthStencil_0;
	// System.Boolean UnityEngine.UIElements.PanelClearSettings::clearColor
	bool ___clearColor_1;
	// UnityEngine.Color UnityEngine.UIElements.PanelClearSettings::color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___color_2;

public:
	inline static int32_t get_offset_of_clearDepthStencil_0() { return static_cast<int32_t>(offsetof(PanelClearSettings_t3A957E91B3B162582F4BFEF32D08A44BE0BF2B93, ___clearDepthStencil_0)); }
	inline bool get_clearDepthStencil_0() const { return ___clearDepthStencil_0; }
	inline bool* get_address_of_clearDepthStencil_0() { return &___clearDepthStencil_0; }
	inline void set_clearDepthStencil_0(bool value)
	{
		___clearDepthStencil_0 = value;
	}

	inline static int32_t get_offset_of_clearColor_1() { return static_cast<int32_t>(offsetof(PanelClearSettings_t3A957E91B3B162582F4BFEF32D08A44BE0BF2B93, ___clearColor_1)); }
	inline bool get_clearColor_1() const { return ___clearColor_1; }
	inline bool* get_address_of_clearColor_1() { return &___clearColor_1; }
	inline void set_clearColor_1(bool value)
	{
		___clearColor_1 = value;
	}

	inline static int32_t get_offset_of_color_2() { return static_cast<int32_t>(offsetof(PanelClearSettings_t3A957E91B3B162582F4BFEF32D08A44BE0BF2B93, ___color_2)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_color_2() const { return ___color_2; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_color_2() { return &___color_2; }
	inline void set_color_2(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___color_2 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UIElements.PanelClearSettings
struct PanelClearSettings_t3A957E91B3B162582F4BFEF32D08A44BE0BF2B93_marshaled_pinvoke
{
	int32_t ___clearDepthStencil_0;
	int32_t ___clearColor_1;
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___color_2;
};
// Native definition for COM marshalling of UnityEngine.UIElements.PanelClearSettings
struct PanelClearSettings_t3A957E91B3B162582F4BFEF32D08A44BE0BF2B93_marshaled_com
{
	int32_t ___clearDepthStencil_0;
	int32_t ___clearColor_1;
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___color_2;
};

// UnityEngine.UIElements.PanelScaleModes
struct PanelScaleModes_tA6E80DC0B3D98373D778C204E735BB24954CE354 
{
public:
	// System.Int32 UnityEngine.UIElements.PanelScaleModes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PanelScaleModes_tA6E80DC0B3D98373D778C204E735BB24954CE354, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UIElements.PanelScreenMatchModes
struct PanelScreenMatchModes_t0A28558CE09E7F57815B8D1754D88F52C0B24711 
{
public:
	// System.Int32 UnityEngine.UIElements.PanelScreenMatchModes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PanelScreenMatchModes_t0A28558CE09E7F57815B8D1754D88F52C0B24711, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UIElements.PickingMode
struct PickingMode_t865A484C7E71D4466CCE4AD16F0529F35F839346 
{
public:
	// System.Int32 UnityEngine.UIElements.PickingMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PickingMode_t865A484C7E71D4466CCE4AD16F0529F35F839346, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
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


// UnityEngine.UIElements.PropagationPhase
struct PropagationPhase_t7B3DFDBD8121F5F98A913FD3057BC6841707A758 
{
public:
	// System.Int32 UnityEngine.UIElements.PropagationPhase::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PropagationPhase_t7B3DFDBD8121F5F98A913FD3057BC6841707A758, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UIElements.PseudoStates
struct PseudoStates_t38BE56B4BC4E6FFD45828387A67BDCEF044073F5 
{
public:
	// System.Int32 UnityEngine.UIElements.PseudoStates::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PseudoStates_t38BE56B4BC4E6FFD45828387A67BDCEF044073F5, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UIElements.UIR.RenderDataDirtyTypes
struct RenderDataDirtyTypes_t267F65613548D8F160E37FAFC9FF2351C65F3A67 
{
public:
	// System.Int32 UnityEngine.UIElements.UIR.RenderDataDirtyTypes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RenderDataDirtyTypes_t267F65613548D8F160E37FAFC9FF2351C65F3A67, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UIElements.RenderHints
struct RenderHints_t70F78A63232A95A428F52E1AA635EC4A67A55B5F 
{
public:
	// System.Int32 UnityEngine.UIElements.RenderHints::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RenderHints_t70F78A63232A95A428F52E1AA635EC4A67A55B5F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UIElements.StyleKeyword
struct StyleKeyword_t85F0E8B021B205E22705BF5FC656FBD6FDA0BCCE 
{
public:
	// System.Int32 UnityEngine.UIElements.StyleKeyword::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StyleKeyword_t85F0E8B021B205E22705BF5FC656FBD6FDA0BCCE, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.TouchPhase
struct TouchPhase_tB52B8A497547FB9575DE7975D13AC7D64C3A958A 
{
public:
	// System.Int32 UnityEngine.TouchPhase::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TouchPhase_tB52B8A497547FB9575DE7975D13AC7D64C3A958A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.TouchType
struct TouchType_t2EF726465ABD45681A6686BAC426814AA087C20F 
{
public:
	// System.Int32 UnityEngine.TouchType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TouchType_t2EF726465ABD45681A6686BAC426814AA087C20F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UIElements.VisualElementFlags
struct VisualElementFlags_t6DD1E8172E44B8ED2211A95ACACCE914F1180E4B 
{
public:
	// System.Int32 UnityEngine.UIElements.VisualElementFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VisualElementFlags_t6DD1E8172E44B8ED2211A95ACACCE914F1180E4B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UIElements.EventBase/EventPropagation
struct EventPropagation_t4783D3F81F1D5CA1F34F1603062850F3E4E414F5 
{
public:
	// System.Int32 UnityEngine.UIElements.EventBase/EventPropagation::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(EventPropagation_t4783D3F81F1D5CA1F34F1603062850F3E4E414F5, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UIElements.EventBase/LifeCycleStatus
struct LifeCycleStatus_tF5689EFC202D3381890CC8A183EA267B59B4B657 
{
public:
	// System.Int32 UnityEngine.UIElements.EventBase/LifeCycleStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LifeCycleStatus_tF5689EFC202D3381890CC8A183EA267B59B4B657, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UIElements.Length/Unit
struct Unit_t8A35D768336E5DE7119DBE970388E7A92D010403 
{
public:
	// System.Int32 UnityEngine.UIElements.Length/Unit::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Unit_t8A35D768336E5DE7119DBE970388E7A92D010403, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UIElements.NavigateFocusRing/FocusableHierarchyTraversal
struct FocusableHierarchyTraversal_t6D47905FA29D442881D3D9C243EA93E74712D48E 
{
public:
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.NavigateFocusRing/FocusableHierarchyTraversal::currentFocusable
	VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * ___currentFocusable_0;
	// UnityEngine.Rect UnityEngine.UIElements.NavigateFocusRing/FocusableHierarchyTraversal::validRect
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___validRect_1;
	// System.Boolean UnityEngine.UIElements.NavigateFocusRing/FocusableHierarchyTraversal::firstPass
	bool ___firstPass_2;
	// UnityEngine.UIElements.NavigateFocusRing/ChangeDirection UnityEngine.UIElements.NavigateFocusRing/FocusableHierarchyTraversal::direction
	ChangeDirection_t34BA68392D0BB026E61B81B65AD1B09CF9DB4D27 * ___direction_3;

public:
	inline static int32_t get_offset_of_currentFocusable_0() { return static_cast<int32_t>(offsetof(FocusableHierarchyTraversal_t6D47905FA29D442881D3D9C243EA93E74712D48E, ___currentFocusable_0)); }
	inline VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * get_currentFocusable_0() const { return ___currentFocusable_0; }
	inline VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 ** get_address_of_currentFocusable_0() { return &___currentFocusable_0; }
	inline void set_currentFocusable_0(VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * value)
	{
		___currentFocusable_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentFocusable_0), (void*)value);
	}

	inline static int32_t get_offset_of_validRect_1() { return static_cast<int32_t>(offsetof(FocusableHierarchyTraversal_t6D47905FA29D442881D3D9C243EA93E74712D48E, ___validRect_1)); }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  get_validRect_1() const { return ___validRect_1; }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * get_address_of_validRect_1() { return &___validRect_1; }
	inline void set_validRect_1(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  value)
	{
		___validRect_1 = value;
	}

	inline static int32_t get_offset_of_firstPass_2() { return static_cast<int32_t>(offsetof(FocusableHierarchyTraversal_t6D47905FA29D442881D3D9C243EA93E74712D48E, ___firstPass_2)); }
	inline bool get_firstPass_2() const { return ___firstPass_2; }
	inline bool* get_address_of_firstPass_2() { return &___firstPass_2; }
	inline void set_firstPass_2(bool value)
	{
		___firstPass_2 = value;
	}

	inline static int32_t get_offset_of_direction_3() { return static_cast<int32_t>(offsetof(FocusableHierarchyTraversal_t6D47905FA29D442881D3D9C243EA93E74712D48E, ___direction_3)); }
	inline ChangeDirection_t34BA68392D0BB026E61B81B65AD1B09CF9DB4D27 * get_direction_3() const { return ___direction_3; }
	inline ChangeDirection_t34BA68392D0BB026E61B81B65AD1B09CF9DB4D27 ** get_address_of_direction_3() { return &___direction_3; }
	inline void set_direction_3(ChangeDirection_t34BA68392D0BB026E61B81B65AD1B09CF9DB4D27 * value)
	{
		___direction_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___direction_3), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UIElements.NavigateFocusRing/FocusableHierarchyTraversal
struct FocusableHierarchyTraversal_t6D47905FA29D442881D3D9C243EA93E74712D48E_marshaled_pinvoke
{
	VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * ___currentFocusable_0;
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___validRect_1;
	int32_t ___firstPass_2;
	ChangeDirection_t34BA68392D0BB026E61B81B65AD1B09CF9DB4D27 * ___direction_3;
};
// Native definition for COM marshalling of UnityEngine.UIElements.NavigateFocusRing/FocusableHierarchyTraversal
struct FocusableHierarchyTraversal_t6D47905FA29D442881D3D9C243EA93E74712D48E_marshaled_com
{
	VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * ___currentFocusable_0;
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___validRect_1;
	int32_t ___firstPass_2;
	ChangeDirection_t34BA68392D0BB026E61B81B65AD1B09CF9DB4D27 * ___direction_3;
};

// UnityEngine.UIElements.NavigationMoveEvent/Direction
struct Direction_tE35FED1A9530BC8B3C8CE98F319EB4017B337945 
{
public:
	// System.Int32 UnityEngine.UIElements.NavigationMoveEvent/Direction::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Direction_tE35FED1A9530BC8B3C8CE98F319EB4017B337945, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UIElements.VisualElement/RenderTargetMode
struct RenderTargetMode_t8888DEDC5CD8B1CBCDBF7ED2253D2CF4F14EEC90 
{
public:
	// System.Int32 UnityEngine.UIElements.VisualElement/RenderTargetMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RenderTargetMode_t8888DEDC5CD8B1CBCDBF7ED2253D2CF4F14EEC90, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UIElements.VisualElementFocusRing/DefaultFocusOrder
struct DefaultFocusOrder_t35BEF8CE835A59DEF00FE7FA68C1CB148B4F1B21 
{
public:
	// System.Int32 UnityEngine.UIElements.VisualElementFocusRing/DefaultFocusOrder::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DefaultFocusOrder_t35BEF8CE835A59DEF00FE7FA68C1CB148B4F1B21, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Collections.Generic.SortedDictionary`2/ValueCollection/Enumerator<UnityEngine.UIElements.UIDocumentHierarchicalIndex,System.Object>
struct Enumerator_tBFDF6BB46FA99A9FD7AF0E80899A3356F4E1C9F0 
{
public:
	// System.Collections.Generic.SortedDictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.SortedDictionary`2/ValueCollection/Enumerator::_dictEnum
	Enumerator_t682025EC722C4629C3B3153DEDA91F08FF362F04  ____dictEnum_0;

public:
	inline static int32_t get_offset_of__dictEnum_0() { return static_cast<int32_t>(offsetof(Enumerator_tBFDF6BB46FA99A9FD7AF0E80899A3356F4E1C9F0, ____dictEnum_0)); }
	inline Enumerator_t682025EC722C4629C3B3153DEDA91F08FF362F04  get__dictEnum_0() const { return ____dictEnum_0; }
	inline Enumerator_t682025EC722C4629C3B3153DEDA91F08FF362F04 * get_address_of__dictEnum_0() { return &____dictEnum_0; }
	inline void set__dictEnum_0(Enumerator_t682025EC722C4629C3B3153DEDA91F08FF362F04  value)
	{
		____dictEnum_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&____dictEnum_0))->____treeEnum_0))->____tree_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&____dictEnum_0))->____treeEnum_0))->____stack_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&____dictEnum_0))->____treeEnum_0))->____current_4), (void*)NULL);
		#endif
	}
};


// System.Collections.Generic.SortedDictionary`2/ValueCollection/Enumerator<UnityEngine.UIElements.UIDocumentHierarchicalIndex,UnityEngine.UIElements.UIDocument>
struct Enumerator_tDDF94DCA5EBC2A0CDBBB3D0A51D59499A00CB568 
{
public:
	// System.Collections.Generic.SortedDictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.SortedDictionary`2/ValueCollection/Enumerator::_dictEnum
	Enumerator_t4D922CA4220EF183D8E71A2050B54DD28AE1B165  ____dictEnum_0;

public:
	inline static int32_t get_offset_of__dictEnum_0() { return static_cast<int32_t>(offsetof(Enumerator_tDDF94DCA5EBC2A0CDBBB3D0A51D59499A00CB568, ____dictEnum_0)); }
	inline Enumerator_t4D922CA4220EF183D8E71A2050B54DD28AE1B165  get__dictEnum_0() const { return ____dictEnum_0; }
	inline Enumerator_t4D922CA4220EF183D8E71A2050B54DD28AE1B165 * get_address_of__dictEnum_0() { return &____dictEnum_0; }
	inline void set__dictEnum_0(Enumerator_t4D922CA4220EF183D8E71A2050B54DD28AE1B165  value)
	{
		____dictEnum_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&____dictEnum_0))->____treeEnum_0))->____tree_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&____dictEnum_0))->____treeEnum_0))->____stack_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&____dictEnum_0))->____treeEnum_0))->____current_4), (void*)NULL);
		#endif
	}
};


// UnityEngine.UIElements.UIR.BMPAlloc
struct BMPAlloc_tB4177CE1148B2C839437C064F7019957DA616504 
{
public:
	// System.Int32 UnityEngine.UIElements.UIR.BMPAlloc::page
	int32_t ___page_1;
	// System.UInt16 UnityEngine.UIElements.UIR.BMPAlloc::pageLine
	uint16_t ___pageLine_2;
	// System.Byte UnityEngine.UIElements.UIR.BMPAlloc::bitIndex
	uint8_t ___bitIndex_3;
	// UnityEngine.UIElements.UIR.OwnedState UnityEngine.UIElements.UIR.BMPAlloc::ownedState
	uint8_t ___ownedState_4;

public:
	inline static int32_t get_offset_of_page_1() { return static_cast<int32_t>(offsetof(BMPAlloc_tB4177CE1148B2C839437C064F7019957DA616504, ___page_1)); }
	inline int32_t get_page_1() const { return ___page_1; }
	inline int32_t* get_address_of_page_1() { return &___page_1; }
	inline void set_page_1(int32_t value)
	{
		___page_1 = value;
	}

	inline static int32_t get_offset_of_pageLine_2() { return static_cast<int32_t>(offsetof(BMPAlloc_tB4177CE1148B2C839437C064F7019957DA616504, ___pageLine_2)); }
	inline uint16_t get_pageLine_2() const { return ___pageLine_2; }
	inline uint16_t* get_address_of_pageLine_2() { return &___pageLine_2; }
	inline void set_pageLine_2(uint16_t value)
	{
		___pageLine_2 = value;
	}

	inline static int32_t get_offset_of_bitIndex_3() { return static_cast<int32_t>(offsetof(BMPAlloc_tB4177CE1148B2C839437C064F7019957DA616504, ___bitIndex_3)); }
	inline uint8_t get_bitIndex_3() const { return ___bitIndex_3; }
	inline uint8_t* get_address_of_bitIndex_3() { return &___bitIndex_3; }
	inline void set_bitIndex_3(uint8_t value)
	{
		___bitIndex_3 = value;
	}

	inline static int32_t get_offset_of_ownedState_4() { return static_cast<int32_t>(offsetof(BMPAlloc_tB4177CE1148B2C839437C064F7019957DA616504, ___ownedState_4)); }
	inline uint8_t get_ownedState_4() const { return ___ownedState_4; }
	inline uint8_t* get_address_of_ownedState_4() { return &___ownedState_4; }
	inline void set_ownedState_4(uint8_t value)
	{
		___ownedState_4 = value;
	}
};

struct BMPAlloc_tB4177CE1148B2C839437C064F7019957DA616504_StaticFields
{
public:
	// UnityEngine.UIElements.UIR.BMPAlloc UnityEngine.UIElements.UIR.BMPAlloc::Invalid
	BMPAlloc_tB4177CE1148B2C839437C064F7019957DA616504  ___Invalid_0;

public:
	inline static int32_t get_offset_of_Invalid_0() { return static_cast<int32_t>(offsetof(BMPAlloc_tB4177CE1148B2C839437C064F7019957DA616504_StaticFields, ___Invalid_0)); }
	inline BMPAlloc_tB4177CE1148B2C839437C064F7019957DA616504  get_Invalid_0() const { return ___Invalid_0; }
	inline BMPAlloc_tB4177CE1148B2C839437C064F7019957DA616504 * get_address_of_Invalid_0() { return &___Invalid_0; }
	inline void set_Invalid_0(BMPAlloc_tB4177CE1148B2C839437C064F7019957DA616504  value)
	{
		___Invalid_0 = value;
	}
};


// UnityEngine.UIElements.BaseVisualElementPanel
struct BaseVisualElementPanel_tFF0B76C4FDAE6AA5D9A055D1FDD29AE67B93B95D  : public RuntimeObject
{
public:
	// System.Action`1<UnityEngine.UIElements.BaseVisualElementPanel> UnityEngine.UIElements.BaseVisualElementPanel::panelDisposed
	Action_1_tF8AEA2BF5A293F9FCAE523BDD73487F898EF64CA * ___panelDisposed_0;
	// System.Single UnityEngine.UIElements.BaseVisualElementPanel::m_Scale
	float ___m_Scale_1;
	// UnityEngine.Yoga.YogaConfig UnityEngine.UIElements.BaseVisualElementPanel::yogaConfig
	YogaConfig_tA06BDF520DE54384107CF42E1E9909DB1C28A7E7 * ___yogaConfig_2;
	// System.Single UnityEngine.UIElements.BaseVisualElementPanel::m_PixelsPerPoint
	float ___m_PixelsPerPoint_3;
	// System.Single UnityEngine.UIElements.BaseVisualElementPanel::m_SortingPriority
	float ___m_SortingPriority_4;
	// UnityEngine.UIElements.PanelClearSettings UnityEngine.UIElements.BaseVisualElementPanel::<clearSettings>k__BackingField
	PanelClearSettings_t3A957E91B3B162582F4BFEF32D08A44BE0BF2B93  ___U3CclearSettingsU3Ek__BackingField_5;
	// System.Boolean UnityEngine.UIElements.BaseVisualElementPanel::<duringLayoutPhase>k__BackingField
	bool ___U3CduringLayoutPhaseU3Ek__BackingField_6;
	// UnityEngine.UIElements.RepaintData UnityEngine.UIElements.BaseVisualElementPanel::<repaintData>k__BackingField
	RepaintData_t6B9F7CC75C7E95F627CEC015CB90D63217E4166D * ___U3CrepaintDataU3Ek__BackingField_7;
	// UnityEngine.UIElements.ICursorManager UnityEngine.UIElements.BaseVisualElementPanel::<cursorManager>k__BackingField
	RuntimeObject* ___U3CcursorManagerU3Ek__BackingField_8;
	// UnityEngine.UIElements.ContextualMenuManager UnityEngine.UIElements.BaseVisualElementPanel::<contextualMenuManager>k__BackingField
	ContextualMenuManager_tA971837C9CD7DBDFCA02934FB02DF7B2D733ECB4 * ___U3CcontextualMenuManagerU3Ek__BackingField_9;
	// System.Boolean UnityEngine.UIElements.BaseVisualElementPanel::<disposed>k__BackingField
	bool ___U3CdisposedU3Ek__BackingField_10;
	// UnityEngine.UIElements.ElementUnderPointer UnityEngine.UIElements.BaseVisualElementPanel::m_TopElementUnderPointers
	ElementUnderPointer_t2E239D7BB884886ABFF26392EFFA31E045883908 * ___m_TopElementUnderPointers_11;
	// System.Action UnityEngine.UIElements.BaseVisualElementPanel::standardShaderChanged
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___standardShaderChanged_12;
	// System.Action UnityEngine.UIElements.BaseVisualElementPanel::standardWorldSpaceShaderChanged
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___standardWorldSpaceShaderChanged_13;
	// System.Action UnityEngine.UIElements.BaseVisualElementPanel::atlasChanged
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___atlasChanged_14;
	// System.Action`1<UnityEngine.Material> UnityEngine.UIElements.BaseVisualElementPanel::updateMaterial
	Action_1_t63C45C5B44E8772727060B2DE65BB77DD9B77BE0 * ___updateMaterial_15;
	// UnityEngine.UIElements.HierarchyEvent UnityEngine.UIElements.BaseVisualElementPanel::hierarchyChanged
	HierarchyEvent_tC402676F418C72D382D1804DF58B7B40B36AFE56 * ___hierarchyChanged_16;
	// System.Action`1<UnityEngine.UIElements.IPanel> UnityEngine.UIElements.BaseVisualElementPanel::beforeUpdate
	Action_1_tB95D7C9EAABB9B1D6566749267C21000DE5CD130 * ___beforeUpdate_17;

public:
	inline static int32_t get_offset_of_panelDisposed_0() { return static_cast<int32_t>(offsetof(BaseVisualElementPanel_tFF0B76C4FDAE6AA5D9A055D1FDD29AE67B93B95D, ___panelDisposed_0)); }
	inline Action_1_tF8AEA2BF5A293F9FCAE523BDD73487F898EF64CA * get_panelDisposed_0() const { return ___panelDisposed_0; }
	inline Action_1_tF8AEA2BF5A293F9FCAE523BDD73487F898EF64CA ** get_address_of_panelDisposed_0() { return &___panelDisposed_0; }
	inline void set_panelDisposed_0(Action_1_tF8AEA2BF5A293F9FCAE523BDD73487F898EF64CA * value)
	{
		___panelDisposed_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___panelDisposed_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Scale_1() { return static_cast<int32_t>(offsetof(BaseVisualElementPanel_tFF0B76C4FDAE6AA5D9A055D1FDD29AE67B93B95D, ___m_Scale_1)); }
	inline float get_m_Scale_1() const { return ___m_Scale_1; }
	inline float* get_address_of_m_Scale_1() { return &___m_Scale_1; }
	inline void set_m_Scale_1(float value)
	{
		___m_Scale_1 = value;
	}

	inline static int32_t get_offset_of_yogaConfig_2() { return static_cast<int32_t>(offsetof(BaseVisualElementPanel_tFF0B76C4FDAE6AA5D9A055D1FDD29AE67B93B95D, ___yogaConfig_2)); }
	inline YogaConfig_tA06BDF520DE54384107CF42E1E9909DB1C28A7E7 * get_yogaConfig_2() const { return ___yogaConfig_2; }
	inline YogaConfig_tA06BDF520DE54384107CF42E1E9909DB1C28A7E7 ** get_address_of_yogaConfig_2() { return &___yogaConfig_2; }
	inline void set_yogaConfig_2(YogaConfig_tA06BDF520DE54384107CF42E1E9909DB1C28A7E7 * value)
	{
		___yogaConfig_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___yogaConfig_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_PixelsPerPoint_3() { return static_cast<int32_t>(offsetof(BaseVisualElementPanel_tFF0B76C4FDAE6AA5D9A055D1FDD29AE67B93B95D, ___m_PixelsPerPoint_3)); }
	inline float get_m_PixelsPerPoint_3() const { return ___m_PixelsPerPoint_3; }
	inline float* get_address_of_m_PixelsPerPoint_3() { return &___m_PixelsPerPoint_3; }
	inline void set_m_PixelsPerPoint_3(float value)
	{
		___m_PixelsPerPoint_3 = value;
	}

	inline static int32_t get_offset_of_m_SortingPriority_4() { return static_cast<int32_t>(offsetof(BaseVisualElementPanel_tFF0B76C4FDAE6AA5D9A055D1FDD29AE67B93B95D, ___m_SortingPriority_4)); }
	inline float get_m_SortingPriority_4() const { return ___m_SortingPriority_4; }
	inline float* get_address_of_m_SortingPriority_4() { return &___m_SortingPriority_4; }
	inline void set_m_SortingPriority_4(float value)
	{
		___m_SortingPriority_4 = value;
	}

	inline static int32_t get_offset_of_U3CclearSettingsU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(BaseVisualElementPanel_tFF0B76C4FDAE6AA5D9A055D1FDD29AE67B93B95D, ___U3CclearSettingsU3Ek__BackingField_5)); }
	inline PanelClearSettings_t3A957E91B3B162582F4BFEF32D08A44BE0BF2B93  get_U3CclearSettingsU3Ek__BackingField_5() const { return ___U3CclearSettingsU3Ek__BackingField_5; }
	inline PanelClearSettings_t3A957E91B3B162582F4BFEF32D08A44BE0BF2B93 * get_address_of_U3CclearSettingsU3Ek__BackingField_5() { return &___U3CclearSettingsU3Ek__BackingField_5; }
	inline void set_U3CclearSettingsU3Ek__BackingField_5(PanelClearSettings_t3A957E91B3B162582F4BFEF32D08A44BE0BF2B93  value)
	{
		___U3CclearSettingsU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CduringLayoutPhaseU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(BaseVisualElementPanel_tFF0B76C4FDAE6AA5D9A055D1FDD29AE67B93B95D, ___U3CduringLayoutPhaseU3Ek__BackingField_6)); }
	inline bool get_U3CduringLayoutPhaseU3Ek__BackingField_6() const { return ___U3CduringLayoutPhaseU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CduringLayoutPhaseU3Ek__BackingField_6() { return &___U3CduringLayoutPhaseU3Ek__BackingField_6; }
	inline void set_U3CduringLayoutPhaseU3Ek__BackingField_6(bool value)
	{
		___U3CduringLayoutPhaseU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CrepaintDataU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(BaseVisualElementPanel_tFF0B76C4FDAE6AA5D9A055D1FDD29AE67B93B95D, ___U3CrepaintDataU3Ek__BackingField_7)); }
	inline RepaintData_t6B9F7CC75C7E95F627CEC015CB90D63217E4166D * get_U3CrepaintDataU3Ek__BackingField_7() const { return ___U3CrepaintDataU3Ek__BackingField_7; }
	inline RepaintData_t6B9F7CC75C7E95F627CEC015CB90D63217E4166D ** get_address_of_U3CrepaintDataU3Ek__BackingField_7() { return &___U3CrepaintDataU3Ek__BackingField_7; }
	inline void set_U3CrepaintDataU3Ek__BackingField_7(RepaintData_t6B9F7CC75C7E95F627CEC015CB90D63217E4166D * value)
	{
		___U3CrepaintDataU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CrepaintDataU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CcursorManagerU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(BaseVisualElementPanel_tFF0B76C4FDAE6AA5D9A055D1FDD29AE67B93B95D, ___U3CcursorManagerU3Ek__BackingField_8)); }
	inline RuntimeObject* get_U3CcursorManagerU3Ek__BackingField_8() const { return ___U3CcursorManagerU3Ek__BackingField_8; }
	inline RuntimeObject** get_address_of_U3CcursorManagerU3Ek__BackingField_8() { return &___U3CcursorManagerU3Ek__BackingField_8; }
	inline void set_U3CcursorManagerU3Ek__BackingField_8(RuntimeObject* value)
	{
		___U3CcursorManagerU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CcursorManagerU3Ek__BackingField_8), (void*)value);
	}

	inline static int32_t get_offset_of_U3CcontextualMenuManagerU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(BaseVisualElementPanel_tFF0B76C4FDAE6AA5D9A055D1FDD29AE67B93B95D, ___U3CcontextualMenuManagerU3Ek__BackingField_9)); }
	inline ContextualMenuManager_tA971837C9CD7DBDFCA02934FB02DF7B2D733ECB4 * get_U3CcontextualMenuManagerU3Ek__BackingField_9() const { return ___U3CcontextualMenuManagerU3Ek__BackingField_9; }
	inline ContextualMenuManager_tA971837C9CD7DBDFCA02934FB02DF7B2D733ECB4 ** get_address_of_U3CcontextualMenuManagerU3Ek__BackingField_9() { return &___U3CcontextualMenuManagerU3Ek__BackingField_9; }
	inline void set_U3CcontextualMenuManagerU3Ek__BackingField_9(ContextualMenuManager_tA971837C9CD7DBDFCA02934FB02DF7B2D733ECB4 * value)
	{
		___U3CcontextualMenuManagerU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CcontextualMenuManagerU3Ek__BackingField_9), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdisposedU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(BaseVisualElementPanel_tFF0B76C4FDAE6AA5D9A055D1FDD29AE67B93B95D, ___U3CdisposedU3Ek__BackingField_10)); }
	inline bool get_U3CdisposedU3Ek__BackingField_10() const { return ___U3CdisposedU3Ek__BackingField_10; }
	inline bool* get_address_of_U3CdisposedU3Ek__BackingField_10() { return &___U3CdisposedU3Ek__BackingField_10; }
	inline void set_U3CdisposedU3Ek__BackingField_10(bool value)
	{
		___U3CdisposedU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_m_TopElementUnderPointers_11() { return static_cast<int32_t>(offsetof(BaseVisualElementPanel_tFF0B76C4FDAE6AA5D9A055D1FDD29AE67B93B95D, ___m_TopElementUnderPointers_11)); }
	inline ElementUnderPointer_t2E239D7BB884886ABFF26392EFFA31E045883908 * get_m_TopElementUnderPointers_11() const { return ___m_TopElementUnderPointers_11; }
	inline ElementUnderPointer_t2E239D7BB884886ABFF26392EFFA31E045883908 ** get_address_of_m_TopElementUnderPointers_11() { return &___m_TopElementUnderPointers_11; }
	inline void set_m_TopElementUnderPointers_11(ElementUnderPointer_t2E239D7BB884886ABFF26392EFFA31E045883908 * value)
	{
		___m_TopElementUnderPointers_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TopElementUnderPointers_11), (void*)value);
	}

	inline static int32_t get_offset_of_standardShaderChanged_12() { return static_cast<int32_t>(offsetof(BaseVisualElementPanel_tFF0B76C4FDAE6AA5D9A055D1FDD29AE67B93B95D, ___standardShaderChanged_12)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_standardShaderChanged_12() const { return ___standardShaderChanged_12; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_standardShaderChanged_12() { return &___standardShaderChanged_12; }
	inline void set_standardShaderChanged_12(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___standardShaderChanged_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___standardShaderChanged_12), (void*)value);
	}

	inline static int32_t get_offset_of_standardWorldSpaceShaderChanged_13() { return static_cast<int32_t>(offsetof(BaseVisualElementPanel_tFF0B76C4FDAE6AA5D9A055D1FDD29AE67B93B95D, ___standardWorldSpaceShaderChanged_13)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_standardWorldSpaceShaderChanged_13() const { return ___standardWorldSpaceShaderChanged_13; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_standardWorldSpaceShaderChanged_13() { return &___standardWorldSpaceShaderChanged_13; }
	inline void set_standardWorldSpaceShaderChanged_13(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___standardWorldSpaceShaderChanged_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___standardWorldSpaceShaderChanged_13), (void*)value);
	}

	inline static int32_t get_offset_of_atlasChanged_14() { return static_cast<int32_t>(offsetof(BaseVisualElementPanel_tFF0B76C4FDAE6AA5D9A055D1FDD29AE67B93B95D, ___atlasChanged_14)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_atlasChanged_14() const { return ___atlasChanged_14; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_atlasChanged_14() { return &___atlasChanged_14; }
	inline void set_atlasChanged_14(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___atlasChanged_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___atlasChanged_14), (void*)value);
	}

	inline static int32_t get_offset_of_updateMaterial_15() { return static_cast<int32_t>(offsetof(BaseVisualElementPanel_tFF0B76C4FDAE6AA5D9A055D1FDD29AE67B93B95D, ___updateMaterial_15)); }
	inline Action_1_t63C45C5B44E8772727060B2DE65BB77DD9B77BE0 * get_updateMaterial_15() const { return ___updateMaterial_15; }
	inline Action_1_t63C45C5B44E8772727060B2DE65BB77DD9B77BE0 ** get_address_of_updateMaterial_15() { return &___updateMaterial_15; }
	inline void set_updateMaterial_15(Action_1_t63C45C5B44E8772727060B2DE65BB77DD9B77BE0 * value)
	{
		___updateMaterial_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___updateMaterial_15), (void*)value);
	}

	inline static int32_t get_offset_of_hierarchyChanged_16() { return static_cast<int32_t>(offsetof(BaseVisualElementPanel_tFF0B76C4FDAE6AA5D9A055D1FDD29AE67B93B95D, ___hierarchyChanged_16)); }
	inline HierarchyEvent_tC402676F418C72D382D1804DF58B7B40B36AFE56 * get_hierarchyChanged_16() const { return ___hierarchyChanged_16; }
	inline HierarchyEvent_tC402676F418C72D382D1804DF58B7B40B36AFE56 ** get_address_of_hierarchyChanged_16() { return &___hierarchyChanged_16; }
	inline void set_hierarchyChanged_16(HierarchyEvent_tC402676F418C72D382D1804DF58B7B40B36AFE56 * value)
	{
		___hierarchyChanged_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hierarchyChanged_16), (void*)value);
	}

	inline static int32_t get_offset_of_beforeUpdate_17() { return static_cast<int32_t>(offsetof(BaseVisualElementPanel_tFF0B76C4FDAE6AA5D9A055D1FDD29AE67B93B95D, ___beforeUpdate_17)); }
	inline Action_1_tB95D7C9EAABB9B1D6566749267C21000DE5CD130 * get_beforeUpdate_17() const { return ___beforeUpdate_17; }
	inline Action_1_tB95D7C9EAABB9B1D6566749267C21000DE5CD130 ** get_address_of_beforeUpdate_17() { return &___beforeUpdate_17; }
	inline void set_beforeUpdate_17(Action_1_tB95D7C9EAABB9B1D6566749267C21000DE5CD130 * value)
	{
		___beforeUpdate_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___beforeUpdate_17), (void*)value);
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.UIElements.DynamicAtlas
struct DynamicAtlas_t024D0D5DF3B5CCA7D05187B7745B0F6F83662D60  : public AtlasBase_t04E16651AFF344EDD21EB14F2E9CF0B76DACA9E3
{
public:
	// System.Collections.Generic.Dictionary`2<UnityEngine.Texture,UnityEngine.UIElements.DynamicAtlas/TextureInfo> UnityEngine.UIElements.DynamicAtlas::m_Database
	Dictionary_2_tC692C41DA3B6B1FAF3A4349307C7EE513C236CE6 * ___m_Database_1;
	// UnityEngine.UIElements.DynamicAtlasPage UnityEngine.UIElements.DynamicAtlas::m_PointPage
	DynamicAtlasPage_tEBA1382749248D64AA785873B38F372CB4054FFF * ___m_PointPage_2;
	// UnityEngine.UIElements.DynamicAtlasPage UnityEngine.UIElements.DynamicAtlas::m_BilinearPage
	DynamicAtlasPage_tEBA1382749248D64AA785873B38F372CB4054FFF * ___m_BilinearPage_3;
	// UnityEngine.ColorSpace UnityEngine.UIElements.DynamicAtlas::m_ColorSpace
	int32_t ___m_ColorSpace_4;
	// System.Collections.Generic.List`1<UnityEngine.UIElements.IPanel> UnityEngine.UIElements.DynamicAtlas::m_Panels
	List_1_tB114B037925B819DCABBE08466412B77A419A324 * ___m_Panels_5;
	// System.Int32 UnityEngine.UIElements.DynamicAtlas::m_MinAtlasSize
	int32_t ___m_MinAtlasSize_6;
	// System.Int32 UnityEngine.UIElements.DynamicAtlas::m_MaxAtlasSize
	int32_t ___m_MaxAtlasSize_7;
	// System.Int32 UnityEngine.UIElements.DynamicAtlas::m_MaxSubTextureSize
	int32_t ___m_MaxSubTextureSize_8;
	// UnityEngine.UIElements.DynamicAtlasFilters UnityEngine.UIElements.DynamicAtlas::m_ActiveFilters
	int32_t ___m_ActiveFilters_9;
	// UnityEngine.UIElements.DynamicAtlasCustomFilter UnityEngine.UIElements.DynamicAtlas::m_CustomFilter
	DynamicAtlasCustomFilter_tCC685CA75B6C1A4A973B7401B0C37E35352476AA * ___m_CustomFilter_10;

public:
	inline static int32_t get_offset_of_m_Database_1() { return static_cast<int32_t>(offsetof(DynamicAtlas_t024D0D5DF3B5CCA7D05187B7745B0F6F83662D60, ___m_Database_1)); }
	inline Dictionary_2_tC692C41DA3B6B1FAF3A4349307C7EE513C236CE6 * get_m_Database_1() const { return ___m_Database_1; }
	inline Dictionary_2_tC692C41DA3B6B1FAF3A4349307C7EE513C236CE6 ** get_address_of_m_Database_1() { return &___m_Database_1; }
	inline void set_m_Database_1(Dictionary_2_tC692C41DA3B6B1FAF3A4349307C7EE513C236CE6 * value)
	{
		___m_Database_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Database_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_PointPage_2() { return static_cast<int32_t>(offsetof(DynamicAtlas_t024D0D5DF3B5CCA7D05187B7745B0F6F83662D60, ___m_PointPage_2)); }
	inline DynamicAtlasPage_tEBA1382749248D64AA785873B38F372CB4054FFF * get_m_PointPage_2() const { return ___m_PointPage_2; }
	inline DynamicAtlasPage_tEBA1382749248D64AA785873B38F372CB4054FFF ** get_address_of_m_PointPage_2() { return &___m_PointPage_2; }
	inline void set_m_PointPage_2(DynamicAtlasPage_tEBA1382749248D64AA785873B38F372CB4054FFF * value)
	{
		___m_PointPage_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PointPage_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_BilinearPage_3() { return static_cast<int32_t>(offsetof(DynamicAtlas_t024D0D5DF3B5CCA7D05187B7745B0F6F83662D60, ___m_BilinearPage_3)); }
	inline DynamicAtlasPage_tEBA1382749248D64AA785873B38F372CB4054FFF * get_m_BilinearPage_3() const { return ___m_BilinearPage_3; }
	inline DynamicAtlasPage_tEBA1382749248D64AA785873B38F372CB4054FFF ** get_address_of_m_BilinearPage_3() { return &___m_BilinearPage_3; }
	inline void set_m_BilinearPage_3(DynamicAtlasPage_tEBA1382749248D64AA785873B38F372CB4054FFF * value)
	{
		___m_BilinearPage_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_BilinearPage_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorSpace_4() { return static_cast<int32_t>(offsetof(DynamicAtlas_t024D0D5DF3B5CCA7D05187B7745B0F6F83662D60, ___m_ColorSpace_4)); }
	inline int32_t get_m_ColorSpace_4() const { return ___m_ColorSpace_4; }
	inline int32_t* get_address_of_m_ColorSpace_4() { return &___m_ColorSpace_4; }
	inline void set_m_ColorSpace_4(int32_t value)
	{
		___m_ColorSpace_4 = value;
	}

	inline static int32_t get_offset_of_m_Panels_5() { return static_cast<int32_t>(offsetof(DynamicAtlas_t024D0D5DF3B5CCA7D05187B7745B0F6F83662D60, ___m_Panels_5)); }
	inline List_1_tB114B037925B819DCABBE08466412B77A419A324 * get_m_Panels_5() const { return ___m_Panels_5; }
	inline List_1_tB114B037925B819DCABBE08466412B77A419A324 ** get_address_of_m_Panels_5() { return &___m_Panels_5; }
	inline void set_m_Panels_5(List_1_tB114B037925B819DCABBE08466412B77A419A324 * value)
	{
		___m_Panels_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Panels_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_MinAtlasSize_6() { return static_cast<int32_t>(offsetof(DynamicAtlas_t024D0D5DF3B5CCA7D05187B7745B0F6F83662D60, ___m_MinAtlasSize_6)); }
	inline int32_t get_m_MinAtlasSize_6() const { return ___m_MinAtlasSize_6; }
	inline int32_t* get_address_of_m_MinAtlasSize_6() { return &___m_MinAtlasSize_6; }
	inline void set_m_MinAtlasSize_6(int32_t value)
	{
		___m_MinAtlasSize_6 = value;
	}

	inline static int32_t get_offset_of_m_MaxAtlasSize_7() { return static_cast<int32_t>(offsetof(DynamicAtlas_t024D0D5DF3B5CCA7D05187B7745B0F6F83662D60, ___m_MaxAtlasSize_7)); }
	inline int32_t get_m_MaxAtlasSize_7() const { return ___m_MaxAtlasSize_7; }
	inline int32_t* get_address_of_m_MaxAtlasSize_7() { return &___m_MaxAtlasSize_7; }
	inline void set_m_MaxAtlasSize_7(int32_t value)
	{
		___m_MaxAtlasSize_7 = value;
	}

	inline static int32_t get_offset_of_m_MaxSubTextureSize_8() { return static_cast<int32_t>(offsetof(DynamicAtlas_t024D0D5DF3B5CCA7D05187B7745B0F6F83662D60, ___m_MaxSubTextureSize_8)); }
	inline int32_t get_m_MaxSubTextureSize_8() const { return ___m_MaxSubTextureSize_8; }
	inline int32_t* get_address_of_m_MaxSubTextureSize_8() { return &___m_MaxSubTextureSize_8; }
	inline void set_m_MaxSubTextureSize_8(int32_t value)
	{
		___m_MaxSubTextureSize_8 = value;
	}

	inline static int32_t get_offset_of_m_ActiveFilters_9() { return static_cast<int32_t>(offsetof(DynamicAtlas_t024D0D5DF3B5CCA7D05187B7745B0F6F83662D60, ___m_ActiveFilters_9)); }
	inline int32_t get_m_ActiveFilters_9() const { return ___m_ActiveFilters_9; }
	inline int32_t* get_address_of_m_ActiveFilters_9() { return &___m_ActiveFilters_9; }
	inline void set_m_ActiveFilters_9(int32_t value)
	{
		___m_ActiveFilters_9 = value;
	}

	inline static int32_t get_offset_of_m_CustomFilter_10() { return static_cast<int32_t>(offsetof(DynamicAtlas_t024D0D5DF3B5CCA7D05187B7745B0F6F83662D60, ___m_CustomFilter_10)); }
	inline DynamicAtlasCustomFilter_tCC685CA75B6C1A4A973B7401B0C37E35352476AA * get_m_CustomFilter_10() const { return ___m_CustomFilter_10; }
	inline DynamicAtlasCustomFilter_tCC685CA75B6C1A4A973B7401B0C37E35352476AA ** get_address_of_m_CustomFilter_10() { return &___m_CustomFilter_10; }
	inline void set_m_CustomFilter_10(DynamicAtlasCustomFilter_tCC685CA75B6C1A4A973B7401B0C37E35352476AA * value)
	{
		___m_CustomFilter_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CustomFilter_10), (void*)value);
	}
};


// UnityEngine.UIElements.DynamicAtlasSettings
struct DynamicAtlasSettings_t851C8E0D9506CB6B36AE277F8FCE439C89097806  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.UIElements.DynamicAtlasSettings::m_MinAtlasSize
	int32_t ___m_MinAtlasSize_0;
	// System.Int32 UnityEngine.UIElements.DynamicAtlasSettings::m_MaxAtlasSize
	int32_t ___m_MaxAtlasSize_1;
	// System.Int32 UnityEngine.UIElements.DynamicAtlasSettings::m_MaxSubTextureSize
	int32_t ___m_MaxSubTextureSize_2;
	// UnityEngine.UIElements.DynamicAtlasFiltersInternal UnityEngine.UIElements.DynamicAtlasSettings::m_ActiveFilters
	int32_t ___m_ActiveFilters_3;
	// UnityEngine.UIElements.DynamicAtlasCustomFilter UnityEngine.UIElements.DynamicAtlasSettings::m_CustomFilter
	DynamicAtlasCustomFilter_tCC685CA75B6C1A4A973B7401B0C37E35352476AA * ___m_CustomFilter_4;

public:
	inline static int32_t get_offset_of_m_MinAtlasSize_0() { return static_cast<int32_t>(offsetof(DynamicAtlasSettings_t851C8E0D9506CB6B36AE277F8FCE439C89097806, ___m_MinAtlasSize_0)); }
	inline int32_t get_m_MinAtlasSize_0() const { return ___m_MinAtlasSize_0; }
	inline int32_t* get_address_of_m_MinAtlasSize_0() { return &___m_MinAtlasSize_0; }
	inline void set_m_MinAtlasSize_0(int32_t value)
	{
		___m_MinAtlasSize_0 = value;
	}

	inline static int32_t get_offset_of_m_MaxAtlasSize_1() { return static_cast<int32_t>(offsetof(DynamicAtlasSettings_t851C8E0D9506CB6B36AE277F8FCE439C89097806, ___m_MaxAtlasSize_1)); }
	inline int32_t get_m_MaxAtlasSize_1() const { return ___m_MaxAtlasSize_1; }
	inline int32_t* get_address_of_m_MaxAtlasSize_1() { return &___m_MaxAtlasSize_1; }
	inline void set_m_MaxAtlasSize_1(int32_t value)
	{
		___m_MaxAtlasSize_1 = value;
	}

	inline static int32_t get_offset_of_m_MaxSubTextureSize_2() { return static_cast<int32_t>(offsetof(DynamicAtlasSettings_t851C8E0D9506CB6B36AE277F8FCE439C89097806, ___m_MaxSubTextureSize_2)); }
	inline int32_t get_m_MaxSubTextureSize_2() const { return ___m_MaxSubTextureSize_2; }
	inline int32_t* get_address_of_m_MaxSubTextureSize_2() { return &___m_MaxSubTextureSize_2; }
	inline void set_m_MaxSubTextureSize_2(int32_t value)
	{
		___m_MaxSubTextureSize_2 = value;
	}

	inline static int32_t get_offset_of_m_ActiveFilters_3() { return static_cast<int32_t>(offsetof(DynamicAtlasSettings_t851C8E0D9506CB6B36AE277F8FCE439C89097806, ___m_ActiveFilters_3)); }
	inline int32_t get_m_ActiveFilters_3() const { return ___m_ActiveFilters_3; }
	inline int32_t* get_address_of_m_ActiveFilters_3() { return &___m_ActiveFilters_3; }
	inline void set_m_ActiveFilters_3(int32_t value)
	{
		___m_ActiveFilters_3 = value;
	}

	inline static int32_t get_offset_of_m_CustomFilter_4() { return static_cast<int32_t>(offsetof(DynamicAtlasSettings_t851C8E0D9506CB6B36AE277F8FCE439C89097806, ___m_CustomFilter_4)); }
	inline DynamicAtlasCustomFilter_tCC685CA75B6C1A4A973B7401B0C37E35352476AA * get_m_CustomFilter_4() const { return ___m_CustomFilter_4; }
	inline DynamicAtlasCustomFilter_tCC685CA75B6C1A4A973B7401B0C37E35352476AA ** get_address_of_m_CustomFilter_4() { return &___m_CustomFilter_4; }
	inline void set_m_CustomFilter_4(DynamicAtlasCustomFilter_tCC685CA75B6C1A4A973B7401B0C37E35352476AA * value)
	{
		___m_CustomFilter_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CustomFilter_4), (void*)value);
	}
};


// UnityEngine.UIElements.EventBase
struct EventBase_tA1333DE2FD77BE5E6B06CFDC825252E0CCF00698  : public RuntimeObject
{
public:
	// System.Int64 UnityEngine.UIElements.EventBase::<timestamp>k__BackingField
	int64_t ___U3CtimestampU3Ek__BackingField_2;
	// System.UInt64 UnityEngine.UIElements.EventBase::<eventId>k__BackingField
	uint64_t ___U3CeventIdU3Ek__BackingField_3;
	// System.UInt64 UnityEngine.UIElements.EventBase::<triggerEventId>k__BackingField
	uint64_t ___U3CtriggerEventIdU3Ek__BackingField_4;
	// UnityEngine.UIElements.EventBase/EventPropagation UnityEngine.UIElements.EventBase::<propagation>k__BackingField
	int32_t ___U3CpropagationU3Ek__BackingField_5;
	// UnityEngine.UIElements.PropagationPaths UnityEngine.UIElements.EventBase::m_Path
	PropagationPaths_t87A4CF30E0960BA42B42C814683A9C80FF60EA50 * ___m_Path_6;
	// UnityEngine.UIElements.EventBase/LifeCycleStatus UnityEngine.UIElements.EventBase::<lifeCycleStatus>k__BackingField
	int32_t ___U3ClifeCycleStatusU3Ek__BackingField_7;
	// UnityEngine.UIElements.IEventHandler UnityEngine.UIElements.EventBase::<leafTarget>k__BackingField
	RuntimeObject* ___U3CleafTargetU3Ek__BackingField_8;
	// UnityEngine.UIElements.IEventHandler UnityEngine.UIElements.EventBase::m_Target
	RuntimeObject* ___m_Target_9;
	// System.Collections.Generic.List`1<UnityEngine.UIElements.IEventHandler> UnityEngine.UIElements.EventBase::<skipElements>k__BackingField
	List_1_t98263B2C6950B707E321AE3A13E1E27A6D50354A * ___U3CskipElementsU3Ek__BackingField_10;
	// UnityEngine.UIElements.PropagationPhase UnityEngine.UIElements.EventBase::<propagationPhase>k__BackingField
	int32_t ___U3CpropagationPhaseU3Ek__BackingField_11;
	// UnityEngine.UIElements.IEventHandler UnityEngine.UIElements.EventBase::m_CurrentTarget
	RuntimeObject* ___m_CurrentTarget_12;
	// UnityEngine.Event UnityEngine.UIElements.EventBase::m_ImguiEvent
	Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * ___m_ImguiEvent_13;
	// UnityEngine.Vector2 UnityEngine.UIElements.EventBase::<originalMousePosition>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CoriginalMousePositionU3Ek__BackingField_14;

public:
	inline static int32_t get_offset_of_U3CtimestampU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(EventBase_tA1333DE2FD77BE5E6B06CFDC825252E0CCF00698, ___U3CtimestampU3Ek__BackingField_2)); }
	inline int64_t get_U3CtimestampU3Ek__BackingField_2() const { return ___U3CtimestampU3Ek__BackingField_2; }
	inline int64_t* get_address_of_U3CtimestampU3Ek__BackingField_2() { return &___U3CtimestampU3Ek__BackingField_2; }
	inline void set_U3CtimestampU3Ek__BackingField_2(int64_t value)
	{
		___U3CtimestampU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CeventIdU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(EventBase_tA1333DE2FD77BE5E6B06CFDC825252E0CCF00698, ___U3CeventIdU3Ek__BackingField_3)); }
	inline uint64_t get_U3CeventIdU3Ek__BackingField_3() const { return ___U3CeventIdU3Ek__BackingField_3; }
	inline uint64_t* get_address_of_U3CeventIdU3Ek__BackingField_3() { return &___U3CeventIdU3Ek__BackingField_3; }
	inline void set_U3CeventIdU3Ek__BackingField_3(uint64_t value)
	{
		___U3CeventIdU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CtriggerEventIdU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(EventBase_tA1333DE2FD77BE5E6B06CFDC825252E0CCF00698, ___U3CtriggerEventIdU3Ek__BackingField_4)); }
	inline uint64_t get_U3CtriggerEventIdU3Ek__BackingField_4() const { return ___U3CtriggerEventIdU3Ek__BackingField_4; }
	inline uint64_t* get_address_of_U3CtriggerEventIdU3Ek__BackingField_4() { return &___U3CtriggerEventIdU3Ek__BackingField_4; }
	inline void set_U3CtriggerEventIdU3Ek__BackingField_4(uint64_t value)
	{
		___U3CtriggerEventIdU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CpropagationU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(EventBase_tA1333DE2FD77BE5E6B06CFDC825252E0CCF00698, ___U3CpropagationU3Ek__BackingField_5)); }
	inline int32_t get_U3CpropagationU3Ek__BackingField_5() const { return ___U3CpropagationU3Ek__BackingField_5; }
	inline int32_t* get_address_of_U3CpropagationU3Ek__BackingField_5() { return &___U3CpropagationU3Ek__BackingField_5; }
	inline void set_U3CpropagationU3Ek__BackingField_5(int32_t value)
	{
		___U3CpropagationU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_m_Path_6() { return static_cast<int32_t>(offsetof(EventBase_tA1333DE2FD77BE5E6B06CFDC825252E0CCF00698, ___m_Path_6)); }
	inline PropagationPaths_t87A4CF30E0960BA42B42C814683A9C80FF60EA50 * get_m_Path_6() const { return ___m_Path_6; }
	inline PropagationPaths_t87A4CF30E0960BA42B42C814683A9C80FF60EA50 ** get_address_of_m_Path_6() { return &___m_Path_6; }
	inline void set_m_Path_6(PropagationPaths_t87A4CF30E0960BA42B42C814683A9C80FF60EA50 * value)
	{
		___m_Path_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Path_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3ClifeCycleStatusU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(EventBase_tA1333DE2FD77BE5E6B06CFDC825252E0CCF00698, ___U3ClifeCycleStatusU3Ek__BackingField_7)); }
	inline int32_t get_U3ClifeCycleStatusU3Ek__BackingField_7() const { return ___U3ClifeCycleStatusU3Ek__BackingField_7; }
	inline int32_t* get_address_of_U3ClifeCycleStatusU3Ek__BackingField_7() { return &___U3ClifeCycleStatusU3Ek__BackingField_7; }
	inline void set_U3ClifeCycleStatusU3Ek__BackingField_7(int32_t value)
	{
		___U3ClifeCycleStatusU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CleafTargetU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(EventBase_tA1333DE2FD77BE5E6B06CFDC825252E0CCF00698, ___U3CleafTargetU3Ek__BackingField_8)); }
	inline RuntimeObject* get_U3CleafTargetU3Ek__BackingField_8() const { return ___U3CleafTargetU3Ek__BackingField_8; }
	inline RuntimeObject** get_address_of_U3CleafTargetU3Ek__BackingField_8() { return &___U3CleafTargetU3Ek__BackingField_8; }
	inline void set_U3CleafTargetU3Ek__BackingField_8(RuntimeObject* value)
	{
		___U3CleafTargetU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CleafTargetU3Ek__BackingField_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_Target_9() { return static_cast<int32_t>(offsetof(EventBase_tA1333DE2FD77BE5E6B06CFDC825252E0CCF00698, ___m_Target_9)); }
	inline RuntimeObject* get_m_Target_9() const { return ___m_Target_9; }
	inline RuntimeObject** get_address_of_m_Target_9() { return &___m_Target_9; }
	inline void set_m_Target_9(RuntimeObject* value)
	{
		___m_Target_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Target_9), (void*)value);
	}

	inline static int32_t get_offset_of_U3CskipElementsU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(EventBase_tA1333DE2FD77BE5E6B06CFDC825252E0CCF00698, ___U3CskipElementsU3Ek__BackingField_10)); }
	inline List_1_t98263B2C6950B707E321AE3A13E1E27A6D50354A * get_U3CskipElementsU3Ek__BackingField_10() const { return ___U3CskipElementsU3Ek__BackingField_10; }
	inline List_1_t98263B2C6950B707E321AE3A13E1E27A6D50354A ** get_address_of_U3CskipElementsU3Ek__BackingField_10() { return &___U3CskipElementsU3Ek__BackingField_10; }
	inline void set_U3CskipElementsU3Ek__BackingField_10(List_1_t98263B2C6950B707E321AE3A13E1E27A6D50354A * value)
	{
		___U3CskipElementsU3Ek__BackingField_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CskipElementsU3Ek__BackingField_10), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpropagationPhaseU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(EventBase_tA1333DE2FD77BE5E6B06CFDC825252E0CCF00698, ___U3CpropagationPhaseU3Ek__BackingField_11)); }
	inline int32_t get_U3CpropagationPhaseU3Ek__BackingField_11() const { return ___U3CpropagationPhaseU3Ek__BackingField_11; }
	inline int32_t* get_address_of_U3CpropagationPhaseU3Ek__BackingField_11() { return &___U3CpropagationPhaseU3Ek__BackingField_11; }
	inline void set_U3CpropagationPhaseU3Ek__BackingField_11(int32_t value)
	{
		___U3CpropagationPhaseU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_m_CurrentTarget_12() { return static_cast<int32_t>(offsetof(EventBase_tA1333DE2FD77BE5E6B06CFDC825252E0CCF00698, ___m_CurrentTarget_12)); }
	inline RuntimeObject* get_m_CurrentTarget_12() const { return ___m_CurrentTarget_12; }
	inline RuntimeObject** get_address_of_m_CurrentTarget_12() { return &___m_CurrentTarget_12; }
	inline void set_m_CurrentTarget_12(RuntimeObject* value)
	{
		___m_CurrentTarget_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentTarget_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_ImguiEvent_13() { return static_cast<int32_t>(offsetof(EventBase_tA1333DE2FD77BE5E6B06CFDC825252E0CCF00698, ___m_ImguiEvent_13)); }
	inline Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * get_m_ImguiEvent_13() const { return ___m_ImguiEvent_13; }
	inline Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E ** get_address_of_m_ImguiEvent_13() { return &___m_ImguiEvent_13; }
	inline void set_m_ImguiEvent_13(Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * value)
	{
		___m_ImguiEvent_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ImguiEvent_13), (void*)value);
	}

	inline static int32_t get_offset_of_U3CoriginalMousePositionU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(EventBase_tA1333DE2FD77BE5E6B06CFDC825252E0CCF00698, ___U3CoriginalMousePositionU3Ek__BackingField_14)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CoriginalMousePositionU3Ek__BackingField_14() const { return ___U3CoriginalMousePositionU3Ek__BackingField_14; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CoriginalMousePositionU3Ek__BackingField_14() { return &___U3CoriginalMousePositionU3Ek__BackingField_14; }
	inline void set_U3CoriginalMousePositionU3Ek__BackingField_14(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CoriginalMousePositionU3Ek__BackingField_14 = value;
	}
};

struct EventBase_tA1333DE2FD77BE5E6B06CFDC825252E0CCF00698_StaticFields
{
public:
	// System.Int64 UnityEngine.UIElements.EventBase::s_LastTypeId
	int64_t ___s_LastTypeId_0;
	// System.UInt64 UnityEngine.UIElements.EventBase::s_NextEventId
	uint64_t ___s_NextEventId_1;

public:
	inline static int32_t get_offset_of_s_LastTypeId_0() { return static_cast<int32_t>(offsetof(EventBase_tA1333DE2FD77BE5E6B06CFDC825252E0CCF00698_StaticFields, ___s_LastTypeId_0)); }
	inline int64_t get_s_LastTypeId_0() const { return ___s_LastTypeId_0; }
	inline int64_t* get_address_of_s_LastTypeId_0() { return &___s_LastTypeId_0; }
	inline void set_s_LastTypeId_0(int64_t value)
	{
		___s_LastTypeId_0 = value;
	}

	inline static int32_t get_offset_of_s_NextEventId_1() { return static_cast<int32_t>(offsetof(EventBase_tA1333DE2FD77BE5E6B06CFDC825252E0CCF00698_StaticFields, ___s_NextEventId_1)); }
	inline uint64_t get_s_NextEventId_1() const { return ___s_NextEventId_1; }
	inline uint64_t* get_address_of_s_NextEventId_1() { return &___s_NextEventId_1; }
	inline void set_s_NextEventId_1(uint64_t value)
	{
		___s_NextEventId_1 = value;
	}
};


// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.UIElements.Length
struct Length_t4EB2583009584526089344B3DBC93E0C8894BCF4 
{
public:
	// System.Single UnityEngine.UIElements.Length::m_Value
	float ___m_Value_0;
	// UnityEngine.UIElements.Length/Unit UnityEngine.UIElements.Length::m_Unit
	int32_t ___m_Unit_1;

public:
	inline static int32_t get_offset_of_m_Value_0() { return static_cast<int32_t>(offsetof(Length_t4EB2583009584526089344B3DBC93E0C8894BCF4, ___m_Value_0)); }
	inline float get_m_Value_0() const { return ___m_Value_0; }
	inline float* get_address_of_m_Value_0() { return &___m_Value_0; }
	inline void set_m_Value_0(float value)
	{
		___m_Value_0 = value;
	}

	inline static int32_t get_offset_of_m_Unit_1() { return static_cast<int32_t>(offsetof(Length_t4EB2583009584526089344B3DBC93E0C8894BCF4, ___m_Unit_1)); }
	inline int32_t get_m_Unit_1() const { return ___m_Unit_1; }
	inline int32_t* get_address_of_m_Unit_1() { return &___m_Unit_1; }
	inline void set_m_Unit_1(int32_t value)
	{
		___m_Unit_1 = value;
	}
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

// UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_pinvoke : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_com : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
};

// UnityEngine.Shader
struct Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// UnityEngine.Texture
struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_StaticFields
{
public:
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;

public:
	inline static int32_t get_offset_of_GenerateAllMips_4() { return static_cast<int32_t>(offsetof(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_StaticFields, ___GenerateAllMips_4)); }
	inline int32_t get_GenerateAllMips_4() const { return ___GenerateAllMips_4; }
	inline int32_t* get_address_of_GenerateAllMips_4() { return &___GenerateAllMips_4; }
	inline void set_GenerateAllMips_4(int32_t value)
	{
		___GenerateAllMips_4 = value;
	}
};


// UnityEngine.Touch
struct Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C 
{
public:
	// System.Int32 UnityEngine.Touch::m_FingerId
	int32_t ___m_FingerId_0;
	// UnityEngine.Vector2 UnityEngine.Touch::m_Position
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Position_1;
	// UnityEngine.Vector2 UnityEngine.Touch::m_RawPosition
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_RawPosition_2;
	// UnityEngine.Vector2 UnityEngine.Touch::m_PositionDelta
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_PositionDelta_3;
	// System.Single UnityEngine.Touch::m_TimeDelta
	float ___m_TimeDelta_4;
	// System.Int32 UnityEngine.Touch::m_TapCount
	int32_t ___m_TapCount_5;
	// UnityEngine.TouchPhase UnityEngine.Touch::m_Phase
	int32_t ___m_Phase_6;
	// UnityEngine.TouchType UnityEngine.Touch::m_Type
	int32_t ___m_Type_7;
	// System.Single UnityEngine.Touch::m_Pressure
	float ___m_Pressure_8;
	// System.Single UnityEngine.Touch::m_maximumPossiblePressure
	float ___m_maximumPossiblePressure_9;
	// System.Single UnityEngine.Touch::m_Radius
	float ___m_Radius_10;
	// System.Single UnityEngine.Touch::m_RadiusVariance
	float ___m_RadiusVariance_11;
	// System.Single UnityEngine.Touch::m_AltitudeAngle
	float ___m_AltitudeAngle_12;
	// System.Single UnityEngine.Touch::m_AzimuthAngle
	float ___m_AzimuthAngle_13;

public:
	inline static int32_t get_offset_of_m_FingerId_0() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_FingerId_0)); }
	inline int32_t get_m_FingerId_0() const { return ___m_FingerId_0; }
	inline int32_t* get_address_of_m_FingerId_0() { return &___m_FingerId_0; }
	inline void set_m_FingerId_0(int32_t value)
	{
		___m_FingerId_0 = value;
	}

	inline static int32_t get_offset_of_m_Position_1() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_Position_1)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Position_1() const { return ___m_Position_1; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Position_1() { return &___m_Position_1; }
	inline void set_m_Position_1(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Position_1 = value;
	}

	inline static int32_t get_offset_of_m_RawPosition_2() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_RawPosition_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_RawPosition_2() const { return ___m_RawPosition_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_RawPosition_2() { return &___m_RawPosition_2; }
	inline void set_m_RawPosition_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_RawPosition_2 = value;
	}

	inline static int32_t get_offset_of_m_PositionDelta_3() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_PositionDelta_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_PositionDelta_3() const { return ___m_PositionDelta_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_PositionDelta_3() { return &___m_PositionDelta_3; }
	inline void set_m_PositionDelta_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_PositionDelta_3 = value;
	}

	inline static int32_t get_offset_of_m_TimeDelta_4() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_TimeDelta_4)); }
	inline float get_m_TimeDelta_4() const { return ___m_TimeDelta_4; }
	inline float* get_address_of_m_TimeDelta_4() { return &___m_TimeDelta_4; }
	inline void set_m_TimeDelta_4(float value)
	{
		___m_TimeDelta_4 = value;
	}

	inline static int32_t get_offset_of_m_TapCount_5() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_TapCount_5)); }
	inline int32_t get_m_TapCount_5() const { return ___m_TapCount_5; }
	inline int32_t* get_address_of_m_TapCount_5() { return &___m_TapCount_5; }
	inline void set_m_TapCount_5(int32_t value)
	{
		___m_TapCount_5 = value;
	}

	inline static int32_t get_offset_of_m_Phase_6() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_Phase_6)); }
	inline int32_t get_m_Phase_6() const { return ___m_Phase_6; }
	inline int32_t* get_address_of_m_Phase_6() { return &___m_Phase_6; }
	inline void set_m_Phase_6(int32_t value)
	{
		___m_Phase_6 = value;
	}

	inline static int32_t get_offset_of_m_Type_7() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_Type_7)); }
	inline int32_t get_m_Type_7() const { return ___m_Type_7; }
	inline int32_t* get_address_of_m_Type_7() { return &___m_Type_7; }
	inline void set_m_Type_7(int32_t value)
	{
		___m_Type_7 = value;
	}

	inline static int32_t get_offset_of_m_Pressure_8() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_Pressure_8)); }
	inline float get_m_Pressure_8() const { return ___m_Pressure_8; }
	inline float* get_address_of_m_Pressure_8() { return &___m_Pressure_8; }
	inline void set_m_Pressure_8(float value)
	{
		___m_Pressure_8 = value;
	}

	inline static int32_t get_offset_of_m_maximumPossiblePressure_9() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_maximumPossiblePressure_9)); }
	inline float get_m_maximumPossiblePressure_9() const { return ___m_maximumPossiblePressure_9; }
	inline float* get_address_of_m_maximumPossiblePressure_9() { return &___m_maximumPossiblePressure_9; }
	inline void set_m_maximumPossiblePressure_9(float value)
	{
		___m_maximumPossiblePressure_9 = value;
	}

	inline static int32_t get_offset_of_m_Radius_10() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_Radius_10)); }
	inline float get_m_Radius_10() const { return ___m_Radius_10; }
	inline float* get_address_of_m_Radius_10() { return &___m_Radius_10; }
	inline void set_m_Radius_10(float value)
	{
		___m_Radius_10 = value;
	}

	inline static int32_t get_offset_of_m_RadiusVariance_11() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_RadiusVariance_11)); }
	inline float get_m_RadiusVariance_11() const { return ___m_RadiusVariance_11; }
	inline float* get_address_of_m_RadiusVariance_11() { return &___m_RadiusVariance_11; }
	inline void set_m_RadiusVariance_11(float value)
	{
		___m_RadiusVariance_11 = value;
	}

	inline static int32_t get_offset_of_m_AltitudeAngle_12() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_AltitudeAngle_12)); }
	inline float get_m_AltitudeAngle_12() const { return ___m_AltitudeAngle_12; }
	inline float* get_address_of_m_AltitudeAngle_12() { return &___m_AltitudeAngle_12; }
	inline void set_m_AltitudeAngle_12(float value)
	{
		___m_AltitudeAngle_12 = value;
	}

	inline static int32_t get_offset_of_m_AzimuthAngle_13() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_AzimuthAngle_13)); }
	inline float get_m_AzimuthAngle_13() const { return ___m_AzimuthAngle_13; }
	inline float* get_address_of_m_AzimuthAngle_13() { return &___m_AzimuthAngle_13; }
	inline void set_m_AzimuthAngle_13(float value)
	{
		___m_AzimuthAngle_13 = value;
	}
};


// UnityEngine.UIElements.VisualElementFocusRing
struct VisualElementFocusRing_t9D8C7E1CD5CAD2B6220414541CB498B5FAB4946B  : public RuntimeObject
{
public:
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.VisualElementFocusRing::root
	VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * ___root_0;
	// UnityEngine.UIElements.VisualElementFocusRing/DefaultFocusOrder UnityEngine.UIElements.VisualElementFocusRing::<defaultFocusOrder>k__BackingField
	int32_t ___U3CdefaultFocusOrderU3Ek__BackingField_1;
	// System.Collections.Generic.List`1<UnityEngine.UIElements.VisualElementFocusRing/FocusRingRecord> UnityEngine.UIElements.VisualElementFocusRing::m_FocusRing
	List_1_t7D62816A34175FC41F4540DD6D2B60E94DD2ED71 * ___m_FocusRing_2;

public:
	inline static int32_t get_offset_of_root_0() { return static_cast<int32_t>(offsetof(VisualElementFocusRing_t9D8C7E1CD5CAD2B6220414541CB498B5FAB4946B, ___root_0)); }
	inline VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * get_root_0() const { return ___root_0; }
	inline VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 ** get_address_of_root_0() { return &___root_0; }
	inline void set_root_0(VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * value)
	{
		___root_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___root_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdefaultFocusOrderU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(VisualElementFocusRing_t9D8C7E1CD5CAD2B6220414541CB498B5FAB4946B, ___U3CdefaultFocusOrderU3Ek__BackingField_1)); }
	inline int32_t get_U3CdefaultFocusOrderU3Ek__BackingField_1() const { return ___U3CdefaultFocusOrderU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CdefaultFocusOrderU3Ek__BackingField_1() { return &___U3CdefaultFocusOrderU3Ek__BackingField_1; }
	inline void set_U3CdefaultFocusOrderU3Ek__BackingField_1(int32_t value)
	{
		___U3CdefaultFocusOrderU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_m_FocusRing_2() { return static_cast<int32_t>(offsetof(VisualElementFocusRing_t9D8C7E1CD5CAD2B6220414541CB498B5FAB4946B, ___m_FocusRing_2)); }
	inline List_1_t7D62816A34175FC41F4540DD6D2B60E94DD2ED71 * get_m_FocusRing_2() const { return ___m_FocusRing_2; }
	inline List_1_t7D62816A34175FC41F4540DD6D2B60E94DD2ED71 ** get_address_of_m_FocusRing_2() { return &___m_FocusRing_2; }
	inline void set_m_FocusRing_2(List_1_t7D62816A34175FC41F4540DD6D2B60E94DD2ED71 * value)
	{
		___m_FocusRing_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FocusRing_2), (void*)value);
	}
};


// UnityEngine.UIElements.EventBase`1<UnityEngine.UIElements.KeyDownEvent>
struct EventBase_1_tA50D96483E133B256F4EA87D789753E52559FFB5  : public EventBase_tA1333DE2FD77BE5E6B06CFDC825252E0CCF00698
{
public:
	// System.Int32 UnityEngine.UIElements.EventBase`1::m_RefCount
	int32_t ___m_RefCount_17;

public:
	inline static int32_t get_offset_of_m_RefCount_17() { return static_cast<int32_t>(offsetof(EventBase_1_tA50D96483E133B256F4EA87D789753E52559FFB5, ___m_RefCount_17)); }
	inline int32_t get_m_RefCount_17() const { return ___m_RefCount_17; }
	inline int32_t* get_address_of_m_RefCount_17() { return &___m_RefCount_17; }
	inline void set_m_RefCount_17(int32_t value)
	{
		___m_RefCount_17 = value;
	}
};

struct EventBase_1_tA50D96483E133B256F4EA87D789753E52559FFB5_StaticFields
{
public:
	// System.Int64 UnityEngine.UIElements.EventBase`1::s_TypeId
	int64_t ___s_TypeId_15;
	// UnityEngine.UIElements.ObjectPool`1<T> UnityEngine.UIElements.EventBase`1::s_Pool
	ObjectPool_1_t776D216D3A8C6B8147ACB387C359DA2D34662C26 * ___s_Pool_16;

public:
	inline static int32_t get_offset_of_s_TypeId_15() { return static_cast<int32_t>(offsetof(EventBase_1_tA50D96483E133B256F4EA87D789753E52559FFB5_StaticFields, ___s_TypeId_15)); }
	inline int64_t get_s_TypeId_15() const { return ___s_TypeId_15; }
	inline int64_t* get_address_of_s_TypeId_15() { return &___s_TypeId_15; }
	inline void set_s_TypeId_15(int64_t value)
	{
		___s_TypeId_15 = value;
	}

	inline static int32_t get_offset_of_s_Pool_16() { return static_cast<int32_t>(offsetof(EventBase_1_tA50D96483E133B256F4EA87D789753E52559FFB5_StaticFields, ___s_Pool_16)); }
	inline ObjectPool_1_t776D216D3A8C6B8147ACB387C359DA2D34662C26 * get_s_Pool_16() const { return ___s_Pool_16; }
	inline ObjectPool_1_t776D216D3A8C6B8147ACB387C359DA2D34662C26 ** get_address_of_s_Pool_16() { return &___s_Pool_16; }
	inline void set_s_Pool_16(ObjectPool_1_t776D216D3A8C6B8147ACB387C359DA2D34662C26 * value)
	{
		___s_Pool_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Pool_16), (void*)value);
	}
};


// UnityEngine.UIElements.EventBase`1<UnityEngine.UIElements.NavigationMoveEvent>
struct EventBase_1_t5F2BBA518F7956A01DD2DAA3C80709A1904FF828  : public EventBase_tA1333DE2FD77BE5E6B06CFDC825252E0CCF00698
{
public:
	// System.Int32 UnityEngine.UIElements.EventBase`1::m_RefCount
	int32_t ___m_RefCount_17;

public:
	inline static int32_t get_offset_of_m_RefCount_17() { return static_cast<int32_t>(offsetof(EventBase_1_t5F2BBA518F7956A01DD2DAA3C80709A1904FF828, ___m_RefCount_17)); }
	inline int32_t get_m_RefCount_17() const { return ___m_RefCount_17; }
	inline int32_t* get_address_of_m_RefCount_17() { return &___m_RefCount_17; }
	inline void set_m_RefCount_17(int32_t value)
	{
		___m_RefCount_17 = value;
	}
};

struct EventBase_1_t5F2BBA518F7956A01DD2DAA3C80709A1904FF828_StaticFields
{
public:
	// System.Int64 UnityEngine.UIElements.EventBase`1::s_TypeId
	int64_t ___s_TypeId_15;
	// UnityEngine.UIElements.ObjectPool`1<T> UnityEngine.UIElements.EventBase`1::s_Pool
	ObjectPool_1_tF26D706EA84B9BAC341E54AA89A064C3DB907581 * ___s_Pool_16;

public:
	inline static int32_t get_offset_of_s_TypeId_15() { return static_cast<int32_t>(offsetof(EventBase_1_t5F2BBA518F7956A01DD2DAA3C80709A1904FF828_StaticFields, ___s_TypeId_15)); }
	inline int64_t get_s_TypeId_15() const { return ___s_TypeId_15; }
	inline int64_t* get_address_of_s_TypeId_15() { return &___s_TypeId_15; }
	inline void set_s_TypeId_15(int64_t value)
	{
		___s_TypeId_15 = value;
	}

	inline static int32_t get_offset_of_s_Pool_16() { return static_cast<int32_t>(offsetof(EventBase_1_t5F2BBA518F7956A01DD2DAA3C80709A1904FF828_StaticFields, ___s_Pool_16)); }
	inline ObjectPool_1_tF26D706EA84B9BAC341E54AA89A064C3DB907581 * get_s_Pool_16() const { return ___s_Pool_16; }
	inline ObjectPool_1_tF26D706EA84B9BAC341E54AA89A064C3DB907581 ** get_address_of_s_Pool_16() { return &___s_Pool_16; }
	inline void set_s_Pool_16(ObjectPool_1_tF26D706EA84B9BAC341E54AA89A064C3DB907581 * value)
	{
		___s_Pool_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Pool_16), (void*)value);
	}
};


// UnityEngine.UIElements.EventBase`1<System.Object>
struct EventBase_1_t103D09E981175BBC55643938B135F2609BA881F6  : public EventBase_tA1333DE2FD77BE5E6B06CFDC825252E0CCF00698
{
public:
	// System.Int32 UnityEngine.UIElements.EventBase`1::m_RefCount
	int32_t ___m_RefCount_17;

public:
	inline static int32_t get_offset_of_m_RefCount_17() { return static_cast<int32_t>(offsetof(EventBase_1_t103D09E981175BBC55643938B135F2609BA881F6, ___m_RefCount_17)); }
	inline int32_t get_m_RefCount_17() const { return ___m_RefCount_17; }
	inline int32_t* get_address_of_m_RefCount_17() { return &___m_RefCount_17; }
	inline void set_m_RefCount_17(int32_t value)
	{
		___m_RefCount_17 = value;
	}
};

struct EventBase_1_t103D09E981175BBC55643938B135F2609BA881F6_StaticFields
{
public:
	// System.Int64 UnityEngine.UIElements.EventBase`1::s_TypeId
	int64_t ___s_TypeId_15;
	// UnityEngine.UIElements.ObjectPool`1<T> UnityEngine.UIElements.EventBase`1::s_Pool
	ObjectPool_1_tC62E0B641AD7AF04DB36BE2D48FCBE4330C23DE0 * ___s_Pool_16;

public:
	inline static int32_t get_offset_of_s_TypeId_15() { return static_cast<int32_t>(offsetof(EventBase_1_t103D09E981175BBC55643938B135F2609BA881F6_StaticFields, ___s_TypeId_15)); }
	inline int64_t get_s_TypeId_15() const { return ___s_TypeId_15; }
	inline int64_t* get_address_of_s_TypeId_15() { return &___s_TypeId_15; }
	inline void set_s_TypeId_15(int64_t value)
	{
		___s_TypeId_15 = value;
	}

	inline static int32_t get_offset_of_s_Pool_16() { return static_cast<int32_t>(offsetof(EventBase_1_t103D09E981175BBC55643938B135F2609BA881F6_StaticFields, ___s_Pool_16)); }
	inline ObjectPool_1_tC62E0B641AD7AF04DB36BE2D48FCBE4330C23DE0 * get_s_Pool_16() const { return ___s_Pool_16; }
	inline ObjectPool_1_tC62E0B641AD7AF04DB36BE2D48FCBE4330C23DE0 ** get_address_of_s_Pool_16() { return &___s_Pool_16; }
	inline void set_s_Pool_16(ObjectPool_1_tC62E0B641AD7AF04DB36BE2D48FCBE4330C23DE0 * value)
	{
		___s_Pool_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Pool_16), (void*)value);
	}
};


// System.Func`1<UnityEngine.Object>
struct Func_1_tAC616C71189A2A9710DCCC67B2B63B95BD51C170  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<UnityEngine.Vector2,UnityEngine.Vector2>
struct Func_2_tB3D19331301201246DE473D608119BB47D418EB9  : public MulticastDelegate_t
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


// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_paramName_17), (void*)value);
	}
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.UIElements.DynamicAtlasCustomFilter
struct DynamicAtlasCustomFilter_tCC685CA75B6C1A4A973B7401B0C37E35352476AA  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.UIElements.Panel
struct Panel_tCC064C952382FEF787E3FE61F6847A375A3DCD99  : public BaseVisualElementPanel_tFF0B76C4FDAE6AA5D9A055D1FDD29AE67B93B95D
{
public:
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.Panel::m_RootContainer
	VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * ___m_RootContainer_18;
	// UnityEngine.UIElements.VisualTreeUpdater UnityEngine.UIElements.Panel::m_VisualTreeUpdater
	VisualTreeUpdater_t3CCD5BE874A8EEA082BFDD2E710387A0331C0EF9 * ___m_VisualTreeUpdater_19;
	// System.String UnityEngine.UIElements.Panel::m_PanelName
	String_t* ___m_PanelName_20;
	// System.UInt32 UnityEngine.UIElements.Panel::m_Version
	uint32_t ___m_Version_21;
	// System.UInt32 UnityEngine.UIElements.Panel::m_RepaintVersion
	uint32_t ___m_RepaintVersion_22;
	// Unity.Profiling.ProfilerMarker UnityEngine.UIElements.Panel::m_MarkerBeforeUpdate
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___m_MarkerBeforeUpdate_23;
	// Unity.Profiling.ProfilerMarker UnityEngine.UIElements.Panel::m_MarkerUpdate
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___m_MarkerUpdate_24;
	// Unity.Profiling.ProfilerMarker UnityEngine.UIElements.Panel::m_MarkerLayout
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___m_MarkerLayout_25;
	// Unity.Profiling.ProfilerMarker UnityEngine.UIElements.Panel::m_MarkerBindings
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___m_MarkerBindings_26;
	// Unity.Profiling.ProfilerMarker UnityEngine.UIElements.Panel::m_MarkerAnimations
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___m_MarkerAnimations_27;
	// UnityEngine.UIElements.EventDispatcher UnityEngine.UIElements.Panel::<dispatcher>k__BackingField
	EventDispatcher_t86D9B0A3CA4441F30AA1A940D0D50F9AEC9912F2 * ___U3CdispatcherU3Ek__BackingField_29;
	// UnityEngine.UIElements.TimerEventScheduler UnityEngine.UIElements.Panel::m_Scheduler
	TimerEventScheduler_tA20DF5107C5BD568BA6A461F2C3AFAEE7946525F * ___m_Scheduler_30;
	// UnityEngine.ScriptableObject UnityEngine.UIElements.Panel::<ownerObject>k__BackingField
	ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A * ___U3CownerObjectU3Ek__BackingField_31;
	// UnityEngine.UIElements.ContextType UnityEngine.UIElements.Panel::<contextType>k__BackingField
	int32_t ___U3CcontextTypeU3Ek__BackingField_32;
	// UnityEngine.UIElements.SavePersistentViewData UnityEngine.UIElements.Panel::<saveViewData>k__BackingField
	SavePersistentViewData_tEEF0D942960A5DBFD2C45A9A170E3209913355BF * ___U3CsaveViewDataU3Ek__BackingField_33;
	// UnityEngine.UIElements.GetViewDataDictionary UnityEngine.UIElements.Panel::<getViewDataDictionary>k__BackingField
	GetViewDataDictionary_tF4CE61C507D009B7FD8753159E1E893FF1147E5E * ___U3CgetViewDataDictionaryU3Ek__BackingField_34;
	// UnityEngine.UIElements.FocusController UnityEngine.UIElements.Panel::<focusController>k__BackingField
	FocusController_t0EE43A2ABFA352E752E8DA2B6D17FC322FC59764 * ___U3CfocusControllerU3Ek__BackingField_35;
	// UnityEngine.EventInterests UnityEngine.UIElements.Panel::<IMGUIEventInterests>k__BackingField
	EventInterests_t4DC3B6F7CFFDBF0AC4DE302F9102C769B87B9D79  ___U3CIMGUIEventInterestsU3Ek__BackingField_36;
	// System.Int32 UnityEngine.UIElements.Panel::<IMGUIContainersCount>k__BackingField
	int32_t ___U3CIMGUIContainersCountU3Ek__BackingField_39;
	// UnityEngine.UIElements.IMGUIContainer UnityEngine.UIElements.Panel::<rootIMGUIContainer>k__BackingField
	IMGUIContainer_tF257F543C4DC9E60BCACBB529C06B2E8F835C06D * ___U3CrootIMGUIContainerU3Ek__BackingField_40;
	// UnityEngine.Shader UnityEngine.UIElements.Panel::m_StandardShader
	Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * ___m_StandardShader_41;
	// UnityEngine.UIElements.AtlasBase UnityEngine.UIElements.Panel::m_Atlas
	AtlasBase_t04E16651AFF344EDD21EB14F2E9CF0B76DACA9E3 * ___m_Atlas_42;
	// System.Boolean UnityEngine.UIElements.Panel::m_ValidatingLayout
	bool ___m_ValidatingLayout_43;

public:
	inline static int32_t get_offset_of_m_RootContainer_18() { return static_cast<int32_t>(offsetof(Panel_tCC064C952382FEF787E3FE61F6847A375A3DCD99, ___m_RootContainer_18)); }
	inline VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * get_m_RootContainer_18() const { return ___m_RootContainer_18; }
	inline VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 ** get_address_of_m_RootContainer_18() { return &___m_RootContainer_18; }
	inline void set_m_RootContainer_18(VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * value)
	{
		___m_RootContainer_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RootContainer_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_VisualTreeUpdater_19() { return static_cast<int32_t>(offsetof(Panel_tCC064C952382FEF787E3FE61F6847A375A3DCD99, ___m_VisualTreeUpdater_19)); }
	inline VisualTreeUpdater_t3CCD5BE874A8EEA082BFDD2E710387A0331C0EF9 * get_m_VisualTreeUpdater_19() const { return ___m_VisualTreeUpdater_19; }
	inline VisualTreeUpdater_t3CCD5BE874A8EEA082BFDD2E710387A0331C0EF9 ** get_address_of_m_VisualTreeUpdater_19() { return &___m_VisualTreeUpdater_19; }
	inline void set_m_VisualTreeUpdater_19(VisualTreeUpdater_t3CCD5BE874A8EEA082BFDD2E710387A0331C0EF9 * value)
	{
		___m_VisualTreeUpdater_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_VisualTreeUpdater_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_PanelName_20() { return static_cast<int32_t>(offsetof(Panel_tCC064C952382FEF787E3FE61F6847A375A3DCD99, ___m_PanelName_20)); }
	inline String_t* get_m_PanelName_20() const { return ___m_PanelName_20; }
	inline String_t** get_address_of_m_PanelName_20() { return &___m_PanelName_20; }
	inline void set_m_PanelName_20(String_t* value)
	{
		___m_PanelName_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PanelName_20), (void*)value);
	}

	inline static int32_t get_offset_of_m_Version_21() { return static_cast<int32_t>(offsetof(Panel_tCC064C952382FEF787E3FE61F6847A375A3DCD99, ___m_Version_21)); }
	inline uint32_t get_m_Version_21() const { return ___m_Version_21; }
	inline uint32_t* get_address_of_m_Version_21() { return &___m_Version_21; }
	inline void set_m_Version_21(uint32_t value)
	{
		___m_Version_21 = value;
	}

	inline static int32_t get_offset_of_m_RepaintVersion_22() { return static_cast<int32_t>(offsetof(Panel_tCC064C952382FEF787E3FE61F6847A375A3DCD99, ___m_RepaintVersion_22)); }
	inline uint32_t get_m_RepaintVersion_22() const { return ___m_RepaintVersion_22; }
	inline uint32_t* get_address_of_m_RepaintVersion_22() { return &___m_RepaintVersion_22; }
	inline void set_m_RepaintVersion_22(uint32_t value)
	{
		___m_RepaintVersion_22 = value;
	}

	inline static int32_t get_offset_of_m_MarkerBeforeUpdate_23() { return static_cast<int32_t>(offsetof(Panel_tCC064C952382FEF787E3FE61F6847A375A3DCD99, ___m_MarkerBeforeUpdate_23)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_m_MarkerBeforeUpdate_23() const { return ___m_MarkerBeforeUpdate_23; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_m_MarkerBeforeUpdate_23() { return &___m_MarkerBeforeUpdate_23; }
	inline void set_m_MarkerBeforeUpdate_23(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___m_MarkerBeforeUpdate_23 = value;
	}

	inline static int32_t get_offset_of_m_MarkerUpdate_24() { return static_cast<int32_t>(offsetof(Panel_tCC064C952382FEF787E3FE61F6847A375A3DCD99, ___m_MarkerUpdate_24)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_m_MarkerUpdate_24() const { return ___m_MarkerUpdate_24; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_m_MarkerUpdate_24() { return &___m_MarkerUpdate_24; }
	inline void set_m_MarkerUpdate_24(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___m_MarkerUpdate_24 = value;
	}

	inline static int32_t get_offset_of_m_MarkerLayout_25() { return static_cast<int32_t>(offsetof(Panel_tCC064C952382FEF787E3FE61F6847A375A3DCD99, ___m_MarkerLayout_25)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_m_MarkerLayout_25() const { return ___m_MarkerLayout_25; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_m_MarkerLayout_25() { return &___m_MarkerLayout_25; }
	inline void set_m_MarkerLayout_25(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___m_MarkerLayout_25 = value;
	}

	inline static int32_t get_offset_of_m_MarkerBindings_26() { return static_cast<int32_t>(offsetof(Panel_tCC064C952382FEF787E3FE61F6847A375A3DCD99, ___m_MarkerBindings_26)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_m_MarkerBindings_26() const { return ___m_MarkerBindings_26; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_m_MarkerBindings_26() { return &___m_MarkerBindings_26; }
	inline void set_m_MarkerBindings_26(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___m_MarkerBindings_26 = value;
	}

	inline static int32_t get_offset_of_m_MarkerAnimations_27() { return static_cast<int32_t>(offsetof(Panel_tCC064C952382FEF787E3FE61F6847A375A3DCD99, ___m_MarkerAnimations_27)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_m_MarkerAnimations_27() const { return ___m_MarkerAnimations_27; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_m_MarkerAnimations_27() { return &___m_MarkerAnimations_27; }
	inline void set_m_MarkerAnimations_27(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___m_MarkerAnimations_27 = value;
	}

	inline static int32_t get_offset_of_U3CdispatcherU3Ek__BackingField_29() { return static_cast<int32_t>(offsetof(Panel_tCC064C952382FEF787E3FE61F6847A375A3DCD99, ___U3CdispatcherU3Ek__BackingField_29)); }
	inline EventDispatcher_t86D9B0A3CA4441F30AA1A940D0D50F9AEC9912F2 * get_U3CdispatcherU3Ek__BackingField_29() const { return ___U3CdispatcherU3Ek__BackingField_29; }
	inline EventDispatcher_t86D9B0A3CA4441F30AA1A940D0D50F9AEC9912F2 ** get_address_of_U3CdispatcherU3Ek__BackingField_29() { return &___U3CdispatcherU3Ek__BackingField_29; }
	inline void set_U3CdispatcherU3Ek__BackingField_29(EventDispatcher_t86D9B0A3CA4441F30AA1A940D0D50F9AEC9912F2 * value)
	{
		___U3CdispatcherU3Ek__BackingField_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CdispatcherU3Ek__BackingField_29), (void*)value);
	}

	inline static int32_t get_offset_of_m_Scheduler_30() { return static_cast<int32_t>(offsetof(Panel_tCC064C952382FEF787E3FE61F6847A375A3DCD99, ___m_Scheduler_30)); }
	inline TimerEventScheduler_tA20DF5107C5BD568BA6A461F2C3AFAEE7946525F * get_m_Scheduler_30() const { return ___m_Scheduler_30; }
	inline TimerEventScheduler_tA20DF5107C5BD568BA6A461F2C3AFAEE7946525F ** get_address_of_m_Scheduler_30() { return &___m_Scheduler_30; }
	inline void set_m_Scheduler_30(TimerEventScheduler_tA20DF5107C5BD568BA6A461F2C3AFAEE7946525F * value)
	{
		___m_Scheduler_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Scheduler_30), (void*)value);
	}

	inline static int32_t get_offset_of_U3CownerObjectU3Ek__BackingField_31() { return static_cast<int32_t>(offsetof(Panel_tCC064C952382FEF787E3FE61F6847A375A3DCD99, ___U3CownerObjectU3Ek__BackingField_31)); }
	inline ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A * get_U3CownerObjectU3Ek__BackingField_31() const { return ___U3CownerObjectU3Ek__BackingField_31; }
	inline ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A ** get_address_of_U3CownerObjectU3Ek__BackingField_31() { return &___U3CownerObjectU3Ek__BackingField_31; }
	inline void set_U3CownerObjectU3Ek__BackingField_31(ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A * value)
	{
		___U3CownerObjectU3Ek__BackingField_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CownerObjectU3Ek__BackingField_31), (void*)value);
	}

	inline static int32_t get_offset_of_U3CcontextTypeU3Ek__BackingField_32() { return static_cast<int32_t>(offsetof(Panel_tCC064C952382FEF787E3FE61F6847A375A3DCD99, ___U3CcontextTypeU3Ek__BackingField_32)); }
	inline int32_t get_U3CcontextTypeU3Ek__BackingField_32() const { return ___U3CcontextTypeU3Ek__BackingField_32; }
	inline int32_t* get_address_of_U3CcontextTypeU3Ek__BackingField_32() { return &___U3CcontextTypeU3Ek__BackingField_32; }
	inline void set_U3CcontextTypeU3Ek__BackingField_32(int32_t value)
	{
		___U3CcontextTypeU3Ek__BackingField_32 = value;
	}

	inline static int32_t get_offset_of_U3CsaveViewDataU3Ek__BackingField_33() { return static_cast<int32_t>(offsetof(Panel_tCC064C952382FEF787E3FE61F6847A375A3DCD99, ___U3CsaveViewDataU3Ek__BackingField_33)); }
	inline SavePersistentViewData_tEEF0D942960A5DBFD2C45A9A170E3209913355BF * get_U3CsaveViewDataU3Ek__BackingField_33() const { return ___U3CsaveViewDataU3Ek__BackingField_33; }
	inline SavePersistentViewData_tEEF0D942960A5DBFD2C45A9A170E3209913355BF ** get_address_of_U3CsaveViewDataU3Ek__BackingField_33() { return &___U3CsaveViewDataU3Ek__BackingField_33; }
	inline void set_U3CsaveViewDataU3Ek__BackingField_33(SavePersistentViewData_tEEF0D942960A5DBFD2C45A9A170E3209913355BF * value)
	{
		___U3CsaveViewDataU3Ek__BackingField_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsaveViewDataU3Ek__BackingField_33), (void*)value);
	}

	inline static int32_t get_offset_of_U3CgetViewDataDictionaryU3Ek__BackingField_34() { return static_cast<int32_t>(offsetof(Panel_tCC064C952382FEF787E3FE61F6847A375A3DCD99, ___U3CgetViewDataDictionaryU3Ek__BackingField_34)); }
	inline GetViewDataDictionary_tF4CE61C507D009B7FD8753159E1E893FF1147E5E * get_U3CgetViewDataDictionaryU3Ek__BackingField_34() const { return ___U3CgetViewDataDictionaryU3Ek__BackingField_34; }
	inline GetViewDataDictionary_tF4CE61C507D009B7FD8753159E1E893FF1147E5E ** get_address_of_U3CgetViewDataDictionaryU3Ek__BackingField_34() { return &___U3CgetViewDataDictionaryU3Ek__BackingField_34; }
	inline void set_U3CgetViewDataDictionaryU3Ek__BackingField_34(GetViewDataDictionary_tF4CE61C507D009B7FD8753159E1E893FF1147E5E * value)
	{
		___U3CgetViewDataDictionaryU3Ek__BackingField_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CgetViewDataDictionaryU3Ek__BackingField_34), (void*)value);
	}

	inline static int32_t get_offset_of_U3CfocusControllerU3Ek__BackingField_35() { return static_cast<int32_t>(offsetof(Panel_tCC064C952382FEF787E3FE61F6847A375A3DCD99, ___U3CfocusControllerU3Ek__BackingField_35)); }
	inline FocusController_t0EE43A2ABFA352E752E8DA2B6D17FC322FC59764 * get_U3CfocusControllerU3Ek__BackingField_35() const { return ___U3CfocusControllerU3Ek__BackingField_35; }
	inline FocusController_t0EE43A2ABFA352E752E8DA2B6D17FC322FC59764 ** get_address_of_U3CfocusControllerU3Ek__BackingField_35() { return &___U3CfocusControllerU3Ek__BackingField_35; }
	inline void set_U3CfocusControllerU3Ek__BackingField_35(FocusController_t0EE43A2ABFA352E752E8DA2B6D17FC322FC59764 * value)
	{
		___U3CfocusControllerU3Ek__BackingField_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CfocusControllerU3Ek__BackingField_35), (void*)value);
	}

	inline static int32_t get_offset_of_U3CIMGUIEventInterestsU3Ek__BackingField_36() { return static_cast<int32_t>(offsetof(Panel_tCC064C952382FEF787E3FE61F6847A375A3DCD99, ___U3CIMGUIEventInterestsU3Ek__BackingField_36)); }
	inline EventInterests_t4DC3B6F7CFFDBF0AC4DE302F9102C769B87B9D79  get_U3CIMGUIEventInterestsU3Ek__BackingField_36() const { return ___U3CIMGUIEventInterestsU3Ek__BackingField_36; }
	inline EventInterests_t4DC3B6F7CFFDBF0AC4DE302F9102C769B87B9D79 * get_address_of_U3CIMGUIEventInterestsU3Ek__BackingField_36() { return &___U3CIMGUIEventInterestsU3Ek__BackingField_36; }
	inline void set_U3CIMGUIEventInterestsU3Ek__BackingField_36(EventInterests_t4DC3B6F7CFFDBF0AC4DE302F9102C769B87B9D79  value)
	{
		___U3CIMGUIEventInterestsU3Ek__BackingField_36 = value;
	}

	inline static int32_t get_offset_of_U3CIMGUIContainersCountU3Ek__BackingField_39() { return static_cast<int32_t>(offsetof(Panel_tCC064C952382FEF787E3FE61F6847A375A3DCD99, ___U3CIMGUIContainersCountU3Ek__BackingField_39)); }
	inline int32_t get_U3CIMGUIContainersCountU3Ek__BackingField_39() const { return ___U3CIMGUIContainersCountU3Ek__BackingField_39; }
	inline int32_t* get_address_of_U3CIMGUIContainersCountU3Ek__BackingField_39() { return &___U3CIMGUIContainersCountU3Ek__BackingField_39; }
	inline void set_U3CIMGUIContainersCountU3Ek__BackingField_39(int32_t value)
	{
		___U3CIMGUIContainersCountU3Ek__BackingField_39 = value;
	}

	inline static int32_t get_offset_of_U3CrootIMGUIContainerU3Ek__BackingField_40() { return static_cast<int32_t>(offsetof(Panel_tCC064C952382FEF787E3FE61F6847A375A3DCD99, ___U3CrootIMGUIContainerU3Ek__BackingField_40)); }
	inline IMGUIContainer_tF257F543C4DC9E60BCACBB529C06B2E8F835C06D * get_U3CrootIMGUIContainerU3Ek__BackingField_40() const { return ___U3CrootIMGUIContainerU3Ek__BackingField_40; }
	inline IMGUIContainer_tF257F543C4DC9E60BCACBB529C06B2E8F835C06D ** get_address_of_U3CrootIMGUIContainerU3Ek__BackingField_40() { return &___U3CrootIMGUIContainerU3Ek__BackingField_40; }
	inline void set_U3CrootIMGUIContainerU3Ek__BackingField_40(IMGUIContainer_tF257F543C4DC9E60BCACBB529C06B2E8F835C06D * value)
	{
		___U3CrootIMGUIContainerU3Ek__BackingField_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CrootIMGUIContainerU3Ek__BackingField_40), (void*)value);
	}

	inline static int32_t get_offset_of_m_StandardShader_41() { return static_cast<int32_t>(offsetof(Panel_tCC064C952382FEF787E3FE61F6847A375A3DCD99, ___m_StandardShader_41)); }
	inline Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * get_m_StandardShader_41() const { return ___m_StandardShader_41; }
	inline Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 ** get_address_of_m_StandardShader_41() { return &___m_StandardShader_41; }
	inline void set_m_StandardShader_41(Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * value)
	{
		___m_StandardShader_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_StandardShader_41), (void*)value);
	}

	inline static int32_t get_offset_of_m_Atlas_42() { return static_cast<int32_t>(offsetof(Panel_tCC064C952382FEF787E3FE61F6847A375A3DCD99, ___m_Atlas_42)); }
	inline AtlasBase_t04E16651AFF344EDD21EB14F2E9CF0B76DACA9E3 * get_m_Atlas_42() const { return ___m_Atlas_42; }
	inline AtlasBase_t04E16651AFF344EDD21EB14F2E9CF0B76DACA9E3 ** get_address_of_m_Atlas_42() { return &___m_Atlas_42; }
	inline void set_m_Atlas_42(AtlasBase_t04E16651AFF344EDD21EB14F2E9CF0B76DACA9E3 * value)
	{
		___m_Atlas_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Atlas_42), (void*)value);
	}

	inline static int32_t get_offset_of_m_ValidatingLayout_43() { return static_cast<int32_t>(offsetof(Panel_tCC064C952382FEF787E3FE61F6847A375A3DCD99, ___m_ValidatingLayout_43)); }
	inline bool get_m_ValidatingLayout_43() const { return ___m_ValidatingLayout_43; }
	inline bool* get_address_of_m_ValidatingLayout_43() { return &___m_ValidatingLayout_43; }
	inline void set_m_ValidatingLayout_43(bool value)
	{
		___m_ValidatingLayout_43 = value;
	}
};

struct Panel_tCC064C952382FEF787E3FE61F6847A375A3DCD99_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker UnityEngine.UIElements.Panel::s_MarkerPickAll
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___s_MarkerPickAll_28;
	// UnityEngine.UIElements.LoadResourceFunction UnityEngine.UIElements.Panel::<loadResourceFunc>k__BackingField
	LoadResourceFunction_t078220B6FD54BC6A4F3A9F464A1A247D640FD2B5 * ___U3CloadResourceFuncU3Ek__BackingField_37;
	// UnityEngine.UIElements.TimeMsFunction UnityEngine.UIElements.Panel::<TimeSinceStartup>k__BackingField
	TimeMsFunction_t3F78BFA85034AAEB57E2725339F4327853F0C06B * ___U3CTimeSinceStartupU3Ek__BackingField_38;
	// System.Action`1<UnityEngine.UIElements.Panel> UnityEngine.UIElements.Panel::beforeAnyRepaint
	Action_1_tC48F3EAA22CD0D3F9F99D8605323BA6DDB9C7D47 * ___beforeAnyRepaint_44;

public:
	inline static int32_t get_offset_of_s_MarkerPickAll_28() { return static_cast<int32_t>(offsetof(Panel_tCC064C952382FEF787E3FE61F6847A375A3DCD99_StaticFields, ___s_MarkerPickAll_28)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_s_MarkerPickAll_28() const { return ___s_MarkerPickAll_28; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_s_MarkerPickAll_28() { return &___s_MarkerPickAll_28; }
	inline void set_s_MarkerPickAll_28(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___s_MarkerPickAll_28 = value;
	}

	inline static int32_t get_offset_of_U3CloadResourceFuncU3Ek__BackingField_37() { return static_cast<int32_t>(offsetof(Panel_tCC064C952382FEF787E3FE61F6847A375A3DCD99_StaticFields, ___U3CloadResourceFuncU3Ek__BackingField_37)); }
	inline LoadResourceFunction_t078220B6FD54BC6A4F3A9F464A1A247D640FD2B5 * get_U3CloadResourceFuncU3Ek__BackingField_37() const { return ___U3CloadResourceFuncU3Ek__BackingField_37; }
	inline LoadResourceFunction_t078220B6FD54BC6A4F3A9F464A1A247D640FD2B5 ** get_address_of_U3CloadResourceFuncU3Ek__BackingField_37() { return &___U3CloadResourceFuncU3Ek__BackingField_37; }
	inline void set_U3CloadResourceFuncU3Ek__BackingField_37(LoadResourceFunction_t078220B6FD54BC6A4F3A9F464A1A247D640FD2B5 * value)
	{
		___U3CloadResourceFuncU3Ek__BackingField_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CloadResourceFuncU3Ek__BackingField_37), (void*)value);
	}

	inline static int32_t get_offset_of_U3CTimeSinceStartupU3Ek__BackingField_38() { return static_cast<int32_t>(offsetof(Panel_tCC064C952382FEF787E3FE61F6847A375A3DCD99_StaticFields, ___U3CTimeSinceStartupU3Ek__BackingField_38)); }
	inline TimeMsFunction_t3F78BFA85034AAEB57E2725339F4327853F0C06B * get_U3CTimeSinceStartupU3Ek__BackingField_38() const { return ___U3CTimeSinceStartupU3Ek__BackingField_38; }
	inline TimeMsFunction_t3F78BFA85034AAEB57E2725339F4327853F0C06B ** get_address_of_U3CTimeSinceStartupU3Ek__BackingField_38() { return &___U3CTimeSinceStartupU3Ek__BackingField_38; }
	inline void set_U3CTimeSinceStartupU3Ek__BackingField_38(TimeMsFunction_t3F78BFA85034AAEB57E2725339F4327853F0C06B * value)
	{
		___U3CTimeSinceStartupU3Ek__BackingField_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTimeSinceStartupU3Ek__BackingField_38), (void*)value);
	}

	inline static int32_t get_offset_of_beforeAnyRepaint_44() { return static_cast<int32_t>(offsetof(Panel_tCC064C952382FEF787E3FE61F6847A375A3DCD99_StaticFields, ___beforeAnyRepaint_44)); }
	inline Action_1_tC48F3EAA22CD0D3F9F99D8605323BA6DDB9C7D47 * get_beforeAnyRepaint_44() const { return ___beforeAnyRepaint_44; }
	inline Action_1_tC48F3EAA22CD0D3F9F99D8605323BA6DDB9C7D47 ** get_address_of_beforeAnyRepaint_44() { return &___beforeAnyRepaint_44; }
	inline void set_beforeAnyRepaint_44(Action_1_tC48F3EAA22CD0D3F9F99D8605323BA6DDB9C7D47 * value)
	{
		___beforeAnyRepaint_44 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___beforeAnyRepaint_44), (void*)value);
	}
};


// UnityEngine.UIElements.PanelSettings
struct PanelSettings_tA06886CA55D7F3105153641E0BA56FF15E8DCA69  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:
	// UnityEngine.UIElements.StyleSheet UnityEngine.UIElements.PanelSettings::themeUss
	StyleSheet_t7B6AD8DA876D813A48084D1587CF283490AA0093 * ___themeUss_7;
	// UnityEngine.RenderTexture UnityEngine.UIElements.PanelSettings::m_TargetTexture
	RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___m_TargetTexture_8;
	// UnityEngine.UIElements.PanelScaleModes UnityEngine.UIElements.PanelSettings::m_ScaleMode
	int32_t ___m_ScaleMode_9;
	// System.Single UnityEngine.UIElements.PanelSettings::m_Scale
	float ___m_Scale_10;
	// System.Single UnityEngine.UIElements.PanelSettings::m_ReferenceDpi
	float ___m_ReferenceDpi_12;
	// System.Single UnityEngine.UIElements.PanelSettings::m_FallbackDpi
	float ___m_FallbackDpi_13;
	// UnityEngine.Vector2Int UnityEngine.UIElements.PanelSettings::m_ReferenceResolution
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___m_ReferenceResolution_14;
	// UnityEngine.UIElements.PanelScreenMatchModes UnityEngine.UIElements.PanelSettings::m_ScreenMatchMode
	int32_t ___m_ScreenMatchMode_15;
	// System.Single UnityEngine.UIElements.PanelSettings::m_Match
	float ___m_Match_16;
	// System.Single UnityEngine.UIElements.PanelSettings::m_SortingOrder
	float ___m_SortingOrder_17;
	// System.Int32 UnityEngine.UIElements.PanelSettings::m_TargetDisplay
	int32_t ___m_TargetDisplay_18;
	// System.Boolean UnityEngine.UIElements.PanelSettings::m_ClearDepthStencil
	bool ___m_ClearDepthStencil_19;
	// System.Boolean UnityEngine.UIElements.PanelSettings::m_ClearColor
	bool ___m_ClearColor_20;
	// UnityEngine.Color UnityEngine.UIElements.PanelSettings::m_ColorClearValue
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_ColorClearValue_21;
	// UnityEngine.UIElements.BaseRuntimePanel UnityEngine.UIElements.PanelSettings::m_RuntimePanel
	BaseRuntimePanel_tE55DB58DC0A1F524F98CC999672C716946DA4754 * ___m_RuntimePanel_22;
	// UnityEngine.UIElements.UIDocumentList UnityEngine.UIElements.PanelSettings::m_AttachedUIDocumentsList
	UIDocumentList_t3D7C0E63339FDA7858C1D1AE3EB911CDB76C18C5 * ___m_AttachedUIDocumentsList_23;
	// UnityEngine.UIElements.DynamicAtlasSettings UnityEngine.UIElements.PanelSettings::m_DynamicAtlasSettings
	DynamicAtlasSettings_t851C8E0D9506CB6B36AE277F8FCE439C89097806 * ___m_DynamicAtlasSettings_24;
	// UnityEngine.Shader UnityEngine.UIElements.PanelSettings::m_AtlasBlitShader
	Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * ___m_AtlasBlitShader_25;
	// UnityEngine.Shader UnityEngine.UIElements.PanelSettings::m_RuntimeShader
	Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * ___m_RuntimeShader_26;
	// UnityEngine.Shader UnityEngine.UIElements.PanelSettings::m_RuntimeWorldShader
	Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * ___m_RuntimeWorldShader_27;
	// UnityEngine.Object UnityEngine.UIElements.PanelSettings::textSettings
	Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___textSettings_28;
	// UnityEngine.Rect UnityEngine.UIElements.PanelSettings::m_TargetRect
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___m_TargetRect_29;
	// System.Single UnityEngine.UIElements.PanelSettings::m_ResolvedScale
	float ___m_ResolvedScale_30;
	// System.Func`2<UnityEngine.Vector2,UnityEngine.Vector2> UnityEngine.UIElements.PanelSettings::m_AssignedScreenToPanel
	Func_2_tB3D19331301201246DE473D608119BB47D418EB9 * ___m_AssignedScreenToPanel_31;

public:
	inline static int32_t get_offset_of_themeUss_7() { return static_cast<int32_t>(offsetof(PanelSettings_tA06886CA55D7F3105153641E0BA56FF15E8DCA69, ___themeUss_7)); }
	inline StyleSheet_t7B6AD8DA876D813A48084D1587CF283490AA0093 * get_themeUss_7() const { return ___themeUss_7; }
	inline StyleSheet_t7B6AD8DA876D813A48084D1587CF283490AA0093 ** get_address_of_themeUss_7() { return &___themeUss_7; }
	inline void set_themeUss_7(StyleSheet_t7B6AD8DA876D813A48084D1587CF283490AA0093 * value)
	{
		___themeUss_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___themeUss_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_TargetTexture_8() { return static_cast<int32_t>(offsetof(PanelSettings_tA06886CA55D7F3105153641E0BA56FF15E8DCA69, ___m_TargetTexture_8)); }
	inline RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * get_m_TargetTexture_8() const { return ___m_TargetTexture_8; }
	inline RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 ** get_address_of_m_TargetTexture_8() { return &___m_TargetTexture_8; }
	inline void set_m_TargetTexture_8(RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * value)
	{
		___m_TargetTexture_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TargetTexture_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_ScaleMode_9() { return static_cast<int32_t>(offsetof(PanelSettings_tA06886CA55D7F3105153641E0BA56FF15E8DCA69, ___m_ScaleMode_9)); }
	inline int32_t get_m_ScaleMode_9() const { return ___m_ScaleMode_9; }
	inline int32_t* get_address_of_m_ScaleMode_9() { return &___m_ScaleMode_9; }
	inline void set_m_ScaleMode_9(int32_t value)
	{
		___m_ScaleMode_9 = value;
	}

	inline static int32_t get_offset_of_m_Scale_10() { return static_cast<int32_t>(offsetof(PanelSettings_tA06886CA55D7F3105153641E0BA56FF15E8DCA69, ___m_Scale_10)); }
	inline float get_m_Scale_10() const { return ___m_Scale_10; }
	inline float* get_address_of_m_Scale_10() { return &___m_Scale_10; }
	inline void set_m_Scale_10(float value)
	{
		___m_Scale_10 = value;
	}

	inline static int32_t get_offset_of_m_ReferenceDpi_12() { return static_cast<int32_t>(offsetof(PanelSettings_tA06886CA55D7F3105153641E0BA56FF15E8DCA69, ___m_ReferenceDpi_12)); }
	inline float get_m_ReferenceDpi_12() const { return ___m_ReferenceDpi_12; }
	inline float* get_address_of_m_ReferenceDpi_12() { return &___m_ReferenceDpi_12; }
	inline void set_m_ReferenceDpi_12(float value)
	{
		___m_ReferenceDpi_12 = value;
	}

	inline static int32_t get_offset_of_m_FallbackDpi_13() { return static_cast<int32_t>(offsetof(PanelSettings_tA06886CA55D7F3105153641E0BA56FF15E8DCA69, ___m_FallbackDpi_13)); }
	inline float get_m_FallbackDpi_13() const { return ___m_FallbackDpi_13; }
	inline float* get_address_of_m_FallbackDpi_13() { return &___m_FallbackDpi_13; }
	inline void set_m_FallbackDpi_13(float value)
	{
		___m_FallbackDpi_13 = value;
	}

	inline static int32_t get_offset_of_m_ReferenceResolution_14() { return static_cast<int32_t>(offsetof(PanelSettings_tA06886CA55D7F3105153641E0BA56FF15E8DCA69, ___m_ReferenceResolution_14)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_m_ReferenceResolution_14() const { return ___m_ReferenceResolution_14; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_m_ReferenceResolution_14() { return &___m_ReferenceResolution_14; }
	inline void set_m_ReferenceResolution_14(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___m_ReferenceResolution_14 = value;
	}

	inline static int32_t get_offset_of_m_ScreenMatchMode_15() { return static_cast<int32_t>(offsetof(PanelSettings_tA06886CA55D7F3105153641E0BA56FF15E8DCA69, ___m_ScreenMatchMode_15)); }
	inline int32_t get_m_ScreenMatchMode_15() const { return ___m_ScreenMatchMode_15; }
	inline int32_t* get_address_of_m_ScreenMatchMode_15() { return &___m_ScreenMatchMode_15; }
	inline void set_m_ScreenMatchMode_15(int32_t value)
	{
		___m_ScreenMatchMode_15 = value;
	}

	inline static int32_t get_offset_of_m_Match_16() { return static_cast<int32_t>(offsetof(PanelSettings_tA06886CA55D7F3105153641E0BA56FF15E8DCA69, ___m_Match_16)); }
	inline float get_m_Match_16() const { return ___m_Match_16; }
	inline float* get_address_of_m_Match_16() { return &___m_Match_16; }
	inline void set_m_Match_16(float value)
	{
		___m_Match_16 = value;
	}

	inline static int32_t get_offset_of_m_SortingOrder_17() { return static_cast<int32_t>(offsetof(PanelSettings_tA06886CA55D7F3105153641E0BA56FF15E8DCA69, ___m_SortingOrder_17)); }
	inline float get_m_SortingOrder_17() const { return ___m_SortingOrder_17; }
	inline float* get_address_of_m_SortingOrder_17() { return &___m_SortingOrder_17; }
	inline void set_m_SortingOrder_17(float value)
	{
		___m_SortingOrder_17 = value;
	}

	inline static int32_t get_offset_of_m_TargetDisplay_18() { return static_cast<int32_t>(offsetof(PanelSettings_tA06886CA55D7F3105153641E0BA56FF15E8DCA69, ___m_TargetDisplay_18)); }
	inline int32_t get_m_TargetDisplay_18() const { return ___m_TargetDisplay_18; }
	inline int32_t* get_address_of_m_TargetDisplay_18() { return &___m_TargetDisplay_18; }
	inline void set_m_TargetDisplay_18(int32_t value)
	{
		___m_TargetDisplay_18 = value;
	}

	inline static int32_t get_offset_of_m_ClearDepthStencil_19() { return static_cast<int32_t>(offsetof(PanelSettings_tA06886CA55D7F3105153641E0BA56FF15E8DCA69, ___m_ClearDepthStencil_19)); }
	inline bool get_m_ClearDepthStencil_19() const { return ___m_ClearDepthStencil_19; }
	inline bool* get_address_of_m_ClearDepthStencil_19() { return &___m_ClearDepthStencil_19; }
	inline void set_m_ClearDepthStencil_19(bool value)
	{
		___m_ClearDepthStencil_19 = value;
	}

	inline static int32_t get_offset_of_m_ClearColor_20() { return static_cast<int32_t>(offsetof(PanelSettings_tA06886CA55D7F3105153641E0BA56FF15E8DCA69, ___m_ClearColor_20)); }
	inline bool get_m_ClearColor_20() const { return ___m_ClearColor_20; }
	inline bool* get_address_of_m_ClearColor_20() { return &___m_ClearColor_20; }
	inline void set_m_ClearColor_20(bool value)
	{
		___m_ClearColor_20 = value;
	}

	inline static int32_t get_offset_of_m_ColorClearValue_21() { return static_cast<int32_t>(offsetof(PanelSettings_tA06886CA55D7F3105153641E0BA56FF15E8DCA69, ___m_ColorClearValue_21)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_ColorClearValue_21() const { return ___m_ColorClearValue_21; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_ColorClearValue_21() { return &___m_ColorClearValue_21; }
	inline void set_m_ColorClearValue_21(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_ColorClearValue_21 = value;
	}

	inline static int32_t get_offset_of_m_RuntimePanel_22() { return static_cast<int32_t>(offsetof(PanelSettings_tA06886CA55D7F3105153641E0BA56FF15E8DCA69, ___m_RuntimePanel_22)); }
	inline BaseRuntimePanel_tE55DB58DC0A1F524F98CC999672C716946DA4754 * get_m_RuntimePanel_22() const { return ___m_RuntimePanel_22; }
	inline BaseRuntimePanel_tE55DB58DC0A1F524F98CC999672C716946DA4754 ** get_address_of_m_RuntimePanel_22() { return &___m_RuntimePanel_22; }
	inline void set_m_RuntimePanel_22(BaseRuntimePanel_tE55DB58DC0A1F524F98CC999672C716946DA4754 * value)
	{
		___m_RuntimePanel_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RuntimePanel_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_AttachedUIDocumentsList_23() { return static_cast<int32_t>(offsetof(PanelSettings_tA06886CA55D7F3105153641E0BA56FF15E8DCA69, ___m_AttachedUIDocumentsList_23)); }
	inline UIDocumentList_t3D7C0E63339FDA7858C1D1AE3EB911CDB76C18C5 * get_m_AttachedUIDocumentsList_23() const { return ___m_AttachedUIDocumentsList_23; }
	inline UIDocumentList_t3D7C0E63339FDA7858C1D1AE3EB911CDB76C18C5 ** get_address_of_m_AttachedUIDocumentsList_23() { return &___m_AttachedUIDocumentsList_23; }
	inline void set_m_AttachedUIDocumentsList_23(UIDocumentList_t3D7C0E63339FDA7858C1D1AE3EB911CDB76C18C5 * value)
	{
		___m_AttachedUIDocumentsList_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AttachedUIDocumentsList_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_DynamicAtlasSettings_24() { return static_cast<int32_t>(offsetof(PanelSettings_tA06886CA55D7F3105153641E0BA56FF15E8DCA69, ___m_DynamicAtlasSettings_24)); }
	inline DynamicAtlasSettings_t851C8E0D9506CB6B36AE277F8FCE439C89097806 * get_m_DynamicAtlasSettings_24() const { return ___m_DynamicAtlasSettings_24; }
	inline DynamicAtlasSettings_t851C8E0D9506CB6B36AE277F8FCE439C89097806 ** get_address_of_m_DynamicAtlasSettings_24() { return &___m_DynamicAtlasSettings_24; }
	inline void set_m_DynamicAtlasSettings_24(DynamicAtlasSettings_t851C8E0D9506CB6B36AE277F8FCE439C89097806 * value)
	{
		___m_DynamicAtlasSettings_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DynamicAtlasSettings_24), (void*)value);
	}

	inline static int32_t get_offset_of_m_AtlasBlitShader_25() { return static_cast<int32_t>(offsetof(PanelSettings_tA06886CA55D7F3105153641E0BA56FF15E8DCA69, ___m_AtlasBlitShader_25)); }
	inline Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * get_m_AtlasBlitShader_25() const { return ___m_AtlasBlitShader_25; }
	inline Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 ** get_address_of_m_AtlasBlitShader_25() { return &___m_AtlasBlitShader_25; }
	inline void set_m_AtlasBlitShader_25(Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * value)
	{
		___m_AtlasBlitShader_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AtlasBlitShader_25), (void*)value);
	}

	inline static int32_t get_offset_of_m_RuntimeShader_26() { return static_cast<int32_t>(offsetof(PanelSettings_tA06886CA55D7F3105153641E0BA56FF15E8DCA69, ___m_RuntimeShader_26)); }
	inline Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * get_m_RuntimeShader_26() const { return ___m_RuntimeShader_26; }
	inline Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 ** get_address_of_m_RuntimeShader_26() { return &___m_RuntimeShader_26; }
	inline void set_m_RuntimeShader_26(Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * value)
	{
		___m_RuntimeShader_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RuntimeShader_26), (void*)value);
	}

	inline static int32_t get_offset_of_m_RuntimeWorldShader_27() { return static_cast<int32_t>(offsetof(PanelSettings_tA06886CA55D7F3105153641E0BA56FF15E8DCA69, ___m_RuntimeWorldShader_27)); }
	inline Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * get_m_RuntimeWorldShader_27() const { return ___m_RuntimeWorldShader_27; }
	inline Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 ** get_address_of_m_RuntimeWorldShader_27() { return &___m_RuntimeWorldShader_27; }
	inline void set_m_RuntimeWorldShader_27(Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * value)
	{
		___m_RuntimeWorldShader_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RuntimeWorldShader_27), (void*)value);
	}

	inline static int32_t get_offset_of_textSettings_28() { return static_cast<int32_t>(offsetof(PanelSettings_tA06886CA55D7F3105153641E0BA56FF15E8DCA69, ___textSettings_28)); }
	inline Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * get_textSettings_28() const { return ___textSettings_28; }
	inline Object_tF2F3778131EFF286AF62B7B013A170F95A91571A ** get_address_of_textSettings_28() { return &___textSettings_28; }
	inline void set_textSettings_28(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * value)
	{
		___textSettings_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textSettings_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_TargetRect_29() { return static_cast<int32_t>(offsetof(PanelSettings_tA06886CA55D7F3105153641E0BA56FF15E8DCA69, ___m_TargetRect_29)); }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  get_m_TargetRect_29() const { return ___m_TargetRect_29; }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * get_address_of_m_TargetRect_29() { return &___m_TargetRect_29; }
	inline void set_m_TargetRect_29(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  value)
	{
		___m_TargetRect_29 = value;
	}

	inline static int32_t get_offset_of_m_ResolvedScale_30() { return static_cast<int32_t>(offsetof(PanelSettings_tA06886CA55D7F3105153641E0BA56FF15E8DCA69, ___m_ResolvedScale_30)); }
	inline float get_m_ResolvedScale_30() const { return ___m_ResolvedScale_30; }
	inline float* get_address_of_m_ResolvedScale_30() { return &___m_ResolvedScale_30; }
	inline void set_m_ResolvedScale_30(float value)
	{
		___m_ResolvedScale_30 = value;
	}

	inline static int32_t get_offset_of_m_AssignedScreenToPanel_31() { return static_cast<int32_t>(offsetof(PanelSettings_tA06886CA55D7F3105153641E0BA56FF15E8DCA69, ___m_AssignedScreenToPanel_31)); }
	inline Func_2_tB3D19331301201246DE473D608119BB47D418EB9 * get_m_AssignedScreenToPanel_31() const { return ___m_AssignedScreenToPanel_31; }
	inline Func_2_tB3D19331301201246DE473D608119BB47D418EB9 ** get_address_of_m_AssignedScreenToPanel_31() { return &___m_AssignedScreenToPanel_31; }
	inline void set_m_AssignedScreenToPanel_31(Func_2_tB3D19331301201246DE473D608119BB47D418EB9 * value)
	{
		___m_AssignedScreenToPanel_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AssignedScreenToPanel_31), (void*)value);
	}
};


// UnityEngine.UIElements.UIR.RenderChainVEData
struct RenderChainVEData_tA04ABE934A2F46AD7065F722C65F32AD47916F4A 
{
public:
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.UIR.RenderChainVEData::prev
	VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * ___prev_0;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.UIR.RenderChainVEData::next
	VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * ___next_1;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.UIR.RenderChainVEData::groupTransformAncestor
	VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * ___groupTransformAncestor_2;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.UIR.RenderChainVEData::boneTransformAncestor
	VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * ___boneTransformAncestor_3;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.UIR.RenderChainVEData::prevDirty
	VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * ___prevDirty_4;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.UIR.RenderChainVEData::nextDirty
	VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * ___nextDirty_5;
	// System.Int32 UnityEngine.UIElements.UIR.RenderChainVEData::hierarchyDepth
	int32_t ___hierarchyDepth_6;
	// UnityEngine.UIElements.UIR.RenderDataDirtyTypes UnityEngine.UIElements.UIR.RenderChainVEData::dirtiedValues
	int32_t ___dirtiedValues_7;
	// System.UInt32 UnityEngine.UIElements.UIR.RenderChainVEData::dirtyID
	uint32_t ___dirtyID_8;
	// UnityEngine.UIElements.UIR.Implementation.ClipMethod UnityEngine.UIElements.UIR.RenderChainVEData::clipMethod
	int32_t ___clipMethod_9;
	// UnityEngine.UIElements.UIR.RenderChainCommand UnityEngine.UIElements.UIR.RenderChainVEData::firstCommand
	RenderChainCommand_tBBDDC53CB94BAE2250E9CF9990377A593754E5C4 * ___firstCommand_10;
	// UnityEngine.UIElements.UIR.RenderChainCommand UnityEngine.UIElements.UIR.RenderChainVEData::lastCommand
	RenderChainCommand_tBBDDC53CB94BAE2250E9CF9990377A593754E5C4 * ___lastCommand_11;
	// UnityEngine.UIElements.UIR.RenderChainCommand UnityEngine.UIElements.UIR.RenderChainVEData::firstClosingCommand
	RenderChainCommand_tBBDDC53CB94BAE2250E9CF9990377A593754E5C4 * ___firstClosingCommand_12;
	// UnityEngine.UIElements.UIR.RenderChainCommand UnityEngine.UIElements.UIR.RenderChainVEData::lastClosingCommand
	RenderChainCommand_tBBDDC53CB94BAE2250E9CF9990377A593754E5C4 * ___lastClosingCommand_13;
	// System.Boolean UnityEngine.UIElements.UIR.RenderChainVEData::isInChain
	bool ___isInChain_14;
	// System.Boolean UnityEngine.UIElements.UIR.RenderChainVEData::isStencilClipped
	bool ___isStencilClipped_15;
	// System.Boolean UnityEngine.UIElements.UIR.RenderChainVEData::isHierarchyHidden
	bool ___isHierarchyHidden_16;
	// System.Boolean UnityEngine.UIElements.UIR.RenderChainVEData::disableNudging
	bool ___disableNudging_17;
	// System.Boolean UnityEngine.UIElements.UIR.RenderChainVEData::usesLegacyText
	bool ___usesLegacyText_18;
	// UnityEngine.UIElements.UIR.MeshHandle UnityEngine.UIElements.UIR.RenderChainVEData::data
	MeshHandle_tAD2C2136DE4DA1F3B85138153210B6BFC2D02C03 * ___data_19;
	// UnityEngine.UIElements.UIR.MeshHandle UnityEngine.UIElements.UIR.RenderChainVEData::closingData
	MeshHandle_tAD2C2136DE4DA1F3B85138153210B6BFC2D02C03 * ___closingData_20;
	// UnityEngine.Matrix4x4 UnityEngine.UIElements.UIR.RenderChainVEData::verticesSpace
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___verticesSpace_21;
	// System.Int32 UnityEngine.UIElements.UIR.RenderChainVEData::displacementUVStart
	int32_t ___displacementUVStart_22;
	// System.Int32 UnityEngine.UIElements.UIR.RenderChainVEData::displacementUVEnd
	int32_t ___displacementUVEnd_23;
	// UnityEngine.UIElements.UIR.BMPAlloc UnityEngine.UIElements.UIR.RenderChainVEData::transformID
	BMPAlloc_tB4177CE1148B2C839437C064F7019957DA616504  ___transformID_24;
	// UnityEngine.UIElements.UIR.BMPAlloc UnityEngine.UIElements.UIR.RenderChainVEData::clipRectID
	BMPAlloc_tB4177CE1148B2C839437C064F7019957DA616504  ___clipRectID_25;
	// UnityEngine.UIElements.UIR.BMPAlloc UnityEngine.UIElements.UIR.RenderChainVEData::opacityID
	BMPAlloc_tB4177CE1148B2C839437C064F7019957DA616504  ___opacityID_26;
	// UnityEngine.UIElements.UIR.BMPAlloc UnityEngine.UIElements.UIR.RenderChainVEData::textCoreSettingsID
	BMPAlloc_tB4177CE1148B2C839437C064F7019957DA616504  ___textCoreSettingsID_27;
	// System.Single UnityEngine.UIElements.UIR.RenderChainVEData::compositeOpacity
	float ___compositeOpacity_28;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.UIR.RenderChainVEData::prevText
	VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * ___prevText_29;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.UIR.RenderChainVEData::nextText
	VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * ___nextText_30;
	// System.Collections.Generic.List`1<UnityEngine.UIElements.UIR.RenderChainTextEntry> UnityEngine.UIElements.UIR.RenderChainVEData::textEntries
	List_1_tB8BCBA2CE4815A189DE79280CDA1D508FA541A68 * ___textEntries_31;
	// UnityEngine.UIElements.UIR.BasicNode`1<UnityEngine.UIElements.UIR.TextureEntry> UnityEngine.UIElements.UIR.RenderChainVEData::textures
	BasicNode_1_t0A731487837FD442B3BE0CFDBEEE805F7E80A02E * ___textures_32;

public:
	inline static int32_t get_offset_of_prev_0() { return static_cast<int32_t>(offsetof(RenderChainVEData_tA04ABE934A2F46AD7065F722C65F32AD47916F4A, ___prev_0)); }
	inline VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * get_prev_0() const { return ___prev_0; }
	inline VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 ** get_address_of_prev_0() { return &___prev_0; }
	inline void set_prev_0(VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * value)
	{
		___prev_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___prev_0), (void*)value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(RenderChainVEData_tA04ABE934A2F46AD7065F722C65F32AD47916F4A, ___next_1)); }
	inline VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * get_next_1() const { return ___next_1; }
	inline VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 ** get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * value)
	{
		___next_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___next_1), (void*)value);
	}

	inline static int32_t get_offset_of_groupTransformAncestor_2() { return static_cast<int32_t>(offsetof(RenderChainVEData_tA04ABE934A2F46AD7065F722C65F32AD47916F4A, ___groupTransformAncestor_2)); }
	inline VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * get_groupTransformAncestor_2() const { return ___groupTransformAncestor_2; }
	inline VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 ** get_address_of_groupTransformAncestor_2() { return &___groupTransformAncestor_2; }
	inline void set_groupTransformAncestor_2(VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * value)
	{
		___groupTransformAncestor_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___groupTransformAncestor_2), (void*)value);
	}

	inline static int32_t get_offset_of_boneTransformAncestor_3() { return static_cast<int32_t>(offsetof(RenderChainVEData_tA04ABE934A2F46AD7065F722C65F32AD47916F4A, ___boneTransformAncestor_3)); }
	inline VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * get_boneTransformAncestor_3() const { return ___boneTransformAncestor_3; }
	inline VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 ** get_address_of_boneTransformAncestor_3() { return &___boneTransformAncestor_3; }
	inline void set_boneTransformAncestor_3(VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * value)
	{
		___boneTransformAncestor_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___boneTransformAncestor_3), (void*)value);
	}

	inline static int32_t get_offset_of_prevDirty_4() { return static_cast<int32_t>(offsetof(RenderChainVEData_tA04ABE934A2F46AD7065F722C65F32AD47916F4A, ___prevDirty_4)); }
	inline VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * get_prevDirty_4() const { return ___prevDirty_4; }
	inline VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 ** get_address_of_prevDirty_4() { return &___prevDirty_4; }
	inline void set_prevDirty_4(VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * value)
	{
		___prevDirty_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___prevDirty_4), (void*)value);
	}

	inline static int32_t get_offset_of_nextDirty_5() { return static_cast<int32_t>(offsetof(RenderChainVEData_tA04ABE934A2F46AD7065F722C65F32AD47916F4A, ___nextDirty_5)); }
	inline VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * get_nextDirty_5() const { return ___nextDirty_5; }
	inline VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 ** get_address_of_nextDirty_5() { return &___nextDirty_5; }
	inline void set_nextDirty_5(VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * value)
	{
		___nextDirty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nextDirty_5), (void*)value);
	}

	inline static int32_t get_offset_of_hierarchyDepth_6() { return static_cast<int32_t>(offsetof(RenderChainVEData_tA04ABE934A2F46AD7065F722C65F32AD47916F4A, ___hierarchyDepth_6)); }
	inline int32_t get_hierarchyDepth_6() const { return ___hierarchyDepth_6; }
	inline int32_t* get_address_of_hierarchyDepth_6() { return &___hierarchyDepth_6; }
	inline void set_hierarchyDepth_6(int32_t value)
	{
		___hierarchyDepth_6 = value;
	}

	inline static int32_t get_offset_of_dirtiedValues_7() { return static_cast<int32_t>(offsetof(RenderChainVEData_tA04ABE934A2F46AD7065F722C65F32AD47916F4A, ___dirtiedValues_7)); }
	inline int32_t get_dirtiedValues_7() const { return ___dirtiedValues_7; }
	inline int32_t* get_address_of_dirtiedValues_7() { return &___dirtiedValues_7; }
	inline void set_dirtiedValues_7(int32_t value)
	{
		___dirtiedValues_7 = value;
	}

	inline static int32_t get_offset_of_dirtyID_8() { return static_cast<int32_t>(offsetof(RenderChainVEData_tA04ABE934A2F46AD7065F722C65F32AD47916F4A, ___dirtyID_8)); }
	inline uint32_t get_dirtyID_8() const { return ___dirtyID_8; }
	inline uint32_t* get_address_of_dirtyID_8() { return &___dirtyID_8; }
	inline void set_dirtyID_8(uint32_t value)
	{
		___dirtyID_8 = value;
	}

	inline static int32_t get_offset_of_clipMethod_9() { return static_cast<int32_t>(offsetof(RenderChainVEData_tA04ABE934A2F46AD7065F722C65F32AD47916F4A, ___clipMethod_9)); }
	inline int32_t get_clipMethod_9() const { return ___clipMethod_9; }
	inline int32_t* get_address_of_clipMethod_9() { return &___clipMethod_9; }
	inline void set_clipMethod_9(int32_t value)
	{
		___clipMethod_9 = value;
	}

	inline static int32_t get_offset_of_firstCommand_10() { return static_cast<int32_t>(offsetof(RenderChainVEData_tA04ABE934A2F46AD7065F722C65F32AD47916F4A, ___firstCommand_10)); }
	inline RenderChainCommand_tBBDDC53CB94BAE2250E9CF9990377A593754E5C4 * get_firstCommand_10() const { return ___firstCommand_10; }
	inline RenderChainCommand_tBBDDC53CB94BAE2250E9CF9990377A593754E5C4 ** get_address_of_firstCommand_10() { return &___firstCommand_10; }
	inline void set_firstCommand_10(RenderChainCommand_tBBDDC53CB94BAE2250E9CF9990377A593754E5C4 * value)
	{
		___firstCommand_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___firstCommand_10), (void*)value);
	}

	inline static int32_t get_offset_of_lastCommand_11() { return static_cast<int32_t>(offsetof(RenderChainVEData_tA04ABE934A2F46AD7065F722C65F32AD47916F4A, ___lastCommand_11)); }
	inline RenderChainCommand_tBBDDC53CB94BAE2250E9CF9990377A593754E5C4 * get_lastCommand_11() const { return ___lastCommand_11; }
	inline RenderChainCommand_tBBDDC53CB94BAE2250E9CF9990377A593754E5C4 ** get_address_of_lastCommand_11() { return &___lastCommand_11; }
	inline void set_lastCommand_11(RenderChainCommand_tBBDDC53CB94BAE2250E9CF9990377A593754E5C4 * value)
	{
		___lastCommand_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lastCommand_11), (void*)value);
	}

	inline static int32_t get_offset_of_firstClosingCommand_12() { return static_cast<int32_t>(offsetof(RenderChainVEData_tA04ABE934A2F46AD7065F722C65F32AD47916F4A, ___firstClosingCommand_12)); }
	inline RenderChainCommand_tBBDDC53CB94BAE2250E9CF9990377A593754E5C4 * get_firstClosingCommand_12() const { return ___firstClosingCommand_12; }
	inline RenderChainCommand_tBBDDC53CB94BAE2250E9CF9990377A593754E5C4 ** get_address_of_firstClosingCommand_12() { return &___firstClosingCommand_12; }
	inline void set_firstClosingCommand_12(RenderChainCommand_tBBDDC53CB94BAE2250E9CF9990377A593754E5C4 * value)
	{
		___firstClosingCommand_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___firstClosingCommand_12), (void*)value);
	}

	inline static int32_t get_offset_of_lastClosingCommand_13() { return static_cast<int32_t>(offsetof(RenderChainVEData_tA04ABE934A2F46AD7065F722C65F32AD47916F4A, ___lastClosingCommand_13)); }
	inline RenderChainCommand_tBBDDC53CB94BAE2250E9CF9990377A593754E5C4 * get_lastClosingCommand_13() const { return ___lastClosingCommand_13; }
	inline RenderChainCommand_tBBDDC53CB94BAE2250E9CF9990377A593754E5C4 ** get_address_of_lastClosingCommand_13() { return &___lastClosingCommand_13; }
	inline void set_lastClosingCommand_13(RenderChainCommand_tBBDDC53CB94BAE2250E9CF9990377A593754E5C4 * value)
	{
		___lastClosingCommand_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lastClosingCommand_13), (void*)value);
	}

	inline static int32_t get_offset_of_isInChain_14() { return static_cast<int32_t>(offsetof(RenderChainVEData_tA04ABE934A2F46AD7065F722C65F32AD47916F4A, ___isInChain_14)); }
	inline bool get_isInChain_14() const { return ___isInChain_14; }
	inline bool* get_address_of_isInChain_14() { return &___isInChain_14; }
	inline void set_isInChain_14(bool value)
	{
		___isInChain_14 = value;
	}

	inline static int32_t get_offset_of_isStencilClipped_15() { return static_cast<int32_t>(offsetof(RenderChainVEData_tA04ABE934A2F46AD7065F722C65F32AD47916F4A, ___isStencilClipped_15)); }
	inline bool get_isStencilClipped_15() const { return ___isStencilClipped_15; }
	inline bool* get_address_of_isStencilClipped_15() { return &___isStencilClipped_15; }
	inline void set_isStencilClipped_15(bool value)
	{
		___isStencilClipped_15 = value;
	}

	inline static int32_t get_offset_of_isHierarchyHidden_16() { return static_cast<int32_t>(offsetof(RenderChainVEData_tA04ABE934A2F46AD7065F722C65F32AD47916F4A, ___isHierarchyHidden_16)); }
	inline bool get_isHierarchyHidden_16() const { return ___isHierarchyHidden_16; }
	inline bool* get_address_of_isHierarchyHidden_16() { return &___isHierarchyHidden_16; }
	inline void set_isHierarchyHidden_16(bool value)
	{
		___isHierarchyHidden_16 = value;
	}

	inline static int32_t get_offset_of_disableNudging_17() { return static_cast<int32_t>(offsetof(RenderChainVEData_tA04ABE934A2F46AD7065F722C65F32AD47916F4A, ___disableNudging_17)); }
	inline bool get_disableNudging_17() const { return ___disableNudging_17; }
	inline bool* get_address_of_disableNudging_17() { return &___disableNudging_17; }
	inline void set_disableNudging_17(bool value)
	{
		___disableNudging_17 = value;
	}

	inline static int32_t get_offset_of_usesLegacyText_18() { return static_cast<int32_t>(offsetof(RenderChainVEData_tA04ABE934A2F46AD7065F722C65F32AD47916F4A, ___usesLegacyText_18)); }
	inline bool get_usesLegacyText_18() const { return ___usesLegacyText_18; }
	inline bool* get_address_of_usesLegacyText_18() { return &___usesLegacyText_18; }
	inline void set_usesLegacyText_18(bool value)
	{
		___usesLegacyText_18 = value;
	}

	inline static int32_t get_offset_of_data_19() { return static_cast<int32_t>(offsetof(RenderChainVEData_tA04ABE934A2F46AD7065F722C65F32AD47916F4A, ___data_19)); }
	inline MeshHandle_tAD2C2136DE4DA1F3B85138153210B6BFC2D02C03 * get_data_19() const { return ___data_19; }
	inline MeshHandle_tAD2C2136DE4DA1F3B85138153210B6BFC2D02C03 ** get_address_of_data_19() { return &___data_19; }
	inline void set_data_19(MeshHandle_tAD2C2136DE4DA1F3B85138153210B6BFC2D02C03 * value)
	{
		___data_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_19), (void*)value);
	}

	inline static int32_t get_offset_of_closingData_20() { return static_cast<int32_t>(offsetof(RenderChainVEData_tA04ABE934A2F46AD7065F722C65F32AD47916F4A, ___closingData_20)); }
	inline MeshHandle_tAD2C2136DE4DA1F3B85138153210B6BFC2D02C03 * get_closingData_20() const { return ___closingData_20; }
	inline MeshHandle_tAD2C2136DE4DA1F3B85138153210B6BFC2D02C03 ** get_address_of_closingData_20() { return &___closingData_20; }
	inline void set_closingData_20(MeshHandle_tAD2C2136DE4DA1F3B85138153210B6BFC2D02C03 * value)
	{
		___closingData_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___closingData_20), (void*)value);
	}

	inline static int32_t get_offset_of_verticesSpace_21() { return static_cast<int32_t>(offsetof(RenderChainVEData_tA04ABE934A2F46AD7065F722C65F32AD47916F4A, ___verticesSpace_21)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_verticesSpace_21() const { return ___verticesSpace_21; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_verticesSpace_21() { return &___verticesSpace_21; }
	inline void set_verticesSpace_21(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___verticesSpace_21 = value;
	}

	inline static int32_t get_offset_of_displacementUVStart_22() { return static_cast<int32_t>(offsetof(RenderChainVEData_tA04ABE934A2F46AD7065F722C65F32AD47916F4A, ___displacementUVStart_22)); }
	inline int32_t get_displacementUVStart_22() const { return ___displacementUVStart_22; }
	inline int32_t* get_address_of_displacementUVStart_22() { return &___displacementUVStart_22; }
	inline void set_displacementUVStart_22(int32_t value)
	{
		___displacementUVStart_22 = value;
	}

	inline static int32_t get_offset_of_displacementUVEnd_23() { return static_cast<int32_t>(offsetof(RenderChainVEData_tA04ABE934A2F46AD7065F722C65F32AD47916F4A, ___displacementUVEnd_23)); }
	inline int32_t get_displacementUVEnd_23() const { return ___displacementUVEnd_23; }
	inline int32_t* get_address_of_displacementUVEnd_23() { return &___displacementUVEnd_23; }
	inline void set_displacementUVEnd_23(int32_t value)
	{
		___displacementUVEnd_23 = value;
	}

	inline static int32_t get_offset_of_transformID_24() { return static_cast<int32_t>(offsetof(RenderChainVEData_tA04ABE934A2F46AD7065F722C65F32AD47916F4A, ___transformID_24)); }
	inline BMPAlloc_tB4177CE1148B2C839437C064F7019957DA616504  get_transformID_24() const { return ___transformID_24; }
	inline BMPAlloc_tB4177CE1148B2C839437C064F7019957DA616504 * get_address_of_transformID_24() { return &___transformID_24; }
	inline void set_transformID_24(BMPAlloc_tB4177CE1148B2C839437C064F7019957DA616504  value)
	{
		___transformID_24 = value;
	}

	inline static int32_t get_offset_of_clipRectID_25() { return static_cast<int32_t>(offsetof(RenderChainVEData_tA04ABE934A2F46AD7065F722C65F32AD47916F4A, ___clipRectID_25)); }
	inline BMPAlloc_tB4177CE1148B2C839437C064F7019957DA616504  get_clipRectID_25() const { return ___clipRectID_25; }
	inline BMPAlloc_tB4177CE1148B2C839437C064F7019957DA616504 * get_address_of_clipRectID_25() { return &___clipRectID_25; }
	inline void set_clipRectID_25(BMPAlloc_tB4177CE1148B2C839437C064F7019957DA616504  value)
	{
		___clipRectID_25 = value;
	}

	inline static int32_t get_offset_of_opacityID_26() { return static_cast<int32_t>(offsetof(RenderChainVEData_tA04ABE934A2F46AD7065F722C65F32AD47916F4A, ___opacityID_26)); }
	inline BMPAlloc_tB4177CE1148B2C839437C064F7019957DA616504  get_opacityID_26() const { return ___opacityID_26; }
	inline BMPAlloc_tB4177CE1148B2C839437C064F7019957DA616504 * get_address_of_opacityID_26() { return &___opacityID_26; }
	inline void set_opacityID_26(BMPAlloc_tB4177CE1148B2C839437C064F7019957DA616504  value)
	{
		___opacityID_26 = value;
	}

	inline static int32_t get_offset_of_textCoreSettingsID_27() { return static_cast<int32_t>(offsetof(RenderChainVEData_tA04ABE934A2F46AD7065F722C65F32AD47916F4A, ___textCoreSettingsID_27)); }
	inline BMPAlloc_tB4177CE1148B2C839437C064F7019957DA616504  get_textCoreSettingsID_27() const { return ___textCoreSettingsID_27; }
	inline BMPAlloc_tB4177CE1148B2C839437C064F7019957DA616504 * get_address_of_textCoreSettingsID_27() { return &___textCoreSettingsID_27; }
	inline void set_textCoreSettingsID_27(BMPAlloc_tB4177CE1148B2C839437C064F7019957DA616504  value)
	{
		___textCoreSettingsID_27 = value;
	}

	inline static int32_t get_offset_of_compositeOpacity_28() { return static_cast<int32_t>(offsetof(RenderChainVEData_tA04ABE934A2F46AD7065F722C65F32AD47916F4A, ___compositeOpacity_28)); }
	inline float get_compositeOpacity_28() const { return ___compositeOpacity_28; }
	inline float* get_address_of_compositeOpacity_28() { return &___compositeOpacity_28; }
	inline void set_compositeOpacity_28(float value)
	{
		___compositeOpacity_28 = value;
	}

	inline static int32_t get_offset_of_prevText_29() { return static_cast<int32_t>(offsetof(RenderChainVEData_tA04ABE934A2F46AD7065F722C65F32AD47916F4A, ___prevText_29)); }
	inline VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * get_prevText_29() const { return ___prevText_29; }
	inline VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 ** get_address_of_prevText_29() { return &___prevText_29; }
	inline void set_prevText_29(VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * value)
	{
		___prevText_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___prevText_29), (void*)value);
	}

	inline static int32_t get_offset_of_nextText_30() { return static_cast<int32_t>(offsetof(RenderChainVEData_tA04ABE934A2F46AD7065F722C65F32AD47916F4A, ___nextText_30)); }
	inline VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * get_nextText_30() const { return ___nextText_30; }
	inline VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 ** get_address_of_nextText_30() { return &___nextText_30; }
	inline void set_nextText_30(VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * value)
	{
		___nextText_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nextText_30), (void*)value);
	}

	inline static int32_t get_offset_of_textEntries_31() { return static_cast<int32_t>(offsetof(RenderChainVEData_tA04ABE934A2F46AD7065F722C65F32AD47916F4A, ___textEntries_31)); }
	inline List_1_tB8BCBA2CE4815A189DE79280CDA1D508FA541A68 * get_textEntries_31() const { return ___textEntries_31; }
	inline List_1_tB8BCBA2CE4815A189DE79280CDA1D508FA541A68 ** get_address_of_textEntries_31() { return &___textEntries_31; }
	inline void set_textEntries_31(List_1_tB8BCBA2CE4815A189DE79280CDA1D508FA541A68 * value)
	{
		___textEntries_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textEntries_31), (void*)value);
	}

	inline static int32_t get_offset_of_textures_32() { return static_cast<int32_t>(offsetof(RenderChainVEData_tA04ABE934A2F46AD7065F722C65F32AD47916F4A, ___textures_32)); }
	inline BasicNode_1_t0A731487837FD442B3BE0CFDBEEE805F7E80A02E * get_textures_32() const { return ___textures_32; }
	inline BasicNode_1_t0A731487837FD442B3BE0CFDBEEE805F7E80A02E ** get_address_of_textures_32() { return &___textures_32; }
	inline void set_textures_32(BasicNode_1_t0A731487837FD442B3BE0CFDBEEE805F7E80A02E * value)
	{
		___textures_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textures_32), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UIElements.UIR.RenderChainVEData
struct RenderChainVEData_tA04ABE934A2F46AD7065F722C65F32AD47916F4A_marshaled_pinvoke
{
	VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * ___prev_0;
	VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * ___next_1;
	VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * ___groupTransformAncestor_2;
	VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * ___boneTransformAncestor_3;
	VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * ___prevDirty_4;
	VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * ___nextDirty_5;
	int32_t ___hierarchyDepth_6;
	int32_t ___dirtiedValues_7;
	uint32_t ___dirtyID_8;
	int32_t ___clipMethod_9;
	RenderChainCommand_tBBDDC53CB94BAE2250E9CF9990377A593754E5C4 * ___firstCommand_10;
	RenderChainCommand_tBBDDC53CB94BAE2250E9CF9990377A593754E5C4 * ___lastCommand_11;
	RenderChainCommand_tBBDDC53CB94BAE2250E9CF9990377A593754E5C4 * ___firstClosingCommand_12;
	RenderChainCommand_tBBDDC53CB94BAE2250E9CF9990377A593754E5C4 * ___lastClosingCommand_13;
	int32_t ___isInChain_14;
	int32_t ___isStencilClipped_15;
	int32_t ___isHierarchyHidden_16;
	int32_t ___disableNudging_17;
	int32_t ___usesLegacyText_18;
	MeshHandle_tAD2C2136DE4DA1F3B85138153210B6BFC2D02C03 * ___data_19;
	MeshHandle_tAD2C2136DE4DA1F3B85138153210B6BFC2D02C03 * ___closingData_20;
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___verticesSpace_21;
	int32_t ___displacementUVStart_22;
	int32_t ___displacementUVEnd_23;
	BMPAlloc_tB4177CE1148B2C839437C064F7019957DA616504  ___transformID_24;
	BMPAlloc_tB4177CE1148B2C839437C064F7019957DA616504  ___clipRectID_25;
	BMPAlloc_tB4177CE1148B2C839437C064F7019957DA616504  ___opacityID_26;
	BMPAlloc_tB4177CE1148B2C839437C064F7019957DA616504  ___textCoreSettingsID_27;
	float ___compositeOpacity_28;
	VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * ___prevText_29;
	VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * ___nextText_30;
	List_1_tB8BCBA2CE4815A189DE79280CDA1D508FA541A68 * ___textEntries_31;
	BasicNode_1_t0A731487837FD442B3BE0CFDBEEE805F7E80A02E * ___textures_32;
};
// Native definition for COM marshalling of UnityEngine.UIElements.UIR.RenderChainVEData
struct RenderChainVEData_tA04ABE934A2F46AD7065F722C65F32AD47916F4A_marshaled_com
{
	VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * ___prev_0;
	VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * ___next_1;
	VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * ___groupTransformAncestor_2;
	VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * ___boneTransformAncestor_3;
	VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * ___prevDirty_4;
	VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * ___nextDirty_5;
	int32_t ___hierarchyDepth_6;
	int32_t ___dirtiedValues_7;
	uint32_t ___dirtyID_8;
	int32_t ___clipMethod_9;
	RenderChainCommand_tBBDDC53CB94BAE2250E9CF9990377A593754E5C4 * ___firstCommand_10;
	RenderChainCommand_tBBDDC53CB94BAE2250E9CF9990377A593754E5C4 * ___lastCommand_11;
	RenderChainCommand_tBBDDC53CB94BAE2250E9CF9990377A593754E5C4 * ___firstClosingCommand_12;
	RenderChainCommand_tBBDDC53CB94BAE2250E9CF9990377A593754E5C4 * ___lastClosingCommand_13;
	int32_t ___isInChain_14;
	int32_t ___isStencilClipped_15;
	int32_t ___isHierarchyHidden_16;
	int32_t ___disableNudging_17;
	int32_t ___usesLegacyText_18;
	MeshHandle_tAD2C2136DE4DA1F3B85138153210B6BFC2D02C03 * ___data_19;
	MeshHandle_tAD2C2136DE4DA1F3B85138153210B6BFC2D02C03 * ___closingData_20;
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___verticesSpace_21;
	int32_t ___displacementUVStart_22;
	int32_t ___displacementUVEnd_23;
	BMPAlloc_tB4177CE1148B2C839437C064F7019957DA616504  ___transformID_24;
	BMPAlloc_tB4177CE1148B2C839437C064F7019957DA616504  ___clipRectID_25;
	BMPAlloc_tB4177CE1148B2C839437C064F7019957DA616504  ___opacityID_26;
	BMPAlloc_tB4177CE1148B2C839437C064F7019957DA616504  ___textCoreSettingsID_27;
	float ___compositeOpacity_28;
	VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * ___prevText_29;
	VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * ___nextText_30;
	List_1_tB8BCBA2CE4815A189DE79280CDA1D508FA541A68 * ___textEntries_31;
	BasicNode_1_t0A731487837FD442B3BE0CFDBEEE805F7E80A02E * ___textures_32;
};

// UnityEngine.RenderTexture
struct RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849  : public Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE
{
public:

public:
};


// UnityEngine.UIElements.StyleLength
struct StyleLength_t45F1C3196D4C9FE58C3EBF3B4C25A4F1D275679E 
{
public:
	// UnityEngine.UIElements.Length UnityEngine.UIElements.StyleLength::m_Value
	Length_t4EB2583009584526089344B3DBC93E0C8894BCF4  ___m_Value_0;
	// UnityEngine.UIElements.StyleKeyword UnityEngine.UIElements.StyleLength::m_Keyword
	int32_t ___m_Keyword_1;

public:
	inline static int32_t get_offset_of_m_Value_0() { return static_cast<int32_t>(offsetof(StyleLength_t45F1C3196D4C9FE58C3EBF3B4C25A4F1D275679E, ___m_Value_0)); }
	inline Length_t4EB2583009584526089344B3DBC93E0C8894BCF4  get_m_Value_0() const { return ___m_Value_0; }
	inline Length_t4EB2583009584526089344B3DBC93E0C8894BCF4 * get_address_of_m_Value_0() { return &___m_Value_0; }
	inline void set_m_Value_0(Length_t4EB2583009584526089344B3DBC93E0C8894BCF4  value)
	{
		___m_Value_0 = value;
	}

	inline static int32_t get_offset_of_m_Keyword_1() { return static_cast<int32_t>(offsetof(StyleLength_t45F1C3196D4C9FE58C3EBF3B4C25A4F1D275679E, ___m_Keyword_1)); }
	inline int32_t get_m_Keyword_1() const { return ___m_Keyword_1; }
	inline int32_t* get_address_of_m_Keyword_1() { return &___m_Keyword_1; }
	inline void set_m_Keyword_1(int32_t value)
	{
		___m_Keyword_1 = value;
	}
};


// UnityEngine.UIElements.StyleSheet
struct StyleSheet_t7B6AD8DA876D813A48084D1587CF283490AA0093  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:
	// UnityEngine.UIElements.StyleRule[] UnityEngine.UIElements.StyleSheet::m_Rules
	StyleRuleU5BU5D_tDDB41AFBA1F4E04B0AC3B52CFF91D719172EE92D* ___m_Rules_4;
	// UnityEngine.UIElements.StyleComplexSelector[] UnityEngine.UIElements.StyleSheet::m_ComplexSelectors
	StyleComplexSelectorU5BU5D_t177E5F31FB621168D02162416C4717278278FD3F* ___m_ComplexSelectors_5;
	// System.Single[] UnityEngine.UIElements.StyleSheet::floats
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___floats_6;
	// UnityEngine.UIElements.StyleSheets.Dimension[] UnityEngine.UIElements.StyleSheet::dimensions
	DimensionU5BU5D_t78DE573BBD4E2ABDF8FB32B1FEBBFB7E9E8B9AE2* ___dimensions_7;
	// UnityEngine.Color[] UnityEngine.UIElements.StyleSheet::colors
	ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* ___colors_8;
	// System.String[] UnityEngine.UIElements.StyleSheet::strings
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___strings_9;
	// UnityEngine.Object[] UnityEngine.UIElements.StyleSheet::assets
	ObjectU5BU5D_t1256A8B00BB71C7F582BF08257BE4F826FF64873* ___assets_10;
	// UnityEngine.UIElements.StyleSheet/ImportStruct[] UnityEngine.UIElements.StyleSheet::imports
	ImportStructU5BU5D_tD7ACE95B34F597C406AADCB88C698803125BEBE4* ___imports_11;
	// System.Collections.Generic.List`1<UnityEngine.UIElements.StyleSheet> UnityEngine.UIElements.StyleSheet::m_FlattenedImportedStyleSheets
	List_1_t0E9CFF2ACF7F3C4FB0A6A6465FA93E6BD367DAE5 * ___m_FlattenedImportedStyleSheets_12;
	// System.Int32 UnityEngine.UIElements.StyleSheet::m_ContentHash
	int32_t ___m_ContentHash_13;
	// UnityEngine.UIElements.StyleSheets.ScalableImage[] UnityEngine.UIElements.StyleSheet::scalableImages
	ScalableImageU5BU5D_tD18AF6F2B0D365DB8AF04F6DCFD603681535BF2B* ___scalableImages_14;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.UIElements.StyleComplexSelector> UnityEngine.UIElements.StyleSheet::orderedNameSelectors
	Dictionary_2_t81BDF95B4FE1FFCCE2088649A670EA4EBB30C03F * ___orderedNameSelectors_15;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.UIElements.StyleComplexSelector> UnityEngine.UIElements.StyleSheet::orderedTypeSelectors
	Dictionary_2_t81BDF95B4FE1FFCCE2088649A670EA4EBB30C03F * ___orderedTypeSelectors_16;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.UIElements.StyleComplexSelector> UnityEngine.UIElements.StyleSheet::orderedClassSelectors
	Dictionary_2_t81BDF95B4FE1FFCCE2088649A670EA4EBB30C03F * ___orderedClassSelectors_17;
	// System.Boolean UnityEngine.UIElements.StyleSheet::isUnityStyleSheet
	bool ___isUnityStyleSheet_18;

public:
	inline static int32_t get_offset_of_m_Rules_4() { return static_cast<int32_t>(offsetof(StyleSheet_t7B6AD8DA876D813A48084D1587CF283490AA0093, ___m_Rules_4)); }
	inline StyleRuleU5BU5D_tDDB41AFBA1F4E04B0AC3B52CFF91D719172EE92D* get_m_Rules_4() const { return ___m_Rules_4; }
	inline StyleRuleU5BU5D_tDDB41AFBA1F4E04B0AC3B52CFF91D719172EE92D** get_address_of_m_Rules_4() { return &___m_Rules_4; }
	inline void set_m_Rules_4(StyleRuleU5BU5D_tDDB41AFBA1F4E04B0AC3B52CFF91D719172EE92D* value)
	{
		___m_Rules_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Rules_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_ComplexSelectors_5() { return static_cast<int32_t>(offsetof(StyleSheet_t7B6AD8DA876D813A48084D1587CF283490AA0093, ___m_ComplexSelectors_5)); }
	inline StyleComplexSelectorU5BU5D_t177E5F31FB621168D02162416C4717278278FD3F* get_m_ComplexSelectors_5() const { return ___m_ComplexSelectors_5; }
	inline StyleComplexSelectorU5BU5D_t177E5F31FB621168D02162416C4717278278FD3F** get_address_of_m_ComplexSelectors_5() { return &___m_ComplexSelectors_5; }
	inline void set_m_ComplexSelectors_5(StyleComplexSelectorU5BU5D_t177E5F31FB621168D02162416C4717278278FD3F* value)
	{
		___m_ComplexSelectors_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ComplexSelectors_5), (void*)value);
	}

	inline static int32_t get_offset_of_floats_6() { return static_cast<int32_t>(offsetof(StyleSheet_t7B6AD8DA876D813A48084D1587CF283490AA0093, ___floats_6)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_floats_6() const { return ___floats_6; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_floats_6() { return &___floats_6; }
	inline void set_floats_6(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___floats_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___floats_6), (void*)value);
	}

	inline static int32_t get_offset_of_dimensions_7() { return static_cast<int32_t>(offsetof(StyleSheet_t7B6AD8DA876D813A48084D1587CF283490AA0093, ___dimensions_7)); }
	inline DimensionU5BU5D_t78DE573BBD4E2ABDF8FB32B1FEBBFB7E9E8B9AE2* get_dimensions_7() const { return ___dimensions_7; }
	inline DimensionU5BU5D_t78DE573BBD4E2ABDF8FB32B1FEBBFB7E9E8B9AE2** get_address_of_dimensions_7() { return &___dimensions_7; }
	inline void set_dimensions_7(DimensionU5BU5D_t78DE573BBD4E2ABDF8FB32B1FEBBFB7E9E8B9AE2* value)
	{
		___dimensions_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dimensions_7), (void*)value);
	}

	inline static int32_t get_offset_of_colors_8() { return static_cast<int32_t>(offsetof(StyleSheet_t7B6AD8DA876D813A48084D1587CF283490AA0093, ___colors_8)); }
	inline ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* get_colors_8() const { return ___colors_8; }
	inline ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834** get_address_of_colors_8() { return &___colors_8; }
	inline void set_colors_8(ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* value)
	{
		___colors_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___colors_8), (void*)value);
	}

	inline static int32_t get_offset_of_strings_9() { return static_cast<int32_t>(offsetof(StyleSheet_t7B6AD8DA876D813A48084D1587CF283490AA0093, ___strings_9)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_strings_9() const { return ___strings_9; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_strings_9() { return &___strings_9; }
	inline void set_strings_9(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___strings_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___strings_9), (void*)value);
	}

	inline static int32_t get_offset_of_assets_10() { return static_cast<int32_t>(offsetof(StyleSheet_t7B6AD8DA876D813A48084D1587CF283490AA0093, ___assets_10)); }
	inline ObjectU5BU5D_t1256A8B00BB71C7F582BF08257BE4F826FF64873* get_assets_10() const { return ___assets_10; }
	inline ObjectU5BU5D_t1256A8B00BB71C7F582BF08257BE4F826FF64873** get_address_of_assets_10() { return &___assets_10; }
	inline void set_assets_10(ObjectU5BU5D_t1256A8B00BB71C7F582BF08257BE4F826FF64873* value)
	{
		___assets_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___assets_10), (void*)value);
	}

	inline static int32_t get_offset_of_imports_11() { return static_cast<int32_t>(offsetof(StyleSheet_t7B6AD8DA876D813A48084D1587CF283490AA0093, ___imports_11)); }
	inline ImportStructU5BU5D_tD7ACE95B34F597C406AADCB88C698803125BEBE4* get_imports_11() const { return ___imports_11; }
	inline ImportStructU5BU5D_tD7ACE95B34F597C406AADCB88C698803125BEBE4** get_address_of_imports_11() { return &___imports_11; }
	inline void set_imports_11(ImportStructU5BU5D_tD7ACE95B34F597C406AADCB88C698803125BEBE4* value)
	{
		___imports_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___imports_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_FlattenedImportedStyleSheets_12() { return static_cast<int32_t>(offsetof(StyleSheet_t7B6AD8DA876D813A48084D1587CF283490AA0093, ___m_FlattenedImportedStyleSheets_12)); }
	inline List_1_t0E9CFF2ACF7F3C4FB0A6A6465FA93E6BD367DAE5 * get_m_FlattenedImportedStyleSheets_12() const { return ___m_FlattenedImportedStyleSheets_12; }
	inline List_1_t0E9CFF2ACF7F3C4FB0A6A6465FA93E6BD367DAE5 ** get_address_of_m_FlattenedImportedStyleSheets_12() { return &___m_FlattenedImportedStyleSheets_12; }
	inline void set_m_FlattenedImportedStyleSheets_12(List_1_t0E9CFF2ACF7F3C4FB0A6A6465FA93E6BD367DAE5 * value)
	{
		___m_FlattenedImportedStyleSheets_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FlattenedImportedStyleSheets_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_ContentHash_13() { return static_cast<int32_t>(offsetof(StyleSheet_t7B6AD8DA876D813A48084D1587CF283490AA0093, ___m_ContentHash_13)); }
	inline int32_t get_m_ContentHash_13() const { return ___m_ContentHash_13; }
	inline int32_t* get_address_of_m_ContentHash_13() { return &___m_ContentHash_13; }
	inline void set_m_ContentHash_13(int32_t value)
	{
		___m_ContentHash_13 = value;
	}

	inline static int32_t get_offset_of_scalableImages_14() { return static_cast<int32_t>(offsetof(StyleSheet_t7B6AD8DA876D813A48084D1587CF283490AA0093, ___scalableImages_14)); }
	inline ScalableImageU5BU5D_tD18AF6F2B0D365DB8AF04F6DCFD603681535BF2B* get_scalableImages_14() const { return ___scalableImages_14; }
	inline ScalableImageU5BU5D_tD18AF6F2B0D365DB8AF04F6DCFD603681535BF2B** get_address_of_scalableImages_14() { return &___scalableImages_14; }
	inline void set_scalableImages_14(ScalableImageU5BU5D_tD18AF6F2B0D365DB8AF04F6DCFD603681535BF2B* value)
	{
		___scalableImages_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___scalableImages_14), (void*)value);
	}

	inline static int32_t get_offset_of_orderedNameSelectors_15() { return static_cast<int32_t>(offsetof(StyleSheet_t7B6AD8DA876D813A48084D1587CF283490AA0093, ___orderedNameSelectors_15)); }
	inline Dictionary_2_t81BDF95B4FE1FFCCE2088649A670EA4EBB30C03F * get_orderedNameSelectors_15() const { return ___orderedNameSelectors_15; }
	inline Dictionary_2_t81BDF95B4FE1FFCCE2088649A670EA4EBB30C03F ** get_address_of_orderedNameSelectors_15() { return &___orderedNameSelectors_15; }
	inline void set_orderedNameSelectors_15(Dictionary_2_t81BDF95B4FE1FFCCE2088649A670EA4EBB30C03F * value)
	{
		___orderedNameSelectors_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___orderedNameSelectors_15), (void*)value);
	}

	inline static int32_t get_offset_of_orderedTypeSelectors_16() { return static_cast<int32_t>(offsetof(StyleSheet_t7B6AD8DA876D813A48084D1587CF283490AA0093, ___orderedTypeSelectors_16)); }
	inline Dictionary_2_t81BDF95B4FE1FFCCE2088649A670EA4EBB30C03F * get_orderedTypeSelectors_16() const { return ___orderedTypeSelectors_16; }
	inline Dictionary_2_t81BDF95B4FE1FFCCE2088649A670EA4EBB30C03F ** get_address_of_orderedTypeSelectors_16() { return &___orderedTypeSelectors_16; }
	inline void set_orderedTypeSelectors_16(Dictionary_2_t81BDF95B4FE1FFCCE2088649A670EA4EBB30C03F * value)
	{
		___orderedTypeSelectors_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___orderedTypeSelectors_16), (void*)value);
	}

	inline static int32_t get_offset_of_orderedClassSelectors_17() { return static_cast<int32_t>(offsetof(StyleSheet_t7B6AD8DA876D813A48084D1587CF283490AA0093, ___orderedClassSelectors_17)); }
	inline Dictionary_2_t81BDF95B4FE1FFCCE2088649A670EA4EBB30C03F * get_orderedClassSelectors_17() const { return ___orderedClassSelectors_17; }
	inline Dictionary_2_t81BDF95B4FE1FFCCE2088649A670EA4EBB30C03F ** get_address_of_orderedClassSelectors_17() { return &___orderedClassSelectors_17; }
	inline void set_orderedClassSelectors_17(Dictionary_2_t81BDF95B4FE1FFCCE2088649A670EA4EBB30C03F * value)
	{
		___orderedClassSelectors_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___orderedClassSelectors_17), (void*)value);
	}

	inline static int32_t get_offset_of_isUnityStyleSheet_18() { return static_cast<int32_t>(offsetof(StyleSheet_t7B6AD8DA876D813A48084D1587CF283490AA0093, ___isUnityStyleSheet_18)); }
	inline bool get_isUnityStyleSheet_18() const { return ___isUnityStyleSheet_18; }
	inline bool* get_address_of_isUnityStyleSheet_18() { return &___isUnityStyleSheet_18; }
	inline void set_isUnityStyleSheet_18(bool value)
	{
		___isUnityStyleSheet_18 = value;
	}
};

struct StyleSheet_t7B6AD8DA876D813A48084D1587CF283490AA0093_StaticFields
{
public:
	// System.String UnityEngine.UIElements.StyleSheet::kCustomPropertyMarker
	String_t* ___kCustomPropertyMarker_19;

public:
	inline static int32_t get_offset_of_kCustomPropertyMarker_19() { return static_cast<int32_t>(offsetof(StyleSheet_t7B6AD8DA876D813A48084D1587CF283490AA0093_StaticFields, ___kCustomPropertyMarker_19)); }
	inline String_t* get_kCustomPropertyMarker_19() const { return ___kCustomPropertyMarker_19; }
	inline String_t** get_address_of_kCustomPropertyMarker_19() { return &___kCustomPropertyMarker_19; }
	inline void set_kCustomPropertyMarker_19(String_t* value)
	{
		___kCustomPropertyMarker_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___kCustomPropertyMarker_19), (void*)value);
	}
};


// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF  : public Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE
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


// UnityEngine.UIElements.VisualTreeAsset
struct VisualTreeAsset_tF7210F261F2888C05E43C7B01200FBFEA655D5A9  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:
	// System.Collections.Generic.List`1<UnityEngine.UIElements.VisualTreeAsset/UsingEntry> UnityEngine.UIElements.VisualTreeAsset::m_Usings
	List_1_tE750469ADBDFBDA7C5EBB9A922A8196B3C6D59E7 * ___m_Usings_5;
	// UnityEngine.UIElements.StyleSheet UnityEngine.UIElements.VisualTreeAsset::inlineSheet
	StyleSheet_t7B6AD8DA876D813A48084D1587CF283490AA0093 * ___inlineSheet_6;
	// System.Collections.Generic.List`1<UnityEngine.UIElements.VisualElementAsset> UnityEngine.UIElements.VisualTreeAsset::m_VisualElementAssets
	List_1_t165EB4070C47BAEDC3B39DF0DA5F92511A668FDC * ___m_VisualElementAssets_7;
	// System.Collections.Generic.List`1<UnityEngine.UIElements.TemplateAsset> UnityEngine.UIElements.VisualTreeAsset::m_TemplateAssets
	List_1_tDFFA476CF9738D49ECC91306D54FC2DE5F691CC6 * ___m_TemplateAssets_8;
	// System.Collections.Generic.List`1<UnityEngine.UIElements.VisualTreeAsset/SlotDefinition> UnityEngine.UIElements.VisualTreeAsset::m_Slots
	List_1_tC46FD734126C183B42B3674E5A74558AB19AF03A * ___m_Slots_9;
	// System.Int32 UnityEngine.UIElements.VisualTreeAsset::m_ContentContainerId
	int32_t ___m_ContentContainerId_10;
	// System.Int32 UnityEngine.UIElements.VisualTreeAsset::m_ContentHash
	int32_t ___m_ContentHash_11;

public:
	inline static int32_t get_offset_of_m_Usings_5() { return static_cast<int32_t>(offsetof(VisualTreeAsset_tF7210F261F2888C05E43C7B01200FBFEA655D5A9, ___m_Usings_5)); }
	inline List_1_tE750469ADBDFBDA7C5EBB9A922A8196B3C6D59E7 * get_m_Usings_5() const { return ___m_Usings_5; }
	inline List_1_tE750469ADBDFBDA7C5EBB9A922A8196B3C6D59E7 ** get_address_of_m_Usings_5() { return &___m_Usings_5; }
	inline void set_m_Usings_5(List_1_tE750469ADBDFBDA7C5EBB9A922A8196B3C6D59E7 * value)
	{
		___m_Usings_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Usings_5), (void*)value);
	}

	inline static int32_t get_offset_of_inlineSheet_6() { return static_cast<int32_t>(offsetof(VisualTreeAsset_tF7210F261F2888C05E43C7B01200FBFEA655D5A9, ___inlineSheet_6)); }
	inline StyleSheet_t7B6AD8DA876D813A48084D1587CF283490AA0093 * get_inlineSheet_6() const { return ___inlineSheet_6; }
	inline StyleSheet_t7B6AD8DA876D813A48084D1587CF283490AA0093 ** get_address_of_inlineSheet_6() { return &___inlineSheet_6; }
	inline void set_inlineSheet_6(StyleSheet_t7B6AD8DA876D813A48084D1587CF283490AA0093 * value)
	{
		___inlineSheet_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inlineSheet_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_VisualElementAssets_7() { return static_cast<int32_t>(offsetof(VisualTreeAsset_tF7210F261F2888C05E43C7B01200FBFEA655D5A9, ___m_VisualElementAssets_7)); }
	inline List_1_t165EB4070C47BAEDC3B39DF0DA5F92511A668FDC * get_m_VisualElementAssets_7() const { return ___m_VisualElementAssets_7; }
	inline List_1_t165EB4070C47BAEDC3B39DF0DA5F92511A668FDC ** get_address_of_m_VisualElementAssets_7() { return &___m_VisualElementAssets_7; }
	inline void set_m_VisualElementAssets_7(List_1_t165EB4070C47BAEDC3B39DF0DA5F92511A668FDC * value)
	{
		___m_VisualElementAssets_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_VisualElementAssets_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_TemplateAssets_8() { return static_cast<int32_t>(offsetof(VisualTreeAsset_tF7210F261F2888C05E43C7B01200FBFEA655D5A9, ___m_TemplateAssets_8)); }
	inline List_1_tDFFA476CF9738D49ECC91306D54FC2DE5F691CC6 * get_m_TemplateAssets_8() const { return ___m_TemplateAssets_8; }
	inline List_1_tDFFA476CF9738D49ECC91306D54FC2DE5F691CC6 ** get_address_of_m_TemplateAssets_8() { return &___m_TemplateAssets_8; }
	inline void set_m_TemplateAssets_8(List_1_tDFFA476CF9738D49ECC91306D54FC2DE5F691CC6 * value)
	{
		___m_TemplateAssets_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TemplateAssets_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_Slots_9() { return static_cast<int32_t>(offsetof(VisualTreeAsset_tF7210F261F2888C05E43C7B01200FBFEA655D5A9, ___m_Slots_9)); }
	inline List_1_tC46FD734126C183B42B3674E5A74558AB19AF03A * get_m_Slots_9() const { return ___m_Slots_9; }
	inline List_1_tC46FD734126C183B42B3674E5A74558AB19AF03A ** get_address_of_m_Slots_9() { return &___m_Slots_9; }
	inline void set_m_Slots_9(List_1_tC46FD734126C183B42B3674E5A74558AB19AF03A * value)
	{
		___m_Slots_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Slots_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_ContentContainerId_10() { return static_cast<int32_t>(offsetof(VisualTreeAsset_tF7210F261F2888C05E43C7B01200FBFEA655D5A9, ___m_ContentContainerId_10)); }
	inline int32_t get_m_ContentContainerId_10() const { return ___m_ContentContainerId_10; }
	inline int32_t* get_address_of_m_ContentContainerId_10() { return &___m_ContentContainerId_10; }
	inline void set_m_ContentContainerId_10(int32_t value)
	{
		___m_ContentContainerId_10 = value;
	}

	inline static int32_t get_offset_of_m_ContentHash_11() { return static_cast<int32_t>(offsetof(VisualTreeAsset_tF7210F261F2888C05E43C7B01200FBFEA655D5A9, ___m_ContentHash_11)); }
	inline int32_t get_m_ContentHash_11() const { return ___m_ContentHash_11; }
	inline int32_t* get_address_of_m_ContentHash_11() { return &___m_ContentHash_11; }
	inline void set_m_ContentHash_11(int32_t value)
	{
		___m_ContentHash_11 = value;
	}
};

struct VisualTreeAsset_tF7210F261F2888C05E43C7B01200FBFEA655D5A9_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.UIElements.VisualElement> UnityEngine.UIElements.VisualTreeAsset::s_TemporarySlotInsertionPoints
	Dictionary_2_tE9E786ACC67A5C4EBCF1B89BA4158D0A60363D77 * ___s_TemporarySlotInsertionPoints_4;

public:
	inline static int32_t get_offset_of_s_TemporarySlotInsertionPoints_4() { return static_cast<int32_t>(offsetof(VisualTreeAsset_tF7210F261F2888C05E43C7B01200FBFEA655D5A9_StaticFields, ___s_TemporarySlotInsertionPoints_4)); }
	inline Dictionary_2_tE9E786ACC67A5C4EBCF1B89BA4158D0A60363D77 * get_s_TemporarySlotInsertionPoints_4() const { return ___s_TemporarySlotInsertionPoints_4; }
	inline Dictionary_2_tE9E786ACC67A5C4EBCF1B89BA4158D0A60363D77 ** get_address_of_s_TemporarySlotInsertionPoints_4() { return &___s_TemporarySlotInsertionPoints_4; }
	inline void set_s_TemporarySlotInsertionPoints_4(Dictionary_2_tE9E786ACC67A5C4EBCF1B89BA4158D0A60363D77 * value)
	{
		___s_TemporarySlotInsertionPoints_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_TemporarySlotInsertionPoints_4), (void*)value);
	}
};


// UnityEngine.UIElements.UIElementsRuntimeUtility/CreateRuntimePanelDelegate
struct CreateRuntimePanelDelegate_t0EEBC61860CC3E2C6777076F6F65CF11EE029F53  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.UIElements.KeyboardEventBase`1<UnityEngine.UIElements.KeyDownEvent>
struct KeyboardEventBase_1_t21A03EBF2C37353CE0F48477560D753D9A3F3F24  : public EventBase_1_tA50D96483E133B256F4EA87D789753E52559FFB5
{
public:
	// UnityEngine.EventModifiers UnityEngine.UIElements.KeyboardEventBase`1::<modifiers>k__BackingField
	int32_t ___U3CmodifiersU3Ek__BackingField_18;
	// System.Char UnityEngine.UIElements.KeyboardEventBase`1::<character>k__BackingField
	Il2CppChar ___U3CcharacterU3Ek__BackingField_19;
	// UnityEngine.KeyCode UnityEngine.UIElements.KeyboardEventBase`1::<keyCode>k__BackingField
	int32_t ___U3CkeyCodeU3Ek__BackingField_20;

public:
	inline static int32_t get_offset_of_U3CmodifiersU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(KeyboardEventBase_1_t21A03EBF2C37353CE0F48477560D753D9A3F3F24, ___U3CmodifiersU3Ek__BackingField_18)); }
	inline int32_t get_U3CmodifiersU3Ek__BackingField_18() const { return ___U3CmodifiersU3Ek__BackingField_18; }
	inline int32_t* get_address_of_U3CmodifiersU3Ek__BackingField_18() { return &___U3CmodifiersU3Ek__BackingField_18; }
	inline void set_U3CmodifiersU3Ek__BackingField_18(int32_t value)
	{
		___U3CmodifiersU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_U3CcharacterU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(KeyboardEventBase_1_t21A03EBF2C37353CE0F48477560D753D9A3F3F24, ___U3CcharacterU3Ek__BackingField_19)); }
	inline Il2CppChar get_U3CcharacterU3Ek__BackingField_19() const { return ___U3CcharacterU3Ek__BackingField_19; }
	inline Il2CppChar* get_address_of_U3CcharacterU3Ek__BackingField_19() { return &___U3CcharacterU3Ek__BackingField_19; }
	inline void set_U3CcharacterU3Ek__BackingField_19(Il2CppChar value)
	{
		___U3CcharacterU3Ek__BackingField_19 = value;
	}

	inline static int32_t get_offset_of_U3CkeyCodeU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(KeyboardEventBase_1_t21A03EBF2C37353CE0F48477560D753D9A3F3F24, ___U3CkeyCodeU3Ek__BackingField_20)); }
	inline int32_t get_U3CkeyCodeU3Ek__BackingField_20() const { return ___U3CkeyCodeU3Ek__BackingField_20; }
	inline int32_t* get_address_of_U3CkeyCodeU3Ek__BackingField_20() { return &___U3CkeyCodeU3Ek__BackingField_20; }
	inline void set_U3CkeyCodeU3Ek__BackingField_20(int32_t value)
	{
		___U3CkeyCodeU3Ek__BackingField_20 = value;
	}
};


// UnityEngine.UIElements.KeyboardEventBase`1<System.Object>
struct KeyboardEventBase_1_t69A112BDACF51D37126F2FA7FE5BAB6B7E3D4620  : public EventBase_1_t103D09E981175BBC55643938B135F2609BA881F6
{
public:
	// UnityEngine.EventModifiers UnityEngine.UIElements.KeyboardEventBase`1::<modifiers>k__BackingField
	int32_t ___U3CmodifiersU3Ek__BackingField_18;
	// System.Char UnityEngine.UIElements.KeyboardEventBase`1::<character>k__BackingField
	Il2CppChar ___U3CcharacterU3Ek__BackingField_19;
	// UnityEngine.KeyCode UnityEngine.UIElements.KeyboardEventBase`1::<keyCode>k__BackingField
	int32_t ___U3CkeyCodeU3Ek__BackingField_20;

public:
	inline static int32_t get_offset_of_U3CmodifiersU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(KeyboardEventBase_1_t69A112BDACF51D37126F2FA7FE5BAB6B7E3D4620, ___U3CmodifiersU3Ek__BackingField_18)); }
	inline int32_t get_U3CmodifiersU3Ek__BackingField_18() const { return ___U3CmodifiersU3Ek__BackingField_18; }
	inline int32_t* get_address_of_U3CmodifiersU3Ek__BackingField_18() { return &___U3CmodifiersU3Ek__BackingField_18; }
	inline void set_U3CmodifiersU3Ek__BackingField_18(int32_t value)
	{
		___U3CmodifiersU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_U3CcharacterU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(KeyboardEventBase_1_t69A112BDACF51D37126F2FA7FE5BAB6B7E3D4620, ___U3CcharacterU3Ek__BackingField_19)); }
	inline Il2CppChar get_U3CcharacterU3Ek__BackingField_19() const { return ___U3CcharacterU3Ek__BackingField_19; }
	inline Il2CppChar* get_address_of_U3CcharacterU3Ek__BackingField_19() { return &___U3CcharacterU3Ek__BackingField_19; }
	inline void set_U3CcharacterU3Ek__BackingField_19(Il2CppChar value)
	{
		___U3CcharacterU3Ek__BackingField_19 = value;
	}

	inline static int32_t get_offset_of_U3CkeyCodeU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(KeyboardEventBase_1_t69A112BDACF51D37126F2FA7FE5BAB6B7E3D4620, ___U3CkeyCodeU3Ek__BackingField_20)); }
	inline int32_t get_U3CkeyCodeU3Ek__BackingField_20() const { return ___U3CkeyCodeU3Ek__BackingField_20; }
	inline int32_t* get_address_of_U3CkeyCodeU3Ek__BackingField_20() { return &___U3CkeyCodeU3Ek__BackingField_20; }
	inline void set_U3CkeyCodeU3Ek__BackingField_20(int32_t value)
	{
		___U3CkeyCodeU3Ek__BackingField_20 = value;
	}
};


// UnityEngine.UIElements.NavigationEventBase`1<UnityEngine.UIElements.NavigationMoveEvent>
struct NavigationEventBase_1_t12D7256564930EC3BEEEBBE14CE9AC360BEE5D42  : public EventBase_1_t5F2BBA518F7956A01DD2DAA3C80709A1904FF828
{
public:

public:
};


// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8  : public ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00
{
public:
	// System.Object System.ArgumentOutOfRangeException::m_actualValue
	RuntimeObject * ___m_actualValue_19;

public:
	inline static int32_t get_offset_of_m_actualValue_19() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8, ___m_actualValue_19)); }
	inline RuntimeObject * get_m_actualValue_19() const { return ___m_actualValue_19; }
	inline RuntimeObject ** get_address_of_m_actualValue_19() { return &___m_actualValue_19; }
	inline void set_m_actualValue_19(RuntimeObject * value)
	{
		___m_actualValue_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_actualValue_19), (void*)value);
	}
};

struct ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_StaticFields
{
public:
	// System.String modreq(System.Runtime.CompilerServices.IsVolatile) System.ArgumentOutOfRangeException::_rangeMessage
	String_t* ____rangeMessage_18;

public:
	inline static int32_t get_offset_of__rangeMessage_18() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_StaticFields, ____rangeMessage_18)); }
	inline String_t* get__rangeMessage_18() const { return ____rangeMessage_18; }
	inline String_t** get_address_of__rangeMessage_18() { return &____rangeMessage_18; }
	inline void set__rangeMessage_18(String_t* value)
	{
		____rangeMessage_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rangeMessage_18), (void*)value);
	}
};


// UnityEngine.UIElements.BaseRuntimePanel
struct BaseRuntimePanel_tE55DB58DC0A1F524F98CC999672C716946DA4754  : public Panel_tCC064C952382FEF787E3FE61F6847A375A3DCD99
{
public:
	// UnityEngine.GameObject UnityEngine.UIElements.BaseRuntimePanel::m_SelectableGameObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_SelectableGameObject_45;
	// System.Action UnityEngine.UIElements.BaseRuntimePanel::destroyed
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___destroyed_46;
	// UnityEngine.Shader UnityEngine.UIElements.BaseRuntimePanel::m_StandardWorldSpaceShader
	Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * ___m_StandardWorldSpaceShader_47;
	// System.Boolean UnityEngine.UIElements.BaseRuntimePanel::m_DrawToCameras
	bool ___m_DrawToCameras_48;
	// UnityEngine.RenderTexture UnityEngine.UIElements.BaseRuntimePanel::targetTexture
	RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___targetTexture_49;
	// UnityEngine.Matrix4x4 UnityEngine.UIElements.BaseRuntimePanel::panelToWorld
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___panelToWorld_50;
	// System.Int32 UnityEngine.UIElements.BaseRuntimePanel::<targetDisplay>k__BackingField
	int32_t ___U3CtargetDisplayU3Ek__BackingField_51;
	// System.Func`2<UnityEngine.Vector2,UnityEngine.Vector2> UnityEngine.UIElements.BaseRuntimePanel::m_ScreenToPanelSpace
	Func_2_tB3D19331301201246DE473D608119BB47D418EB9 * ___m_ScreenToPanelSpace_53;

public:
	inline static int32_t get_offset_of_m_SelectableGameObject_45() { return static_cast<int32_t>(offsetof(BaseRuntimePanel_tE55DB58DC0A1F524F98CC999672C716946DA4754, ___m_SelectableGameObject_45)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_SelectableGameObject_45() const { return ___m_SelectableGameObject_45; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_SelectableGameObject_45() { return &___m_SelectableGameObject_45; }
	inline void set_m_SelectableGameObject_45(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_SelectableGameObject_45 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectableGameObject_45), (void*)value);
	}

	inline static int32_t get_offset_of_destroyed_46() { return static_cast<int32_t>(offsetof(BaseRuntimePanel_tE55DB58DC0A1F524F98CC999672C716946DA4754, ___destroyed_46)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_destroyed_46() const { return ___destroyed_46; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_destroyed_46() { return &___destroyed_46; }
	inline void set_destroyed_46(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___destroyed_46 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___destroyed_46), (void*)value);
	}

	inline static int32_t get_offset_of_m_StandardWorldSpaceShader_47() { return static_cast<int32_t>(offsetof(BaseRuntimePanel_tE55DB58DC0A1F524F98CC999672C716946DA4754, ___m_StandardWorldSpaceShader_47)); }
	inline Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * get_m_StandardWorldSpaceShader_47() const { return ___m_StandardWorldSpaceShader_47; }
	inline Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 ** get_address_of_m_StandardWorldSpaceShader_47() { return &___m_StandardWorldSpaceShader_47; }
	inline void set_m_StandardWorldSpaceShader_47(Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * value)
	{
		___m_StandardWorldSpaceShader_47 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_StandardWorldSpaceShader_47), (void*)value);
	}

	inline static int32_t get_offset_of_m_DrawToCameras_48() { return static_cast<int32_t>(offsetof(BaseRuntimePanel_tE55DB58DC0A1F524F98CC999672C716946DA4754, ___m_DrawToCameras_48)); }
	inline bool get_m_DrawToCameras_48() const { return ___m_DrawToCameras_48; }
	inline bool* get_address_of_m_DrawToCameras_48() { return &___m_DrawToCameras_48; }
	inline void set_m_DrawToCameras_48(bool value)
	{
		___m_DrawToCameras_48 = value;
	}

	inline static int32_t get_offset_of_targetTexture_49() { return static_cast<int32_t>(offsetof(BaseRuntimePanel_tE55DB58DC0A1F524F98CC999672C716946DA4754, ___targetTexture_49)); }
	inline RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * get_targetTexture_49() const { return ___targetTexture_49; }
	inline RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 ** get_address_of_targetTexture_49() { return &___targetTexture_49; }
	inline void set_targetTexture_49(RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * value)
	{
		___targetTexture_49 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___targetTexture_49), (void*)value);
	}

	inline static int32_t get_offset_of_panelToWorld_50() { return static_cast<int32_t>(offsetof(BaseRuntimePanel_tE55DB58DC0A1F524F98CC999672C716946DA4754, ___panelToWorld_50)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_panelToWorld_50() const { return ___panelToWorld_50; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_panelToWorld_50() { return &___panelToWorld_50; }
	inline void set_panelToWorld_50(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___panelToWorld_50 = value;
	}

	inline static int32_t get_offset_of_U3CtargetDisplayU3Ek__BackingField_51() { return static_cast<int32_t>(offsetof(BaseRuntimePanel_tE55DB58DC0A1F524F98CC999672C716946DA4754, ___U3CtargetDisplayU3Ek__BackingField_51)); }
	inline int32_t get_U3CtargetDisplayU3Ek__BackingField_51() const { return ___U3CtargetDisplayU3Ek__BackingField_51; }
	inline int32_t* get_address_of_U3CtargetDisplayU3Ek__BackingField_51() { return &___U3CtargetDisplayU3Ek__BackingField_51; }
	inline void set_U3CtargetDisplayU3Ek__BackingField_51(int32_t value)
	{
		___U3CtargetDisplayU3Ek__BackingField_51 = value;
	}

	inline static int32_t get_offset_of_m_ScreenToPanelSpace_53() { return static_cast<int32_t>(offsetof(BaseRuntimePanel_tE55DB58DC0A1F524F98CC999672C716946DA4754, ___m_ScreenToPanelSpace_53)); }
	inline Func_2_tB3D19331301201246DE473D608119BB47D418EB9 * get_m_ScreenToPanelSpace_53() const { return ___m_ScreenToPanelSpace_53; }
	inline Func_2_tB3D19331301201246DE473D608119BB47D418EB9 ** get_address_of_m_ScreenToPanelSpace_53() { return &___m_ScreenToPanelSpace_53; }
	inline void set_m_ScreenToPanelSpace_53(Func_2_tB3D19331301201246DE473D608119BB47D418EB9 * value)
	{
		___m_ScreenToPanelSpace_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ScreenToPanelSpace_53), (void*)value);
	}
};

struct BaseRuntimePanel_tE55DB58DC0A1F524F98CC999672C716946DA4754_StaticFields
{
public:
	// System.Func`2<UnityEngine.Vector2,UnityEngine.Vector2> UnityEngine.UIElements.BaseRuntimePanel::DefaultScreenToPanelSpace
	Func_2_tB3D19331301201246DE473D608119BB47D418EB9 * ___DefaultScreenToPanelSpace_52;

public:
	inline static int32_t get_offset_of_DefaultScreenToPanelSpace_52() { return static_cast<int32_t>(offsetof(BaseRuntimePanel_tE55DB58DC0A1F524F98CC999672C716946DA4754_StaticFields, ___DefaultScreenToPanelSpace_52)); }
	inline Func_2_tB3D19331301201246DE473D608119BB47D418EB9 * get_DefaultScreenToPanelSpace_52() const { return ___DefaultScreenToPanelSpace_52; }
	inline Func_2_tB3D19331301201246DE473D608119BB47D418EB9 ** get_address_of_DefaultScreenToPanelSpace_52() { return &___DefaultScreenToPanelSpace_52; }
	inline void set_DefaultScreenToPanelSpace_52(Func_2_tB3D19331301201246DE473D608119BB47D418EB9 * value)
	{
		___DefaultScreenToPanelSpace_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DefaultScreenToPanelSpace_52), (void*)value);
	}
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


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.UIElements.VisualElement
struct VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909  : public Focusable_tF2E839AB6DBE413F04FC62347D7074D7377FD1E1
{
public:
	// System.String UnityEngine.UIElements.VisualElement::m_Name
	String_t* ___m_Name_10;
	// System.Collections.Generic.List`1<System.String> UnityEngine.UIElements.VisualElement::m_ClassList
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___m_ClassList_11;
	// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.PropertyName,System.Object>> UnityEngine.UIElements.VisualElement::m_PropertyBag
	List_1_t3F0CE5680E8E1FAF64EDF53405C8CCA7DC846CEC * ___m_PropertyBag_12;
	// UnityEngine.UIElements.VisualElementFlags UnityEngine.UIElements.VisualElement::m_Flags
	int32_t ___m_Flags_13;
	// System.String UnityEngine.UIElements.VisualElement::m_ViewDataKey
	String_t* ___m_ViewDataKey_14;
	// UnityEngine.UIElements.RenderHints UnityEngine.UIElements.VisualElement::m_RenderHints
	int32_t ___m_RenderHints_15;
	// UnityEngine.Rect UnityEngine.UIElements.VisualElement::lastLayout
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___lastLayout_16;
	// UnityEngine.Rect UnityEngine.UIElements.VisualElement::lastPadding
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___lastPadding_17;
	// UnityEngine.UIElements.UIR.RenderChainVEData UnityEngine.UIElements.VisualElement::renderChainData
	RenderChainVEData_tA04ABE934A2F46AD7065F722C65F32AD47916F4A  ___renderChainData_18;
	// UnityEngine.Vector3 UnityEngine.UIElements.VisualElement::m_Position
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Position_19;
	// UnityEngine.Quaternion UnityEngine.UIElements.VisualElement::m_Rotation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___m_Rotation_20;
	// UnityEngine.Vector3 UnityEngine.UIElements.VisualElement::m_Scale
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Scale_21;
	// UnityEngine.Rect UnityEngine.UIElements.VisualElement::m_Layout
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___m_Layout_22;
	// UnityEngine.Rect UnityEngine.UIElements.VisualElement::m_BoundingBox
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___m_BoundingBox_23;
	// UnityEngine.Rect UnityEngine.UIElements.VisualElement::m_WorldBoundingBox
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___m_WorldBoundingBox_24;
	// UnityEngine.Matrix4x4 UnityEngine.UIElements.VisualElement::m_WorldTransformCache
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___m_WorldTransformCache_25;
	// UnityEngine.Matrix4x4 UnityEngine.UIElements.VisualElement::m_WorldTransformInverseCache
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___m_WorldTransformInverseCache_26;
	// UnityEngine.Rect UnityEngine.UIElements.VisualElement::m_WorldClip
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___m_WorldClip_27;
	// UnityEngine.Rect UnityEngine.UIElements.VisualElement::m_WorldClipMinusGroup
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___m_WorldClipMinusGroup_28;
	// UnityEngine.UIElements.PseudoStates UnityEngine.UIElements.VisualElement::triggerPseudoMask
	int32_t ___triggerPseudoMask_30;
	// UnityEngine.UIElements.PseudoStates UnityEngine.UIElements.VisualElement::dependencyPseudoMask
	int32_t ___dependencyPseudoMask_31;
	// UnityEngine.UIElements.PseudoStates UnityEngine.UIElements.VisualElement::m_PseudoStates
	int32_t ___m_PseudoStates_32;
	// UnityEngine.UIElements.PickingMode UnityEngine.UIElements.VisualElement::<pickingMode>k__BackingField
	int32_t ___U3CpickingModeU3Ek__BackingField_33;
	// UnityEngine.Yoga.YogaNode UnityEngine.UIElements.VisualElement::<yogaNode>k__BackingField
	YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * ___U3CyogaNodeU3Ek__BackingField_34;
	// UnityEngine.UIElements.ComputedStyle UnityEngine.UIElements.VisualElement::m_SharedStyle
	ComputedStyle_tF8F838DB4D9AC943B38AD090B1E5BB64D4A15027 * ___m_SharedStyle_35;
	// UnityEngine.UIElements.ComputedStyle UnityEngine.UIElements.VisualElement::m_Style
	ComputedStyle_tF8F838DB4D9AC943B38AD090B1E5BB64D4A15027 * ___m_Style_36;
	// UnityEngine.UIElements.StyleVariableContext UnityEngine.UIElements.VisualElement::variableContext
	StyleVariableContext_t938925BC9799C7F449B8A91E1B5BDBECA4677875 * ___variableContext_37;
	// System.Int32 UnityEngine.UIElements.VisualElement::inheritedStylesHash
	int32_t ___inheritedStylesHash_38;
	// System.UInt32 UnityEngine.UIElements.VisualElement::controlid
	uint32_t ___controlid_39;
	// System.Int32 UnityEngine.UIElements.VisualElement::imguiContainerDescendantCount
	int32_t ___imguiContainerDescendantCount_40;
	// System.Boolean UnityEngine.UIElements.VisualElement::<enabledSelf>k__BackingField
	bool ___U3CenabledSelfU3Ek__BackingField_41;
	// System.Action`1<UnityEngine.UIElements.MeshGenerationContext> UnityEngine.UIElements.VisualElement::<generateVisualContent>k__BackingField
	Action_1_t233C4A43441782DC9CF3F90D88CB275BC4F89C34 * ___U3CgenerateVisualContentU3Ek__BackingField_42;
	// UnityEngine.UIElements.VisualElement/RenderTargetMode UnityEngine.UIElements.VisualElement::m_SubRenderTargetMode
	int32_t ___m_SubRenderTargetMode_43;
	// UnityEngine.Material UnityEngine.UIElements.VisualElement::m_defaultMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_defaultMaterial_45;
	// System.Collections.Generic.List`1<UnityEngine.UIElements.Experimental.IValueAnimationUpdate> UnityEngine.UIElements.VisualElement::m_RunningAnimations
	List_1_t76D6F8AED226DECE77A81ACDB46AEB711DA629F9 * ___m_RunningAnimations_46;
	// UnityEngine.UIElements.VisualElement/Hierarchy UnityEngine.UIElements.VisualElement::<hierarchy>k__BackingField
	Hierarchy_tC971D6D195075C1B878D4B2558ECAD4E5FF6861A  ___U3ChierarchyU3Ek__BackingField_48;
	// System.Boolean UnityEngine.UIElements.VisualElement::<isRootVisualContainer>k__BackingField
	bool ___U3CisRootVisualContainerU3Ek__BackingField_49;
	// System.Boolean UnityEngine.UIElements.VisualElement::<cacheAsBitmap>k__BackingField
	bool ___U3CcacheAsBitmapU3Ek__BackingField_50;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.VisualElement::m_PhysicalParent
	VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * ___m_PhysicalParent_51;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.VisualElement::m_LogicalParent
	VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * ___m_LogicalParent_52;
	// System.Collections.Generic.List`1<UnityEngine.UIElements.VisualElement> UnityEngine.UIElements.VisualElement::m_Children
	List_1_tF1CA7B1792CDC7EDFF5FCCC4AF767C8E127E2462 * ___m_Children_54;
	// UnityEngine.UIElements.BaseVisualElementPanel UnityEngine.UIElements.VisualElement::<elementPanel>k__BackingField
	BaseVisualElementPanel_tFF0B76C4FDAE6AA5D9A055D1FDD29AE67B93B95D * ___U3CelementPanelU3Ek__BackingField_55;
	// UnityEngine.UIElements.InlineStyleAccess UnityEngine.UIElements.VisualElement::inlineStyleAccess
	InlineStyleAccess_t8FF96503AEB2FEC93A211DB91F5ECA43C691EF9D * ___inlineStyleAccess_56;
	// System.Collections.Generic.List`1<UnityEngine.UIElements.StyleSheet> UnityEngine.UIElements.VisualElement::styleSheetList
	List_1_t0E9CFF2ACF7F3C4FB0A6A6465FA93E6BD367DAE5 * ___styleSheetList_57;
	// UnityEngine.UIElements.VisualElement/TypeData UnityEngine.UIElements.VisualElement::m_TypeData
	TypeData_tC5B70027968DCA692CD8BD39D87872986F1029E5 * ___m_TypeData_61;

public:
	inline static int32_t get_offset_of_m_Name_10() { return static_cast<int32_t>(offsetof(VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909, ___m_Name_10)); }
	inline String_t* get_m_Name_10() const { return ___m_Name_10; }
	inline String_t** get_address_of_m_Name_10() { return &___m_Name_10; }
	inline void set_m_Name_10(String_t* value)
	{
		___m_Name_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Name_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_ClassList_11() { return static_cast<int32_t>(offsetof(VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909, ___m_ClassList_11)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_m_ClassList_11() const { return ___m_ClassList_11; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_m_ClassList_11() { return &___m_ClassList_11; }
	inline void set_m_ClassList_11(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___m_ClassList_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ClassList_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_PropertyBag_12() { return static_cast<int32_t>(offsetof(VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909, ___m_PropertyBag_12)); }
	inline List_1_t3F0CE5680E8E1FAF64EDF53405C8CCA7DC846CEC * get_m_PropertyBag_12() const { return ___m_PropertyBag_12; }
	inline List_1_t3F0CE5680E8E1FAF64EDF53405C8CCA7DC846CEC ** get_address_of_m_PropertyBag_12() { return &___m_PropertyBag_12; }
	inline void set_m_PropertyBag_12(List_1_t3F0CE5680E8E1FAF64EDF53405C8CCA7DC846CEC * value)
	{
		___m_PropertyBag_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PropertyBag_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_Flags_13() { return static_cast<int32_t>(offsetof(VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909, ___m_Flags_13)); }
	inline int32_t get_m_Flags_13() const { return ___m_Flags_13; }
	inline int32_t* get_address_of_m_Flags_13() { return &___m_Flags_13; }
	inline void set_m_Flags_13(int32_t value)
	{
		___m_Flags_13 = value;
	}

	inline static int32_t get_offset_of_m_ViewDataKey_14() { return static_cast<int32_t>(offsetof(VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909, ___m_ViewDataKey_14)); }
	inline String_t* get_m_ViewDataKey_14() const { return ___m_ViewDataKey_14; }
	inline String_t** get_address_of_m_ViewDataKey_14() { return &___m_ViewDataKey_14; }
	inline void set_m_ViewDataKey_14(String_t* value)
	{
		___m_ViewDataKey_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ViewDataKey_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_RenderHints_15() { return static_cast<int32_t>(offsetof(VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909, ___m_RenderHints_15)); }
	inline int32_t get_m_RenderHints_15() const { return ___m_RenderHints_15; }
	inline int32_t* get_address_of_m_RenderHints_15() { return &___m_RenderHints_15; }
	inline void set_m_RenderHints_15(int32_t value)
	{
		___m_RenderHints_15 = value;
	}

	inline static int32_t get_offset_of_lastLayout_16() { return static_cast<int32_t>(offsetof(VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909, ___lastLayout_16)); }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  get_lastLayout_16() const { return ___lastLayout_16; }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * get_address_of_lastLayout_16() { return &___lastLayout_16; }
	inline void set_lastLayout_16(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  value)
	{
		___lastLayout_16 = value;
	}

	inline static int32_t get_offset_of_lastPadding_17() { return static_cast<int32_t>(offsetof(VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909, ___lastPadding_17)); }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  get_lastPadding_17() const { return ___lastPadding_17; }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * get_address_of_lastPadding_17() { return &___lastPadding_17; }
	inline void set_lastPadding_17(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  value)
	{
		___lastPadding_17 = value;
	}

	inline static int32_t get_offset_of_renderChainData_18() { return static_cast<int32_t>(offsetof(VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909, ___renderChainData_18)); }
	inline RenderChainVEData_tA04ABE934A2F46AD7065F722C65F32AD47916F4A  get_renderChainData_18() const { return ___renderChainData_18; }
	inline RenderChainVEData_tA04ABE934A2F46AD7065F722C65F32AD47916F4A * get_address_of_renderChainData_18() { return &___renderChainData_18; }
	inline void set_renderChainData_18(RenderChainVEData_tA04ABE934A2F46AD7065F722C65F32AD47916F4A  value)
	{
		___renderChainData_18 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___renderChainData_18))->___prev_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___renderChainData_18))->___next_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___renderChainData_18))->___groupTransformAncestor_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___renderChainData_18))->___boneTransformAncestor_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___renderChainData_18))->___prevDirty_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___renderChainData_18))->___nextDirty_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___renderChainData_18))->___firstCommand_10), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___renderChainData_18))->___lastCommand_11), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___renderChainData_18))->___firstClosingCommand_12), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___renderChainData_18))->___lastClosingCommand_13), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___renderChainData_18))->___data_19), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___renderChainData_18))->___closingData_20), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___renderChainData_18))->___prevText_29), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___renderChainData_18))->___nextText_30), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___renderChainData_18))->___textEntries_31), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___renderChainData_18))->___textures_32), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Position_19() { return static_cast<int32_t>(offsetof(VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909, ___m_Position_19)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Position_19() const { return ___m_Position_19; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Position_19() { return &___m_Position_19; }
	inline void set_m_Position_19(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Position_19 = value;
	}

	inline static int32_t get_offset_of_m_Rotation_20() { return static_cast<int32_t>(offsetof(VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909, ___m_Rotation_20)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_m_Rotation_20() const { return ___m_Rotation_20; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_m_Rotation_20() { return &___m_Rotation_20; }
	inline void set_m_Rotation_20(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___m_Rotation_20 = value;
	}

	inline static int32_t get_offset_of_m_Scale_21() { return static_cast<int32_t>(offsetof(VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909, ___m_Scale_21)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Scale_21() const { return ___m_Scale_21; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Scale_21() { return &___m_Scale_21; }
	inline void set_m_Scale_21(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Scale_21 = value;
	}

	inline static int32_t get_offset_of_m_Layout_22() { return static_cast<int32_t>(offsetof(VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909, ___m_Layout_22)); }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  get_m_Layout_22() const { return ___m_Layout_22; }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * get_address_of_m_Layout_22() { return &___m_Layout_22; }
	inline void set_m_Layout_22(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  value)
	{
		___m_Layout_22 = value;
	}

	inline static int32_t get_offset_of_m_BoundingBox_23() { return static_cast<int32_t>(offsetof(VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909, ___m_BoundingBox_23)); }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  get_m_BoundingBox_23() const { return ___m_BoundingBox_23; }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * get_address_of_m_BoundingBox_23() { return &___m_BoundingBox_23; }
	inline void set_m_BoundingBox_23(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  value)
	{
		___m_BoundingBox_23 = value;
	}

	inline static int32_t get_offset_of_m_WorldBoundingBox_24() { return static_cast<int32_t>(offsetof(VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909, ___m_WorldBoundingBox_24)); }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  get_m_WorldBoundingBox_24() const { return ___m_WorldBoundingBox_24; }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * get_address_of_m_WorldBoundingBox_24() { return &___m_WorldBoundingBox_24; }
	inline void set_m_WorldBoundingBox_24(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  value)
	{
		___m_WorldBoundingBox_24 = value;
	}

	inline static int32_t get_offset_of_m_WorldTransformCache_25() { return static_cast<int32_t>(offsetof(VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909, ___m_WorldTransformCache_25)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_m_WorldTransformCache_25() const { return ___m_WorldTransformCache_25; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_m_WorldTransformCache_25() { return &___m_WorldTransformCache_25; }
	inline void set_m_WorldTransformCache_25(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___m_WorldTransformCache_25 = value;
	}

	inline static int32_t get_offset_of_m_WorldTransformInverseCache_26() { return static_cast<int32_t>(offsetof(VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909, ___m_WorldTransformInverseCache_26)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_m_WorldTransformInverseCache_26() const { return ___m_WorldTransformInverseCache_26; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_m_WorldTransformInverseCache_26() { return &___m_WorldTransformInverseCache_26; }
	inline void set_m_WorldTransformInverseCache_26(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___m_WorldTransformInverseCache_26 = value;
	}

	inline static int32_t get_offset_of_m_WorldClip_27() { return static_cast<int32_t>(offsetof(VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909, ___m_WorldClip_27)); }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  get_m_WorldClip_27() const { return ___m_WorldClip_27; }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * get_address_of_m_WorldClip_27() { return &___m_WorldClip_27; }
	inline void set_m_WorldClip_27(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  value)
	{
		___m_WorldClip_27 = value;
	}

	inline static int32_t get_offset_of_m_WorldClipMinusGroup_28() { return static_cast<int32_t>(offsetof(VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909, ___m_WorldClipMinusGroup_28)); }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  get_m_WorldClipMinusGroup_28() const { return ___m_WorldClipMinusGroup_28; }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * get_address_of_m_WorldClipMinusGroup_28() { return &___m_WorldClipMinusGroup_28; }
	inline void set_m_WorldClipMinusGroup_28(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  value)
	{
		___m_WorldClipMinusGroup_28 = value;
	}

	inline static int32_t get_offset_of_triggerPseudoMask_30() { return static_cast<int32_t>(offsetof(VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909, ___triggerPseudoMask_30)); }
	inline int32_t get_triggerPseudoMask_30() const { return ___triggerPseudoMask_30; }
	inline int32_t* get_address_of_triggerPseudoMask_30() { return &___triggerPseudoMask_30; }
	inline void set_triggerPseudoMask_30(int32_t value)
	{
		___triggerPseudoMask_30 = value;
	}

	inline static int32_t get_offset_of_dependencyPseudoMask_31() { return static_cast<int32_t>(offsetof(VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909, ___dependencyPseudoMask_31)); }
	inline int32_t get_dependencyPseudoMask_31() const { return ___dependencyPseudoMask_31; }
	inline int32_t* get_address_of_dependencyPseudoMask_31() { return &___dependencyPseudoMask_31; }
	inline void set_dependencyPseudoMask_31(int32_t value)
	{
		___dependencyPseudoMask_31 = value;
	}

	inline static int32_t get_offset_of_m_PseudoStates_32() { return static_cast<int32_t>(offsetof(VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909, ___m_PseudoStates_32)); }
	inline int32_t get_m_PseudoStates_32() const { return ___m_PseudoStates_32; }
	inline int32_t* get_address_of_m_PseudoStates_32() { return &___m_PseudoStates_32; }
	inline void set_m_PseudoStates_32(int32_t value)
	{
		___m_PseudoStates_32 = value;
	}

	inline static int32_t get_offset_of_U3CpickingModeU3Ek__BackingField_33() { return static_cast<int32_t>(offsetof(VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909, ___U3CpickingModeU3Ek__BackingField_33)); }
	inline int32_t get_U3CpickingModeU3Ek__BackingField_33() const { return ___U3CpickingModeU3Ek__BackingField_33; }
	inline int32_t* get_address_of_U3CpickingModeU3Ek__BackingField_33() { return &___U3CpickingModeU3Ek__BackingField_33; }
	inline void set_U3CpickingModeU3Ek__BackingField_33(int32_t value)
	{
		___U3CpickingModeU3Ek__BackingField_33 = value;
	}

	inline static int32_t get_offset_of_U3CyogaNodeU3Ek__BackingField_34() { return static_cast<int32_t>(offsetof(VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909, ___U3CyogaNodeU3Ek__BackingField_34)); }
	inline YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * get_U3CyogaNodeU3Ek__BackingField_34() const { return ___U3CyogaNodeU3Ek__BackingField_34; }
	inline YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 ** get_address_of_U3CyogaNodeU3Ek__BackingField_34() { return &___U3CyogaNodeU3Ek__BackingField_34; }
	inline void set_U3CyogaNodeU3Ek__BackingField_34(YogaNode_tD3DA875FF65A4C50F0F6F05A9F8D114FF5A9D9A6 * value)
	{
		___U3CyogaNodeU3Ek__BackingField_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CyogaNodeU3Ek__BackingField_34), (void*)value);
	}

	inline static int32_t get_offset_of_m_SharedStyle_35() { return static_cast<int32_t>(offsetof(VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909, ___m_SharedStyle_35)); }
	inline ComputedStyle_tF8F838DB4D9AC943B38AD090B1E5BB64D4A15027 * get_m_SharedStyle_35() const { return ___m_SharedStyle_35; }
	inline ComputedStyle_tF8F838DB4D9AC943B38AD090B1E5BB64D4A15027 ** get_address_of_m_SharedStyle_35() { return &___m_SharedStyle_35; }
	inline void set_m_SharedStyle_35(ComputedStyle_tF8F838DB4D9AC943B38AD090B1E5BB64D4A15027 * value)
	{
		___m_SharedStyle_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SharedStyle_35), (void*)value);
	}

	inline static int32_t get_offset_of_m_Style_36() { return static_cast<int32_t>(offsetof(VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909, ___m_Style_36)); }
	inline ComputedStyle_tF8F838DB4D9AC943B38AD090B1E5BB64D4A15027 * get_m_Style_36() const { return ___m_Style_36; }
	inline ComputedStyle_tF8F838DB4D9AC943B38AD090B1E5BB64D4A15027 ** get_address_of_m_Style_36() { return &___m_Style_36; }
	inline void set_m_Style_36(ComputedStyle_tF8F838DB4D9AC943B38AD090B1E5BB64D4A15027 * value)
	{
		___m_Style_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Style_36), (void*)value);
	}

	inline static int32_t get_offset_of_variableContext_37() { return static_cast<int32_t>(offsetof(VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909, ___variableContext_37)); }
	inline StyleVariableContext_t938925BC9799C7F449B8A91E1B5BDBECA4677875 * get_variableContext_37() const { return ___variableContext_37; }
	inline StyleVariableContext_t938925BC9799C7F449B8A91E1B5BDBECA4677875 ** get_address_of_variableContext_37() { return &___variableContext_37; }
	inline void set_variableContext_37(StyleVariableContext_t938925BC9799C7F449B8A91E1B5BDBECA4677875 * value)
	{
		___variableContext_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___variableContext_37), (void*)value);
	}

	inline static int32_t get_offset_of_inheritedStylesHash_38() { return static_cast<int32_t>(offsetof(VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909, ___inheritedStylesHash_38)); }
	inline int32_t get_inheritedStylesHash_38() const { return ___inheritedStylesHash_38; }
	inline int32_t* get_address_of_inheritedStylesHash_38() { return &___inheritedStylesHash_38; }
	inline void set_inheritedStylesHash_38(int32_t value)
	{
		___inheritedStylesHash_38 = value;
	}

	inline static int32_t get_offset_of_controlid_39() { return static_cast<int32_t>(offsetof(VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909, ___controlid_39)); }
	inline uint32_t get_controlid_39() const { return ___controlid_39; }
	inline uint32_t* get_address_of_controlid_39() { return &___controlid_39; }
	inline void set_controlid_39(uint32_t value)
	{
		___controlid_39 = value;
	}

	inline static int32_t get_offset_of_imguiContainerDescendantCount_40() { return static_cast<int32_t>(offsetof(VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909, ___imguiContainerDescendantCount_40)); }
	inline int32_t get_imguiContainerDescendantCount_40() const { return ___imguiContainerDescendantCount_40; }
	inline int32_t* get_address_of_imguiContainerDescendantCount_40() { return &___imguiContainerDescendantCount_40; }
	inline void set_imguiContainerDescendantCount_40(int32_t value)
	{
		___imguiContainerDescendantCount_40 = value;
	}

	inline static int32_t get_offset_of_U3CenabledSelfU3Ek__BackingField_41() { return static_cast<int32_t>(offsetof(VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909, ___U3CenabledSelfU3Ek__BackingField_41)); }
	inline bool get_U3CenabledSelfU3Ek__BackingField_41() const { return ___U3CenabledSelfU3Ek__BackingField_41; }
	inline bool* get_address_of_U3CenabledSelfU3Ek__BackingField_41() { return &___U3CenabledSelfU3Ek__BackingField_41; }
	inline void set_U3CenabledSelfU3Ek__BackingField_41(bool value)
	{
		___U3CenabledSelfU3Ek__BackingField_41 = value;
	}

	inline static int32_t get_offset_of_U3CgenerateVisualContentU3Ek__BackingField_42() { return static_cast<int32_t>(offsetof(VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909, ___U3CgenerateVisualContentU3Ek__BackingField_42)); }
	inline Action_1_t233C4A43441782DC9CF3F90D88CB275BC4F89C34 * get_U3CgenerateVisualContentU3Ek__BackingField_42() const { return ___U3CgenerateVisualContentU3Ek__BackingField_42; }
	inline Action_1_t233C4A43441782DC9CF3F90D88CB275BC4F89C34 ** get_address_of_U3CgenerateVisualContentU3Ek__BackingField_42() { return &___U3CgenerateVisualContentU3Ek__BackingField_42; }
	inline void set_U3CgenerateVisualContentU3Ek__BackingField_42(Action_1_t233C4A43441782DC9CF3F90D88CB275BC4F89C34 * value)
	{
		___U3CgenerateVisualContentU3Ek__BackingField_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CgenerateVisualContentU3Ek__BackingField_42), (void*)value);
	}

	inline static int32_t get_offset_of_m_SubRenderTargetMode_43() { return static_cast<int32_t>(offsetof(VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909, ___m_SubRenderTargetMode_43)); }
	inline int32_t get_m_SubRenderTargetMode_43() const { return ___m_SubRenderTargetMode_43; }
	inline int32_t* get_address_of_m_SubRenderTargetMode_43() { return &___m_SubRenderTargetMode_43; }
	inline void set_m_SubRenderTargetMode_43(int32_t value)
	{
		___m_SubRenderTargetMode_43 = value;
	}

	inline static int32_t get_offset_of_m_defaultMaterial_45() { return static_cast<int32_t>(offsetof(VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909, ___m_defaultMaterial_45)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_defaultMaterial_45() const { return ___m_defaultMaterial_45; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_defaultMaterial_45() { return &___m_defaultMaterial_45; }
	inline void set_m_defaultMaterial_45(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_defaultMaterial_45 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_defaultMaterial_45), (void*)value);
	}

	inline static int32_t get_offset_of_m_RunningAnimations_46() { return static_cast<int32_t>(offsetof(VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909, ___m_RunningAnimations_46)); }
	inline List_1_t76D6F8AED226DECE77A81ACDB46AEB711DA629F9 * get_m_RunningAnimations_46() const { return ___m_RunningAnimations_46; }
	inline List_1_t76D6F8AED226DECE77A81ACDB46AEB711DA629F9 ** get_address_of_m_RunningAnimations_46() { return &___m_RunningAnimations_46; }
	inline void set_m_RunningAnimations_46(List_1_t76D6F8AED226DECE77A81ACDB46AEB711DA629F9 * value)
	{
		___m_RunningAnimations_46 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RunningAnimations_46), (void*)value);
	}

	inline static int32_t get_offset_of_U3ChierarchyU3Ek__BackingField_48() { return static_cast<int32_t>(offsetof(VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909, ___U3ChierarchyU3Ek__BackingField_48)); }
	inline Hierarchy_tC971D6D195075C1B878D4B2558ECAD4E5FF6861A  get_U3ChierarchyU3Ek__BackingField_48() const { return ___U3ChierarchyU3Ek__BackingField_48; }
	inline Hierarchy_tC971D6D195075C1B878D4B2558ECAD4E5FF6861A * get_address_of_U3ChierarchyU3Ek__BackingField_48() { return &___U3ChierarchyU3Ek__BackingField_48; }
	inline void set_U3ChierarchyU3Ek__BackingField_48(Hierarchy_tC971D6D195075C1B878D4B2558ECAD4E5FF6861A  value)
	{
		___U3ChierarchyU3Ek__BackingField_48 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3ChierarchyU3Ek__BackingField_48))->___m_Owner_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_U3CisRootVisualContainerU3Ek__BackingField_49() { return static_cast<int32_t>(offsetof(VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909, ___U3CisRootVisualContainerU3Ek__BackingField_49)); }
	inline bool get_U3CisRootVisualContainerU3Ek__BackingField_49() const { return ___U3CisRootVisualContainerU3Ek__BackingField_49; }
	inline bool* get_address_of_U3CisRootVisualContainerU3Ek__BackingField_49() { return &___U3CisRootVisualContainerU3Ek__BackingField_49; }
	inline void set_U3CisRootVisualContainerU3Ek__BackingField_49(bool value)
	{
		___U3CisRootVisualContainerU3Ek__BackingField_49 = value;
	}

	inline static int32_t get_offset_of_U3CcacheAsBitmapU3Ek__BackingField_50() { return static_cast<int32_t>(offsetof(VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909, ___U3CcacheAsBitmapU3Ek__BackingField_50)); }
	inline bool get_U3CcacheAsBitmapU3Ek__BackingField_50() const { return ___U3CcacheAsBitmapU3Ek__BackingField_50; }
	inline bool* get_address_of_U3CcacheAsBitmapU3Ek__BackingField_50() { return &___U3CcacheAsBitmapU3Ek__BackingField_50; }
	inline void set_U3CcacheAsBitmapU3Ek__BackingField_50(bool value)
	{
		___U3CcacheAsBitmapU3Ek__BackingField_50 = value;
	}

	inline static int32_t get_offset_of_m_PhysicalParent_51() { return static_cast<int32_t>(offsetof(VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909, ___m_PhysicalParent_51)); }
	inline VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * get_m_PhysicalParent_51() const { return ___m_PhysicalParent_51; }
	inline VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 ** get_address_of_m_PhysicalParent_51() { return &___m_PhysicalParent_51; }
	inline void set_m_PhysicalParent_51(VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * value)
	{
		___m_PhysicalParent_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PhysicalParent_51), (void*)value);
	}

	inline static int32_t get_offset_of_m_LogicalParent_52() { return static_cast<int32_t>(offsetof(VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909, ___m_LogicalParent_52)); }
	inline VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * get_m_LogicalParent_52() const { return ___m_LogicalParent_52; }
	inline VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 ** get_address_of_m_LogicalParent_52() { return &___m_LogicalParent_52; }
	inline void set_m_LogicalParent_52(VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * value)
	{
		___m_LogicalParent_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LogicalParent_52), (void*)value);
	}

	inline static int32_t get_offset_of_m_Children_54() { return static_cast<int32_t>(offsetof(VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909, ___m_Children_54)); }
	inline List_1_tF1CA7B1792CDC7EDFF5FCCC4AF767C8E127E2462 * get_m_Children_54() const { return ___m_Children_54; }
	inline List_1_tF1CA7B1792CDC7EDFF5FCCC4AF767C8E127E2462 ** get_address_of_m_Children_54() { return &___m_Children_54; }
	inline void set_m_Children_54(List_1_tF1CA7B1792CDC7EDFF5FCCC4AF767C8E127E2462 * value)
	{
		___m_Children_54 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Children_54), (void*)value);
	}

	inline static int32_t get_offset_of_U3CelementPanelU3Ek__BackingField_55() { return static_cast<int32_t>(offsetof(VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909, ___U3CelementPanelU3Ek__BackingField_55)); }
	inline BaseVisualElementPanel_tFF0B76C4FDAE6AA5D9A055D1FDD29AE67B93B95D * get_U3CelementPanelU3Ek__BackingField_55() const { return ___U3CelementPanelU3Ek__BackingField_55; }
	inline BaseVisualElementPanel_tFF0B76C4FDAE6AA5D9A055D1FDD29AE67B93B95D ** get_address_of_U3CelementPanelU3Ek__BackingField_55() { return &___U3CelementPanelU3Ek__BackingField_55; }
	inline void set_U3CelementPanelU3Ek__BackingField_55(BaseVisualElementPanel_tFF0B76C4FDAE6AA5D9A055D1FDD29AE67B93B95D * value)
	{
		___U3CelementPanelU3Ek__BackingField_55 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CelementPanelU3Ek__BackingField_55), (void*)value);
	}

	inline static int32_t get_offset_of_inlineStyleAccess_56() { return static_cast<int32_t>(offsetof(VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909, ___inlineStyleAccess_56)); }
	inline InlineStyleAccess_t8FF96503AEB2FEC93A211DB91F5ECA43C691EF9D * get_inlineStyleAccess_56() const { return ___inlineStyleAccess_56; }
	inline InlineStyleAccess_t8FF96503AEB2FEC93A211DB91F5ECA43C691EF9D ** get_address_of_inlineStyleAccess_56() { return &___inlineStyleAccess_56; }
	inline void set_inlineStyleAccess_56(InlineStyleAccess_t8FF96503AEB2FEC93A211DB91F5ECA43C691EF9D * value)
	{
		___inlineStyleAccess_56 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inlineStyleAccess_56), (void*)value);
	}

	inline static int32_t get_offset_of_styleSheetList_57() { return static_cast<int32_t>(offsetof(VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909, ___styleSheetList_57)); }
	inline List_1_t0E9CFF2ACF7F3C4FB0A6A6465FA93E6BD367DAE5 * get_styleSheetList_57() const { return ___styleSheetList_57; }
	inline List_1_t0E9CFF2ACF7F3C4FB0A6A6465FA93E6BD367DAE5 ** get_address_of_styleSheetList_57() { return &___styleSheetList_57; }
	inline void set_styleSheetList_57(List_1_t0E9CFF2ACF7F3C4FB0A6A6465FA93E6BD367DAE5 * value)
	{
		___styleSheetList_57 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___styleSheetList_57), (void*)value);
	}

	inline static int32_t get_offset_of_m_TypeData_61() { return static_cast<int32_t>(offsetof(VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909, ___m_TypeData_61)); }
	inline TypeData_tC5B70027968DCA692CD8BD39D87872986F1029E5 * get_m_TypeData_61() const { return ___m_TypeData_61; }
	inline TypeData_tC5B70027968DCA692CD8BD39D87872986F1029E5 ** get_address_of_m_TypeData_61() { return &___m_TypeData_61; }
	inline void set_m_TypeData_61(TypeData_tC5B70027968DCA692CD8BD39D87872986F1029E5 * value)
	{
		___m_TypeData_61 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TypeData_61), (void*)value);
	}
};

struct VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909_StaticFields
{
public:
	// System.UInt32 UnityEngine.UIElements.VisualElement::s_NextId
	uint32_t ___s_NextId_6;
	// System.Collections.Generic.List`1<System.String> UnityEngine.UIElements.VisualElement::s_EmptyClassList
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___s_EmptyClassList_7;
	// UnityEngine.PropertyName UnityEngine.UIElements.VisualElement::userDataPropertyKey
	PropertyName_t1B3B39F9873F8967D3557FE2CCF4E415F909FEC1  ___userDataPropertyKey_8;
	// System.String UnityEngine.UIElements.VisualElement::disabledUssClassName
	String_t* ___disabledUssClassName_9;
	// UnityEngine.Rect UnityEngine.UIElements.VisualElement::s_InfiniteRect
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___s_InfiniteRect_29;
	// UnityEngine.Material UnityEngine.UIElements.VisualElement::s_runtimeMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_runtimeMaterial_44;
	// System.Collections.Generic.List`1<UnityEngine.UIElements.VisualElement> UnityEngine.UIElements.VisualElement::s_EmptyList
	List_1_tF1CA7B1792CDC7EDFF5FCCC4AF767C8E127E2462 * ___s_EmptyList_53;
	// System.Text.RegularExpressions.Regex UnityEngine.UIElements.VisualElement::s_InternalStyleSheetPath
	Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * ___s_InternalStyleSheetPath_58;
	// UnityEngine.PropertyName UnityEngine.UIElements.VisualElement::tooltipPropertyKey
	PropertyName_t1B3B39F9873F8967D3557FE2CCF4E415F909FEC1  ___tooltipPropertyKey_59;
	// System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.UIElements.VisualElement/TypeData> UnityEngine.UIElements.VisualElement::s_TypeData
	Dictionary_2_t8AD70701F144D19A8E60092D16A4C4D0B9901229 * ___s_TypeData_60;

public:
	inline static int32_t get_offset_of_s_NextId_6() { return static_cast<int32_t>(offsetof(VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909_StaticFields, ___s_NextId_6)); }
	inline uint32_t get_s_NextId_6() const { return ___s_NextId_6; }
	inline uint32_t* get_address_of_s_NextId_6() { return &___s_NextId_6; }
	inline void set_s_NextId_6(uint32_t value)
	{
		___s_NextId_6 = value;
	}

	inline static int32_t get_offset_of_s_EmptyClassList_7() { return static_cast<int32_t>(offsetof(VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909_StaticFields, ___s_EmptyClassList_7)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_s_EmptyClassList_7() const { return ___s_EmptyClassList_7; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_s_EmptyClassList_7() { return &___s_EmptyClassList_7; }
	inline void set_s_EmptyClassList_7(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___s_EmptyClassList_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EmptyClassList_7), (void*)value);
	}

	inline static int32_t get_offset_of_userDataPropertyKey_8() { return static_cast<int32_t>(offsetof(VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909_StaticFields, ___userDataPropertyKey_8)); }
	inline PropertyName_t1B3B39F9873F8967D3557FE2CCF4E415F909FEC1  get_userDataPropertyKey_8() const { return ___userDataPropertyKey_8; }
	inline PropertyName_t1B3B39F9873F8967D3557FE2CCF4E415F909FEC1 * get_address_of_userDataPropertyKey_8() { return &___userDataPropertyKey_8; }
	inline void set_userDataPropertyKey_8(PropertyName_t1B3B39F9873F8967D3557FE2CCF4E415F909FEC1  value)
	{
		___userDataPropertyKey_8 = value;
	}

	inline static int32_t get_offset_of_disabledUssClassName_9() { return static_cast<int32_t>(offsetof(VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909_StaticFields, ___disabledUssClassName_9)); }
	inline String_t* get_disabledUssClassName_9() const { return ___disabledUssClassName_9; }
	inline String_t** get_address_of_disabledUssClassName_9() { return &___disabledUssClassName_9; }
	inline void set_disabledUssClassName_9(String_t* value)
	{
		___disabledUssClassName_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___disabledUssClassName_9), (void*)value);
	}

	inline static int32_t get_offset_of_s_InfiniteRect_29() { return static_cast<int32_t>(offsetof(VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909_StaticFields, ___s_InfiniteRect_29)); }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  get_s_InfiniteRect_29() const { return ___s_InfiniteRect_29; }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * get_address_of_s_InfiniteRect_29() { return &___s_InfiniteRect_29; }
	inline void set_s_InfiniteRect_29(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  value)
	{
		___s_InfiniteRect_29 = value;
	}

	inline static int32_t get_offset_of_s_runtimeMaterial_44() { return static_cast<int32_t>(offsetof(VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909_StaticFields, ___s_runtimeMaterial_44)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_runtimeMaterial_44() const { return ___s_runtimeMaterial_44; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_runtimeMaterial_44() { return &___s_runtimeMaterial_44; }
	inline void set_s_runtimeMaterial_44(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_runtimeMaterial_44 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_runtimeMaterial_44), (void*)value);
	}

	inline static int32_t get_offset_of_s_EmptyList_53() { return static_cast<int32_t>(offsetof(VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909_StaticFields, ___s_EmptyList_53)); }
	inline List_1_tF1CA7B1792CDC7EDFF5FCCC4AF767C8E127E2462 * get_s_EmptyList_53() const { return ___s_EmptyList_53; }
	inline List_1_tF1CA7B1792CDC7EDFF5FCCC4AF767C8E127E2462 ** get_address_of_s_EmptyList_53() { return &___s_EmptyList_53; }
	inline void set_s_EmptyList_53(List_1_tF1CA7B1792CDC7EDFF5FCCC4AF767C8E127E2462 * value)
	{
		___s_EmptyList_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EmptyList_53), (void*)value);
	}

	inline static int32_t get_offset_of_s_InternalStyleSheetPath_58() { return static_cast<int32_t>(offsetof(VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909_StaticFields, ___s_InternalStyleSheetPath_58)); }
	inline Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * get_s_InternalStyleSheetPath_58() const { return ___s_InternalStyleSheetPath_58; }
	inline Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F ** get_address_of_s_InternalStyleSheetPath_58() { return &___s_InternalStyleSheetPath_58; }
	inline void set_s_InternalStyleSheetPath_58(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * value)
	{
		___s_InternalStyleSheetPath_58 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InternalStyleSheetPath_58), (void*)value);
	}

	inline static int32_t get_offset_of_tooltipPropertyKey_59() { return static_cast<int32_t>(offsetof(VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909_StaticFields, ___tooltipPropertyKey_59)); }
	inline PropertyName_t1B3B39F9873F8967D3557FE2CCF4E415F909FEC1  get_tooltipPropertyKey_59() const { return ___tooltipPropertyKey_59; }
	inline PropertyName_t1B3B39F9873F8967D3557FE2CCF4E415F909FEC1 * get_address_of_tooltipPropertyKey_59() { return &___tooltipPropertyKey_59; }
	inline void set_tooltipPropertyKey_59(PropertyName_t1B3B39F9873F8967D3557FE2CCF4E415F909FEC1  value)
	{
		___tooltipPropertyKey_59 = value;
	}

	inline static int32_t get_offset_of_s_TypeData_60() { return static_cast<int32_t>(offsetof(VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909_StaticFields, ___s_TypeData_60)); }
	inline Dictionary_2_t8AD70701F144D19A8E60092D16A4C4D0B9901229 * get_s_TypeData_60() const { return ___s_TypeData_60; }
	inline Dictionary_2_t8AD70701F144D19A8E60092D16A4C4D0B9901229 ** get_address_of_s_TypeData_60() { return &___s_TypeData_60; }
	inline void set_s_TypeData_60(Dictionary_2_t8AD70701F144D19A8E60092D16A4C4D0B9901229 * value)
	{
		___s_TypeData_60 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_TypeData_60), (void*)value);
	}
};


// UnityEngine.UIElements.BindableElement
struct BindableElement_t68EB22EE929F2FAC7F9A7A05A3B45089B3FBF64F  : public VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909
{
public:
	// UnityEngine.UIElements.IBinding UnityEngine.UIElements.BindableElement::<binding>k__BackingField
	RuntimeObject* ___U3CbindingU3Ek__BackingField_62;
	// System.String UnityEngine.UIElements.BindableElement::<bindingPath>k__BackingField
	String_t* ___U3CbindingPathU3Ek__BackingField_63;

public:
	inline static int32_t get_offset_of_U3CbindingU3Ek__BackingField_62() { return static_cast<int32_t>(offsetof(BindableElement_t68EB22EE929F2FAC7F9A7A05A3B45089B3FBF64F, ___U3CbindingU3Ek__BackingField_62)); }
	inline RuntimeObject* get_U3CbindingU3Ek__BackingField_62() const { return ___U3CbindingU3Ek__BackingField_62; }
	inline RuntimeObject** get_address_of_U3CbindingU3Ek__BackingField_62() { return &___U3CbindingU3Ek__BackingField_62; }
	inline void set_U3CbindingU3Ek__BackingField_62(RuntimeObject* value)
	{
		___U3CbindingU3Ek__BackingField_62 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CbindingU3Ek__BackingField_62), (void*)value);
	}

	inline static int32_t get_offset_of_U3CbindingPathU3Ek__BackingField_63() { return static_cast<int32_t>(offsetof(BindableElement_t68EB22EE929F2FAC7F9A7A05A3B45089B3FBF64F, ___U3CbindingPathU3Ek__BackingField_63)); }
	inline String_t* get_U3CbindingPathU3Ek__BackingField_63() const { return ___U3CbindingPathU3Ek__BackingField_63; }
	inline String_t** get_address_of_U3CbindingPathU3Ek__BackingField_63() { return &___U3CbindingPathU3Ek__BackingField_63; }
	inline void set_U3CbindingPathU3Ek__BackingField_63(String_t* value)
	{
		___U3CbindingPathU3Ek__BackingField_63 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CbindingPathU3Ek__BackingField_63), (void*)value);
	}
};


// UnityEngine.UIElements.InputWrapper
struct InputWrapper_t15D6015F150082A97E9AFE42FC9D74C62C568C85  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// UnityEngine.UIElements.KeyDownEvent
struct KeyDownEvent_t87D460D7272EEC24CA83B1A07CAC2998CFCF0BAD  : public KeyboardEventBase_1_t21A03EBF2C37353CE0F48477560D753D9A3F3F24
{
public:

public:
};


// UnityEngine.UIElements.NavigationMoveEvent
struct NavigationMoveEvent_t763AB890A80C1029C653DCEE3FBC522E60A62634  : public NavigationEventBase_1_t12D7256564930EC3BEEEBBE14CE9AC360BEE5D42
{
public:
	// UnityEngine.UIElements.NavigationMoveEvent/Direction UnityEngine.UIElements.NavigationMoveEvent::<direction>k__BackingField
	int32_t ___U3CdirectionU3Ek__BackingField_18;
	// UnityEngine.Vector2 UnityEngine.UIElements.NavigationMoveEvent::<move>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CmoveU3Ek__BackingField_19;

public:
	inline static int32_t get_offset_of_U3CdirectionU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(NavigationMoveEvent_t763AB890A80C1029C653DCEE3FBC522E60A62634, ___U3CdirectionU3Ek__BackingField_18)); }
	inline int32_t get_U3CdirectionU3Ek__BackingField_18() const { return ___U3CdirectionU3Ek__BackingField_18; }
	inline int32_t* get_address_of_U3CdirectionU3Ek__BackingField_18() { return &___U3CdirectionU3Ek__BackingField_18; }
	inline void set_U3CdirectionU3Ek__BackingField_18(int32_t value)
	{
		___U3CdirectionU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_U3CmoveU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(NavigationMoveEvent_t763AB890A80C1029C653DCEE3FBC522E60A62634, ___U3CmoveU3Ek__BackingField_19)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CmoveU3Ek__BackingField_19() const { return ___U3CmoveU3Ek__BackingField_19; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CmoveU3Ek__BackingField_19() { return &___U3CmoveU3Ek__BackingField_19; }
	inline void set_U3CmoveU3Ek__BackingField_19(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CmoveU3Ek__BackingField_19 = value;
	}
};


// UnityEngine.UIElements.RuntimePanel
struct RuntimePanel_t6D5485B3EB9C598452C70E12357282E046DD1409  : public BaseRuntimePanel_tE55DB58DC0A1F524F98CC999672C716946DA4754
{
public:
	// UnityEngine.UIElements.PanelSettings UnityEngine.UIElements.RuntimePanel::m_PanelSettings
	PanelSettings_tA06886CA55D7F3105153641E0BA56FF15E8DCA69 * ___m_PanelSettings_55;

public:
	inline static int32_t get_offset_of_m_PanelSettings_55() { return static_cast<int32_t>(offsetof(RuntimePanel_t6D5485B3EB9C598452C70E12357282E046DD1409, ___m_PanelSettings_55)); }
	inline PanelSettings_tA06886CA55D7F3105153641E0BA56FF15E8DCA69 * get_m_PanelSettings_55() const { return ___m_PanelSettings_55; }
	inline PanelSettings_tA06886CA55D7F3105153641E0BA56FF15E8DCA69 ** get_address_of_m_PanelSettings_55() { return &___m_PanelSettings_55; }
	inline void set_m_PanelSettings_55(PanelSettings_tA06886CA55D7F3105153641E0BA56FF15E8DCA69 * value)
	{
		___m_PanelSettings_55 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PanelSettings_55), (void*)value);
	}
};

struct RuntimePanel_t6D5485B3EB9C598452C70E12357282E046DD1409_StaticFields
{
public:
	// UnityEngine.UIElements.EventDispatcher UnityEngine.UIElements.RuntimePanel::s_EventDispatcher
	EventDispatcher_t86D9B0A3CA4441F30AA1A940D0D50F9AEC9912F2 * ___s_EventDispatcher_54;

public:
	inline static int32_t get_offset_of_s_EventDispatcher_54() { return static_cast<int32_t>(offsetof(RuntimePanel_t6D5485B3EB9C598452C70E12357282E046DD1409_StaticFields, ___s_EventDispatcher_54)); }
	inline EventDispatcher_t86D9B0A3CA4441F30AA1A940D0D50F9AEC9912F2 * get_s_EventDispatcher_54() const { return ___s_EventDispatcher_54; }
	inline EventDispatcher_t86D9B0A3CA4441F30AA1A940D0D50F9AEC9912F2 ** get_address_of_s_EventDispatcher_54() { return &___s_EventDispatcher_54; }
	inline void set_s_EventDispatcher_54(EventDispatcher_t86D9B0A3CA4441F30AA1A940D0D50F9AEC9912F2 * value)
	{
		___s_EventDispatcher_54 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EventDispatcher_54), (void*)value);
	}
};


// UnityEngine.UIElements.UIDocument
struct UIDocument_t008D811860584F44CEBB5AF575856E6EFCEBECC4  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Int32 UnityEngine.UIElements.UIDocument::m_UIDocumentCount
	int32_t ___m_UIDocumentCount_8;
	// UnityEngine.UIElements.PanelSettings UnityEngine.UIElements.UIDocument::m_PanelSettings
	PanelSettings_tA06886CA55D7F3105153641E0BA56FF15E8DCA69 * ___m_PanelSettings_9;
	// UnityEngine.UIElements.PanelSettings UnityEngine.UIElements.UIDocument::m_PreviousPanelSettings
	PanelSettings_tA06886CA55D7F3105153641E0BA56FF15E8DCA69 * ___m_PreviousPanelSettings_10;
	// UnityEngine.UIElements.UIDocument UnityEngine.UIElements.UIDocument::m_ParentUI
	UIDocument_t008D811860584F44CEBB5AF575856E6EFCEBECC4 * ___m_ParentUI_11;
	// UnityEngine.UIElements.UIDocumentList UnityEngine.UIElements.UIDocument::m_ChildrenContent
	UIDocumentList_t3D7C0E63339FDA7858C1D1AE3EB911CDB76C18C5 * ___m_ChildrenContent_12;
	// System.Collections.Generic.List`1<UnityEngine.UIElements.UIDocument> UnityEngine.UIElements.UIDocument::m_ChildrenContentCopy
	List_1_tAB773DE00C0DE14686075955D7FB71ACD6194509 * ___m_ChildrenContentCopy_13;
	// UnityEngine.UIElements.VisualTreeAsset UnityEngine.UIElements.UIDocument::sourceAsset
	VisualTreeAsset_tF7210F261F2888C05E43C7B01200FBFEA655D5A9 * ___sourceAsset_14;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.UIDocument::m_RootVisualElement
	VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * ___m_RootVisualElement_15;
	// System.Int32 UnityEngine.UIElements.UIDocument::m_FirstChildInsertIndex
	int32_t ___m_FirstChildInsertIndex_16;
	// System.Single UnityEngine.UIElements.UIDocument::m_SortingOrder
	float ___m_SortingOrder_17;

public:
	inline static int32_t get_offset_of_m_UIDocumentCount_8() { return static_cast<int32_t>(offsetof(UIDocument_t008D811860584F44CEBB5AF575856E6EFCEBECC4, ___m_UIDocumentCount_8)); }
	inline int32_t get_m_UIDocumentCount_8() const { return ___m_UIDocumentCount_8; }
	inline int32_t* get_address_of_m_UIDocumentCount_8() { return &___m_UIDocumentCount_8; }
	inline void set_m_UIDocumentCount_8(int32_t value)
	{
		___m_UIDocumentCount_8 = value;
	}

	inline static int32_t get_offset_of_m_PanelSettings_9() { return static_cast<int32_t>(offsetof(UIDocument_t008D811860584F44CEBB5AF575856E6EFCEBECC4, ___m_PanelSettings_9)); }
	inline PanelSettings_tA06886CA55D7F3105153641E0BA56FF15E8DCA69 * get_m_PanelSettings_9() const { return ___m_PanelSettings_9; }
	inline PanelSettings_tA06886CA55D7F3105153641E0BA56FF15E8DCA69 ** get_address_of_m_PanelSettings_9() { return &___m_PanelSettings_9; }
	inline void set_m_PanelSettings_9(PanelSettings_tA06886CA55D7F3105153641E0BA56FF15E8DCA69 * value)
	{
		___m_PanelSettings_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PanelSettings_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_PreviousPanelSettings_10() { return static_cast<int32_t>(offsetof(UIDocument_t008D811860584F44CEBB5AF575856E6EFCEBECC4, ___m_PreviousPanelSettings_10)); }
	inline PanelSettings_tA06886CA55D7F3105153641E0BA56FF15E8DCA69 * get_m_PreviousPanelSettings_10() const { return ___m_PreviousPanelSettings_10; }
	inline PanelSettings_tA06886CA55D7F3105153641E0BA56FF15E8DCA69 ** get_address_of_m_PreviousPanelSettings_10() { return &___m_PreviousPanelSettings_10; }
	inline void set_m_PreviousPanelSettings_10(PanelSettings_tA06886CA55D7F3105153641E0BA56FF15E8DCA69 * value)
	{
		___m_PreviousPanelSettings_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PreviousPanelSettings_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentUI_11() { return static_cast<int32_t>(offsetof(UIDocument_t008D811860584F44CEBB5AF575856E6EFCEBECC4, ___m_ParentUI_11)); }
	inline UIDocument_t008D811860584F44CEBB5AF575856E6EFCEBECC4 * get_m_ParentUI_11() const { return ___m_ParentUI_11; }
	inline UIDocument_t008D811860584F44CEBB5AF575856E6EFCEBECC4 ** get_address_of_m_ParentUI_11() { return &___m_ParentUI_11; }
	inline void set_m_ParentUI_11(UIDocument_t008D811860584F44CEBB5AF575856E6EFCEBECC4 * value)
	{
		___m_ParentUI_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentUI_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChildrenContent_12() { return static_cast<int32_t>(offsetof(UIDocument_t008D811860584F44CEBB5AF575856E6EFCEBECC4, ___m_ChildrenContent_12)); }
	inline UIDocumentList_t3D7C0E63339FDA7858C1D1AE3EB911CDB76C18C5 * get_m_ChildrenContent_12() const { return ___m_ChildrenContent_12; }
	inline UIDocumentList_t3D7C0E63339FDA7858C1D1AE3EB911CDB76C18C5 ** get_address_of_m_ChildrenContent_12() { return &___m_ChildrenContent_12; }
	inline void set_m_ChildrenContent_12(UIDocumentList_t3D7C0E63339FDA7858C1D1AE3EB911CDB76C18C5 * value)
	{
		___m_ChildrenContent_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChildrenContent_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChildrenContentCopy_13() { return static_cast<int32_t>(offsetof(UIDocument_t008D811860584F44CEBB5AF575856E6EFCEBECC4, ___m_ChildrenContentCopy_13)); }
	inline List_1_tAB773DE00C0DE14686075955D7FB71ACD6194509 * get_m_ChildrenContentCopy_13() const { return ___m_ChildrenContentCopy_13; }
	inline List_1_tAB773DE00C0DE14686075955D7FB71ACD6194509 ** get_address_of_m_ChildrenContentCopy_13() { return &___m_ChildrenContentCopy_13; }
	inline void set_m_ChildrenContentCopy_13(List_1_tAB773DE00C0DE14686075955D7FB71ACD6194509 * value)
	{
		___m_ChildrenContentCopy_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChildrenContentCopy_13), (void*)value);
	}

	inline static int32_t get_offset_of_sourceAsset_14() { return static_cast<int32_t>(offsetof(UIDocument_t008D811860584F44CEBB5AF575856E6EFCEBECC4, ___sourceAsset_14)); }
	inline VisualTreeAsset_tF7210F261F2888C05E43C7B01200FBFEA655D5A9 * get_sourceAsset_14() const { return ___sourceAsset_14; }
	inline VisualTreeAsset_tF7210F261F2888C05E43C7B01200FBFEA655D5A9 ** get_address_of_sourceAsset_14() { return &___sourceAsset_14; }
	inline void set_sourceAsset_14(VisualTreeAsset_tF7210F261F2888C05E43C7B01200FBFEA655D5A9 * value)
	{
		___sourceAsset_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sourceAsset_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_RootVisualElement_15() { return static_cast<int32_t>(offsetof(UIDocument_t008D811860584F44CEBB5AF575856E6EFCEBECC4, ___m_RootVisualElement_15)); }
	inline VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * get_m_RootVisualElement_15() const { return ___m_RootVisualElement_15; }
	inline VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 ** get_address_of_m_RootVisualElement_15() { return &___m_RootVisualElement_15; }
	inline void set_m_RootVisualElement_15(VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * value)
	{
		___m_RootVisualElement_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RootVisualElement_15), (void*)value);
	}

	inline static int32_t get_offset_of_m_FirstChildInsertIndex_16() { return static_cast<int32_t>(offsetof(UIDocument_t008D811860584F44CEBB5AF575856E6EFCEBECC4, ___m_FirstChildInsertIndex_16)); }
	inline int32_t get_m_FirstChildInsertIndex_16() const { return ___m_FirstChildInsertIndex_16; }
	inline int32_t* get_address_of_m_FirstChildInsertIndex_16() { return &___m_FirstChildInsertIndex_16; }
	inline void set_m_FirstChildInsertIndex_16(int32_t value)
	{
		___m_FirstChildInsertIndex_16 = value;
	}

	inline static int32_t get_offset_of_m_SortingOrder_17() { return static_cast<int32_t>(offsetof(UIDocument_t008D811860584F44CEBB5AF575856E6EFCEBECC4, ___m_SortingOrder_17)); }
	inline float get_m_SortingOrder_17() const { return ___m_SortingOrder_17; }
	inline float* get_address_of_m_SortingOrder_17() { return &___m_SortingOrder_17; }
	inline void set_m_SortingOrder_17(float value)
	{
		___m_SortingOrder_17 = value;
	}
};

struct UIDocument_t008D811860584F44CEBB5AF575856E6EFCEBECC4_StaticFields
{
public:
	// System.Int32 UnityEngine.UIElements.UIDocument::s_CurrentUIDocumentCounter
	int32_t ___s_CurrentUIDocumentCounter_7;

public:
	inline static int32_t get_offset_of_s_CurrentUIDocumentCounter_7() { return static_cast<int32_t>(offsetof(UIDocument_t008D811860584F44CEBB5AF575856E6EFCEBECC4_StaticFields, ___s_CurrentUIDocumentCounter_7)); }
	inline int32_t get_s_CurrentUIDocumentCounter_7() const { return ___s_CurrentUIDocumentCounter_7; }
	inline int32_t* get_address_of_s_CurrentUIDocumentCounter_7() { return &___s_CurrentUIDocumentCounter_7; }
	inline void set_s_CurrentUIDocumentCounter_7(int32_t value)
	{
		___s_CurrentUIDocumentCounter_7 = value;
	}
};


// UnityEngine.UIElements.TemplateContainer
struct TemplateContainer_tA9838A6F8D6003FCB93EFDF932BF2F1AD8D2C4DA  : public BindableElement_t68EB22EE929F2FAC7F9A7A05A3B45089B3FBF64F
{
public:
	// System.String UnityEngine.UIElements.TemplateContainer::<templateId>k__BackingField
	String_t* ___U3CtemplateIdU3Ek__BackingField_64;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.TemplateContainer::m_ContentContainer
	VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * ___m_ContentContainer_65;

public:
	inline static int32_t get_offset_of_U3CtemplateIdU3Ek__BackingField_64() { return static_cast<int32_t>(offsetof(TemplateContainer_tA9838A6F8D6003FCB93EFDF932BF2F1AD8D2C4DA, ___U3CtemplateIdU3Ek__BackingField_64)); }
	inline String_t* get_U3CtemplateIdU3Ek__BackingField_64() const { return ___U3CtemplateIdU3Ek__BackingField_64; }
	inline String_t** get_address_of_U3CtemplateIdU3Ek__BackingField_64() { return &___U3CtemplateIdU3Ek__BackingField_64; }
	inline void set_U3CtemplateIdU3Ek__BackingField_64(String_t* value)
	{
		___U3CtemplateIdU3Ek__BackingField_64 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CtemplateIdU3Ek__BackingField_64), (void*)value);
	}

	inline static int32_t get_offset_of_m_ContentContainer_65() { return static_cast<int32_t>(offsetof(TemplateContainer_tA9838A6F8D6003FCB93EFDF932BF2F1AD8D2C4DA, ___m_ContentContainer_65)); }
	inline VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * get_m_ContentContainer_65() const { return ___m_ContentContainer_65; }
	inline VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 ** get_address_of_m_ContentContainer_65() { return &___m_ContentContainer_65; }
	inline void set_m_ContentContainer_65(VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * value)
	{
		___m_ContentContainer_65 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ContentContainer_65), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.Display[]
struct DisplayU5BU5D_t3330058639C7A70B7B1FE7B4325E2B5D600CF4A6  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Display_t0A5D09F1F2EB8025FE40EE0F81E0D01BB47A9B44 * m_Items[1];

public:
	inline Display_t0A5D09F1F2EB8025FE40EE0F81E0D01BB47A9B44 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Display_t0A5D09F1F2EB8025FE40EE0F81E0D01BB47A9B44 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Display_t0A5D09F1F2EB8025FE40EE0F81E0D01BB47A9B44 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Display_t0A5D09F1F2EB8025FE40EE0F81E0D01BB47A9B44 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Display_t0A5D09F1F2EB8025FE40EE0F81E0D01BB47A9B44 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Display_t0A5D09F1F2EB8025FE40EE0F81E0D01BB47A9B44 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.UIElements.UIDocument[]
struct UIDocumentU5BU5D_t07C874E2F207A4181C854213623A407A46E7372B  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) UIDocument_t008D811860584F44CEBB5AF575856E6EFCEBECC4 * m_Items[1];

public:
	inline UIDocument_t008D811860584F44CEBB5AF575856E6EFCEBECC4 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline UIDocument_t008D811860584F44CEBB5AF575856E6EFCEBECC4 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, UIDocument_t008D811860584F44CEBB5AF575856E6EFCEBECC4 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline UIDocument_t008D811860584F44CEBB5AF575856E6EFCEBECC4 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline UIDocument_t008D811860584F44CEBB5AF575856E6EFCEBECC4 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, UIDocument_t008D811860584F44CEBB5AF575856E6EFCEBECC4 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
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


// System.Int64 UnityEngine.UIElements.EventBase`1<System.Object>::TypeId()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t EventBase_1_TypeId_m925B239C6BF94489681CADA47A79DA6DA165D6F5_gshared_inline (const RuntimeMethod* method);
// System.Char UnityEngine.UIElements.KeyboardEventBase`1<System.Object>::get_character()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppChar KeyboardEventBase_1_get_character_mF073599DE98A92A428303EE5A2E483764745B440_gshared_inline (KeyboardEventBase_1_t69A112BDACF51D37126F2FA7FE5BAB6B7E3D4620 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.UIElements.KeyboardEventBase`1<System.Object>::get_shiftKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool KeyboardEventBase_1_get_shiftKey_m178D4ACC821D64891D7664AC3912C235AE69B67E_gshared (KeyboardEventBase_1_t69A112BDACF51D37126F2FA7FE5BAB6B7E3D4620 * __this, const RuntimeMethod* method);
// !0 System.Func`1<System.Object>::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Func_1_Invoke_m4DB932CB3E45300394D6087DBF4C3D620606F726_gshared (Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// !!0[] UnityEngine.Component::GetComponentsInParent<System.Object>(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Component_GetComponentsInParent_TisRuntimeObject_mB91EB46804A21A46054F97E2BA09DAD452D970E1_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, bool ___includeInactive0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m1D864B65CCD0498EC4BFFBDA8F8D04AE5333195A_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject* ___collection0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddRange_m6465DEF706EB529B4227F2AF79338419D517EDF9_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject* ___collection0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Collections.Generic.SortedDictionary`2/ValueCollection<!0,!1> System.Collections.Generic.SortedDictionary`2<UnityEngine.UIElements.UIDocumentHierarchicalIndex,System.Object>::get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t7FCA5E2BC38DCE56CCF9C9DAD0602103C6B4A776 * SortedDictionary_2_get_Values_mCCF1CC039F340A889616B82842BBE22F96B6A62D_gshared (SortedDictionary_2_t73881AFFC2372EDA019D0879247F77F1C9B2FB06 * __this, const RuntimeMethod* method);
// System.Collections.Generic.SortedDictionary`2/ValueCollection/Enumerator<!0,!1> System.Collections.Generic.SortedDictionary`2/ValueCollection<UnityEngine.UIElements.UIDocumentHierarchicalIndex,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tBFDF6BB46FA99A9FD7AF0E80899A3356F4E1C9F0  ValueCollection_GetEnumerator_mEBBB5A34566193DD9E5E4CCDC91CCB6AA8D1721D_gshared (ValueCollection_t7FCA5E2BC38DCE56CCF9C9DAD0602103C6B4A776 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.SortedDictionary`2/ValueCollection/Enumerator<UnityEngine.UIElements.UIDocumentHierarchicalIndex,System.Object>::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m24F355EA2F732E42ED693FB4C4B0B4C07E2D05D3_gshared (Enumerator_tBFDF6BB46FA99A9FD7AF0E80899A3356F4E1C9F0 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.SortedDictionary`2/ValueCollection/Enumerator<UnityEngine.UIElements.UIDocumentHierarchicalIndex,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mBBE57967B523BDD6BD48ADE40C53203037777242_gshared (Enumerator_tBFDF6BB46FA99A9FD7AF0E80899A3356F4E1C9F0 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.SortedDictionary`2/ValueCollection/Enumerator<UnityEngine.UIElements.UIDocumentHierarchicalIndex,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mB1EB29B788A0C9DE013C4CA43C2D02D5777D9DA3_gshared (Enumerator_tBFDF6BB46FA99A9FD7AF0E80899A3356F4E1C9F0 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD_gshared (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_gshared (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, int32_t ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::Reverse()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_m37775958EAD7F2378791BFB588459532DA7459ED_gshared (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, const RuntimeMethod* method);
// !0[] System.Collections.Generic.List`1<System.Int32>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* List_1_ToArray_mDEFFC768D9AAD376D27FC0FC1F7B57EE2E93479F_gshared (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m753F7B4281CC4D02C07AE90726F51EF34B588DF7_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Insert(System.Int32,!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Insert_mFC500A19C486C8ED4E9F3BDBA9B079602D647741_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, RuntimeObject * ___item1, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method);

// UnityEngine.UIElements.DynamicAtlasFilters UnityEngine.UIElements.DynamicAtlas::get_defaultFilters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DynamicAtlas_get_defaultFilters_m49CC3E5B145414B37D1A3F565D1086BB7B9D88E9 (const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.DynamicAtlasSettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicAtlasSettings__ctor_mBA1C3A73E1CEA427DB5E7EFB43B37B9ADB131F8B (DynamicAtlasSettings_t851C8E0D9506CB6B36AE277F8FCE439C89097806 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.DynamicAtlasSettings::set_minAtlasSize(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DynamicAtlasSettings_set_minAtlasSize_m21E6D78365166005A94BFD62C109CEDBD73093EE_inline (DynamicAtlasSettings_t851C8E0D9506CB6B36AE277F8FCE439C89097806 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.DynamicAtlasSettings::set_maxAtlasSize(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DynamicAtlasSettings_set_maxAtlasSize_mF29A5685C1CBEE1E844621B0207A7A26CACAC0A2_inline (DynamicAtlasSettings_t851C8E0D9506CB6B36AE277F8FCE439C89097806 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.DynamicAtlasSettings::set_maxSubTextureSize(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DynamicAtlasSettings_set_maxSubTextureSize_mF749ACCD86B492733F714D0EB2DECFFBBE796854_inline (DynamicAtlasSettings_t851C8E0D9506CB6B36AE277F8FCE439C89097806 * __this, int32_t ___value0, const RuntimeMethod* method);
// UnityEngine.UIElements.DynamicAtlasFilters UnityEngine.UIElements.DynamicAtlasSettings::get_defaultFilters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DynamicAtlasSettings_get_defaultFilters_m6F612BF4A68410700D95A91D7D1960F1AE481BE7 (const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.DynamicAtlasSettings::set_activeFilters(UnityEngine.UIElements.DynamicAtlasFilters)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DynamicAtlasSettings_set_activeFilters_m7740CA3037BC7E80AAE906AE92CC98E0F97D7317_inline (DynamicAtlasSettings_t851C8E0D9506CB6B36AE277F8FCE439C89097806 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.DynamicAtlasSettings::set_customFilter(UnityEngine.UIElements.DynamicAtlasCustomFilter)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DynamicAtlasSettings_set_customFilter_m03BC4D87D27DDB66D6C526F26C3F1633E29ABBCC_inline (DynamicAtlasSettings_t851C8E0D9506CB6B36AE277F8FCE439C89097806 * __this, DynamicAtlasCustomFilter_tCC685CA75B6C1A4A973B7401B0C37E35352476AA * ___value0, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.String UnityEngine.Input::get_compositionString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Input_get_compositionString_mF957B324E35155878D307CE2AEE0AACC9BEC25BD (const RuntimeMethod* method);
// UnityEngine.IMECompositionMode UnityEngine.Input::get_imeCompositionMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Input_get_imeCompositionMode_m04AD6A8C7FEE55E7C4F70885DB5AF222E9F904E5 (const RuntimeMethod* method);
// System.Void UnityEngine.Input::set_imeCompositionMode(UnityEngine.IMECompositionMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Input_set_imeCompositionMode_m7D4AA771F1F616FE74A97CA186C4B55EF268E112 (int32_t ___value0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Input::get_compositionCursorPos()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Input_get_compositionCursorPos_m70946478FB2B607BC3BC5EC1280AA217323518B3 (const RuntimeMethod* method);
// System.Void UnityEngine.Input::set_compositionCursorPos(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Input_set_compositionCursorPos_mA2A9D63F782E3C75F065F031C67C2A1363D47D9C (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::get_mousePresent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_get_mousePresent_mBCACCE1C97E146FF46C7AE7FFE693F7BAB4E4FE5 (const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetMouseButtonDown(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButtonDown_m466D81FDCC87C9CB07557B39DCB435EB691F1EF3 (int32_t ___button0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetMouseButtonUp(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButtonUp_m2BA562F8C4FE8364EEC93970093E776371DF4022 (int32_t ___button0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetMouseButton(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButton_m27BF2DDBF38A38787B83A13D3E6F0F88F7C834C1 (int32_t ___button0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E (const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Input::get_mouseScrollDelta()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Input_get_mouseScrollDelta_m018B3C74FC710A166684FC8391CAC93D8EC0ADB7 (const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::get_touchSupported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_get_touchSupported_mE5B2F5199B4CC16D89AD2C3125B5CB38F4B4867B (const RuntimeMethod* method);
// System.Int32 UnityEngine.Input::get_touchCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Input_get_touchCount_mE1A06AB1973E3456AE398B3CC5105F27CC7335D6 (const RuntimeMethod* method);
// UnityEngine.Touch UnityEngine.Input::GetTouch(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  Input_GetTouch_m6A2A31482B1A7D018C3AAC188C02F5D14500C81F (int32_t ___index0, const RuntimeMethod* method);
// System.Single UnityEngine.Input::GetAxisRaw(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxisRaw_mC07AC23FD8D04A69CDB07C6399C93FFFAEB0FC5B (String_t* ___axisName0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetButtonDown(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetButtonDown_m2001112EBCA3D5C7B0344EF62C896667F7E67DDF (String_t* ___buttonName0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.VisualElementFocusRing::.ctor(UnityEngine.UIElements.VisualElement,UnityEngine.UIElements.VisualElementFocusRing/DefaultFocusOrder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualElementFocusRing__ctor_mD09EE2D55EBA691A6F5A6A756FD7B18AF0E4D4CC (VisualElementFocusRing_t9D8C7E1CD5CAD2B6220414541CB498B5FAB4946B * __this, VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * ___root0, int32_t ___dfo1, const RuntimeMethod* method);
// System.Int64 UnityEngine.UIElements.EventBase`1<UnityEngine.UIElements.PointerDownEvent>::TypeId()
inline int64_t EventBase_1_TypeId_mB167B9ECACCBAA359CD4FD47EB2FBE2D8FD925BF_inline (const RuntimeMethod* method)
{
	return ((  int64_t (*) (const RuntimeMethod*))EventBase_1_TypeId_m925B239C6BF94489681CADA47A79DA6DA165D6F5_gshared_inline)(method);
}
// UnityEngine.UIElements.IEventHandler UnityEngine.UIElements.EventBase::get_target()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* EventBase_get_target_mBD9BCC23633D98BDCCBA8B7EE76DBC932035C3F3_inline (EventBase_tA1333DE2FD77BE5E6B06CFDC825252E0CCF00698 * __this, const RuntimeMethod* method);
// UnityEngine.UIElements.VisualElementFocusChangeTarget UnityEngine.UIElements.VisualElementFocusChangeTarget::GetPooled(UnityEngine.UIElements.Focusable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VisualElementFocusChangeTarget_t168347905990062A6F59D1111069713C3D3F98EC * VisualElementFocusChangeTarget_GetPooled_m9CAE550FA634A55AAD9E8E723ACEF6DCB9F2AD1C (Focusable_tF2E839AB6DBE413F04FC62347D7074D7377FD1E1 * ___target0, const RuntimeMethod* method);
// System.Int64 UnityEngine.UIElements.EventBase`1<UnityEngine.UIElements.NavigationMoveEvent>::TypeId()
inline int64_t EventBase_1_TypeId_mB5697953131C722ED7EDC58AA9B32201EFA59562_inline (const RuntimeMethod* method)
{
	return ((  int64_t (*) (const RuntimeMethod*))EventBase_1_TypeId_m925B239C6BF94489681CADA47A79DA6DA165D6F5_gshared_inline)(method);
}
// UnityEngine.UIElements.NavigationMoveEvent/Direction UnityEngine.UIElements.NavigationMoveEvent::get_direction()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t NavigationMoveEvent_get_direction_m3831053503744A8AB9B83F1D1907A07AD0072364_inline (NavigationMoveEvent_t763AB890A80C1029C653DCEE3FBC522E60A62634 * __this, const RuntimeMethod* method);
// System.Int64 UnityEngine.UIElements.EventBase`1<UnityEngine.UIElements.KeyDownEvent>::TypeId()
inline int64_t EventBase_1_TypeId_mC91C0B8412E545DFDE7E320C54E7DA79622BEF7A_inline (const RuntimeMethod* method)
{
	return ((  int64_t (*) (const RuntimeMethod*))EventBase_1_TypeId_m925B239C6BF94489681CADA47A79DA6DA165D6F5_gshared_inline)(method);
}
// System.Char UnityEngine.UIElements.KeyboardEventBase`1<UnityEngine.UIElements.KeyDownEvent>::get_character()
inline Il2CppChar KeyboardEventBase_1_get_character_m57DE81FFE9FD1B11F2D60C58C1D50919BD145778_inline (KeyboardEventBase_1_t21A03EBF2C37353CE0F48477560D753D9A3F3F24 * __this, const RuntimeMethod* method)
{
	return ((  Il2CppChar (*) (KeyboardEventBase_1_t21A03EBF2C37353CE0F48477560D753D9A3F3F24 *, const RuntimeMethod*))KeyboardEventBase_1_get_character_mF073599DE98A92A428303EE5A2E483764745B440_gshared_inline)(__this, method);
}
// System.Boolean UnityEngine.UIElements.KeyboardEventBase`1<UnityEngine.UIElements.KeyDownEvent>::get_shiftKey()
inline bool KeyboardEventBase_1_get_shiftKey_m1B4F3E9879A0AC60E712C6EA422C8790FEFFB863 (KeyboardEventBase_1_t21A03EBF2C37353CE0F48477560D753D9A3F3F24 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (KeyboardEventBase_1_t21A03EBF2C37353CE0F48477560D753D9A3F3F24 *, const RuntimeMethod*))KeyboardEventBase_1_get_shiftKey_m178D4ACC821D64891D7664AC3912C235AE69B67E_gshared)(__this, method);
}
// UnityEngine.UIElements.FocusChangeDirection UnityEngine.UIElements.FocusChangeDirection::get_none()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FocusChangeDirection_t7E59BE4DF7F0B4024128F306581D21C2C5E02CF1 * FocusChangeDirection_get_none_m689E940E96F39B051A0FED9937D1915D0C6FC402_inline (const RuntimeMethod* method);
// UnityEngine.UIElements.Focusable UnityEngine.UIElements.VisualElementFocusChangeTarget::get_target()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Focusable_tF2E839AB6DBE413F04FC62347D7074D7377FD1E1 * VisualElementFocusChangeTarget_get_target_mB86D83FF06B02568533DF4C6BA026E593BB4A92D_inline (VisualElementFocusChangeTarget_t168347905990062A6F59D1111069713C3D3F98EC * __this, const RuntimeMethod* method);
// UnityEngine.UIElements.FocusChangeDirection UnityEngine.UIElements.VisualElementFocusChangeDirection::get_left()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FocusChangeDirection_t7E59BE4DF7F0B4024128F306581D21C2C5E02CF1 * VisualElementFocusChangeDirection_get_left_m2A45283A26313DC01E1335FF0DCA083A8B9E577B_inline (const RuntimeMethod* method);
// UnityEngine.UIElements.FocusChangeDirection UnityEngine.UIElements.VisualElementFocusChangeDirection::get_right()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FocusChangeDirection_t7E59BE4DF7F0B4024128F306581D21C2C5E02CF1 * VisualElementFocusChangeDirection_get_right_m12F66A6BE99451158B7DE93393F593FD65E77421_inline (const RuntimeMethod* method);
// UnityEngine.UIElements.Focusable UnityEngine.UIElements.VisualElementFocusRing::GetNextFocusable(UnityEngine.UIElements.Focusable,UnityEngine.UIElements.FocusChangeDirection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Focusable_tF2E839AB6DBE413F04FC62347D7074D7377FD1E1 * VisualElementFocusRing_GetNextFocusable_m1155CC1D8B2F4ACB08F084BADC27451652B71EA9 (VisualElementFocusRing_t9D8C7E1CD5CAD2B6220414541CB498B5FAB4946B * __this, Focusable_tF2E839AB6DBE413F04FC62347D7074D7377FD1E1 * ___currentFocusable0, FocusChangeDirection_t7E59BE4DF7F0B4024128F306581D21C2C5E02CF1 * ___direction1, const RuntimeMethod* method);
// UnityEngine.UIElements.Focusable UnityEngine.UIElements.NavigateFocusRing::GetNextFocusable2D(UnityEngine.UIElements.Focusable,UnityEngine.UIElements.NavigateFocusRing/ChangeDirection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Focusable_tF2E839AB6DBE413F04FC62347D7074D7377FD1E1 * NavigateFocusRing_GetNextFocusable2D_mDDF98C80B6BF39DFCDCCAF0A0B426A5E1DE4DD73 (NavigateFocusRing_t44CF1D05515ADB539414B52A64A7602739E6B826 * __this, Focusable_tF2E839AB6DBE413F04FC62347D7074D7377FD1E1 * ___currentFocusable0, ChangeDirection_t34BA68392D0BB026E61B81B65AD1B09CF9DB4D27 * ___direction1, const RuntimeMethod* method);
// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.NavigateFocusRing::GetRootFocusable(UnityEngine.UIElements.VisualElement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * NavigateFocusRing_GetRootFocusable_m579F3BE194BE3FC6C83AF21F69661076ECD72125 (VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * ___v0, const RuntimeMethod* method);
// UnityEngine.Rect UnityEngine.UIElements.VisualElement::get_worldBound()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  VisualElement_get_worldBound_m5990120A0D099FE5555AEDBF2533187AFE2A4891 (VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Rect::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Rect_get_position_m4D98DEE21C60D7EA5E4A30869F4DBDE25DB93A86 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::get_one()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_get_one_m9B2AFD26404B6DD0F520D19FC7F79371C5C18B42 (const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Subtraction(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Subtraction_m6E536A8C72FEAA37FF8D5E26E11D6E71EB59599A_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___b1, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Rect::get_size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Rect_get_size_m752B3BB45AE862F6EAE941ED5E5C1B01C0973A00 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, float ___d1, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Addition(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Addition_m5EACC2AEA80FEE29F380397CF1F4B11D04BE71CC_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.Rect::.ctor(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect__ctor_m00C682F84642AE657D7EBB0D5BC6E8F3CA4D1E82 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___position0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___size1, const RuntimeMethod* method);
// System.Void UnityEngine.Rect::set_yMin(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect_set_yMin_mA2FDFF7C8C2361A4CF3F446BAB9A861F923F763A (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, float ___value0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Screen::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE (const RuntimeMethod* method);
// System.Void UnityEngine.Rect::set_yMax(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect_set_yMax_m4E7A7C5E88FA369D6ED022C939427F4895F6635D (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Rect::set_xMin(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect_set_xMin_mC91AC74347F8E3D537E8C5D70015E9B8EA872A3F (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, float ___value0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Screen::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C (const RuntimeMethod* method);
// System.Void UnityEngine.Rect::set_xMax(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect_set_xMax_m4E466ED07B11CC5457BD62517418C493C0DDF2E3 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, float ___value0, const RuntimeMethod* method);
// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.NavigateFocusRing/FocusableHierarchyTraversal::GetBestOverall(UnityEngine.UIElements.VisualElement,UnityEngine.UIElements.VisualElement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * FocusableHierarchyTraversal_GetBestOverall_mE1106D74720F7F24C94FDBC36CEF3A14587D11E4 (FocusableHierarchyTraversal_t6D47905FA29D442881D3D9C243EA93E74712D48E * __this, VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * ___root0, VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * ___bestSoFar1, const RuntimeMethod* method);
// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.NavigateFocusRing::GetLeafFocusable(UnityEngine.UIElements.VisualElement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * NavigateFocusRing_GetLeafFocusable_m671E5A45D0C16C902BFC8060D38AD6DBF1916B94 (VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * ___v0, const RuntimeMethod* method);
// UnityEngine.UIElements.IResolvedStyle UnityEngine.UIElements.VisualElement::get_resolvedStyle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VisualElement_get_resolvedStyle_m940BF44C4B44B81D7CA268066783FB7F57452CBB (VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.UIElements.VisualElement::get_enabledInHierarchy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VisualElement_get_enabledInHierarchy_mDAC756C320614B99F19F5BB92F1CDDFC6DFF5EFE (VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.UIElements.Focusable::get_tabIndex()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Focusable_get_tabIndex_m21C38A27D82ED394933E967FC3352DD0606F1657_inline (Focusable_tF2E839AB6DBE413F04FC62347D7074D7377FD1E1 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.UIElements.Focusable::get_excludeFromFocusRing()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Focusable_get_excludeFromFocusRing_mA2B7D086023F8118F07FA5A7D622F3B8AEC980E8_inline (Focusable_tF2E839AB6DBE413F04FC62347D7074D7377FD1E1 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.UIElements.Focusable::get_delegatesFocus()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Focusable_get_delegatesFocus_m78A51878C04A2D20D579A3890DCE9F62BE75DC3F_inline (Focusable_tF2E839AB6DBE413F04FC62347D7074D7377FD1E1 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.UIElements.VisualElement::get_isCompositeRoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VisualElement_get_isCompositeRoot_m6BCBB97C2A7FAA3723C81889E137F6972C973DB6 (VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * __this, const RuntimeMethod* method);
// UnityEngine.UIElements.VisualElement/Hierarchy UnityEngine.UIElements.VisualElement::get_hierarchy()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Hierarchy_tC971D6D195075C1B878D4B2558ECAD4E5FF6861A  VisualElement_get_hierarchy_mEE61B02E08154E767C2FCE1BDC903CBDF2A9B2BB_inline (VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * __this, const RuntimeMethod* method);
// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.VisualElement/Hierarchy::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * Hierarchy_get_parent_mE52DA934E9708109FCDECA315736A2BFE11195DA (Hierarchy_tC971D6D195075C1B878D4B2558ECAD4E5FF6861A * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.UIElements.NavigateFocusRing::IsFocusable(UnityEngine.UIElements.Focusable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NavigateFocusRing_IsFocusable_m0137D80B13592ABFE61B8AFEFC7643E2C04E7F04 (Focusable_tF2E839AB6DBE413F04FC62347D7074D7377FD1E1 * ___focusable0, const RuntimeMethod* method);
// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.NavigateFocusRing::GetLeafFocusableRecursive(UnityEngine.UIElements.VisualElement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * NavigateFocusRing_GetLeafFocusableRecursive_mAC1ECACA6E234456E1E5BDBD0B2C5E7101768963 (VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * ___v0, const RuntimeMethod* method);
// System.Boolean UnityEngine.UIElements.NavigateFocusRing::IsLeaf(UnityEngine.UIElements.Focusable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NavigateFocusRing_IsLeaf_m88A7D007E2BB564284514117EB1A5E8FC92D3F71 (Focusable_tF2E839AB6DBE413F04FC62347D7074D7377FD1E1 * ___focusable0, const RuntimeMethod* method);
// System.Int32 UnityEngine.UIElements.VisualElement::get_childCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VisualElement_get_childCount_mA4C3D31DB972D8092EB35BB879230CDC5854898E (VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * __this, const RuntimeMethod* method);
// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.VisualElement::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * VisualElement_get_Item_m2B62EE36F910C6EB7BBD15421B4D727A441B64A3 (VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * __this, int32_t ___key0, const RuntimeMethod* method);
// System.Boolean UnityEngine.UIElements.NavigateFocusRing::IsFocusRoot(UnityEngine.UIElements.VisualElement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NavigateFocusRing_IsFocusRoot_m730561D3A95BB07B243AB22ACD533CCD9279E13C (VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * ___focusable0, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.NavigateFocusRing/ChangeDirection::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChangeDirection__ctor_mD02F4FF0E700D195CD1D9D200B2FCE2B5E1EEEE6 (ChangeDirection_t34BA68392D0BB026E61B81B65AD1B09CF9DB4D27 * __this, int32_t ___i0, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.PanelSettings::ApplyThemeStyleSheet(UnityEngine.UIElements.VisualElement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanelSettings_ApplyThemeStyleSheet_mFC4B8A436016700EAAC120FC79E821378D1C4F8E (PanelSettings_tA06886CA55D7F3105153641E0BA56FF15E8DCA69 * __this, VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * ___root0, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.PanelSettings::ApplySortingOrder()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanelSettings_ApplySortingOrder_m9579858CA0C4952D0591238AE3F5960D19E4559A (PanelSettings_tA06886CA55D7F3105153641E0BA56FF15E8DCA69 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.BaseVisualElementPanel::set_sortingPriority(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseVisualElementPanel_set_sortingPriority_mEAC3C272F1993604C5273F96ED04B2D32D12060B (BaseVisualElementPanel_tFF0B76C4FDAE6AA5D9A055D1FDD29AE67B93B95D * __this, float ___value0, const RuntimeMethod* method);
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mE43AFC74F5F3932913C023A04B24905E093C5005 (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * __this, String_t* ___paramName0, String_t* ___message1, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.BaseRuntimePanel::set_targetDisplay(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BaseRuntimePanel_set_targetDisplay_m66A207FC22EA486A2E3091852DDD3AAD2F557269_inline (BaseRuntimePanel_tE55DB58DC0A1F524F98CC999672C716946DA4754 * __this, int32_t ___value0, const RuntimeMethod* method);
// UnityEngine.UIElements.BaseRuntimePanel UnityEngine.UIElements.PanelSettings::CreateRelatedRuntimePanel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BaseRuntimePanel_tE55DB58DC0A1F524F98CC999672C716946DA4754 * PanelSettings_CreateRelatedRuntimePanel_m7F53F698DACCD6F4F3CC1F71301F93BBF350FF22 (PanelSettings_tA06886CA55D7F3105153641E0BA56FF15E8DCA69 * __this, const RuntimeMethod* method);
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.VisualElement::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualElement_set_name_mDB6550DDF46AA91580362C2DF69C232F5D260BD4 (VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.PanelSettings::SetScreenToPanelSpaceFunction(System.Func`2<UnityEngine.Vector2,UnityEngine.Vector2>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanelSettings_SetScreenToPanelSpaceFunction_mF097345392830310AF99BDE8F7DBB58AA99209E2 (PanelSettings_tA06886CA55D7F3105153641E0BA56FF15E8DCA69 * __this, Func_2_tB3D19331301201246DE473D608119BB47D418EB9 * ___screentoPanelSpaceFunction0, const RuntimeMethod* method);
// System.Int32 UnityEngine.UIElements.PanelSettings::get_targetDisplay()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PanelSettings_get_targetDisplay_m2B5CF2AFF5271E8188FC81F258C8015A247811F6_inline (PanelSettings_tA06886CA55D7F3105153641E0BA56FF15E8DCA69 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.UIElements.PanelSettings::get_sortingOrder()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float PanelSettings_get_sortingOrder_mB05D688334646EDC8BA49CCBCDEEA472B556B33F_inline (PanelSettings_tA06886CA55D7F3105153641E0BA56FF15E8DCA69 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.PanelSettings::DisposeRelatedPanel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanelSettings_DisposeRelatedPanel_m2ECC3B2AEBC1D7BF224E74231F4A2A458EB7BF83 (PanelSettings_tA06886CA55D7F3105153641E0BA56FF15E8DCA69 * __this, const RuntimeMethod* method);
// UnityEngine.UIElements.BaseRuntimePanel UnityEngine.UIElements.PanelSettings::get_panel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BaseRuntimePanel_tE55DB58DC0A1F524F98CC999672C716946DA4754 * PanelSettings_get_panel_m2B9826508E23C23D4F716A96B52AB2712865FB83 (PanelSettings_tA06886CA55D7F3105153641E0BA56FF15E8DCA69 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2Int::.ctor(System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2Int__ctor_mB2B73108B6DD3ADC1B515D7DD9116ECAC6833726_inline (Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * __this, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_clear_m9F8076CEFE7B8119A9903212DCBF2BFED114E97F (const RuntimeMethod* method);
// UnityEngine.UIElements.DynamicAtlasSettings UnityEngine.UIElements.DynamicAtlasSettings::get_defaults()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DynamicAtlasSettings_t851C8E0D9506CB6B36AE277F8FCE439C89097806 * DynamicAtlasSettings_get_defaults_m66394E6E9FA2856F33282B0B655468F423381FE7 (const RuntimeMethod* method);
// System.Void UnityEngine.ScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_m8DAE6CDCFA34E16F2543B02CC3669669FF203063 (ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.PanelSettings::InitializeShaders()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanelSettings_InitializeShaders_mC988B0154294E8F8732E388C46838E31BDE7872F (PanelSettings_tA06886CA55D7F3105153641E0BA56FF15E8DCA69 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.PanelSettings::InitializeTextSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanelSettings_InitializeTextSettings_m6CD9A891740B4AA855CC47CAC4879EB16EC031A7 (PanelSettings_tA06886CA55D7F3105153641E0BA56FF15E8DCA69 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.PanelSettings::set_panel(UnityEngine.UIElements.BaseRuntimePanel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanelSettings_set_panel_m15890A7466CF8ACD3BF15C6AD750E3D1CCD368C1 (PanelSettings_tA06886CA55D7F3105153641E0BA56FF15E8DCA69 * __this, BaseRuntimePanel_tE55DB58DC0A1F524F98CC999672C716946DA4754 * ___value0, const RuntimeMethod* method);
// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.PanelSettings::get_visualTree()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * PanelSettings_get_visualTree_m09CAA1B5289168AF6F1F0FE2714DCA5EDE9CC170 (PanelSettings_tA06886CA55D7F3105153641E0BA56FF15E8DCA69 * __this, const RuntimeMethod* method);
// UnityEngine.UIElements.VisualElementStyleSheetSet UnityEngine.UIElements.VisualElement::get_styleSheets()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VisualElementStyleSheetSet_tDDF1C0701442D9D8D928AC655823313F07E1B0F5  VisualElement_get_styleSheets_m1CE835F433F15BF92FB507A28CB193A36F107649 (VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.VisualElementStyleSheetSet::Add(UnityEngine.UIElements.StyleSheet)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualElementStyleSheetSet_Add_mDAB4C14E7E0DFB0CE25AFACE6B0FD508821F081D (VisualElementStyleSheetSet_tDDF1C0701442D9D8D928AC655823313F07E1B0F5 * __this, StyleSheet_t7B6AD8DA876D813A48084D1587CF283490AA0093 * ___styleSheet0, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.UIElementsRuntimeUtility/CreateRuntimePanelDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CreateRuntimePanelDelegate__ctor_m95D49EE5E6FCB8D41F8E349289D7B2E049E6837C (CreateRuntimePanelDelegate_t0EEBC61860CC3E2C6777076F6F65CF11EE029F53 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// UnityEngine.UIElements.BaseRuntimePanel UnityEngine.UIElements.UIElementsRuntimeUtility::FindOrCreateRuntimePanel(UnityEngine.ScriptableObject,UnityEngine.UIElements.UIElementsRuntimeUtility/CreateRuntimePanelDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BaseRuntimePanel_tE55DB58DC0A1F524F98CC999672C716946DA4754 * UIElementsRuntimeUtility_FindOrCreateRuntimePanel_m5D3E06078AD6507E1911E37DF9BA0C410B662381 (ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A * ___ownerObject0, CreateRuntimePanelDelegate_t0EEBC61860CC3E2C6777076F6F65CF11EE029F53 * ___createDelegate1, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.UIElementsRuntimeUtility::DisposeRuntimePanel(UnityEngine.ScriptableObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIElementsRuntimeUtility_DisposeRuntimePanel_mC21BE02ECF47C691A5363B9FE94ABF2EBF372A7C (ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A * ___ownerObject0, const RuntimeMethod* method);
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4 (Delegate_t * ___source0, Delegate_t * ___value1, const RuntimeMethod* method);
// !0 System.Func`1<UnityEngine.Object>::Invoke()
inline Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * Func_1_Invoke_mA1E7E3771320CD31CD9816E3851252CE41DA2732 (Func_1_tAC616C71189A2A9710DCCC67B2B63B95BD51C170 * __this, const RuntimeMethod* method)
{
	return ((  Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * (*) (Func_1_tAC616C71189A2A9710DCCC67B2B63B95BD51C170 *, const RuntimeMethod*))Func_1_Invoke_m4DB932CB3E45300394D6087DBF4C3D620606F726_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// UnityEngine.Shader UnityEngine.Shader::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * Shader_Find_m596EC6EBDCA8C9D5D86E2410A319928C1E8E6B5A (String_t* ___name0, const RuntimeMethod* method);
// UnityEngine.Rect UnityEngine.UIElements.PanelSettings::GetDisplayRect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  PanelSettings_GetDisplayRect_m95887464281D221949E90D4F37AD766D152A22CF (PanelSettings_tA06886CA55D7F3105153641E0BA56FF15E8DCA69 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Screen::get_dpi()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Screen_get_dpi_m37167A82DE896C738517BBF75BFD70C616CCCF55 (const RuntimeMethod* method);
// System.Single UnityEngine.UIElements.PanelSettings::ResolveScale(UnityEngine.Rect,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PanelSettings_ResolveScale_mD895305068737AA33CD410D05606899E6E6DF00E (PanelSettings_tA06886CA55D7F3105153641E0BA56FF15E8DCA69 * __this, Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___targetRect0, float ___screenDpi1, const RuntimeMethod* method);
// UnityEngine.UIElements.IStyle UnityEngine.UIElements.VisualElement::get_style()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VisualElement_get_style_m9F36CA167426B625365258FFB26F366FDE91621D (VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * __this, const RuntimeMethod* method);
// UnityEngine.UIElements.Length UnityEngine.UIElements.StyleLength::get_value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Length_t4EB2583009584526089344B3DBC93E0C8894BCF4  StyleLength_get_value_mB1C8CA75E7C74941D07C6C2C51B1A48EBA8BB0E7 (StyleLength_t45F1C3196D4C9FE58C3EBF3B4C25A4F1D275679E * __this, const RuntimeMethod* method);
// UnityEngine.UIElements.Length UnityEngine.UIElements.Length::op_Implicit(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Length_t4EB2583009584526089344B3DBC93E0C8894BCF4  Length_op_Implicit_m3BD8F084E51CBCBFE379530C63BBEF33CC55032C (float ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.UIElements.Length::op_Equality(UnityEngine.UIElements.Length,UnityEngine.UIElements.Length)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Length_op_Equality_mFF26EC0D0872AA4BCBD639A54B85258C04A08AD4 (Length_t4EB2583009584526089344B3DBC93E0C8894BCF4  ___lhs0, Length_t4EB2583009584526089344B3DBC93E0C8894BCF4  ___rhs1, const RuntimeMethod* method);
// System.Single UnityEngine.Rect::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_width_m4A0500D95CA84917787A8E90D26E66D49DFA90EF (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Rect::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_height_m42FEF31015A269E6E2B7E6F62E72E5BF6602302A (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.BaseVisualElementPanel::set_scale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseVisualElementPanel_set_scale_m2BDC60BA59937218EE405339B1EF9F0D6C388EA7 (BaseVisualElementPanel_tFF0B76C4FDAE6AA5D9A055D1FDD29AE67B93B95D * __this, float ___value0, const RuntimeMethod* method);
// UnityEngine.UIElements.StyleLength UnityEngine.UIElements.StyleLength::op_Implicit(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleLength_t45F1C3196D4C9FE58C3EBF3B4C25A4F1D275679E  StyleLength_op_Implicit_m32BDCF90D8A04A73780EECC85E3A6D14AEFB8D15 (float ___v0, const RuntimeMethod* method);
// UnityEngine.RenderTexture UnityEngine.UIElements.PanelSettings::get_targetTexture()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * PanelSettings_get_targetTexture_mECC14702FCCB6939AA0F221E611971BB28A306F3_inline (PanelSettings_tA06886CA55D7F3105153641E0BA56FF15E8DCA69 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.BaseRuntimePanel::set_drawToCameras(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseRuntimePanel_set_drawToCameras_m4C4BAAFA359A48E58EC6F8DD3C8AE94C48604D8A (BaseRuntimePanel_tE55DB58DC0A1F524F98CC999672C716946DA4754 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.BaseVisualElementPanel::set_clearSettings(UnityEngine.UIElements.PanelClearSettings)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BaseVisualElementPanel_set_clearSettings_m4FDDA295355E270A46E8C840A17EAA3189467265_inline (BaseVisualElementPanel_tFF0B76C4FDAE6AA5D9A055D1FDD29AE67B93B95D * __this, PanelClearSettings_t3A957E91B3B162582F4BFEF32D08A44BE0BF2B93  ___value0, const RuntimeMethod* method);
// UnityEngine.UIElements.DynamicAtlasSettings UnityEngine.UIElements.PanelSettings::get_dynamicAtlasSettings()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DynamicAtlasSettings_t851C8E0D9506CB6B36AE277F8FCE439C89097806 * PanelSettings_get_dynamicAtlasSettings_mA7CD01ECC21C5FE2E53BC5E891DDDD4A36A3D116_inline (PanelSettings_tA06886CA55D7F3105153641E0BA56FF15E8DCA69 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.UIElements.DynamicAtlasSettings::get_minAtlasSize()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t DynamicAtlasSettings_get_minAtlasSize_m24F98ABD5894FBAAAB723B64561FEA4BE7700E15_inline (DynamicAtlasSettings_t851C8E0D9506CB6B36AE277F8FCE439C89097806 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.DynamicAtlas::set_minAtlasSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicAtlas_set_minAtlasSize_m9BA560AD5491E9F0F3755309121A2064C0AD41B2 (DynamicAtlas_t024D0D5DF3B5CCA7D05187B7745B0F6F83662D60 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Int32 UnityEngine.UIElements.DynamicAtlasSettings::get_maxAtlasSize()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t DynamicAtlasSettings_get_maxAtlasSize_m639A855206F205B7761DECD9846A333005FA2B43_inline (DynamicAtlasSettings_t851C8E0D9506CB6B36AE277F8FCE439C89097806 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.DynamicAtlas::set_maxAtlasSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicAtlas_set_maxAtlasSize_m484D9C62146ED62879BD5D70F305B6D9814DCB26 (DynamicAtlas_t024D0D5DF3B5CCA7D05187B7745B0F6F83662D60 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Int32 UnityEngine.UIElements.DynamicAtlasSettings::get_maxSubTextureSize()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t DynamicAtlasSettings_get_maxSubTextureSize_m084EADB926BF0EB4B2848F347A9DEB48FF491870_inline (DynamicAtlasSettings_t851C8E0D9506CB6B36AE277F8FCE439C89097806 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.DynamicAtlas::set_maxSubTextureSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicAtlas_set_maxSubTextureSize_mD93CAF43AAC31450988803E9734B06478D5715B7 (DynamicAtlas_t024D0D5DF3B5CCA7D05187B7745B0F6F83662D60 * __this, int32_t ___value0, const RuntimeMethod* method);
// UnityEngine.UIElements.DynamicAtlasFilters UnityEngine.UIElements.DynamicAtlasSettings::get_activeFilters()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t DynamicAtlasSettings_get_activeFilters_m829EA1AD6874C1E0F9724893668696314F884858_inline (DynamicAtlasSettings_t851C8E0D9506CB6B36AE277F8FCE439C89097806 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.DynamicAtlas::set_activeFilters(UnityEngine.UIElements.DynamicAtlasFilters)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicAtlas_set_activeFilters_m52744F820B001678E3CEC0F200227C8AAAB32652 (DynamicAtlas_t024D0D5DF3B5CCA7D05187B7745B0F6F83662D60 * __this, int32_t ___value0, const RuntimeMethod* method);
// UnityEngine.UIElements.DynamicAtlasCustomFilter UnityEngine.UIElements.DynamicAtlasSettings::get_customFilter()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DynamicAtlasCustomFilter_tCC685CA75B6C1A4A973B7401B0C37E35352476AA * DynamicAtlasSettings_get_customFilter_mF58AC5554D9AC7E94557D38AC7AC3C3FB31605D8_inline (DynamicAtlasSettings_t851C8E0D9506CB6B36AE277F8FCE439C89097806 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.DynamicAtlas::set_customFilter(UnityEngine.UIElements.DynamicAtlasCustomFilter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicAtlas_set_customFilter_m6A32A3C743575E5DBC9DCC7CADF71C07ACCE6E31 (DynamicAtlas_t024D0D5DF3B5CCA7D05187B7745B0F6F83662D60 * __this, DynamicAtlasCustomFilter_tCC685CA75B6C1A4A973B7401B0C37E35352476AA * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.BaseRuntimePanel::set_screenToPanelSpace(System.Func`2<UnityEngine.Vector2,UnityEngine.Vector2>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseRuntimePanel_set_screenToPanelSpace_mA72EADC0660A6AA68A087C036093D3C66D61BF5B (BaseRuntimePanel_tE55DB58DC0A1F524F98CC999672C716946DA4754 * __this, Func_2_tB3D19331301201246DE473D608119BB47D418EB9 * ___value0, const RuntimeMethod* method);
// UnityEngine.UIElements.PanelScaleModes UnityEngine.UIElements.PanelSettings::get_scaleMode()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PanelSettings_get_scaleMode_m29F6F2F593761D9A03DD5768B180F100F724A8BE_inline (PanelSettings_tA06886CA55D7F3105153641E0BA56FF15E8DCA69 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.UIElements.PanelSettings::get_fallbackDpi()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float PanelSettings_get_fallbackDpi_mF33EE03C381EDDC10E5BF501C382B8887B70F26F_inline (PanelSettings_tA06886CA55D7F3105153641E0BA56FF15E8DCA69 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.UIElements.PanelSettings::get_referenceDpi()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float PanelSettings_get_referenceDpi_m2FC31DBE36463D52C56E7DA987C1C06213E0692D_inline (PanelSettings_tA06886CA55D7F3105153641E0BA56FF15E8DCA69 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2Int UnityEngine.UIElements.PanelSettings::get_referenceResolution()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  PanelSettings_get_referenceResolution_mD72C52914CF23C55D87F21CD746A36B389363432_inline (PanelSettings_tA06886CA55D7F3105153641E0BA56FF15E8DCA69 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Vector2Int::get_x()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_x_mDBEFBCDF9C7924767344ED2CEE1307885AED947B_inline (Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Vector2Int::get_y()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_y_m282591DEB0E70B02F4F4DDFAB90116AEC8E6B86C_inline (Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2Int::op_Implicit(UnityEngine.Vector2Int)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2Int_op_Implicit_m74C29CAFE091CE873934FAF6300CD01461D7FE6B (Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___v0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// UnityEngine.UIElements.PanelScreenMatchModes UnityEngine.UIElements.PanelSettings::get_screenMatchMode()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PanelSettings_get_screenMatchMode_m69009B50BD8B63444548F86574F6B7D43043D5C2_inline (PanelSettings_tA06886CA55D7F3105153641E0BA56FF15E8DCA69 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Min(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Min_mD28BD5C9012619B74E475F204F96603193E99B14 (float ___a0, float ___b1, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775 (float ___a0, float ___b1, const RuntimeMethod* method);
// System.Single UnityEngine.UIElements.PanelSettings::get_match()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float PanelSettings_get_match_m85BF6EEE7C48D6D387F600747265D124E623EFB9_inline (PanelSettings_tA06886CA55D7F3105153641E0BA56FF15E8DCA69 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C (float ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616 (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method);
// System.Single UnityEngine.UIElements.PanelSettings::get_scale()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float PanelSettings_get_scale_m28C5C65DF239BCBCFBDD0C4F89AC2305B87D381B_inline (PanelSettings_tA06886CA55D7F3105153641E0BA56FF15E8DCA69 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, float ___x0, float ___y1, float ___width2, float ___height3, const RuntimeMethod* method);
// System.Int32 UnityEngine.Display::get_renderingWidth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Display_get_renderingWidth_m426E1CB184C1135E1EE83678FFF7EF6521B5DB64 (Display_t0A5D09F1F2EB8025FE40EE0F81E0D01BB47A9B44 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Display::get_renderingHeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Display_get_renderingHeight_m18F083C41C0BB1646CB4C819E1266B9B51563F61 (Display_t0A5D09F1F2EB8025FE40EE0F81E0D01BB47A9B44 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.UIDocumentList::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIDocumentList__ctor_m5CCA152EB41F3C8EABCE1990FF875CDF8B130953 (UIDocumentList_t3D7C0E63339FDA7858C1D1AE3EB911CDB76C18C5 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.UIDocumentList::RemoveFromListAndFromVisualTree(UnityEngine.UIElements.UIDocument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIDocumentList_RemoveFromListAndFromVisualTree_m069DA671F2E30743A3303EA08F7CD1AB4F8AF201 (UIDocumentList_t3D7C0E63339FDA7858C1D1AE3EB911CDB76C18C5 * __this, UIDocument_t008D811860584F44CEBB5AF575856E6EFCEBECC4 * ___uiDocument0, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.UIDocumentList::AddToListAndToVisualTree(UnityEngine.UIElements.UIDocument,UnityEngine.UIElements.VisualElement,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIDocumentList_AddToListAndToVisualTree_mD04F1390C6805F013D8473D6F88CBDAF4425F52A (UIDocumentList_t3D7C0E63339FDA7858C1D1AE3EB911CDB76C18C5 * __this, UIDocument_t008D811860584F44CEBB5AF575856E6EFCEBECC4 * ___uiDocument0, VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * ___visualTree1, int32_t ___firstInsertIndex2, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIElements.UIDocument>::get_Count()
inline int32_t List_1_get_Count_m46E859E3CE7BCCF1CABF62E178A7A6AD5BD1164B_inline (List_1_tAB773DE00C0DE14686075955D7FB71ACD6194509 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tAB773DE00C0DE14686075955D7FB71ACD6194509 *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UIElements.IEventDispatchingStrategy>::.ctor()
inline void List_1__ctor_mE9D25A015988790C35586B63300BF69CE2FD7BE1 (List_1_tDB4893D11F8F1E02AB6C87CD8B761DC956B02D32 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDB4893D11F8F1E02AB6C87CD8B761DC956B02D32 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void UnityEngine.UIElements.NavigationEventDispatchingStrategy::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavigationEventDispatchingStrategy__ctor_mC1F869F5D5547FEC565C5C5E04AEB0B5AD3098B2 (NavigationEventDispatchingStrategy_t2DEA6952B1FF4FEE78C9A20FA54C66E7F12F1992 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.UIElements.IEventDispatchingStrategy>::Add(!0)
inline void List_1_Add_m67147312F95905A091065C08C81E011F9AA6A8E5 (List_1_tDB4893D11F8F1E02AB6C87CD8B761DC956B02D32 * __this, RuntimeObject* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDB4893D11F8F1E02AB6C87CD8B761DC956B02D32 *, RuntimeObject*, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Void UnityEngine.UIElements.PointerCaptureDispatchingStrategy::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerCaptureDispatchingStrategy__ctor_mEBE39239D7CBF5C1C167738D721C84D1B152CF50 (PointerCaptureDispatchingStrategy_t0599BD8824D9BE038701155B290A0732F73568B0 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.KeyboardEventDispatchingStrategy::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyboardEventDispatchingStrategy__ctor_m4A1C1836A3F4B218FD3B050C02471C82F717850F (KeyboardEventDispatchingStrategy_t80BEA7051056C80A3C2B08B50A184B8B6D39FDE0 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.PointerEventDispatchingStrategy::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerEventDispatchingStrategy__ctor_m03B232167F30128AD42C0B161A332F478C917D61 (PointerEventDispatchingStrategy_t14CDABDD60FD11CD051E2B39DD430614D55534A9 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.MouseEventDispatchingStrategy::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseEventDispatchingStrategy__ctor_m66AF2B5C3AF132611F22F34167DAA6F1406ECAEB (MouseEventDispatchingStrategy_t1FA26BD52FADFAABD46BD3A9B16F23DAB22E4302 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.DefaultDispatchingStrategy::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultDispatchingStrategy__ctor_mAA2057050C027721E2C8BDC0B345C3B1E4DA7717 (DefaultDispatchingStrategy_t7A05CA05D94BD04D7AEDE160F48422576C2E55A5 * __this, const RuntimeMethod* method);
// UnityEngine.UIElements.EventDispatcher UnityEngine.UIElements.EventDispatcher::CreateForRuntime(System.Collections.Generic.IList`1<UnityEngine.UIElements.IEventDispatchingStrategy>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventDispatcher_t86D9B0A3CA4441F30AA1A940D0D50F9AEC9912F2 * EventDispatcher_CreateForRuntime_m155B293AF4CC1C26B3FB5B67E116DC0E57C06FA8 (RuntimeObject* ___strategies0, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.RuntimePanel::.ctor(UnityEngine.ScriptableObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimePanel__ctor_m5C1608E7B06541A25A28E672F64201BD3C8DAE10 (RuntimePanel_t6D5485B3EB9C598452C70E12357282E046DD1409 * __this, ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A * ___ownerObject0, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.BaseRuntimePanel::.ctor(UnityEngine.ScriptableObject,UnityEngine.UIElements.EventDispatcher)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseRuntimePanel__ctor_mF152AAF5FF4AA2FC2705B28D8BC4F203005DF492 (BaseRuntimePanel_tE55DB58DC0A1F524F98CC999672C716946DA4754 * __this, ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A * ___ownerObject0, EventDispatcher_t86D9B0A3CA4441F30AA1A940D0D50F9AEC9912F2 * ___dispatcher1, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.NavigateFocusRing::.ctor(UnityEngine.UIElements.VisualElement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavigateFocusRing__ctor_mAF0AAE834DA4F0195D4A5F296CCFA0FF67764E0B (NavigateFocusRing_t44CF1D05515ADB539414B52A64A7602739E6B826 * __this, VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * ___root0, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.FocusController::.ctor(UnityEngine.UIElements.IFocusRing)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FocusController__ctor_m872A126C23476DB846EC82D2DF4D5A3C1E325672 (FocusController_t0EE43A2ABFA352E752E8DA2B6D17FC322FC59764 * __this, RuntimeObject* ___focusRing0, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.Panel::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Panel_set_name_m724979D780FAD5DD03DE0ED1BE477064EF46EE14 (Panel_tCC064C952382FEF787E3FE61F6847A375A3DCD99 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.PanelSettings::ApplyPanelSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanelSettings_ApplyPanelSettings_m386F4A77DD50664863D2858D9FE5AE8F2C5EAFE5 (PanelSettings_tA06886CA55D7F3105153641E0BA56FF15E8DCA69 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.BaseVisualElementPanel::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseVisualElementPanel_Update_mA0DD1F2AA24B43833485390F3492373DFB168CD3 (BaseVisualElementPanel_tFF0B76C4FDAE6AA5D9A055D1FDD29AE67B93B95D * __this, const RuntimeMethod* method);
// UnityEngine.UIElements.EventDispatcher UnityEngine.UIElements.RuntimeEventDispatcher::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventDispatcher_t86D9B0A3CA4441F30AA1A940D0D50F9AEC9912F2 * RuntimeEventDispatcher_Create_m65E45A16196E086E21541BA034BE7A6E6BFBE4C3 (const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.UIElements.BaseRuntimePanel::get_selectableGameObject()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * BaseRuntimePanel_get_selectableGameObject_m9254091C528BD3A3286BDE454EAFA0F565854FCC_inline (BaseRuntimePanel_tE55DB58DC0A1F524F98CC999672C716946DA4754 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.BaseRuntimePanel::set_selectableGameObject(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseRuntimePanel_set_selectableGameObject_mF13AF5A52CADAD0DA8BBAEC100C465F7BA0C95CC (BaseRuntimePanel_tE55DB58DC0A1F524F98CC999672C716946DA4754 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___value0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.UIElements.BaseRuntimePanel::ScreenToPanel(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  BaseRuntimePanel_ScreenToPanel_m675DC87771E2BB7BBA9564EAB1DF72B00A2D5ADF (BaseRuntimePanel_tE55DB58DC0A1F524F98CC999672C716946DA4754 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___screen0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Camera::WorldToScreenPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Camera_WorldToScreenPoint_m44710195E7736CE9DE5A9B05E32059A9A950F95C (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.UIElements.RuntimePanelUtils::CameraTransformWorldToPanel(UnityEngine.UIElements.IPanel,UnityEngine.Vector3,UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  RuntimePanelUtils_CameraTransformWorldToPanel_m9F70DCDF0951A148D2F267EAD0BBEBE798A6083D (RuntimeObject* ___panel0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldPosition1, Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___camera2, const RuntimeMethod* method);
// UnityEngine.Matrix4x4 UnityEngine.Camera::get_worldToCameraMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  Camera_get_worldToCameraMatrix_m7E2B63F64437E2C91C07F7FC819C79BE2152C5F6 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___v0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Matrix4x4::MultiplyVector(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Matrix4x4_MultiplyVector_m88C4BE23EB0B45BB701514AF3E1CA5A857F8212C (Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___vector0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.DynamicAtlas::SetDirty(UnityEngine.Texture2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicAtlas_SetDirty_m8DBF9EB707982B2412C6AA9F622F256A5D958CA5 (DynamicAtlas_t024D0D5DF3B5CCA7D05187B7745B0F6F83662D60 * __this, Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___tex0, const RuntimeMethod* method);
// UnityEngine.UIElements.UIDocument UnityEngine.UIElements.UIDocument::get_parentUI()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UIDocument_t008D811860584F44CEBB5AF575856E6EFCEBECC4 * UIDocument_get_parentUI_mB0FE5256563CDCEA105506D6784230AAE8142088_inline (UIDocument_t008D811860584F44CEBB5AF575856E6EFCEBECC4 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.PanelSettings::DetachUIDocument(UnityEngine.UIElements.UIDocument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanelSettings_DetachUIDocument_m19A58FD8BCB6A59BD33F8591843A3D3D2DD3F0E6 (PanelSettings_tA06886CA55D7F3105153641E0BA56FF15E8DCA69 * __this, UIDocument_t008D811860584F44CEBB5AF575856E6EFCEBECC4 * ___uiDocument0, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.PanelSettings::AttachAndInsertUIDocumentToVisualTree(UnityEngine.UIElements.UIDocument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanelSettings_AttachAndInsertUIDocumentToVisualTree_mB6B7D505B1765940998796D2ACE64FAD83098693 (PanelSettings_tA06886CA55D7F3105153641E0BA56FF15E8DCA69 * __this, UIDocument_t008D811860584F44CEBB5AF575856E6EFCEBECC4 * ___uiDocument0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.UIElements.UIDocument>::GetEnumerator()
inline Enumerator_tA397CC4887AB161D4CE3FBF104F8010A9DFCFE07  List_1_GetEnumerator_m301D9E8B4A430B934D508A5C7055E605EA5B3B50 (List_1_tAB773DE00C0DE14686075955D7FB71ACD6194509 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tA397CC4887AB161D4CE3FBF104F8010A9DFCFE07  (*) (List_1_tAB773DE00C0DE14686075955D7FB71ACD6194509 *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.UIElements.UIDocument>::get_Current()
inline UIDocument_t008D811860584F44CEBB5AF575856E6EFCEBECC4 * Enumerator_get_Current_mE640EE863C1AD4E7A6879F7C8172A3D0FF659024_inline (Enumerator_tA397CC4887AB161D4CE3FBF104F8010A9DFCFE07 * __this, const RuntimeMethod* method)
{
	return ((  UIDocument_t008D811860584F44CEBB5AF575856E6EFCEBECC4 * (*) (Enumerator_tA397CC4887AB161D4CE3FBF104F8010A9DFCFE07 *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// System.Void UnityEngine.UIElements.UIDocument::set_panelSettings(UnityEngine.UIElements.PanelSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIDocument_set_panelSettings_mEEA4B932EDAB68EA92BA421CE6CEDB7E4AAEC4B3 (UIDocument_t008D811860584F44CEBB5AF575856E6EFCEBECC4 * __this, PanelSettings_tA06886CA55D7F3105153641E0BA56FF15E8DCA69 * ___value0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.UIElements.UIDocument>::MoveNext()
inline bool Enumerator_MoveNext_mBDF6727B42AB11D52CE47931EB4F4A17CE10238D (Enumerator_tA397CC4887AB161D4CE3FBF104F8010A9DFCFE07 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tA397CC4887AB161D4CE3FBF104F8010A9DFCFE07 *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.UIElements.UIDocument>::Dispose()
inline void Enumerator_Dispose_m27B05A7331A3E31017AE91D26A2EB7DDE63D7345 (Enumerator_tA397CC4887AB161D4CE3FBF104F8010A9DFCFE07 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tA397CC4887AB161D4CE3FBF104F8010A9DFCFE07 *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// System.Void UnityEngine.UIElements.UIDocument::RecreateUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIDocument_RecreateUI_m5AC90ADD53B4FDD1C46922E03662CA971AD64A6F (UIDocument_t008D811860584F44CEBB5AF575856E6EFCEBECC4 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.UIDocument::AddRootVisualElementToTree()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIDocument_AddRootVisualElementToTree_m153A4C00FE4077CB2963C1306FEAAD2A6CECC67F (UIDocument_t008D811860584F44CEBB5AF575856E6EFCEBECC4 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.UIDocument::SetupFromHierarchy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIDocument_SetupFromHierarchy_m05E77369BA064D6293FCC65C7A15F5EDFB630E3D (UIDocument_t008D811860584F44CEBB5AF575856E6EFCEBECC4 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.UIDocument::RemoveChild(UnityEngine.UIElements.UIDocument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIDocument_RemoveChild_m0EA7C097A72077F3CCEAAEE342BEBD745B789C95 (UIDocument_t008D811860584F44CEBB5AF575856E6EFCEBECC4 * __this, UIDocument_t008D811860584F44CEBB5AF575856E6EFCEBECC4 * ___child0, const RuntimeMethod* method);
// UnityEngine.UIElements.UIDocument UnityEngine.UIElements.UIDocument::FindUIDocumentParent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UIDocument_t008D811860584F44CEBB5AF575856E6EFCEBECC4 * UIDocument_FindUIDocumentParent_mE5879AEE37F2BC3079C66248813BA8B53221335E (UIDocument_t008D811860584F44CEBB5AF575856E6EFCEBECC4 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.UIDocument::set_parentUI(UnityEngine.UIElements.UIDocument)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UIDocument_set_parentUI_m653992C58145B07B94EFCBE69A5F01FAB7DED686_inline (UIDocument_t008D811860584F44CEBB5AF575856E6EFCEBECC4 * __this, UIDocument_t008D811860584F44CEBB5AF575856E6EFCEBECC4 * ___value0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Transform::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// !!0[] UnityEngine.Component::GetComponentsInParent<UnityEngine.UIElements.UIDocument>(System.Boolean)
inline UIDocumentU5BU5D_t07C874E2F207A4181C854213623A407A46E7372B* Component_GetComponentsInParent_TisUIDocument_t008D811860584F44CEBB5AF575856E6EFCEBECC4_mE1D665EAD1815289915F3D1F6F6B951E91315358 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, bool ___includeInactive0, const RuntimeMethod* method)
{
	return ((  UIDocumentU5BU5D_t07C874E2F207A4181C854213623A407A46E7372B* (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, bool, const RuntimeMethod*))Component_GetComponentsInParent_TisRuntimeObject_mB91EB46804A21A46054F97E2BA09DAD452D970E1_gshared)(__this, ___includeInactive0, method);
}
// System.Void UnityEngine.UIElements.VisualElement::RemoveFromHierarchy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualElement_RemoveFromHierarchy_mA54683FC2B4066088CF1D34D7A9A6705A2A6F54A (VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * __this, const RuntimeMethod* method);
// UnityEngine.UIElements.TemplateContainer UnityEngine.UIElements.VisualTreeAsset::Instantiate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TemplateContainer_tA9838A6F8D6003FCB93EFDF932BF2F1AD8D2C4DA * VisualTreeAsset_Instantiate_m62FE5EB940225C66196904B7F07D5C8517455162 (VisualTreeAsset_tF7210F261F2888C05E43C7B01200FBFEA655D5A9 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.TemplateContainer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TemplateContainer__ctor_m1C9CB86EA7265D60A447D81017FD674A61AC31FE (TemplateContainer_tA9838A6F8D6003FCB93EFDF932BF2F1AD8D2C4DA * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.VisualElement::set_pickingMode(UnityEngine.UIElements.PickingMode)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VisualElement_set_pickingMode_m2897BC13E1EF4AF4D15E3CCC9A2404EA5D0E03B4_inline (VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Behaviour::get_isActiveAndEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Behaviour_get_isActiveAndEnabled_mDD843C0271D492C1E08E0F8DEE8B6F1CFA951BFA (Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.UIElements.UIDocument>::.ctor(System.Collections.Generic.IEnumerable`1<!0>)
inline void List_1__ctor_m9EEBC95380D8278BC7E7959E9B314087DB147FCA (List_1_tAB773DE00C0DE14686075955D7FB71ACD6194509 * __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tAB773DE00C0DE14686075955D7FB71ACD6194509 *, RuntimeObject*, const RuntimeMethod*))List_1__ctor_m1D864B65CCD0498EC4BFFBDA8F8D04AE5333195A_gshared)(__this, ___collection0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UIElements.UIDocument>::AddRange(System.Collections.Generic.IEnumerable`1<!0>)
inline void List_1_AddRange_m82A20E629A172A44F1CC662F4F8EDDA523E04799 (List_1_tAB773DE00C0DE14686075955D7FB71ACD6194509 * __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tAB773DE00C0DE14686075955D7FB71ACD6194509 *, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_m6465DEF706EB529B4227F2AF79338419D517EDF9_gshared)(__this, ___collection0, method);
}
// System.Void UnityEngine.UIElements.UIDocument::AddChildAndInsertContentToVisualTree(UnityEngine.UIElements.UIDocument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIDocument_AddChildAndInsertContentToVisualTree_m182A5DA68E569AB179DE10DF077DE95459A8B0A4 (UIDocument_t008D811860584F44CEBB5AF575856E6EFCEBECC4 * __this, UIDocument_t008D811860584F44CEBB5AF575856E6EFCEBECC4 * ___child0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.UIElements.UIDocument>::Clear()
inline void List_1_Clear_mBF8AA31F6AC6772502C89F036F15FDF85F89AB02 (List_1_tAB773DE00C0DE14686075955D7FB71ACD6194509 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tAB773DE00C0DE14686075955D7FB71ACD6194509 *, const RuntimeMethod*))List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_gshared)(__this, method);
}
// System.Void UnityEngine.UIElements.UIDocument::SetupRootClassList()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIDocument_SetupRootClassList_m686A82F46A941121584DC616160990FF50D4CA74 (UIDocument_t008D811860584F44CEBB5AF575856E6EFCEBECC4 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.VisualElement::EnableInClassList(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualElement_EnableInClassList_mA8F2B57088A3B99A8D8A51140A4648A8CBDD1255 (VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * __this, String_t* ___className0, bool ___enable1, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.UIDocument::ReactToHierarchyChanged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIDocument_ReactToHierarchyChanged_m964206B6FB5D4C8BAEE941EF4F9BFE2B9DC233C5 (UIDocument_t008D811860584F44CEBB5AF575856E6EFCEBECC4 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.UIElements.UIDocumentHierarchicalIndex::CompareTo(UnityEngine.UIElements.UIDocumentHierarchicalIndex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UIDocumentHierarchicalIndex_CompareTo_m07BAF052F339427FA5130D2DD34E22002E83802A (UIDocumentHierarchicalIndex_t0612634E1FBC3EC410363E02999C10F635037FC3 * __this, UIDocumentHierarchicalIndex_t0612634E1FBC3EC410363E02999C10F635037FC3  ___other0, const RuntimeMethod* method);
// System.Void System.Text.StringBuilder::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m9305A36F9CF53EDD80D132428999934C68904C77 (StringBuilder_t * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_m796285D173EEA5261E85B95FC79DD4F996CC93DD (StringBuilder_t * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1 (StringBuilder_t * __this, String_t* ___value0, const RuntimeMethod* method);
// System.String UnityEngine.UIElements.UIDocumentHierarchicalIndex::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UIDocumentHierarchicalIndex_ToString_mA96C3A4D6222B20B4DF140632FD527D5571CAC1F (UIDocumentHierarchicalIndex_t0612634E1FBC3EC410363E02999C10F635037FC3 * __this, const RuntimeMethod* method);
// System.Collections.Generic.SortedDictionary`2/ValueCollection<!0,!1> System.Collections.Generic.SortedDictionary`2<UnityEngine.UIElements.UIDocumentHierarchicalIndex,UnityEngine.UIElements.UIDocument>::get_Values()
inline ValueCollection_t4350A1F9A865F1082C3579EA46CDE57E4827D2D0 * SortedDictionary_2_get_Values_m279548414E7A8F50A7AD40FBB6C1DE584B70038F (SortedDictionary_2_tD6FDE7062F18D6B2948C91C6E3E4B6AB7018E0BB * __this, const RuntimeMethod* method)
{
	return ((  ValueCollection_t4350A1F9A865F1082C3579EA46CDE57E4827D2D0 * (*) (SortedDictionary_2_tD6FDE7062F18D6B2948C91C6E3E4B6AB7018E0BB *, const RuntimeMethod*))SortedDictionary_2_get_Values_mCCF1CC039F340A889616B82842BBE22F96B6A62D_gshared)(__this, method);
}
// System.Collections.Generic.SortedDictionary`2/ValueCollection/Enumerator<!0,!1> System.Collections.Generic.SortedDictionary`2/ValueCollection<UnityEngine.UIElements.UIDocumentHierarchicalIndex,UnityEngine.UIElements.UIDocument>::GetEnumerator()
inline Enumerator_tDDF94DCA5EBC2A0CDBBB3D0A51D59499A00CB568  ValueCollection_GetEnumerator_mDFCF542E546DC04C52667586BFE53E5FBE64D909 (ValueCollection_t4350A1F9A865F1082C3579EA46CDE57E4827D2D0 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tDDF94DCA5EBC2A0CDBBB3D0A51D59499A00CB568  (*) (ValueCollection_t4350A1F9A865F1082C3579EA46CDE57E4827D2D0 *, const RuntimeMethod*))ValueCollection_GetEnumerator_mEBBB5A34566193DD9E5E4CCDC91CCB6AA8D1721D_gshared)(__this, method);
}
// !1 System.Collections.Generic.SortedDictionary`2/ValueCollection/Enumerator<UnityEngine.UIElements.UIDocumentHierarchicalIndex,UnityEngine.UIElements.UIDocument>::get_Current()
inline UIDocument_t008D811860584F44CEBB5AF575856E6EFCEBECC4 * Enumerator_get_Current_m99A2AC07EE601CFEC0FD97B320A0D7C881C8756B (Enumerator_tDDF94DCA5EBC2A0CDBBB3D0A51D59499A00CB568 * __this, const RuntimeMethod* method)
{
	return ((  UIDocument_t008D811860584F44CEBB5AF575856E6EFCEBECC4 * (*) (Enumerator_tDDF94DCA5EBC2A0CDBBB3D0A51D59499A00CB568 *, const RuntimeMethod*))Enumerator_get_Current_m24F355EA2F732E42ED693FB4C4B0B4C07E2D05D3_gshared)(__this, method);
}
// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.UIDocument::get_rootVisualElement()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * UIDocument_get_rootVisualElement_m0BE2D8FAA3533A8DBEB2FDADD2F98FDE257F7D76_inline (UIDocument_t008D811860584F44CEBB5AF575856E6EFCEBECC4 * __this, const RuntimeMethod* method);
// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.VisualElement::get_parent()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * VisualElement_get_parent_m7FFF8FAC199A08AD6823836D7A784A45CC36CE17_inline (VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.SortedDictionary`2/ValueCollection/Enumerator<UnityEngine.UIElements.UIDocumentHierarchicalIndex,UnityEngine.UIElements.UIDocument>::MoveNext()
inline bool Enumerator_MoveNext_mAA7E17AE272D3F9A8750CCD6A77A1BC9BBB0AE3C (Enumerator_tDDF94DCA5EBC2A0CDBBB3D0A51D59499A00CB568 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tDDF94DCA5EBC2A0CDBBB3D0A51D59499A00CB568 *, const RuntimeMethod*))Enumerator_MoveNext_mBBE57967B523BDD6BD48ADE40C53203037777242_gshared)(__this, method);
}
// System.Void System.Collections.Generic.SortedDictionary`2/ValueCollection/Enumerator<UnityEngine.UIElements.UIDocumentHierarchicalIndex,UnityEngine.UIElements.UIDocument>::Dispose()
inline void Enumerator_Dispose_m77A2C5259BC7AB16D78F6A2C6016EF4A282DF2CD (Enumerator_tDDF94DCA5EBC2A0CDBBB3D0A51D59499A00CB568 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tDDF94DCA5EBC2A0CDBBB3D0A51D59499A00CB568 *, const RuntimeMethod*))Enumerator_Dispose_mB1EB29B788A0C9DE013C4CA43C2D02D5777D9DA3_gshared)(__this, method);
}
// System.Int32 UnityEngine.Transform::GetSiblingIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Transform_GetSiblingIndex_mEF9DF6406920F8EBCFBC87C6D0630FE3E9E3C1EE (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
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
// System.Void System.Collections.Generic.List`1<System.Int32>::Reverse()
inline void List_1_Reverse_m37775958EAD7F2378791BFB588459532DA7459ED (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *, const RuntimeMethod*))List_1_Reverse_m37775958EAD7F2378791BFB588459532DA7459ED_gshared)(__this, method);
}
// !0[] System.Collections.Generic.List`1<System.Int32>::ToArray()
inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* List_1_ToArray_mDEFFC768D9AAD376D27FC0FC1F7B57EE2E93479F (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, const RuntimeMethod* method)
{
	return ((  Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* (*) (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *, const RuntimeMethod*))List_1_ToArray_mDEFFC768D9AAD376D27FC0FC1F7B57EE2E93479F_gshared)(__this, method);
}
// System.Void UnityEngine.UIElements.UIDocumentHierarchicalIndexComparer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIDocumentHierarchicalIndexComparer__ctor_mE8E06F78AD970F65E7FA2078E10C9DB376E08BB0 (UIDocumentHierarchicalIndexComparer_tE2E3032A6EA8A682C7EED7A3D2A85D3627F25928 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIElements.UIDocument>::Remove(!0)
inline bool List_1_Remove_mE74BBD3C7F21D2E5560E4EA3BD33AD4DF89BFBDB (List_1_tAB773DE00C0DE14686075955D7FB71ACD6194509 * __this, UIDocument_t008D811860584F44CEBB5AF575856E6EFCEBECC4 * ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tAB773DE00C0DE14686075955D7FB71ACD6194509 *, UIDocument_t008D811860584F44CEBB5AF575856E6EFCEBECC4 *, const RuntimeMethod*))List_1_Remove_m753F7B4281CC4D02C07AE90726F51EF34B588DF7_gshared)(__this, ___item0, method);
}
// System.Single UnityEngine.UIElements.UIDocument::get_sortingOrder()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float UIDocument_get_sortingOrder_mFB0A6D9948BA436BFE9AE3D250E094F07FD14DE0_inline (UIDocument_t008D811860584F44CEBB5AF575856E6EFCEBECC4 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.UIElements.UIDocument>::Insert(System.Int32,!0)
inline void List_1_Insert_m742EF6D9F0BC42614F983C7E1F6690E5698A17A3 (List_1_tAB773DE00C0DE14686075955D7FB71ACD6194509 * __this, int32_t ___index0, UIDocument_t008D811860584F44CEBB5AF575856E6EFCEBECC4 * ___item1, const RuntimeMethod* method)
{
	((  void (*) (List_1_tAB773DE00C0DE14686075955D7FB71ACD6194509 *, int32_t, UIDocument_t008D811860584F44CEBB5AF575856E6EFCEBECC4 *, const RuntimeMethod*))List_1_Insert_mFC500A19C486C8ED4E9F3BDBA9B079602D647741_gshared)(__this, ___index0, ___item1, method);
}
// !0 System.Collections.Generic.List`1<UnityEngine.UIElements.UIDocument>::get_Item(System.Int32)
inline UIDocument_t008D811860584F44CEBB5AF575856E6EFCEBECC4 * List_1_get_Item_m9E9C3E57AC2ECB01351EE8C0FB88DA8919CF98F7_inline (List_1_tAB773DE00C0DE14686075955D7FB71ACD6194509 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  UIDocument_t008D811860584F44CEBB5AF575856E6EFCEBECC4 * (*) (List_1_tAB773DE00C0DE14686075955D7FB71ACD6194509 *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// System.Int32 UnityEngine.UIElements.VisualElement::IndexOf(UnityEngine.UIElements.VisualElement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VisualElement_IndexOf_m1B02930EEC35A7164BB999B7B1E6EEA41E7AAE47 (VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * __this, VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * ___element0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.UIElements.UIDocument>::Add(!0)
inline void List_1_Add_m969E90236937A5E99BDF4CF9E995CAA0193C38E9 (List_1_tAB773DE00C0DE14686075955D7FB71ACD6194509 * __this, UIDocument_t008D811860584F44CEBB5AF575856E6EFCEBECC4 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tAB773DE00C0DE14686075955D7FB71ACD6194509 *, UIDocument_t008D811860584F44CEBB5AF575856E6EFCEBECC4 *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Void UnityEngine.UIElements.VisualElement::Insert(System.Int32,UnityEngine.UIElements.VisualElement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualElement_Insert_m6B910E3F8CC867302F50325F14B0DD816A176C19 (VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * __this, int32_t ___index0, VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * ___element1, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.VisualElement::Add(UnityEngine.UIElements.VisualElement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualElement_Add_m4BE5AD69E7A3404285C9BCF755149C1951D70C11 (VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * __this, VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * ___child0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.UIElements.UIDocument>::.ctor()
inline void List_1__ctor_mB8A598685BD0AE92EC90E211CDCC5C6D7F1554A3 (List_1_tAB773DE00C0DE14686075955D7FB71ACD6194509 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tAB773DE00C0DE14686075955D7FB71ACD6194509 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void UnityEngine.UIElements.FocusChangeDirection::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FocusChangeDirection__ctor_m651A63A6CFE800C3A0B0D5860F121C599E4CBE48 (FocusChangeDirection_t7E59BE4DF7F0B4024128F306581D21C2C5E02CF1 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.UIElements.NavigateFocusRing::IsActive(UnityEngine.UIElements.VisualElement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NavigateFocusRing_IsActive_m9F034697B026C01735A19F0A83BA97F9A5EC3605 (VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * ___v0, const RuntimeMethod* method);
// UnityEngine.Rect UnityEngine.UIElements.VisualElement::get_worldBoundingBox()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  VisualElement_get_worldBoundingBox_mBDDF279164FD78BA18C80EABE1B982C63F5DAC91 (VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Rect::Overlaps(UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Rect_Overlaps_mFF91B379E163CE421F334C99C9F3E5A7D3C1591F (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___other0, const RuntimeMethod* method);
// System.Boolean UnityEngine.UIElements.NavigateFocusRing/FocusableHierarchyTraversal::ValidateHierarchyTraversal(UnityEngine.UIElements.VisualElement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FocusableHierarchyTraversal_ValidateHierarchyTraversal_mAEC9196D5A7F1D2E277DE2F0DCFCE8DDA8A85263 (FocusableHierarchyTraversal_t6D47905FA29D442881D3D9C243EA93E74712D48E * __this, VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * ___v0, const RuntimeMethod* method);
// System.Boolean UnityEngine.UIElements.NavigateFocusRing/FocusableHierarchyTraversal::ValidateElement(UnityEngine.UIElements.VisualElement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FocusableHierarchyTraversal_ValidateElement_mAA5F8BA9850308FBA591F1CD54821A60A17CFD72 (FocusableHierarchyTraversal_t6D47905FA29D442881D3D9C243EA93E74712D48E * __this, VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * ___v0, const RuntimeMethod* method);
// System.Single UnityEngine.Rect::get_yMax()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_yMax_m9685BF55B44C51FF9BA080F9995073E458E1CDC3 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Rect::get_yMin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_yMin_m2C91041817D410B32B80E338764109D75ACB01E4 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Rect::get_xMax()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_xMax_m174FFAACE6F19A59AA793B3D507BE70116E27DE5 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Rect::get_xMin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_xMin_m02EA330BE4C4A07A3F18F50F257832E9E3C2B873 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Mathf::Approximately(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Mathf_Approximately_mC2A3F657E3FD0CCAD4A4936CEE2F67D624A2AA55 (float ___a0, float ___b1, const RuntimeMethod* method);
// System.Int32 UnityEngine.UIElements.NavigateFocusRing/FocusableHierarchyTraversal::Order(UnityEngine.UIElements.VisualElement,UnityEngine.UIElements.VisualElement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FocusableHierarchyTraversal_Order_mC00D270C642AAB636AF159CD218784E118641BA7 (FocusableHierarchyTraversal_t6D47905FA29D442881D3D9C243EA93E74712D48E * __this, VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * ___a0, VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 UnityEngine.UIElements.DynamicAtlasSettings::get_minAtlasSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DynamicAtlasSettings_get_minAtlasSize_m24F98ABD5894FBAAAB723B64561FEA4BE7700E15 (DynamicAtlasSettings_t851C8E0D9506CB6B36AE277F8FCE439C89097806 * __this, const RuntimeMethod* method)
{
	{
		// public int minAtlasSize { get => m_MinAtlasSize; set => m_MinAtlasSize = value; }
		int32_t L_0 = __this->get_m_MinAtlasSize_0();
		return L_0;
	}
}
// System.Void UnityEngine.UIElements.DynamicAtlasSettings::set_minAtlasSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicAtlasSettings_set_minAtlasSize_m21E6D78365166005A94BFD62C109CEDBD73093EE (DynamicAtlasSettings_t851C8E0D9506CB6B36AE277F8FCE439C89097806 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int minAtlasSize { get => m_MinAtlasSize; set => m_MinAtlasSize = value; }
		int32_t L_0 = ___value0;
		__this->set_m_MinAtlasSize_0(L_0);
		return;
	}
}
// System.Int32 UnityEngine.UIElements.DynamicAtlasSettings::get_maxAtlasSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DynamicAtlasSettings_get_maxAtlasSize_m639A855206F205B7761DECD9846A333005FA2B43 (DynamicAtlasSettings_t851C8E0D9506CB6B36AE277F8FCE439C89097806 * __this, const RuntimeMethod* method)
{
	{
		// public int maxAtlasSize { get => m_MaxAtlasSize; set => m_MaxAtlasSize = value; }
		int32_t L_0 = __this->get_m_MaxAtlasSize_1();
		return L_0;
	}
}
// System.Void UnityEngine.UIElements.DynamicAtlasSettings::set_maxAtlasSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicAtlasSettings_set_maxAtlasSize_mF29A5685C1CBEE1E844621B0207A7A26CACAC0A2 (DynamicAtlasSettings_t851C8E0D9506CB6B36AE277F8FCE439C89097806 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int maxAtlasSize { get => m_MaxAtlasSize; set => m_MaxAtlasSize = value; }
		int32_t L_0 = ___value0;
		__this->set_m_MaxAtlasSize_1(L_0);
		return;
	}
}
// System.Int32 UnityEngine.UIElements.DynamicAtlasSettings::get_maxSubTextureSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DynamicAtlasSettings_get_maxSubTextureSize_m084EADB926BF0EB4B2848F347A9DEB48FF491870 (DynamicAtlasSettings_t851C8E0D9506CB6B36AE277F8FCE439C89097806 * __this, const RuntimeMethod* method)
{
	{
		// public int maxSubTextureSize { get => m_MaxSubTextureSize; set => m_MaxSubTextureSize = value; }
		int32_t L_0 = __this->get_m_MaxSubTextureSize_2();
		return L_0;
	}
}
// System.Void UnityEngine.UIElements.DynamicAtlasSettings::set_maxSubTextureSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicAtlasSettings_set_maxSubTextureSize_mF749ACCD86B492733F714D0EB2DECFFBBE796854 (DynamicAtlasSettings_t851C8E0D9506CB6B36AE277F8FCE439C89097806 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int maxSubTextureSize { get => m_MaxSubTextureSize; set => m_MaxSubTextureSize = value; }
		int32_t L_0 = ___value0;
		__this->set_m_MaxSubTextureSize_2(L_0);
		return;
	}
}
// UnityEngine.UIElements.DynamicAtlasFilters UnityEngine.UIElements.DynamicAtlasSettings::get_activeFilters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DynamicAtlasSettings_get_activeFilters_m829EA1AD6874C1E0F9724893668696314F884858 (DynamicAtlasSettings_t851C8E0D9506CB6B36AE277F8FCE439C89097806 * __this, const RuntimeMethod* method)
{
	{
		// public DynamicAtlasFilters activeFilters { get => (DynamicAtlasFilters)m_ActiveFilters; set => m_ActiveFilters = (DynamicAtlasFiltersInternal)value; }
		int32_t L_0 = __this->get_m_ActiveFilters_3();
		return (int32_t)(L_0);
	}
}
// System.Void UnityEngine.UIElements.DynamicAtlasSettings::set_activeFilters(UnityEngine.UIElements.DynamicAtlasFilters)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicAtlasSettings_set_activeFilters_m7740CA3037BC7E80AAE906AE92CC98E0F97D7317 (DynamicAtlasSettings_t851C8E0D9506CB6B36AE277F8FCE439C89097806 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public DynamicAtlasFilters activeFilters { get => (DynamicAtlasFilters)m_ActiveFilters; set => m_ActiveFilters = (DynamicAtlasFiltersInternal)value; }
		int32_t L_0 = ___value0;
		__this->set_m_ActiveFilters_3(L_0);
		return;
	}
}
// UnityEngine.UIElements.DynamicAtlasFilters UnityEngine.UIElements.DynamicAtlasSettings::get_defaultFilters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DynamicAtlasSettings_get_defaultFilters_m6F612BF4A68410700D95A91D7D1960F1AE481BE7 (const RuntimeMethod* method)
{
	{
		// public static DynamicAtlasFilters defaultFilters => DynamicAtlas.defaultFilters;
		int32_t L_0;
		L_0 = DynamicAtlas_get_defaultFilters_m49CC3E5B145414B37D1A3F565D1086BB7B9D88E9(/*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.UIElements.DynamicAtlasCustomFilter UnityEngine.UIElements.DynamicAtlasSettings::get_customFilter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DynamicAtlasCustomFilter_tCC685CA75B6C1A4A973B7401B0C37E35352476AA * DynamicAtlasSettings_get_customFilter_mF58AC5554D9AC7E94557D38AC7AC3C3FB31605D8 (DynamicAtlasSettings_t851C8E0D9506CB6B36AE277F8FCE439C89097806 * __this, const RuntimeMethod* method)
{
	{
		// public DynamicAtlasCustomFilter customFilter { get => m_CustomFilter; set => m_CustomFilter = value; }
		DynamicAtlasCustomFilter_tCC685CA75B6C1A4A973B7401B0C37E35352476AA * L_0 = __this->get_m_CustomFilter_4();
		return L_0;
	}
}
// System.Void UnityEngine.UIElements.DynamicAtlasSettings::set_customFilter(UnityEngine.UIElements.DynamicAtlasCustomFilter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicAtlasSettings_set_customFilter_m03BC4D87D27DDB66D6C526F26C3F1633E29ABBCC (DynamicAtlasSettings_t851C8E0D9506CB6B36AE277F8FCE439C89097806 * __this, DynamicAtlasCustomFilter_tCC685CA75B6C1A4A973B7401B0C37E35352476AA * ___value0, const RuntimeMethod* method)
{
	{
		// public DynamicAtlasCustomFilter customFilter { get => m_CustomFilter; set => m_CustomFilter = value; }
		DynamicAtlasCustomFilter_tCC685CA75B6C1A4A973B7401B0C37E35352476AA * L_0 = ___value0;
		__this->set_m_CustomFilter_4(L_0);
		return;
	}
}
// UnityEngine.UIElements.DynamicAtlasSettings UnityEngine.UIElements.DynamicAtlasSettings::get_defaults()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DynamicAtlasSettings_t851C8E0D9506CB6B36AE277F8FCE439C89097806 * DynamicAtlasSettings_get_defaults_m66394E6E9FA2856F33282B0B655468F423381FE7 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DynamicAtlasSettings_t851C8E0D9506CB6B36AE277F8FCE439C89097806_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//     new DynamicAtlasSettings
		// {
		//     minAtlasSize = 64,
		//     maxAtlasSize = 4096,
		//     maxSubTextureSize = 64,
		//     activeFilters = defaultFilters,
		//     customFilter = null
		// };
		DynamicAtlasSettings_t851C8E0D9506CB6B36AE277F8FCE439C89097806 * L_0 = (DynamicAtlasSettings_t851C8E0D9506CB6B36AE277F8FCE439C89097806 *)il2cpp_codegen_object_new(DynamicAtlasSettings_t851C8E0D9506CB6B36AE277F8FCE439C89097806_il2cpp_TypeInfo_var);
		DynamicAtlasSettings__ctor_mBA1C3A73E1CEA427DB5E7EFB43B37B9ADB131F8B(L_0, /*hidden argument*/NULL);
		DynamicAtlasSettings_t851C8E0D9506CB6B36AE277F8FCE439C89097806 * L_1 = L_0;
		NullCheck(L_1);
		DynamicAtlasSettings_set_minAtlasSize_m21E6D78365166005A94BFD62C109CEDBD73093EE_inline(L_1, ((int32_t)64), /*hidden argument*/NULL);
		DynamicAtlasSettings_t851C8E0D9506CB6B36AE277F8FCE439C89097806 * L_2 = L_1;
		NullCheck(L_2);
		DynamicAtlasSettings_set_maxAtlasSize_mF29A5685C1CBEE1E844621B0207A7A26CACAC0A2_inline(L_2, ((int32_t)4096), /*hidden argument*/NULL);
		DynamicAtlasSettings_t851C8E0D9506CB6B36AE277F8FCE439C89097806 * L_3 = L_2;
		NullCheck(L_3);
		DynamicAtlasSettings_set_maxSubTextureSize_mF749ACCD86B492733F714D0EB2DECFFBBE796854_inline(L_3, ((int32_t)64), /*hidden argument*/NULL);
		DynamicAtlasSettings_t851C8E0D9506CB6B36AE277F8FCE439C89097806 * L_4 = L_3;
		int32_t L_5;
		L_5 = DynamicAtlasSettings_get_defaultFilters_m6F612BF4A68410700D95A91D7D1960F1AE481BE7(/*hidden argument*/NULL);
		NullCheck(L_4);
		DynamicAtlasSettings_set_activeFilters_m7740CA3037BC7E80AAE906AE92CC98E0F97D7317_inline(L_4, L_5, /*hidden argument*/NULL);
		DynamicAtlasSettings_t851C8E0D9506CB6B36AE277F8FCE439C89097806 * L_6 = L_4;
		NullCheck(L_6);
		DynamicAtlasSettings_set_customFilter_m03BC4D87D27DDB66D6C526F26C3F1633E29ABBCC_inline(L_6, (DynamicAtlasCustomFilter_tCC685CA75B6C1A4A973B7401B0C37E35352476AA *)NULL, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.Void UnityEngine.UIElements.DynamicAtlasSettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicAtlasSettings__ctor_mBA1C3A73E1CEA427DB5E7EFB43B37B9ADB131F8B (DynamicAtlasSettings_t851C8E0D9506CB6B36AE277F8FCE439C89097806 * __this, const RuntimeMethod* method)
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
// System.String UnityEngine.UIElements.InputWrapper::get_compositionString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* InputWrapper_get_compositionString_m17480921AA15AEBE56DCC5EDA4E0F752D7935518 (InputWrapper_t15D6015F150082A97E9AFE42FC9D74C62C568C85 * __this, const RuntimeMethod* method)
{
	{
		// get { return Input.compositionString; }
		String_t* L_0;
		L_0 = Input_get_compositionString_mF957B324E35155878D307CE2AEE0AACC9BEC25BD(/*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.IMECompositionMode UnityEngine.UIElements.InputWrapper::get_imeCompositionMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InputWrapper_get_imeCompositionMode_m29196CE24DA4D5F70CE66227CC3675B13C42C031 (InputWrapper_t15D6015F150082A97E9AFE42FC9D74C62C568C85 * __this, const RuntimeMethod* method)
{
	{
		// get { return Input.imeCompositionMode; }
		int32_t L_0;
		L_0 = Input_get_imeCompositionMode_m04AD6A8C7FEE55E7C4F70885DB5AF222E9F904E5(/*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void UnityEngine.UIElements.InputWrapper::set_imeCompositionMode(UnityEngine.IMECompositionMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputWrapper_set_imeCompositionMode_m5503242DDFF49A93621F52E5263928D9F6CA3D62 (InputWrapper_t15D6015F150082A97E9AFE42FC9D74C62C568C85 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// set { Input.imeCompositionMode = value; }
		int32_t L_0 = ___value0;
		Input_set_imeCompositionMode_m7D4AA771F1F616FE74A97CA186C4B55EF268E112(L_0, /*hidden argument*/NULL);
		// set { Input.imeCompositionMode = value; }
		return;
	}
}
// UnityEngine.Vector2 UnityEngine.UIElements.InputWrapper::get_compositionCursorPos()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  InputWrapper_get_compositionCursorPos_m23274969466EDC54B1B2EF7ADD70B2A982C7E577 (InputWrapper_t15D6015F150082A97E9AFE42FC9D74C62C568C85 * __this, const RuntimeMethod* method)
{
	{
		// get { return Input.compositionCursorPos; }
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0;
		L_0 = Input_get_compositionCursorPos_m70946478FB2B607BC3BC5EC1280AA217323518B3(/*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void UnityEngine.UIElements.InputWrapper::set_compositionCursorPos(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputWrapper_set_compositionCursorPos_m55E0B412108C52CACD7CF230839EE232453CF421 (InputWrapper_t15D6015F150082A97E9AFE42FC9D74C62C568C85 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value0, const RuntimeMethod* method)
{
	{
		// set { Input.compositionCursorPos = value; }
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___value0;
		Input_set_compositionCursorPos_mA2A9D63F782E3C75F065F031C67C2A1363D47D9C(L_0, /*hidden argument*/NULL);
		// set { Input.compositionCursorPos = value; }
		return;
	}
}
// System.Boolean UnityEngine.UIElements.InputWrapper::get_mousePresent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputWrapper_get_mousePresent_m05CC1EBEF287B4B490E513B292EEEDEE21E3A078 (InputWrapper_t15D6015F150082A97E9AFE42FC9D74C62C568C85 * __this, const RuntimeMethod* method)
{
	{
		// get { return Input.mousePresent; }
		bool L_0;
		L_0 = Input_get_mousePresent_mBCACCE1C97E146FF46C7AE7FFE693F7BAB4E4FE5(/*hidden argument*/NULL);
		return L_0;
	}
}
// System.Boolean UnityEngine.UIElements.InputWrapper::GetMouseButtonDown(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputWrapper_GetMouseButtonDown_m646FF0A106BB5C6ADF0AF2520C3561D8C3700C4D (InputWrapper_t15D6015F150082A97E9AFE42FC9D74C62C568C85 * __this, int32_t ___button0, const RuntimeMethod* method)
{
	{
		// return Input.GetMouseButtonDown(button);
		int32_t L_0 = ___button0;
		bool L_1;
		L_1 = Input_GetMouseButtonDown_m466D81FDCC87C9CB07557B39DCB435EB691F1EF3(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean UnityEngine.UIElements.InputWrapper::GetMouseButtonUp(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputWrapper_GetMouseButtonUp_m0D19D8FC28050E6D53C73DFBA0C50420FF157D2D (InputWrapper_t15D6015F150082A97E9AFE42FC9D74C62C568C85 * __this, int32_t ___button0, const RuntimeMethod* method)
{
	{
		// return Input.GetMouseButtonUp(button);
		int32_t L_0 = ___button0;
		bool L_1;
		L_1 = Input_GetMouseButtonUp_m2BA562F8C4FE8364EEC93970093E776371DF4022(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean UnityEngine.UIElements.InputWrapper::GetMouseButton(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputWrapper_GetMouseButton_m60DF47C1DAE4BB34ABC290ABCE20C3951BF7DCDC (InputWrapper_t15D6015F150082A97E9AFE42FC9D74C62C568C85 * __this, int32_t ___button0, const RuntimeMethod* method)
{
	{
		// return Input.GetMouseButton(button);
		int32_t L_0 = ___button0;
		bool L_1;
		L_1 = Input_GetMouseButton_m27BF2DDBF38A38787B83A13D3E6F0F88F7C834C1(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// UnityEngine.Vector2 UnityEngine.UIElements.InputWrapper::get_mousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  InputWrapper_get_mousePosition_mA3823D1ABF97BBBBA17DF7A51DC3089440CFC413 (InputWrapper_t15D6015F150082A97E9AFE42FC9D74C62C568C85 * __this, const RuntimeMethod* method)
{
	{
		// get { return Input.mousePosition; }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		L_0 = Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E(/*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1;
		L_1 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// UnityEngine.Vector2 UnityEngine.UIElements.InputWrapper::get_mouseScrollDelta()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  InputWrapper_get_mouseScrollDelta_m45AFAC995E395F528DBE5E47A68B8396DFEC72A8 (InputWrapper_t15D6015F150082A97E9AFE42FC9D74C62C568C85 * __this, const RuntimeMethod* method)
{
	{
		// get { return Input.mouseScrollDelta; }
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0;
		L_0 = Input_get_mouseScrollDelta_m018B3C74FC710A166684FC8391CAC93D8EC0ADB7(/*hidden argument*/NULL);
		return L_0;
	}
}
// System.Boolean UnityEngine.UIElements.InputWrapper::get_touchSupported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputWrapper_get_touchSupported_mD434D8B6020A704EA07F471813F5E68A5F352AB8 (InputWrapper_t15D6015F150082A97E9AFE42FC9D74C62C568C85 * __this, const RuntimeMethod* method)
{
	{
		// get { return Input.touchSupported; }
		bool L_0;
		L_0 = Input_get_touchSupported_mE5B2F5199B4CC16D89AD2C3125B5CB38F4B4867B(/*hidden argument*/NULL);
		return L_0;
	}
}
// System.Int32 UnityEngine.UIElements.InputWrapper::get_touchCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InputWrapper_get_touchCount_m929C0B60BAF64DFE907D52A8970824668601D475 (InputWrapper_t15D6015F150082A97E9AFE42FC9D74C62C568C85 * __this, const RuntimeMethod* method)
{
	{
		// get { return Input.touchCount; }
		int32_t L_0;
		L_0 = Input_get_touchCount_mE1A06AB1973E3456AE398B3CC5105F27CC7335D6(/*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Touch UnityEngine.UIElements.InputWrapper::GetTouch(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  InputWrapper_GetTouch_mD0EF265F366868FF3275FCCA86607D1E2F52295F (InputWrapper_t15D6015F150082A97E9AFE42FC9D74C62C568C85 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		// return Input.GetTouch(index);
		int32_t L_0 = ___index0;
		Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  L_1;
		L_1 = Input_GetTouch_m6A2A31482B1A7D018C3AAC188C02F5D14500C81F(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Single UnityEngine.UIElements.InputWrapper::GetAxisRaw(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float InputWrapper_GetAxisRaw_m69CF070C671D0CF3E3CD5F7C62D754BDC50D2048 (InputWrapper_t15D6015F150082A97E9AFE42FC9D74C62C568C85 * __this, String_t* ___axisName0, const RuntimeMethod* method)
{
	{
		// return Input.GetAxisRaw(axisName);
		String_t* L_0 = ___axisName0;
		float L_1;
		L_1 = Input_GetAxisRaw_mC07AC23FD8D04A69CDB07C6399C93FFFAEB0FC5B(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean UnityEngine.UIElements.InputWrapper::GetButtonDown(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputWrapper_GetButtonDown_m726D7E0A9EE71F76DF49AAC690EB661153FBF9E1 (InputWrapper_t15D6015F150082A97E9AFE42FC9D74C62C568C85 * __this, String_t* ___buttonName0, const RuntimeMethod* method)
{
	{
		// return Input.GetButtonDown(buttonName);
		String_t* L_0 = ___buttonName0;
		bool L_1;
		L_1 = Input_GetButtonDown_m2001112EBCA3D5C7B0344EF62C896667F7E67DDF(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void UnityEngine.UIElements.InputWrapper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputWrapper__ctor_m7270A316FC1DFF7F1AC135B340E609EAC83C63DE (InputWrapper_t15D6015F150082A97E9AFE42FC9D74C62C568C85 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void UnityEngine.UIElements.NavigateFocusRing::.ctor(UnityEngine.UIElements.VisualElement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavigateFocusRing__ctor_mAF0AAE834DA4F0195D4A5F296CCFA0FF67764E0B (NavigateFocusRing_t44CF1D05515ADB539414B52A64A7602739E6B826 * __this, VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * ___root0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VisualElementFocusRing_t9D8C7E1CD5CAD2B6220414541CB498B5FAB4946B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public NavigateFocusRing(VisualElement root)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// m_Root = root;
		VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * L_0 = ___root0;
		__this->set_m_Root_6(L_0);
		// m_Ring = new VisualElementFocusRing(root);
		VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * L_1 = ___root0;
		VisualElementFocusRing_t9D8C7E1CD5CAD2B6220414541CB498B5FAB4946B * L_2 = (VisualElementFocusRing_t9D8C7E1CD5CAD2B6220414541CB498B5FAB4946B *)il2cpp_codegen_object_new(VisualElementFocusRing_t9D8C7E1CD5CAD2B6220414541CB498B5FAB4946B_il2cpp_TypeInfo_var);
		VisualElementFocusRing__ctor_mD09EE2D55EBA691A6F5A6A756FD7B18AF0E4D4CC(L_2, L_1, 0, /*hidden argument*/NULL);
		__this->set_m_Ring_7(L_2);
		// }
		return;
	}
}
// UnityEngine.UIElements.FocusChangeDirection UnityEngine.UIElements.NavigateFocusRing::GetFocusChangeDirection(UnityEngine.UIElements.Focusable,UnityEngine.UIElements.EventBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FocusChangeDirection_t7E59BE4DF7F0B4024128F306581D21C2C5E02CF1 * NavigateFocusRing_GetFocusChangeDirection_m1B5707E30751B43065379BBDB14AC1975E943E2F (NavigateFocusRing_t44CF1D05515ADB539414B52A64A7602739E6B826 * __this, Focusable_tF2E839AB6DBE413F04FC62347D7074D7377FD1E1 * ___currentFocusable0, EventBase_tA1333DE2FD77BE5E6B06CFDC825252E0CCF00698 * ___e1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventBase_1_TypeId_mB167B9ECACCBAA359CD4FD47EB2FBE2D8FD925BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventBase_1_TypeId_mB5697953131C722ED7EDC58AA9B32201EFA59562_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventBase_1_TypeId_mC91C0B8412E545DFDE7E320C54E7DA79622BEF7A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventBase_1_t5F2BBA518F7956A01DD2DAA3C80709A1904FF828_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventBase_1_tA50D96483E133B256F4EA87D789753E52559FFB5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventBase_1_tD5A5D4FABAF3A32C1E67D577C42C2B02858ABC13_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FocusChangeDirection_t7E59BE4DF7F0B4024128F306581D21C2C5E02CF1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Focusable_tF2E839AB6DBE413F04FC62347D7074D7377FD1E1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyDownEvent_t87D460D7272EEC24CA83B1A07CAC2998CFCF0BAD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyboardEventBase_1_get_character_m57DE81FFE9FD1B11F2D60C58C1D50919BD145778_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyboardEventBase_1_get_shiftKey_m1B4F3E9879A0AC60E712C6EA422C8790FEFFB863_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NavigateFocusRing_t44CF1D05515ADB539414B52A64A7602739E6B826_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NavigationMoveEvent_t763AB890A80C1029C653DCEE3FBC522E60A62634_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VisualElementFocusChangeTarget_t168347905990062A6F59D1111069713C3D3F98EC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Focusable_tF2E839AB6DBE413F04FC62347D7074D7377FD1E1 * V_0 = NULL;
	int32_t V_1 = 0;
	KeyDownEvent_t87D460D7272EEC24CA83B1A07CAC2998CFCF0BAD * V_2 = NULL;
	{
		// if (e.eventTypeId == PointerDownEvent.TypeId())
		EventBase_tA1333DE2FD77BE5E6B06CFDC825252E0CCF00698 * L_0 = ___e1;
		NullCheck(L_0);
		int64_t L_1;
		L_1 = VirtFuncInvoker0< int64_t >::Invoke(5 /* System.Int64 UnityEngine.UIElements.EventBase::get_eventTypeId() */, L_0);
		IL2CPP_RUNTIME_CLASS_INIT(EventBase_1_tD5A5D4FABAF3A32C1E67D577C42C2B02858ABC13_il2cpp_TypeInfo_var);
		int64_t L_2;
		L_2 = EventBase_1_TypeId_mB167B9ECACCBAA359CD4FD47EB2FBE2D8FD925BF_inline(/*hidden argument*/EventBase_1_TypeId_mB167B9ECACCBAA359CD4FD47EB2FBE2D8FD925BF_RuntimeMethod_var);
		if ((!(((uint64_t)L_1) == ((uint64_t)L_2))))
		{
			goto IL_0023;
		}
	}
	{
		// if (e.target is Focusable focusable)
		EventBase_tA1333DE2FD77BE5E6B06CFDC825252E0CCF00698 * L_3 = ___e1;
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = EventBase_get_target_mBD9BCC23633D98BDCCBA8B7EE76DBC932035C3F3_inline(L_3, /*hidden argument*/NULL);
		V_0 = ((Focusable_tF2E839AB6DBE413F04FC62347D7074D7377FD1E1 *)IsInstClass((RuntimeObject*)L_4, Focusable_tF2E839AB6DBE413F04FC62347D7074D7377FD1E1_il2cpp_TypeInfo_var));
		Focusable_tF2E839AB6DBE413F04FC62347D7074D7377FD1E1 * L_5 = V_0;
		if (!L_5)
		{
			goto IL_0023;
		}
	}
	{
		// return VisualElementFocusChangeTarget.GetPooled(focusable);
		Focusable_tF2E839AB6DBE413F04FC62347D7074D7377FD1E1 * L_6 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(VisualElementFocusChangeTarget_t168347905990062A6F59D1111069713C3D3F98EC_il2cpp_TypeInfo_var);
		VisualElementFocusChangeTarget_t168347905990062A6F59D1111069713C3D3F98EC * L_7;
		L_7 = VisualElementFocusChangeTarget_GetPooled_m9CAE550FA634A55AAD9E8E723ACEF6DCB9F2AD1C(L_6, /*hidden argument*/NULL);
		return L_7;
	}

IL_0023:
	{
		// if (e.eventTypeId == NavigationMoveEvent.TypeId())
		EventBase_tA1333DE2FD77BE5E6B06CFDC825252E0CCF00698 * L_8 = ___e1;
		NullCheck(L_8);
		int64_t L_9;
		L_9 = VirtFuncInvoker0< int64_t >::Invoke(5 /* System.Int64 UnityEngine.UIElements.EventBase::get_eventTypeId() */, L_8);
		IL2CPP_RUNTIME_CLASS_INIT(EventBase_1_t5F2BBA518F7956A01DD2DAA3C80709A1904FF828_il2cpp_TypeInfo_var);
		int64_t L_10;
		L_10 = EventBase_1_TypeId_mB5697953131C722ED7EDC58AA9B32201EFA59562_inline(/*hidden argument*/EventBase_1_TypeId_mB5697953131C722ED7EDC58AA9B32201EFA59562_RuntimeMethod_var);
		if ((!(((uint64_t)L_9) == ((uint64_t)L_10))))
		{
			goto IL_006e;
		}
	}
	{
		// switch (((NavigationMoveEvent)e).direction)
		EventBase_tA1333DE2FD77BE5E6B06CFDC825252E0CCF00698 * L_11 = ___e1;
		NullCheck(((NavigationMoveEvent_t763AB890A80C1029C653DCEE3FBC522E60A62634 *)CastclassClass((RuntimeObject*)L_11, NavigationMoveEvent_t763AB890A80C1029C653DCEE3FBC522E60A62634_il2cpp_TypeInfo_var)));
		int32_t L_12;
		L_12 = NavigationMoveEvent_get_direction_m3831053503744A8AB9B83F1D1907A07AD0072364_inline(((NavigationMoveEvent_t763AB890A80C1029C653DCEE3FBC522E60A62634 *)CastclassClass((RuntimeObject*)L_11, NavigationMoveEvent_t763AB890A80C1029C653DCEE3FBC522E60A62634_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		V_1 = L_12;
		int32_t L_13 = V_1;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_13, (int32_t)1)))
		{
			case 0:
			{
				goto IL_0056;
			}
			case 1:
			{
				goto IL_005c;
			}
			case 2:
			{
				goto IL_0062;
			}
			case 3:
			{
				goto IL_0068;
			}
		}
	}
	{
		goto IL_00aa;
	}

IL_0056:
	{
		// case NavigationMoveEvent.Direction.Left: return Left;
		IL2CPP_RUNTIME_CLASS_INIT(NavigateFocusRing_t44CF1D05515ADB539414B52A64A7602739E6B826_il2cpp_TypeInfo_var);
		ChangeDirection_t34BA68392D0BB026E61B81B65AD1B09CF9DB4D27 * L_14 = ((NavigateFocusRing_t44CF1D05515ADB539414B52A64A7602739E6B826_StaticFields*)il2cpp_codegen_static_fields_for(NavigateFocusRing_t44CF1D05515ADB539414B52A64A7602739E6B826_il2cpp_TypeInfo_var))->get_Left_0();
		return L_14;
	}

IL_005c:
	{
		// case NavigationMoveEvent.Direction.Up: return Up;
		IL2CPP_RUNTIME_CLASS_INIT(NavigateFocusRing_t44CF1D05515ADB539414B52A64A7602739E6B826_il2cpp_TypeInfo_var);
		ChangeDirection_t34BA68392D0BB026E61B81B65AD1B09CF9DB4D27 * L_15 = ((NavigateFocusRing_t44CF1D05515ADB539414B52A64A7602739E6B826_StaticFields*)il2cpp_codegen_static_fields_for(NavigateFocusRing_t44CF1D05515ADB539414B52A64A7602739E6B826_il2cpp_TypeInfo_var))->get_Up_2();
		return L_15;
	}

IL_0062:
	{
		// case NavigationMoveEvent.Direction.Right: return Right;
		IL2CPP_RUNTIME_CLASS_INIT(NavigateFocusRing_t44CF1D05515ADB539414B52A64A7602739E6B826_il2cpp_TypeInfo_var);
		ChangeDirection_t34BA68392D0BB026E61B81B65AD1B09CF9DB4D27 * L_16 = ((NavigateFocusRing_t44CF1D05515ADB539414B52A64A7602739E6B826_StaticFields*)il2cpp_codegen_static_fields_for(NavigateFocusRing_t44CF1D05515ADB539414B52A64A7602739E6B826_il2cpp_TypeInfo_var))->get_Right_1();
		return L_16;
	}

IL_0068:
	{
		// case NavigationMoveEvent.Direction.Down: return Down;
		IL2CPP_RUNTIME_CLASS_INIT(NavigateFocusRing_t44CF1D05515ADB539414B52A64A7602739E6B826_il2cpp_TypeInfo_var);
		ChangeDirection_t34BA68392D0BB026E61B81B65AD1B09CF9DB4D27 * L_17 = ((NavigateFocusRing_t44CF1D05515ADB539414B52A64A7602739E6B826_StaticFields*)il2cpp_codegen_static_fields_for(NavigateFocusRing_t44CF1D05515ADB539414B52A64A7602739E6B826_il2cpp_TypeInfo_var))->get_Down_3();
		return L_17;
	}

IL_006e:
	{
		// else if (e.eventTypeId == KeyDownEvent.TypeId())
		EventBase_tA1333DE2FD77BE5E6B06CFDC825252E0CCF00698 * L_18 = ___e1;
		NullCheck(L_18);
		int64_t L_19;
		L_19 = VirtFuncInvoker0< int64_t >::Invoke(5 /* System.Int64 UnityEngine.UIElements.EventBase::get_eventTypeId() */, L_18);
		IL2CPP_RUNTIME_CLASS_INIT(EventBase_1_tA50D96483E133B256F4EA87D789753E52559FFB5_il2cpp_TypeInfo_var);
		int64_t L_20;
		L_20 = EventBase_1_TypeId_mC91C0B8412E545DFDE7E320C54E7DA79622BEF7A_inline(/*hidden argument*/EventBase_1_TypeId_mC91C0B8412E545DFDE7E320C54E7DA79622BEF7A_RuntimeMethod_var);
		if ((!(((uint64_t)L_19) == ((uint64_t)L_20))))
		{
			goto IL_00aa;
		}
	}
	{
		// var kde = (KeyDownEvent)e;
		EventBase_tA1333DE2FD77BE5E6B06CFDC825252E0CCF00698 * L_21 = ___e1;
		V_2 = ((KeyDownEvent_t87D460D7272EEC24CA83B1A07CAC2998CFCF0BAD *)CastclassClass((RuntimeObject*)L_21, KeyDownEvent_t87D460D7272EEC24CA83B1A07CAC2998CFCF0BAD_il2cpp_TypeInfo_var));
		// if (kde.character == (char)25 || kde.character == '\t')
		KeyDownEvent_t87D460D7272EEC24CA83B1A07CAC2998CFCF0BAD * L_22 = V_2;
		NullCheck(L_22);
		Il2CppChar L_23;
		L_23 = KeyboardEventBase_1_get_character_m57DE81FFE9FD1B11F2D60C58C1D50919BD145778_inline(L_22, /*hidden argument*/KeyboardEventBase_1_get_character_m57DE81FFE9FD1B11F2D60C58C1D50919BD145778_RuntimeMethod_var);
		if ((((int32_t)L_23) == ((int32_t)((int32_t)25))))
		{
			goto IL_0096;
		}
	}
	{
		KeyDownEvent_t87D460D7272EEC24CA83B1A07CAC2998CFCF0BAD * L_24 = V_2;
		NullCheck(L_24);
		Il2CppChar L_25;
		L_25 = KeyboardEventBase_1_get_character_m57DE81FFE9FD1B11F2D60C58C1D50919BD145778_inline(L_24, /*hidden argument*/KeyboardEventBase_1_get_character_m57DE81FFE9FD1B11F2D60C58C1D50919BD145778_RuntimeMethod_var);
		if ((!(((uint32_t)L_25) == ((uint32_t)((int32_t)9)))))
		{
			goto IL_00aa;
		}
	}

IL_0096:
	{
		// return kde.shiftKey ? Previous : Next;
		KeyDownEvent_t87D460D7272EEC24CA83B1A07CAC2998CFCF0BAD * L_26 = V_2;
		NullCheck(L_26);
		bool L_27;
		L_27 = KeyboardEventBase_1_get_shiftKey_m1B4F3E9879A0AC60E712C6EA422C8790FEFFB863(L_26, /*hidden argument*/KeyboardEventBase_1_get_shiftKey_m1B4F3E9879A0AC60E712C6EA422C8790FEFFB863_RuntimeMethod_var);
		if (L_27)
		{
			goto IL_00a4;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(NavigateFocusRing_t44CF1D05515ADB539414B52A64A7602739E6B826_il2cpp_TypeInfo_var);
		ChangeDirection_t34BA68392D0BB026E61B81B65AD1B09CF9DB4D27 * L_28 = ((NavigateFocusRing_t44CF1D05515ADB539414B52A64A7602739E6B826_StaticFields*)il2cpp_codegen_static_fields_for(NavigateFocusRing_t44CF1D05515ADB539414B52A64A7602739E6B826_il2cpp_TypeInfo_var))->get_Next_4();
		return L_28;
	}

IL_00a4:
	{
		IL2CPP_RUNTIME_CLASS_INIT(NavigateFocusRing_t44CF1D05515ADB539414B52A64A7602739E6B826_il2cpp_TypeInfo_var);
		ChangeDirection_t34BA68392D0BB026E61B81B65AD1B09CF9DB4D27 * L_29 = ((NavigateFocusRing_t44CF1D05515ADB539414B52A64A7602739E6B826_StaticFields*)il2cpp_codegen_static_fields_for(NavigateFocusRing_t44CF1D05515ADB539414B52A64A7602739E6B826_il2cpp_TypeInfo_var))->get_Previous_5();
		return L_29;
	}

IL_00aa:
	{
		// return FocusChangeDirection.none;
		IL2CPP_RUNTIME_CLASS_INIT(FocusChangeDirection_t7E59BE4DF7F0B4024128F306581D21C2C5E02CF1_il2cpp_TypeInfo_var);
		FocusChangeDirection_t7E59BE4DF7F0B4024128F306581D21C2C5E02CF1 * L_30;
		L_30 = FocusChangeDirection_get_none_m689E940E96F39B051A0FED9937D1915D0C6FC402_inline(/*hidden argument*/NULL);
		return L_30;
	}
}
// UnityEngine.UIElements.Focusable UnityEngine.UIElements.NavigateFocusRing::GetNextFocusable(UnityEngine.UIElements.Focusable,UnityEngine.UIElements.FocusChangeDirection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Focusable_tF2E839AB6DBE413F04FC62347D7074D7377FD1E1 * NavigateFocusRing_GetNextFocusable_mD9BF53424AE0163390D0B94F3C69794C4E7A34C8 (NavigateFocusRing_t44CF1D05515ADB539414B52A64A7602739E6B826 * __this, Focusable_tF2E839AB6DBE413F04FC62347D7074D7377FD1E1 * ___currentFocusable0, FocusChangeDirection_t7E59BE4DF7F0B4024128F306581D21C2C5E02CF1 * ___direction1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChangeDirection_t34BA68392D0BB026E61B81B65AD1B09CF9DB4D27_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NavigateFocusRing_t44CF1D05515ADB539414B52A64A7602739E6B826_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VisualElementFocusChangeDirection_t14A3CFA335037FB20713B566D5B993835A585951_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VisualElementFocusChangeTarget_t168347905990062A6F59D1111069713C3D3F98EC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	VisualElementFocusChangeTarget_t168347905990062A6F59D1111069713C3D3F98EC * V_0 = NULL;
	Focusable_tF2E839AB6DBE413F04FC62347D7074D7377FD1E1 * G_B6_0 = NULL;
	VisualElementFocusRing_t9D8C7E1CD5CAD2B6220414541CB498B5FAB4946B * G_B6_1 = NULL;
	Focusable_tF2E839AB6DBE413F04FC62347D7074D7377FD1E1 * G_B5_0 = NULL;
	VisualElementFocusRing_t9D8C7E1CD5CAD2B6220414541CB498B5FAB4946B * G_B5_1 = NULL;
	FocusChangeDirection_t7E59BE4DF7F0B4024128F306581D21C2C5E02CF1 * G_B7_0 = NULL;
	Focusable_tF2E839AB6DBE413F04FC62347D7074D7377FD1E1 * G_B7_1 = NULL;
	VisualElementFocusRing_t9D8C7E1CD5CAD2B6220414541CB498B5FAB4946B * G_B7_2 = NULL;
	{
		// if (direction is VisualElementFocusChangeTarget changeTarget)
		FocusChangeDirection_t7E59BE4DF7F0B4024128F306581D21C2C5E02CF1 * L_0 = ___direction1;
		V_0 = ((VisualElementFocusChangeTarget_t168347905990062A6F59D1111069713C3D3F98EC *)IsInstClass((RuntimeObject*)L_0, VisualElementFocusChangeTarget_t168347905990062A6F59D1111069713C3D3F98EC_il2cpp_TypeInfo_var));
		VisualElementFocusChangeTarget_t168347905990062A6F59D1111069713C3D3F98EC * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		// return changeTarget.target;
		VisualElementFocusChangeTarget_t168347905990062A6F59D1111069713C3D3F98EC * L_2 = V_0;
		NullCheck(L_2);
		Focusable_tF2E839AB6DBE413F04FC62347D7074D7377FD1E1 * L_3;
		L_3 = VisualElementFocusChangeTarget_get_target_mB86D83FF06B02568533DF4C6BA026E593BB4A92D_inline(L_2, /*hidden argument*/NULL);
		return L_3;
	}

IL_0011:
	{
		// if (direction == Next || direction == Previous)
		FocusChangeDirection_t7E59BE4DF7F0B4024128F306581D21C2C5E02CF1 * L_4 = ___direction1;
		IL2CPP_RUNTIME_CLASS_INIT(NavigateFocusRing_t44CF1D05515ADB539414B52A64A7602739E6B826_il2cpp_TypeInfo_var);
		ChangeDirection_t34BA68392D0BB026E61B81B65AD1B09CF9DB4D27 * L_5 = ((NavigateFocusRing_t44CF1D05515ADB539414B52A64A7602739E6B826_StaticFields*)il2cpp_codegen_static_fields_for(NavigateFocusRing_t44CF1D05515ADB539414B52A64A7602739E6B826_il2cpp_TypeInfo_var))->get_Next_4();
		if ((((RuntimeObject*)(FocusChangeDirection_t7E59BE4DF7F0B4024128F306581D21C2C5E02CF1 *)L_4) == ((RuntimeObject*)(ChangeDirection_t34BA68392D0BB026E61B81B65AD1B09CF9DB4D27 *)L_5)))
		{
			goto IL_0021;
		}
	}
	{
		FocusChangeDirection_t7E59BE4DF7F0B4024128F306581D21C2C5E02CF1 * L_6 = ___direction1;
		IL2CPP_RUNTIME_CLASS_INIT(NavigateFocusRing_t44CF1D05515ADB539414B52A64A7602739E6B826_il2cpp_TypeInfo_var);
		ChangeDirection_t34BA68392D0BB026E61B81B65AD1B09CF9DB4D27 * L_7 = ((NavigateFocusRing_t44CF1D05515ADB539414B52A64A7602739E6B826_StaticFields*)il2cpp_codegen_static_fields_for(NavigateFocusRing_t44CF1D05515ADB539414B52A64A7602739E6B826_il2cpp_TypeInfo_var))->get_Previous_5();
		if ((!(((RuntimeObject*)(FocusChangeDirection_t7E59BE4DF7F0B4024128F306581D21C2C5E02CF1 *)L_6) == ((RuntimeObject*)(ChangeDirection_t34BA68392D0BB026E61B81B65AD1B09CF9DB4D27 *)L_7))))
		{
			goto IL_0042;
		}
	}

IL_0021:
	{
		// return m_Ring.GetNextFocusable(currentFocusable, direction == Next
		//     ? VisualElementFocusChangeDirection.right
		//     : VisualElementFocusChangeDirection.left);
		VisualElementFocusRing_t9D8C7E1CD5CAD2B6220414541CB498B5FAB4946B * L_8 = __this->get_m_Ring_7();
		Focusable_tF2E839AB6DBE413F04FC62347D7074D7377FD1E1 * L_9 = ___currentFocusable0;
		FocusChangeDirection_t7E59BE4DF7F0B4024128F306581D21C2C5E02CF1 * L_10 = ___direction1;
		IL2CPP_RUNTIME_CLASS_INIT(NavigateFocusRing_t44CF1D05515ADB539414B52A64A7602739E6B826_il2cpp_TypeInfo_var);
		ChangeDirection_t34BA68392D0BB026E61B81B65AD1B09CF9DB4D27 * L_11 = ((NavigateFocusRing_t44CF1D05515ADB539414B52A64A7602739E6B826_StaticFields*)il2cpp_codegen_static_fields_for(NavigateFocusRing_t44CF1D05515ADB539414B52A64A7602739E6B826_il2cpp_TypeInfo_var))->get_Next_4();
		G_B5_0 = L_9;
		G_B5_1 = L_8;
		if ((((RuntimeObject*)(FocusChangeDirection_t7E59BE4DF7F0B4024128F306581D21C2C5E02CF1 *)L_10) == ((RuntimeObject*)(ChangeDirection_t34BA68392D0BB026E61B81B65AD1B09CF9DB4D27 *)L_11)))
		{
			G_B6_0 = L_9;
			G_B6_1 = L_8;
			goto IL_0037;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(VisualElementFocusChangeDirection_t14A3CFA335037FB20713B566D5B993835A585951_il2cpp_TypeInfo_var);
		FocusChangeDirection_t7E59BE4DF7F0B4024128F306581D21C2C5E02CF1 * L_12;
		L_12 = VisualElementFocusChangeDirection_get_left_m2A45283A26313DC01E1335FF0DCA083A8B9E577B_inline(/*hidden argument*/NULL);
		G_B7_0 = L_12;
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		goto IL_003c;
	}

IL_0037:
	{
		IL2CPP_RUNTIME_CLASS_INIT(VisualElementFocusChangeDirection_t14A3CFA335037FB20713B566D5B993835A585951_il2cpp_TypeInfo_var);
		FocusChangeDirection_t7E59BE4DF7F0B4024128F306581D21C2C5E02CF1 * L_13;
		L_13 = VisualElementFocusChangeDirection_get_right_m12F66A6BE99451158B7DE93393F593FD65E77421_inline(/*hidden argument*/NULL);
		G_B7_0 = L_13;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
	}

IL_003c:
	{
		NullCheck(G_B7_2);
		Focusable_tF2E839AB6DBE413F04FC62347D7074D7377FD1E1 * L_14;
		L_14 = VisualElementFocusRing_GetNextFocusable_m1155CC1D8B2F4ACB08F084BADC27451652B71EA9(G_B7_2, G_B7_1, G_B7_0, /*hidden argument*/NULL);
		return L_14;
	}

IL_0042:
	{
		// if (direction == Up || direction == Down || direction == Right || direction == Left)
		FocusChangeDirection_t7E59BE4DF7F0B4024128F306581D21C2C5E02CF1 * L_15 = ___direction1;
		IL2CPP_RUNTIME_CLASS_INIT(NavigateFocusRing_t44CF1D05515ADB539414B52A64A7602739E6B826_il2cpp_TypeInfo_var);
		ChangeDirection_t34BA68392D0BB026E61B81B65AD1B09CF9DB4D27 * L_16 = ((NavigateFocusRing_t44CF1D05515ADB539414B52A64A7602739E6B826_StaticFields*)il2cpp_codegen_static_fields_for(NavigateFocusRing_t44CF1D05515ADB539414B52A64A7602739E6B826_il2cpp_TypeInfo_var))->get_Up_2();
		if ((((RuntimeObject*)(FocusChangeDirection_t7E59BE4DF7F0B4024128F306581D21C2C5E02CF1 *)L_15) == ((RuntimeObject*)(ChangeDirection_t34BA68392D0BB026E61B81B65AD1B09CF9DB4D27 *)L_16)))
		{
			goto IL_0062;
		}
	}
	{
		FocusChangeDirection_t7E59BE4DF7F0B4024128F306581D21C2C5E02CF1 * L_17 = ___direction1;
		IL2CPP_RUNTIME_CLASS_INIT(NavigateFocusRing_t44CF1D05515ADB539414B52A64A7602739E6B826_il2cpp_TypeInfo_var);
		ChangeDirection_t34BA68392D0BB026E61B81B65AD1B09CF9DB4D27 * L_18 = ((NavigateFocusRing_t44CF1D05515ADB539414B52A64A7602739E6B826_StaticFields*)il2cpp_codegen_static_fields_for(NavigateFocusRing_t44CF1D05515ADB539414B52A64A7602739E6B826_il2cpp_TypeInfo_var))->get_Down_3();
		if ((((RuntimeObject*)(FocusChangeDirection_t7E59BE4DF7F0B4024128F306581D21C2C5E02CF1 *)L_17) == ((RuntimeObject*)(ChangeDirection_t34BA68392D0BB026E61B81B65AD1B09CF9DB4D27 *)L_18)))
		{
			goto IL_0062;
		}
	}
	{
		FocusChangeDirection_t7E59BE4DF7F0B4024128F306581D21C2C5E02CF1 * L_19 = ___direction1;
		IL2CPP_RUNTIME_CLASS_INIT(NavigateFocusRing_t44CF1D05515ADB539414B52A64A7602739E6B826_il2cpp_TypeInfo_var);
		ChangeDirection_t34BA68392D0BB026E61B81B65AD1B09CF9DB4D27 * L_20 = ((NavigateFocusRing_t44CF1D05515ADB539414B52A64A7602739E6B826_StaticFields*)il2cpp_codegen_static_fields_for(NavigateFocusRing_t44CF1D05515ADB539414B52A64A7602739E6B826_il2cpp_TypeInfo_var))->get_Right_1();
		if ((((RuntimeObject*)(FocusChangeDirection_t7E59BE4DF7F0B4024128F306581D21C2C5E02CF1 *)L_19) == ((RuntimeObject*)(ChangeDirection_t34BA68392D0BB026E61B81B65AD1B09CF9DB4D27 *)L_20)))
		{
			goto IL_0062;
		}
	}
	{
		FocusChangeDirection_t7E59BE4DF7F0B4024128F306581D21C2C5E02CF1 * L_21 = ___direction1;
		IL2CPP_RUNTIME_CLASS_INIT(NavigateFocusRing_t44CF1D05515ADB539414B52A64A7602739E6B826_il2cpp_TypeInfo_var);
		ChangeDirection_t34BA68392D0BB026E61B81B65AD1B09CF9DB4D27 * L_22 = ((NavigateFocusRing_t44CF1D05515ADB539414B52A64A7602739E6B826_StaticFields*)il2cpp_codegen_static_fields_for(NavigateFocusRing_t44CF1D05515ADB539414B52A64A7602739E6B826_il2cpp_TypeInfo_var))->get_Left_0();
		if ((!(((RuntimeObject*)(FocusChangeDirection_t7E59BE4DF7F0B4024128F306581D21C2C5E02CF1 *)L_21) == ((RuntimeObject*)(ChangeDirection_t34BA68392D0BB026E61B81B65AD1B09CF9DB4D27 *)L_22))))
		{
			goto IL_0070;
		}
	}

IL_0062:
	{
		// return GetNextFocusable2D(currentFocusable, (ChangeDirection)direction);
		Focusable_tF2E839AB6DBE413F04FC62347D7074D7377FD1E1 * L_23 = ___currentFocusable0;
		FocusChangeDirection_t7E59BE4DF7F0B4024128F306581D21C2C5E02CF1 * L_24 = ___direction1;
		Focusable_tF2E839AB6DBE413F04FC62347D7074D7377FD1E1 * L_25;
		L_25 = NavigateFocusRing_GetNextFocusable2D_mDDF98C80B6BF39DFCDCCAF0A0B426A5E1DE4DD73(__this, L_23, ((ChangeDirection_t34BA68392D0BB026E61B81B65AD1B09CF9DB4D27 *)CastclassClass((RuntimeObject*)L_24, ChangeDirection_t34BA68392D0BB026E61B81B65AD1B09CF9DB4D27_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		return L_25;
	}

IL_0070:
	{
		// return currentFocusable;
		Focusable_tF2E839AB6DBE413F04FC62347D7074D7377FD1E1 * L_26 = ___currentFocusable0;
		return L_26;
	}
}
// UnityEngine.UIElements.Focusable UnityEngine.UIElements.NavigateFocusRing::GetNextFocusable2D(UnityEngine.UIElements.Focusable,UnityEngine.UIElements.NavigateFocusRing/ChangeDirection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Focusable_tF2E839AB6DBE413F04FC62347D7074D7377FD1E1 * NavigateFocusRing_GetNextFocusable2D_mDDF98C80B6BF39DFCDCCAF0A0B426A5E1DE4DD73 (NavigateFocusRing_t44CF1D05515ADB539414B52A64A7602739E6B826 * __this, Focusable_tF2E839AB6DBE413F04FC62347D7074D7377FD1E1 * ___currentFocusable0, ChangeDirection_t34BA68392D0BB026E61B81B65AD1B09CF9DB4D27 * ___direction1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NavigateFocusRing_t44CF1D05515ADB539414B52A64A7602739E6B826_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * V_0 = NULL;
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  V_2;
	memset((&V_2), 0, sizeof(V_2));
	VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * V_3 = NULL;
	FocusableHierarchyTraversal_t6D47905FA29D442881D3D9C243EA93E74712D48E  V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// if (!(currentFocusable is VisualElement ve))
		Focusable_tF2E839AB6DBE413F04FC62347D7074D7377FD1E1 * L_0 = ___currentFocusable0;
		V_0 = ((VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 *)IsInstClass((RuntimeObject*)L_0, VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909_il2cpp_TypeInfo_var));
		VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * L_1 = V_0;
		if (L_1)
		{
			goto IL_0011;
		}
	}
	{
		// ve = m_Root;
		VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * L_2 = __this->get_m_Root_6();
		V_0 = L_2;
	}

IL_0011:
	{
		// ve = GetRootFocusable(ve);
		VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(NavigateFocusRing_t44CF1D05515ADB539414B52A64A7602739E6B826_il2cpp_TypeInfo_var);
		VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * L_4;
		L_4 = NavigateFocusRing_GetRootFocusable_m579F3BE194BE3FC6C83AF21F69661076ECD72125(L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		// Rect rect = ve.worldBound;
		VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * L_5 = V_0;
		NullCheck(L_5);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_6;
		L_6 = VisualElement_get_worldBound_m5990120A0D099FE5555AEDBF2533187AFE2A4891(L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		// Rect validRect = new Rect(rect.position - Vector2.one, rect.size + Vector2.one * 2);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_7;
		L_7 = Rect_get_position_m4D98DEE21C60D7EA5E4A30869F4DBDE25DB93A86((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_1), /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_8;
		L_8 = Vector2_get_one_m9B2AFD26404B6DD0F520D19FC7F79371C5C18B42(/*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_9;
		L_9 = Vector2_op_Subtraction_m6E536A8C72FEAA37FF8D5E26E11D6E71EB59599A_inline(L_7, L_8, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_10;
		L_10 = Rect_get_size_m752B3BB45AE862F6EAE941ED5E5C1B01C0973A00((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_1), /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_11;
		L_11 = Vector2_get_one_m9B2AFD26404B6DD0F520D19FC7F79371C5C18B42(/*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_12;
		L_12 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_11, (2.0f), /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_13;
		L_13 = Vector2_op_Addition_m5EACC2AEA80FEE29F380397CF1F4B11D04BE71CC_inline(L_10, L_12, /*hidden argument*/NULL);
		Rect__ctor_m00C682F84642AE657D7EBB0D5BC6E8F3CA4D1E82((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_2), L_9, L_13, /*hidden argument*/NULL);
		// if (direction == Up) validRect.yMin = 0;
		ChangeDirection_t34BA68392D0BB026E61B81B65AD1B09CF9DB4D27 * L_14 = ___direction1;
		ChangeDirection_t34BA68392D0BB026E61B81B65AD1B09CF9DB4D27 * L_15 = ((NavigateFocusRing_t44CF1D05515ADB539414B52A64A7602739E6B826_StaticFields*)il2cpp_codegen_static_fields_for(NavigateFocusRing_t44CF1D05515ADB539414B52A64A7602739E6B826_il2cpp_TypeInfo_var))->get_Up_2();
		if ((!(((RuntimeObject*)(ChangeDirection_t34BA68392D0BB026E61B81B65AD1B09CF9DB4D27 *)L_14) == ((RuntimeObject*)(ChangeDirection_t34BA68392D0BB026E61B81B65AD1B09CF9DB4D27 *)L_15))))
		{
			goto IL_0068;
		}
	}
	{
		// if (direction == Up) validRect.yMin = 0;
		Rect_set_yMin_mA2FDFF7C8C2361A4CF3F446BAB9A861F923F763A((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_2), (0.0f), /*hidden argument*/NULL);
		goto IL_00aa;
	}

IL_0068:
	{
		// else if (direction == Down) validRect.yMax = Screen.height;
		ChangeDirection_t34BA68392D0BB026E61B81B65AD1B09CF9DB4D27 * L_16 = ___direction1;
		IL2CPP_RUNTIME_CLASS_INIT(NavigateFocusRing_t44CF1D05515ADB539414B52A64A7602739E6B826_il2cpp_TypeInfo_var);
		ChangeDirection_t34BA68392D0BB026E61B81B65AD1B09CF9DB4D27 * L_17 = ((NavigateFocusRing_t44CF1D05515ADB539414B52A64A7602739E6B826_StaticFields*)il2cpp_codegen_static_fields_for(NavigateFocusRing_t44CF1D05515ADB539414B52A64A7602739E6B826_il2cpp_TypeInfo_var))->get_Down_3();
		if ((!(((RuntimeObject*)(ChangeDirection_t34BA68392D0BB026E61B81B65AD1B09CF9DB4D27 *)L_16) == ((RuntimeObject*)(ChangeDirection_t34BA68392D0BB026E61B81B65AD1B09CF9DB4D27 *)L_17))))
		{
			goto IL_007f;
		}
	}
	{
		// else if (direction == Down) validRect.yMax = Screen.height;
		int32_t L_18;
		L_18 = Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE(/*hidden argument*/NULL);
		Rect_set_yMax_m4E7A7C5E88FA369D6ED022C939427F4895F6635D((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_2), ((float)((float)L_18)), /*hidden argument*/NULL);
		goto IL_00aa;
	}

IL_007f:
	{
		// else if (direction == Left) validRect.xMin = 0;
		ChangeDirection_t34BA68392D0BB026E61B81B65AD1B09CF9DB4D27 * L_19 = ___direction1;
		IL2CPP_RUNTIME_CLASS_INIT(NavigateFocusRing_t44CF1D05515ADB539414B52A64A7602739E6B826_il2cpp_TypeInfo_var);
		ChangeDirection_t34BA68392D0BB026E61B81B65AD1B09CF9DB4D27 * L_20 = ((NavigateFocusRing_t44CF1D05515ADB539414B52A64A7602739E6B826_StaticFields*)il2cpp_codegen_static_fields_for(NavigateFocusRing_t44CF1D05515ADB539414B52A64A7602739E6B826_il2cpp_TypeInfo_var))->get_Left_0();
		if ((!(((RuntimeObject*)(ChangeDirection_t34BA68392D0BB026E61B81B65AD1B09CF9DB4D27 *)L_19) == ((RuntimeObject*)(ChangeDirection_t34BA68392D0BB026E61B81B65AD1B09CF9DB4D27 *)L_20))))
		{
			goto IL_0095;
		}
	}
	{
		// else if (direction == Left) validRect.xMin = 0;
		Rect_set_xMin_mC91AC74347F8E3D537E8C5D70015E9B8EA872A3F((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_2), (0.0f), /*hidden argument*/NULL);
		goto IL_00aa;
	}

IL_0095:
	{
		// else if (direction == Right) validRect.xMax = Screen.width;
		ChangeDirection_t34BA68392D0BB026E61B81B65AD1B09CF9DB4D27 * L_21 = ___direction1;
		IL2CPP_RUNTIME_CLASS_INIT(NavigateFocusRing_t44CF1D05515ADB539414B52A64A7602739E6B826_il2cpp_TypeInfo_var);
		ChangeDirection_t34BA68392D0BB026E61B81B65AD1B09CF9DB4D27 * L_22 = ((NavigateFocusRing_t44CF1D05515ADB539414B52A64A7602739E6B826_StaticFields*)il2cpp_codegen_static_fields_for(NavigateFocusRing_t44CF1D05515ADB539414B52A64A7602739E6B826_il2cpp_TypeInfo_var))->get_Right_1();
		if ((!(((RuntimeObject*)(ChangeDirection_t34BA68392D0BB026E61B81B65AD1B09CF9DB4D27 *)L_21) == ((RuntimeObject*)(ChangeDirection_t34BA68392D0BB026E61B81B65AD1B09CF9DB4D27 *)L_22))))
		{
			goto IL_00aa;
		}
	}
	{
		// else if (direction == Right) validRect.xMax = Screen.width;
		int32_t L_23;
		L_23 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C(/*hidden argument*/NULL);
		Rect_set_xMax_m4E466ED07B11CC5457BD62517418C493C0DDF2E3((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_2), ((float)((float)L_23)), /*hidden argument*/NULL);
	}

IL_00aa:
	{
		// var best = new FocusableHierarchyTraversal
		// {
		//     currentFocusable = ve,
		//     direction = direction,
		//     validRect = validRect,
		//     firstPass = true
		// }.GetBestOverall(m_Root);
		il2cpp_codegen_initobj((&V_4), sizeof(FocusableHierarchyTraversal_t6D47905FA29D442881D3D9C243EA93E74712D48E ));
		VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * L_24 = V_0;
		(&V_4)->set_currentFocusable_0(L_24);
		ChangeDirection_t34BA68392D0BB026E61B81B65AD1B09CF9DB4D27 * L_25 = ___direction1;
		(&V_4)->set_direction_3(L_25);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_26 = V_2;
		(&V_4)->set_validRect_1(L_26);
		(&V_4)->set_firstPass_2((bool)1);
		VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * L_27 = __this->get_m_Root_6();
		VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * L_28;
		L_28 = FocusableHierarchyTraversal_GetBestOverall_mE1106D74720F7F24C94FDBC36CEF3A14587D11E4((FocusableHierarchyTraversal_t6D47905FA29D442881D3D9C243EA93E74712D48E *)(&V_4), L_27, (VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 *)NULL, /*hidden argument*/NULL);
		V_3 = L_28;
		// if (best != null)
		VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * L_29 = V_3;
		if (!L_29)
		{
			goto IL_00eb;
		}
	}
	{
		// return GetLeafFocusable(best);
		VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * L_30 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(NavigateFocusRing_t44CF1D05515ADB539414B52A64A7602739E6B826_il2cpp_TypeInfo_var);
		VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * L_31;
		L_31 = NavigateFocusRing_GetLeafFocusable_m671E5A45D0C16C902BFC8060D38AD6DBF1916B94(L_30, /*hidden argument*/NULL);
		return L_31;
	}

IL_00eb:
	{
		// validRect = new Rect(rect.position - Vector2.one, rect.size + Vector2.one * 2);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_32;
		L_32 = Rect_get_position_m4D98DEE21C60D7EA5E4A30869F4DBDE25DB93A86((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_1), /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_33;
		L_33 = Vector2_get_one_m9B2AFD26404B6DD0F520D19FC7F79371C5C18B42(/*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_34;
		L_34 = Vector2_op_Subtraction_m6E536A8C72FEAA37FF8D5E26E11D6E71EB59599A_inline(L_32, L_33, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_35;
		L_35 = Rect_get_size_m752B3BB45AE862F6EAE941ED5E5C1B01C0973A00((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_1), /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_36;
		L_36 = Vector2_get_one_m9B2AFD26404B6DD0F520D19FC7F79371C5C18B42(/*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_37;
		L_37 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_36, (2.0f), /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_38;
		L_38 = Vector2_op_Addition_m5EACC2AEA80FEE29F380397CF1F4B11D04BE71CC_inline(L_35, L_37, /*hidden argument*/NULL);
		Rect__ctor_m00C682F84642AE657D7EBB0D5BC6E8F3CA4D1E82((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_2), L_34, L_38, /*hidden argument*/NULL);
		// if (direction == Down) validRect.yMin = 0;
		ChangeDirection_t34BA68392D0BB026E61B81B65AD1B09CF9DB4D27 * L_39 = ___direction1;
		IL2CPP_RUNTIME_CLASS_INIT(NavigateFocusRing_t44CF1D05515ADB539414B52A64A7602739E6B826_il2cpp_TypeInfo_var);
		ChangeDirection_t34BA68392D0BB026E61B81B65AD1B09CF9DB4D27 * L_40 = ((NavigateFocusRing_t44CF1D05515ADB539414B52A64A7602739E6B826_StaticFields*)il2cpp_codegen_static_fields_for(NavigateFocusRing_t44CF1D05515ADB539414B52A64A7602739E6B826_il2cpp_TypeInfo_var))->get_Down_3();
		if ((!(((RuntimeObject*)(ChangeDirection_t34BA68392D0BB026E61B81B65AD1B09CF9DB4D27 *)L_39) == ((RuntimeObject*)(ChangeDirection_t34BA68392D0BB026E61B81B65AD1B09CF9DB4D27 *)L_40))))
		{
			goto IL_0134;
		}
	}
	{
		// if (direction == Down) validRect.yMin = 0;
		Rect_set_yMin_mA2FDFF7C8C2361A4CF3F446BAB9A861F923F763A((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_2), (0.0f), /*hidden argument*/NULL);
		goto IL_0176;
	}

IL_0134:
	{
		// else if (direction == Up) validRect.yMax = Screen.height;
		ChangeDirection_t34BA68392D0BB026E61B81B65AD1B09CF9DB4D27 * L_41 = ___direction1;
		IL2CPP_RUNTIME_CLASS_INIT(NavigateFocusRing_t44CF1D05515ADB539414B52A64A7602739E6B826_il2cpp_TypeInfo_var);
		ChangeDirection_t34BA68392D0BB026E61B81B65AD1B09CF9DB4D27 * L_42 = ((NavigateFocusRing_t44CF1D05515ADB539414B52A64A7602739E6B826_StaticFields*)il2cpp_codegen_static_fields_for(NavigateFocusRing_t44CF1D05515ADB539414B52A64A7602739E6B826_il2cpp_TypeInfo_var))->get_Up_2();
		if ((!(((RuntimeObject*)(ChangeDirection_t34BA68392D0BB026E61B81B65AD1B09CF9DB4D27 *)L_41) == ((RuntimeObject*)(ChangeDirection_t34BA68392D0BB026E61B81B65AD1B09CF9DB4D27 *)L_42))))
		{
			goto IL_014b;
		}
	}
	{
		// else if (direction == Up) validRect.yMax = Screen.height;
		int32_t L_43;
		L_43 = Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE(/*hidden argument*/NULL);
		Rect_set_yMax_m4E7A7C5E88FA369D6ED022C939427F4895F6635D((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_2), ((float)((float)L_43)), /*hidden argument*/NULL);
		goto IL_0176;
	}

IL_014b:
	{
		// else if (direction == Right) validRect.xMin = 0;
		ChangeDirection_t34BA68392D0BB026E61B81B65AD1B09CF9DB4D27 * L_44 = ___direction1;
		IL2CPP_RUNTIME_CLASS_INIT(NavigateFocusRing_t44CF1D05515ADB539414B52A64A7602739E6B826_il2cpp_TypeInfo_var);
		ChangeDirection_t34BA68392D0BB026E61B81B65AD1B09CF9DB4D27 * L_45 = ((NavigateFocusRing_t44CF1D05515ADB539414B52A64A7602739E6B826_StaticFields*)il2cpp_codegen_static_fields_for(NavigateFocusRing_t44CF1D05515ADB539414B52A64A7602739E6B826_il2cpp_TypeInfo_var))->get_Right_1();
		if ((!(((RuntimeObject*)(ChangeDirection_t34BA68392D0BB026E61B81B65AD1B09CF9DB4D27 *)L_44) == ((RuntimeObject*)(ChangeDirection_t34BA68392D0BB026E61B81B65AD1B09CF9DB4D27 *)L_45))))
		{
			goto IL_0161;
		}
	}
	{
		// else if (direction == Right) validRect.xMin = 0;
		Rect_set_xMin_mC91AC74347F8E3D537E8C5D70015E9B8EA872A3F((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_2), (0.0f), /*hidden argument*/NULL);
		goto IL_0176;
	}

IL_0161:
	{
		// else if (direction == Left) validRect.xMax = Screen.height;
		ChangeDirection_t34BA68392D0BB026E61B81B65AD1B09CF9DB4D27 * L_46 = ___direction1;
		IL2CPP_RUNTIME_CLASS_INIT(NavigateFocusRing_t44CF1D05515ADB539414B52A64A7602739E6B826_il2cpp_TypeInfo_var);
		ChangeDirection_t34BA68392D0BB026E61B81B65AD1B09CF9DB4D27 * L_47 = ((NavigateFocusRing_t44CF1D05515ADB539414B52A64A7602739E6B826_StaticFields*)il2cpp_codegen_static_fields_for(NavigateFocusRing_t44CF1D05515ADB539414B52A64A7602739E6B826_il2cpp_TypeInfo_var))->get_Left_0();
		if ((!(((RuntimeObject*)(ChangeDirection_t34BA68392D0BB026E61B81B65AD1B09CF9DB4D27 *)L_46) == ((RuntimeObject*)(ChangeDirection_t34BA68392D0BB026E61B81B65AD1B09CF9DB4D27 *)L_47))))
		{
			goto IL_0176;
		}
	}
	{
		// else if (direction == Left) validRect.xMax = Screen.height;
		int32_t L_48;
		L_48 = Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE(/*hidden argument*/NULL);
		Rect_set_xMax_m4E466ED07B11CC5457BD62517418C493C0DDF2E3((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_2), ((float)((float)L_48)), /*hidden argument*/NULL);
	}

IL_0176:
	{
		// best = new FocusableHierarchyTraversal
		// {
		//     currentFocusable = ve,
		//     direction = direction,
		//     validRect = validRect,
		//     firstPass = false
		// }.GetBestOverall(m_Root);
		il2cpp_codegen_initobj((&V_4), sizeof(FocusableHierarchyTraversal_t6D47905FA29D442881D3D9C243EA93E74712D48E ));
		VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * L_49 = V_0;
		(&V_4)->set_currentFocusable_0(L_49);
		ChangeDirection_t34BA68392D0BB026E61B81B65AD1B09CF9DB4D27 * L_50 = ___direction1;
		(&V_4)->set_direction_3(L_50);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_51 = V_2;
		(&V_4)->set_validRect_1(L_51);
		(&V_4)->set_firstPass_2((bool)0);
		VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * L_52 = __this->get_m_Root_6();
		VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * L_53;
		L_53 = FocusableHierarchyTraversal_GetBestOverall_mE1106D74720F7F24C94FDBC36CEF3A14587D11E4((FocusableHierarchyTraversal_t6D47905FA29D442881D3D9C243EA93E74712D48E *)(&V_4), L_52, (VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 *)NULL, /*hidden argument*/NULL);
		V_3 = L_53;
		// if (best != null)
		VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * L_54 = V_3;
		if (!L_54)
		{
			goto IL_01b7;
		}
	}
	{
		// return GetLeafFocusable(best);
		VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * L_55 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(NavigateFocusRing_t44CF1D05515ADB539414B52A64A7602739E6B826_il2cpp_TypeInfo_var);
		VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * L_56;
		L_56 = NavigateFocusRing_GetLeafFocusable_m671E5A45D0C16C902BFC8060D38AD6DBF1916B94(L_55, /*hidden argument*/NULL);
		return L_56;
	}

IL_01b7:
	{
		// return currentFocusable;
		Focusable_tF2E839AB6DBE413F04FC62347D7074D7377FD1E1 * L_57 = ___currentFocusable0;
		return L_57;
	}
}
// System.Boolean UnityEngine.UIElements.NavigateFocusRing::IsActive(UnityEngine.UIElements.VisualElement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NavigateFocusRing_IsActive_m9F034697B026C01735A19F0A83BA97F9A5EC3605 (VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * ___v0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IResolvedStyle_tD4CBBB1BAED5377381A22608EFF0079E45D58520_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return v.resolvedStyle.display != DisplayStyle.None && v.enabledInHierarchy;
		VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * L_0 = ___v0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = VisualElement_get_resolvedStyle_m940BF44C4B44B81D7CA268066783FB7F57452CBB(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(8 /* UnityEngine.UIElements.DisplayStyle UnityEngine.UIElements.IResolvedStyle::get_display() */, IResolvedStyle_tD4CBBB1BAED5377381A22608EFF0079E45D58520_il2cpp_TypeInfo_var, L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0015;
		}
	}
	{
		VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * L_3 = ___v0;
		NullCheck(L_3);
		bool L_4;
		L_4 = VisualElement_get_enabledInHierarchy_mDAC756C320614B99F19F5BB92F1CDDFC6DFF5EFE(L_3, /*hidden argument*/NULL);
		return L_4;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// System.Boolean UnityEngine.UIElements.NavigateFocusRing::IsFocusable(UnityEngine.UIElements.Focusable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NavigateFocusRing_IsFocusable_m0137D80B13592ABFE61B8AFEFC7643E2C04E7F04 (Focusable_tF2E839AB6DBE413F04FC62347D7074D7377FD1E1 * ___focusable0, const RuntimeMethod* method)
{
	{
		// return focusable.canGrabFocus && focusable.tabIndex >= 0;
		Focusable_tF2E839AB6DBE413F04FC62347D7074D7377FD1E1 * L_0 = ___focusable0;
		NullCheck(L_0);
		bool L_1;
		L_1 = VirtFuncInvoker0< bool >::Invoke(13 /* System.Boolean UnityEngine.UIElements.Focusable::get_canGrabFocus() */, L_0);
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		Focusable_tF2E839AB6DBE413F04FC62347D7074D7377FD1E1 * L_2 = ___focusable0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Focusable_get_tabIndex_m21C38A27D82ED394933E967FC3352DD0606F1657_inline(L_2, /*hidden argument*/NULL);
		return (bool)((((int32_t)((((int32_t)L_3) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0015:
	{
		return (bool)0;
	}
}
// System.Boolean UnityEngine.UIElements.NavigateFocusRing::IsLeaf(UnityEngine.UIElements.Focusable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NavigateFocusRing_IsLeaf_m88A7D007E2BB564284514117EB1A5E8FC92D3F71 (Focusable_tF2E839AB6DBE413F04FC62347D7074D7377FD1E1 * ___focusable0, const RuntimeMethod* method)
{
	{
		// return !focusable.excludeFromFocusRing && !focusable.delegatesFocus;
		Focusable_tF2E839AB6DBE413F04FC62347D7074D7377FD1E1 * L_0 = ___focusable0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Focusable_get_excludeFromFocusRing_mA2B7D086023F8118F07FA5A7D622F3B8AEC980E8_inline(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0012;
		}
	}
	{
		Focusable_tF2E839AB6DBE413F04FC62347D7074D7377FD1E1 * L_2 = ___focusable0;
		NullCheck(L_2);
		bool L_3;
		L_3 = Focusable_get_delegatesFocus_m78A51878C04A2D20D579A3890DCE9F62BE75DC3F_inline(L_2, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
	}

IL_0012:
	{
		return (bool)0;
	}
}
// System.Boolean UnityEngine.UIElements.NavigateFocusRing::IsFocusRoot(UnityEngine.UIElements.VisualElement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NavigateFocusRing_IsFocusRoot_m730561D3A95BB07B243AB22ACD533CCD9279E13C (VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * ___focusable0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NavigateFocusRing_t44CF1D05515ADB539414B52A64A7602739E6B826_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * V_0 = NULL;
	Hierarchy_tC971D6D195075C1B878D4B2558ECAD4E5FF6861A  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (focusable.isCompositeRoot) return true;
		VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * L_0 = ___focusable0;
		NullCheck(L_0);
		bool L_1;
		L_1 = VisualElement_get_isCompositeRoot_m6BCBB97C2A7FAA3723C81889E137F6972C973DB6(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000a;
		}
	}
	{
		// if (focusable.isCompositeRoot) return true;
		return (bool)1;
	}

IL_000a:
	{
		// var parent = focusable.hierarchy.parent;
		VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * L_2 = ___focusable0;
		NullCheck(L_2);
		Hierarchy_tC971D6D195075C1B878D4B2558ECAD4E5FF6861A  L_3;
		L_3 = VisualElement_get_hierarchy_mEE61B02E08154E767C2FCE1BDC903CBDF2A9B2BB_inline(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * L_4;
		L_4 = Hierarchy_get_parent_mE52DA934E9708109FCDECA315736A2BFE11195DA((Hierarchy_tC971D6D195075C1B878D4B2558ECAD4E5FF6861A *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_4;
		// return parent == null || !IsFocusable(parent);
		VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * L_5 = V_0;
		if (!L_5)
		{
			goto IL_0026;
		}
	}
	{
		VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * L_6 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(NavigateFocusRing_t44CF1D05515ADB539414B52A64A7602739E6B826_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = NavigateFocusRing_IsFocusable_m0137D80B13592ABFE61B8AFEFC7643E2C04E7F04(L_6, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_7) == ((int32_t)0))? 1 : 0);
	}

IL_0026:
	{
		return (bool)1;
	}
}
// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.NavigateFocusRing::GetLeafFocusable(UnityEngine.UIElements.VisualElement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * NavigateFocusRing_GetLeafFocusable_m671E5A45D0C16C902BFC8060D38AD6DBF1916B94 (VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * ___v0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NavigateFocusRing_t44CF1D05515ADB539414B52A64A7602739E6B826_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * G_B2_0 = NULL;
	VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * G_B1_0 = NULL;
	{
		// return GetLeafFocusableRecursive(v) ?? v;
		VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * L_0 = ___v0;
		IL2CPP_RUNTIME_CLASS_INIT(NavigateFocusRing_t44CF1D05515ADB539414B52A64A7602739E6B826_il2cpp_TypeInfo_var);
		VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * L_1;
		L_1 = NavigateFocusRing_GetLeafFocusableRecursive_mAC1ECACA6E234456E1E5BDBD0B2C5E7101768963(L_0, /*hidden argument*/NULL);
		VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_000b;
		}
	}
	{
		VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * L_3 = ___v0;
		G_B2_0 = L_3;
	}

IL_000b:
	{
		return G_B2_0;
	}
}
// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.NavigateFocusRing::GetLeafFocusableRecursive(UnityEngine.UIElements.VisualElement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * NavigateFocusRing_GetLeafFocusableRecursive_mAC1ECACA6E234456E1E5BDBD0B2C5E7101768963 (VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * ___v0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NavigateFocusRing_t44CF1D05515ADB539414B52A64A7602739E6B826_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * V_2 = NULL;
	VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * V_3 = NULL;
	{
		// if (IsLeaf(v))
		VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * L_0 = ___v0;
		IL2CPP_RUNTIME_CLASS_INIT(NavigateFocusRing_t44CF1D05515ADB539414B52A64A7602739E6B826_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = NavigateFocusRing_IsLeaf_m88A7D007E2BB564284514117EB1A5E8FC92D3F71(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000a;
		}
	}
	{
		// return v;
		VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * L_2 = ___v0;
		return L_2;
	}

IL_000a:
	{
		// int n = v.childCount;
		VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * L_3 = ___v0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = VisualElement_get_childCount_mA4C3D31DB972D8092EB35BB879230CDC5854898E(L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		// for (int i = 0; i < n; i++)
		V_1 = 0;
		goto IL_0035;
	}

IL_0015:
	{
		// var child = v[i];
		VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * L_5 = ___v0;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * L_7;
		L_7 = VisualElement_get_Item_m2B62EE36F910C6EB7BBD15421B4D727A441B64A3(L_5, L_6, /*hidden argument*/NULL);
		V_2 = L_7;
		// if (!IsFocusable(child))
		VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * L_8 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(NavigateFocusRing_t44CF1D05515ADB539414B52A64A7602739E6B826_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = NavigateFocusRing_IsFocusable_m0137D80B13592ABFE61B8AFEFC7643E2C04E7F04(L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0031;
		}
	}
	{
		// var leaf = GetLeafFocusableRecursive(child);
		VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * L_10 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(NavigateFocusRing_t44CF1D05515ADB539414B52A64A7602739E6B826_il2cpp_TypeInfo_var);
		VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * L_11;
		L_11 = NavigateFocusRing_GetLeafFocusableRecursive_mAC1ECACA6E234456E1E5BDBD0B2C5E7101768963(L_10, /*hidden argument*/NULL);
		V_3 = L_11;
		// if (leaf != null)
		VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * L_12 = V_3;
		if (!L_12)
		{
			goto IL_0031;
		}
	}
	{
		// return leaf;
		VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * L_13 = V_3;
		return L_13;
	}

IL_0031:
	{
		// for (int i = 0; i < n; i++)
		int32_t L_14 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
	}

IL_0035:
	{
		// for (int i = 0; i < n; i++)
		int32_t L_15 = V_1;
		int32_t L_16 = V_0;
		if ((((int32_t)L_15) < ((int32_t)L_16)))
		{
			goto IL_0015;
		}
	}
	{
		// return null;
		return (VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 *)NULL;
	}
}
// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.NavigateFocusRing::GetRootFocusable(UnityEngine.UIElements.VisualElement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * NavigateFocusRing_GetRootFocusable_m579F3BE194BE3FC6C83AF21F69661076ECD72125 (VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * ___v0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NavigateFocusRing_t44CF1D05515ADB539414B52A64A7602739E6B826_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Hierarchy_tC971D6D195075C1B878D4B2558ECAD4E5FF6861A  V_0;
	memset((&V_0), 0, sizeof(V_0));

IL_0000:
	{
		// if (IsFocusRoot(v))
		VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * L_0 = ___v0;
		IL2CPP_RUNTIME_CLASS_INIT(NavigateFocusRing_t44CF1D05515ADB539414B52A64A7602739E6B826_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = NavigateFocusRing_IsFocusRoot_m730561D3A95BB07B243AB22ACD533CCD9279E13C(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000a;
		}
	}
	{
		// return v;
		VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * L_2 = ___v0;
		return L_2;
	}

IL_000a:
	{
		// v = v.hierarchy.parent;
		VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * L_3 = ___v0;
		NullCheck(L_3);
		Hierarchy_tC971D6D195075C1B878D4B2558ECAD4E5FF6861A  L_4;
		L_4 = VisualElement_get_hierarchy_mEE61B02E08154E767C2FCE1BDC903CBDF2A9B2BB_inline(L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * L_5;
		L_5 = Hierarchy_get_parent_mE52DA934E9708109FCDECA315736A2BFE11195DA((Hierarchy_tC971D6D195075C1B878D4B2558ECAD4E5FF6861A *)(&V_0), /*hidden argument*/NULL);
		___v0 = L_5;
		// while (true)
		goto IL_0000;
	}
}
// System.Void UnityEngine.UIElements.NavigateFocusRing::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavigateFocusRing__cctor_m173004889D999BEE533587E73241F4D79651D2B4 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChangeDirection_t34BA68392D0BB026E61B81B65AD1B09CF9DB4D27_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NavigateFocusRing_t44CF1D05515ADB539414B52A64A7602739E6B826_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static readonly ChangeDirection Left = new ChangeDirection(1);
		ChangeDirection_t34BA68392D0BB026E61B81B65AD1B09CF9DB4D27 * L_0 = (ChangeDirection_t34BA68392D0BB026E61B81B65AD1B09CF9DB4D27 *)il2cpp_codegen_object_new(ChangeDirection_t34BA68392D0BB026E61B81B65AD1B09CF9DB4D27_il2cpp_TypeInfo_var);
		ChangeDirection__ctor_mD02F4FF0E700D195CD1D9D200B2FCE2B5E1EEEE6(L_0, 1, /*hidden argument*/NULL);
		((NavigateFocusRing_t44CF1D05515ADB539414B52A64A7602739E6B826_StaticFields*)il2cpp_codegen_static_fields_for(NavigateFocusRing_t44CF1D05515ADB539414B52A64A7602739E6B826_il2cpp_TypeInfo_var))->set_Left_0(L_0);
		// public static readonly ChangeDirection Right = new ChangeDirection(2);
		ChangeDirection_t34BA68392D0BB026E61B81B65AD1B09CF9DB4D27 * L_1 = (ChangeDirection_t34BA68392D0BB026E61B81B65AD1B09CF9DB4D27 *)il2cpp_codegen_object_new(ChangeDirection_t34BA68392D0BB026E61B81B65AD1B09CF9DB4D27_il2cpp_TypeInfo_var);
		ChangeDirection__ctor_mD02F4FF0E700D195CD1D9D200B2FCE2B5E1EEEE6(L_1, 2, /*hidden argument*/NULL);
		((NavigateFocusRing_t44CF1D05515ADB539414B52A64A7602739E6B826_StaticFields*)il2cpp_codegen_static_fields_for(NavigateFocusRing_t44CF1D05515ADB539414B52A64A7602739E6B826_il2cpp_TypeInfo_var))->set_Right_1(L_1);
		// public static readonly ChangeDirection Up = new ChangeDirection(3);
		ChangeDirection_t34BA68392D0BB026E61B81B65AD1B09CF9DB4D27 * L_2 = (ChangeDirection_t34BA68392D0BB026E61B81B65AD1B09CF9DB4D27 *)il2cpp_codegen_object_new(ChangeDirection_t34BA68392D0BB026E61B81B65AD1B09CF9DB4D27_il2cpp_TypeInfo_var);
		ChangeDirection__ctor_mD02F4FF0E700D195CD1D9D200B2FCE2B5E1EEEE6(L_2, 3, /*hidden argument*/NULL);
		((NavigateFocusRing_t44CF1D05515ADB539414B52A64A7602739E6B826_StaticFields*)il2cpp_codegen_static_fields_for(NavigateFocusRing_t44CF1D05515ADB539414B52A64A7602739E6B826_il2cpp_TypeInfo_var))->set_Up_2(L_2);
		// public static readonly ChangeDirection Down = new ChangeDirection(4);
		ChangeDirection_t34BA68392D0BB026E61B81B65AD1B09CF9DB4D27 * L_3 = (ChangeDirection_t34BA68392D0BB026E61B81B65AD1B09CF9DB4D27 *)il2cpp_codegen_object_new(ChangeDirection_t34BA68392D0BB026E61B81B65AD1B09CF9DB4D27_il2cpp_TypeInfo_var);
		ChangeDirection__ctor_mD02F4FF0E700D195CD1D9D200B2FCE2B5E1EEEE6(L_3, 4, /*hidden argument*/NULL);
		((NavigateFocusRing_t44CF1D05515ADB539414B52A64A7602739E6B826_StaticFields*)il2cpp_codegen_static_fields_for(NavigateFocusRing_t44CF1D05515ADB539414B52A64A7602739E6B826_il2cpp_TypeInfo_var))->set_Down_3(L_3);
		// public static readonly ChangeDirection Next = new ChangeDirection(5);
		ChangeDirection_t34BA68392D0BB026E61B81B65AD1B09CF9DB4D27 * L_4 = (ChangeDirection_t34BA68392D0BB026E61B81B65AD1B09CF9DB4D27 *)il2cpp_codegen_object_new(ChangeDirection_t34BA68392D0BB026E61B81B65AD1B09CF9DB4D27_il2cpp_TypeInfo_var);
		ChangeDirection__ctor_mD02F4FF0E700D195CD1D9D200B2FCE2B5E1EEEE6(L_4, 5, /*hidden argument*/NULL);
		((NavigateFocusRing_t44CF1D05515ADB539414B52A64A7602739E6B826_StaticFields*)il2cpp_codegen_static_fields_for(NavigateFocusRing_t44CF1D05515ADB539414B52A64A7602739E6B826_il2cpp_TypeInfo_var))->set_Next_4(L_4);
		// public static readonly ChangeDirection Previous = new ChangeDirection(6);
		ChangeDirection_t34BA68392D0BB026E61B81B65AD1B09CF9DB4D27 * L_5 = (ChangeDirection_t34BA68392D0BB026E61B81B65AD1B09CF9DB4D27 *)il2cpp_codegen_object_new(ChangeDirection_t34BA68392D0BB026E61B81B65AD1B09CF9DB4D27_il2cpp_TypeInfo_var);
		ChangeDirection__ctor_mD02F4FF0E700D195CD1D9D200B2FCE2B5E1EEEE6(L_5, 6, /*hidden argument*/NULL);
		((NavigateFocusRing_t44CF1D05515ADB539414B52A64A7602739E6B826_StaticFields*)il2cpp_codegen_static_fields_for(NavigateFocusRing_t44CF1D05515ADB539414B52A64A7602739E6B826_il2cpp_TypeInfo_var))->set_Previous_5(L_5);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.UIElements.StyleSheet UnityEngine.UIElements.PanelSettings::get_themeStyleSheet()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleSheet_t7B6AD8DA876D813A48084D1587CF283490AA0093 * PanelSettings_get_themeStyleSheet_mC0EE9755C1450A73E4196297B6DA7510D4BC7E86 (PanelSettings_tA06886CA55D7F3105153641E0BA56FF15E8DCA69 * __this, const RuntimeMethod* method)
{
	{
		// get { return themeUss; }
		StyleSheet_t7B6AD8DA876D813A48084D1587CF283490AA0093 * L_0 = __this->get_themeUss_7();
		return L_0;
	}
}
// System.Void UnityEngine.UIElements.PanelSettings::set_themeStyleSheet(UnityEngine.UIElements.StyleSheet)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanelSettings_set_themeStyleSheet_m54A79532755BCC2E92017F83D4267F651A948797 (PanelSettings_tA06886CA55D7F3105153641E0BA56FF15E8DCA69 * __this, StyleSheet_t7B6AD8DA876D813A48084D1587CF283490AA0093 * ___value0, const RuntimeMethod* method)
{
	{
		// themeUss = value;
		StyleSheet_t7B6AD8DA876D813A48084D1587CF283490AA0093 * L_0 = ___value0;
		__this->set_themeUss_7(L_0);
		// ApplyThemeStyleSheet();
		PanelSettings_ApplyThemeStyleSheet_mFC4B8A436016700EAAC120FC79E821378D1C4F8E(__this, (VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 *)NULL, /*hidden argument*/NULL);
		// }
		return;
	}
}
// UnityEngine.RenderTexture UnityEngine.UIElements.PanelSettings::get_targetTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * PanelSettings_get_targetTexture_mECC14702FCCB6939AA0F221E611971BB28A306F3 (PanelSettings_tA06886CA55D7F3105153641E0BA56FF15E8DCA69 * __this, const RuntimeMethod* method)
{
	{
		// get => m_TargetTexture;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_0 = __this->get_m_TargetTexture_8();
		return L_0;
	}
}
// System.Void UnityEngine.UIElements.PanelSettings::set_targetTexture(UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanelSettings_set_targetTexture_m5D0257CEC458EB28F96CAD49AC83662EFC3EED8A (PanelSettings_tA06886CA55D7F3105153641E0BA56FF15E8DCA69 * __this, RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___value0, const RuntimeMethod* method)
{
	{
		// m_TargetTexture = value;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_0 = ___value0;
		__this->set_m_TargetTexture_8(L_0);
		// if (m_RuntimePanel != null)
		BaseRuntimePanel_tE55DB58DC0A1F524F98CC999672C716946DA4754 * L_1 = __this->get_m_RuntimePanel_22();
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		// m_RuntimePanel.targetTexture = m_TargetTexture;
		BaseRuntimePanel_tE55DB58DC0A1F524F98CC999672C716946DA4754 * L_2 = __this->get_m_RuntimePanel_22();
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_3 = __this->get_m_TargetTexture_8();
		NullCheck(L_2);
		L_2->set_targetTexture_49(L_3);
	}

IL_0020:
	{
		// }
		return;
	}
}
// UnityEngine.UIElements.PanelScaleModes UnityEngine.UIElements.PanelSettings::get_scaleMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PanelSettings_get_scaleMode_m29F6F2F593761D9A03DD5768B180F100F724A8BE (PanelSettings_tA06886CA55D7F3105153641E0BA56FF15E8DCA69 * __this, const RuntimeMethod* method)
{
	{
		// get => m_ScaleMode;
		int32_t L_0 = __this->get_m_ScaleMode_9();
		return L_0;
	}
}
// System.Void UnityEngine.UIElements.PanelSettings::set_scaleMode(UnityEngine.UIElements.PanelScaleModes)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanelSettings_set_scaleMode_m6032F062E8E395018379A4DAF6DF0F79A2CCDF71 (PanelSettings_tA06886CA55D7F3105153641E0BA56FF15E8DCA69 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// set => m_ScaleMode = value;
		int32_t L_0 = ___value0;
		__this->set_m_ScaleMode_9(L_0);
		return;
	}
}
// System.Single UnityEngine.UIElements.PanelSettings::get_scale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PanelSettings_get_scale_m28C5C65DF239BCBCFBDD0C4F89AC2305B87D381B (PanelSettings_tA06886CA55D7F3105153641E0BA56FF15E8DCA69 * __this, const RuntimeMethod* method)
{
	{
		// get => m_Scale;
		float L_0 = __this->get_m_Scale_10();
		return L_0;
	}
}
// System.Void UnityEngine.UIElements.PanelSettings::set_scale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanelSettings_set_scale_m3A882D23FF7C6871FA61DEB1C868823B69928F0D (PanelSettings_tA06886CA55D7F3105153641E0BA56FF15E8DCA69 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set => m_Scale = value;
		float L_0 = ___value0;
		__this->set_m_Scale_10(L_0);
		return;
	}
}
// System.Single UnityEngine.UIElements.PanelSettings::get_referenceDpi()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PanelSettings_get_referenceDpi_m2FC31DBE36463D52C56E7DA987C1C06213E0692D (PanelSettings_tA06886CA55D7F3105153641E0BA56FF15E8DCA69 * __this, const RuntimeMethod* method)
{
	{
		// get => m_ReferenceDpi;
		float L_0 = __this->get_m_ReferenceDpi_12();
		return L_0;
	}
}
// System.Void UnityEngine.UIElements.PanelSettings::set_referenceDpi(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanelSettings_set_referenceDpi_m43E2569200FEAD950EC5112453086D78A1C69101 (PanelSettings_tA06886CA55D7F3105153641E0BA56FF15E8DCA69 * __this, float ___value0, const RuntimeMethod* method)
{
	PanelSettings_tA06886CA55D7F3105153641E0BA56FF15E8DCA69 * G_B2_0 = NULL;
	PanelSettings_tA06886CA55D7F3105153641E0BA56FF15E8DCA69 * G_B1_0 = NULL;
	float G_B3_0 = 0.0f;
	PanelSettings_tA06886CA55D7F3105153641E0BA56FF15E8DCA69 * G_B3_1 = NULL;
	{
		// set => m_ReferenceDpi = (value >= 1.0f) ? value : DefaultDpi;
		float L_0 = ___value0;
		G_B1_0 = __this;
		if ((((float)L_0) >= ((float)(1.0f))))
		{
			G_B2_0 = __this;
			goto IL_0010;
		}
	}
	{
		G_B3_0 = (96.0f);
		G_B3_1 = G_B1_0;
		goto IL_0011;
	}

IL_0010:
	{
		float L_1 = ___value0;
		G_B3_0 = L_1;
		G_B3_1 = G_B2_0;
	}

IL_0011:
	{
		NullCheck(G_B3_1);
		G_B3_1->set_m_ReferenceDpi_12(G_B3_0);
		return;
	}
}
// System.Single UnityEngine.UIElements.PanelSettings::get_fallbackDpi()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PanelSettings_get_fallbackDpi_mF33EE03C381EDDC10E5BF501C382B8887B70F26F (PanelSettings_tA06886CA55D7F3105153641E0BA56FF15E8DCA69 * __this, const RuntimeMethod* method)
{
	{
		// get => m_FallbackDpi;
		float L_0 = __this->get_m_FallbackDpi_13();
		return L_0;
	}
}
// System.Void UnityEngine.UIElements.PanelSettings::set_fallbackDpi(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanelSettings_set_fallbackDpi_mF5890EA9A861CB93E3E791A3E33FC548AA617A76 (PanelSettings_tA06886CA55D7F3105153641E0BA56FF15E8DCA69 * __this, float ___value0, const RuntimeMethod* method)
{
	PanelSettings_tA06886CA55D7F3105153641E0BA56FF15E8DCA69 * G_B2_0 = NULL;
	PanelSettings_tA06886CA55D7F3105153641E0BA56FF15E8DCA69 * G_B1_0 = NULL;
	float G_B3_0 = 0.0f;
	PanelSettings_tA06886CA55D7F3105153641E0BA56FF15E8DCA69 * G_B3_1 = NULL;
	{
		// set => m_FallbackDpi = (value >= 1.0f) ? value : DefaultDpi;
		float L_0 = ___value0;
		G_B1_0 = __this;
		if ((((float)L_0) >= ((float)(1.0f))))
		{
			G_B2_0 = __this;
			goto IL_0010;
		}
	}
	{
		G_B3_0 = (96.0f);
		G_B3_1 = G_B1_0;
		goto IL_0011;
	}

IL_0010:
	{
		float L_1 = ___value0;
		G_B3_0 = L_1;
		G_B3_1 = G_B2_0;
	}

IL_0011:
	{
		NullCheck(G_B3_1);
		G_B3_1->set_m_FallbackDpi_13(G_B3_0);
		return;
	}
}
// UnityEngine.Vector2Int UnityEngine.UIElements.PanelSettings::get_referenceResolution()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  PanelSettings_get_referenceResolution_mD72C52914CF23C55D87F21CD746A36B389363432 (PanelSettings_tA06886CA55D7F3105153641E0BA56FF15E8DCA69 * __this, const RuntimeMethod* method)
{
	{
		// get => m_ReferenceResolution;
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_0 = __this->get_m_ReferenceResolution_14();
		return L_0;
	}
}
// System.Void UnityEngine.UIElements.PanelSettings::set_referenceResolution(UnityEngine.Vector2Int)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanelSettings_set_referenceResolution_m4FC7FA3B35B4CEFAF9B9734CC57FBC5FF29706E0 (PanelSettings_tA06886CA55D7F3105153641E0BA56FF15E8DCA69 * __this, Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___value0, const RuntimeMethod* method)
{
	{
		// set => m_ReferenceResolution = value;
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_0 = ___value0;
		__this->set_m_ReferenceResolution_14(L_0);
		return;
	}
}
// UnityEngine.UIElements.PanelScreenMatchModes UnityEngine.UIElements.PanelSettings::get_screenMatchMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PanelSettings_get_screenMatchMode_m69009B50BD8B63444548F86574F6B7D43043D5C2 (PanelSettings_tA06886CA55D7F3105153641E0BA56FF15E8DCA69 * __this, const RuntimeMethod* method)
{
	{
		// get => m_ScreenMatchMode;
		int32_t L_0 = __this->get_m_ScreenMatchMode_15();
		return L_0;
	}
}
// System.Void UnityEngine.UIElements.PanelSettings::set_screenMatchMode(UnityEngine.UIElements.PanelScreenMatchModes)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanelSettings_set_screenMatchMode_mDE0AB5FB5306AAAE44748F2096F5A2776DC41B49 (PanelSettings_tA06886CA55D7F3105153641E0BA56FF15E8DCA69 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// set => m_ScreenMatchMode = value;
		int32_t L_0 = ___value0;
		__this->set_m_ScreenMatchMode_15(L_0);
		return;
	}
}
// System.Single UnityEngine.UIElements.PanelSettings::get_match()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PanelSettings_get_match_m85BF6EEE7C48D6D387F600747265D124E623EFB9 (PanelSettings_tA06886CA55D7F3105153641E0BA56FF15E8DCA69 * __this, const RuntimeMethod* method)
{
	{
		// get => m_Match;
		float L_0 = __this->get_m_Match_16();
		return L_0;
	}
}
// System.Void UnityEngine.UIElements.PanelSettings::set_match(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanelSettings_set_match_m1E0EAA2CA1842C0AE29E2BFFD921A1F6EC4CFE57 (PanelSettings_tA06886CA55D7F3105153641E0BA56FF15E8DCA69 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set => m_Match = value;
		float L_0 = ___value0;
		__this->set_m_Match_16(L_0);
		return;
	}
}
// System.Single UnityEngine.UIElements.PanelSettings::get_sortingOrder()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PanelSettings_get_sortingOrder_mB05D688334646EDC8BA49CCBCDEEA472B556B33F (PanelSettings_tA06886CA55D7F3105153641E0BA56FF15E8DCA69 * __this, const RuntimeMethod* method)
{
	{
		// get => m_SortingOrder;
		float L_0 = __this->get_m_SortingOrder_17();
		return L_0;
	}
}
// System.Void UnityEngine.UIElements.PanelSettings::set_sortingOrder(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanelSettings_set_sortingOrder_m6F6BC33D5079691340A34E246E7224EE5A27C0FA (PanelSettings_tA06886CA55D7F3105153641E0BA56FF15E8DCA69 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// m_SortingOrder = value;
		float L_0 = ___value0;
		__this->set_m_SortingOrder_17(L_0);
		// ApplySortingOrder();
		PanelSettings_ApplySortingOrder_m9579858CA0C4952D0591238AE3F5960D19E4559A(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.UIElements.PanelSettings::ApplySortingOrder()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanelSettings_ApplySortingOrder_m9579858CA0C4952D0591238AE3F5960D19E4559A (PanelSettings_tA06886CA55D7F3105153641E0BA56FF15E8DCA69 * __this, const RuntimeMethod* method)
{
	{
		// if (m_RuntimePanel != null)
		BaseRuntimePanel_tE55DB58DC0A1F524F98CC999672C716946DA4754 * L_0 = __this->get_m_RuntimePanel_22();
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		// m_RuntimePanel.sortingPriority = m_SortingOrder;
		BaseRuntimePanel_tE55DB58DC0A1F524F98CC999672C716946DA4754 * L_1 = __this->get_m_RuntimePanel_22();
		float L_2 = __this->get_m_SortingOrder_17();
		NullCheck(L_1);
		BaseVisualElementPanel_set_sortingPriority_mEAC3C272F1993604C5273F96ED04B2D32D12060B(L_1, L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		// }
		return;
	}
}
// System.Int32 UnityEngine.UIElements.PanelSettings::get_targetDisplay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PanelSettings_get_targetDisplay_m2B5CF2AFF5271E8188FC81F258C8015A247811F6 (PanelSettings_tA06886CA55D7F3105153641E0BA56FF15E8DCA69 * __this, const RuntimeMethod* method)
{
	{
		// get => m_TargetDisplay;
		int32_t L_0 = __this->get_m_TargetDisplay_18();
		return L_0;
	}
}
// System.Void UnityEngine.UIElements.PanelSettings::set_targetDisplay(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanelSettings_set_targetDisplay_m0E92DC714A9F7E96ACD24540F0F843785444E151 (PanelSettings_tA06886CA55D7F3105153641E0BA56FF15E8DCA69 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// if (value < -128 || value > 127)
		int32_t L_0 = ___value0;
		if ((((int32_t)L_0) < ((int32_t)((int32_t)-128))))
		{
			goto IL_000a;
		}
	}
	{
		int32_t L_1 = ___value0;
		if ((((int32_t)L_1) <= ((int32_t)((int32_t)127))))
		{
			goto IL_001a;
		}
	}

IL_000a:
	{
		// throw new ArgumentOutOfRangeException(nameof(targetDisplay), "Display index is out of supported range");
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_2 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE43AFC74F5F3932913C023A04B24905E093C5005(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC8B4992E5FEE587EA2295F1BD0BFB52535A5F706)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2ECA7405B2C7C57064207C5E3B40B00021FF79A4)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PanelSettings_set_targetDisplay_m0E92DC714A9F7E96ACD24540F0F843785444E151_RuntimeMethod_var)));
	}

IL_001a:
	{
		// m_TargetDisplay = value;
		int32_t L_3 = ___value0;
		__this->set_m_TargetDisplay_18(L_3);
		// if (m_RuntimePanel != null)
		BaseRuntimePanel_tE55DB58DC0A1F524F98CC999672C716946DA4754 * L_4 = __this->get_m_RuntimePanel_22();
		if (!L_4)
		{
			goto IL_003a;
		}
	}
	{
		// m_RuntimePanel.targetDisplay = m_TargetDisplay;
		BaseRuntimePanel_tE55DB58DC0A1F524F98CC999672C716946DA4754 * L_5 = __this->get_m_RuntimePanel_22();
		int32_t L_6 = __this->get_m_TargetDisplay_18();
		NullCheck(L_5);
		BaseRuntimePanel_set_targetDisplay_m66A207FC22EA486A2E3091852DDD3AAD2F557269_inline(L_5, L_6, /*hidden argument*/NULL);
	}

IL_003a:
	{
		// }
		return;
	}
}
// System.Boolean UnityEngine.UIElements.PanelSettings::get_clearDepthStencil()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PanelSettings_get_clearDepthStencil_m2D799A7631E400713602390B25BA400131642B46 (PanelSettings_tA06886CA55D7F3105153641E0BA56FF15E8DCA69 * __this, const RuntimeMethod* method)
{
	{
		// get => m_ClearDepthStencil;
		bool L_0 = __this->get_m_ClearDepthStencil_19();
		return L_0;
	}
}
// System.Void UnityEngine.UIElements.PanelSettings::set_clearDepthStencil(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanelSettings_set_clearDepthStencil_mCEB0544D5E2FDD45ED118DB24E07C1634FDFFFA1 (PanelSettings_tA06886CA55D7F3105153641E0BA56FF15E8DCA69 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set => m_ClearDepthStencil = value;
		bool L_0 = ___value0;
		__this->set_m_ClearDepthStencil_19(L_0);
		return;
	}
}
// System.Single UnityEngine.UIElements.PanelSettings::get_depthClearValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PanelSettings_get_depthClearValue_m7ACA258B94D7453C81024809740B5208FC347880 (PanelSettings_tA06886CA55D7F3105153641E0BA56FF15E8DCA69 * __this, const RuntimeMethod* method)
{
	{
		// get => UIRUtility.k_ClearZ;
		return (0.99000001f);
	}
}
// System.Boolean UnityEngine.UIElements.PanelSettings::get_clearColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PanelSettings_get_clearColor_m26A6239C3D99D5C3249BCDEEE9C8EFCF484250B8 (PanelSettings_tA06886CA55D7F3105153641E0BA56FF15E8DCA69 * __this, const RuntimeMethod* method)
{
	{
		// get => m_ClearColor;
		bool L_0 = __this->get_m_ClearColor_20();
		return L_0;
	}
}
// System.Void UnityEngine.UIElements.PanelSettings::set_clearColor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanelSettings_set_clearColor_m51AF3EAB495F7F339BA1A549312B14E619F54939 (PanelSettings_tA06886CA55D7F3105153641E0BA56FF15E8DCA69 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set => m_ClearColor = value;
		bool L_0 = ___value0;
		__this->set_m_ClearColor_20(L_0);
		return;
	}
}
// UnityEngine.Color UnityEngine.UIElements.PanelSettings::get_colorClearValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  PanelSettings_get_colorClearValue_m537447BE524D4C55D95FE3F6F6FF1E937BE6E1F2 (PanelSettings_tA06886CA55D7F3105153641E0BA56FF15E8DCA69 * __this, const RuntimeMethod* method)
{
	{
		// get => m_ColorClearValue;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_0 = __this->get_m_ColorClearValue_21();
		return L_0;
	}
}
// System.Void UnityEngine.UIElements.PanelSettings::set_colorClearValue(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanelSettings_set_colorClearValue_m630C927BC3CA702E9074E2F889D5BE5867649652 (PanelSettings_tA06886CA55D7F3105153641E0BA56FF15E8DCA69 * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value0, const RuntimeMethod* method)
{
	{
		// set => m_ColorClearValue = value;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_0 = ___value0;
		__this->set_m_ColorClearValue_21(L_0);
		return;
	}
}
// UnityEngine.UIElements.BaseRuntimePanel UnityEngine.UIElements.PanelSettings::get_panel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BaseRuntimePanel_tE55DB58DC0A1F524F98CC999672C716946DA4754 * PanelSettings_get_panel_m2B9826508E23C23D4F716A96B52AB2712865FB83 (PanelSettings_tA06886CA55D7F3105153641E0BA56FF15E8DCA69 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * V_0 = NULL;
	{
		// if (m_RuntimePanel == null)
		BaseRuntimePanel_tE55DB58DC0A1F524F98CC999672C716946DA4754 * L_0 = __this->get_m_RuntimePanel_22();
		if (L_0)
		{
			goto IL_009c;
		}
	}
	{
		// m_RuntimePanel = CreateRelatedRuntimePanel();
		BaseRuntimePanel_tE55DB58DC0A1F524F98CC999672C716946DA4754 * L_1;
		L_1 = PanelSettings_CreateRelatedRuntimePanel_m7F53F698DACCD6F4F3CC1F71301F93BBF350FF22(__this, /*hidden argument*/NULL);
		__this->set_m_RuntimePanel_22(L_1);
		// m_RuntimePanel.sortingPriority = m_SortingOrder;
		BaseRuntimePanel_tE55DB58DC0A1F524F98CC999672C716946DA4754 * L_2 = __this->get_m_RuntimePanel_22();
		float L_3 = __this->get_m_SortingOrder_17();
		NullCheck(L_2);
		BaseVisualElementPanel_set_sortingPriority_mEAC3C272F1993604C5273F96ED04B2D32D12060B(L_2, L_3, /*hidden argument*/NULL);
		// var root = m_RuntimePanel.visualTree;
		BaseRuntimePanel_tE55DB58DC0A1F524F98CC999672C716946DA4754 * L_4 = __this->get_m_RuntimePanel_22();
		NullCheck(L_4);
		VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * L_5;
		L_5 = VirtFuncInvoker0< VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * >::Invoke(33 /* UnityEngine.UIElements.VisualElement UnityEngine.UIElements.BaseVisualElementPanel::get_visualTree() */, L_4);
		V_0 = L_5;
		// root.name = name;
		VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * L_6 = V_0;
		String_t* L_7;
		L_7 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		VisualElement_set_name_mDB6550DDF46AA91580362C2DF69C232F5D260BD4(L_6, L_7, /*hidden argument*/NULL);
		// ApplyThemeStyleSheet(root);
		VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * L_8 = V_0;
		PanelSettings_ApplyThemeStyleSheet_mFC4B8A436016700EAAC120FC79E821378D1C4F8E(__this, L_8, /*hidden argument*/NULL);
		// if (m_TargetTexture != null)
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_9 = __this->get_m_TargetTexture_8();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_9, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0066;
		}
	}
	{
		// m_RuntimePanel.targetTexture = m_TargetTexture;
		BaseRuntimePanel_tE55DB58DC0A1F524F98CC999672C716946DA4754 * L_11 = __this->get_m_RuntimePanel_22();
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_12 = __this->get_m_TargetTexture_8();
		NullCheck(L_11);
		L_11->set_targetTexture_49(L_12);
	}

IL_0066:
	{
		// if (m_AssignedScreenToPanel != null)
		Func_2_tB3D19331301201246DE473D608119BB47D418EB9 * L_13 = __this->get_m_AssignedScreenToPanel_31();
		if (!L_13)
		{
			goto IL_007a;
		}
	}
	{
		// SetScreenToPanelSpaceFunction(m_AssignedScreenToPanel);
		Func_2_tB3D19331301201246DE473D608119BB47D418EB9 * L_14 = __this->get_m_AssignedScreenToPanel_31();
		PanelSettings_SetScreenToPanelSpaceFunction_mF097345392830310AF99BDE8F7DBB58AA99209E2(__this, L_14, /*hidden argument*/NULL);
	}

IL_007a:
	{
		// m_RuntimePanel.targetDisplay = targetDisplay;
		BaseRuntimePanel_tE55DB58DC0A1F524F98CC999672C716946DA4754 * L_15 = __this->get_m_RuntimePanel_22();
		int32_t L_16;
		L_16 = PanelSettings_get_targetDisplay_m2B5CF2AFF5271E8188FC81F258C8015A247811F6_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_15);
		BaseRuntimePanel_set_targetDisplay_m66A207FC22EA486A2E3091852DDD3AAD2F557269_inline(L_15, L_16, /*hidden argument*/NULL);
		// m_RuntimePanel.sortingPriority = sortingOrder;
		BaseRuntimePanel_tE55DB58DC0A1F524F98CC999672C716946DA4754 * L_17 = __this->get_m_RuntimePanel_22();
		float L_18;
		L_18 = PanelSettings_get_sortingOrder_mB05D688334646EDC8BA49CCBCDEEA472B556B33F_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_17);
		BaseVisualElementPanel_set_sortingPriority_mEAC3C272F1993604C5273F96ED04B2D32D12060B(L_17, L_18, /*hidden argument*/NULL);
	}

IL_009c:
	{
		// return m_RuntimePanel;
		BaseRuntimePanel_tE55DB58DC0A1F524F98CC999672C716946DA4754 * L_19 = __this->get_m_RuntimePanel_22();
		return L_19;
	}
}
// System.Void UnityEngine.UIElements.PanelSettings::set_panel(UnityEngine.UIElements.BaseRuntimePanel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanelSettings_set_panel_m15890A7466CF8ACD3BF15C6AD750E3D1CCD368C1 (PanelSettings_tA06886CA55D7F3105153641E0BA56FF15E8DCA69 * __this, BaseRuntimePanel_tE55DB58DC0A1F524F98CC999672C716946DA4754 * ___value0, const RuntimeMethod* method)
{
	{
		// if (m_RuntimePanel != null)
		BaseRuntimePanel_tE55DB58DC0A1F524F98CC999672C716946DA4754 * L_0 = __this->get_m_RuntimePanel_22();
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		// DisposeRelatedPanel();
		PanelSettings_DisposeRelatedPanel_m2ECC3B2AEBC1D7BF224E74231F4A2A458EB7BF83(__this, /*hidden argument*/NULL);
		// m_RuntimePanel = null;
		__this->set_m_RuntimePanel_22((BaseRuntimePanel_tE55DB58DC0A1F524F98CC999672C716946DA4754 *)NULL);
	}

IL_0015:
	{
		// }
		return;
	}
}
// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.PanelSettings::get_visualTree()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * PanelSettings_get_visualTree_m09CAA1B5289168AF6F1F0FE2714DCA5EDE9CC170 (PanelSettings_tA06886CA55D7F3105153641E0BA56FF15E8DCA69 * __this, const RuntimeMethod* method)
{
	{
		// internal VisualElement visualTree => panel.visualTree;
		BaseRuntimePanel_tE55DB58DC0A1F524F98CC999672C716946DA4754 * L_0;
		L_0 = PanelSettings_get_panel_m2B9826508E23C23D4F716A96B52AB2712865FB83(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * L_1;
		L_1 = VirtFuncInvoker0< VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * >::Invoke(33 /* UnityEngine.UIElements.VisualElement UnityEngine.UIElements.BaseVisualElementPanel::get_visualTree() */, L_0);
		return L_1;
	}
}
// UnityEngine.UIElements.DynamicAtlasSettings UnityEngine.UIElements.PanelSettings::get_dynamicAtlasSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DynamicAtlasSettings_t851C8E0D9506CB6B36AE277F8FCE439C89097806 * PanelSettings_get_dynamicAtlasSettings_mA7CD01ECC21C5FE2E53BC5E891DDDD4A36A3D116 (PanelSettings_tA06886CA55D7F3105153641E0BA56FF15E8DCA69 * __this, const RuntimeMethod* method)
{
	{
		// public DynamicAtlasSettings dynamicAtlasSettings { get => m_DynamicAtlasSettings; set => m_DynamicAtlasSettings = value; }
		DynamicAtlasSettings_t851C8E0D9506CB6B36AE277F8FCE439C89097806 * L_0 = __this->get_m_DynamicAtlasSettings_24();
		return L_0;
	}
}
// System.Void UnityEngine.UIElements.PanelSettings::set_dynamicAtlasSettings(UnityEngine.UIElements.DynamicAtlasSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanelSettings_set_dynamicAtlasSettings_mB302D660EDEED1988ABB267043B445CD78B3F4A3 (PanelSettings_tA06886CA55D7F3105153641E0BA56FF15E8DCA69 * __this, DynamicAtlasSettings_t851C8E0D9506CB6B36AE277F8FCE439C89097806 * ___value0, const RuntimeMethod* method)
{
	{
		// public DynamicAtlasSettings dynamicAtlasSettings { get => m_DynamicAtlasSettings; set => m_DynamicAtlasSettings = value; }
		DynamicAtlasSettings_t851C8E0D9506CB6B36AE277F8FCE439C89097806 * L_0 = ___value0;
		__this->set_m_DynamicAtlasSettings_24(L_0);
		return;
	}
}
// System.Void UnityEngine.UIElements.PanelSettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanelSettings__ctor_m890F5D27DD7C12D6EE9CBBDD2AE7D7B293EDFC77 (PanelSettings_tA06886CA55D7F3105153641E0BA56FF15E8DCA69 * __this, const RuntimeMethod* method)
{
	{
		// private PanelScaleModes m_ScaleMode = PanelScaleModes.ConstantPhysicalSize;
		__this->set_m_ScaleMode_9(1);
		// private float m_Scale = k_DefaultScaleValue;
		__this->set_m_Scale_10((1.0f));
		// private float m_ReferenceDpi = DefaultDpi;
		__this->set_m_ReferenceDpi_12((96.0f));
		// private float m_FallbackDpi = DefaultDpi;
		__this->set_m_FallbackDpi_13((96.0f));
		// private Vector2Int m_ReferenceResolution = new Vector2Int(1200, 800);
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector2Int__ctor_mB2B73108B6DD3ADC1B515D7DD9116ECAC6833726_inline((&L_0), ((int32_t)1200), ((int32_t)800), /*hidden argument*/NULL);
		__this->set_m_ReferenceResolution_14(L_0);
		// bool m_ClearDepthStencil = true;
		__this->set_m_ClearDepthStencil_19((bool)1);
		// Color m_ColorClearValue = Color.clear;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_1;
		L_1 = Color_get_clear_m9F8076CEFE7B8119A9903212DCBF2BFED114E97F(/*hidden argument*/NULL);
		__this->set_m_ColorClearValue_21(L_1);
		// DynamicAtlasSettings m_DynamicAtlasSettings = DynamicAtlasSettings.defaults;
		DynamicAtlasSettings_t851C8E0D9506CB6B36AE277F8FCE439C89097806 * L_2;
		L_2 = DynamicAtlasSettings_get_defaults_m66394E6E9FA2856F33282B0B655468F423381FE7(/*hidden argument*/NULL);
		__this->set_m_DynamicAtlasSettings_24(L_2);
		// private PanelSettings() {}
		ScriptableObject__ctor_m8DAE6CDCFA34E16F2543B02CC3669669FF203063(__this, /*hidden argument*/NULL);
		// private PanelSettings() {}
		return;
	}
}
// System.Void UnityEngine.UIElements.PanelSettings::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanelSettings_Reset_mE87F349212A75ABB9BDEDE7064D671C063028C38 (PanelSettings_tA06886CA55D7F3105153641E0BA56FF15E8DCA69 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void UnityEngine.UIElements.PanelSettings::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanelSettings_OnEnable_m558759AD5FA9DC3E1C541D54D0546996305CE410 (PanelSettings_tA06886CA55D7F3105153641E0BA56FF15E8DCA69 * __this, const RuntimeMethod* method)
{
	{
		// InitializeShaders();
		PanelSettings_InitializeShaders_mC988B0154294E8F8732E388C46838E31BDE7872F(__this, /*hidden argument*/NULL);
		// InitializeTextSettings();
		PanelSettings_InitializeTextSettings_m6CD9A891740B4AA855CC47CAC4879EB16EC031A7(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.UIElements.PanelSettings::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanelSettings_OnDisable_m8DF1F5D5CF5A50C6887862ACE54D8F86C5405705 (PanelSettings_tA06886CA55D7F3105153641E0BA56FF15E8DCA69 * __this, const RuntimeMethod* method)
{
	{
		// panel = null;
		PanelSettings_set_panel_m15890A7466CF8ACD3BF15C6AD750E3D1CCD368C1(__this, (BaseRuntimePanel_tE55DB58DC0A1F524F98CC999672C716946DA4754 *)NULL, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.UIElements.PanelSettings::ApplyThemeStyleSheet(UnityEngine.UIElements.VisualElement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanelSettings_ApplyThemeStyleSheet_mFC4B8A436016700EAAC120FC79E821378D1C4F8E (PanelSettings_tA06886CA55D7F3105153641E0BA56FF15E8DCA69 * __this, VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * ___root0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	VisualElementStyleSheetSet_tDDF1C0701442D9D8D928AC655823313F07E1B0F5  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (m_RuntimePanel == null)
		BaseRuntimePanel_tE55DB58DC0A1F524F98CC999672C716946DA4754 * L_0 = __this->get_m_RuntimePanel_22();
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// if (root == null)
		VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * L_1 = ___root0;
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		// root = visualTree;
		VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * L_2;
		L_2 = PanelSettings_get_visualTree_m09CAA1B5289168AF6F1F0FE2714DCA5EDE9CC170(__this, /*hidden argument*/NULL);
		___root0 = L_2;
	}

IL_0014:
	{
		// if (themeUss != null)
		StyleSheet_t7B6AD8DA876D813A48084D1587CF283490AA0093 * L_3 = __this->get_themeUss_7();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_3, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0045;
		}
	}
	{
		// themeUss.isUnityStyleSheet = true;
		StyleSheet_t7B6AD8DA876D813A48084D1587CF283490AA0093 * L_5 = __this->get_themeUss_7();
		NullCheck(L_5);
		L_5->set_isUnityStyleSheet_18((bool)1);
		// root?.styleSheets.Add(themeUss);
		VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * L_6 = ___root0;
		if (!L_6)
		{
			goto IL_0045;
		}
	}
	{
		VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * L_7 = ___root0;
		NullCheck(L_7);
		VisualElementStyleSheetSet_tDDF1C0701442D9D8D928AC655823313F07E1B0F5  L_8;
		L_8 = VisualElement_get_styleSheets_m1CE835F433F15BF92FB507A28CB193A36F107649(L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		StyleSheet_t7B6AD8DA876D813A48084D1587CF283490AA0093 * L_9 = __this->get_themeUss_7();
		VisualElementStyleSheetSet_Add_mDAB4C14E7E0DFB0CE25AFACE6B0FD508821F081D((VisualElementStyleSheetSet_tDDF1C0701442D9D8D928AC655823313F07E1B0F5 *)(&V_0), L_9, /*hidden argument*/NULL);
	}

IL_0045:
	{
		// }
		return;
	}
}
// UnityEngine.UIElements.BaseRuntimePanel UnityEngine.UIElements.PanelSettings::CreateRelatedRuntimePanel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BaseRuntimePanel_tE55DB58DC0A1F524F98CC999672C716946DA4754 * PanelSettings_CreateRelatedRuntimePanel_m7F53F698DACCD6F4F3CC1F71301F93BBF350FF22 (PanelSettings_tA06886CA55D7F3105153641E0BA56FF15E8DCA69 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CreateRuntimePanelDelegate_t0EEBC61860CC3E2C6777076F6F65CF11EE029F53_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimePanel_Create_m1571E8867FCEAE5F0E0FC8BCFF4B0A1D4BB9A8C3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimePanel_t6D5485B3EB9C598452C70E12357282E046DD1409_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIElementsRuntimeUtility_tB47913F94876E2A22C18B5D6B36CB71CFCDD8B2C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var newPanel = (RuntimePanel)UIElementsRuntimeUtility.FindOrCreateRuntimePanel(this, RuntimePanel.Create);
		CreateRuntimePanelDelegate_t0EEBC61860CC3E2C6777076F6F65CF11EE029F53 * L_0 = (CreateRuntimePanelDelegate_t0EEBC61860CC3E2C6777076F6F65CF11EE029F53 *)il2cpp_codegen_object_new(CreateRuntimePanelDelegate_t0EEBC61860CC3E2C6777076F6F65CF11EE029F53_il2cpp_TypeInfo_var);
		CreateRuntimePanelDelegate__ctor_m95D49EE5E6FCB8D41F8E349289D7B2E049E6837C(L_0, NULL, (intptr_t)((intptr_t)RuntimePanel_Create_m1571E8867FCEAE5F0E0FC8BCFF4B0A1D4BB9A8C3_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(UIElementsRuntimeUtility_tB47913F94876E2A22C18B5D6B36CB71CFCDD8B2C_il2cpp_TypeInfo_var);
		BaseRuntimePanel_tE55DB58DC0A1F524F98CC999672C716946DA4754 * L_1;
		L_1 = UIElementsRuntimeUtility_FindOrCreateRuntimePanel_m5D3E06078AD6507E1911E37DF9BA0C410B662381(__this, L_0, /*hidden argument*/NULL);
		// return newPanel;
		return ((RuntimePanel_t6D5485B3EB9C598452C70E12357282E046DD1409 *)CastclassClass((RuntimeObject*)L_1, RuntimePanel_t6D5485B3EB9C598452C70E12357282E046DD1409_il2cpp_TypeInfo_var));
	}
}
// System.Void UnityEngine.UIElements.PanelSettings::DisposeRelatedPanel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanelSettings_DisposeRelatedPanel_m2ECC3B2AEBC1D7BF224E74231F4A2A458EB7BF83 (PanelSettings_tA06886CA55D7F3105153641E0BA56FF15E8DCA69 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIElementsRuntimeUtility_tB47913F94876E2A22C18B5D6B36CB71CFCDD8B2C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UIElementsRuntimeUtility.DisposeRuntimePanel(this);
		IL2CPP_RUNTIME_CLASS_INIT(UIElementsRuntimeUtility_tB47913F94876E2A22C18B5D6B36CB71CFCDD8B2C_il2cpp_TypeInfo_var);
		UIElementsRuntimeUtility_DisposeRuntimePanel_mC21BE02ECF47C691A5363B9FE94ABF2EBF372A7C(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.UIElements.PanelSettings::InitializeTextSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanelSettings_InitializeTextSettings_m6CD9A891740B4AA855CC47CAC4879EB16EC031A7 (PanelSettings_tA06886CA55D7F3105153641E0BA56FF15E8DCA69 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void UnityEngine.UIElements.PanelSettings::OnTextSettingsImported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanelSettings_OnTextSettingsImported_mE749AD645B65731A98C524CF1CBFC1B64E0F2A93 (PanelSettings_tA06886CA55D7F3105153641E0BA56FF15E8DCA69 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_Invoke_mA1E7E3771320CD31CD9816E3851252CE41DA2732_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PanelSettings_OnTextSettingsImported_mE749AD645B65731A98C524CF1CBFC1B64E0F2A93_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextDelegates_t7BDFD1ED4A9246F08974A6DF7C62E674A6618B6F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// TextDelegates.OnTextSettingsImported -= OnTextSettingsImported;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = ((TextDelegates_t7BDFD1ED4A9246F08974A6DF7C62E674A6618B6F_StaticFields*)il2cpp_codegen_static_fields_for(TextDelegates_t7BDFD1ED4A9246F08974A6DF7C62E674A6618B6F_il2cpp_TypeInfo_var))->get_OnTextSettingsImported_5();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_1, __this, (intptr_t)((intptr_t)PanelSettings_OnTextSettingsImported_mE749AD645B65731A98C524CF1CBFC1B64E0F2A93_RuntimeMethod_var), /*hidden argument*/NULL);
		Delegate_t * L_2;
		L_2 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_0, L_1, /*hidden argument*/NULL);
		((TextDelegates_t7BDFD1ED4A9246F08974A6DF7C62E674A6618B6F_StaticFields*)il2cpp_codegen_static_fields_for(TextDelegates_t7BDFD1ED4A9246F08974A6DF7C62E674A6618B6F_il2cpp_TypeInfo_var))->set_OnTextSettingsImported_5(((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)CastclassSealed((RuntimeObject*)L_2, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var)));
		// textSettings = TextDelegates.GetTextSettings();
		Func_1_tAC616C71189A2A9710DCCC67B2B63B95BD51C170 * L_3 = ((TextDelegates_t7BDFD1ED4A9246F08974A6DF7C62E674A6618B6F_StaticFields*)il2cpp_codegen_static_fields_for(TextDelegates_t7BDFD1ED4A9246F08974A6DF7C62E674A6618B6F_il2cpp_TypeInfo_var))->get_GetTextSettings_1();
		NullCheck(L_3);
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_4;
		L_4 = Func_1_Invoke_mA1E7E3771320CD31CD9816E3851252CE41DA2732(L_3, /*hidden argument*/Func_1_Invoke_mA1E7E3771320CD31CD9816E3851252CE41DA2732_RuntimeMethod_var);
		__this->set_textSettings_28(L_4);
		// }
		return;
	}
}
// System.Void UnityEngine.UIElements.PanelSettings::InitializeShaders()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanelSettings_InitializeShaders_mC988B0154294E8F8732E388C46838E31BDE7872F (PanelSettings_tA06886CA55D7F3105153641E0BA56FF15E8DCA69 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Shaders_t5858FE9E27DFD22DD45601F3A468E40E775837E4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_AtlasBlitShader == null)
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_0 = __this->get_m_AtlasBlitShader_25();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		// m_AtlasBlitShader = Shader.Find(Shaders.k_AtlasBlit);
		IL2CPP_RUNTIME_CLASS_INIT(Shaders_t5858FE9E27DFD22DD45601F3A468E40E775837E4_il2cpp_TypeInfo_var);
		String_t* L_2 = ((Shaders_t5858FE9E27DFD22DD45601F3A468E40E775837E4_StaticFields*)il2cpp_codegen_static_fields_for(Shaders_t5858FE9E27DFD22DD45601F3A468E40E775837E4_il2cpp_TypeInfo_var))->get_k_AtlasBlit_0();
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_3;
		L_3 = Shader_Find_m596EC6EBDCA8C9D5D86E2410A319928C1E8E6B5A(L_2, /*hidden argument*/NULL);
		__this->set_m_AtlasBlitShader_25(L_3);
	}

IL_001e:
	{
		// if (m_RuntimeShader == null)
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_4 = __this->get_m_RuntimeShader_26();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_4, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_003c;
		}
	}
	{
		// m_RuntimeShader = Shader.Find(Shaders.k_Runtime);
		IL2CPP_RUNTIME_CLASS_INIT(Shaders_t5858FE9E27DFD22DD45601F3A468E40E775837E4_il2cpp_TypeInfo_var);
		String_t* L_6 = ((Shaders_t5858FE9E27DFD22DD45601F3A468E40E775837E4_StaticFields*)il2cpp_codegen_static_fields_for(Shaders_t5858FE9E27DFD22DD45601F3A468E40E775837E4_il2cpp_TypeInfo_var))->get_k_Runtime_2();
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_7;
		L_7 = Shader_Find_m596EC6EBDCA8C9D5D86E2410A319928C1E8E6B5A(L_6, /*hidden argument*/NULL);
		__this->set_m_RuntimeShader_26(L_7);
	}

IL_003c:
	{
		// if (m_RuntimeWorldShader == null)
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_8 = __this->get_m_RuntimeWorldShader_27();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_8, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_005a;
		}
	}
	{
		// m_RuntimeWorldShader = Shader.Find(Shaders.k_RuntimeWorld);
		IL2CPP_RUNTIME_CLASS_INIT(Shaders_t5858FE9E27DFD22DD45601F3A468E40E775837E4_il2cpp_TypeInfo_var);
		String_t* L_10 = ((Shaders_t5858FE9E27DFD22DD45601F3A468E40E775837E4_StaticFields*)il2cpp_codegen_static_fields_for(Shaders_t5858FE9E27DFD22DD45601F3A468E40E775837E4_il2cpp_TypeInfo_var))->get_k_RuntimeWorld_3();
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_11;
		L_11 = Shader_Find_m596EC6EBDCA8C9D5D86E2410A319928C1E8E6B5A(L_10, /*hidden argument*/NULL);
		__this->set_m_RuntimeWorldShader_27(L_11);
	}

IL_005a:
	{
		// if (m_RuntimePanel != null)
		BaseRuntimePanel_tE55DB58DC0A1F524F98CC999672C716946DA4754 * L_12 = __this->get_m_RuntimePanel_22();
		if (!L_12)
		{
			goto IL_0073;
		}
	}
	{
		// m_RuntimePanel.targetTexture = m_TargetTexture;
		BaseRuntimePanel_tE55DB58DC0A1F524F98CC999672C716946DA4754 * L_13 = __this->get_m_RuntimePanel_22();
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_14 = __this->get_m_TargetTexture_8();
		NullCheck(L_13);
		L_13->set_targetTexture_49(L_14);
	}

IL_0073:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.UIElements.PanelSettings::ApplyPanelSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanelSettings_ApplyPanelSettings_m386F4A77DD50664863D2858D9FE5AE8F2C5EAFE5 (PanelSettings_tA06886CA55D7F3105153641E0BA56FF15E8DCA69 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DynamicAtlas_t024D0D5DF3B5CCA7D05187B7745B0F6F83662D60_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStyle_t4D5F2A6CC5D5C040429B5E7D7CF779E6D915BEF5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	DynamicAtlas_t024D0D5DF3B5CCA7D05187B7745B0F6F83662D60 * V_2 = NULL;
	StyleLength_t45F1C3196D4C9FE58C3EBF3B4C25A4F1D275679E  V_3;
	memset((&V_3), 0, sizeof(V_3));
	PanelClearSettings_t3A957E91B3B162582F4BFEF32D08A44BE0BF2B93  V_4;
	memset((&V_4), 0, sizeof(V_4));
	BaseRuntimePanel_tE55DB58DC0A1F524F98CC999672C716946DA4754 * G_B6_0 = NULL;
	BaseRuntimePanel_tE55DB58DC0A1F524F98CC999672C716946DA4754 * G_B5_0 = NULL;
	float G_B7_0 = 0.0f;
	BaseRuntimePanel_tE55DB58DC0A1F524F98CC999672C716946DA4754 * G_B7_1 = NULL;
	{
		// Rect oldTargetRect = m_TargetRect;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_0 = __this->get_m_TargetRect_29();
		V_0 = L_0;
		// float oldResolvedScaling = m_ResolvedScale;
		float L_1 = __this->get_m_ResolvedScale_30();
		V_1 = L_1;
		// m_TargetRect = GetDisplayRect(); // Expensive to evaluate, so cache
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_2;
		L_2 = PanelSettings_GetDisplayRect_m95887464281D221949E90D4F37AD766D152A22CF(__this, /*hidden argument*/NULL);
		__this->set_m_TargetRect_29(L_2);
		// m_ResolvedScale = ResolveScale(m_TargetRect, Screen.dpi); // dpi should be constant across all displays
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_3 = __this->get_m_TargetRect_29();
		float L_4;
		L_4 = Screen_get_dpi_m37167A82DE896C738517BBF75BFD70C616CCCF55(/*hidden argument*/NULL);
		float L_5;
		L_5 = PanelSettings_ResolveScale_mD895305068737AA33CD410D05606899E6E6DF00E(__this, L_3, L_4, /*hidden argument*/NULL);
		__this->set_m_ResolvedScale_30(L_5);
		// if (visualTree.style.width.value == 0 || // TODO is this check valid? This prevents having to resize the game view!
		//     m_ResolvedScale != oldResolvedScaling ||
		//     m_TargetRect.width != oldTargetRect.width ||
		//     m_TargetRect.height != oldTargetRect.height)
		VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * L_6;
		L_6 = PanelSettings_get_visualTree_m09CAA1B5289168AF6F1F0FE2714DCA5EDE9CC170(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		RuntimeObject* L_7;
		L_7 = VisualElement_get_style_m9F36CA167426B625365258FFB26F366FDE91621D(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		StyleLength_t45F1C3196D4C9FE58C3EBF3B4C25A4F1D275679E  L_8;
		L_8 = InterfaceFuncInvoker0< StyleLength_t45F1C3196D4C9FE58C3EBF3B4C25A4F1D275679E  >::Invoke(17 /* UnityEngine.UIElements.StyleLength UnityEngine.UIElements.IStyle::get_width() */, IStyle_t4D5F2A6CC5D5C040429B5E7D7CF779E6D915BEF5_il2cpp_TypeInfo_var, L_7);
		V_3 = L_8;
		Length_t4EB2583009584526089344B3DBC93E0C8894BCF4  L_9;
		L_9 = StyleLength_get_value_mB1C8CA75E7C74941D07C6C2C51B1A48EBA8BB0E7((StyleLength_t45F1C3196D4C9FE58C3EBF3B4C25A4F1D275679E *)(&V_3), /*hidden argument*/NULL);
		Length_t4EB2583009584526089344B3DBC93E0C8894BCF4  L_10;
		L_10 = Length_op_Implicit_m3BD8F084E51CBCBFE379530C63BBEF33CC55032C((0.0f), /*hidden argument*/NULL);
		bool L_11;
		L_11 = Length_op_Equality_mFF26EC0D0872AA4BCBD639A54B85258C04A08AD4(L_9, L_10, /*hidden argument*/NULL);
		if (L_11)
		{
			goto IL_008e;
		}
	}
	{
		float L_12 = __this->get_m_ResolvedScale_30();
		float L_13 = V_1;
		if ((!(((float)L_12) == ((float)L_13))))
		{
			goto IL_008e;
		}
	}
	{
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_14 = __this->get_address_of_m_TargetRect_29();
		float L_15;
		L_15 = Rect_get_width_m4A0500D95CA84917787A8E90D26E66D49DFA90EF((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_14, /*hidden argument*/NULL);
		float L_16;
		L_16 = Rect_get_width_m4A0500D95CA84917787A8E90D26E66D49DFA90EF((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_0), /*hidden argument*/NULL);
		if ((!(((float)L_15) == ((float)L_16))))
		{
			goto IL_008e;
		}
	}
	{
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_17 = __this->get_address_of_m_TargetRect_29();
		float L_18;
		L_18 = Rect_get_height_m42FEF31015A269E6E2B7E6F62E72E5BF6602302A((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_17, /*hidden argument*/NULL);
		float L_19;
		L_19 = Rect_get_height_m42FEF31015A269E6E2B7E6F62E72E5BF6602302A((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_0), /*hidden argument*/NULL);
		if ((((float)L_18) == ((float)L_19)))
		{
			goto IL_013b;
		}
	}

IL_008e:
	{
		// panel.scale = m_ResolvedScale == 0.0f ? 0.0f : 1.0f / m_ResolvedScale;
		BaseRuntimePanel_tE55DB58DC0A1F524F98CC999672C716946DA4754 * L_20;
		L_20 = PanelSettings_get_panel_m2B9826508E23C23D4F716A96B52AB2712865FB83(__this, /*hidden argument*/NULL);
		float L_21 = __this->get_m_ResolvedScale_30();
		G_B5_0 = L_20;
		if ((((float)L_21) == ((float)(0.0f))))
		{
			G_B6_0 = L_20;
			goto IL_00af;
		}
	}
	{
		float L_22 = __this->get_m_ResolvedScale_30();
		G_B7_0 = ((float)((float)(1.0f)/(float)L_22));
		G_B7_1 = G_B5_0;
		goto IL_00b4;
	}

IL_00af:
	{
		G_B7_0 = (0.0f);
		G_B7_1 = G_B6_0;
	}

IL_00b4:
	{
		NullCheck(G_B7_1);
		BaseVisualElementPanel_set_scale_m2BDC60BA59937218EE405339B1EF9F0D6C388EA7(G_B7_1, G_B7_0, /*hidden argument*/NULL);
		// visualTree.style.left = 0;
		VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * L_23;
		L_23 = PanelSettings_get_visualTree_m09CAA1B5289168AF6F1F0FE2714DCA5EDE9CC170(__this, /*hidden argument*/NULL);
		NullCheck(L_23);
		RuntimeObject* L_24;
		L_24 = VisualElement_get_style_m9F36CA167426B625365258FFB26F366FDE91621D(L_23, /*hidden argument*/NULL);
		StyleLength_t45F1C3196D4C9FE58C3EBF3B4C25A4F1D275679E  L_25;
		L_25 = StyleLength_op_Implicit_m32BDCF90D8A04A73780EECC85E3A6D14AEFB8D15((0.0f), /*hidden argument*/NULL);
		NullCheck(L_24);
		InterfaceActionInvoker1< StyleLength_t45F1C3196D4C9FE58C3EBF3B4C25A4F1D275679E  >::Invoke(8 /* System.Void UnityEngine.UIElements.IStyle::set_left(UnityEngine.UIElements.StyleLength) */, IStyle_t4D5F2A6CC5D5C040429B5E7D7CF779E6D915BEF5_il2cpp_TypeInfo_var, L_24, L_25);
		// visualTree.style.top = 0;
		VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * L_26;
		L_26 = PanelSettings_get_visualTree_m09CAA1B5289168AF6F1F0FE2714DCA5EDE9CC170(__this, /*hidden argument*/NULL);
		NullCheck(L_26);
		RuntimeObject* L_27;
		L_27 = VisualElement_get_style_m9F36CA167426B625365258FFB26F366FDE91621D(L_26, /*hidden argument*/NULL);
		StyleLength_t45F1C3196D4C9FE58C3EBF3B4C25A4F1D275679E  L_28;
		L_28 = StyleLength_op_Implicit_m32BDCF90D8A04A73780EECC85E3A6D14AEFB8D15((0.0f), /*hidden argument*/NULL);
		NullCheck(L_27);
		InterfaceActionInvoker1< StyleLength_t45F1C3196D4C9FE58C3EBF3B4C25A4F1D275679E  >::Invoke(15 /* System.Void UnityEngine.UIElements.IStyle::set_top(UnityEngine.UIElements.StyleLength) */, IStyle_t4D5F2A6CC5D5C040429B5E7D7CF779E6D915BEF5_il2cpp_TypeInfo_var, L_27, L_28);
		// visualTree.style.width = m_TargetRect.width * m_ResolvedScale;
		VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * L_29;
		L_29 = PanelSettings_get_visualTree_m09CAA1B5289168AF6F1F0FE2714DCA5EDE9CC170(__this, /*hidden argument*/NULL);
		NullCheck(L_29);
		RuntimeObject* L_30;
		L_30 = VisualElement_get_style_m9F36CA167426B625365258FFB26F366FDE91621D(L_29, /*hidden argument*/NULL);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_31 = __this->get_address_of_m_TargetRect_29();
		float L_32;
		L_32 = Rect_get_width_m4A0500D95CA84917787A8E90D26E66D49DFA90EF((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_31, /*hidden argument*/NULL);
		float L_33 = __this->get_m_ResolvedScale_30();
		StyleLength_t45F1C3196D4C9FE58C3EBF3B4C25A4F1D275679E  L_34;
		L_34 = StyleLength_op_Implicit_m32BDCF90D8A04A73780EECC85E3A6D14AEFB8D15(((float)il2cpp_codegen_multiply((float)L_32, (float)L_33)), /*hidden argument*/NULL);
		NullCheck(L_30);
		InterfaceActionInvoker1< StyleLength_t45F1C3196D4C9FE58C3EBF3B4C25A4F1D275679E  >::Invoke(18 /* System.Void UnityEngine.UIElements.IStyle::set_width(UnityEngine.UIElements.StyleLength) */, IStyle_t4D5F2A6CC5D5C040429B5E7D7CF779E6D915BEF5_il2cpp_TypeInfo_var, L_30, L_34);
		// visualTree.style.height = m_TargetRect.height * m_ResolvedScale;
		VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * L_35;
		L_35 = PanelSettings_get_visualTree_m09CAA1B5289168AF6F1F0FE2714DCA5EDE9CC170(__this, /*hidden argument*/NULL);
		NullCheck(L_35);
		RuntimeObject* L_36;
		L_36 = VisualElement_get_style_m9F36CA167426B625365258FFB26F366FDE91621D(L_35, /*hidden argument*/NULL);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_37 = __this->get_address_of_m_TargetRect_29();
		float L_38;
		L_38 = Rect_get_height_m42FEF31015A269E6E2B7E6F62E72E5BF6602302A((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_37, /*hidden argument*/NULL);
		float L_39 = __this->get_m_ResolvedScale_30();
		StyleLength_t45F1C3196D4C9FE58C3EBF3B4C25A4F1D275679E  L_40;
		L_40 = StyleLength_op_Implicit_m32BDCF90D8A04A73780EECC85E3A6D14AEFB8D15(((float)il2cpp_codegen_multiply((float)L_38, (float)L_39)), /*hidden argument*/NULL);
		NullCheck(L_36);
		InterfaceActionInvoker1< StyleLength_t45F1C3196D4C9FE58C3EBF3B4C25A4F1D275679E  >::Invoke(7 /* System.Void UnityEngine.UIElements.IStyle::set_height(UnityEngine.UIElements.StyleLength) */, IStyle_t4D5F2A6CC5D5C040429B5E7D7CF779E6D915BEF5_il2cpp_TypeInfo_var, L_36, L_40);
	}

IL_013b:
	{
		// panel.targetTexture = targetTexture;
		BaseRuntimePanel_tE55DB58DC0A1F524F98CC999672C716946DA4754 * L_41;
		L_41 = PanelSettings_get_panel_m2B9826508E23C23D4F716A96B52AB2712865FB83(__this, /*hidden argument*/NULL);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_42;
		L_42 = PanelSettings_get_targetTexture_mECC14702FCCB6939AA0F221E611971BB28A306F3_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_41);
		L_41->set_targetTexture_49(L_42);
		// panel.targetDisplay = targetDisplay;
		BaseRuntimePanel_tE55DB58DC0A1F524F98CC999672C716946DA4754 * L_43;
		L_43 = PanelSettings_get_panel_m2B9826508E23C23D4F716A96B52AB2712865FB83(__this, /*hidden argument*/NULL);
		int32_t L_44;
		L_44 = PanelSettings_get_targetDisplay_m2B5CF2AFF5271E8188FC81F258C8015A247811F6_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_43);
		BaseRuntimePanel_set_targetDisplay_m66A207FC22EA486A2E3091852DDD3AAD2F557269_inline(L_43, L_44, /*hidden argument*/NULL);
		// panel.drawToCameras = false; //we don`t support WorldSpace rendering just yet
		BaseRuntimePanel_tE55DB58DC0A1F524F98CC999672C716946DA4754 * L_45;
		L_45 = PanelSettings_get_panel_m2B9826508E23C23D4F716A96B52AB2712865FB83(__this, /*hidden argument*/NULL);
		NullCheck(L_45);
		BaseRuntimePanel_set_drawToCameras_m4C4BAAFA359A48E58EC6F8DD3C8AE94C48604D8A(L_45, (bool)0, /*hidden argument*/NULL);
		// panel.clearSettings = new PanelClearSettings {clearColor = m_ClearColor, clearDepthStencil = m_ClearDepthStencil, color = m_ColorClearValue};
		BaseRuntimePanel_tE55DB58DC0A1F524F98CC999672C716946DA4754 * L_46;
		L_46 = PanelSettings_get_panel_m2B9826508E23C23D4F716A96B52AB2712865FB83(__this, /*hidden argument*/NULL);
		il2cpp_codegen_initobj((&V_4), sizeof(PanelClearSettings_t3A957E91B3B162582F4BFEF32D08A44BE0BF2B93 ));
		bool L_47 = __this->get_m_ClearColor_20();
		(&V_4)->set_clearColor_1(L_47);
		bool L_48 = __this->get_m_ClearDepthStencil_19();
		(&V_4)->set_clearDepthStencil_0(L_48);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_49 = __this->get_m_ColorClearValue_21();
		(&V_4)->set_color_2(L_49);
		PanelClearSettings_t3A957E91B3B162582F4BFEF32D08A44BE0BF2B93  L_50 = V_4;
		NullCheck(L_46);
		BaseVisualElementPanel_set_clearSettings_m4FDDA295355E270A46E8C840A17EAA3189467265_inline(L_46, L_50, /*hidden argument*/NULL);
		// var atlas = panel.atlas as DynamicAtlas;
		BaseRuntimePanel_tE55DB58DC0A1F524F98CC999672C716946DA4754 * L_51;
		L_51 = PanelSettings_get_panel_m2B9826508E23C23D4F716A96B52AB2712865FB83(__this, /*hidden argument*/NULL);
		NullCheck(L_51);
		AtlasBase_t04E16651AFF344EDD21EB14F2E9CF0B76DACA9E3 * L_52;
		L_52 = VirtFuncInvoker0< AtlasBase_t04E16651AFF344EDD21EB14F2E9CF0B76DACA9E3 * >::Invoke(44 /* UnityEngine.UIElements.AtlasBase UnityEngine.UIElements.BaseVisualElementPanel::get_atlas() */, L_51);
		V_2 = ((DynamicAtlas_t024D0D5DF3B5CCA7D05187B7745B0F6F83662D60 *)IsInstClass((RuntimeObject*)L_52, DynamicAtlas_t024D0D5DF3B5CCA7D05187B7745B0F6F83662D60_il2cpp_TypeInfo_var));
		// if (atlas != null)
		DynamicAtlas_t024D0D5DF3B5CCA7D05187B7745B0F6F83662D60 * L_53 = V_2;
		if (!L_53)
		{
			goto IL_020e;
		}
	}
	{
		// atlas.minAtlasSize = dynamicAtlasSettings.minAtlasSize;
		DynamicAtlas_t024D0D5DF3B5CCA7D05187B7745B0F6F83662D60 * L_54 = V_2;
		DynamicAtlasSettings_t851C8E0D9506CB6B36AE277F8FCE439C89097806 * L_55;
		L_55 = PanelSettings_get_dynamicAtlasSettings_mA7CD01ECC21C5FE2E53BC5E891DDDD4A36A3D116_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_55);
		int32_t L_56;
		L_56 = DynamicAtlasSettings_get_minAtlasSize_m24F98ABD5894FBAAAB723B64561FEA4BE7700E15_inline(L_55, /*hidden argument*/NULL);
		NullCheck(L_54);
		DynamicAtlas_set_minAtlasSize_m9BA560AD5491E9F0F3755309121A2064C0AD41B2(L_54, L_56, /*hidden argument*/NULL);
		// atlas.maxAtlasSize = dynamicAtlasSettings.maxAtlasSize;
		DynamicAtlas_t024D0D5DF3B5CCA7D05187B7745B0F6F83662D60 * L_57 = V_2;
		DynamicAtlasSettings_t851C8E0D9506CB6B36AE277F8FCE439C89097806 * L_58;
		L_58 = PanelSettings_get_dynamicAtlasSettings_mA7CD01ECC21C5FE2E53BC5E891DDDD4A36A3D116_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_58);
		int32_t L_59;
		L_59 = DynamicAtlasSettings_get_maxAtlasSize_m639A855206F205B7761DECD9846A333005FA2B43_inline(L_58, /*hidden argument*/NULL);
		NullCheck(L_57);
		DynamicAtlas_set_maxAtlasSize_m484D9C62146ED62879BD5D70F305B6D9814DCB26(L_57, L_59, /*hidden argument*/NULL);
		// atlas.maxSubTextureSize = dynamicAtlasSettings.maxSubTextureSize;
		DynamicAtlas_t024D0D5DF3B5CCA7D05187B7745B0F6F83662D60 * L_60 = V_2;
		DynamicAtlasSettings_t851C8E0D9506CB6B36AE277F8FCE439C89097806 * L_61;
		L_61 = PanelSettings_get_dynamicAtlasSettings_mA7CD01ECC21C5FE2E53BC5E891DDDD4A36A3D116_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_61);
		int32_t L_62;
		L_62 = DynamicAtlasSettings_get_maxSubTextureSize_m084EADB926BF0EB4B2848F347A9DEB48FF491870_inline(L_61, /*hidden argument*/NULL);
		NullCheck(L_60);
		DynamicAtlas_set_maxSubTextureSize_mD93CAF43AAC31450988803E9734B06478D5715B7(L_60, L_62, /*hidden argument*/NULL);
		// atlas.activeFilters = dynamicAtlasSettings.activeFilters;
		DynamicAtlas_t024D0D5DF3B5CCA7D05187B7745B0F6F83662D60 * L_63 = V_2;
		DynamicAtlasSettings_t851C8E0D9506CB6B36AE277F8FCE439C89097806 * L_64;
		L_64 = PanelSettings_get_dynamicAtlasSettings_mA7CD01ECC21C5FE2E53BC5E891DDDD4A36A3D116_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_64);
		int32_t L_65;
		L_65 = DynamicAtlasSettings_get_activeFilters_m829EA1AD6874C1E0F9724893668696314F884858_inline(L_64, /*hidden argument*/NULL);
		NullCheck(L_63);
		DynamicAtlas_set_activeFilters_m52744F820B001678E3CEC0F200227C8AAAB32652(L_63, L_65, /*hidden argument*/NULL);
		// atlas.customFilter = dynamicAtlasSettings.customFilter;
		DynamicAtlas_t024D0D5DF3B5CCA7D05187B7745B0F6F83662D60 * L_66 = V_2;
		DynamicAtlasSettings_t851C8E0D9506CB6B36AE277F8FCE439C89097806 * L_67;
		L_67 = PanelSettings_get_dynamicAtlasSettings_mA7CD01ECC21C5FE2E53BC5E891DDDD4A36A3D116_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_67);
		DynamicAtlasCustomFilter_tCC685CA75B6C1A4A973B7401B0C37E35352476AA * L_68;
		L_68 = DynamicAtlasSettings_get_customFilter_mF58AC5554D9AC7E94557D38AC7AC3C3FB31605D8_inline(L_67, /*hidden argument*/NULL);
		NullCheck(L_66);
		DynamicAtlas_set_customFilter_m6A32A3C743575E5DBC9DCC7CADF71C07ACCE6E31(L_66, L_68, /*hidden argument*/NULL);
	}

IL_020e:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.UIElements.PanelSettings::SetScreenToPanelSpaceFunction(System.Func`2<UnityEngine.Vector2,UnityEngine.Vector2>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanelSettings_SetScreenToPanelSpaceFunction_mF097345392830310AF99BDE8F7DBB58AA99209E2 (PanelSettings_tA06886CA55D7F3105153641E0BA56FF15E8DCA69 * __this, Func_2_tB3D19331301201246DE473D608119BB47D418EB9 * ___screentoPanelSpaceFunction0, const RuntimeMethod* method)
{
	{
		// m_AssignedScreenToPanel = screentoPanelSpaceFunction;
		Func_2_tB3D19331301201246DE473D608119BB47D418EB9 * L_0 = ___screentoPanelSpaceFunction0;
		__this->set_m_AssignedScreenToPanel_31(L_0);
		// panel.screenToPanelSpace = m_AssignedScreenToPanel;
		BaseRuntimePanel_tE55DB58DC0A1F524F98CC999672C716946DA4754 * L_1;
		L_1 = PanelSettings_get_panel_m2B9826508E23C23D4F716A96B52AB2712865FB83(__this, /*hidden argument*/NULL);
		Func_2_tB3D19331301201246DE473D608119BB47D418EB9 * L_2 = __this->get_m_AssignedScreenToPanel_31();
		NullCheck(L_1);
		BaseRuntimePanel_set_screenToPanelSpace_mA72EADC0660A6AA68A087C036093D3C66D61BF5B(L_1, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Single UnityEngine.UIElements.PanelSettings::ResolveScale(UnityEngine.Rect,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PanelSettings_ResolveScale_mD895305068737AA33CD410D05606899E6E6DF00E (PanelSettings_tA06886CA55D7F3105153641E0BA56FF15E8DCA69 * __this, Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___targetRect0, float ___screenDpi1, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_4;
	memset((&V_4), 0, sizeof(V_4));
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_5;
	memset((&V_5), 0, sizeof(V_5));
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	int32_t V_8 = 0;
	float G_B5_0 = 0.0f;
	{
		// float resolvedScale = 1.0f;
		V_0 = (1.0f);
		// switch (scaleMode)
		int32_t L_0;
		L_0 = PanelSettings_get_scaleMode_m29F6F2F593761D9A03DD5768B180F100F724A8BE_inline(__this, /*hidden argument*/NULL);
		V_1 = L_0;
		int32_t L_1 = V_1;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0120;
			}
			case 1:
			{
				goto IL_0024;
			}
			case 2:
			{
				goto IL_004f;
			}
		}
	}
	{
		goto IL_0120;
	}

IL_0024:
	{
		// var dpi = screenDpi == 0.0f ? fallbackDpi : screenDpi;
		float L_2 = ___screenDpi1;
		if ((((float)L_2) == ((float)(0.0f))))
		{
			goto IL_002f;
		}
	}
	{
		float L_3 = ___screenDpi1;
		G_B5_0 = L_3;
		goto IL_0035;
	}

IL_002f:
	{
		float L_4;
		L_4 = PanelSettings_get_fallbackDpi_mF33EE03C381EDDC10E5BF501C382B8887B70F26F_inline(__this, /*hidden argument*/NULL);
		G_B5_0 = L_4;
	}

IL_0035:
	{
		V_2 = G_B5_0;
		// if (dpi != 0.0f)
		float L_5 = V_2;
		if ((((float)L_5) == ((float)(0.0f))))
		{
			goto IL_0120;
		}
	}
	{
		// resolvedScale = referenceDpi / dpi;
		float L_6;
		L_6 = PanelSettings_get_referenceDpi_m2FC31DBE36463D52C56E7DA987C1C06213E0692D_inline(__this, /*hidden argument*/NULL);
		float L_7 = V_2;
		V_0 = ((float)((float)L_6/(float)L_7));
		// break;
		goto IL_0120;
	}

IL_004f:
	{
		// if (referenceResolution.x * referenceResolution.y != 0)
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_8;
		L_8 = PanelSettings_get_referenceResolution_mD72C52914CF23C55D87F21CD746A36B389363432_inline(__this, /*hidden argument*/NULL);
		V_3 = L_8;
		int32_t L_9;
		L_9 = Vector2Int_get_x_mDBEFBCDF9C7924767344ED2CEE1307885AED947B_inline((Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 *)(&V_3), /*hidden argument*/NULL);
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_10;
		L_10 = PanelSettings_get_referenceResolution_mD72C52914CF23C55D87F21CD746A36B389363432_inline(__this, /*hidden argument*/NULL);
		V_3 = L_10;
		int32_t L_11;
		L_11 = Vector2Int_get_y_m282591DEB0E70B02F4F4DDFAB90116AEC8E6B86C_inline((Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 *)(&V_3), /*hidden argument*/NULL);
		if (!((int32_t)il2cpp_codegen_multiply((int32_t)L_9, (int32_t)L_11)))
		{
			goto IL_0120;
		}
	}
	{
		// var refSize = (Vector2)referenceResolution;
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_12;
		L_12 = PanelSettings_get_referenceResolution_mD72C52914CF23C55D87F21CD746A36B389363432_inline(__this, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_13;
		L_13 = Vector2Int_op_Implicit_m74C29CAFE091CE873934FAF6300CD01461D7FE6B(L_12, /*hidden argument*/NULL);
		V_4 = L_13;
		// var sizeRatio = new Vector2(targetRect.width / refSize.x, targetRect.height / refSize.y);
		float L_14;
		L_14 = Rect_get_width_m4A0500D95CA84917787A8E90D26E66D49DFA90EF((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&___targetRect0), /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_15 = V_4;
		float L_16 = L_15.get_x_0();
		float L_17;
		L_17 = Rect_get_height_m42FEF31015A269E6E2B7E6F62E72E5BF6602302A((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&___targetRect0), /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_18 = V_4;
		float L_19 = L_18.get_y_1();
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&V_5), ((float)((float)L_14/(float)L_16)), ((float)((float)L_17/(float)L_19)), /*hidden argument*/NULL);
		// var denominator = 0.0f;
		V_6 = (0.0f);
		// switch (screenMatchMode)
		int32_t L_20;
		L_20 = PanelSettings_get_screenMatchMode_m69009B50BD8B63444548F86574F6B7D43043D5C2_inline(__this, /*hidden argument*/NULL);
		V_8 = L_20;
		int32_t L_21 = V_8;
		if ((((int32_t)L_21) == ((int32_t)1)))
		{
			goto IL_00d3;
		}
	}
	{
		int32_t L_22 = V_8;
		if ((!(((uint32_t)L_22) == ((uint32_t)2))))
		{
			goto IL_00ea;
		}
	}
	{
		// denominator = Mathf.Min(sizeRatio.x, sizeRatio.y);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_23 = V_5;
		float L_24 = L_23.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_25 = V_5;
		float L_26 = L_25.get_y_1();
		float L_27;
		L_27 = Mathf_Min_mD28BD5C9012619B74E475F204F96603193E99B14(L_24, L_26, /*hidden argument*/NULL);
		V_6 = L_27;
		// break;
		goto IL_010e;
	}

IL_00d3:
	{
		// denominator = Mathf.Max(sizeRatio.x, sizeRatio.y);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_28 = V_5;
		float L_29 = L_28.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_30 = V_5;
		float L_31 = L_30.get_y_1();
		float L_32;
		L_32 = Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775(L_29, L_31, /*hidden argument*/NULL);
		V_6 = L_32;
		// break;
		goto IL_010e;
	}

IL_00ea:
	{
		// var widthHeightRatio = Mathf.Clamp01(match);
		float L_33;
		L_33 = PanelSettings_get_match_m85BF6EEE7C48D6D387F600747265D124E623EFB9_inline(__this, /*hidden argument*/NULL);
		float L_34;
		L_34 = Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C(L_33, /*hidden argument*/NULL);
		V_7 = L_34;
		// denominator = Mathf.Lerp(sizeRatio.x, sizeRatio.y, widthHeightRatio);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_35 = V_5;
		float L_36 = L_35.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_37 = V_5;
		float L_38 = L_37.get_y_1();
		float L_39 = V_7;
		float L_40;
		L_40 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616(L_36, L_38, L_39, /*hidden argument*/NULL);
		V_6 = L_40;
	}

IL_010e:
	{
		// if (denominator != 0.0f)
		float L_41 = V_6;
		if ((((float)L_41) == ((float)(0.0f))))
		{
			goto IL_0120;
		}
	}
	{
		// resolvedScale = 1.0f / denominator;
		float L_42 = V_6;
		V_0 = ((float)((float)(1.0f)/(float)L_42));
	}

IL_0120:
	{
		// if (scale > 0.0f)
		float L_43;
		L_43 = PanelSettings_get_scale_m28C5C65DF239BCBCFBDD0C4F89AC2305B87D381B_inline(__this, /*hidden argument*/NULL);
		if ((!(((float)L_43) > ((float)(0.0f)))))
		{
			goto IL_0138;
		}
	}
	{
		// resolvedScale /= scale;
		float L_44 = V_0;
		float L_45;
		L_45 = PanelSettings_get_scale_m28C5C65DF239BCBCFBDD0C4F89AC2305B87D381B_inline(__this, /*hidden argument*/NULL);
		V_0 = ((float)((float)L_44/(float)L_45));
		// }
		goto IL_013e;
	}

IL_0138:
	{
		// resolvedScale = 0.0f;
		V_0 = (0.0f);
	}

IL_013e:
	{
		// return resolvedScale;
		float L_46 = V_0;
		return L_46;
	}
}
// UnityEngine.Rect UnityEngine.UIElements.PanelSettings::GetDisplayRect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  PanelSettings_GetDisplayRect_m95887464281D221949E90D4F37AD766D152A22CF (PanelSettings_tA06886CA55D7F3105153641E0BA56FF15E8DCA69 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Display_t0A5D09F1F2EB8025FE40EE0F81E0D01BB47A9B44_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_TargetTexture != null)
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_0 = __this->get_m_TargetTexture_8();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0036;
		}
	}
	{
		// return new Rect(0, 0, m_TargetTexture.width, m_TargetTexture.height); // TODO: Support sub-rects
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_2 = __this->get_m_TargetTexture_8();
		NullCheck(L_2);
		int32_t L_3;
		L_3 = VirtFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_width() */, L_2);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_4 = __this->get_m_TargetTexture_8();
		NullCheck(L_4);
		int32_t L_5;
		L_5 = VirtFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 UnityEngine.Texture::get_height() */, L_4);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_6), (0.0f), (0.0f), ((float)((float)L_3)), ((float)((float)L_5)), /*hidden argument*/NULL);
		return L_6;
	}

IL_0036:
	{
		// if (targetDisplay > 0 && targetDisplay < Display.displays.Length)
		int32_t L_7;
		L_7 = PanelSettings_get_targetDisplay_m2B5CF2AFF5271E8188FC81F258C8015A247811F6_inline(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_0082;
		}
	}
	{
		int32_t L_8;
		L_8 = PanelSettings_get_targetDisplay_m2B5CF2AFF5271E8188FC81F258C8015A247811F6_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Display_t0A5D09F1F2EB8025FE40EE0F81E0D01BB47A9B44_il2cpp_TypeInfo_var);
		DisplayU5BU5D_t3330058639C7A70B7B1FE7B4325E2B5D600CF4A6* L_9 = ((Display_t0A5D09F1F2EB8025FE40EE0F81E0D01BB47A9B44_StaticFields*)il2cpp_codegen_static_fields_for(Display_t0A5D09F1F2EB8025FE40EE0F81E0D01BB47A9B44_il2cpp_TypeInfo_var))->get_displays_1();
		NullCheck(L_9);
		if ((((int32_t)L_8) >= ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length))))))
		{
			goto IL_0082;
		}
	}
	{
		// return new Rect(0, 0, Display.displays[targetDisplay].renderingWidth, Display.displays[targetDisplay].renderingHeight);
		IL2CPP_RUNTIME_CLASS_INIT(Display_t0A5D09F1F2EB8025FE40EE0F81E0D01BB47A9B44_il2cpp_TypeInfo_var);
		DisplayU5BU5D_t3330058639C7A70B7B1FE7B4325E2B5D600CF4A6* L_10 = ((Display_t0A5D09F1F2EB8025FE40EE0F81E0D01BB47A9B44_StaticFields*)il2cpp_codegen_static_fields_for(Display_t0A5D09F1F2EB8025FE40EE0F81E0D01BB47A9B44_il2cpp_TypeInfo_var))->get_displays_1();
		int32_t L_11;
		L_11 = PanelSettings_get_targetDisplay_m2B5CF2AFF5271E8188FC81F258C8015A247811F6_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_10);
		int32_t L_12 = L_11;
		Display_t0A5D09F1F2EB8025FE40EE0F81E0D01BB47A9B44 * L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		NullCheck(L_13);
		int32_t L_14;
		L_14 = Display_get_renderingWidth_m426E1CB184C1135E1EE83678FFF7EF6521B5DB64(L_13, /*hidden argument*/NULL);
		DisplayU5BU5D_t3330058639C7A70B7B1FE7B4325E2B5D600CF4A6* L_15 = ((Display_t0A5D09F1F2EB8025FE40EE0F81E0D01BB47A9B44_StaticFields*)il2cpp_codegen_static_fields_for(Display_t0A5D09F1F2EB8025FE40EE0F81E0D01BB47A9B44_il2cpp_TypeInfo_var))->get_displays_1();
		int32_t L_16;
		L_16 = PanelSettings_get_targetDisplay_m2B5CF2AFF5271E8188FC81F258C8015A247811F6_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_15);
		int32_t L_17 = L_16;
		Display_t0A5D09F1F2EB8025FE40EE0F81E0D01BB47A9B44 * L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		NullCheck(L_18);
		int32_t L_19;
		L_19 = Display_get_renderingHeight_m18F083C41C0BB1646CB4C819E1266B9B51563F61(L_18, /*hidden argument*/NULL);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_20;
		memset((&L_20), 0, sizeof(L_20));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_20), (0.0f), (0.0f), ((float)((float)L_14)), ((float)((float)L_19)), /*hidden argument*/NULL);
		return L_20;
	}

IL_0082:
	{
		// return new Rect(0, 0, Screen.width, Screen.height);
		int32_t L_21;
		L_21 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C(/*hidden argument*/NULL);
		int32_t L_22;
		L_22 = Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE(/*hidden argument*/NULL);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_23;
		memset((&L_23), 0, sizeof(L_23));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_23), (0.0f), (0.0f), ((float)((float)L_21)), ((float)((float)L_22)), /*hidden argument*/NULL);
		return L_23;
	}
}
// System.Void UnityEngine.UIElements.PanelSettings::AttachAndInsertUIDocumentToVisualTree(UnityEngine.UIElements.UIDocument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanelSettings_AttachAndInsertUIDocumentToVisualTree_mB6B7D505B1765940998796D2ACE64FAD83098693 (PanelSettings_tA06886CA55D7F3105153641E0BA56FF15E8DCA69 * __this, UIDocument_t008D811860584F44CEBB5AF575856E6EFCEBECC4 * ___uiDocument0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIDocumentList_t3D7C0E63339FDA7858C1D1AE3EB911CDB76C18C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_AttachedUIDocumentsList == null)
		UIDocumentList_t3D7C0E63339FDA7858C1D1AE3EB911CDB76C18C5 * L_0 = __this->get_m_AttachedUIDocumentsList_23();
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		// m_AttachedUIDocumentsList = new UIDocumentList();
		UIDocumentList_t3D7C0E63339FDA7858C1D1AE3EB911CDB76C18C5 * L_1 = (UIDocumentList_t3D7C0E63339FDA7858C1D1AE3EB911CDB76C18C5 *)il2cpp_codegen_object_new(UIDocumentList_t3D7C0E63339FDA7858C1D1AE3EB911CDB76C18C5_il2cpp_TypeInfo_var);
		UIDocumentList__ctor_m5CCA152EB41F3C8EABCE1990FF875CDF8B130953(L_1, /*hidden argument*/NULL);
		__this->set_m_AttachedUIDocumentsList_23(L_1);
		// }
		goto IL_0021;
	}

IL_0015:
	{
		// m_AttachedUIDocumentsList.RemoveFromListAndFromVisualTree(uiDocument);
		UIDocumentList_t3D7C0E63339FDA7858C1D1AE3EB911CDB76C18C5 * L_2 = __this->get_m_AttachedUIDocumentsList_23();
		UIDocument_t008D811860584F44CEBB5AF575856E6EFCEBECC4 * L_3 = ___uiDocument0;
		NullCheck(L_2);
		UIDocumentList_RemoveFromListAndFromVisualTree_m069DA671F2E30743A3303EA08F7CD1AB4F8AF201(L_2, L_3, /*hidden argument*/NULL);
	}

IL_0021:
	{
		// m_AttachedUIDocumentsList.AddToListAndToVisualTree(uiDocument, visualTree);
		UIDocumentList_t3D7C0E63339FDA7858C1D1AE3EB911CDB76C18C5 * L_4 = __this->get_m_AttachedUIDocumentsList_23();
		UIDocument_t008D811860584F44CEBB5AF575856E6EFCEBECC4 * L_5 = ___uiDocument0;
		VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * L_6;
		L_6 = PanelSettings_get_visualTree_m09CAA1B5289168AF6F1F0FE2714DCA5EDE9CC170(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		UIDocumentList_AddToListAndToVisualTree_mD04F1390C6805F013D8473D6F88CBDAF4425F52A(L_4, L_5, L_6, 0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.UIElements.PanelSettings::DetachUIDocument(UnityEngine.UIElements.UIDocument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanelSettings_DetachUIDocument_m19A58FD8BCB6A59BD33F8591843A3D3D2DD3F0E6 (PanelSettings_tA06886CA55D7F3105153641E0BA56FF15E8DCA69 * __this, UIDocument_t008D811860584F44CEBB5AF575856E6EFCEBECC4 * ___uiDocument0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m46E859E3CE7BCCF1CABF62E178A7A6AD5BD1164B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_AttachedUIDocumentsList == null)
		UIDocumentList_t3D7C0E63339FDA7858C1D1AE3EB911CDB76C18C5 * L_0 = __this->get_m_AttachedUIDocumentsList_23();
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// m_AttachedUIDocumentsList.RemoveFromListAndFromVisualTree(uiDocument);
		UIDocumentList_t3D7C0E63339FDA7858C1D1AE3EB911CDB76C18C5 * L_1 = __this->get_m_AttachedUIDocumentsList_23();
		UIDocument_t008D811860584F44CEBB5AF575856E6EFCEBECC4 * L_2 = ___uiDocument0;
		NullCheck(L_1);
		UIDocumentList_RemoveFromListAndFromVisualTree_m069DA671F2E30743A3303EA08F7CD1AB4F8AF201(L_1, L_2, /*hidden argument*/NULL);
		// if (m_AttachedUIDocumentsList.m_AttachedUIDocuments.Count == 0)
		UIDocumentList_t3D7C0E63339FDA7858C1D1AE3EB911CDB76C18C5 * L_3 = __this->get_m_AttachedUIDocumentsList_23();
		NullCheck(L_3);
		List_1_tAB773DE00C0DE14686075955D7FB71ACD6194509 * L_4 = L_3->get_m_AttachedUIDocuments_0();
		NullCheck(L_4);
		int32_t L_5;
		L_5 = List_1_get_Count_m46E859E3CE7BCCF1CABF62E178A7A6AD5BD1164B_inline(L_4, /*hidden argument*/List_1_get_Count_m46E859E3CE7BCCF1CABF62E178A7A6AD5BD1164B_RuntimeMethod_var);
		if (L_5)
		{
			goto IL_002e;
		}
	}
	{
		// panel = null;
		PanelSettings_set_panel_m15890A7466CF8ACD3BF15C6AD750E3D1CCD368C1(__this, (BaseRuntimePanel_tE55DB58DC0A1F524F98CC999672C716946DA4754 *)NULL, /*hidden argument*/NULL);
	}

IL_002e:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.UIElements.PanelSettings::OrderByHierarchy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanelSettings_OrderByHierarchy_mFBB0D34070C17500BE60E86C6E3C8CE65EE64417 (PanelSettings_tA06886CA55D7F3105153641E0BA56FF15E8DCA69 * __this, const RuntimeMethod* method)
{
	{
		// public void OrderByHierarchy() {}
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
// UnityEngine.UIElements.EventDispatcher UnityEngine.UIElements.RuntimeEventDispatcher::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventDispatcher_t86D9B0A3CA4441F30AA1A940D0D50F9AEC9912F2 * RuntimeEventDispatcher_Create_m65E45A16196E086E21541BA034BE7A6E6BFBE4C3 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefaultDispatchingStrategy_t7A05CA05D94BD04D7AEDE160F48422576C2E55A5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventDispatcher_t86D9B0A3CA4441F30AA1A940D0D50F9AEC9912F2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyboardEventDispatchingStrategy_t80BEA7051056C80A3C2B08B50A184B8B6D39FDE0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m67147312F95905A091065C08C81E011F9AA6A8E5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mE9D25A015988790C35586B63300BF69CE2FD7BE1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tDB4893D11F8F1E02AB6C87CD8B761DC956B02D32_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MouseEventDispatchingStrategy_t1FA26BD52FADFAABD46BD3A9B16F23DAB22E4302_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NavigationEventDispatchingStrategy_t2DEA6952B1FF4FEE78C9A20FA54C66E7F12F1992_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointerCaptureDispatchingStrategy_t0599BD8824D9BE038701155B290A0732F73568B0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointerEventDispatchingStrategy_t14CDABDD60FD11CD051E2B39DD430614D55534A9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return EventDispatcher.CreateForRuntime(new List<IEventDispatchingStrategy>
		// {
		//     new NavigationEventDispatchingStrategy(),
		//     new PointerCaptureDispatchingStrategy(),
		//     new KeyboardEventDispatchingStrategy(),
		//     new PointerEventDispatchingStrategy(),
		//     new MouseEventDispatchingStrategy(), //TODO: remove all runtime mouse events (PointerWheelEvent?)
		//     new DefaultDispatchingStrategy(),
		// });
		List_1_tDB4893D11F8F1E02AB6C87CD8B761DC956B02D32 * L_0 = (List_1_tDB4893D11F8F1E02AB6C87CD8B761DC956B02D32 *)il2cpp_codegen_object_new(List_1_tDB4893D11F8F1E02AB6C87CD8B761DC956B02D32_il2cpp_TypeInfo_var);
		List_1__ctor_mE9D25A015988790C35586B63300BF69CE2FD7BE1(L_0, /*hidden argument*/List_1__ctor_mE9D25A015988790C35586B63300BF69CE2FD7BE1_RuntimeMethod_var);
		List_1_tDB4893D11F8F1E02AB6C87CD8B761DC956B02D32 * L_1 = L_0;
		NavigationEventDispatchingStrategy_t2DEA6952B1FF4FEE78C9A20FA54C66E7F12F1992 * L_2 = (NavigationEventDispatchingStrategy_t2DEA6952B1FF4FEE78C9A20FA54C66E7F12F1992 *)il2cpp_codegen_object_new(NavigationEventDispatchingStrategy_t2DEA6952B1FF4FEE78C9A20FA54C66E7F12F1992_il2cpp_TypeInfo_var);
		NavigationEventDispatchingStrategy__ctor_mC1F869F5D5547FEC565C5C5E04AEB0B5AD3098B2(L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		List_1_Add_m67147312F95905A091065C08C81E011F9AA6A8E5(L_1, L_2, /*hidden argument*/List_1_Add_m67147312F95905A091065C08C81E011F9AA6A8E5_RuntimeMethod_var);
		List_1_tDB4893D11F8F1E02AB6C87CD8B761DC956B02D32 * L_3 = L_1;
		PointerCaptureDispatchingStrategy_t0599BD8824D9BE038701155B290A0732F73568B0 * L_4 = (PointerCaptureDispatchingStrategy_t0599BD8824D9BE038701155B290A0732F73568B0 *)il2cpp_codegen_object_new(PointerCaptureDispatchingStrategy_t0599BD8824D9BE038701155B290A0732F73568B0_il2cpp_TypeInfo_var);
		PointerCaptureDispatchingStrategy__ctor_mEBE39239D7CBF5C1C167738D721C84D1B152CF50(L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		List_1_Add_m67147312F95905A091065C08C81E011F9AA6A8E5(L_3, L_4, /*hidden argument*/List_1_Add_m67147312F95905A091065C08C81E011F9AA6A8E5_RuntimeMethod_var);
		List_1_tDB4893D11F8F1E02AB6C87CD8B761DC956B02D32 * L_5 = L_3;
		KeyboardEventDispatchingStrategy_t80BEA7051056C80A3C2B08B50A184B8B6D39FDE0 * L_6 = (KeyboardEventDispatchingStrategy_t80BEA7051056C80A3C2B08B50A184B8B6D39FDE0 *)il2cpp_codegen_object_new(KeyboardEventDispatchingStrategy_t80BEA7051056C80A3C2B08B50A184B8B6D39FDE0_il2cpp_TypeInfo_var);
		KeyboardEventDispatchingStrategy__ctor_m4A1C1836A3F4B218FD3B050C02471C82F717850F(L_6, /*hidden argument*/NULL);
		NullCheck(L_5);
		List_1_Add_m67147312F95905A091065C08C81E011F9AA6A8E5(L_5, L_6, /*hidden argument*/List_1_Add_m67147312F95905A091065C08C81E011F9AA6A8E5_RuntimeMethod_var);
		List_1_tDB4893D11F8F1E02AB6C87CD8B761DC956B02D32 * L_7 = L_5;
		PointerEventDispatchingStrategy_t14CDABDD60FD11CD051E2B39DD430614D55534A9 * L_8 = (PointerEventDispatchingStrategy_t14CDABDD60FD11CD051E2B39DD430614D55534A9 *)il2cpp_codegen_object_new(PointerEventDispatchingStrategy_t14CDABDD60FD11CD051E2B39DD430614D55534A9_il2cpp_TypeInfo_var);
		PointerEventDispatchingStrategy__ctor_m03B232167F30128AD42C0B161A332F478C917D61(L_8, /*hidden argument*/NULL);
		NullCheck(L_7);
		List_1_Add_m67147312F95905A091065C08C81E011F9AA6A8E5(L_7, L_8, /*hidden argument*/List_1_Add_m67147312F95905A091065C08C81E011F9AA6A8E5_RuntimeMethod_var);
		List_1_tDB4893D11F8F1E02AB6C87CD8B761DC956B02D32 * L_9 = L_7;
		MouseEventDispatchingStrategy_t1FA26BD52FADFAABD46BD3A9B16F23DAB22E4302 * L_10 = (MouseEventDispatchingStrategy_t1FA26BD52FADFAABD46BD3A9B16F23DAB22E4302 *)il2cpp_codegen_object_new(MouseEventDispatchingStrategy_t1FA26BD52FADFAABD46BD3A9B16F23DAB22E4302_il2cpp_TypeInfo_var);
		MouseEventDispatchingStrategy__ctor_m66AF2B5C3AF132611F22F34167DAA6F1406ECAEB(L_10, /*hidden argument*/NULL);
		NullCheck(L_9);
		List_1_Add_m67147312F95905A091065C08C81E011F9AA6A8E5(L_9, L_10, /*hidden argument*/List_1_Add_m67147312F95905A091065C08C81E011F9AA6A8E5_RuntimeMethod_var);
		List_1_tDB4893D11F8F1E02AB6C87CD8B761DC956B02D32 * L_11 = L_9;
		DefaultDispatchingStrategy_t7A05CA05D94BD04D7AEDE160F48422576C2E55A5 * L_12 = (DefaultDispatchingStrategy_t7A05CA05D94BD04D7AEDE160F48422576C2E55A5 *)il2cpp_codegen_object_new(DefaultDispatchingStrategy_t7A05CA05D94BD04D7AEDE160F48422576C2E55A5_il2cpp_TypeInfo_var);
		DefaultDispatchingStrategy__ctor_mAA2057050C027721E2C8BDC0B345C3B1E4DA7717(L_12, /*hidden argument*/NULL);
		NullCheck(L_11);
		List_1_Add_m67147312F95905A091065C08C81E011F9AA6A8E5(L_11, L_12, /*hidden argument*/List_1_Add_m67147312F95905A091065C08C81E011F9AA6A8E5_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(EventDispatcher_t86D9B0A3CA4441F30AA1A940D0D50F9AEC9912F2_il2cpp_TypeInfo_var);
		EventDispatcher_t86D9B0A3CA4441F30AA1A940D0D50F9AEC9912F2 * L_13;
		L_13 = EventDispatcher_CreateForRuntime_m155B293AF4CC1C26B3FB5B67E116DC0E57C06FA8(L_11, /*hidden argument*/NULL);
		return L_13;
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
// UnityEngine.UIElements.PanelSettings UnityEngine.UIElements.RuntimePanel::get_panelSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PanelSettings_tA06886CA55D7F3105153641E0BA56FF15E8DCA69 * RuntimePanel_get_panelSettings_mC395FAD09E236CA7DAE702D93E731634903E8661 (RuntimePanel_t6D5485B3EB9C598452C70E12357282E046DD1409 * __this, const RuntimeMethod* method)
{
	{
		// public PanelSettings panelSettings => m_PanelSettings;
		PanelSettings_tA06886CA55D7F3105153641E0BA56FF15E8DCA69 * L_0 = __this->get_m_PanelSettings_55();
		return L_0;
	}
}
// UnityEngine.UIElements.RuntimePanel UnityEngine.UIElements.RuntimePanel::Create(UnityEngine.ScriptableObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimePanel_t6D5485B3EB9C598452C70E12357282E046DD1409 * RuntimePanel_Create_m1571E8867FCEAE5F0E0FC8BCFF4B0A1D4BB9A8C3 (ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A * ___ownerObject0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimePanel_t6D5485B3EB9C598452C70E12357282E046DD1409_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new RuntimePanel(ownerObject);
		ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A * L_0 = ___ownerObject0;
		RuntimePanel_t6D5485B3EB9C598452C70E12357282E046DD1409 * L_1 = (RuntimePanel_t6D5485B3EB9C598452C70E12357282E046DD1409 *)il2cpp_codegen_object_new(RuntimePanel_t6D5485B3EB9C598452C70E12357282E046DD1409_il2cpp_TypeInfo_var);
		RuntimePanel__ctor_m5C1608E7B06541A25A28E672F64201BD3C8DAE10(L_1, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void UnityEngine.UIElements.RuntimePanel::.ctor(UnityEngine.ScriptableObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimePanel__ctor_m5C1608E7B06541A25A28E672F64201BD3C8DAE10 (RuntimePanel_t6D5485B3EB9C598452C70E12357282E046DD1409 * __this, ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A * ___ownerObject0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseRuntimePanel_tE55DB58DC0A1F524F98CC999672C716946DA4754_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FocusController_t0EE43A2ABFA352E752E8DA2B6D17FC322FC59764_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NavigateFocusRing_t44CF1D05515ADB539414B52A64A7602739E6B826_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PanelSettings_tA06886CA55D7F3105153641E0BA56FF15E8DCA69_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimePanel_t6D5485B3EB9C598452C70E12357282E046DD1409_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0A7A63B9C62BB3C9F95456E2AD9CAF0475D68EAD);
		s_Il2CppMethodInitialized = true;
	}
	RuntimePanel_t6D5485B3EB9C598452C70E12357282E046DD1409 * G_B2_0 = NULL;
	RuntimePanel_t6D5485B3EB9C598452C70E12357282E046DD1409 * G_B1_0 = NULL;
	String_t* G_B3_0 = NULL;
	RuntimePanel_t6D5485B3EB9C598452C70E12357282E046DD1409 * G_B3_1 = NULL;
	{
		// : base(ownerObject, s_EventDispatcher)
		ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A * L_0 = ___ownerObject0;
		IL2CPP_RUNTIME_CLASS_INIT(RuntimePanel_t6D5485B3EB9C598452C70E12357282E046DD1409_il2cpp_TypeInfo_var);
		EventDispatcher_t86D9B0A3CA4441F30AA1A940D0D50F9AEC9912F2 * L_1 = ((RuntimePanel_t6D5485B3EB9C598452C70E12357282E046DD1409_StaticFields*)il2cpp_codegen_static_fields_for(RuntimePanel_t6D5485B3EB9C598452C70E12357282E046DD1409_il2cpp_TypeInfo_var))->get_s_EventDispatcher_54();
		IL2CPP_RUNTIME_CLASS_INIT(BaseRuntimePanel_tE55DB58DC0A1F524F98CC999672C716946DA4754_il2cpp_TypeInfo_var);
		BaseRuntimePanel__ctor_mF152AAF5FF4AA2FC2705B28D8BC4F203005DF492(__this, L_0, L_1, /*hidden argument*/NULL);
		// focusController = new FocusController(new NavigateFocusRing(visualTree));
		VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * L_2;
		L_2 = VirtFuncInvoker0< VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * >::Invoke(33 /* UnityEngine.UIElements.VisualElement UnityEngine.UIElements.BaseVisualElementPanel::get_visualTree() */, __this);
		NavigateFocusRing_t44CF1D05515ADB539414B52A64A7602739E6B826 * L_3 = (NavigateFocusRing_t44CF1D05515ADB539414B52A64A7602739E6B826 *)il2cpp_codegen_object_new(NavigateFocusRing_t44CF1D05515ADB539414B52A64A7602739E6B826_il2cpp_TypeInfo_var);
		NavigateFocusRing__ctor_mAF0AAE834DA4F0195D4A5F296CCFA0FF67764E0B(L_3, L_2, /*hidden argument*/NULL);
		FocusController_t0EE43A2ABFA352E752E8DA2B6D17FC322FC59764 * L_4 = (FocusController_t0EE43A2ABFA352E752E8DA2B6D17FC322FC59764 *)il2cpp_codegen_object_new(FocusController_t0EE43A2ABFA352E752E8DA2B6D17FC322FC59764_il2cpp_TypeInfo_var);
		FocusController__ctor_m872A126C23476DB846EC82D2DF4D5A3C1E325672(L_4, L_3, /*hidden argument*/NULL);
		VirtActionInvoker1< FocusController_t0EE43A2ABFA352E752E8DA2B6D17FC322FC59764 * >::Invoke(18 /* System.Void UnityEngine.UIElements.BaseVisualElementPanel::set_focusController(UnityEngine.UIElements.FocusController) */, __this, L_4);
		// m_PanelSettings  = ownerObject as PanelSettings;
		ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A * L_5 = ___ownerObject0;
		__this->set_m_PanelSettings_55(((PanelSettings_tA06886CA55D7F3105153641E0BA56FF15E8DCA69 *)IsInstClass((RuntimeObject*)L_5, PanelSettings_tA06886CA55D7F3105153641E0BA56FF15E8DCA69_il2cpp_TypeInfo_var)));
		// name = m_PanelSettings != null ? m_PanelSettings.name : "RuntimePanel";
		PanelSettings_tA06886CA55D7F3105153641E0BA56FF15E8DCA69 * L_6 = __this->get_m_PanelSettings_55();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_6, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		G_B1_0 = __this;
		if (L_7)
		{
			G_B2_0 = __this;
			goto IL_0044;
		}
	}
	{
		G_B3_0 = _stringLiteral0A7A63B9C62BB3C9F95456E2AD9CAF0475D68EAD;
		G_B3_1 = G_B1_0;
		goto IL_004f;
	}

IL_0044:
	{
		PanelSettings_tA06886CA55D7F3105153641E0BA56FF15E8DCA69 * L_8 = __this->get_m_PanelSettings_55();
		NullCheck(L_8);
		String_t* L_9;
		L_9 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_8, /*hidden argument*/NULL);
		G_B3_0 = L_9;
		G_B3_1 = G_B2_0;
	}

IL_004f:
	{
		NullCheck(G_B3_1);
		Panel_set_name_m724979D780FAD5DD03DE0ED1BE477064EF46EE14(G_B3_1, G_B3_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.UIElements.RuntimePanel::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimePanel_Update_m46590AEF812CCD5693C3D1AD54DB02C2DEC7D837 (RuntimePanel_t6D5485B3EB9C598452C70E12357282E046DD1409 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_PanelSettings != null)
		PanelSettings_tA06886CA55D7F3105153641E0BA56FF15E8DCA69 * L_0 = __this->get_m_PanelSettings_55();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// m_PanelSettings.ApplyPanelSettings();
		PanelSettings_tA06886CA55D7F3105153641E0BA56FF15E8DCA69 * L_2 = __this->get_m_PanelSettings_55();
		NullCheck(L_2);
		PanelSettings_ApplyPanelSettings_m386F4A77DD50664863D2858D9FE5AE8F2C5EAFE5(L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		// base.Update();
		BaseVisualElementPanel_Update_mA0DD1F2AA24B43833485390F3492373DFB168CD3(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.UIElements.RuntimePanel::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimePanel__cctor_mB20D53258F2AB53A7AA25697630EE0A267421284 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimePanel_t6D5485B3EB9C598452C70E12357282E046DD1409_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static readonly EventDispatcher s_EventDispatcher = RuntimeEventDispatcher.Create();
		EventDispatcher_t86D9B0A3CA4441F30AA1A940D0D50F9AEC9912F2 * L_0;
		L_0 = RuntimeEventDispatcher_Create_m65E45A16196E086E21541BA034BE7A6E6BFBE4C3(/*hidden argument*/NULL);
		((RuntimePanel_t6D5485B3EB9C598452C70E12357282E046DD1409_StaticFields*)il2cpp_codegen_static_fields_for(RuntimePanel_t6D5485B3EB9C598452C70E12357282E046DD1409_il2cpp_TypeInfo_var))->set_s_EventDispatcher_54(L_0);
		return;
	}
}
// UnityEngine.GameObject UnityEngine.UIElements.RuntimePanel::UnityEngine.UIElements.IRuntimePanel.get_selectableGameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * RuntimePanel_UnityEngine_UIElements_IRuntimePanel_get_selectableGameObject_m78C9F5F8887D9E30C7FDC082D37AB6401A857F2B (RuntimePanel_t6D5485B3EB9C598452C70E12357282E046DD1409 * __this, const RuntimeMethod* method)
{
	{
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = BaseRuntimePanel_get_selectableGameObject_m9254091C528BD3A3286BDE454EAFA0F565854FCC_inline(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void UnityEngine.UIElements.RuntimePanel::UnityEngine.UIElements.IRuntimePanel.set_selectableGameObject(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimePanel_UnityEngine_UIElements_IRuntimePanel_set_selectableGameObject_m3F63128D51EE6B39EB447AD71490E21589DF5ED2 (RuntimePanel_t6D5485B3EB9C598452C70E12357282E046DD1409 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___value0, const RuntimeMethod* method)
{
	{
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = ___value0;
		BaseRuntimePanel_set_selectableGameObject_mF13AF5A52CADAD0DA8BBAEC100C465F7BA0C95CC(__this, L_0, /*hidden argument*/NULL);
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
// UnityEngine.Vector2 UnityEngine.UIElements.RuntimePanelUtils::ScreenToPanel(UnityEngine.UIElements.IPanel,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  RuntimePanelUtils_ScreenToPanel_m0CDA6AC3F016D323E0454C309941A62E484C5CE9 (RuntimeObject* ___panel0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___screenPosition1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseRuntimePanel_tE55DB58DC0A1F524F98CC999672C716946DA4754_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return ((BaseRuntimePanel)panel).ScreenToPanel(screenPosition);
		RuntimeObject* L_0 = ___panel0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1 = ___screenPosition1;
		NullCheck(((BaseRuntimePanel_tE55DB58DC0A1F524F98CC999672C716946DA4754 *)CastclassClass((RuntimeObject*)L_0, BaseRuntimePanel_tE55DB58DC0A1F524F98CC999672C716946DA4754_il2cpp_TypeInfo_var)));
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2;
		L_2 = BaseRuntimePanel_ScreenToPanel_m675DC87771E2BB7BBA9564EAB1DF72B00A2D5ADF(((BaseRuntimePanel_tE55DB58DC0A1F524F98CC999672C716946DA4754 *)CastclassClass((RuntimeObject*)L_0, BaseRuntimePanel_tE55DB58DC0A1F524F98CC999672C716946DA4754_il2cpp_TypeInfo_var)), L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// UnityEngine.Vector2 UnityEngine.UIElements.RuntimePanelUtils::CameraTransformWorldToPanel(UnityEngine.UIElements.IPanel,UnityEngine.Vector3,UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  RuntimePanelUtils_CameraTransformWorldToPanel_m9F70DCDF0951A148D2F267EAD0BBEBE798A6083D (RuntimeObject* ___panel0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldPosition1, Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___camera2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseRuntimePanel_tE55DB58DC0A1F524F98CC999672C716946DA4754_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector2 screenPoint = camera.WorldToScreenPoint(worldPosition);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_0 = ___camera2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = ___worldPosition1;
		NullCheck(L_0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Camera_WorldToScreenPoint_m44710195E7736CE9DE5A9B05E32059A9A950F95C(L_0, L_1, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3;
		L_3 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		// screenPoint.y = Screen.height - screenPoint.y; // Flip y axis. TODO: add appropriate #if (if necessary)
		int32_t L_4;
		L_4 = Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE(/*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5 = V_0;
		float L_6 = L_5.get_y_1();
		(&V_0)->set_y_1(((float)il2cpp_codegen_subtract((float)((float)((float)L_4)), (float)L_6)));
		// return ((BaseRuntimePanel)panel).ScreenToPanel(screenPoint);
		RuntimeObject* L_7 = ___panel0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_8 = V_0;
		NullCheck(((BaseRuntimePanel_tE55DB58DC0A1F524F98CC999672C716946DA4754 *)CastclassClass((RuntimeObject*)L_7, BaseRuntimePanel_tE55DB58DC0A1F524F98CC999672C716946DA4754_il2cpp_TypeInfo_var)));
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_9;
		L_9 = BaseRuntimePanel_ScreenToPanel_m675DC87771E2BB7BBA9564EAB1DF72B00A2D5ADF(((BaseRuntimePanel_tE55DB58DC0A1F524F98CC999672C716946DA4754 *)CastclassClass((RuntimeObject*)L_7, BaseRuntimePanel_tE55DB58DC0A1F524F98CC999672C716946DA4754_il2cpp_TypeInfo_var)), L_8, /*hidden argument*/NULL);
		return L_9;
	}
}
// UnityEngine.Rect UnityEngine.UIElements.RuntimePanelUtils::CameraTransformWorldToPanelRect(UnityEngine.UIElements.IPanel,UnityEngine.Vector3,UnityEngine.Vector2,UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  RuntimePanelUtils_CameraTransformWorldToPanelRect_m07193B74025A1B9FC467F12513D59E9110BEF36A (RuntimeObject* ___panel0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldPosition1, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___worldSize2, Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___camera3, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// worldSize.y = -worldSize.y; // BottomRight has negative y offset
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___worldSize2;
		float L_1 = L_0.get_y_1();
		(&___worldSize2)->set_y_1(((-L_1)));
		// Vector2 topLeftOnPanel = CameraTransformWorldToPanel(panel, worldPosition, camera);
		RuntimeObject* L_2 = ___panel0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___worldPosition1;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_4 = ___camera3;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5;
		L_5 = RuntimePanelUtils_CameraTransformWorldToPanel_m9F70DCDF0951A148D2F267EAD0BBEBE798A6083D(L_2, L_3, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		// Vector3 bottomRightInWorldFacingCam = worldPosition + camera.worldToCameraMatrix.MultiplyVector(worldSize);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___worldPosition1;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_7 = ___camera3;
		NullCheck(L_7);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_8;
		L_8 = Camera_get_worldToCameraMatrix_m7E2B63F64437E2C91C07F7FC819C79BE2152C5F6(L_7, /*hidden argument*/NULL);
		V_3 = L_8;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_9 = ___worldSize2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		L_10 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_9, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		L_11 = Matrix4x4_MultiplyVector_m88C4BE23EB0B45BB701514AF3E1CA5A857F8212C((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)(&V_3), L_10, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_6, L_11, /*hidden argument*/NULL);
		V_1 = L_12;
		// Vector2 bottomRightOnPanel = CameraTransformWorldToPanel(panel, bottomRightInWorldFacingCam, camera);
		RuntimeObject* L_13 = ___panel0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14 = V_1;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_15 = ___camera3;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_16;
		L_16 = RuntimePanelUtils_CameraTransformWorldToPanel_m9F70DCDF0951A148D2F267EAD0BBEBE798A6083D(L_13, L_14, L_15, /*hidden argument*/NULL);
		V_2 = L_16;
		// return new Rect(topLeftOnPanel, bottomRightOnPanel - topLeftOnPanel);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_17 = V_0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_18 = V_2;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_19 = V_0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_20;
		L_20 = Vector2_op_Subtraction_m6E536A8C72FEAA37FF8D5E26E11D6E71EB59599A_inline(L_18, L_19, /*hidden argument*/NULL);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_21;
		memset((&L_21), 0, sizeof(L_21));
		Rect__ctor_m00C682F84642AE657D7EBB0D5BC6E8F3CA4D1E82((&L_21), L_17, L_20, /*hidden argument*/NULL);
		return L_21;
	}
}
// System.Void UnityEngine.UIElements.RuntimePanelUtils::ResetDynamicAtlas(UnityEngine.UIElements.IPanel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimePanelUtils_ResetDynamicAtlas_m38F114D10CD94C20603A1B5DCA2A1F73266E70CB (RuntimeObject* ___panel0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseVisualElementPanel_tFF0B76C4FDAE6AA5D9A055D1FDD29AE67B93B95D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DynamicAtlas_t024D0D5DF3B5CCA7D05187B7745B0F6F83662D60_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BaseVisualElementPanel_tFF0B76C4FDAE6AA5D9A055D1FDD29AE67B93B95D * V_0 = NULL;
	DynamicAtlas_t024D0D5DF3B5CCA7D05187B7745B0F6F83662D60 * G_B4_0 = NULL;
	DynamicAtlas_t024D0D5DF3B5CCA7D05187B7745B0F6F83662D60 * G_B3_0 = NULL;
	{
		// var p = panel as BaseVisualElementPanel;
		RuntimeObject* L_0 = ___panel0;
		V_0 = ((BaseVisualElementPanel_tFF0B76C4FDAE6AA5D9A055D1FDD29AE67B93B95D *)IsInstClass((RuntimeObject*)L_0, BaseVisualElementPanel_tFF0B76C4FDAE6AA5D9A055D1FDD29AE67B93B95D_il2cpp_TypeInfo_var));
		// if (p == null)
		BaseVisualElementPanel_tFF0B76C4FDAE6AA5D9A055D1FDD29AE67B93B95D * L_1 = V_0;
		if (L_1)
		{
			goto IL_000b;
		}
	}
	{
		// return;
		return;
	}

IL_000b:
	{
		// var atlas = p.atlas as DynamicAtlas;
		BaseVisualElementPanel_tFF0B76C4FDAE6AA5D9A055D1FDD29AE67B93B95D * L_2 = V_0;
		NullCheck(L_2);
		AtlasBase_t04E16651AFF344EDD21EB14F2E9CF0B76DACA9E3 * L_3;
		L_3 = VirtFuncInvoker0< AtlasBase_t04E16651AFF344EDD21EB14F2E9CF0B76DACA9E3 * >::Invoke(44 /* UnityEngine.UIElements.AtlasBase UnityEngine.UIElements.BaseVisualElementPanel::get_atlas() */, L_2);
		// atlas?.Reset();
		DynamicAtlas_t024D0D5DF3B5CCA7D05187B7745B0F6F83662D60 * L_4 = ((DynamicAtlas_t024D0D5DF3B5CCA7D05187B7745B0F6F83662D60 *)IsInstClass((RuntimeObject*)L_3, DynamicAtlas_t024D0D5DF3B5CCA7D05187B7745B0F6F83662D60_il2cpp_TypeInfo_var));
		G_B3_0 = L_4;
		if (L_4)
		{
			G_B4_0 = L_4;
			goto IL_001b;
		}
	}
	{
		return;
	}

IL_001b:
	{
		NullCheck(G_B4_0);
		VirtActionInvoker0::Invoke(6 /* System.Void UnityEngine.UIElements.AtlasBase::Reset() */, G_B4_0);
		// }
		return;
	}
}
// System.Void UnityEngine.UIElements.RuntimePanelUtils::SetTextureDirty(UnityEngine.UIElements.IPanel,UnityEngine.Texture2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimePanelUtils_SetTextureDirty_mDCA1EC1475788918E3E4BB70DF7EFC789A40383B (RuntimeObject* ___panel0, Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___texture1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseVisualElementPanel_tFF0B76C4FDAE6AA5D9A055D1FDD29AE67B93B95D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DynamicAtlas_t024D0D5DF3B5CCA7D05187B7745B0F6F83662D60_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BaseVisualElementPanel_tFF0B76C4FDAE6AA5D9A055D1FDD29AE67B93B95D * V_0 = NULL;
	DynamicAtlas_t024D0D5DF3B5CCA7D05187B7745B0F6F83662D60 * G_B4_0 = NULL;
	DynamicAtlas_t024D0D5DF3B5CCA7D05187B7745B0F6F83662D60 * G_B3_0 = NULL;
	{
		// var p = panel as BaseVisualElementPanel;
		RuntimeObject* L_0 = ___panel0;
		V_0 = ((BaseVisualElementPanel_tFF0B76C4FDAE6AA5D9A055D1FDD29AE67B93B95D *)IsInstClass((RuntimeObject*)L_0, BaseVisualElementPanel_tFF0B76C4FDAE6AA5D9A055D1FDD29AE67B93B95D_il2cpp_TypeInfo_var));
		// if (p == null)
		BaseVisualElementPanel_tFF0B76C4FDAE6AA5D9A055D1FDD29AE67B93B95D * L_1 = V_0;
		if (L_1)
		{
			goto IL_000b;
		}
	}
	{
		// return;
		return;
	}

IL_000b:
	{
		// var atlas = p.atlas as DynamicAtlas;
		BaseVisualElementPanel_tFF0B76C4FDAE6AA5D9A055D1FDD29AE67B93B95D * L_2 = V_0;
		NullCheck(L_2);
		AtlasBase_t04E16651AFF344EDD21EB14F2E9CF0B76DACA9E3 * L_3;
		L_3 = VirtFuncInvoker0< AtlasBase_t04E16651AFF344EDD21EB14F2E9CF0B76DACA9E3 * >::Invoke(44 /* UnityEngine.UIElements.AtlasBase UnityEngine.UIElements.BaseVisualElementPanel::get_atlas() */, L_2);
		// atlas?.SetDirty(texture);
		DynamicAtlas_t024D0D5DF3B5CCA7D05187B7745B0F6F83662D60 * L_4 = ((DynamicAtlas_t024D0D5DF3B5CCA7D05187B7745B0F6F83662D60 *)IsInstClass((RuntimeObject*)L_3, DynamicAtlas_t024D0D5DF3B5CCA7D05187B7745B0F6F83662D60_il2cpp_TypeInfo_var));
		G_B3_0 = L_4;
		if (L_4)
		{
			G_B4_0 = L_4;
			goto IL_001b;
		}
	}
	{
		return;
	}

IL_001b:
	{
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_5 = ___texture1;
		NullCheck(G_B4_0);
		DynamicAtlas_SetDirty_m8DBF9EB707982B2412C6AA9F622F256A5D958CA5(G_B4_0, L_5, /*hidden argument*/NULL);
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
// UnityEngine.UIElements.PanelSettings UnityEngine.UIElements.UIDocument::get_panelSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PanelSettings_tA06886CA55D7F3105153641E0BA56FF15E8DCA69 * UIDocument_get_panelSettings_m491FBD69A05F37AC61E92DBC6216CCAB1B06615E (UIDocument_t008D811860584F44CEBB5AF575856E6EFCEBECC4 * __this, const RuntimeMethod* method)
{
	{
		// return m_PanelSettings;
		PanelSettings_tA06886CA55D7F3105153641E0BA56FF15E8DCA69 * L_0 = __this->get_m_PanelSettings_9();
		return L_0;
	}
}
// System.Void UnityEngine.UIElements.UIDocument::set_panelSettings(UnityEngine.UIElements.PanelSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIDocument_set_panelSettings_mEEA4B932EDAB68EA92BA421CE6CEDB7E4AAEC4B3 (UIDocument_t008D811860584F44CEBB5AF575856E6EFCEBECC4 * __this, PanelSettings_tA06886CA55D7F3105153641E0BA56FF15E8DCA69 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m27B05A7331A3E31017AE91D26A2EB7DDE63D7345_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mBDF6727B42AB11D52CE47931EB4F4A17CE10238D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mE640EE863C1AD4E7A6879F7C8172A3D0FF659024_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m301D9E8B4A430B934D508A5C7055E605EA5B3B50_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tA397CC4887AB161D4CE3FBF104F8010A9DFCFE07  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// if (parentUI == null)
		UIDocument_t008D811860584F44CEBB5AF575856E6EFCEBECC4 * L_0;
		L_0 = UIDocument_get_parentUI_mB0FE5256563CDCEA105506D6784230AAE8142088_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0066;
		}
	}
	{
		// if (m_PanelSettings == value)
		PanelSettings_tA06886CA55D7F3105153641E0BA56FF15E8DCA69 * L_2 = __this->get_m_PanelSettings_9();
		PanelSettings_tA06886CA55D7F3105153641E0BA56FF15E8DCA69 * L_3 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_2, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0029;
		}
	}
	{
		// m_PreviousPanelSettings = m_PanelSettings;
		PanelSettings_tA06886CA55D7F3105153641E0BA56FF15E8DCA69 * L_5 = __this->get_m_PanelSettings_9();
		__this->set_m_PreviousPanelSettings_10(L_5);
		// return;
		return;
	}

IL_0029:
	{
		// if (m_PanelSettings != null)
		PanelSettings_tA06886CA55D7F3105153641E0BA56FF15E8DCA69 * L_6 = __this->get_m_PanelSettings_9();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_6, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0043;
		}
	}
	{
		// m_PanelSettings.DetachUIDocument(this);
		PanelSettings_tA06886CA55D7F3105153641E0BA56FF15E8DCA69 * L_8 = __this->get_m_PanelSettings_9();
		NullCheck(L_8);
		PanelSettings_DetachUIDocument_m19A58FD8BCB6A59BD33F8591843A3D3D2DD3F0E6(L_8, __this, /*hidden argument*/NULL);
	}

IL_0043:
	{
		// m_PanelSettings = value;
		PanelSettings_tA06886CA55D7F3105153641E0BA56FF15E8DCA69 * L_9 = ___value0;
		__this->set_m_PanelSettings_9(L_9);
		// if (m_PanelSettings != null)
		PanelSettings_tA06886CA55D7F3105153641E0BA56FF15E8DCA69 * L_10 = __this->get_m_PanelSettings_9();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_10, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0077;
		}
	}
	{
		// m_PanelSettings.AttachAndInsertUIDocumentToVisualTree(this);
		PanelSettings_tA06886CA55D7F3105153641E0BA56FF15E8DCA69 * L_12 = __this->get_m_PanelSettings_9();
		NullCheck(L_12);
		PanelSettings_AttachAndInsertUIDocumentToVisualTree_mB6B7D505B1765940998796D2ACE64FAD83098693(L_12, __this, /*hidden argument*/NULL);
		// }
		goto IL_0077;
	}

IL_0066:
	{
		// m_PanelSettings = parentUI.m_PanelSettings;
		UIDocument_t008D811860584F44CEBB5AF575856E6EFCEBECC4 * L_13;
		L_13 = UIDocument_get_parentUI_mB0FE5256563CDCEA105506D6784230AAE8142088_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_13);
		PanelSettings_tA06886CA55D7F3105153641E0BA56FF15E8DCA69 * L_14 = L_13->get_m_PanelSettings_9();
		__this->set_m_PanelSettings_9(L_14);
	}

IL_0077:
	{
		// if (m_ChildrenContent != null)
		UIDocumentList_t3D7C0E63339FDA7858C1D1AE3EB911CDB76C18C5 * L_15 = __this->get_m_ChildrenContent_12();
		if (!L_15)
		{
			goto IL_00bd;
		}
	}
	{
		// foreach (var child in m_ChildrenContent.m_AttachedUIDocuments)
		UIDocumentList_t3D7C0E63339FDA7858C1D1AE3EB911CDB76C18C5 * L_16 = __this->get_m_ChildrenContent_12();
		NullCheck(L_16);
		List_1_tAB773DE00C0DE14686075955D7FB71ACD6194509 * L_17 = L_16->get_m_AttachedUIDocuments_0();
		NullCheck(L_17);
		Enumerator_tA397CC4887AB161D4CE3FBF104F8010A9DFCFE07  L_18;
		L_18 = List_1_GetEnumerator_m301D9E8B4A430B934D508A5C7055E605EA5B3B50(L_17, /*hidden argument*/List_1_GetEnumerator_m301D9E8B4A430B934D508A5C7055E605EA5B3B50_RuntimeMethod_var);
		V_0 = L_18;
	}

IL_0090:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00a4;
		}

IL_0092:
		{
			// foreach (var child in m_ChildrenContent.m_AttachedUIDocuments)
			UIDocument_t008D811860584F44CEBB5AF575856E6EFCEBECC4 * L_19;
			L_19 = Enumerator_get_Current_mE640EE863C1AD4E7A6879F7C8172A3D0FF659024_inline((Enumerator_tA397CC4887AB161D4CE3FBF104F8010A9DFCFE07 *)(&V_0), /*hidden argument*/Enumerator_get_Current_mE640EE863C1AD4E7A6879F7C8172A3D0FF659024_RuntimeMethod_var);
			// child.panelSettings = m_PanelSettings;
			PanelSettings_tA06886CA55D7F3105153641E0BA56FF15E8DCA69 * L_20 = __this->get_m_PanelSettings_9();
			NullCheck(L_19);
			UIDocument_set_panelSettings_mEEA4B932EDAB68EA92BA421CE6CEDB7E4AAEC4B3(L_19, L_20, /*hidden argument*/NULL);
		}

IL_00a4:
		{
			// foreach (var child in m_ChildrenContent.m_AttachedUIDocuments)
			bool L_21;
			L_21 = Enumerator_MoveNext_mBDF6727B42AB11D52CE47931EB4F4A17CE10238D((Enumerator_tA397CC4887AB161D4CE3FBF104F8010A9DFCFE07 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_mBDF6727B42AB11D52CE47931EB4F4A17CE10238D_RuntimeMethod_var);
			if (L_21)
			{
				goto IL_0092;
			}
		}

IL_00ad:
		{
			IL2CPP_LEAVE(0xBD, FINALLY_00af);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00af;
	}

FINALLY_00af:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m27B05A7331A3E31017AE91D26A2EB7DDE63D7345((Enumerator_tA397CC4887AB161D4CE3FBF104F8010A9DFCFE07 *)(&V_0), /*hidden argument*/Enumerator_Dispose_m27B05A7331A3E31017AE91D26A2EB7DDE63D7345_RuntimeMethod_var);
		IL2CPP_END_FINALLY(175)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(175)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xBD, IL_00bd)
	}

IL_00bd:
	{
		// m_PreviousPanelSettings = m_PanelSettings;
		PanelSettings_tA06886CA55D7F3105153641E0BA56FF15E8DCA69 * L_22 = __this->get_m_PanelSettings_9();
		__this->set_m_PreviousPanelSettings_10(L_22);
		// }
		return;
	}
}
// UnityEngine.UIElements.UIDocument UnityEngine.UIElements.UIDocument::get_parentUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UIDocument_t008D811860584F44CEBB5AF575856E6EFCEBECC4 * UIDocument_get_parentUI_mB0FE5256563CDCEA105506D6784230AAE8142088 (UIDocument_t008D811860584F44CEBB5AF575856E6EFCEBECC4 * __this, const RuntimeMethod* method)
{
	{
		// get => m_ParentUI;
		UIDocument_t008D811860584F44CEBB5AF575856E6EFCEBECC4 * L_0 = __this->get_m_ParentUI_11();
		return L_0;
	}
}
// System.Void UnityEngine.UIElements.UIDocument::set_parentUI(UnityEngine.UIElements.UIDocument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIDocument_set_parentUI_m653992C58145B07B94EFCBE69A5F01FAB7DED686 (UIDocument_t008D811860584F44CEBB5AF575856E6EFCEBECC4 * __this, UIDocument_t008D811860584F44CEBB5AF575856E6EFCEBECC4 * ___value0, const RuntimeMethod* method)
{
	{
		// private set => m_ParentUI = value;
		UIDocument_t008D811860584F44CEBB5AF575856E6EFCEBECC4 * L_0 = ___value0;
		__this->set_m_ParentUI_11(L_0);
		return;
	}
}
// UnityEngine.UIElements.VisualTreeAsset UnityEngine.UIElements.UIDocument::get_visualTreeAsset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VisualTreeAsset_tF7210F261F2888C05E43C7B01200FBFEA655D5A9 * UIDocument_get_visualTreeAsset_m11B3F1DB383082994D0F295E0B72707724939DED (UIDocument_t008D811860584F44CEBB5AF575856E6EFCEBECC4 * __this, const RuntimeMethod* method)
{
	{
		// get { return sourceAsset; }
		VisualTreeAsset_tF7210F261F2888C05E43C7B01200FBFEA655D5A9 * L_0 = __this->get_sourceAsset_14();
		return L_0;
	}
}
// System.Void UnityEngine.UIElements.UIDocument::set_visualTreeAsset(UnityEngine.UIElements.VisualTreeAsset)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIDocument_set_visualTreeAsset_m75EF881A9AC9768DDABB639ABA3DE92AAF76603C (UIDocument_t008D811860584F44CEBB5AF575856E6EFCEBECC4 * __this, VisualTreeAsset_tF7210F261F2888C05E43C7B01200FBFEA655D5A9 * ___value0, const RuntimeMethod* method)
{
	{
		// sourceAsset = value;
		VisualTreeAsset_tF7210F261F2888C05E43C7B01200FBFEA655D5A9 * L_0 = ___value0;
		__this->set_sourceAsset_14(L_0);
		// RecreateUI();
		UIDocument_RecreateUI_m5AC90ADD53B4FDD1C46922E03662CA971AD64A6F(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.UIDocument::get_rootVisualElement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * UIDocument_get_rootVisualElement_m0BE2D8FAA3533A8DBEB2FDADD2F98FDE257F7D76 (UIDocument_t008D811860584F44CEBB5AF575856E6EFCEBECC4 * __this, const RuntimeMethod* method)
{
	{
		// get { return m_RootVisualElement; }
		VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * L_0 = __this->get_m_RootVisualElement_15();
		return L_0;
	}
}
// System.Int32 UnityEngine.UIElements.UIDocument::get_firstChildInserIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UIDocument_get_firstChildInserIndex_m508E850B7897D76461DA6A09F9E33806684170D9 (UIDocument_t008D811860584F44CEBB5AF575856E6EFCEBECC4 * __this, const RuntimeMethod* method)
{
	{
		// get => m_FirstChildInsertIndex;
		int32_t L_0 = __this->get_m_FirstChildInsertIndex_16();
		return L_0;
	}
}
// System.Single UnityEngine.UIElements.UIDocument::get_sortingOrder()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float UIDocument_get_sortingOrder_mFB0A6D9948BA436BFE9AE3D250E094F07FD14DE0 (UIDocument_t008D811860584F44CEBB5AF575856E6EFCEBECC4 * __this, const RuntimeMethod* method)
{
	{
		// get => m_SortingOrder;
		float L_0 = __this->get_m_SortingOrder_17();
		return L_0;
	}
}
// System.Void UnityEngine.UIElements.UIDocument::set_sortingOrder(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIDocument_set_sortingOrder_m9D1071A948429C82D5C1FFF81DF9D79D884848F3 (UIDocument_t008D811860584F44CEBB5AF575856E6EFCEBECC4 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// if (m_SortingOrder == value)
		float L_0 = __this->get_m_SortingOrder_17();
		float L_1 = ___value0;
		if ((!(((float)L_0) == ((float)L_1))))
		{
			goto IL_000a;
		}
	}
	{
		// return;
		return;
	}

IL_000a:
	{
		// m_SortingOrder = value;
		float L_2 = ___value0;
		__this->set_m_SortingOrder_17(L_2);
		// AddRootVisualElementToTree();
		UIDocument_AddRootVisualElementToTree_m153A4C00FE4077CB2963C1306FEAAD2A6CECC67F(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.UIElements.UIDocument::ApplySortingOrder()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIDocument_ApplySortingOrder_m8635B4F8E29C5AA28920B48D114CD44D15309552 (UIDocument_t008D811860584F44CEBB5AF575856E6EFCEBECC4 * __this, const RuntimeMethod* method)
{
	{
		// AddRootVisualElementToTree();
		UIDocument_AddRootVisualElementToTree_m153A4C00FE4077CB2963C1306FEAAD2A6CECC67F(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.UIElements.UIDocument::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIDocument__ctor_m04842F376963D4F85E151129AF8569CCC0BB5737 (UIDocument_t008D811860584F44CEBB5AF575856E6EFCEBECC4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIDocument_t008D811860584F44CEBB5AF575856E6EFCEBECC4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private UIDocument()
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		// m_UIDocumentCount = s_CurrentUIDocumentCounter++;
		IL2CPP_RUNTIME_CLASS_INIT(UIDocument_t008D811860584F44CEBB5AF575856E6EFCEBECC4_il2cpp_TypeInfo_var);
		int32_t L_0 = ((UIDocument_t008D811860584F44CEBB5AF575856E6EFCEBECC4_StaticFields*)il2cpp_codegen_static_fields_for(UIDocument_t008D811860584F44CEBB5AF575856E6EFCEBECC4_il2cpp_TypeInfo_var))->get_s_CurrentUIDocumentCounter_7();
		int32_t L_1 = L_0;
		((UIDocument_t008D811860584F44CEBB5AF575856E6EFCEBECC4_StaticFields*)il2cpp_codegen_static_fields_for(UIDocument_t008D811860584F44CEBB5AF575856E6EFCEBECC4_il2cpp_TypeInfo_var))->set_s_CurrentUIDocumentCounter_7(((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)1)));
		__this->set_m_UIDocumentCount_8(L_1);
		// }
		return;
	}
}
// System.Void UnityEngine.UIElements.UIDocument::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIDocument_Awake_m0E518822FAE86324D9A9CDA2E7C75E1AB912EB03 (UIDocument_t008D811860584F44CEBB5AF575856E6EFCEBECC4 * __this, const RuntimeMethod* method)
{
	{
		// SetupFromHierarchy();
		UIDocument_SetupFromHierarchy_m05E77369BA064D6293FCC65C7A15F5EDFB630E3D(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.UIElements.UIDocument::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIDocument_OnEnable_m2433FEB7E5CB20F735AD97E14C1F8EB1535909BF (UIDocument_t008D811860584F44CEBB5AF575856E6EFCEBECC4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (parentUI != null && m_PanelSettings == null)
		UIDocument_t008D811860584F44CEBB5AF575856E6EFCEBECC4 * L_0;
		L_0 = UIDocument_get_parentUI_mB0FE5256563CDCEA105506D6784230AAE8142088_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_002d;
		}
	}
	{
		PanelSettings_tA06886CA55D7F3105153641E0BA56FF15E8DCA69 * L_2 = __this->get_m_PanelSettings_9();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_2, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_002d;
		}
	}
	{
		// m_PanelSettings = parentUI.m_PanelSettings;
		UIDocument_t008D811860584F44CEBB5AF575856E6EFCEBECC4 * L_4;
		L_4 = UIDocument_get_parentUI_mB0FE5256563CDCEA105506D6784230AAE8142088_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		PanelSettings_tA06886CA55D7F3105153641E0BA56FF15E8DCA69 * L_5 = L_4->get_m_PanelSettings_9();
		__this->set_m_PanelSettings_9(L_5);
	}

IL_002d:
	{
		// if (m_RootVisualElement == null)
		VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * L_6 = __this->get_m_RootVisualElement_15();
		if (L_6)
		{
			goto IL_003c;
		}
	}
	{
		// RecreateUI();
		UIDocument_RecreateUI_m5AC90ADD53B4FDD1C46922E03662CA971AD64A6F(__this, /*hidden argument*/NULL);
		// }
		return;
	}

IL_003c:
	{
		// AddRootVisualElementToTree();
		UIDocument_AddRootVisualElementToTree_m153A4C00FE4077CB2963C1306FEAAD2A6CECC67F(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.UIElements.UIDocument::SetupFromHierarchy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIDocument_SetupFromHierarchy_m05E77369BA064D6293FCC65C7A15F5EDFB630E3D (UIDocument_t008D811860584F44CEBB5AF575856E6EFCEBECC4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (parentUI != null)
		UIDocument_t008D811860584F44CEBB5AF575856E6EFCEBECC4 * L_0;
		L_0 = UIDocument_get_parentUI_mB0FE5256563CDCEA105506D6784230AAE8142088_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// parentUI.RemoveChild(this);
		UIDocument_t008D811860584F44CEBB5AF575856E6EFCEBECC4 * L_2;
		L_2 = UIDocument_get_parentUI_mB0FE5256563CDCEA105506D6784230AAE8142088_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		UIDocument_RemoveChild_m0EA7C097A72077F3CCEAAEE342BEBD745B789C95(L_2, __this, /*hidden argument*/NULL);
	}

IL_001a:
	{
		// parentUI = FindUIDocumentParent();
		UIDocument_t008D811860584F44CEBB5AF575856E6EFCEBECC4 * L_3;
		L_3 = UIDocument_FindUIDocumentParent_mE5879AEE37F2BC3079C66248813BA8B53221335E(__this, /*hidden argument*/NULL);
		UIDocument_set_parentUI_m653992C58145B07B94EFCBE69A5F01FAB7DED686_inline(__this, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// UnityEngine.UIElements.UIDocument UnityEngine.UIElements.UIDocument::FindUIDocumentParent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UIDocument_t008D811860584F44CEBB5AF575856E6EFCEBECC4 * UIDocument_FindUIDocumentParent_mE5879AEE37F2BC3079C66248813BA8B53221335E (UIDocument_t008D811860584F44CEBB5AF575856E6EFCEBECC4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentsInParent_TisUIDocument_t008D811860584F44CEBB5AF575856E6EFCEBECC4_mE1D665EAD1815289915F3D1F6F6B951E91315358_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * V_0 = NULL;
	UIDocumentU5BU5D_t07C874E2F207A4181C854213623A407A46E7372B* V_1 = NULL;
	{
		// Transform t = transform;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		// Transform parentTransform = t.parent;
		NullCheck(L_0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// if (parentTransform != null)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_2, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		// var potentialParents = parentTransform.GetComponentsInParent<UIDocument>(true);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4 = V_0;
		NullCheck(L_4);
		UIDocumentU5BU5D_t07C874E2F207A4181C854213623A407A46E7372B* L_5;
		L_5 = Component_GetComponentsInParent_TisUIDocument_t008D811860584F44CEBB5AF575856E6EFCEBECC4_mE1D665EAD1815289915F3D1F6F6B951E91315358(L_4, (bool)1, /*hidden argument*/Component_GetComponentsInParent_TisUIDocument_t008D811860584F44CEBB5AF575856E6EFCEBECC4_mE1D665EAD1815289915F3D1F6F6B951E91315358_RuntimeMethod_var);
		V_1 = L_5;
		// if (potentialParents != null && potentialParents.Length > 0)
		UIDocumentU5BU5D_t07C874E2F207A4181C854213623A407A46E7372B* L_6 = V_1;
		if (!L_6)
		{
			goto IL_0028;
		}
	}
	{
		UIDocumentU5BU5D_t07C874E2F207A4181C854213623A407A46E7372B* L_7 = V_1;
		NullCheck(L_7);
		if (!(((RuntimeArray*)L_7)->max_length))
		{
			goto IL_0028;
		}
	}
	{
		// return potentialParents[0];
		UIDocumentU5BU5D_t07C874E2F207A4181C854213623A407A46E7372B* L_8 = V_1;
		NullCheck(L_8);
		int32_t L_9 = 0;
		UIDocument_t008D811860584F44CEBB5AF575856E6EFCEBECC4 * L_10 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		return L_10;
	}

IL_0028:
	{
		// return null;
		return (UIDocument_t008D811860584F44CEBB5AF575856E6EFCEBECC4 *)NULL;
	}
}
// System.Void UnityEngine.UIElements.UIDocument::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIDocument_Reset_m33566D0E5D0E487C90033A4F6C2B253C0A836C6D (UIDocument_t008D811860584F44CEBB5AF575856E6EFCEBECC4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PanelSettings_tA06886CA55D7F3105153641E0BA56FF15E8DCA69 * G_B3_0 = NULL;
	PanelSettings_tA06886CA55D7F3105153641E0BA56FF15E8DCA69 * G_B2_0 = NULL;
	{
		// if (parentUI == null)
		UIDocument_t008D811860584F44CEBB5AF575856E6EFCEBECC4 * L_0;
		L_0 = UIDocument_get_parentUI_mB0FE5256563CDCEA105506D6784230AAE8142088_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		// m_PreviousPanelSettings?.DetachUIDocument(this);
		PanelSettings_tA06886CA55D7F3105153641E0BA56FF15E8DCA69 * L_2 = __this->get_m_PreviousPanelSettings_10();
		PanelSettings_tA06886CA55D7F3105153641E0BA56FF15E8DCA69 * L_3 = L_2;
		G_B2_0 = L_3;
		if (L_3)
		{
			G_B3_0 = L_3;
			goto IL_001a;
		}
	}
	{
		goto IL_0020;
	}

IL_001a:
	{
		NullCheck(G_B3_0);
		PanelSettings_DetachUIDocument_m19A58FD8BCB6A59BD33F8591843A3D3D2DD3F0E6(G_B3_0, __this, /*hidden argument*/NULL);
	}

IL_0020:
	{
		// panelSettings = null;
		UIDocument_set_panelSettings_mEEA4B932EDAB68EA92BA421CE6CEDB7E4AAEC4B3(__this, (PanelSettings_tA06886CA55D7F3105153641E0BA56FF15E8DCA69 *)NULL, /*hidden argument*/NULL);
	}

IL_0027:
	{
		// SetupFromHierarchy();
		UIDocument_SetupFromHierarchy_m05E77369BA064D6293FCC65C7A15F5EDFB630E3D(__this, /*hidden argument*/NULL);
		// if (parentUI != null)
		UIDocument_t008D811860584F44CEBB5AF575856E6EFCEBECC4 * L_4;
		L_4 = UIDocument_get_parentUI_mB0FE5256563CDCEA105506D6784230AAE8142088_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_4, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0053;
		}
	}
	{
		// m_PanelSettings = parentUI.m_PanelSettings;
		UIDocument_t008D811860584F44CEBB5AF575856E6EFCEBECC4 * L_6;
		L_6 = UIDocument_get_parentUI_mB0FE5256563CDCEA105506D6784230AAE8142088_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		PanelSettings_tA06886CA55D7F3105153641E0BA56FF15E8DCA69 * L_7 = L_6->get_m_PanelSettings_9();
		__this->set_m_PanelSettings_9(L_7);
		// AddRootVisualElementToTree();
		UIDocument_AddRootVisualElementToTree_m153A4C00FE4077CB2963C1306FEAAD2A6CECC67F(__this, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0053:
	{
		// else if (m_PanelSettings != null)
		PanelSettings_tA06886CA55D7F3105153641E0BA56FF15E8DCA69 * L_8 = __this->get_m_PanelSettings_9();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_8, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0067;
		}
	}
	{
		// AddRootVisualElementToTree();
		UIDocument_AddRootVisualElementToTree_m153A4C00FE4077CB2963C1306FEAAD2A6CECC67F(__this, /*hidden argument*/NULL);
	}

IL_0067:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.UIElements.UIDocument::AddChildAndInsertContentToVisualTree(UnityEngine.UIElements.UIDocument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIDocument_AddChildAndInsertContentToVisualTree_m182A5DA68E569AB179DE10DF077DE95459A8B0A4 (UIDocument_t008D811860584F44CEBB5AF575856E6EFCEBECC4 * __this, UIDocument_t008D811860584F44CEBB5AF575856E6EFCEBECC4 * ___child0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIDocumentList_t3D7C0E63339FDA7858C1D1AE3EB911CDB76C18C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_ChildrenContent == null)
		UIDocumentList_t3D7C0E63339FDA7858C1D1AE3EB911CDB76C18C5 * L_0 = __this->get_m_ChildrenContent_12();
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		// m_ChildrenContent = new UIDocumentList();
		UIDocumentList_t3D7C0E63339FDA7858C1D1AE3EB911CDB76C18C5 * L_1 = (UIDocumentList_t3D7C0E63339FDA7858C1D1AE3EB911CDB76C18C5 *)il2cpp_codegen_object_new(UIDocumentList_t3D7C0E63339FDA7858C1D1AE3EB911CDB76C18C5_il2cpp_TypeInfo_var);
		UIDocumentList__ctor_m5CCA152EB41F3C8EABCE1990FF875CDF8B130953(L_1, /*hidden argument*/NULL);
		__this->set_m_ChildrenContent_12(L_1);
		// }
		goto IL_0021;
	}

IL_0015:
	{
		// m_ChildrenContent.RemoveFromListAndFromVisualTree(child);
		UIDocumentList_t3D7C0E63339FDA7858C1D1AE3EB911CDB76C18C5 * L_2 = __this->get_m_ChildrenContent_12();
		UIDocument_t008D811860584F44CEBB5AF575856E6EFCEBECC4 * L_3 = ___child0;
		NullCheck(L_2);
		UIDocumentList_RemoveFromListAndFromVisualTree_m069DA671F2E30743A3303EA08F7CD1AB4F8AF201(L_2, L_3, /*hidden argument*/NULL);
	}

IL_0021:
	{
		// m_ChildrenContent.AddToListAndToVisualTree(child, m_RootVisualElement, m_FirstChildInsertIndex);
		UIDocumentList_t3D7C0E63339FDA7858C1D1AE3EB911CDB76C18C5 * L_4 = __this->get_m_ChildrenContent_12();
		UIDocument_t008D811860584F44CEBB5AF575856E6EFCEBECC4 * L_5 = ___child0;
		VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * L_6 = __this->get_m_RootVisualElement_15();
		int32_t L_7 = __this->get_m_FirstChildInsertIndex_16();
		NullCheck(L_4);
		UIDocumentList_AddToListAndToVisualTree_mD04F1390C6805F013D8473D6F88CBDAF4425F52A(L_4, L_5, L_6, L_7, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.UIElements.UIDocument::RemoveChild(UnityEngine.UIElements.UIDocument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIDocument_RemoveChild_m0EA7C097A72077F3CCEAAEE342BEBD745B789C95 (UIDocument_t008D811860584F44CEBB5AF575856E6EFCEBECC4 * __this, UIDocument_t008D811860584F44CEBB5AF575856E6EFCEBECC4 * ___child0, const RuntimeMethod* method)
{
	UIDocumentList_t3D7C0E63339FDA7858C1D1AE3EB911CDB76C18C5 * G_B2_0 = NULL;
	UIDocumentList_t3D7C0E63339FDA7858C1D1AE3EB911CDB76C18C5 * G_B1_0 = NULL;
	{
		// m_ChildrenContent?.RemoveFromListAndFromVisualTree(child);
		UIDocumentList_t3D7C0E63339FDA7858C1D1AE3EB911CDB76C18C5 * L_0 = __this->get_m_ChildrenContent_12();
		UIDocumentList_t3D7C0E63339FDA7858C1D1AE3EB911CDB76C18C5 * L_1 = L_0;
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
		UIDocument_t008D811860584F44CEBB5AF575856E6EFCEBECC4 * L_2 = ___child0;
		NullCheck(G_B2_0);
		UIDocumentList_RemoveFromListAndFromVisualTree_m069DA671F2E30743A3303EA08F7CD1AB4F8AF201(G_B2_0, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.UIElements.UIDocument::RecreateUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIDocument_RecreateUI_m5AC90ADD53B4FDD1C46922E03662CA971AD64A6F (UIDocument_t008D811860584F44CEBB5AF575856E6EFCEBECC4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m27B05A7331A3E31017AE91D26A2EB7DDE63D7345_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mBDF6727B42AB11D52CE47931EB4F4A17CE10238D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mE640EE863C1AD4E7A6879F7C8172A3D0FF659024_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_m82A20E629A172A44F1CC662F4F8EDDA523E04799_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mBF8AA31F6AC6772502C89F036F15FDF85F89AB02_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m301D9E8B4A430B934D508A5C7055E605EA5B3B50_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m9EEBC95380D8278BC7E7959E9B314087DB147FCA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tAB773DE00C0DE14686075955D7FB71ACD6194509_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TemplateContainer_tA9838A6F8D6003FCB93EFDF932BF2F1AD8D2C4DA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral83C7939D8DE0BBCA7545E4CE6E5443A6E69CA68C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8794A38DD1DBDE0D539E41A3D4F13B4F180F3B2B);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tA397CC4887AB161D4CE3FBF104F8010A9DFCFE07  V_0;
	memset((&V_0), 0, sizeof(V_0));
	UIDocument_t008D811860584F44CEBB5AF575856E6EFCEBECC4 * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// if (m_RootVisualElement != null)
		VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * L_0 = __this->get_m_RootVisualElement_15();
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		// m_RootVisualElement.RemoveFromHierarchy();
		VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * L_1 = __this->get_m_RootVisualElement_15();
		NullCheck(L_1);
		VisualElement_RemoveFromHierarchy_mA54683FC2B4066088CF1D34D7A9A6705A2A6F54A(L_1, /*hidden argument*/NULL);
		// m_RootVisualElement = null;
		__this->set_m_RootVisualElement_15((VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 *)NULL);
	}

IL_001a:
	{
		// if (sourceAsset != null)
		VisualTreeAsset_tF7210F261F2888C05E43C7B01200FBFEA655D5A9 * L_2 = __this->get_sourceAsset_14();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_2, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_004b;
		}
	}
	{
		// m_RootVisualElement = sourceAsset.Instantiate();
		VisualTreeAsset_tF7210F261F2888C05E43C7B01200FBFEA655D5A9 * L_4 = __this->get_sourceAsset_14();
		NullCheck(L_4);
		TemplateContainer_tA9838A6F8D6003FCB93EFDF932BF2F1AD8D2C4DA * L_5;
		L_5 = VisualTreeAsset_Instantiate_m62FE5EB940225C66196904B7F07D5C8517455162(L_4, /*hidden argument*/NULL);
		__this->set_m_RootVisualElement_15(L_5);
		// if (m_RootVisualElement == null)
		VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * L_6 = __this->get_m_RootVisualElement_15();
		if (L_6)
		{
			goto IL_004b;
		}
	}
	{
		// Debug.LogError("The UXML file set for the UIDocument could not be cloned.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(_stringLiteral8794A38DD1DBDE0D539E41A3D4F13B4F180F3B2B, /*hidden argument*/NULL);
	}

IL_004b:
	{
		// if (m_RootVisualElement == null)
		VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * L_7 = __this->get_m_RootVisualElement_15();
		if (L_7)
		{
			goto IL_007b;
		}
	}
	{
		// m_RootVisualElement = new TemplateContainer() { name = gameObject.name + k_VisualElementNameSuffix };
		TemplateContainer_tA9838A6F8D6003FCB93EFDF932BF2F1AD8D2C4DA * L_8 = (TemplateContainer_tA9838A6F8D6003FCB93EFDF932BF2F1AD8D2C4DA *)il2cpp_codegen_object_new(TemplateContainer_tA9838A6F8D6003FCB93EFDF932BF2F1AD8D2C4DA_il2cpp_TypeInfo_var);
		TemplateContainer__ctor_m1C9CB86EA7265D60A447D81017FD674A61AC31FE(L_8, /*hidden argument*/NULL);
		TemplateContainer_tA9838A6F8D6003FCB93EFDF932BF2F1AD8D2C4DA * L_9 = L_8;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10;
		L_10 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_10);
		String_t* L_11;
		L_11 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_10, /*hidden argument*/NULL);
		String_t* L_12;
		L_12 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_11, _stringLiteral83C7939D8DE0BBCA7545E4CE6E5443A6E69CA68C, /*hidden argument*/NULL);
		NullCheck(L_9);
		VisualElement_set_name_mDB6550DDF46AA91580362C2DF69C232F5D260BD4(L_9, L_12, /*hidden argument*/NULL);
		__this->set_m_RootVisualElement_15(L_9);
		// }
		goto IL_009b;
	}

IL_007b:
	{
		// m_RootVisualElement.name = gameObject.name + k_VisualElementNameSuffix;
		VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * L_13 = __this->get_m_RootVisualElement_15();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14;
		L_14 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_14);
		String_t* L_15;
		L_15 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_14, /*hidden argument*/NULL);
		String_t* L_16;
		L_16 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_15, _stringLiteral83C7939D8DE0BBCA7545E4CE6E5443A6E69CA68C, /*hidden argument*/NULL);
		NullCheck(L_13);
		VisualElement_set_name_mDB6550DDF46AA91580362C2DF69C232F5D260BD4(L_13, L_16, /*hidden argument*/NULL);
	}

IL_009b:
	{
		// m_RootVisualElement.pickingMode = PickingMode.Ignore;
		VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * L_17 = __this->get_m_RootVisualElement_15();
		NullCheck(L_17);
		VisualElement_set_pickingMode_m2897BC13E1EF4AF4D15E3CCC9A2404EA5D0E03B4_inline(L_17, 1, /*hidden argument*/NULL);
		// if (isActiveAndEnabled)
		bool L_18;
		L_18 = Behaviour_get_isActiveAndEnabled_mDD843C0271D492C1E08E0F8DEE8B6F1CFA951BFA(__this, /*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_00b5;
		}
	}
	{
		// AddRootVisualElementToTree();
		UIDocument_AddRootVisualElementToTree_m153A4C00FE4077CB2963C1306FEAAD2A6CECC67F(__this, /*hidden argument*/NULL);
	}

IL_00b5:
	{
		// m_FirstChildInsertIndex = m_RootVisualElement.childCount;
		VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * L_19 = __this->get_m_RootVisualElement_15();
		NullCheck(L_19);
		int32_t L_20;
		L_20 = VisualElement_get_childCount_mA4C3D31DB972D8092EB35BB879230CDC5854898E(L_19, /*hidden argument*/NULL);
		__this->set_m_FirstChildInsertIndex_16(L_20);
		// if (m_ChildrenContent != null)
		UIDocumentList_t3D7C0E63339FDA7858C1D1AE3EB911CDB76C18C5 * L_21 = __this->get_m_ChildrenContent_12();
		if (!L_21)
		{
			goto IL_0160;
		}
	}
	{
		// if (m_ChildrenContentCopy == null)
		List_1_tAB773DE00C0DE14686075955D7FB71ACD6194509 * L_22 = __this->get_m_ChildrenContentCopy_13();
		if (L_22)
		{
			goto IL_00f1;
		}
	}
	{
		// m_ChildrenContentCopy = new List<UIDocument>(m_ChildrenContent.m_AttachedUIDocuments);
		UIDocumentList_t3D7C0E63339FDA7858C1D1AE3EB911CDB76C18C5 * L_23 = __this->get_m_ChildrenContent_12();
		NullCheck(L_23);
		List_1_tAB773DE00C0DE14686075955D7FB71ACD6194509 * L_24 = L_23->get_m_AttachedUIDocuments_0();
		List_1_tAB773DE00C0DE14686075955D7FB71ACD6194509 * L_25 = (List_1_tAB773DE00C0DE14686075955D7FB71ACD6194509 *)il2cpp_codegen_object_new(List_1_tAB773DE00C0DE14686075955D7FB71ACD6194509_il2cpp_TypeInfo_var);
		List_1__ctor_m9EEBC95380D8278BC7E7959E9B314087DB147FCA(L_25, L_24, /*hidden argument*/List_1__ctor_m9EEBC95380D8278BC7E7959E9B314087DB147FCA_RuntimeMethod_var);
		__this->set_m_ChildrenContentCopy_13(L_25);
		// }
		goto IL_0107;
	}

IL_00f1:
	{
		// m_ChildrenContentCopy.AddRange(m_ChildrenContent.m_AttachedUIDocuments);
		List_1_tAB773DE00C0DE14686075955D7FB71ACD6194509 * L_26 = __this->get_m_ChildrenContentCopy_13();
		UIDocumentList_t3D7C0E63339FDA7858C1D1AE3EB911CDB76C18C5 * L_27 = __this->get_m_ChildrenContent_12();
		NullCheck(L_27);
		List_1_tAB773DE00C0DE14686075955D7FB71ACD6194509 * L_28 = L_27->get_m_AttachedUIDocuments_0();
		NullCheck(L_26);
		List_1_AddRange_m82A20E629A172A44F1CC662F4F8EDDA523E04799(L_26, L_28, /*hidden argument*/List_1_AddRange_m82A20E629A172A44F1CC662F4F8EDDA523E04799_RuntimeMethod_var);
	}

IL_0107:
	{
		// foreach (var child in m_ChildrenContentCopy)
		List_1_tAB773DE00C0DE14686075955D7FB71ACD6194509 * L_29 = __this->get_m_ChildrenContentCopy_13();
		NullCheck(L_29);
		Enumerator_tA397CC4887AB161D4CE3FBF104F8010A9DFCFE07  L_30;
		L_30 = List_1_GetEnumerator_m301D9E8B4A430B934D508A5C7055E605EA5B3B50(L_29, /*hidden argument*/List_1_GetEnumerator_m301D9E8B4A430B934D508A5C7055E605EA5B3B50_RuntimeMethod_var);
		V_0 = L_30;
	}

IL_0113:
	try
	{ // begin try (depth: 1)
		{
			goto IL_013c;
		}

IL_0115:
		{
			// foreach (var child in m_ChildrenContentCopy)
			UIDocument_t008D811860584F44CEBB5AF575856E6EFCEBECC4 * L_31;
			L_31 = Enumerator_get_Current_mE640EE863C1AD4E7A6879F7C8172A3D0FF659024_inline((Enumerator_tA397CC4887AB161D4CE3FBF104F8010A9DFCFE07 *)(&V_0), /*hidden argument*/Enumerator_get_Current_mE640EE863C1AD4E7A6879F7C8172A3D0FF659024_RuntimeMethod_var);
			V_1 = L_31;
			// if (child.isActiveAndEnabled)
			UIDocument_t008D811860584F44CEBB5AF575856E6EFCEBECC4 * L_32 = V_1;
			NullCheck(L_32);
			bool L_33;
			L_33 = Behaviour_get_isActiveAndEnabled_mDD843C0271D492C1E08E0F8DEE8B6F1CFA951BFA(L_32, /*hidden argument*/NULL);
			if (!L_33)
			{
				goto IL_013c;
			}
		}

IL_0125:
		{
			// if (child.m_RootVisualElement == null)
			UIDocument_t008D811860584F44CEBB5AF575856E6EFCEBECC4 * L_34 = V_1;
			NullCheck(L_34);
			VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * L_35 = L_34->get_m_RootVisualElement_15();
			if (L_35)
			{
				goto IL_0135;
			}
		}

IL_012d:
		{
			// child.RecreateUI();
			UIDocument_t008D811860584F44CEBB5AF575856E6EFCEBECC4 * L_36 = V_1;
			NullCheck(L_36);
			UIDocument_RecreateUI_m5AC90ADD53B4FDD1C46922E03662CA971AD64A6F(L_36, /*hidden argument*/NULL);
			// }
			goto IL_013c;
		}

IL_0135:
		{
			// AddChildAndInsertContentToVisualTree(child);
			UIDocument_t008D811860584F44CEBB5AF575856E6EFCEBECC4 * L_37 = V_1;
			UIDocument_AddChildAndInsertContentToVisualTree_m182A5DA68E569AB179DE10DF077DE95459A8B0A4(__this, L_37, /*hidden argument*/NULL);
		}

IL_013c:
		{
			// foreach (var child in m_ChildrenContentCopy)
			bool L_38;
			L_38 = Enumerator_MoveNext_mBDF6727B42AB11D52CE47931EB4F4A17CE10238D((Enumerator_tA397CC4887AB161D4CE3FBF104F8010A9DFCFE07 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_mBDF6727B42AB11D52CE47931EB4F4A17CE10238D_RuntimeMethod_var);
			if (L_38)
			{
				goto IL_0115;
			}
		}

IL_0145:
		{
			IL2CPP_LEAVE(0x155, FINALLY_0147);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0147;
	}

FINALLY_0147:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m27B05A7331A3E31017AE91D26A2EB7DDE63D7345((Enumerator_tA397CC4887AB161D4CE3FBF104F8010A9DFCFE07 *)(&V_0), /*hidden argument*/Enumerator_Dispose_m27B05A7331A3E31017AE91D26A2EB7DDE63D7345_RuntimeMethod_var);
		IL2CPP_END_FINALLY(327)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(327)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x155, IL_0155)
	}

IL_0155:
	{
		// m_ChildrenContentCopy.Clear();
		List_1_tAB773DE00C0DE14686075955D7FB71ACD6194509 * L_39 = __this->get_m_ChildrenContentCopy_13();
		NullCheck(L_39);
		List_1_Clear_mBF8AA31F6AC6772502C89F036F15FDF85F89AB02(L_39, /*hidden argument*/List_1_Clear_mBF8AA31F6AC6772502C89F036F15FDF85F89AB02_RuntimeMethod_var);
	}

IL_0160:
	{
		// SetupRootClassList();
		UIDocument_SetupRootClassList_m686A82F46A941121584DC616160990FF50D4CA74(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.UIElements.UIDocument::SetupRootClassList()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIDocument_SetupRootClassList_m686A82F46A941121584DC616160990FF50D4CA74 (UIDocument_t008D811860584F44CEBB5AF575856E6EFCEBECC4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFC92930F0D90EC784C2096A405253957D21033B9);
		s_Il2CppMethodInitialized = true;
	}
	VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * G_B2_0 = NULL;
	VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * G_B1_0 = NULL;
	{
		// m_RootVisualElement?.EnableInClassList(k_RootStyleClassName, parentUI == null);
		VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * L_0 = __this->get_m_RootVisualElement_15();
		VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * L_1 = L_0;
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
		UIDocument_t008D811860584F44CEBB5AF575856E6EFCEBECC4 * L_2;
		L_2 = UIDocument_get_parentUI_mB0FE5256563CDCEA105506D6784230AAE8142088_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_2, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		NullCheck(G_B2_0);
		VisualElement_EnableInClassList_mA8F2B57088A3B99A8D8A51140A4648A8CBDD1255(G_B2_0, _stringLiteralFC92930F0D90EC784C2096A405253957D21033B9, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.UIElements.UIDocument::AddRootVisualElementToTree()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIDocument_AddRootVisualElementToTree_m153A4C00FE4077CB2963C1306FEAAD2A6CECC67F (UIDocument_t008D811860584F44CEBB5AF575856E6EFCEBECC4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (parentUI != null)
		UIDocument_t008D811860584F44CEBB5AF575856E6EFCEBECC4 * L_0;
		L_0 = UIDocument_get_parentUI_mB0FE5256563CDCEA105506D6784230AAE8142088_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		// parentUI.AddChildAndInsertContentToVisualTree(this);
		UIDocument_t008D811860584F44CEBB5AF575856E6EFCEBECC4 * L_2;
		L_2 = UIDocument_get_parentUI_mB0FE5256563CDCEA105506D6784230AAE8142088_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		UIDocument_AddChildAndInsertContentToVisualTree_m182A5DA68E569AB179DE10DF077DE95459A8B0A4(L_2, __this, /*hidden argument*/NULL);
		// }
		return;
	}

IL_001b:
	{
		// else if (m_PanelSettings != null)
		PanelSettings_tA06886CA55D7F3105153641E0BA56FF15E8DCA69 * L_3 = __this->get_m_PanelSettings_9();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_3, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0035;
		}
	}
	{
		// m_PanelSettings.AttachAndInsertUIDocumentToVisualTree(this);
		PanelSettings_tA06886CA55D7F3105153641E0BA56FF15E8DCA69 * L_5 = __this->get_m_PanelSettings_9();
		NullCheck(L_5);
		PanelSettings_AttachAndInsertUIDocumentToVisualTree_mB6B7D505B1765940998796D2ACE64FAD83098693(L_5, __this, /*hidden argument*/NULL);
	}

IL_0035:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.UIElements.UIDocument::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIDocument_OnDisable_m07700CA7CA9615A25E830D3DB3595A43848D96EE (UIDocument_t008D811860584F44CEBB5AF575856E6EFCEBECC4 * __this, const RuntimeMethod* method)
{
	{
		// if (m_RootVisualElement != null)
		VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * L_0 = __this->get_m_RootVisualElement_15();
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		// m_RootVisualElement.RemoveFromHierarchy();
		VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * L_1 = __this->get_m_RootVisualElement_15();
		NullCheck(L_1);
		VisualElement_RemoveFromHierarchy_mA54683FC2B4066088CF1D34D7A9A6705A2A6F54A(L_1, /*hidden argument*/NULL);
		// m_RootVisualElement = null;
		__this->set_m_RootVisualElement_15((VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 *)NULL);
	}

IL_001a:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.UIElements.UIDocument::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIDocument_OnDestroy_m1D2EBB7FB56F9CF27E811D9D2F841DC5F15A3742 (UIDocument_t008D811860584F44CEBB5AF575856E6EFCEBECC4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (parentUI != null)
		UIDocument_t008D811860584F44CEBB5AF575856E6EFCEBECC4 * L_0;
		L_0 = UIDocument_get_parentUI_mB0FE5256563CDCEA105506D6784230AAE8142088_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		// parentUI.RemoveChild(this);
		UIDocument_t008D811860584F44CEBB5AF575856E6EFCEBECC4 * L_2;
		L_2 = UIDocument_get_parentUI_mB0FE5256563CDCEA105506D6784230AAE8142088_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		UIDocument_RemoveChild_m0EA7C097A72077F3CCEAAEE342BEBD745B789C95(L_2, __this, /*hidden argument*/NULL);
		// }
		return;
	}

IL_001b:
	{
		// else if (m_PanelSettings != null)
		PanelSettings_tA06886CA55D7F3105153641E0BA56FF15E8DCA69 * L_3 = __this->get_m_PanelSettings_9();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_3, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0035;
		}
	}
	{
		// m_PanelSettings.DetachUIDocument(this);
		PanelSettings_tA06886CA55D7F3105153641E0BA56FF15E8DCA69 * L_5 = __this->get_m_PanelSettings_9();
		NullCheck(L_5);
		PanelSettings_DetachUIDocument_m19A58FD8BCB6A59BD33F8591843A3D3D2DD3F0E6(L_5, __this, /*hidden argument*/NULL);
	}

IL_0035:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.UIElements.UIDocument::OnTransformChildrenChanged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIDocument_OnTransformChildrenChanged_m1B5112D7C372D35DAA856F72EE3C05A9EFBF4520 (UIDocument_t008D811860584F44CEBB5AF575856E6EFCEBECC4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m27B05A7331A3E31017AE91D26A2EB7DDE63D7345_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mBDF6727B42AB11D52CE47931EB4F4A17CE10238D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mE640EE863C1AD4E7A6879F7C8172A3D0FF659024_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_m82A20E629A172A44F1CC662F4F8EDDA523E04799_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mBF8AA31F6AC6772502C89F036F15FDF85F89AB02_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m301D9E8B4A430B934D508A5C7055E605EA5B3B50_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m9EEBC95380D8278BC7E7959E9B314087DB147FCA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tAB773DE00C0DE14686075955D7FB71ACD6194509_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tA397CC4887AB161D4CE3FBF104F8010A9DFCFE07  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// if (m_ChildrenContent != null)
		UIDocumentList_t3D7C0E63339FDA7858C1D1AE3EB911CDB76C18C5 * L_0 = __this->get_m_ChildrenContent_12();
		if (!L_0)
		{
			goto IL_007c;
		}
	}
	{
		// if (m_ChildrenContentCopy == null)
		List_1_tAB773DE00C0DE14686075955D7FB71ACD6194509 * L_1 = __this->get_m_ChildrenContentCopy_13();
		if (L_1)
		{
			goto IL_0028;
		}
	}
	{
		// m_ChildrenContentCopy = new List<UIDocument>(m_ChildrenContent.m_AttachedUIDocuments);
		UIDocumentList_t3D7C0E63339FDA7858C1D1AE3EB911CDB76C18C5 * L_2 = __this->get_m_ChildrenContent_12();
		NullCheck(L_2);
		List_1_tAB773DE00C0DE14686075955D7FB71ACD6194509 * L_3 = L_2->get_m_AttachedUIDocuments_0();
		List_1_tAB773DE00C0DE14686075955D7FB71ACD6194509 * L_4 = (List_1_tAB773DE00C0DE14686075955D7FB71ACD6194509 *)il2cpp_codegen_object_new(List_1_tAB773DE00C0DE14686075955D7FB71ACD6194509_il2cpp_TypeInfo_var);
		List_1__ctor_m9EEBC95380D8278BC7E7959E9B314087DB147FCA(L_4, L_3, /*hidden argument*/List_1__ctor_m9EEBC95380D8278BC7E7959E9B314087DB147FCA_RuntimeMethod_var);
		__this->set_m_ChildrenContentCopy_13(L_4);
		// }
		goto IL_003e;
	}

IL_0028:
	{
		// m_ChildrenContentCopy.AddRange(m_ChildrenContent.m_AttachedUIDocuments);
		List_1_tAB773DE00C0DE14686075955D7FB71ACD6194509 * L_5 = __this->get_m_ChildrenContentCopy_13();
		UIDocumentList_t3D7C0E63339FDA7858C1D1AE3EB911CDB76C18C5 * L_6 = __this->get_m_ChildrenContent_12();
		NullCheck(L_6);
		List_1_tAB773DE00C0DE14686075955D7FB71ACD6194509 * L_7 = L_6->get_m_AttachedUIDocuments_0();
		NullCheck(L_5);
		List_1_AddRange_m82A20E629A172A44F1CC662F4F8EDDA523E04799(L_5, L_7, /*hidden argument*/List_1_AddRange_m82A20E629A172A44F1CC662F4F8EDDA523E04799_RuntimeMethod_var);
	}

IL_003e:
	{
		// foreach (var child in m_ChildrenContentCopy)
		List_1_tAB773DE00C0DE14686075955D7FB71ACD6194509 * L_8 = __this->get_m_ChildrenContentCopy_13();
		NullCheck(L_8);
		Enumerator_tA397CC4887AB161D4CE3FBF104F8010A9DFCFE07  L_9;
		L_9 = List_1_GetEnumerator_m301D9E8B4A430B934D508A5C7055E605EA5B3B50(L_8, /*hidden argument*/List_1_GetEnumerator_m301D9E8B4A430B934D508A5C7055E605EA5B3B50_RuntimeMethod_var);
		V_0 = L_9;
	}

IL_004a:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0058;
		}

IL_004c:
		{
			// foreach (var child in m_ChildrenContentCopy)
			UIDocument_t008D811860584F44CEBB5AF575856E6EFCEBECC4 * L_10;
			L_10 = Enumerator_get_Current_mE640EE863C1AD4E7A6879F7C8172A3D0FF659024_inline((Enumerator_tA397CC4887AB161D4CE3FBF104F8010A9DFCFE07 *)(&V_0), /*hidden argument*/Enumerator_get_Current_mE640EE863C1AD4E7A6879F7C8172A3D0FF659024_RuntimeMethod_var);
			// child.ReactToHierarchyChanged();
			NullCheck(L_10);
			UIDocument_ReactToHierarchyChanged_m964206B6FB5D4C8BAEE941EF4F9BFE2B9DC233C5(L_10, /*hidden argument*/NULL);
		}

IL_0058:
		{
			// foreach (var child in m_ChildrenContentCopy)
			bool L_11;
			L_11 = Enumerator_MoveNext_mBDF6727B42AB11D52CE47931EB4F4A17CE10238D((Enumerator_tA397CC4887AB161D4CE3FBF104F8010A9DFCFE07 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_mBDF6727B42AB11D52CE47931EB4F4A17CE10238D_RuntimeMethod_var);
			if (L_11)
			{
				goto IL_004c;
			}
		}

IL_0061:
		{
			IL2CPP_LEAVE(0x71, FINALLY_0063);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0063;
	}

FINALLY_0063:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m27B05A7331A3E31017AE91D26A2EB7DDE63D7345((Enumerator_tA397CC4887AB161D4CE3FBF104F8010A9DFCFE07 *)(&V_0), /*hidden argument*/Enumerator_Dispose_m27B05A7331A3E31017AE91D26A2EB7DDE63D7345_RuntimeMethod_var);
		IL2CPP_END_FINALLY(99)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(99)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x71, IL_0071)
	}

IL_0071:
	{
		// m_ChildrenContentCopy.Clear();
		List_1_tAB773DE00C0DE14686075955D7FB71ACD6194509 * L_12 = __this->get_m_ChildrenContentCopy_13();
		NullCheck(L_12);
		List_1_Clear_mBF8AA31F6AC6772502C89F036F15FDF85F89AB02(L_12, /*hidden argument*/List_1_Clear_mBF8AA31F6AC6772502C89F036F15FDF85F89AB02_RuntimeMethod_var);
	}

IL_007c:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.UIElements.UIDocument::OnTransformParentChanged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIDocument_OnTransformParentChanged_m381A83FEDE2D3F7448FF0FA4A4A2A0FC88BFC305 (UIDocument_t008D811860584F44CEBB5AF575856E6EFCEBECC4 * __this, const RuntimeMethod* method)
{
	{
		// ReactToHierarchyChanged();
		UIDocument_ReactToHierarchyChanged_m964206B6FB5D4C8BAEE941EF4F9BFE2B9DC233C5(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.UIElements.UIDocument::ReactToHierarchyChanged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIDocument_ReactToHierarchyChanged_m964206B6FB5D4C8BAEE941EF4F9BFE2B9DC233C5 (UIDocument_t008D811860584F44CEBB5AF575856E6EFCEBECC4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * G_B4_0 = NULL;
	VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * G_B3_0 = NULL;
	{
		// SetupFromHierarchy();
		UIDocument_SetupFromHierarchy_m05E77369BA064D6293FCC65C7A15F5EDFB630E3D(__this, /*hidden argument*/NULL);
		// if (parentUI != null)
		UIDocument_t008D811860584F44CEBB5AF575856E6EFCEBECC4 * L_0;
		L_0 = UIDocument_get_parentUI_mB0FE5256563CDCEA105506D6784230AAE8142088_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		// panelSettings = parentUI.m_PanelSettings;
		UIDocument_t008D811860584F44CEBB5AF575856E6EFCEBECC4 * L_2;
		L_2 = UIDocument_get_parentUI_mB0FE5256563CDCEA105506D6784230AAE8142088_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		PanelSettings_tA06886CA55D7F3105153641E0BA56FF15E8DCA69 * L_3 = L_2->get_m_PanelSettings_9();
		UIDocument_set_panelSettings_mEEA4B932EDAB68EA92BA421CE6CEDB7E4AAEC4B3(__this, L_3, /*hidden argument*/NULL);
	}

IL_0025:
	{
		// m_RootVisualElement?.RemoveFromHierarchy();
		VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * L_4 = __this->get_m_RootVisualElement_15();
		VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * L_5 = L_4;
		G_B3_0 = L_5;
		if (L_5)
		{
			G_B4_0 = L_5;
			goto IL_0031;
		}
	}
	{
		goto IL_0036;
	}

IL_0031:
	{
		NullCheck(G_B4_0);
		VisualElement_RemoveFromHierarchy_mA54683FC2B4066088CF1D34D7A9A6705A2A6F54A(G_B4_0, /*hidden argument*/NULL);
	}

IL_0036:
	{
		// AddRootVisualElementToTree();
		UIDocument_AddRootVisualElementToTree_m153A4C00FE4077CB2963C1306FEAAD2A6CECC67F(__this, /*hidden argument*/NULL);
		// SetupRootClassList();
		UIDocument_SetupRootClassList_m686A82F46A941121584DC616160990FF50D4CA74(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.UIElements.UIDocument::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIDocument__cctor_m6CBD799D29C8454EA541ECF41330057CE8B50AF1 (const RuntimeMethod* method)
{
	{
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
// Conversion methods for marshalling of: UnityEngine.UIElements.UIDocumentHierarchicalIndex
IL2CPP_EXTERN_C void UIDocumentHierarchicalIndex_t0612634E1FBC3EC410363E02999C10F635037FC3_marshal_pinvoke(const UIDocumentHierarchicalIndex_t0612634E1FBC3EC410363E02999C10F635037FC3& unmarshaled, UIDocumentHierarchicalIndex_t0612634E1FBC3EC410363E02999C10F635037FC3_marshaled_pinvoke& marshaled)
{
	marshaled.___pathToParent_0 = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I4, unmarshaled.get_pathToParent_0());
}
IL2CPP_EXTERN_C void UIDocumentHierarchicalIndex_t0612634E1FBC3EC410363E02999C10F635037FC3_marshal_pinvoke_back(const UIDocumentHierarchicalIndex_t0612634E1FBC3EC410363E02999C10F635037FC3_marshaled_pinvoke& marshaled, UIDocumentHierarchicalIndex_t0612634E1FBC3EC410363E02999C10F635037FC3& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	unmarshaled.set_pathToParent_0((Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I4, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, marshaled.___pathToParent_0));
}
// Conversion method for clean up from marshalling of: UnityEngine.UIElements.UIDocumentHierarchicalIndex
IL2CPP_EXTERN_C void UIDocumentHierarchicalIndex_t0612634E1FBC3EC410363E02999C10F635037FC3_marshal_pinvoke_cleanup(UIDocumentHierarchicalIndex_t0612634E1FBC3EC410363E02999C10F635037FC3_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_com_destroy_safe_array(marshaled.___pathToParent_0);
	marshaled.___pathToParent_0 = NULL;
}
// Conversion methods for marshalling of: UnityEngine.UIElements.UIDocumentHierarchicalIndex
IL2CPP_EXTERN_C void UIDocumentHierarchicalIndex_t0612634E1FBC3EC410363E02999C10F635037FC3_marshal_com(const UIDocumentHierarchicalIndex_t0612634E1FBC3EC410363E02999C10F635037FC3& unmarshaled, UIDocumentHierarchicalIndex_t0612634E1FBC3EC410363E02999C10F635037FC3_marshaled_com& marshaled)
{
	marshaled.___pathToParent_0 = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I4, unmarshaled.get_pathToParent_0());
}
IL2CPP_EXTERN_C void UIDocumentHierarchicalIndex_t0612634E1FBC3EC410363E02999C10F635037FC3_marshal_com_back(const UIDocumentHierarchicalIndex_t0612634E1FBC3EC410363E02999C10F635037FC3_marshaled_com& marshaled, UIDocumentHierarchicalIndex_t0612634E1FBC3EC410363E02999C10F635037FC3& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	unmarshaled.set_pathToParent_0((Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I4, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, marshaled.___pathToParent_0));
}
// Conversion method for clean up from marshalling of: UnityEngine.UIElements.UIDocumentHierarchicalIndex
IL2CPP_EXTERN_C void UIDocumentHierarchicalIndex_t0612634E1FBC3EC410363E02999C10F635037FC3_marshal_com_cleanup(UIDocumentHierarchicalIndex_t0612634E1FBC3EC410363E02999C10F635037FC3_marshaled_com& marshaled)
{
	il2cpp_codegen_com_destroy_safe_array(marshaled.___pathToParent_0);
	marshaled.___pathToParent_0 = NULL;
}
// System.Int32 UnityEngine.UIElements.UIDocumentHierarchicalIndex::CompareTo(UnityEngine.UIElements.UIDocumentHierarchicalIndex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UIDocumentHierarchicalIndex_CompareTo_m07BAF052F339427FA5130D2DD34E22002E83802A (UIDocumentHierarchicalIndex_t0612634E1FBC3EC410363E02999C10F635037FC3 * __this, UIDocumentHierarchicalIndex_t0612634E1FBC3EC410363E02999C10F635037FC3  ___other0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// if (pathToParent == null)
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = __this->get_pathToParent_0();
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		// if (other.pathToParent == null)
		UIDocumentHierarchicalIndex_t0612634E1FBC3EC410363E02999C10F635037FC3  L_1 = ___other0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_2 = L_1.get_pathToParent_0();
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		// return 0;
		return 0;
	}

IL_0012:
	{
		// return 1;
		return 1;
	}

IL_0014:
	{
		// if (other.pathToParent == null) // we know pathToParent != null
		UIDocumentHierarchicalIndex_t0612634E1FBC3EC410363E02999C10F635037FC3  L_3 = ___other0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_4 = L_3.get_pathToParent_0();
		if (L_4)
		{
			goto IL_001e;
		}
	}
	{
		// return -1;
		return (-1);
	}

IL_001e:
	{
		// int myLength = pathToParent.Length;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_5 = __this->get_pathToParent_0();
		NullCheck(L_5);
		V_0 = ((int32_t)((int32_t)(((RuntimeArray*)L_5)->max_length)));
		// int otherLength = other.pathToParent.Length;
		UIDocumentHierarchicalIndex_t0612634E1FBC3EC410363E02999C10F635037FC3  L_6 = ___other0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_7 = L_6.get_pathToParent_0();
		NullCheck(L_7);
		V_1 = ((int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length)));
		// for (int i = 0; i < myLength && i < otherLength; ++i)
		V_2 = 0;
		goto IL_0060;
	}

IL_0034:
	{
		// if (pathToParent[i] < other.pathToParent[i])
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_8 = __this->get_pathToParent_0();
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		int32_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		UIDocumentHierarchicalIndex_t0612634E1FBC3EC410363E02999C10F635037FC3  L_12 = ___other0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_13 = L_12.get_pathToParent_0();
		int32_t L_14 = V_2;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		int32_t L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		if ((((int32_t)L_11) >= ((int32_t)L_16)))
		{
			goto IL_0048;
		}
	}
	{
		// return -1;
		return (-1);
	}

IL_0048:
	{
		// if (pathToParent[i] > other.pathToParent[i])
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_17 = __this->get_pathToParent_0();
		int32_t L_18 = V_2;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		int32_t L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		UIDocumentHierarchicalIndex_t0612634E1FBC3EC410363E02999C10F635037FC3  L_21 = ___other0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_22 = L_21.get_pathToParent_0();
		int32_t L_23 = V_2;
		NullCheck(L_22);
		int32_t L_24 = L_23;
		int32_t L_25 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		if ((((int32_t)L_20) <= ((int32_t)L_25)))
		{
			goto IL_005c;
		}
	}
	{
		// return 1;
		return 1;
	}

IL_005c:
	{
		// for (int i = 0; i < myLength && i < otherLength; ++i)
		int32_t L_26 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)1));
	}

IL_0060:
	{
		// for (int i = 0; i < myLength && i < otherLength; ++i)
		int32_t L_27 = V_2;
		int32_t L_28 = V_0;
		if ((((int32_t)L_27) >= ((int32_t)L_28)))
		{
			goto IL_0068;
		}
	}
	{
		int32_t L_29 = V_2;
		int32_t L_30 = V_1;
		if ((((int32_t)L_29) < ((int32_t)L_30)))
		{
			goto IL_0034;
		}
	}

IL_0068:
	{
		// if (myLength > otherLength)
		int32_t L_31 = V_0;
		int32_t L_32 = V_1;
		if ((((int32_t)L_31) <= ((int32_t)L_32)))
		{
			goto IL_006e;
		}
	}
	{
		// return 1;
		return 1;
	}

IL_006e:
	{
		// else if (myLength < otherLength)
		int32_t L_33 = V_0;
		int32_t L_34 = V_1;
		if ((((int32_t)L_33) >= ((int32_t)L_34)))
		{
			goto IL_0074;
		}
	}
	{
		// return -1;
		return (-1);
	}

IL_0074:
	{
		// return 0;
		return 0;
	}
}
IL2CPP_EXTERN_C  int32_t UIDocumentHierarchicalIndex_CompareTo_m07BAF052F339427FA5130D2DD34E22002E83802A_AdjustorThunk (RuntimeObject * __this, UIDocumentHierarchicalIndex_t0612634E1FBC3EC410363E02999C10F635037FC3  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	UIDocumentHierarchicalIndex_t0612634E1FBC3EC410363E02999C10F635037FC3 * _thisAdjusted = reinterpret_cast<UIDocumentHierarchicalIndex_t0612634E1FBC3EC410363E02999C10F635037FC3 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = UIDocumentHierarchicalIndex_CompareTo_m07BAF052F339427FA5130D2DD34E22002E83802A(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.String UnityEngine.UIElements.UIDocumentHierarchicalIndex::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UIDocumentHierarchicalIndex_ToString_mA96C3A4D6222B20B4DF140632FD527D5571CAC1F (UIDocumentHierarchicalIndex_t0612634E1FBC3EC410363E02999C10F635037FC3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD5FCBAD6441ED902E09232588D1B0F6D723A233);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// StringBuilder toString = new StringBuilder("pathToParent = [");
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m9305A36F9CF53EDD80D132428999934C68904C77(L_0, _stringLiteralDD5FCBAD6441ED902E09232588D1B0F6D723A233, /*hidden argument*/NULL);
		V_0 = L_0;
		// if (pathToParent != null)
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_1 = __this->get_pathToParent_0();
		if (!L_1)
		{
			goto IL_0049;
		}
	}
	{
		// int count = pathToParent.Length;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_2 = __this->get_pathToParent_0();
		NullCheck(L_2);
		V_1 = ((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length)));
		// for (int i = 0; i < count; ++i)
		V_2 = 0;
		goto IL_0045;
	}

IL_0020:
	{
		// toString.Append(pathToParent[i]);
		StringBuilder_t * L_3 = V_0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_4 = __this->get_pathToParent_0();
		int32_t L_5 = V_2;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		int32_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_3);
		StringBuilder_t * L_8;
		L_8 = StringBuilder_Append_m796285D173EEA5261E85B95FC79DD4F996CC93DD(L_3, L_7, /*hidden argument*/NULL);
		// if (i < count - 1)
		int32_t L_9 = V_2;
		int32_t L_10 = V_1;
		if ((((int32_t)L_9) >= ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_10, (int32_t)1)))))
		{
			goto IL_0041;
		}
	}
	{
		// toString.Append(", ");
		StringBuilder_t * L_11 = V_0;
		NullCheck(L_11);
		StringBuilder_t * L_12;
		L_12 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_11, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, /*hidden argument*/NULL);
	}

IL_0041:
	{
		// for (int i = 0; i < count; ++i)
		int32_t L_13 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
	}

IL_0045:
	{
		// for (int i = 0; i < count; ++i)
		int32_t L_14 = V_2;
		int32_t L_15 = V_1;
		if ((((int32_t)L_14) < ((int32_t)L_15)))
		{
			goto IL_0020;
		}
	}

IL_0049:
	{
		// toString.Append("]");
		StringBuilder_t * L_16 = V_0;
		NullCheck(L_16);
		StringBuilder_t * L_17;
		L_17 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_16, _stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC, /*hidden argument*/NULL);
		// return toString.ToString();
		StringBuilder_t * L_18 = V_0;
		NullCheck(L_18);
		String_t* L_19;
		L_19 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_18);
		return L_19;
	}
}
IL2CPP_EXTERN_C  String_t* UIDocumentHierarchicalIndex_ToString_mA96C3A4D6222B20B4DF140632FD527D5571CAC1F_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	UIDocumentHierarchicalIndex_t0612634E1FBC3EC410363E02999C10F635037FC3 * _thisAdjusted = reinterpret_cast<UIDocumentHierarchicalIndex_t0612634E1FBC3EC410363E02999C10F635037FC3 *>(__this + _offset);
	String_t* _returnValue;
	_returnValue = UIDocumentHierarchicalIndex_ToString_mA96C3A4D6222B20B4DF140632FD527D5571CAC1F(_thisAdjusted, method);
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
// System.Int32 UnityEngine.UIElements.UIDocumentHierarchicalIndexComparer::Compare(UnityEngine.UIElements.UIDocumentHierarchicalIndex,UnityEngine.UIElements.UIDocumentHierarchicalIndex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UIDocumentHierarchicalIndexComparer_Compare_m0ABA408991E59A35000D4AB846339EC22B0AD6B4 (UIDocumentHierarchicalIndexComparer_tE2E3032A6EA8A682C7EED7A3D2A85D3627F25928 * __this, UIDocumentHierarchicalIndex_t0612634E1FBC3EC410363E02999C10F635037FC3  ___x0, UIDocumentHierarchicalIndex_t0612634E1FBC3EC410363E02999C10F635037FC3  ___y1, const RuntimeMethod* method)
{
	{
		// return x.CompareTo(y);
		UIDocumentHierarchicalIndex_t0612634E1FBC3EC410363E02999C10F635037FC3  L_0 = ___y1;
		int32_t L_1;
		L_1 = UIDocumentHierarchicalIndex_CompareTo_m07BAF052F339427FA5130D2DD34E22002E83802A((UIDocumentHierarchicalIndex_t0612634E1FBC3EC410363E02999C10F635037FC3 *)(&___x0), L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void UnityEngine.UIElements.UIDocumentHierarchicalIndexComparer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIDocumentHierarchicalIndexComparer__ctor_mE8E06F78AD970F65E7FA2078E10C9DB376E08BB0 (UIDocumentHierarchicalIndexComparer_tE2E3032A6EA8A682C7EED7A3D2A85D3627F25928 * __this, const RuntimeMethod* method)
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
// System.Int32 UnityEngine.UIElements.UIDocumentHierarchyUtil::FindHierarchicalSortedIndex(System.Collections.Generic.SortedDictionary`2<UnityEngine.UIElements.UIDocumentHierarchicalIndex,UnityEngine.UIElements.UIDocument>,UnityEngine.UIElements.UIDocument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UIDocumentHierarchyUtil_FindHierarchicalSortedIndex_mD3B05157331FC74A5F12E73E6E3C9A4CB650103D (SortedDictionary_2_tD6FDE7062F18D6B2948C91C6E3E4B6AB7018E0BB * ___children0, UIDocument_t008D811860584F44CEBB5AF575856E6EFCEBECC4 * ___child1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m77A2C5259BC7AB16D78F6A2C6016EF4A282DF2CD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mAA7E17AE272D3F9A8750CCD6A77A1BC9BBB0AE3C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m99A2AC07EE601CFEC0FD97B320A0D7C881C8756B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SortedDictionary_2_get_Values_m279548414E7A8F50A7AD40FBB6C1DE584B70038F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueCollection_GetEnumerator_mDFCF542E546DC04C52667586BFE53E5FBE64D909_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Enumerator_tDDF94DCA5EBC2A0CDBBB3D0A51D59499A00CB568  V_1;
	memset((&V_1), 0, sizeof(V_1));
	UIDocument_t008D811860584F44CEBB5AF575856E6EFCEBECC4 * V_2 = NULL;
	int32_t V_3 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		// int index = 0;
		V_0 = 0;
		// foreach (var sibling in children.Values)
		SortedDictionary_2_tD6FDE7062F18D6B2948C91C6E3E4B6AB7018E0BB * L_0 = ___children0;
		NullCheck(L_0);
		ValueCollection_t4350A1F9A865F1082C3579EA46CDE57E4827D2D0 * L_1;
		L_1 = SortedDictionary_2_get_Values_m279548414E7A8F50A7AD40FBB6C1DE584B70038F(L_0, /*hidden argument*/SortedDictionary_2_get_Values_m279548414E7A8F50A7AD40FBB6C1DE584B70038F_RuntimeMethod_var);
		NullCheck(L_1);
		Enumerator_tDDF94DCA5EBC2A0CDBBB3D0A51D59499A00CB568  L_2;
		L_2 = ValueCollection_GetEnumerator_mDFCF542E546DC04C52667586BFE53E5FBE64D909(L_1, /*hidden argument*/ValueCollection_GetEnumerator_mDFCF542E546DC04C52667586BFE53E5FBE64D909_RuntimeMethod_var);
		V_1 = L_2;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			goto IL_003e;
		}

IL_0010:
		{
			// foreach (var sibling in children.Values)
			UIDocument_t008D811860584F44CEBB5AF575856E6EFCEBECC4 * L_3;
			L_3 = Enumerator_get_Current_m99A2AC07EE601CFEC0FD97B320A0D7C881C8756B((Enumerator_tDDF94DCA5EBC2A0CDBBB3D0A51D59499A00CB568 *)(&V_1), /*hidden argument*/Enumerator_get_Current_m99A2AC07EE601CFEC0FD97B320A0D7C881C8756B_RuntimeMethod_var);
			V_2 = L_3;
			// if (sibling == child)
			UIDocument_t008D811860584F44CEBB5AF575856E6EFCEBECC4 * L_4 = V_2;
			UIDocument_t008D811860584F44CEBB5AF575856E6EFCEBECC4 * L_5 = ___child1;
			IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
			bool L_6;
			L_6 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_4, L_5, /*hidden argument*/NULL);
			if (!L_6)
			{
				goto IL_0025;
			}
		}

IL_0021:
		{
			// return index;
			int32_t L_7 = V_0;
			V_3 = L_7;
			IL2CPP_LEAVE(0x59, FINALLY_0049);
		}

IL_0025:
		{
			// if (sibling.rootVisualElement != null && sibling.rootVisualElement.parent != null)
			UIDocument_t008D811860584F44CEBB5AF575856E6EFCEBECC4 * L_8 = V_2;
			NullCheck(L_8);
			VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * L_9;
			L_9 = UIDocument_get_rootVisualElement_m0BE2D8FAA3533A8DBEB2FDADD2F98FDE257F7D76_inline(L_8, /*hidden argument*/NULL);
			if (!L_9)
			{
				goto IL_003e;
			}
		}

IL_002d:
		{
			UIDocument_t008D811860584F44CEBB5AF575856E6EFCEBECC4 * L_10 = V_2;
			NullCheck(L_10);
			VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * L_11;
			L_11 = UIDocument_get_rootVisualElement_m0BE2D8FAA3533A8DBEB2FDADD2F98FDE257F7D76_inline(L_10, /*hidden argument*/NULL);
			NullCheck(L_11);
			VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * L_12;
			L_12 = VisualElement_get_parent_m7FFF8FAC199A08AD6823836D7A784A45CC36CE17_inline(L_11, /*hidden argument*/NULL);
			if (!L_12)
			{
				goto IL_003e;
			}
		}

IL_003a:
		{
			// index++;
			int32_t L_13 = V_0;
			V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
		}

IL_003e:
		{
			// foreach (var sibling in children.Values)
			bool L_14;
			L_14 = Enumerator_MoveNext_mAA7E17AE272D3F9A8750CCD6A77A1BC9BBB0AE3C((Enumerator_tDDF94DCA5EBC2A0CDBBB3D0A51D59499A00CB568 *)(&V_1), /*hidden argument*/Enumerator_MoveNext_mAA7E17AE272D3F9A8750CCD6A77A1BC9BBB0AE3C_RuntimeMethod_var);
			if (L_14)
			{
				goto IL_0010;
			}
		}

IL_0047:
		{
			IL2CPP_LEAVE(0x57, FINALLY_0049);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0049;
	}

FINALLY_0049:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m77A2C5259BC7AB16D78F6A2C6016EF4A282DF2CD((Enumerator_tDDF94DCA5EBC2A0CDBBB3D0A51D59499A00CB568 *)(&V_1), /*hidden argument*/Enumerator_Dispose_m77A2C5259BC7AB16D78F6A2C6016EF4A282DF2CD_RuntimeMethod_var);
		IL2CPP_END_FINALLY(73)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(73)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x59, IL_0059)
		IL2CPP_JUMP_TBL(0x57, IL_0057)
	}

IL_0057:
	{
		// return index;
		int32_t L_15 = V_0;
		return L_15;
	}

IL_0059:
	{
		// }
		int32_t L_16 = V_3;
		return L_16;
	}
}
// System.Void UnityEngine.UIElements.UIDocumentHierarchyUtil::SetHierarchicalIndex(UnityEngine.Transform,UnityEngine.Transform,UnityEngine.Transform,UnityEngine.UIElements.UIDocumentHierarchicalIndex&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIDocumentHierarchyUtil_SetHierarchicalIndex_mC14D7A8D98CC81A8174CEA4AB31D2138557AB51A (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___childTransform0, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___directParentTransform1, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___mainParentTransform2, UIDocumentHierarchicalIndex_t0612634E1FBC3EC410363E02999C10F635037FC3 * ___hierarchicalIndex3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Reverse_m37775958EAD7F2378791BFB588459532DA7459ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_mDEFFC768D9AAD376D27FC0FC1F7B57EE2E93479F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * V_0 = NULL;
	{
		// if (mainParentTransform == null || childTransform == null)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = ___mainParentTransform2;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0012;
		}
	}
	{
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2 = ___childTransform0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_2, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_001a;
		}
	}

IL_0012:
	{
		// hierarchicalIndex.pathToParent = null;
		UIDocumentHierarchicalIndex_t0612634E1FBC3EC410363E02999C10F635037FC3 * L_4 = ___hierarchicalIndex3;
		L_4->set_pathToParent_0((Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)NULL);
		// return;
		return;
	}

IL_001a:
	{
		// if (directParentTransform == mainParentTransform)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5 = ___directParentTransform1;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6 = ___mainParentTransform2;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_5, L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0039;
		}
	}
	{
		// hierarchicalIndex.pathToParent = new int[] { childTransform.GetSiblingIndex() };
		UIDocumentHierarchicalIndex_t0612634E1FBC3EC410363E02999C10F635037FC3 * L_8 = ___hierarchicalIndex3;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_9 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)1);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_10 = L_9;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11 = ___childTransform0;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = Transform_GetSiblingIndex_mEF9DF6406920F8EBCFBC87C6D0630FE3E9E3C1EE(L_11, /*hidden argument*/NULL);
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)L_12);
		L_8->set_pathToParent_0(L_10);
		// }
		return;
	}

IL_0039:
	{
		// List<int> pathToParent = new List<int>();
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_13 = (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *)il2cpp_codegen_object_new(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_il2cpp_TypeInfo_var);
		List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD(L_13, /*hidden argument*/List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD_RuntimeMethod_var);
		V_0 = L_13;
		goto IL_0055;
	}

IL_0041:
	{
		// pathToParent.Add(childTransform.GetSiblingIndex());
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_14 = V_0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_15 = ___childTransform0;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = Transform_GetSiblingIndex_mEF9DF6406920F8EBCFBC87C6D0630FE3E9E3C1EE(L_15, /*hidden argument*/NULL);
		NullCheck(L_14);
		List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F(L_14, L_16, /*hidden argument*/List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
		// childTransform = childTransform.parent;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_17 = ___childTransform0;
		NullCheck(L_17);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_18;
		L_18 = Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9(L_17, /*hidden argument*/NULL);
		___childTransform0 = L_18;
	}

IL_0055:
	{
		// while (mainParentTransform != childTransform && childTransform != null)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_19 = ___mainParentTransform2;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_20 = ___childTransform0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_21;
		L_21 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_19, L_20, /*hidden argument*/NULL);
		if (!L_21)
		{
			goto IL_0067;
		}
	}
	{
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_22 = ___childTransform0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_23;
		L_23 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_22, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (L_23)
		{
			goto IL_0041;
		}
	}

IL_0067:
	{
		// pathToParent.Reverse();
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_24 = V_0;
		NullCheck(L_24);
		List_1_Reverse_m37775958EAD7F2378791BFB588459532DA7459ED(L_24, /*hidden argument*/List_1_Reverse_m37775958EAD7F2378791BFB588459532DA7459ED_RuntimeMethod_var);
		// hierarchicalIndex.pathToParent = pathToParent.ToArray();
		UIDocumentHierarchicalIndex_t0612634E1FBC3EC410363E02999C10F635037FC3 * L_25 = ___hierarchicalIndex3;
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_26 = V_0;
		NullCheck(L_26);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_27;
		L_27 = List_1_ToArray_mDEFFC768D9AAD376D27FC0FC1F7B57EE2E93479F(L_26, /*hidden argument*/List_1_ToArray_mDEFFC768D9AAD376D27FC0FC1F7B57EE2E93479F_RuntimeMethod_var);
		L_25->set_pathToParent_0(L_27);
		// }
		return;
	}
}
// System.Void UnityEngine.UIElements.UIDocumentHierarchyUtil::SetGlobalIndex(UnityEngine.Transform,UnityEngine.Transform,UnityEngine.UIElements.UIDocumentHierarchicalIndex&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIDocumentHierarchyUtil_SetGlobalIndex_mED0560590FFA3A6852431C1085A4974E7122FE2B (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___objectTransform0, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___directParentTransform1, UIDocumentHierarchicalIndex_t0612634E1FBC3EC410363E02999C10F635037FC3 * ___globalIndex2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Reverse_m37775958EAD7F2378791BFB588459532DA7459ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_mDEFFC768D9AAD376D27FC0FC1F7B57EE2E93479F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * V_0 = NULL;
	{
		// if (objectTransform == null)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = ___objectTransform0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		// globalIndex.pathToParent = null;
		UIDocumentHierarchicalIndex_t0612634E1FBC3EC410363E02999C10F635037FC3 * L_2 = ___globalIndex2;
		L_2->set_pathToParent_0((Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)NULL);
		// return;
		return;
	}

IL_0011:
	{
		// if (directParentTransform == null)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3 = ___directParentTransform1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_3, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0030;
		}
	}
	{
		// globalIndex.pathToParent = new int[] { objectTransform.GetSiblingIndex() };
		UIDocumentHierarchicalIndex_t0612634E1FBC3EC410363E02999C10F635037FC3 * L_5 = ___globalIndex2;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_6 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)1);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_7 = L_6;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8 = ___objectTransform0;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Transform_GetSiblingIndex_mEF9DF6406920F8EBCFBC87C6D0630FE3E9E3C1EE(L_8, /*hidden argument*/NULL);
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)L_9);
		L_5->set_pathToParent_0(L_7);
		// }
		return;
	}

IL_0030:
	{
		// List<int> pathToParent = new List<int>() { objectTransform.GetSiblingIndex() };
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_10 = (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *)il2cpp_codegen_object_new(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_il2cpp_TypeInfo_var);
		List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD(L_10, /*hidden argument*/List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD_RuntimeMethod_var);
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_11 = L_10;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_12 = ___objectTransform0;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = Transform_GetSiblingIndex_mEF9DF6406920F8EBCFBC87C6D0630FE3E9E3C1EE(L_12, /*hidden argument*/NULL);
		NullCheck(L_11);
		List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F(L_11, L_13, /*hidden argument*/List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
		V_0 = L_11;
		goto IL_0058;
	}

IL_0044:
	{
		// pathToParent.Add(directParentTransform.GetSiblingIndex());
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_14 = V_0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_15 = ___directParentTransform1;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = Transform_GetSiblingIndex_mEF9DF6406920F8EBCFBC87C6D0630FE3E9E3C1EE(L_15, /*hidden argument*/NULL);
		NullCheck(L_14);
		List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F(L_14, L_16, /*hidden argument*/List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
		// directParentTransform = directParentTransform.parent;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_17 = ___directParentTransform1;
		NullCheck(L_17);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_18;
		L_18 = Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9(L_17, /*hidden argument*/NULL);
		___directParentTransform1 = L_18;
	}

IL_0058:
	{
		// while (directParentTransform != null)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_19 = ___directParentTransform1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_20;
		L_20 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_19, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (L_20)
		{
			goto IL_0044;
		}
	}
	{
		// pathToParent.Reverse();
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_21 = V_0;
		NullCheck(L_21);
		List_1_Reverse_m37775958EAD7F2378791BFB588459532DA7459ED(L_21, /*hidden argument*/List_1_Reverse_m37775958EAD7F2378791BFB588459532DA7459ED_RuntimeMethod_var);
		// globalIndex.pathToParent = pathToParent.ToArray();
		UIDocumentHierarchicalIndex_t0612634E1FBC3EC410363E02999C10F635037FC3 * L_22 = ___globalIndex2;
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_23 = V_0;
		NullCheck(L_23);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_24;
		L_24 = List_1_ToArray_mDEFFC768D9AAD376D27FC0FC1F7B57EE2E93479F(L_23, /*hidden argument*/List_1_ToArray_mDEFFC768D9AAD376D27FC0FC1F7B57EE2E93479F_RuntimeMethod_var);
		L_22->set_pathToParent_0(L_24);
		// }
		return;
	}
}
// System.Void UnityEngine.UIElements.UIDocumentHierarchyUtil::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIDocumentHierarchyUtil__cctor_m4F48BBBE9E64FD0D8528546994D407852A8E4F56 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIDocumentHierarchicalIndexComparer_tE2E3032A6EA8A682C7EED7A3D2A85D3627F25928_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIDocumentHierarchyUtil_t62F44B7617F98EAA6346894F1E463F3C347F95AB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal static UIDocumentHierarchicalIndexComparer indexComparer = new UIDocumentHierarchicalIndexComparer();
		UIDocumentHierarchicalIndexComparer_tE2E3032A6EA8A682C7EED7A3D2A85D3627F25928 * L_0 = (UIDocumentHierarchicalIndexComparer_tE2E3032A6EA8A682C7EED7A3D2A85D3627F25928 *)il2cpp_codegen_object_new(UIDocumentHierarchicalIndexComparer_tE2E3032A6EA8A682C7EED7A3D2A85D3627F25928_il2cpp_TypeInfo_var);
		UIDocumentHierarchicalIndexComparer__ctor_mE8E06F78AD970F65E7FA2078E10C9DB376E08BB0(L_0, /*hidden argument*/NULL);
		((UIDocumentHierarchyUtil_t62F44B7617F98EAA6346894F1E463F3C347F95AB_StaticFields*)il2cpp_codegen_static_fields_for(UIDocumentHierarchyUtil_t62F44B7617F98EAA6346894F1E463F3C347F95AB_il2cpp_TypeInfo_var))->set_indexComparer_0(L_0);
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
// System.Void UnityEngine.UIElements.UIDocumentList::RemoveFromListAndFromVisualTree(UnityEngine.UIElements.UIDocument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIDocumentList_RemoveFromListAndFromVisualTree_m069DA671F2E30743A3303EA08F7CD1AB4F8AF201 (UIDocumentList_t3D7C0E63339FDA7858C1D1AE3EB911CDB76C18C5 * __this, UIDocument_t008D811860584F44CEBB5AF575856E6EFCEBECC4 * ___uiDocument0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_mE74BBD3C7F21D2E5560E4EA3BD33AD4DF89BFBDB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * G_B2_0 = NULL;
	VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * G_B1_0 = NULL;
	{
		// m_AttachedUIDocuments.Remove(uiDocument);
		List_1_tAB773DE00C0DE14686075955D7FB71ACD6194509 * L_0 = __this->get_m_AttachedUIDocuments_0();
		UIDocument_t008D811860584F44CEBB5AF575856E6EFCEBECC4 * L_1 = ___uiDocument0;
		NullCheck(L_0);
		bool L_2;
		L_2 = List_1_Remove_mE74BBD3C7F21D2E5560E4EA3BD33AD4DF89BFBDB(L_0, L_1, /*hidden argument*/List_1_Remove_mE74BBD3C7F21D2E5560E4EA3BD33AD4DF89BFBDB_RuntimeMethod_var);
		// uiDocument.rootVisualElement?.RemoveFromHierarchy();
		UIDocument_t008D811860584F44CEBB5AF575856E6EFCEBECC4 * L_3 = ___uiDocument0;
		NullCheck(L_3);
		VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * L_4;
		L_4 = UIDocument_get_rootVisualElement_m0BE2D8FAA3533A8DBEB2FDADD2F98FDE257F7D76_inline(L_3, /*hidden argument*/NULL);
		VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * L_5 = L_4;
		G_B1_0 = L_5;
		if (L_5)
		{
			G_B2_0 = L_5;
			goto IL_0018;
		}
	}
	{
		return;
	}

IL_0018:
	{
		NullCheck(G_B2_0);
		VisualElement_RemoveFromHierarchy_mA54683FC2B4066088CF1D34D7A9A6705A2A6F54A(G_B2_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.UIElements.UIDocumentList::AddToListAndToVisualTree(UnityEngine.UIElements.UIDocument,UnityEngine.UIElements.VisualElement,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIDocumentList_AddToListAndToVisualTree_mD04F1390C6805F013D8473D6F88CBDAF4425F52A (UIDocumentList_t3D7C0E63339FDA7858C1D1AE3EB911CDB76C18C5 * __this, UIDocument_t008D811860584F44CEBB5AF575856E6EFCEBECC4 * ___uiDocument0, VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * ___visualTree1, int32_t ___firstInsertIndex2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m27B05A7331A3E31017AE91D26A2EB7DDE63D7345_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mBDF6727B42AB11D52CE47931EB4F4A17CE10238D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mE640EE863C1AD4E7A6879F7C8172A3D0FF659024_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m969E90236937A5E99BDF4CF9E995CAA0193C38E9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m301D9E8B4A430B934D508A5C7055E605EA5B3B50_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Insert_m742EF6D9F0BC42614F983C7E1F6690E5698A17A3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m46E859E3CE7BCCF1CABF62E178A7A6AD5BD1164B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m9E9C3E57AC2ECB01351EE8C0FB88DA8919CF98F7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Enumerator_tA397CC4887AB161D4CE3FBF104F8010A9DFCFE07  V_2;
	memset((&V_2), 0, sizeof(V_2));
	UIDocument_t008D811860584F44CEBB5AF575856E6EFCEBECC4 * V_3 = NULL;
	VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * V_4 = NULL;
	int32_t V_5 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		// int index = 0;
		V_0 = 0;
		// foreach (var sibling in m_AttachedUIDocuments)
		List_1_tAB773DE00C0DE14686075955D7FB71ACD6194509 * L_0 = __this->get_m_AttachedUIDocuments_0();
		NullCheck(L_0);
		Enumerator_tA397CC4887AB161D4CE3FBF104F8010A9DFCFE07  L_1;
		L_1 = List_1_GetEnumerator_m301D9E8B4A430B934D508A5C7055E605EA5B3B50(L_0, /*hidden argument*/List_1_GetEnumerator_m301D9E8B4A430B934D508A5C7055E605EA5B3B50_RuntimeMethod_var);
		V_2 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			goto IL_004e;
		}

IL_0010:
		{
			// foreach (var sibling in m_AttachedUIDocuments)
			UIDocument_t008D811860584F44CEBB5AF575856E6EFCEBECC4 * L_2;
			L_2 = Enumerator_get_Current_mE640EE863C1AD4E7A6879F7C8172A3D0FF659024_inline((Enumerator_tA397CC4887AB161D4CE3FBF104F8010A9DFCFE07 *)(&V_2), /*hidden argument*/Enumerator_get_Current_mE640EE863C1AD4E7A6879F7C8172A3D0FF659024_RuntimeMethod_var);
			V_3 = L_2;
			// if (uiDocument.sortingOrder > sibling.sortingOrder)
			UIDocument_t008D811860584F44CEBB5AF575856E6EFCEBECC4 * L_3 = ___uiDocument0;
			NullCheck(L_3);
			float L_4;
			L_4 = UIDocument_get_sortingOrder_mFB0A6D9948BA436BFE9AE3D250E094F07FD14DE0_inline(L_3, /*hidden argument*/NULL);
			UIDocument_t008D811860584F44CEBB5AF575856E6EFCEBECC4 * L_5 = V_3;
			NullCheck(L_5);
			float L_6;
			L_6 = UIDocument_get_sortingOrder_mFB0A6D9948BA436BFE9AE3D250E094F07FD14DE0_inline(L_5, /*hidden argument*/NULL);
			if ((!(((float)L_4) > ((float)L_6))))
			{
				goto IL_002c;
			}
		}

IL_0026:
		{
			// index++;
			int32_t L_7 = V_0;
			V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
			// continue;
			goto IL_004e;
		}

IL_002c:
		{
			// if (uiDocument.sortingOrder < sibling.sortingOrder)
			UIDocument_t008D811860584F44CEBB5AF575856E6EFCEBECC4 * L_8 = ___uiDocument0;
			NullCheck(L_8);
			float L_9;
			L_9 = UIDocument_get_sortingOrder_mFB0A6D9948BA436BFE9AE3D250E094F07FD14DE0_inline(L_8, /*hidden argument*/NULL);
			UIDocument_t008D811860584F44CEBB5AF575856E6EFCEBECC4 * L_10 = V_3;
			NullCheck(L_10);
			float L_11;
			L_11 = UIDocument_get_sortingOrder_mFB0A6D9948BA436BFE9AE3D250E094F07FD14DE0_inline(L_10, /*hidden argument*/NULL);
			if ((!(((float)L_9) < ((float)L_11))))
			{
				goto IL_003c;
			}
		}

IL_003a:
		{
			// break;
			IL2CPP_LEAVE(0x67, FINALLY_0059);
		}

IL_003c:
		{
			// if (uiDocument.m_UIDocumentCount > sibling.m_UIDocumentCount)
			UIDocument_t008D811860584F44CEBB5AF575856E6EFCEBECC4 * L_12 = ___uiDocument0;
			NullCheck(L_12);
			int32_t L_13 = L_12->get_m_UIDocumentCount_8();
			UIDocument_t008D811860584F44CEBB5AF575856E6EFCEBECC4 * L_14 = V_3;
			NullCheck(L_14);
			int32_t L_15 = L_14->get_m_UIDocumentCount_8();
			if ((((int32_t)L_13) <= ((int32_t)L_15)))
			{
				goto IL_0057;
			}
		}

IL_004a:
		{
			// index++;
			int32_t L_16 = V_0;
			V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1));
		}

IL_004e:
		{
			// foreach (var sibling in m_AttachedUIDocuments)
			bool L_17;
			L_17 = Enumerator_MoveNext_mBDF6727B42AB11D52CE47931EB4F4A17CE10238D((Enumerator_tA397CC4887AB161D4CE3FBF104F8010A9DFCFE07 *)(&V_2), /*hidden argument*/Enumerator_MoveNext_mBDF6727B42AB11D52CE47931EB4F4A17CE10238D_RuntimeMethod_var);
			if (L_17)
			{
				goto IL_0010;
			}
		}

IL_0057:
		{
			IL2CPP_LEAVE(0x67, FINALLY_0059);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0059;
	}

FINALLY_0059:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m27B05A7331A3E31017AE91D26A2EB7DDE63D7345((Enumerator_tA397CC4887AB161D4CE3FBF104F8010A9DFCFE07 *)(&V_2), /*hidden argument*/Enumerator_Dispose_m27B05A7331A3E31017AE91D26A2EB7DDE63D7345_RuntimeMethod_var);
		IL2CPP_END_FINALLY(89)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(89)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x67, IL_0067)
	}

IL_0067:
	{
		// if (index < m_AttachedUIDocuments.Count)
		int32_t L_18 = V_0;
		List_1_tAB773DE00C0DE14686075955D7FB71ACD6194509 * L_19 = __this->get_m_AttachedUIDocuments_0();
		NullCheck(L_19);
		int32_t L_20;
		L_20 = List_1_get_Count_m46E859E3CE7BCCF1CABF62E178A7A6AD5BD1164B_inline(L_19, /*hidden argument*/List_1_get_Count_m46E859E3CE7BCCF1CABF62E178A7A6AD5BD1164B_RuntimeMethod_var);
		if ((((int32_t)L_18) >= ((int32_t)L_20)))
		{
			goto IL_00e1;
		}
	}
	{
		// m_AttachedUIDocuments.Insert(index, uiDocument);
		List_1_tAB773DE00C0DE14686075955D7FB71ACD6194509 * L_21 = __this->get_m_AttachedUIDocuments_0();
		int32_t L_22 = V_0;
		UIDocument_t008D811860584F44CEBB5AF575856E6EFCEBECC4 * L_23 = ___uiDocument0;
		NullCheck(L_21);
		List_1_Insert_m742EF6D9F0BC42614F983C7E1F6690E5698A17A3(L_21, L_22, L_23, /*hidden argument*/List_1_Insert_m742EF6D9F0BC42614F983C7E1F6690E5698A17A3_RuntimeMethod_var);
		// if (visualTree == null || uiDocument.rootVisualElement == null)
		VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * L_24 = ___visualTree1;
		if (!L_24)
		{
			goto IL_008d;
		}
	}
	{
		UIDocument_t008D811860584F44CEBB5AF575856E6EFCEBECC4 * L_25 = ___uiDocument0;
		NullCheck(L_25);
		VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * L_26;
		L_26 = UIDocument_get_rootVisualElement_m0BE2D8FAA3533A8DBEB2FDADD2F98FDE257F7D76_inline(L_25, /*hidden argument*/NULL);
		if (L_26)
		{
			goto IL_008e;
		}
	}

IL_008d:
	{
		// return;
		return;
	}

IL_008e:
	{
		// if (index > 0)
		int32_t L_27 = V_0;
		if ((((int32_t)L_27) <= ((int32_t)0)))
		{
			goto IL_00cf;
		}
	}
	{
		// VisualElement previousInTree = null;
		V_4 = (VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 *)NULL;
		// int i = 1;
		V_5 = 1;
		goto IL_00b5;
	}

IL_009a:
	{
		// var previousUIDocument = m_AttachedUIDocuments[index - i++];
		List_1_tAB773DE00C0DE14686075955D7FB71ACD6194509 * L_28 = __this->get_m_AttachedUIDocuments_0();
		int32_t L_29 = V_0;
		int32_t L_30 = V_5;
		int32_t L_31 = L_30;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_31, (int32_t)1));
		NullCheck(L_28);
		UIDocument_t008D811860584F44CEBB5AF575856E6EFCEBECC4 * L_32;
		L_32 = List_1_get_Item_m9E9C3E57AC2ECB01351EE8C0FB88DA8919CF98F7_inline(L_28, ((int32_t)il2cpp_codegen_subtract((int32_t)L_29, (int32_t)L_31)), /*hidden argument*/List_1_get_Item_m9E9C3E57AC2ECB01351EE8C0FB88DA8919CF98F7_RuntimeMethod_var);
		// previousInTree = previousUIDocument.rootVisualElement;
		NullCheck(L_32);
		VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * L_33;
		L_33 = UIDocument_get_rootVisualElement_m0BE2D8FAA3533A8DBEB2FDADD2F98FDE257F7D76_inline(L_32, /*hidden argument*/NULL);
		V_4 = L_33;
	}

IL_00b5:
	{
		// while (previousInTree == null && index - i >= 0)
		VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * L_34 = V_4;
		if (L_34)
		{
			goto IL_00c0;
		}
	}
	{
		int32_t L_35 = V_0;
		int32_t L_36 = V_5;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_35, (int32_t)L_36))) >= ((int32_t)0)))
		{
			goto IL_009a;
		}
	}

IL_00c0:
	{
		// if (previousInTree != null)
		VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * L_37 = V_4;
		if (!L_37)
		{
			goto IL_00cf;
		}
	}
	{
		// index = visualTree.IndexOf(previousInTree) + 1;
		VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * L_38 = ___visualTree1;
		VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * L_39 = V_4;
		NullCheck(L_38);
		int32_t L_40;
		L_40 = VisualElement_IndexOf_m1B02930EEC35A7164BB999B7B1E6EEA41E7AAE47(L_38, L_39, /*hidden argument*/NULL);
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_40, (int32_t)1));
	}

IL_00cf:
	{
		// if (index > visualTree.childCount)
		int32_t L_41 = V_0;
		VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * L_42 = ___visualTree1;
		NullCheck(L_42);
		int32_t L_43;
		L_43 = VisualElement_get_childCount_mA4C3D31DB972D8092EB35BB879230CDC5854898E(L_42, /*hidden argument*/NULL);
		if ((((int32_t)L_41) <= ((int32_t)L_43)))
		{
			goto IL_00ed;
		}
	}
	{
		// index = visualTree.childCount;
		VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * L_44 = ___visualTree1;
		NullCheck(L_44);
		int32_t L_45;
		L_45 = VisualElement_get_childCount_mA4C3D31DB972D8092EB35BB879230CDC5854898E(L_44, /*hidden argument*/NULL);
		V_0 = L_45;
		// }
		goto IL_00ed;
	}

IL_00e1:
	{
		// m_AttachedUIDocuments.Add(uiDocument);
		List_1_tAB773DE00C0DE14686075955D7FB71ACD6194509 * L_46 = __this->get_m_AttachedUIDocuments_0();
		UIDocument_t008D811860584F44CEBB5AF575856E6EFCEBECC4 * L_47 = ___uiDocument0;
		NullCheck(L_46);
		List_1_Add_m969E90236937A5E99BDF4CF9E995CAA0193C38E9(L_46, L_47, /*hidden argument*/List_1_Add_m969E90236937A5E99BDF4CF9E995CAA0193C38E9_RuntimeMethod_var);
	}

IL_00ed:
	{
		// if (visualTree == null || uiDocument.rootVisualElement == null)
		VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * L_48 = ___visualTree1;
		if (!L_48)
		{
			goto IL_00f8;
		}
	}
	{
		UIDocument_t008D811860584F44CEBB5AF575856E6EFCEBECC4 * L_49 = ___uiDocument0;
		NullCheck(L_49);
		VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * L_50;
		L_50 = UIDocument_get_rootVisualElement_m0BE2D8FAA3533A8DBEB2FDADD2F98FDE257F7D76_inline(L_49, /*hidden argument*/NULL);
		if (L_50)
		{
			goto IL_00f9;
		}
	}

IL_00f8:
	{
		// return;
		return;
	}

IL_00f9:
	{
		// int insertionIndex = firstInsertIndex + index;
		int32_t L_51 = ___firstInsertIndex2;
		int32_t L_52 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_51, (int32_t)L_52));
		// if (insertionIndex < visualTree.childCount)
		int32_t L_53 = V_1;
		VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * L_54 = ___visualTree1;
		NullCheck(L_54);
		int32_t L_55;
		L_55 = VisualElement_get_childCount_mA4C3D31DB972D8092EB35BB879230CDC5854898E(L_54, /*hidden argument*/NULL);
		if ((((int32_t)L_53) >= ((int32_t)L_55)))
		{
			goto IL_0114;
		}
	}
	{
		// visualTree.Insert(insertionIndex, uiDocument.rootVisualElement);
		VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * L_56 = ___visualTree1;
		int32_t L_57 = V_1;
		UIDocument_t008D811860584F44CEBB5AF575856E6EFCEBECC4 * L_58 = ___uiDocument0;
		NullCheck(L_58);
		VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * L_59;
		L_59 = UIDocument_get_rootVisualElement_m0BE2D8FAA3533A8DBEB2FDADD2F98FDE257F7D76_inline(L_58, /*hidden argument*/NULL);
		NullCheck(L_56);
		VisualElement_Insert_m6B910E3F8CC867302F50325F14B0DD816A176C19(L_56, L_57, L_59, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0114:
	{
		// visualTree.Add(uiDocument.rootVisualElement);
		VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * L_60 = ___visualTree1;
		UIDocument_t008D811860584F44CEBB5AF575856E6EFCEBECC4 * L_61 = ___uiDocument0;
		NullCheck(L_61);
		VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * L_62;
		L_62 = UIDocument_get_rootVisualElement_m0BE2D8FAA3533A8DBEB2FDADD2F98FDE257F7D76_inline(L_61, /*hidden argument*/NULL);
		NullCheck(L_60);
		VisualElement_Add_m4BE5AD69E7A3404285C9BCF755149C1951D70C11(L_60, L_62, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.UIElements.UIDocumentList::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIDocumentList__ctor_m5CCA152EB41F3C8EABCE1990FF875CDF8B130953 (UIDocumentList_t3D7C0E63339FDA7858C1D1AE3EB911CDB76C18C5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mB8A598685BD0AE92EC90E211CDCC5C6D7F1554A3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tAB773DE00C0DE14686075955D7FB71ACD6194509_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal List<UIDocument> m_AttachedUIDocuments = new List<UIDocument>();
		List_1_tAB773DE00C0DE14686075955D7FB71ACD6194509 * L_0 = (List_1_tAB773DE00C0DE14686075955D7FB71ACD6194509 *)il2cpp_codegen_object_new(List_1_tAB773DE00C0DE14686075955D7FB71ACD6194509_il2cpp_TypeInfo_var);
		List_1__ctor_mB8A598685BD0AE92EC90E211CDCC5C6D7F1554A3(L_0, /*hidden argument*/List_1__ctor_mB8A598685BD0AE92EC90E211CDCC5C6D7F1554A3_RuntimeMethod_var);
		__this->set_m_AttachedUIDocuments_0(L_0);
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
// System.Void UnityEngine.UIElements.NavigateFocusRing/ChangeDirection::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChangeDirection__ctor_mD02F4FF0E700D195CD1D9D200B2FCE2B5E1EEEE6 (ChangeDirection_t34BA68392D0BB026E61B81B65AD1B09CF9DB4D27 * __this, int32_t ___i0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FocusChangeDirection_t7E59BE4DF7F0B4024128F306581D21C2C5E02CF1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public ChangeDirection(int i) : base(i) {}
		int32_t L_0 = ___i0;
		IL2CPP_RUNTIME_CLASS_INIT(FocusChangeDirection_t7E59BE4DF7F0B4024128F306581D21C2C5E02CF1_il2cpp_TypeInfo_var);
		FocusChangeDirection__ctor_m651A63A6CFE800C3A0B0D5860F121C599E4CBE48(__this, L_0, /*hidden argument*/NULL);
		// public ChangeDirection(int i) : base(i) {}
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
// Conversion methods for marshalling of: UnityEngine.UIElements.NavigateFocusRing/FocusableHierarchyTraversal
IL2CPP_EXTERN_C void FocusableHierarchyTraversal_t6D47905FA29D442881D3D9C243EA93E74712D48E_marshal_pinvoke(const FocusableHierarchyTraversal_t6D47905FA29D442881D3D9C243EA93E74712D48E& unmarshaled, FocusableHierarchyTraversal_t6D47905FA29D442881D3D9C243EA93E74712D48E_marshaled_pinvoke& marshaled)
{
	Exception_t* ___currentFocusable_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'currentFocusable' of type 'FocusableHierarchyTraversal': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___currentFocusable_0Exception, NULL);
}
IL2CPP_EXTERN_C void FocusableHierarchyTraversal_t6D47905FA29D442881D3D9C243EA93E74712D48E_marshal_pinvoke_back(const FocusableHierarchyTraversal_t6D47905FA29D442881D3D9C243EA93E74712D48E_marshaled_pinvoke& marshaled, FocusableHierarchyTraversal_t6D47905FA29D442881D3D9C243EA93E74712D48E& unmarshaled)
{
	Exception_t* ___currentFocusable_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'currentFocusable' of type 'FocusableHierarchyTraversal': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___currentFocusable_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.UIElements.NavigateFocusRing/FocusableHierarchyTraversal
IL2CPP_EXTERN_C void FocusableHierarchyTraversal_t6D47905FA29D442881D3D9C243EA93E74712D48E_marshal_pinvoke_cleanup(FocusableHierarchyTraversal_t6D47905FA29D442881D3D9C243EA93E74712D48E_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.UIElements.NavigateFocusRing/FocusableHierarchyTraversal
IL2CPP_EXTERN_C void FocusableHierarchyTraversal_t6D47905FA29D442881D3D9C243EA93E74712D48E_marshal_com(const FocusableHierarchyTraversal_t6D47905FA29D442881D3D9C243EA93E74712D48E& unmarshaled, FocusableHierarchyTraversal_t6D47905FA29D442881D3D9C243EA93E74712D48E_marshaled_com& marshaled)
{
	Exception_t* ___currentFocusable_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'currentFocusable' of type 'FocusableHierarchyTraversal': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___currentFocusable_0Exception, NULL);
}
IL2CPP_EXTERN_C void FocusableHierarchyTraversal_t6D47905FA29D442881D3D9C243EA93E74712D48E_marshal_com_back(const FocusableHierarchyTraversal_t6D47905FA29D442881D3D9C243EA93E74712D48E_marshaled_com& marshaled, FocusableHierarchyTraversal_t6D47905FA29D442881D3D9C243EA93E74712D48E& unmarshaled)
{
	Exception_t* ___currentFocusable_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'currentFocusable' of type 'FocusableHierarchyTraversal': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___currentFocusable_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.UIElements.NavigateFocusRing/FocusableHierarchyTraversal
IL2CPP_EXTERN_C void FocusableHierarchyTraversal_t6D47905FA29D442881D3D9C243EA93E74712D48E_marshal_com_cleanup(FocusableHierarchyTraversal_t6D47905FA29D442881D3D9C243EA93E74712D48E_marshaled_com& marshaled)
{
}
// System.Boolean UnityEngine.UIElements.NavigateFocusRing/FocusableHierarchyTraversal::ValidateHierarchyTraversal(UnityEngine.UIElements.VisualElement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FocusableHierarchyTraversal_ValidateHierarchyTraversal_mAEC9196D5A7F1D2E277DE2F0DCFCE8DDA8A85263 (FocusableHierarchyTraversal_t6D47905FA29D442881D3D9C243EA93E74712D48E * __this, VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * ___v0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NavigateFocusRing_t44CF1D05515ADB539414B52A64A7602739E6B826_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return IsActive(v) && v.worldBoundingBox.Overlaps(validRect);
		VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * L_0 = ___v0;
		IL2CPP_RUNTIME_CLASS_INIT(NavigateFocusRing_t44CF1D05515ADB539414B52A64A7602739E6B826_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = NavigateFocusRing_IsActive_m9F034697B026C01735A19F0A83BA97F9A5EC3605(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * L_2 = ___v0;
		NullCheck(L_2);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_3;
		L_3 = VisualElement_get_worldBoundingBox_mBDDF279164FD78BA18C80EABE1B982C63F5DAC91(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_4 = __this->get_validRect_1();
		bool L_5;
		L_5 = Rect_Overlaps_mFF91B379E163CE421F334C99C9F3E5A7D3C1591F((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_0), L_4, /*hidden argument*/NULL);
		return L_5;
	}

IL_001d:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool FocusableHierarchyTraversal_ValidateHierarchyTraversal_mAEC9196D5A7F1D2E277DE2F0DCFCE8DDA8A85263_AdjustorThunk (RuntimeObject * __this, VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * ___v0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	FocusableHierarchyTraversal_t6D47905FA29D442881D3D9C243EA93E74712D48E * _thisAdjusted = reinterpret_cast<FocusableHierarchyTraversal_t6D47905FA29D442881D3D9C243EA93E74712D48E *>(__this + _offset);
	bool _returnValue;
	_returnValue = FocusableHierarchyTraversal_ValidateHierarchyTraversal_mAEC9196D5A7F1D2E277DE2F0DCFCE8DDA8A85263(_thisAdjusted, ___v0, method);
	return _returnValue;
}
// System.Boolean UnityEngine.UIElements.NavigateFocusRing/FocusableHierarchyTraversal::ValidateElement(UnityEngine.UIElements.VisualElement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FocusableHierarchyTraversal_ValidateElement_mAA5F8BA9850308FBA591F1CD54821A60A17CFD72 (FocusableHierarchyTraversal_t6D47905FA29D442881D3D9C243EA93E74712D48E * __this, VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * ___v0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NavigateFocusRing_t44CF1D05515ADB539414B52A64A7602739E6B826_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return IsFocusable(v) && v.worldBound.Overlaps(validRect);
		VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * L_0 = ___v0;
		IL2CPP_RUNTIME_CLASS_INIT(NavigateFocusRing_t44CF1D05515ADB539414B52A64A7602739E6B826_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = NavigateFocusRing_IsFocusable_m0137D80B13592ABFE61B8AFEFC7643E2C04E7F04(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * L_2 = ___v0;
		NullCheck(L_2);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_3;
		L_3 = VisualElement_get_worldBound_m5990120A0D099FE5555AEDBF2533187AFE2A4891(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_4 = __this->get_validRect_1();
		bool L_5;
		L_5 = Rect_Overlaps_mFF91B379E163CE421F334C99C9F3E5A7D3C1591F((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_0), L_4, /*hidden argument*/NULL);
		return L_5;
	}

IL_001d:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool FocusableHierarchyTraversal_ValidateElement_mAA5F8BA9850308FBA591F1CD54821A60A17CFD72_AdjustorThunk (RuntimeObject * __this, VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * ___v0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	FocusableHierarchyTraversal_t6D47905FA29D442881D3D9C243EA93E74712D48E * _thisAdjusted = reinterpret_cast<FocusableHierarchyTraversal_t6D47905FA29D442881D3D9C243EA93E74712D48E *>(__this + _offset);
	bool _returnValue;
	_returnValue = FocusableHierarchyTraversal_ValidateElement_mAA5F8BA9850308FBA591F1CD54821A60A17CFD72(_thisAdjusted, ___v0, method);
	return _returnValue;
}
// System.Int32 UnityEngine.UIElements.NavigateFocusRing/FocusableHierarchyTraversal::Order(UnityEngine.UIElements.VisualElement,UnityEngine.UIElements.VisualElement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FocusableHierarchyTraversal_Order_mC00D270C642AAB636AF159CD218784E118641BA7 (FocusableHierarchyTraversal_t6D47905FA29D442881D3D9C243EA93E74712D48E * __this, VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * ___a0, VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * ___b1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NavigateFocusRing_t44CF1D05515ADB539414B52A64A7602739E6B826_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  V_1;
	memset((&V_1), 0, sizeof(V_1));
	float V_2 = 0.0f;
	{
		// Rect ra = a.worldBound, rb = b.worldBound;
		VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * L_0 = ___a0;
		NullCheck(L_0);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_1;
		L_1 = VisualElement_get_worldBound_m5990120A0D099FE5555AEDBF2533187AFE2A4891(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// Rect ra = a.worldBound, rb = b.worldBound;
		VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * L_2 = ___b1;
		NullCheck(L_2);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_3;
		L_3 = VisualElement_get_worldBound_m5990120A0D099FE5555AEDBF2533187AFE2A4891(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		// float diff = 0f;
		V_2 = (0.0f);
		// if (direction == Up) diff = rb.yMax - ra.yMax;
		ChangeDirection_t34BA68392D0BB026E61B81B65AD1B09CF9DB4D27 * L_4 = __this->get_direction_3();
		IL2CPP_RUNTIME_CLASS_INIT(NavigateFocusRing_t44CF1D05515ADB539414B52A64A7602739E6B826_il2cpp_TypeInfo_var);
		ChangeDirection_t34BA68392D0BB026E61B81B65AD1B09CF9DB4D27 * L_5 = ((NavigateFocusRing_t44CF1D05515ADB539414B52A64A7602739E6B826_StaticFields*)il2cpp_codegen_static_fields_for(NavigateFocusRing_t44CF1D05515ADB539414B52A64A7602739E6B826_il2cpp_TypeInfo_var))->get_Up_2();
		if ((!(((RuntimeObject*)(ChangeDirection_t34BA68392D0BB026E61B81B65AD1B09CF9DB4D27 *)L_4) == ((RuntimeObject*)(ChangeDirection_t34BA68392D0BB026E61B81B65AD1B09CF9DB4D27 *)L_5))))
		{
			goto IL_0033;
		}
	}
	{
		// if (direction == Up) diff = rb.yMax - ra.yMax;
		float L_6;
		L_6 = Rect_get_yMax_m9685BF55B44C51FF9BA080F9995073E458E1CDC3((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_1), /*hidden argument*/NULL);
		float L_7;
		L_7 = Rect_get_yMax_m9685BF55B44C51FF9BA080F9995073E458E1CDC3((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_0), /*hidden argument*/NULL);
		V_2 = ((float)il2cpp_codegen_subtract((float)L_6, (float)L_7));
		goto IL_008e;
	}

IL_0033:
	{
		// else if (direction == Down) diff = ra.yMin - rb.yMin;
		ChangeDirection_t34BA68392D0BB026E61B81B65AD1B09CF9DB4D27 * L_8 = __this->get_direction_3();
		IL2CPP_RUNTIME_CLASS_INIT(NavigateFocusRing_t44CF1D05515ADB539414B52A64A7602739E6B826_il2cpp_TypeInfo_var);
		ChangeDirection_t34BA68392D0BB026E61B81B65AD1B09CF9DB4D27 * L_9 = ((NavigateFocusRing_t44CF1D05515ADB539414B52A64A7602739E6B826_StaticFields*)il2cpp_codegen_static_fields_for(NavigateFocusRing_t44CF1D05515ADB539414B52A64A7602739E6B826_il2cpp_TypeInfo_var))->get_Down_3();
		if ((!(((RuntimeObject*)(ChangeDirection_t34BA68392D0BB026E61B81B65AD1B09CF9DB4D27 *)L_8) == ((RuntimeObject*)(ChangeDirection_t34BA68392D0BB026E61B81B65AD1B09CF9DB4D27 *)L_9))))
		{
			goto IL_0052;
		}
	}
	{
		// else if (direction == Down) diff = ra.yMin - rb.yMin;
		float L_10;
		L_10 = Rect_get_yMin_m2C91041817D410B32B80E338764109D75ACB01E4((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_0), /*hidden argument*/NULL);
		float L_11;
		L_11 = Rect_get_yMin_m2C91041817D410B32B80E338764109D75ACB01E4((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_1), /*hidden argument*/NULL);
		V_2 = ((float)il2cpp_codegen_subtract((float)L_10, (float)L_11));
		goto IL_008e;
	}

IL_0052:
	{
		// else if (direction == Left) diff = rb.xMax - ra.xMax;
		ChangeDirection_t34BA68392D0BB026E61B81B65AD1B09CF9DB4D27 * L_12 = __this->get_direction_3();
		IL2CPP_RUNTIME_CLASS_INIT(NavigateFocusRing_t44CF1D05515ADB539414B52A64A7602739E6B826_il2cpp_TypeInfo_var);
		ChangeDirection_t34BA68392D0BB026E61B81B65AD1B09CF9DB4D27 * L_13 = ((NavigateFocusRing_t44CF1D05515ADB539414B52A64A7602739E6B826_StaticFields*)il2cpp_codegen_static_fields_for(NavigateFocusRing_t44CF1D05515ADB539414B52A64A7602739E6B826_il2cpp_TypeInfo_var))->get_Left_0();
		if ((!(((RuntimeObject*)(ChangeDirection_t34BA68392D0BB026E61B81B65AD1B09CF9DB4D27 *)L_12) == ((RuntimeObject*)(ChangeDirection_t34BA68392D0BB026E61B81B65AD1B09CF9DB4D27 *)L_13))))
		{
			goto IL_0071;
		}
	}
	{
		// else if (direction == Left) diff = rb.xMax - ra.xMax;
		float L_14;
		L_14 = Rect_get_xMax_m174FFAACE6F19A59AA793B3D507BE70116E27DE5((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_1), /*hidden argument*/NULL);
		float L_15;
		L_15 = Rect_get_xMax_m174FFAACE6F19A59AA793B3D507BE70116E27DE5((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_0), /*hidden argument*/NULL);
		V_2 = ((float)il2cpp_codegen_subtract((float)L_14, (float)L_15));
		goto IL_008e;
	}

IL_0071:
	{
		// else if (direction == Right) diff = ra.xMin - rb.xMin;
		ChangeDirection_t34BA68392D0BB026E61B81B65AD1B09CF9DB4D27 * L_16 = __this->get_direction_3();
		IL2CPP_RUNTIME_CLASS_INIT(NavigateFocusRing_t44CF1D05515ADB539414B52A64A7602739E6B826_il2cpp_TypeInfo_var);
		ChangeDirection_t34BA68392D0BB026E61B81B65AD1B09CF9DB4D27 * L_17 = ((NavigateFocusRing_t44CF1D05515ADB539414B52A64A7602739E6B826_StaticFields*)il2cpp_codegen_static_fields_for(NavigateFocusRing_t44CF1D05515ADB539414B52A64A7602739E6B826_il2cpp_TypeInfo_var))->get_Right_1();
		if ((!(((RuntimeObject*)(ChangeDirection_t34BA68392D0BB026E61B81B65AD1B09CF9DB4D27 *)L_16) == ((RuntimeObject*)(ChangeDirection_t34BA68392D0BB026E61B81B65AD1B09CF9DB4D27 *)L_17))))
		{
			goto IL_008e;
		}
	}
	{
		// else if (direction == Right) diff = ra.xMin - rb.xMin;
		float L_18;
		L_18 = Rect_get_xMin_m02EA330BE4C4A07A3F18F50F257832E9E3C2B873((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_0), /*hidden argument*/NULL);
		float L_19;
		L_19 = Rect_get_xMin_m02EA330BE4C4A07A3F18F50F257832E9E3C2B873((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_1), /*hidden argument*/NULL);
		V_2 = ((float)il2cpp_codegen_subtract((float)L_18, (float)L_19));
	}

IL_008e:
	{
		// if (Mathf.Approximately(diff, 0f))
		float L_20 = V_2;
		bool L_21;
		L_21 = Mathf_Approximately_mC2A3F657E3FD0CCAD4A4936CEE2F67D624A2AA55(L_20, (0.0f), /*hidden argument*/NULL);
		if (!L_21)
		{
			goto IL_009d;
		}
	}
	{
		// return 0;
		return 0;
	}

IL_009d:
	{
		// return diff > 0 ? 1 : -1;
		float L_22 = V_2;
		if ((((float)L_22) > ((float)(0.0f))))
		{
			goto IL_00a7;
		}
	}
	{
		return (-1);
	}

IL_00a7:
	{
		return 1;
	}
}
IL2CPP_EXTERN_C  int32_t FocusableHierarchyTraversal_Order_mC00D270C642AAB636AF159CD218784E118641BA7_AdjustorThunk (RuntimeObject * __this, VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * ___a0, VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * ___b1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	FocusableHierarchyTraversal_t6D47905FA29D442881D3D9C243EA93E74712D48E * _thisAdjusted = reinterpret_cast<FocusableHierarchyTraversal_t6D47905FA29D442881D3D9C243EA93E74712D48E *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = FocusableHierarchyTraversal_Order_mC00D270C642AAB636AF159CD218784E118641BA7(_thisAdjusted, ___a0, ___b1, method);
	return _returnValue;
}
// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.NavigateFocusRing/FocusableHierarchyTraversal::GetBestOverall(UnityEngine.UIElements.VisualElement,UnityEngine.UIElements.VisualElement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * FocusableHierarchyTraversal_GetBestOverall_mE1106D74720F7F24C94FDBC36CEF3A14587D11E4 (FocusableHierarchyTraversal_t6D47905FA29D442881D3D9C243EA93E74712D48E * __this, VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * ___root0, VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * ___bestSoFar1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NavigateFocusRing_t44CF1D05515ADB539414B52A64A7602739E6B826_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * V_2 = NULL;
	{
		// if (!ValidateHierarchyTraversal(root))
		VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * L_0 = ___root0;
		bool L_1;
		L_1 = FocusableHierarchyTraversal_ValidateHierarchyTraversal_mAEC9196D5A7F1D2E277DE2F0DCFCE8DDA8A85263((FocusableHierarchyTraversal_t6D47905FA29D442881D3D9C243EA93E74712D48E *)__this, L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_000b;
		}
	}
	{
		// return bestSoFar;
		VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * L_2 = ___bestSoFar1;
		return L_2;
	}

IL_000b:
	{
		// if (ValidateElement(root))
		VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * L_3 = ___root0;
		bool L_4;
		L_4 = FocusableHierarchyTraversal_ValidateElement_mAA5F8BA9850308FBA591F1CD54821A60A17CFD72((FocusableHierarchyTraversal_t6D47905FA29D442881D3D9C243EA93E74712D48E *)__this, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0047;
		}
	}
	{
		// if ((!firstPass || Order(root, currentFocusable) > 0) &&
		//     (bestSoFar == null || Order(bestSoFar, root) > 0))
		bool L_5 = __this->get_firstPass_2();
		if (!L_5)
		{
			goto IL_002c;
		}
	}
	{
		VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * L_6 = ___root0;
		VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * L_7 = __this->get_currentFocusable_0();
		int32_t L_8;
		L_8 = FocusableHierarchyTraversal_Order_mC00D270C642AAB636AF159CD218784E118641BA7((FocusableHierarchyTraversal_t6D47905FA29D442881D3D9C243EA93E74712D48E *)__this, L_6, L_7, /*hidden argument*/NULL);
		if ((((int32_t)L_8) <= ((int32_t)0)))
		{
			goto IL_003d;
		}
	}

IL_002c:
	{
		VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * L_9 = ___bestSoFar1;
		if (!L_9)
		{
			goto IL_003a;
		}
	}
	{
		VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * L_10 = ___bestSoFar1;
		VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * L_11 = ___root0;
		int32_t L_12;
		L_12 = FocusableHierarchyTraversal_Order_mC00D270C642AAB636AF159CD218784E118641BA7((FocusableHierarchyTraversal_t6D47905FA29D442881D3D9C243EA93E74712D48E *)__this, L_10, L_11, /*hidden argument*/NULL);
		if ((((int32_t)L_12) <= ((int32_t)0)))
		{
			goto IL_003d;
		}
	}

IL_003a:
	{
		// bestSoFar = root;
		VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * L_13 = ___root0;
		___bestSoFar1 = L_13;
	}

IL_003d:
	{
		// if (IsFocusRoot(root))
		VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * L_14 = ___root0;
		IL2CPP_RUNTIME_CLASS_INIT(NavigateFocusRing_t44CF1D05515ADB539414B52A64A7602739E6B826_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = NavigateFocusRing_IsFocusRoot_m730561D3A95BB07B243AB22ACD533CCD9279E13C(L_14, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_0047;
		}
	}
	{
		// return bestSoFar;
		VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * L_16 = ___bestSoFar1;
		return L_16;
	}

IL_0047:
	{
		// int n = root.childCount;
		VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * L_17 = ___root0;
		NullCheck(L_17);
		int32_t L_18;
		L_18 = VisualElement_get_childCount_mA4C3D31DB972D8092EB35BB879230CDC5854898E(L_17, /*hidden argument*/NULL);
		V_0 = L_18;
		// for (int i = 0; i < n; i++)
		V_1 = 0;
		goto IL_0068;
	}

IL_0052:
	{
		// var child = root[i];
		VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * L_19 = ___root0;
		int32_t L_20 = V_1;
		NullCheck(L_19);
		VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * L_21;
		L_21 = VisualElement_get_Item_m2B62EE36F910C6EB7BBD15421B4D727A441B64A3(L_19, L_20, /*hidden argument*/NULL);
		V_2 = L_21;
		// bestSoFar = GetBestOverall(child, bestSoFar);
		VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * L_22 = V_2;
		VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * L_23 = ___bestSoFar1;
		VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * L_24;
		L_24 = FocusableHierarchyTraversal_GetBestOverall_mE1106D74720F7F24C94FDBC36CEF3A14587D11E4((FocusableHierarchyTraversal_t6D47905FA29D442881D3D9C243EA93E74712D48E *)__this, L_22, L_23, /*hidden argument*/NULL);
		___bestSoFar1 = L_24;
		// for (int i = 0; i < n; i++)
		int32_t L_25 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_25, (int32_t)1));
	}

IL_0068:
	{
		// for (int i = 0; i < n; i++)
		int32_t L_26 = V_1;
		int32_t L_27 = V_0;
		if ((((int32_t)L_26) < ((int32_t)L_27)))
		{
			goto IL_0052;
		}
	}
	{
		// return bestSoFar;
		VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * L_28 = ___bestSoFar1;
		return L_28;
	}
}
IL2CPP_EXTERN_C  VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * FocusableHierarchyTraversal_GetBestOverall_mE1106D74720F7F24C94FDBC36CEF3A14587D11E4_AdjustorThunk (RuntimeObject * __this, VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * ___root0, VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * ___bestSoFar1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	FocusableHierarchyTraversal_t6D47905FA29D442881D3D9C243EA93E74712D48E * _thisAdjusted = reinterpret_cast<FocusableHierarchyTraversal_t6D47905FA29D442881D3D9C243EA93E74712D48E *>(__this + _offset);
	VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * _returnValue;
	_returnValue = FocusableHierarchyTraversal_GetBestOverall_mE1106D74720F7F24C94FDBC36CEF3A14587D11E4(_thisAdjusted, ___root0, ___bestSoFar1, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DynamicAtlasSettings_set_minAtlasSize_m21E6D78365166005A94BFD62C109CEDBD73093EE_inline (DynamicAtlasSettings_t851C8E0D9506CB6B36AE277F8FCE439C89097806 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int minAtlasSize { get => m_MinAtlasSize; set => m_MinAtlasSize = value; }
		int32_t L_0 = ___value0;
		__this->set_m_MinAtlasSize_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DynamicAtlasSettings_set_maxAtlasSize_mF29A5685C1CBEE1E844621B0207A7A26CACAC0A2_inline (DynamicAtlasSettings_t851C8E0D9506CB6B36AE277F8FCE439C89097806 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int maxAtlasSize { get => m_MaxAtlasSize; set => m_MaxAtlasSize = value; }
		int32_t L_0 = ___value0;
		__this->set_m_MaxAtlasSize_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DynamicAtlasSettings_set_maxSubTextureSize_mF749ACCD86B492733F714D0EB2DECFFBBE796854_inline (DynamicAtlasSettings_t851C8E0D9506CB6B36AE277F8FCE439C89097806 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int maxSubTextureSize { get => m_MaxSubTextureSize; set => m_MaxSubTextureSize = value; }
		int32_t L_0 = ___value0;
		__this->set_m_MaxSubTextureSize_2(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DynamicAtlasSettings_set_activeFilters_m7740CA3037BC7E80AAE906AE92CC98E0F97D7317_inline (DynamicAtlasSettings_t851C8E0D9506CB6B36AE277F8FCE439C89097806 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public DynamicAtlasFilters activeFilters { get => (DynamicAtlasFilters)m_ActiveFilters; set => m_ActiveFilters = (DynamicAtlasFiltersInternal)value; }
		int32_t L_0 = ___value0;
		__this->set_m_ActiveFilters_3(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DynamicAtlasSettings_set_customFilter_m03BC4D87D27DDB66D6C526F26C3F1633E29ABBCC_inline (DynamicAtlasSettings_t851C8E0D9506CB6B36AE277F8FCE439C89097806 * __this, DynamicAtlasCustomFilter_tCC685CA75B6C1A4A973B7401B0C37E35352476AA * ___value0, const RuntimeMethod* method)
{
	{
		// public DynamicAtlasCustomFilter customFilter { get => m_CustomFilter; set => m_CustomFilter = value; }
		DynamicAtlasCustomFilter_tCC685CA75B6C1A4A973B7401B0C37E35352476AA * L_0 = ___value0;
		__this->set_m_CustomFilter_4(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___v0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___v0;
		float L_3 = L_2.get_y_3();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* EventBase_get_target_mBD9BCC23633D98BDCCBA8B7EE76DBC932035C3F3_inline (EventBase_tA1333DE2FD77BE5E6B06CFDC825252E0CCF00698 * __this, const RuntimeMethod* method)
{
	{
		// get { return m_Target; }
		RuntimeObject* L_0 = __this->get_m_Target_9();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t NavigationMoveEvent_get_direction_m3831053503744A8AB9B83F1D1907A07AD0072364_inline (NavigationMoveEvent_t763AB890A80C1029C653DCEE3FBC522E60A62634 * __this, const RuntimeMethod* method)
{
	{
		// public Direction direction { get; private set; }
		int32_t L_0 = __this->get_U3CdirectionU3Ek__BackingField_18();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FocusChangeDirection_t7E59BE4DF7F0B4024128F306581D21C2C5E02CF1 * FocusChangeDirection_get_none_m689E940E96F39B051A0FED9937D1915D0C6FC402_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FocusChangeDirection_t7E59BE4DF7F0B4024128F306581D21C2C5E02CF1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static FocusChangeDirection none { get; } = new FocusChangeDirection(0);
		IL2CPP_RUNTIME_CLASS_INIT(FocusChangeDirection_t7E59BE4DF7F0B4024128F306581D21C2C5E02CF1_il2cpp_TypeInfo_var);
		FocusChangeDirection_t7E59BE4DF7F0B4024128F306581D21C2C5E02CF1 * L_0 = ((FocusChangeDirection_t7E59BE4DF7F0B4024128F306581D21C2C5E02CF1_StaticFields*)il2cpp_codegen_static_fields_for(FocusChangeDirection_t7E59BE4DF7F0B4024128F306581D21C2C5E02CF1_il2cpp_TypeInfo_var))->get_U3CnoneU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Focusable_tF2E839AB6DBE413F04FC62347D7074D7377FD1E1 * VisualElementFocusChangeTarget_get_target_mB86D83FF06B02568533DF4C6BA026E593BB4A92D_inline (VisualElementFocusChangeTarget_t168347905990062A6F59D1111069713C3D3F98EC * __this, const RuntimeMethod* method)
{
	{
		// public Focusable target { get; private set; }
		Focusable_tF2E839AB6DBE413F04FC62347D7074D7377FD1E1 * L_0 = __this->get_U3CtargetU3Ek__BackingField_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FocusChangeDirection_t7E59BE4DF7F0B4024128F306581D21C2C5E02CF1 * VisualElementFocusChangeDirection_get_left_m2A45283A26313DC01E1335FF0DCA083A8B9E577B_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VisualElementFocusChangeDirection_t14A3CFA335037FB20713B566D5B993835A585951_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static FocusChangeDirection left => s_Left;
		IL2CPP_RUNTIME_CLASS_INIT(VisualElementFocusChangeDirection_t14A3CFA335037FB20713B566D5B993835A585951_il2cpp_TypeInfo_var);
		VisualElementFocusChangeDirection_t14A3CFA335037FB20713B566D5B993835A585951 * L_0 = ((VisualElementFocusChangeDirection_t14A3CFA335037FB20713B566D5B993835A585951_StaticFields*)il2cpp_codegen_static_fields_for(VisualElementFocusChangeDirection_t14A3CFA335037FB20713B566D5B993835A585951_il2cpp_TypeInfo_var))->get_s_Left_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FocusChangeDirection_t7E59BE4DF7F0B4024128F306581D21C2C5E02CF1 * VisualElementFocusChangeDirection_get_right_m12F66A6BE99451158B7DE93393F593FD65E77421_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VisualElementFocusChangeDirection_t14A3CFA335037FB20713B566D5B993835A585951_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static FocusChangeDirection right => s_Right;
		IL2CPP_RUNTIME_CLASS_INIT(VisualElementFocusChangeDirection_t14A3CFA335037FB20713B566D5B993835A585951_il2cpp_TypeInfo_var);
		VisualElementFocusChangeDirection_t14A3CFA335037FB20713B566D5B993835A585951 * L_0 = ((VisualElementFocusChangeDirection_t14A3CFA335037FB20713B566D5B993835A585951_StaticFields*)il2cpp_codegen_static_fields_for(VisualElementFocusChangeDirection_t14A3CFA335037FB20713B566D5B993835A585951_il2cpp_TypeInfo_var))->get_s_Right_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Subtraction_m6E536A8C72FEAA37FF8D5E26E11D6E71EB59599A_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___b1, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___a0;
		float L_1 = L_0.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___b1;
		float L_3 = L_2.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4 = ___a0;
		float L_5 = L_4.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6 = ___b1;
		float L_7 = L_6.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_8), ((float)il2cpp_codegen_subtract((float)L_1, (float)L_3)), ((float)il2cpp_codegen_subtract((float)L_5, (float)L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___a0;
		float L_1 = L_0.get_x_0();
		float L_2 = ___d1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3 = ___a0;
		float L_4 = L_3.get_y_1();
		float L_5 = ___d1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_6), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Addition_m5EACC2AEA80FEE29F380397CF1F4B11D04BE71CC_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___b1, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___a0;
		float L_1 = L_0.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___b1;
		float L_3 = L_2.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4 = ___a0;
		float L_5 = L_4.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6 = ___b1;
		float L_7 = L_6.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_8), ((float)il2cpp_codegen_add((float)L_1, (float)L_3)), ((float)il2cpp_codegen_add((float)L_5, (float)L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Focusable_get_tabIndex_m21C38A27D82ED394933E967FC3352DD0606F1657_inline (Focusable_tF2E839AB6DBE413F04FC62347D7074D7377FD1E1 * __this, const RuntimeMethod* method)
{
	{
		// public int tabIndex { get; set; }
		int32_t L_0 = __this->get_U3CtabIndexU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Focusable_get_excludeFromFocusRing_mA2B7D086023F8118F07FA5A7D622F3B8AEC980E8_inline (Focusable_tF2E839AB6DBE413F04FC62347D7074D7377FD1E1 * __this, const RuntimeMethod* method)
{
	{
		// get { return m_ExcludeFromFocusRing; }
		bool L_0 = __this->get_m_ExcludeFromFocusRing_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Focusable_get_delegatesFocus_m78A51878C04A2D20D579A3890DCE9F62BE75DC3F_inline (Focusable_tF2E839AB6DBE413F04FC62347D7074D7377FD1E1 * __this, const RuntimeMethod* method)
{
	{
		// get { return m_DelegatesFocus; }
		bool L_0 = __this->get_m_DelegatesFocus_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Hierarchy_tC971D6D195075C1B878D4B2558ECAD4E5FF6861A  VisualElement_get_hierarchy_mEE61B02E08154E767C2FCE1BDC903CBDF2A9B2BB_inline (VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * __this, const RuntimeMethod* method)
{
	{
		// get; private set;
		Hierarchy_tC971D6D195075C1B878D4B2558ECAD4E5FF6861A  L_0 = __this->get_U3ChierarchyU3Ek__BackingField_48();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BaseRuntimePanel_set_targetDisplay_m66A207FC22EA486A2E3091852DDD3AAD2F557269_inline (BaseRuntimePanel_tE55DB58DC0A1F524F98CC999672C716946DA4754 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// internal int targetDisplay { get; set;}
		int32_t L_0 = ___value0;
		__this->set_U3CtargetDisplayU3Ek__BackingField_51(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PanelSettings_get_targetDisplay_m2B5CF2AFF5271E8188FC81F258C8015A247811F6_inline (PanelSettings_tA06886CA55D7F3105153641E0BA56FF15E8DCA69 * __this, const RuntimeMethod* method)
{
	{
		// get => m_TargetDisplay;
		int32_t L_0 = __this->get_m_TargetDisplay_18();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float PanelSettings_get_sortingOrder_mB05D688334646EDC8BA49CCBCDEEA472B556B33F_inline (PanelSettings_tA06886CA55D7F3105153641E0BA56FF15E8DCA69 * __this, const RuntimeMethod* method)
{
	{
		// get => m_SortingOrder;
		float L_0 = __this->get_m_SortingOrder_17();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2Int__ctor_mB2B73108B6DD3ADC1B515D7DD9116ECAC6833726_inline (Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * __this, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___x0;
		__this->set_m_X_0(L_0);
		int32_t L_1 = ___y1;
		__this->set_m_Y_1(L_1);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * PanelSettings_get_targetTexture_mECC14702FCCB6939AA0F221E611971BB28A306F3_inline (PanelSettings_tA06886CA55D7F3105153641E0BA56FF15E8DCA69 * __this, const RuntimeMethod* method)
{
	{
		// get => m_TargetTexture;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_0 = __this->get_m_TargetTexture_8();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BaseVisualElementPanel_set_clearSettings_m4FDDA295355E270A46E8C840A17EAA3189467265_inline (BaseVisualElementPanel_tFF0B76C4FDAE6AA5D9A055D1FDD29AE67B93B95D * __this, PanelClearSettings_t3A957E91B3B162582F4BFEF32D08A44BE0BF2B93  ___value0, const RuntimeMethod* method)
{
	{
		// internal PanelClearSettings clearSettings { get; set; } = new PanelClearSettings { clearDepthStencil = true, clearColor = true, color = Color.clear };
		PanelClearSettings_t3A957E91B3B162582F4BFEF32D08A44BE0BF2B93  L_0 = ___value0;
		__this->set_U3CclearSettingsU3Ek__BackingField_5(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DynamicAtlasSettings_t851C8E0D9506CB6B36AE277F8FCE439C89097806 * PanelSettings_get_dynamicAtlasSettings_mA7CD01ECC21C5FE2E53BC5E891DDDD4A36A3D116_inline (PanelSettings_tA06886CA55D7F3105153641E0BA56FF15E8DCA69 * __this, const RuntimeMethod* method)
{
	{
		// public DynamicAtlasSettings dynamicAtlasSettings { get => m_DynamicAtlasSettings; set => m_DynamicAtlasSettings = value; }
		DynamicAtlasSettings_t851C8E0D9506CB6B36AE277F8FCE439C89097806 * L_0 = __this->get_m_DynamicAtlasSettings_24();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t DynamicAtlasSettings_get_minAtlasSize_m24F98ABD5894FBAAAB723B64561FEA4BE7700E15_inline (DynamicAtlasSettings_t851C8E0D9506CB6B36AE277F8FCE439C89097806 * __this, const RuntimeMethod* method)
{
	{
		// public int minAtlasSize { get => m_MinAtlasSize; set => m_MinAtlasSize = value; }
		int32_t L_0 = __this->get_m_MinAtlasSize_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t DynamicAtlasSettings_get_maxAtlasSize_m639A855206F205B7761DECD9846A333005FA2B43_inline (DynamicAtlasSettings_t851C8E0D9506CB6B36AE277F8FCE439C89097806 * __this, const RuntimeMethod* method)
{
	{
		// public int maxAtlasSize { get => m_MaxAtlasSize; set => m_MaxAtlasSize = value; }
		int32_t L_0 = __this->get_m_MaxAtlasSize_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t DynamicAtlasSettings_get_maxSubTextureSize_m084EADB926BF0EB4B2848F347A9DEB48FF491870_inline (DynamicAtlasSettings_t851C8E0D9506CB6B36AE277F8FCE439C89097806 * __this, const RuntimeMethod* method)
{
	{
		// public int maxSubTextureSize { get => m_MaxSubTextureSize; set => m_MaxSubTextureSize = value; }
		int32_t L_0 = __this->get_m_MaxSubTextureSize_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t DynamicAtlasSettings_get_activeFilters_m829EA1AD6874C1E0F9724893668696314F884858_inline (DynamicAtlasSettings_t851C8E0D9506CB6B36AE277F8FCE439C89097806 * __this, const RuntimeMethod* method)
{
	{
		// public DynamicAtlasFilters activeFilters { get => (DynamicAtlasFilters)m_ActiveFilters; set => m_ActiveFilters = (DynamicAtlasFiltersInternal)value; }
		int32_t L_0 = __this->get_m_ActiveFilters_3();
		return (int32_t)(L_0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DynamicAtlasCustomFilter_tCC685CA75B6C1A4A973B7401B0C37E35352476AA * DynamicAtlasSettings_get_customFilter_mF58AC5554D9AC7E94557D38AC7AC3C3FB31605D8_inline (DynamicAtlasSettings_t851C8E0D9506CB6B36AE277F8FCE439C89097806 * __this, const RuntimeMethod* method)
{
	{
		// public DynamicAtlasCustomFilter customFilter { get => m_CustomFilter; set => m_CustomFilter = value; }
		DynamicAtlasCustomFilter_tCC685CA75B6C1A4A973B7401B0C37E35352476AA * L_0 = __this->get_m_CustomFilter_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PanelSettings_get_scaleMode_m29F6F2F593761D9A03DD5768B180F100F724A8BE_inline (PanelSettings_tA06886CA55D7F3105153641E0BA56FF15E8DCA69 * __this, const RuntimeMethod* method)
{
	{
		// get => m_ScaleMode;
		int32_t L_0 = __this->get_m_ScaleMode_9();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float PanelSettings_get_fallbackDpi_mF33EE03C381EDDC10E5BF501C382B8887B70F26F_inline (PanelSettings_tA06886CA55D7F3105153641E0BA56FF15E8DCA69 * __this, const RuntimeMethod* method)
{
	{
		// get => m_FallbackDpi;
		float L_0 = __this->get_m_FallbackDpi_13();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float PanelSettings_get_referenceDpi_m2FC31DBE36463D52C56E7DA987C1C06213E0692D_inline (PanelSettings_tA06886CA55D7F3105153641E0BA56FF15E8DCA69 * __this, const RuntimeMethod* method)
{
	{
		// get => m_ReferenceDpi;
		float L_0 = __this->get_m_ReferenceDpi_12();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  PanelSettings_get_referenceResolution_mD72C52914CF23C55D87F21CD746A36B389363432_inline (PanelSettings_tA06886CA55D7F3105153641E0BA56FF15E8DCA69 * __this, const RuntimeMethod* method)
{
	{
		// get => m_ReferenceResolution;
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_0 = __this->get_m_ReferenceResolution_14();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_x_mDBEFBCDF9C7924767344ED2CEE1307885AED947B_inline (Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_m_X_0();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_y_m282591DEB0E70B02F4F4DDFAB90116AEC8E6B86C_inline (Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_m_Y_1();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PanelSettings_get_screenMatchMode_m69009B50BD8B63444548F86574F6B7D43043D5C2_inline (PanelSettings_tA06886CA55D7F3105153641E0BA56FF15E8DCA69 * __this, const RuntimeMethod* method)
{
	{
		// get => m_ScreenMatchMode;
		int32_t L_0 = __this->get_m_ScreenMatchMode_15();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float PanelSettings_get_match_m85BF6EEE7C48D6D387F600747265D124E623EFB9_inline (PanelSettings_tA06886CA55D7F3105153641E0BA56FF15E8DCA69 * __this, const RuntimeMethod* method)
{
	{
		// get => m_Match;
		float L_0 = __this->get_m_Match_16();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float PanelSettings_get_scale_m28C5C65DF239BCBCFBDD0C4F89AC2305B87D381B_inline (PanelSettings_tA06886CA55D7F3105153641E0BA56FF15E8DCA69 * __this, const RuntimeMethod* method)
{
	{
		// get => m_Scale;
		float L_0 = __this->get_m_Scale_10();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * BaseRuntimePanel_get_selectableGameObject_m9254091C528BD3A3286BDE454EAFA0F565854FCC_inline (BaseRuntimePanel_tE55DB58DC0A1F524F98CC999672C716946DA4754 * __this, const RuntimeMethod* method)
{
	{
		// get => m_SelectableGameObject;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_m_SelectableGameObject_45();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___v0, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___v0;
		float L_1 = L_0.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___v0;
		float L_3 = L_2.get_y_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_4), L_1, L_3, (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_add((float)L_1, (float)L_3)), ((float)il2cpp_codegen_add((float)L_5, (float)L_7)), ((float)il2cpp_codegen_add((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UIDocument_t008D811860584F44CEBB5AF575856E6EFCEBECC4 * UIDocument_get_parentUI_mB0FE5256563CDCEA105506D6784230AAE8142088_inline (UIDocument_t008D811860584F44CEBB5AF575856E6EFCEBECC4 * __this, const RuntimeMethod* method)
{
	{
		// get => m_ParentUI;
		UIDocument_t008D811860584F44CEBB5AF575856E6EFCEBECC4 * L_0 = __this->get_m_ParentUI_11();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UIDocument_set_parentUI_m653992C58145B07B94EFCBE69A5F01FAB7DED686_inline (UIDocument_t008D811860584F44CEBB5AF575856E6EFCEBECC4 * __this, UIDocument_t008D811860584F44CEBB5AF575856E6EFCEBECC4 * ___value0, const RuntimeMethod* method)
{
	{
		// private set => m_ParentUI = value;
		UIDocument_t008D811860584F44CEBB5AF575856E6EFCEBECC4 * L_0 = ___value0;
		__this->set_m_ParentUI_11(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VisualElement_set_pickingMode_m2897BC13E1EF4AF4D15E3CCC9A2404EA5D0E03B4_inline (VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public PickingMode pickingMode { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CpickingModeU3Ek__BackingField_33(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * UIDocument_get_rootVisualElement_m0BE2D8FAA3533A8DBEB2FDADD2F98FDE257F7D76_inline (UIDocument_t008D811860584F44CEBB5AF575856E6EFCEBECC4 * __this, const RuntimeMethod* method)
{
	{
		// get { return m_RootVisualElement; }
		VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * L_0 = __this->get_m_RootVisualElement_15();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * VisualElement_get_parent_m7FFF8FAC199A08AD6823836D7A784A45CC36CE17_inline (VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * __this, const RuntimeMethod* method)
{
	{
		// return m_LogicalParent;
		VisualElement_tB45F1CBA6214E9976DE66D7DECBC664E3C3A0909 * L_0 = __this->get_m_LogicalParent_52();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float UIDocument_get_sortingOrder_mFB0A6D9948BA436BFE9AE3D250E094F07FD14DE0_inline (UIDocument_t008D811860584F44CEBB5AF575856E6EFCEBECC4 * __this, const RuntimeMethod* method)
{
	{
		// get => m_SortingOrder;
		float L_0 = __this->get_m_SortingOrder_17();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t EventBase_1_TypeId_m925B239C6BF94489681CADA47A79DA6DA165D6F5_gshared_inline (const RuntimeMethod* method)
{
	{
		// return s_TypeId;
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		int64_t L_0 = ((EventBase_1_t103D09E981175BBC55643938B135F2609BA881F6_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0)))->get_s_TypeId_15();
		return (int64_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppChar KeyboardEventBase_1_get_character_mF073599DE98A92A428303EE5A2E483764745B440_gshared_inline (KeyboardEventBase_1_t69A112BDACF51D37126F2FA7FE5BAB6B7E3D4620 * __this, const RuntimeMethod* method)
{
	{
		// public char character { get; protected set; }
		Il2CppChar L_0 = (Il2CppChar)__this->get_U3CcharacterU3Ek__BackingField_19();
		return (Il2CppChar)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return (RuntimeObject *)L_0;
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
