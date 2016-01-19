/*
#############################################################################################
# All Points Bulletin Reloaded (1.6) SDK
# Generated with TheFeckless UE3 SDK Generator v1.2_Beta-Rev.39
# ========================================================================================= #
# File: UnrealEd_classes.h
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
# Constants
# ========================================================================================= #
*/

#define CONST_AUTOEXPAND_VALUE                                   0

/*
# ========================================================================================= #
# Enums
# ========================================================================================= #
*/

// Enum UnrealEd.ThumbnailManager.EThumbnailPrimType
/*enum EThumbnailPrimType
{
	TPT_None                                           = 0,
	TPT_Sphere                                         = 1,
	TPT_Cube                                           = 2,
	TPT_Plane                                          = 3,
	TPT_Cylinder                                       = 4,
	TPT_MAX                                            = 5
};*/

// Enum UnrealEd.ThumbnailManager.EThumbnailBackgroundType
/*enum EThumbnailBackgroundType
{
	TBT_None                                           = 0,
	TBT_DefaultBackground                              = 1,
	TBT_SolidBackground                                = 2,
	TBT_MAX                                            = 3
};*/


/*
# ========================================================================================= #
# Classes
# ========================================================================================= #
*/

// Class UnrealEd.AnimNodeEditInfo
// 0x0004 (0x0044 - 0x0040)
class UAnimNodeEditInfo : public UObject
{
public:
	class UClass*                                      AnimNodeClass;                                    		// 0x0040 (0x0004) [0x0000000000000002]              ( CPF_Const )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class UnrealEd.AnimNodeEditInfo" );

		return pClassPointer;
	};

};

UClass* UAnimNodeEditInfo::pClassPointer = NULL;

// Class UnrealEd.AnimNodeEditInfo_AimOffset
// 0x0010 (0x0054 - 0x0044)
class UAnimNodeEditInfo_AimOffset : public UAnimNodeEditInfo
{
public:
	struct FPointer                                    VfTable_cAnimAimOffsetEditorInterface;            		// 0x0044 (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	struct FPointer                                    EditWindow;                                       		// 0x0048 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	struct FPointer                                    AnimTreeEditor;                                   		// 0x004C (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	class UAnimNodeAimOffset*                          EditNode;                                         		// 0x0050 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class UnrealEd.AnimNodeEditInfo_AimOffset" );

		return pClassPointer;
	};

};

UClass* UAnimNodeEditInfo_AimOffset::pClassPointer = NULL;

// Class UnrealEd.ThumbnailLabelRenderer
// 0x0000 (0x0040 - 0x0040)
class UThumbnailLabelRenderer : public UObject
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class UnrealEd.ThumbnailLabelRenderer" );

		return pClassPointer;
	};

};

UClass* UThumbnailLabelRenderer::pClassPointer = NULL;

// Class UnrealEd.AnimSetLabelRenderer
// 0x0000 (0x0040 - 0x0040)
class UAnimSetLabelRenderer : public UThumbnailLabelRenderer
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class UnrealEd.AnimSetLabelRenderer" );

		return pClassPointer;
	};

};

UClass* UAnimSetLabelRenderer::pClassPointer = NULL;

// Class UnrealEd.AnimTreeEdSkelComponent
// 0x0004 (0x04AC - 0x04A8)
class UAnimTreeEdSkelComponent : public USkeletalMeshComponent
{
public:
	struct FPointer                                    AnimTreeEdPtr;                                    		// 0x04A8 (0x0004) [0x0000000000003002]              ( CPF_Const | CPF_Native | CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class UnrealEd.AnimTreeEdSkelComponent" );

		return pClassPointer;
	};

};

UClass* UAnimTreeEdSkelComponent::pClassPointer = NULL;

// Class UnrealEd.AnimTreeLabelRenderer
// 0x0000 (0x0040 - 0x0040)
class UAnimTreeLabelRenderer : public UThumbnailLabelRenderer
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class UnrealEd.AnimTreeLabelRenderer" );

		return pClassPointer;
	};

};

UClass* UAnimTreeLabelRenderer::pClassPointer = NULL;

// Class UnrealEd.ThumbnailRenderer
// 0x0000 (0x0040 - 0x0040)
class UThumbnailRenderer : public UObject
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class UnrealEd.ThumbnailRenderer" );

		return pClassPointer;
	};

};

UClass* UThumbnailRenderer::pClassPointer = NULL;

// Class UnrealEd.IconThumbnailRenderer
// 0x0010 (0x0050 - 0x0040)
class UIconThumbnailRenderer : public UThumbnailRenderer
{
public:
	struct FString                                     IconName;                                         		// 0x0040 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UTexture2D*                                  Icon;                                             		// 0x004C (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class UnrealEd.IconThumbnailRenderer" );

		return pClassPointer;
	};

};

UClass* UIconThumbnailRenderer::pClassPointer = NULL;

// Class UnrealEd.ArchetypeThumbnailRenderer
// 0x0000 (0x0050 - 0x0050)
class UArchetypeThumbnailRenderer : public UIconThumbnailRenderer
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class UnrealEd.ArchetypeThumbnailRenderer" );

		return pClassPointer;
	};

};

UClass* UArchetypeThumbnailRenderer::pClassPointer = NULL;

// Class UnrealEd.ASVSkelComponent
// 0x000C (0x04B4 - 0x04A8)
class UASVSkelComponent : public USkeletalMeshComponent
{
public:
	struct FPointer                                    AnimSetViewerPtr;                                 		// 0x04A8 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	unsigned long                                      bRenderRawSkeleton : 1;                           		// 0x04AC (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bShowSoftBodyTetra : 1;                           		// 0x04AC (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bDrawMesh : 1;                                    		// 0x04AC (0x0004) [0x0000000000000000] [0x00000004] 
	struct FColor                                      BoneColor;                                        		// 0x04B0 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class UnrealEd.ASVSkelComponent" );

		return pClassPointer;
	};

};

UClass* UASVSkelComponent::pClassPointer = NULL;

// Class UnrealEd.BrowserManager
// 0x0024 (0x0064 - 0x0040)
class UBrowserManager : public UObject
{
public:
	TArray< struct FBrowserPaneInfo >                  BrowserPanes;                                     		// 0x0040 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	unsigned long                                      bHasCreatedPanes : 1;                             		// 0x004C (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                LastSelectedPaneID;                               		// 0x0050 (0x0004) [0x0000000000004000]              ( CPF_Config )
	struct FPointer                                    DockingContainerPtr;                              		// 0x0054 (0x0004) [0x0000000000002002]              ( CPF_Const | CPF_Transient )
	struct FPointer                                    FloatingWindowsArrayPtr;                          		// 0x0058 (0x0004) [0x0000000000002002]              ( CPF_Const | CPF_Transient )
	struct FPointer                                    BrowserMenuPtr;                                   		// 0x005C (0x0004) [0x0000000000002002]              ( CPF_Const | CPF_Transient )
	class UUISceneManager*                             UISceneManager;                                   		// 0x0060 (0x0004) [0x0000000000002002]              ( CPF_Const | CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class UnrealEd.BrowserManager" );

		return pClassPointer;
	};

};

UClass* UBrowserManager::pClassPointer = NULL;

// Class UnrealEd.CascadeOptions
// 0x00CC (0x010C - 0x0040)
class UCascadeOptions : public UObject
{
public:
	unsigned long                                      bShowModuleDump : 1;                              		// 0x0040 (0x0004) [0x0000000000004001] [0x00000001] ( CPF_Edit | CPF_Config )
	unsigned long                                      bUseSubMenus : 1;                                 		// 0x0040 (0x0004) [0x0000000000004001] [0x00000002] ( CPF_Edit | CPF_Config )
	unsigned long                                      bUseSpaceBarReset : 1;                            		// 0x0040 (0x0004) [0x0000000000004001] [0x00000004] ( CPF_Edit | CPF_Config )
	unsigned long                                      bUseSpaceBarResetInLevel : 1;                     		// 0x0040 (0x0004) [0x0000000000004001] [0x00000008] ( CPF_Edit | CPF_Config )
	unsigned long                                      bShowGrid : 1;                                    		// 0x0040 (0x0004) [0x0000000000004001] [0x00000010] ( CPF_Edit | CPF_Config )
	unsigned long                                      bShowParticleCounts : 1;                          		// 0x0040 (0x0004) [0x0000000000004001] [0x00000020] ( CPF_Edit | CPF_Config )
	unsigned long                                      bShowParticleEvents : 1;                          		// 0x0040 (0x0004) [0x0000000000004001] [0x00000040] ( CPF_Edit | CPF_Config )
	unsigned long                                      bShowParticleTimes : 1;                           		// 0x0040 (0x0004) [0x0000000000004001] [0x00000080] ( CPF_Edit | CPF_Config )
	unsigned long                                      bShowParticleDistance : 1;                        		// 0x0040 (0x0004) [0x0000000000004001] [0x00000100] ( CPF_Edit | CPF_Config )
	unsigned long                                      bShowFloor : 1;                                   		// 0x0040 (0x0004) [0x0000000000004001] [0x00000200] ( CPF_Edit | CPF_Config )
	unsigned long                                      bUseSlimCascadeDraw : 1;                          		// 0x0040 (0x0004) [0x0000000000004001] [0x00000400] ( CPF_Edit | CPF_Config )
	unsigned long                                      bCenterCascadeModuleText : 1;                     		// 0x0040 (0x0004) [0x0000000000004001] [0x00000800] ( CPF_Edit | CPF_Config )
	struct FColor                                      BackgroundColor;                                  		// 0x0044 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	struct FColor                                      Empty_Background;                                 		// 0x0048 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	struct FColor                                      Emitter_Background;                               		// 0x004C (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	struct FColor                                      Emitter_Unselected;                               		// 0x0050 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	struct FColor                                      Emitter_Selected;                                 		// 0x0054 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	struct FColor                                      ModuleColor_General_Unselected;                   		// 0x0058 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	struct FColor                                      ModuleColor_General_Selected;                     		// 0x005C (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	struct FColor                                      ModuleColor_TypeData_Unselected;                  		// 0x0060 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	struct FColor                                      ModuleColor_TypeData_Selected;                    		// 0x0064 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	struct FColor                                      ModuleColor_Beam_Unselected;                      		// 0x0068 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	struct FColor                                      ModuleColor_Beam_Selected;                        		// 0x006C (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	struct FColor                                      ModuleColor_Trail_Unselected;                     		// 0x0070 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	struct FColor                                      ModuleColor_Trail_Selected;                       		// 0x0074 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	struct FColor                                      ModuleColor_Spawn_Unselected;                     		// 0x0078 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	struct FColor                                      ModuleColor_Spawn_Selected;                       		// 0x007C (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	struct FColor                                      ModuleColor_Required_Unselected;                  		// 0x0080 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	struct FColor                                      ModuleColor_Required_Selected;                    		// 0x0084 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	struct FColor                                      ModuleColor_Event_Unselected;                     		// 0x0088 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	struct FColor                                      ModuleColor_Event_Selected;                       		// 0x008C (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	struct FColor                                      GridColor_Hi;                                     		// 0x0090 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	struct FColor                                      GridColor_Low;                                    		// 0x0094 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	float                                              GridPerspectiveSize;                              		// 0x0098 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	struct FString                                     FloorMesh;                                        		// 0x009C (0x000C) [0x0000000000404001]              ( CPF_Edit | CPF_Config | CPF_NeedCtorLink )
	struct FVector                                     FloorPosition;                                    		// 0x00A8 (0x000C) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	struct FRotator                                    FloorRotation;                                    		// 0x00B4 (0x000C) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	float                                              FloorScale;                                       		// 0x00C0 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	struct FVector                                     FloorScale3D;                                     		// 0x00C4 (0x000C) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	struct FString                                     PostProcessChainName;                             		// 0x00D0 (0x000C) [0x0000000000404001]              ( CPF_Edit | CPF_Config | CPF_NeedCtorLink )
	int                                                ShowPPFlags;                                      		// 0x00DC (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	int                                                SlimCascadeDrawHeight;                            		// 0x00E0 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	int                                                Cascade_MouseMoveThreshold;                       		// 0x00E4 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	TArray< struct FModuleMenuMapper >                 ModuleMenu_TypeDataToBaseModuleRejections;        		// 0x00E8 (0x000C) [0x0000000000404001]              ( CPF_Edit | CPF_Config | CPF_NeedCtorLink )
	TArray< struct FModuleMenuMapper >                 ModuleMenu_TypeDataToSpecificModuleRejections;    		// 0x00F4 (0x000C) [0x0000000000404001]              ( CPF_Edit | CPF_Config | CPF_NeedCtorLink )
	TArray< struct FString >                           ModuleMenu_ModuleRejections;                      		// 0x0100 (0x000C) [0x0000000000404001]              ( CPF_Edit | CPF_Config | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class UnrealEd.CascadeOptions" );

