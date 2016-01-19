/*
#############################################################################################
# All Points Bulletin Reloaded (1.6) SDK
# Generated with TheFeckless UE3 SDK Generator v1.2_Beta-Rev.39
# ========================================================================================= #
# File: APBEditor_classes.h
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


/*
# ========================================================================================= #
# Enums
# ========================================================================================= #
*/

// Enum APBEditor.cBRDFMapping.etChannel
/*enum etChannel
{
	C_ALL                                              = 0,
	C_RED                                              = 1,
	C_GREEN                                            = 2,
	C_BLUE                                             = 3,
	C_ALPHA                                            = 4,
	C_MAX                                              = 5
};*/

// Enum APBEditor.cBRDFTexture.etTextureSize
/*enum etTextureSize
{
	BQ_64x64                                           = 0,
	BQ_128x128                                         = 1,
	BQ_256x256                                         = 2,
	BQ_512x512                                         = 3,
	BQ_MAX                                             = 4
};*/

// Enum APBEditor.VehicleMask.etVehicleMaskChannel
/*enum etVehicleMaskChannel
{
	VMC_Red                                            = 0,
	VMC_Green                                          = 1,
	VMC_Blue                                           = 2,
	VMC_Alpha                                          = 3,
	VMC_MAX                                            = 4
};*/


/*
# ========================================================================================= #
# Classes
# ========================================================================================= #
*/

// Class APBEditor.BRDFMappingFactoryNew
// 0x0000 (0x0074 - 0x0074)
class UBRDFMappingFactoryNew : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class APBEditor.BRDFMappingFactoryNew" );

		return pClassPointer;
	};

};

UClass* UBRDFMappingFactoryNew::pClassPointer = NULL;

// Class APBEditor.BRDFTexture3DFactoryNew
// 0x0000 (0x0074 - 0x0074)
class UBRDFTexture3DFactoryNew : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class APBEditor.BRDFTexture3DFactoryNew" );

		return pClassPointer;
	};

};

UClass* UBRDFTexture3DFactoryNew::pClassPointer = NULL;

// Class APBEditor.BRDFTextureFactoryNew
// 0x0000 (0x0074 - 0x0074)
class UBRDFTextureFactoryNew : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class APBEditor.BRDFTextureFactoryNew" );

		return pClassPointer;
	};

};

UClass* UBRDFTextureFactoryNew::pClassPointer = NULL;

// Class APBEditor.BuildGeometryCommandlet
// 0x0000 (0x0080 - 0x0080)
class UBuildGeometryCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class APBEditor.BuildGeometryCommandlet" );

		return pClassPointer;
	};

};

UClass* UBuildGeometryCommandlet::pClassPointer = NULL;

// Class APBEditor.BuildLightingAreaCommandlet
// 0x0000 (0x0080 - 0x0080)
class UBuildLightingAreaCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class APBEditor.BuildLightingAreaCommandlet" );

		return pClassPointer;
	};

};

UClass* UBuildLightingAreaCommandlet::pClassPointer = NULL;

// Class APBEditor.cAnimationDescriptorFactoryNew
// 0x0000 (0x0074 - 0x0074)
class UcAnimationDescriptorFactoryNew : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class APBEditor.cAnimationDescriptorFactoryNew" );

		return pClassPointer;
	};

};

UClass* UcAnimationDescriptorFactoryNew::pClassPointer = NULL;

// Class APBEditor.cAnimationDrivenSequenceBuilder
// 0x0008 (0x0048 - 0x0040)
class UcAnimationDrivenSequenceBuilder : public UObject
{
public:
	struct FPointer                                    VfTable_FCallbackEventDevice;                     		// 0x0040 (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	class USkeletalMeshComponent*                      m_SkeletalMeshComponent;                          		// 0x0044 (0x0004) [0x000000000408000A]              ( CPF_Const | CPF_ExportObject | CPF_Component | CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class APBEditor.cAnimationDrivenSequenceBuilder" );

		return pClassPointer;
	};

};

UClass* UcAnimationDrivenSequenceBuilder::pClassPointer = NULL;

// Class APBEditor.cAnimationDrivenTriggerBuilder
// 0x0004 (0x0044 - 0x0040)
class UcAnimationDrivenTriggerBuilder : public UObject
{
public:
	struct FPointer                                    VfTable_FCallbackEventDevice;                     		// 0x0040 (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class APBEditor.cAnimationDrivenTriggerBuilder" );

		return pClassPointer;
	};

};

UClass* UcAnimationDrivenTriggerBuilder::pClassPointer = NULL;

// Class APBEditor.cAPBGenericBrowserType_Animation
// 0x0000 (0x005C - 0x005C)
class UcAPBGenericBrowserType_Animation : public UGenericBrowserType_Animation
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class APBEditor.cAPBGenericBrowserType_Animation" );

		return pClassPointer;
	};

};

UClass* UcAPBGenericBrowserType_Animation::pClassPointer = NULL;

// Class APBEditor.cAPBGenericBrowserType_AnimationDescriptor
// 0x0000 (0x005C - 0x005C)
class UcAPBGenericBrowserType_AnimationDescriptor : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class APBEditor.cAPBGenericBrowserType_AnimationDescriptor" );

		return pClassPointer;
	};

};

UClass* UcAPBGenericBrowserType_AnimationDescriptor::pClassPointer = NULL;

// Class APBEditor.cAPBGenericBrowserType_AnimTree
// 0x0000 (0x005C - 0x005C)
class UcAPBGenericBrowserType_AnimTree : public UGenericBrowserType_AnimTree
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class APBEditor.cAPBGenericBrowserType_AnimTree" );

		return pClassPointer;
	};

};

UClass* UcAPBGenericBrowserType_AnimTree::pClassPointer = NULL;

// Class APBEditor.cAPBGenericBrowserType_BodySectionDescriptor
// 0x0000 (0x005C - 0x005C)
class UcAPBGenericBrowserType_BodySectionDescriptor : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class APBEditor.cAPBGenericBrowserType_BodySectionDescriptor" );

		return pClassPointer;
	};

};

UClass* UcAPBGenericBrowserType_BodySectionDescriptor::pClassPointer = NULL;

// Class APBEditor.cAPBGenericBrowserType_cAnimationInfo
// 0x0000 (0x005C - 0x005C)
class UcAPBGenericBrowserType_cAnimationInfo : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class APBEditor.cAPBGenericBrowserType_cAnimationInfo" );

		return pClassPointer;
	};

};

UClass* UcAPBGenericBrowserType_cAnimationInfo::pClassPointer = NULL;

// Class APBEditor.cAPBGenericBrowserType_cPedestrianSetupInfo
// 0x0000 (0x005C - 0x005C)
class UcAPBGenericBrowserType_cPedestrianSetupInfo : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class APBEditor.cAPBGenericBrowserType_cPedestrianSetupInfo" );

		return pClassPointer;
	};

};

UClass* UcAPBGenericBrowserType_cPedestrianSetupInfo::pClassPointer = NULL;

// Class APBEditor.cAPBGenericBrowserType_cRandomSeed
// 0x0000 (0x005C - 0x005C)
class UcAPBGenericBrowserType_cRandomSeed : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class APBEditor.cAPBGenericBrowserType_cRandomSeed" );

		return pClassPointer;
	};

};

UClass* UcAPBGenericBrowserType_cRandomSeed::pClassPointer = NULL;

// Class APBEditor.cAPBGenericBrowserType_cVehicleSetupInfo
// 0x0000 (0x005C - 0x005C)
class UcAPBGenericBrowserType_cVehicleSetupInfo : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class APBEditor.cAPBGenericBrowserType_cVehicleSetupInfo" );

		return pClassPointer;
	};

};

UClass* UcAPBGenericBrowserType_cVehicleSetupInfo::pClassPointer = NULL;

// Class APBEditor.cAPBGenericBrowserType_cWeatherSettings
// 0x0000 (0x005C - 0x005C)
class UcAPBGenericBrowserType_cWeatherSettings : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class APBEditor.cAPBGenericBrowserType_cWeatherSettings" );

		return pClassPointer;
	};

};

UClass* UcAPBGenericBrowserType_cWeatherSettings::pClassPointer = NULL;

// Class APBEditor.cAPBGenericBrowserType_Golemobile
// 0x0000 (0x005C - 0x005C)
class UcAPBGenericBrowserType_Golemobile : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class APBEditor.cAPBGenericBrowserType_Golemobile" );

		return pClassPointer;
	};

};

UClass* UcAPBGenericBrowserType_Golemobile::pClassPointer = NULL;

// Class APBEditor.cAPBGenericBrowserType_ItemRestrictionTree
// 0x0000 (0x005C - 0x005C)
class UcAPBGenericBrowserType_ItemRestrictionTree : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class APBEditor.cAPBGenericBrowserType_ItemRestrictionTree" );

		return pClassPointer;
	};

};

UClass* UcAPBGenericBrowserType_ItemRestrictionTree::pClassPointer = NULL;

// Class APBEditor.cAPBGenericBrowserType_MorphTargetSet
// 0x0000 (0x005C - 0x005C)
class UcAPBGenericBrowserType_MorphTargetSet : public UGenericBrowserType_MorphTargetSet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class APBEditor.cAPBGenericBrowserType_MorphTargetSet" );

		return pClassPointer;
	};

};

UClass* UcAPBGenericBrowserType_MorphTargetSet::pClassPointer = NULL;

// Class APBEditor.cAPBGenericBrowserType_PlayerAnimSetup
// 0x0000 (0x005C - 0x005C)
class UcAPBGenericBrowserType_PlayerAnimSetup : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class APBEditor.cAPBGenericBrowserType_PlayerAnimSetup" );

		return pClassPointer;
	};

};

UClass* UcAPBGenericBrowserType_PlayerAnimSetup::pClassPointer = NULL;

// Class APBEditor.cAPBGenericBrowserType_PrecacheObject
// 0x0000 (0x005C - 0x005C)
class UcAPBGenericBrowserType_PrecacheObject : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class APBEditor.cAPBGenericBrowserType_PrecacheObject" );

		return pClassPointer;
	};

};

UClass* UcAPBGenericBrowserType_PrecacheObject::pClassPointer = NULL;

// Class APBEditor.cAPBGenericBrowserType_SkeletalMesh
// 0x0000 (0x005C - 0x005C)
class UcAPBGenericBrowserType_SkeletalMesh : public UGenericBrowserType_SkeletalMesh
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class APBEditor.cAPBGenericBrowserType_SkeletalMesh" );

		return pClassPointer;
	};

};

UClass* UcAPBGenericBrowserType_SkeletalMesh::pClassPointer = NULL;

// Class APBEditor.cAPBGenericBrowserType_VignetteDescriptor
// 0x0000 (0x005C - 0x005C)
class UcAPBGenericBrowserType_VignetteDescriptor : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class APBEditor.cAPBGenericBrowserType_VignetteDescriptor" );

		return pClassPointer;
	};

};

UClass* UcAPBGenericBrowserType_VignetteDescriptor::pClassPointer = NULL;

// Class APBEditor.cAPBRWTechLevelInfo
// 0x0010 (0x024C - 0x023C)
class AcAPBRWTechLevelInfo : public AActor
{
public:
	TArray< struct FString >                           m_GeographicalGrids;                              		// 0x023C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned long                                      m_bIsTechLevel : 1;                               		// 0x0248 (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class APBEditor.cAPBRWTechLevelInfo" );

		return pClassPointer;
	};

};

UClass* AcAPBRWTechLevelInfo::pClassPointer = NULL;

// Class APBEditor.cAPBUnrealEdEngine
// 0x0018 (0x0694 - 0x067C)
class UcAPBUnrealEdEngine : public UUnrealEdEngine
{
public:
	class UcAnimationDrivenSequenceBuilder*            m_AnimationDrivenSequenceBuilder;                 		// 0x067C (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UcAnimationDrivenTriggerBuilder*             m_AnimationDrivenTriggerBuilder;                  		// 0x0680 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UcFlushAnimSetCacheForPIE*                   m_FlushAnimSetCacheForPIE;                        		// 0x0684 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UcEnsurePIEWorld*                            m_EnsurePIEWorld;                                 		// 0x0688 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UcFlushDataStoresForPIE*                     m_FlushDataStoresForPIE;                          		// 0x068C (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UcWeatherManager*                            m_WeatherManager;                                 		// 0x0690 (0x0004) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class APBEditor.cAPBUnrealEdEngine" );

		return pClassPointer;
	};

};

UClass* UcAPBUnrealEdEngine::pClassPointer = NULL;

// Class APBEditor.cBodySectionDescriptorFactoryNew
// 0x0000 (0x0074 - 0x0074)
class UcBodySectionDescriptorFactoryNew : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class APBEditor.cBodySectionDescriptorFactoryNew" );

		return pClassPointer;
	};

};

UClass* UcBodySectionDescriptorFactoryNew::pClassPointer = NULL;

// Class APBEditor.cBRDFEditorPreviewSettings
// 0x0010 (0x0050 - 0x0040)
class UcBRDFEditorPreviewSettings : public UObject
{
public:
	class UStaticMesh*                                 StaticMeshPreview;                                		// 0x0040 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class USkeletalMesh*                               SkeletalMeshPreview;                              		// 0x0044 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UTexture2D*                                  DiffuseMap;                                       		// 0x0048 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UTexture2D*                                  NormalMap;                                        		// 0x004C (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class APBEditor.cBRDFEditorPreviewSettings" );

		return pClassPointer;
	};

};

UClass* UcBRDFEditorPreviewSettings::pClassPointer = NULL;

// Class APBEditor.cBRDFFunction
// 0x0014 (0x0060 - 0x004C)
class UcBRDFFunction : public UComponent
{
public:
	float                                              SpecularIntensity;                                		// 0x004C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              SubScattering;                                    		// 0x0050 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              SubScatteringPower;                               		// 0x0054 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fEmissiveIntensity;                               		// 0x0058 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fChromeIntensity;                                 		// 0x005C (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class APBEditor.cBRDFFunction" );

		return pClassPointer;
	};

};

UClass* UcBRDFFunction::pClassPointer = NULL;

// Class APBEditor.cBRDFFunction_JordiMetal
// 0x0004 (0x0064 - 0x0060)
class UcBRDFFunction_JordiMetal : public UcBRDFFunction
{
public:
	float                                              DiffusePower;                                     		// 0x0060 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class APBEditor.cBRDFFunction_JordiMetal" );

		return pClassPointer;
	};

};

UClass* UcBRDFFunction_JordiMetal::pClassPointer = NULL;

// Class APBEditor.cBRDFFunction_Metal
// 0x0008 (0x0068 - 0x0060)
class UcBRDFFunction_Metal : public UcBRDFFunction
{
public:
	float                                              Diffuse;                                          		// 0x0060 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              SpecularPower;                                    		// 0x0064 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class APBEditor.cBRDFFunction_Metal" );

		return pClassPointer;
	};

};

UClass* UcBRDFFunction_Metal::pClassPointer = NULL;

// Class APBEditor.cBRDFFunction_Phong
// 0x0004 (0x0064 - 0x0060)
class UcBRDFFunction_Phong : public UcBRDFFunction
{
public:
	float                                              SpecularityPower;                                 		// 0x0060 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class APBEditor.cBRDFFunction_Phong" );

		return pClassPointer;
	};

};

UClass* UcBRDFFunction_Phong::pClassPointer = NULL;

// Class APBEditor.cBRDFFunction_Skin
// 0x0008 (0x0068 - 0x0060)
class UcBRDFFunction_Skin : public UcBRDFFunction
{
public:
	float                                              SpecularityPower;                                 		// 0x0060 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              FresnelEffect;                                    		// 0x0064 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class APBEditor.cBRDFFunction_Skin" );

		return pClassPointer;
	};

};

UClass* UcBRDFFunction_Skin::pClassPointer = NULL;

// Class APBEditor.cBRDFFunction_Velvet
// 0x0004 (0x0064 - 0x0060)
class UcBRDFFunction_Velvet : public UcBRDFFunction
{
public:
	float                                              Effect;                                           		// 0x0060 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class APBEditor.cBRDFFunction_Velvet" );

		return pClassPointer;
	};

};

UClass* UcBRDFFunction_Velvet::pClassPointer = NULL;

// Class APBEditor.cBRDFMapping
// 0x0018 (0x0058 - 0x0040)
class UcBRDFMapping : public UObject
{
public:
	class UcBRDFTexture3D*                             BRDFTexture3D;                                    		// 0x0040 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UTexture2D*                                  TextureMap;                                       		// 0x0044 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< class UcBRDFTextureMask* >                 TextureMasks;                                     		// 0x0048 (0x000C) [0x0000000004400041]              ( CPF_Edit | CPF_EditConstArray | CPF_NeedCtorLink | CPF_EditInline )
	unsigned long                                      m_bLightingMapDirty : 1;                          		// 0x0054 (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class APBEditor.cBRDFMapping" );

		return pClassPointer;
	};

};

UClass* UcBRDFMapping::pClassPointer = NULL;

// Class APBEditor.cBRDFTexture
// 0x0010 (0x0050 - 0x0040)
class UcBRDFTexture : public UObject
{
public:
	class UcBRDFFunction*                              LightingModelFunction;                            		// 0x0040 (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	unsigned char                                      TextureSize;                                      		// 0x0044 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	class UTexture2D*                                  GeneratedTexture;                                 		// 0x0048 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bDirty : 1;                                     		// 0x004C (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class APBEditor.cBRDFTexture" );

		return pClassPointer;
	};

};

UClass* UcBRDFTexture::pClassPointer = NULL;

// Class APBEditor.cBRDFTexture3D
// 0x0018 (0x0058 - 0x0040)
class UcBRDFTexture3D : public UObject
{
public:
	struct FString                                     sOutputFile;                                      		// 0x0040 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< class UcBRDFTexture* >                     BRDFTextures;                                     		// 0x004C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class APBEditor.cBRDFTexture3D" );

		return pClassPointer;
	};

};

UClass* UcBRDFTexture3D::pClassPointer = NULL;

// Class APBEditor.cBRDFTextureMask
// 0x000C (0x004C - 0x0040)
class UcBRDFTextureMask : public UObject
{
public:
	struct FName                                       BRDFName;                                         		// 0x0040 (0x0008) [0x0000000000020001]              ( CPF_Edit | CPF_EditConst )
	class UTexture2D*                                  Texture;                                          		// 0x0048 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class APBEditor.cBRDFTextureMask" );

		return pClassPointer;
	};

};

UClass* UcBRDFTextureMask::pClassPointer = NULL;

// Class APBEditor.cDynamicFontDataFactoryNew
// 0x0064 (0x00D8 - 0x0074)
class UcDynamicFontDataFactoryNew : public UFactory
{
public:
	unsigned char                                      UnknownData00[ 0x64 ];                            		// 0x0074 (0x0064) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class APBEditor.cDynamicFontDataFactoryNew" );

		return pClassPointer;
	};

};

UClass* UcDynamicFontDataFactoryNew::pClassPointer = NULL;

// Class APBEditor.cEnsurePIEWorld
// 0x0008 (0x0048 - 0x0040)
class UcEnsurePIEWorld : public UObject
{
public:
	struct FPointer                                    VfTable_FCallbackEventDevice;                     		// 0x0040 (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	class UWorld*                                      m_OldGWorld;                                      		// 0x0044 (0x0004) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class APBEditor.cEnsurePIEWorld" );

		return pClassPointer;
	};

};

UClass* UcEnsurePIEWorld::pClassPointer = NULL;

// Class APBEditor.cFlushAnimSetCacheForPIE
// 0x0004 (0x0044 - 0x0040)
class UcFlushAnimSetCacheForPIE : public UObject
{
public:
	struct FPointer                                    VfTable_FCallbackEventDevice;                     		// 0x0040 (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class APBEditor.cFlushAnimSetCacheForPIE" );

		return pClassPointer;
	};

};

UClass* UcFlushAnimSetCacheForPIE::pClassPointer = NULL;

// Class APBEditor.cGenericBrowserType_BRDFMapping
// 0x0000 (0x005C - 0x005C)
class UcGenericBrowserType_BRDFMapping : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class APBEditor.cGenericBrowserType_BRDFMapping" );

		return pClassPointer;
	};

};

UClass* UcGenericBrowserType_BRDFMapping::pClassPointer = NULL;

// Class APBEditor.cGenericBrowserType_BRDFTexture
// 0x0000 (0x005C - 0x005C)
class UcGenericBrowserType_BRDFTexture : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class APBEditor.cGenericBrowserType_BRDFTexture" );

		return pClassPointer;
	};

};

UClass* UcGenericBrowserType_BRDFTexture::pClassPointer = NULL;

// Class APBEditor.cGenericBrowserType_BRDFTexture3D
// 0x0000 (0x005C - 0x005C)
class UcGenericBrowserType_BRDFTexture3D : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class APBEditor.cGenericBrowserType_BRDFTexture3D" );

		return pClassPointer;
	};

};

UClass* UcGenericBrowserType_BRDFTexture3D::pClassPointer = NULL;

// Class APBEditor.cGenericBrowserType_DynamicFont
// 0x0000 (0x005C - 0x005C)
class UcGenericBrowserType_DynamicFont : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class APBEditor.cGenericBrowserType_DynamicFont" );

		return pClassPointer;
	};

};

UClass* UcGenericBrowserType_DynamicFont::pClassPointer = NULL;

// Class APBEditor.cGenericBrowserType_DynamicFontData
// 0x0000 (0x005C - 0x005C)
class UcGenericBrowserType_DynamicFontData : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class APBEditor.cGenericBrowserType_DynamicFontData" );

		return pClassPointer;
	};

};

UClass* UcGenericBrowserType_DynamicFontData::pClassPointer = NULL;

// Class APBEditor.ClearMaterialUsageFlagsCommandlet
// 0x0000 (0x0080 - 0x0080)
class UClearMaterialUsageFlagsCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class APBEditor.ClearMaterialUsageFlagsCommandlet" );

		return pClassPointer;
	};

};

UClass* UClearMaterialUsageFlagsCommandlet::pClassPointer = NULL;

// Class APBEditor.cPlayerAnimSetupFactoryNew
// 0x0000 (0x0074 - 0x0074)
class UcPlayerAnimSetupFactoryNew : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class APBEditor.cPlayerAnimSetupFactoryNew" );

		return pClassPointer;
	};

};

UClass* UcPlayerAnimSetupFactoryNew::pClassPointer = NULL;

// Class APBEditor.cPrecacheObjectFactoryNew
// 0x0000 (0x0074 - 0x0074)
class UcPrecacheObjectFactoryNew : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class APBEditor.cPrecacheObjectFactoryNew" );

		return pClassPointer;
	};

};

UClass* UcPrecacheObjectFactoryNew::pClassPointer = NULL;

// Class APBEditor.cRandomSeedFactoryNew
// 0x0000 (0x0074 - 0x0074)
class UcRandomSeedFactoryNew : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class APBEditor.cRandomSeedFactoryNew" );

		return pClassPointer;
	};

};

UClass* UcRandomSeedFactoryNew::pClassPointer = NULL;

// Class APBEditor.CullDistanceCheckCommandlet
// 0x0000 (0x0080 - 0x0080)
class UCullDistanceCheckCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class APBEditor.CullDistanceCheckCommandlet" );

		return pClassPointer;
	};

	int eventMain ( struct FString Params );
};

UClass* UCullDistanceCheckCommandlet::pClassPointer = NULL;

// Class APBEditor.cVehicleSetupInfoFactoryNew
// 0x0000 (0x0074 - 0x0074)
class UcVehicleSetupInfoFactoryNew : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class APBEditor.cVehicleSetupInfoFactoryNew" );

		return pClassPointer;
	};

};

UClass* UcVehicleSetupInfoFactoryNew::pClassPointer = NULL;

// Class APBEditor.cVignetteDescriptorFactoryNew
// 0x0000 (0x0074 - 0x0074)
class UcVignetteDescriptorFactoryNew : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class APBEditor.cVignetteDescriptorFactoryNew" );

		return pClassPointer;
	};

};

UClass* UcVignetteDescriptorFactoryNew::pClassPointer = NULL;

// Class APBEditor.cVignetteDescriptorSelectionProxy
// 0x0008 (0x0048 - 0x0040)
class UcVignetteDescriptorSelectionProxy : public UObject
{
public:
	class UcVignetteDescriptor*                        m_pDescriptor;                                    		// 0x0040 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bIsStartNode : 1;                               		// 0x0044 (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class APBEditor.cVignetteDescriptorSelectionProxy" );

		return pClassPointer;
	};

};

UClass* UcVignetteDescriptorSelectionProxy::pClassPointer = NULL;

// Class APBEditor.cWeatherSettingsFactoryNew
// 0x0000 (0x0074 - 0x0074)
class UcWeatherSettingsFactoryNew : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class APBEditor.cWeatherSettingsFactoryNew" );

		return pClassPointer;
	};

};

UClass* UcWeatherSettingsFactoryNew::pClassPointer = NULL;

// Class APBEditor.EnableNeverStreamCommandlet
// 0x0000 (0x0080 - 0x0080)
class UEnableNeverStreamCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class APBEditor.EnableNeverStreamCommandlet" );

		return pClassPointer;
	};

	int eventMain ( struct FString Params );
};

UClass* UEnableNeverStreamCommandlet::pClassPointer = NULL;

// Class APBEditor.ExportAnimationDetailsCommandlet
// 0x0000 (0x0080 - 0x0080)
class UExportAnimationDetailsCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class APBEditor.ExportAnimationDetailsCommandlet" );

		return pClassPointer;
	};

};

UClass* UExportAnimationDetailsCommandlet::pClassPointer = NULL;

// Class APBEditor.ExportHUDTexturesCommandlet
// 0x0000 (0x0080 - 0x0080)
class UExportHUDTexturesCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class APBEditor.ExportHUDTexturesCommandlet" );

		return pClassPointer;
	};

};

UClass* UExportHUDTexturesCommandlet::pClassPointer = NULL;

// Class APBEditor.FindMultipleMeshReferencesCommandlet
// 0x0000 (0x0080 - 0x0080)
class UFindMultipleMeshReferencesCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class APBEditor.FindMultipleMeshReferencesCommandlet" );

		return pClassPointer;
	};

};

UClass* UFindMultipleMeshReferencesCommandlet::pClassPointer = NULL;

// Class APBEditor.FixDesignsScaleCommandlet
// 0x0000 (0x0080 - 0x0080)
class UFixDesignsScaleCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class APBEditor.FixDesignsScaleCommandlet" );

		return pClassPointer;
	};

	int eventMain ( struct FString Params );
};

UClass* UFixDesignsScaleCommandlet::pClassPointer = NULL;

// Class APBEditor.FixReferencedMaterialsCommandlet
// 0x0000 (0x0080 - 0x0080)
class UFixReferencedMaterialsCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class APBEditor.FixReferencedMaterialsCommandlet" );

		return pClassPointer;
	};

};

UClass* UFixReferencedMaterialsCommandlet::pClassPointer = NULL;

// Class APBEditor.FixVehicleTexturesCommandlet
// 0x0000 (0x0080 - 0x0080)
class UFixVehicleTexturesCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class APBEditor.FixVehicleTexturesCommandlet" );

		return pClassPointer;
	};

};

UClass* UFixVehicleTexturesCommandlet::pClassPointer = NULL;

// Class APBEditor.GenerateGolemPartsSDDCommandlet
// 0x0000 (0x0080 - 0x0080)
class UGenerateGolemPartsSDDCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class APBEditor.GenerateGolemPartsSDDCommandlet" );

		return pClassPointer;
	};

};

UClass* UGenerateGolemPartsSDDCommandlet::pClassPointer = NULL;

// Class APBEditor.GenerateUVsCommandlet
// 0x0000 (0x0080 - 0x0080)
class UGenerateUVsCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class APBEditor.GenerateUVsCommandlet" );

		return pClassPointer;
	};

};

UClass* UGenerateUVsCommandlet::pClassPointer = NULL;

// Class APBEditor.GenerateVehiclePartsSDDCommandlet
// 0x0000 (0x0080 - 0x0080)
class UGenerateVehiclePartsSDDCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class APBEditor.GenerateVehiclePartsSDDCommandlet" );

		return pClassPointer;
	};

};

UClass* UGenerateVehiclePartsSDDCommandlet::pClassPointer = NULL;

// Class APBEditor.GenericBrowserType_GolemBase
// 0x0000 (0x005C - 0x005C)
class UGenericBrowserType_GolemBase : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class APBEditor.GenericBrowserType_GolemBase" );

		return pClassPointer;
	};

};

UClass* UGenericBrowserType_GolemBase::pClassPointer = NULL;

// Class APBEditor.GenericBrowserType_GolemDescriptor
// 0x0000 (0x005C - 0x005C)
class UGenericBrowserType_GolemDescriptor : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class APBEditor.GenericBrowserType_GolemDescriptor" );

		return pClassPointer;
	};

};

UClass* UGenericBrowserType_GolemDescriptor::pClassPointer = NULL;

// Class APBEditor.GenericBrowserType_GolemobileBase
// 0x0000 (0x005C - 0x005C)
class UGenericBrowserType_GolemobileBase : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class APBEditor.GenericBrowserType_GolemobileBase" );

		return pClassPointer;
	};

};

UClass* UGenericBrowserType_GolemobileBase::pClassPointer = NULL;

// Class APBEditor.GenericBrowserType_GolemobileDescriptor
// 0x0000 (0x005C - 0x005C)
class UGenericBrowserType_GolemobileDescriptor : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class APBEditor.GenericBrowserType_GolemobileDescriptor" );

		return pClassPointer;
	};

};

UClass* UGenericBrowserType_GolemobileDescriptor::pClassPointer = NULL;

// Class APBEditor.GenericBrowserType_GolemobilePart
// 0x0000 (0x005C - 0x005C)
class UGenericBrowserType_GolemobilePart : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class APBEditor.GenericBrowserType_GolemobilePart" );

		return pClassPointer;
	};

};

UClass* UGenericBrowserType_GolemobilePart::pClassPointer = NULL;

// Class APBEditor.GenericBrowserType_GolemPart
// 0x0000 (0x005C - 0x005C)
class UGenericBrowserType_GolemPart : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class APBEditor.GenericBrowserType_GolemPart" );

		return pClassPointer;
	};

};

UClass* UGenericBrowserType_GolemPart::pClassPointer = NULL;

// Class APBEditor.GenericBrowserType_TESTextureClass
// 0x0000 (0x005C - 0x005C)
class UGenericBrowserType_TESTextureClass : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class APBEditor.GenericBrowserType_TESTextureClass" );

		return pClassPointer;
	};

};

UClass* UGenericBrowserType_TESTextureClass::pClassPointer = NULL;

// Class APBEditor.GenericBrowserType_VehicleMask
// 0x0000 (0x005C - 0x005C)
class UGenericBrowserType_VehicleMask : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class APBEditor.GenericBrowserType_VehicleMask" );

		return pClassPointer;
	};

};

UClass* UGenericBrowserType_VehicleMask::pClassPointer = NULL;

// Class APBEditor.GenericBrowserType_VehicleMaskTemplate
// 0x0000 (0x005C - 0x005C)
class UGenericBrowserType_VehicleMaskTemplate : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class APBEditor.GenericBrowserType_VehicleMaskTemplate" );

		return pClassPointer;
	};

};

UClass* UGenericBrowserType_VehicleMaskTemplate::pClassPointer = NULL;

// Class APBEditor.GolemBaseFactoryNew
// 0x0000 (0x0074 - 0x0074)
class UGolemBaseFactoryNew : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class APBEditor.GolemBaseFactoryNew" );

		return pClassPointer;
	};

};

UClass* UGolemBaseFactoryNew::pClassPointer = NULL;

// Class APBEditor.GolemDescriptorFactoryNew
// 0x0000 (0x0074 - 0x0074)
class UGolemDescriptorFactoryNew : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class APBEditor.GolemDescriptorFactoryNew" );

		return pClassPointer;
	};

};

UClass* UGolemDescriptorFactoryNew::pClassPointer = NULL;

// Class APBEditor.GolemobileBaseFactoryNew
// 0x0000 (0x0074 - 0x0074)
class UGolemobileBaseFactoryNew : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class APBEditor.GolemobileBaseFactoryNew" );

		return pClassPointer;
	};

};

UClass* UGolemobileBaseFactoryNew::pClassPointer = NULL;

// Class APBEditor.GolemobilePartFactoryNew
// 0x0000 (0x0074 - 0x0074)
class UGolemobilePartFactoryNew : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class APBEditor.GolemobilePartFactoryNew" );

		return pClassPointer;
	};

};

UClass* UGolemobilePartFactoryNew::pClassPointer = NULL;

// Class APBEditor.GolemPartFactoryNew
// 0x0000 (0x0074 - 0x0074)
class UGolemPartFactoryNew : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class APBEditor.GolemPartFactoryNew" );

		return pClassPointer;
	};

};

UClass* UGolemPartFactoryNew::pClassPointer = NULL;

// Class APBEditor.GolemPartLabelRenderer
// 0x0000 (0x0040 - 0x0040)
class UGolemPartLabelRenderer : public UThumbnailLabelRenderer
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class APBEditor.GolemPartLabelRenderer" );

		return pClassPointer;
	};

};

UClass* UGolemPartLabelRenderer::pClassPointer = NULL;

// Class APBEditor.GPVSkelComponent
// 0x0004 (0x04AC - 0x04A8)
class UGPVSkelComponent : public USkeletalMeshComponent
{
public:
	struct FPointer                                    m_pGolemEditor;                                   		// 0x04A8 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class APBEditor.GPVSkelComponent" );

		return pClassPointer;
	};

};

UClass* UGPVSkelComponent::pClassPointer = NULL;

// Class APBEditor.ItemRestrictionTreeFactoryNew
// 0x0000 (0x0074 - 0x0074)
class UItemRestrictionTreeFactoryNew : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class APBEditor.ItemRestrictionTreeFactoryNew" );

		return pClassPointer;
	};

};

UClass* UItemRestrictionTreeFactoryNew::pClassPointer = NULL;

// Class APBEditor.LocalizationValidatorCommandlet
// 0x0000 (0x0080 - 0x0080)
class ULocalizationValidatorCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class APBEditor.LocalizationValidatorCommandlet" );

		return pClassPointer;
	};

};

UClass* ULocalizationValidatorCommandlet::pClassPointer = NULL;

// Class APBEditor.ModifyAnimSetAnimationCategoryCommandlet
// 0x0000 (0x0080 - 0x0080)
class UModifyAnimSetAnimationCategoryCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class APBEditor.ModifyAnimSetAnimationCategoryCommandlet" );

		return pClassPointer;
	};

};

UClass* UModifyAnimSetAnimationCategoryCommandlet::pClassPointer = NULL;

// Class APBEditor.OptimiseDistrictCommandlet
// 0x0000 (0x0080 - 0x0080)
class UOptimiseDistrictCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class APBEditor.OptimiseDistrictCommandlet" );

		return pClassPointer;
	};

};

UClass* UOptimiseDistrictCommandlet::pClassPointer = NULL;

// Class APBEditor.OptimiseMeshesCommandlet
// 0x0000 (0x0080 - 0x0080)
class UOptimiseMeshesCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class APBEditor.OptimiseMeshesCommandlet" );

		return pClassPointer;
	};

};

UClass* UOptimiseMeshesCommandlet::pClassPointer = NULL;

// Class APBEditor.OutputPropsCommandlet
// 0x0008 (0x0088 - 0x0080)
class UOutputPropsCommandlet : public UCommandlet
{
public:
	unsigned char                                      UnknownData00[ 0x8 ];                             		// 0x0080 (0x0008) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class APBEditor.OutputPropsCommandlet" );

		return pClassPointer;
	};

};

UClass* UOutputPropsCommandlet::pClassPointer = NULL;

// Class APBEditor.PrepareStreamingLevelCommandlet
// 0x0000 (0x0080 - 0x0080)
class UPrepareStreamingLevelCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class APBEditor.PrepareStreamingLevelCommandlet" );

		return pClassPointer;
	};

};

UClass* UPrepareStreamingLevelCommandlet::pClassPointer = NULL;

// Class APBEditor.ReattachDecalsCommandlet
// 0x0000 (0x0080 - 0x0080)
class UReattachDecalsCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class APBEditor.ReattachDecalsCommandlet" );

		return pClassPointer;
	};

};

UClass* UReattachDecalsCommandlet::pClassPointer = NULL;

// Class APBEditor.RemoveDuplicateFoliageInstancesCommandlet
// 0x0000 (0x0080 - 0x0080)
class URemoveDuplicateFoliageInstancesCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class APBEditor.RemoveDuplicateFoliageInstancesCommandlet" );

		return pClassPointer;
	};

};

UClass* URemoveDuplicateFoliageInstancesCommandlet::pClassPointer = NULL;

// Class APBEditor.RemoveEditorOnlyDataCommandlet
// 0x0000 (0x0080 - 0x0080)
class URemoveEditorOnlyDataCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class APBEditor.RemoveEditorOnlyDataCommandlet" );

		return pClassPointer;
	};

	int eventMain ( struct FString Params );
};

UClass* URemoveEditorOnlyDataCommandlet::pClassPointer = NULL;

// Class APBEditor.ReplaceActorsCommandlet
// 0x0000 (0x0080 - 0x0080)
class UReplaceActorsCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class APBEditor.ReplaceActorsCommandlet" );

		return pClassPointer;
	};

};

UClass* UReplaceActorsCommandlet::pClassPointer = NULL;

// Class APBEditor.RWTechImportersCommandlet
// 0x0000 (0x0080 - 0x0080)
class URWTechImportersCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class APBEditor.RWTechImportersCommandlet" );

		return pClassPointer;
	};

	int eventMain ( struct FString Params );
};

UClass* URWTechImportersCommandlet::pClassPointer = NULL;

// Class APBEditor.RWTechImportersDistrictAbbreviations
// 0x000C (0x004C - 0x0040)
class URWTechImportersDistrictAbbreviations : public UObject
{
public:
	TArray< struct FDistrictAbbreviation >             DistrictAbbreviations;                            		// 0x0040 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class APBEditor.RWTechImportersDistrictAbbreviations" );

		return pClassPointer;
	};

};

UClass* URWTechImportersDistrictAbbreviations::pClassPointer = NULL;

// Class APBEditor.RWTechImportersNonUCCCommandlet
// 0x0000 (0x0080 - 0x0080)
class URWTechImportersNonUCCCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class APBEditor.RWTechImportersNonUCCCommandlet" );

		return pClassPointer;
	};

	int eventMain ( struct FString Params );
};

UClass* URWTechImportersNonUCCCommandlet::pClassPointer = NULL;

// Class APBEditor.SealGeometryCommandlet
// 0x0000 (0x0080 - 0x0080)
class USealGeometryCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class APBEditor.SealGeometryCommandlet" );

		return pClassPointer;
	};

};

UClass* USealGeometryCommandlet::pClassPointer = NULL;

// Class APBEditor.SetBakedVehicleTextures
// 0x0000 (0x0080 - 0x0080)
class USetBakedVehicleTextures : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class APBEditor.SetBakedVehicleTextures" );

		return pClassPointer;
	};

	int eventMain ( struct FString Params );
	void SetLODBias ( class UTexture2D* Tex, struct FString textureTypeName );
};

UClass* USetBakedVehicleTextures::pClassPointer = NULL;

// Class APBEditor.SetSkeletalMeshAttributeCommandlet
// 0x0000 (0x0080 - 0x0080)
class USetSkeletalMeshAttributeCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class APBEditor.SetSkeletalMeshAttributeCommandlet" );

		return pClassPointer;
	};

	int eventMain ( struct FString Params );
};

UClass* USetSkeletalMeshAttributeCommandlet::pClassPointer = NULL;

// Class APBEditor.SetTextureAttributeCommandlet
// 0x0000 (0x0080 - 0x0080)
class USetTextureAttributeCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class APBEditor.SetTextureAttributeCommandlet" );

		return pClassPointer;
	};

	int eventMain ( struct FString Params );
};

UClass* USetTextureAttributeCommandlet::pClassPointer = NULL;

// Class APBEditor.SetTextureCategoriesCommandlet
// 0x0000 (0x0080 - 0x0080)
class USetTextureCategoriesCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class APBEditor.SetTextureCategoriesCommandlet" );

		return pClassPointer;
	};

};

UClass* USetTextureCategoriesCommandlet::pClassPointer = NULL;

// Class APBEditor.TESTextureClassFactoryNew
// 0x0000 (0x0074 - 0x0074)
class UTESTextureClassFactoryNew : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class APBEditor.TESTextureClassFactoryNew" );

		return pClassPointer;
	};

};

UClass* UTESTextureClassFactoryNew::pClassPointer = NULL;

// Class APBEditor.UpdatePrefabInstancesCommandlet
// 0x0000 (0x0080 - 0x0080)
class UUpdatePrefabInstancesCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class APBEditor.UpdatePrefabInstancesCommandlet" );

		return pClassPointer;
	};

};

UClass* UUpdatePrefabInstancesCommandlet::pClassPointer = NULL;

// Class APBEditor.UpdatePresetItemsCommandlet
// 0x0000 (0x0080 - 0x0080)
class UUpdatePresetItemsCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class APBEditor.UpdatePresetItemsCommandlet" );

		return pClassPointer;
	};

};

UClass* UUpdatePresetItemsCommandlet::pClassPointer = NULL;

// Class APBEditor.ValidateGolemPartsSDDCommandlet
// 0x0000 (0x0080 - 0x0080)
class UValidateGolemPartsSDDCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class APBEditor.ValidateGolemPartsSDDCommandlet" );

		return pClassPointer;
	};

};

UClass* UValidateGolemPartsSDDCommandlet::pClassPointer = NULL;

// Class APBEditor.VehicleMask
// 0x001C (0x005C - 0x0040)
class UVehicleMask : public UObject
{
public:
	class UTexture2D*                                  OutputTexture;                                    		// 0x0040 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      eOutputChannel;                                   		// 0x0044 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	TArray< class UVehicleMaskItem* >                  MaskItems;                                        		// 0x0048 (0x000C) [0x0000000004400041]              ( CPF_Edit | CPF_EditConstArray | CPF_NeedCtorLink | CPF_EditInline )
	class UVehicleMaskTemplate*                        Template;                                         		// 0x0054 (0x0004) [0x0000000000000000]              
	unsigned long                                      bNeedsGenerated : 1;                              		// 0x0058 (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class APBEditor.VehicleMask" );

		return pClassPointer;
	};

	void SetTemplate ( class UVehicleMaskTemplate* InTemplate );
};

UClass* UVehicleMask::pClassPointer = NULL;

// Class APBEditor.VehicleMaskFactoryNew
// 0x0000 (0x0074 - 0x0074)
class UVehicleMaskFactoryNew : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class APBEditor.VehicleMaskFactoryNew" );

		return pClassPointer;
	};

};

UClass* UVehicleMaskFactoryNew::pClassPointer = NULL;

// Class APBEditor.VehicleMaskItem
// 0x0010 (0x0050 - 0x0040)
class UVehicleMaskItem : public UObject
{
public:
	struct FString                                     ItemName;                                         		// 0x0040 (0x000C) [0x0000000000420001]              ( CPF_Edit | CPF_EditConst | CPF_NeedCtorLink )
	class UTexture2D*                                  Texture;                                          		// 0x004C (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class APBEditor.VehicleMaskItem" );

		return pClassPointer;
	};

};

UClass* UVehicleMaskItem::pClassPointer = NULL;

// Class APBEditor.VehicleMaskTemplateFactoryNew
// 0x0000 (0x0074 - 0x0074)
class UVehicleMaskTemplateFactoryNew : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class APBEditor.VehicleMaskTemplateFactoryNew" );

		return pClassPointer;
	};

};

UClass* UVehicleMaskTemplateFactoryNew::pClassPointer = NULL;


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif