/*
#############################################################################################
# All Points Bulletin Reloaded (1.6) SDK
# Generated with TheFeckless UE3 SDK Generator v1.2_Beta-Rev.39
# ========================================================================================= #
# File: APBEditor_f_structs.h
# ========================================================================================= #
# Credits: uNrEaL, Tamimego, SystemFiles, R00T88, _silencer, the1domo, K@N@VEL
# Thanks: HOOAH07, lowHertz
# Forums: www.uc-forum.com, www.gamedeception.net	
#############################################################################################
*/

#ifdef _MSC_VER
	#pragma pack ( push, 0x4 )
#endif

/*
# ========================================================================================= #
# Function Structs
# ========================================================================================= #
*/

// Function APBEditor.CullDistanceCheckCommandlet.Main
// [0x00020C00] ( FUNC_Event | FUNC_Native )
struct UCullDistanceCheckCommandlet_eventMain_Parms
{
	struct FString                                     Params;                                           		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBEditor.EnableNeverStreamCommandlet.Main
// [0x00020C00] ( FUNC_Event | FUNC_Native )
struct UEnableNeverStreamCommandlet_eventMain_Parms
{
	struct FString                                     Params;                                           		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBEditor.FixDesignsScaleCommandlet.Main
// [0x00020C00] ( FUNC_Event | FUNC_Native )
struct UFixDesignsScaleCommandlet_eventMain_Parms
{
	struct FString                                     Params;                                           		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBEditor.RemoveEditorOnlyDataCommandlet.Main
// [0x00020C00] ( FUNC_Event | FUNC_Native )
struct URemoveEditorOnlyDataCommandlet_eventMain_Parms
{
	struct FString                                     Params;                                           		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBEditor.RWTechImportersCommandlet.Main
// [0x00020C00] ( FUNC_Event | FUNC_Native )
struct URWTechImportersCommandlet_eventMain_Parms
{
	struct FString                                     Params;                                           		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBEditor.RWTechImportersNonUCCCommandlet.Main
// [0x00020C00] ( FUNC_Event | FUNC_Native )
struct URWTechImportersNonUCCCommandlet_eventMain_Parms
{
	struct FString                                     Params;                                           		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBEditor.SetBakedVehicleTextures.Main
// [0x00020C00] ( FUNC_Event | FUNC_Native )
struct USetBakedVehicleTextures_eventMain_Parms
{
	struct FString                                     Params;                                           		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBEditor.SetBakedVehicleTextures.SetLODBias
// [0x00020400] ( FUNC_Native )
struct USetBakedVehicleTextures_execSetLODBias_Parms
{
	class UTexture2D*                                  Tex;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     textureTypeName;                                  		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function APBEditor.SetSkeletalMeshAttributeCommandlet.Main
// [0x00020C00] ( FUNC_Event | FUNC_Native )
struct USetSkeletalMeshAttributeCommandlet_eventMain_Parms
{
	struct FString                                     Params;                                           		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBEditor.SetTextureAttributeCommandlet.Main
// [0x00020C00] ( FUNC_Event | FUNC_Native )
struct USetTextureAttributeCommandlet_eventMain_Parms
{
	struct FString                                     Params;                                           		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBEditor.VehicleMask.SetTemplate
// [0x00020400] ( FUNC_Native )
struct UVehicleMask_execSetTemplate_Parms
{
	class UVehicleMaskTemplate*                        InTemplate;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif