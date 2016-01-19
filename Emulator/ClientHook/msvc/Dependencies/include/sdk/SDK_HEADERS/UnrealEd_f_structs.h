/*
#############################################################################################
# All Points Bulletin Reloaded (1.6) SDK
# Generated with TheFeckless UE3 SDK Generator v1.2_Beta-Rev.39
# ========================================================================================= #
# File: UnrealEd_f_structs.h
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

// Function UnrealEd.CurveEdPresetBase.GenerateCurveData
// [0x00420802] ( FUNC_Event )
struct UCurveEdPresetBase_eventGenerateCurveData_Parms
{
	TArray< float >                                    RequiredKeyInTimes;                               		// 0x0000 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	TArray< struct FPresetGeneratedPoint >             GeneratedPoints;                                  		// 0x000C (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function UnrealEd.CurveEdPresetBase.FetchRequiredKeyInTimes
// [0x00420802] ( FUNC_Event )
struct UCurveEdPresetBase_eventFetchRequiredKeyInTimes_Parms
{
	TArray< float >                                    RequiredKeyInTimes;                               		// 0x0000 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function UnrealEd.CurveEdPresetBase.CheckAreSettingsValid
// [0x00020802] ( FUNC_Event )
struct UCurveEdPresetBase_eventCheckAreSettingsValid_Parms
{
	unsigned long                                      bIsSaving : 1;                                    		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function UnrealEd.CurveEdPresetBase.FetchDisplayName
// [0x00420802] ( FUNC_Event )
struct UCurveEdPresetBase_eventFetchDisplayName_Parms
{
	struct FString                                     OutName;                                          		// 0x0000 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function UnrealEd.CurveEdPresetBase.GenerateCurve
// [0x00420002] 
struct UCurveEdPresetBase_execGenerateCurve_Parms
{
	TArray< float >                                    RequiredKeyInTimes;                               		// 0x0000 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	TArray< struct FPresetGeneratedPoint >             GeneratedPoints;                                  		// 0x000C (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// unsigned long                                   bRetval : 1;                                      		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function UnrealEd.CurveEdPresetBase.GetRequiredKeyInTimes
// [0x00420002] 
struct UCurveEdPresetBase_execGetRequiredKeyInTimes_Parms
{
	TArray< float >                                    RequiredKeyInTimes;                               		// 0x0000 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function UnrealEd.CurveEdPresetBase.AreSettingsValid
// [0x00020002] 
struct UCurveEdPresetBase_execAreSettingsValid_Parms
{
	unsigned long                                      bIsSaving : 1;                                    		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function UnrealEd.CurveEdPresetBase.GetDisplayName
// [0x00020002] 
struct UCurveEdPresetBase_execGetDisplayName_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
	// struct FString                                  retval;                                           		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function UnrealEd.CurveEdPreset_CosWave.GenerateCurve
// [0x00420002] 
struct UCurveEdPreset_CosWave_execGenerateCurve_Parms
{
	TArray< float >                                    RequiredKeyInTimes;                               		// 0x0000 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	TArray< struct FPresetGeneratedPoint >             GeneratedPoints;                                  		// 0x000C (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// unsigned long                                   bRetval : 1;                                      		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
	// int                                             GenerateCount;                                    		// 0x0020 (0x0004) [0x0000000000000000]              
	// int                                             PointIndex;                                       		// 0x0024 (0x0004) [0x0000000000000000]              
	// float                                           Freq;                                             		// 0x0028 (0x0004) [0x0000000000000000]              
	// float                                           SourceValue;                                      		// 0x002C (0x0004) [0x0000000000000000]              
};

// Function UnrealEd.CurveEdPreset_CosWave.GetRequiredKeyInTimes
// [0x00420002] 
struct UCurveEdPreset_CosWave_execGetRequiredKeyInTimes_Parms
{
	TArray< float >                                    RequiredKeyInTimes;                               		// 0x0000 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// unsigned long                                   bRetval : 1;                                      		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	// int                                             GenerateCount;                                    		// 0x0014 (0x0004) [0x0000000000000000]              
	// int                                             PointIndex;                                       		// 0x0018 (0x0004) [0x0000000000000000]              
	// float                                           StepSize;                                         		// 0x001C (0x0004) [0x0000000000000000]              
	// float                                           Freq;                                             		// 0x0020 (0x0004) [0x0000000000000000]              
	// float                                           SourceValue;                                      		// 0x0024 (0x0004) [0x0000000000000000]              
};

// Function UnrealEd.CurveEdPreset_CosWave.AreSettingsValid
// [0x00020002] 
struct UCurveEdPreset_CosWave_execAreSettingsValid_Parms
{
	unsigned long                                      bIsSaving : 1;                                    		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function UnrealEd.CurveEdPreset_CosWave.GetDisplayName
// [0x00020002] 
struct UCurveEdPreset_CosWave_execGetDisplayName_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
	// struct FString                                  retval;                                           		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function UnrealEd.CurveEdPreset_LinearDecay.GenerateCurve
// [0x00420002] 
struct UCurveEdPreset_LinearDecay_execGenerateCurve_Parms
{
	TArray< float >                                    RequiredKeyInTimes;                               		// 0x0000 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	TArray< struct FPresetGeneratedPoint >             GeneratedPoints;                                  		// 0x000C (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// unsigned long                                   bRetval : 1;                                      		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
	// int                                             GenerateCount;                                    		// 0x0020 (0x0004) [0x0000000000000000]              
	// int                                             PointCount;                                       		// 0x0024 (0x0004) [0x0000000000000000]              
	// float                                           CurrentKeyIn;                                     		// 0x0028 (0x0004) [0x0000000000000000]              
	// float                                           Difference;                                       		// 0x002C (0x0004) [0x0000000000000000]              
	// float                                           Alpha;                                            		// 0x0030 (0x0004) [0x0000000000000000]              
};

// Function UnrealEd.CurveEdPreset_LinearDecay.GetRequiredKeyInTimes
// [0x00420002] 
struct UCurveEdPreset_LinearDecay_execGetRequiredKeyInTimes_Parms
{
	TArray< float >                                    RequiredKeyInTimes;                               		// 0x0000 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// unsigned long                                   bRetval : 1;                                      		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	// int                                             GenerateCount;                                    		// 0x0014 (0x0004) [0x0000000000000000]              
	// int                                             PointCount;                                       		// 0x0018 (0x0004) [0x0000000000000000]              
};

// Function UnrealEd.CurveEdPreset_LinearDecay.AreSettingsValid
// [0x00020002] 
struct UCurveEdPreset_LinearDecay_execAreSettingsValid_Parms
{
	unsigned long                                      bIsSaving : 1;                                    		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function UnrealEd.CurveEdPreset_LinearDecay.GetDisplayName
// [0x00020002] 
struct UCurveEdPreset_LinearDecay_execGetDisplayName_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
	// struct FString                                  retval;                                           		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function UnrealEd.CurveEdPreset_Nothing.GetDisplayName
// [0x00020002] 
struct UCurveEdPreset_Nothing_execGetDisplayName_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
	// struct FString                                  retval;                                           		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function UnrealEd.CurveEdPreset_SineWave.GenerateCurve
// [0x00420002] 
struct UCurveEdPreset_SineWave_execGenerateCurve_Parms
{
	TArray< float >                                    RequiredKeyInTimes;                               		// 0x0000 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	TArray< struct FPresetGeneratedPoint >             GeneratedPoints;                                  		// 0x000C (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// unsigned long                                   bRetval : 1;                                      		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
	// int                                             GenerateCount;                                    		// 0x0020 (0x0004) [0x0000000000000000]              
	// int                                             PointIndex;                                       		// 0x0024 (0x0004) [0x0000000000000000]              
	// float                                           Freq;                                             		// 0x0028 (0x0004) [0x0000000000000000]              
	// float                                           SourceValue;                                      		// 0x002C (0x0004) [0x0000000000000000]              
};

// Function UnrealEd.CurveEdPreset_SineWave.GetRequiredKeyInTimes
// [0x00420002] 
struct UCurveEdPreset_SineWave_execGetRequiredKeyInTimes_Parms
{
	TArray< float >                                    RequiredKeyInTimes;                               		// 0x0000 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// unsigned long                                   bRetval : 1;                                      		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	// int                                             GenerateCount;                                    		// 0x0014 (0x0004) [0x0000000000000000]              
	// int                                             PointIndex;                                       		// 0x0018 (0x0004) [0x0000000000000000]              
	// float                                           StepSize;                                         		// 0x001C (0x0004) [0x0000000000000000]              
	// float                                           Freq;                                             		// 0x0020 (0x0004) [0x0000000000000000]              
	// float                                           SourceValue;                                      		// 0x0024 (0x0004) [0x0000000000000000]              
};

// Function UnrealEd.CurveEdPreset_SineWave.AreSettingsValid
// [0x00020002] 
struct UCurveEdPreset_SineWave_execAreSettingsValid_Parms
{
	unsigned long                                      bIsSaving : 1;                                    		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function UnrealEd.CurveEdPreset_SineWave.GetDisplayName
// [0x00020002] 
struct UCurveEdPreset_SineWave_execGetDisplayName_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
	// struct FString                                  retval;                                           		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function UnrealEd.CurveEdPreset_UserSet.SaveUserSetPointFile
// [0x00020002] 
struct UCurveEdPreset_UserSet_execSaveUserSetPointFile_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// unsigned long                                   bRetval : 1;                                      		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function UnrealEd.CurveEdPreset_UserSet.LoadUserSetPointFile
// [0x00020002] 
struct UCurveEdPreset_UserSet_execLoadUserSetPointFile_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// unsigned long                                   bRetval : 1;                                      		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function UnrealEd.CurveEdPreset_UserSet.SetCurve
// [0x00020002] 
struct UCurveEdPreset_UserSet_execSetCurve_Parms
{
	TArray< struct FPresetGeneratedPoint >             GeneratedPoints;                                  		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// unsigned long                                   bRetval : 1;                                      		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function UnrealEd.CurveEdPreset_UserSet.GenerateCurve
// [0x00420002] 
struct UCurveEdPreset_UserSet_execGenerateCurve_Parms
{
	TArray< float >                                    RequiredKeyInTimes;                               		// 0x0000 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	TArray< struct FPresetGeneratedPoint >             GeneratedPoints;                                  		// 0x000C (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// unsigned long                                   bRetval : 1;                                      		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
	// int                                             GenerateCount;                                    		// 0x0020 (0x0004) [0x0000000000000000]              
	// int                                             PointCount;                                       		// 0x0024 (0x0004) [0x0000000000000000]              
	// float                                           CurrentKeyIn;                                     		// 0x0028 (0x0004) [0x0000000000000000]              
};

// Function UnrealEd.CurveEdPreset_UserSet.GetRequiredKeyInTimes
// [0x00420002] 
struct UCurveEdPreset_UserSet_execGetRequiredKeyInTimes_Parms
{
	TArray< float >                                    RequiredKeyInTimes;                               		// 0x0000 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// unsigned long                                   bRetval : 1;                                      		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	// int                                             GenerateCount;                                    		// 0x0014 (0x0004) [0x0000000000000000]              
	// int                                             PointCount;                                       		// 0x0018 (0x0004) [0x0000000000000000]              
};

// Function UnrealEd.CurveEdPreset_UserSet.AreSettingsValid
// [0x00020002] 
struct UCurveEdPreset_UserSet_execAreSettingsValid_Parms
{
	unsigned long                                      bIsSaving : 1;                                    		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function UnrealEd.CurveEdPreset_UserSet.GetDisplayName
// [0x00020002] 
struct UCurveEdPreset_UserSet_execGetDisplayName_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
	// struct FString                                  retval;                                           		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function UnrealEd.EditorUISceneClient.ShowDockingStacks
// [0x00020202] ( FUNC_Exec )
struct UEditorUISceneClient_execShowDockingStacks_Parms
{
};

// Function UnrealEd.UISceneManager.GetSupportedUIStates
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct UUISceneManager_execGetSupportedUIStates_Parms
{
	TArray< struct FUIStateResourceInfo >              out_SupportedStates;                              		// 0x0000 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	class UClass*                                      WidgetClass;                                      		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function UnrealEd.UILayer.FindNodeIndex
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UUILayer_execFindNodeIndex_Parms
{
	class UObject*                                     NodeObject;                                       		// 0x0000 (0x0004) [0x0000000000000082]              ( CPF_Const | CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function UnrealEd.UILayer.RemoveNode
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct UUILayer_execRemoveNode_Parms
{
	struct FUILayerNode                                ExistingNode;                                     		// 0x0000 (0x000C) [0x0000000000000182]              ( CPF_Const | CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function UnrealEd.UILayer.InsertNode
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct UUILayer_execInsertNode_Parms
{
	struct FUILayerNode                                NodeToInsert;                                     		// 0x0000 (0x000C) [0x0000000000000182]              ( CPF_Const | CPF_Parm | CPF_OutParm )
	int                                                InsertIndex;                                      		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif