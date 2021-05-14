#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.Void Unity.Jobs.EarlyInitHelpers::FlushEarlyInits()
extern void EarlyInitHelpers_FlushEarlyInits_m082E16DA31C25F6CEBEED0BD5F1C439FE550F41B (void);
// 0x00000002 System.Void Unity.Jobs.EarlyInitHelpers::AddEarlyInitFunction(Unity.Jobs.EarlyInitHelpers/EarlyInitFunction)
extern void EarlyInitHelpers_AddEarlyInitFunction_mB9B6B3AC2403493E6FA23E93003120926706BB84 (void);
// 0x00000003 System.Void Unity.Jobs.EarlyInitHelpers::JobReflectionDataCreationFailed(System.Exception,System.Type)
extern void EarlyInitHelpers_JobReflectionDataCreationFailed_mAE6F9C45C0E5F2AA786D9BF998F912664515F459 (void);
// 0x00000004 System.Void Unity.Jobs.EarlyInitHelpers/EarlyInitFunction::.ctor(System.Object,System.IntPtr)
extern void EarlyInitFunction__ctor_mCCCD0FA51D476FCF4EE7740313369E1F186D06D4 (void);
// 0x00000005 System.Void Unity.Jobs.EarlyInitHelpers/EarlyInitFunction::Invoke()
extern void EarlyInitFunction_Invoke_mBF04EDE92DED1D95AED8898D7EFD1C42BAD15C03 (void);
// 0x00000006 System.IAsyncResult Unity.Jobs.EarlyInitHelpers/EarlyInitFunction::BeginInvoke(System.AsyncCallback,System.Object)
extern void EarlyInitFunction_BeginInvoke_mDC85CF934D3D5D8B9AD38E5C9A3DE806FC80453E (void);
// 0x00000007 System.Void Unity.Jobs.EarlyInitHelpers/EarlyInitFunction::EndInvoke(System.IAsyncResult)
extern void EarlyInitFunction_EndInvoke_m43C558EE44D8F62D5DD5572DC34C3CE9F28615F0 (void);
static Il2CppMethodPointer s_methodPointers[7] = 
{
	EarlyInitHelpers_FlushEarlyInits_m082E16DA31C25F6CEBEED0BD5F1C439FE550F41B,
	EarlyInitHelpers_AddEarlyInitFunction_mB9B6B3AC2403493E6FA23E93003120926706BB84,
	EarlyInitHelpers_JobReflectionDataCreationFailed_mAE6F9C45C0E5F2AA786D9BF998F912664515F459,
	EarlyInitFunction__ctor_mCCCD0FA51D476FCF4EE7740313369E1F186D06D4,
	EarlyInitFunction_Invoke_mBF04EDE92DED1D95AED8898D7EFD1C42BAD15C03,
	EarlyInitFunction_BeginInvoke_mDC85CF934D3D5D8B9AD38E5C9A3DE806FC80453E,
	EarlyInitFunction_EndInvoke_m43C558EE44D8F62D5DD5572DC34C3CE9F28615F0,
};
static const int32_t s_InvokerIndices[7] = 
{
	13372,
	13217,
	12506,
	3294,
	8110,
	2072,
	6396,
};
extern const CustomAttributesCacheGenerator g_Unity_Jobs_AttributeGenerators[];
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_Unity_Jobs_CodeGenModule;
const Il2CppCodeGenModule g_Unity_Jobs_CodeGenModule = 
{
	"Unity.Jobs.dll",
	7,
	s_methodPointers,
	0,
	NULL,
	s_InvokerIndices,
	0,
	NULL,
	0,
	NULL,
	0,
	NULL,
	NULL,
	g_Unity_Jobs_AttributeGenerators,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