		return pClassPointer;
	};

};

UClass* UCascadeOptions::pClassPointer = NULL;

// Class UnrealEd.CascadePreviewComponent
// 0x0004 (0x01DC - 0x01D8)
class UCascadePreviewComponent : public UPrimitiveComponent
{
public:
	struct FPointer                                    CascadePtr;                                       		// 0x01D8 (0x0004) [0x0000000000003002]              ( CPF_Const | CPF_Native | CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class UnrealEd.CascadePreviewComponent" );

		return pClassPointer;
	};

};

UClass* UCascadePreviewComponent::pClassPointer = NULL;

// Class UnrealEd.CurveEdOptions
// 0x0078 (0x00B8 - 0x0040)
class UCurveEdOptions : public UObject
{
public:
	float                                              MinViewRange;                                     		// 0x0040 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	float                                              MaxViewRange;                                     		// 0x0044 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	struct FLinearColor                                BackgroundColor;                                  		// 0x0048 (0x0010) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	struct FLinearColor                                LabelColor;                                       		// 0x0058 (0x0010) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	struct FLinearColor                                SelectedLabelColor;                               		// 0x0068 (0x0010) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	struct FLinearColor                                GridColor;                                        		// 0x0078 (0x0010) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	struct FLinearColor                                GridTextColor;                                    		// 0x0088 (0x0010) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	struct FLinearColor                                LabelBlockBkgColor;                               		// 0x0098 (0x0010) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	struct FLinearColor                                SelectedKeyColor;                                 		// 0x00A8 (0x0010) [0x0000000000004001]              ( CPF_Edit | CPF_Config )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class UnrealEd.CurveEdOptions" );

		return pClassPointer;
	};

};

UClass* UCurveEdOptions::pClassPointer = NULL;

// Class UnrealEd.CurveEdPresetBase
// 0x0000 (0x0040 - 0x0040)
class UCurveEdPresetBase : public UObject
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class UnrealEd.CurveEdPresetBase" );

		return pClassPointer;
	};

	bool eventGenerateCurveData ( TArray< float >* RequiredKeyInTimes, TArray< struct FPresetGeneratedPoint >* GeneratedPoints );
	bool eventFetchRequiredKeyInTimes ( TArray< float >* RequiredKeyInTimes );
	bool eventCheckAreSettingsValid ( unsigned long bIsSaving );
	void eventFetchDisplayName ( struct FString* OutName );
	bool GenerateCurve ( TArray< float >* RequiredKeyInTimes, TArray< struct FPresetGeneratedPoint >* GeneratedPoints );
	bool GetRequiredKeyInTimes ( TArray< float >* RequiredKeyInTimes );
	bool AreSettingsValid ( unsigned long bIsSaving );
	struct FString GetDisplayName ( );
};

UClass* UCurveEdPresetBase::pClassPointer = NULL;

// Class UnrealEd.CurveEdPreset_CosWave
// 0x000C (0x004C - 0x0040)
class UCurveEdPreset_CosWave : public UCurveEdPresetBase
{
public:
	float                                              Frequency;                                        		// 0x0040 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Scale;                                            		// 0x0044 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Offset;                                           		// 0x0048 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class UnrealEd.CurveEdPreset_CosWave" );

		return pClassPointer;
	};

	bool GenerateCurve ( TArray< float >* RequiredKeyInTimes, TArray< struct FPresetGeneratedPoint >* GeneratedPoints );
	bool GetRequiredKeyInTimes ( TArray< float >* RequiredKeyInTimes );
	bool AreSettingsValid ( unsigned long bIsSaving );
	struct FString GetDisplayName ( );
};

UClass* UCurveEdPreset_CosWave::pClassPointer = NULL;

// Class UnrealEd.CurveEdPreset_LinearDecay
// 0x0010 (0x0050 - 0x0040)
class UCurveEdPreset_LinearDecay : public UCurveEdPresetBase
{
public:
	float                                              StartDecay;                                       		// 0x0040 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              StartValue;                                       		// 0x0044 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              EndDecay;                                         		// 0x0048 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              EndValue;                                         		// 0x004C (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class UnrealEd.CurveEdPreset_LinearDecay" );

		return pClassPointer;
	};

	bool GenerateCurve ( TArray< float >* RequiredKeyInTimes, TArray< struct FPresetGeneratedPoint >* GeneratedPoints );
	bool GetRequiredKeyInTimes ( TArray< float >* RequiredKeyInTimes );
	bool AreSettingsValid ( unsigned long bIsSaving );
	struct FString GetDisplayName ( );
};

UClass* UCurveEdPreset_LinearDecay::pClassPointer = NULL;

// Class UnrealEd.CurveEdPreset_Nothing
// 0x0000 (0x0040 - 0x0040)
class UCurveEdPreset_Nothing : public UCurveEdPresetBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class UnrealEd.CurveEdPreset_Nothing" );

		return pClassPointer;
	};

	struct FString GetDisplayName ( );
};

UClass* UCurveEdPreset_Nothing::pClassPointer = NULL;

// Class UnrealEd.CurveEdPreset_SineWave
// 0x000C (0x004C - 0x0040)
class UCurveEdPreset_SineWave : public UCurveEdPresetBase
{
public:
	float                                              Frequency;                                        		// 0x0040 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Scale;                                            		// 0x0044 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Offset;                                           		// 0x0048 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class UnrealEd.CurveEdPreset_SineWave" );

		return pClassPointer;
	};

	bool GenerateCurve ( TArray< float >* RequiredKeyInTimes, TArray< struct FPresetGeneratedPoint >* GeneratedPoints );
	bool GetRequiredKeyInTimes ( TArray< float >* RequiredKeyInTimes );
	bool AreSettingsValid ( unsigned long bIsSaving );
	struct FString GetDisplayName ( );
};

UClass* UCurveEdPreset_SineWave::pClassPointer = NULL;

// Class UnrealEd.CurveEdPreset_UserSet
// 0x0004 (0x0044 - 0x0040)
class UCurveEdPreset_UserSet : public UCurveEdPresetBase
{
public:
	class UCurveEdPresetCurve*                         UserCurve;                                        		// 0x0040 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class UnrealEd.CurveEdPreset_UserSet" );

		return pClassPointer;
	};

	bool SaveUserSetPointFile ( );
	bool LoadUserSetPointFile ( );
	bool SetCurve ( TArray< struct FPresetGeneratedPoint > GeneratedPoints );
	bool GenerateCurve ( TArray< float >* RequiredKeyInTimes, TArray< struct FPresetGeneratedPoint >* GeneratedPoints );
	bool GetRequiredKeyInTimes ( TArray< float >* RequiredKeyInTimes );
	bool AreSettingsValid ( unsigned long bIsSaving );
	struct FString GetDisplayName ( );
};

UClass* UCurveEdPreset_UserSet::pClassPointer = NULL;

// Class UnrealEd.PropertyInputProxy
// 0x0010 (0x0050 - 0x0040)
class UPropertyInputProxy : public UObject
{
public:
	unsigned char                                      UnknownData00[ 0x10 ];                            		// 0x0040 (0x0010) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class UnrealEd.PropertyInputProxy" );

		return pClassPointer;
	};

};

UClass* UPropertyInputProxy::pClassPointer = NULL;

// Class UnrealEd.CustomInputProxy_Base
// 0x0004 (0x0054 - 0x0050)
class UCustomInputProxy_Base : public UPropertyInputProxy
{
public:
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0050 (0x0004) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class UnrealEd.CustomInputProxy_Base" );

		return pClassPointer;
	};

};

UClass* UCustomInputProxy_Base::pClassPointer = NULL;

// Class UnrealEd.DefaultSizedThumbnailRenderer
// 0x0008 (0x0048 - 0x0040)
class UDefaultSizedThumbnailRenderer : public UThumbnailRenderer
{
public:
	int                                                DefaultSizeX;                                     		// 0x0040 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                DefaultSizeY;                                     		// 0x0044 (0x0004) [0x0000000000004000]              ( CPF_Config )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class UnrealEd.DefaultSizedThumbnailRenderer" );

		return pClassPointer;
	};

};

UClass* UDefaultSizedThumbnailRenderer::pClassPointer = NULL;

// Class UnrealEd.EditorUISceneClient
// 0x0014 (0x010C - 0x00F8)
class UEditorUISceneClient : public UUISceneClient
{
public:
	class UUIScene*                                    Scene;                                            		// 0x00F8 (0x0004) [0x0000000000002002]              ( CPF_Const | CPF_Transient )
	class UUISceneManager*                             SceneManager;                                     		// 0x00FC (0x0004) [0x0000000000002002]              ( CPF_Const | CPF_Transient )
	struct FPointer                                    SceneWindow;                                      		// 0x0100 (0x0004) [0x0000000000003002]              ( CPF_Const | CPF_Native | CPF_Transient )
	struct FPointer                                    ClientCanvasScene;                                		// 0x0104 (0x0004) [0x0000000000003002]              ( CPF_Const | CPF_Native | CPF_Transient )
	unsigned long                                      bIsUIPrimitiveSceneInitialized : 1;               		// 0x0108 (0x0004) [0x0000000000002002] [0x00000001] ( CPF_Const | CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class UnrealEd.EditorUISceneClient" );

		return pClassPointer;
	};

	void ShowDockingStacks ( );
};

UClass* UEditorUISceneClient::pClassPointer = NULL;

// Class UnrealEd.FaceFXStudioSkelComponent
// 0x0004 (0x04AC - 0x04A8)
class UFaceFXStudioSkelComponent : public USkeletalMeshComponent
{
public:
	struct FPointer                                    RenderWidgetUE3Ptr;                               		// 0x04A8 (0x0004) [0x0000000000003002]              ( CPF_Const | CPF_Native | CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class UnrealEd.FaceFXStudioSkelComponent" );

		return pClassPointer;
	};

};

UClass* UFaceFXStudioSkelComponent::pClassPointer = NULL;

// Class UnrealEd.TextureThumbnailRenderer
// 0x0000 (0x0040 - 0x0040)
class UTextureThumbnailRenderer : public UThumbnailRenderer
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class UnrealEd.TextureThumbnailRenderer" );

		return pClassPointer;
	};

};

UClass* UTextureThumbnailRenderer::pClassPointer = NULL;

// Class UnrealEd.FontThumbnailRenderer
// 0x0000 (0x0040 - 0x0040)
class UFontThumbnailRenderer : public UTextureThumbnailRenderer
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class UnrealEd.FontThumbnailRenderer" );

		return pClassPointer;
	};

};

UClass* UFontThumbnailRenderer::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType
// 0x001C (0x005C - 0x0040)
class UGenericBrowserType : public UObject
{
public:
	struct FString                                     Description;                                      		// 0x0040 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FGenericBrowserTypeInfo >           SupportInfo;                                      		// 0x004C (0x000C) [0x0000000000001000]              ( CPF_Native )
	struct FColor                                      BorderColor;                                      		// 0x0058 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class UnrealEd.GenericBrowserType" );

		return pClassPointer;
	};

};

UClass* UGenericBrowserType::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_Custom
// 0x0000 (0x005C - 0x005C)
class UGenericBrowserType_Custom : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class UnrealEd.GenericBrowserType_Custom" );

		return pClassPointer;
	};

};

UClass* UGenericBrowserType_Custom::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_All
// 0x0000 (0x005C - 0x005C)
class UGenericBrowserType_All : public UGenericBrowserType_Custom
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class UnrealEd.GenericBrowserType_All" );

		return pClassPointer;
	};

};

UClass* UGenericBrowserType_All::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_Animation
// 0x0000 (0x005C - 0x005C)
class UGenericBrowserType_Animation : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class UnrealEd.GenericBrowserType_Animation" );

		return pClassPointer;
	};

};

UClass* UGenericBrowserType_Animation::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_AnimTree
// 0x0000 (0x005C - 0x005C)
class UGenericBrowserType_AnimTree : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class UnrealEd.GenericBrowserType_AnimTree" );

		return pClassPointer;
	};

};

UClass* UGenericBrowserType_AnimTree::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_Archetype
// 0x0000 (0x005C - 0x005C)
class UGenericBrowserType_Archetype : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class UnrealEd.GenericBrowserType_Archetype" );

		return pClassPointer;
	};

};

UClass* UGenericBrowserType_Archetype::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_CameraAnim
// 0x0000 (0x005C - 0x005C)
class UGenericBrowserType_CameraAnim : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class UnrealEd.GenericBrowserType_CameraAnim" );

		return pClassPointer;
	};

};

UClass* UGenericBrowserType_CameraAnim::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_CurveEdPresetCurve
// 0x0000 (0x005C - 0x005C)
class UGenericBrowserType_CurveEdPresetCurve : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class UnrealEd.GenericBrowserType_CurveEdPresetCurve" );

		return pClassPointer;
	};

};

UClass* UGenericBrowserType_CurveEdPresetCurve::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_DecalMaterial
// 0x0000 (0x005C - 0x005C)
class UGenericBrowserType_DecalMaterial : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class UnrealEd.GenericBrowserType_DecalMaterial" );

		return pClassPointer;
	};

};

UClass* UGenericBrowserType_DecalMaterial::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_FaceFXAnimSet
// 0x0000 (0x005C - 0x005C)
class UGenericBrowserType_FaceFXAnimSet : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class UnrealEd.GenericBrowserType_FaceFXAnimSet" );

		return pClassPointer;
	};

};

UClass* UGenericBrowserType_FaceFXAnimSet::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_FaceFXAsset
// 0x0000 (0x005C - 0x005C)
class UGenericBrowserType_FaceFXAsset : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class UnrealEd.GenericBrowserType_FaceFXAsset" );

		return pClassPointer;
	};

};

UClass* UGenericBrowserType_FaceFXAsset::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_Font
// 0x0000 (0x005C - 0x005C)
class UGenericBrowserType_Font : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class UnrealEd.GenericBrowserType_Font" );

		return pClassPointer;
	};

};

UClass* UGenericBrowserType_Font::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_LensFlare
// 0x0000 (0x005C - 0x005C)
class UGenericBrowserType_LensFlare : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class UnrealEd.GenericBrowserType_LensFlare" );

		return pClassPointer;
	};

};

UClass* UGenericBrowserType_LensFlare::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_Material
// 0x0000 (0x005C - 0x005C)
class UGenericBrowserType_Material : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class UnrealEd.GenericBrowserType_Material" );

		return pClassPointer;
	};

};

UClass* UGenericBrowserType_Material::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_MaterialInstanceConstant
// 0x0000 (0x005C - 0x005C)
class UGenericBrowserType_MaterialInstanceConstant : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class UnrealEd.GenericBrowserType_MaterialInstanceConstant" );

		return pClassPointer;
	};

};

UClass* UGenericBrowserType_MaterialInstanceConstant::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_MaterialInstanceTimeVarying
// 0x0000 (0x005C - 0x005C)
class UGenericBrowserType_MaterialInstanceTimeVarying : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class UnrealEd.GenericBrowserType_MaterialInstanceTimeVarying" );

		return pClassPointer;
	};

};

UClass* UGenericBrowserType_MaterialInstanceTimeVarying::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_MaterialLackingPhysMat
// 0x0000 (0x005C - 0x005C)
class UGenericBrowserType_MaterialLackingPhysMat : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class UnrealEd.GenericBrowserType_MaterialLackingPhysMat" );

		return pClassPointer;
	};

};

UClass* UGenericBrowserType_MaterialLackingPhysMat::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_MorphTargetSet
// 0x0000 (0x005C - 0x005C)
class UGenericBrowserType_MorphTargetSet : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class UnrealEd.GenericBrowserType_MorphTargetSet" );

		return pClassPointer;
	};

};

UClass* UGenericBrowserType_MorphTargetSet::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_MorphWeightSequence
// 0x0000 (0x005C - 0x005C)
class UGenericBrowserType_MorphWeightSequence : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class UnrealEd.GenericBrowserType_MorphWeightSequence" );

		return pClassPointer;
	};

};

UClass* UGenericBrowserType_MorphWeightSequence::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_ParticleSystem
// 0x0000 (0x005C - 0x005C)
class UGenericBrowserType_ParticleSystem : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class UnrealEd.GenericBrowserType_ParticleSystem" );

		return pClassPointer;
	};

};

UClass* UGenericBrowserType_ParticleSystem::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_PhysicalMaterial
// 0x0000 (0x005C - 0x005C)
class UGenericBrowserType_PhysicalMaterial : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class UnrealEd.GenericBrowserType_PhysicalMaterial" );

		return pClassPointer;
	};

};

UClass* UGenericBrowserType_PhysicalMaterial::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_PhysicsAsset
// 0x0000 (0x005C - 0x005C)
class UGenericBrowserType_PhysicsAsset : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class UnrealEd.GenericBrowserType_PhysicsAsset" );

		return pClassPointer;
	};

};

UClass* UGenericBrowserType_PhysicsAsset::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_PhysXParticleSystem
// 0x0000 (0x005C - 0x005C)
class UGenericBrowserType_PhysXParticleSystem : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class UnrealEd.GenericBrowserType_PhysXParticleSystem" );

		return pClassPointer;
	};

};

UClass* UGenericBrowserType_PhysXParticleSystem::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_PostProcess
// 0x0000 (0x005C - 0x005C)
class UGenericBrowserType_PostProcess : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class UnrealEd.GenericBrowserType_PostProcess" );

		return pClassPointer;
	};

};

UClass* UGenericBrowserType_PostProcess::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_Prefab
// 0x0000 (0x005C - 0x005C)
class UGenericBrowserType_Prefab : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class UnrealEd.GenericBrowserType_Prefab" );

		return pClassPointer;
	};

};

UClass* UGenericBrowserType_Prefab::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_Texture
// 0x0000 (0x005C - 0x005C)
class UGenericBrowserType_Texture : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class UnrealEd.GenericBrowserType_Texture" );

		return pClassPointer;
	};

};

UClass* UGenericBrowserType_Texture::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_RenderTexture
// 0x0000 (0x005C - 0x005C)
class UGenericBrowserType_RenderTexture : public UGenericBrowserType_Texture
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class UnrealEd.GenericBrowserType_RenderTexture" );

		return pClassPointer;
	};

};

UClass* UGenericBrowserType_RenderTexture::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_Sequence
// 0x0000 (0x005C - 0x005C)
class UGenericBrowserType_Sequence : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class UnrealEd.GenericBrowserType_Sequence" );

		return pClassPointer;
	};

};

UClass* UGenericBrowserType_Sequence::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_SkeletalMesh
// 0x0000 (0x005C - 0x005C)
class UGenericBrowserType_SkeletalMesh : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class UnrealEd.GenericBrowserType_SkeletalMesh" );

		return pClassPointer;
	};

};

UClass* UGenericBrowserType_SkeletalMesh::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_Sounds
// 0x0000 (0x005C - 0x005C)
class UGenericBrowserType_Sounds : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class UnrealEd.GenericBrowserType_Sounds" );

		return pClassPointer;
	};

};

UClass* UGenericBrowserType_Sounds::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_SoundCue
// 0x0000 (0x005C - 0x005C)
class UGenericBrowserType_SoundCue : public UGenericBrowserType_Sounds
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class UnrealEd.GenericBrowserType_SoundCue" );

		return pClassPointer;
	};

};

UClass* UGenericBrowserType_SoundCue::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_SoundWave
// 0x0000 (0x005C - 0x005C)
class UGenericBrowserType_SoundWave : public UGenericBrowserType_Sounds
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class UnrealEd.GenericBrowserType_SoundWave" );

		return pClassPointer;
	};

};

UClass* UGenericBrowserType_SoundWave::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_SpeechRecognition
// 0x0000 (0x005C - 0x005C)
class UGenericBrowserType_SpeechRecognition : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class UnrealEd.GenericBrowserType_SpeechRecognition" );

		return pClassPointer;
	};

};

UClass* UGenericBrowserType_SpeechRecognition::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_SpeedTree
// 0x0000 (0x005C - 0x005C)
class UGenericBrowserType_SpeedTree : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class UnrealEd.GenericBrowserType_SpeedTree" );

		return pClassPointer;
	};

};

UClass* UGenericBrowserType_SpeedTree::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_StaticMesh
// 0x0000 (0x005C - 0x005C)
class UGenericBrowserType_StaticMesh : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class UnrealEd.GenericBrowserType_StaticMesh" );

		return pClassPointer;
	};

};

UClass* UGenericBrowserType_StaticMesh::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_TerrainLayer
// 0x0000 (0x005C - 0x005C)
class UGenericBrowserType_TerrainLayer : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class UnrealEd.GenericBrowserType_TerrainLayer" );

		return pClassPointer;
	};

};

UClass* UGenericBrowserType_TerrainLayer::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_TerrainMaterial
// 0x0000 (0x005C - 0x005C)
class UGenericBrowserType_TerrainMaterial : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class UnrealEd.GenericBrowserType_TerrainMaterial" );

		return pClassPointer;
	};

};

UClass* UGenericBrowserType_TerrainMaterial::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_TextureWithAlpha
// 0x0000 (0x005C - 0x005C)
class UGenericBrowserType_TextureWithAlpha : public UGenericBrowserType_Texture
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class UnrealEd.GenericBrowserType_TextureWithAlpha" );

		return pClassPointer;
	};

};

UClass* UGenericBrowserType_TextureWithAlpha::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_UIArchetype
// 0x0004 (0x0060 - 0x005C)
class UGenericBrowserType_UIArchetype : public UGenericBrowserType_Archetype
{
public:
	class UUISceneManager*                             SceneManager;                                     		// 0x005C (0x0004) [0x0000000000002002]              ( CPF_Const | CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class UnrealEd.GenericBrowserType_UIArchetype" );

		return pClassPointer;
	};

};

UClass* UGenericBrowserType_UIArchetype::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_UIScene
// 0x0004 (0x0060 - 0x005C)
class UGenericBrowserType_UIScene : public UGenericBrowserType
{
public:
	class UUISceneManager*                             SceneManager;                                     		// 0x005C (0x0004) [0x0000000000002002]              ( CPF_Const | CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class UnrealEd.GenericBrowserType_UIScene" );

		return pClassPointer;
	};

};

UClass* UGenericBrowserType_UIScene::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_UISkin
// 0x0000 (0x005C - 0x005C)
class UGenericBrowserType_UISkin : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class UnrealEd.GenericBrowserType_UISkin" );

		return pClassPointer;
	};

};

UClass* UGenericBrowserType_UISkin::pClassPointer = NULL;

// Class UnrealEd.GenericThumbnailLabelRenderer
// 0x0000 (0x0040 - 0x0040)
class UGenericThumbnailLabelRenderer : public UThumbnailLabelRenderer
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class UnrealEd.GenericThumbnailLabelRenderer" );

		return pClassPointer;
	};

};

UClass* UGenericThumbnailLabelRenderer::pClassPointer = NULL;

// Class UnrealEd.InterpEdOptions
// 0x000C (0x004C - 0x0040)
class UInterpEdOptions : public UObject
{
public:
	TArray< struct FInterpEdSelKey >                   SelectedKeys;                                     		// 0x0040 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class UnrealEd.InterpEdOptions" );

		return pClassPointer;
	};

};

UClass* UInterpEdOptions::pClassPointer = NULL;

// Class UnrealEd.InterpTrackHelper
// 0x0000 (0x0040 - 0x0040)
class UInterpTrackHelper : public UObject
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class UnrealEd.InterpTrackHelper" );

		return pClassPointer;
	};

};

UClass* UInterpTrackHelper::pClassPointer = NULL;

// Class UnrealEd.InterpTrackAnimControlHelper
// 0x0000 (0x0040 - 0x0040)
class UInterpTrackAnimControlHelper : public UInterpTrackHelper
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class UnrealEd.InterpTrackAnimControlHelper" );

		return pClassPointer;
	};

};

UClass* UInterpTrackAnimControlHelper::pClassPointer = NULL;

// Class UnrealEd.InterpTrackVectorPropHelper
// 0x0000 (0x0040 - 0x0040)
class UInterpTrackVectorPropHelper : public UInterpTrackHelper
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class UnrealEd.InterpTrackVectorPropHelper" );

		return pClassPointer;
	};

};

UClass* UInterpTrackVectorPropHelper::pClassPointer = NULL;

// Class UnrealEd.InterpTrackColorPropHelper
// 0x0000 (0x0040 - 0x0040)
class UInterpTrackColorPropHelper : public UInterpTrackVectorPropHelper
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class UnrealEd.InterpTrackColorPropHelper" );

		return pClassPointer;
	};

};

UClass* UInterpTrackColorPropHelper::pClassPointer = NULL;

// Class UnrealEd.InterpTrackDirectorHelper
// 0x0000 (0x0040 - 0x0040)
class UInterpTrackDirectorHelper : public UInterpTrackHelper
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class UnrealEd.InterpTrackDirectorHelper" );

		return pClassPointer;
	};

};

UClass* UInterpTrackDirectorHelper::pClassPointer = NULL;

// Class UnrealEd.InterpTrackEventHelper
// 0x0000 (0x0040 - 0x0040)
class UInterpTrackEventHelper : public UInterpTrackHelper
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class UnrealEd.InterpTrackEventHelper" );

		return pClassPointer;
	};

};

UClass* UInterpTrackEventHelper::pClassPointer = NULL;

// Class UnrealEd.InterpTrackFaceFXHelper
// 0x0000 (0x0040 - 0x0040)
class UInterpTrackFaceFXHelper : public UInterpTrackHelper
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class UnrealEd.InterpTrackFaceFXHelper" );

		return pClassPointer;
	};

};

UClass* UInterpTrackFaceFXHelper::pClassPointer = NULL;

// Class UnrealEd.InterpTrackFloatPropHelper
// 0x0000 (0x0040 - 0x0040)
class UInterpTrackFloatPropHelper : public UInterpTrackHelper
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class UnrealEd.InterpTrackFloatPropHelper" );

		return pClassPointer;
	};

};

UClass* UInterpTrackFloatPropHelper::pClassPointer = NULL;

// Class UnrealEd.InterpTrackSoundHelper
// 0x0000 (0x0040 - 0x0040)
class UInterpTrackSoundHelper : public UInterpTrackHelper
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class UnrealEd.InterpTrackSoundHelper" );

		return pClassPointer;
	};

};

UClass* UInterpTrackSoundHelper::pClassPointer = NULL;

// Class UnrealEd.InterpTrackToggleHelper
// 0x0000 (0x0040 - 0x0040)
class UInterpTrackToggleHelper : public UInterpTrackHelper
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class UnrealEd.InterpTrackToggleHelper" );

		return pClassPointer;
	};

};

UClass* UInterpTrackToggleHelper::pClassPointer = NULL;

// Class UnrealEd.KismetBindings
// 0x0018 (0x0058 - 0x0040)
class UKismetBindings : public UObject
{
public:
	TArray< struct FKismetKeyBind >                    Bindings;                                         		// 0x0040 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< struct FKismetCommentPreset >              CommentPresets;                                   		// 0x004C (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class UnrealEd.KismetBindings" );

		return pClassPointer;
	};

};

UClass* UKismetBindings::pClassPointer = NULL;

// Class UnrealEd.LensFlareEditorOptions
// 0x00A0 (0x00E0 - 0x0040)
class ULensFlareEditorOptions : public UObject
{
public:
	struct FLinearColor                                LFED_BackgroundColor;                             		// 0x0040 (0x0010) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	struct FLinearColor                                LFED_Empty_Background;                            		// 0x0050 (0x0010) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	struct FLinearColor                                LFED_Source_ElementEd_Background;                 		// 0x0060 (0x0010) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	struct FLinearColor                                LFED_Source_Unselected;                           		// 0x0070 (0x0010) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	struct FLinearColor                                LFED_Source_Selected;                             		// 0x0080 (0x0010) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	struct FLinearColor                                LFED_ElementEd_Background;                        		// 0x0090 (0x0010) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	struct FLinearColor                                LFED_Element_Unselected;                          		// 0x00A0 (0x0010) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	struct FLinearColor                                LFED_Element_Selected;                            		// 0x00B0 (0x0010) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	unsigned long                                      bShowGrid : 1;                                    		// 0x00C0 (0x0004) [0x0000000000004001] [0x00000001] ( CPF_Edit | CPF_Config )
	struct FColor                                      GridColor_Hi;                                     		// 0x00C4 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	struct FColor                                      GridColor_Low;                                    		// 0x00C8 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	float                                              GridPerspectiveSize;                              		// 0x00CC (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	struct FString                                     PostProcessChainName;                             		// 0x00D0 (0x000C) [0x0000000000404001]              ( CPF_Edit | CPF_Config | CPF_NeedCtorLink )
	int                                                ShowPPFlags;                                      		// 0x00DC (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class UnrealEd.LensFlareEditorOptions" );

		return pClassPointer;
	};

};

UClass* ULensFlareEditorOptions::pClassPointer = NULL;

// Class UnrealEd.LensFlareEditorPropertyWrapper
// 0x0148 (0x0188 - 0x0040)
class ULensFlareEditorPropertyWrapper : public UObject
{
public:
	struct FLensFlareElement                           Element;                                          		// 0x0040 (0x0140) [0x0000000000480001]              ( CPF_Edit | CPF_Component | CPF_NeedCtorLink )
	class ULensFlare*                                  SourceLensFlare;                                  		// 0x0180 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                ElementIndex;                                     		// 0x0184 (0x0004) [0x0000000000000002]              ( CPF_Const )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class UnrealEd.LensFlareEditorPropertyWrapper" );

		return pClassPointer;
	};

};

UClass* ULensFlareEditorPropertyWrapper::pClassPointer = NULL;

// Class UnrealEd.LensFlarePreviewComponent
// 0x0004 (0x01DC - 0x01D8)
class ULensFlarePreviewComponent : public UPrimitiveComponent
{
public:
	struct FPointer                                    LensFlareEditorPtr;                               		// 0x01D8 (0x0004) [0x0000000000003002]              ( CPF_Const | CPF_Native | CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class UnrealEd.LensFlarePreviewComponent" );

		return pClassPointer;
	};

};

UClass* ULensFlarePreviewComponent::pClassPointer = NULL;

// Class UnrealEd.LensFlareThumbnailRenderer
// 0x0008 (0x0048 - 0x0040)
class ULensFlareThumbnailRenderer : public UTextureThumbnailRenderer
{
public:
	class UTexture2D*                                  NoImage;                                          		// 0x0040 (0x0004) [0x0000000000000000]              
	class UTexture2D*                                  OutOfDate;                                        		// 0x0044 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class UnrealEd.LensFlareThumbnailRenderer" );

		return pClassPointer;
	};

};

UClass* ULensFlareThumbnailRenderer::pClassPointer = NULL;

// Class UnrealEd.MaterialEditorInstanceConstant
// 0x0070 (0x00B0 - 0x0040)
class UMaterialEditorInstanceConstant : public UObject
{
public:
	class UPhysicalMaterial*                           PhysMaterial;                                     		// 0x0040 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UMaterialInterface*                          Parent;                                           		// 0x0044 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FEditorVectorParameterValue >       VectorParameterValues;                            		// 0x0048 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FEditorScalarParameterValue >       ScalarParameterValues;                            		// 0x0054 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FEditorTextureParameterValue >      TextureParameterValues;                           		// 0x0060 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FEditorFontParameterValue >         FontParameterValues;                              		// 0x006C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FEditorStaticSwitchParameterValue > StaticSwitchParameterValues;                      		// 0x0078 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FEditorStaticComponentMaskParameterValue > StaticComponentMaskParameterValues;               		// 0x0084 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class UMaterialInstanceConstant*                   SourceInstance;                                   		// 0x0090 (0x0004) [0x0000000000000000]              
	TArray< struct FGuid >                             VisibleExpressions;                               		// 0x0094 (0x000C) [0x0000000000602002]              ( CPF_Const | CPF_Transient | CPF_NeedCtorLink )
	class UMaterial*                                   BakedMaterial;                                    		// 0x00A0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     RWTGuid;                                          		// 0x00A4 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class UnrealEd.MaterialEditorInstanceConstant" );

		return pClassPointer;
	};

};

UClass* UMaterialEditorInstanceConstant::pClassPointer = NULL;

// Class UnrealEd.MaterialEditorInstanceTimeVarying
// 0x0074 (0x00B4 - 0x0040)
class UMaterialEditorInstanceTimeVarying : public UObject
{
public:
	class UPhysicalMaterial*                           PhysMaterial;                                     		// 0x0040 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UMaterialInterface*                          Parent;                                           		// 0x0044 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bAutoActivateAll : 1;                             		// 0x0048 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	TArray< struct FEditorVectorParameterValueOverTime > VectorParameterValues;                            		// 0x004C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FEditorScalarParameterValueOverTime > ScalarParameterValues;                            		// 0x0058 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FEditorTextureParameterValueOverTime > TextureParameterValues;                           		// 0x0064 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FEditorFontParameterValueOverTime > FontParameterValues;                              		// 0x0070 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FEditorStaticSwitchParameterValueOverTime > StaticSwitchParameterValues;                      		// 0x007C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FEditorStaticComponentMaskParameterValueOverTime > StaticComponentMaskParameterValues;               		// 0x0088 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class UMaterialInstanceTimeVarying*                SourceInstance;                                   		// 0x0094 (0x0004) [0x0000000000000000]              
	TArray< struct FGuid >                             VisibleExpressions;                               		// 0x0098 (0x000C) [0x0000000000602002]              ( CPF_Const | CPF_Transient | CPF_NeedCtorLink )
	class UMaterial*                                   BakedMaterial;                                    		// 0x00A4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     RWTGuid;                                          		// 0x00A8 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class UnrealEd.MaterialEditorInstanceTimeVarying" );

		return pClassPointer;
	};

};

UClass* UMaterialEditorInstanceTimeVarying::pClassPointer = NULL;

// Class UnrealEd.MaterialEditorMeshComponent
// 0x0004 (0x024C - 0x0248)
class UMaterialEditorMeshComponent : public UStaticMeshComponent
{
public:
	struct FPointer                                    MaterialEditor;                                   		// 0x0248 (0x0004) [0x0000000000003002]              ( CPF_Const | CPF_Native | CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class UnrealEd.MaterialEditorMeshComponent" );

		return pClassPointer;
	};

};

UClass* UMaterialEditorMeshComponent::pClassPointer = NULL;

// Class UnrealEd.MaterialEditorOptions
// 0x0004 (0x0044 - 0x0040)
class UMaterialEditorOptions : public UObject
{
public:
	unsigned long                                      bShowGrid : 1;                                    		// 0x0040 (0x0004) [0x0000000000004001] [0x00000001] ( CPF_Edit | CPF_Config )
	unsigned long                                      bShowBackground : 1;                              		// 0x0040 (0x0004) [0x0000000000004001] [0x00000002] ( CPF_Edit | CPF_Config )
	unsigned long                                      bHideUnusedConnectors : 1;                        		// 0x0040 (0x0004) [0x0000000000004001] [0x00000004] ( CPF_Edit | CPF_Config )
	unsigned long                                      bDrawCurves : 1;                                  		// 0x0040 (0x0004) [0x0000000000004001] [0x00000008] ( CPF_Edit | CPF_Config )
	unsigned long                                      bRealtimeMaterialViewport : 1;                    		// 0x0040 (0x0004) [0x0000000000004001] [0x00000010] ( CPF_Edit | CPF_Config )
	unsigned long                                      bRealtimeExpressionViewport : 1;                  		// 0x0040 (0x0004) [0x0000000000004001] [0x00000020] ( CPF_Edit | CPF_Config )
	unsigned long                                      bAlwaysRefreshAllPreviews : 1;                    		// 0x0040 (0x0004) [0x0000000000004001] [0x00000040] ( CPF_Edit | CPF_Config )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class UnrealEd.MaterialEditorOptions" );

		return pClassPointer;
	};

};

UClass* UMaterialEditorOptions::pClassPointer = NULL;

// Class UnrealEd.MaterialEditorSkeletalMeshComponent
// 0x0004 (0x04AC - 0x04A8)
class UMaterialEditorSkeletalMeshComponent : public USkeletalMeshComponent
{
public:
	struct FPointer                                    MaterialEditor;                                   		// 0x04A8 (0x0004) [0x0000000000003002]              ( CPF_Const | CPF_Native | CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class UnrealEd.MaterialEditorSkeletalMeshComponent" );

		return pClassPointer;
	};

};

UClass* UMaterialEditorSkeletalMeshComponent::pClassPointer = NULL;

// Class UnrealEd.MaterialInstanceLabelRenderer
// 0x0000 (0x0040 - 0x0040)
class UMaterialInstanceLabelRenderer : public UThumbnailLabelRenderer
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class UnrealEd.MaterialInstanceLabelRenderer" );

		return pClassPointer;
	};

};

UClass* UMaterialInstanceLabelRenderer::pClassPointer = NULL;

// Class UnrealEd.MaterialInstanceThumbnailRenderer
// 0x0000 (0x0048 - 0x0048)
class UMaterialInstanceThumbnailRenderer : public UDefaultSizedThumbnailRenderer
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class UnrealEd.MaterialInstanceThumbnailRenderer" );

		return pClassPointer;
	};

};

UClass* UMaterialInstanceThumbnailRenderer::pClassPointer = NULL;

// Class UnrealEd.MemCountThumbnailLabelRenderer
// 0x0004 (0x0044 - 0x0040)
class UMemCountThumbnailLabelRenderer : public UThumbnailLabelRenderer
{
public:
	class UThumbnailLabelRenderer*                     AggregatedLabelRenderer;                          		// 0x0040 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class UnrealEd.MemCountThumbnailLabelRenderer" );

		return pClassPointer;
	};

};

UClass* UMemCountThumbnailLabelRenderer::pClassPointer = NULL;

// Class UnrealEd.ParticleSystemLabelRenderer
// 0x0000 (0x0040 - 0x0040)
class UParticleSystemLabelRenderer : public UThumbnailLabelRenderer
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class UnrealEd.ParticleSystemLabelRenderer" );

		return pClassPointer;
	};

};

UClass* UParticleSystemLabelRenderer::pClassPointer = NULL;

// Class UnrealEd.ParticleSystemThumbnailRenderer
// 0x0008 (0x0048 - 0x0040)
class UParticleSystemThumbnailRenderer : public UTextureThumbnailRenderer
{
public:
	class UTexture2D*                                  NoImage;                                          		// 0x0040 (0x0004) [0x0000000000000000]              
	class UTexture2D*                                  OutOfDate;                                        		// 0x0044 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class UnrealEd.ParticleSystemThumbnailRenderer" );

		return pClassPointer;
	};

};

UClass* UParticleSystemThumbnailRenderer::pClassPointer = NULL;

// Class UnrealEd.PhATSimOptions
// 0x004C (0x008C - 0x0040)
class UPhATSimOptions : public UObject
{
public:
	class UAnimSet*                                    PreviewAnimSet;                                   		// 0x0040 (0x0004) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
	float                                              PhysicsBlend;                                     		// 0x0044 (0x0004) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
	unsigned long                                      bBlendOnPoke : 1;                                 		// 0x0048 (0x0004) [0x0000000000002001] [0x00000001] ( CPF_Edit | CPF_Transient )
	unsigned long                                      bDrawContacts : 1;                                		// 0x0048 (0x0004) [0x0000000000004001] [0x00000002] ( CPF_Edit | CPF_Config )
	unsigned long                                      bPromptOnBoneDelete : 1;                          		// 0x0048 (0x0004) [0x0000000000004001] [0x00000004] ( CPF_Edit | CPF_Config )
	unsigned long                                      bShowConstraintsAsPoints : 1;                     		// 0x0048 (0x0004) [0x0000000000004001] [0x00000008] ( CPF_Edit | CPF_Config )
	unsigned long                                      bShowNamesInHierarchy : 1;                        		// 0x0048 (0x0004) [0x0000000000004001] [0x00000010] ( CPF_Edit | CPF_Config )
	float                                              PokePauseTime;                                    		// 0x004C (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	float                                              PokeBlendTime;                                    		// 0x0050 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	float                                              AngularSpringScale;                               		// 0x0054 (0x0004) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
	float                                              AngularDampingScale;                              		// 0x0058 (0x0004) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
	float                                              SimSpeed;                                         		// 0x005C (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	float                                              FloorGap;                                         		// 0x0060 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	float                                              GravScale;                                        		// 0x0064 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	float                                              HandleLinearDamping;                              		// 0x0068 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	float                                              HandleLinearStiffness;                            		// 0x006C (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	float                                              HandleAngularDamping;                             		// 0x0070 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	float                                              HandleAngularStiffness;                           		// 0x0074 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	float                                              PokeStrength;                                     		// 0x0078 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	float                                              SkyBrightness;                                    		// 0x007C (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	float                                              Brightness;                                       		// 0x0080 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	float                                              AngularSnap;                                      		// 0x0084 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	float                                              LinearSnap;                                       		// 0x0088 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class UnrealEd.PhATSimOptions" );

		return pClassPointer;
	};

};

UClass* UPhATSimOptions::pClassPointer = NULL;

// Class UnrealEd.PhATSkeletalMeshComponent
// 0x0010 (0x04B8 - 0x04A8)
class UPhATSkeletalMeshComponent : public USkeletalMeshComponent
{
public:
	struct FPointer                                    PhATPtr;                                          		// 0x04A8 (0x0004) [0x0000000000003002]              ( CPF_Const | CPF_Native | CPF_Transient )
	TArray< struct FMatrix >                           AnimationSpaceBases;                              		// 0x04AC (0x000C) [0x0000000000003002]              ( CPF_Const | CPF_Native | CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class UnrealEd.PhATSkeletalMeshComponent" );

		return pClassPointer;
	};

};

UClass* UPhATSkeletalMeshComponent::pClassPointer = NULL;

// Class UnrealEd.PhysicsAssetLabelRenderer
// 0x0000 (0x0040 - 0x0040)
class UPhysicsAssetLabelRenderer : public UThumbnailLabelRenderer
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class UnrealEd.PhysicsAssetLabelRenderer" );

		return pClassPointer;
	};

};

UClass* UPhysicsAssetLabelRenderer::pClassPointer = NULL;

// Class UnrealEd.PropertyDrawProxy
// 0x0000 (0x0040 - 0x0040)
class UPropertyDrawProxy : public UObject
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class UnrealEd.PropertyDrawProxy" );

		return pClassPointer;
	};

};

UClass* UPropertyDrawProxy::pClassPointer = NULL;

// Class UnrealEd.PlayerInputMask_CustomDrawProxy
// 0x0000 (0x0040 - 0x0040)
class UPlayerInputMask_CustomDrawProxy : public UPropertyDrawProxy
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class UnrealEd.PlayerInputMask_CustomDrawProxy" );

		return pClassPointer;
	};

};

UClass* UPlayerInputMask_CustomDrawProxy::pClassPointer = NULL;

// Class UnrealEd.PropertyInputArrayItemBase
// 0x0000 (0x0050 - 0x0050)
class UPropertyInputArrayItemBase : public UPropertyInputProxy
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class UnrealEd.PropertyInputArrayItemBase" );

		return pClassPointer;
	};

};

UClass* UPropertyInputArrayItemBase::pClassPointer = NULL;

// Class UnrealEd.PropertyInputBool
// 0x0000 (0x0050 - 0x0050)
class UPropertyInputBool : public UPropertyInputArrayItemBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class UnrealEd.PropertyInputBool" );

		return pClassPointer;
	};

};

UClass* UPropertyInputBool::pClassPointer = NULL;

// Class UnrealEd.PlayerInputMask_CustomInputProxy
// 0x0000 (0x0050 - 0x0050)
class UPlayerInputMask_CustomInputProxy : public UPropertyInputBool
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class UnrealEd.PlayerInputMask_CustomInputProxy" );

		return pClassPointer;
	};

};

UClass* UPlayerInputMask_CustomInputProxy::pClassPointer = NULL;

// Class UnrealEd.PostProcessLabelRenderer
// 0x0000 (0x0040 - 0x0040)
class UPostProcessLabelRenderer : public UThumbnailLabelRenderer
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class UnrealEd.PostProcessLabelRenderer" );

		return pClassPointer;
	};

};

UClass* UPostProcessLabelRenderer::pClassPointer = NULL;

// Class UnrealEd.PrefabThumbnailRenderer
// 0x0000 (0x0050 - 0x0050)
class UPrefabThumbnailRenderer : public UIconThumbnailRenderer
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class UnrealEd.PrefabThumbnailRenderer" );

		return pClassPointer;
	};

};

UClass* UPrefabThumbnailRenderer::pClassPointer = NULL;

// Class UnrealEd.PropertyInputCombo
// 0x0004 (0x0054 - 0x0050)
class UPropertyInputCombo : public UPropertyInputArrayItemBase
{
public:
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0050 (0x0004) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class UnrealEd.PropertyInputCombo" );

		return pClassPointer;
	};

};

UClass* UPropertyInputCombo::pClassPointer = NULL;

// Class UnrealEd.PropertyInputEditInline
// 0x0000 (0x0050 - 0x0050)
class UPropertyInputEditInline : public UPropertyInputArrayItemBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class UnrealEd.PropertyInputEditInline" );

		return pClassPointer;
	};

};

UClass* UPropertyInputEditInline::pClassPointer = NULL;

// Class UnrealEd.PropertyInputText
// 0x000C (0x005C - 0x0050)
class UPropertyInputText : public UPropertyInputArrayItemBase
{
public:
	unsigned char                                      UnknownData00[ 0xC ];                             		// 0x0050 (0x000C) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class UnrealEd.PropertyInputText" );

		return pClassPointer;
	};

};

UClass* UPropertyInputText::pClassPointer = NULL;

// Class UnrealEd.PropertyWindowManager
// 0x00A8 (0x00E8 - 0x0040)
class UPropertyWindowManager : public UObject
{
public:
	unsigned char                                      UnknownData00[ 0xA8 ];                            		// 0x0040 (0x00A8) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class UnrealEd.PropertyWindowManager" );

		return pClassPointer;
	};

};

UClass* UPropertyWindowManager::pClassPointer = NULL;

// Class UnrealEd.SequenceObjectHelper
// 0x0000 (0x0040 - 0x0040)
class USequenceObjectHelper : public UObject
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class UnrealEd.SequenceObjectHelper" );

		return pClassPointer;
	};

};

UClass* USequenceObjectHelper::pClassPointer = NULL;

// Class UnrealEd.SkeletalMeshLabelRenderer
// 0x0000 (0x0040 - 0x0040)
class USkeletalMeshLabelRenderer : public UThumbnailLabelRenderer
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class UnrealEd.SkeletalMeshLabelRenderer" );

		return pClassPointer;
	};

};

UClass* USkeletalMeshLabelRenderer::pClassPointer = NULL;

// Class UnrealEd.SkeletalMeshThumbnailRenderer
// 0x0000 (0x0048 - 0x0048)
class USkeletalMeshThumbnailRenderer : public UDefaultSizedThumbnailRenderer
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class UnrealEd.SkeletalMeshThumbnailRenderer" );

		return pClassPointer;
	};

};

UClass* USkeletalMeshThumbnailRenderer::pClassPointer = NULL;

// Class UnrealEd.SoundLabelRenderer
// 0x0000 (0x0040 - 0x0040)
class USoundLabelRenderer : public UThumbnailLabelRenderer
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class UnrealEd.SoundLabelRenderer" );

		return pClassPointer;
	};

};

UClass* USoundLabelRenderer::pClassPointer = NULL;

// Class UnrealEd.SoundNodeHelper
// 0x0000 (0x0040 - 0x0040)
class USoundNodeHelper : public UObject
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class UnrealEd.SoundNodeHelper" );

		return pClassPointer;
	};

};

UClass* USoundNodeHelper::pClassPointer = NULL;

// Class UnrealEd.StaticMeshEditorComponent
// 0x0004 (0x024C - 0x0248)
class UStaticMeshEditorComponent : public UStaticMeshComponent
{
public:
	struct FPointer                                    StaticMeshEditor;                                 		// 0x0248 (0x0004) [0x0000000000003002]              ( CPF_Const | CPF_Native | CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class UnrealEd.StaticMeshEditorComponent" );

		return pClassPointer;
	};

};

UClass* UStaticMeshEditorComponent::pClassPointer = NULL;

// Class UnrealEd.StaticMeshLabelRenderer
// 0x0000 (0x0040 - 0x0040)
class UStaticMeshLabelRenderer : public UThumbnailLabelRenderer
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class UnrealEd.StaticMeshLabelRenderer" );

		return pClassPointer;
	};

};

UClass* UStaticMeshLabelRenderer::pClassPointer = NULL;

// Class UnrealEd.StaticMeshThumbnailRenderer
// 0x0000 (0x0048 - 0x0048)
class UStaticMeshThumbnailRenderer : public UDefaultSizedThumbnailRenderer
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class UnrealEd.StaticMeshThumbnailRenderer" );

		return pClassPointer;
	};

};

UClass* UStaticMeshThumbnailRenderer::pClassPointer = NULL;

// Class UnrealEd.TerrainEditOptions
// 0x00C8 (0x0108 - 0x0040)
class UTerrainEditOptions : public UObject
{
public:
	int                                                Solid1_Strength;                                  		// 0x0040 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	int                                                Solid1_Radius;                                    		// 0x0044 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	int                                                Solid1_Falloff;                                   		// 0x0048 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	int                                                Solid2_Strength;                                  		// 0x004C (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	int                                                Solid2_Radius;                                    		// 0x0050 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	int                                                Solid2_Falloff;                                   		// 0x0054 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	int                                                Solid3_Strength;                                  		// 0x0058 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	int                                                Solid3_Radius;                                    		// 0x005C (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	int                                                Solid3_Falloff;                                   		// 0x0060 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	int                                                Solid4_Strength;                                  		// 0x0064 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	int                                                Solid4_Radius;                                    		// 0x0068 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	int                                                Solid4_Falloff;                                   		// 0x006C (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	int                                                Solid5_Strength;                                  		// 0x0070 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	int                                                Solid5_Radius;                                    		// 0x0074 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	int                                                Solid5_Falloff;                                   		// 0x0078 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	int                                                Noisy1_Strength;                                  		// 0x007C (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	int                                                Noisy1_Radius;                                    		// 0x0080 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	int                                                Noisy1_Falloff;                                   		// 0x0084 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	int                                                Noisy2_Strength;                                  		// 0x0088 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	int                                                Noisy2_Radius;                                    		// 0x008C (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	int                                                Noisy2_Falloff;                                   		// 0x0090 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	int                                                Noisy3_Strength;                                  		// 0x0094 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	int                                                Noisy3_Radius;                                    		// 0x0098 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	int                                                Noisy3_Falloff;                                   		// 0x009C (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	int                                                Noisy4_Strength;                                  		// 0x00A0 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	int                                                Noisy4_Radius;                                    		// 0x00A4 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	int                                                Noisy4_Falloff;                                   		// 0x00A8 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	int                                                Noisy5_Strength;                                  		// 0x00AC (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	int                                                Noisy5_Radius;                                    		// 0x00B0 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	int                                                Noisy5_Falloff;                                   		// 0x00B4 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	int                                                Current_Tool;                                     		// 0x00B8 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	int                                                Current_Brush;                                    		// 0x00BC (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	int                                                Current_Strength;                                 		// 0x00C0 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	int                                                Current_Radius;                                   		// 0x00C4 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	int                                                Current_Falloff;                                  		// 0x00C8 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	unsigned long                                      bSoftSelectEnabled : 1;                           		// 0x00CC (0x0004) [0x0000000000004001] [0x00000001] ( CPF_Edit | CPF_Config )
	unsigned long                                      bConstrainedEditing : 1;                          		// 0x00CC (0x0004) [0x0000000000004001] [0x00000002] ( CPF_Edit | CPF_Config )
	unsigned long                                      bShowFoliageMeshes : 1;                           		// 0x00CC (0x0004) [0x0000000000004001] [0x00000004] ( CPF_Edit | CPF_Config )
	unsigned long                                      bShowDecoarationMeshes : 1;                       		// 0x00CC (0x0004) [0x0000000000004001] [0x00000008] ( CPF_Edit | CPF_Config )
	int                                                Current_MirrorFlag;                               		// 0x00D0 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	int                                                SliderRange_Low_Strength;                         		// 0x00D4 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	int                                                SliderRange_High_Strength;                        		// 0x00D8 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	int                                                SliderRange_Low_Radius;                           		// 0x00DC (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	int                                                SliderRange_High_Radius;                          		// 0x00E0 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	int                                                SliderRange_Low_Falloff;                          		// 0x00E4 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	int                                                SliderRange_High_Falloff;                         		// 0x00E8 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	struct FColor                                      TerrainLayerBrowser_BackgroundColor;              		// 0x00EC (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	struct FColor                                      TerrainLayerBrowser_BackgroundColor2;             		// 0x00F0 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	struct FColor                                      TerrainLayerBrowser_BackgroundColor3;             		// 0x00F4 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	struct FColor                                      TerrainLayerBrowser_SelectedColor;                		// 0x00F8 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	struct FColor                                      TerrainLayerBrowser_SelectedColor2;               		// 0x00FC (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	struct FColor                                      TerrainLayerBrowser_SelectedColor3;               		// 0x0100 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	struct FColor                                      TerrainLayerBrowser_BorderColor;                  		// 0x0104 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class UnrealEd.TerrainEditOptions" );

		return pClassPointer;
	};

};

UClass* UTerrainEditOptions::pClassPointer = NULL;

// Class UnrealEd.TextureCubeThumbnailRenderer
// 0x0000 (0x0040 - 0x0040)
class UTextureCubeThumbnailRenderer : public UTextureThumbnailRenderer
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class UnrealEd.TextureCubeThumbnailRenderer" );

		return pClassPointer;
	};

};

UClass* UTextureCubeThumbnailRenderer::pClassPointer = NULL;

// Class UnrealEd.ThumbnailManager
// 0x008C (0x00CC - 0x0040)
class UThumbnailManager : public UObject
{
public:
	TArray< struct FThumbnailRenderingInfo >           RenderableThumbnailTypes;                         		// 0x0040 (0x000C) [0x0000000000404002]              ( CPF_Const | CPF_Config | CPF_NeedCtorLink )
	TArray< struct FThumbnailRenderingInfo >           ArchetypeRenderableThumbnailTypes;                		// 0x004C (0x000C) [0x0000000000404002]              ( CPF_Const | CPF_Config | CPF_NeedCtorLink )
	unsigned long                                      bIsInitialized : 1;                               		// 0x0058 (0x0004) [0x0000000000000002] [0x00000001] ( CPF_Const )
	unsigned long                                      bMapNeedsUpdate : 1;                              		// 0x0058 (0x0004) [0x0000000000000002] [0x00000002] ( CPF_Const )
	unsigned long                                      bPSysRealTime : 1;                                		// 0x0058 (0x0004) [0x0000000000000000] [0x00000004] 
	struct FPointer                                    RenderInfoMap;                                    		// 0x005C (0x0004) [0x0000000000003002]              ( CPF_Const | CPF_Native | CPF_Transient )
	struct FPointer                                    ArchetypeRenderInfoMap;                           		// 0x0060 (0x0004) [0x0000000000003002]              ( CPF_Const | CPF_Native | CPF_Transient )
	struct FThumbnailRenderingInfo                     NotSupported;                                     		// 0x0064 (0x0040) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	class UStaticMeshComponent*                        BackgroundComponent;                              		// 0x00A4 (0x0004) [0x000000000408000A]              ( CPF_Const | CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UStaticMeshComponent*                        SMPreviewComponent;                               		// 0x00A8 (0x0004) [0x000000000408000A]              ( CPF_Const | CPF_ExportObject | CPF_Component | CPF_EditInline )
	class USkeletalMeshComponent*                      SKPreviewComponent;                               		// 0x00AC (0x0004) [0x000000000408000A]              ( CPF_Const | CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UStaticMesh*                                 TexPropCube;                                      		// 0x00B0 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UStaticMesh*                                 TexPropSphere;                                    		// 0x00B4 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UStaticMesh*                                 TexPropCylinder;                                  		// 0x00B8 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UStaticMesh*                                 TexPropPlane;                                     		// 0x00BC (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UMaterial*                                   ThumbnailBackground;                              		// 0x00C0 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UMaterial*                                   ThumbnailBackgroundSolid;                         		// 0x00C4 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UMaterialInstanceConstant*                   ThumbnailBackgroundSolidMatInst;                  		// 0x00C8 (0x0004) [0x0000000000000002]              ( CPF_Const )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class UnrealEd.ThumbnailManager" );

		return pClassPointer;
	};

};

UClass* UThumbnailManager::pClassPointer = NULL;

// Class UnrealEd.UIEvent_MetaObjectHelper
// 0x0000 (0x0040 - 0x0040)
class UUIEvent_MetaObjectHelper : public USequenceObjectHelper
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class UnrealEd.UIEvent_MetaObjectHelper" );

		return pClassPointer;
	};

};

UClass* UUIEvent_MetaObjectHelper::pClassPointer = NULL;

// Class UnrealEd.UISceneExporter
// 0x0000 (0x0068 - 0x0068)
class UUISceneExporter : public UExporter
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class UnrealEd.UISceneExporter" );

		return pClassPointer;
	};

};

UClass* UUISceneExporter::pClassPointer = NULL;

// Class UnrealEd.UISceneFactory
// 0x0008 (0x007C - 0x0074)
class UUISceneFactory : public UFactory
{
public:
	class UClass*                                      UISceneClass;                                     		// 0x0074 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0078 (0x0004) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class UnrealEd.UISceneFactory" );

		return pClassPointer;
	};

};

UClass* UUISceneFactory::pClassPointer = NULL;

// Class UnrealEd.UISceneFactoryNew
// 0x0000 (0x007C - 0x007C)
class UUISceneFactoryNew : public UUISceneFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class UnrealEd.UISceneFactoryNew" );

		return pClassPointer;
	};

};

UClass* UUISceneFactoryNew::pClassPointer = NULL;

// Class UnrealEd.UISceneFactoryText
// 0x0000 (0x007C - 0x007C)
class UUISceneFactoryText : public UUISceneFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class UnrealEd.UISceneFactoryText" );

		return pClassPointer;
	};

};

UClass* UUISceneFactoryText::pClassPointer = NULL;

// Class UnrealEd.UISceneManager
// 0x0098 (0x00D8 - 0x0040)
class UUISceneManager : public UObject
{
public:
	struct FPointer                                    VfTable_FGlobalDataStoreClientManager;            		// 0x0040 (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	struct FPointer                                    VfTable_FExec;                                    		// 0x0044 (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	struct FPointer                                    VfTable_FCallbackEventDevice;                     		// 0x0048 (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	class UUISkin*                                     ActiveSkin;                                       		// 0x004C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UDataStoreClient*                            DataStoreManager;                                 		// 0x0050 (0x0004) [0x0000000000002002]              ( CPF_Const | CPF_Transient )
	TArray< class UEditorUISceneClient* >              SceneClients;                                     		// 0x0054 (0x000C) [0x0000000000402002]              ( CPF_Const | CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FUIObjectResourceInfo >             UIWidgetResources;                                		// 0x0060 (0x000C) [0x0000000000402002]              ( CPF_Const | CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FUIObjectToolbarMapping >           UIWidgetToolbarMaps;                              		// 0x006C (0x000C) [0x0000000000404002]              ( CPF_Const | CPF_Config | CPF_NeedCtorLink )
	TArray< struct FUIStyleResourceInfo >              UIStyleResources;                                 		// 0x0078 (0x000C) [0x0000000000402002]              ( CPF_Const | CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FUIStateResourceInfo >              UIStateResources;                                 		// 0x0084 (0x000C) [0x0000000000402002]              ( CPF_Const | CPF_Transient | CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x3C ];                            		// 0x0090 (0x003C) UNKNOWN PROPERTY: MapProperty UnrealEd.UISceneManager.UIStateResourceInfoMap
	struct FUITitleRegions                             TitleRegions;                                     		// 0x00CC (0x0008) [0x0000000000004002]              ( CPF_Const | CPF_Config )
	struct FPointer                                    DlgUIDataStoreBrowser;                            		// 0x00D4 (0x0004) [0x0000000000003002]              ( CPF_Const | CPF_Native | CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class UnrealEd.UISceneManager" );

		return pClassPointer;
	};

	void GetSupportedUIStates ( class UClass* WidgetClass, TArray< struct FUIStateResourceInfo >* out_SupportedStates );
};

UClass* UUISceneManager::pClassPointer = NULL;

// Class UnrealEd.UISceneThumbnailRenderer
// 0x0000 (0x0050 - 0x0050)
class UUISceneThumbnailRenderer : public UIconThumbnailRenderer
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class UnrealEd.UISceneThumbnailRenderer" );

		return pClassPointer;
	};

};

UClass* UUISceneThumbnailRenderer::pClassPointer = NULL;

// Class UnrealEd.UISequenceHelper
// 0x0000 (0x0040 - 0x0040)
class UUISequenceHelper : public USequenceObjectHelper
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class UnrealEd.UISequenceHelper" );

		return pClassPointer;
	};

};

UClass* UUISequenceHelper::pClassPointer = NULL;

// Class UnrealEd.UISequenceObjectHelper
// 0x0000 (0x0040 - 0x0040)
class UUISequenceObjectHelper : public USequenceObjectHelper
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class UnrealEd.UISequenceObjectHelper" );

		return pClassPointer;
	};

};

UClass* UUISequenceObjectHelper::pClassPointer = NULL;

// Class UnrealEd.UIState_CustomInputProxy
// 0x0000 (0x0050 - 0x0050)
class UUIState_CustomInputProxy : public UPropertyInputEditInline
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class UnrealEd.UIState_CustomInputProxy" );

		return pClassPointer;
	};

};

UClass* UUIState_CustomInputProxy::pClassPointer = NULL;

// Class UnrealEd.UIStateClass_CustomInputProxy
// 0x0000 (0x0054 - 0x0054)
class UUIStateClass_CustomInputProxy : public UPropertyInputCombo
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class UnrealEd.UIStateClass_CustomInputProxy" );

		return pClassPointer;
	};

};

UClass* UUIStateClass_CustomInputProxy::pClassPointer = NULL;

// Class UnrealEd.UITexture_CustomDrawProxy
// 0x0000 (0x0040 - 0x0040)
class UUITexture_CustomDrawProxy : public UPropertyDrawProxy
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class UnrealEd.UITexture_CustomDrawProxy" );

		return pClassPointer;
	};

};

UClass* UUITexture_CustomDrawProxy::pClassPointer = NULL;

// Class UnrealEd.UITexture_CustomInputProxy
// 0x0000 (0x005C - 0x005C)
class UUITexture_CustomInputProxy : public UPropertyInputText
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class UnrealEd.UITexture_CustomInputProxy" );

		return pClassPointer;
	};

};

UClass* UUITexture_CustomInputProxy::pClassPointer = NULL;

// Class UnrealEd.UnrealEdEngine
// 0x0070 (0x067C - 0x060C)
class UUnrealEdEngine : public UEditorEngine
{
public:
	struct FPointer                                    NotifyVtbl;                                       		// 0x060C (0x0004) [0x0000000000800002]              ( CPF_Const | CPF_NoExport )
	class UUnrealEdOptions*                            EditorOptionsInst;                                		// 0x0610 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UBrowserManager*                             BrowserManager;                                   		// 0x0614 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UThumbnailManager*                           ThumbnailManager;                                 		// 0x0618 (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FString                                     BrowserManagerClassName;                          		// 0x061C (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FString                                     ThumbnailManagerClassName;                        		// 0x0628 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	int                                                AutoSaveIndex;                                    		// 0x0634 (0x0004) [0x0000000000004002]              ( CPF_Const | CPF_Config )
	float                                              AutosaveCount;                                    		// 0x0638 (0x0004) [0x0000000000000002]              ( CPF_Const )
	unsigned long                                      AutoSave : 1;                                     		// 0x063C (0x0004) [0x0000000000004001] [0x00000001] ( CPF_Edit | CPF_Config )
	int                                                AutosaveTimeMinutes;                              		// 0x0640 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	class UMaterial*                                   MaterialCopyPasteBuffer;                          		// 0x0644 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UObject*                                     MatineeCopyPasteBuffer;                           		// 0x0648 (0x0004) [0x0000000000000002]              ( CPF_Const )
	TArray< class UAnimationCompressionAlgorithm* >    AnimationCompressionAlgorithms;                   		// 0x064C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           PackagesToBeFullyLoadedAtStartup;                 		// 0x0658 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< struct FName >                             HiddenKismetClassNames;                           		// 0x0664 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< struct FClassMoveInfo >                    ClassRelocationInfo;                              		// 0x0670 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class UnrealEd.UnrealEdEngine" );

		return pClassPointer;
	};

};

UClass* UUnrealEdEngine::pClassPointer = NULL;

// Class UnrealEd.UnrealEdKeyBindings
// 0x000C (0x004C - 0x0040)
class UUnrealEdKeyBindings : public UObject
{
public:
	TArray< struct FEditorKeyBinding >                 KeyBindings;                                      		// 0x0040 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class UnrealEd.UnrealEdKeyBindings" );

		return pClassPointer;
	};

};

UClass* UUnrealEdKeyBindings::pClassPointer = NULL;

// Class UnrealEd.UnrealEdOptions
// 0x0058 (0x0098 - 0x0040)
class UUnrealEdOptions : public UObject
{
public:
	TArray< struct FEditorCommandCategory >            EditorCategories;                                 		// 0x0040 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< struct FEditorCommand >                    EditorCommands;                                   		// 0x004C (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	class UUnrealEdKeyBindings*                        EditorKeyBindings;                                		// 0x0058 (0x0004) [0x0000000000000000]              
	unsigned char                                      UnknownData00[ 0x3C ];                            		// 0x005C (0x003C) UNKNOWN PROPERTY: MapProperty UnrealEd.UnrealEdOptions.CommandMap

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class UnrealEd.UnrealEdOptions" );

		return pClassPointer;
	};

};

UClass* UUnrealEdOptions::pClassPointer = NULL;

// Class UnrealEd.CascadeParticleSystemComponent
// 0x0004 (0x0290 - 0x028C)
class UCascadeParticleSystemComponent : public UParticleSystemComponent
{
public:
	struct FPointer                                    CascadePreviewViewportPtr;                        		// 0x028C (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class UnrealEd.CascadeParticleSystemComponent" );

		return pClassPointer;
	};

};

UClass* UCascadeParticleSystemComponent::pClassPointer = NULL;

// Class UnrealEd.CustomPropertyItemBindings
// 0x0048 (0x0088 - 0x0040)
class UCustomPropertyItemBindings : public UObject
{
public:
	TArray< struct FPropertyItemCustomClass >          CustomPropertyClasses;                            		// 0x0040 (0x000C) [0x0000000000404001]              ( CPF_Edit | CPF_Config | CPF_NeedCtorLink )
	TArray< struct FPropertyTypeCustomClass >          CustomPropertyTypeClasses;                        		// 0x004C (0x000C) [0x0000000000404001]              ( CPF_Edit | CPF_Config | CPF_NeedCtorLink )
	TArray< struct FPropertyItemCustomProxy >          CustomPropertyDrawProxies;                        		// 0x0058 (0x000C) [0x0000000000404001]              ( CPF_Edit | CPF_Config | CPF_NeedCtorLink )
	TArray< struct FPropertyItemCustomProxy >          CustomPropertyInputProxies;                       		// 0x0064 (0x000C) [0x0000000000404001]              ( CPF_Edit | CPF_Config | CPF_NeedCtorLink )
	TArray< struct FPropertyTypeCustomProxy >          CustomPropertyTypeDrawProxies;                    		// 0x0070 (0x000C) [0x0000000000404001]              ( CPF_Edit | CPF_Config | CPF_NeedCtorLink )
	TArray< struct FPropertyTypeCustomProxy >          CustomPropertyTypeInputProxies;                   		// 0x007C (0x000C) [0x0000000000404001]              ( CPF_Edit | CPF_Config | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class UnrealEd.CustomPropertyItemBindings" );

		return pClassPointer;
	};

};

UClass* UCustomPropertyItemBindings::pClassPointer = NULL;

// Class UnrealEd.ObjectEditorViewportInput
// 0x0000 (0x00E0 - 0x00E0)
class UObjectEditorViewportInput : public UEditorViewportInput
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class UnrealEd.ObjectEditorViewportInput" );

		return pClassPointer;
	};

};

UClass* UObjectEditorViewportInput::pClassPointer = NULL;

// Class UnrealEd.SequenceOpHelper_CalloutInputProxy
// 0x0000 (0x0040 - 0x0040)
class USequenceOpHelper_CalloutInputProxy : public USequenceObjectHelper
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class UnrealEd.SequenceOpHelper_CalloutInputProxy" );

		return pClassPointer;
	};

};

UClass* USequenceOpHelper_CalloutInputProxy::pClassPointer = NULL;

// Class UnrealEd.UIEditorOptions
// 0x0038 (0x0078 - 0x0040)
class UUIEditorOptions : public UUIRoot
{
public:
	struct FViewportDimension                          WindowPosition;                                   		// 0x0040 (0x0010) [0x0000000000004000]              ( CPF_Config )
	int                                                DataStoreBrowserSashPosition;                     		// 0x0050 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                ViewportGutterSize;                               		// 0x0054 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                VirtualSizeX;                                     		// 0x0058 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                VirtualSizeY;                                     		// 0x005C (0x0004) [0x0000000000004000]              ( CPF_Config )
	unsigned long                                      bRenderViewportOutline : 1;                       		// 0x0060 (0x0004) [0x0000000000004000] [0x00000001] ( CPF_Config )
	unsigned long                                      bRenderContainerOutline : 1;                      		// 0x0060 (0x0004) [0x0000000000004000] [0x00000002] ( CPF_Config )
	unsigned long                                      bRenderSelectionOutline : 1;                      		// 0x0060 (0x0004) [0x0000000000004000] [0x00000004] ( CPF_Config )
	unsigned long                                      bRenderPerWidgetSelectionOutline : 1;             		// 0x0060 (0x0004) [0x0000000000004000] [0x00000008] ( CPF_Config )
	unsigned long                                      bRenderTitleSafeRegionOutline : 1;                		// 0x0060 (0x0004) [0x0000000000004000] [0x00000010] ( CPF_Config )
	unsigned long                                      mViewDrawBkgnd : 1;                               		// 0x0060 (0x0004) [0x0000000000004000] [0x00000020] ( CPF_Config )
	unsigned long                                      mViewDrawGrid : 1;                                		// 0x0060 (0x0004) [0x0000000000004000] [0x00000040] ( CPF_Config )
	unsigned long                                      bViewShowWireframe : 1;                           		// 0x0060 (0x0004) [0x0000000000004000] [0x00000080] ( CPF_Config )
	unsigned long                                      bSnapToGrid : 1;                                  		// 0x0060 (0x0004) [0x0000000000004000] [0x00000100] ( CPF_Config )
	unsigned long                                      bShowDockHandles : 1;                             		// 0x0060 (0x0004) [0x0000000000004000] [0x00000200] ( CPF_Config )
	int                                                ToolMode;                                         		// 0x0064 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                GridSize;                                         		// 0x0068 (0x0004) [0x0000000000004000]              ( CPF_Config )
	struct FString                                     CurrentPreviewPlatform;                           		// 0x006C (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class UnrealEd.UIEditorOptions" );

		return pClassPointer;
	};

};

UClass* UUIEditorOptions::pClassPointer = NULL;

// Class UnrealEd.UILayer
// 0x0018 (0x0058 - 0x0040)
class UUILayer : public UUILayerBase
{
public:
	struct FString                                     LayerName;                                        		// 0x0040 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FUILayerNode >                      LayerNodes;                                       		// 0x004C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class UnrealEd.UILayer" );

		return pClassPointer;
	};

	int FindNodeIndex ( class UObject* NodeObject );
	bool RemoveNode ( struct FUILayerNode* ExistingNode );
	bool InsertNode ( int InsertIndex, struct FUILayerNode* NodeToInsert );
};

UClass* UUILayer::pClassPointer = NULL;

// Class UnrealEd.UILayerRoot
// 0x0004 (0x005C - 0x0058)
class UUILayerRoot : public UUILayer
{
public:
	class UUIScene*                                    Scene;                                            		// 0x0058 (0x0004) [0x0000000000000002]              ( CPF_Const )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class UnrealEd.UILayerRoot" );

		return pClassPointer;
	};

};

UClass* UUILayerRoot::pClassPointer = NULL;

// Class UnrealEd.UIPreviewString
// 0x000C (0x00FC - 0x00F0)
class UUIPreviewString : public UUIString
{
public:
	class UUIState*                                    CurrentMenuState;                                 		// 0x00F0 (0x0004) [0x0000000000000000]              
	struct FVector2D                                   PreviewViewportSize;                              		// 0x00F4 (0x0008) [0x0000000000000002]              ( CPF_Const )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class UnrealEd.UIPreviewString" );

		return pClassPointer;
	};

};

UClass* UUIPreviewString::pClassPointer = NULL;


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif