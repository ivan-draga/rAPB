/*
#############################################################################################
# All Points Bulletin Reloaded (1.6) SDK
# Generated with TheFeckless UE3 SDK Generator v1.2_Beta-Rev.39
# ========================================================================================= #
# File: Editor_classes.h
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

// Enum Editor.TextureFactory.TextureCompressionSettings
/*enum TextureCompressionSettings
{
	TC_Default                                         = 0,
	TC_Normalmap                                       = 1,
	TC_Displacementmap                                 = 2,
	TC_NormalmapAlpha                                  = 3,
	TC_Grayscale                                       = 4,
	TC_HighDynamicRange                                = 5,
	TC_VehicleNormalmap                                = 6,
	TC_DistanceField                                   = 7,
	TC_Normalmap_X_Y                                   = 8,
	TC_MAX                                             = 9
};*/

// Enum Editor.TextureFactory.LODCategory
/*enum LODCategory
{
	TEXCAT_Unknown                                     = 0,
	TEXCAT_Environment                                 = 1,
	TEXCAT_Prop                                        = 2,
	TEXCAT_Signage                                     = 3,
	TEXCAT_PlayerCharacter                             = 4,
	TEXCAT_PlayerVehicle                               = 5,
	TEXCAT_PlayerGraffiti                              = 6,
	TEXCAT_PlayerStatue                                = 7,
	TEXCAT_LCPedestrian                                = 8,
	TEXCAT_LCVehicle                                   = 9,
	TEXCAT_CharacterShared                             = 10,
	TEXCAT_VehicleShared                               = 11,
	TEXCAT_Pickup                                      = 12,
	TEXCAT_CharacterSource                             = 13,
	TEXCAT_VehicleSource                               = 14,
	TEXCAT_PrimitiveSource                             = 15,
	TEXCAT_UI                                          = 16,
	TEXCAT_UI_StreamedIcon                             = 17,
	TEXCAT_VFX                                         = 18,
	TEXCAT_LightAndShadowMap                           = 19,
	TEXCAT_RenderTarget                                = 20,
	TEXCAT_NonFinal                                    = 21,
	TEXCAT_Contact                                     = 22,
	TEXCAT_BuildingCollision                           = 23,
	TEXCAT_Engine                                      = 24,
	TEXCAT_Volumes                                     = 25,
	TEXCAT_ColourLookupTable                           = 26,
	TEXCAT_MAX                                         = 27
};*/

// Enum Editor.TextureFactory.Blending
/*enum Blending
{
	BLEND_Opaque                                       = 0,
	BLEND_Masked                                       = 1,
	BLEND_Translucent                                  = 2,
	BLEND_Additive                                     = 3,
	BLEND_Modulate                                     = 4,
	BLEND_OpaqueWriteAlpha                             = 5,
	BLEND_MAX                                          = 6
};*/

// Enum Editor.TextureFactory.LightingModel
/*enum LightingModel
{
	MLM_Phong                                          = 0,
	MLM_NonDirectional                                 = 1,
	MLM_Unlit                                          = 2,
	MLM_Custom                                         = 3,
	MLM_MAX                                            = 4
};*/

// Enum Editor.TextureFactory.CropMode
/*enum CropMode
{
	CROP_None                                          = 0,
	CROP_Alpha                                         = 1,
	CROP_RGB                                           = 2,
	CROP_RGBA                                          = 3,
	CROP_MAX                                           = 4
};*/

// Enum Editor.TextureFactory.DistanceFieldResolutionMode
/*enum DistanceFieldResolutionMode
{
	DF_Visual                                          = 0,
	DF_Auto                                            = 1,
	DF                                                 = 2,
	DF01                                               = 3,
	DF02                                               = 4,
	DF_MAX                                             = 5
};*/

// Enum Editor.RenderTargetCubeExporterTGA.CubeFace
/*enum CubeFace
{
	CubeFace_MAX                                       = 0
};*/

// Enum Editor.TextureMovieFactory.MovieStreamSource
/*enum MovieStreamSource
{
	MovieStream_File                                   = 0,
	MovieStream_Memory                                 = 1,
	MovieStream_MAX                                    = 2
};*/

// Enum Editor.TextureRenderTargetCubeFactoryNew.Format
/*enum Format
{
	A8R8G8B8                                           = 0,
	RGBA32_Unordered                                   = 1,
	Format_MAX                                         = 2
};*/

// Enum Editor.TextureRenderTargetFactoryNew.Format
/*enum Format
{
	A8R8G8B8                                           = 0,
	RGBA32_Unordered                                   = 1,
	Format_MAX                                         = 2
};*/

// Enum Editor.SheetBuilder.ESheetAxis
/*enum ESheetAxis
{
	AX_Horizontal                                      = 0,
	AX_XAxis                                           = 1,
	AX_YAxis                                           = 2,
	AX_MAX                                             = 3
};*/


/*
# ========================================================================================= #
# Classes
# ========================================================================================= #
*/

// Class Editor.AnalyzeContentCommandlet
// 0x0000 (0x0080 - 0x0080)
class UAnalyzeContentCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Editor.AnalyzeContentCommandlet" );

		return pClassPointer;
	};

};

UClass* UAnalyzeContentCommandlet::pClassPointer = NULL;

// Class Editor.AnalyzeCookedContentCommandlet
// 0x0018 (0x0098 - 0x0080)
class UAnalyzeCookedContentCommandlet : public UCommandlet
{
public:
	unsigned char                                      UnknownData00[ 0x18 ];                            		// 0x0080 (0x0018) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Editor.AnalyzeCookedContentCommandlet" );

		return pClassPointer;
	};

};

UClass* UAnalyzeCookedContentCommandlet::pClassPointer = NULL;

// Class Editor.AnalyzeCookedPackagesCommandlet
// 0x0000 (0x0080 - 0x0080)
class UAnalyzeCookedPackagesCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Editor.AnalyzeCookedPackagesCommandlet" );

		return pClassPointer;
	};

};

UClass* UAnalyzeCookedPackagesCommandlet::pClassPointer = NULL;

// Class Editor.AnalyzeFallbackMaterialsCommandlet
// 0x003C (0x00BC - 0x0080)
class UAnalyzeFallbackMaterialsCommandlet : public UCommandlet
{
public:
	unsigned char                                      UnknownData00[ 0x3C ];                            		// 0x0080 (0x003C) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Editor.AnalyzeFallbackMaterialsCommandlet" );

		return pClassPointer;
	};

};

UClass* UAnalyzeFallbackMaterialsCommandlet::pClassPointer = NULL;

// Class Editor.AnalyzeReferencedContentCommandlet
// 0x01B0 (0x0230 - 0x0080)
class UAnalyzeReferencedContentCommandlet : public UCommandlet
{
public:
	unsigned char                                      UnknownData00[ 0x1B0 ];                           		// 0x0080 (0x01B0) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Editor.AnalyzeReferencedContentCommandlet" );

		return pClassPointer;
	};

};

UClass* UAnalyzeReferencedContentCommandlet::pClassPointer = NULL;

// Class Editor.AnalyzeScriptCommandlet
// 0x0000 (0x0080 - 0x0080)
class UAnalyzeScriptCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Editor.AnalyzeScriptCommandlet" );

		return pClassPointer;
	};

};

UClass* UAnalyzeScriptCommandlet::pClassPointer = NULL;

// Class Editor.AnimSetFactoryNew
// 0x0000 (0x0074 - 0x0074)
class UAnimSetFactoryNew : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Editor.AnimSetFactoryNew" );

		return pClassPointer;
	};

};

UClass* UAnimSetFactoryNew::pClassPointer = NULL;

// Class Editor.AnimTreeFactoryNew
// 0x0000 (0x0074 - 0x0074)
class UAnimTreeFactoryNew : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Editor.AnimTreeFactoryNew" );

		return pClassPointer;
	};

};

UClass* UAnimTreeFactoryNew::pClassPointer = NULL;

// Class Editor.BatchExportCommandlet
// 0x0000 (0x0080 - 0x0080)
class UBatchExportCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Editor.BatchExportCommandlet" );

		return pClassPointer;
	};

};

UClass* UBatchExportCommandlet::pClassPointer = NULL;

// Class Editor.BrushBuilder
// 0x003C (0x007C - 0x0040)
class UBrushBuilder : public UObject
{
public:
	struct FString                                     BitmapFilename;                                   		// 0x0040 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     ToolTip;                                          		// 0x004C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FVector >                           Vertices;                                         		// 0x0058 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FBuilderPoly >                      Polys;                                            		// 0x0064 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FName                                       Group;                                            		// 0x0070 (0x0008) [0x0000000000000000]              
	unsigned long                                      MergeCoplanars : 1;                               		// 0x0078 (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Editor.BrushBuilder" );

		return pClassPointer;
	};

	bool eventBuild ( );
	void PolyEnd ( );
	void Polyi ( int I );
	void PolyBegin ( int Direction, struct FName ItemName );
	void Poly4i ( int Direction, int I, int J, int K, int L, struct FName ItemName, unsigned long bIsTwoSidedNonSolid );
	void Poly3i ( int Direction, int I, int J, int K, struct FName ItemName, unsigned long bIsTwoSidedNonSolid );
	int Vertex3f ( float X, float Y, float Z );
	int Vertexv ( struct FVector V );
	bool BadParameters ( struct FString msg );
	int GetPolyCount ( );
	struct FVector GetVertex ( int I );
	int GetVertexCount ( );
	bool EndBrush ( );
	void BeginBrush ( unsigned long InMergeCoplanars, struct FName InGroup );
};

UClass* UBrushBuilder::pClassPointer = NULL;

// Class Editor.BuildContentTagIndexCommandlet
// 0x0000 (0x0080 - 0x0080)
class UBuildContentTagIndexCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Editor.BuildContentTagIndexCommandlet" );

		return pClassPointer;
	};

};

UClass* UBuildContentTagIndexCommandlet::pClassPointer = NULL;

// Class Editor.CameraAnimFactory
// 0x0000 (0x0074 - 0x0074)
class UCameraAnimFactory : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Editor.CameraAnimFactory" );

		return pClassPointer;
	};

};

UClass* UCameraAnimFactory::pClassPointer = NULL;

// Class Editor.ResavePackagesCommandlet
// 0x0050 (0x00D0 - 0x0080)
class UResavePackagesCommandlet : public UCommandlet
{
public:
	unsigned char                                      UnknownData00[ 0x50 ];                            		// 0x0080 (0x0050) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Editor.ResavePackagesCommandlet" );

		return pClassPointer;
	};

};

UClass* UResavePackagesCommandlet::pClassPointer = NULL;

// Class Editor.ChangePrefabSequenceClassCommandlet
// 0x0000 (0x00D0 - 0x00D0)
class UChangePrefabSequenceClassCommandlet : public UResavePackagesCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Editor.ChangePrefabSequenceClassCommandlet" );

		return pClassPointer;
	};

};

UClass* UChangePrefabSequenceClassCommandlet::pClassPointer = NULL;

// Class Editor.ClassExporterUC
// 0x0000 (0x0068 - 0x0068)
class UClassExporterUC : public UExporter
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Editor.ClassExporterUC" );

		return pClassPointer;
	};

};

UClass* UClassExporterUC::pClassPointer = NULL;

// Class Editor.ClassFactoryUC
// 0x0000 (0x0074 - 0x0074)
class UClassFactoryUC : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Editor.ClassFactoryUC" );

		return pClassPointer;
	};

};

UClass* UClassFactoryUC::pClassPointer = NULL;

// Class Editor.ColladaFactory
// 0x0004 (0x0078 - 0x0074)
class UColladaFactory : public UFactory
{
public:
	unsigned long                                      bImportAsSkeletalMesh : 1;                        		// 0x0074 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Editor.ColladaFactory" );

		return pClassPointer;
	};

};

UClass* UColladaFactory::pClassPointer = NULL;

// Class Editor.CompressPackagesCommandlet
// 0x0000 (0x0080 - 0x0080)
class UCompressPackagesCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Editor.CompressPackagesCommandlet" );

		return pClassPointer;
	};

};

UClass* UCompressPackagesCommandlet::pClassPointer = NULL;

// Class Editor.ConformCommandlet
// 0x0000 (0x0080 - 0x0080)
class UConformCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Editor.ConformCommandlet" );

		return pClassPointer;
	};

};

UClass* UConformCommandlet::pClassPointer = NULL;

// Class Editor.ContentTagIndex
// 0x001C (0x005C - 0x0040)
class UContentTagIndex : public UObject
{
public:
	int                                                VersionInfo;                                      		// 0x0040 (0x0004) [0x0000000000000002]              ( CPF_Const )
	TArray< struct FTagInfo >                          DefaultTags;                                      		// 0x0044 (0x000C) [0x0000000000404002]              ( CPF_Const | CPF_Config | CPF_NeedCtorLink )
	TArray< struct FTagInfo >                          Tags;                                             		// 0x0050 (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Editor.ContentTagIndex" );

		return pClassPointer;
	};

};

UClass* UContentTagIndex::pClassPointer = NULL;

// Class Editor.CookMemProfCommandlet
// 0x0000 (0x0080 - 0x0080)
class UCookMemProfCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Editor.CookMemProfCommandlet" );

		return pClassPointer;
	};

};

UClass* UCookMemProfCommandlet::pClassPointer = NULL;

// Class Editor.CookPackagesCommandlet
// 0x0E34 (0x0EB4 - 0x0080)
class UCookPackagesCommandlet : public UCommandlet
{
public:
	unsigned char                                      UnknownData00[ 0xE34 ];                           		// 0x0080 (0x0E34) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Editor.CookPackagesCommandlet" );

		return pClassPointer;
	};

};

UClass* UCookPackagesCommandlet::pClassPointer = NULL;

// Class Editor.CreateDefaultStyleCommandlet
// 0x0004 (0x0084 - 0x0080)
class UCreateDefaultStyleCommandlet : public UCommandlet
{
public:
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0080 (0x0004) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Editor.CreateDefaultStyleCommandlet" );

		return pClassPointer;
	};

};

UClass* UCreateDefaultStyleCommandlet::pClassPointer = NULL;

// Class Editor.CubeBuilder
// 0x001C (0x0098 - 0x007C)
class UCubeBuilder : public UBrushBuilder
{
public:
	float                                              X;                                                		// 0x007C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Y;                                                		// 0x0080 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Z;                                                		// 0x0084 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              WallThickness;                                    		// 0x0088 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       GroupName;                                        		// 0x008C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      Hollow : 1;                                       		// 0x0094 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      Tessellated : 1;                                  		// 0x0094 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Editor.CubeBuilder" );

		return pClassPointer;
	};

	bool eventBuild ( );
	void BuildCube ( int Direction, float DX, float DY, float dz, unsigned long _tessellated );
};

UClass* UCubeBuilder::pClassPointer = NULL;

// Class Editor.CurveEdPresetCurveFactoryNew
// 0x0000 (0x0074 - 0x0074)
class UCurveEdPresetCurveFactoryNew : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Editor.CurveEdPresetCurveFactoryNew" );

		return pClassPointer;
	};

};

UClass* UCurveEdPresetCurveFactoryNew::pClassPointer = NULL;

// Class Editor.CutDownContentCommandlet
// 0x0000 (0x0080 - 0x0080)
class UCutDownContentCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Editor.CutDownContentCommandlet" );

		return pClassPointer;
	};

};

UClass* UCutDownContentCommandlet::pClassPointer = NULL;

// Class Editor.DecalMaterialFactoryNew
// 0x0000 (0x0074 - 0x0074)
class UDecalMaterialFactoryNew : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Editor.DecalMaterialFactoryNew" );

		return pClassPointer;
	};

};

UClass* UDecalMaterialFactoryNew::pClassPointer = NULL;

// Class Editor.DiffPackagesCommandlet
// 0x0018 (0x0098 - 0x0080)
class UDiffPackagesCommandlet : public UCommandlet
{
public:
	unsigned char                                      UnknownData00[ 0x18 ];                            		// 0x0080 (0x0018) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Editor.DiffPackagesCommandlet" );

		return pClassPointer;
	};

};

UClass* UDiffPackagesCommandlet::pClassPointer = NULL;

// Class Editor.DumpEmittersCommandlet
// 0x0000 (0x0080 - 0x0080)
class UDumpEmittersCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Editor.DumpEmittersCommandlet" );

		return pClassPointer;
	};

};

UClass* UDumpEmittersCommandlet::pClassPointer = NULL;

// Class Editor.DumpLightmapInfoCommandlet
// 0x0000 (0x0080 - 0x0080)
class UDumpLightmapInfoCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Editor.DumpLightmapInfoCommandlet" );

		return pClassPointer;
	};

};

UClass* UDumpLightmapInfoCommandlet::pClassPointer = NULL;

// Class Editor.EditorComponent
// 0x001C (0x01F4 - 0x01D8)
class UEditorComponent : public UPrimitiveComponent
{
public:
	unsigned long                                      bDrawGrid : 1;                                    		// 0x01D8 (0x0004) [0x0000000000000002] [0x00000001] ( CPF_Const )
	unsigned long                                      bDrawPivot : 1;                                   		// 0x01D8 (0x0004) [0x0000000000000002] [0x00000002] ( CPF_Const )
	unsigned long                                      bDrawBaseInfo : 1;                                		// 0x01D8 (0x0004) [0x0000000000000002] [0x00000004] ( CPF_Const )
	unsigned long                                      bDrawWorldBox : 1;                                		// 0x01D8 (0x0004) [0x0000000000000002] [0x00000008] ( CPF_Const )
	unsigned long                                      bDrawColoredOrigin : 1;                           		// 0x01D8 (0x0004) [0x0000000000000002] [0x00000010] ( CPF_Const )
	unsigned long                                      bDrawKillZ : 1;                                   		// 0x01D8 (0x0004) [0x0000000000000002] [0x00000020] ( CPF_Const )
	struct FColor                                      GridColorHi;                                      		// 0x01DC (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FColor                                      GridColorLo;                                      		// 0x01E0 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              PerspectiveGridSize;                              		// 0x01E4 (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FColor                                      PivotColor;                                       		// 0x01E8 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              PivotSize;                                        		// 0x01EC (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FColor                                      BaseBoxColor;                                     		// 0x01F0 (0x0004) [0x0000000000000002]              ( CPF_Const )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Editor.EditorComponent" );

		return pClassPointer;
	};

};

UClass* UEditorComponent::pClassPointer = NULL;

// Class Editor.EditorEngine
// 0x01D0 (0x060C - 0x043C)
class UEditorEngine : public UEngine
{
public:
	struct FPointer                                    VfTable_FCallbackEventDevice;                     		// 0x043C (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	class UModel*                                      TempModel;                                        		// 0x0440 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UTransBuffer*                                Trans;                                            		// 0x0444 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UTextBuffer*                                 Results;                                          		// 0x0448 (0x0004) [0x0000000000000002]              ( CPF_Const )
	TArray< struct FPointer >                          ActorProperties;                                  		// 0x044C (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	struct FPointer                                    LevelProperties;                                  		// 0x0458 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UTexture2D*                                  Bad;                                              		// 0x045C (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UTexture2D*                                  Bkgnd;                                            		// 0x0460 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UTexture2D*                                  BkgndHi;                                          		// 0x0464 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UTexture2D*                                  BadHighlight;                                     		// 0x0468 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UTexture2D*                                  MaterialArrow;                                    		// 0x046C (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UTexture2D*                                  MaterialBackdrop;                                 		// 0x0470 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class USoundCue*                                   PreviewSoundCue;                                  		// 0x0474 (0x0004) [0x0000000000002002]              ( CPF_Const | CPF_Transient )
	class UAudioComponent*                             PreviewAudioComponent;                            		// 0x0478 (0x0004) [0x000000000408200A]              ( CPF_Const | CPF_ExportObject | CPF_Transient | CPF_Component | CPF_EditInline )
	class UStaticMesh*                                 TexPropCube;                                      		// 0x047C (0x0004) [0x0000000000000000]              
	class UStaticMesh*                                 TexPropSphere;                                    		// 0x0480 (0x0004) [0x0000000000000000]              
	class UStaticMesh*                                 TexPropPlane;                                     		// 0x0484 (0x0004) [0x0000000000000000]              
	class UStaticMesh*                                 TexPropCylinder;                                  		// 0x0488 (0x0004) [0x0000000000000000]              
	unsigned long                                      bFastRebuild : 1;                                 		// 0x048C (0x0004) [0x0000000000000002] [0x00000001] ( CPF_Const )
	unsigned long                                      bBootstrapping : 1;                               		// 0x048C (0x0004) [0x0000000000000002] [0x00000002] ( CPF_Const )
	unsigned long                                      bIsImportingT3D : 1;                              		// 0x048C (0x0004) [0x0000000000000002] [0x00000004] ( CPF_Const )
	int                                                TerrainEditBrush;                                 		// 0x0490 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                ClickFlags;                                       		// 0x0494 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UPackage*                                    ParentContext;                                    		// 0x0498 (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FVector                                     ClickLocation;                                    		// 0x049C (0x000C) [0x0000000000000002]              ( CPF_Const )
	unsigned char                                      UnknownData00[ 0x8 ];                             		// 0x04A8 (0x0008) MISSED OFFSET
	struct FPlane                                      ClickPlane;                                       		// 0x04B0 (0x0010) [0x0000000000000002]              ( CPF_Const )
	struct FVector                                     MouseMovement;                                    		// 0x04C0 (0x000C) [0x0000000000000002]              ( CPF_Const )
	TArray< struct FPointer >                          ViewportClients;                                  		// 0x04CC (0x000C) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	float                                              FarClippingPlane;                                 		// 0x04D8 (0x0004) [0x0000000000000002]              ( CPF_Const )
	unsigned char                                      DetailMode;                                       		// 0x04DC (0x0001) [0x0000000000000000]              
	struct FPointer                                    ConstraintsVtbl;                                  		// 0x04E0 (0x0004) [0x0000000000800002]              ( CPF_Const | CPF_NoExport )
	unsigned long                                      GridEnabled : 1;                                  		// 0x04E4 (0x0004) [0x0000000000804001] [0x00000001] ( CPF_Edit | CPF_Config | CPF_NoExport )
	unsigned long                                      SnapScaleEnabled : 1;                             		// 0x04E4 (0x0004) [0x0000000000804001] [0x00000002] ( CPF_Edit | CPF_Config | CPF_NoExport )
	unsigned long                                      SnapVertices : 1;                                 		// 0x04E4 (0x0004) [0x0000000000804001] [0x00000004] ( CPF_Edit | CPF_Config | CPF_NoExport )
	int                                                ScaleGridSize;                                    		// 0x04E8 (0x0004) [0x0000000000804001]              ( CPF_Edit | CPF_Config | CPF_NoExport )
	float                                              SnapDistance;                                     		// 0x04EC (0x0004) [0x0000000000804001]              ( CPF_Edit | CPF_Config | CPF_NoExport )
	float                                              GridSizes[ 0xB ];                                 		// 0x04F0 (0x002C) [0x0000000000804001]              ( CPF_Edit | CPF_Config | CPF_NoExport )
	int                                                CurrentGridSz;                                    		// 0x051C (0x0004) [0x0000000000804001]              ( CPF_Edit | CPF_Config | CPF_NoExport )
	unsigned long                                      RotGridEnabled : 1;                               		// 0x0520 (0x0004) [0x0000000000804001] [0x00000001] ( CPF_Edit | CPF_Config | CPF_NoExport )
	struct FRotator                                    RotGridSize;                                      		// 0x0524 (0x000C) [0x0000000000804001]              ( CPF_Edit | CPF_Config | CPF_NoExport )
	unsigned long                                      UseSizingBox : 1;                                 		// 0x0530 (0x0004) [0x0000000000004001] [0x00000001] ( CPF_Edit | CPF_Config )
	unsigned long                                      UseAxisIndicator : 1;                             		// 0x0530 (0x0004) [0x0000000000004001] [0x00000002] ( CPF_Edit | CPF_Config )
	float                                              FOVAngle;                                         		// 0x0534 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	unsigned long                                      GodMode : 1;                                      		// 0x0538 (0x0004) [0x0000000000004001] [0x00000001] ( CPF_Edit | CPF_Config )
	struct FString                                     AutoSaveDir;                                      		// 0x053C (0x000C) [0x0000000000404001]              ( CPF_Edit | CPF_Config | CPF_NeedCtorLink )
	unsigned long                                      InvertwidgetZAxis : 1;                            		// 0x0548 (0x0004) [0x0000000000004001] [0x00000001] ( CPF_Edit | CPF_Config )
	struct FString                                     GameCommandLine;                                  		// 0x054C (0x000C) [0x0000000000404001]              ( CPF_Edit | CPF_Config | CPF_NeedCtorLink )
	TArray< struct FString >                           EditPackages;                                     		// 0x0558 (0x000C) [0x0000000000444001]              ( CPF_Edit | CPF_Config | CPF_GlobalConfig | CPF_NeedCtorLink )
	struct FString                                     EditPackagesInPath;                               		// 0x0564 (0x000C) [0x0000000000404001]              ( CPF_Edit | CPF_Config | CPF_NeedCtorLink )
	struct FString                                     EditPackagesOutPath;                              		// 0x0570 (0x000C) [0x0000000000404001]              ( CPF_Edit | CPF_Config | CPF_NeedCtorLink )
	struct FString                                     FRScriptOutputPath;                               		// 0x057C (0x000C) [0x0000000000404001]              ( CPF_Edit | CPF_Config | CPF_NeedCtorLink )
	struct FString                                     UBScriptOutputPath;                               		// 0x0588 (0x000C) [0x0000000000404001]              ( CPF_Edit | CPF_Config | CPF_NeedCtorLink )
	struct FString                                     SBScriptOutputPath;                               		// 0x0594 (0x000C) [0x0000000000404001]              ( CPF_Edit | CPF_Config | CPF_NeedCtorLink )
	unsigned long                                      AlwaysShowTerrain : 1;                            		// 0x05A0 (0x0004) [0x0000000000004001] [0x00000001] ( CPF_Edit | CPF_Config )
	unsigned long                                      UseActorRotationGizmo : 1;                        		// 0x05A0 (0x0004) [0x0000000000004001] [0x00000002] ( CPF_Edit | CPF_Config )
	unsigned long                                      bShowBrushMarkerPolys : 1;                        		// 0x05A0 (0x0004) [0x0000000000004001] [0x00000004] ( CPF_Edit | CPF_Config )
	unsigned long                                      bUseMayaCameraControls : 1;                       		// 0x05A0 (0x0004) [0x0000000000004001] [0x00000008] ( CPF_Edit | CPF_Config )
	unsigned long                                      bPrefabsLocked : 1;                               		// 0x05A0 (0x0004) [0x0000000000004001] [0x00000010] ( CPF_Edit | CPF_Config )
	unsigned long                                      bEnableSocketSnapping : 1;                        		// 0x05A0 (0x0004) [0x0000000000004001] [0x00000020] ( CPF_Edit | CPF_Config )
	struct FString                                     HeightMapExportClassName;                         		// 0x05A4 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< class UActorFactory* >                     ActorFactories;                                   		// 0x05B0 (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	struct FString                                     UserOpenedFile;                                   		// 0x05BC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     InEditorGameURLOptions;                           		// 0x05C8 (0x000C) [0x0000000000404001]              ( CPF_Edit | CPF_Config | CPF_NeedCtorLink )
	class UWorld*                                      PlayWorld;                                        		// 0x05D4 (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FVector                                     PlayWorldLocation;                                		// 0x05D8 (0x000C) [0x0000000000000002]              ( CPF_Const )
	struct FRotator                                    PlayWorldRotation;                                		// 0x05E4 (0x000C) [0x0000000000000002]              ( CPF_Const )
	unsigned long                                      bIsPlayWorldQueued : 1;                           		// 0x05F0 (0x0004) [0x0000000000000002] [0x00000001] ( CPF_Const )
	unsigned long                                      bHasPlayWorldPlacement : 1;                       		// 0x05F0 (0x0004) [0x0000000000000002] [0x00000002] ( CPF_Const )
	unsigned long                                      bWorldPackageWasDirty : 1;                        		// 0x05F0 (0x0004) [0x0000000000000002] [0x00000004] ( CPF_Const )
	int                                                PlayWorldDestination;                             		// 0x05F4 (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FPointer                                    InEditorPropagator;                               		// 0x05F8 (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FPointer                                    RemotePropagator;                                 		// 0x05FC (0x0004) [0x0000000000000002]              ( CPF_Const )
	unsigned long                                      bIsPushingView : 1;                               		// 0x0600 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bColorPickModeEnabled : 1;                        		// 0x0600 (0x0004) [0x0000000000002002] [0x00000002] ( CPF_Const | CPF_Transient )
	unsigned long                                      bDecalUpdateRequested : 1;                        		// 0x0600 (0x0004) [0x0000000000002002] [0x00000004] ( CPF_Const | CPF_Transient )
	class UTextureRenderTarget2D*                      ScratchRenderTarget;                              		// 0x0604 (0x0004) [0x0000000000002002]              ( CPF_Const | CPF_Transient )
	class UTexture2D*                                  StreamingBoundsTexture;                           		// 0x0608 (0x0004) [0x0000000000002002]              ( CPF_Const | CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Editor.EditorEngine" );

		return pClassPointer;
	};

};

UClass* UEditorEngine::pClassPointer = NULL;

// Class Editor.EditorPlayer
// 0x0000 (0x02F4 - 0x02F4)
class UEditorPlayer : public ULocalPlayer
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Editor.EditorPlayer" );

		return pClassPointer;
	};

};

UClass* UEditorPlayer::pClassPointer = NULL;

// Class Editor.EditorViewportInput
// 0x0004 (0x00E0 - 0x00DC)
class UEditorViewportInput : public UInput
{
public:
	class UEditorEngine*                               Editor;                                           		// 0x00DC (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Editor.EditorViewportInput" );

		return pClassPointer;
	};

};

UClass* UEditorViewportInput::pClassPointer = NULL;

// Class Editor.EdModeComponent
// 0x0000 (0x01F4 - 0x01F4)
class UEdModeComponent : public UEditorComponent
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Editor.EdModeComponent" );

		return pClassPointer;
	};

};

UClass* UEdModeComponent::pClassPointer = NULL;

// Class Editor.ExamineOutersCommandlet
// 0x0000 (0x0080 - 0x0080)
class UExamineOutersCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Editor.ExamineOutersCommandlet" );

		return pClassPointer;
	};

};

UClass* UExamineOutersCommandlet::pClassPointer = NULL;

// Class Editor.ExportLocCommandlet
// 0x0000 (0x0080 - 0x0080)
class UExportLocCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Editor.ExportLocCommandlet" );

		return pClassPointer;
	};

};

UClass* UExportLocCommandlet::pClassPointer = NULL;

// Class Editor.FindDuplicateKismetObjectsCommandlet
// 0x0000 (0x0080 - 0x0080)
class UFindDuplicateKismetObjectsCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Editor.FindDuplicateKismetObjectsCommandlet" );

		return pClassPointer;
	};

};

UClass* UFindDuplicateKismetObjectsCommandlet::pClassPointer = NULL;

// Class Editor.FindEmitterMismatchedLODsCommandlet
// 0x0000 (0x0080 - 0x0080)
class UFindEmitterMismatchedLODsCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Editor.FindEmitterMismatchedLODsCommandlet" );

		return pClassPointer;
	};

};

UClass* UFindEmitterMismatchedLODsCommandlet::pClassPointer = NULL;

// Class Editor.FindEmitterModifiedLODsCommandlet
// 0x0000 (0x0080 - 0x0080)
class UFindEmitterModifiedLODsCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Editor.FindEmitterModifiedLODsCommandlet" );

		return pClassPointer;
	};

};

UClass* UFindEmitterModifiedLODsCommandlet::pClassPointer = NULL;

// Class Editor.FindEmitterModuleLODErrorsCommandlet
// 0x0000 (0x0080 - 0x0080)
class UFindEmitterModuleLODErrorsCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Editor.FindEmitterModuleLODErrorsCommandlet" );

		return pClassPointer;
	};

};

UClass* UFindEmitterModuleLODErrorsCommandlet::pClassPointer = NULL;

// Class Editor.FindQuestionableTexturesCommandlet
// 0x0000 (0x0080 - 0x0080)
class UFindQuestionableTexturesCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Editor.FindQuestionableTexturesCommandlet" );

		return pClassPointer;
	};

};

UClass* UFindQuestionableTexturesCommandlet::pClassPointer = NULL;

// Class Editor.PerformMapCheckCommandlet
// 0x0018 (0x0098 - 0x0080)
class UPerformMapCheckCommandlet : public UCommandlet
{
public:
	unsigned char                                      UnknownData00[ 0x18 ];                            		// 0x0080 (0x0018) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Editor.PerformMapCheckCommandlet" );

		return pClassPointer;
	};

};

UClass* UPerformMapCheckCommandlet::pClassPointer = NULL;

// Class Editor.FindRenamedPrefabSequencesCommandlet
// 0x0048 (0x00E0 - 0x0098)
class UFindRenamedPrefabSequencesCommandlet : public UPerformMapCheckCommandlet
{
public:
	unsigned char                                      UnknownData00[ 0x48 ];                            		// 0x0098 (0x0048) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Editor.FindRenamedPrefabSequencesCommandlet" );

		return pClassPointer;
	};

};

UClass* UFindRenamedPrefabSequencesCommandlet::pClassPointer = NULL;

// Class Editor.FindSoundCuesWithMissingGroupsCommandlet
// 0x0000 (0x0080 - 0x0080)
class UFindSoundCuesWithMissingGroupsCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Editor.FindSoundCuesWithMissingGroupsCommandlet" );

		return pClassPointer;
	};

};

UClass* UFindSoundCuesWithMissingGroupsCommandlet::pClassPointer = NULL;

// Class Editor.FindStaticActorsRefsCommandlet
// 0x00A0 (0x0138 - 0x0098)
class UFindStaticActorsRefsCommandlet : public UPerformMapCheckCommandlet
{
public:
	unsigned char                                      UnknownData00[ 0xA0 ];                            		// 0x0098 (0x00A0) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Editor.FindStaticActorsRefsCommandlet" );

		return pClassPointer;
	};

};

UClass* UFindStaticActorsRefsCommandlet::pClassPointer = NULL;

// Class Editor.FindTexturesWithMissingPhysicalMaterialsCommandlet
// 0x0000 (0x0080 - 0x0080)
class UFindTexturesWithMissingPhysicalMaterialsCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Editor.FindTexturesWithMissingPhysicalMaterialsCommandlet" );

		return pClassPointer;
	};

};

UClass* UFindTexturesWithMissingPhysicalMaterialsCommandlet::pClassPointer = NULL;

// Class Editor.FixAmbiguousMaterialParametersCommandlet
// 0x0000 (0x0080 - 0x0080)
class UFixAmbiguousMaterialParametersCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Editor.FixAmbiguousMaterialParametersCommandlet" );

		return pClassPointer;
	};

};

UClass* UFixAmbiguousMaterialParametersCommandlet::pClassPointer = NULL;

// Class Editor.FixupEmittersCommandlet
// 0x0000 (0x0080 - 0x0080)
class UFixupEmittersCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Editor.FixupEmittersCommandlet" );

		return pClassPointer;
	};

};

UClass* UFixupEmittersCommandlet::pClassPointer = NULL;

// Class Editor.FixupRedirectsCommandlet
// 0x0000 (0x0080 - 0x0080)
class UFixupRedirectsCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Editor.FixupRedirectsCommandlet" );

		return pClassPointer;
	};

};

UClass* UFixupRedirectsCommandlet::pClassPointer = NULL;

// Class Editor.FixupSourceUVsCommandlet
// 0x0000 (0x0080 - 0x0080)
class UFixupSourceUVsCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Editor.FixupSourceUVsCommandlet" );

		return pClassPointer;
	};

};

UClass* UFixupSourceUVsCommandlet::pClassPointer = NULL;

// Class Editor.FonixFactory
// 0x0000 (0x0074 - 0x0074)
class UFonixFactory : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Editor.FonixFactory" );

		return pClassPointer;
	};

};

UClass* UFonixFactory::pClassPointer = NULL;

// Class Editor.TextureFactory
// 0x0064 (0x00D8 - 0x0074)
class UTextureFactory : public UFactory
{
public:
	unsigned long                                      NoCompression : 1;                                		// 0x0074 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      CompressionNoAlpha : 1;                           		// 0x0078 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      DeferCompression : 1;                             		// 0x007C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned char                                      CompressionSettings;                              		// 0x0080 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      Create_Material_ : 1;                             		// 0x0084 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      RGB_To_Diffuse : 1;                               		// 0x0088 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      RGB_To_Emissive : 1;                              		// 0x008C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      Alpha_To_Specular : 1;                            		// 0x0090 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      Alpha_To_Emissive : 1;                            		// 0x0094 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      Alpha_To_Opacity : 1;                             		// 0x0098 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      Alpha_To_Opacity_Mask : 1;                        		// 0x009C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      Two_Sided_ : 1;                                   		// 0x00A0 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned char                                      Blending;                                         		// 0x00A4 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      Lighting_Model;                                   		// 0x00A5 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      LODCategory;                                      		// 0x00A6 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      FlipBook : 1;                                     		// 0x00A8 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      Pickable : 1;                                     		// 0x00AC (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x00B0 (0x0004) MISSED OFFSET
	unsigned long                                      Dither_Mip_maps_alpha_ : 1;                       		// 0x00B4 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      Preserve_border_R : 1;                            		// 0x00B8 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      Preserve_border_G : 1;                            		// 0x00BC (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      Preserve_border_B : 1;                            		// 0x00C0 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      Preserve_border_A : 1;                            		// 0x00C4 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned char                                      GolemCrop;                                        		// 0x00C8 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      GolemCrop_Border_Size;                            		// 0x00C9 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      DistanceFieldResolution;                          		// 0x00CC (0x0001) [0x0000000000000001]              ( CPF_Edit )
	float                                              DistanceFieldMaxErrorPercentage;                  		// 0x00D0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DistanceFieldMaxDistanceInTexels;                 		// 0x00D4 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Editor.TextureFactory" );

		return pClassPointer;
	};

};

UClass* UTextureFactory::pClassPointer = NULL;

// Class Editor.FontFactory
// 0x0000 (0x00D8 - 0x00D8)
class UFontFactory : public UTextureFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Editor.FontFactory" );

		return pClassPointer;
	};

};

UClass* UFontFactory::pClassPointer = NULL;

// Class Editor.GeomModifier
// 0x0010 (0x0050 - 0x0040)
class UGeomModifier : public UObject
{
public:
	struct FString                                     Description;                                      		// 0x0040 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned long                                      bPushButton : 1;                                  		// 0x004C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bInitialized : 1;                                 		// 0x004C (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Editor.GeomModifier" );

		return pClassPointer;
	};

};

UClass* UGeomModifier::pClassPointer = NULL;

// Class Editor.GeomModifier_Edit
// 0x0000 (0x0050 - 0x0050)
class UGeomModifier_Edit : public UGeomModifier
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Editor.GeomModifier_Edit" );

		return pClassPointer;
	};

};

UClass* UGeomModifier_Edit::pClassPointer = NULL;

// Class Editor.GeomModifier_Clip
// 0x0004 (0x0054 - 0x0050)
class UGeomModifier_Clip : public UGeomModifier_Edit
{
public:
	unsigned long                                      bFlipNormal : 1;                                  		// 0x0050 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bSplit : 1;                                       		// 0x0050 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Editor.GeomModifier_Clip" );

		return pClassPointer;
	};

};

UClass* UGeomModifier_Clip::pClassPointer = NULL;

// Class Editor.GeomModifier_Create
// 0x0000 (0x0050 - 0x0050)
class UGeomModifier_Create : public UGeomModifier_Edit
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Editor.GeomModifier_Create" );

		return pClassPointer;
	};

};

UClass* UGeomModifier_Create::pClassPointer = NULL;

// Class Editor.GeomModifier_Delete
// 0x0000 (0x0050 - 0x0050)
class UGeomModifier_Delete : public UGeomModifier_Edit
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Editor.GeomModifier_Delete" );

		return pClassPointer;
	};

};

UClass* UGeomModifier_Delete::pClassPointer = NULL;

// Class Editor.GeomModifier_Extrude
// 0x0008 (0x0058 - 0x0050)
class UGeomModifier_Extrude : public UGeomModifier_Edit
{
public:
	int                                                Length;                                           		// 0x0050 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Segments;                                         		// 0x0054 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Editor.GeomModifier_Extrude" );

		return pClassPointer;
	};

};

UClass* UGeomModifier_Extrude::pClassPointer = NULL;

// Class Editor.GeomModifier_Flip
// 0x0000 (0x0050 - 0x0050)
class UGeomModifier_Flip : public UGeomModifier_Edit
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Editor.GeomModifier_Flip" );

		return pClassPointer;
	};

};

UClass* UGeomModifier_Flip::pClassPointer = NULL;

// Class Editor.GeomModifier_Lathe
// 0x0009 (0x0059 - 0x0050)
class UGeomModifier_Lathe : public UGeomModifier_Edit
{
public:
	int                                                TotalSegments;                                    		// 0x0050 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Segments;                                         		// 0x0054 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      Axis;                                             		// 0x0058 (0x0001) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Editor.GeomModifier_Lathe" );

		return pClassPointer;
	};

};

UClass* UGeomModifier_Lathe::pClassPointer = NULL;

// Class Editor.GeomModifier_Split
// 0x0000 (0x0050 - 0x0050)
class UGeomModifier_Split : public UGeomModifier_Edit
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Editor.GeomModifier_Split" );

		return pClassPointer;
	};

};

UClass* UGeomModifier_Split::pClassPointer = NULL;

// Class Editor.GeomModifier_Triangulate
// 0x0000 (0x0050 - 0x0050)
class UGeomModifier_Triangulate : public UGeomModifier_Edit
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Editor.GeomModifier_Triangulate" );

		return pClassPointer;
	};

};

UClass* UGeomModifier_Triangulate::pClassPointer = NULL;

// Class Editor.GeomModifier_Turn
// 0x0000 (0x0050 - 0x0050)
class UGeomModifier_Turn : public UGeomModifier_Edit
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Editor.GeomModifier_Turn" );

		return pClassPointer;
	};

};

UClass* UGeomModifier_Turn::pClassPointer = NULL;

// Class Editor.GeomModifier_Weld
// 0x0000 (0x0050 - 0x0050)
class UGeomModifier_Weld : public UGeomModifier_Edit
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Editor.GeomModifier_Weld" );

		return pClassPointer;
	};

};

UClass* UGeomModifier_Weld::pClassPointer = NULL;

// Class Editor.ImportDistanceFieldsCommandlet
// 0x0000 (0x0080 - 0x0080)
class UImportDistanceFieldsCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Editor.ImportDistanceFieldsCommandlet" );

		return pClassPointer;
	};

	int eventMain ( struct FString Params );
};

UClass* UImportDistanceFieldsCommandlet::pClassPointer = NULL;

// Class Editor.LensFlareFactoryNew
// 0x0000 (0x0074 - 0x0074)
class ULensFlareFactoryNew : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Editor.LensFlareFactoryNew" );

		return pClassPointer;
	};

};

UClass* ULensFlareFactoryNew::pClassPointer = NULL;

// Class Editor.LevelExporterOBJ
// 0x0000 (0x0068 - 0x0068)
class ULevelExporterOBJ : public UExporter
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Editor.LevelExporterOBJ" );

		return pClassPointer;
	};

};

UClass* ULevelExporterOBJ::pClassPointer = NULL;

// Class Editor.LevelExporterSTL
// 0x0000 (0x0068 - 0x0068)
class ULevelExporterSTL : public UExporter
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Editor.LevelExporterSTL" );

		return pClassPointer;
	};

};

UClass* ULevelExporterSTL::pClassPointer = NULL;

// Class Editor.LevelExporterT3D
// 0x0000 (0x0068 - 0x0068)
class ULevelExporterT3D : public UExporter
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Editor.LevelExporterT3D" );

		return pClassPointer;
	};

};

UClass* ULevelExporterT3D::pClassPointer = NULL;

// Class Editor.LevelFactory
// 0x0000 (0x0074 - 0x0074)
class ULevelFactory : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Editor.LevelFactory" );

		return pClassPointer;
	};

};

UClass* ULevelFactory::pClassPointer = NULL;

// Class Editor.LightingChannelsObject
// 0x0004 (0x0044 - 0x0040)
class ULightingChannelsObject : public UObject
{
public:
	struct FLightingChannelContainer                   LightingChannels;                                 		// 0x0040 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Editor.LightingChannelsObject" );

		return pClassPointer;
	};

};

UClass* ULightingChannelsObject::pClassPointer = NULL;

// Class Editor.ListCorruptedComponentsCommandlet
// 0x0000 (0x0080 - 0x0080)
class UListCorruptedComponentsCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Editor.ListCorruptedComponentsCommandlet" );

		return pClassPointer;
	};

};

UClass* UListCorruptedComponentsCommandlet::pClassPointer = NULL;

// Class Editor.ListEmittersUsingModuleCommandlet
// 0x0000 (0x0080 - 0x0080)
class UListEmittersUsingModuleCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Editor.ListEmittersUsingModuleCommandlet" );

		return pClassPointer;
	};

};

UClass* UListEmittersUsingModuleCommandlet::pClassPointer = NULL;

// Class Editor.ListLoopingEmittersCommandlet
// 0x0000 (0x0080 - 0x0080)
class UListLoopingEmittersCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Editor.ListLoopingEmittersCommandlet" );

		return pClassPointer;
	};

};

UClass* UListLoopingEmittersCommandlet::pClassPointer = NULL;

// Class Editor.ListPackagesReferencingCommandlet
// 0x0000 (0x0080 - 0x0080)
class UListPackagesReferencingCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Editor.ListPackagesReferencingCommandlet" );

		return pClassPointer;
	};

};

UClass* UListPackagesReferencingCommandlet::pClassPointer = NULL;

// Class Editor.ListPSysFixedBoundSettingCommandlet
// 0x0000 (0x0080 - 0x0080)
class UListPSysFixedBoundSettingCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Editor.ListPSysFixedBoundSettingCommandlet" );

		return pClassPointer;
	};

};

UClass* UListPSysFixedBoundSettingCommandlet::pClassPointer = NULL;

// Class Editor.ListScriptReferencedContentCommandlet
// 0x0000 (0x0080 - 0x0080)
class UListScriptReferencedContentCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Editor.ListScriptReferencedContentCommandlet" );

		return pClassPointer;
	};

};

UClass* UListScriptReferencedContentCommandlet::pClassPointer = NULL;

// Class Editor.LoadPackageCommandlet
// 0x0000 (0x0080 - 0x0080)
class ULoadPackageCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Editor.LoadPackageCommandlet" );

		return pClassPointer;
	};

};

UClass* ULoadPackageCommandlet::pClassPointer = NULL;

// Class Editor.LocSoundInfoCommandlet
// 0x0000 (0x0080 - 0x0080)
class ULocSoundInfoCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Editor.LocSoundInfoCommandlet" );

		return pClassPointer;
	};

};

UClass* ULocSoundInfoCommandlet::pClassPointer = NULL;

// Class Editor.MakeCommandlet
// 0x0000 (0x0080 - 0x0080)
class UMakeCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Editor.MakeCommandlet" );

		return pClassPointer;
	};

};

UClass* UMakeCommandlet::pClassPointer = NULL;

// Class Editor.MaterialFactoryNew
// 0x0000 (0x0074 - 0x0074)
class UMaterialFactoryNew : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Editor.MaterialFactoryNew" );

		return pClassPointer;
	};

};

UClass* UMaterialFactoryNew::pClassPointer = NULL;

// Class Editor.MaterialInstanceConstantFactoryNew
// 0x0000 (0x0074 - 0x0074)
class UMaterialInstanceConstantFactoryNew : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Editor.MaterialInstanceConstantFactoryNew" );

		return pClassPointer;
	};

};

UClass* UMaterialInstanceConstantFactoryNew::pClassPointer = NULL;

// Class Editor.MaterialInstanceTimeVaryingFactoryNew
// 0x0000 (0x0074 - 0x0074)
class UMaterialInstanceTimeVaryingFactoryNew : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Editor.MaterialInstanceTimeVaryingFactoryNew" );

		return pClassPointer;
	};

};

UClass* UMaterialInstanceTimeVaryingFactoryNew::pClassPointer = NULL;

// Class Editor.MergePackagesCommandlet
// 0x0000 (0x0080 - 0x0080)
class UMergePackagesCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Editor.MergePackagesCommandlet" );

		return pClassPointer;
	};

};

UClass* UMergePackagesCommandlet::pClassPointer = NULL;

// Class Editor.ModelExporterT3D
// 0x0000 (0x0068 - 0x0068)
class UModelExporterT3D : public UExporter
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Editor.ModelExporterT3D" );

		return pClassPointer;
	};

};

UClass* UModelExporterT3D::pClassPointer = NULL;

// Class Editor.ModelFactory
// 0x0000 (0x0074 - 0x0074)
class UModelFactory : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Editor.ModelFactory" );

		return pClassPointer;
	};

};

UClass* UModelFactory::pClassPointer = NULL;

// Class Editor.ObjectExporterT3D
// 0x0000 (0x0068 - 0x0068)
class UObjectExporterT3D : public UExporter
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Editor.ObjectExporterT3D" );

		return pClassPointer;
	};

};

UClass* UObjectExporterT3D::pClassPointer = NULL;

// Class Editor.ParticleSystemFactoryNew
// 0x0000 (0x0074 - 0x0074)
class UParticleSystemFactoryNew : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Editor.ParticleSystemFactoryNew" );

		return pClassPointer;
	};

};

UClass* UParticleSystemFactoryNew::pClassPointer = NULL;

// Class Editor.PatchScriptCommandlet
// 0x0000 (0x0080 - 0x0080)
class UPatchScriptCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Editor.PatchScriptCommandlet" );

		return pClassPointer;
	};

};

UClass* UPatchScriptCommandlet::pClassPointer = NULL;

// Class Editor.PerformTerrainMaterialDumpCommandlet
// 0x0000 (0x0080 - 0x0080)
class UPerformTerrainMaterialDumpCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Editor.PerformTerrainMaterialDumpCommandlet" );

		return pClassPointer;
	};

};

UClass* UPerformTerrainMaterialDumpCommandlet::pClassPointer = NULL;

// Class Editor.PersistentCookerData
// 0x00D0 (0x0110 - 0x0040)
class UPersistentCookerData : public UObject
{
public:
	unsigned char                                      UnknownData00[ 0xD0 ];                            		// 0x0040 (0x00D0) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Editor.PersistentCookerData" );

		return pClassPointer;
	};

};

UClass* UPersistentCookerData::pClassPointer = NULL;

// Class Editor.PhysicalMaterialFactoryNew
// 0x0000 (0x0074 - 0x0074)
class UPhysicalMaterialFactoryNew : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Editor.PhysicalMaterialFactoryNew" );

		return pClassPointer;
	};

};

UClass* UPhysicalMaterialFactoryNew::pClassPointer = NULL;

// Class Editor.PhysXParticleSystemFactoryNew
// 0x0000 (0x0074 - 0x0074)
class UPhysXParticleSystemFactoryNew : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Editor.PhysXParticleSystemFactoryNew" );

		return pClassPointer;
	};

};

UClass* UPhysXParticleSystemFactoryNew::pClassPointer = NULL;

// Class Editor.PIEToNormalCommandlet
// 0x0000 (0x0080 - 0x0080)
class UPIEToNormalCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Editor.PIEToNormalCommandlet" );

		return pClassPointer;
	};

};

UClass* UPIEToNormalCommandlet::pClassPointer = NULL;

// Class Editor.PkgInfoCommandlet
// 0x0000 (0x0080 - 0x0080)
class UPkgInfoCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Editor.PkgInfoCommandlet" );

		return pClassPointer;
	};

};

UClass* UPkgInfoCommandlet::pClassPointer = NULL;

// Class Editor.PolysExporterT3D
// 0x0000 (0x0068 - 0x0068)
class UPolysExporterT3D : public UExporter
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Editor.PolysExporterT3D" );

		return pClassPointer;
	};

};

UClass* UPolysExporterT3D::pClassPointer = NULL;

// Class Editor.PolysFactory
// 0x0000 (0x0074 - 0x0074)
class UPolysFactory : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Editor.PolysFactory" );

		return pClassPointer;
	};

};

UClass* UPolysFactory::pClassPointer = NULL;

// Class Editor.PostProcessFactoryNew
// 0x0000 (0x0074 - 0x0074)
class UPostProcessFactoryNew : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Editor.PostProcessFactoryNew" );

		return pClassPointer;
	};

};

UClass* UPostProcessFactoryNew::pClassPointer = NULL;

// Class Editor.PrecompileShadersCommandlet
// 0x0018 (0x0098 - 0x0080)
class UPrecompileShadersCommandlet : public UCommandlet
{
public:
	unsigned char                                      UnknownData00[ 0x18 ];                            		// 0x0080 (0x0018) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Editor.PrecompileShadersCommandlet" );

		return pClassPointer;
	};

};

UClass* UPrecompileShadersCommandlet::pClassPointer = NULL;

// Class Editor.RebuildMapCommandlet
// 0x0000 (0x0080 - 0x0080)
class URebuildMapCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Editor.RebuildMapCommandlet" );

		return pClassPointer;
	};

};

UClass* URebuildMapCommandlet::pClassPointer = NULL;

// Class Editor.RenderTargetCubeExporterTGA
// 0x0004 (0x006C - 0x0068)
class URenderTargetCubeExporterTGA : public UExporter
{
public:
	unsigned char                                      CubeFace;                                         		// 0x0068 (0x0001) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Editor.RenderTargetCubeExporterTGA" );

		return pClassPointer;
	};

};

UClass* URenderTargetCubeExporterTGA::pClassPointer = NULL;

// Class Editor.RenderTargetExporterTGA
// 0x0000 (0x0068 - 0x0068)
class URenderTargetExporterTGA : public UExporter
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Editor.RenderTargetExporterTGA" );

		return pClassPointer;
	};

};

UClass* URenderTargetExporterTGA::pClassPointer = NULL;

// Class Editor.ReplaceActorCommandlet
// 0x0000 (0x0080 - 0x0080)
class UReplaceActorCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Editor.ReplaceActorCommandlet" );

		return pClassPointer;
	};

};

UClass* UReplaceActorCommandlet::pClassPointer = NULL;

// Class Editor.ScaleAudioVolumeCommandlet
// 0x0000 (0x0080 - 0x0080)
class UScaleAudioVolumeCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Editor.ScaleAudioVolumeCommandlet" );

		return pClassPointer;
	};

};

UClass* UScaleAudioVolumeCommandlet::pClassPointer = NULL;

// Class Editor.SequenceExporterT3D
// 0x0000 (0x0068 - 0x0068)
class USequenceExporterT3D : public UExporter
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Editor.SequenceExporterT3D" );

		return pClassPointer;
	};

};

UClass* USequenceExporterT3D::pClassPointer = NULL;

// Class Editor.SequenceFactory
// 0x0000 (0x0074 - 0x0074)
class USequenceFactory : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Editor.SequenceFactory" );

		return pClassPointer;
	};

};

UClass* USequenceFactory::pClassPointer = NULL;

// Class Editor.SetMaterialUsageCommandlet
// 0x0000 (0x0080 - 0x0080)
class USetMaterialUsageCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Editor.SetMaterialUsageCommandlet" );

		return pClassPointer;
	};

};

UClass* USetMaterialUsageCommandlet::pClassPointer = NULL;

// Class Editor.SetPackageFlagsCommandlet
// 0x0000 (0x0080 - 0x0080)
class USetPackageFlagsCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Editor.SetPackageFlagsCommandlet" );

		return pClassPointer;
	};

};

UClass* USetPackageFlagsCommandlet::pClassPointer = NULL;

// Class Editor.SetTextureLODGroupCommandlet
// 0x0000 (0x0080 - 0x0080)
class USetTextureLODGroupCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Editor.SetTextureLODGroupCommandlet" );

		return pClassPointer;
	};

};

UClass* USetTextureLODGroupCommandlet::pClassPointer = NULL;

// Class Editor.ShowObjectCountCommandlet
// 0x0000 (0x0080 - 0x0080)
class UShowObjectCountCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Editor.ShowObjectCountCommandlet" );

		return pClassPointer;
	};

};

UClass* UShowObjectCountCommandlet::pClassPointer = NULL;

// Class Editor.ShowStylesCommandlet
// 0x0000 (0x0080 - 0x0080)
class UShowStylesCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Editor.ShowStylesCommandlet" );

		return pClassPointer;
	};

};

UClass* UShowStylesCommandlet::pClassPointer = NULL;

// Class Editor.ShowTaggedPropsCommandlet
// 0x0048 (0x00C8 - 0x0080)
class UShowTaggedPropsCommandlet : public UCommandlet
{
public:
	unsigned char                                      UnknownData00[ 0x48 ];                            		// 0x0080 (0x0048) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Editor.ShowTaggedPropsCommandlet" );

		return pClassPointer;
	};

};

UClass* UShowTaggedPropsCommandlet::pClassPointer = NULL;

// Class Editor.SkeletalMeshFactory
// 0x0008 (0x007C - 0x0074)
class USkeletalMeshFactory : public UFactory
{
public:
	unsigned long                                      bAssumeMayaCoordinates : 1;                       		// 0x0074 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0078 (0x0004) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Editor.SkeletalMeshFactory" );

		return pClassPointer;
	};

};

UClass* USkeletalMeshFactory::pClassPointer = NULL;

// Class Editor.SoundCueFactoryNew
// 0x0000 (0x0074 - 0x0074)
class USoundCueFactoryNew : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Editor.SoundCueFactoryNew" );

		return pClassPointer;
	};

};

UClass* USoundCueFactoryNew::pClassPointer = NULL;

// Class Editor.SoundExporterWAV
// 0x0000 (0x0068 - 0x0068)
class USoundExporterWAV : public UExporter
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Editor.SoundExporterWAV" );

		return pClassPointer;
	};

};

UClass* USoundExporterWAV::pClassPointer = NULL;

// Class Editor.SoundFactory
// 0x000C (0x0080 - 0x0074)
class USoundFactory : public UFactory
{
public:
	unsigned long                                      bAutoCreateCue : 1;                               		// 0x0074 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bIncludeAttenuationNode : 1;                      		// 0x0078 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	float                                              CueVolume;                                        		// 0x007C (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Editor.SoundFactory" );

		return pClassPointer;
	};

};

UClass* USoundFactory::pClassPointer = NULL;

// Class Editor.SoundGroupInfoCommandlet
// 0x0000 (0x0080 - 0x0080)
class USoundGroupInfoCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Editor.SoundGroupInfoCommandlet" );

		return pClassPointer;
	};

};

UClass* USoundGroupInfoCommandlet::pClassPointer = NULL;

// Class Editor.SoundSurroundExporterWAV
// 0x0000 (0x0068 - 0x0068)
class USoundSurroundExporterWAV : public UExporter
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Editor.SoundSurroundExporterWAV" );

		return pClassPointer;
	};

};

UClass* USoundSurroundExporterWAV::pClassPointer = NULL;

// Class Editor.SoundSurroundFactory
// 0x0004 (0x0078 - 0x0074)
class USoundSurroundFactory : public UFactory
{
public:
	float                                              CueVolume;                                        		// 0x0074 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Editor.SoundSurroundFactory" );

		return pClassPointer;
	};

};

UClass* USoundSurroundFactory::pClassPointer = NULL;

// Class Editor.SoundTTSFactory
// 0x001C (0x0090 - 0x0074)
class USoundTTSFactory : public UFactory
{
public:
	unsigned long                                      bAutoCreateCue : 1;                               		// 0x0074 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bIncludeAttenuationNode : 1;                      		// 0x0078 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bUseTTS : 1;                                      		// 0x007C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	struct FString                                     SpokenText;                                       		// 0x0080 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	float                                              CueVolume;                                        		// 0x008C (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Editor.SoundTTSFactory" );

		return pClassPointer;
	};

};

UClass* USoundTTSFactory::pClassPointer = NULL;

// Class Editor.SpeedTreeFactory
// 0x0004 (0x0078 - 0x0074)
class USpeedTreeFactory : public UFactory
{
public:
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0074 (0x0004) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Editor.SpeedTreeFactory" );

		return pClassPointer;
	};

};

UClass* USpeedTreeFactory::pClassPointer = NULL;

// Class Editor.StaticMeshExporterOBJ
// 0x0000 (0x0068 - 0x0068)
class UStaticMeshExporterOBJ : public UExporter
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Editor.StaticMeshExporterOBJ" );

		return pClassPointer;
	};

};

UClass* UStaticMeshExporterOBJ::pClassPointer = NULL;

// Class Editor.StaticMeshFactory
// 0x0010 (0x0084 - 0x0074)
class UStaticMeshFactory : public UFactory
{
public:
	int                                                Pitch;                                            		// 0x0074 (0x0004) [0x0000000000000000]              
	int                                                Roll;                                             		// 0x0078 (0x0004) [0x0000000000000000]              
	int                                                Yaw;                                              		// 0x007C (0x0004) [0x0000000000000000]              
	unsigned long                                      bOneConvexPerUCXObject : 1;                       		// 0x0080 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Editor.StaticMeshFactory" );

		return pClassPointer;
	};

};

UClass* UStaticMeshFactory::pClassPointer = NULL;

// Class Editor.StripSourceCommandlet
// 0x0000 (0x0080 - 0x0080)
class UStripSourceCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Editor.StripSourceCommandlet" );

		return pClassPointer;
	};

};

UClass* UStripSourceCommandlet::pClassPointer = NULL;

// Class Editor.TerrainExporterT3D
// 0x0008 (0x0070 - 0x0068)
class UTerrainExporterT3D : public UExporter
{
public:
	unsigned char                                      UnknownData00[ 0x8 ];                             		// 0x0068 (0x0008) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Editor.TerrainExporterT3D" );

		return pClassPointer;
	};

};

UClass* UTerrainExporterT3D::pClassPointer = NULL;

// Class Editor.TerrainFactory
// 0x0004 (0x0078 - 0x0074)
class UTerrainFactory : public UFactory
{
public:
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0074 (0x0004) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Editor.TerrainFactory" );

		return pClassPointer;
	};

};

UClass* UTerrainFactory::pClassPointer = NULL;

// Class Editor.TerrainHeightMapExporter
// 0x0000 (0x0068 - 0x0068)
class UTerrainHeightMapExporter : public UExporter
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Editor.TerrainHeightMapExporter" );

		return pClassPointer;
	};

};

UClass* UTerrainHeightMapExporter::pClassPointer = NULL;

// Class Editor.TerrainHeightMapExporterG16BMPT3D
// 0x0000 (0x0068 - 0x0068)
class UTerrainHeightMapExporterG16BMPT3D : public UTerrainHeightMapExporter
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Editor.TerrainHeightMapExporterG16BMPT3D" );

		return pClassPointer;
	};

};

UClass* UTerrainHeightMapExporterG16BMPT3D::pClassPointer = NULL;

// Class Editor.TerrainHeightMapExporterTextT3D
// 0x0000 (0x0068 - 0x0068)
class UTerrainHeightMapExporterTextT3D : public UTerrainHeightMapExporter
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Editor.TerrainHeightMapExporterTextT3D" );

		return pClassPointer;
	};

};

UClass* UTerrainHeightMapExporterTextT3D::pClassPointer = NULL;

// Class Editor.TerrainHeightMapFactory
// 0x0000 (0x0040 - 0x0040)
class UTerrainHeightMapFactory : public UObject
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Editor.TerrainHeightMapFactory" );

		return pClassPointer;
	};

};

UClass* UTerrainHeightMapFactory::pClassPointer = NULL;

// Class Editor.TerrainHeightMapFactoryG16BMP
// 0x0000 (0x0040 - 0x0040)
class UTerrainHeightMapFactoryG16BMP : public UTerrainHeightMapFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Editor.TerrainHeightMapFactoryG16BMP" );

		return pClassPointer;
	};

};

UClass* UTerrainHeightMapFactoryG16BMP::pClassPointer = NULL;

// Class Editor.TerrainHeightMapFactoryG16BMPT3D
// 0x0000 (0x0040 - 0x0040)
class UTerrainHeightMapFactoryG16BMPT3D : public UTerrainHeightMapFactoryG16BMP
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Editor.TerrainHeightMapFactoryG16BMPT3D" );

		return pClassPointer;
	};

};

UClass* UTerrainHeightMapFactoryG16BMPT3D::pClassPointer = NULL;

// Class Editor.TerrainHeightMapFactoryTextT3D
// 0x0000 (0x0040 - 0x0040)
class UTerrainHeightMapFactoryTextT3D : public UTerrainHeightMapFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Editor.TerrainHeightMapFactoryTextT3D" );

		return pClassPointer;
	};

};

UClass* UTerrainHeightMapFactoryTextT3D::pClassPointer = NULL;

// Class Editor.TerrainLayerSetupFactoryNew
// 0x0000 (0x0074 - 0x0074)
class UTerrainLayerSetupFactoryNew : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Editor.TerrainLayerSetupFactoryNew" );

		return pClassPointer;
	};

};

UClass* UTerrainLayerSetupFactoryNew::pClassPointer = NULL;

// Class Editor.TerrainMaterialFactoryNew
// 0x0000 (0x0074 - 0x0074)
class UTerrainMaterialFactoryNew : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Editor.TerrainMaterialFactoryNew" );

		return pClassPointer;
	};

};

UClass* UTerrainMaterialFactoryNew::pClassPointer = NULL;

// Class Editor.TestCompressionCommandlet
// 0x0000 (0x0080 - 0x0080)
class UTestCompressionCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Editor.TestCompressionCommandlet" );

		return pClassPointer;
	};

};

UClass* UTestCompressionCommandlet::pClassPointer = NULL;

// Class Editor.TestWordWrapCommandlet
// 0x0000 (0x0080 - 0x0080)
class UTestWordWrapCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Editor.TestWordWrapCommandlet" );

		return pClassPointer;
	};

};

UClass* UTestWordWrapCommandlet::pClassPointer = NULL;

// Class Editor.TextBufferExporterTXT
// 0x0000 (0x0068 - 0x0068)
class UTextBufferExporterTXT : public UExporter
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Editor.TextBufferExporterTXT" );

		return pClassPointer;
	};

};

UClass* UTextBufferExporterTXT::pClassPointer = NULL;

// Class Editor.TextureCubeFactoryNew
// 0x0000 (0x0074 - 0x0074)
class UTextureCubeFactoryNew : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Editor.TextureCubeFactoryNew" );

		return pClassPointer;
	};

};

UClass* UTextureCubeFactoryNew::pClassPointer = NULL;

// Class Editor.TextureExporterBMP
// 0x0000 (0x0068 - 0x0068)
class UTextureExporterBMP : public UExporter
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Editor.TextureExporterBMP" );

		return pClassPointer;
	};

};

UClass* UTextureExporterBMP::pClassPointer = NULL;

// Class Editor.TextureExporterPCX
// 0x0000 (0x0068 - 0x0068)
class UTextureExporterPCX : public UExporter
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Editor.TextureExporterPCX" );

		return pClassPointer;
	};

};

UClass* UTextureExporterPCX::pClassPointer = NULL;

// Class Editor.TextureExporterTGA
// 0x0000 (0x0068 - 0x0068)
class UTextureExporterTGA : public UExporter
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Editor.TextureExporterTGA" );

		return pClassPointer;
	};

};

UClass* UTextureExporterTGA::pClassPointer = NULL;

// Class Editor.TextureMovieFactory
// 0x0004 (0x0078 - 0x0074)
class UTextureMovieFactory : public UFactory
{
public:
	unsigned char                                      MovieStreamSource;                                		// 0x0074 (0x0001) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Editor.TextureMovieFactory" );

		return pClassPointer;
	};

};

UClass* UTextureMovieFactory::pClassPointer = NULL;

// Class Editor.TextureRenderTargetCubeFactoryNew
// 0x0008 (0x007C - 0x0074)
class UTextureRenderTargetCubeFactoryNew : public UFactory
{
public:
	int                                                Width;                                            		// 0x0074 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      Format;                                           		// 0x0078 (0x0001) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Editor.TextureRenderTargetCubeFactoryNew" );

		return pClassPointer;
	};

};

UClass* UTextureRenderTargetCubeFactoryNew::pClassPointer = NULL;

// Class Editor.TextureRenderTargetFactoryNew
// 0x000C (0x0080 - 0x0074)
class UTextureRenderTargetFactoryNew : public UFactory
{
public:
	int                                                Width;                                            		// 0x0074 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Height;                                           		// 0x0078 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      Format;                                           		// 0x007C (0x0001) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Editor.TextureRenderTargetFactoryNew" );

		return pClassPointer;
	};

};

UClass* UTextureRenderTargetFactoryNew::pClassPointer = NULL;

// Class Editor.Transactor
// 0x0000 (0x0040 - 0x0040)
class UTransactor : public UObject
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Editor.Transactor" );

		return pClassPointer;
	};

};

UClass* UTransactor::pClassPointer = NULL;

// Class Editor.TransBuffer
// 0x0024 (0x0064 - 0x0040)
class UTransBuffer : public UTransactor
{
public:
	unsigned char                                      UnknownData00[ 0x24 ];                            		// 0x0040 (0x0024) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Editor.TransBuffer" );

		return pClassPointer;
	};

};

UClass* UTransBuffer::pClassPointer = NULL;

// Class Editor.TrueTypeFontFactory
// 0x0004 (0x00DC - 0x00D8)
class UTrueTypeFontFactory : public UFontFactory
{
public:
	class UFontImportOptions*                          ImportOptions;                                    		// 0x00D8 (0x0004) [0x0000000006000001]              ( CPF_Edit | CPF_NoClear | CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Editor.TrueTypeFontFactory" );

		return pClassPointer;
	};

};

UClass* UTrueTypeFontFactory::pClassPointer = NULL;

// Class Editor.TrueTypeMultiFontFactory
// 0x0024 (0x0100 - 0x00DC)
class UTrueTypeMultiFontFactory : public UTrueTypeFontFactory
{
public:
	TArray< float >                                    ResTests;                                         		// 0x00DC (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< float >                                    ResHeights;                                       		// 0x00E8 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< class UFont* >                             ResFonts;                                         		// 0x00F4 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Editor.TrueTypeMultiFontFactory" );

		return pClassPointer;
	};

};

UClass* UTrueTypeMultiFontFactory::pClassPointer = NULL;

// Class Editor.UT3MapStatsCommandlet
// 0x0000 (0x0080 - 0x0080)
class UUT3MapStatsCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Editor.UT3MapStatsCommandlet" );

		return pClassPointer;
	};

};

UClass* UUT3MapStatsCommandlet::pClassPointer = NULL;

// Class Editor.WrangleContentCommandlet
// 0x0000 (0x0080 - 0x0080)
class UWrangleContentCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Editor.WrangleContentCommandlet" );

		return pClassPointer;
	};

};

UClass* UWrangleContentCommandlet::pClassPointer = NULL;

// Class Editor.ConeBuilder
// 0x0020 (0x009C - 0x007C)
class UConeBuilder : public UBrushBuilder
{
public:
	float                                              Z;                                                		// 0x007C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              CapZ;                                             		// 0x0080 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              OuterRadius;                                      		// 0x0084 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              InnerRadius;                                      		// 0x0088 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Sides;                                            		// 0x008C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       GroupName;                                        		// 0x0090 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      AlignToSide : 1;                                  		// 0x0098 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      Hollow : 1;                                       		// 0x0098 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Editor.ConeBuilder" );

		return pClassPointer;
	};

	bool eventBuild ( );
	void BuildCone ( int Direction, unsigned long InAlignToSide, int InSides, float InZ, float Radius, struct FName Item );
};

UClass* UConeBuilder::pClassPointer = NULL;

// Class Editor.CurvedStairBuilder
// 0x0024 (0x00A0 - 0x007C)
class UCurvedStairBuilder : public UBrushBuilder
{
public:
	int                                                InnerRadius;                                      		// 0x007C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                StepHeight;                                       		// 0x0080 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                StepWidth;                                        		// 0x0084 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                AngleOfCurve;                                     		// 0x0088 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                NumSteps;                                         		// 0x008C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                AddToFirstStep;                                   		// 0x0090 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       GroupName;                                        		// 0x0094 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      CounterClockwise : 1;                             		// 0x009C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Editor.CurvedStairBuilder" );

		return pClassPointer;
	};

	bool eventBuild ( );
	void BuildCurvedStair ( int Direction );
};

UClass* UCurvedStairBuilder::pClassPointer = NULL;

// Class Editor.CylinderBuilder
// 0x001C (0x0098 - 0x007C)
class UCylinderBuilder : public UBrushBuilder
{
public:
	float                                              Z;                                                		// 0x007C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              OuterRadius;                                      		// 0x0080 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              InnerRadius;                                      		// 0x0084 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Sides;                                            		// 0x0088 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       GroupName;                                        		// 0x008C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      AlignToSide : 1;                                  		// 0x0094 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      Hollow : 1;                                       		// 0x0094 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Editor.CylinderBuilder" );

		return pClassPointer;
	};

	bool eventBuild ( );
	void BuildCylinder ( int Direction, unsigned long InAlignToSide, int InSides, float InZ, float Radius );
};

UClass* UCylinderBuilder::pClassPointer = NULL;

// Class Editor.LinearStairBuilder
// 0x001C (0x0098 - 0x007C)
class ULinearStairBuilder : public UBrushBuilder
{
public:
	int                                                StepLength;                                       		// 0x007C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                StepHeight;                                       		// 0x0080 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                StepWidth;                                        		// 0x0084 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                NumSteps;                                         		// 0x0088 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                AddToFirstStep;                                   		// 0x008C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       GroupName;                                        		// 0x0090 (0x0008) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Editor.LinearStairBuilder" );

		return pClassPointer;
	};

	bool eventBuild ( );
};

UClass* ULinearStairBuilder::pClassPointer = NULL;

// Class Editor.SheetBuilder
// 0x001C (0x0098 - 0x007C)
class USheetBuilder : public UBrushBuilder
{
public:
	int                                                X;                                                		// 0x007C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Y;                                                		// 0x0080 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                XSegments;                                        		// 0x0084 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                YSegments;                                        		// 0x0088 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      Axis;                                             		// 0x008C (0x0001) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       GroupName;                                        		// 0x0090 (0x0008) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Editor.SheetBuilder" );

		return pClassPointer;
	};

	bool eventBuild ( );
};

UClass* USheetBuilder::pClassPointer = NULL;

// Class Editor.SpiralStairBuilder
// 0x0024 (0x00A0 - 0x007C)
class USpiralStairBuilder : public UBrushBuilder
{
public:
	int                                                InnerRadius;                                      		// 0x007C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                StepWidth;                                        		// 0x0080 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                StepHeight;                                       		// 0x0084 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                StepThickness;                                    		// 0x0088 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                NumStepsPer360;                                   		// 0x008C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                NumSteps;                                         		// 0x0090 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       GroupName;                                        		// 0x0094 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      SlopedCeiling : 1;                                		// 0x009C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      SlopedFloor : 1;                                  		// 0x009C (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      CounterClockwise : 1;                             		// 0x009C (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Editor.SpiralStairBuilder" );

		return pClassPointer;
	};

	bool eventBuild ( );
	void BuildCurvedStair ( int Direction );
};

UClass* USpiralStairBuilder::pClassPointer = NULL;

// Class Editor.TetrahedronBuilder
// 0x0010 (0x008C - 0x007C)
class UTetrahedronBuilder : public UBrushBuilder
{
public:
	float                                              Radius;                                           		// 0x007C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                SphereExtrapolation;                              		// 0x0080 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       GroupName;                                        		// 0x0084 (0x0008) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Editor.TetrahedronBuilder" );

		return pClassPointer;
	};

	bool eventBuild ( );
	void BuildTetrahedron ( float R, int InSphereExtrapolation );
	void Extrapolate ( int A, int B, int C, int Count, float InRadius );
};

UClass* UTetrahedronBuilder::pClassPointer = NULL;

// Class Editor.VolumetricBuilder
// 0x0014 (0x0090 - 0x007C)
class UVolumetricBuilder : public UBrushBuilder
{
public:
	float                                              Z;                                                		// 0x007C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Radius;                                           		// 0x0080 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                NumSheets;                                        		// 0x0084 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       GroupName;                                        		// 0x0088 (0x0008) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Editor.VolumetricBuilder" );

		return pClassPointer;
	};

	bool eventBuild ( );
	void BuildVolumetric ( int Direction, int InNumSheets, float InZ, float InRadius );
};

UClass* UVolumetricBuilder::pClassPointer = NULL;


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif