/*
#############################################################################################
# All Points Bulletin Reloaded (1.6) SDK
# Generated with TheFeckless UE3 SDK Generator v1.2_Beta-Rev.39
# ========================================================================================= #
# File: APBGame_structs.h
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

// ScriptStruct APBGame.APBGameInfo.DesignerConstant
// 0x0004
struct FDesignerConstant
{
	float                                              m_fValue;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.APBGameInfo.OpenWorldConstant
// 0x0008
struct FOpenWorldConstant
{
	unsigned char                                      m_eOpenWorldConstant;                             		// 0x0000 (0x0001) [0x0000000000000000]              
	float                                              m_fValue;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.APBStudio.TextureGenerationData
// 0x0020
struct FTextureGenerationData
{
	unsigned char                                      eBuildState;                                      		// 0x0000 (0x0001) [0x0000000000000000]              
	int                                                nStateIndex;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                nNumMipLevels;                                    		// 0x0008 (0x0004) [0x0000000000000000]              
	class UcGolemRenderTarget*                         pRenderTarget;                                    		// 0x000C (0x0004) [0x0000000000000000]              
	unsigned long                                      bNormalMap : 1;                                   		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	class UTexture2D*                                  pTexture;                                         		// 0x0014 (0x0004) [0x0000000000000000]              
	unsigned long                                      bIsDataValid : 1;                                 		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bGenerateMipLevels : 1;                           		// 0x0018 (0x0004) [0x0000000000000000] [0x00000002] 
	struct FPointer                                    Requester;                                        		// 0x001C (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.GolemobileBase.GolemobilePartType
// 0x0044
struct FGolemobilePartType
{
	struct FString                                     sName;                                            		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     sDisplayName;                                     		// 0x000C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned long                                      bCommon : 1;                                      		// 0x0018 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	int                                                NumParts;                                         		// 0x001C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      eCategory;                                        		// 0x0020 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	int                                                DefaultPart;                                      		// 0x0024 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      Optional : 1;                                     		// 0x0028 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      ColourCustomisable : 1;                           		// 0x0028 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	struct FName                                       sAttachToSocket;                                  		// 0x002C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class UTexture2D*                                  ComponentMask;                                    		// 0x0034 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< unsigned long >                            bExportToUI;                                      		// 0x0038 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct APBGame.GolemBase.GolemProjectionArea
// 0x0040
struct FGolemProjectionArea
{
	unsigned char                                      nID;                                              		// 0x0000 (0x0001) [0x0000000000020001]              ( CPF_Edit | CPF_EditConst )
	struct FString                                     Name;                                             		// 0x0004 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class UTexture2D*                                  Mask;                                             		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     Bone;                                             		// 0x0014 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	float                                              fDefaultRadius;                                   		// 0x0020 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fDefaultHeight;                                   		// 0x0024 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     vBonePositionOffset;                              		// 0x0028 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     vBoneDirectionOffset;                             		// 0x0034 (0x000C) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct APBGame.GolemBase.GolemBaseHairType
// 0x0024
struct FGolemBaseHairType
{
	struct FString                                     Name;                                             		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class UTexture2D*                                  BaseColourTexture;                                		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UTexture2D*                                  BaseNormalMapTexture;                             		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UTexture2D*                                  MeshColourTexture;                                		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UTexture2D*                                  MeshNormalMapTexture;                             		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              SpecularExponent1;                                		// 0x001C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              SpecularExponent2;                                		// 0x0020 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct APBGame.GolemBase.GolemBaseHairShape
// 0x0050
struct FGolemBaseHairShape
{
	struct FString                                     Name;                                             		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class USkeletalMesh*                               SkeletalMesh;                                     		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UMorphTargetSet*                             BaseBodyMorph;                                    		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FString >                           BodyMorphGroupsToDisable;                         		// 0x0014 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class UAnimTree*                                   AnimTree;                                         		// 0x0020 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< class UAnimSet* >                          AnimSets;                                         		// 0x0024 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< class UMorphTargetSet* >                   MorphSets;                                        		// 0x0030 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FGolemBaseHairType >                Types;                                            		// 0x003C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned long                                      bDisabled : 1;                                    		// 0x0048 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	int                                                Guid;                                             		// 0x004C (0x0004) [0x0000000000020001]              ( CPF_Edit | CPF_EditConst )
};

// ScriptStruct APBGame.GolemobileBase.GolemobileLicensePlateData
// 0x0030
struct FGolemobileLicensePlateData
{
	struct FVector2D                                   BackDestTL;                                       		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FVector2D                                   BackDestBR;                                       		// 0x0008 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FVector2D                                   BackSrcTL;                                        		// 0x0010 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FVector2D                                   BackSrcBR;                                        		// 0x0018 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FLinearColor                                DigitColour;                                      		// 0x0020 (0x0010) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct APBGame.GolemBase.GolemProjectionPose
// 0x0014
struct FGolemProjectionPose
{
	struct FString                                     AnimSeqName;                                      		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned long                                      bStaticPose : 1;                                  		// 0x000C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	float                                              Time;                                             		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct APBGame.GolemBase.GolemMakeUpData
// 0x0010
struct FGolemMakeUpData
{
	unsigned long                                      bGrayscale : 1;                                   		// 0x0000 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	class UTexture2D*                                  pTexture;                                         		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                nUIPriority;                                      		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                nOriginalIndex;                                   		// 0x000C (0x0004) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct APBGame.GolemBase.GolemScar
// 0x0018
struct FGolemScar
{
	class UTexture2D*                                  OldColourMap;                                     		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UTexture2D*                                  NewColourMap;                                     		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UTexture2D*                                  NormalMap;                                        		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     LocalisedNameTag;                                 		// 0x000C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct APBGame.GolemBase.GolemBaseColourNormalMap
// 0x0008
struct FGolemBaseColourNormalMap
{
	class UTexture2D*                                  ColourMap;                                        		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UTexture2D*                                  NormalMap;                                        		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct APBGame.GolemBase.GolemBaseSkinTone
// 0x0008
struct FGolemBaseSkinTone
{
	class UTexture2D*                                  ColourMap;                                        		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Threshold;                                        		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct APBGame.GolemBase.GolemBaseTextureBlock
// 0x0018
struct FGolemBaseTextureBlock
{
	int                                                nX;                                               		// 0x0000 (0x0004) [0x0000000000020001]              ( CPF_Edit | CPF_EditConst )
	int                                                nY;                                               		// 0x0004 (0x0004) [0x0000000000020001]              ( CPF_Edit | CPF_EditConst )
	float                                              fPriority;                                        		// 0x0008 (0x0004) [0x0000000000020001]              ( CPF_Edit | CPF_EditConst )
	TArray< int >                                      aSegments;                                        		// 0x000C (0x000C) [0x0000000000420001]              ( CPF_Edit | CPF_EditConst | CPF_NeedCtorLink )
};

// ScriptStruct APBGame.GolemBase.SegmentationDataLOD
// 0x0030
struct FSegmentationDataLOD
{
	TArray< struct FString >                           aSegmentNames;                                    		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      aSegmentMap;                                      		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      aSegmentPerFace;                                  		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      aChunkPerFace;                                    		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct APBGame.GolemBase.GolemPartExternalData
// 0x001C
struct FGolemPartExternalData
{
	struct FString                                     sName;                                            		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     sGolemPartName;                                   		// 0x000C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned long                                      bEnabled : 1;                                     		// 0x0018 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bLoaded : 1;                                      		// 0x0018 (0x0004) [0x0000000000002000] [0x00000002] ( CPF_Transient )
};

// ScriptStruct APBGame.cNPCVehicleBrain.NPCVehicleSpeed
// 0x001C
struct FNPCVehicleSpeed
{
	int                                                m_eNPCVehicleCategory;                            		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              m_fMinTopSpeedRatio;                              		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              m_fMaxTopSpeedRatio;                              		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              m_fMinAcceleration;                               		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              m_fMaxAcceleration;                               		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              m_fMinDeceleration;                               		// 0x0014 (0x0004) [0x0000000000000000]              
	float                                              m_fMaxDeceleration;                               		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cAmmoDepotComponent.tResupplyOperation
// 0x0052
struct FtResupplyOperation
{
	float                                              m_fResupplyStartTime;                             		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              m_fLastUpdateTime;                                		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                m_nResupplyUnitSize;                              		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              m_fUnitResupplySeconds;                           		// 0x000C (0x0004) [0x0000000000000000]              
	class AcAPBPlayerController*                       m_pPC;                                            		// 0x0010 (0x0004) [0x0000000000000000]              
	class AcWeapon*                                    m_pWeapon;                                        		// 0x0014 (0x0004) [0x0000000000000000]              
	class UiAmmoConsumer*                              m_pAmmoConsumer;                                  		// 0x0018 (0x0008) [0x0000000000000000]              
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x001C (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	class UiAmmoSupplier*                              m_pAmmoSupplier;                                  		// 0x0020 (0x0008) [0x0000000000000000]              
	unsigned char                                      UnknownData01[ 0x4 ];                             		// 0x0024 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	class UiAmmoCarrier*                               m_pAmmoCarrier;                                   		// 0x0028 (0x0008) [0x0000000000000000]              
	unsigned char                                      UnknownData02[ 0x4 ];                             		// 0x002C (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	float                                              m_fAmmoResupplyRadius;                            		// 0x0030 (0x0004) [0x0000000000000000]              
	float                                              m_fProgress;                                      		// 0x0034 (0x0004) [0x0000000000000000]              
	int                                                m_nStartAmmoAmount;                               		// 0x0038 (0x0004) [0x0000000000000000]              
	int                                                m_nTotalAmmoSupplied;                             		// 0x003C (0x0004) [0x0000000000000000]              
	int                                                m_nTotalAmmoSuppliedFromStorage;                  		// 0x0040 (0x0004) [0x0000000000000000]              
	int                                                m_nTotalAmmoBought;                               		// 0x0044 (0x0004) [0x0000000000000000]              
	int                                                m_nTotalCost;                                     		// 0x0048 (0x0004) [0x0000000000000000]              
	float                                              m_fFractionalCost;                                		// 0x004C (0x0004) [0x0000000000000000]              
	unsigned char                                      m_eResupplyState;                                 		// 0x0050 (0x0001) [0x0000000000000000]              
	unsigned char                                      m_eResupplyTarget;                                		// 0x0051 (0x0001) [0x0000000000000000]              
};

// ScriptStruct APBGame.cAmmoDepotComponent.tPendingResupplyInfo
// 0x0010
struct FtPendingResupplyInfo
{
	class AcAPBPlayerController*                       m_pPC;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	TArray< unsigned char >                            m_aWeaponTypes;                                   		// 0x0004 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct APBGame.cAPBUsableComponent.UserData
// 0x0009
struct FUserData
{
	class AcAPBPlayerController*                       UserController;                                   		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              fDuration;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	unsigned char                                      eCurrentCSA;                                      		// 0x0008 (0x0001) [0x0000000000000000]              
};

// ScriptStruct APBGame.cAPBUsableComponent.IPData
// 0x0011
struct FIPData
{
	TArray< struct FUserData >                         aUsers;                                           		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              fCachedProgress;                                  		// 0x000C (0x0004) [0x0000000000000000]              
	unsigned char                                      eCachedCSA;                                       		// 0x0010 (0x0001) [0x0000000000000000]              
};

// ScriptStruct APBGame.cSDDVehicle.VehicleInteractionSequence
// 0x0014
struct FVehicleInteractionSequence
{
	int                                                m_eVehiclePlayerAnimationSet;                     		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned char                                      m_eVehicleInteractionAnimation;                   		// 0x0004 (0x0001) [0x0000000000000000]              
	struct FString                                     m_sSequenceName;                                  		// 0x0008 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct APBGame.cSDDVehicle.VehicleInteractionAnimation
// 0x0010
struct FVehicleInteractionAnimation
{
	unsigned char                                      m_eVehicleInteractionAnimation;                   		// 0x0000 (0x0001) [0x0000000000000000]              
	unsigned long                                      m_bMirror : 1;                                    		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bScaleRoot : 1;                                 		// 0x0004 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      m_bStartAtOrigin : 1;                             		// 0x0004 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      m_bPauseAtEnd : 1;                                		// 0x0004 (0x0004) [0x0000000000000000] [0x00000008] 
	float                                              m_fBlendInTime;                                   		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              m_fBlendOutTime;                                  		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cSDDVehicle.VehicleCritical
// 0x000C
struct FVehicleCritical
{
	int                                                m_eVehicleCritical;                               		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                m_eHUDMessage;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              m_fWeight;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cSDDVehicle.GolemPart
// 0x002C
struct FGolemPart
{
	struct FString                                     m_sGolemPart;                                     		// 0x0000 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sUsername;                                      		// 0x000C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                m_eClass;                                         		// 0x0018 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bStartup : 1;                                   		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                m_eClothingItemCategory;                          		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                m_nVersatility;                                   		// 0x0024 (0x0004) [0x0000000000000000]              
	int                                                m_nSecondaryKey;                                  		// 0x0028 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cSDDVehicle.GolemPartClass
// 0x000C
struct FGolemPartClass
{
	int                                                m_eGolemPartClass;                                		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bUseInClothingPreview : 1;                      		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                m_nSecondaryKey;                                  		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cSDDVehicle.VehicleGear
// 0x0010
struct FVehicleGear
{
	unsigned char                                      m_eVehicleGear;                                   		// 0x0000 (0x0001) [0x0000000000000000]              
	struct FString                                     m_sPackageImageRef;                               		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct APBGame.cSDDVehicle.VehicleAudioPartDefaults
// 0x0094
struct FVehicleAudioPartDefaults
{
	int                                                m_eVehicleAudioPartDefaults;                      		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                m_eDefaultEngine;                                 		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                m_eDefaultSiren;                                  		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                m_eDefaultHorn;                                   		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                m_eDefaultExhaust;                                		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                m_eDefaultAmp;                                    		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                m_eDefaultSpeaker;                                		// 0x0018 (0x0004) [0x0000000000000000]              
	float                                              m_fWheelForceEventThreshold;                      		// 0x001C (0x0004) [0x0000000000000000]              
	float                                              m_fWheelForceMax;                                 		// 0x0020 (0x0004) [0x0000000000000000]              
	struct FString                                     m_sDoorEventOpenFront;                            		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sDoorEventOpenRearSide;                         		// 0x0030 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sDoorEventOpenRearBack;                         		// 0x003C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sDoorEventCloseFront;                           		// 0x0048 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sDoorEventCloseRearSide;                        		// 0x0054 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sDoorEventCloseRearBack;                        		// 0x0060 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              m_fMaxEnclosedness;                               		// 0x006C (0x0004) [0x0000000000000000]              
	struct FString                                     m_sDamageType;                                    		// 0x0070 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sLC_VehicleType;                                		// 0x007C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sSuspensionType;                                		// 0x0088 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct APBGame.cSDDVehicle.VehicleUICategory
// 0x0010
struct FVehicleUICategory
{
	unsigned char                                      m_eVehicleUICategory;                             		// 0x0000 (0x0001) [0x0000000000000000]              
	struct FString                                     m_sDisplayName;                                   		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct APBGame.cSDDVehicle.VehicleTempSetup
// 0x0010
struct FVehicleTempSetup
{
	unsigned char                                      m_eVehicleTempSetup;                              		// 0x0000 (0x0001) [0x0000000000000000]              
	struct FString                                     m_sTempSetupInfo;                                 		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct APBGame.cSDDVehicle.VehicleDamageLevel
// 0x0010
struct FVehicleDamageLevel
{
	int                                                m_eVehicleDamageLevel;                            		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              m_fHealthThreshold;                               		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                m_eHandlingEffect;                                		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                m_eVehicleCritical;                               		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cSDDVehicle.VehicleDamageVFX
// 0x002C
struct FVehicleDamageVFX
{
	int                                                m_eVehicleDamageVFX;                              		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              m_fHealthThreshold;                               		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FString                                     m_sDamageStateBegin;                              		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sDamageStateEnd;                                		// 0x0014 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sExplosionEvent;                                		// 0x0020 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct APBGame.cSDDVehicle.VehicleDoorAnimationSet
// 0x0080
struct FVehicleDoorAnimationSet
{
	int                                                m_eVehicleDoorAnimationSet;                       		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     m_sOpenFrame;                                     		// 0x0004 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sOpenFromOutside;                               		// 0x0010 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sOpenGetOut;                                    		// 0x001C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sOpenBailOut;                                   		// 0x0028 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sOpenSeatSlideEjectCriminal;                    		// 0x0034 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sOpenSeatSlideEjectEnforcer;                    		// 0x0040 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sClosedFrame;                                   		// 0x004C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sCloseFromOutside;                              		// 0x0058 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sCloseGetIn;                                    		// 0x0064 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sCloseFromInside;                               		// 0x0070 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	unsigned long                                      m_bDoorOpenWhileInside : 1;                       		// 0x007C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct APBGame.cSDDVehicle.VehicleNPCInsideAnimationSet
// 0x0074
struct FVehicleNPCInsideAnimationSet
{
	int                                                m_eVehicleNPCInsideAnimationSet;                  		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     m_sEjectInitialCriminal;                          		// 0x0004 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sEjectLaterCriminal;                            		// 0x0010 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sEjectInitialEnforcer;                          		// 0x001C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sEjectLaterEnforcer;                            		// 0x0028 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sEjectInitialFromPassengerSideCriminal;         		// 0x0034 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sEjectLaterFromPassengerSideCriminal;           		// 0x0040 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sEjectInitialFromPassengerSideEnforcer;         		// 0x004C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sEjectLaterFromPassengerSideEnforcer;           		// 0x0058 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	float                                              m_fEjectDistanceDriverSideEnforcer;               		// 0x0064 (0x0004) [0x0000000000000000]              
	float                                              m_fEjectDistanceDriverSideCriminal;               		// 0x0068 (0x0004) [0x0000000000000000]              
	float                                              m_fEjectDistancePassengerSideEnforcer;            		// 0x006C (0x0004) [0x0000000000000000]              
	float                                              m_fEjectDistancePassengerSideCriminal;            		// 0x0070 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cSDDVehicle.VehiclePlayerAnimationSet
// 0x0030
struct FVehiclePlayerAnimationSet
{
	int                                                m_eVehiclePlayerAnimationSet;                     		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bMirrorAnimations : 1;                          		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              m_fLeanInDuration;                                		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              m_fLeanOutDuration;                               		// 0x000C (0x0004) [0x0000000000000000]              
	struct FString                                     m_sDriveSteer;                                    		// 0x0010 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sPassengerIdle;                                 		// 0x001C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                m_eAnimTreeDecision;                              		// 0x0028 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bReverseAim : 1;                                		// 0x002C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct APBGame.cSDDVehicle.VehiclePositionInfo
// 0x001C
struct FVehiclePositionInfo
{
	int                                                m_eVehicleAnimationCategory;                      		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned char                                      m_eVehiclePositionIndex;                          		// 0x0004 (0x0001) [0x0000000000000000]              
	int                                                m_eVehiclePlayerAnimationSet;                     		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                m_eVehicleDoorAnimationSet;                       		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                m_nVCPDirection;                                  		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                m_nVCPAngle;                                      		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                m_eVehicleNPCInsideAnimationSet;                  		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cSDDVehicle.VehicleSetupType
// 0x01F8
struct FVehicleSetupType
{
	unsigned char                                      m_eVehicleSetupType;                              		// 0x0000 (0x0001) [0x0000000000000000]              
	int                                                m_eVehicleAnimationCategory;                      		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                m_nCabinCargoPipCapacity;                         		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                m_nMainCargoPipCapacity;                          		// 0x000C (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bHasRearSeats : 1;                              		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bIsPlayerOnlyVehicle : 1;                       		// 0x0010 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned char                                      m_eVehicleModelClass;                             		// 0x0014 (0x0001) [0x0000000000000000]              
	int                                                m_nCargoAreaSeatPositions;                        		// 0x0018 (0x0004) [0x0000000000000000]              
	struct FString                                     m_sVehicleSetupAsset;                             		// 0x001C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                m_nMaxHealth;                                     		// 0x0028 (0x0004) [0x0000000000000000]              
	float                                              m_fMaxRepairTimeSecs;                             		// 0x002C (0x0004) [0x0000000000000000]              
	int                                                m_nMaxRepairCost;                                 		// 0x0030 (0x0004) [0x0000000000000000]              
	int                                                m_eVehicleCategory;                               		// 0x0034 (0x0004) [0x0000000000000000]              
	float                                              m_fRamraidDamageMultiplier;                       		// 0x0038 (0x0004) [0x0000000000000000]              
	float                                              m_fBreakInCSADuration;                            		// 0x003C (0x0004) [0x0000000000000000]              
	int                                                m_ePedestrianDriver;                              		// 0x0040 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bHasAlarm : 1;                                  		// 0x0044 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                m_nSpawnCost;                                     		// 0x0048 (0x0004) [0x0000000000000000]              
	int                                                m_eExplosionType;                                 		// 0x004C (0x0004) [0x0000000000000000]              
	int                                                m_eAudioType;                                     		// 0x0050 (0x0004) [0x0000000000000000]              
	struct FString                                     m_sDisplayName;                                   		// 0x0054 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sPhysicsAsset;                                  		// 0x0060 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	float                                              m_fDriverCamNear;                                 		// 0x006C (0x0004) [0x0000000000000000]              
	float                                              m_fDriverCamFar;                                  		// 0x0070 (0x0004) [0x0000000000000000]              
	float                                              m_fCamBaseZNear;                                  		// 0x0074 (0x0004) [0x0000000000000000]              
	float                                              m_fCamBaseZFar;                                   		// 0x0078 (0x0004) [0x0000000000000000]              
	unsigned char                                      m_eDriveType;                                     		// 0x007C (0x0001) [0x0000000000000000]              
	float                                              m_fFrontWheelMeshOffset[ 0x3 ];                   		// 0x0080 (0x000C) [0x0000000000000000]              
	float                                              m_fFrontWheelBoneOffset[ 0x3 ];                   		// 0x008C (0x000C) [0x0000000000000000]              
	float                                              m_fRearWheelMeshOffset[ 0x3 ];                    		// 0x0098 (0x000C) [0x0000000000000000]              
	float                                              m_fRearWheelBoneOffset[ 0x3 ];                    		// 0x00A4 (0x000C) [0x0000000000000000]              
	float                                              m_fFrontWheelRadius;                              		// 0x00B0 (0x0004) [0x0000000000000000]              
	float                                              m_fRearWheelRadius;                               		// 0x00B4 (0x0004) [0x0000000000000000]              
	float                                              m_fFrontSuspensionTravel;                         		// 0x00B8 (0x0004) [0x0000000000000000]              
	float                                              m_fRearSuspensionTravel;                          		// 0x00BC (0x0004) [0x0000000000000000]              
	float                                              m_fFrontSuspensionSpeed;                          		// 0x00C0 (0x0004) [0x0000000000000000]              
	float                                              m_fRearSuspensionSpeed;                           		// 0x00C4 (0x0004) [0x0000000000000000]              
	float                                              m_fFrontLongFactor;                               		// 0x00C8 (0x0004) [0x0000000000000000]              
	float                                              m_fFrontLatFactor;                                		// 0x00CC (0x0004) [0x0000000000000000]              
	float                                              m_fRearLongFactor;                                		// 0x00D0 (0x0004) [0x0000000000000000]              
	float                                              m_fRearLatFactor;                                 		// 0x00D4 (0x0004) [0x0000000000000000]              
	float                                              m_fRearHandbrakeLong;                             		// 0x00D8 (0x0004) [0x0000000000000000]              
	float                                              m_fRearHandbrakeLat;                              		// 0x00DC (0x0004) [0x0000000000000000]              
	float                                              m_fGearRatios[ 0x6 ];                             		// 0x00E0 (0x0018) [0x0000000000000000]              
	float                                              m_fIdleRPM;                                       		// 0x00F8 (0x0004) [0x0000000000000000]              
	float                                              m_fLSDFactor;                                     		// 0x00FC (0x0004) [0x0000000000000000]              
	float                                              m_fRedlineRPM;                                    		// 0x0100 (0x0004) [0x0000000000000000]              
	float                                              m_fFinalDriveRatio;                               		// 0x0104 (0x0004) [0x0000000000000000]              
	float                                              m_f2ndGearSpeed;                                  		// 0x0108 (0x0004) [0x0000000000000000]              
	float                                              m_f3rdGearSpeed;                                  		// 0x010C (0x0004) [0x0000000000000000]              
	float                                              m_f4thGearSpeed;                                  		// 0x0110 (0x0004) [0x0000000000000000]              
	float                                              m_f5thGearSpeed;                                  		// 0x0114 (0x0004) [0x0000000000000000]              
	float                                              m_f500RpmTorque;                                  		// 0x0118 (0x0004) [0x0000000000000000]              
	float                                              m_f2500RpmTorque;                                 		// 0x011C (0x0004) [0x0000000000000000]              
	float                                              m_f4500RpmTorque;                                 		// 0x0120 (0x0004) [0x0000000000000000]              
	float                                              m_f7000RpmTorque;                                 		// 0x0124 (0x0004) [0x0000000000000000]              
	float                                              m_fWheelLatAsymptoteSlip;                         		// 0x0128 (0x0004) [0x0000000000000000]              
	float                                              m_fWheelLatAsymptoteValue;                        		// 0x012C (0x0004) [0x0000000000000000]              
	float                                              m_fWheelLatExtremumSlip;                          		// 0x0130 (0x0004) [0x0000000000000000]              
	float                                              m_fWheelLatExtremumValue;                         		// 0x0134 (0x0004) [0x0000000000000000]              
	float                                              m_fWheelLongAsymptoteSlip;                        		// 0x0138 (0x0004) [0x0000000000000000]              
	float                                              m_fWheelLongAsymptoteValue;                       		// 0x013C (0x0004) [0x0000000000000000]              
	float                                              m_fWheelLongExtremumSlip;                         		// 0x0140 (0x0004) [0x0000000000000000]              
	float                                              m_fWheelLongExtremumValue;                        		// 0x0144 (0x0004) [0x0000000000000000]              
	float                                              m_fSuspensionDamping;                             		// 0x0148 (0x0004) [0x0000000000000000]              
	float                                              m_fSuspensionStiffness;                           		// 0x014C (0x0004) [0x0000000000000000]              
	float                                              m_fChassisTorqueFactor;                           		// 0x0150 (0x0004) [0x0000000000000000]              
	float                                              m_fEngineBrakingFactor;                           		// 0x0154 (0x0004) [0x0000000000000000]              
	float                                              m_fMaxBrakeTorque;                                		// 0x0158 (0x0004) [0x0000000000000000]              
	float                                              m_fReverseThrottle;                               		// 0x015C (0x0004) [0x0000000000000000]              
	float                                              m_fSteerSpeed;                                    		// 0x0160 (0x0004) [0x0000000000000000]              
	float                                              m_f0msSteerAngle;                                 		// 0x0164 (0x0004) [0x0000000000000000]              
	float                                              m_f12msSteerAngle;                                		// 0x0168 (0x0004) [0x0000000000000000]              
	float                                              m_f22msSteerAngle;                                		// 0x016C (0x0004) [0x0000000000000000]              
	struct FString                                     m_sVehicleName;                                   		// 0x0170 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	float                                              m_fCOMOffsetX;                                    		// 0x017C (0x0004) [0x0000000000000000]              
	float                                              m_fCOMOffsetZ;                                    		// 0x0180 (0x0004) [0x0000000000000000]              
	float                                              m_fMaxSpeed;                                      		// 0x0184 (0x0004) [0x0000000000000000]              
	float                                              m_fBlobShadowScale[ 0x3 ];                        		// 0x0188 (0x000C) [0x0000000000000000]              
	float                                              m_fBlobShadowTranslate[ 0x3 ];                    		// 0x0194 (0x000C) [0x0000000000000000]              
	unsigned char                                      m_eUICategory;                                    		// 0x01A0 (0x0001) [0x0000000000000000]              
	unsigned char                                      m_eTempAssets;                                    		// 0x01A1 (0x0001) [0x0000000000000000]              
	float                                              m_fCollisionDamage;                               		// 0x01A4 (0x0004) [0x0000000000000000]              
	int                                                m_nInitialCamPitch;                               		// 0x01A8 (0x0004) [0x0000000000000000]              
	int                                                m_nCameraPitchMin;                                		// 0x01AC (0x0004) [0x0000000000000000]              
	int                                                m_nCameraPitchMax;                                		// 0x01B0 (0x0004) [0x0000000000000000]              
	int                                                m_eUIMeshViewerSetup;                             		// 0x01B4 (0x0004) [0x0000000000000000]              
	float                                              m_fPercentPerfectlyClean;                         		// 0x01B8 (0x0004) [0x0000000000000000]              
	float                                              m_fPercentDirty;                                  		// 0x01BC (0x0004) [0x0000000000000000]              
	float                                              m_fMinDust;                                       		// 0x01C0 (0x0004) [0x0000000000000000]              
	float                                              m_fMaxDust;                                       		// 0x01C4 (0x0004) [0x0000000000000000]              
	float                                              m_fMinDirt;                                       		// 0x01C8 (0x0004) [0x0000000000000000]              
	float                                              m_fMaxDirt;                                       		// 0x01CC (0x0004) [0x0000000000000000]              
	float                                              m_fMaxReverseSpeed;                               		// 0x01D0 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bHasTailLights : 1;                             		// 0x01D4 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                m_eGameplayObject;                                		// 0x01D8 (0x0004) [0x0000000000000000]              
	struct FString                                     m_sVFXPrefab;                                     		// 0x01DC (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sSharedDataObject;                              		// 0x01E8 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	float                                              m_fSteerAccel;                                    		// 0x01F4 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cAPBPawnAnimation.AnimationRequest
// 0x001D
struct FAnimationRequest
{
	class UcAnimationDescriptor*                       m_Animation;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	class AcAnimationDrivenTrigger*                    m_Trigger;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              m_StartLocationX;                                 		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              m_StartLocationY;                                 		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              m_StartLocationZ;                                 		// 0x0010 (0x0004) [0x0000000000000000]              
	unsigned char                                      m_ePhysicsOverride;                               		// 0x0014 (0x0001) [0x0000000000000000]              
	int                                                m_NetworkTag;                                     		// 0x0018 (0x0004) [0x0000000000000000]              
	unsigned char                                      m_Action;                                         		// 0x001C (0x0001) [0x0000000000000000]              
};

// ScriptStruct APBGame.cAPBPawnAnimation.tCarAnimation
// 0x000C
struct FtCarAnimation
{
	class AcAPBVehicleBase*                            m_Vehicle;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned char                                      m_eVehicleSeat;                                   		// 0x0004 (0x0001) [0x0000000000000000]              
	unsigned char                                      m_eVehicleInteractionAnimation;                   		// 0x0005 (0x0001) [0x0000000000000000]              
	unsigned long                                      m_bMirror : 1;                                    		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct APBGame.cAPBPawnAnimation.OnFootDeathAnimation
// 0x0014
struct FOnFootDeathAnimation
{
	unsigned char                                      m_eOnFootDeathAnimation;                          		// 0x0000 (0x0001) [0x0000000000000000]              
	struct FString                                     m_sAnimName;                                      		// 0x0004 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	unsigned long                                      m_bRetainMomentum : 1;                            		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct APBGame.cAnimationDescriptor.AnimationDescriptor
// 0x0014
struct FAnimationDescriptor
{
	int                                                m_eAnimationDescriptor;                           		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bFreezeCameraLoc : 1;                           		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              m_fStaminaDrain;                                  		// 0x0008 (0x0004) [0x0000000000000000]              
	unsigned char                                      m_eRCEType;                                       		// 0x000C (0x0001) [0x0000000000000000]              
	unsigned long                                      m_bResetLocomotion : 1;                           		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct APBGame.cAnimConfigureDecision.tDecisionChild
// 0x0018
struct FtDecisionChild
{
	struct FEnumeratedName                             SDDRow;                                           		// 0x0000 (0x0010) [0x0000000000000000]              
	class UcAnimConfigureNode*                         ChildNode;                                        		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                m_nDrawY;                                         		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cAPBSkelControlLimbStrategy.tIKStrategySetting
// 0x0018
struct FtIKStrategySetting
{
	unsigned char                                      Strategy;                                         		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       SocketName;                                       		// 0x0004 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       FemaleSocketName;                                 		// 0x000C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      MatchAxis[ 0x3 ];                                 		// 0x0014 (0x0003) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      EffectorRotation;                                 		// 0x0017 (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct APBGame.cAnimConfigureSelect.tSelectEntry
// 0x0014
struct FtSelectEntry
{
	int                                                NodeIndex;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FName                                       NodeName;                                         		// 0x0004 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       Setting;                                          		// 0x000C (0x0008) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct APBGame.cAnimConfigureSelect.tSelectIKEntry
// 0x003C
struct FtSelectIKEntry
{
	int                                                SkelControlIndex;                                 		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FName                                       SkelControlName;                                  		// 0x0004 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FtIKStrategySetting                         IKSetting;                                        		// 0x000C (0x0018) [0x0000000000000001]              ( CPF_Edit )
	struct FtIKStrategySetting                         AimedIKSetting;                                   		// 0x0024 (0x0018) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct APBGame.cAnimConfigureSelect.tSelectConfigureEntry
// 0x0014
struct FtSelectConfigureEntry
{
	class UcAnimConfigureSelect*                       SelectNode;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FName                                       NodeName;                                         		// 0x0004 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       Profile;                                          		// 0x000C (0x0008) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct APBGame.cAnimConfigureSelect.tSelectProfile
// 0x002C
struct FtSelectProfile
{
	struct FName                                       ProfileName;                                      		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FtSelectEntry >                     Select;                                           		// 0x0008 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FtSelectIKEntry >                   SelectIK;                                         		// 0x0014 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FtSelectConfigureEntry >            SelectConfigure;                                  		// 0x0020 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct APBGame.cVignetteDescriptor.tVignetteSequence
// 0x000C
struct FtVignetteSequence
{
	struct FName                                       m_sSequenceName;                                  		// 0x0000 (0x0008) [0x0000000000000000]              
	int                                                m_nRepetitions;                                   		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cCustomisedSkeletalMeshComponent.CustomisedAssetPriority
// 0x0008
struct FCustomisedAssetPriority
{
	unsigned char                                      m_eCustomisedAssetPriority;                       		// 0x0000 (0x0001) [0x0000000000000000]              
	float                                              m_fPriority;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cCustomisedSkeletalMeshComponent.GameplayPriorityInfo
// 0x000C
struct FGameplayPriorityInfo
{
	unsigned long                                      m_bIsOwnCharacter : 1;                            		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bIsOwnVehicle : 1;                              		// 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      m_bIsGroupMate : 1;                               		// 0x0000 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      m_bIsInSameSide : 1;                              		// 0x0000 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      m_bIsFriend : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      m_bIsInTheSameMission : 1;                        		// 0x0000 (0x0004) [0x0000000000000000] [0x00000020] 
	unsigned char                                      m_nThreat;                                        		// 0x0004 (0x0001) [0x0000000000000000]              
	unsigned long                                      m_bIsLeagueWinner : 1;                            		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct APBGame.cDamageFilterComponent.tFilterEntry
// 0x0008
struct FtFilterEntry
{
	class UClass*                                      m_DamageType;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bAllowDamage : 1;                               		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bAllowHealing : 1;                              		// 0x0004 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct APBGame.cDamageFilterComponent.tTimerEntry
// 0x001C
struct FtTimerEntry
{
	class UClass*                                      m_DamageType;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
	class AController*                                 m_Instigator;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              m_Duration;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              m_Remainder;                                      		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                m_UnitsTotal;                                     		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                m_UnitsApplied;                                   		// 0x0014 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bHeal : 1;                                      		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct APBGame.cSDDPawnAttachment.AnimTreeDecision_EquippedItem
// 0x0004
struct FAnimTreeDecision_EquippedItem
{
	int                                                m_eAnimTreeDecision_EquippedItem;                 		// 0x0000 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cSDDPawnAttachment.Encumbrance
// 0x000C
struct FEncumbrance
{
	unsigned char                                      m_eEncumbrance;                                   		// 0x0000 (0x0001) [0x0000000000000000]              
	unsigned long                                      m_bCanRun : 1;                                    		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bCanSprint : 1;                                 		// 0x0004 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      m_bCanCrouchMove : 1;                             		// 0x0004 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      m_bCanJump : 1;                                   		// 0x0004 (0x0004) [0x0000000000000000] [0x00000008] 
	int                                                m_nUIEncumbranceLevel;                            		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cSDDPawnAttachment.AnimTreeDecision_Vehicle
// 0x0004
struct FAnimTreeDecision_Vehicle
{
	int                                                m_eAnimTreeDecision_Vehicle;                      		// 0x0000 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cSDDPawnAttachment.PawnHitReaction
// 0x0005
struct FPawnHitReaction
{
	int                                                m_ePawnHitReaction;                               		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned char                                      m_eType;                                          		// 0x0004 (0x0001) [0x0000000000000000]              
};

// ScriptStruct APBGame.cSDDPawnAttachment.PawnHitReaction_BoneList
// 0x0058
struct FPawnHitReaction_BoneList
{
	int                                                m_ePawnHitReaction;                               		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     m_sValue[ 0x7 ];                                  		// 0x0004 (0x0054) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct APBGame.cSDDPawnAttachment.PawnHitReaction_BoneRemapTable
// 0x001C
struct FPawnHitReaction_BoneRemapTable
{
	int                                                m_ePawnHitReaction;                               		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     m_sBoneFrom;                                      		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sBoneTo;                                        		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct APBGame.cSDDPawnAttachment.PawnHitReaction_Bool
// 0x0008
struct FPawnHitReaction_Bool
{
	int                                                m_ePawnHitReaction;                               		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bValue : 1;                                     		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct APBGame.cSDDPawnAttachment.PawnHitReaction_ConstrainedBoneList
// 0x0034
struct FPawnHitReaction_ConstrainedBoneList
{
	int                                                m_ePawnHitReaction;                               		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     m_sValue[ 0x4 ];                                  		// 0x0004 (0x0030) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct APBGame.cSDDPawnAttachment.PawnHitReaction_Float
// 0x0008
struct FPawnHitReaction_Float
{
	int                                                m_ePawnHitReaction;                               		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              m_fValue;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cSDDPawnAttachment.PawnHitReaction_SpringList
// 0x001C
struct FPawnHitReaction_SpringList
{
	int                                                m_ePawnHitReaction;                               		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     m_sValue[ 0x2 ];                                  		// 0x0004 (0x0018) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct APBGame.cSDDPawnAttachment.PawnHitReaction_Vector2D
// 0x000C
struct FPawnHitReaction_Vector2D
{
	int                                                m_ePawnHitReaction;                               		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              m_fX;                                             		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              m_fY;                                             		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cSDDPawnAttachment.FireOffset
// 0x0010
struct FFireOffset
{
	unsigned char                                      m_eFireOffset;                                    		// 0x0000 (0x0001) [0x0000000000000000]              
	float                                              m_fForwards;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              m_fRight;                                         		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              m_fUp;                                            		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cSDDPawnAttachment.WeaponAttachmentVisual
// 0x0038
struct FWeaponAttachmentVisual
{
	int                                                m_eItemAttachmentVisual;                          		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     m_sMuzzleFlashVFX;                                		// 0x0004 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sImpactVFX;                                     		// 0x0010 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	unsigned char                                      m_eImpactClass;                                   		// 0x001C (0x0001) [0x0000000000000000]              
	struct FString                                     m_sTracerVFX;                                     		// 0x0020 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sNonTracerShotVFX;                              		// 0x002C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct APBGame.cSDDPawnAttachment.ItemAttachmentVisual
// 0x0054
struct FItemAttachmentVisual
{
	int                                                m_eItemAttachmentVisual;                          		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     m_sAttachmentClass;                               		// 0x0004 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sAttachmentAsset;                               		// 0x0010 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sAnimSetAsset;                                  		// 0x001C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sAnimTreeAsset;                                 		// 0x0028 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	unsigned char                                      m_eTaskItemAnimationType;                         		// 0x0034 (0x0001) [0x0000000000000000]              
	struct FString                                     m_sAudioType;                                     		// 0x0038 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                m_eAnimTreeDecision;                              		// 0x0044 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bLeftHandIKByDefault : 1;                       		// 0x0048 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bLeftHandIKWhileAiming : 1;                     		// 0x0048 (0x0004) [0x0000000000000000] [0x00000002] 
	int                                                m_eUIMeshViewerSetup;                             		// 0x004C (0x0004) [0x0000000000000000]              
	int                                                m_eUIMeshViewerSetup_Inventory;                   		// 0x0050 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.iModifiable.ModifierEffect
// 0x0008
struct FModifierEffect
{
	float                                              fEffect;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              fScalar;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.iModifiable.ModifierData
// 0x0018
struct UiModifiable_FModifierData
{
	unsigned char                                      eCategory;                                        		// 0x0000 (0x0001) [0x0000000000000000]              
	int                                                nModifierItem;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              m_fIntervalAccumulator;                           		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                m_nRemainingPeriodicCalls;                        		// 0x000C (0x0004) [0x0000000000000000]              
	struct FModifierEffect                             Effect;                                           		// 0x0010 (0x0008) [0x0000000000000000]              
};

// ScriptStruct APBGame.cAPBPawn.MissionSideInfo
// 0x0008
struct FMissionSideInfo
{
	int                                                m_nMissionUID;                                    		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                m_nSideID;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cAPBPawn.RecoilInfo
// 0x0030
struct FRecoilInfo
{
	unsigned char                                      m_eCurrentPart;                                   		// 0x0000 (0x0001) [0x0000000000000000]              
	struct FVector2D                                   m_CurrentPosition;                                		// 0x0004 (0x0008) [0x0000000000000000]              
	struct FPointer                                    m_WeaponRecoil;                                   		// 0x000C (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	struct FVector2D                                   m_FirstTarget;                                    		// 0x0010 (0x0008) [0x0000000000000000]              
	float                                              m_FirstTime;                                      		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                m_FirstExp;                                       		// 0x001C (0x0004) [0x0000000000000000]              
	struct FVector2D                                   m_EndTarget;                                      		// 0x0020 (0x0008) [0x0000000000000000]              
	float                                              m_EndTime;                                        		// 0x0028 (0x0004) [0x0000000000000000]              
	int                                                m_EndExp;                                         		// 0x002C (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cAPBPawn.ItemAttachmentData
// 0x0018
struct FItemAttachmentData
{
	int                                                m_eItemAttachmentVisual;                          		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                m_eEquipedInventoryItemType;                      		// 0x0004 (0x0004) [0x0000000000000000]              
	unsigned char                                      m_WeaponState;                                    		// 0x0008 (0x0001) [0x0000000000000000]              
	float                                              m_fReloadTime;                                    		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              m_fEquipTime;                                     		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              m_fFireInterval;                                  		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cAPBPawn.StrafeFiring
// 0x0008
struct FStrafeFiring
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned long                                      bStrafeFiring : 1;                                		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct APBGame.cAPBPawn.VehicleUseData
// 0x0028
struct FVehicleUseData
{
	int                                                m_nVehicleID;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned char                                      m_nUseID;                                         		// 0x0004 (0x0001) [0x0000000000000000]              
	unsigned long                                      m_bInsideVehicle : 1;                             		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned char                                      m_SeatPosition;                                   		// 0x000C (0x0001) [0x0000000000000000]              
	unsigned long                                      m_bSwitchingToAdjacentSeat : 1;                   		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bTeleportIn : 1;                                		// 0x0010 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      m_bOpenVehicleDoor : 1;                           		// 0x0010 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      m_bCloseVehicleDoor : 1;                          		// 0x0010 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      m_bGetInToVehicle : 1;                            		// 0x0010 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      m_bGetOutOfVehicle : 1;                           		// 0x0010 (0x0004) [0x0000000000000000] [0x00000020] 
	unsigned long                                      m_bBailOut : 1;                                   		// 0x0010 (0x0004) [0x0000000000000000] [0x00000040] 
	unsigned long                                      m_bRouteingToVAP : 1;                             		// 0x0010 (0x0004) [0x0000000000000000] [0x00000080] 
	unsigned long                                      m_bEnteringVCP : 1;                               		// 0x0010 (0x0004) [0x0000000000000000] [0x00000100] 
	unsigned long                                      m_bExitingVCP : 1;                                		// 0x0010 (0x0004) [0x0000000000000000] [0x00000200] 
	unsigned long                                      m_bExitingVCPDeath : 1;                           		// 0x0010 (0x0004) [0x0000000000000000] [0x00000400] 
	unsigned long                                      m_bDeath : 1;                                     		// 0x0010 (0x0004) [0x0000000000000000] [0x00000800] 
	unsigned long                                      m_bLeaningOut : 1;                                		// 0x0010 (0x0004) [0x0000000000000000] [0x00001000] 
	unsigned long                                      m_bEjectInitial : 1;                              		// 0x0010 (0x0004) [0x0000000000000000] [0x00002000] 
	unsigned long                                      m_bEjectLater : 1;                                		// 0x0010 (0x0004) [0x0000000000000000] [0x00004000] 
	unsigned long                                      m_bDoingDriverEjectFromPassengerSide : 1;         		// 0x0010 (0x0004) [0x0000000000000000] [0x00008000] 
	unsigned long                                      m_bCloseingDriverDoorFromInside : 1;              		// 0x0010 (0x0004) [0x0000000000000000] [0x00010000] 
	unsigned long                                      m_bCanDriveVehicle : 1;                           		// 0x0010 (0x0004) [0x0000000000000000] [0x00020000] 
	unsigned long                                      m_bEnforcer : 1;                                  		// 0x0010 (0x0004) [0x0000000000000000] [0x00040000] 
	int                                                m_nNPCTypeDriver;                                 		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                m_nDriverAssetIndex;                              		// 0x0018 (0x0004) [0x0000000000000000]              
	struct FVector                                     m_LeaveVehiclePos;                                		// 0x001C (0x000C) [0x0000000000000000]              
};

// ScriptStruct APBGame.cAPBPawn.CSAData
// 0x0028
struct FCSAData
{
	class AActor*                                      pInteractiveActor;                                		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              fCSATotalDuration;                                		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              fCSATotalProgress;                                		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                nIPIndex;                                         		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                nAnimSeed;                                        		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                eAnimIndex;                                       		// 0x0014 (0x0004) [0x0000000000000000]              
	unsigned char                                      eCSA;                                             		// 0x0018 (0x0001) [0x0000000000000000]              
	unsigned long                                      bCSAOutro : 1;                                    		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bSmallTargetVolume : 1;                           		// 0x001C (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned char                                      eInteractiveActorIATState;                        		// 0x0020 (0x0001) [0x0000000000000000]              
	int                                                m_nCSAVFXSuccess_Initial;                         		// 0x0024 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cVehicleTypes.APBVehicleDoor
// 0x0010
struct FAPBVehicleDoor
{
	struct FName                                       CSADoorSocket;                                    		// 0x0000 (0x0008) [0x0000000000000000]              
	unsigned char                                      eDoorState;                                       		// 0x0008 (0x0001) [0x0000000000000000]              
	unsigned long                                      bValid : 1;                                       		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct APBGame.cAPBPawn.DyingData
// 0x0020
struct FDyingData
{
	unsigned char                                      eDyingState;                                      		// 0x0000 (0x0001) [0x0000000000000000]              
	unsigned long                                      bForceRagdoll : 1;                                		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                nControllerUID;                                   		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              fImpulseScale;                                    		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                nExplosionType;                                   		// 0x0010 (0x0004) [0x0000000000000000]              
	struct FVector                                     vExplosionLocation;                               		// 0x0014 (0x000C) [0x0000000000000000]              
};

// ScriptStruct APBGame.cAPBPawn.CSAVFXData
// 0x0014
struct FCSAVFXData
{
	unsigned char                                      eCSA;                                             		// 0x0000 (0x0001) [0x0000000000000000]              
	class UClass*                                      pKismetEventClass;                                		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                eVFXEquipmentCSAAnimType;                         		// 0x0008 (0x0004) [0x0000000000000000]              
	class AActor*                                      pVFXInteractiveActor;                             		// 0x000C (0x0004) [0x0000000000000000]              
	unsigned long                                      bPlayedCSAOutroVFX : 1;                           		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bPlayedCSASuccessVFX : 1;                         		// 0x0010 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct APBGame.cAPBPawn.HitReactionBoneRemap
// 0x0010
struct FHitReactionBoneRemap
{
	struct FName                                       BoneFrom;                                         		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       BoneTo;                                           		// 0x0008 (0x0008) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct APBGame.cAPBPawn.HitReactionInfo
// 0x0030
struct FHitReactionInfo
{
	struct FVector                                     HitLocation;                                      		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FVector                                     Momentum;                                         		// 0x000C (0x000C) [0x0000000000000000]              
	class UClass*                                      DamageType;                                       		// 0x0018 (0x0004) [0x0000000000000000]              
	class APawn*                                       InstigatedBy;                                     		// 0x001C (0x0004) [0x0000000000000000]              
	struct FName                                       HitBone;                                          		// 0x0020 (0x0008) [0x0000000000000000]              
	class UPhysicalMaterial*                           PhysicalMaterial;                                 		// 0x0028 (0x0004) [0x0000000000000000]              
	float                                              HitTime;                                          		// 0x002C (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cAPBPawn.GenericVFXEvent
// 0x0010
struct FGenericVFXEvent
{
	unsigned char                                      m_eGenericVFXEvent;                               		// 0x0000 (0x0001) [0x0000000000000000]              
	struct FString                                     m_sPrefabPath;                                    		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct APBGame.cAPBPawn.APBPawnConstant
// 0x0008
struct FAPBPawnConstant
{
	unsigned char                                      m_eAPBPawnConstant;                               		// 0x0000 (0x0001) [0x0000000000000000]              
	float                                              m_fValue;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cGolemTypes.CompactGolemDescriptor
// 0x0030
struct FCompactGolemDescriptor
{
	struct FGuid                                       m_CharacterGuid;                                  		// 0x0000 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	struct FGuid                                       m_StatueGuid;                                     		// 0x0010 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	struct FGuid                                       m_AudioGUID;                                      		// 0x0020 (0x0010) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct APBGame.cAPBPawnDeclarations.PvPFlags
// 0x0008
struct FPvPFlags
{
	unsigned char                                      m_nFriendlyCollisionGroupID;                      		// 0x0000 (0x0001) [0x0000000000000000]              
	unsigned char                                      m_nEnemyCollisionGroupID;                         		// 0x0001 (0x0001) [0x0000000000000000]              
	unsigned char                                      m_ePvPType;                                       		// 0x0002 (0x0001) [0x0000000000000000]              
	unsigned long                                      m_bDamageByFriend : 1;                            		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bDamageByEnemy : 1;                             		// 0x0004 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      m_bDamageByOwnFaction : 1;                        		// 0x0004 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      m_bDamageByOtherFaction : 1;                      		// 0x0004 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      m_bCollisionDamageInvulnerable : 1;               		// 0x0004 (0x0004) [0x0000000000000000] [0x00000010] 
};

// ScriptStruct APBGame.cGolemTypes.CompactGolemobileDescriptor
// 0x0020
struct FCompactGolemobileDescriptor
{
	struct FGuid                                       m_VehicleGUID;                                    		// 0x0000 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	struct FGuid                                       m_AudioGUID;                                      		// 0x0010 (0x0010) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct APBGame.cContact.ContactRotationAnim
// 0x0024
struct FContactRotationAnim
{
	int                                                m_eContactRotationAnim;                           		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                m_nAngle;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                m_nAngleCutoff;                                   		// 0x0008 (0x0004) [0x0000000000000000]              
	struct FString                                     m_sLeftRotationAnim;                              		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sRightRotationAnim;                             		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct APBGame.cAPBAnimNodeBlendPerBone.tPerBoneProfile
// 0x0020
struct FtPerBoneProfile
{
	struct FName                                       m_sProfileName;                                   		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FName >                             m_asBranchStartBoneNames;                         		// 0x0008 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FName >                             m_asIndividualBoneNames;                          		// 0x0014 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct APBGame.cAPBAnimNodeCombatAction.tCombatAnimation
// 0x0010
struct FtCombatAnimation
{
	struct FName                                       m_sStandSequenceName;                             		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       m_sCrouchSequenceName;                            		// 0x0008 (0x0008) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct APBGame.cAPBAnimNodeCombatAction.tCombatActionProfile
// 0x00A8
struct FtCombatActionProfile
{
	struct FName                                       m_sProfileName;                                   		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FtCombatAnimation                           m_Fire;                                           		// 0x0008 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	struct FtCombatAnimation                           m_Block;                                          		// 0x0018 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	struct FtCombatAnimation                           m_Swing[ 0x3 ];                                   		// 0x0028 (0x0030) [0x0000000000000001]              ( CPF_Edit )
	struct FtCombatAnimation                           m_BlockRecovery[ 0x3 ];                           		// 0x0058 (0x0030) [0x0000000000000001]              ( CPF_Edit )
	struct FtCombatAnimation                           m_PinPull;                                        		// 0x0088 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	struct FtCombatAnimation                           m_Throw;                                          		// 0x0098 (0x0010) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct APBGame.cAPBAnimNodeSelectSequences.tSelectSequenceOrProfile
// 0x0014
struct FtSelectSequenceOrProfile
{
	class UAnimNode*                                   m_AnimNode;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FName                                       m_sNodeName;                                      		// 0x0004 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       m_sSequenceOrProfileName;                         		// 0x000C (0x0008) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct APBGame.cAPBAnimNodeSelectSequences.tSelectIKStrategy
// 0x003C
struct FtSelectIKStrategy
{
	class UcAPBSkelControlLimbStrategy*                m_SkelControl;                                    		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FName                                       m_sSkelControlName;                               		// 0x0004 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FtIKStrategySetting                         m_IKSetting;                                      		// 0x000C (0x0018) [0x0000000000000001]              ( CPF_Edit )
	struct FtIKStrategySetting                         m_AimedIKSetting;                                 		// 0x0024 (0x0018) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct APBGame.cAPBAnimNodeSelectSequences.tSelectSequencesProfile
// 0x0020
struct FtSelectSequencesProfile
{
	struct FName                                       m_sProfileName;                                   		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FtSelectSequenceOrProfile >         m_aSelectSequenceOrProfile;                       		// 0x0008 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FtSelectIKStrategy >                m_aSelectIKStrategy;                              		// 0x0014 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct APBGame.cAPBAnimNodeUpperBodyAction.tUpperBodyActionWeaponAnimation
// 0x001C
struct FtUpperBodyActionWeaponAnimation
{
	unsigned char                                      m_eWeaponState;                                   		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       m_sStandSequenceName;                             		// 0x0004 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       m_sCrouchSequenceName;                            		// 0x000C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              m_fTransitionTime;                                		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              m_fTransitionTimeOut;                             		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct APBGame.cAPBAnimNodeUpperBodyAction.tUpperBodyActionProfile
// 0x0014
struct FtUpperBodyActionProfile
{
	struct FName                                       m_sProfileName;                                   		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FtUpperBodyActionWeaponAnimation >  m_aWeaponAnimations;                              		// 0x0008 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct APBGame.cAudioVehicleInterface.VehicleAudioPart
// 0x0004
struct FVehicleAudioPart
{
	int                                                m_eVehicleAudioPart;                              		// 0x0000 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cAudioVehicleInterface.AudioEngine
// 0x001C
struct FAudioEngine
{
	int                                                m_eVehicleAudioPart;                              		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     m_sAudioEventName;                                		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sSimulationDataSet;                             		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct APBGame.cAudioVehicleInterface.AudioExhaust
// 0x0010
struct FAudioExhaust
{
	int                                                m_eVehicleAudioPart;                              		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     m_sAudioEventName;                                		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct APBGame.cAudioVehicleInterface.AudioExhaustPops
// 0x0010
struct FAudioExhaustPops
{
	int                                                m_eVehicleAudioPart;                              		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     m_sAudioEventName;                                		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct APBGame.cAudioVehicleInterface.AudioTransmission
// 0x0014
struct FAudioTransmission
{
	int                                                m_eVehicleAudioPart;                              		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     m_sAudioEventName;                                		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              m_fPitchModifier;                                 		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cAudioVehicleInterface.AudioTurbo
// 0x0034
struct FAudioTurbo
{
	int                                                m_eVehicleAudioPart;                              		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     m_sMainAudioEventName;                            		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              m_fMainPitchModifier;                             		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              m_fMainVolumeStartRPM;                            		// 0x0014 (0x0004) [0x0000000000000000]              
	float                                              m_fMainVolumeFullRPM;                             		// 0x0018 (0x0004) [0x0000000000000000]              
	struct FString                                     m_sSecondAudioEventName;                          		// 0x001C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              m_fSecondPitchModifier;                           		// 0x0028 (0x0004) [0x0000000000000000]              
	float                                              m_fSecondVolumeStartRPM;                          		// 0x002C (0x0004) [0x0000000000000000]              
	float                                              m_fSecondVolumeFullRPM;                           		// 0x0030 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cAudioVehicleInterface.AudioDumpValve
// 0x0010
struct FAudioDumpValve
{
	int                                                m_eVehicleAudioPart;                              		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     m_sAudioEventName;                                		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct APBGame.cAudioVehicleInterface.AudioGearChange
// 0x0010
struct FAudioGearChange
{
	int                                                m_eVehicleAudioPart;                              		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     m_sAudioEventName;                                		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct APBGame.cAudioVehicleInterface.AudioHorn
// 0x0014
struct FAudioHorn
{
	int                                                m_eVehicleAudioPart;                              		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     m_sAudioType;                                     		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              m_fPitchModifier;                                 		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cAudioVehicleInterface.AudioSiren
// 0x0010
struct FAudioSiren
{
	int                                                m_eVehicleAudioPart;                              		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     m_sAudioType;                                     		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct APBGame.cAudioVehicleInterface.AudioAmp
// 0x0014
struct FAudioAmp
{
	int                                                m_eVehicleAudioPart;                              		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              m_fVolume;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FString                                     m_sAudioSwitchName;                               		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct APBGame.cAudioVehicleInterface.AudioSpeaker
// 0x000C
struct FAudioSpeaker
{
	int                                                m_eVehicleAudioPart;                              		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              m_fEQParameter1;                                  		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              m_fEQParameter2;                                  		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.GolemBodyDescriptor.GolemMakeupInfo
// 0x0018
struct FGolemMakeupInfo
{
	unsigned char                                      Shape;                                            		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	float                                              Strength;                                         		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FLinearColor                                HSLColour;                                        		// 0x0008 (0x0010) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct APBGame.GolemBodyDescriptor.GolemMorphNodeWithWeight
// 0x0014
struct FGolemMorphNodeWithWeight
{
	float                                              Weight;                                           		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     NodeName;                                         		// 0x0004 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                Uid;                                              		// 0x0010 (0x0004) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct APBGame.GolemBodyDescriptor.ScarsLayer
// 0x0008
struct FScarsLayer
{
	unsigned char                                      Type;                                             		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      ScarsPatternIndex;                                		// 0x0001 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	float                                              Strength;                                         		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct APBGame.GolemBodyDescriptor.PredefinedTattooLayer
// 0x0008
struct FPredefinedTattooLayer
{
	unsigned char                                      TattooIndex;                                      		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	float                                              Strength;                                         		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct APBGame.Golemobile.GolemobileCommonData
// 0x0030
struct FGolemobileCommonData
{
	struct FLinearColor                                BasePaintColour;                                  		// 0x0000 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	struct FLinearColor                                SecondPaintColour;                                		// 0x0010 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      PaintType;                                        		// 0x0020 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	TArray< int >                                      m_aLightPatternIndices;                           		// 0x0024 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct APBGame.Golemobile.VehicleDistricts
// 0x0024
struct FVehicleDistricts
{
	unsigned char                                      m_eVehicleDistricts;                              		// 0x0000 (0x0001) [0x0000000000000000]              
	struct FString                                     m_sHeightfield;                                   		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              m_fWorldToTextureScaleXY;                         		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              m_fWorldToTextureScaleZ;                          		// 0x0014 (0x0004) [0x0000000000000000]              
	float                                              m_fWorldOffsetX;                                  		// 0x0018 (0x0004) [0x0000000000000000]              
	float                                              m_fWorldOffsetY;                                  		// 0x001C (0x0004) [0x0000000000000000]              
	float                                              m_fWorldOffsetZ;                                  		// 0x0020 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cVehicleTypes.APBVehicleSocket
// 0x000C
struct FAPBVehicleSocket
{
	struct FName                                       SocketName;                                       		// 0x0000 (0x0008) [0x0000000000000000]              
	unsigned long                                      bValid : 1;                                       		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct APBGame.cSDDItem.VehicleSeatCamera
// 0x000C
struct FVehicleSeatCamera
{
	unsigned char                                      m_eVehicleSetupType;                              		// 0x0000 (0x0001) [0x0000000000000000]              
	unsigned char                                      m_eVehiclePositionIndex;                          		// 0x0001 (0x0001) [0x0000000000000000]              
	int                                                m_eSittingCamera;                                 		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                m_eLeanOutCamera;                                 		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cVehicleTypes.APBVehicleSeat
// 0x0020
struct FAPBVehicleSeat
{
	class AcAPBPlayerController*                       Occupier;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	class AcAPBPawn*                                   OccupierPawn;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FName                                       SeatSocket;                                       		// 0x0008 (0x0008) [0x0000000000000000]              
	unsigned char                                      eSeatUseState;                                    		// 0x0010 (0x0001) [0x0000000000000000]              
	struct FVehicleSeatCamera                          SeatCamera;                                       		// 0x0014 (0x000C) [0x0000000000000000]              
};

// ScriptStruct APBGame.cAPBVehicleBase.APBVehicleStateFSM
// 0x0009
struct FAPBVehicleStateFSM
{
	struct FName                                       sActorState;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	unsigned char                                      ePseudoKinCompState;                              		// 0x0008 (0x0001) [0x0000000000000000]              
};

// ScriptStruct APBGame.cAPBVehicleBase.VehicleMusicPlaybackInfo
// 0x002C
struct FVehicleMusicPlaybackInfo
{
	int                                                m_nOwnerCharacterUID;                             		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                m_nTrackGID;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FGuid                                       m_MusicStudioSongGuid;                            		// 0x0008 (0x0010) [0x0000000000000000]              
	int                                                m_nInitialPlaybackServerTime;                     		// 0x0018 (0x0004) [0x0000000000000000]              
	float                                              m_fStyleVector0;                                  		// 0x001C (0x0004) [0x0000000000000000]              
	float                                              m_fStyleVector1;                                  		// 0x0020 (0x0004) [0x0000000000000000]              
	float                                              m_fStyleVector2;                                  		// 0x0024 (0x0004) [0x0000000000000000]              
	float                                              m_fStyleVector3;                                  		// 0x0028 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cAPBVehicleBase.VehicleMusicNameInfo
// 0x0028
struct FVehicleMusicNameInfo
{
	struct FString                                     m_sTrackName;                                     		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sArtistName;                                    		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sReleaseName;                                   		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                m_nTrackGID;                                      		// 0x0024 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cVehicleTypes.APBVehicleVCP
// 0x001C
struct FAPBVehicleVCP
{
	struct FName                                       VCPSocket;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
	float                                              VCPArcDistance;                                   		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              VCPYawDirection;                                  		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              LeanOutAnimTime;                                  		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              LeanInAnimTime;                                   		// 0x0014 (0x0004) [0x0000000000000000]              
	unsigned long                                      bValid : 1;                                       		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct APBGame.cLaneCommand.cRoutePosition
// 0x000C
struct FcRoutePosition
{
	int                                                m_nSectionIndex;                                  		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned char                                      m_nLaneIndex;                                     		// 0x0004 (0x0001) [0x0000000000000000]              
	float                                              m_fDistance;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cLaneCommand.LaneCommand
// 0x0024
struct FLaneCommand
{
	unsigned char                                      m_eState;                                         		// 0x0000 (0x0001) [0x0000000000000000]              
	int                                                m_nID;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              m_fChangeLaneDistance;                            		// 0x0008 (0x0004) [0x0000000000000000]              
	struct FcRoutePosition                             m_CurrentPosition;                                		// 0x000C (0x000C) [0x0000000000000000]              
	struct FcRoutePosition                             m_TargetPosition;                                 		// 0x0018 (0x000C) [0x0000000000000000]              
};

// ScriptStruct APBGame.cAPBVehicleBase.PositionAndOrientationInfo
// 0x0040
struct FPositionAndOrientationInfo
{
	float                                              RearAxleX;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              RearAxleY;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              RearAxleZ;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                nRouteLUTIndex;                                   		// 0x000C (0x0004) [0x0000000000000000]              
	struct FLaneCommand                                LaneInfo;                                         		// 0x0010 (0x0024) [0x0000000000000000]              
	int                                                nDetourRouteLUTIndex[ 0x3 ];                      		// 0x0034 (0x000C) [0x0000000000000000]              
};

// ScriptStruct APBGame.cAPBVehicleBase.SpeedInfo
// 0x0054
struct FSpeedInfo
{
	unsigned char                                      eSpeedState;                                      		// 0x0000 (0x0001) [0x0000000000000000]              
	int                                                nSpeedCommandID;                                  		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              fAcceleration;                                    		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              fTargetSpeed;                                     		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              fSpeed;                                           		// 0x0010 (0x0004) [0x0000000000000000]              
	struct FPositionAndOrientationInfo                 PositionInfo;                                     		// 0x0014 (0x0040) [0x0000000000000000]              
};

// ScriptStruct APBGame.cAPBVehicleBase.VehicleDamageHandlingEffect
// 0x0024
struct FVehicleDamageHandlingEffect
{
	int                                                m_eVehicleDamageHandlingEffect;                   		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              m_fEngineTorqueScale;                             		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              m_fMaxSpeedScale;                                 		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              m_fBrakeEffectiveness;                            		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              m_fFrontLatGrip;                                  		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              m_fFrontLongGrip;                                 		// 0x0014 (0x0004) [0x0000000000000000]              
	float                                              m_fRearLatGrip;                                   		// 0x0018 (0x0004) [0x0000000000000000]              
	float                                              m_fRearLongGrip;                                  		// 0x001C (0x0004) [0x0000000000000000]              
	float                                              m_fSteeringSpeed;                                 		// 0x0020 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cSDDItem.CameraSeatSetup
// 0x0020
struct FCameraSeatSetup
{
	int                                                m_eCameraSeatSetup;                               		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              m_fWorstLocOffset_X;                              		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              m_fWorstLocOffset_Y;                              		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              m_fWorstLocOffset_Z;                              		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              m_fIdealLocOffset_X;                              		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              m_fIdealLocOffset_Y;                              		// 0x0014 (0x0004) [0x0000000000000000]              
	float                                              m_fIdealLocOffset_Z;                              		// 0x0018 (0x0004) [0x0000000000000000]              
	float                                              m_fFOV;                                           		// 0x001C (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cNPCDef.SReactionIDReplicated
// 0x0004
struct FSReactionIDReplicated
{
	unsigned char                                      m_eReactionID;                                    		// 0x0000 (0x0001) [0x0000000000000000]              
	unsigned char                                      m_eWorldEventID;                                  		// 0x0001 (0x0001) [0x0000000000000000]              
	unsigned char                                      m_eIncrementorToForceReplication;                 		// 0x0002 (0x0001) [0x0000000000000000]              
	unsigned char                                      m_ePaddingUpToThirtyTwoBits;                      		// 0x0003 (0x0001) [0x0000000000000000]              
};

// ScriptStruct APBGame.cVehicleTypes.NPCDriverData
// 0x0010
struct FNPCDriverData
{
	int                                                m_nNPCTypeDriver;                                 		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                m_nDriverAssetIndex;                              		// 0x0004 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bDriverPresent : 1;                             		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                m_nDriverDataID;                                  		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cSDDItem.WarningPromptGroup
// 0x0010
struct FWarningPromptGroup
{
	unsigned char                                      m_eWarningPromptGroup;                            		// 0x0000 (0x0001) [0x0000000000000000]              
	struct FString                                     m_sWarningPromptGroupName;                        		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct APBGame.cSDDItem.InventoryItemCategory
// 0x003C
struct FInventoryItemCategory
{
	unsigned char                                      m_eInventoryItemCategory;                         		// 0x0000 (0x0001) [0x0000000000000000]              
	struct FString                                     m_sTableName;                                     		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sDisplayName;                                   		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sDescription;                                   		// 0x001C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      m_bCreatorWaivesRating : 1;                       		// 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bCopyableRenamable : 1;                         		// 0x0028 (0x0004) [0x0000000000000000] [0x00000002] 
	int                                                m_nInitialStorageSpace;                           		// 0x002C (0x0004) [0x0000000000000000]              
	int                                                m_nMaxStorageSpace;                               		// 0x0030 (0x0004) [0x0000000000000000]              
	int                                                m_nByteSize;                                      		// 0x0034 (0x0004) [0x0000000000000000]              
	int                                                m_nSecondaryKey;                                  		// 0x0038 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cSDDItem.InventoryItemSubCategory
// 0x0020
struct FInventoryItemSubCategory
{
	unsigned char                                      m_eInventoryItemSubCategory;                      		// 0x0000 (0x0001) [0x0000000000000000]              
	unsigned char                                      m_eCategory;                                      		// 0x0001 (0x0001) [0x0000000000000000]              
	struct FString                                     m_sDisplayName;                                   		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sDescription;                                   		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                m_nSecondaryKey;                                  		// 0x001C (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cSDDItem.InventoryItemInfraCategory
// 0x0044
struct FInventoryItemInfraCategory
{
	int                                                m_eInventoryItemInfraCategory;                    		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned char                                      m_eSubCategory;                                   		// 0x0004 (0x0001) [0x0000000000000000]              
	struct FString                                     m_sDisplayName;                                   		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sDescription;                                   		// 0x0014 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                m_nInitialAvail;                                  		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                m_nInitialRate;                                   		// 0x0024 (0x0004) [0x0000000000000000]              
	int                                                m_nMaxAvail;                                      		// 0x0028 (0x0004) [0x0000000000000000]              
	int                                                m_nMaxRate;                                       		// 0x002C (0x0004) [0x0000000000000000]              
	struct FString                                     m_sIdentifier;                                    		// 0x0030 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      m_bIsPublished : 1;                               		// 0x003C (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                m_nSecondaryKey;                                  		// 0x0040 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cSDDItem.InventoryItemSubCategoryIcon
// 0x0010
struct FInventoryItemSubCategoryIcon
{
	unsigned char                                      m_eInventoryItemSubCategory;                      		// 0x0000 (0x0001) [0x0000000000000000]              
	struct FString                                     m_sIcon;                                          		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct APBGame.cSDDItem.ShopUIFilterRestriction
// 0x0034
struct FShopUIFilterRestriction
{
	int                                                m_eShopUIFilterRestriction;                       		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned char                                      m_eItemCategory;                                  		// 0x0004 (0x0001) [0x0000000000000000]              
	unsigned char                                      m_eItemSubCategory;                               		// 0x0005 (0x0001) [0x0000000000000000]              
	int                                                m_eItemInfraCategory;                             		// 0x0008 (0x0004) [0x0000000000000000]              
	unsigned char                                      m_eUnlockItemCategory;                            		// 0x000C (0x0001) [0x0000000000000000]              
	unsigned char                                      m_eUnlockItemSubCategory;                         		// 0x000D (0x0001) [0x0000000000000000]              
	int                                                m_eWeaponType;                                    		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                m_eUnlockWeaponType;                              		// 0x0014 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bUnlockEmote : 1;                               		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bUnlockSymbolPrimitive : 1;                     		// 0x0018 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      m_bUnlockVehicleComponent : 1;                    		// 0x0018 (0x0004) [0x0000000000000000] [0x00000004] 
	int                                                m_eUnlockVehicleComponentCategory;                		// 0x001C (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bUnlockCapacity : 1;                            		// 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned char                                      m_eModifierClass;                                 		// 0x0024 (0x0001) [0x0000000000000000]              
	unsigned char                                      m_eUnlockModifierClass;                           		// 0x0025 (0x0001) [0x0000000000000000]              
	unsigned long                                      m_bEmbeddedItem : 1;                              		// 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned char                                      m_eModifierStatus;                                		// 0x002C (0x0001) [0x0000000000000000]              
	unsigned char                                      m_eUnlockModifierStatus;                          		// 0x002D (0x0001) [0x0000000000000000]              
	unsigned char                                      m_eCustomisable;                                  		// 0x002E (0x0001) [0x0000000000000000]              
	unsigned long                                      m_bTrade : 1;                                     		// 0x0030 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bNotDeployed : 1;                               		// 0x0030 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      m_bUnused : 1;                                    		// 0x0030 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      m_bEquipable : 1;                                 		// 0x0030 (0x0004) [0x0000000000000000] [0x00000008] 
};

// ScriptStruct APBGame.cSDDItem.ShopUIFilter
// 0x004C
struct FShopUIFilter
{
	int                                                m_eShopUIFilter;                                  		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     m_sName;                                          		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                m_eShop[ 0x5 ];                                   		// 0x0010 (0x0014) [0x0000000000000000]              
	int                                                m_eOption[ 0x4 ];                                 		// 0x0024 (0x0010) [0x0000000000000000]              
	int                                                m_eParent;                                        		// 0x0034 (0x0004) [0x0000000000000000]              
	int                                                m_eEnable[ 0x3 ];                                 		// 0x0038 (0x000C) [0x0000000000000000]              
	unsigned long                                      m_bDevOnly : 1;                                   		// 0x0044 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                m_nDefaultWeighting;                              		// 0x0048 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cSDDItem.SongItemType
// 0x0010
struct FSongItemType
{
	int                                                m_eInventoryItemType;                             		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     m_sResource;                                      		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct APBGame.cSDDItem.ThemeItemType
// 0x0010
struct FThemeItemType
{
	int                                                m_eInventoryItemType;                             		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     m_sResource;                                      		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct APBGame.cSDDItem.WeaponItemType
// 0x0030
struct FWeaponItemType
{
	int                                                m_eInventoryItemType;                             		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                m_eWeapon;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                m_eFnMod[ 0x3 ];                                  		// 0x0008 (0x000C) [0x0000000000000000]              
	int                                                m_eItemAttachment[ 0x3 ];                         		// 0x0014 (0x000C) [0x0000000000000000]              
	struct FString                                     m_sDescription;                                   		// 0x0020 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                m_eActivityMessageIcon;                           		// 0x002C (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cSDDItem.VehicleItemType
// 0x0038
struct FVehicleItemType
{
	int                                                m_eInventoryItemType;                             		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned char                                      m_eVehicle;                                       		// 0x0004 (0x0001) [0x0000000000000000]              
	struct FString                                     m_sResource;                                      		// 0x0008 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	unsigned long                                      m_bPreset : 1;                                    		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                m_eFnMod[ 0x4 ];                                  		// 0x0018 (0x0010) [0x0000000000000000]              
	struct FString                                     m_sDescription;                                   		// 0x0028 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                m_nReeditFee;                                     		// 0x0034 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cSDDItem.PrimitivePage
// 0x0011
struct FPrimitivePage
{
	int                                                m_ePrimitivePage;                                 		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     m_sDisplayName;                                   		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      m_eType;                                          		// 0x0010 (0x0001) [0x0000000000000000]              
};

// ScriptStruct APBGame.cSDDItem.PrimitiveEntry
// 0x0008
struct FPrimitiveEntry
{
	int                                                m_ePrimitiveEntry;                                		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                m_ePage;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cSDDItem.VehicleComponentUnlockItemType
// 0x0028
struct FVehicleComponentUnlockItemType
{
	int                                                m_eInventoryItemType;                             		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     m_sResource;                                      		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sAlternateResource;                             		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                m_nApplicationCost;                               		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                m_nApplicationRating;                             		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                m_eUIComponent;                                   		// 0x0024 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cSDDItem.UsableTokenType
// 0x001C
struct FUsableTokenType
{
	int                                                m_eInventoryItemType;                             		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                m_eModifierItem;                                  		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                m_nCharges;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                m_nMaxCharges;                                    		// 0x000C (0x0004) [0x0000000000000000]              
	struct FString                                     m_sDescription;                                   		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct APBGame.cSDDItem.UnlockItemInfraCategory
// 0x0008
struct FUnlockItemInfraCategory
{
	int                                                m_eInventoryItemInfraCategory;                    		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                m_eGameplayEvent;                                 		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cSDDItem.UnlockItemType
// 0x0018
struct FUnlockItemType
{
	int                                                m_eInventoryItemType;                             		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                m_eUnlockItem;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FString                                     m_sDescription;                                   		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                m_nSecondaryKey;                                  		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cSDDItem.SymbolItemType
// 0x0010
struct FSymbolItemType
{
	int                                                m_eInventoryItemType;                             		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     m_sResource;                                      		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct APBGame.cSDDItem.OutfitItemType
// 0x0010
struct FOutfitItemType
{
	int                                                m_eInventoryItemType;                             		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     m_sResource;                                      		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct APBGame.cSDDItem.InstrumentItemType
// 0x0010
struct FInstrumentItemType
{
	int                                                m_eInventoryItemType;                             		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     m_sResource;                                      		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct APBGame.cSDDItem.GrafittiItemType
// 0x0010
struct FGrafittiItemType
{
	int                                                m_eInventoryItemType;                             		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     m_sResource;                                      		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct APBGame.cSDDItem.StackingSlot
// 0x0028
struct FStackingSlot
{
	int                                                m_eStackingSlot;                                  		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     m_sCharacterSymbol;                               		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sWeaponSymbol;                                  		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sVehicleSymbol;                                 		// 0x001C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct APBGame.cSDDItem.UsableReuseGroup
// 0x000C
struct FUsableReuseGroup
{
	int                                                m_eUsableReuseGroup;                              		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                m_nUseRestriction;                                		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                m_nSecondaryKey;                                  		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cSDDItem.UsableCategory
// 0x0019
struct FUsableCategory
{
	int                                                m_eUsableCategory;                                		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bUseMissionDuration : 1;                        		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                m_nDuration;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              m_fInterval;                                      		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                m_eReuseGroup;                                    		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                m_nCooldownTimer;                                 		// 0x0014 (0x0004) [0x0000000000000000]              
	unsigned char                                      m_eUsableArray;                                   		// 0x0018 (0x0001) [0x0000000000000000]              
};

// ScriptStruct APBGame.cSDDItem.ModifierSubCategory
// 0x0028
struct FModifierSubCategory
{
	int                                                m_eModifierSubCategory;                           		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned char                                      m_eModifierCategory;                              		// 0x0004 (0x0001) [0x0000000000000000]              
	unsigned char                                      m_eStatus;                                        		// 0x0005 (0x0001) [0x0000000000000000]              
	unsigned char                                      m_eStackingSlotClass;                             		// 0x0006 (0x0001) [0x0000000000000000]              
	int                                                m_eStackingSlot;                                  		// 0x0008 (0x0004) [0x0000000000000000]              
	struct FString                                     m_sVFX;                                           		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sSFX;                                           		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                m_nSelectableSlot;                                		// 0x0024 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cSDDItem.ModifierCategory
// 0x0010
struct FModifierCategory
{
	unsigned char                                      m_eModifierCategory;                              		// 0x0000 (0x0001) [0x0000000000000000]              
	unsigned char                                      m_eClass;                                         		// 0x0001 (0x0001) [0x0000000000000000]              
	struct FString                                     m_sDescription;                                   		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct APBGame.cSDDItem.ModifierItem
// 0x0038
struct FModifierItem
{
	int                                                m_eModifierItem;                                  		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     m_sName;                                          		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                m_eUsableCategory;                                		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                m_eModifierSubCategory;                           		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                m_nStageOrdinal;                                  		// 0x0018 (0x0004) [0x0000000000000000]              
	float                                              m_fEffect;                                        		// 0x001C (0x0004) [0x0000000000000000]              
	float                                              m_fScalar;                                        		// 0x0020 (0x0004) [0x0000000000000000]              
	struct FString                                     m_sIcon;                                          		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              m_fUIEffect;                                      		// 0x0030 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bAlwaysOn : 1;                                  		// 0x0034 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct APBGame.cSDDItem.WeaponFnModItemType
// 0x0004
struct FWeaponFnModItemType
{
	int                                                m_eInventoryItemType;                             		// 0x0000 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cSDDItem.VehicleFnModItemType
// 0x0004
struct FVehicleFnModItemType
{
	int                                                m_eInventoryItemType;                             		// 0x0000 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cSDDItem.CharacterFnModItemType
// 0x0004
struct FCharacterFnModItemType
{
	int                                                m_eInventoryItemType;                             		// 0x0000 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cSDDItem.FnModItemType
// 0x0020
struct FFnModItemType
{
	int                                                m_eInventoryItemType;                             		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                m_eModifierItem;                                  		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FString                                     m_sDescription;                                   		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                m_nApplicationCost;                               		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                m_nRemovalCost;                                   		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                m_nSecondaryKey;                                  		// 0x001C (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cSDDItem.EquipmentCategory
// 0x0010
struct FEquipmentCategory
{
	int                                                m_eEquipmentCategory;                             		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     m_sDescription;                                   		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct APBGame.cSDDItem.BombEquipmentType
// 0x0008
struct FBombEquipmentType
{
	int                                                m_eInventoryItemType;                             		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                m_eBombLevel;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cSDDItem.EquipmentType
// 0x0020
struct FEquipmentType
{
	int                                                m_eInventoryItemType;                             		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                m_fDurationOfUse;                                 		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                m_eEquipmentCategory;                             		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                m_nGradeOrdinal;                                  		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                m_eItemAttachment;                                		// 0x0010 (0x0004) [0x0000000000000000]              
	struct FString                                     m_sDescription;                                   		// 0x0014 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct APBGame.cSDDItem.EmoteItemType
// 0x0004
struct FEmoteItemType
{
	int                                                m_eInventoryItemType;                             		// 0x0000 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cSDDItem.DefaultOutfitItem
// 0x0004
struct FDefaultOutfitItem
{
	int                                                m_eClothingItemType;                              		// 0x0000 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cSDDItem.ClothingItemType
// 0x0028
struct FClothingItemType
{
	int                                                m_eInventoryItemType;                             		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     m_sResource;                                      		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                m_eGolemPart;                                     		// 0x0010 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bMale : 1;                                      		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bFemale : 1;                                    		// 0x0014 (0x0004) [0x0000000000000000] [0x00000002] 
	struct FString                                     m_sDescription;                                   		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                m_nReeditFee;                                     		// 0x0024 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cSDDItem.InventoryItemType
// 0x0050
struct FInventoryItemType
{
	int                                                m_eInventoryItemType;                             		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                m_eInfraCategory;                                 		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FString                                     m_sDisplayName;                                   		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sCreatorName;                                   		// 0x0014 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      m_bNoTrade : 1;                                   		// 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bEnforcer : 1;                                  		// 0x0020 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      m_bCriminal : 1;                                  		// 0x0020 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      m_bGifted : 1;                                    		// 0x0020 (0x0004) [0x0000000000000000] [0x00000008] 
	int                                                m_eRole;                                          		// 0x0024 (0x0004) [0x0000000000000000]              
	int                                                m_nMinRating;                                     		// 0x0028 (0x0004) [0x0000000000000000]              
	int                                                m_nMinMilestone;                                  		// 0x002C (0x0004) [0x0000000000000000]              
	int                                                m_eHUDImage;                                      		// 0x0030 (0x0004) [0x0000000000000000]              
	int                                                m_eUnlock;                                        		// 0x0034 (0x0004) [0x0000000000000000]              
	int                                                m_eHUDImage_Small;                                		// 0x0038 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bBindOnUse : 1;                                 		// 0x003C (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                m_nCostAPBCash;                                   		// 0x0040 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bCanSellback : 1;                               		// 0x0044 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bIsPublished : 1;                               		// 0x0044 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      m_bNoDelete : 1;                                  		// 0x0044 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned char                                      m_eOrganisation;                                  		// 0x0048 (0x0001) [0x0000000000000000]              
	int                                                m_nSecondaryKey;                                  		// 0x004C (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cSDDItem.ErrorCode
// 0x0008
struct FErrorCode
{
	unsigned char                                      m_eErrorCode;                                     		// 0x0000 (0x0001) [0x0000000000000000]              
	int                                                m_nDummy;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cAPBAnimNodeVehicleDoors.tDoor
// 0x0014
struct FtDoor
{
	unsigned char                                      m_eVehiclePositionIndex;                          		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       m_sBoneName;                                      		// 0x0004 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      m_eDoorState;                                     		// 0x000C (0x0001) [0x0000000000000000]              
	unsigned long                                      m_bPlayingDoorAnimation : 1;                      		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bDoorGotToFullyOpen : 1;                        		// 0x0010 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct APBGame.cAPBCameraModifierScreenShake.ShakeParams
// 0x0004
struct FShakeParams
{
	unsigned char                                      X;                                                		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      Y;                                                		// 0x0001 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      Z;                                                		// 0x0002 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      Padding;                                          		// 0x0003 (0x0001) [0x0000000000002002]              ( CPF_Const | CPF_Transient )
};

// ScriptStruct APBGame.cAPBCameraModifierScreenShake.ScreenShakeStruct
// 0x0070
struct FScreenShakeStruct
{
	float                                              TimeToGo;                                         		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              TimeDuration;                                     		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     RotAmplitude;                                     		// 0x0008 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     RotFrequency;                                     		// 0x0014 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     RotSinOffset;                                     		// 0x0020 (0x000C) [0x0000000000000000]              
	struct FShakeParams                                RotParam;                                         		// 0x002C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     LocAmplitude;                                     		// 0x0030 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     LocFrequency;                                     		// 0x003C (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     LocSinOffset;                                     		// 0x0048 (0x000C) [0x0000000000000000]              
	struct FShakeParams                                LocParam;                                         		// 0x0054 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              FOVAmplitude;                                     		// 0x0058 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              FOVFrequency;                                     		// 0x005C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              FOVSinOffset;                                     		// 0x0060 (0x0004) [0x0000000000000000]              
	unsigned char                                      FOVParam;                                         		// 0x0064 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	int                                                ShakeID;                                          		// 0x0068 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bPlayContinuously : 1;                            		// 0x006C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
};

// ScriptStruct APBGame.cAPBCamera.PenetrationAvoidanceFeeler
// 0x0020
struct FPenetrationAvoidanceFeeler
{
	struct FRotator                                    AdjustmentRot;                                    		// 0x0000 (0x000C) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
	float                                              WorldWeight;                                      		// 0x000C (0x0004) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
	float                                              PawnWeight;                                       		// 0x0010 (0x0004) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
	struct FVector                                     Extent;                                           		// 0x0014 (0x000C) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
};

// ScriptStruct APBGame.cAPBCamera.CameraConstant
// 0x0008
struct FCameraConstant
{
	unsigned char                                      m_eCameraConstant;                                		// 0x0000 (0x0001) [0x0000000000000000]              
	float                                              m_fValue;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cAPBCamera.APBViewportType
// 0x0010
struct FAPBViewportType
{
	unsigned char                                      m_eAPBViewportType;                               		// 0x0000 (0x0001) [0x0000000000000000]              
	struct FString                                     m_sDescription;                                   		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct APBGame.cAPBCamera.CameraShakePreset
// 0x004C
struct FCameraShakePreset
{
	int                                                m_eCameraShakePreset;                             		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              m_fRotationAmplitudeX;                            		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              m_fRotationAmplitudeY;                            		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              m_fRotationAmplitudeZ;                            		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              m_fRotationFrequencyX;                            		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              m_fRotationFrequencyY;                            		// 0x0014 (0x0004) [0x0000000000000000]              
	float                                              m_fRotationFrequencyZ;                            		// 0x0018 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bRandomStartingRotationX : 1;                   		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bRandomStartingRotationY : 1;                   		// 0x001C (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      m_bRandomStartingRotationZ : 1;                   		// 0x001C (0x0004) [0x0000000000000000] [0x00000004] 
	float                                              m_fLocationAmplitudeX;                            		// 0x0020 (0x0004) [0x0000000000000000]              
	float                                              m_fLocationAmplitudeY;                            		// 0x0024 (0x0004) [0x0000000000000000]              
	float                                              m_fLocationAmplitudeZ;                            		// 0x0028 (0x0004) [0x0000000000000000]              
	float                                              m_fLocationFrequencyX;                            		// 0x002C (0x0004) [0x0000000000000000]              
	float                                              m_fLocationFrequencyY;                            		// 0x0030 (0x0004) [0x0000000000000000]              
	float                                              m_fLocationFrequencyZ;                            		// 0x0034 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bRandomStartingLocationX : 1;                   		// 0x0038 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bRandomStartingLocationY : 1;                   		// 0x0038 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      m_bRandomStartingLocationZ : 1;                   		// 0x0038 (0x0004) [0x0000000000000000] [0x00000004] 
	float                                              m_fFOVAmplitude;                                  		// 0x003C (0x0004) [0x0000000000000000]              
	float                                              m_fFOVFrequency;                                  		// 0x0040 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bRandomStartingFOV : 1;                         		// 0x0044 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              m_fDuration;                                      		// 0x0048 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cAPBCamera.CameraShakePresetExported
// 0x0004
struct FCameraShakePresetExported
{
	int                                                m_eCameraShakePreset;                             		// 0x0000 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cAPBCamera.APBViewAdjustmentData
// 0x0010
struct FAPBViewAdjustmentData
{
	float                                              m_fBackAdjust;                                    		// 0x0000 (0x0004) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
	float                                              m_fHeightAdjust;                                  		// 0x0004 (0x0004) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
	float                                              m_fRightAdjust;                                   		// 0x0008 (0x0004) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
	float                                              m_fRightAdjustPitchScalar;                        		// 0x000C (0x0004) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
};

// ScriptStruct APBGame.cAPBCamera.sTargetTypeSettings
// 0x0190
struct FsTargetTypeSettings
{
	struct FAPBViewAdjustmentData                      m_APBPrimaryViewAdjustmentsCloseIn[ 0x6 ];        		// 0x0000 (0x0060) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
	struct FAPBViewAdjustmentData                      m_APBPrimaryViewAdjustmentsFarOut[ 0x6 ];         		// 0x0060 (0x0060) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
	struct FAPBViewAdjustmentData                      m_APBSecondaryViewAdjustmentsCloseIn[ 0x6 ];      		// 0x00C0 (0x0060) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
	struct FAPBViewAdjustmentData                      m_APBSecondaryViewAdjustmentsFarOut[ 0x6 ];       		// 0x0120 (0x0060) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
	unsigned char                                      m_eCurrentCameraPosition;                         		// 0x0180 (0x0001) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
	float                                              m_fViewScalar;                                    		// 0x0184 (0x0004) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
	float                                              m_fViewScalarUserDefined;                         		// 0x0188 (0x0004) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
	float                                              m_fZoomSpeedPerSec;                               		// 0x018C (0x0004) [0x0000000000002003]              ( CPF_Edit | CPF_Const | CPF_Transient )
};

// ScriptStruct APBGame.cAPBCameraMode.CameraMode
// 0x0074
struct FCameraMode
{
	unsigned char                                      m_eCameraMode;                                    		// 0x0000 (0x0001) [0x0000000000000000]              
	float                                              m_f4_3BackAdjust;                                 		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              m_f4_3HeightAdjust;                               		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              m_f4_3RightAdjust;                                		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              m_f4_3RightAdjustPitchScalar;                     		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              m_f16_9BackAdjust;                                		// 0x0014 (0x0004) [0x0000000000000000]              
	float                                              m_f16_9HeightAdjust;                              		// 0x0018 (0x0004) [0x0000000000000000]              
	float                                              m_f16_9RightAdjust;                               		// 0x001C (0x0004) [0x0000000000000000]              
	float                                              m_f16_9RightAdjustPitchScalar;                    		// 0x0020 (0x0004) [0x0000000000000000]              
	float                                              m_f4_3CrouchBackAdjust;                           		// 0x0024 (0x0004) [0x0000000000000000]              
	float                                              m_f4_3CrouchHeightAdjust;                         		// 0x0028 (0x0004) [0x0000000000000000]              
	float                                              m_f4_3CrouchRightAdjust;                          		// 0x002C (0x0004) [0x0000000000000000]              
	float                                              m_f4_3CrouchRightAdjustPitchScalar;               		// 0x0030 (0x0004) [0x0000000000000000]              
	float                                              m_f16_9CrouchBackAdjust;                          		// 0x0034 (0x0004) [0x0000000000000000]              
	float                                              m_f16_9CrouchHeightAdjust;                        		// 0x0038 (0x0004) [0x0000000000000000]              
	float                                              m_f16_9CrouchRightAdjust;                         		// 0x003C (0x0004) [0x0000000000000000]              
	float                                              m_f16_9CrouchRightAdjustPitchScalar;              		// 0x0040 (0x0004) [0x0000000000000000]              
	float                                              m_fAdjustBlendSpeed;                              		// 0x0044 (0x0004) [0x0000000000000000]              
	float                                              m_f4_3FOV;                                        		// 0x0048 (0x0004) [0x0000000000000000]              
	float                                              m_f16_9FOV;                                       		// 0x004C (0x0004) [0x0000000000000000]              
	float                                              m_fFOVBlendSpeed;                                 		// 0x0050 (0x0004) [0x0000000000000000]              
	float                                              m_fSafeLocX;                                      		// 0x0054 (0x0004) [0x0000000000000000]              
	float                                              m_fSafeLocY;                                      		// 0x0058 (0x0004) [0x0000000000000000]              
	float                                              m_fSafeLocZ;                                      		// 0x005C (0x0004) [0x0000000000000000]              
	float                                              m_fCrouchSafeLocX;                                		// 0x0060 (0x0004) [0x0000000000000000]              
	float                                              m_fCrouchSafeLocY;                                		// 0x0064 (0x0004) [0x0000000000000000]              
	float                                              m_fCrouchSafeLocZ;                                		// 0x0068 (0x0004) [0x0000000000000000]              
	float                                              m_fCameraOriginLagSpeed;                          		// 0x006C (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bUseDefaultCameraAdjustments : 1;               		// 0x0070 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bCanDoLookBehindCam : 1;                        		// 0x0070 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      m_bCrouchEnabled : 1;                             		// 0x0070 (0x0004) [0x0000000000000000] [0x00000004] 
};

// ScriptStruct APBGame.cAPBCameraModeVehicleUber.tViewConeParams
// 0x000C
struct FtViewConeParams
{
	float                                              nConstViewResetZoneAngle;                         		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              fConstViewResetWaitTime;                          		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              fConstViewResetSpeed;                             		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cAPBCameraModeVehicleUber.tLookBehindParams
// 0x0008
struct FtLookBehindParams
{
	float                                              fConstViewLookbehindWaitTime;                     		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              fConstReversingMinVel;                            		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cAPBCameraModeVehicleUber.tAutoRollParams
// 0x0008
struct FtAutoRollParams
{
	float                                              fConstRollMultiplier;                             		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              fConstRollMaximum;                                		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cAPBCameraModeVehicleUber.tLookBehindState
// 0x0008
struct FtLookBehindState
{
	unsigned long                                      bDoingLookbehind : 1;                             		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bWasDoingLookbehind : 1;                          		// 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bDoingAutoLookbehind : 1;                         		// 0x0000 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bWasDoingAutoLookbehind : 1;                      		// 0x0000 (0x0004) [0x0000000000000000] [0x00000008] 
	float                                              fCurrentReverseTime;                              		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cAPBCameraModeVehicleUber.tAutoRollState
// 0x0018
struct FtAutoRollState
{
	struct FRotator                                    PrevCamRotatorValue;                              		// 0x0000 (0x000C) [0x0000000000000000]              
	float                                              fLastCameraYawAngle;                              		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              fTargetCameraRoll;                                		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              fLastCameraRoll;                                  		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cAPBCameraModeVehicleUber.tDistrictMapState
// 0x0014
struct FtDistrictMapState
{
	float                                              fDistrictMapVisibleTime;                          		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned long                                      bAutoResetOverride : 1;                           		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FRotator                                    PrevCamRotationValue;                             		// 0x0008 (0x000C) [0x0000000000000000]              
};

// ScriptStruct APBGame.cAPBClientServerDebugManager.STickTimesReplicated
// 0x000C
struct FSTickTimesReplicated
{
	float                                              m_fClampedTickTime;                               		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              m_fActualTickTime;                                		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                m_nIncrementorToForceReplication;                 		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cHostingPlayerController.DatabaseTimestamp
// 0x001C
struct FDatabaseTimestamp
{
	int                                                year;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                month;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                day;                                              		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                hour;                                             		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                minute;                                           		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                second;                                           		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                fraction;                                         		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cHostingPlayerController.tAuthenticationKey
// 0x0014
struct FtAuthenticationKey
{
	unsigned char                                      m_array[ 0x14 ];                                  		// 0x0000 (0x0014) [0x0000000000000000]              
};

// ScriptStruct APBGame.cPlayerControllerCSAComponent.CSAAnimationData
// 0x001C
struct FCSAAnimationData
{
	int                                                eAnimIndex;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                eItemType;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              fItemEffectivenessModifier;                       		// 0x0008 (0x0004) [0x0000000000000000]              
	unsigned long                                      bAnimDuration : 1;                                		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                eOverriddenAutoRouteData;                         		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              m_fLogicalOutroDuration;                          		// 0x0014 (0x0004) [0x0000000000000000]              
	unsigned long                                      bOverridenChecksUseAutoRouteData : 1;             		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct APBGame.cPlayerControllerCSAComponent.InteractionData
// 0x004C
struct FInteractionData
{
	struct FPointer                                    BaseCSAAttributes;                                		// 0x0000 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	struct FPointer                                    CSAAttributes;                                    		// 0x0004 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	struct FCSAAnimationData                           AnimData;                                         		// 0x0008 (0x001C) [0x0000000000000000]              
	struct FVector                                     vInteractionLocation;                             		// 0x0024 (0x000C) [0x0000000000000000]              
	struct FVector                                     vLookAtLocation;                                  		// 0x0030 (0x000C) [0x0000000000000000]              
	float                                              fDuration;                                        		// 0x003C (0x0004) [0x0000000000000000]              
	int                                                nIPIndex;                                         		// 0x0040 (0x0004) [0x0000000000000000]              
	class AActor*                                      InteractiveActor;                                 		// 0x0044 (0x0004) [0x0000000000000000]              
	int                                                nPriorityLayer;                                   		// 0x0048 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cTaskTypes.tMissionJustification
// 0x0008
struct FtMissionJustification
{
	unsigned char                                      m_nJustificationType;                             		// 0x0000 (0x0001) [0x0000000000000000]              
	int                                                m_nJustificationIndex;                            		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cSDDTask.TaskObjective
// 0x0090
struct FTaskObjective
{
	int                                                m_eTaskObjective;                                 		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                m_eMissionTemplate;                               		// 0x0004 (0x0004) [0x0000000000000000]              
	unsigned char                                      m_eStage;                                         		// 0x0008 (0x0001) [0x0000000000000000]              
	int                                                m_eOperation;                                     		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                m_eTargetAllocation;                              		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                m_nTargetsRequired;                               		// 0x0014 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bIsConcurrent : 1;                              		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bCompletesConcurrentPair : 1;                   		// 0x0018 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      m_bIsOpposition : 1;                              		// 0x0018 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      m_bEnabledPvP : 1;                                		// 0x0018 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      m_bWinOnCompletion : 1;                           		// 0x0018 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned char                                      m_eItemBatch;                                     		// 0x001C (0x0001) [0x0000000000000000]              
	int                                                m_nTaskItemsAvailable;                            		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                m_nTaskItemsRequired;                             		// 0x0024 (0x0004) [0x0000000000000000]              
	unsigned char                                      m_eTaskItemSpecificationMethod;                   		// 0x0028 (0x0001) [0x0000000000000000]              
	int                                                m_eTaskItemCategory;                              		// 0x002C (0x0004) [0x0000000000000000]              
	int                                                m_eTaskItemSubCategory;                           		// 0x0030 (0x0004) [0x0000000000000000]              
	int                                                m_eTaskItemVariety;                               		// 0x0034 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bLeaveRemainingTaskItems : 1;                   		// 0x0038 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FString                                     m_sCriminalOwnerBrief;                            		// 0x003C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sEnforcerOwnerBrief;                            		// 0x0048 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sCriminalDispatchBrief;                         		// 0x0054 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sEnforcerDispatchBrief;                         		// 0x0060 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	unsigned long                                      m_bWinOnUnopposedCompletion : 1;                  		// 0x006C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bScorePointOnWin : 1;                           		// 0x006C (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      m_bBonusTime : 1;                                 		// 0x006C (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      m_bDisableTakeouts : 1;                           		// 0x006C (0x0004) [0x0000000000000000] [0x00000008] 
	int                                                m_nTimeLimit;                                     		// 0x0070 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bClearTakeoutsOnStart : 1;                      		// 0x0074 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned char                                      m_eVehicleBatch;                                  		// 0x0078 (0x0001) [0x0000000000000000]              
	int                                                m_nVehiclesRequired;                              		// 0x007C (0x0004) [0x0000000000000000]              
	int                                                m_eVehicleCategory;                               		// 0x0080 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bEndOnlyOnTimeOut : 1;                          		// 0x0084 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bOwnersWinOnTargetDestroyedByOpponent : 1;      		// 0x0084 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      m_bOppositionWinOnTargetDestroyedByOwners : 1;    		// 0x0084 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      m_bEnableOwningSideVIPTakeouts : 1;               		// 0x0084 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      m_bClearOwningSideVIPTakeoutsOnStart : 1;         		// 0x0084 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      m_bEnableOpposingSideVIPTakeouts : 1;             		// 0x0084 (0x0004) [0x0000000000000000] [0x00000020] 
	unsigned long                                      m_bClearOpposingSideVIPTakeoutsOnStart : 1;       		// 0x0084 (0x0004) [0x0000000000000000] [0x00000040] 
	unsigned char                                      m_eOwningSideVIPAssignment;                       		// 0x0088 (0x0001) [0x0000000000000000]              
	unsigned char                                      m_eOpposingSideVIPAssignment;                     		// 0x0089 (0x0001) [0x0000000000000000]              
	unsigned long                                      m_bDrawOnTimeOut : 1;                             		// 0x008C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct APBGame.cSDDTask.MissionTemplate
// 0x0060
struct FMissionTemplate
{
	int                                                m_eMissionTemplate;                               		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned char                                      m_eFaction;                                       		// 0x0004 (0x0001) [0x0000000000000000]              
	unsigned long                                      m_bDisabled : 1;                                  		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bTest : 1;                                      		// 0x0008 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      m_bNewbie : 1;                                    		// 0x0008 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      m_bTutorial : 1;                                  		// 0x0008 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      m_bTurf : 1;                                      		// 0x0008 (0x0004) [0x0000000000000000] [0x00000010] 
	int                                                m_nComplexity;                                    		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                m_eRarity;                                        		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                m_nGroupSizeMin;                                  		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                m_nGroupSizeMax;                                  		// 0x0018 (0x0004) [0x0000000000000000]              
	unsigned char                                      m_eTimeOfDayAvailability;                         		// 0x001C (0x0001) [0x0000000000000000]              
	int                                                m_nSimultaneousCap;                               		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                m_ePurpose;                                       		// 0x0024 (0x0004) [0x0000000000000000]              
	int                                                m_nRespawnTime;                                   		// 0x0028 (0x0004) [0x0000000000000000]              
	int                                                m_nRespawnTimeIncrement;                          		// 0x002C (0x0004) [0x0000000000000000]              
	int                                                m_nTakeoutCount;                                  		// 0x0030 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bCountArrestsAsTakeouts : 1;                    		// 0x0034 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bCountKillsAsTakeouts : 1;                      		// 0x0034 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      m_bOwnerWinOnMaxTakeouts : 1;                     		// 0x0034 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      m_bOppositionWinOnMaxTakeouts : 1;                		// 0x0034 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      m_bUseTakeoutBar : 1;                             		// 0x0034 (0x0004) [0x0000000000000000] [0x00000010] 
	int                                                m_eRewardPackage;                                 		// 0x0038 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bNoCriminalOpposition : 1;                      		// 0x003C (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                m_eMissionUIOwnerProfile;                         		// 0x0040 (0x0004) [0x0000000000000000]              
	int                                                m_eMissionUIOppositionProfile;                    		// 0x0044 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bBountyHunter : 1;                              		// 0x0048 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              m_fOwningSideBias;                                		// 0x004C (0x0004) [0x0000000000000000]              
	int                                                m_nOwningSideVIPLives;                            		// 0x0050 (0x0004) [0x0000000000000000]              
	int                                                m_nOpposingSideVIPLives;                          		// 0x0054 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bCountKillsAsVIPTakeouts : 1;                   		// 0x0058 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bCountArrestsAsVIPTakeouts : 1;                 		// 0x0058 (0x0004) [0x0000000000000000] [0x00000002] 
	int                                                m_nSecondaryKey;                                  		// 0x005C (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cSDDTask.TaskOperation
// 0x0040
struct FTaskOperation
{
	int                                                m_eTaskOperation;                                 		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned char                                      m_eTaskOperationCategory;                         		// 0x0004 (0x0001) [0x0000000000000000]              
	unsigned char                                      m_eTaskTargetClass;                               		// 0x0005 (0x0001) [0x0000000000000000]              
	struct FString                                     m_sCriminalBrief;                                 		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sEnforcerBrief;                                 		// 0x0014 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                m_eOppositionTargetHUDMarker;                     		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                m_eTaskTargetHUDMarker;                           		// 0x0024 (0x0004) [0x0000000000000000]              
	int                                                m_eMissionUIProfile;                              		// 0x0028 (0x0004) [0x0000000000000000]              
	int                                                m_eMissionUIProfileOpposition;                    		// 0x002C (0x0004) [0x0000000000000000]              
	unsigned char                                      m_eNPCWorldEvent;                                 		// 0x0030 (0x0001) [0x0000000000000000]              
	unsigned long                                      m_bShowTaskGroupToOpposition : 1;                 		// 0x0034 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bShowOppositionToTaskGroup : 1;                 		// 0x0034 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned char                                      m_eOwnerItemVisibility;                           		// 0x0038 (0x0001) [0x0000000000000000]              
	unsigned char                                      m_eOppositionItemVisibility;                      		// 0x0039 (0x0001) [0x0000000000000000]              
	unsigned long                                      m_bOwnersCanInteractWithVehicles : 1;             		// 0x003C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bOppositionCanInteractWithVehicles : 1;         		// 0x003C (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      m_bOwnersCanCarryTaskItems : 1;                   		// 0x003C (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      m_bOppositionCanCarryTaskItems : 1;               		// 0x003C (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      m_bHideAllDeliverablesFromOwners : 1;             		// 0x003C (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      m_bHideAllDeliverablesFromOpposition : 1;         		// 0x003C (0x0004) [0x0000000000000000] [0x00000020] 
};

// ScriptStruct APBGame.cSDDTask.TaskOperationCategory
// 0x000C
struct FTaskOperationCategory
{
	unsigned char                                      m_eTaskOperationCategory;                         		// 0x0000 (0x0001) [0x0000000000000000]              
	unsigned long                                      m_bAutoInstigateOpposition : 1;                   		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              m_fMinTakeoutMultiplier;                          		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cSDDTask.TaskOperationArson
// 0x0008
struct FTaskOperationArson
{
	int                                                m_eTaskOperation;                                 		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              m_fCSADuration;                                   		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cSDDTask.TaskOperationBombing
// 0x0018
struct FTaskOperationBombing
{
	int                                                m_eTaskOperation;                                 		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              m_fFuseTimer;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              m_fBombDisposalGuardTime;                         		// 0x0008 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bIsBombDefusable : 1;                           		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bIsBombRearmable : 1;                           		// 0x000C (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      m_bTriggerOnAllBombsDefused : 1;                  		// 0x000C (0x0004) [0x0000000000000000] [0x00000004] 
	float                                              m_fCSADuration;                                   		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                m_eBombLevel;                                     		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cSDDTask.TaskOperationBuildingBreakIn
// 0x0014
struct FTaskOperationBuildingBreakIn
{
	int                                                m_eTaskOperation;                                 		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              m_fCSADuration;                                   		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FString                                     m_sUseActionName;                                 		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct APBGame.cSDDTask.TaskOperationEscort
// 0x000C
struct FTaskOperationEscort
{
	int                                                m_eTaskOperation;                                 		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              m_fTriggerTime;                                   		// 0x0004 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bWinOnTimeout : 1;                              		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bVIPOpponentCanCapture : 1;                     		// 0x0008 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct APBGame.cSDDTask.TaskOperationEscape
// 0x0020
struct FTaskOperationEscape
{
	int                                                m_eTaskOperation;                                 		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              m_fEscapeBarLimit;                                		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              m_fWeaponFirePenaltySeconds;                      		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              m_fTakeDamagePenaltySeconds;                      		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              m_fArrestedPenaltySeconds;                        		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              m_fArrestOpponentPenaltySeconds;                  		// 0x0014 (0x0004) [0x0000000000000000]              
	float                                              m_fKilledPenaltySeconds;                          		// 0x0018 (0x0004) [0x0000000000000000]              
	float                                              m_fKillOpponentPenaltySeconds;                    		// 0x001C (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cSDDTask.TaskOperationMovingTarget
// 0x0008
struct FTaskOperationMovingTarget
{
	int                                                m_eTaskOperation;                                 		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                m_nPadding;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cSDDTask.TaskOperationArmedGuard
// 0x0008
struct FTaskOperationArmedGuard
{
	int                                                m_eTaskOperation;                                 		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              m_fUnused;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cSDDTask.TaskOperationGraffiti
// 0x000C
struct FTaskOperationGraffiti
{
	int                                                m_eTaskOperation;                                 		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                m_nSprayDuration;                                 		// 0x0004 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bIsResprayable : 1;                             		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct APBGame.cSDDTask.TaskOperationItemDelivery
// 0x0010
struct FTaskOperationItemDelivery
{
	int                                                m_eTaskOperation;                                 		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bDeliverToAllTargets : 1;                       		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              m_fTriggerTime;                                   		// 0x0008 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bDeliverVehicleCargo : 1;                       		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bDeliverVehicle : 1;                            		// 0x000C (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      m_bRemoveDeliverables : 1;                        		// 0x000C (0x0004) [0x0000000000000000] [0x00000004] 
};

// ScriptStruct APBGame.cSDDTask.TaskOperationNPC
// 0x000C
struct FTaskOperationNPC
{
	int                                                m_eTaskOperation;                                 		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned char                                      m_eCSAState;                                      		// 0x0004 (0x0001) [0x0000000000000000]              
	float                                              m_fCSADuration;                                   		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cSDDTask.TaskOperationPickup
// 0x000C
struct FTaskOperationPickup
{
	int                                                m_eTaskOperation;                                 		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bIsVehicleDeliverable : 1;                      		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                m_nPadding;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cSDDTask.TaskOperationRamRaid
// 0x0008
struct FTaskOperationRamRaid
{
	int                                                m_eTaskOperation;                                 		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                m_nHealthPool;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cSDDTask.TaskOperationSurvival
// 0x0008
struct FTaskOperationSurvival
{
	int                                                m_eTaskOperation;                                 		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                m_nPadding;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cSDDTask.TaskOperationBust
// 0x0008
struct FTaskOperationBust
{
	int                                                m_eTaskOperation;                                 		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                m_nHealthPool;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cSDDTask.TaskOperationRendezvous
// 0x000C
struct FTaskOperationRendezvous
{
	int                                                m_eTaskOperation;                                 		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bAllSideMembers : 1;                            		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bAllSimultaneously : 1;                         		// 0x0004 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      m_bIsCoopCheckpoint : 1;                          		// 0x0004 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      m_bVehicleRequired : 1;                           		// 0x0004 (0x0004) [0x0000000000000000] [0x00000008] 
	float                                              m_fTriggerTime;                                   		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cSDDTask.TaskOperationVandalism
// 0x0008
struct FTaskOperationVandalism
{
	int                                                m_eTaskOperation;                                 		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                m_nHealthPool;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cSDDTask.TaskOperationVehicleLooting
// 0x000C
struct FTaskOperationVehicleLooting
{
	int                                                m_eTaskOperation;                                 		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bVehicleLocked : 1;                             		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bIsVehicleDeliverable : 1;                      		// 0x0004 (0x0004) [0x0000000000000000] [0x00000002] 
	float                                              m_fCSADuration;                                   		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cSDDTask.TaskOperationVehicleTheft
// 0x0010
struct FTaskOperationVehicleTheft
{
	int                                                m_eTaskOperation;                                 		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                m_nPointlessExtraPadding;                         		// 0x0004 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bVehicleLocked : 1;                             		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bIsVehicleDeliverable : 1;                      		// 0x0008 (0x0004) [0x0000000000000000] [0x00000002] 
	float                                              m_fCSADuration;                                   		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cSDDTask.TaskOperationVehicleCargo
// 0x000C
struct FTaskOperationVehicleCargo
{
	int                                                m_eTaskOperation;                                 		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bVehicleLocked : 1;                             		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bIsVehicleDeliverable : 1;                      		// 0x0004 (0x0004) [0x0000000000000000] [0x00000002] 
	float                                              m_fCSADuration;                                   		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cSDDTask.TaskOperationDeathmatch
// 0x0008
struct FTaskOperationDeathmatch
{
	int                                                m_eTaskOperation;                                 		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                m_nPadding;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cSDDTask.TaskOperationTerritoryControl
// 0x000C
struct FTaskOperationTerritoryControl
{
	int                                                m_eTaskOperation;                                 		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              m_fCaptureTime;                                   		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              m_fResetTime;                                     		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cSDDTask.TaskOperationCSI
// 0x0008
struct FTaskOperationCSI
{
	int                                                m_eTaskOperation;                                 		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              m_fCSADuration;                                   		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cSDDTask.TaskOperationSabotage
// 0x0008
struct FTaskOperationSabotage
{
	int                                                m_eTaskOperation;                                 		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              m_fCSADuration;                                   		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cSDDTask.TaskOperationHacking
// 0x0008
struct FTaskOperationHacking
{
	int                                                m_eTaskOperation;                                 		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              m_fCSADuration;                                   		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cSDDTask.MissionUITrackedStateProfile
// 0x0040
struct FMissionUITrackedStateProfile
{
	int                                                m_eMissionUITrackedStateProfile;                  		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     m_sNeutralIcon;                                   		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sArmedIcon;                                     		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sUnarmedIcon;                                   		// 0x001C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sOwnerClaimed;                                  		// 0x0028 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sOppositionClaimed;                             		// 0x0034 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct APBGame.cSDDTask.MissionUISocket
// 0x0008
struct FMissionUISocket
{
	int                                                m_eMissionUISocket;                               		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                m_nRow;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cSDDTask.TaskOperationUIProfile
// 0x00E0
struct FTaskOperationUIProfile
{
	int                                                m_eTaskOperationUIProfile;                        		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     m_sTrackedValueDescription[ 0x3 ];                		// 0x0004 (0x0024) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      m_eTrackedValue[ 0x3 ];                           		// 0x0028 (0x0003) [0x0000000000000000]              
	unsigned char                                      m_eTrackedValueDisplay[ 0x3 ];                    		// 0x002B (0x0003) [0x0000000000000000]              
	unsigned char                                      m_bTrackedValueOnHUD[ 0x3 ];                      		// 0x002E (0x0003) [0x0000000000000000]              
	unsigned char                                      m_bTrackedValueInOverview[ 0x3 ];                 		// 0x0031 (0x0003) [0x0000000000000000]              
	int                                                m_eTrackedValueSocket[ 0x3 ];                     		// 0x0034 (0x000C) [0x0000000000000000]              
	struct FString                                     m_sTrackedValueImage[ 0x3 ];                      		// 0x0040 (0x0024) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sCriminalBrief;                                 		// 0x0064 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sEnforcerBrief;                                 		// 0x0070 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                m_eTrackedStateProfile[ 0x3 ];                    		// 0x007C (0x000C) [0x0000000000000000]              
	int                                                m_eTrackedValueBarBg[ 0x3 ];                      		// 0x0088 (0x000C) [0x0000000000000000]              
	int                                                m_eTrackedValueBarFg[ 0x3 ];                      		// 0x0094 (0x000C) [0x0000000000000000]              
	unsigned char                                      m_bHideWhenUnopposed[ 0x3 ];                      		// 0x00A0 (0x0003) [0x0000000000000000]              
	int                                                m_eTrackedValueBarFgDisabled[ 0x3 ];              		// 0x00A4 (0x000C) [0x0000000000000000]              
	unsigned char                                      m_bHideAtMax[ 0x3 ];                              		// 0x00B0 (0x0003) [0x0000000000000000]              
	unsigned char                                      m_bHideWhenTakeoutsDisabled[ 0x3 ];               		// 0x00B3 (0x0003) [0x0000000000000000]              
	unsigned char                                      m_bHideWhenOne[ 0x3 ];                            		// 0x00B6 (0x0003) [0x0000000000000000]              
	unsigned char                                      m_bFlashWhenChanged[ 0x3 ];                       		// 0x00B9 (0x0003) [0x0000000000000000]              
	struct FString                                     m_sShortBrief;                                    		// 0x00BC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                m_nTrackedValueStageOffset[ 0x3 ];                		// 0x00C8 (0x000C) [0x0000000000000000]              
	unsigned char                                      m_bHideWhenPointsDisabled[ 0x3 ];                 		// 0x00D4 (0x0003) [0x0000000000000000]              
	unsigned char                                      m_bHideWhenOwnerVIPTakeoutsDisabled[ 0x3 ];       		// 0x00D7 (0x0003) [0x0000000000000000]              
	unsigned char                                      m_bHideWhenOppositionVIPTakeoutsDisabled[ 0x3 ];  		// 0x00DA (0x0003) [0x0000000000000000]              
	unsigned char                                      m_bHideNameWhenDisabled[ 0x3 ];                   		// 0x00DD (0x0003) [0x0000000000000000]              
};

// ScriptStruct APBGame.cSDDTask.MissionTemplateUIProfile
// 0x00A4
struct FMissionTemplateUIProfile
{
	int                                                m_eMissionTemplateUIProfile;                      		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     m_sTrackedValueDescription[ 0x3 ];                		// 0x0004 (0x0024) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      m_eTrackedValue[ 0x3 ];                           		// 0x0028 (0x0003) [0x0000000000000000]              
	unsigned char                                      m_eTrackedValueDisplay[ 0x3 ];                    		// 0x002B (0x0003) [0x0000000000000000]              
	unsigned char                                      m_bTrackedValueOnHUD[ 0x3 ];                      		// 0x002E (0x0003) [0x0000000000000000]              
	unsigned char                                      m_bTrackedValueInLocalOverview[ 0x3 ];            		// 0x0031 (0x0003) [0x0000000000000000]              
	unsigned char                                      m_bTrackedValueInRemoteOverview[ 0x3 ];           		// 0x0034 (0x0003) [0x0000000000000000]              
	int                                                m_eTrackedValueSocket[ 0x3 ];                     		// 0x0038 (0x000C) [0x0000000000000000]              
	struct FString                                     m_sTrackedValueImage[ 0x3 ];                      		// 0x0044 (0x0024) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                m_eTrackedValueBarBg[ 0x3 ];                      		// 0x0068 (0x000C) [0x0000000000000000]              
	int                                                m_eTrackedValueBarFg[ 0x3 ];                      		// 0x0074 (0x000C) [0x0000000000000000]              
	int                                                m_eTrackedValueBarFgDisabled[ 0x3 ];              		// 0x0080 (0x000C) [0x0000000000000000]              
	unsigned char                                      m_bHideWhenUnopposed[ 0x3 ];                      		// 0x008C (0x0003) [0x0000000000000000]              
	unsigned char                                      m_bHideAtMax[ 0x3 ];                              		// 0x008F (0x0003) [0x0000000000000000]              
	unsigned char                                      m_bHideWhenTakeoutsDisabled[ 0x3 ];               		// 0x0092 (0x0003) [0x0000000000000000]              
	unsigned char                                      m_bHideWhenOne[ 0x3 ];                            		// 0x0095 (0x0003) [0x0000000000000000]              
	unsigned char                                      m_bFlashWhenChanged[ 0x3 ];                       		// 0x0098 (0x0003) [0x0000000000000000]              
	unsigned char                                      m_bHideWhenPointsDisabled[ 0x3 ];                 		// 0x009B (0x0003) [0x0000000000000000]              
	unsigned char                                      m_bHideWhenOwnerVIPTakeoutsDisabled[ 0x3 ];       		// 0x009E (0x0003) [0x0000000000000000]              
	unsigned char                                      m_bHideWhenOppositionVIPTakeoutsDisabled[ 0x3 ];  		// 0x00A1 (0x0003) [0x0000000000000000]              
};

// ScriptStruct APBGame.cSDDTask.TaskTargetAllocation
// 0x003C
struct FTaskTargetAllocation
{
	int                                                m_eTaskTargetAllocation;                          		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                m_eMissionTemplate;                               		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                m_eTaskTargetType;                                		// 0x0008 (0x0004) [0x0000000000000000]              
	unsigned char                                      m_eTaskTargetSpecificationMethod;                 		// 0x000C (0x0001) [0x0000000000000000]              
	int                                                m_nTargetCount;                                   		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                m_eTheme[ 0x4 ];                                  		// 0x0014 (0x0010) [0x0000000000000000]              
	float                                              m_fLocationDistanceMin;                           		// 0x0024 (0x0004) [0x0000000000000000]              
	float                                              m_fLocationDistanceMax;                           		// 0x0028 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bNPCStayNear : 1;                               		// 0x002C (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                m_eLocationConstraint;                            		// 0x0030 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bAllowSameBlock : 1;                            		// 0x0034 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bAllowDifferentBlock : 1;                       		// 0x0034 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      m_bUniqueBlock : 1;                               		// 0x0034 (0x0004) [0x0000000000000000] [0x00000004] 
	int                                                m_eVehicleCategory;                               		// 0x0038 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cSDDTask.TaskTargetClass
// 0x0008
struct FTaskTargetClass
{
	unsigned char                                      m_eTaskTargetClass;                               		// 0x0000 (0x0001) [0x0000000000000000]              
	unsigned long                                      m_bLivingCity : 1;                                		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bCanBeUsedInDirectedMissions : 1;               		// 0x0004 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct APBGame.cSDDTask.TaskTargetType
// 0x0038
struct FTaskTargetType
{
	int                                                m_eTaskTargetType;                                		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     m_sDisplayName;                                   		// 0x0004 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sDescription;                                   		// 0x0010 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	unsigned char                                      m_eTaskTargetClass;                               		// 0x001C (0x0001) [0x0000000000000000]              
	unsigned char                                      m_eTimeOfDayAvailability;                         		// 0x001D (0x0001) [0x0000000000000000]              
	int                                                m_eGameplayObject;                                		// 0x0020 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bOpenWorldOnly : 1;                             		// 0x0024 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                m_eOpenWorldTargetActivity;                       		// 0x0028 (0x0004) [0x0000000000000000]              
	int                                                m_eOWAItemSpawnRule;                              		// 0x002C (0x0004) [0x0000000000000000]              
	int                                                m_eHUDMarkerOffsetOverride;                       		// 0x0030 (0x0004) [0x0000000000000000]              
	int                                                m_nSecondaryKey;                                  		// 0x0034 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cSDDTask.TaskTargetVehicle
// 0x000C
struct FTaskTargetVehicle
{
	int                                                m_eTaskTargetType;                                		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned char                                      m_eVehicleSetupType;                              		// 0x0004 (0x0001) [0x0000000000000000]              
	int                                                m_nDummy;                                         		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cSDDTask.TaskTargetBuildingFeature
// 0x0008
struct FTaskTargetBuildingFeature
{
	int                                                m_eTaskTargetType;                                		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bRamRaid : 1;                                   		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bArson : 1;                                     		// 0x0004 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      m_bBurglary : 1;                                  		// 0x0004 (0x0004) [0x0000000000000000] [0x00000004] 
};

// ScriptStruct APBGame.cSDDTask.TaskTargetCheckpoint
// 0x0010
struct FTaskTargetCheckpoint
{
	int                                                m_eTaskTargetType;                                		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bAllowDropOffs : 1;                             		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                m_nMaxPlayerSpaces;                               		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                m_nMaxVehicleSpaces;                              		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cSDDTask.TaskTargetGraffiti
// 0x0008
struct FTaskTargetGraffiti
{
	int                                                m_eTaskTargetType;                                		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                m_nDummy;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cSDDTask.TaskTargetNPC
// 0x000C
struct FTaskTargetNPC
{
	int                                                m_eTaskTargetType;                                		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                m_nTempLCType;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                m_eNPCType;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cSDDTask.TaskTargetProp
// 0x0024
struct FTaskTargetProp
{
	int                                                m_eTaskTargetType;                                		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     m_sPropAssetName;                                 		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      m_bRamRaid : 1;                                   		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bArson : 1;                                     		// 0x0010 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      m_bBurglary : 1;                                  		// 0x0010 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      m_bForcedEntry : 1;                               		// 0x0010 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      m_bBust : 1;                                      		// 0x0010 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      m_bBombing : 1;                                   		// 0x0010 (0x0004) [0x0000000000000000] [0x00000020] 
	unsigned long                                      m_bBombDisposal : 1;                              		// 0x0010 (0x0004) [0x0000000000000000] [0x00000040] 
	unsigned long                                      m_bVandalism : 1;                                 		// 0x0010 (0x0004) [0x0000000000000000] [0x00000080] 
	int                                                m_ePropCategory;                                  		// 0x0014 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bIsBuildingFeature : 1;                         		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              m_fArsonDamageDelaySeconds;                       		// 0x001C (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bSabotage : 1;                                  		// 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bCSI : 1;                                       		// 0x0020 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      m_bHacking : 1;                                   		// 0x0020 (0x0004) [0x0000000000000000] [0x00000004] 
};

// ScriptStruct APBGame.cSDDTask.BombLevel
// 0x000C
struct FBombLevel
{
	int                                                m_eBombLevel;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                m_eExplosionType;                                 		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                m_nLevel;                                         		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cSDDTask.Probability
// 0x0008
struct FProbability
{
	int                                                m_eProbability;                                   		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              m_fCoefficient;                                   		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cSDDTask.OpenWorldTargetActivity
// 0x000C
struct FOpenWorldTargetActivity
{
	int                                                m_eOpenWorldTargetActivity;                       		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                m_eOpenWorldOperationCriminal;                    		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                m_eOpenWorldOperationEnforcer;                    		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cSDDTask.OpenWorldOperation
// 0x002C
struct FOpenWorldOperation
{
	int                                                m_eOpenWorldOperation;                            		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned char                                      m_eTaskOperationCategory;                         		// 0x0004 (0x0001) [0x0000000000000000]              
	unsigned char                                      m_eOpenWorldCSA;                                  		// 0x0005 (0x0001) [0x0000000000000000]              
	unsigned char                                      m_eNPCWorldEvent;                                 		// 0x0006 (0x0001) [0x0000000000000000]              
	int                                                m_nCSADuration;                                   		// 0x0008 (0x0004) [0x0000000000000000]              
	struct FString                                     m_sUITitle;                                       		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sUIDescription;                                 		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                m_eUIIcon;                                        		// 0x0024 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bUIReticuleHighlight : 1;                       		// 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct APBGame.cSDDTask.OpenWorldDropOff
// 0x0020
struct FOpenWorldDropOff
{
	int                                                m_eOpenWorldDropOff;                              		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned char                                      m_eTaskItemSize[ 0x4 ];                           		// 0x0004 (0x0004) [0x0000000000000000]              
	unsigned char                                      m_eFaction;                                       		// 0x0008 (0x0001) [0x0000000000000000]              
	int                                                m_eHUDMarkerType;                                 		// 0x000C (0x0004) [0x0000000000000000]              
	unsigned char                                      m_eFactionHUDMarkerFilter;                        		// 0x0010 (0x0001) [0x0000000000000000]              
	int                                                m_nDeliveryPoints;                                		// 0x0014 (0x0004) [0x0000000000000000]              
	float                                              m_fPointReplenishmentPerCycle;                    		// 0x0018 (0x0004) [0x0000000000000000]              
	float                                              m_fCycleDurationSeconds;                          		// 0x001C (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cSDDTask.OWAItemSpawnRule
// 0x0038
struct FOWAItemSpawnRule
{
	int                                                m_eOWAItemSpawnRule;                              		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                m_nPercentageChanceZeroItems;                     		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                m_nLowerRange;                                    		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                m_nLowerMidRange;                                 		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                m_nUpperMidRange;                                 		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                m_nUpperRange;                                    		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                m_nSmallItemWeighting;                            		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                m_nMediumItemWeighting;                           		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                m_nLargeItemWeighting;                            		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                m_eItemMetaTag[ 0x5 ];                            		// 0x0024 (0x0014) [0x0000000000000000]              
};

// ScriptStruct APBGame.cSDDTask.OpenWorldReward
// 0x000C
struct FOpenWorldReward
{
	int                                                m_eOpenWorldReward;                               		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                m_nBaseCash;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                m_nBaseStanding;                                  		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cSDDTask.MissionResultReason
// 0x0028
struct FMissionResultReason
{
	unsigned char                                      m_eMissionResultReason;                           		// 0x0000 (0x0001) [0x0000000000000000]              
	struct FString                                     m_sWinMessage;                                    		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sLoseMessage;                                   		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sDrawMessage;                                   		// 0x001C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct APBGame.cSDDTask.MissionTakeoutLookUp
// 0x0008
struct FMissionTakeoutLookUp
{
	int                                                m_nMissionTakeoutLookUp;                          		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                m_nTakeoutLimit;                                  		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cSDDTask.CoopCheckpointMultipliers
// 0x0008
struct FCoopCheckpointMultipliers
{
	int                                                m_nCoopCheckpointMultipliers;                     		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              m_fMultiplier;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cTaskDescription.TaskVIPState
// 0x0009
struct FTaskVIPState
{
	int                                                m_nKills;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	class AcAPBPlayerController*                       m_pCurrentVIP;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
	unsigned char                                      m_eVIPAssignmentMethod;                           		// 0x0008 (0x0001) [0x0000000000000000]              
};

// ScriptStruct APBGame.cTaskDescription.tPlayerTriggerInfo
// 0x0008
struct FtPlayerTriggerInfo
{
	class AcAPBPlayerController*                       pPlayer;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                nNumberOfObjectivesTriggered;                     		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cTaskDescription.PlayerTimerPair
// 0x0008
struct FPlayerTimerPair
{
	int                                                m_nPlayerUID;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                m_nTimer;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cCharacterScorer.ActivityMessageRecord
// 0x0014
struct FActivityMessageRecord
{
	int                                                m_nMessageTypeID;                                 		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                m_nParameter0;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                m_nParameter1;                                    		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                m_nParameter2;                                    		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                m_nParameter3;                                    		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cCharacterScorer.ActivityMessageRecordWithTime
// 0x0018
struct FActivityMessageRecordWithTime
{
	struct FActivityMessageRecord                      m_message;                                        		// 0x0000 (0x0014) [0x0000000000000000]              
	float                                              m_fReceivedTime;                                  		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cCharacterScorer.ActivityMessageRecords
// 0x0068
struct FActivityMessageRecords
{
	int                                                m_nCount;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FActivityMessageRecord                      m_messages[ 0x5 ];                                		// 0x0004 (0x0064) [0x0000000000000000]              
};

// ScriptStruct APBGame.cCharacterScorer.MissionSideMembersPacket
// 0x007C
struct FMissionSideMembersPacket
{
	int                                                m_Data[ 0x1F ];                                   		// 0x0000 (0x007C) [0x0000000000000000]              
};

// ScriptStruct APBGame.cCharacterScorer.MissionStatsPacket
// 0x0030
struct FMissionStatsPacket
{
	int                                                m_Data[ 0xC ];                                    		// 0x0000 (0x0030) [0x0000000000000000]              
};

// ScriptStruct APBGame.cCharacterScorer.MedalsPacket
// 0x001C
struct FMedalsPacket
{
	int                                                m_Data[ 0x7 ];                                    		// 0x0000 (0x001C) [0x0000000000000000]              
};

// ScriptStruct APBGame.cCharacterScorer.MissionSummaryPacket
// 0x0014
struct FMissionSummaryPacket
{
	int                                                m_nCashRewarded;                                  		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                m_nContactStanding;                               		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                m_nOrganisationStanding;                          		// 0x0008 (0x0004) [0x0000000000000000]              
	unsigned char                                      m_nNewContactLevel;                               		// 0x000C (0x0001) [0x0000000000000000]              
	unsigned char                                      m_eResult;                                        		// 0x000D (0x0001) [0x0000000000000000]              
	unsigned char                                      m_eReason;                                        		// 0x000E (0x0001) [0x0000000000000000]              
	unsigned long                                      m_bWasOwner : 1;                                  		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bWasOpposed : 1;                                		// 0x0010 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      m_bHideContactStanding : 1;                       		// 0x0010 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      m_bHideOrganisationStanding : 1;                  		// 0x0010 (0x0004) [0x0000000000000000] [0x00000008] 
};

// ScriptStruct APBGame.cCharacterScorer.ScorerKillInfo
// 0x000C
struct FScorerKillInfo
{
	int                                                m_nCharacterUID;                                  		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned char                                      m_eKillInfoType;                                  		// 0x0004 (0x0001) [0x0000000000000000]              
	int                                                m_nInventoryItemTypeID;                           		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cCharacterScorer.ScorerKillNotificationPacket
// 0x01E4
struct FScorerKillNotificationPacket
{
	struct FScorerKillInfo                             m_KillInfo[ 0x28 ];                               		// 0x0000 (0x01E0) [0x0000000000000000]              
	int                                                m_nCount;                                         		// 0x01E0 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cCharacterScorer.ContactStandingPacket
// 0x000A
struct FContactStandingPacket
{
	int                                                m_nContactID;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                m_nStanding;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
	unsigned char                                      m_nLevel;                                         		// 0x0008 (0x0001) [0x0000000000000000]              
	unsigned char                                      m_nMaxLevel;                                      		// 0x0009 (0x0001) [0x0000000000000000]              
};

// ScriptStruct APBGame.cCharacterScorer.CharacterStats
// 0x0024
struct FCharacterStats
{
	float                                              m_fTotalTimeInSeconds;                            		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                m_nTotalKills;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              m_fSessionTimeInSeconds;                          		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                m_nSessionKills;                                  		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                m_nSessionMissionWon;                             		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                m_nSessionMissionLost;                            		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                m_nSessionPlayerArrested;                         		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                m_nSessionPlayerFreed;                            		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                m_nSessionMedals;                                 		// 0x0020 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cCharacterScorer.HeatDebugInfo
// 0x0030
struct FHeatDebugInfo
{
	float                                              fServerTimestamp;                                 		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                nHeatAction;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                nWitnessableCrime;                                		// 0x0008 (0x0004) [0x0000000000000000]              
	unsigned char                                      eReason;                                          		// 0x000C (0x0001) [0x0000000000000000]              
	int                                                nCharacterUID;                                    		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                nParamX;                                          		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                nParamY;                                          		// 0x0018 (0x0004) [0x0000000000000000]              
	float                                              fPointsChange;                                    		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                nLevelChangeMin;                                  		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                nLevelChangeMax;                                  		// 0x0024 (0x0004) [0x0000000000000000]              
	float                                              fNewHeatAmount;                                   		// 0x0028 (0x0004) [0x0000000000000000]              
	int                                                nNewHeatLevel;                                    		// 0x002C (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cCharacterScorer.ActiveCrimeDebugInfo
// 0x0018
struct FActiveCrimeDebugInfo
{
	int                                                m_nUniqueID;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              m_fTimestamp;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              m_fExpiryTime;                                    		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                m_nWitnessableCrime;                              		// 0x000C (0x0004) [0x0000000000000000]              
	unsigned char                                      m_eCSA;                                           		// 0x0010 (0x0001) [0x0000000000000000]              
	unsigned char                                      m_nEnforcersWitnessed;                            		// 0x0011 (0x0001) [0x0000000000000000]              
	unsigned char                                      m_nNPCsWitnessed;                                 		// 0x0012 (0x0001) [0x0000000000000000]              
	unsigned long                                      m_bInProgress : 1;                                		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bRemove : 1;                                    		// 0x0014 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct APBGame.cPlayerControllerTypes.MusicStudioDataChunk
// 0x00F8
struct UcPlayerControllerTypes_FMusicStudioDataChunk
{
	unsigned char                                      Data[ 0xF8 ];                                     		// 0x0000 (0x00F8) [0x0000000000000000]              
};

// ScriptStruct APBGame.cPlayerControllerTypes.DataChunk
// 0x00F8
struct FDataChunk
{
	unsigned char                                      Data[ 0xF8 ];                                     		// 0x0000 (0x00F8) [0x0000000000000000]              
};

// ScriptStruct APBGame.cPlayerControllerTypes.UploadItemCustomisationInfo
// 0x0028
struct FUploadItemCustomisationInfo
{
	struct FGuid                                       nGuid;                                            		// 0x0000 (0x0010) [0x0000000000000000]              
	int                                                eCategory;                                        		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                nDataSize;                                        		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                nCurrentChunk;                                    		// 0x0018 (0x0004) [0x0000000000000000]              
	TArray< unsigned char >                            aData;                                            		// 0x001C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct APBGame.cAPBPlayerController.PackedHitNormal
// 0x0004
struct FPackedHitNormal
{
	unsigned char                                      X;                                                		// 0x0000 (0x0001) [0x0000000000000000]              
	unsigned char                                      Y;                                                		// 0x0001 (0x0001) [0x0000000000000000]              
	unsigned char                                      Z;                                                		// 0x0002 (0x0001) [0x0000000000000000]              
	unsigned char                                      m_vfxMaterialIndex;                               		// 0x0003 (0x0001) [0x0000000000000000]              
};

// ScriptStruct APBGame.cAPBPlayerController.SharedHitData
// 0x0034
struct FSharedHitData
{
	struct FVector                                     m_HitStart;                                       		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FVector                                     m_HitEnd;                                         		// 0x000C (0x000C) [0x0000000000000000]              
	struct FPackedHitNormal                            m_HitNormal;                                      		// 0x0018 (0x0004) [0x0000000000000000]              
	class AcAPBPawn*                                   m_HitInstigator;                                  		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                m_AudioMaterialIndex;                             		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                m_nInventoryItemType;                             		// 0x0024 (0x0004) [0x0000000000000000]              
	int                                                m_nItemAttachementVisual;                         		// 0x0028 (0x0004) [0x0000000000000000]              
	unsigned char                                      m_nHealthDamageAmount;                            		// 0x002C (0x0001) [0x0000000000000000]              
	unsigned char                                      m_nStaminaDamageAmount;                           		// 0x002D (0x0001) [0x0000000000000000]              
	unsigned char                                      m_nBurstShots;                                    		// 0x002E (0x0001) [0x0000000000000000]              
	unsigned long                                      m_bTracer : 1;                                    		// 0x0030 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bHitTarget : 1;                                 		// 0x0030 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      m_bDynamic : 1;                                   		// 0x0030 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      m_bFirstShot : 1;                                 		// 0x0030 (0x0004) [0x0000000000000000] [0x00000008] 
};

// ScriptStruct APBGame.cAPBPlayerController.DynamicHitData
// 0x0010
struct FDynamicHitData
{
	struct FVector                                     m_HitOffset;                                      		// 0x0000 (0x000C) [0x0000000000000000]              
	class AActor*                                      m_HitTarget;                                      		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cAPBPlayerController.HitNotificationRecord
// 0x0050
struct FHitNotificationRecord
{
	int                                                m_ShotID;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              m_TimeStamp;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              m_Priority;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
	struct FSharedHitData                              m_HitData;                                        		// 0x000C (0x0034) [0x0000000000000000]              
	struct FDynamicHitData                             m_DynamicData;                                    		// 0x0040 (0x0010) [0x0000000000000000]              
};

// ScriptStruct APBGame.cAPBPlayerController.ContactPair
// 0x0014
struct FContactPair
{
	struct FGuid                                       m_nGuid;                                          		// 0x0000 (0x0010) [0x0000000000000000]              
	int                                                m_nStanding;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cAPBPlayerController.ClientItemOperationInfo
// 0x0014
struct FClientItemOperationInfo
{
	unsigned long                                      bInUse : 1;                                       		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FPointer                                    pUserData;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	TArray< unsigned char >                            aData;                                            		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct APBGame.cAPBPlayerController.RespawnInfo
// 0x0060
struct FRespawnInfo
{
	int                                                m_nKillerCharacterUID;                            		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                m_nInventoryItemTypeID;                           		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                m_nWeaponFnModIDs[ 0x3 ];                         		// 0x0008 (0x000C) [0x0000000000000000]              
	int                                                m_nCharacterFnModIDs[ 0x4 ];                      		// 0x0014 (0x0010) [0x0000000000000000]              
	unsigned long                                      m_bSuicide : 1;                                   		// 0x0024 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bSameSideKill : 1;                              		// 0x0024 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      m_bArrested : 1;                                  		// 0x0024 (0x0004) [0x0000000000000000] [0x00000004] 
	int                                                nRespawnDelay;                                    		// 0x0028 (0x0004) [0x0000000000000000]              
	int                                                nTransitionDelay;                                 		// 0x002C (0x0004) [0x0000000000000000]              
	struct FVector                                     vMissionSpawnZoneLocation;                        		// 0x0030 (0x000C) [0x0000000000000000]              
	struct FRotator                                    vMissionSpawnZoneRotation;                        		// 0x003C (0x000C) [0x0000000000000000]              
	struct FVector                                     vNormalSpawnZoneLocation;                         		// 0x0048 (0x000C) [0x0000000000000000]              
	struct FRotator                                    vNormalSpawnZoneRotation;                         		// 0x0054 (0x000C) [0x0000000000000000]              
};

// ScriptStruct APBGame.cAPBPlayerController.PredictedADAInfo
// 0x0018
struct FPredictedADAInfo
{
	float                                              m_TimeStamp;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	class AcAnimationDrivenTrigger*                    m_pTrigger;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	class UcAnimationDescriptor*                       m_pAnimation;                                     		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              m_ClientLocationX;                                		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              m_ClientLocationY;                                		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              m_ClientLocationZ;                                		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cAPBPlayerController.MusicNameInfo
// 0x0024
struct FMusicNameInfo
{
	struct FString                                     m_sTrackName;                                     		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sArtistName;                                    		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sReleaseName;                                   		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct APBGame.cAPBPlayerController.MusicPlaybackInfo
// 0x002C
struct FMusicPlaybackInfo
{
	int                                                m_nOwnerCharacterUID;                             		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                m_nTrackGID;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FGuid                                       m_MusicStudioSongGuid;                            		// 0x0008 (0x0010) [0x0000000000000000]              
	int                                                m_nInitialPlaybackServerTime;                     		// 0x0018 (0x0004) [0x0000000000000000]              
	float                                              m_fStyleVector0;                                  		// 0x001C (0x0004) [0x0000000000000000]              
	float                                              m_fStyleVector1;                                  		// 0x0020 (0x0004) [0x0000000000000000]              
	float                                              m_fStyleVector2;                                  		// 0x0024 (0x0004) [0x0000000000000000]              
	float                                              m_fStyleVector3;                                  		// 0x0028 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cAPBPlayerController.ReticuleLinePickInfo
// 0x0010
struct FReticuleLinePickInfo
{
	class AActor*                                      m_Actor;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FVector                                     m_Location;                                       		// 0x0004 (0x000C) [0x0000000000000000]              
};

// ScriptStruct APBGame.cAPBPlayerController.FXMaterialImpact
// 0x00F0
struct FFXMaterialImpact
{
	unsigned char                                      m_eFXMaterialImpact;                              		// 0x0000 (0x0001) [0x0000000000000000]              
	struct FString                                     m_sMaterialDescription;                           		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              m_fHardnessLower;                                 		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              m_fHardnessUpper;                                 		// 0x0014 (0x0004) [0x0000000000000000]              
	struct FString                                     m_sHeavyImpactVFX;                                		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sHeavyExitVFX;                                  		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sMediumImpactVFX;                               		// 0x0030 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sMediumExitVFX;                                 		// 0x003C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sSmallImpactVFX;                                		// 0x0048 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sSmallExitVFX;                                  		// 0x0054 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sShotImpactVFX;                                 		// 0x0060 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sNonLethalImpactVFX;                            		// 0x006C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sMeleeImpactVFX;                                		// 0x0078 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sExplosiveImpactVFX;                            		// 0x0084 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sRBCollisionSmallVFX;                           		// 0x0090 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sRBCollisionVFX;                                		// 0x009C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sRBCollisionLargeVFX;                           		// 0x00A8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sRBScrapeVFX;                                   		// 0x00B4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sWheelSmokeVFX;                                 		// 0x00C0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sLightFootfallVFX;                              		// 0x00CC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sMediumFootfallVFX;                             		// 0x00D8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sHeavyFootfallVFX;                              		// 0x00E4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct APBGame.cAPBPlayerController.SpawnConstant
// 0x0008
struct FSpawnConstant
{
	unsigned char                                      m_eSpawnConstant;                                 		// 0x0000 (0x0001) [0x0000000000000000]              
	float                                              m_fValue;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cAPBPlayerController.FeedbackMessage
// 0x0014
struct FFeedbackMessage
{
	unsigned char                                      m_eFeedbackMessage;                               		// 0x0000 (0x0001) [0x0000000000000000]              
	struct FString                                     m_sFeedbackMessage;                               		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                m_nSecondaryKey;                                  		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cAPBPlayerController.CharacterData
// 0x006C
struct FCharacterData
{
	int                                                m_aCharacterFnMods[ 0x4 ];                        		// 0x0000 (0x0010) [0x0000000000000000]              
	int                                                m_nWeaponPrimary;                                 		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                m_aWeaponPrimaryFnMods[ 0x3 ];                    		// 0x0014 (0x000C) [0x0000000000000000]              
	int                                                m_nWeaponSecondary;                               		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                m_aWeaponSecondaryFnMods[ 0x3 ];                  		// 0x0024 (0x000C) [0x0000000000000000]              
	int                                                m_nWeaponGrenade;                                 		// 0x0030 (0x0004) [0x0000000000000000]              
	struct FString                                     m_sGraffitiSymbolName;                            		// 0x0034 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sThemeName;                                     		// 0x0040 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FGuid                                       m_nGraffitiCustomisationGuid;                     		// 0x004C (0x0010) [0x0000000000000000]              
	struct FGuid                                       m_nThemeGuid;                                     		// 0x005C (0x0010) [0x0000000000000000]              
};

// ScriptStruct APBGame.cAPBPlayerController.VehicleData
// 0x0030
struct FVehicleData
{
	int                                                m_nBaseVehicleType;                               		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     m_sVehicleName;                                   		// 0x0004 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                m_aVehicleFnMods[ 0x4 ];                          		// 0x0010 (0x0010) [0x0000000000000000]              
	struct FGuid                                       m_nVehicleCustomisationGuid;                      		// 0x0020 (0x0010) [0x0000000000000000]              
};

// ScriptStruct APBGame.cAPBPlayerController.CharacterRolesData
// 0x0063
struct FCharacterRolesData
{
	unsigned char                                      m_vRoleMilestones[ 0x63 ];                        		// 0x0000 (0x0063) [0x0000000000000000]              
};

// ScriptStruct APBGame.cAPBPlayerController.ContactPairPacket
// 0x0064
struct FContactPairPacket
{
	struct FContactPair                                m_aUnlockedContacts[ 0x5 ];                       		// 0x0000 (0x0064) [0x0000000000000000]              
};

// ScriptStruct APBGame.cGroupTypes.SidePacket
// 0x0063
struct FSidePacket
{
	int                                                m_nCharacterUIDs[ 0x14 ];                         		// 0x0000 (0x0050) [0x0000000000000000]              
	int                                                m_nSideID;                                        		// 0x0050 (0x0004) [0x0000000000000000]              
	int                                                m_nOppositionID;                                  		// 0x0054 (0x0004) [0x0000000000000000]              
	int                                                m_nLeaderUID;                                     		// 0x0058 (0x0004) [0x0000000000000000]              
	int                                                m_nMissionID;                                     		// 0x005C (0x0004) [0x0000000000000000]              
	unsigned char                                      m_eFaction;                                       		// 0x0060 (0x0001) [0x0000000000000000]              
	unsigned char                                      m_nCollisionGroupID;                              		// 0x0061 (0x0001) [0x0000000000000000]              
	unsigned char                                      m_nNumMembers;                                    		// 0x0062 (0x0001) [0x0000000000000000]              
};

// ScriptStruct APBGame.cGroupTypes.SideMember
// 0x0018
struct FSideMember
{
	int                                                m_nCharacterUID;                                  		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FVector                                     m_LocationUnreliable;                             		// 0x0004 (0x000C) [0x0000000000000000]              
	unsigned char                                      m_nHealthUnreliable;                              		// 0x0010 (0x0001) [0x0000000000000000]              
	unsigned char                                      m_eStatus;                                        		// 0x0011 (0x0001) [0x0000000000000000]              
	unsigned long                                      m_bHoldingTaskItem : 1;                           		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct APBGame.cGroupTypes.UnreliableDataPacket
// 0x0174
struct FUnreliableDataPacket
{
	int                                                m_nCharacterUIDs[ 0x14 ];                         		// 0x0000 (0x0050) [0x0000000000000000]              
	struct FVector                                     m_Locations[ 0x14 ];                              		// 0x0050 (0x00F0) [0x0000000000000000]              
	unsigned char                                      m_nHealths[ 0x14 ];                               		// 0x0140 (0x0014) [0x0000000000000000]              
	unsigned char                                      m_eStatuses[ 0x14 ];                              		// 0x0154 (0x0014) [0x0000000000000000]              
	int                                                m_nIdentifier;                                    		// 0x0168 (0x0004) [0x0000000000000000]              
	unsigned char                                      m_nNumMembers;                                    		// 0x016C (0x0001) [0x0000000000000000]              
	unsigned char                                      m_nHoldingTaskItems;                              		// 0x016D (0x0001) [0x0000000000000000]              
	int                                                m_nChecksum;                                      		// 0x0170 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cGroupTypes.GroupPacket
// 0x0083
struct FGroupPacket
{
	int                                                m_nCharacterUIDs[ 0x14 ];                         		// 0x0000 (0x0050) [0x0000000000000000]              
	unsigned char                                      m_nHealths[ 0x14 ];                               		// 0x0050 (0x0014) [0x0000000000000000]              
	unsigned char                                      m_eStatuses[ 0x14 ];                              		// 0x0064 (0x0014) [0x0000000000000000]              
	int                                                m_nIdentifier;                                    		// 0x0078 (0x0004) [0x0000000000000000]              
	int                                                m_nLeaderUID;                                     		// 0x007C (0x0004) [0x0000000000000000]              
	unsigned char                                      m_eFaction;                                       		// 0x0080 (0x0001) [0x0000000000000000]              
	unsigned char                                      m_nCollisionGroupID;                              		// 0x0081 (0x0001) [0x0000000000000000]              
	unsigned char                                      m_nNumMembers;                                    		// 0x0082 (0x0001) [0x0000000000000000]              
};

// ScriptStruct APBGame.cGroupTypes.GroupMember
// 0x0018
struct FGroupMember
{
	int                                                m_nCharacterUID;                                  		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FVector                                     m_LocationUnreliable;                             		// 0x0004 (0x000C) [0x0000000000000000]              
	unsigned char                                      m_nHealthUnreliable;                              		// 0x0010 (0x0001) [0x0000000000000000]              
	unsigned char                                      m_eStatus;                                        		// 0x0011 (0x0001) [0x0000000000000000]              
	unsigned long                                      m_bHoldingTaskItem : 1;                           		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct APBGame.cGameInfoCache.CharacterInfoMultiPacket
// 0x0198
struct FCharacterInfoMultiPacket
{
	unsigned char                                      m_eDataType;                                      		// 0x0000 (0x0001) [0x0000000000000000]              
	int                                                m_nCount;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                m_nCharacterUIDs[ 0x32 ];                         		// 0x0008 (0x00C8) [0x0000000000000000]              
	int                                                m_nData[ 0x32 ];                                  		// 0x00D0 (0x00C8) [0x0000000000000000]              
};

// ScriptStruct APBGame.cGameInfoCache.CharacterInfoPacket
// 0x002D
struct FCharacterInfoPacket
{
	int                                                m_nAccountUID;                                    		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                m_nCharacterUID;                                  		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                m_nClanUID;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                m_nGroupID;                                       		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                m_nSideID;                                        		// 0x0010 (0x0004) [0x0000000000000000]              
	struct FString                                     m_sCharacterName;                                 		// 0x0014 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sClanName;                                      		// 0x0020 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	unsigned char                                      m_eFaction;                                       		// 0x002C (0x0001) [0x0000000000000000]              
};

// ScriptStruct APBGame.cHUDMarkerManager.HUDMarkerData
// 0x0020
struct FHUDMarkerData
{
	class AActor*                                      pLinkedActor;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FVector                                     Location;                                         		// 0x0004 (0x000C) [0x0000000000000000]              
	unsigned char                                      eOffsetOverride;                                  		// 0x0010 (0x0001) [0x0000000000000000]              
	unsigned char                                      eCSAAutoRouteData;                                		// 0x0011 (0x0001) [0x0000000000000000]              
	unsigned char                                      eType;                                            		// 0x0012 (0x0001) [0x0000000000000000]              
	unsigned char                                      eState;                                           		// 0x0013 (0x0001) [0x0000000000000000]              
	unsigned long                                      bIsBeingModified : 1;                             		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                nUserData;                                        		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                nUserData2;                                       		// 0x001C (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.GolemTextureBaker.BlockTransform
// 0x0038
struct FBlockTransform
{
	struct FVector                                     m_SourceOrigin;                                   		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FVector                                     m_SourceEnd;                                      		// 0x000C (0x000C) [0x0000000000000000]              
	struct FVector                                     m_TargetOrigin;                                   		// 0x0018 (0x000C) [0x0000000000000000]              
	struct FVector                                     m_TargetEnd;                                      		// 0x0024 (0x000C) [0x0000000000000000]              
	int                                                m_nSourceID;                                      		// 0x0030 (0x0004) [0x0000000000000000]              
	int                                                m_nBlock;                                         		// 0x0034 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.GolemTextureBaker.TextureTransform
// 0x000C
struct FTextureTransform
{
	TArray< struct FBlockTransform >                   aBlocks;                                          		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct APBGame.cAPBMultiLaneRoute.cAPBMultiLaneRouteSection
// 0x0017
struct FcAPBMultiLaneRouteSection
{
	class URWTechReachSpec*                            m_aLaneEdges[ 0x5 ];                              		// 0x0000 (0x0014) [0x0000000000000000]              
	unsigned char                                      nNumLanes;                                        		// 0x0014 (0x0001) [0x0000000000000000]              
	unsigned char                                      nDefaultLane;                                     		// 0x0015 (0x0001) [0x0000000000000000]              
	unsigned char                                      eTurnType;                                        		// 0x0016 (0x0001) [0x0000000000000000]              
};

// ScriptStruct APBGame.cAPBProjectile.GrenadeBounceInfo
// 0x000C
struct FGrenadeBounceInfo
{
	int                                                m_nBounceID;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              m_fSpeed;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                m_nMaterial;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cAPBVehicle.VehicleStateInfo
// 0x0034
struct FVehicleStateInfo
{
	float                                              fTimeStamp;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FVector                                     vPos;                                             		// 0x0004 (0x000C) [0x0000000000000000]              
	struct FRotator                                    tRot;                                             		// 0x0010 (0x000C) [0x0000000000000000]              
	struct FVector                                     vLinVel;                                          		// 0x001C (0x000C) [0x0000000000000000]              
	struct FVector                                     vAngVel;                                          		// 0x0028 (0x000C) [0x0000000000000000]              
};

// ScriptStruct APBGame.cAPBVehicle.VehicleStateDelta
// 0x0038
struct FVehicleStateDelta
{
	float                                              fTimeStamp;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              fTimeDelta;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FVector                                     vPosDelta;                                        		// 0x0008 (0x000C) [0x0000000000000000]              
	struct FRotator                                    tRotDelta;                                        		// 0x0014 (0x000C) [0x0000000000000000]              
	struct FVector                                     vLinVelDelta;                                     		// 0x0020 (0x000C) [0x0000000000000000]              
	struct FVector                                     vAngVelDelta;                                     		// 0x002C (0x000C) [0x0000000000000000]              
};

// ScriptStruct APBGame.cAsyncPackageNotify.AsyncObjectData
// 0x000C
struct FAsyncObjectData
{
	struct FName                                       ObjectName;                                       		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FPointer                                    ppOutputObject;                                   		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cAudioDisplayPoint.DisplayPointMusicNameInfo
// 0x0024
struct FDisplayPointMusicNameInfo
{
	struct FString                                     m_sTrackName;                                     		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sArtistName;                                    		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sReleaseName;                                   		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct APBGame.cAudioDisplayPoint.DisplayPointMusicPlaybackInfo
// 0x002C
struct FDisplayPointMusicPlaybackInfo
{
	int                                                m_nOwnerCharacterUID;                             		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                m_nTrackGID;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FGuid                                       m_MusicStudioSongGuid;                            		// 0x0008 (0x0010) [0x0000000000000000]              
	int                                                m_nInitialPlaybackServerTime;                     		// 0x0018 (0x0004) [0x0000000000000000]              
	float                                              m_fStyleVector0;                                  		// 0x001C (0x0004) [0x0000000000000000]              
	float                                              m_fStyleVector1;                                  		// 0x0020 (0x0004) [0x0000000000000000]              
	float                                              m_fStyleVector2;                                  		// 0x0024 (0x0004) [0x0000000000000000]              
	float                                              m_fStyleVector3;                                  		// 0x0028 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cAudioManager.CollisionDebugInfo
// 0x0048
struct FCollisionDebugInfo
{
	int                                                m_nIdentifier;                                    		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FVector                                     m_vNormal;                                        		// 0x0004 (0x000C) [0x0000000000000000]              
	float                                              m_fPenetration;                                   		// 0x0010 (0x0004) [0x0000000000000000]              
	struct FVector                                     m_vPosition;                                      		// 0x0014 (0x000C) [0x0000000000000000]              
	struct FVector                                     m_vVelocityOur;                                   		// 0x0020 (0x000C) [0x0000000000000000]              
	struct FVector                                     m_vVelocityOther;                                 		// 0x002C (0x000C) [0x0000000000000000]              
	int                                                m_nMaterialOur;                                   		// 0x0038 (0x0004) [0x0000000000000000]              
	int                                                m_nMaterialOther;                                 		// 0x003C (0x0004) [0x0000000000000000]              
	float                                              m_fLastTimeUsed;                                  		// 0x0040 (0x0004) [0x0000000000000000]              
	float                                              m_fPriority;                                      		// 0x0044 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cBlobCustomisationInfo.BlobChunk
// 0x00FE
struct FBlobChunk
{
	int                                                nVersion;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned char                                      Data[ 0xFA ];                                     		// 0x0004 (0x00FA) [0x0000000000000000]              
};

// ScriptStruct APBGame.cCCShoppingCart.CartItem
// 0x0024
struct FCartItem
{
	int                                                eType;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FPointer                                    pPurchaseElement;                                 		// 0x0004 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	int                                                nCost;                                            		// 0x0008 (0x0004) [0x0000000000000000]              
	TArray< class UcAttribute* >                       aAttributes;                                      		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UcUIListProvider*                            pArrayListProvider;                               		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                nOldArrayIndex;                                   		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                nCurArrayIndex;                                   		// 0x0020 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cCCShoppingCart.CC_PurchaseElement
// 0x0020
struct FCC_PurchaseElement
{
	int                                                m_eCC_PurchaseElement;                            		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     m_sAttributes;                                    		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sDisplayName;                                   		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                m_nCost;                                          		// 0x001C (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cCCShoppingCart.CC_ArrayPurchaseElement
// 0x0018
struct FCC_ArrayPurchaseElement
{
	int                                                m_eCC_PurchaseElement;                            		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                m_nAddCost;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                m_nDeleteCost;                                    		// 0x0008 (0x0004) [0x0000000000000000]              
	struct FString                                     m_sAttributeArray;                                		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct APBGame.cCustomisedAssetCacheEntry.NamedBinaryData
// 0x0018
struct FNamedBinaryData
{
	struct FString                                     Name;                                             		// 0x0000 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	TArray< unsigned char >                            Data;                                             		// 0x000C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct APBGame.cCharacterRequest.AudioCustomisationSwitch
// 0x0008
struct FAudioCustomisationSwitch
{
	int                                                m_nGroup;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                m_nValue;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cCharacterTextureBaker.CharacterTextureBuildData
// 0x0038
struct FCharacterTextureBuildData
{
	unsigned char                                      eBuildState;                                      		// 0x0000 (0x0001) [0x0000000000000000]              
	int                                                nPartIndex;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                nStateIndex;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
	unsigned char                                      eTextureType;                                     		// 0x000C (0x0001) [0x0000000000000000]              
	class UGolemDescriptor*                            pDescriptor;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
	class UGolemSkeletalMesh*                          pSkeletalMesh;                                    		// 0x0014 (0x0004) [0x0000000000000000]              
	class UObject*                                     pOuter;                                           		// 0x0018 (0x0004) [0x0000000000000000]              
	struct FPointer                                    pOutput;                                          		// 0x001C (0x0004) [0x0000000000001000]              ( CPF_Native )
	class UAPBStudioCharacter*                         pStudio;                                          		// 0x0020 (0x0004) [0x0000000000000000]              
	unsigned long                                      bInGame : 1;                                      		// 0x0024 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                nIgnoreDecalLayer;                                		// 0x0028 (0x0004) [0x0000000000000000]              
	int                                                nIgnoreDecalPart;                                 		// 0x002C (0x0004) [0x0000000000000000]              
	unsigned long                                      bGenerateMipLevels : 1;                           		// 0x0030 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              fStudioFootScale;                                 		// 0x0034 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cCheckpoint.tContainedPlayerInfo
// 0x0008
struct FtContainedPlayerInfo
{
	class AcAPBPawn*                                   m_pPawn;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	class AcAPBPlayerController*                       m_pPlayerController;                              		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cCheckpoint.tCheckpointPlayerInfo
// 0x001C
struct FtCheckpointPlayerInfo
{
	class AActor*                                      m_pActor;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	class AcAPBPlayerController*                       m_pController;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              m_fTriggerTime;                                   		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              m_fTimeStart;                                     		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              m_fFillRate;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              m_fBaseTimeInterval;                              		// 0x0014 (0x0004) [0x0000000000000000]              
	float                                              m_fCheckpointProgressSeconds;                     		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cClientSetupTypeHelper.PedestrianTempSetup
// 0x0010
struct FPedestrianTempSetup
{
	unsigned char                                      m_ePedestrianTempSetup;                           		// 0x0000 (0x0001) [0x0000000000000000]              
	struct FString                                     m_sTempSetupInfo;                                 		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct APBGame.cClothingCustomisationInfo.ClothingItemCategory
// 0x0008
struct FClothingItemCategory
{
	int                                                m_eClothingItemCategory;                          		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                m_eInventoryItemInfraCategory;                    		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cCustomisationSettings.SymbolPrimitive
// 0x000C
struct FSymbolPrimitive
{
	struct FPointer                                    pPrimitiveType;                                   		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FPointer                                    pInventoryItemType;                               		// 0x0004 (0x0004) [0x0000000000000000]              
	class UTexture2D*                                  pTexture;                                         		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cCustomisationSettings.PrimitiveUnlockItemType
// 0x001C
struct FPrimitiveUnlockItemType
{
	int                                                m_eInventoryItemType;                             		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     m_sResource;                                      		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      m_eType;                                          		// 0x0010 (0x0001) [0x0000000000000000]              
	int                                                m_nLegacyData;                                    		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                m_nSecondaryKey;                                  		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cCustomisationSettings.FacialHairRandomGeneration
// 0x0008
struct FFacialHairRandomGeneration
{
	unsigned char                                      m_eFacialHairRandomGeneration;                    		// 0x0000 (0x0001) [0x0000000000000000]              
	float                                              m_fProbability;                                   		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cCustomisationSettings.ColourLookup
// 0x0014
struct FColourLookup
{
	int                                                m_nNumRows;                                       		// 0x0000 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                m_nNumCols;                                       		// 0x0004 (0x0004) [0x0000000000004000]              ( CPF_Config )
	TArray< struct FColor >                            m_aColours;                                       		// 0x0008 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
};

// ScriptStruct APBGame.cDebugTracerManager.Tracer
// 0x0020
struct FTracer
{
	struct FVector                                     m_vStart;                                         		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FVector                                     m_vEnd;                                           		// 0x000C (0x000C) [0x0000000000000000]              
	float                                              m_fTime;                                          		// 0x0018 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bHitTarget : 1;                                 		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct APBGame.cDisplayPointManager.PropagatedDisplayPoint
// 0x0010
struct FPropagatedDisplayPoint
{
	class AActor*                                      DisplayPoint;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                nCharacterOwnerID;                                		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                nStartTime;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                nOwnershipDuration;                               		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cDisplayPointManager.DisplayPointData
// 0x003A
struct FDisplayPointData
{
	struct FGuid                                       DisplayPointGUID;                                 		// 0x0000 (0x0010) [0x0000000000000000]              
	struct FString                                     sCharacterOwnerName;                              		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                nCharacterOwnerID;                                		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                nStartTime;                                       		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                nOwnershipDuration;                               		// 0x0024 (0x0004) [0x0000000000000000]              
	int                                                nDisplayPointAcheivementID;                       		// 0x0028 (0x0004) [0x0000000000000000]              
	int                                                nContextValue;                                    		// 0x002C (0x0004) [0x0000000000000000]              
	int                                                nCustomDataSize;                                  		// 0x0030 (0x0004) [0x0000000000000000]              
	int                                                nCustomDataType;                                  		// 0x0034 (0x0004) [0x0000000000000000]              
	unsigned char                                      eCharacterFaction;                                		// 0x0038 (0x0001) [0x0000000000000000]              
	unsigned char                                      eInteractionType;                                 		// 0x0039 (0x0001) [0x0000000000000000]              
};

// ScriptStruct APBGame.cDistrictBlock.TaskTargetPoolEntry
// 0x0008
struct FTaskTargetPoolEntry
{
	class AActor*                                      m_Actor;                                          		// 0x0000 (0x0004) [0x0000000000100000]              
	unsigned long                                      m_bReserved : 1;                                  		// 0x0004 (0x0004) [0x0000000000100000] [0x00000001] 
	unsigned long                                      m_bPreferred : 1;                                 		// 0x0004 (0x0004) [0x0000000000100000] [0x00000002] 
};

// ScriptStruct APBGame.cDistrictBlock.TaskTargetPool
// 0x0014
struct FTaskTargetPool
{
	TArray< struct FTaskTargetPoolEntry >              m_Storage;                                        		// 0x0000 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                m_nFreeCount;                                     		// 0x000C (0x0004) [0x0000000000100000]              
	int                                                m_nPreferredCount;                                		// 0x0010 (0x0004) [0x0000000000100000]              
};

// ScriptStruct APBGame.cDistrictBlock.DistrictBlock
// 0x0044
struct FDistrictBlock
{
	int                                                m_eDistrictBlock;                                 		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                m_eDistrict;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FString                                     m_sDisplayName;                                   		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sDescription;                                   		// 0x0014 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                m_Themes[ 0x8 ];                                  		// 0x0020 (0x0020) [0x0000000000000000]              
	int                                                m_nSecondaryKey;                                  		// 0x0040 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cReactionList.NPCPedestrianAnimation
// 0x0010
struct FNPCPedestrianAnimation
{
	int                                                m_eAnimationCategory;                             		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     m_sNPCPedestrianAnimation;                        		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct APBGame.cReactionList.NPCAnimationCategory
// 0x0004
struct FNPCAnimationCategory
{
	int                                                m_eNPCAnimationCategory;                          		// 0x0000 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cDriverReactionList.NPCVehicleAnimation
// 0x0014
struct FNPCVehicleAnimation
{
	int                                                m_eAnimationCategory;                             		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                m_eVehicleNPCInsideAnimationSet;                  		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FString                                     m_sNPCVehicleAnimation;                           		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct APBGame.cSDDWeapon.WeaponType
// 0x00AC
struct FWeaponType
{
	int                                                m_eWeaponType;                                    		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                m_nHealthDamage[ 0x2 ];                           		// 0x0004 (0x0008) [0x0000000000000000]              
	int                                                m_nStaminaDamage[ 0x2 ];                          		// 0x000C (0x0008) [0x0000000000000000]              
	unsigned long                                      m_bLessLethal : 1;                                		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                m_nMagazineCapacity;                              		// 0x0018 (0x0004) [0x0000000000000000]              
	float                                              m_FireInterval[ 0x2 ];                            		// 0x001C (0x0008) [0x0000000000000000]              
	unsigned long                                      m_bCanSprint : 1;                                 		// 0x0024 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              m_fEquipTime;                                     		// 0x0028 (0x0004) [0x0000000000000000]              
	float                                              m_fHolsterTime;                                   		// 0x002C (0x0004) [0x0000000000000000]              
	float                                              m_fReloadTime;                                    		// 0x0030 (0x0004) [0x0000000000000000]              
	int                                                m_eAmmoCategory;                                  		// 0x0034 (0x0004) [0x0000000000000000]              
	int                                                m_nAmmoPoolCapacity;                              		// 0x0038 (0x0004) [0x0000000000000000]              
	unsigned char                                      m_eEncumbrance;                                   		// 0x003C (0x0001) [0x0000000000000000]              
	unsigned long                                      m_bEquipInVehicle : 1;                            		// 0x0040 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned char                                      m_eClass;                                         		// 0x0044 (0x0001) [0x0000000000000000]              
	unsigned char                                      m_eReticule;                                      		// 0x0045 (0x0001) [0x0000000000000000]              
	float                                              m_fHardDamageModifier;                            		// 0x0048 (0x0004) [0x0000000000000000]              
	float                                              m_fSoftDamageModifier;                            		// 0x004C (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bIsResuppliable : 1;                            		// 0x0050 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bLoopedReload : 1;                              		// 0x0050 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned char                                      m_eWeaponFiringState;                             		// 0x0054 (0x0001) [0x0000000000000000]              
	int                                                m_eWeaponProjectile;                              		// 0x0058 (0x0004) [0x0000000000000000]              
	int                                                m_nBurstShots;                                    		// 0x005C (0x0004) [0x0000000000000000]              
	float                                              m_fBurstInterval;                                 		// 0x0060 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bHasReloadEndAnimation : 1;                     		// 0x0064 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bAlwaysPlayReloadEndAnim : 1;                   		// 0x0064 (0x0004) [0x0000000000000000] [0x00000002] 
	float                                              m_fReloadEndAnimDuration;                         		// 0x0068 (0x0004) [0x0000000000000000]              
	int                                                m_nUIHardDamageLevel;                             		// 0x006C (0x0004) [0x0000000000000000]              
	int                                                m_nUISoftDamageLevel;                             		// 0x0070 (0x0004) [0x0000000000000000]              
	int                                                m_nUIStunDamageLevel;                             		// 0x0074 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bForceRagdollDeath : 1;                         		// 0x0078 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              m_fRagdollImpulseScale;                           		// 0x007C (0x0004) [0x0000000000000000]              
	unsigned char                                      m_eNPCFiredEvent;                                 		// 0x0080 (0x0001) [0x0000000000000000]              
	unsigned char                                      m_eNPCHitEvent;                                   		// 0x0081 (0x0001) [0x0000000000000000]              
	int                                                m_nResupplyUnitCost;                              		// 0x0084 (0x0004) [0x0000000000000000]              
	int                                                m_nResupplyChargeDrain;                           		// 0x0088 (0x0004) [0x0000000000000000]              
	int                                                m_nUIRangeLevel;                                  		// 0x008C (0x0004) [0x0000000000000000]              
	float                                              m_fResupplyDelaySecs;                             		// 0x0090 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bWitnessing : 1;                                		// 0x0094 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                m_nMagazineWarningAmount;                         		// 0x0098 (0x0004) [0x0000000000000000]              
	int                                                m_eItemAttachmentVisual;                          		// 0x009C (0x0004) [0x0000000000000000]              
	int                                                m_nUIRateOfFire;                                  		// 0x00A0 (0x0004) [0x0000000000000000]              
	int                                                m_nImpulseStrength;                               		// 0x00A4 (0x0004) [0x0000000000000000]              
	int                                                m_nResupplyUnits;                                 		// 0x00A8 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cSDDWeapon.Explosion
// 0x0058
struct FExplosion
{
	int                                                m_eExplosion;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              m_fGroundZeroRadius;                              		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              m_fExplosionRadius;                               		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                m_nDamage;                                        		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                m_nStunDamage;                                    		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              m_fHardDamageModifier;                            		// 0x0014 (0x0004) [0x0000000000000000]              
	float                                              m_fSoftDamageModifier;                            		// 0x0018 (0x0004) [0x0000000000000000]              
	struct FString                                     m_sVFXAsset;                                      		// 0x001C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                m_eCameraShake;                                   		// 0x0028 (0x0004) [0x0000000000000000]              
	float                                              m_fMinimumDamagePercentage;                       		// 0x002C (0x0004) [0x0000000000000000]              
	struct FString                                     m_sAudioType;                                     		// 0x0030 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	float                                              m_fRagdollRadialImpulse;                          		// 0x003C (0x0004) [0x0000000000000000]              
	float                                              m_fImpulseZMin;                                   		// 0x0040 (0x0004) [0x0000000000000000]              
	float                                              m_fImpulseZMax;                                   		// 0x0044 (0x0004) [0x0000000000000000]              
	unsigned char                                      m_eNPCWorldEvent;                                 		// 0x0048 (0x0001) [0x0000000000000000]              
	struct FString                                     m_sVFXAsset_Airburst;                             		// 0x004C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct APBGame.cSDDWeapon.H2HWeaponType
// 0x0038
struct FH2HWeaponType
{
	int                                                m_eWeaponType;                                    		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              m_AttackDistance;                                 		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              m_AttackArc;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              m_AttackDurations[ 0x3 ];                         		// 0x000C (0x000C) [0x0000000000000000]              
	float                                              m_AttackDelays[ 0x3 ];                            		// 0x0018 (0x000C) [0x0000000000000000]              
	float                                              m_BlockModifier;                                  		// 0x0024 (0x0004) [0x0000000000000000]              
	unsigned char                                      m_eH2HAttackDir[ 0x3 ];                           		// 0x0028 (0x0003) [0x0000000000000000]              
	float                                              m_fStunPeriod;                                    		// 0x002C (0x0004) [0x0000000000000000]              
	float                                              m_fBlockPeriod;                                   		// 0x0030 (0x0004) [0x0000000000000000]              
	float                                              m_fCoolDownPeriod;                                		// 0x0034 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cSDDWeapon.RangedWeaponType
// 0x0070
struct FRangedWeaponType
{
	int                                                m_eWeaponType;                                    		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                m_nMinimumDamagePercentage;                       		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                m_nRaysPerShot;                                   		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              m_RadiusAtTenMetres;                              		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              m_fMaxRange;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              m_RampDistance;                                   		// 0x0014 (0x0004) [0x0000000000000000]              
	float                                              m_CrouchModifier;                                 		// 0x0018 (0x0004) [0x0000000000000000]              
	float                                              m_MovementModifier;                               		// 0x001C (0x0004) [0x0000000000000000]              
	float                                              m_JumpModifier;                                   		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                m_MinNumShots;                                    		// 0x0024 (0x0004) [0x0000000000000000]              
	float                                              m_MaxTimeBetweenShots;                            		// 0x0028 (0x0004) [0x0000000000000000]              
	float                                              m_PerShotModifier;                                		// 0x002C (0x0004) [0x0000000000000000]              
	float                                              m_RecoveryDelay;                                  		// 0x0030 (0x0004) [0x0000000000000000]              
	float                                              m_RecoveryPerSecond;                              		// 0x0034 (0x0004) [0x0000000000000000]              
	float                                              m_OverallShotModifierCap;                         		// 0x0038 (0x0004) [0x0000000000000000]              
	float                                              m_fMarksmenModifier;                              		// 0x003C (0x0004) [0x0000000000000000]              
	float                                              m_fRaySpreadAtTenMetres;                          		// 0x0040 (0x0004) [0x0000000000000000]              
	float                                              m_fLeanModifier;                                  		// 0x0044 (0x0004) [0x0000000000000000]              
	int                                                m_eExplosionType;                                 		// 0x0048 (0x0004) [0x0000000000000000]              
	int                                                m_nTracerFrequency;                               		// 0x004C (0x0004) [0x0000000000000000]              
	float                                              m_fMinimumCrosshairWidth;                         		// 0x0050 (0x0004) [0x0000000000000000]              
	float                                              m_fAccuracyPower;                                 		// 0x0054 (0x0004) [0x0000000000000000]              
	int                                                m_nFreeAmmo;                                      		// 0x0058 (0x0004) [0x0000000000000000]              
	float                                              m_fInVehicleModifier;                             		// 0x005C (0x0004) [0x0000000000000000]              
	float                                              m_fSprintModifier;                                		// 0x0060 (0x0004) [0x0000000000000000]              
	float                                              m_fMarksmanshipFOV4;                              		// 0x0064 (0x0004) [0x0000000000000000]              
	float                                              m_fMarksmanshipFOV16;                             		// 0x0068 (0x0004) [0x0000000000000000]              
	int                                                m_eRecoil;                                        		// 0x006C (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cSDDWeapon.GrenadeWeaponType
// 0x001C
struct FGrenadeWeaponType
{
	int                                                m_eWeaponType;                                    		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                m_eWeaponProjectile;                              		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              m_fPinPullTime;                                   		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              m_fThrowTime;                                     		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              m_fFiringSpeed;                                   		// 0x0010 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bAffectedByGravity : 1;                         		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                m_eRecoil;                                        		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cSDDWeapon.WeaponClass
// 0x0010
struct FWeaponClass
{
	unsigned char                                      m_eWeaponClass;                                   		// 0x0000 (0x0001) [0x0000000000000000]              
	struct FString                                     m_sUnrealClassName;                               		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct APBGame.cSDDWeapon.WeaponProjectile
// 0x0030
struct FWeaponProjectile
{
	int                                                m_eWeaponProjectile;                              		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              m_fFuseDelay;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bImpactDetonated : 1;                           		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bTumble : 1;                                    		// 0x0008 (0x0004) [0x0000000000000000] [0x00000002] 
	struct FString                                     m_sMesh;                                          		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                m_eExplosion;                                     		// 0x0018 (0x0004) [0x0000000000000000]              
	float                                              m_fBounceDamping;                                 		// 0x001C (0x0004) [0x0000000000000000]              
	float                                              m_fArmingTimer;                                   		// 0x0020 (0x0004) [0x0000000000000000]              
	struct FString                                     m_sTrailVFX;                                      		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct APBGame.cSDDWeapon.AmmoCategory
// 0x0060
struct FAmmoCategory
{
	int                                                m_eAmmoCategory;                                  		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                m_nCapacity;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                m_nGiftedAmount;                                  		// 0x0008 (0x0004) [0x0000000000000000]              
	struct FString                                     m_sName;                                          		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sNameAbbreviated;                               		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                m_nBoxSize;                                       		// 0x0024 (0x0004) [0x0000000000000000]              
	int                                                m_nBoxCost;                                       		// 0x0028 (0x0004) [0x0000000000000000]              
	int                                                m_sHUDImage_Bullet;                               		// 0x002C (0x0004) [0x0000000000000000]              
	int                                                m_nPresetBoxQuantity[ 0x4 ];                      		// 0x0030 (0x0010) [0x0000000000000000]              
	int                                                m_eRequiresWeaponUnlocked;                        		// 0x0040 (0x0004) [0x0000000000000000]              
	struct FString                                     m_sQuantityText;                                  		// 0x0044 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sDescription;                                   		// 0x0050 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                m_nSecondaryKey;                                  		// 0x005C (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cSDDWeapon.WeaponRecoil
// 0x003C
struct FWeaponRecoil
{
	int                                                m_eWeaponRecoil;                                  		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              m_fPitchMin;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              m_fPitchMax;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              m_fYawMin;                                        		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              m_fYawMax;                                        		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              m_fMarksmanshipPitchModifier;                     		// 0x0014 (0x0004) [0x0000000000000000]              
	float                                              m_fMarksmanshipYawModifier;                       		// 0x0018 (0x0004) [0x0000000000000000]              
	float                                              m_fRecoilTime;                                    		// 0x001C (0x0004) [0x0000000000000000]              
	float                                              m_fRecoilExp;                                     		// 0x0020 (0x0004) [0x0000000000000000]              
	float                                              m_fEndPitchMin;                                   		// 0x0024 (0x0004) [0x0000000000000000]              
	float                                              m_fEndPitchMax;                                   		// 0x0028 (0x0004) [0x0000000000000000]              
	float                                              m_fEndYawMin;                                     		// 0x002C (0x0004) [0x0000000000000000]              
	float                                              m_fEndYawMax;                                     		// 0x0030 (0x0004) [0x0000000000000000]              
	float                                              m_fRecoverTime;                                   		// 0x0034 (0x0004) [0x0000000000000000]              
	float                                              m_fRecoverExp;                                    		// 0x0038 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cFeatureEmissiveManager.cFeatureEmissivePeriod
// 0x0008
struct FcFeatureEmissivePeriod
{
	float                                              m_fStartTime;                                     		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              m_fOnFraction;                                    		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct APBGame.cGraffitiCrimeTarget.GraffitiTextureData
// 0x0005
struct FGraffitiTextureData
{
	int                                                m_nIndex;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned char                                      m_eType;                                          		// 0x0004 (0x0001) [0x0000000000000000]              
};

// ScriptStruct APBGame.cWeapon.ModifiableVariables
// 0x0018
struct FModifiableVariables
{
	int                                                m_nAmmoCapacity;                                  		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              m_fEquipTime;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              m_fReloadTime;                                    		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                m_nMagazineCapacity;                              		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              m_fFireInterval;                                  		// 0x0010 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bSetVariables : 1;                              		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct APBGame.cWeapon.ShotSeedEntry
// 0x000C
struct FShotSeedEntry
{
	int                                                m_nShotID;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                m_nRandomSeed;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                m_nNumberOfShots;                                 		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cWeapon.WeaponAmmoPool
// 0x000C
struct FWeaponAmmoPool
{
	int                                                m_eAmmoCategory;                                  		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                m_nCapacity;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                m_nAmount;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cGroup.CharacterStatus
// 0x0008
struct FCharacterStatus
{
	unsigned char                                      m_eCharacterStatus;                               		// 0x0000 (0x0001) [0x0000000000000000]              
	int                                                m_eStatusIconCombo;                               		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cHeightAdjustmentNodeBlendBase.tHeightAdjustmentBlendChild
// 0x0014
struct FtHeightAdjustmentBlendChild
{
	struct FName                                       m_sName;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
	class UcHeightAdjustmentNode*                      m_Child;                                          		// 0x0008 (0x0004) [0x0000000020000000]              ( CPF_Deprecated )
	float                                              m_fWeight;                                        		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                m_nDrawY;                                         		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cHeldObjectComponent.tHeldObject
// 0x0014
struct FtHeldObject
{
	class AActor*                                      m_Archetype;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FName                                       m_sSocketName;                                    		// 0x0004 (0x0008) [0x0000000000000000]              
	class UActorComponent*                             m_Component;                                      		// 0x000C (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	int                                                m_nRefCount;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cHostingConfigFile.tHostingConfigFile
// 0x0030
struct FtHostingConfigFile
{
	unsigned char                                      m_eSDDKey;                                        		// 0x0000 (0x0001) [0x0000000000100000]              
	unsigned char                                      m_eType;                                          		// 0x0001 (0x0001) [0x0000000000100000]              
	int                                                m_nPersistentId;                                  		// 0x0004 (0x0004) [0x0000000000100000]              
	struct FString                                     m_sFilename;                                      		// 0x0008 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sPathname;                                      		// 0x0014 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                m_nClientVersion;                                 		// 0x0020 (0x0004) [0x0000000000100000]              
	int                                                m_nServerVersion;                                 		// 0x0024 (0x0004) [0x0000000000100000]              
	unsigned long                                      m_bLoaded : 1;                                    		// 0x0028 (0x0004) [0x0000000000100000] [0x00000001] 
	int                                                m_nAttempts;                                      		// 0x002C (0x0004) [0x0000000000100000]              
};

// ScriptStruct APBGame.cHostingDistrict.tHostingDistrictInfo
// 0x0008
struct FtHostingDistrictInfo
{
	int                                                m_nDistrictUID;                                   		// 0x0000 (0x0004) [0x0000000000100000]              
	int                                                m_nDistrictInstanceTypeSDD;                       		// 0x0004 (0x0004) [0x0000000000100000]              
};

// ScriptStruct APBGame.cHostingDistrict.tHostingInstanceInfo
// 0x0018
struct FtHostingInstanceInfo
{
	int                                                m_nDistrictUID;                                   		// 0x0000 (0x0004) [0x0000000000100000]              
	int                                                m_nInstanceNo;                                    		// 0x0004 (0x0004) [0x0000000000100000]              
	int                                                m_nEnforcers;                                     		// 0x0008 (0x0004) [0x0000000000100000]              
	int                                                m_nCriminals;                                     		// 0x000C (0x0004) [0x0000000000100000]              
	int                                                m_nDistrictStatus;                                		// 0x0010 (0x0004) [0x0000000000100000]              
	int                                                m_nQueueSize;                                     		// 0x0014 (0x0004) [0x0000000000100000]              
};

// ScriptStruct APBGame.cHostingFriendList.tHostingFriendListMember
// 0x0034
struct FtHostingFriendListMember
{
	int                                                m_nCharacterUID;                                  		// 0x0000 (0x0004) [0x0000000000100000]              
	struct FString                                     m_sCharacterName;                                 		// 0x0004 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                m_nStatus;                                        		// 0x0010 (0x0004) [0x0000000000100000]              
	unsigned long                                      m_bLookingForGroup : 1;                           		// 0x0014 (0x0004) [0x0000000000100000] [0x00000001] 
	int                                                m_nGroupStatus;                                   		// 0x0018 (0x0004) [0x0000000000100000]              
	int                                                m_nGroupPublic;                                   		// 0x001C (0x0004) [0x0000000000100000]              
	int                                                m_nGroupInvite;                                   		// 0x0020 (0x0004) [0x0000000000100000]              
	int                                                m_nDistrictUID;                                   		// 0x0024 (0x0004) [0x0000000000100000]              
	int                                                m_nInstanceNo;                                    		// 0x0028 (0x0004) [0x0000000000100000]              
	int                                                m_nDistrictStatus;                                		// 0x002C (0x0004) [0x0000000000100000]              
	int                                                m_nFaction;                                       		// 0x0030 (0x0004) [0x0000000000100000]              
};

// ScriptStruct APBGame.cHostingGroup.tHostingGroupMember
// 0x003C
struct FtHostingGroupMember
{
	int                                                m_nAccountUID;                                    		// 0x0000 (0x0004) [0x0000000000100000]              
	int                                                m_nCharacterUID;                                  		// 0x0004 (0x0004) [0x0000000000100000]              
	struct FString                                     m_sCharacterName;                                 		// 0x0008 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                m_nStatus;                                        		// 0x0014 (0x0004) [0x0000000000100000]              
	int                                                m_nDistrictUID;                                   		// 0x0018 (0x0004) [0x0000000000100000]              
	int                                                m_nInstanceNo;                                    		// 0x001C (0x0004) [0x0000000000100000]              
	int                                                m_nDistrictStatus;                                		// 0x0020 (0x0004) [0x0000000000100000]              
	int                                                m_nRating;                                        		// 0x0024 (0x0004) [0x0000000000100000]              
	int                                                m_nThreat;                                        		// 0x0028 (0x0004) [0x0000000000100000]              
	int                                                m_nQueueDistrictUID;                              		// 0x002C (0x0004) [0x0000000000100000]              
	int                                                m_nQueueInstanceNo;                               		// 0x0030 (0x0004) [0x0000000000100000]              
	int                                                m_nQueueSize;                                     		// 0x0034 (0x0004) [0x0000000000100000]              
	int                                                m_nQueuePosition;                                 		// 0x0038 (0x0004) [0x0000000000100000]              
};

// ScriptStruct APBGame.cHostingGroup.tHostingGroupInfo
// 0x001C
struct FtHostingGroupInfo
{
	int                                                m_nCharacterUID;                                  		// 0x0000 (0x0004) [0x0000000000100000]              
	struct FString                                     m_sCharacterName;                                 		// 0x0004 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                m_nMembers;                                       		// 0x0010 (0x0004) [0x0000000000100000]              
	int                                                m_nRating;                                        		// 0x0014 (0x0004) [0x0000000000100000]              
	int                                                m_nThreat;                                        		// 0x0018 (0x0004) [0x0000000000100000]              
};

// ScriptStruct APBGame.cHostingIgnoreList.tHostingIgnoreListMember
// 0x0010
struct FtHostingIgnoreListMember
{
	int                                                m_nCharacterUID;                                  		// 0x0000 (0x0004) [0x0000000000100000]              
	struct FString                                     m_sCharacterName;                                 		// 0x0004 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct APBGame.cHostingLeague.tHostingLeagueEntry
// 0x0018
struct FtHostingLeagueEntry
{
	int                                                m_nUID;                                           		// 0x0000 (0x0004) [0x0000000000100000]              
	struct FString                                     m_sName;                                          		// 0x0004 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                m_nPosition;                                      		// 0x0010 (0x0004) [0x0000000000100000]              
	float                                              m_fValue;                                         		// 0x0014 (0x0004) [0x0000000000100000]              
};

// ScriptStruct APBGame.cHostingLeague.tHostingLeague
// 0x0044
struct FtHostingLeague
{
	int                                                m_nLeagueUID;                                     		// 0x0000 (0x0004) [0x0000000000100000]              
	int                                                m_nDistrictLeagueID;                              		// 0x0004 (0x0004) [0x0000000000100000]              
	int                                                m_nLastUpdatedDay;                                		// 0x0008 (0x0004) [0x0000000000100000]              
	int                                                m_nLastUpdatedMonth;                              		// 0x000C (0x0004) [0x0000000000100000]              
	int                                                m_nLastUpdatedYear;                               		// 0x0010 (0x0004) [0x0000000000100000]              
	int                                                m_nLastUpdatedHour;                               		// 0x0014 (0x0004) [0x0000000000100000]              
	int                                                m_nLastUpdatedMinute;                             		// 0x0018 (0x0004) [0x0000000000100000]              
	int                                                m_nLastUpdatedSecond;                             		// 0x001C (0x0004) [0x0000000000100000]              
	int                                                m_nEndTimeDay;                                    		// 0x0020 (0x0004) [0x0000000000100000]              
	int                                                m_nEndTimeMonth;                                  		// 0x0024 (0x0004) [0x0000000000100000]              
	int                                                m_nEndTimeYear;                                   		// 0x0028 (0x0004) [0x0000000000100000]              
	int                                                m_nEndTimeHour;                                   		// 0x002C (0x0004) [0x0000000000100000]              
	int                                                m_nEndTimeMinute;                                 		// 0x0030 (0x0004) [0x0000000000100000]              
	int                                                m_nEndTimeSecond;                                 		// 0x0034 (0x0004) [0x0000000000100000]              
	TArray< struct FtHostingLeagueEntry >              m_aLeaders;                                       		// 0x0038 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct APBGame.cHostingLeague.tHostingMyLeague
// 0x000C
struct FtHostingMyLeague
{
	int                                                m_nLeagueUID;                                     		// 0x0000 (0x0004) [0x0000000000100000]              
	int                                                m_nPosition;                                      		// 0x0004 (0x0004) [0x0000000000100000]              
	int                                                m_nDistrictLeagueID;                              		// 0x0008 (0x0004) [0x0000000000100000]              
};

// ScriptStruct APBGame.cHostingLobby.tHostingLobbyCharacter
// 0x0058
struct FtHostingLobbyCharacter
{
	int                                                m_nSlotNumber;                                    		// 0x0000 (0x0004) [0x0000000000100000]              
	struct FString                                     m_sCharacterName;                                 		// 0x0004 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	unsigned char                                      m_eFaction;                                       		// 0x0010 (0x0001) [0x0000000000100000]              
	int                                                m_nWorldUID;                                      		// 0x0014 (0x0004) [0x0000000000100000]              
	struct FString                                     m_sWorldName;                                     		// 0x0018 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                m_nWorldStatus;                                   		// 0x0024 (0x0004) [0x0000000000100000]              
	unsigned char                                      m_eGender;                                        		// 0x0028 (0x0001) [0x0000000000100000]              
	int                                                m_nPlayTime;                                      		// 0x002C (0x0004) [0x0000000000100000]              
	int                                                m_nRating;                                        		// 0x0030 (0x0004) [0x0000000000100000]              
	int                                                m_nThreat;                                        		// 0x0034 (0x0004) [0x0000000000100000]              
	int                                                m_nCash;                                          		// 0x0038 (0x0004) [0x0000000000100000]              
	struct FString                                     m_sClanName;                                      		// 0x003C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	TArray< unsigned char >                            m_aCustomisation;                                 		// 0x0048 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	unsigned long                                      m_bDeleteMe : 1;                                  		// 0x0054 (0x0004) [0x0000000000100000] [0x00000001] 
};

// ScriptStruct APBGame.cHostingLobby.tHostingLobbyWorld
// 0x0017
struct FtHostingLobbyWorld
{
	int                                                m_nWorldUID;                                      		// 0x0000 (0x0004) [0x0000000000100000]              
	struct FString                                     m_sWorldName;                                     		// 0x0004 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                m_nStatus;                                        		// 0x0010 (0x0004) [0x0000000000100000]              
	unsigned char                                      m_eWorldPopulation;                               		// 0x0014 (0x0001) [0x0000000000100000]              
	unsigned char                                      m_eEnfFaction;                                    		// 0x0015 (0x0001) [0x0000000000100000]              
	unsigned char                                      m_eCrimFaction;                                   		// 0x0016 (0x0001) [0x0000000000100000]              
};

// ScriptStruct APBGame.cSDDMail.MailDuration
// 0x0008
struct FMailDuration
{
	unsigned char                                      m_eMailDuration;                                  		// 0x0000 (0x0001) [0x0000000000000000]              
	int                                                m_nMinutes;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cSDDMail.MailConstant
// 0x0008
struct FMailConstant
{
	unsigned char                                      m_eMailConstant;                                  		// 0x0000 (0x0001) [0x0000000000000000]              
	int                                                m_nValue;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cSDDMail.RedeemableReward
// 0x0034
struct FRedeemableReward
{
	int                                                m_eRedeemableReward;                              		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                m_nKey;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FString                                     m_sDescription;                                   		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      m_eFaction;                                       		// 0x0014 (0x0001) [0x0000000000000000]              
	int                                                m_eReward;                                        		// 0x0018 (0x0004) [0x0000000000000000]              
	struct FString                                     m_sMailSubject;                                   		// 0x001C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sMailBody;                                      		// 0x0028 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct APBGame.cHostingMail.tHostingDate
// 0x0006
struct FtHostingDate
{
	int                                                m_nYear;                                          		// 0x0000 (0x0004) [0x0000000000100000]              
	unsigned char                                      m_nMonth;                                         		// 0x0004 (0x0001) [0x0000000000100000]              
	unsigned char                                      m_nDay;                                           		// 0x0005 (0x0001) [0x0000000000100000]              
};

// ScriptStruct APBGame.cHostingMail.tHostingTime
// 0x0004
struct FtHostingTime
{
	unsigned char                                      m_nHour;                                          		// 0x0000 (0x0001) [0x0000000000100000]              
	unsigned char                                      m_nMinute;                                        		// 0x0001 (0x0001) [0x0000000000100000]              
	unsigned char                                      m_nSecond;                                        		// 0x0002 (0x0001) [0x0000000000100000]              
	unsigned char                                      UNUSED;                                           		// 0x0003 (0x0001) [0x0000000000100000]              
};

// ScriptStruct APBGame.cHostingMail.tHostingDateTime
// 0x000C
struct FtHostingDateTime
{
	struct FtHostingDate                               m_Date;                                           		// 0x0000 (0x0008) [0x0000000000100000]              
	struct FtHostingTime                               m_Time;                                           		// 0x0008 (0x0004) [0x0000000000100000]              
};

// ScriptStruct APBGame.cHostingMail.tHostingMail
// 0x0058
struct FtHostingMail
{
	int                                                m_nMailUID;                                       		// 0x0000 (0x0004) [0x0000000000100000]              
	int                                                m_nFromUID;                                       		// 0x0004 (0x0004) [0x0000000000100000]              
	struct FString                                     m_sFrom;                                          		// 0x0008 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sSubject;                                       		// 0x0014 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sBody;                                          		// 0x0020 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sItem;                                          		// 0x002C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                m_eInventoryItemType;                             		// 0x0038 (0x0004) [0x0000000000100000]              
	int                                                m_nCash;                                          		// 0x003C (0x0004) [0x0000000000100000]              
	int                                                m_nPoints;                                        		// 0x0040 (0x0004) [0x0000000000100000]              
	struct FtHostingDateTime                           m_sent;                                           		// 0x0044 (0x000C) [0x0000000000100000]              
	int                                                m_nRemainingTime;                                 		// 0x0050 (0x0004) [0x0000000000100000]              
	unsigned long                                      m_bRead : 1;                                      		// 0x0054 (0x0004) [0x0000000000100000] [0x00000001] 
	unsigned long                                      m_bHasBody : 1;                                   		// 0x0054 (0x0004) [0x0000000000100000] [0x00000002] 
	unsigned long                                      m_bHasItem : 1;                                   		// 0x0054 (0x0004) [0x0000000000100000] [0x00000004] 
	unsigned long                                      m_bFromGM : 1;                                    		// 0x0054 (0x0004) [0x0000000000100000] [0x00000008] 
	unsigned long                                      m_bReturned : 1;                                  		// 0x0054 (0x0004) [0x0000000000100000] [0x00000010] 
};

// ScriptStruct APBGame.cSDDMarketplace.MarketplaceDuration
// 0x0014
struct FMarketplaceDuration
{
	unsigned char                                      m_eMarketplaceDuration;                           		// 0x0000 (0x0001) [0x0000000000000000]              
	struct FString                                     m_sDisplayString;                                 		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                m_nMinutes;                                       		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cSDDMarketplace.MarketplaceConstant
// 0x0008
struct FMarketplaceConstant
{
	unsigned char                                      m_eMarketplaceConstant;                           		// 0x0000 (0x0001) [0x0000000000000000]              
	float                                              m_fValue;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cSDDMarketplace.MarketplaceTimeLeft
// 0x0014
struct FMarketplaceTimeLeft
{
	unsigned char                                      m_eMarketplaceTimeLeft;                           		// 0x0000 (0x0001) [0x0000000000000000]              
	struct FString                                     m_sDisplayString;                                 		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                m_nMinutes;                                       		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cHostingMarketplace.tHostingMarketplaceAuction
// 0x0044
struct FtHostingMarketplaceAuction
{
	int                                                m_nAuctionUID;                                    		// 0x0000 (0x0004) [0x0000000000100000]              
	struct FString                                     m_sItemName;                                      		// 0x0004 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                m_eInventoryItemType;                             		// 0x0010 (0x0004) [0x0000000000100000]              
	int                                                m_nRatingOrCash;                                  		// 0x0014 (0x0004) [0x0000000000100000]              
	unsigned char                                      m_nItemFaction;                                   		// 0x0018 (0x0001) [0x0000000000100000]              
	unsigned char                                      m_nGender;                                        		// 0x0019 (0x0001) [0x0000000000100000]              
	struct FString                                     m_sSellerName;                                    		// 0x001C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                m_nCurrentBid;                                    		// 0x0028 (0x0004) [0x0000000000100000]              
	int                                                m_nBuyoutPrice;                                   		// 0x002C (0x0004) [0x0000000000100000]              
	int                                                m_nRemainingTime;                                 		// 0x0030 (0x0004) [0x0000000000100000]              
	unsigned long                                      m_bMyBid : 1;                                     		// 0x0034 (0x0004) [0x0000000000100000] [0x00000001] 
	unsigned char                                      m_nCamera;                                        		// 0x0038 (0x0001) [0x0000000000100000]              
	struct FQWord                                      m_nMinimumBid;                                    		// 0x003C (0x0008) [0x0000000000100000]              
};

// ScriptStruct APBGame.cHostingMarketplace.tHostingMarketplaceMyAuction
// 0x0035
struct FtHostingMarketplaceMyAuction
{
	int                                                m_nAuctionUID;                                    		// 0x0000 (0x0004) [0x0000000000100000]              
	struct FString                                     m_sItemName;                                      		// 0x0004 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                m_eInventoryItemType;                             		// 0x0010 (0x0004) [0x0000000000100000]              
	int                                                m_nRatingOrCash;                                  		// 0x0014 (0x0004) [0x0000000000100000]              
	unsigned char                                      m_nItemFaction;                                   		// 0x0018 (0x0001) [0x0000000000100000]              
	unsigned char                                      m_nGender;                                        		// 0x0019 (0x0001) [0x0000000000100000]              
	struct FString                                     m_sSellerName;                                    		// 0x001C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                m_nCurrentBid;                                    		// 0x0028 (0x0004) [0x0000000000100000]              
	int                                                m_nBuyoutPrice;                                   		// 0x002C (0x0004) [0x0000000000100000]              
	int                                                m_nRemainingTime;                                 		// 0x0030 (0x0004) [0x0000000000100000]              
	unsigned char                                      m_nCamera;                                        		// 0x0034 (0x0001) [0x0000000000100000]              
};

// ScriptStruct APBGame.cHostingMarketplace.tHostingMarketplaceMyBid
// 0x0039
struct FtHostingMarketplaceMyBid
{
	int                                                m_nAuctionUID;                                    		// 0x0000 (0x0004) [0x0000000000100000]              
	struct FString                                     m_sItemName;                                      		// 0x0004 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                m_eInventoryItemType;                             		// 0x0010 (0x0004) [0x0000000000100000]              
	int                                                m_nRatingOrCash;                                  		// 0x0014 (0x0004) [0x0000000000100000]              
	unsigned char                                      m_nItemFaction;                                   		// 0x0018 (0x0001) [0x0000000000100000]              
	unsigned char                                      m_nGender;                                        		// 0x0019 (0x0001) [0x0000000000100000]              
	struct FString                                     m_sSellerName;                                    		// 0x001C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                m_nCurrentBid;                                    		// 0x0028 (0x0004) [0x0000000000100000]              
	int                                                m_nMyBid;                                         		// 0x002C (0x0004) [0x0000000000100000]              
	int                                                m_nBuyoutPrice;                                   		// 0x0030 (0x0004) [0x0000000000100000]              
	int                                                m_nRemainingTime;                                 		// 0x0034 (0x0004) [0x0000000000100000]              
	unsigned char                                      m_nCamera;                                        		// 0x0038 (0x0001) [0x0000000000100000]              
};

// ScriptStruct APBGame.cHostingMarketplace.tHostingMarketplaceAuctionListSearchParams
// 0x0020
struct FtHostingMarketplaceAuctionListSearchParams
{
	unsigned char                                      m_eSort;                                          		// 0x0000 (0x0001) [0x0000000000100000]              
	unsigned char                                      m_eSearch;                                        		// 0x0001 (0x0001) [0x0000000000100000]              
	struct FString                                     m_sSearch;                                        		// 0x0004 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                m_nCategory;                                      		// 0x0010 (0x0004) [0x0000000000100000]              
	int                                                m_nSubCategory;                                   		// 0x0014 (0x0004) [0x0000000000100000]              
	int                                                m_nRatingOrCashStart;                             		// 0x0018 (0x0004) [0x0000000000100000]              
	int                                                m_nRatingOrCashEnd;                               		// 0x001C (0x0004) [0x0000000000100000]              
};

// ScriptStruct APBGame.cHostingMarketplace.tHostingMarketplaceListPos
// 0x000C
struct FtHostingMarketplaceListPos
{
	unsigned char                                      m_eListType;                                      		// 0x0000 (0x0001) [0x0000000000100000]              
	int                                                m_nCurIndex;                                      		// 0x0004 (0x0004) [0x0000000000100000]              
	int                                                m_nLastIndex;                                     		// 0x0008 (0x0004) [0x0000000000100000]              
};

// ScriptStruct APBGame.cHUDBase.HealthInfo
// 0x000C
struct FHealthInfo
{
	class AActor*                                      A;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned char                                      Alpha;                                            		// 0x0004 (0x0001) [0x0000000000000000]              
	float                                              m_DestroyTime;                                    		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cHUDBase.SceneLayer
// 0x0008
struct FSceneLayer
{
	int                                                m_eSceneLayer;                                    		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bLimitOpenFrequency : 1;                        		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct APBGame.cHUDBase.HUDScenes
// 0x0024
struct FHUDScenes
{
	int                                                m_eHUDScenes;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     m_sPackageRef;                                    		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      m_bStartHidden : 1;                               		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FString                                     m_sDataStoreTag;                                  		// 0x0014 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      m_bUpdateWhileDead : 1;                           		// 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bOpenInLoginLevel : 1;                          		// 0x0020 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct APBGame.cHUDBase.HUDReticule
// 0x001C
struct FHUDReticule
{
	unsigned char                                      m_eHUDReticule;                                   		// 0x0000 (0x0001) [0x0000000000000000]              
	struct FString                                     m_sPackageRef;                                    		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                m_eColourDefault;                                 		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                m_eColourFriend;                                  		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                m_eColourEnemy;                                   		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cHUDBase.HUDMessage
// 0x0064
struct FHUDMessage
{
	int                                                m_eHUDMessage;                                    		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     m_sDisplayText;                                   		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      m_ePriority;                                      		// 0x0010 (0x0001) [0x0000000000000000]              
	float                                              m_fDisplayTime;                                   		// 0x0014 (0x0004) [0x0000000000000000]              
	float                                              m_fQueueTimeout;                                  		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                m_eNextMessage;                                   		// 0x001C (0x0004) [0x0000000000000000]              
	struct FString                                     m_sAudioCue;                                      		// 0x0020 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                m_eScene;                                         		// 0x002C (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bAllowMultiples : 1;                            		// 0x0030 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                m_eCategory;                                      		// 0x0034 (0x0004) [0x0000000000000000]              
	struct FString                                     m_sChatText;                                      		// 0x0038 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      m_bForAction : 1;                                 		// 0x0044 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bForDistrictMap : 1;                            		// 0x0044 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      m_bForChat : 1;                                   		// 0x0044 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      m_bForCeremony : 1;                               		// 0x0044 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      m_bSuppressMain : 1;                              		// 0x0044 (0x0004) [0x0000000000000000] [0x00000010] 
	int                                                m_ePopupDialogOverride;                           		// 0x0048 (0x0004) [0x0000000000000000]              
	struct FString                                     m_sFemaleText;                                    		// 0x004C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                m_ePosition;                                      		// 0x0058 (0x0004) [0x0000000000000000]              
	int                                                m_eUIStyle;                                       		// 0x005C (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bForCombat : 1;                                 		// 0x0060 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct APBGame.cHUDBase.HUDMessageCategory
// 0x0018
struct FHUDMessageCategory
{
	int                                                m_eHUDMessageCategory;                            		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                m_eIcon;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
	unsigned char                                      m_eChatCategory;                                  		// 0x0008 (0x0001) [0x0000000000000000]              
	struct FString                                     m_sDisplayText;                                   		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct APBGame.cHUDBase.HUDMessageScene
// 0x0010
struct FHUDMessageScene
{
	int                                                m_eHUDMessageScene;                               		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     m_sPackageRef;                                    		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct APBGame.cHUDBase.HUDInfoBrowser
// 0x0010
struct FHUDInfoBrowser
{
	unsigned char                                      m_eHUDInfoBrowser;                                		// 0x0000 (0x0001) [0x0000000000000000]              
	struct FString                                     m_sPackageRef;                                    		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct APBGame.cHUDBase.HUDIcon
// 0x000C
struct FHUDIcon
{
	int                                                m_eHUDIcon;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                m_nIconRow;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                m_nIconColumn;                                    		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cHUDBase.HUDIconCombo
// 0x0010
struct FHUDIconCombo
{
	int                                                m_eHUDIconCombo;                                  		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                m_eLayer1;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                m_eLayer2;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                m_eLayer3;                                        		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cHUDBase.CharacterInteractionMenu
// 0x0020
struct FCharacterInteractionMenu
{
	int                                                m_nPosition;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     m_sID;                                            		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sIcon;                                          		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      m_bSameDistrict : 1;                              		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bSameFaction : 1;                               		// 0x001C (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct APBGame.cHUDBase.HUDPopUpMenuItem
// 0x0034
struct FHUDPopUpMenuItem
{
	int                                                m_eHUDPopUpMenuItem;                              		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     m_sLocalisationText;                              		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      m_eEnabledRule;                                   		// 0x0010 (0x0001) [0x0000000000000000]              
	int                                                m_eImage;                                         		// 0x0014 (0x0004) [0x0000000000000000]              
	struct FString                                     m_sConsoleCommand;                                		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      m_bDisplayKeyBinding : 1;                         		// 0x0024 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bEnableWhenDead : 1;                            		// 0x0024 (0x0004) [0x0000000000000000] [0x00000002] 
	struct FString                                     m_sKeyPress;                                      		// 0x0028 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct APBGame.cHUDBase.HUDColour
// 0x0018
struct FHUDColour
{
	int                                                m_eHUDColour;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                m_eOverrideColour;                                		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                m_nR;                                             		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                m_nG;                                             		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                m_nB;                                             		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                m_nA;                                             		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cHUDBase.HUDRadarMarker
// 0x0018
struct FHUDRadarMarker
{
	int                                                m_eHUDRadarMarker;                                		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                m_eIcon;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                m_eIconSurround;                                  		// 0x0008 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bValidInMission : 1;                            		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bValidOutOfMission : 1;                         		// 0x000C (0x0004) [0x0000000000000000] [0x00000002] 
	int                                                m_nIconSize;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                m_nIconSurroundSize;                              		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cHUDBase.HUDTextureIcon
// 0x0014
struct FHUDTextureIcon
{
	int                                                m_eHUDTextureIcon;                                		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     m_sPackageRef;                                    		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                m_eTexturePageIcon;                               		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cHUDBase.HUDTexturePage
// 0x0010
struct FHUDTexturePage
{
	int                                                m_eHUDTexturePage;                                		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     m_sPackageName;                                   		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct APBGame.cHUDBase.HUDTexturePageIcon
// 0x0018
struct FHUDTexturePageIcon
{
	int                                                m_eHUDTexturePageIcon;                            		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                m_eTexturePage;                                   		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                m_nU;                                             		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                m_nV;                                             		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                m_nUL;                                            		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                m_nVL;                                            		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cHUDBase.HUDEffect
// 0x0010
struct FHUDEffect
{
	int                                                m_eHUDEffect;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     m_sMaterialRef;                                   		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct APBGame.cHUDBase.HUDConstant
// 0x0014
struct FHUDConstant
{
	unsigned char                                      m_eHUDConstant;                                   		// 0x0000 (0x0001) [0x0000000000000000]              
	float                                              m_fValue;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FString                                     m_sComment;                                       		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct APBGame.cHUDBase.HUDConstantBool
// 0x0014
struct FHUDConstantBool
{
	unsigned char                                      m_eHUDConstantBool;                               		// 0x0000 (0x0001) [0x0000000000000000]              
	unsigned long                                      m_bValue : 1;                                     		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FString                                     m_sComment;                                       		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct APBGame.cHUDBase.HUDConstantString
// 0x001C
struct FHUDConstantString
{
	int                                                m_eHUDConstantString;                             		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     m_sText;                                          		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sComment;                                       		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct APBGame.cHUDBase.HUDMarkerVisual
// 0x001C
struct FHUDMarkerVisual
{
	int                                                m_eHUDMarkerVisual;                               		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned char                                      m_eCategory;                                      		// 0x0004 (0x0001) [0x0000000000000000]              
	int                                                m_eRadarMarker;                                   		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                m_eTaskMarker;                                    		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                m_eColourProfile;                                 		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                m_eDistrictMapMarker;                             		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                m_eHUDMarkerOffset;                               		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cHUDBase.HUDMarkerOffset
// 0x0010
struct FHUDMarkerOffset
{
	int                                                m_eHUDMarkerOffset;                               		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              m_fOffset_X;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              m_fOffset_Y;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              m_fOffset_Z;                                      		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cHUDBase.HUDWSCharInfo
// 0x0008
struct FHUDWSCharInfo
{
	unsigned char                                      m_eHUDWSCharInfo;                                 		// 0x0000 (0x0001) [0x0000000000000000]              
	int                                                m_eColourProfile;                                 		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cHUDBase.HUDTaskMarker
// 0x0024
struct FHUDTaskMarker
{
	int                                                m_eHUDTaskMarker;                                 		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                m_eScene;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                m_eVisibleIcon;                                   		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                m_eOccludedIcon;                                  		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                m_eEllipseIcon;                                   		// 0x0010 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bValidInMission : 1;                            		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bValidOutOfMission : 1;                         		// 0x0014 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      m_bShowOnEdge : 1;                                		// 0x0014 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      m_bShowInWorld : 1;                               		// 0x0014 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      m_bShowByDefault : 1;                             		// 0x0014 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      m_bInteractOnDistrictMap : 1;                     		// 0x0014 (0x0004) [0x0000000000000000] [0x00000020] 
	int                                                m_eArrowIcon;                                     		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                m_eArrowIconOcc;                                  		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                m_eArrowIconEllipse;                              		// 0x0020 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cHUDBase.HUDTaskMarkerScene
// 0x0010
struct FHUDTaskMarkerScene
{
	int                                                m_eHUDTaskMarkerScene;                            		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     m_sPackageRef;                                    		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct APBGame.cHUDBase.HUDColourProfile
// 0x0008
struct FHUDColourProfile
{
	int                                                m_eHUDColourProfile;                              		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                m_ePrimaryColour;                                 		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cHUDBase.HUDMarkerStateColour
// 0x001C
struct FHUDMarkerStateColour
{
	int                                                m_eHUDMarkerStateColour;                          		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                m_eDefault;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                m_eTask_OwnerAttack;                              		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                m_eTask_OwnerDefend;                              		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                m_eTask_OppositionAttack;                         		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                m_eTask_OppositionDefend;                         		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                m_eTask_Neutral;                                  		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cHUDBase.HUDDistrictMapMarker
// 0x0020
struct FHUDDistrictMapMarker
{
	int                                                m_eHUDDistrictMapMarker;                          		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                m_eIconCombo;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                m_nSize;                                          		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                m_nDrawOrder;                                     		// 0x000C (0x0004) [0x0000000000000000]              
	struct FString                                     m_sLegendName;                                    		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      m_bInLegend : 1;                                  		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bInteractOnMap : 1;                             		// 0x001C (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      m_bShowOnSpawnMap : 1;                            		// 0x001C (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      m_bDisableWaypoints : 1;                          		// 0x001C (0x0004) [0x0000000000000000] [0x00000008] 
};

// ScriptStruct APBGame.cHUDBase.HUDReticuleHintIcon
// 0x0018
struct FHUDReticuleHintIcon
{
	int                                                m_eHUDReticuleHintIcon;                           		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                m_eIcon;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                m_eColour;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
	struct FString                                     m_sDisplayText;                                   		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct APBGame.cHUDBase.HUDZoneNotifier
// 0x0008
struct FHUDZoneNotifier
{
	unsigned char                                      m_eHUDZoneNotifier;                               		// 0x0000 (0x0001) [0x0000000000000000]              
	int                                                m_eIcon;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cHUDBase.HUDMarkerVisualText
// 0x0040
struct FHUDMarkerVisualText
{
	int                                                m_eHUDMarkerVisual;                               		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     m_sOwnerAttack;                                   		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sOwnerDefend;                                   		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sOppositionAttack;                              		// 0x001C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sOppositionDefend;                              		// 0x0028 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sNeutral;                                       		// 0x0034 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct APBGame.cHUDBase.HUDCeremonyMsg
// 0x0018
struct FHUDCeremonyMsg
{
	int                                                m_eHUDMessage;                                    		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     m_sTitle;                                         		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      m_eType;                                          		// 0x0010 (0x0001) [0x0000000000000000]              
	int                                                m_eIconFallback;                                  		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cHUDBase.HUDCombatMessage
// 0x0020
struct FHUDCombatMessage
{
	int                                                m_eHUDMessage;                                    		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     m_sLine1;                                         		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sLine2;                                         		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                m_eIcon;                                          		// 0x001C (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cHUDBase.HUDMessagePosition
// 0x000C
struct FHUDMessagePosition
{
	int                                                m_eHUDMessagePosition;                            		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                m_nYOffset;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              m_fYPercent;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cHUDBase.ScoreboardDescription
// 0x0010
struct FScoreboardDescription
{
	int                                                m_eScoreboardDescription;                         		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     m_sDisplayText;                                   		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct APBGame.cHUDBase.CharacterVOIPStatus
// 0x0008
struct FCharacterVOIPStatus
{
	unsigned char                                      m_eCharacterVOIPStatus;                           		// 0x0000 (0x0001) [0x0000000000000000]              
	int                                                m_eVOIPIconCombo;                                 		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cHUDBase.UIStyle
// 0x0010
struct FUIStyle
{
	int                                                m_eUIStyle;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     m_sName;                                          		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct APBGame.cHUDBase.HudGroupState
// 0x0018
struct FHudGroupState
{
	unsigned char                                      m_eHudGroupState;                                 		// 0x0000 (0x0001) [0x0000000000000000]              
	struct FString                                     m_sHeaderText;                                    		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                m_eHeaderIcon;                                    		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                m_eHeaderColour;                                  		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cJunction.JunctionStage
// 0x0010
struct FJunctionStage
{
	float                                              fCurPriority;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              fWaitingTime;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              fMinTime;                                         		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              fMaxTime;                                         		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cJunction.NPCWaitingRecord
// 0x0008
struct FNPCWaitingRecord
{
	class UcNPCBrain*                                  pWaitingNPC;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              fWaitingTime;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cLCEditorMisc.LCRacialColourVariations
// 0x0018
struct FLCRacialColourVariations
{
	TArray< struct FLinearColor >                      m_Colour1;                                        		// 0x0000 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	TArray< struct FLinearColor >                      m_Colour2;                                        		// 0x000C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct APBGame.cLCEditorNPCTypes.STypeOrCategoryStaticData
// 0x0024
struct FSTypeOrCategoryStaticData
{
	int                                                m_nTypeID;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned char                                      m_eGender;                                        		// 0x0004 (0x0001) [0x0000000000000000]              
	unsigned char                                      m_eNPCClass;                                      		// 0x0005 (0x0001) [0x0000000000000000]              
	struct FString                                     m_sTypeDescription;                               		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FLinearColor                                m_DebugColour;                                    		// 0x0014 (0x0010) [0x0000000000000000]              
};

// ScriptStruct APBGame.cLCEditorNPCTypes.STypeOrCategoryDynamicData
// 0x000C
struct FSTypeOrCategoryDynamicData
{
	int                                                m_nTypeID;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              m_fProportion;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                m_nAllocationLimit;                               		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cLCEditorReactions.LCData_Reaction
// 0x0010
struct FLCData_Reaction
{
	int                                                m_eReaction;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bIsOverride : 1;                                		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              m_fLikelihood;                                    		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                m_nPriority;                                      		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cLCEditorReactions.LCData_Event
// 0x000C
struct FLCData_Event
{
	TArray< struct FLCData_Reaction >                  ReactionArr;                                      		// 0x0000 (0x000C) [0x0000000000001000]              ( CPF_Native )
};

// ScriptStruct APBGame.cLCEditorReactions.LCData_TOD
// 0x000C
struct FLCData_TOD
{
	TArray< struct FLCData_Event >                     EventArr;                                         		// 0x0000 (0x000C) [0x0000000000001000]              ( CPF_Native )
};

// ScriptStruct APBGame.cLCEditorReactions.LCData_NPC
// 0x000C
struct FLCData_NPC
{
	TArray< struct FLCData_TOD >                       TODArr;                                           		// 0x0000 (0x000C) [0x0000000000001000]              ( CPF_Native )
};

// ScriptStruct APBGame.cLCSDDTypes.NPCWorldEvent
// 0x0038
struct FNPCWorldEvent
{
	unsigned char                                      m_eNPCWorldEvent;                                 		// 0x0000 (0x0001) [0x0000000000000000]              
	float                                              m_fVisibilityDistance;                            		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              m_fAudibilityDistance;                            		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              m_fDangerDistance;                                		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              m_fBlastDistance;                                 		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                m_ePedestrianWitnessEvent;                        		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                m_ePedestrianDangerEvent;                         		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                m_ePedestrianBlastEvent;                          		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                m_eVehicleWitnessEvent;                           		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                m_eVehicleDangerEvent;                            		// 0x0024 (0x0004) [0x0000000000000000]              
	int                                                m_eVehicleBlastEvent;                             		// 0x0028 (0x0004) [0x0000000000000000]              
	struct FString                                     m_sPedestrianAudioReason;                         		// 0x002C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct APBGame.cLCSDDTypes.PedestrianEvent
// 0x0008
struct FPedestrianEvent
{
	unsigned char                                      m_eNPCEvent;                                      		// 0x0000 (0x0001) [0x0000000000000000]              
	int                                                m_nIgnoreMe;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cLCSDDTypes.VehicleEvent
// 0x0008
struct FVehicleEvent
{
	unsigned char                                      m_eNPCEvent;                                      		// 0x0000 (0x0001) [0x0000000000000000]              
	int                                                m_nIgnoreMe;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cLocationBeaconActor.StreetName
// 0x0014
struct FStreetName
{
	int                                                m_eStreetNameID;                                  		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                m_eDistrict;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FString                                     m_sDisplayedStreetName;                           		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct APBGame.cLocationBeaconActor.LocationBeaconInstance
// 0x0014
struct FLocationBeaconInstance
{
	int                                                m_eLocationBeaconInstance;                        		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                m_eDistrict;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FString                                     m_sLocalisedName;                                 		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct APBGame.cNodeManager.ArrayOfRWTechNodes
// 0x000C
struct FArrayOfRWTechNodes
{
	TArray< class URWTechNode* >                       m_aNodes;                                         		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct APBGame.cNPCDriverManager.NPCDriverInfo
// 0x0008
struct FNPCDriverInfo
{
	int                                                m_nNPCType;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              m_fAccumulatedTime;                               		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cRagdollableNPCSkeletalMeshActor.NPCHitData
// 0x0030
struct FNPCHitData
{
	struct FVector                                     TakeHitLocation;                                  		// 0x0000 (0x000C) [0x0000000000000000]              
	class UClass*                                      HitDamageType;                                    		// 0x000C (0x0004) [0x0000000000000000]              
	struct FVector                                     TearOffMomentum;                                  		// 0x0010 (0x000C) [0x0000000000000000]              
	struct FVector                                     vExplosionLocation;                               		// 0x001C (0x000C) [0x0000000000000000]              
	unsigned char                                      nExplosionType;                                   		// 0x0028 (0x0001) [0x0000000000000000]              
	class AcAPBVehicleBase*                            KillingVehicle;                                   		// 0x002C (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cNPCDriverSkeletalMeshActor.DriverEjectData
// 0x000C
struct FDriverEjectData
{
	class AcAPBVehicleBase*                            pVehicleEjectedFrom;                              		// 0x0000 (0x0004) [0x0000000000000000]              
	class AcAPBPawn*                                   pEjectingPawn;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
	unsigned long                                      bEjectedByEnforcer : 1;                           		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bEjectedFromPassengerSide : 1;                    		// 0x0008 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct APBGame.cPedestrianDef.TTIReactionData
// 0x0006
struct FTTIReactionData
{
	float                                              fDuration;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned char                                      eCSAIndex;                                        		// 0x0004 (0x0001) [0x0000000000000000]              
	unsigned char                                      eTTIState;                                        		// 0x0005 (0x0001) [0x0000000000000000]              
};

// ScriptStruct APBGame.cPedestrianDef.TTIReactionInProgressData
// 0x000E
struct FTTIReactionInProgressData
{
	float                                              fAnimTimeElapsed;                                 		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FTTIReactionData                            TTIData;                                          		// 0x0004 (0x0008) [0x0000000000000000]              
	unsigned char                                      eTTIStage;                                        		// 0x000C (0x0001) [0x0000000000000000]              
	unsigned char                                      eAnimationIndex;                                  		// 0x000D (0x0001) [0x0000000000000000]              
};

// ScriptStruct APBGame.cPedestrianDef.SPedStateReplicated
// 0x0040
struct FSPedStateReplicated
{
	class URWTechNode*                                 m_pStartNode;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
	class URWTechNode*                                 m_pTargetSDNode;                                  		// 0x0004 (0x0004) [0x0000000000000000]              
	class URWTechNode*                                 m_pVignetteNode;                                  		// 0x0008 (0x0004) [0x0000000000000000]              
	struct FVector                                     m_vInitialPosition;                               		// 0x000C (0x000C) [0x0000000000000000]              
	int                                                m_nDTRouteIndex;                                  		// 0x0018 (0x0004) [0x0000000000000000]              
	float                                              m_fDistanceAlongDTSegment;                        		// 0x001C (0x0004) [0x0000000000000000]              
	struct FVector                                     m_vDirection;                                     		// 0x0020 (0x000C) [0x0000000000000000]              
	struct FVector                                     m_vFirstDTRouteNodeOffset;                        		// 0x002C (0x000C) [0x0000000000000000]              
	float                                              m_fTimeSinceVignetteStarted;                      		// 0x0038 (0x0004) [0x0000000000000000]              
	struct FSReactionIDReplicated                      m_ReactionID_Replicated;                          		// 0x003C (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cNPCTrackingManager.SNPCTypeOrCategoryTrackingRecord
// 0x000C
struct FSNPCTypeOrCategoryTrackingRecord
{
	int                                                m_nTypeOrCategoryIndex;                           		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                m_nNumActive;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                m_nNumInSpawnQueue;                               		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cOpenWorldDropOff.tPlayerDropOffPointsInfo
// 0x000C
struct FtPlayerDropOffPointsInfo
{
	int                                                nCharacterUID;                                    		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              fPoints;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              fPointsSubtractedTimeStamp;                       		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cPedestrianDetailedRoute.PathOffsetData
// 0x0030
struct FPathOffsetData
{
	struct FVector                                     vCenter;                                          		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FVector2D                                   vDirection;                                       		// 0x000C (0x0008) [0x0000000000000000]              
	float                                              fLimitLo;                                         		// 0x0014 (0x0004) [0x0000000000000000]              
	float                                              fLimitHi;                                         		// 0x0018 (0x0004) [0x0000000000000000]              
	float                                              fAmount;                                          		// 0x001C (0x0004) [0x0000000000000000]              
	struct FVector2D                                   vOffsetPos;                                       		// 0x0020 (0x0008) [0x0000000000000000]              
	struct FVector2D                                   vDirectionToNextOffset;                           		// 0x0028 (0x0008) [0x0000000000000000]              
};

// ScriptStruct APBGame.cPropComponent_Use.tUseAction
// 0x001C
struct FtUseAction
{
	struct FName                                       m_sUseTagName;                                    		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	int                                                m_iMeshVariant;                                   		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       m_sAnimationName;                                 		// 0x000C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      m_eNewPropState;                                  		// 0x0014 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      m_bLoop : 1;                                      		// 0x0018 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
};

// ScriptStruct APBGame.cPropComponent_Use.StPlayingAnimation
// 0x000C
struct FStPlayingAnimation
{
	struct FName                                       sAnimationName;                                   		// 0x0000 (0x0008) [0x0000000000000000]              
	unsigned long                                      bLoop : 1;                                        		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bReachedEnd : 1;                                  		// 0x0008 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct APBGame.cReactionManager.ReactionRequest
// 0x0010
struct FReactionRequest
{
	int                                                nReactionID;                                      		// 0x0000 (0x0004) [0x0000000000001000]              ( CPF_Native )
	struct FPointer                                    pEvent;                                           		// 0x0004 (0x0004) [0x0000000000001000]              ( CPF_Native )
	int                                                nWorldEventID;                                    		// 0x0008 (0x0004) [0x0000000000001000]              ( CPF_Native )
	unsigned long                                      bOverridePriority : 1;                            		// 0x000C (0x0004) [0x0000000000001000] [0x00000001] ( CPF_Native )
};

// ScriptStruct APBGame.cReplicatedHUDMarkerGroup.HUDMarkerUpdateInfo
// 0x0015
struct FHUDMarkerUpdateInfo
{
	int                                                nServerID;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FVector                                     Location;                                         		// 0x0004 (0x000C) [0x0000000000000000]              
	class AActor*                                      pLinkedActor;                                     		// 0x0010 (0x0004) [0x0000000000000000]              
	unsigned char                                      eState;                                           		// 0x0014 (0x0001) [0x0000000000000000]              
};

// ScriptStruct APBGame.cSDDChat.ChatConstant
// 0x0008
struct FChatConstant
{
	unsigned char                                      m_eChatConstant;                                  		// 0x0000 (0x0001) [0x0000000000000000]              
	float                                              m_fValue;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cSDDClan.ClanRank
// 0x0018
struct FClanRank
{
	unsigned char                                      m_eClanRank;                                      		// 0x0000 (0x0001) [0x0000000000000000]              
	struct FString                                     m_sName;                                          		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      m_bClanChatListen : 1;                            		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bClanChatSpeak : 1;                             		// 0x0010 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      m_bOfficerChatListen : 1;                         		// 0x0010 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      m_bOfficerChatSpeak : 1;                          		// 0x0010 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      m_bAssignRank : 1;                                		// 0x0010 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      m_bInviteMember : 1;                              		// 0x0010 (0x0004) [0x0000000000000000] [0x00000020] 
	unsigned long                                      m_bRemoveMember : 1;                              		// 0x0010 (0x0004) [0x0000000000000000] [0x00000040] 
	unsigned long                                      m_bEditMotd : 1;                                  		// 0x0010 (0x0004) [0x0000000000000000] [0x00000080] 
	unsigned long                                      m_bEditPublicNote : 1;                            		// 0x0010 (0x0004) [0x0000000000000000] [0x00000100] 
	unsigned long                                      m_bViewPrivateNote : 1;                           		// 0x0010 (0x0004) [0x0000000000000000] [0x00000200] 
	unsigned long                                      m_bEditPrivateNote : 1;                           		// 0x0010 (0x0004) [0x0000000000000000] [0x00000400] 
	unsigned long                                      m_bEditClanBio : 1;                               		// 0x0010 (0x0004) [0x0000000000000000] [0x00000800] 
	unsigned long                                      m_bEditClanInformation : 1;                       		// 0x0010 (0x0004) [0x0000000000000000] [0x00001000] 
	unsigned long                                      m_bEditClanSymbol : 1;                            		// 0x0010 (0x0004) [0x0000000000000000] [0x00002000] 
	unsigned long                                      m_bReuseMe : 1;                                   		// 0x0010 (0x0004) [0x0000000000000000] [0x00004000] 
	unsigned long                                      m_bEditClanTheme : 1;                             		// 0x0010 (0x0004) [0x0000000000000000] [0x00008000] 
	unsigned long                                      m_bContact : 1;                                   		// 0x0010 (0x0004) [0x0000000000000000] [0x00010000] 
	int                                                m_eIcon;                                          		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cSDDContact.Contact
// 0x0074
struct FContact
{
	int                                                m_eContact;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     m_sTitle;                                         		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      m_eContactType;                                   		// 0x0010 (0x0001) [0x0000000000000000]              
	struct FString                                     m_sDescription;                                   		// 0x0014 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      m_bFemale : 1;                                    		// 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bTutor : 1;                                     		// 0x0020 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      m_bInitiallyUnlocked : 1;                         		// 0x0020 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      m_bDefaultAssets : 1;                             		// 0x0020 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      m_bTest : 1;                                      		// 0x0020 (0x0004) [0x0000000000000000] [0x00000010] 
	int                                                m_nPartialUnlocks;                                		// 0x0024 (0x0004) [0x0000000000000000]              
	unsigned char                                      m_eOrganisation;                                  		// 0x0028 (0x0001) [0x0000000000000000]              
	int                                                m_eContactIcon;                                   		// 0x002C (0x0004) [0x0000000000000000]              
	struct FString                                     m_sAudioType;                                     		// 0x0030 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                m_eDistrict;                                      		// 0x003C (0x0004) [0x0000000000000000]              
	struct FString                                     m_sContactBG;                                     		// 0x0040 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                m_eSpeciality;                                    		// 0x004C (0x0004) [0x0000000000000000]              
	float                                              m_fSpecialityWeight;                              		// 0x0050 (0x0004) [0x0000000000000000]              
	int                                                m_eMetaData[ 0x3 ];                               		// 0x0054 (0x000C) [0x0000000000000000]              
	unsigned long                                      m_bLeftAlignName : 1;                             		// 0x0060 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FGuid                                       m_nSecondaryKey;                                  		// 0x0064 (0x0010) [0x0000000000000000]              
};

// ScriptStruct APBGame.cSDDContact.ContactLevel
// 0x005C
struct FContactLevel
{
	int                                                m_eContactLevel;                                  		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                m_nLevel;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                m_eContact;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                m_nStandingThreshold;                             		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                m_nContactScore;                                  		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                m_eRewardPackage;                                 		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                m_eMissionType[ 0x4 ];                            		// 0x0018 (0x0010) [0x0000000000000000]              
	float                                              m_fOrganisationRewardMultiplier;                  		// 0x0028 (0x0004) [0x0000000000000000]              
	struct FString                                     m_sRewardMailSubject;                             		// 0x002C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sRewardMailBody;                                		// 0x0038 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sFemale_RewardMailSubject;                      		// 0x0044 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sFemale_RewardMailBody;                         		// 0x0050 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct APBGame.cSDDContact.ContactReferral
// 0x000C
struct FContactReferral
{
	int                                                m_eUnlockedContact;                               		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                m_eContactLevel;                                  		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                m_nPartialUnlockIndex;                            		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cSDDContact.Organisation
// 0x0030
struct FOrganisation
{
	unsigned char                                      m_eOrganisation;                                  		// 0x0000 (0x0001) [0x0000000000000000]              
	struct FString                                     m_sName;                                          		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                m_eOrganisationIcon;                              		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                m_eHUDIcon;                                       		// 0x0014 (0x0004) [0x0000000000000000]              
	unsigned char                                      m_eFaction;                                       		// 0x0018 (0x0001) [0x0000000000000000]              
	struct FString                                     m_sPicture;                                       		// 0x001C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                m_eOrganisationContact;                           		// 0x0028 (0x0004) [0x0000000000000000]              
	int                                                m_nSecondaryKey;                                  		// 0x002C (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cSDDCSA.ContextSensitiveActionBase
// 0x0035
struct FContextSensitiveActionBase
{
	unsigned char                                      m_eContextSensitiveActionBase;                    		// 0x0000 (0x0001) [0x0000000000000000]              
	unsigned long                                      m_bInvoked : 1;                                   		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bTimedDuration : 1;                             		// 0x0004 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      m_bIndefiniteDuration : 1;                        		// 0x0004 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned char                                      m_eInputType;                                     		// 0x0008 (0x0001) [0x0000000000000000]              
	unsigned long                                      m_bCancelsCrouch : 1;                             		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bProgressBar : 1;                               		// 0x000C (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      m_bCanResume : 1;                                 		// 0x000C (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      m_bInterruptInventory : 1;                        		// 0x000C (0x0004) [0x0000000000000000] [0x00000008] 
	int                                                m_eHUDReticuleHintIcon;                           		// 0x0010 (0x0004) [0x0000000000000000]              
	unsigned char                                      m_eAnimType;                                      		// 0x0014 (0x0001) [0x0000000000000000]              
	unsigned long                                      m_bMissionCSA : 1;                                		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bVolumeCSA : 1;                                 		// 0x0018 (0x0004) [0x0000000000000000] [0x00000002] 
	struct FString                                     m_sDisplayName;                                   		// 0x001C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                m_eBeginCSATutorialTrigger;                       		// 0x0028 (0x0004) [0x0000000000000000]              
	int                                                m_eEndCSATutorialTrigger;                         		// 0x002C (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bNoHideWeapon : 1;                              		// 0x0030 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bSmallTargetVolume : 1;                         		// 0x0030 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned char                                      m_eOpposingCSA;                                   		// 0x0034 (0x0001) [0x0000000000000000]              
};

// ScriptStruct APBGame.cSDDCSA.ContextSensitiveAction
// 0x004C
struct FContextSensitiveAction
{
	unsigned char                                      m_eContextSensitiveAction;                        		// 0x0000 (0x0001) [0x0000000000000000]              
	unsigned long                                      m_bAimCheck : 1;                                  		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              m_fAimDot;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bDistanceCheck : 1;                             		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              m_fInteractionDistance;                           		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              m_fVerticalInteractionDistance;                   		// 0x0014 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bIsAnimationDrivenAction : 1;                   		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bDefaultLineCheck : 1;                          		// 0x0018 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned char                                      m_eLineCheckType;                                 		// 0x001C (0x0001) [0x0000000000000000]              
	unsigned long                                      m_bSprintPriority : 1;                            		// 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bSingleInteractionPoint : 1;                    		// 0x0020 (0x0004) [0x0000000000000000] [0x00000002] 
	int                                                m_nPriorityLayer;                                 		// 0x0024 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bSmallTaskItem : 1;                             		// 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bMediumTaskItem : 1;                            		// 0x0028 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      m_bLargeTaskItem : 1;                             		// 0x0028 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned char                                      m_eDefaultAlignmentType;                          		// 0x002C (0x0001) [0x0000000000000000]              
	int                                                m_eDefaultAutoRouteData;                          		// 0x0030 (0x0004) [0x0000000000000000]              
	float                                              m_fHUDHintDistance;                               		// 0x0034 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bChecksUseAutoRouteData : 1;                    		// 0x0038 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              m_fPawnDirectionAimDotWeightingScalar;            		// 0x003C (0x0004) [0x0000000000000000]              
	float                                              m_fCameraDirectionAimDotWeightingScalar;          		// 0x0040 (0x0004) [0x0000000000000000]              
	float                                              m_fDistanceWeightingScalar;                       		// 0x0044 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bIsTargetedCSA : 1;                             		// 0x0048 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bSingleProgressBar : 1;                         		// 0x0048 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct APBGame.cSDDCSA.InvokedContextSensitiveAction
// 0x0008
struct FInvokedContextSensitiveAction
{
	unsigned char                                      m_eContextSensitiveAction;                        		// 0x0000 (0x0001) [0x0000000000000000]              
	float                                              m_fDuration;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cSDDCSA.CSA_ItemAssociation
// 0x0018
struct FCSA_ItemAssociation
{
	int                                                m_eCSA_ItemAssociation;                           		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned char                                      m_eContextSensitiveAction;                        		// 0x0004 (0x0001) [0x0000000000000000]              
	unsigned char                                      m_eFaction;                                       		// 0x0005 (0x0001) [0x0000000000000000]              
	int                                                m_eEquipmentType;                                 		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              m_fEffectivenessModifier;                         		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                m_eDefaultEquipmentAnimationType;                 		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                m_eItemAssociationCategory;                       		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cSDDCSA.CSA_ItemAssociationCategory
// 0x0010
struct FCSA_ItemAssociationCategory
{
	int                                                m_eCSA_ItemAssociationCategory;                   		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     m_sEffect;                                        		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct APBGame.cSDDCSA.CSA_IATState
// 0x000C
struct FCSA_IATState
{
	unsigned char                                      m_eCSA_IATState;                                  		// 0x0000 (0x0001) [0x0000000000000000]              
	unsigned char                                      m_eInteractiveActorType;                          		// 0x0001 (0x0001) [0x0000000000000000]              
	int                                                m_nMaxConcurrentUsersPerIP;                       		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                m_nMaxConcurrentUsersPerActor;                    		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cSDDCSA.CSA_IATStateAssociation
// 0x0018
struct FCSA_IATStateAssociation
{
	int                                                m_eCSA_IATStateAssociation;                       		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned char                                      m_eCSA_IATState;                                  		// 0x0004 (0x0001) [0x0000000000000000]              
	unsigned char                                      m_eContextSensitiveAction;                        		// 0x0005 (0x0001) [0x0000000000000000]              
	int                                                m_eInputMapping;                                  		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              m_fDuration;                                      		// 0x000C (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bOverridePriority : 1;                          		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                m_nPriorityLayer;                                 		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cSDDCSA.InteractiveActorType
// 0x0008
struct FInteractiveActorType
{
	unsigned char                                      m_eInteractiveActorType;                          		// 0x0000 (0x0001) [0x0000000000000000]              
	unsigned char                                      m_eInteractiveActorCategory;                      		// 0x0001 (0x0001) [0x0000000000000000]              
	float                                              m_Dummy;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cSDDCSA.CSA_EquipmentAnimationType
// 0x005C
struct FCSA_EquipmentAnimationType
{
	int                                                m_eCSA_EquipmentAnimationType;                    		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     m_sIntroAnim;                                     		// 0x0004 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sMainAnim1;                                     		// 0x0010 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sMainAnim2;                                     		// 0x001C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sMainAnim3;                                     		// 0x0028 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sOutroAnim;                                     		// 0x0034 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	unsigned long                                      m_bUseRootMotion : 1;                             		// 0x0040 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FString                                     m_sVFXKismetBrick;                                		// 0x0044 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	unsigned char                                      m_eOutroEndPoint;                                 		// 0x0050 (0x0001) [0x0000000000000000]              
	unsigned long                                      m_bCanMirror : 1;                                 		// 0x0054 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              m_fOutroDuration;                                 		// 0x0058 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cSDDCSA.CSA_EATVehicleAssociation
// 0x000C
struct FCSA_EATVehicleAssociation
{
	int                                                m_eItemAssociation;                               		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                m_eVehicleAnimationType;                          		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                m_eEquipmentAnimation;                            		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cSDDCSA.CSA_EATPropAssociation
// 0x0018
struct FCSA_EATPropAssociation
{
	int                                                m_eCSA_EATPropAssociation;                        		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                m_eItemAssociation;                               		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                m_ePropCategory;                                  		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                m_eEquipmentAnimation;                            		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                m_eAutoRouteData;                                 		// 0x0010 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bChecksUseAutoRouteLocation : 1;                		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct APBGame.cSDDCSA.CSA_TaskItemAnimationSet
// 0x0018
struct FCSA_TaskItemAnimationSet
{
	int                                                m_eCSA_TaskItemAnimationSet;                      		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned char                                      m_eCSA;                                           		// 0x0004 (0x0001) [0x0000000000000000]              
	unsigned char                                      m_eTaskItemSize;                                  		// 0x0005 (0x0001) [0x0000000000000000]              
	struct FString                                     m_sAnimName;                                      		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      m_bLogical : 1;                                   		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bUseAnimDuration : 1;                           		// 0x0014 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct APBGame.cSDDCSA.CSA_AutoRouteData
// 0x0054
struct FCSA_AutoRouteData
{
	int                                                m_eCSA_AutoRouteData;                             		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned char                                      m_eAutoRouteType;                                 		// 0x0004 (0x0001) [0x0000000000000000]              
	float                                              m_fOffsetRight;                                   		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              m_fOffsetForward;                                 		// 0x000C (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bRouteAlongNormal : 1;                          		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned char                                      m_eAlignmentType;                                 		// 0x0014 (0x0001) [0x0000000000000000]              
	struct FString                                     m_sSocketName[ 0x5 ];                             		// 0x0018 (0x003C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct APBGame.cSDDCSA.CSA_InputMapping
// 0x0010
struct FCSA_InputMapping
{
	int                                                m_eCSA_InputMapping;                              		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     m_sKeyBinding;                                    		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct APBGame.cSDDDisplayPoint.DisplayPoint
// 0x005C
struct FDisplayPoint
{
	int                                                m_eDisplayPoint;                                  		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     m_sTitle;                                         		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      m_eType;                                          		// 0x0010 (0x0001) [0x0000000000000000]              
	unsigned char                                      m_eActivationType;                                		// 0x0011 (0x0001) [0x0000000000000000]              
	unsigned long                                      m_bCriminal : 1;                                  		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bEnforcer : 1;                                  		// 0x0014 (0x0004) [0x0000000000000000] [0x00000002] 
	struct FString                                     m_sDescription;                                   		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sScreenShot;                                    		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                m_eDistrict;                                      		// 0x0030 (0x0004) [0x0000000000000000]              
	struct FString                                     m_sShortTitle;                                    		// 0x0034 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sObtainedBy;                                    		// 0x0040 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FGuid                                       m_nSecondaryKey;                                  		// 0x004C (0x0010) [0x0000000000000000]              
};

// ScriptStruct APBGame.cSDDDisplayPoint.GraffitiDisplayPoint
// 0x000C
struct FGraffitiDisplayPoint
{
	int                                                m_eDisplayPoint;                                  		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned char                                      m_eInteractionType;                               		// 0x0004 (0x0001) [0x0000000000000000]              
	float                                              m_fSprayDurationOverride;                         		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cSDDDistrict.District
// 0x0090
struct FDistrict
{
	int                                                m_eDistrict;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned char                                      m_eDistrictType;                                  		// 0x0004 (0x0001) [0x0000000000000000]              
	struct FString                                     m_sDisplayName;                                   		// 0x0008 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sAudioBanks;                                    		// 0x0014 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sMapTexture;                                    		// 0x0020 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                m_nCentreX;                                       		// 0x002C (0x0004) [0x0000000000000000]              
	int                                                m_nCentreY;                                       		// 0x0030 (0x0004) [0x0000000000000000]              
	int                                                m_nDiameter;                                      		// 0x0034 (0x0004) [0x0000000000000000]              
	int                                                m_eCriminalOrganisationContact;                   		// 0x0038 (0x0004) [0x0000000000000000]              
	int                                                m_eEnforcerOrganisationContact;                   		// 0x003C (0x0004) [0x0000000000000000]              
	struct FString                                     m_sDiffuseTexture;                                		// 0x0040 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sDistanceFieldTexture;                          		// 0x004C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sDistrictMap;                                   		// 0x0058 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	unsigned long                                      m_bReleaseDistrict : 1;                           		// 0x0064 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FString                                     m_sAudioReflectionData;                           		// 0x0068 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                m_eDefaultDistrictInstanceType;                   		// 0x0074 (0x0004) [0x0000000000000000]              
	int                                                m_eTutorialDistrictInstanceType;                  		// 0x0078 (0x0004) [0x0000000000000000]              
	struct FString                                     m_sDescription;                                   		// 0x007C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	float                                              m_fnMaxDistanceToPedestrianDestroyNode;           		// 0x0088 (0x0004) [0x0000000000000000]              
	int                                                m_nSecondaryKey;                                  		// 0x008C (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cSDDDistrict.DistrictType
// 0x0009
struct FDistrictType
{
	unsigned char                                      m_eDistrictType;                                  		// 0x0000 (0x0001) [0x0000000000000000]              
	unsigned long                                      m_bIsSocial : 1;                                  		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned char                                      m_eFactionAllowed;                                		// 0x0008 (0x0001) [0x0000000000000000]              
};

// ScriptStruct APBGame.cSDDDistrict.Faction
// 0x003C
struct FFaction
{
	unsigned char                                      m_eFaction;                                       		// 0x0000 (0x0001) [0x0000000000000000]              
	int                                                m_eSpawnZoneMarker;                               		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                m_eVolumeColour;                                  		// 0x0008 (0x0004) [0x0000000000000000]              
	struct FString                                     m_sDisplayName;                                   		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sSkinName;                                      		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sFactionInfoDisplayName;                        		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sFactionInfoDescription;                        		// 0x0030 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct APBGame.cSDDDistrict.FactionRestrictedLocation
// 0x000C
struct FFactionRestrictedLocation
{
	int                                                m_eFactionRestrictedLocation;                     		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned char                                      m_eFaction;                                       		// 0x0004 (0x0001) [0x0000000000000000]              
	int                                                m_nPadding_Ignore_Me;                             		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cSDDDistrict.DistrictRuleSet
// 0x0058
struct FDistrictRuleSet
{
	int                                                m_eDistrictRuleSet;                               		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned char                                      m_ePvPDamage;                                     		// 0x0004 (0x0001) [0x0000000000000000]              
	unsigned char                                      m_eCharacterCollidesWithCharacter;                		// 0x0005 (0x0001) [0x0000000000000000]              
	unsigned char                                      m_eVehicleCollidesWithVehicle;                    		// 0x0006 (0x0001) [0x0000000000000000]              
	unsigned char                                      m_eVehicleCollidesWithCharacter;                  		// 0x0007 (0x0001) [0x0000000000000000]              
	unsigned char                                      m_ePlayerVehicleAccess;                           		// 0x0008 (0x0001) [0x0000000000000000]              
	unsigned long                                      m_bDeployedVehicleAccessOption : 1;               		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bAlwaysAccessInventory : 1;                     		// 0x000C (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      m_bCustomisationLimiter : 1;                      		// 0x000C (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      m_bUseMasterSpawnZoneOnly : 1;                    		// 0x000C (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned char                                      m_eShowPlayerRadarPings;                          		// 0x0010 (0x0001) [0x0000000000000000]              
	unsigned long                                      m_bShowThreatInWorldSpace : 1;                    		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bDistinguishFactionNameColours : 1;             		// 0x0014 (0x0004) [0x0000000000000000] [0x00000002] 
	float                                              m_fMissionCashMultiplier;                         		// 0x0018 (0x0004) [0x0000000000000000]              
	float                                              m_fMissionContactStandingMultiplier;              		// 0x001C (0x0004) [0x0000000000000000]              
	float                                              m_fMissionOrganisationStandingMultiplier;         		// 0x0020 (0x0004) [0x0000000000000000]              
	float                                              m_fIntraActivityCashMultiplier;                   		// 0x0024 (0x0004) [0x0000000000000000]              
	float                                              m_fIntraActivityContactStandingMultiplier;        		// 0x0028 (0x0004) [0x0000000000000000]              
	float                                              m_fIntraActivityOrganisationStandingMultiplier;   		// 0x002C (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bContactReferralsOn : 1;                        		// 0x0030 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bCountsTowardsLeagues : 1;                      		// 0x0030 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      m_bBountiesAvailable : 1;                         		// 0x0030 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned char                                      m_eWitnessingFunctionality;                       		// 0x0034 (0x0001) [0x0000000000000000]              
	unsigned char                                      m_eHeatFunctionality;                             		// 0x0035 (0x0001) [0x0000000000000000]              
	unsigned long                                      m_bHUDShowRadarPings : 1;                         		// 0x0038 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bHUDShowThreatInWorldspace : 1;                 		// 0x0038 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      m_bIncompleteTutorialAvailable : 1;               		// 0x0038 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned char                                      m_eTutorialBypassBehaviour;                       		// 0x003C (0x0001) [0x0000000000000000]              
	unsigned char                                      m_eDistrictTypeInfo;                              		// 0x003D (0x0001) [0x0000000000000000]              
	struct FString                                     m_sDisplayName;                                   		// 0x0040 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      m_bRelease : 1;                                   		// 0x004C (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                m_nMissionDelay;                                  		// 0x0050 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bAllowAllUpgrades : 1;                          		// 0x0054 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct APBGame.cSDDDistrict.GameplayModeTimerType
// 0x000C
struct FGameplayModeTimerType
{
	int                                                m_eGameplayModeTimerType;                         		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                m_eDistrictRuleSet;                               		// 0x0004 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bTotal : 1;                                     		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bDirectedMission : 1;                           		// 0x0008 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      m_bOtherPvP : 1;                                  		// 0x0008 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      m_bNotInEditor : 1;                               		// 0x0008 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      m_bMusicEditor : 1;                               		// 0x0008 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      m_bSymbolEditor : 1;                              		// 0x0008 (0x0004) [0x0000000000000000] [0x00000020] 
	unsigned long                                      m_bCharacterEditor : 1;                           		// 0x0008 (0x0004) [0x0000000000000000] [0x00000040] 
	unsigned long                                      m_bVehicleEditor : 1;                             		// 0x0008 (0x0004) [0x0000000000000000] [0x00000080] 
	unsigned long                                      m_bClothingEditor : 1;                            		// 0x0008 (0x0004) [0x0000000000000000] [0x00000100] 
	unsigned long                                      m_bMaxHeat : 1;                                   		// 0x0008 (0x0004) [0x0000000000000000] [0x00000200] 
};

// ScriptStruct APBGame.cSDDDistrict.DistrictInstanceType
// 0x0034
struct FDistrictInstanceType
{
	int                                                m_eDistrictInstanceType;                          		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     m_sDisplayName;                                   		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sDescription;                                   		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                m_eDistrict;                                      		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                m_eDistrictRuleSet;                               		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                m_eDistrictLanguage;                              		// 0x0024 (0x0004) [0x0000000000000000]              
	int                                                m_eDistrictPlayStyle;                             		// 0x0028 (0x0004) [0x0000000000000000]              
	int                                                m_eDistrictRating;                                		// 0x002C (0x0004) [0x0000000000000000]              
	int                                                m_nSecondaryKey;                                  		// 0x0030 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cSDDDistrict.DistrictLanguage
// 0x0028
struct FDistrictLanguage
{
	int                                                m_eDistrictLanguage;                              		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     m_sDisplayName;                                   		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sLocalisationINI;                               		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sLanguageShortName;                             		// 0x001C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct APBGame.cSDDDistrict.DistrictLeague
// 0x0020
struct FDistrictLeague
{
	int                                                m_eDistrictLeague;                                		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     m_sDisplayName;                                   		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                m_eDistrict;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                m_eDistrictRuleSet;                               		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                m_nVaultID;                                       		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                m_nSecondaryKey;                                  		// 0x001C (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cSDDDistrict.DistrictPlaystyle
// 0x001C
struct FDistrictPlaystyle
{
	int                                                m_eDistrictPlayStyle;                             		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     m_sDisplayName;                                   		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sDescription;                                   		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct APBGame.cSDDDistrict.DistrictFirstEntry
// 0x0010
struct FDistrictFirstEntry
{
	unsigned char                                      m_eDistrictFirstEntry;                            		// 0x0000 (0x0001) [0x0000000000000000]              
	int                                                m_eDistrict;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                m_eRuleSet;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                m_ePlaystyle;                                     		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cSDDDistrict.DistrictRating
// 0x000C
struct FDistrictRating
{
	int                                                m_eDistrictRating;                                		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                m_nMinRating;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                m_nMaxRating;                                     		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cSDDGameplayEvent.GameplayEvent
// 0x0060
struct FGameplayEvent
{
	int                                                m_eGameplayEvent;                                 		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned char                                      m_eGameplayEventCategory;                         		// 0x0004 (0x0001) [0x0000000000000000]              
	int                                                m_eObject;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                m_eObjectSet;                                     		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                m_eObjectStateSet;                                		// 0x0010 (0x0004) [0x0000000000000000]              
	unsigned char                                      m_eFaction;                                       		// 0x0014 (0x0001) [0x0000000000000000]              
	unsigned char                                      m_ePvP;                                           		// 0x0015 (0x0001) [0x0000000000000000]              
	int                                                m_nA;                                             		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                m_nB;                                             		// 0x001C (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bRequireA : 1;                                  		// 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bRequireB : 1;                                  		// 0x0020 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned char                                      m_eCSA;                                           		// 0x0024 (0x0001) [0x0000000000000000]              
	int                                                m_nPrecedence;                                    		// 0x0028 (0x0004) [0x0000000000000000]              
	unsigned char                                      m_eMutuallyExclusive;                             		// 0x002C (0x0001) [0x0000000000000000]              
	float                                              m_fExpiryPeriod;                                  		// 0x0030 (0x0004) [0x0000000000000000]              
	int                                                m_eResultantHeatChange;                           		// 0x0034 (0x0004) [0x0000000000000000]              
	int                                                m_eResultantWitnessableCrime;                     		// 0x0038 (0x0004) [0x0000000000000000]              
	int                                                m_eResultantWitnessableCrimeEnd;                  		// 0x003C (0x0004) [0x0000000000000000]              
	int                                                m_eResultantReward;                               		// 0x0040 (0x0004) [0x0000000000000000]              
	int                                                m_eTrackedActivity;                               		// 0x0044 (0x0004) [0x0000000000000000]              
	int                                                m_eActivityMessage[ 0x3 ];                        		// 0x0048 (0x000C) [0x0000000000000000]              
	int                                                m_eActivityMessageOnReward;                       		// 0x0054 (0x0004) [0x0000000000000000]              
	int                                                m_eHelpPopup;                                     		// 0x0058 (0x0004) [0x0000000000000000]              
	int                                                m_eDisabledRuleSets;                              		// 0x005C (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cSDDGameplayEvent.GameplayEventCategory
// 0x0008
struct FGameplayEventCategory
{
	unsigned char                                      m_eGameplayEventCategory;                         		// 0x0000 (0x0001) [0x0000000000000000]              
	int                                                m_nDummy;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cSDDGameplayEvent.GameplayObject
// 0x0014
struct FGameplayObject
{
	int                                                m_eGameplayObject;                                		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                m_eMemberOf[ 0x4 ];                               		// 0x0004 (0x0010) [0x0000000000000000]              
};

// ScriptStruct APBGame.cSDDGameplayEvent.GameplayObjectFixed
// 0x0004
struct FGameplayObjectFixed
{
	int                                                m_eGameplayObject;                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cSDDGameplayEvent.GameplayObjectSet
// 0x0008
struct FGameplayObjectSet
{
	int                                                m_eGameplayObjectSet;                             		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                m_nDummy;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cSDDGameplayEvent.GameplayState
// 0x0014
struct FGameplayState
{
	unsigned char                                      m_eGameplayState;                                 		// 0x0000 (0x0001) [0x0000000000000000]              
	int                                                m_eMemberOf[ 0x4 ];                               		// 0x0004 (0x0010) [0x0000000000000000]              
};

// ScriptStruct APBGame.cSDDGameplayEvent.GameplayStateSet
// 0x0004
struct FGameplayStateSet
{
	int                                                m_eGameplayStateSet;                              		// 0x0000 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cSDDGameplayEvent.IntraActivityReward
// 0x0010
struct FIntraActivityReward
{
	int                                                m_eIntraActivityReward;                           		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                m_nCash;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                m_nContactStanding;                               		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                m_nOrganisationStanding;                          		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cSDDGameplayEvent.ActivityMessage
// 0x0020
struct FActivityMessage
{
	int                                                m_eActivityMessage;                               		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                m_ePriority;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
	unsigned char                                      m_eLocation;                                      		// 0x0008 (0x0001) [0x0000000000000000]              
	unsigned char                                      m_eRelevance;                                     		// 0x0009 (0x0001) [0x0000000000000000]              
	unsigned char                                      m_eExclude;                                       		// 0x000A (0x0001) [0x0000000000000000]              
	unsigned char                                      m_eValidFaction;                                  		// 0x000B (0x0001) [0x0000000000000000]              
	int                                                m_eHUDMessage;                                    		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                m_eParamType[ 0x4 ];                              		// 0x0010 (0x0010) [0x0000000000000000]              
};

// ScriptStruct APBGame.cSDDGameplayEvent.ActivityMessagePriority
// 0x0008
struct FActivityMessagePriority
{
	int                                                m_eActivityMessagePriority;                       		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              m_fDelayMax;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cSDDGameplayEvent.ActivityMessageParameterType
// 0x0018
struct FActivityMessageParameterType
{
	int                                                m_eActivityMessageParameterType;                  		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned char                                      m_eConversion;                                    		// 0x0004 (0x0001) [0x0000000000000000]              
	struct FString                                     m_sLocalisationToken;                             		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                m_nDebugParam;                                    		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cSDDGameplayEvent.GameplayEvent_ModeTimer
// 0x0008
struct FGameplayEvent_ModeTimer
{
	int                                                m_eGameplayEvent;                                 		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                m_eChildRule;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cSDDGameplayEvent.GameplayEvent_VehicleHealth
// 0x0005
struct FGameplayEvent_VehicleHealth
{
	int                                                m_eGameplayEvent;                                 		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned char                                      m_eChildRule;                                     		// 0x0004 (0x0001) [0x0000000000000000]              
};

// ScriptStruct APBGame.cSDDGameplayEvent.GameplayEvent_TaskTarget
// 0x0005
struct FGameplayEvent_TaskTarget
{
	int                                                m_eGameplayEvent;                                 		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned char                                      m_eChildRule;                                     		// 0x0004 (0x0001) [0x0000000000000000]              
};

// ScriptStruct APBGame.cSDDGameplayEvent.GameplayEvent_Mission
// 0x0008
struct FGameplayEvent_Mission
{
	int                                                m_eGameplayEvent;                                 		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                m_eChildRule;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cSDDGameplayEvent.GameplayEvent_InventoryOperation
// 0x0005
struct FGameplayEvent_InventoryOperation
{
	int                                                m_eGameplayEvent;                                 		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned char                                      m_eChildRule;                                     		// 0x0004 (0x0001) [0x0000000000000000]              
};

// ScriptStruct APBGame.cSDDGameplayEvent.GameplayVehicleHealthRange
// 0x000C
struct FGameplayVehicleHealthRange
{
	unsigned char                                      m_eGameplayVehicleHealthRange;                    		// 0x0000 (0x0001) [0x0000000000000000]              
	int                                                m_nHealthMin;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                m_nHealthMax;                                     		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cSDDGameplayEvent.GameplayEventRuleSetExclusion
// 0x002C
struct FGameplayEventRuleSetExclusion
{
	int                                                m_eGameplayEventRuleSetExclusion;                 		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                m_eRuleSet[ 0xA ];                                		// 0x0004 (0x0028) [0x0000000000000000]              
};

// ScriptStruct APBGame.cSDDHeat.NotorietyLevel
// 0x0008
struct FNotorietyLevel
{
	int                                                m_eNotorietyLevel;                                		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                m_eHeatLevel;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cSDDHeat.NotorietyEffect
// 0x001C
struct FNotorietyEffect
{
	int                                                m_eNotorietyEffect;                               		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              m_fQuantity;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                m_eForceMinLevel;                                 		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                m_eForceMaxLevel;                                 		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                m_nNPCWitnessersCap;                              		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                m_nEnforcerWitnessersCap;                         		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                m_eNotorietyLevelLimit;                           		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cSDDHeat.PrestigeLevel
// 0x0008
struct FPrestigeLevel
{
	int                                                m_ePrestigeLevel;                                 		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                m_eHeatLevel;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cSDDHeat.PrestigeEffect
// 0x0014
struct FPrestigeEffect
{
	int                                                m_ePrestigeEffect;                                		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              m_fQuantity;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                m_eForceMinLevel;                                 		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                m_eForceMaxLevel;                                 		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                m_ePrestigeLevelLimit;                            		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cSDDHeat.HeatLevel
// 0x0024
struct FHeatLevel
{
	int                                                m_eHeatLevel;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                m_nLevel;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              m_fThreshold;                                     		// 0x0008 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bBreaksContactPledges : 1;                      		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bDispatchMission : 1;                           		// 0x000C (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      m_bDispatchBounty : 1;                            		// 0x000C (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      m_bPVPUnlockedToAllOpposingFaction : 1;           		// 0x000C (0x0004) [0x0000000000000000] [0x00000008] 
	float                                              m_fRewardMultiplier;                              		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                m_eHUDTexture;                                    		// 0x0014 (0x0004) [0x0000000000000000]              
	struct FString                                     m_sDescription;                                   		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct APBGame.cSDDHeat.HeatActionAffect
// 0x0010
struct FHeatActionAffect
{
	int                                                m_eHeatActionAffect;                              		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                m_eNotorietyEffect;                               		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                m_ePrestigeEffect;                                		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              m_fEscapePenaltyTimer;                            		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cSDDHeat.WitnessableCrime
// 0x001D
struct FWitnessableCrime
{
	int                                                m_eWitnessableCrime;                              		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                m_ePrestigeForWitnessing;                         		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                m_eNotorietyForBeingWitnessed;                    		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              m_fHotListDuration;                               		// 0x000C (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bContinuous : 1;                                		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bNoDirectWitness : 1;                           		// 0x0010 (0x0004) [0x0000000000000000] [0x00000002] 
	float                                              m_fEscapePenaltyTimer;                            		// 0x0014 (0x0004) [0x0000000000000000]              
	float                                              m_fNPCWitnessableDuration;                        		// 0x0018 (0x0004) [0x0000000000000000]              
	unsigned char                                      m_eTriggeredNPCWorldEvent;                        		// 0x001C (0x0001) [0x0000000000000000]              
};

// ScriptStruct APBGame.cSDDHeat.HeatConstant
// 0x0018
struct FHeatConstant
{
	unsigned char                                      m_eHeatConstant;                                  		// 0x0000 (0x0001) [0x0000000000000000]              
	struct FString                                     m_sComment;                                       		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              m_fCriminalValue;                                 		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              m_fEnforcerValue;                                 		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cSDDHostingConfigFile.HostingConfigFile
// 0x0018
struct FHostingConfigFile
{
	unsigned char                                      m_eHostingConfigFile;                             		// 0x0000 (0x0001) [0x0000000000000000]              
	unsigned char                                      m_eType;                                          		// 0x0001 (0x0001) [0x0000000000000000]              
	unsigned long                                      m_bPersistent : 1;                                		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                m_nPersistentId;                                  		// 0x0008 (0x0004) [0x0000000000000000]              
	struct FString                                     m_sFilename;                                      		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct APBGame.cSDDInteractionPoint.UIInteractionPoint
// 0x001C
struct FUIInteractionPoint
{
	int                                                m_eUIInteractionPoint;                            		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                m_eHUDMarker;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
	unsigned char                                      m_eCSA;                                           		// 0x0008 (0x0001) [0x0000000000000000]              
	struct FString                                     m_sInfoBrowserText;                               		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                m_eInfoBrowserIcon;                               		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cSDDLCEditor.PopulationTotal
// 0x0014
struct FPopulationTotal
{
	int                                                m_nPopulationTotal;                               		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned char                                      m_eTOD;                                           		// 0x0004 (0x0001) [0x0000000000000000]              
	int                                                m_nTotalPedestrians;                              		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                m_nTotalVehicles;                                 		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                m_eDistrictType;                                  		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cSDDLCEditor.NPCType
// 0x0012
struct FNPCType
{
	int                                                m_eNPCType;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              m_fDebugColour_R;                                 		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              m_fDebugColour_G;                                 		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              m_fDebugColour_B;                                 		// 0x000C (0x0004) [0x0000000000000000]              
	unsigned char                                      m_eNPCCategory;                                   		// 0x0010 (0x0001) [0x0000000000000000]              
	unsigned char                                      m_eGender;                                        		// 0x0011 (0x0001) [0x0000000000000000]              
};

// ScriptStruct APBGame.cSDDLCEditor.NPCType_TOD
// 0x0009
struct FNPCType_TOD
{
	int                                                m_eNPCType_TOD;                                   		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                m_eNPCType;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	unsigned char                                      m_eTOD;                                           		// 0x0008 (0x0001) [0x0000000000000000]              
};

// ScriptStruct APBGame.cSDDLCEditor.NPCType_TOD_District
// 0x0010
struct FNPCType_TOD_District
{
	int                                                m_eNPCType_TOD_District;                          		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                m_eNPCType_TOD;                                   		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                m_eDistrict;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              m_fPopulationPercentage;                          		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cSDDLCEditor.VignetteDescriptor
// 0x0014
struct FVignetteDescriptor
{
	int                                                m_eVignetteDescriptor;                            		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     m_sPackage;                                       		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              m_fMaxCancelDistanceFromVNode;                    		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cSDDLCEditor.VehicleColour
// 0x0018
struct FVehicleColour
{
	unsigned char                                      m_eVehicleColour;                                 		// 0x0000 (0x0001) [0x0000000000000000]              
	int                                                m_nRedComponent;                                  		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                m_nGreenComponent;                                		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                m_nBlueComponent;                                 		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              m_fProbability;                                   		// 0x0010 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bIsMetallic : 1;                                		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct APBGame.cSDDLCEditor.NPCEvent
// 0x0008
struct FNPCEvent
{
	unsigned char                                      m_eNPCEvent;                                      		// 0x0000 (0x0001) [0x0000000000000000]              
	int                                                m_nIgnoreMe;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cSDDLCEditor.NPCEvent_AllowedToOverride
// 0x0008
struct FNPCEvent_AllowedToOverride
{
	unsigned char                                      m_eNPCEvent;                                      		// 0x0000 (0x0001) [0x0000000000000000]              
	int                                                m_nIgnoreMe;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cSDDLCEditor.NPCReaction
// 0x0008
struct FNPCReaction
{
	unsigned char                                      m_eNPCReaction;                                   		// 0x0000 (0x0001) [0x0000000000000000]              
	int                                                m_nPriority;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cSDDLCEditor.NPCReaction_AllowedToOverride
// 0x0008
struct FNPCReaction_AllowedToOverride
{
	unsigned char                                      m_eNPCReaction;                                   		// 0x0000 (0x0001) [0x0000000000000000]              
	int                                                m_nPriority;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cSDDLCEditor.TOD_Event
// 0x0006
struct FTOD_Event
{
	int                                                m_eTOD_Event;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned char                                      m_eTOD;                                           		// 0x0004 (0x0001) [0x0000000000000000]              
	unsigned char                                      m_eEvent;                                         		// 0x0005 (0x0001) [0x0000000000000000]              
};

// ScriptStruct APBGame.cSDDLCEditor.TOD_Event_AllowedToOverride
// 0x000C
struct FTOD_Event_AllowedToOverride
{
	int                                                m_eTOD_Event;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned char                                      m_eTOD;                                           		// 0x0004 (0x0001) [0x0000000000000000]              
	int                                                m_eEvent_AllowedToOverride;                       		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cSDDLCEditor.Default_TOD_Behaviour
// 0x000C
struct FDefault_TOD_Behaviour
{
	int                                                m_eTOD_Event;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned char                                      m_eReaction;                                      		// 0x0004 (0x0001) [0x0000000000000000]              
	float                                              m_fLikelihood;                                    		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cSDDLCEditor.NPC_TOD_Behaviour
// 0x000C
struct FNPC_TOD_Behaviour
{
	int                                                m_eNPC_TOD_Event;                                 		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                m_eReaction;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              m_fLikelihood;                                    		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cSDDLCEditor.NPC_TOD_Event
// 0x000C
struct FNPC_TOD_Event
{
	int                                                m_eNPC_TOD_Event;                                 		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                m_eNPCType;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                m_eTOD_Event;                                     		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cSDDLCEditor.NPC_ColourScheme
// 0x0014
struct FNPC_ColourScheme
{
	int                                                m_eNPCType;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                m_nColourIndex;                                   		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              m_fR;                                             		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              m_fG;                                             		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              m_fB;                                             		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cSDDLCEditor.PedestrianTypeRestriction
// 0x000C
struct FPedestrianTypeRestriction
{
	int                                                m_nPedestrianTypeRestriction;                     		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                m_eNPCType;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                m_nNumConcurrentSetupTypes;                       		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cSDDLCEditor.VehicleCategory
// 0x0014
struct FVehicleCategory
{
	int                                                m_eVehicleCategory;                               		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              m_fMaxLength;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              m_fMaxWidth;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              m_fMaxHeight;                                     		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              m_fHairSquash;                                    		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cSDDLCEditor.VehicleCategoryRestriction
// 0x000C
struct FVehicleCategoryRestriction
{
	int                                                m_nVehicleCategoryRestriction;                    		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                m_eVehicleCategory;                               		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                m_nNumConcurrentSetupTypes;                       		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cSDDLCEditor.PedestrianAsset
// 0x0025
struct FPedestrianAsset
{
	int                                                m_ePedestrianAsset;                               		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                m_eRaceType;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FString                                     m_sAsset;                                         		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                m_eAudioType;                                     		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                m_eWalkStyle;                                     		// 0x0018 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bHighHeels : 1;                                 		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bShoeLaces : 1;                                 		// 0x001C (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      m_bWristWatch : 1;                                		// 0x001C (0x0004) [0x0000000000000000] [0x00000004] 
	int                                                m_eNPCType;                                       		// 0x0020 (0x0004) [0x0000000000000000]              
	unsigned char                                      m_ePedestrianPaletteType;                         		// 0x0024 (0x0001) [0x0000000000000000]              
};

// ScriptStruct APBGame.cSDDLCEditor.RaceInfo
// 0x0018
struct FRaceInfo
{
	int                                                m_eRaceInfo;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                m_eRaceType;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                m_nColourIndex;                                   		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              m_fR;                                             		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              m_fG;                                             		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              m_fB;                                             		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cSDDLCEditor.RaceType
// 0x0010
struct FRaceType
{
	int                                                m_eRaceType;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     m_sName;                                          		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct APBGame.cSDDLCEditor.NPCAudioType
// 0x0040
struct FNPCAudioType
{
	int                                                m_eNPCAudioType;                                  		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     m_sVoiceSwitchValue;                              		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sClothingFootwearSwitchValue;                   		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sClothingArmsSwitchValue;                       		// 0x001C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sClothingLegsSwitchValue;                       		// 0x0028 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sClothingAccessoriesSwitchValue;                		// 0x0034 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct APBGame.cSDDLCEditor.TrafficLightDuration
// 0x0048
struct FTrafficLightDuration
{
	int                                                m_eTrafficLightDuration;                          		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                m_eDistrict;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              m_fVehicle_OneLaneMin;                            		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              m_fVehicle_OneLaneMax;                            		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              m_fVehicle_TwoLaneMin;                            		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              m_fVehicle_TwoLaneMax;                            		// 0x0014 (0x0004) [0x0000000000000000]              
	float                                              m_fVehicle_ThreeLaneMin;                          		// 0x0018 (0x0004) [0x0000000000000000]              
	float                                              m_fVehicle_ThreeLaneMax;                          		// 0x001C (0x0004) [0x0000000000000000]              
	float                                              m_fVehicle_FourLaneMin;                           		// 0x0020 (0x0004) [0x0000000000000000]              
	float                                              m_fVehicle_FourLaneMax;                           		// 0x0024 (0x0004) [0x0000000000000000]              
	float                                              m_fPed_OneLaneMin;                                		// 0x0028 (0x0004) [0x0000000000000000]              
	float                                              m_fPed_OneLaneMax;                                		// 0x002C (0x0004) [0x0000000000000000]              
	float                                              m_fPed_TwoLaneMin;                                		// 0x0030 (0x0004) [0x0000000000000000]              
	float                                              m_fPed_TwoLaneMax;                                		// 0x0034 (0x0004) [0x0000000000000000]              
	float                                              m_fPed_ThreeLaneMin;                              		// 0x0038 (0x0004) [0x0000000000000000]              
	float                                              m_fPed_ThreeLaneMax;                              		// 0x003C (0x0004) [0x0000000000000000]              
	float                                              m_fPed_FourLaneMin;                               		// 0x0040 (0x0004) [0x0000000000000000]              
	float                                              m_fPed_FourLaneMax;                               		// 0x0044 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cSDDLCEditor.PedWalkAndRunVariation
// 0x001C
struct FPedWalkAndRunVariation
{
	int                                                m_ePedWalkAndRunVariation;                        		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     m_sAnimation;                                     		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              m_fBaseSpeed;                                     		// 0x0010 (0x0004) [0x0000000000000000]              
	unsigned char                                      m_eGender;                                        		// 0x0014 (0x0001) [0x0000000000000000]              
	int                                                m_ePedAvoidAnimationCategory;                     		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cSDDLCEditor.PedestrianPaletteColour
// 0x0014
struct FPedestrianPaletteColour
{
	unsigned char                                      m_ePedestrianPaletteType;                         		// 0x0000 (0x0001) [0x0000000000000000]              
	int                                                m_nColourIndex;                                   		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              m_fRed;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              m_fGreen;                                         		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              m_fBlue;                                          		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cSDDLCEditor.PedAvoidAnimation
// 0x001C
struct FPedAvoidAnimation
{
	int                                                m_eAvoidAnimationCategory;                        		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     m_sAvoidAnimationLeft;                            		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sAvoidAnimationRight;                           		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct APBGame.cSDDLCEditor.PedAvoidAnimationCategory
// 0x0004
struct FPedAvoidAnimationCategory
{
	int                                                m_ePedAvoidAnimationCategory;                     		// 0x0000 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cSDDLCEditor.PedestrianTTIReaction
// 0x0028
struct FPedestrianTTIReaction
{
	unsigned char                                      m_ePedestrianTTIReaction;                         		// 0x0000 (0x0001) [0x0000000000000000]              
	unsigned char                                      m_eWhenCancelled;                                 		// 0x0001 (0x0001) [0x0000000000000000]              
	unsigned char                                      m_eWhenCompleted;                                 		// 0x0002 (0x0001) [0x0000000000000000]              
	struct FString                                     m_sStartAudioEvent;                               		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sCompleteAudioEvent;                            		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sCancelAudioEvent;                              		// 0x001C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct APBGame.cSDDLCEditor.PedestrianTTIAnimation
// 0x0010
struct FPedestrianTTIAnimation
{
	unsigned char                                      m_ePedestrianTTIReaction;                         		// 0x0000 (0x0001) [0x0000000000000000]              
	unsigned char                                      m_ePlayerAnimType;                                		// 0x0001 (0x0001) [0x0000000000000000]              
	struct FString                                     m_sNPCAnimation;                                  		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct APBGame.cSDDLeague.League
// 0x0020
struct FLeague
{
	int                                                m_eLeague;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     m_sDisplayName;                                   		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      m_eActivity;                                      		// 0x0010 (0x0001) [0x0000000000000000]              
	unsigned char                                      m_eScope;                                         		// 0x0011 (0x0001) [0x0000000000000000]              
	unsigned char                                      m_eEntity;                                        		// 0x0012 (0x0001) [0x0000000000000000]              
	unsigned char                                      m_eCycle;                                         		// 0x0013 (0x0001) [0x0000000000000000]              
	int                                                m_eFirstRank;                                     		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                m_nNumRanks;                                      		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                m_eHUDTextureIcon;                                		// 0x001C (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cSDDLeague.LeagueActivity
// 0x0018
struct FLeagueActivity
{
	unsigned char                                      m_eLeagueActivity;                                		// 0x0000 (0x0001) [0x0000000000000000]              
	struct FString                                     m_sDisplayName;                                   		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                m_nID;                                            		// 0x0010 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bDecimal : 1;                                   		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct APBGame.cSDDLeague.LeagueEntity
// 0x0014
struct FLeagueEntity
{
	unsigned char                                      m_eLeagueEntity;                                  		// 0x0000 (0x0001) [0x0000000000000000]              
	struct FString                                     m_sDisplayName;                                   		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                m_nID;                                            		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cSDDLeague.LeagueCycle
// 0x0018
struct FLeagueCycle
{
	unsigned char                                      m_eLeagueCycle;                                   		// 0x0000 (0x0001) [0x0000000000000000]              
	struct FString                                     m_sDisplayName;                                   		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                m_nDisplayPointRewardValidHours;                  		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                m_nID;                                            		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cSDDLeague.LeagueRank
// 0x0020
struct FLeagueRank
{
	int                                                m_eLeagueRank;                                    		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     m_sTitle;                                         		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                m_eReward;                                        		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                m_eDisplayPoint[ 0x3 ];                           		// 0x0014 (0x000C) [0x0000000000000000]              
};

// ScriptStruct APBGame.cSDDLeague.LeagueScope
// 0x0014
struct FLeagueScope
{
	unsigned char                                      m_eLeagueScope;                                   		// 0x0000 (0x0001) [0x0000000000000000]              
	struct FString                                     m_sDisplayName;                                   		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                m_nID;                                            		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cSDDLeague.LeagueHistoryMilestone
// 0x0014
struct FLeagueHistoryMilestone
{
	int                                                m_eLeagueHistoryMilestone;                        		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                m_eLeague;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	unsigned char                                      m_eType;                                          		// 0x0008 (0x0001) [0x0000000000000000]              
	int                                                m_nNumber;                                        		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                m_eReward;                                        		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cSDDMissionJustification.MissionCriminalContactJustification
// 0x0011
struct FMissionCriminalContactJustification
{
	int                                                m_eMissionCriminalContactJustification;           		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     m_sJustificationTitle;                            		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      m_eTimeOfDay;                                     		// 0x0010 (0x0001) [0x0000000000000000]              
};

// ScriptStruct APBGame.cSDDMissionJustification.MissionEnforcerContactJustification
// 0x0011
struct FMissionEnforcerContactJustification
{
	int                                                m_eMissionEnforcerContactJustification;           		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     m_sJustificationTitle;                            		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      m_eTimeOfDay;                                     		// 0x0010 (0x0001) [0x0000000000000000]              
};

// ScriptStruct APBGame.cSDDMissionJustification.MissionCriminalOrganisationJustification
// 0x0015
struct FMissionCriminalOrganisationJustification
{
	int                                                m_eMissionCriminalOrganisationJustification;      		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     m_sJustificationTitle;                            		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                m_eDistrict;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
	unsigned char                                      m_eTimeOfDay;                                     		// 0x0014 (0x0001) [0x0000000000000000]              
};

// ScriptStruct APBGame.cSDDMissionJustification.MissionEnforcerOrganisationJustification
// 0x0015
struct FMissionEnforcerOrganisationJustification
{
	int                                                m_eMissionEnforcerOrganisationJustification;      		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     m_sJustificationTitle;                            		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                m_eDistrict;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
	unsigned char                                      m_eTimeOfDay;                                     		// 0x0014 (0x0001) [0x0000000000000000]              
};

// ScriptStruct APBGame.cSDDMissionJustification.MissionOfCriminalContact
// 0x001C
struct FMissionOfCriminalContact
{
	int                                                m_eMissionOfCriminalContact;                      		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bDisabled : 1;                                  		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                m_eContact;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                m_eMission;                                       		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                m_nMinLevel;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                m_nMaxLevel;                                      		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                m_eJustification;                                 		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cSDDMissionJustification.MissionOfEnforcerContact
// 0x001C
struct FMissionOfEnforcerContact
{
	int                                                m_eMissionOfEnforcerContact;                      		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bDisabled : 1;                                  		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                m_eContact;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                m_eMission;                                       		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                m_nMinLevel;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                m_nMaxLevel;                                      		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                m_eJustification;                                 		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cSDDMissionJustification.MissionOfCriminalOrganisation
// 0x001C
struct FMissionOfCriminalOrganisation
{
	int                                                m_eMissionOfCriminalOrganisation;                 		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bDisabled : 1;                                  		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned char                                      m_eOrganisation;                                  		// 0x0008 (0x0001) [0x0000000000000000]              
	int                                                m_eMission;                                       		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                m_nMinLevel;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                m_nMaxLevel;                                      		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                m_eJustification;                                 		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cSDDMissionJustification.MissionOfEnforcerOrganisation
// 0x001C
struct FMissionOfEnforcerOrganisation
{
	int                                                m_eMissionOfEnforcerOrganisation;                 		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bDisabled : 1;                                  		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned char                                      m_eOrganisation;                                  		// 0x0008 (0x0001) [0x0000000000000000]              
	int                                                m_eMission;                                       		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                m_nMinLevel;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                m_nMaxLevel;                                      		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                m_eJustification;                                 		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cSDDMissionJustification.MissionCriminalDispatch
// 0x0028
struct FMissionCriminalDispatch
{
	int                                                m_eMissionCriminalDispatch;                       		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bDisabled : 1;                                  		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                m_eDispatcher;                                    		// 0x0008 (0x0004) [0x0000000000000000]              
	unsigned char                                      m_eDispatchType;                                  		// 0x000C (0x0001) [0x0000000000000000]              
	struct FString                                     m_sJustification;                                 		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sVOSample;                                      		// 0x001C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct APBGame.cSDDMissionJustification.MissionEnforcerDispatch
// 0x0028
struct FMissionEnforcerDispatch
{
	int                                                m_eMissionEnforcerDispatch;                       		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bDisabled : 1;                                  		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                m_eDispatcher;                                    		// 0x0008 (0x0004) [0x0000000000000000]              
	unsigned char                                      m_eDispatchType;                                  		// 0x000C (0x0001) [0x0000000000000000]              
	struct FString                                     m_sJustification;                                 		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sVOSample;                                      		// 0x001C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct APBGame.cSDDPreload.PreloadCommon
// 0x000C
struct FPreloadCommon
{
	struct FString                                     m_sPreloadCommon;                                 		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct APBGame.cSDDPreload.PreloadAction
// 0x000C
struct FPreloadAction
{
	struct FString                                     m_sPreloadAction;                                 		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct APBGame.cSDDPreload.PreloadSocial
// 0x000C
struct FPreloadSocial
{
	struct FString                                     m_sPreloadSocial;                                 		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct APBGame.cSDDScoring.Medal
// 0x0038
struct FMedal
{
	int                                                m_eMedal;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned char                                      m_eMedalCategory;                                 		// 0x0004 (0x0001) [0x0000000000000000]              
	int                                                m_nClassificationOrdinal;                         		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                m_nParamX;                                        		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                m_nParamY;                                        		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                m_nMissionScoringPoints;                          		// 0x0014 (0x0004) [0x0000000000000000]              
	struct FString                                     m_sTitle;                                         		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sDescription;                                   		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                m_eMedalIcon;                                     		// 0x0030 (0x0004) [0x0000000000000000]              
	int                                                m_eLargeMedalIcon;                                		// 0x0034 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cSDDScoring.MedalCategory
// 0x0008
struct FMedalCategory
{
	unsigned char                                      m_eMedalCategory;                                 		// 0x0000 (0x0001) [0x0000000000000000]              
	unsigned long                                      m_bImmediateAward : 1;                            		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bExclusiveMedal : 1;                            		// 0x0004 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct APBGame.cSDDScoring.MissionRewardPackage
// 0x0010
struct FMissionRewardPackage
{
	int                                                m_eMissionRewardPackage;                          		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                m_nBaseCash;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                m_nBaseContactStanding;                           		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                m_nBaseOrganisationStanding;                      		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cSDDScoring.TrackedActivity
// 0x0018
struct FTrackedActivity
{
	int                                                m_eTrackedActivity;                               		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned char                                      m_eFaction;                                       		// 0x0004 (0x0001) [0x0000000000000000]              
	int                                                m_eUnit;                                          		// 0x0008 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bIsImplemented_Legacy : 1;                      		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bIsImplemented_NewSystem : 1;                   		// 0x000C (0x0004) [0x0000000000000000] [0x00000002] 
	int                                                m_nMaxIncrementPerZone;                           		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                m_nSecondaryKey;                                  		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cSDDScoring.TrackedActivityFixed
// 0x0004
struct FTrackedActivityFixed
{
	int                                                m_eTrackedActivity;                               		// 0x0000 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cSDDScoring.TrackedActivityUnit
// 0x0011
struct FTrackedActivityUnit
{
	int                                                m_eTrackedActivityUnit;                           		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     m_sFormatting;                                    		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      m_eConversion;                                    		// 0x0010 (0x0001) [0x0000000000000000]              
};

// ScriptStruct APBGame.cSDDScoring.TrackedActivityDerived
// 0x0018
struct FTrackedActivityDerived
{
	int                                                m_eTrackedActivity;                               		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned char                                      m_eOperation;                                     		// 0x0004 (0x0001) [0x0000000000000000]              
	int                                                m_eMaster[ 0x4 ];                                 		// 0x0008 (0x0010) [0x0000000000000000]              
};

// ScriptStruct APBGame.cSDDScoring.PlayerRole
// 0x003C
struct FPlayerRole
{
	int                                                m_ePlayerRole;                                    		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     m_sDisplayName;                                   		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      m_eFaction;                                       		// 0x0010 (0x0001) [0x0000000000000000]              
	int                                                m_eActivities[ 0x3 ];                             		// 0x0014 (0x000C) [0x0000000000000000]              
	int                                                m_eFirstMilestone;                                		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                m_nNumMilestones;                                 		// 0x0024 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bAchievement : 1;                               		// 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bAchievementHidden : 1;                         		// 0x0028 (0x0004) [0x0000000000000000] [0x00000002] 
	struct FString                                     m_sDescription;                                   		// 0x002C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                m_nSecondaryKey;                                  		// 0x0038 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cSDDScoring.RoleMilestone
// 0x0068
struct FRoleMilestone
{
	int                                                m_eRoleMilestone;                                 		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     m_sTitle;                                         		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                m_eReward;                                        		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                m_eFormula;                                       		// 0x0014 (0x0004) [0x0000000000000000]              
	float                                              m_fPassMark[ 0x3 ];                               		// 0x0018 (0x000C) [0x0000000000000000]              
	int                                                m_eRoleIcon;                                      		// 0x0024 (0x0004) [0x0000000000000000]              
	struct FString                                     m_sRewardMailSubject;                             		// 0x0028 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sRewardMailBody;                                		// 0x0034 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sFemale_RewardMailSubject;                      		// 0x0040 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sFemale_RewardMailBody;                         		// 0x004C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sIconOverlayText;                               		// 0x0058 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                m_nSecondaryKey;                                  		// 0x0064 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cSDDScoring.RoleMilestoneFormula
// 0x0008
struct FRoleMilestoneFormula
{
	int                                                m_eRoleMilestoneFormula;                          		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bA_Required : 1;                                		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bA_Optional : 1;                                		// 0x0004 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      m_bB_Required : 1;                                		// 0x0004 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      m_bB_Optional : 1;                                		// 0x0004 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      m_bC_Required : 1;                                		// 0x0004 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      m_bC_Optional : 1;                                		// 0x0004 (0x0004) [0x0000000000000000] [0x00000020] 
};

// ScriptStruct APBGame.cSDDScoring.RandomReward
// 0x001C
struct FRandomReward
{
	int                                                m_eRandomReward;                                  		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned char                                      m_eSpecificOrganisation;                          		// 0x0004 (0x0001) [0x0000000000000000]              
	int                                                m_eSpecificContact;                               		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                m_ePurpose;                                       		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              m_fChancePercentage;                              		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                m_eFirstWeightedReward;                           		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                m_nNumWeightedRewards;                            		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cSDDScoring.WeightedReward
// 0x0010
struct FWeightedReward
{
	int                                                m_eWeightedReward;                                		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                m_eRandomReward;                                  		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              m_fWeight;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                m_eReward;                                        		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cSDDScoring.RewardPackage
// 0x0054
struct FRewardPackage
{
	int                                                m_eRewardPackage;                                 		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                m_nCash;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                m_eItems[ 0xA ];                                  		// 0x0008 (0x0028) [0x0000000000000000]              
	unsigned char                                      m_bAssign[ 0xA ];                                 		// 0x0030 (0x000A) [0x0000000000000000]              
	struct FString                                     m_sDescription;                                   		// 0x003C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                m_eChildPackage;                                  		// 0x0048 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bAssignItemsOnMailDetach : 1;                   		// 0x004C (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                m_nSecondaryKey;                                  		// 0x0050 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cSDDScoring.RewardPackageChild
// 0x00B8
struct FRewardPackageChild
{
	int                                                m_eRewardPackageChild;                            		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     m_sDescription;                                   		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      m_bSelectable : 1;                                		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bAssign : 1;                                    		// 0x0010 (0x0004) [0x0000000000000000] [0x00000002] 
	int                                                m_eItems[ 0x28 ];                                 		// 0x0014 (0x00A0) [0x0000000000000000]              
	int                                                m_nSecondaryKey;                                  		// 0x00B4 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cSDDScoring.ThreatLevel
// 0x0018
struct FThreatLevel
{
	int                                                m_eThreatLevel;                                   		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              m_fThreshold;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                m_eThreatIconComboEnforcer;                       		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                m_eThreatIconComboCriminal;                       		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                m_eHUDTextureIconEnforcer;                        		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                m_eHUDTextureIconCriminal;                        		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cSDDTaskItem.TaskItemCategory
// 0x001C
struct FTaskItemCategory
{
	int                                                m_eTaskItemCategory;                              		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     m_sDisplayName;                                   		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sDescription;                                   		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct APBGame.cSDDTaskItem.TaskItemSize
// 0x0018
struct FTaskItemSize
{
	unsigned char                                      m_eTaskItemSize;                                  		// 0x0000 (0x0001) [0x0000000000000000]              
	unsigned char                                      m_eEncumbrance;                                   		// 0x0001 (0x0001) [0x0000000000000000]              
	unsigned long                                      m_bCanCarry : 1;                                  		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                m_nCargoPips;                                     		// 0x0008 (0x0004) [0x0000000000000000]              
	struct FString                                     m_sDisplayName;                                   		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct APBGame.cSDDTaskItem.TaskItemSubCategory
// 0x0028
struct FTaskItemSubCategory
{
	int                                                m_eTaskItemSubCategory;                           		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                m_eTaskItemCategory;                              		// 0x0004 (0x0004) [0x0000000000000000]              
	unsigned char                                      m_eTaskItemSize;                                  		// 0x0008 (0x0001) [0x0000000000000000]              
	int                                                m_eGameplayObject;                                		// 0x000C (0x0004) [0x0000000000000000]              
	struct FString                                     m_sDisplayName;                                   		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sDescription;                                   		// 0x001C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct APBGame.cSDDTaskItem.TaskItemVariety
// 0x0040
struct FTaskItemVariety
{
	int                                                m_eTaskItemVariety;                               		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                m_eTaskItemSubCategory;                           		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                m_eTaskItemVisual;                                		// 0x0008 (0x0004) [0x0000000000000000]              
	struct FString                                     m_sDisplayName;                                   		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sDescription;                                   		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                m_nExpenseTariff;                                 		// 0x0024 (0x0004) [0x0000000000000000]              
	int                                                m_eHUDMarkerVisual;                               		// 0x0028 (0x0004) [0x0000000000000000]              
	int                                                m_eHUDIconCombo;                                  		// 0x002C (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bHideHUDMarkerWhileCarried : 1;                 		// 0x0030 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                m_eMetaTag[ 0x3 ];                                		// 0x0034 (0x000C) [0x0000000000000000]              
};

// ScriptStruct APBGame.cSDDTaskItem.TaskItemVisual
// 0x002C
struct FTaskItemVisual
{
	int                                                m_eTaskItemVisual;                                		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                m_eItemAttachmentVisual;                          		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FString                                     m_sPickupAssetName;                               		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sPickupAnimSetAsset;                            		// 0x0014 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sPickupAnimTreeAsset;                           		// 0x0020 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct APBGame.cSDDTimeOfDay.TimeofDayPeriod
// 0x0014
struct FTimeofDayPeriod
{
	unsigned char                                      m_eTimeofDayPeriod;                               		// 0x0000 (0x0001) [0x0000000000000000]              
	int                                                m_nStartTimeHours;                                		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                m_nStartTimeMins;                                 		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                m_nEndTimeHours;                                  		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                m_nEndTimeMins;                                   		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cSDDTimeOfDay.TimeOfDayAvailability
// 0x0008
struct FTimeOfDayAvailability
{
	unsigned char                                      m_eTimeOfDayAvailability;                         		// 0x0000 (0x0001) [0x0000000000000000]              
	unsigned long                                      m_bMorning : 1;                                   		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bAfternoon : 1;                                 		// 0x0004 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      m_bEvening : 1;                                   		// 0x0004 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      m_bNight : 1;                                     		// 0x0004 (0x0004) [0x0000000000000000] [0x00000008] 
};

// ScriptStruct APBGame.cSDDVFX.VFXAssociation
// 0x0020
struct FVFXAssociation
{
	int                                                m_eVFXAssociation;                                		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                m_eVFXType;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FString                                     m_sVFXPrefabName;                                 		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sVFXReplacedActor;                              		// 0x0014 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct APBGame.cSDDVFX.VFXType
// 0x0004
struct FVFXType
{
	int                                                m_eVFXType;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cSetupTypeDef.SPedestrianSetupType
// 0x001C
struct FSPedestrianSetupType
{
	struct FString                                     m_Name;                                           		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                m_nAssetSDDIndex;                                 		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                m_nNPCTypeSDDIndex;                               		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                m_nRaceType;                                      		// 0x0014 (0x0004) [0x0000000000000000]              
	class UcPedestrianSetupInfo*                       m_pSetupInfo;                                     		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cSetupTypeDef.SVehicleSetupType
// 0x0018
struct FSVehicleSetupType
{
	struct FString                                     m_Name;                                           		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                m_nAssetSDDIndex;                                 		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                m_nVehicleCategorySDDIndex;                       		// 0x0010 (0x0004) [0x0000000000000000]              
	class UcVehicleSetupInfo*                          m_pSetupInfo;                                     		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cSetupTypeDef.STypeAndCategoryRecord
// 0x008C
struct FSTypeAndCategoryRecord
{
	int                                                m_nSDDIndex;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	TArray< int >                                      m_aSetupTypeIndexes;                              		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                m_nConcurrentSetupTypes;                          		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                m_nActiveIndexStart;                              		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                m_nActiveIndexEnd;                                		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                m_nDeprecatedIndex;                               		// 0x001C (0x0004) [0x0000000000000000]              
	TArray< int >                                      m_aAssetsWaiting;                                 		// 0x0020 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      m_aAssetsStreaming;                               		// 0x002C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      m_aAssetsInMemory;                                		// 0x0038 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      m_aAssetsToGC;                                    		// 0x0044 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x3C ];                            		// 0x0050 (0x003C) UNKNOWN PROPERTY: MapProperty APBGame.cSetupTypeDef.STypeAndCategoryRecord.m_mActiveInstances
};

// ScriptStruct APBGame.cSetupTypeDef.SActorWithSetupTypeRecord
// 0x0008
struct FSActorWithSetupTypeRecord
{
	class AActor*                                      m_pActor;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                m_nAssetIndex;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cSetupTypeManager.SActiveAssetIndexes
// 0x000C
struct FSActiveAssetIndexes
{
	int                                                m_nStart;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                m_nEnd;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                m_nTypeOrCategoryIndex;                           		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cSkelControlHeightAdjustment.tHeightAdjustmentStrategy
// 0x000C
struct FtHeightAdjustmentStrategy
{
	class UcAnimNotifyPeriod_HeightAdjustment*         m_Notify;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FName                                       m_sMatchBoneName;                                 		// 0x0004 (0x0008) [0x0000000000000000]              
};

// ScriptStruct APBGame.cSpawnDestroyManager.spawnEdgeEvaluationInfo
// 0x0008
struct FspawnEdgeEvaluationInfo
{
	class URWTechReachSpec*                            edgeToEvaluate;                                   		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              fitnessValue;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cSpawnDestroyManager.destroyNodeEvaluationInfo
// 0x0008
struct FdestroyNodeEvaluationInfo
{
	class URWTechNode*                                 nodeToEvaluate;                                   		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              distanceToSpawnPoint;                             		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cStorageInventory.CustomisationLimiterReplicationData
// 0x0008
struct FCustomisationLimiterReplicationData
{
	float                                              m_fReplenishDurationTimeStamp;                    		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                m_NumUsed;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cStorageInventory.CustomColours
// 0x0060
struct FCustomColours
{
	unsigned char                                      aDataBlob[ 0x60 ];                                		// 0x0000 (0x0060) [0x0000000000000000]              
};

// ScriptStruct APBGame.cStorageInventory.ReuseGroupData
// 0x0004
struct FReuseGroupData
{
	int                                                m_fCoolDownTimeEnd;                               		// 0x0000 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cStorageInventory.DeployedUsable
// 0x0030
struct FDeployedUsable
{
	struct FGuid                                       m_nItemGuid;                                      		// 0x0000 (0x0010) [0x0000000000000000]              
	float                                              m_fActivationEndTime;                             		// 0x0010 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bActiveForMissionDuration : 1;                  		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned char                                      m_nFnModSlot;                                     		// 0x0018 (0x0001) [0x0000000000000000]              
	unsigned char                                      m_nChargesRemaining;                              		// 0x0019 (0x0001) [0x0000000000000000]              
	int                                                m_nModifierItemIndex;                             		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                m_nModifierCategoryIndex;                         		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                m_nModifierSubCategoryIndex;                      		// 0x0024 (0x0004) [0x0000000000000000]              
	int                                                m_nUsableCategoryIndex;                           		// 0x0028 (0x0004) [0x0000000000000000]              
	int                                                m_nUsableReuseGroupIndex;                         		// 0x002C (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cStorageInventory.InventoryItem
// 0x0024
struct FInventoryItem
{
	struct FGuid                                       m_nItemGuid;                                      		// 0x0000 (0x0010) [0x0000000000000000]              
	int                                                m_nCreatorUID;                                    		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                m_hInventoryItemTypeKey;                          		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                m_nStartTime;                                     		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                m_nExpiryTime;                                    		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                m_nPackedData;                                    		// 0x0020 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cStorageInventory.InventoryItemCategoryLimited
// 0x0010
struct FInventoryItemCategoryLimited
{
	unsigned char                                      m_eInventoryItemCategory;                         		// 0x0000 (0x0001) [0x0000000000000000]              
	int                                                m_nCustomisationInitialAvailability;              		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              m_fCustomisationReplenishPeriod;                  		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                m_nSecondaryKey;                                  		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cStorageInventory.DefaultCustomColour
// 0x0010
struct FDefaultCustomColour
{
	int                                                m_eDefaultCustomColour;                           		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                m_nHue;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                m_nSat;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                m_nLum;                                           		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cStreamedComponentSet.tStreamedComponent
// 0x0014
struct FtStreamedComponent
{
	struct FName                                       m_sName;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
	unsigned long                                      m_bIsPermanant : 1;                               		// 0x0008 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	class UActorComponent*                             m_pPermanant;                                     		// 0x000C (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UActorComponent*                             m_pStreamed;                                      		// 0x0010 (0x0004) [0x0000000004082009]              ( CPF_Edit | CPF_ExportObject | CPF_Transient | CPF_Component | CPF_EditInline )
};

// ScriptStruct APBGame.cStreamedComponentSet.cDeferredDetachment
// 0x0008
struct FcDeferredDetachment
{
	int                                                ComponentIndex;                                   		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              Time;                                             		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cStreamedBuildingActor.MaterialInstanceList
// 0x0010
struct FMaterialInstanceList
{
	unsigned long                                      m_bInitialised : 1;                               		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	TArray< class UMaterialInstance* >                 m_Materials;                                      		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct APBGame.cStreamedLightingStaticMeshActor.cStreamedShadowMap1D
// 0x000C
struct AcStreamedLightingStaticMeshActor_FcStreamedShadowMap1D
{
	struct FName                                       m_Name;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
	class UObject*                                     m_ShadowMap;                                      		// 0x0008 (0x0004) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct APBGame.cStreamedLightingStaticMeshActor.cStreamedLightingLODInfo
// 0x0018
struct FcStreamedLightingLODInfo
{
	struct AcStreamedLightingStaticMeshActor_FcStreamedShadowMap1D AOMap1D;                                          		// 0x0000 (0x000C) [0x0000000000000000]              
	TArray< struct AcStreamedLightingStaticMeshActor_FcStreamedShadowMap1D > ShadowMaps;                                       		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct APBGame.cSymbolDescriptor.SymbolLayer
// 0x0034
struct FSymbolLayer
{
	struct FVector2D                                   m_MatRows[ 0x3 ];                                 		// 0x0000 (0x0018) [0x0000000000000001]              ( CPF_Edit )
	struct FLinearColor                                m_HSLColour;                                      		// 0x0018 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      m_nMaterialIndex;                                 		// 0x0028 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	int                                                m_nPrimitive;                                     		// 0x002C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                m_nGuid;                                          		// 0x0030 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct APBGame.cTaskTargetAllocation.AllocatedTaskTarget
// 0x0020
struct FAllocatedTaskTarget
{
	class AActor*                                      m_pTarget;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	class AcDistrictBlock*                             m_pDistrictBlock;                                 		// 0x0004 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bPendingReallocate : 1;                         		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bReallocateUseDistanceCheck : 1;                		// 0x0008 (0x0004) [0x0000000000000000] [0x00000002] 
	struct FVector                                     m_vecReallocateDistanceCheckLocation;             		// 0x000C (0x000C) [0x0000000000000000]              
	float                                              m_fMinReallocationDistance;                       		// 0x0018 (0x0004) [0x0000000000000000]              
	float                                              m_fMaxReallocationDistance;                       		// 0x001C (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cTexture2DCustomised.RefCountPtr_Mirror
// 0x0004
struct FRefCountPtr_Mirror
{
	struct FPointer                                    Reference;                                        		// 0x0000 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
};

// ScriptStruct APBGame.cTextureStreamingTracker.TextureStats
// 0x0014
struct FTextureStats
{
	int                                                nTotalMipChanges;                                 		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                nTotalResidentMips;                               		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                nNumFrames;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                nPrevResidentMips;                                		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                nTotalMips;                                       		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cToDManager.cWeatherData
// 0x0010
struct FcWeatherData
{
	int                                                m_SourceTimePeriod;                               		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                m_SourceWeather;                                  		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                m_TargetTimePeriod;                               		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                m_TargetWeather;                                  		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cTrafficLightJunction.tTrafficLightPair
// 0x0034
struct FtTrafficLightPair
{
	class AActor*                                      pTLProp1;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	class AActor*                                      pTLProp2;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FName                                       sTLName1;                                         		// 0x0008 (0x0008) [0x0000000000000000]              
	struct FName                                       sTLName2;                                         		// 0x0010 (0x0008) [0x0000000000000000]              
	class APrefabInstance*                             pTLPrefabInstance1;                               		// 0x0018 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class APrefabInstance*                             pTLPrefabInstance2;                               		// 0x001C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class URWTechReachSpec*                            pEdge1;                                           		// 0x0020 (0x0004) [0x0000000000000000]              
	class URWTechReachSpec*                            pEdge2;                                           		// 0x0024 (0x0004) [0x0000000000000000]              
	TArray< struct FNPCWaitingRecord >                 m_aVehiclesWaiting;                               		// 0x0028 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct APBGame.cUILoadingScreenManager.LoadingMovieConfig
// 0x0030
struct FLoadingMovieConfig
{
	int                                                m_eLoadingMovieConfig;                            		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     m_sLoadingMovie;                                  		// 0x0004 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sUIScene;                                       		// 0x0010 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                m_eDistrict;                                      		// 0x001C (0x0004) [0x0000000000000000]              
	unsigned char                                      m_eTransitionType;                                		// 0x0020 (0x0001) [0x0000000000000000]              
	int                                                m_nNumAudioTracks;                                		// 0x0024 (0x0004) [0x0000000000000000]              
	int                                                m_nNumberOfPages;                                 		// 0x0028 (0x0004) [0x0000000000000000]              
	int                                                m_nPageLength;                                    		// 0x002C (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cUILoadingScreenManager.LoadingMovieAudioBank
// 0x000C
struct FLoadingMovieAudioBank
{
	unsigned char                                      m_eLoadingMovieAudioBanks;                        		// 0x0000 (0x0001) [0x0000000000000000]              
	int                                                m_nBankStart;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                m_nBankEnd;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cUILoadingScreenManager.LoadingMovieTip
// 0x001C
struct FLoadingMovieTip
{
	unsigned char                                      m_eLoadingMovieTip;                               		// 0x0000 (0x0001) [0x0000000000000000]              
	unsigned char                                      m_eFaction;                                       		// 0x0001 (0x0001) [0x0000000000000000]              
	int                                                m_nMinimumRating;                                 		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                m_nMaximumRating;                                 		// 0x0008 (0x0004) [0x0000000000000000]              
	unsigned char                                      m_eDistrictRestriction;                           		// 0x000C (0x0001) [0x0000000000000000]              
	struct FString                                     m_sMessage;                                       		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct APBGame.cUVBleedMeshBaker.UVBleedBuildData
// 0x0014
struct FUVBleedBuildData
{
	unsigned char                                      eBuildState;                                      		// 0x0000 (0x0001) [0x0000000000000000]              
	int                                                nStateIndex;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
	class UGolemSkeletalMesh*                          pCustomisedMesh;                                  		// 0x0008 (0x0004) [0x0000000000000000]              
	class UGolemSkeletalMesh*                          pUVBleedMesh;                                     		// 0x000C (0x0004) [0x0000000000000000]              
	struct FPointer                                    pSeamExtState;                                    		// 0x0010 (0x0004) [0x0000000000001000]              ( CPF_Native )
};

// ScriptStruct APBGame.cVehicleCargoInventory.CargoTaskItem
// 0x0004
struct FCargoTaskItem
{
	class AcEquipableTaskItem*                         m_TaskItem;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cVehicleController.cObjectAhead
// 0x0018
struct FcObjectAhead
{
	unsigned char                                      m_eType;                                          		// 0x0000 (0x0001) [0x0000000000000000]              
	float                                              m_fDistance;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FcRoutePosition                             m_Position;                                       		// 0x0008 (0x000C) [0x0000000000000000]              
	class UObject*                                     m_pObject;                                        		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cVehicleManager.NPCDriverType
// 0x000C
struct FNPCDriverType
{
	int                                                m_eNPCDriverType;                                 		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                m_eNPCTypeMale;                                   		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                m_eNPCTypeFemale;                                 		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cVehicleRepairTrigger.tVisualDamageAmounts
// 0x0030
struct FtVisualDamageAmounts
{
	float                                              fDamage_FrontLeft;                                		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              fDamage_FrontRight;                               		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              fDamage_RearLeft;                                 		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              fDamage_RearRight;                                		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              fDamage_SideLeft;                                 		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              fDamage_SideRight;                                		// 0x0014 (0x0004) [0x0000000000000000]              
	float                                              fDamage_Top;                                      		// 0x0018 (0x0004) [0x0000000000000000]              
	float                                              fExtreme_Front;                                   		// 0x001C (0x0004) [0x0000000000000000]              
	float                                              fExtreme_Rear;                                    		// 0x0020 (0x0004) [0x0000000000000000]              
	float                                              fExtreme_SideLeft;                                		// 0x0024 (0x0004) [0x0000000000000000]              
	float                                              fExtreme_SideRight;                               		// 0x0028 (0x0004) [0x0000000000000000]              
	float                                              fExtreme_Top;                                     		// 0x002C (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cVehicleRepairTrigger.tRepairOperation
// 0x00A8
struct FtRepairOperation
{
	class UiRepairableVehicle*                         m_pVehicle;                                       		// 0x0000 (0x0008) [0x0000000000000000]              
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0004 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	class AcAPBPlayerController*                       m_pPayingPlayer;                                  		// 0x0008 (0x0004) [0x0000000000000000]              
	class UiVehicleRepairer*                           m_pRepairPoint;                                   		// 0x000C (0x0008) [0x0000000000000000]              
	unsigned char                                      UnknownData01[ 0x4 ];                             		// 0x0010 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	float                                              m_fRepairStartTime;                               		// 0x0014 (0x0004) [0x0000000000000000]              
	float                                              m_fLastUpdateTime;                                		// 0x0018 (0x0004) [0x0000000000000000]              
	float                                              m_fNextUpdateTime;                                		// 0x001C (0x0004) [0x0000000000000000]              
	float                                              m_fFractionalCost;                                		// 0x0020 (0x0004) [0x0000000000000000]              
	float                                              m_fFractionalRepair;                              		// 0x0024 (0x0004) [0x0000000000000000]              
	float                                              m_fCostPerDamageUnit;                             		// 0x0028 (0x0004) [0x0000000000000000]              
	float                                              m_fDamageRepairPerSecond;                         		// 0x002C (0x0004) [0x0000000000000000]              
	float                                              m_fTotalRepairTimeSecs;                           		// 0x0030 (0x0004) [0x0000000000000000]              
	int                                                m_nTotalRepairCost;                               		// 0x0034 (0x0004) [0x0000000000000000]              
	int                                                m_nMaxVehicleHealth;                              		// 0x0038 (0x0004) [0x0000000000000000]              
	int                                                m_nTotalCashSpent;                                		// 0x003C (0x0004) [0x0000000000000000]              
	struct FtVisualDamageAmounts                       m_CurrentVisualDamage;                            		// 0x0040 (0x0030) [0x0000000000000000]              
	struct FtVisualDamageAmounts                       m_InitialVisualDamage;                            		// 0x0070 (0x0030) [0x0000000000000000]              
	int                                                m_nInitialDamageAmount;                           		// 0x00A0 (0x0004) [0x0000000000000000]              
	float                                              m_fInitialDamagePercentage;                       		// 0x00A4 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cVehicleRequest.VehicleChunkTextures
// 0x000C
struct FVehicleChunkTextures
{
	class UTexture2D*                                  pDiffuse;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	class UTexture2D*                                  pNormal;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
	class UTexture2D*                                  pEmissive;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cVehicleRouteGenerator.RouteInfo
// 0x0008
struct FRouteInfo
{
	class URWTechNode*                                 pStartNode;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	class URWTechNode*                                 pEndNode;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cVehicleSetupInfo.VehicleUISetup
// 0x001C
struct FVehicleUISetup
{
	unsigned char                                      m_eVehicleSetupType;                              		// 0x0000 (0x0001) [0x0000000000000000]              
	float                                              m_fSuspensionOffsetHack;                          		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                m_nTopSpeed;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                m_nHealth;                                        		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                m_nAcceleration;                                  		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                m_nHandling;                                      		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                m_nCollisionDamage;                               		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cVehicleSetupInfo.VehicleUIComponentInfo
// 0x0008
struct FVehicleUIComponentInfo
{
	int                                                m_eCameraAngle;                                   		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                m_eCategory;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cVehicleSetupInfo.VehicleUIComponentCategory
// 0x0014
struct FVehicleUIComponentCategory
{
	int                                                m_eVehicleUIComponentCategory;                    		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     m_sDisplayName;                                   		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                m_nSortingPriority;                               		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.cVehicleTextureBaker.VehicleTextureBuildData
// 0x0028
struct FVehicleTextureBuildData
{
	unsigned char                                      eBuildState;                                      		// 0x0000 (0x0001) [0x0000000000000000]              
	int                                                nStateIndex;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
	unsigned char                                      eTextureType;                                     		// 0x0008 (0x0001) [0x0000000000000000]              
	class UGolemobileDescriptor*                       pDescriptor;                                      		// 0x000C (0x0004) [0x0000000000000000]              
	class USkeletalMesh*                               pSkeletalMesh;                                    		// 0x0010 (0x0004) [0x0000000000000000]              
	class UObject*                                     pOuter;                                           		// 0x0014 (0x0004) [0x0000000000000000]              
	struct FPointer                                    pOutput;                                          		// 0x0018 (0x0004) [0x0000000000001000]              ( CPF_Native )
	class UAPBStudioVehicle*                           pStudio;                                          		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                nDecalLayerToSkip;                                		// 0x0020 (0x0004) [0x0000000000000000]              
	unsigned long                                      bGenerateMipLevels : 1;                           		// 0x0024 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bInGame : 1;                                      		// 0x0024 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct APBGame.cWeatherSettings.cFogSettings
// 0x0010
struct FcFogSettings
{
	float                                              Density;                                          		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              StartDistance;                                    		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              LightBrightness;                                  		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FColor                                      LightColor;                                       		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct APBGame.cWeatherSettings.cWeatherKeyframe
// 0x0018
struct FcWeatherKeyframe
{
	float                                              TimeOfDay;                                        		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FcFogSettings                               FogSettings;                                      		// 0x0004 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	class UTexture*                                    ColorGrading_LookupTable;                         		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct APBGame.cWeatherSettings.cWeatherType
// 0x0018
struct FcWeatherType
{
	struct FString                                     Name;                                             		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FcWeatherKeyframe >                 KeyFrames;                                        		// 0x000C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct APBGame.FeatureGroupComponent.cStreamedShadowMap1D
// 0x000C
struct UFeatureGroupComponent_FcStreamedShadowMap1D
{
	struct FName                                       m_Name;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
	class UObject*                                     m_ShadowMap;                                      		// 0x0008 (0x0004) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct APBGame.FeatureGroupComponent.cFeatureInfo
// 0x0098
struct FcFeatureInfo
{
	struct FMatrix                                     m_LocalToWorld;                                   		// 0x0000 (0x0040) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	class UStaticMesh*                                 m_pMesh;                                          		// 0x0040 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	TArray< struct FGuid >                             m_aIrrelevantLights;                              		// 0x0044 (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	struct FPointer                                    m_pLightMap;                                      		// 0x0050 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	TArray< struct UFeatureGroupComponent_FcStreamedShadowMap1D > m_aStreamedShadowMaps;                            		// 0x0054 (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	struct UFeatureGroupComponent_FcStreamedShadowMap1D m_StreamedAOMap1D;                                		// 0x0060 (0x000C) [0x0000000000000002]              ( CPF_Const )
	TArray< class UObject* >                           m_aShadowMaps;                                    		// 0x006C (0x000C) [0x0000000020400002]              ( CPF_Const | CPF_NeedCtorLink | CPF_Deprecated )
	class UObject*                                     m_AOMap1D;                                        		// 0x0078 (0x0004) [0x0000000020000002]              ( CPF_Const | CPF_Deprecated )
	int                                                m_nEmissiveIndex;                                 		// 0x007C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< class UMaterialInterface* >                m_aDiscreteMaterials;                             		// 0x0080 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< class UMaterialInterface* >                m_aMergedMaterials;                               		// 0x008C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct APBGame.GolemDescriptor.PurchaseElementInfo
// 0x0009
struct FPurchaseElementInfo
{
	int                                                nPrevArrayNum;                                    		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                nNewArrayNum;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
	unsigned char                                      nPurchaseElement;                                 		// 0x0008 (0x0001) [0x0000000000000000]              
};

// ScriptStruct APBGame.GolemMeshBaker.MorphVertex
// 0x000C
struct FMorphVertex
{
	struct FPointer                                    PositionDelta;                                    		// 0x0000 (0x0004) [0x0000000000001000]              ( CPF_Native )
	int                                                MorphMode;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                NormalDelta;                                      		// 0x0008 (0x0004) [0x0000000000800000]              ( CPF_NoExport )
};

// ScriptStruct APBGame.GolemMeshBaker.HairMorphVertex
// 0x001C
struct FHairMorphVertex
{
	struct FVector                                     PositionDelta;                                    		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FVector                                     NormalDelta;                                      		// 0x000C (0x000C) [0x0000000000000000]              
	unsigned long                                      bValid : 1;                                       		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bLocked : 1;                                      		// 0x0018 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct APBGame.GolemMeshBaker.FaceMapping
// 0x000C
struct FFaceMapping
{
	TArray< int >                                      m_aMapping;                                       		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct APBGame.GolemMeshBaker.MeshBuildData
// 0x0088
struct FMeshBuildData
{
	unsigned char                                      eState;                                           		// 0x0000 (0x0001) [0x0000000000000000]              
	int                                                nStateIndex;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                nStateIndex2;                                     		// 0x0008 (0x0004) [0x0000000000000000]              
	class UObject*                                     pDescriptor;                                      		// 0x000C (0x0004) [0x0000000000000000]              
	class UGolemSkeletalMesh*                          pDestSkeletalMesh;                                		// 0x0010 (0x0004) [0x0000000000000000]              
	class UMorphTargetSet*                             pDestMorphSet;                                    		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                nLOD;                                             		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                nMaxLOD;                                          		// 0x001C (0x0004) [0x0000000000000000]              
	TArray< unsigned long >                            aSegmentRemovedFlags;                             		// 0x0020 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FFaceMapping >                      aLODFaceMapping;                                  		// 0x002C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class USkeletalMeshComponent*                      pTempSkelMeshComponent;                           		// 0x0038 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	TArray< struct FHairMorphVertex >                  aHairVertsMorphs;                                 		// 0x003C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bInGame : 1;                                      		// 0x0048 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bFirstLOD : 1;                                    		// 0x0048 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bRemoveSourceData : 1;                            		// 0x0048 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bBakeShapeMorphsAndScale : 1;                     		// 0x0048 (0x0004) [0x0000000000000000] [0x00000008] 
	TArray< struct FName >                             aMorphTargetsModified;                            		// 0x004C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FMorphVertex >                      aBaseOffsets;                                     		// 0x0058 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FMorphVertex >                      aShapeOffsets;                                    		// 0x0064 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class UMorphTargetSet* >                   aMorphSetsToClone;                                		// 0x0070 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class UMorphTarget* >                      aStreamedMorphs;                                  		// 0x007C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct APBGame.GolemPart.ConditionalMorph
// 0x0014
struct FConditionalMorph
{
	class UMorphTargetSet*                             MorphSet;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	class UTexture2D*                                  NormalMap;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	TArray< int >                                      ItemClasses;                                      		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct APBGame.GolemPart.VertexMap
// 0x0008
struct FVertexMap
{
	int                                                BaseIndex;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                ExtraIndex;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.GolemPart.VerticesMapLOD
// 0x000C
struct FVerticesMapLOD
{
	TArray< struct FVertexMap >                        VerticesMap;                                      		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct APBGame.GolemPart.OverlayTextures
// 0x0008
struct FOverlayTextures
{
	class UTexture2D*                                  BaseMeshOverlayMap;                               		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UTexture2D*                                  ExtraMeshOverlayMap;                              		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct APBGame.GolemPart.BaseExtraTextures
// 0x001C
struct FBaseExtraTextures
{
	struct FString                                     Name;                                             		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class UTexture2D*                                  BaseMeshColourMap;                                		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UTexture2D*                                  BaseMeshNormalMap;                                		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UTexture2D*                                  ExtraMeshColourMap;                               		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UTexture2D*                                  ExtraMeshNormalMap;                               		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct APBGame.GolemPart.GolemBaseArea
// 0x0030
struct FGolemBaseArea
{
	unsigned char                                      nID;                                              		// 0x0000 (0x0001) [0x0000000000020001]              ( CPF_Edit | CPF_EditConst )
	struct FString                                     Name;                                             		// 0x0004 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class UTexture2D*                                  BaseMeshMask;                                     		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UTexture2D*                                  ExtraMeshMask;                                    		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      CustomisableColour : 1;                           		// 0x0018 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	struct FLinearColor                                DefaultColour;                                    		// 0x001C (0x0010) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      AcceptProjection : 1;                             		// 0x002C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
};

// ScriptStruct APBGame.GolemPart.GolemPartTextureBlock
// 0x000C
struct FGolemPartTextureBlock
{
	int                                                nX;                                               		// 0x0000 (0x0004) [0x0000000000020001]              ( CPF_Edit | CPF_EditConst )
	int                                                nY;                                               		// 0x0004 (0x0004) [0x0000000000020001]              ( CPF_Edit | CPF_EditConst )
	float                                              fPriority;                                        		// 0x0008 (0x0004) [0x0000000000020001]              ( CPF_Edit | CPF_EditConst )
};

// ScriptStruct APBGame.GolemPart.PartProjectionArea
// 0x0018
struct FPartProjectionArea
{
	unsigned char                                      nID;                                              		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     Name;                                             		// 0x0004 (0x000C) [0x0000000000420001]              ( CPF_Edit | CPF_EditConst | CPF_NeedCtorLink )
	float                                              fOverrideRadius;                                  		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fOverrideHeight;                                  		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct APBGame.GolemPartDescriptor.PredefinedDecalLayer
// 0x0014
struct FPredefinedDecalLayer
{
	unsigned char                                      Type;                                             		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      Mode;                                             		// 0x0001 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      DecalIndex;                                       		// 0x0002 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	struct FLinearColor                                VinylHSLColour;                                   		// 0x0004 (0x0010) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct APBGame.GolemSpawnerActor.ActorDescriptorMap
// 0x0018
struct FActorDescriptorMap
{
	class AActor*                                      assetActor;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                descriptorIndex;                                  		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FString                                     emoteName;                                        		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bIsEmotePlaying : 1;                              		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct APBGame.GolemSpawnerActor.DescriptorDataStream
// 0x000C
struct FDescriptorDataStream
{
	TArray< unsigned char >                            Data;                                             		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct APBGame.GolemSpawnerActor.AssetTraceResult
// 0x0008
struct FAssetTraceResult
{
	unsigned char                                      AssetType;                                        		// 0x0000 (0x0001) [0x0000000000000000]              
	int                                                AssetIndex;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.iHUDMarker.HUDMarkerState
// 0x0008
struct FHUDMarkerState
{
	unsigned char                                      m_eHUDMarkerState;                                		// 0x0000 (0x0001) [0x0000000000000000]              
	float                                              m_fUpdateDelay;                                   		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.RTWLCCPawn.CameraView
// 0x0020
struct FCameraView
{
	struct FVector                                     Position;                                         		// 0x0000 (0x000C) [0x0000000000004000]              ( CPF_Config )
	struct FVector                                     Target;                                           		// 0x000C (0x000C) [0x0000000000004000]              ( CPF_Config )
	float                                              MaxTiltAngle;                                     		// 0x0018 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              FOV;                                              		// 0x001C (0x0004) [0x0000000000004000]              ( CPF_Config )
};

// ScriptStruct APBGame.RTWLCCPawn.InputData
// 0x0008
struct ARTWLCCPawn_FInputData
{
	float                                              DeltaXAxis;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned long                                      bKeyWasReleased : 1;                              		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct APBGame.RTWLVCPawn.InputData
// 0x0008
struct ARTWLVCPawn_FInputData
{
	float                                              DeltaXAxis;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned long                                      bKeyWasReleased : 1;                              		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct APBGame.SkeletalPropActor.MatInstanceArray
// 0x000C
struct FMatInstanceArray
{
	TArray< class UMaterialInstanceConstant* >         A;                                                		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct APBGame.TESLayer.TransformsParameters
// 0x0014
struct FTransformsParameters
{
	float                                              Rotation;                                         		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector2D                                   Scale;                                            		// 0x0004 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FVector2D                                   Skew;                                             		// 0x000C (0x0008) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct APBGame.TESLayer.ProjectionParameters
// 0x0030
struct FProjectionParameters
{
	unsigned char                                      ProjectionMode;                                   		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     Location;                                         		// 0x0004 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     Direction;                                        		// 0x0010 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	float                                              FOV;                                              		// 0x001C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Zoom;                                             		// 0x0020 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Height;                                           		// 0x0024 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Radius;                                           		// 0x0028 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Offset;                                           		// 0x002C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct APBGame.TESTexture.TESProjectionInfo
// 0x0008
struct FTESProjectionInfo
{
	unsigned char                                      m_eTESProjectionInfo;                             		// 0x0000 (0x0001) [0x0000000000000000]              
	float                                              m_fValue;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBGame.TESTextureClass.TESPrimitive
// 0x0010
struct FTESPrimitive
{
	class UTexture2D*                                  Texture;                                          		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     sName;                                            		// 0x0004 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif