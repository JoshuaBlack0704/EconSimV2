#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 Unity.Mathematics.float3 Unity.Mathematics.AABB::get_Size()
extern void AABB_get_Size_mC24611FA3F926B83E093EB43C988F2161EEEF2B6 (void);
// 0x00000002 System.String Unity.Mathematics.AABB::ToString()
extern void AABB_ToString_mF4238BD8CF433C2D609532EA3738D058BC9676BA (void);
// 0x00000003 Unity.Mathematics.float3 Unity.Mathematics.AABB::RotateExtents(Unity.Mathematics.float3,Unity.Mathematics.float3,Unity.Mathematics.float3,Unity.Mathematics.float3)
extern void AABB_RotateExtents_m4B4106EF83654312ED2A5301E4FEE53D606DD8AB (void);
// 0x00000004 Unity.Mathematics.AABB Unity.Mathematics.AABB::Transform(Unity.Mathematics.float4x4,Unity.Mathematics.AABB)
extern void AABB_Transform_m9286841F2B9F1949BCA8FB04B2B9A9F3763FFF96 (void);
// 0x00000005 Unity.Mathematics.MinMaxAABB Unity.Mathematics.MinMaxAABB::get_Empty()
extern void MinMaxAABB_get_Empty_mDD69C4BB0A6EC08F10CD2009CC7E59B00D209E61 (void);
// 0x00000006 System.Void Unity.Mathematics.MinMaxAABB::Encapsulate(Unity.Mathematics.MinMaxAABB)
extern void MinMaxAABB_Encapsulate_mC2E84BE52165FD2F5E78A60A8174EF949A2E557D (void);
// 0x00000007 Unity.Mathematics.MinMaxAABB Unity.Mathematics.MinMaxAABB::op_Implicit(Unity.Mathematics.AABB)
extern void MinMaxAABB_op_Implicit_m85A61DC6FC9748E8A7AEACDBB35E2CB64CAB669F (void);
// 0x00000008 Unity.Mathematics.AABB Unity.Mathematics.MinMaxAABB::op_Implicit(Unity.Mathematics.MinMaxAABB)
extern void MinMaxAABB_op_Implicit_mF2FA354DB11FB44F70F5C220E01C6DD04106E0B5 (void);
// 0x00000009 System.Boolean Unity.Mathematics.MinMaxAABB::Equals(Unity.Mathematics.MinMaxAABB)
extern void MinMaxAABB_Equals_mF13B59D5CBDDE52933361CB3A879D3BE4344F038 (void);
static Il2CppMethodPointer s_methodPointers[9] = 
{
	AABB_get_Size_mC24611FA3F926B83E093EB43C988F2161EEEF2B6,
	AABB_ToString_mF4238BD8CF433C2D609532EA3738D058BC9676BA,
	AABB_RotateExtents_m4B4106EF83654312ED2A5301E4FEE53D606DD8AB,
	AABB_Transform_m9286841F2B9F1949BCA8FB04B2B9A9F3763FFF96,
	MinMaxAABB_get_Empty_mDD69C4BB0A6EC08F10CD2009CC7E59B00D209E61,
	MinMaxAABB_Encapsulate_mC2E84BE52165FD2F5E78A60A8174EF949A2E557D,
	MinMaxAABB_op_Implicit_m85A61DC6FC9748E8A7AEACDBB35E2CB64CAB669F,
	MinMaxAABB_op_Implicit_mF2FA354DB11FB44F70F5C220E01C6DD04106E0B5,
	MinMaxAABB_Equals_mF13B59D5CBDDE52933361CB3A879D3BE4344F038,
};
extern void AABB_get_Size_mC24611FA3F926B83E093EB43C988F2161EEEF2B6_AdjustorThunk (void);
extern void AABB_ToString_mF4238BD8CF433C2D609532EA3738D058BC9676BA_AdjustorThunk (void);
extern void MinMaxAABB_Encapsulate_mC2E84BE52165FD2F5E78A60A8174EF949A2E557D_AdjustorThunk (void);
extern void MinMaxAABB_Equals_mF13B59D5CBDDE52933361CB3A879D3BE4344F038_AdjustorThunk (void);
static Il2CppTokenAdjustorThunkPair s_adjustorThunks[4] = 
{
	{ 0x06000001, AABB_get_Size_mC24611FA3F926B83E093EB43C988F2161EEEF2B6_AdjustorThunk },
	{ 0x06000002, AABB_ToString_mF4238BD8CF433C2D609532EA3738D058BC9676BA_AdjustorThunk },
	{ 0x06000006, MinMaxAABB_Encapsulate_mC2E84BE52165FD2F5E78A60A8174EF949A2E557D_AdjustorThunk },
	{ 0x06000009, MinMaxAABB_Equals_mF13B59D5CBDDE52933361CB3A879D3BE4344F038_AdjustorThunk },
};
static const int32_t s_InvokerIndices[9] = 
{
	8125,
	7949,
	10004,
	11270,
	13339,
	6393,
	13025,
	12843,
	5422,
};
extern const CustomAttributesCacheGenerator g_Unity_Mathematics_Extensions_AttributeGenerators[];
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_Unity_Mathematics_Extensions_CodeGenModule;
const Il2CppCodeGenModule g_Unity_Mathematics_Extensions_CodeGenModule = 
{
	"Unity.Mathematics.Extensions.dll",
	9,
	s_methodPointers,
	4,
	s_adjustorThunks,
	s_InvokerIndices,
	0,
	NULL,
	0,
	NULL,
	0,
	NULL,
	NULL,
	g_Unity_Mathematics_Extensions_AttributeGenerators,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
