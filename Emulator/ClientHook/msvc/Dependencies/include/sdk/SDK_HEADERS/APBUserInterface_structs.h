/*
#############################################################################################
# All Points Bulletin Reloaded (1.6) SDK
# Generated with TheFeckless UE3 SDK Generator v1.2_Beta-Rev.39
# ========================================================================================= #
# File: APBUserInterface_structs.h
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

// ScriptStruct APBUserInterface.cAttribute.AttributeValue
// 0x0048
struct FAttributeValue
{
	struct FUIProviderFieldValue                       FieldValue;                                       		// 0x0000 (0x0044) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UObject*                                     pObjectValue;                                     		// 0x0044 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBUserInterface.cAttribute.AttributesData
// 0x0018
struct FAttributesData
{
	unsigned char                                      eGender;                                          		// 0x0000 (0x0001) [0x0000000000000000]              
	TArray< class UcAttribute* >                       aAttributes;                                      		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class USkeletalMeshComponent*                      pSkelMeshComponent;                               		// 0x0010 (0x0004) [0x000000000408000A]              ( CPF_Const | CPF_ExportObject | CPF_Component | CPF_EditInline )
	class USkeletalMeshComponent*                      pHairMeshComponent;                               		// 0x0014 (0x0004) [0x000000000408000A]              ( CPF_Const | CPF_ExportObject | CPF_Component | CPF_EditInline )
};

// ScriptStruct APBUserInterface.cUIListProvider.UIIcon
// 0x001C
struct FUIIcon
{
	int                                                nID;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     sImageName;                                       		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class USurface*                                    pImage;                                           		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                nWidth;                                           		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                nHeight;                                          		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBUserInterface.cSDDMenuManager.DynamicMenuEntry
// 0x0044
struct FDynamicMenuEntry
{
	int                                                m_eDynamicMenuEntry;                              		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     m_sDisplayText;                                   		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sDisplayPicture;                                		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sRemoteEvent;                                   		// 0x001C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sListID;                                        		// 0x0028 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      m_eGender;                                        		// 0x0034 (0x0001) [0x0000000000000000]              
	unsigned char                                      m_eCustomisationMode;                             		// 0x0035 (0x0001) [0x0000000000000000]              
	struct FString                                     m_sWwiseSwitch;                                   		// 0x0038 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct APBUserInterface.cUI_APBChatFilterManager.CategoryInfo
// 0x002C
struct FCategoryInfo
{
	unsigned char                                      m_CategoryType;                                   		// 0x0000 (0x0001) [0x0000000000000000]              
	struct FString                                     m_sCategoryName;                                  		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FLinearColor                                m_Colour;                                         		// 0x0010 (0x0010) [0x0000000000000000]              
	struct FString                                     m_sColourTag;                                     		// 0x0020 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct APBUserInterface.cUI_APBChatTabManager.TabInfo
// 0x0024
struct FTabInfo
{
	struct FString                                     m_sTabName;                                       		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sTrimmedTabName;                                		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< unsigned long >                            m_abVisibleFilters;                               		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct APBUserInterface.cUI_Gecko_Manager.tURIFilterRule
// 0x0018
struct FtURIFilterRule
{
	struct FString                                     m_sHost;                                          		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sPath;                                          		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct APBUserInterface.cUIDataStore_HUD_HudMessages.HUDMessageData
// 0x0024
struct FHUDMessageData
{
	class UUIScene*                                    pScene;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	class UUIPanel*                                    pPositionPanel;                                   		// 0x0004 (0x0004) [0x0000000000000000]              
	class UUIImage*                                    pImage;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
	class UUILabel*                                    pLabel;                                           		// 0x000C (0x0004) [0x0000000000000000]              
	class UUILabel*                                    pLabelBG;                                         		// 0x0010 (0x0004) [0x0000000000000000]              
	class UcUIEvent_APBRemoteEvent*                    pRE_ShowMessage;                                  		// 0x0014 (0x0004) [0x0000000000000000]              
	class UcUIEvent_APBRemoteEvent*                    pRE_HideMessage;                                  		// 0x0018 (0x0004) [0x0000000000000000]              
	class UcUIEvent_APBRemoteEvent*                    pRE_StartQueueAnim;                               		// 0x001C (0x0004) [0x0000000000000000]              
	class UcUIEvent_APBRemoteEvent*                    pRE_StopQueueAnim;                                		// 0x0020 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBUserInterface.cUIDataStore_HUD_HudMessages.LocalizePair
// 0x0018
struct FLocalizePair
{
	struct FString                                     m_sToken;                                         		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sReplacementText;                               		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct APBUserInterface.cUI_S_Item.tUI_S_Item
// 0x0024
struct FtUI_S_Item
{
	int                                                m_nItemType;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FGuid                                       m_ItemGUID;                                       		// 0x0004 (0x0010) [0x0000000000000000]              
	int                                                m_nItemSubSlot;                                   		// 0x0014 (0x0004) [0x0000000000000000]              
	struct FPointer                                    m_pItem;                                          		// 0x0018 (0x0004) [0x0000000000001000]              ( CPF_Native )
	class UObject*                                     m_pItemCustomisation;                             		// 0x001C (0x0004) [0x0000000000000000]              
	struct FPointer                                    m_pListHandle;                                    		// 0x0020 (0x0004) [0x0000000000001000]              ( CPF_Native )
};

// ScriptStruct APBUserInterface.cUI_S_ItemCreatorNameCache.tItemCreatorNameCacheObserver
// 0x000C
struct FtItemCreatorNameCacheObserver
{
	struct FScriptDelegate                             m_CacheUpdatedCallback;                           		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct APBUserInterface.cUI_S_ItemFilter.tUI_S_ItemFilter_Criteria
// 0x0048
struct FtUI_S_ItemFilter_Criteria
{
	int                                                m_nCategory;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                m_nSubCategory;                                   		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                m_nWeaponType;                                    		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                m_nModifierClass;                                 		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                m_nModifierStatus;                                		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                m_nUnlockItemCategory;                            		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                m_nUnlockItemSubCategory;                         		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                m_nUnlockItemWeaponType;                          		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                m_nUnlockItemModifierClass;                       		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                m_nUnlockItemModifierStatus;                      		// 0x0024 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bUnlockEmote : 1;                               		// 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bUnlockPrimitive : 1;                           		// 0x0028 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      m_bUnlockVehicleComponent : 1;                    		// 0x0028 (0x0004) [0x0000000000000000] [0x00000004] 
	int                                                m_nUnlockVehicleComponentCategory;                		// 0x002C (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bUnlockCapacity : 1;                            		// 0x0030 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                m_nContact;                                       		// 0x0034 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bEmbedded : 1;                                  		// 0x0038 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                m_nItemInfraCategory;                             		// 0x003C (0x0004) [0x0000000000000000]              
	int                                                m_eCustomisable;                                  		// 0x0040 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bTradable : 1;                                  		// 0x0044 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bUnused : 1;                                    		// 0x0044 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      m_bNotDeployed : 1;                               		// 0x0044 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      m_bEquipable : 1;                                 		// 0x0044 (0x0004) [0x0000000000000000] [0x00000008] 
};

// ScriptStruct APBUserInterface.cUI_S_ItemFilter.tUI_S_ItemFilter_Expression
// 0x003C
struct FtUI_S_ItemFilter_Expression
{
	int                                                m_nID;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                m_nParentID;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FString                                     m_sName;                                          		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      m_TargetLists;                                    		// 0x0014 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FtUI_S_ItemFilter_Criteria >        m_Options;                                        		// 0x0020 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FtUI_S_ItemFilter_Criteria >        m_EnableConditions;                               		// 0x002C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                m_nDefaultWeighting;                              		// 0x0038 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBUserInterface.cUIInGameQuestionManager.tUIInGameQuestionParam
// 0x0070
struct FtUIInGameQuestionParam
{
	struct FString                                     m_sTitle;                                         		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sMessage;                                       		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FColor                                      m_MessageColor;                                   		// 0x0018 (0x0004) [0x0000000000000000]              
	class USurface*                                    m_pMainImage;                                     		// 0x001C (0x0004) [0x0000000000000000]              
	TArray< class USurface* >                          m_pInfoImages;                                    		// 0x0020 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      m_Scene;                                          		// 0x002C (0x0001) [0x0000000000000000]              
	int                                                m_nTimeOut_Sec;                                   		// 0x0030 (0x0004) [0x0000000000000000]              
	struct FScriptDelegate                             m_TimeOutCallback;                                		// 0x0034 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      m_bShowTimeout : 1;                               		// 0x0040 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bAllowAccept : 1;                               		// 0x0040 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      m_bAllowDecline : 1;                              		// 0x0040 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      m_bAllowUnableToDisplay : 1;                      		// 0x0040 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      m_bAllowUnableToAccept : 1;                       		// 0x0040 (0x0004) [0x0000000000000000] [0x00000010] 
	struct FString                                     m_sAcceptDeclinePromptMessage;                    		// 0x0044 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      m_bAlternateKeybinding : 1;                       		// 0x0050 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FScriptDelegate                             m_DisplayedCallback;                              		// 0x0054 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             m_AnsweredCallback;                               		// 0x0060 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      m_bButtonYesNoType : 1;                           		// 0x006C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct APBUserInterface.cUIInGameQuestionManager.tUIInGameQuestionQueueEntry
// 0x007C
struct FtUIInGameQuestionQueueEntry
{
	struct FtUIInGameQuestionParam                     m_Params;                                         		// 0x0000 (0x0070) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                m_nID;                                            		// 0x0070 (0x0004) [0x0000000000000000]              
	float                                              m_fTimeInQueue;                                   		// 0x0074 (0x0004) [0x0000000000000000]              
	float                                              m_fTimeVisibleFor;                                		// 0x0078 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBUserInterface.cUI_StoInv_PlaceholderInventory.tStoInv_PlaceholderSlot
// 0x0024
struct FtStoInv_PlaceholderSlot
{
	struct FGuid                                       m_Guid;                                           		// 0x0000 (0x0010) [0x0000000000000000]              
	struct FString                                     m_sItemName;                                      		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                m_nCount;                                         		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                m_nData;                                          		// 0x0020 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBUserInterface.cUI_StoInv_PlaceholderInventory.tStoInv_PlaceholderCategory
// 0x000C
struct FtStoInv_PlaceholderCategory
{
	TArray< struct FtStoInv_PlaceholderSlot >          m_Slots;                                          		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct APBUserInterface.cUI_WS_CharacterInfo.WSCharacterStatus
// 0x0008
struct FWSCharacterStatus
{
	unsigned char                                      eVoipStatus;                                      		// 0x0000 (0x0001) [0x0000000000000000]              
	unsigned char                                      Threat;                                           		// 0x0001 (0x0001) [0x0000000000000000]              
	unsigned char                                      eColourProfile;                                   		// 0x0002 (0x0001) [0x0000000000000000]              
	unsigned long                                      bCanWitnessPlayer : 1;                            		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bUnconscious : 1;                                 		// 0x0004 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bArrested : 1;                                    		// 0x0004 (0x0004) [0x0000000000000000] [0x00000004] 
};

// ScriptStruct APBUserInterface.cUIAction_AddAttributeFromList.CellToDataStorePair
// 0x0018
struct FCellToDataStorePair
{
	struct FString                                     sSrcCellName;                                     		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     sDestDataStoreMarkup;                             		// 0x000C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct APBUserInterface.cUIAction_MoveContextPanel.ContextDock
// 0x0008
struct FContextDock
{
	unsigned char                                      eDockingFace;                                     		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bIsDocked : 1;                                    		// 0x0004 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
};

// ScriptStruct APBUserInterface.cUIDataStore_Chat.ConsoleCommand
// 0x0058
struct FConsoleCommand
{
	int                                                m_eConsoleCommand;                                		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     m_sDescription;                                   		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sSlashCommand;                                  		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sFunctionName;                                  		// 0x001C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      m_bEnabled : 1;                                   		// 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned char                                      m_eCommandType;                                   		// 0x002C (0x0001) [0x0000000000000000]              
	struct FString                                     m_sSyntaxExample;                                 		// 0x0030 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                m_nMinArgCount;                                   		// 0x003C (0x0004) [0x0000000000000000]              
	int                                                m_nMaxArgCount;                                   		// 0x0040 (0x0004) [0x0000000000000000]              
	unsigned char                                      m_eWorksFromState;                                		// 0x0044 (0x0001) [0x0000000000000000]              
	unsigned long                                      m_bWorksInEditors : 1;                            		// 0x0048 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FString                                     m_sDisplayName;                                   		// 0x004C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct APBUserInterface.cUIDataStore_Chat.EmoteCommand
// 0x0028
struct FEmoteCommand
{
	int                                                m_eEmoteCommand;                                  		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     m_sSlashCommand;                                  		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sPackageRef;                                    		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sDisplayName;                                   		// 0x001C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct APBUserInterface.cUIDataStore_Chat.ChatMessageCategory
// 0x0055
struct FChatMessageCategory
{
	unsigned char                                      m_eChatMessageCategory;                           		// 0x0000 (0x0001) [0x0000000000000000]              
	struct FString                                     m_sSlashCommand;                                  		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sSecondarySlashCommand;                         		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sTag;                                           		// 0x001C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sDescription;                                   		// 0x0028 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sSyntaxExample;                                 		// 0x0034 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                m_eFilterColour;                                  		// 0x0040 (0x0004) [0x0000000000000000]              
	struct FString                                     m_sFunctionName;                                  		// 0x0044 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      m_bValidCommand : 1;                              		// 0x0050 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bModePersists : 1;                              		// 0x0050 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      m_bValidFilter : 1;                               		// 0x0050 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      m_bDisplayNotification : 1;                       		// 0x0050 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned char                                      m_eWorksFromState;                                		// 0x0054 (0x0001) [0x0000000000000000]              
};

// ScriptStruct APBUserInterface.cUIDataStore_FileSelector.tUIFileSelector_File
// 0x0014
struct FtUIFileSelector_File
{
	struct FString                                     m_sName;                                          		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                m_Type;                                           		// 0x000C (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bIsSelectable : 1;                              		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bHasChildDirectories : 1;                       		// 0x0010 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct APBUserInterface.cUIAction_SE_PickLayer.HitLayer
// 0x0008
struct FHitLayer
{
	int                                                nIndex;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              fDistance;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBUserInterface.cUIMeshImage.tUIMeshImage_Mesh
// 0x005C
struct FtUIMeshImage_Mesh
{
	struct FVector                                     Position;                                         		// 0x0000 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     Scale;                                            		// 0x000C (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FRotator                                    OrientationCorrection;                            		// 0x0018 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FRotator                                    Orientation[ 0x2 ];                               		// 0x0024 (0x0018) [0x0000000000000001]              ( CPF_Edit )
	struct FRotator                                    OrientationVel[ 0x2 ];                            		// 0x003C (0x0018) [0x0000000000000001]              ( CPF_Edit )
	float                                              OrientationDampen[ 0x2 ];                         		// 0x0054 (0x0008) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct APBUserInterface.cUIMeshImage.tUIMeshImage_SkeletalMesh
// 0x0008(0x0064 - 0x005C)
struct FtUIMeshImage_SkeletalMesh : FtUIMeshImage_Mesh
{
	class USkeletalMesh*                               Mesh;                                             		// 0x005C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class USkeletalMeshComponent*                      m_pComponent;                                     		// 0x0060 (0x0004) [0x0000000004082008]              ( CPF_ExportObject | CPF_Transient | CPF_Component | CPF_EditInline )
};

// ScriptStruct APBUserInterface.cUIMeshImage.tUIMeshImage_StaticMesh
// 0x0004(0x0060 - 0x005C)
struct FtUIMeshImage_StaticMesh : FtUIMeshImage_Mesh
{
	class UStaticMesh*                                 Mesh;                                             		// 0x005C (0x0004) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
};

// ScriptStruct APBUserInterface.cUIMeshImage.tUIMeshImage_SMC
// 0x0004(0x0060 - 0x005C)
struct FtUIMeshImage_SMC : FtUIMeshImage_Mesh
{
	class USkeletalMeshComponent*                      Mesh;                                             		// 0x005C (0x0004) [0x0000000004082009]              ( CPF_Edit | CPF_ExportObject | CPF_Transient | CPF_Component | CPF_EditInline )
};

// ScriptStruct APBUserInterface.cUIMeshImage.tUIMeshImage_Light
// 0x0014
struct FtUIMeshImage_Light
{
	struct FColor                                      Colour;                                           		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Brightness;                                       		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FRotator                                    Direction;                                        		// 0x0008 (0x000C) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct APBUserInterface.cUIMeshImage.UIMeshViewerSetup
// 0x0038
struct FUIMeshViewerSetup
{
	struct FString                                     m_nUIMeshViewerSetup;                             		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              m_fCameraPosX;                                    		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              m_fCameraPosY;                                    		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              m_fCameraPosZ;                                    		// 0x0014 (0x0004) [0x0000000000000000]              
	float                                              m_fMeshCentreX;                                   		// 0x0018 (0x0004) [0x0000000000000000]              
	float                                              m_fMeshCentreY;                                   		// 0x001C (0x0004) [0x0000000000000000]              
	float                                              m_fMeshCentreZ;                                   		// 0x0020 (0x0004) [0x0000000000000000]              
	float                                              m_fMeshScale;                                     		// 0x0024 (0x0004) [0x0000000000000000]              
	float                                              m_fMeshOrientationX;                              		// 0x0028 (0x0004) [0x0000000000000000]              
	float                                              m_fMeshOrientationY;                              		// 0x002C (0x0004) [0x0000000000000000]              
	float                                              m_fMeshOrientationZ;                              		// 0x0030 (0x0004) [0x0000000000000000]              
	float                                              m_fCameraFOV;                                     		// 0x0034 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBUserInterface.cUIDataStore_TESTexture.TESUndoSlot
// 0x0030
struct FTESUndoSlot
{
	TArray< unsigned char >                            m_aData;                                          		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< unsigned char >                            m_aArea;                                          		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< unsigned char >                            m_aMask;                                          		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< unsigned long >                            m_aMaskFlag;                                      		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct APBUserInterface.cUIAction_VC_EnableThrottle.VehicleSoundSettings
// 0x0028
struct FVehicleSoundSettings
{
	int                                                nEngineType;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                nExhaustType;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                nTurboType;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                nTransmissionType;                                		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                nDumpValveType;                                   		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                nGearChangeType;                                  		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                nSirenType;                                       		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                nHornType;                                        		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                nAmpType;                                         		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                nSpeakerType;                                     		// 0x0024 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBUserInterface.cUIClothingOutfitListProvider.ClothingOutfitType
// 0x0038
struct FClothingOutfitType
{
	struct FGuid                                       ItemGuid;                                         		// 0x0000 (0x0010) [0x0000000000000000]              
	TArray< struct FGuid >                             aOutfitData;                                      		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      aLayerData;                                       		// 0x001C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sDisplayText;                                     		// 0x0028 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class USurface*                                    pDisplayImage;                                    		// 0x0034 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBUserInterface.cUIComp_ThumbnailListPresenter.UIThumbnailListItem
// 0x0028
struct FUIThumbnailListItem
{
	struct FUIListItemDataBinding                      DataSource;                                       		// 0x0000 (0x0014) [0x0000000000000002]              ( CPF_Const )
	class UcUIThumbnailList*                           OwnerList;                                        		// 0x0014 (0x0004) [0x0000000000002002]              ( CPF_Const | CPF_Transient )
	class USurface*                                    ValueTexture;                                     		// 0x0018 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UcUIThumbnailListString*                     ValueString;                                      		// 0x001C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	unsigned char                                      CellState;                                        		// 0x0020 (0x0001) [0x0000000000022001]              ( CPF_Edit | CPF_Transient | CPF_EditConst )
	unsigned long                                      bDisabled : 1;                                    		// 0x0024 (0x0004) [0x0000000000002001] [0x00000001] ( CPF_Edit | CPF_Transient )
};

// ScriptStruct APBUserInterface.cUIConsoleCommands.APBSupportPages
// 0x002C
struct FAPBSupportPages
{
	int                                                m_eAPBSupportPages;                               		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     m_sBaseURL;                                       		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sParameters;                                    		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sRegionDependantURL_INIKey;                     		// 0x001C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                m_eURLWipPage;                                    		// 0x0028 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBUserInterface.cUIDataStore_CustomisationEditor.CameraPosition
// 0x000C
struct FCameraPosition
{
	float                                              fCameraPosition;                                  		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              fActorRotation;                                   		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              fFOVPosition;                                     		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBUserInterface.cUIDataStore_CustomisationEditor.UICamera
// 0x0068
struct FUICamera
{
	struct FCameraPosition                             Position;                                         		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FCameraPosition                             Target;                                           		// 0x000C (0x000C) [0x0000000000000000]              
	struct FName                                       PositionEventName;                                		// 0x0018 (0x0008) [0x0000000000000000]              
	TArray< class UcEvent_APBRemoteEvent* >            aPositionEvents;                                  		// 0x0020 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FName                                       ActorRotationEventName;                           		// 0x002C (0x0008) [0x0000000000000000]              
	TArray< class UcEvent_APBRemoteEvent* >            aActorRotationEvents;                             		// 0x0034 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FName                                       FOVEventName;                                     		// 0x0040 (0x0008) [0x0000000000000000]              
	TArray< class UcEvent_APBRemoteEvent* >            aFOVEvents;                                       		// 0x0048 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FName                                       ActivateEventName;                                		// 0x0054 (0x0008) [0x0000000000000000]              
	TArray< class UcEvent_APBRemoteEvent* >            aActivateEvents;                                  		// 0x005C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct APBUserInterface.cUIDataStore_CustomisationEditor.UIOutfit
// 0x0018
struct FUIOutfit
{
	TArray< class UcClothingPartInfo* >                aParts;                                           		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UObject*                                     pDescriptor;                                      		// 0x000C (0x0004) [0x0000000000000000]              
	struct FPointer                                    pIRSOutfit;                                       		// 0x0010 (0x0004) [0x0000000000000000]              
	unsigned long                                      bAddPairedItems : 1;                              		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bIsFacialHair : 1;                                		// 0x0014 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct APBUserInterface.cUIDataStore_Contact_Vending_Filter.tUI_CV_Filter_Data
// 0x0130
struct FtUI_CV_Filter_Data
{
	int                                                m_nShop;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FtUI_S_ItemFilter_Expression                m_Category;                                       		// 0x0004 (0x003C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FtUI_S_ItemFilter_Expression                m_SubCategory;                                    		// 0x0040 (0x003C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FtUI_S_ItemFilter_Expression                m_Contact;                                        		// 0x007C (0x003C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FtUI_S_ItemFilter_Expression                m_Usable;                                         		// 0x00B8 (0x003C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FtUI_S_ItemFilter_Expression                m_Intersection;                                   		// 0x00F4 (0x003C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct APBUserInterface.cUIDataStore_DistrictMap.DistrictMapCharacter
// 0x000C
struct FDistrictMapCharacter
{
	int                                                nCharacterID;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FVector2D                                   vPosition;                                        		// 0x0004 (0x0008) [0x0000000000000000]              
};

// ScriptStruct APBUserInterface.cUIDataStore_Fnd_GroupFinder.tCachedGroup
// 0x0020
struct FtCachedGroup
{
	int                                                m_nGroupUID;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     m_sLeaderName;                                    		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                m_nMembers;                                       		// 0x0010 (0x0004) [0x0000000000000000]              
	struct FString                                     m_sMessage;                                       		// 0x0014 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct APBUserInterface.cUIDataStore_Fnd_GroupFinder.tCachedGroupPage
// 0x0010
struct FtCachedGroupPage
{
	TArray< struct FtCachedGroup >                     Entries;                                          		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      m_bNeedsRefresh : 1;                              		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct APBUserInterface.cUIDataStore_Fnd_GroupInfo.tCachedGroupInfo
// 0x0020
struct FtCachedGroupInfo
{
	struct FString                                     sLeaderName;                                      		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bHasExtraInfo : 1;                                		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	TArray< struct FString >                           Members;                                          		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bNeedsRefresh : 1;                                		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct APBUserInterface.cUIDataStore_Fnd_TeamFinder.tCachedTeam
// 0x002C
struct FtCachedTeam
{
	int                                                m_nTeamUID;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     m_sTeamName;                                      		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                m_nMembers;                                       		// 0x0010 (0x0004) [0x0000000000000000]              
	struct FString                                     m_sMessage;                                       		// 0x0014 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                m_nRegisteredYear;                                		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                m_nRegisteredMonth;                               		// 0x0024 (0x0004) [0x0000000000000000]              
	int                                                m_nRegisteredDay;                                 		// 0x0028 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBUserInterface.cUIDataStore_Fnd_TeamFinder.tCachedPage
// 0x0010
struct FtCachedPage
{
	TArray< struct FtCachedTeam >                      Entries;                                          		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      m_bNeedsRefresh : 1;                              		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct APBUserInterface.cUIDataStore_Fnd_TeamInfo.tCachedTeamInfo
// 0x002C
struct FtCachedTeamInfo
{
	struct FString                                     sName;                                            		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bHasExtraInfo : 1;                                		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	struct FString                                     sBio;                                             		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           Contacts;                                         		// 0x001C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bNeedsRefresh : 1;                                		// 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct APBUserInterface.cUIDataStore_GameFlowManager.GameFlowErrorMessage
// 0x0018
struct FGameFlowErrorMessage
{
	struct FString                                     sTitle;                                           		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sMessage;                                         		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct APBUserInterface.cUIDataStore_HUD_Group.GroupListRow
// 0x0030
struct FGroupListRow
{
	int                                                m_nCharacterUID;                                  		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     m_sName;                                          		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sNameMarkup;                                    		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      m_eStatus;                                        		// 0x001C (0x0001) [0x0000000000000000]              
	unsigned char                                      m_eVoipStatus;                                    		// 0x001D (0x0001) [0x0000000000000000]              
	unsigned char                                      m_nThreat;                                        		// 0x001E (0x0001) [0x0000000000000000]              
	unsigned long                                      m_bGroupLeader : 1;                               		// 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bGroupMember : 1;                               		// 0x0020 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      m_bSideLeader : 1;                                		// 0x0020 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      m_bSideMember : 1;                                		// 0x0020 (0x0004) [0x0000000000000000] [0x00000008] 
	float                                              m_fTextOpacity;                                   		// 0x0024 (0x0004) [0x0000000000000000]              
	float                                              m_fBackgroundOpacity;                             		// 0x0028 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bValid : 1;                                     		// 0x002C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct APBUserInterface.cUIDataStore_HUD_HitIndicators.HitIndicator
// 0x002C
struct FHitIndicator
{
	class UUIScene*                                    m_pScene;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	class UUIImage*                                    m_pHitImage;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
	class UMaterialInstanceConstant*                   m_pHitMaterial;                                   		// 0x0008 (0x0004) [0x0000000000000000]              
	class UUIImage*                                    m_pBloodImage;                                    		// 0x000C (0x0004) [0x0000000000000000]              
	class UMaterialInstanceConstant*                   m_pBloodMaterial;                                 		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              m_fTimeStarted;                                   		// 0x0014 (0x0004) [0x0000000000000000]              
	float                                              m_fTimeLength;                                    		// 0x0018 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bActive : 1;                                    		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
	struct FVector                                     m_vHitOrigin;                                     		// 0x0020 (0x000C) [0x0000000000000000]              
};

// ScriptStruct APBUserInterface.cUIDataStore_HUD_Mission.tUIDataStore_HUD_MissionTeamData
// 0x0008
struct FtUIDataStore_HUD_MissionTeamData
{
	int                                                nCurrentObjective;                                		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                nObjectiveCount;                                  		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBUserInterface.cUIDataStore_HUD_Mission.tUIDataStore_HUD_MissionData
// 0x0014
struct FtUIDataStore_HUD_MissionData
{
	float                                              fTimeRemaining;                                   		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FtUIDataStore_HUD_MissionTeamData           LocalTeam;                                        		// 0x0004 (0x0008) [0x0000000000000000]              
	struct FtUIDataStore_HUD_MissionTeamData           RemoteTeam;                                       		// 0x000C (0x0008) [0x0000000000000000]              
};

// ScriptStruct APBUserInterface.cUIDataStore_HUD_Reticule.ReticuleScene
// 0x0031
struct FReticuleScene
{
	class UUIScene*                                    m_pScene;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	class UUIImage*                                    m_pXImage;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	class UUIImage*                                    m_pDotImage;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
	class UUIImage*                                    m_pTopImage;                                      		// 0x000C (0x0004) [0x0000000000000000]              
	class UUIImage*                                    m_pBottomImage;                                   		// 0x0010 (0x0004) [0x0000000000000000]              
	class UUIImage*                                    m_pLeftImage;                                     		// 0x0014 (0x0004) [0x0000000000000000]              
	class UUIImage*                                    m_pRightImage;                                    		// 0x0018 (0x0004) [0x0000000000000000]              
	class UUIImage*                                    m_pHitImage;                                      		// 0x001C (0x0004) [0x0000000000000000]              
	class UUIImage*                                    m_pHighlightImage;                                		// 0x0020 (0x0004) [0x0000000000000000]              
	class UcUIEvent_APBRemoteEvent*                    m_pRE_RangedReticule;                             		// 0x0024 (0x0004) [0x0000000000000000]              
	class USeqAct_Interp*                              m_pMatinee;                                       		// 0x0028 (0x0004) [0x0000000000000000]              
	class UcUIEvent_APBRemoteEvent*                    m_pRE_HitSuccess;                                 		// 0x002C (0x0004) [0x0000000000000000]              
	unsigned char                                      m_eReticuleType;                                  		// 0x0030 (0x0001) [0x0000000000000000]              
};

// ScriptStruct APBUserInterface.cUIDataStore_HUD_Reticule.ReticuleHitNotification
// 0x0018
struct FReticuleHitNotification
{
	struct FLinearColor                                Colour;                                           		// 0x0000 (0x0010) [0x0000000000000000]              
	int                                                nExpiryTime;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              fDisplayTime;                                     		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBUserInterface.cUIDataStore_HUD_Subtitles.SubtitleLine
// 0x0010
struct FSubtitleLine
{
	float                                              m_fDisplayUntil;                                  		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     m_sSubtitleLine;                                  		// 0x0004 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct APBUserInterface.cUIDataStore_HUD_Usables.tTimeData
// 0x0005
struct FtTimeData
{
	int                                                m_nTime;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned char                                      m_eDateUnit;                                      		// 0x0004 (0x0001) [0x0000000000000000]              
};

// ScriptStruct APBUserInterface.cUIDataStore_HUD_Usables.Usable
// 0x0028
struct FUsable
{
	class UUIPanel*                                    pPanel;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	class UUIImage*                                    pImage;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	class UUIImage*                                    pImageBG;                                         		// 0x0008 (0x0004) [0x0000000000000000]              
	class UUILabel*                                    pTimerLabel;                                      		// 0x000C (0x0004) [0x0000000000000000]              
	class UUIImage*                                    pTimerLabelBGImg;                                 		// 0x0010 (0x0004) [0x0000000000000000]              
	class UTexture*                                    pIconTexture;                                     		// 0x0014 (0x0004) [0x0000000000000000]              
	struct FtTimeData                                  tIconTime;                                        		// 0x0018 (0x0008) [0x0000000000000000]              
	unsigned char                                      eDeployedItemState;                               		// 0x0020 (0x0001) [0x0000000000000000]              
	int                                                nSlot;                                            		// 0x0024 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBUserInterface.cUIDataStore_HUD_Usables.HUDUsables_DisplaySetting
// 0x0010
struct FHUDUsables_DisplaySetting
{
	unsigned char                                      m_eHUDUsables_DisplaySetting;                     		// 0x0000 (0x0001) [0x0000000000000000]              
	int                                                m_eIconColour;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              m_fBackgroundOpacity;                             		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              m_fTextBackgroundOpacity;                         		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBUserInterface.cUIDataStore_IGS_PlayerInfo_Character.tCharacterMeshData
// 0x0010
struct FtCharacterMeshData
{
	class USkeletalMeshComponent*                      m_pSMC;                                           		// 0x0000 (0x0004) [0x0000000004182008]              ( CPF_ExportObject | CPF_Transient | CPF_Component | CPF_EditInline )
	class UMaterialInstanceConstant*                   m_pBodyMaterial;                                  		// 0x0004 (0x0004) [0x0000000000100000]              
	class UMaterial*                                   m_pParentBodyMaterial;                            		// 0x0008 (0x0004) [0x0000000000100000]              
	class UObject*                                     m_pGolemDescriptor;                               		// 0x000C (0x0004) [0x0000000000100000]              
};

// ScriptStruct APBUserInterface.cUIDataStore_Lobby.tLobbyCacheEntry
// 0x0008
struct FtLobbyCacheEntry
{
	int                                                m_SlotNum;                                        		// 0x0000 (0x0004) [0x0000000000100000]              
	unsigned long                                      m_bValid : 1;                                     		// 0x0004 (0x0004) [0x0000000000100000] [0x00000001] 
};

// ScriptStruct APBUserInterface.cUIDataStore_Lobby.tLobbyCharacterMeshData
// 0x000C
struct FtLobbyCharacterMeshData
{
	class USkeletalMeshComponent*                      m_pSMC;                                           		// 0x0000 (0x0004) [0x0000000004182008]              ( CPF_ExportObject | CPF_Transient | CPF_Component | CPF_EditInline )
	class UMaterialInstanceConstant*                   m_pBodyMaterial;                                  		// 0x0004 (0x0004) [0x0000000000100000]              
	class UMaterial*                                   m_pParentBodyMaterial;                            		// 0x0008 (0x0004) [0x0000000000100000]              
};

// ScriptStruct APBUserInterface.cUIDataStore_Locale.tLocBeacon
// 0x0024
struct FtLocBeacon
{
	int                                                nType;                                            		// 0x0000 (0x0004) [0x0000000000100000]              
	struct FString                                     sName;                                            		// 0x0004 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FVector                                     vPosition;                                        		// 0x0010 (0x000C) [0x0000000000100000]              
	float                                              fRadius;                                          		// 0x001C (0x0004) [0x0000000000100000]              
	float                                              fHeight;                                          		// 0x0020 (0x0004) [0x0000000000100000]              
};

// ScriptStruct APBUserInterface.cUIDataStore_Locale.tSuppressedMsg
// 0x0014
struct FtSuppressedMsg
{
	unsigned char                                      eType;                                            		// 0x0000 (0x0001) [0x0000000000100000]              
	struct FString                                     sLocaleName;                                      		// 0x0004 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	float                                              fExpiryTime;                                      		// 0x0010 (0x0004) [0x0000000000100000]              
};

// ScriptStruct APBUserInterface.cUIDataStore_Locale.LocationBeacon
// 0x000C
struct FLocationBeacon
{
	int                                                m_eLocationBeacon;                                		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              m_fRadius;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                m_nHeight;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBUserInterface.cUIDataStore_PopupDialogManager.PopupDialog
// 0x0038
struct FPopupDialog
{
	int                                                m_ePopupDialog;                                   		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned char                                      m_ePopupCategory;                                 		// 0x0004 (0x0001) [0x0000000000000000]              
	struct FString                                     m_sPopupBody;                                     		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                m_eUIWidgetHightlight_Aggregation;                		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                m_nTimesToShow;                                   		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                m_eKnowledgeBaseURL;                              		// 0x001C (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bForceKnowledgebase : 1;                        		// 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                m_eChainedPopup;                                  		// 0x0024 (0x0004) [0x0000000000000000]              
	float                                              m_fDisplayTime;                                   		// 0x0028 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bFlushQueue : 1;                                		// 0x002C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bDoNotQueue : 1;                                		// 0x002C (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      m_bSuppressEnforcer : 1;                          		// 0x002C (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      m_bSuppressCriminal : 1;                          		// 0x002C (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      m_bSuppressMain : 1;                              		// 0x002C (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      m_bForChat : 1;                                   		// 0x002C (0x0004) [0x0000000000000000] [0x00000020] 
	int                                                m_ePosition;                                      		// 0x0030 (0x0004) [0x0000000000000000]              
	int                                                m_eOptionalWaypoint;                              		// 0x0034 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBUserInterface.cUIDataStore_PopupDialogManager.PopupDialogCategory
// 0x0008
struct FPopupDialogCategory
{
	unsigned char                                      m_ePopupDialogCategory;                           		// 0x0000 (0x0001) [0x0000000000000000]              
	int                                                m_eHighlightColour;                               		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBUserInterface.cUIDataStore_PopupDialogManager.PopupDialogTrigger
// 0x0008
struct FPopupDialogTrigger
{
	int                                                m_ePopupDialogTrigger;                            		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                m_eDialogShown;                                   		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBUserInterface.cUIDataStore_PopupDialogManager.PopupDialogTriggerSceneOpen
// 0x0010
struct FPopupDialogTriggerSceneOpen
{
	int                                                m_ePopupDialogTrigger;                            		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     m_sEventName;                                     		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct APBUserInterface.cUIDataStore_PopupDialogManager.PopupDialogTrigger_ReticuleOver
// 0x0010
struct FPopupDialogTrigger_ReticuleOver
{
	int                                                m_ePopupDialogTrigger;                            		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     m_sEventName;                                     		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct APBUserInterface.cUIDataStore_PopupDialogManager.PopupDialogTrigger_UIEvent_PostOnClick
// 0x0010
struct FPopupDialogTrigger_UIEvent_PostOnClick
{
	int                                                m_ePopupDialogTrigger;                            		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     m_sEventName;                                     		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct APBUserInterface.cUIDataStore_PopupDialogManager.PopupDialogTrigger_Generic
// 0x0010
struct FPopupDialogTrigger_Generic
{
	int                                                m_ePopupDialogTrigger;                            		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     m_sEventName;                                     		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct APBUserInterface.cUIDataStore_PopupDialogManager.PopupDialogTrigger_WorldSpaceZone
// 0x0010
struct FPopupDialogTrigger_WorldSpaceZone
{
	int                                                m_ePopupDialogTrigger;                            		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     m_sEventName;                                     		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct APBUserInterface.cUIDataStore_PopupDialogManager.PopupDialogTrigger_GamePlayEvents
// 0x0010
struct FPopupDialogTrigger_GamePlayEvents
{
	int                                                m_ePopupDialogTrigger;                            		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     m_sEventName;                                     		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct APBUserInterface.cUIDataStore_PopupDialogManager.PopupDialogTrigger_CSA_Begin
// 0x0010
struct FPopupDialogTrigger_CSA_Begin
{
	int                                                m_ePopupDialogTrigger;                            		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     m_sEventName;                                     		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct APBUserInterface.cUIDataStore_PopupDialogManager.PopupDialogTrigger_CSA_End
// 0x0010
struct FPopupDialogTrigger_CSA_End
{
	int                                                m_ePopupDialogTrigger;                            		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     m_sEventName;                                     		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct APBUserInterface.cUIDataStore_PopupDialogManager.PopupDialogTrigger_SceneClose
// 0x0010
struct FPopupDialogTrigger_SceneClose
{
	int                                                m_ePopupDialogTrigger;                            		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     m_sEventName;                                     		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct APBUserInterface.cUIDataStore_PopupDialogManager.PopupDialogUIHighlightAggregation
// 0x0040
struct FPopupDialogUIHighlightAggregation
{
	int                                                m_ePopupDialogUIHighlightAggregation;             		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     m_sWidget1;                                       		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sWidget2;                                       		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sWidget3;                                       		// 0x001C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sWidget4;                                       		// 0x0028 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sWidget5;                                       		// 0x0034 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct APBUserInterface.cUIDataStore_Scoreboard.ScoreboardData
// 0x0088
struct FScoreboardData
{
	unsigned long                                      bOurSide : 1;                                     		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                nCharacterID;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
	unsigned char                                      eFaction;                                         		// 0x0008 (0x0001) [0x0000000000000000]              
	unsigned long                                      bMVP : 1;                                         		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                nMVP;                                             		// 0x0010 (0x0004) [0x0000000000000000]              
	struct FString                                     sPlayerName;                                      		// 0x0014 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                nKills;                                           		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                nAssists;                                         		// 0x0024 (0x0004) [0x0000000000000000]              
	int                                                nDeaths;                                          		// 0x0028 (0x0004) [0x0000000000000000]              
	int                                                nTargets;                                         		// 0x002C (0x0004) [0x0000000000000000]              
	int                                                nArrests;                                         		// 0x0030 (0x0004) [0x0000000000000000]              
	int                                                nArrested;                                        		// 0x0034 (0x0004) [0x0000000000000000]              
	int                                                nCash;                                            		// 0x0038 (0x0004) [0x0000000000000000]              
	int                                                nContactStanding;                                 		// 0x003C (0x0004) [0x0000000000000000]              
	unsigned long                                      bHideContactStanding : 1;                         		// 0x0040 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                nOrganisationStanding;                            		// 0x0044 (0x0004) [0x0000000000000000]              
	unsigned long                                      bHideOrganisationStanding : 1;                    		// 0x0048 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bPlayerOnline : 1;                                		// 0x0048 (0x0004) [0x0000000000000000] [0x00000002] 
	int                                                nMinutes;                                         		// 0x004C (0x0004) [0x0000000000000000]              
	int                                                nSeconds;                                         		// 0x0050 (0x0004) [0x0000000000000000]              
	int                                                nThreat;                                          		// 0x0054 (0x0004) [0x0000000000000000]              
	int                                                nRating;                                          		// 0x0058 (0x0004) [0x0000000000000000]              
	TArray< int >                                      anMedals;                                         		// 0x005C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                m_nPrimaryWeaponID;                               		// 0x0068 (0x0004) [0x0000000000000000]              
	int                                                m_aWeaponFnModIDs[ 0x3 ];                         		// 0x006C (0x000C) [0x0000000000000000]              
	int                                                m_aCharacterFnModIDs[ 0x4 ];                      		// 0x0078 (0x0010) [0x0000000000000000]              
};

// ScriptStruct APBUserInterface.cUIDataStore_Soc_FindList.tPlayerInfo
// 0x001C
struct FtPlayerInfo
{
	int                                                m_nCharacterUID;                                  		// 0x0000 (0x0004) [0x0000000000100000]              
	int                                                m_nDistrictUID;                                   		// 0x0004 (0x0004) [0x0000000000100000]              
	int                                                m_nInstanceNo;                                    		// 0x0008 (0x0004) [0x0000000000100000]              
	int                                                m_nFaction;                                       		// 0x000C (0x0004) [0x0000000000100000]              
	struct FString                                     m_sCharacterName;                                 		// 0x0010 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct APBUserInterface.cUIDataStore_SymbolEditor.UndoSlot
// 0x000C
struct FUndoSlot
{
	TArray< unsigned char >                            m_aData;                                          		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct APBUserInterface.cUIDataStore_TooltipServer.TooltipRep
// 0x0018
struct FTooltipRep
{
	struct FString                                     sWidgetSceneTag;                                  		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sTooltipText;                                     		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct APBUserInterface.cUIDataStore_VideoReplay.VideoReplayUIEntry
// 0x0028
struct FVideoReplayUIEntry
{
	int                                                m_eVideoReplayUIEntry;                            		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     m_sDisplayName;                                   		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sDescription;                                   		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sVideoFileName;                                 		// 0x001C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct APBUserInterface.cUIListProvider_CC_AvailableScars.ScarItem
// 0x0010
struct FScarItem
{
	struct FString                                     sDisplayText;                                     		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                nIndex;                                           		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBUserInterface.cUIListProvider_Wardrobe_Complexity.ComplexityItem
// 0x000C
struct FComplexityItem
{
	class UObject*                                     pDescriptor;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              fRatio;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FColor                                      Col;                                              		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBUserInterface.cUIListProvider_CC_HairMorphs.HairMorphItem
// 0x0018
struct FHairMorphItem
{
	struct FString                                     sDisplayText;                                     		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UcAttribute*                                 pHorizAttribute;                                  		// 0x000C (0x0004) [0x0000000000000000]              
	class UcAttribute*                                 pVertAttribute;                                   		// 0x0010 (0x0004) [0x0000000000000000]              
	unsigned long                                      bAllHairMorphs : 1;                               		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct APBUserInterface.cUIListProvider_ClothingParts_ProjectionMasks.ProjectionMask
// 0x0010
struct FProjectionMask
{
	int                                                nID;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     sDisplayText;                                     		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct APBUserInterface.cUIListProvider_ClothingParts_Vinyls.VinylArea
// 0x0018
struct FVinylArea
{
	int                                                nIndex;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     sDisplayText;                                     		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FPointer                                    pVinylData;                                       		// 0x0010 (0x0004) [0x0000000000001000]              ( CPF_Native )
	class UMaterialInstanceConstant*                   pColourMat;                                       		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBUserInterface.cUIListProvider_ClothingPartsColours.ColourArea
// 0x0014
struct FColourArea
{
	int                                                nIndex;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     sName;                                            		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UMaterialInstanceConstant*                   pColourMat;                                       		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBUserInterface.cUIListProvider_Primitives.PrimitivePageData
// 0x001C
struct FPrimitivePageData
{
	int                                                nPageIndex;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	TArray< int >                                      aPrimitives;                                      		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< unsigned long >                            aIsUnlocked;                                      		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct APBUserInterface.cUIListProvider_DistrictMap_FamousPlayers.FamousPlayerListItem
// 0x0010
struct FFamousPlayerListItem
{
	int                                                nCharacterID;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     sName;                                            		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct APBUserInterface.cUIListProvider_DistrictMap_Legend.LegendListItem
// 0x0018
struct FLegendListItem
{
	struct FPointer                                    pDistrictMarkerData;                              		// 0x0000 (0x0004) [0x0000000000001000]              ( CPF_Native )
	struct FString                                     sDisplayText;                                     		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class USurface*                                    pMarkerImage;                                     		// 0x0010 (0x0004) [0x0000000000000000]              
	unsigned long                                      bEnabled : 1;                                     		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct APBUserInterface.cUIListProvider_DistrictMap_MessageCategories.HUDMessageCategoryItem
// 0x0008
struct FHUDMessageCategoryItem
{
	class USurface*                                    pCategoryImage;                                   		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FPointer                                    pCategory;                                        		// 0x0004 (0x0004) [0x0000000000001000]              ( CPF_Native )
};

// ScriptStruct APBUserInterface.cUIListProvider_DistrictMap_Messages.DistrictMapMessage
// 0x0008
struct FDistrictMapMessage
{
	class USurface*                                    pCategoryImage;                                   		// 0x0000 (0x0004) [0x0000000000000000]              
	class UcUI_HUD_HudMessage*                         pHUDMessage;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBUserInterface.cUIListProvider_DistrictMap_Messages.DistrictMapMessageListItem
// 0x0014
struct FDistrictMapMessageListItem
{
	class USurface*                                    pCategoryImage;                                   		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     sDisplayText;                                     		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UcUI_HUD_HudMessage*                         pHUDMessage;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBUserInterface.cUIListProvider_HUD_ActionMessage.ActionMessage
// 0x002C
struct FActionMessage
{
	class UcUI_HUD_HudMessage*                         pHUDMessage;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     sOriginalText;                                    		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sDisplayText;                                     		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sColourTag;                                       		// 0x001C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              fDisplayTime;                                     		// 0x0028 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBUserInterface.cUIListProvider_MS_Stats.tMS_Stats_PlayerData
// 0x006C
struct FtMS_Stats_PlayerData
{
	struct FString                                     m_sPlayerName;                                    		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sTeamName;                                      		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      m_bMVP : 1;                                       		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bOnline : 1;                                    		// 0x0018 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      m_bCriminal : 1;                                  		// 0x0018 (0x0004) [0x0000000000000000] [0x00000004] 
	int                                                m_nKills;                                         		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                m_nAssists;                                       		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                m_nDeaths;                                        		// 0x0024 (0x0004) [0x0000000000000000]              
	int                                                m_nTargets;                                       		// 0x0028 (0x0004) [0x0000000000000000]              
	int                                                m_nArrests;                                       		// 0x002C (0x0004) [0x0000000000000000]              
	int                                                m_nArrested;                                      		// 0x0030 (0x0004) [0x0000000000000000]              
	int                                                m_nCash;                                          		// 0x0034 (0x0004) [0x0000000000000000]              
	int                                                m_bHideContactStanding;                           		// 0x0038 (0x0004) [0x0000000000000000]              
	int                                                m_bHideOrganisationStanding;                      		// 0x003C (0x0004) [0x0000000000000000]              
	int                                                m_nContactStanding;                               		// 0x0040 (0x0004) [0x0000000000000000]              
	int                                                m_nOrganisationStanding;                          		// 0x0044 (0x0004) [0x0000000000000000]              
	int                                                m_nTime;                                          		// 0x0048 (0x0004) [0x0000000000000000]              
	int                                                m_nThreat;                                        		// 0x004C (0x0004) [0x0000000000000000]              
	int                                                m_MedalsBitfield[ 0x7 ];                          		// 0x0050 (0x001C) [0x0000000000000000]              
};

// ScriptStruct APBUserInterface.cUIListProvider_MusicStudio_ContextOptions.UIMSContextOption
// 0x0014
struct FUIMSContextOption
{
	struct FString                                     sName;                                            		// 0x0000 (0x000C) [0x0000000000502000]              ( CPF_Transient | CPF_NeedCtorLink )
	unsigned long                                      bEnabled : 1;                                     		// 0x000C (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	unsigned long                                      bLocalized : 1;                                   		// 0x000C (0x0004) [0x0000000000002000] [0x00000002] ( CPF_Transient )
	struct FPointer                                    pUserData;                                        		// 0x0010 (0x0004) [0x0000000000001000]              ( CPF_Native )
};

// ScriptStruct APBUserInterface.cUIListProvider_SymbolsBase.SymbolItem
// 0x0030
struct FSymbolItem
{
	class USurface*                                    pDisplayImage;                                    		// 0x0000 (0x0004) [0x0000000000000000]              
	TArray< unsigned char >                            aData;                                            		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sDisplayText;                                     		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sItemGUID;                                        		// 0x001C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bSelfCreated : 1;                                 		// 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FPointer                                    pSymbolItemType;                                  		// 0x002C (0x0004) [0x0000000000001000]              ( CPF_Native )
};

// ScriptStruct APBUserInterface.iUI_StoInv_Inventory.tStoInv_InventorySlot
// 0x0008
struct FtStoInv_InventorySlot
{
	unsigned char                                      m_Category;                                       		// 0x0000 (0x0001) [0x0000000000000000]              
	int                                                m_nSlot;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBUserInterface.cUIListProvider_Wardrobe_Layering.LayeringSwapItem
// 0x0008
struct FLayeringSwapItem
{
	class UcClothingPartInfo*                          pPart;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FPointer                                    pPossibleSwap;                                    		// 0x0004 (0x0004) [0x0000000000001000]              ( CPF_Native )
};

// ScriptStruct APBUserInterface.cUIMSGrid.UIMSGridCell
// 0x0019
struct FUIMSGridCell
{
	int                                                Val;                                              		// 0x0000 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              Alpha;                                            		// 0x0004 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class USurface*                                    ValueTexture;                                     		// 0x0008 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIString*                                   ValueString;                                      		// 0x000C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FPointer                                    pCellStyle;                                       		// 0x0010 (0x0004) [0x0000000000003000]              ( CPF_Native | CPF_Transient )
	unsigned long                                      bTextNeedsReformatting : 1;                       		// 0x0014 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	unsigned char                                      nState;                                           		// 0x0018 (0x0001) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct APBUserInterface.cUIMSGrid.UIMSGridRow
// 0x000C
struct FUIMSGridRow
{
	TArray< struct FUIMSGridCell >                     aCells;                                           		// 0x0000 (0x000C) [0x0000000000502000]              ( CPF_Transient | CPF_NeedCtorLink )
};

// ScriptStruct APBUserInterface.cUIMSGrid.UIMSGridCoord
// 0x0018
struct FUIMSGridCoord
{
	int                                                nRow;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                nCol;                                             		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FVector2D                                   MousePos;                                         		// 0x0008 (0x0008) [0x0000000000000000]              
	struct FVector2D                                   MousePosCellPerc;                                 		// 0x0010 (0x0008) [0x0000000000000000]              
};

// ScriptStruct APBUserInterface.cUIMSGrid.UIMSGridCellStyleData
// 0x000C
struct FUIMSGridCellStyleData
{
	class UUIStyle_Combo*                              StyleCombo;                                       		// 0x0000 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIStyle_Image*                              ImageStyle;                                       		// 0x0004 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIStyle_Text*                               TextStyle;                                        		// 0x0008 (0x0004) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct APBUserInterface.cUIMSGrid.UIMSGridCellStyle
// 0x0064
struct FUIMSGridCellStyle
{
	struct FUIMSGridCellStyleData                      aStyleData[ 0x5 ];                                		// 0x0000 (0x003C) [0x0000000000002000]              ( CPF_Transient )
	class USurface*                                    ValueTexture;                                     		// 0x003C (0x0004) [0x0000000014000001]              ( CPF_Edit | CPF_EditInline | CPF_EditInlineUse )
	struct FName                                       MouseCursorName;                                  		// 0x0040 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              Alpha;                                            		// 0x0048 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FLinearColor                                ImageColour;                                      		// 0x004C (0x0010) [0x0000000000000001]              ( CPF_Edit )
	int                                                nDefaultState;                                    		// 0x005C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	unsigned long                                      bForceStateUse : 1;                               		// 0x0060 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	unsigned long                                      bUseLinearColour : 1;                             		// 0x0060 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
};

// ScriptStruct APBUserInterface.cUIMSGrid.UIMSGridCellRenderData
// 0x0034
struct FUIMSGridCellRenderData
{
	int                                                nRow;                                             		// 0x0000 (0x0004) [0x0000000000100000]              
	int                                                nCol;                                             		// 0x0004 (0x0004) [0x0000000000100000]              
	struct FPointer                                    pCell;                                            		// 0x0008 (0x0004) [0x0000000000101000]              ( CPF_Native )
	class USurface*                                    pSurface;                                         		// 0x000C (0x0004) [0x0000000000100000]              
	struct FLinearColor                                ImageColor;                                       		// 0x0010 (0x0010) [0x0000000000100000]              
	float                                              Alpha;                                            		// 0x0020 (0x0004) [0x0000000000100000]              
	float                                              X;                                                		// 0x0024 (0x0004) [0x0000000000100000]              
	float                                              Y;                                                		// 0x0028 (0x0004) [0x0000000000100000]              
	float                                              XL;                                               		// 0x002C (0x0004) [0x0000000000100000]              
	float                                              YL;                                               		// 0x0030 (0x0004) [0x0000000000100000]              
};

// ScriptStruct APBUserInterface.cUIMSDSPContainer.DSPKnobOverrides
// 0x0010
struct FDSPKnobOverrides
{
	class UTexture2D*                                  m_pBGTexture;                                     		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UTexture2D*                                  m_pKnobTexture;                                   		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                m_nVertOffset;                                    		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                m_nLabelWidth;                                    		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct APBUserInterface.cUIMSDSPContainer.DSPComboOverrides
// 0x000C
struct FDSPComboOverrides
{
	float                                              m_nVertOffset;                                    		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              m_nHorzOffset;                                    		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              m_nWidth;                                         		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct APBUserInterface.cUIMSDSPContainer.DSPCheckboxOverrides
// 0x0008
struct FDSPCheckboxOverrides
{
	float                                              m_nVertOffset;                                    		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              m_nHorzOffset;                                    		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct APBUserInterface.cUIMSDSPPage.UIMSDspParameterBinding
// 0x0010
struct FUIMSDspParameterBinding
{
	int                                                nParameterIndex;                                  		// 0x0000 (0x0004) [0x0000000000100000]              
	unsigned long                                      bONParameter : 1;                                 		// 0x0004 (0x0004) [0x0000000000100000] [0x00000001] 
	class UUIDataStoreSubscriber*                      pDataSubscriber;                                  		// 0x0008 (0x0008) [0x0000000000100000]              
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x000C (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
};

// ScriptStruct APBUserInterface.cUIMSDSPPage.UIMSDspInfo
// 0x0034
struct FUIMSDspInfo
{
	class UUIPanel*                                    pMainPanel;                                       		// 0x0000 (0x0004) [0x0000000000100000]              
	class UUIComboBox*                                 pDspTypeComboBox;                                 		// 0x0004 (0x0004) [0x0000000000100000]              
	class UUIButton*                                   pRemoveBtn;                                       		// 0x0008 (0x0004) [0x0000000000100000]              
	class UUIButton*                                   pMoveLeftBtn;                                     		// 0x000C (0x0004) [0x0000000000100000]              
	class UUIButton*                                   pMoveRightBtn;                                    		// 0x0010 (0x0004) [0x0000000000100000]              
	class UUICheckbox*                                 pEnableChk;                                       		// 0x0014 (0x0004) [0x0000000000100000]              
	class UUIPanel*                                    pWorkPanel;                                       		// 0x0018 (0x0004) [0x0000000000100000]              
	class UcUIComp_AutoAlignment*                      pAlignComp;                                       		// 0x001C (0x0004) [0x0000000004180008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	TArray< struct FUIMSDspParameterBinding >          aBindings;                                        		// 0x0020 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                nDspChainIndex;                                   		// 0x002C (0x0004) [0x0000000000100000]              
	int                                                nCurrDspType;                                     		// 0x0030 (0x0004) [0x0000000000100000]              
};

// ScriptStruct APBUserInterface.cUIMultiPartProgressBar.MultiPartProgressBar_Section
// 0x000C
struct FMultiPartProgressBar_Section
{
	float                                              fRatio;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned long                                      bMouseOver : 1;                                   		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FColor                                      Col;                                              		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBUserInterface.cUISelectableMaskImage.tUISelectableMaskImage_Mask
// 0x0018
struct FtUISelectableMaskImage_Mask
{
	class UcUITexturePickable*                         Texture;                                          		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Border[ 0x4 ];                                    		// 0x0004 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      m_bIsSelected : 1;                                		// 0x0014 (0x0004) [0x0000000000002001] [0x00000001] ( CPF_Edit | CPF_Transient )
	unsigned long                                      m_bIsMouseOver : 1;                               		// 0x0014 (0x0004) [0x0000000000002001] [0x00000002] ( CPF_Edit | CPF_Transient )
	unsigned long                                      m_bIsDisabled : 1;                                		// 0x0014 (0x0004) [0x0000000000002001] [0x00000004] ( CPF_Edit | CPF_Transient )
};

// ScriptStruct APBUserInterface.cUIVehicleComponentPartListProvider.VehicleUIComponentPart
// 0x001C
struct FVehicleUIComponentPart
{
	struct FPointer                                    pUnlockItemType;                                  		// 0x0000 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	int                                                nPartIndex;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FString                                     sDisplayText;                                     		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class USurface*                                    pDisplayImage;                                    		// 0x0014 (0x0004) [0x0000000000000000]              
	unsigned long                                      bAudioPart : 1;                                   		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bActive : 1;                                      		// 0x0018 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bHasBeenExamined : 1;                             		// 0x0018 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bColourCustomisable : 1;                          		// 0x0018 (0x0004) [0x0000000000000000] [0x00000008] 
};

// ScriptStruct APBUserInterface.cUIVehicleComponentsListProvider.VehicleUIComponent
// 0x002C
struct FVehicleUIComponent
{
	struct FPointer                                    pGolemPartInfo;                                   		// 0x0000 (0x0004) [0x0000000000001000]              ( CPF_Native )
	TArray< struct FPointer >                          aComponentUnlocks;                                		// 0x0004 (0x000C) [0x0000000000001000]              ( CPF_Native )
	struct FString                                     sDisplayText;                                     		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class USurface*                                    pDisplayImage;                                    		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                nCurrentIndex;                                    		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                nCameraAngle;                                     		// 0x0024 (0x0004) [0x0000000000000000]              
	int                                                nSortingPriority;                                 		// 0x0028 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBUserInterface.cUIVehiclePaintListProvider.VehiclePaintType
// 0x0014
struct FVehiclePaintType
{
	int                                                nPaintIndex;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     sDisplayText;                                     		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class USurface*                                    pDisplayImage;                                    		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBUserInterface.cUIVehiclePartPaintListProvider.VehicleUIPartPaintInfo
// 0x0020
struct FVehicleUIPartPaintInfo
{
	struct FString                                     sPartName;                                        		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sDisplayText;                                     		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FPointer                                    pSDDInfo;                                         		// 0x0018 (0x0004) [0x0000000000001000]              ( CPF_Native )
	class UMaterialInstanceConstant*                   m_pThumbnailMaterial;                             		// 0x001C (0x0004) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct APBUserInterface.cVehicleMenuManager.VehicleMenuEntry
// 0x0048
struct FVehicleMenuEntry
{
	int                                                m_eVehicleMenuEntry;                              		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     m_sDisplayPicture;                                		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sMenuTag;                                       		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sMenuLevel;                                     		// 0x001C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sDisplayText;                                   		// 0x0028 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sOptionalScene;                                 		// 0x0034 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                m_eCameraAngle;                                   		// 0x0040 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bEnabled : 1;                                   		// 0x0044 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct APBUserInterface.cVehicleMenuManager.VehicleUICameraAngle
// 0x0010
struct FVehicleUICameraAngle
{
	int                                                m_eVehicleUICameraAngle;                          		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              m_fCameraPosition;                                		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              m_fActorRotation;                                 		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              m_fFOV;                                           		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct APBUserInterface.cWardrobeMenuManager.WardrobeMenuEntry
// 0x004C
struct FWardrobeMenuEntry
{
	int                                                m_eWardrobeMenuEntry;                             		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     m_sMenuLevel;                                     		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sMenuTag;                                       		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sDisplayText;                                   		// 0x001C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sMouseOverText;                                 		// 0x0028 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sDisplayImage;                                  		// 0x0034 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sOptionalScene;                                 		// 0x0040 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif