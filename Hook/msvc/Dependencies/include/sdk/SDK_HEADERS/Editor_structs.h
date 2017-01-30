/*
#############################################################################################
# All Points Bulletin Reloaded (1.6) SDK
# Generated with TheFeckless UE3 SDK Generator v1.2_Beta-Rev.39
# ========================================================================================= #
# File: Editor_structs.h
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
# Script Structs
# ========================================================================================= #
*/

// ScriptStruct Editor.BrushBuilder.BuilderPoly
// 0x001C
struct FBuilderPoly
{
	TArray< int >                                      VertexIndices;                                    		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                Direction;                                        		// 0x000C (0x0004) [0x0000000000000000]              
	struct FName                                       Item;                                             		// 0x0010 (0x0008) [0x0000000000000000]              
	int                                                PolyFlags;                                        		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Editor.ContentTagIndex.AssetReferences
// 0x000C
struct FAssetReferences
{
	TArray< struct FString >                           AssetReference;                                   		// 0x0000 (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
};

// ScriptStruct Editor.ContentTagIndex.TagInfo
// 0x0028
struct FTagInfo
{
	struct FString                                     AssetTypeName;                                    		// 0x0000 (0x000C) [0x0000000000404002]              ( CPF_Const | CPF_Config | CPF_NeedCtorLink )
	class UClass*                                      AssetType;                                        		// 0x000C (0x0004) [0x0000000000000000]              
	TArray< struct FName >                             Tags;                                             		// 0x0010 (0x000C) [0x0000000000404002]              ( CPF_Const | CPF_Config | CPF_NeedCtorLink )
	TArray< struct FAssetReferences >                  Assets;                                           		// 0x001C (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif