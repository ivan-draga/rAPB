/*
#############################################################################################
# All Points Bulletin Reloaded (1.6) SDK
# Generated with TheFeckless UE3 SDK Generator v1.2_Beta-Rev.39
# ========================================================================================= #
# File: APBUserInterface_f_structs.h
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

// Function APBUserInterface.cUIAction_HostingOp.ExportErrorMessage
// [0x00020400] ( FUNC_Native )
struct UcUIAction_HostingOp_execExportErrorMessage_Parms
{
};

// Function APBUserInterface.cUIAction_HostingOp.ResetErrorMessage
// [0x00020802] ( FUNC_Event )
struct UcUIAction_HostingOp_eventResetErrorMessage_Parms
{
};

// Function APBUserInterface.cUIAction_HostingOp.OnFadeCompleted
// [0x00020002] 
struct UcUIAction_HostingOp_execOnFadeCompleted_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIAction_HostingOp.SetupScene
// [0x00020802] ( FUNC_Event )
struct UcUIAction_HostingOp_eventSetupScene_Parms
{
	class UcUIScene_BaseScene*                         Scene;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class UUILabel*                                 Lbl;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
	// class UUIPanel*                                 Pnl;                                              		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function APBUserInterface.cSDDUI.CastPopupDialogCategory
// [0x00022102] 
struct UcSDDUI_execCastPopupDialogCategory_Parms
{
	int                                                I;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0004 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cSDDUI.CastPopupDialogArea
// [0x00022102] 
struct UcSDDUI_execCastPopupDialogArea_Parms
{
	int                                                I;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0004 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cSDDUI.CastHUDUsables_DisplaySetting
// [0x00022102] 
struct UcSDDUI_execCastHUDUsables_DisplaySetting_Parms
{
	int                                                I;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0004 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cSDDUI.CastChatMessageCategory
// [0x00022102] 
struct UcSDDUI_execCastChatMessageCategory_Parms
{
	int                                                I;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0004 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cSDDUI.CastChatCommandWorksFromState
// [0x00022102] 
struct UcSDDUI_execCastChatCommandWorksFromState_Parms
{
	int                                                I;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0004 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cSDDUI.CastChatCommandType
// [0x00022102] 
struct UcSDDUI_execCastChatCommandType_Parms
{
	int                                                I;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0004 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUI_Soc_GroupAccept.InviteAccepted
// [0x00020400] ( FUNC_Native )
struct UcUI_Soc_GroupAccept_execInviteAccepted_Parms
{
	unsigned char                                      Answer;                                           		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function APBUserInterface.cUI_Soc_GroupAccept.InviteReceived
// [0x00020400] ( FUNC_Native )
struct UcUI_Soc_GroupAccept_execInviteReceived_Parms
{
	struct FString                                     sPlayerName;                                      		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function APBUserInterface.cUI_TM_TeamInviteAccept.InviteAccepted
// [0x00020400] ( FUNC_Native )
struct UcUI_TM_TeamInviteAccept_execInviteAccepted_Parms
{
	unsigned char                                      Answer;                                           		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function APBUserInterface.cUI_TM_TeamInviteAccept.InviteReceived
// [0x00020400] ( FUNC_Native )
struct UcUI_TM_TeamInviteAccept_execInviteReceived_Parms
{
	struct FString                                     sPlayerName;                                      		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     sTeamName;                                        		// 0x000C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function APBUserInterface.cUIAction_CharacterCreate.OnCharacterCreateFailed
// [0x00020400] ( FUNC_Native )
struct UcUIAction_CharacterCreate_execOnCharacterCreateFailed_Parms
{
	int                                                nError;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function APBUserInterface.cUIAction_CharacterCreate.OnCharacterCreateSuccess
// [0x00020400] ( FUNC_Native )
struct UcUIAction_CharacterCreate_execOnCharacterCreateSuccess_Parms
{
	int                                                nSlotNumber;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function APBUserInterface.cUIAction_CharacterDelete.OnCharacterDeleteFailed
// [0x00020400] ( FUNC_Native )
struct UcUIAction_CharacterDelete_execOnCharacterDeleteFailed_Parms
{
	int                                                nError;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function APBUserInterface.cUIAction_CharacterDelete.OnCharacterDeleteSuccess
// [0x00020400] ( FUNC_Native )
struct UcUIAction_CharacterDelete_execOnCharacterDeleteSuccess_Parms
{
};

// Function APBUserInterface.cUIAction_CharacterInfo.OnCharacterInfoFailed
// [0x00020400] ( FUNC_Native )
struct UcUIAction_CharacterInfo_execOnCharacterInfoFailed_Parms
{
	int                                                nError;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function APBUserInterface.cUIAction_CharacterInfo.OnCharacterInfoSuccess
// [0x00020400] ( FUNC_Native )
struct UcUIAction_CharacterInfo_execOnCharacterInfoSuccess_Parms
{
};

// Function APBUserInterface.cUIAction_CharacterNameCheck.OnNameCheckFailed
// [0x00020400] ( FUNC_Native )
struct UcUIAction_CharacterNameCheck_execOnNameCheckFailed_Parms
{
	int                                                nError;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function APBUserInterface.cUIAction_CharacterNameCheck.OnNameCheckSuccess
// [0x00020400] ( FUNC_Native )
struct UcUIAction_CharacterNameCheck_execOnNameCheckSuccess_Parms
{
};

// Function APBUserInterface.cUIAction_CompString.HasDynamicOutputLinks
// [0x00022802] ( FUNC_Event )
struct UcUIAction_CompString_eventHasDynamicOutputLinks_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIAction_CompString.IsValidLevelSequenceObject
// [0x00020802] ( FUNC_Event )
struct UcUIAction_CompString_eventIsValidLevelSequenceObject_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIAction_DisplayTextEntry.OnBoxClosed
// [0x00020002] 
struct UcUIAction_DisplayTextEntry_execOnBoxClosed_Parms
{
	unsigned long                                      bInAcceptOk : 1;                                  		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function APBUserInterface.cUIAction_DisplayTextEntry.SetupScene
// [0x00020802] ( FUNC_Event )
struct UcUIAction_DisplayTextEntry_eventSetupScene_Parms
{
	class UcUIScene_TextEntry*                         Scene;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function APBUserInterface.cUIAction_DistrictEnter.ShowLoadingScreen
// [0x00020400] ( FUNC_Native )
struct UcUIAction_DistrictEnter_execShowLoadingScreen_Parms
{
	unsigned long                                      bShow : 1;                                        		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function APBUserInterface.cUIAction_DistrictEnter.CharacterGetInfoFailure
// [0x00020400] ( FUNC_Native )
struct UcUIAction_DistrictEnter_execCharacterGetInfoFailure_Parms
{
	int                                                nError;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     sCharacterName;                                   		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function APBUserInterface.cUIAction_DistrictEnter.CharacterGetInfoSuccess
// [0x00020400] ( FUNC_Native )
struct UcUIAction_DistrictEnter_execCharacterGetInfoSuccess_Parms
{
	int                                                nCharacterUID;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nDistrictUID;                                     		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nInstanceNo;                                      		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      eFaction;                                         		// 0x000C (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     sCharacterName;                                   		// 0x0010 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function APBUserInterface.cUIAction_DistrictEnter.JoinPlayer
// [0x00020400] ( FUNC_Native )
struct UcUIAction_DistrictEnter_execJoinPlayer_Parms
{
	struct FString                                     sPlayerName;                                      		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function APBUserInterface.cUIAction_DistrictEnter.DistrictReserve
// [0x00020400] ( FUNC_Native )
struct UcUIAction_DistrictEnter_execDistrictReserve_Parms
{
};

// Function APBUserInterface.cUIAction_DistrictEnter.OnWorldServerDisconnect
// [0x00020400] ( FUNC_Native )
struct UcUIAction_DistrictEnter_execOnWorldServerDisconnect_Parms
{
};

// Function APBUserInterface.cUIAction_DistrictEnter.OnDistrictEnterFailed
// [0x00020400] ( FUNC_Native )
struct UcUIAction_DistrictEnter_execOnDistrictEnterFailed_Parms
{
	int                                                nError;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function APBUserInterface.cUIAction_DistrictEnter.OnDistrictEnterSuccess
// [0x00020400] ( FUNC_Native )
struct UcUIAction_DistrictEnter_execOnDistrictEnterSuccess_Parms
{
};

// Function APBUserInterface.cUIAction_DistrictEnter.OnDistrictReserveFailed
// [0x00020400] ( FUNC_Native )
struct UcUIAction_DistrictEnter_execOnDistrictReserveFailed_Parms
{
	int                                                nError;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nDistrictUID;                                     		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nInstanceNo;                                      		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bGroup : 1;                                       		// 0x000C (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function APBUserInterface.cUIAction_DistrictEnter.OnDistrictReserveSuccess
// [0x00020400] ( FUNC_Native )
struct UcUIAction_DistrictEnter_execOnDistrictReserveSuccess_Parms
{
};

// Function APBUserInterface.cUIAction_DM_HandleInput.OnPlayerSpawnTimerExpired
// [0x00020400] ( FUNC_Native )
struct UcUIAction_DM_HandleInput_execOnPlayerSpawnTimerExpired_Parms
{
};

// Function APBUserInterface.cUIAction_ForceGC.IsValidUISequenceObject
// [0x00020802] ( FUNC_Event )
struct UcUIAction_ForceGC_eventIsValidUISequenceObject_Parms
{
	class UUIScreenObject*                             TargetObject;                                     		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIAction_FullScreenMoviePlayer.InputKey
// [0x00020400] ( FUNC_Native )
struct UcUIAction_FullScreenMoviePlayer_execInputKey_Parms
{
	int                                                ControllerId;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       Key;                                              		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      EventType;                                        		// 0x000C (0x0001) [0x0000000000000080]              ( CPF_Parm )
	float                                              AmountDepressed;                                  		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bGamepad : 1;                                     		// 0x0014 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIAction_GetInstanceList.OnGetInstanceListFailed
// [0x00020400] ( FUNC_Native )
struct UcUIAction_GetInstanceList_execOnGetInstanceListFailed_Parms
{
	int                                                nError;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function APBUserInterface.cUIAction_GetInstanceList.OnGetInstanceListSuccess
// [0x00020400] ( FUNC_Native )
struct UcUIAction_GetInstanceList_execOnGetInstanceListSuccess_Parms
{
};

// Function APBUserInterface.cUIAction_GetKeyPress.InputKey_UIWidget
// [0x00420400] ( FUNC_Native )
struct UcUIAction_GetKeyPress_execInputKey_UIWidget_Parms
{
	struct FInputEventParameters                       EventParms;                                       		// 0x0000 (0x0020) [0x0000000000000182]              ( CPF_Const | CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0020 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIAction_GetKeyPress.OldInputKeyDelegate_UIWidget
// [0x00520000] 
struct UcUIAction_GetKeyPress_execOldInputKeyDelegate_UIWidget_Parms
{
	struct FInputEventParameters                       EventParms;                                       		// 0x0000 (0x0020) [0x0000000000000182]              ( CPF_Const | CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0020 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIAction_GetKeyPress.InputKey_Global
// [0x00020400] ( FUNC_Native )
struct UcUIAction_GetKeyPress_execInputKey_Global_Parms
{
	int                                                ControllerId;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       Key;                                              		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      EventType;                                        		// 0x000C (0x0001) [0x0000000000000080]              ( CPF_Parm )
	float                                              AmountDepressed;                                  		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bGamepad : 1;                                     		// 0x0014 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIAction_GetKeyPress.OldInputKeyDelegate_Global
// [0x00120000] 
struct UcUIAction_GetKeyPress_execOldInputKeyDelegate_Global_Parms
{
	int                                                ControllerId;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       Key;                                              		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      EventType;                                        		// 0x000C (0x0001) [0x0000000000000080]              ( CPF_Parm )
	float                                              AmountDepressed;                                  		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bGamepad : 1;                                     		// 0x0014 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIAction_GetWorldList.OnGetWorldListFailed
// [0x00020400] ( FUNC_Native )
struct UcUIAction_GetWorldList_execOnGetWorldListFailed_Parms
{
	int                                                nError;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function APBUserInterface.cUIAction_GetWorldList.OnGetWorldListSuccess
// [0x00020400] ( FUNC_Native )
struct UcUIAction_GetWorldList_execOnGetWorldListSuccess_Parms
{
};

// Function APBUserInterface.cUIAction_HasTutorialBeenPlayed.GetObjClassVersion
// [0x00022802] ( FUNC_Event )
struct UcUIAction_HasTutorialBeenPlayed_eventGetObjClassVersion_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIAction_LaunchGameFlowScene.ClientInvokeCityMap
// [0x00020400] ( FUNC_Native )
struct UcUIAction_LaunchGameFlowScene_execClientInvokeCityMap_Parms
{
};

// Function APBUserInterface.cUIAction_LaunchGameFlowScene.ClientNotReturningToLobby
// [0x00020400] ( FUNC_Native )
struct UcUIAction_LaunchGameFlowScene_execClientNotReturningToLobby_Parms
{
};

// Function APBUserInterface.cUIAction_LaunchGameFlowScene.OnFastLoginFailed
// [0x00020400] ( FUNC_Native )
struct UcUIAction_LaunchGameFlowScene_execOnFastLoginFailed_Parms
{
	int                                                nError;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function APBUserInterface.cUIAction_LaunchGameFlowScene.OnFastLoginSuccess
// [0x00020400] ( FUNC_Native )
struct UcUIAction_LaunchGameFlowScene_execOnFastLoginSuccess_Parms
{
	int                                                nPoints;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function APBUserInterface.cUIAction_Login.OnLoginFailed
// [0x00020400] ( FUNC_Native )
struct UcUIAction_Login_execOnLoginFailed_Parms
{
	int                                                nError;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function APBUserInterface.cUIAction_Login.OnLoginSuccess
// [0x00020400] ( FUNC_Native )
struct UcUIAction_Login_execOnLoginSuccess_Parms
{
	int                                                nPoints;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function APBUserInterface.cUIAction_Logout.OnDisconnected
// [0x00020400] ( FUNC_Native )
struct UcUIAction_Logout_execOnDisconnected_Parms
{
};

// Function APBUserInterface.cUIAction_OpenFileSelector.SelectionDone
// [0x00020400] ( FUNC_Native )
struct UcUIAction_OpenFileSelector_execSelectionDone_Parms
{
};

// Function APBUserInterface.cUIAction_OpenFileSelector.SelectionCanceled
// [0x00020400] ( FUNC_Native )
struct UcUIAction_OpenFileSelector_execSelectionCanceled_Parms
{
};

// Function APBUserInterface.cUIAction_OpenFileSelector.SelectionMade
// [0x00020400] ( FUNC_Native )
struct UcUIAction_OpenFileSelector_execSelectionMade_Parms
{
	struct FString                                     sSelectedPath;                                    		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function APBUserInterface.cUIAction_Soc_AddFriend.OnAddCompleted
// [0x00020400] ( FUNC_Native )
struct UcUIAction_Soc_AddFriend_execOnAddCompleted_Parms
{
	int                                                Error;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function APBUserInterface.cUIAction_Soc_AddIgnore.OnAddCompleted
// [0x00020400] ( FUNC_Native )
struct UcUIAction_Soc_AddIgnore_execOnAddCompleted_Parms
{
	int                                                Error;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function APBUserInterface.cUIAction_Soc_SendGroupInvite.OnInviteSendFailed
// [0x00020400] ( FUNC_Native )
struct UcUIAction_Soc_SendGroupInvite_execOnInviteSendFailed_Parms
{
	int                                                nError;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function APBUserInterface.cUIAction_Soc_SendGroupInvite.OnInviteSent
// [0x00020400] ( FUNC_Native )
struct UcUIAction_Soc_SendGroupInvite_execOnInviteSent_Parms
{
};

// Function APBUserInterface.cUIAction_Soc_SendTeamInvite.OnSendCompleted
// [0x00020400] ( FUNC_Native )
struct UcUIAction_Soc_SendTeamInvite_execOnSendCompleted_Parms
{
	int                                                Error;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function APBUserInterface.cUIAction_StreamLevel.IsValidUISequenceObject
// [0x00020802] ( FUNC_Event )
struct UcUIAction_StreamLevel_eventIsValidUISequenceObject_Parms
{
	class UUIScreenObject*                             TargetObject;                                     		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIAction_WorldEnter.OnWorldEnterFailed
// [0x00020400] ( FUNC_Native )
struct UcUIAction_WorldEnter_execOnWorldEnterFailed_Parms
{
	int                                                nError;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function APBUserInterface.cUIAction_WorldEnter.OnWorldEnterSuccess
// [0x00020400] ( FUNC_Native )
struct UcUIAction_WorldEnter_execOnWorldEnterSuccess_Parms
{
};

// Function APBUserInterface.cUIAction_WorldQueueCancel.OnWorldQueueCancelFailed
// [0x00020400] ( FUNC_Native )
struct UcUIAction_WorldQueueCancel_execOnWorldQueueCancelFailed_Parms
{
	int                                                nError;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function APBUserInterface.cUIAction_WorldQueueCancel.OnWorldQueueCancelSuccess
// [0x00020400] ( FUNC_Native )
struct UcUIAction_WorldQueueCancel_execOnWorldQueueCancelSuccess_Parms
{
};

// Function APBUserInterface.cUIButton.OnSetImage
// [0x00020002] 
struct UcUIButton_execOnSetImage_Parms
{
	class UcUIAction_SetImage*                         Action;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function APBUserInterface.cUIButton.SetSecondaryImage
// [0x00020003] ( FUNC_Final )
struct UcUIButton_execSetSecondaryImage_Parms
{
	class USurface*                                    NewImage;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function APBUserInterface.cUIButton.SaveSubscriberValue
// [0x00420400] ( FUNC_Native )
struct UcUIButton_execSaveSubscriberValue_Parms
{
	TArray< class UUIDataStore* >                      out_BoundDataStores;                              		// 0x0000 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	int                                                BindingIndex;                                     		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIButton.ClearBoundDataStores
// [0x00020400] ( FUNC_Native )
struct UcUIButton_execClearBoundDataStores_Parms
{
};

// Function APBUserInterface.cUIButton.GetBoundDataStores
// [0x00420400] ( FUNC_Native )
struct UcUIButton_execGetBoundDataStores_Parms
{
	TArray< class UUIDataStore* >                      out_BoundDataStores;                              		// 0x0000 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function APBUserInterface.cUIButton.NotifyDataStoreValueUpdated
// [0x00020400] ( FUNC_Native )
struct UcUIButton_execNotifyDataStoreValueUpdated_Parms
{
	class UUIDataStore*                                SourceDataStore;                                  		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bValuesInvalidated : 1;                           		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	struct FName                                       PropertyTag;                                      		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UUIDataProvider*                             SourceProvider;                                   		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ArrayIndex;                                       		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function APBUserInterface.cUIButton.RefreshSubscriberValue
// [0x00020400] ( FUNC_Native )
struct UcUIButton_execRefreshSubscriberValue_Parms
{
	int                                                BindingIndex;                                     		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIButton.GetDataStoreBinding
// [0x00020400] ( FUNC_Native )
struct UcUIButton_execGetDataStoreBinding_Parms
{
	int                                                BindingIndex;                                     		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0004 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function APBUserInterface.cUIButton.SetDataStoreBinding
// [0x00020400] ( FUNC_Native )
struct UcUIButton_execSetDataStoreBinding_Parms
{
	struct FString                                     MarkupText;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                BindingIndex;                                     		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function APBUserInterface.cUIThumbnailList.OnChangeThumbnailListPage
// [0x00020002] 
struct UcUIThumbnailList_execOnChangeThumbnailListPage_Parms
{
	class UcUIAction_ChangeThumbnailListPage*          Action;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function APBUserInterface.cUIThumbnailList.OnSetListIndex
// [0x00080003] ( FUNC_Final )
struct UcUIThumbnailList_execOnSetListIndex_Parms
{
	class UUIAction_SetListIndex*                      Action;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             OutputLinkIndex;                                  		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function APBUserInterface.cUIThumbnailList.SelectItem
// [0x00020400] ( FUNC_Native )
struct UcUIThumbnailList_execSelectItem_Parms
{
	int                                                nIndex;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIThumbnailList.GetInfoTextHeight
// [0x00020400] ( FUNC_Native )
struct UcUIThumbnailList_execGetInfoTextHeight_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIThumbnailList.GetImageHeight
// [0x00020400] ( FUNC_Native )
struct UcUIThumbnailList_execGetImageHeight_Parms
{
	unsigned long                                      bIncludeText : 1;                                 		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIThumbnailList.GetImageWidth
// [0x00020400] ( FUNC_Native )
struct UcUIThumbnailList_execGetImageWidth_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIThumbnailList.GetNumItems
// [0x00020400] ( FUNC_Native )
struct UcUIThumbnailList_execGetNumItems_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIThumbnailList.GetNumVisibleItems
// [0x00020400] ( FUNC_Native )
struct UcUIThumbnailList_execGetNumVisibleItems_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIThumbnailList.ChangePage
// [0x00020400] ( FUNC_Native )
struct UcUIThumbnailList_execChangePage_Parms
{
	int                                                nDelta;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function APBUserInterface.cUIThumbnailList.GetCurrentItem
// [0x00020400] ( FUNC_Native )
struct UcUIThumbnailList_execGetCurrentItem_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIThumbnailList.GetCurrentPage
// [0x00020400] ( FUNC_Native )
struct UcUIThumbnailList_execGetCurrentPage_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIThumbnailList.GetNumPages
// [0x00020400] ( FUNC_Native )
struct UcUIThumbnailList_execGetNumPages_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIThumbnailList.GetNumRows
// [0x00020400] ( FUNC_Native )
struct UcUIThumbnailList_execGetNumRows_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIThumbnailList.GetNumCols
// [0x00020400] ( FUNC_Native )
struct UcUIThumbnailList_execGetNumCols_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIThumbnailList.OnScrollBarSpaceClicked
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UcUIThumbnailList_execOnScrollBarSpaceClicked_Parms
{
	class UUIScrollbar*                                Sender;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              PositionPerc;                                     		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                PlayerIndex;                                      		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function APBUserInterface.cUIThumbnailList.OnScrollBarMoved
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UcUIThumbnailList_execOnScrollBarMoved_Parms
{
	class UUIScrollbar*                                Sender;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              PositionChange;                                   		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bPositionMaxed : 1;                               		// 0x0008 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIThumbnailList.SaveSubscriberValue
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct UcUIThumbnailList_execSaveSubscriberValue_Parms
{
	TArray< class UUIDataStore* >                      out_BoundDataStores;                              		// 0x0000 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	int                                                BindingIndex;                                     		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIThumbnailList.ClearBoundDataStores
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UcUIThumbnailList_execClearBoundDataStores_Parms
{
};

// Function APBUserInterface.cUIThumbnailList.GetBoundDataStores
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct UcUIThumbnailList_execGetBoundDataStores_Parms
{
	TArray< class UUIDataStore* >                      out_BoundDataStores;                              		// 0x0000 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function APBUserInterface.cUIThumbnailList.NotifyDataStoreValueUpdated
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UcUIThumbnailList_execNotifyDataStoreValueUpdated_Parms
{
	class UUIDataStore*                                SourceDataStore;                                  		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bValuesInvalidated : 1;                           		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	struct FName                                       PropertyTag;                                      		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UUIDataProvider*                             SourceProvider;                                   		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ArrayIndex;                                       		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function APBUserInterface.cUIThumbnailList.RefreshSubscriberValue
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UcUIThumbnailList_execRefreshSubscriberValue_Parms
{
	int                                                BindingIndex;                                     		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIThumbnailList.GetDataStoreBinding
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UcUIThumbnailList_execGetDataStoreBinding_Parms
{
	int                                                BindingIndex;                                     		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0004 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function APBUserInterface.cUIThumbnailList.SetDataStoreBinding
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UcUIThumbnailList_execSetDataStoreBinding_Parms
{
	struct FString                                     MarkupText;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                BindingIndex;                                     		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function APBUserInterface.cUICond_DoShowGameFlowScene.GetObjClassVersion
// [0x00022802] ( FUNC_Event )
struct UcUICond_DoShowGameFlowScene_eventGetObjClassVersion_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIConsoleCommands.PreviewMissionStageDisable
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UcUIConsoleCommands_execPreviewMissionStageDisable_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIConsoleCommands.PreviewMissionStage
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UcUIConsoleCommands_execPreviewMissionStage_Parms
{
	struct FString                                     sMissionTemplate;                                 		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                nStage;                                           		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bOpposition : 1;                                  		// 0x0010 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	struct FString                                     sFaction;                                         		// 0x0014 (0x000C) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0020 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIConsoleCommands.TiledScreenShot
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UcUIConsoleCommands_execTiledScreenShot_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIConsoleCommands.ScreenShot
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UcUIConsoleCommands_execScreenShot_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIConsoleCommands.ChangeLanguage
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UcUIConsoleCommands_execChangeLanguage_Parms
{
	struct FString                                     sNewLanguage;                                     		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function APBUserInterface.cUIConsoleCommands.ResetPopupCounters
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UcUIConsoleCommands_execResetPopupCounters_Parms
{
};

// Function APBUserInterface.cUIConsoleCommands.TogglePopupDialogTool
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UcUIConsoleCommands_execTogglePopupDialogTool_Parms
{
};

// Function APBUserInterface.cUIConsoleCommands.TogglePopupCues
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UcUIConsoleCommands_execTogglePopupCues_Parms
{
};

// Function APBUserInterface.cUIConsoleCommands.ToggleTooltipTool
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UcUIConsoleCommands_execToggleTooltipTool_Parms
{
};

// Function APBUserInterface.cUIConsoleCommands.OpenAPBSupportPage
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UcUIConsoleCommands_execOpenAPBSupportPage_Parms
{
	struct FString                                     sSDDURLTag;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      bStackOnExistingScenes : 1;                       		// 0x000C (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIConsoleCommands.OpenWebBrowser
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UcUIConsoleCommands_execOpenWebBrowser_Parms
{
	struct FString                                     sURL;                                             		// 0x0000 (0x000C) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     sWebBrowser_SceneRef;                             		// 0x000C (0x000C) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      bStackOnExistingScenes : 1;                       		// 0x0018 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x001C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIConsoleCommands.CloseContactUI
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UcUIConsoleCommands_execCloseContactUI_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIConsoleCommands.OpenTestContactUI
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UcUIConsoleCommands_execOpenTestContactUI_Parms
{
	struct FString                                     sUIType;                                          		// 0x0000 (0x000C) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIConsoleCommands.OpenContactUI
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UcUIConsoleCommands_execOpenContactUI_Parms
{
	struct FString                                     sContact;                                         		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     sContactRole;                                     		// 0x000C (0x000C) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIConsoleCommands.ToggleMusicPlaybackUI
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UcUIConsoleCommands_execToggleMusicPlaybackUI_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIConsoleCommands.OpenViewUI
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UcUIConsoleCommands_execOpenViewUI_Parms
{
	struct FString                                     sInventoryItemType;                               		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIConsoleCommands.ToggleOptionsUI
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UcUIConsoleCommands_execToggleOptionsUI_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIConsoleCommands.ToggleReportBugUI
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UcUIConsoleCommands_execToggleReportBugUI_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIConsoleCommands.FlushMarketplaceCache
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UcUIConsoleCommands_execFlushMarketplaceCache_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIConsoleCommands.Editor_OpenMarketplaceUI
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UcUIConsoleCommands_execEditor_OpenMarketplaceUI_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIConsoleCommands.ToggleMarketplaceUI
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UcUIConsoleCommands_execToggleMarketplaceUI_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIConsoleCommands.FlushMailCache
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UcUIConsoleCommands_execFlushMailCache_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIConsoleCommands.ToggleMailUI
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UcUIConsoleCommands_execToggleMailUI_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIConsoleCommands.ToggleTeamMgmtUI
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UcUIConsoleCommands_execToggleTeamMgmtUI_Parms
{
	unsigned long                                      bForce : 1;                                       		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIConsoleCommands.InternalToggleInventoryUI
// [0x00020400] ( FUNC_Native )
struct UcUIConsoleCommands_execInternalToggleInventoryUI_Parms
{
};

// Function APBUserInterface.cUIConsoleCommands.ToggleDeploymentInventoryUI
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UcUIConsoleCommands_execToggleDeploymentInventoryUI_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIConsoleCommands.ToggleStorageInventoryUI
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UcUIConsoleCommands_execToggleStorageInventoryUI_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIConsoleCommands.ToggleSocialUI
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UcUIConsoleCommands_execToggleSocialUI_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIConsoleCommands.ToggleScoreboard
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UcUIConsoleCommands_execToggleScoreboard_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIConsoleCommands.ToggleMissionSummary
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UcUIConsoleCommands_execToggleMissionSummary_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIConsoleCommands.CloseMissionSummary
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UcUIConsoleCommands_execCloseMissionSummary_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIConsoleCommands.OpenMissionSummary
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UcUIConsoleCommands_execOpenMissionSummary_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIConsoleCommands.ToggleMissionJustification
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UcUIConsoleCommands_execToggleMissionJustification_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIConsoleCommands.CrimeEventAlertUI
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UcUIConsoleCommands_execCrimeEventAlertUI_Parms
{
	unsigned long                                      bShow : 1;                                        		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIConsoleCommands.InGameQuestionDeclined
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UcUIConsoleCommands_execInGameQuestionDeclined_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIConsoleCommands.InGameQuestionAccepted
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UcUIConsoleCommands_execInGameQuestionAccepted_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIConsoleCommands.AddInGameQuestion
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UcUIConsoleCommands_execAddInGameQuestion_Parms
{
	struct FString                                     sText;                                            		// 0x0000 (0x000C) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIConsoleCommands.InvertMouse
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UcUIConsoleCommands_execInvertMouse_Parms
{
	unsigned long                                      bInvert : 1;                                      		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIConsoleCommands.ForceWorldsOffline
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UcUIConsoleCommands_execForceWorldsOffline_Parms
{
	unsigned long                                      bOffline : 1;                                     		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIConsoleCommands.OpenCityMap
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UcUIConsoleCommands_execOpenCityMap_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIConsoleCommands.OpenLobby
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UcUIConsoleCommands_execOpenLobby_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIConsoleCommands.ResetEULATOSAcceptDates
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UcUIConsoleCommands_execResetEULATOSAcceptDates_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIConsoleCommands.ResetUserNameAndPassword
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UcUIConsoleCommands_execResetUserNameAndPassword_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIDataStore.NotifyGameSessionEnded
// [0x00020002] 
struct UcUIDataStore_execNotifyGameSessionEnded_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIDataStore.ReleaseAssets
// [0x00020400] ( FUNC_Native )
struct UcUIDataStore_execReleaseAssets_Parms
{
};

// Function APBUserInterface.cUIDataStore.LoadAssets
// [0x00020400] ( FUNC_Native )
struct UcUIDataStore_execLoadAssets_Parms
{
};

// Function APBUserInterface.cUIDataStore_CharacterMenu.OnRawInputKey
// [0x00020400] ( FUNC_Native )
struct UcUIDataStore_CharacterMenu_execOnRawInputKey_Parms
{
	struct FInputEventParameters                       Input;                                            		// 0x0000 (0x0020) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0020 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIDataStore_FileSelector.OnSelectionDone
// [0x00120000] 
struct UcUIDataStore_FileSelector_execOnSelectionDone_Parms
{
};

// Function APBUserInterface.cUIDataStore_FileSelector.OnSelectionCanceled
// [0x00120000] 
struct UcUIDataStore_FileSelector_execOnSelectionCanceled_Parms
{
};

// Function APBUserInterface.cUIDataStore_FileSelector.OnSelectionMade
// [0x00120000] 
struct UcUIDataStore_FileSelector_execOnSelectionMade_Parms
{
	struct FString                                     sSelectedPath;                                    		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function APBUserInterface.cUIDataStore_Fnd_GroupFinder.GetTotalPages
// [0x00020C00] ( FUNC_Event | FUNC_Native )
struct UcUIDataStore_Fnd_GroupFinder_eventGetTotalPages_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIDataStore_Fnd_GroupFinder.SetCurrentPage
// [0x00020C00] ( FUNC_Event | FUNC_Native )
struct UcUIDataStore_Fnd_GroupFinder_eventSetCurrentPage_Parms
{
	int                                                nPage;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIDataStore_Fnd_GroupFinder.GetCurrentPage
// [0x00020C00] ( FUNC_Event | FUNC_Native )
struct UcUIDataStore_Fnd_GroupFinder_eventGetCurrentPage_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIDataStore_Fnd_GroupFinder.SetOrdering
// [0x00020C00] ( FUNC_Event | FUNC_Native )
struct UcUIDataStore_Fnd_GroupFinder_eventSetOrdering_Parms
{
	struct FName                                       Ordering;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIDataStore_Fnd_GroupFinder.OnListDataChanged
// [0x00020400] ( FUNC_Native )
struct UcUIDataStore_Fnd_GroupFinder_execOnListDataChanged_Parms
{
};

// Function APBUserInterface.cUIDataStore_Fnd_GroupFinder.OnLocalEntryDataChanged
// [0x00020400] ( FUNC_Native )
struct UcUIDataStore_Fnd_GroupFinder_execOnLocalEntryDataChanged_Parms
{
};

// Function APBUserInterface.cUIDataStore_Fnd_GroupInfo.SetSelectedGroup
// [0x00020400] ( FUNC_Native )
struct UcUIDataStore_Fnd_GroupInfo_execSetSelectedGroup_Parms
{
	int                                                nGroupUID;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function APBUserInterface.cUIDataStore_Fnd_GroupInfo.OnDataChanged
// [0x00020400] ( FUNC_Native )
struct UcUIDataStore_Fnd_GroupInfo_execOnDataChanged_Parms
{
};

// Function APBUserInterface.cUIDataStore_Fnd_TeamFinder.GetTotalPages
// [0x00020C00] ( FUNC_Event | FUNC_Native )
struct UcUIDataStore_Fnd_TeamFinder_eventGetTotalPages_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIDataStore_Fnd_TeamFinder.SetCurrentPage
// [0x00020C00] ( FUNC_Event | FUNC_Native )
struct UcUIDataStore_Fnd_TeamFinder_eventSetCurrentPage_Parms
{
	int                                                nPage;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIDataStore_Fnd_TeamFinder.GetCurrentPage
// [0x00020C00] ( FUNC_Event | FUNC_Native )
struct UcUIDataStore_Fnd_TeamFinder_eventGetCurrentPage_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIDataStore_Fnd_TeamFinder.SetOrdering
// [0x00020C00] ( FUNC_Event | FUNC_Native )
struct UcUIDataStore_Fnd_TeamFinder_eventSetOrdering_Parms
{
	struct FName                                       Ordering;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIDataStore_Fnd_TeamFinder.OnListDataChanged
// [0x00020400] ( FUNC_Native )
struct UcUIDataStore_Fnd_TeamFinder_execOnListDataChanged_Parms
{
};

// Function APBUserInterface.cUIDataStore_Fnd_TeamFinder.OnLocalEntryDataChanged
// [0x00020400] ( FUNC_Native )
struct UcUIDataStore_Fnd_TeamFinder_execOnLocalEntryDataChanged_Parms
{
};

// Function APBUserInterface.cUIDataStore_Fnd_TeamInfo.SetSelectedTeam
// [0x00020400] ( FUNC_Native )
struct UcUIDataStore_Fnd_TeamInfo_execSetSelectedTeam_Parms
{
	int                                                nTeamUID;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function APBUserInterface.cUIDataStore_Fnd_TeamInfo.OnDataChanged
// [0x00020400] ( FUNC_Native )
struct UcUIDataStore_Fnd_TeamInfo_execOnDataChanged_Parms
{
};

// Function APBUserInterface.cUIDataStore_HUD_Mission.NotifyGameSessionEnded
// [0x00020002] 
struct UcUIDataStore_HUD_Mission_execNotifyGameSessionEnded_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIDataStore_Soc_IgnoreList.NotifyGameSessionEnded
// [0x00020002] 
struct UcUIDataStore_Soc_IgnoreList_execNotifyGameSessionEnded_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIDataStore_Soc_IgnoreList.UnregisterCallbacks
// [0x00020400] ( FUNC_Native )
struct UcUIDataStore_Soc_IgnoreList_execUnregisterCallbacks_Parms
{
};

// Function APBUserInterface.cUIDataStore_Soc_IgnoreList.OnDataChanged
// [0x00020400] ( FUNC_Native )
struct UcUIDataStore_Soc_IgnoreList_execOnDataChanged_Parms
{
};

// Function APBUserInterface.cUIDataStore_Soc_RecentSideList.NotifyGameSessionEnded
// [0x00020002] 
struct UcUIDataStore_Soc_RecentSideList_execNotifyGameSessionEnded_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIDataStore_Soc_RecentSideList.OnMissionEnded
// [0x00020400] ( FUNC_Native )
struct UcUIDataStore_Soc_RecentSideList_execOnMissionEnded_Parms
{
};

// Function APBUserInterface.cUIDataStore_Soc_RecentSideList.UnregisterCallbacks
// [0x00020400] ( FUNC_Native )
struct UcUIDataStore_Soc_RecentSideList_execUnregisterCallbacks_Parms
{
};

// Function APBUserInterface.cUIDataStore_Soc_RecentSideList.OnDataChanged
// [0x00020400] ( FUNC_Native )
struct UcUIDataStore_Soc_RecentSideList_execOnDataChanged_Parms
{
};

// Function APBUserInterface.cUIEvent_DistrictMapInput.IsValidUISequenceObject
// [0x00020802] ( FUNC_Event )
struct UcUIEvent_DistrictMapInput_eventIsValidUISequenceObject_Parms
{
	class UUIScreenObject*                             TargetObject;                                     		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIEvent_SliderCanvasBindChanged.IsValidUISequenceObject
// [0x00020802] ( FUNC_Event )
struct UcUIEvent_SliderCanvasBindChanged_eventIsValidUISequenceObject_Parms
{
	class UUIScreenObject*                             TargetObject;                                     		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIEvent_SymbolCanvasInput.IsValidUISequenceObject
// [0x00020802] ( FUNC_Event )
struct UcUIEvent_SymbolCanvasInput_eventIsValidUISequenceObject_Parms
{
	class UUIScreenObject*                             TargetObject;                                     		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIEvent_ThumbnailListItemChanged.IsValidUISequenceObject
// [0x00020802] ( FUNC_Event )
struct UcUIEvent_ThumbnailListItemChanged_eventIsValidUISequenceObject_Parms
{
	class UUIScreenObject*                             TargetObject;                                     		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIFourWay.OnSetImage
// [0x00020002] 
struct UcUIFourWay_execOnSetImage_Parms
{
	class UcUIAction_SetImage*                         Action;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function APBUserInterface.cUIFourWay.OnSetFourWayPosition
// [0x00020002] 
struct UcUIFourWay_execOnSetFourWayPosition_Parms
{
	class UcUIAction_SetFourWayPosition*               Action;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function APBUserInterface.cUIGameSceneClient.MS_SetDSPDebugShowBounds
// [0x00020202] ( FUNC_Exec )
struct UcUIGameSceneClient_execMS_SetDSPDebugShowBounds_Parms
{
	unsigned long                                      bEnabled : 1;                                     		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	// class UcUIMSDSPContainer*                       dspcontainer;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function APBUserInterface.cUIGameSceneClient.MS_RemoveAllDSPs
// [0x00020202] ( FUNC_Exec )
struct UcUIGameSceneClient_execMS_RemoveAllDSPs_Parms
{
	// class UcUIMSDSPContainer*                       dspcontainer;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function APBUserInterface.cUIGameSceneClient.MS_RemoveDSPAtIndex
// [0x00020202] ( FUNC_Exec )
struct UcUIGameSceneClient_execMS_RemoveDSPAtIndex_Parms
{
	int                                                nPageIndex;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nDspIndex;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class UcUIMSDSPContainer*                       dspcontainer;                                     		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function APBUserInterface.cUIGameSceneClient.MS_AddDSP
// [0x00020202] ( FUNC_Exec )
struct UcUIGameSceneClient_execMS_AddDSP_Parms
{
	int                                                nPageIndex;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nDspType;                                         		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class UcUIMSDSPContainer*                       dspcontainer;                                     		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function APBUserInterface.cUIGameSceneClient.MS_ShowDSPPage
// [0x00020202] ( FUNC_Exec )
struct UcUIGameSceneClient_execMS_ShowDSPPage_Parms
{
	int                                                nPageIndex;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class UcUIMSDSPContainer*                       dspcontainer;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function APBUserInterface.cUIGameSceneClient.MS_RemoveDSPPage
// [0x00020202] ( FUNC_Exec )
struct UcUIGameSceneClient_execMS_RemoveDSPPage_Parms
{
	int                                                nPageIndex;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class UcUIMSDSPContainer*                       dspcontainer;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function APBUserInterface.cUIGameSceneClient.MS_AddDSPPage
// [0x00020202] ( FUNC_Exec )
struct UcUIGameSceneClient_execMS_AddDSPPage_Parms
{
	// class UcUIMSDSPContainer*                       dspcontainer;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function APBUserInterface.cUIGameSceneClient.MS_RecreateDSPPages
// [0x00020202] ( FUNC_Exec )
struct UcUIGameSceneClient_execMS_RecreateDSPPages_Parms
{
	// class UcUIMSDSPContainer*                       dspcontainer;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function APBUserInterface.cUIGameSceneClient.MS_GetDSPContainer
// [0x00040003] ( FUNC_Final )
struct UcUIGameSceneClient_execMS_GetDSPContainer_Parms
{
	class UcUIMSDSPContainer*                          ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class UUIScene*                                 Scene;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
	// class UcUIMSDSPContainer*                       dspcontainer;                                     		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function APBUserInterface.cUIGameSceneClient.MS_FindScene
// [0x00040003] ( FUNC_Final )
struct UcUIGameSceneClient_execMS_FindScene_Parms
{
	struct FName                                       SceneName;                                        		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UUIScene*                                    ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             I;                                                		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function APBUserInterface.cUIGameSceneClient.OnSubscriptionInfo
// [0x00020400] ( FUNC_Native )
struct UcUIGameSceneClient_execOnSubscriptionInfo_Parms
{
	int                                                nRemainingSecondsHourly;                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nRemainingSecondsMonthly;                         		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function APBUserInterface.cUIGameSceneClient.SetTutorialFlag
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UcUIGameSceneClient_execSetTutorialFlag_Parms
{
	unsigned long                                      bEnable : 1;                                      		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function APBUserInterface.cUIGameSceneClient.DisplayTutorialFlag
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UcUIGameSceneClient_execDisplayTutorialFlag_Parms
{
};

// Function APBUserInterface.cUIGameSceneClient.ListUIScenes
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UcUIGameSceneClient_execListUIScenes_Parms
{
};

// Function APBUserInterface.cUIGameSceneClient.SetMaxLum
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UcUIGameSceneClient_execSetMaxLum_Parms
{
	float                                              fMaxLum;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function APBUserInterface.cUIGameSceneClient.SetMinLum
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UcUIGameSceneClient_execSetMinLum_Parms
{
	float                                              fMinLum;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function APBUserInterface.cUIGameSceneClient.SetMaxSat
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UcUIGameSceneClient_execSetMaxSat_Parms
{
	float                                              fMaxSat;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function APBUserInterface.cUIGameSceneClient.SetMinSat
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UcUIGameSceneClient_execSetMinSat_Parms
{
	float                                              fMinSat;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function APBUserInterface.cUIGameSceneClient.HideEditorLoadingScreen
// [0x00020400] ( FUNC_Native )
struct UcUIGameSceneClient_execHideEditorLoadingScreen_Parms
{
};

// Function APBUserInterface.cUIGameSceneClient.ShowEditorLoadingScreen
// [0x00020400] ( FUNC_Native )
struct UcUIGameSceneClient_execShowEditorLoadingScreen_Parms
{
};

// Function APBUserInterface.cUIGameSceneClient.GenericDelegate
// [0x00120000] 
struct UcUIGameSceneClient_execGenericDelegate_Parms
{
};

// Function APBUserInterface.cUIGameSceneClient.EnableUIPostProcess
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UcUIGameSceneClient_execEnableUIPostProcess_Parms
{
	unsigned long                                      bEnable : 1;                                      		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function APBUserInterface.cUIGameSceneClient.IsSymbolEditorOpen
// [0x00020400] ( FUNC_Native )
struct UcUIGameSceneClient_execIsSymbolEditorOpen_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIGameSceneClient.IsCustomisationStudioOpen
// [0x00020400] ( FUNC_Native )
struct UcUIGameSceneClient_execIsCustomisationStudioOpen_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIGameSceneClient.SetSymbolEditorOpen
// [0x00020400] ( FUNC_Native )
struct UcUIGameSceneClient_execSetSymbolEditorOpen_Parms
{
	unsigned long                                      bOpen : 1;                                        		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function APBUserInterface.cUIGameSceneClient.EnableCustomisationStudio
// [0x00020400] ( FUNC_Native )
struct UcUIGameSceneClient_execEnableCustomisationStudio_Parms
{
	unsigned long                                      bEnable : 1;                                      		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function APBUserInterface.cUIGameSceneClient.ToggleMainScene
// [0x00020400] ( FUNC_Native )
struct UcUIGameSceneClient_execToggleMainScene_Parms
{
	class UUIScene*                                    pScene;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     sCloseEvent;                                      		// 0x0004 (0x000C) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      bCloseExistingScenes : 1;                         		// 0x0010 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIGameSceneClient.CloseMainScene
// [0x00020400] ( FUNC_Native )
struct UcUIGameSceneClient_execCloseMainScene_Parms
{
	class UUIScene*                                    pScene;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     sCloseEvent;                                      		// 0x0004 (0x000C) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIGameSceneClient.OpenMainScene
// [0x00420400] ( FUNC_Native )
struct UcUIGameSceneClient_execOpenMainScene_Parms
{
	class UUIScene*                                    pScene;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bCloseExistingScenes : 1;                         		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	class UUIScene*                                    pOpenedScene;                                     		// 0x0008 (0x0004) [0x0000000000000190]              ( CPF_OptionalParm | CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIGameSceneClient.CloseEscapeMenu
// [0x00020400] ( FUNC_Native )
struct UcUIGameSceneClient_execCloseEscapeMenu_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIGameSceneClient.CloseAllMainScenes
// [0x00020400] ( FUNC_Native )
struct UcUIGameSceneClient_execCloseAllMainScenes_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIGameSceneClient.IsMainSceneVisible
// [0x00020400] ( FUNC_Native )
struct UcUIGameSceneClient_execIsMainSceneVisible_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIGameSceneClient.IsInventorySceneOpen
// [0x00020400] ( FUNC_Native )
struct UcUIGameSceneClient_execIsInventorySceneOpen_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIGameSceneClient.IsMainSceneOpen
// [0x00020400] ( FUNC_Native )
struct UcUIGameSceneClient_execIsMainSceneOpen_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIGameSceneClient.OnMusicStudioClosed
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UcUIGameSceneClient_execOnMusicStudioClosed_Parms
{
};

// Function APBUserInterface.cUIGameSceneClient.OpenMusicEditor
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UcUIGameSceneClient_execOpenMusicEditor_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIGameSceneClient.OnClosedMarketplaceUI
// [0x00020400] ( FUNC_Native )
struct UcUIGameSceneClient_execOnClosedMarketplaceUI_Parms
{
};

// Function APBUserInterface.cUIGameSceneClient.OpenMarketplaceUI
// [0x00020400] ( FUNC_Native )
struct UcUIGameSceneClient_execOpenMarketplaceUI_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIGameSceneClient.OpenClothingCustomisation
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UcUIGameSceneClient_execOpenClothingCustomisation_Parms
{
};

// Function APBUserInterface.cUIGameSceneClient.DebugOpenClothingCustomisation
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UcUIGameSceneClient_execDebugOpenClothingCustomisation_Parms
{
};

// Function APBUserInterface.cUIGameSceneClient.OpenVehicleCustomisation
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UcUIGameSceneClient_execOpenVehicleCustomisation_Parms
{
};

// Function APBUserInterface.cUIGameSceneClient.DebugOpenVehicleCustomisation
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UcUIGameSceneClient_execDebugOpenVehicleCustomisation_Parms
{
};

// Function APBUserInterface.cUIGameSceneClient.OpenCharacterCustomisation
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UcUIGameSceneClient_execOpenCharacterCustomisation_Parms
{
};

// Function APBUserInterface.cUIGameSceneClient.DebugOpenCharacterCustomisation
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UcUIGameSceneClient_execDebugOpenCharacterCustomisation_Parms
{
};

// Function APBUserInterface.cUIGameSceneClient.OpenCharacterCreation
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UcUIGameSceneClient_execOpenCharacterCreation_Parms
{
};

// Function APBUserInterface.cUIGameSceneClient.OpenSymbolEditor
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UcUIGameSceneClient_execOpenSymbolEditor_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIGameSceneClient.DebugOpenSymbolEditor
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UcUIGameSceneClient_execDebugOpenSymbolEditor_Parms
{
};

// Function APBUserInterface.cUIGameSceneClient.NotifyGameSessionEndedNative
// [0x00020400] ( FUNC_Native )
struct UcUIGameSceneClient_execNotifyGameSessionEndedNative_Parms
{
};

// Function APBUserInterface.cUIGameSceneClient.NotifyGameSessionEnded
// [0x00020002] 
struct UcUIGameSceneClient_execNotifyGameSessionEnded_Parms
{
};

// Function APBUserInterface.cUIGameSceneClient.FireEvent
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UcUIGameSceneClient_execFireEvent_Parms
{
	struct FString                                     sEventName;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      bActivateImmediately : 1;                         		// 0x000C (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	TArray< float >                                    FloatParams;                                      		// 0x0010 (0x000C) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	TArray< struct FString >                           StringParams;                                     		// 0x001C (0x000C) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	TArray< class UObject* >                           ObjectParams;                                     		// 0x0028 (0x000C) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	class UUIScreenObject*                             TargetUIObject;                                   		// 0x0034 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UObject*                                     Activator;                                        		// 0x0038 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x003C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUISymbolCanvas.SaveSubscriberValue
// [0x00420400] ( FUNC_Native )
struct UcUISymbolCanvas_execSaveSubscriberValue_Parms
{
	TArray< class UUIDataStore* >                      out_BoundDataStores;                              		// 0x0000 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	int                                                BindingIndex;                                     		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUISymbolCanvas.ClearBoundDataStores
// [0x00020400] ( FUNC_Native )
struct UcUISymbolCanvas_execClearBoundDataStores_Parms
{
};

// Function APBUserInterface.cUISymbolCanvas.GetBoundDataStores
// [0x00420400] ( FUNC_Native )
struct UcUISymbolCanvas_execGetBoundDataStores_Parms
{
	TArray< class UUIDataStore* >                      out_BoundDataStores;                              		// 0x0000 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function APBUserInterface.cUISymbolCanvas.NotifyDataStoreValueUpdated
// [0x00020400] ( FUNC_Native )
struct UcUISymbolCanvas_execNotifyDataStoreValueUpdated_Parms
{
	class UUIDataStore*                                SourceDataStore;                                  		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bValuesInvalidated : 1;                           		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	struct FName                                       PropertyTag;                                      		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UUIDataProvider*                             SourceProvider;                                   		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ArrayIndex;                                       		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function APBUserInterface.cUISymbolCanvas.RefreshSubscriberValue
// [0x00020400] ( FUNC_Native )
struct UcUISymbolCanvas_execRefreshSubscriberValue_Parms
{
	int                                                BindingIndex;                                     		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUISymbolCanvas.GetDataStoreBinding
// [0x00020400] ( FUNC_Native )
struct UcUISymbolCanvas_execGetDataStoreBinding_Parms
{
	int                                                BindingIndex;                                     		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0004 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function APBUserInterface.cUISymbolCanvas.SetDataStoreBinding
// [0x00020400] ( FUNC_Native )
struct UcUISymbolCanvas_execSetDataStoreBinding_Parms
{
	struct FString                                     MarkupText;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                BindingIndex;                                     		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function APBUserInterface.cUIImage_DistrictMap.SaveSubscriberValue
// [0x00420400] ( FUNC_Native )
struct UcUIImage_DistrictMap_execSaveSubscriberValue_Parms
{
	TArray< class UUIDataStore* >                      out_BoundDataStores;                              		// 0x0000 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	int                                                BindingIndex;                                     		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIImage_DistrictMap.ClearBoundDataStores
// [0x00020400] ( FUNC_Native )
struct UcUIImage_DistrictMap_execClearBoundDataStores_Parms
{
};

// Function APBUserInterface.cUIImage_DistrictMap.GetBoundDataStores
// [0x00420400] ( FUNC_Native )
struct UcUIImage_DistrictMap_execGetBoundDataStores_Parms
{
	TArray< class UUIDataStore* >                      out_BoundDataStores;                              		// 0x0000 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function APBUserInterface.cUIImage_DistrictMap.NotifyDataStoreValueUpdated
// [0x00020400] ( FUNC_Native )
struct UcUIImage_DistrictMap_execNotifyDataStoreValueUpdated_Parms
{
	class UUIDataStore*                                SourceDataStore;                                  		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bValuesInvalidated : 1;                           		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	struct FName                                       PropertyTag;                                      		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UUIDataProvider*                             SourceProvider;                                   		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ArrayIndex;                                       		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function APBUserInterface.cUIImage_DistrictMap.RefreshSubscriberValue
// [0x00020400] ( FUNC_Native )
struct UcUIImage_DistrictMap_execRefreshSubscriberValue_Parms
{
	int                                                BindingIndex;                                     		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIImage_DistrictMap.GetDataStoreBinding
// [0x00020400] ( FUNC_Native )
struct UcUIImage_DistrictMap_execGetDataStoreBinding_Parms
{
	int                                                BindingIndex;                                     		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0004 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function APBUserInterface.cUIImage_DistrictMap.SetDataStoreBinding
// [0x00020400] ( FUNC_Native )
struct UcUIImage_DistrictMap_execSetDataStoreBinding_Parms
{
	struct FString                                     MarkupText;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                BindingIndex;                                     		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function APBUserInterface.cUIImage_DistrictMap.TickAnim
// [0x00020400] ( FUNC_Native )
struct UcUIImage_DistrictMap_execTickAnim_Parms
{
	float                                              fDeltaTime;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function APBUserInterface.cUIImage_DistrictMap.RegisterTickAnim
// [0x00020802] ( FUNC_Event )
struct UcUIImage_DistrictMap_eventRegisterTickAnim_Parms
{
	// class UGameUISceneClient*                       SClient;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function APBUserInterface.cUILabelButton.SaveSubscriberValue
// [0x00420400] ( FUNC_Native )
struct UcUILabelButton_execSaveSubscriberValue_Parms
{
	TArray< class UUIDataStore* >                      out_BoundDataStores;                              		// 0x0000 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	int                                                BindingIndex;                                     		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUILabelButton.ClearBoundDataStores
// [0x00020400] ( FUNC_Native )
struct UcUILabelButton_execClearBoundDataStores_Parms
{
};

// Function APBUserInterface.cUILabelButton.GetBoundDataStores
// [0x00420400] ( FUNC_Native )
struct UcUILabelButton_execGetBoundDataStores_Parms
{
	TArray< class UUIDataStore* >                      out_BoundDataStores;                              		// 0x0000 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function APBUserInterface.cUILabelButton.NotifyDataStoreValueUpdated
// [0x00020400] ( FUNC_Native )
struct UcUILabelButton_execNotifyDataStoreValueUpdated_Parms
{
	class UUIDataStore*                                SourceDataStore;                                  		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bValuesInvalidated : 1;                           		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	struct FName                                       PropertyTag;                                      		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UUIDataProvider*                             SourceProvider;                                   		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ArrayIndex;                                       		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function APBUserInterface.cUILabelButton.RefreshSubscriberValue
// [0x00020400] ( FUNC_Native )
struct UcUILabelButton_execRefreshSubscriberValue_Parms
{
	int                                                BindingIndex;                                     		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUILabelButton.GetDataStoreBinding
// [0x00020400] ( FUNC_Native )
struct UcUILabelButton_execGetDataStoreBinding_Parms
{
	int                                                BindingIndex;                                     		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0004 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function APBUserInterface.cUILabelButton.SetDataStoreBinding
// [0x00020400] ( FUNC_Native )
struct UcUILabelButton_execSetDataStoreBinding_Parms
{
	struct FString                                     MarkupText;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                BindingIndex;                                     		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function APBUserInterface.cUILargeList.ClickedScrollZone
// [0x00020400] ( FUNC_Native )
struct UcUILargeList_execClickedScrollZone_Parms
{
	class UUIScrollbar*                                Sender;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              PositionPerc;                                     		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                PlayerIndex;                                      		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function APBUserInterface.cUILargeList.ScrollVerticalPage
// [0x00020400] ( FUNC_Native )
struct UcUILargeList_execScrollVerticalPage_Parms
{
	int                                                nPageChange;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUILargeList.ScrollVertical
// [0x00020400] ( FUNC_Native )
struct UcUILargeList_execScrollVertical_Parms
{
	class UUIScrollbar*                                Sender;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              PositionChange;                                   		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bPositionMaxed : 1;                               		// 0x0008 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUILargeList.GetSelectedItems
// [0x00020400] ( FUNC_Native )
struct UcUILargeList_execGetSelectedItems_Parms
{
	TArray< int >                                      ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function APBUserInterface.cUIRangeLabel.RefreshSubscriberValue
// [0x00020400] ( FUNC_Native )
struct UcUIRangeLabel_execRefreshSubscriberValue_Parms
{
	int                                                BindingIndex;                                     		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIScene_BaseScene.FadeScene
// [0x00020802] ( FUNC_Event )
struct UcUIScene_BaseScene_eventFadeScene_Parms
{
	float                                              gTargetOpacity;                                   		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              gTargetTime;                                      		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function APBUserInterface.cUIScene_BaseScene.FadeCompleted
// [0x00020802] ( FUNC_Event )
struct UcUIScene_BaseScene_eventFadeCompleted_Parms
{
};

// Function APBUserInterface.cUIScene_BaseScene.FadeInactive
// [0x00020002] 
struct UcUIScene_BaseScene_execFadeInactive_Parms
{
};

// Function APBUserInterface.cUIScene_BaseScene.FadeOut
// [0x00020802] ( FUNC_Event )
struct UcUIScene_BaseScene_eventFadeOut_Parms
{
};

// Function APBUserInterface.cUIScene_BaseScene.FadeIn
// [0x00020002] 
struct UcUIScene_BaseScene_execFadeIn_Parms
{
	unsigned long                                      bResetOpacity : 1;                                		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function APBUserInterface.cUIScene_BaseScene.UpdateScene
// [0x00020800] ( FUNC_Event )
struct UcUIScene_BaseScene_eventUpdateScene_Parms
{
	float                                              fDeltaTime;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AWorldInfo*                                  WorldInfo;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function APBUserInterface.cUIScene_BaseScene.UpdateData
// [0x00020000] 
struct UcUIScene_BaseScene_execUpdateData_Parms
{
};

// Function APBUserInterface.cUIScene_BaseScene.InitScene
// [0x00020802] ( FUNC_Event )
struct UcUIScene_BaseScene_eventInitScene_Parms
{
};

// Function APBUserInterface.cUIScene_BaseScene.OnFadeOutCompleted
// [0x00120000] 
struct UcUIScene_BaseScene_execOnFadeOutCompleted_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIScene_CharacterSelect.UpdateScene
// [0x00020400] ( FUNC_Native )
struct UcUIScene_CharacterSelect_execUpdateScene_Parms
{
	float                                              fDeltaTime;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AWorldInfo*                                  WorldInfo;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function APBUserInterface.cUIScene_CharacterSelect.InitScene
// [0x00020802] ( FUNC_Event )
struct UcUIScene_CharacterSelect_eventInitScene_Parms
{
	// int                                             I;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
	// struct FString                                  sButtonName;                                      		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function APBUserInterface.cUIScene_MessageBox.OnCloseMessageBoxNative
// [0x00020400] ( FUNC_Native )
struct UcUIScene_MessageBox_execOnCloseMessageBoxNative_Parms
{
};

// Function APBUserInterface.cUIScene_MessageBox.OnCloseMessageBox
// [0x00020802] ( FUNC_Event )
struct UcUIScene_MessageBox_eventOnCloseMessageBox_Parms
{
	class UcUIAction_CloseMessageBox*                  Action;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// unsigned char                                   eResult;                                          		// 0x0004 (0x0001) [0x0000000000000000]              
};

// Function APBUserInterface.cUIScene_MessageBox.SetDefaultCloseResult
// [0x00020002] 
struct UcUIScene_MessageBox_execSetDefaultCloseResult_Parms
{
	unsigned char                                      eMessageBoxResult;                                		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function APBUserInterface.cUIScene_MessageBox.SetMode
// [0x00020002] 
struct UcUIScene_MessageBox_execSetMode_Parms
{
	unsigned char                                      eMessageBoxMode;                                  		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	// class UUIPanel*                                 ButtonPanel;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
	// class UUIButton*                                CloseButton;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function APBUserInterface.cUIScene_MessageBox.ShowDisableOption
// [0x00020002] 
struct UcUIScene_MessageBox_execShowDisableOption_Parms
{
	// class UUIPanel*                                 Panel;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function APBUserInterface.cUIScene_MessageBox.SetCancelDatastoreBinding
// [0x00020002] 
struct UcUIScene_MessageBox_execSetCancelDatastoreBinding_Parms
{
	struct FString                                     Markup;                                           		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// class UUILabelButton*                           btn;                                              		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function APBUserInterface.cUIScene_MessageBox.SetNoDatastoreBinding
// [0x00020002] 
struct UcUIScene_MessageBox_execSetNoDatastoreBinding_Parms
{
	struct FString                                     Markup;                                           		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// class UUILabelButton*                           btn;                                              		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function APBUserInterface.cUIScene_MessageBox.SetOKYesDatastoreBinding
// [0x00020002] 
struct UcUIScene_MessageBox_execSetOKYesDatastoreBinding_Parms
{
	struct FString                                     Markup;                                           		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// class UUILabelButton*                           btn;                                              		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function APBUserInterface.cUIScene_MessageBox.SetMessageDatastoreBinding
// [0x00020002] 
struct UcUIScene_MessageBox_execSetMessageDatastoreBinding_Parms
{
	struct FString                                     Markup;                                           		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// class UUILabel*                                 Lbl;                                              		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function APBUserInterface.cUIScene_MessageBox.SetTitleDatastoreBinding
// [0x00020002] 
struct UcUIScene_MessageBox_execSetTitleDatastoreBinding_Parms
{
	struct FString                                     Markup;                                           		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// class UUILabel*                                 Lbl;                                              		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function APBUserInterface.cUIScene_MessageBox.SetMessage
// [0x00020002] 
struct UcUIScene_MessageBox_execSetMessage_Parms
{
	struct FString                                     Message;                                          		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// class UUILabel*                                 Lbl;                                              		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function APBUserInterface.cUIScene_MessageBox.SetTitle
// [0x00020002] 
struct UcUIScene_MessageBox_execSetTitle_Parms
{
	struct FString                                     Title;                                            		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// class UUILabel*                                 Lbl;                                              		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function APBUserInterface.cUIScene_MessageBox.OnBoxClosed
// [0x00120000] 
struct UcUIScene_MessageBox_execOnBoxClosed_Parms
{
	unsigned char                                      eResult;                                          		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bDisableOption : 1;                               		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function APBUserInterface.cUIScene_TextEntry.OnCloseTextEntry
// [0x00020802] ( FUNC_Event )
struct UcUIScene_TextEntry_eventOnCloseTextEntry_Parms
{
	class UcUIAction_CloseTextEntry*                   Action;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function APBUserInterface.cUIScene_TextEntry.SetEditBoxCharacterRestrictions
// [0x00020002] 
struct UcUIScene_TextEntry_execSetEditBoxCharacterRestrictions_Parms
{
	unsigned char                                      eCharacterRestrictions;                           		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	// class UUIEditBox*                               EditBox;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function APBUserInterface.cUIScene_TextEntry.SetEditBoxMaxCharacters
// [0x00020002] 
struct UcUIScene_TextEntry_execSetEditBoxMaxCharacters_Parms
{
	int                                                nMaxCharacters;                                   		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class UUIEditBox*                               EditBox;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function APBUserInterface.cUIScene_TextEntry.SetMessageDatastoreBinding
// [0x00020002] 
struct UcUIScene_TextEntry_execSetMessageDatastoreBinding_Parms
{
	struct FString                                     Markup;                                           		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// class UUILabel*                                 Lbl;                                              		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function APBUserInterface.cUIScene_TextEntry.SetInitialText
// [0x00020002] 
struct UcUIScene_TextEntry_execSetInitialText_Parms
{
	struct FString                                     sInitialText;                                     		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// class UUIEditBox*                               EditBox;                                          		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function APBUserInterface.cUIScene_TextEntry.SetTitleDatastoreBinding
// [0x00020002] 
struct UcUIScene_TextEntry_execSetTitleDatastoreBinding_Parms
{
	struct FString                                     Markup;                                           		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// class UUILabel*                                 Lbl;                                              		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function APBUserInterface.cUIScene_TextEntry.SetMessage
// [0x00020002] 
struct UcUIScene_TextEntry_execSetMessage_Parms
{
	struct FString                                     Message;                                          		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// class UUILabel*                                 Lbl;                                              		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function APBUserInterface.cUIScene_TextEntry.SetTitle
// [0x00020002] 
struct UcUIScene_TextEntry_execSetTitle_Parms
{
	struct FString                                     Title;                                            		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// class UUILabel*                                 Lbl;                                              		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function APBUserInterface.cUIScene_TextEntry.OnBoxClosed
// [0x00120000] 
struct UcUIScene_TextEntry_execOnBoxClosed_Parms
{
	unsigned long                                      bInAcceptOk : 1;                                  		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function APBUserInterface.cUISliderCanvas.NotifyDataStoreValueUpdated
// [0x00020400] ( FUNC_Native )
struct UcUISliderCanvas_execNotifyDataStoreValueUpdated_Parms
{
	class UUIDataStore*                                SourceDataStore;                                  		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bValuesInvalidated : 1;                           		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	struct FName                                       PropertyTag;                                      		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UUIDataProvider*                             SourceProvider;                                   		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ArrayIndex;                                       		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function APBUserInterface.cUISliderCanvas.SaveSubscriberValue
// [0x00420400] ( FUNC_Native )
struct UcUISliderCanvas_execSaveSubscriberValue_Parms
{
	TArray< class UUIDataStore* >                      out_BoundDataStores;                              		// 0x0000 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	int                                                BindingIndex;                                     		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUISliderCanvas.GetBoundDataStores
// [0x00420400] ( FUNC_Native )
struct UcUISliderCanvas_execGetBoundDataStores_Parms
{
	TArray< class UUIDataStore* >                      out_BoundDataStores;                              		// 0x0000 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function APBUserInterface.cUISliderCanvas.RefreshSubscriberValue
// [0x00020400] ( FUNC_Native )
struct UcUISliderCanvas_execRefreshSubscriberValue_Parms
{
	int                                                BindingIndex;                                     		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUISliderCanvas.GetDataStoreBinding
// [0x00020400] ( FUNC_Native )
struct UcUISliderCanvas_execGetDataStoreBinding_Parms
{
	int                                                BindingIndex;                                     		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0004 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function APBUserInterface.cUISliderCanvas.SetDataStoreBinding
// [0x00020400] ( FUNC_Native )
struct UcUISliderCanvas_execSetDataStoreBinding_Parms
{
	struct FString                                     MarkupText;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                BindingIndex;                                     		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function APBUserInterface.cUISliderCanvas.GetValue
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UcUISliderCanvas_execGetValue_Parms
{
	unsigned char                                      eOrientation;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bPercentageValue : 1;                             		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUISliderCanvas.SetValue
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UcUISliderCanvas_execSetValue_Parms
{
	unsigned char                                      eOrientation;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	float                                              NewValue;                                         		// 0x0004 (0x0004) [0x0000000000000880]              ( CPF_Parm | CPF_CoerceParm )
	unsigned long                                      bPercentageValue : 1;                             		// 0x0008 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUISliderCanvas.SetSliderDataStoreMarkup
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UcUISliderCanvas_execSetSliderDataStoreMarkup_Parms
{
	unsigned char                                      eOrientation;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     sNewMarkup;                                       		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function APBUserInterface.cUISliderCanvas.OnBindSliderCanvas
// [0x00020002] 
struct UcUISliderCanvas_execOnBindSliderCanvas_Parms
{
	class UcUIAction_BindSliderCanvas*                 Action;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function APBUserInterface.iUIListOrderedElementProvider.SetOrdering
// [0x00020800] ( FUNC_Event )
struct UiUIListOrderedElementProvider_eventSetOrdering_Parms
{
	struct FName                                       Ordering;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.iUIListPagedElementProvider.GetTotalPages
// [0x00020800] ( FUNC_Event )
struct UiUIListPagedElementProvider_eventGetTotalPages_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.iUIListPagedElementProvider.SetCurrentPage
// [0x00020800] ( FUNC_Event )
struct UiUIListPagedElementProvider_eventSetCurrentPage_Parms
{
	int                                                nPage;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.iUIListPagedElementProvider.GetCurrentPage
// [0x00020800] ( FUNC_Event )
struct UiUIListPagedElementProvider_eventGetCurrentPage_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIAction_ActivateAPBRemoteEvent.OnFinishAPBRemoteEvent
// [0x00020400] ( FUNC_Native )
struct UcUIAction_ActivateAPBRemoteEvent_execOnFinishAPBRemoteEvent_Parms
{
	class UcUIAction_FinishAPBRemoteEvent*             Action;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function APBUserInterface.cUIAction_DisplayMessageBox.OnBoxClosed
// [0x00020002] 
struct UcUIAction_DisplayMessageBox_execOnBoxClosed_Parms
{
	unsigned char                                      eResult;                                          		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bDisableMessage : 1;                              		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function APBUserInterface.cUIAction_DisplayMessageBox.SetupScene
// [0x00020802] ( FUNC_Event )
struct UcUIAction_DisplayMessageBox_eventSetupScene_Parms
{
	class UcUIScene_MessageBox*                        Scene;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function APBUserInterface.cUIAction_OpenContextPanel.OnSceneDeactivated
// [0x00020400] ( FUNC_Native )
struct UcUIAction_OpenContextPanel_execOnSceneDeactivated_Parms
{
	class UUIScene*                                    DeactivatedScene;                                 		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function APBUserInterface.cUIAction_SetDisplayPointWaypoint.OnGetHUDMarkerPosition
// [0x00020400] ( FUNC_Native )
struct UcUIAction_SetDisplayPointWaypoint_execOnGetHUDMarkerPosition_Parms
{
	unsigned long                                      bSuccess : 1;                                     		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	struct FVector                                     Position;                                         		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function APBUserInterface.cAttribute.SetValue
// [0x00420400] ( FUNC_Native )
struct UcAttribute_execSetValue_Parms
{
	class UObject*                                     pObject;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FAttributeValue                             Value;                                            		// 0x0004 (0x0048) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	int                                                nArrayIndex;                                      		// 0x004C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0050 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cAttribute.GetValue
// [0x00420400] ( FUNC_Native )
struct UcAttribute_execGetValue_Parms
{
	class UObject*                                     pObject;                                          		// 0x0000 (0x0004) [0x0000000000000082]              ( CPF_Const | CPF_Parm )
	struct FAttributeValue                             Value;                                            		// 0x0004 (0x0048) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	int                                                nArrayIndex;                                      		// 0x004C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0050 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cAttribute_ArrayVariable.RemoveItem
// [0x00020400] ( FUNC_Native )
struct UcAttribute_ArrayVariable_execRemoveItem_Parms
{
	class UObject*                                     pObject;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nArrayIndex;                                      		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cAttribute_ArrayVariable.InsertZeroedItem
// [0x00020400] ( FUNC_Native )
struct UcAttribute_ArrayVariable_execInsertZeroedItem_Parms
{
	class UObject*                                     pObject;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nInsertIndex;                                     		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cAttribute_ArrayVariable.SetValue
// [0x00420400] ( FUNC_Native )
struct UcAttribute_ArrayVariable_execSetValue_Parms
{
	class UObject*                                     pObject;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FAttributeValue                             Value;                                            		// 0x0004 (0x0048) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	int                                                nArrayIndex;                                      		// 0x004C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0050 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cAttribute_ArrayVariable.GetValue
// [0x00420400] ( FUNC_Native )
struct UcAttribute_ArrayVariable_execGetValue_Parms
{
	class UObject*                                     pObject;                                          		// 0x0000 (0x0004) [0x0000000000000082]              ( CPF_Const | CPF_Parm )
	struct FAttributeValue                             Value;                                            		// 0x0004 (0x0048) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	int                                                nArrayIndex;                                      		// 0x004C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0050 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cAttribute_BaseArrayLocalisedString.SetValue
// [0x00420400] ( FUNC_Native )
struct UcAttribute_BaseArrayLocalisedString_execSetValue_Parms
{
	class UObject*                                     pObject;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FAttributeValue                             Value;                                            		// 0x0004 (0x0048) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	int                                                nArrayIndex;                                      		// 0x004C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0050 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cAttribute_BaseArrayLocalisedString.GetValue
// [0x00420400] ( FUNC_Native )
struct UcAttribute_BaseArrayLocalisedString_execGetValue_Parms
{
	class UObject*                                     pObject;                                          		// 0x0000 (0x0004) [0x0000000000000082]              ( CPF_Const | CPF_Parm )
	struct FAttributeValue                             Value;                                            		// 0x0004 (0x0048) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	int                                                nArrayIndex;                                      		// 0x004C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0050 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cAttribute_Variable.SetValue
// [0x00420400] ( FUNC_Native )
struct UcAttribute_Variable_execSetValue_Parms
{
	class UObject*                                     pObject;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FAttributeValue                             Value;                                            		// 0x0004 (0x0048) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	int                                                nArrayIndex;                                      		// 0x004C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0050 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cAttribute_Variable.GetValue
// [0x00420400] ( FUNC_Native )
struct UcAttribute_Variable_execGetValue_Parms
{
	class UObject*                                     pObject;                                          		// 0x0000 (0x0004) [0x0000000000000082]              ( CPF_Const | CPF_Parm )
	struct FAttributeValue                             Value;                                            		// 0x0004 (0x0048) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	int                                                nArrayIndex;                                      		// 0x004C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0050 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cAttribute_Colour.SetValue
// [0x00420400] ( FUNC_Native )
struct UcAttribute_Colour_execSetValue_Parms
{
	class UObject*                                     pObject;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FAttributeValue                             Value;                                            		// 0x0004 (0x0048) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	int                                                nArrayIndex;                                      		// 0x004C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0050 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cAttribute_Colour.GetValue
// [0x00420400] ( FUNC_Native )
struct UcAttribute_Colour_execGetValue_Parms
{
	class UObject*                                     pObject;                                          		// 0x0000 (0x0004) [0x0000000000000082]              ( CPF_Const | CPF_Parm )
	struct FAttributeValue                             Value;                                            		// 0x0004 (0x0048) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	int                                                nArrayIndex;                                      		// 0x004C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0050 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cAttribute_FacialHair.RemoveItem
// [0x00020400] ( FUNC_Native )
struct UcAttribute_FacialHair_execRemoveItem_Parms
{
	class UObject*                                     pObject;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nArrayIndex;                                      		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cAttribute_FacialHair.InsertZeroedItem
// [0x00020400] ( FUNC_Native )
struct UcAttribute_FacialHair_execInsertZeroedItem_Parms
{
	class UObject*                                     pObject;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nInsertIndex;                                     		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cAttribute_FacialHair.SetValue
// [0x00420400] ( FUNC_Native )
struct UcAttribute_FacialHair_execSetValue_Parms
{
	class UObject*                                     pObject;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FAttributeValue                             Value;                                            		// 0x0004 (0x0048) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	int                                                nArrayIndex;                                      		// 0x004C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0050 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cAttribute_FacialHair.GetValue
// [0x00420400] ( FUNC_Native )
struct UcAttribute_FacialHair_execGetValue_Parms
{
	class UObject*                                     pObject;                                          		// 0x0000 (0x0004) [0x0000000000000082]              ( CPF_Const | CPF_Parm )
	struct FAttributeValue                             Value;                                            		// 0x0004 (0x0048) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	int                                                nArrayIndex;                                      		// 0x004C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0050 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cAttribute_MakeUpColour.SetValue
// [0x00420400] ( FUNC_Native )
struct UcAttribute_MakeUpColour_execSetValue_Parms
{
	class UObject*                                     pObject;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FAttributeValue                             Value;                                            		// 0x0004 (0x0048) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	int                                                nArrayIndex;                                      		// 0x004C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0050 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cAttribute_MakeUpColour.GetValue
// [0x00420400] ( FUNC_Native )
struct UcAttribute_MakeUpColour_execGetValue_Parms
{
	class UObject*                                     pObject;                                          		// 0x0000 (0x0004) [0x0000000000000082]              ( CPF_Const | CPF_Parm )
	struct FAttributeValue                             Value;                                            		// 0x0004 (0x0048) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	int                                                nArrayIndex;                                      		// 0x004C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0050 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cAttribute_Morph.SetValue
// [0x00420400] ( FUNC_Native )
struct UcAttribute_Morph_execSetValue_Parms
{
	class UObject*                                     pObject;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FAttributeValue                             Value;                                            		// 0x0004 (0x0048) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	int                                                nArrayIndex;                                      		// 0x004C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0050 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cAttribute_Morph.GetValue
// [0x00420400] ( FUNC_Native )
struct UcAttribute_Morph_execGetValue_Parms
{
	class UObject*                                     pObject;                                          		// 0x0000 (0x0004) [0x0000000000000082]              ( CPF_Const | CPF_Parm )
	struct FAttributeValue                             Value;                                            		// 0x0004 (0x0048) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	int                                                nArrayIndex;                                      		// 0x004C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0050 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cAttribute_TESTexture.RemoveItem
// [0x00020400] ( FUNC_Native )
struct UcAttribute_TESTexture_execRemoveItem_Parms
{
	class UObject*                                     pObject;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nArrayIndex;                                      		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cAttribute_TESTexture.InsertZeroedItem
// [0x00020400] ( FUNC_Native )
struct UcAttribute_TESTexture_execInsertZeroedItem_Parms
{
	class UObject*                                     pObject;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nInsertIndex;                                     		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cAttribute_TESTexture.SetValue
// [0x00420400] ( FUNC_Native )
struct UcAttribute_TESTexture_execSetValue_Parms
{
	class UObject*                                     pObject;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FAttributeValue                             Value;                                            		// 0x0004 (0x0048) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	int                                                nArrayIndex;                                      		// 0x004C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0050 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cAttribute_TESTexture.GetValue
// [0x00420400] ( FUNC_Native )
struct UcAttribute_TESTexture_execGetValue_Parms
{
	class UObject*                                     pObject;                                          		// 0x0000 (0x0004) [0x0000000000000082]              ( CPF_Const | CPF_Parm )
	struct FAttributeValue                             Value;                                            		// 0x0004 (0x0048) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	int                                                nArrayIndex;                                      		// 0x004C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0050 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIAction_GetCustomisableItemInfo.GetObjClassVersion
// [0x00022802] ( FUNC_Event )
struct UcUIAction_GetCustomisableItemInfo_eventGetObjClassVersion_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIDataStore_CustomisationEditor.OnInputAxis
// [0x00420400] ( FUNC_Native )
struct UcUIDataStore_CustomisationEditor_execOnInputAxis_Parms
{
	struct FInputEventParameters                       EventParms;                                       		// 0x0000 (0x0020) [0x0000000000000182]              ( CPF_Const | CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0020 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIDataStore_CustomisationEditor.OnKeyPress
// [0x00420400] ( FUNC_Native )
struct UcUIDataStore_CustomisationEditor_execOnKeyPress_Parms
{
	struct FInputEventParameters                       EventParms;                                       		// 0x0000 (0x0020) [0x0000000000000182]              ( CPF_Const | CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0020 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIDataStore_CustomisationEditor.GetTimeSecondsInEditor
// [0x00020400] ( FUNC_Native )
struct UcUIDataStore_CustomisationEditor_execGetTimeSecondsInEditor_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIDataStore_TESTexture.NotifyGameSessionEnded
// [0x00020002] 
struct UcUIDataStore_TESTexture_execNotifyGameSessionEnded_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIDataStore_TESTexture.ReleaseAssets
// [0x00020400] ( FUNC_Native )
struct UcUIDataStore_TESTexture_execReleaseAssets_Parms
{
};

// Function APBUserInterface.cUIDataStore_TESTexture.ClearUndoSlots
// [0x00020400] ( FUNC_Native )
struct UcUIDataStore_TESTexture_execClearUndoSlots_Parms
{
};

// Function APBUserInterface.cUIDataStore_TESTexture.PopRedoSlot
// [0x00020400] ( FUNC_Native )
struct UcUIDataStore_TESTexture_execPopRedoSlot_Parms
{
};

// Function APBUserInterface.cUIDataStore_TESTexture.PopUndoSlot
// [0x00020400] ( FUNC_Native )
struct UcUIDataStore_TESTexture_execPopUndoSlot_Parms
{
};

// Function APBUserInterface.cUIDataStore_TESTexture.PushUndoSlot
// [0x00020400] ( FUNC_Native )
struct UcUIDataStore_TESTexture_execPushUndoSlot_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cRandomCharacterGenerator.AddRandomFields
// [0x00020802] ( FUNC_Event )
struct UcRandomCharacterGenerator_eventAddRandomFields_Parms
{
	// TArray< int >                                   myIntArray;                                       		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function APBUserInterface.cRandomCharacterGenerator.CreateRandomFieldInt
// [0x00020400] ( FUNC_Native )
struct UcRandomCharacterGenerator_execCreateRandomFieldInt_Parms
{
	struct FName                                       FieldName;                                        		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      eGender;                                          		// 0x0008 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	TArray< int >                                      aValues;                                          		// 0x000C (0x000C) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	unsigned char                                      eMode;                                            		// 0x0018 (0x0001) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function APBUserInterface.cRandomCharacterGenerator.CreateRandomField
// [0x00020400] ( FUNC_Native )
struct UcRandomCharacterGenerator_execCreateRandomField_Parms
{
	struct FName                                       FieldName;                                        		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      eGender;                                          		// 0x0008 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	float                                              fTolerance;                                       		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function APBUserInterface.cUIAction_CC_GetContext.IsValidUISequenceObject
// [0x00020802] ( FUNC_Event )
struct UcUIAction_CC_GetContext_eventIsValidUISequenceObject_Parms
{
	class UUIScreenObject*                             TargetObject;                                     		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIDataStore_CharacterCustomisation.NotifyGameSessionEnded
// [0x00020002] 
struct UcUIDataStore_CharacterCustomisation_execNotifyGameSessionEnded_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIDataStore_CharacterCustomisation.GetCompressedDescriptorInDefaultOutfit
// [0x00420400] ( FUNC_Native )
struct UcUIDataStore_CharacterCustomisation_execGetCompressedDescriptorInDefaultOutfit_Parms
{
	TArray< unsigned char >                            aData;                                            		// 0x0000 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIDataStore_CharacterCustomisation.ReleaseAssets
// [0x00020400] ( FUNC_Native )
struct UcUIDataStore_CharacterCustomisation_execReleaseAssets_Parms
{
};

// Function APBUserInterface.cUIDataStore_CharacterCustomisation.SetContext
// [0x00020400] ( FUNC_Native )
struct UcUIDataStore_CharacterCustomisation_execSetContext_Parms
{
	unsigned char                                      eContext;                                         		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function APBUserInterface.cUIDataStore_CharacterCustomisation.AddArrayLists
// [0x00020802] ( FUNC_Event )
struct UcUIDataStore_CharacterCustomisation_eventAddArrayLists_Parms
{
};

// Function APBUserInterface.cUIDataStore_CharacterCustomisation.CreateArrayList
// [0x00020400] ( FUNC_Native )
struct UcUIDataStore_CharacterCustomisation_execCreateArrayList_Parms
{
	struct FName                                       ArrayVariable;                                    		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                nMaxItems;                                        		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      eAssetRebuildType;                                		// 0x000C (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function APBUserInterface.cUIListProvider_CC_HairMorphs.AddHairMorphItem
// [0x00020400] ( FUNC_Native )
struct UcUIListProvider_CC_HairMorphs_execAddHairMorphItem_Parms
{
	struct FString                                     sDisplayName;                                     		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     sVertAttributeTag;                                		// 0x000C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     sHorizAttributeTag;                               		// 0x0018 (0x000C) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
};

// Function APBUserInterface.cUIListProvider_CC_HairMorphs.AddMairMorphItems
// [0x00020802] ( FUNC_Event )
struct UcUIListProvider_CC_HairMorphs_eventAddMairMorphItems_Parms
{
};

// Function APBUserInterface.cUIAction_StoreItemCustomisation.OnFailed
// [0x00020400] ( FUNC_Native )
struct UcUIAction_StoreItemCustomisation_execOnFailed_Parms
{
	int                                                eErr;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function APBUserInterface.cUIAction_StoreItemCustomisation.OnSuccess
// [0x00020400] ( FUNC_Native )
struct UcUIAction_StoreItemCustomisation_execOnSuccess_Parms
{
};

// Function APBUserInterface.cUIAction_StoreItemCustomisation.OnEditCompleted
// [0x00020002] 
struct UcUIAction_StoreItemCustomisation_execOnEditCompleted_Parms
{
	int                                                eErr;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FGuid                                       ItemGuid;                                         		// 0x0004 (0x0010) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      eOperation;                                       		// 0x0014 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FPointer                                    pUserData;                                        		// 0x0018 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function APBUserInterface.cUIAction_StoreItemCustomisation.OnItemCustomisationChanged
// [0x00020002] 
struct UcUIAction_StoreItemCustomisation_execOnItemCustomisationChanged_Parms
{
	class AActor*                                      pItemCustomisationInfo;                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function APBUserInterface.cUIAction_VC_StoreCustomisation.OnSuccess
// [0x00020400] ( FUNC_Native )
struct UcUIAction_VC_StoreCustomisation_execOnSuccess_Parms
{
};

// Function APBUserInterface.cUIDataStore_VehicleCustomisation.OnDeploymentChangedCallback
// [0x00020400] ( FUNC_Native )
struct UcUIDataStore_VehicleCustomisation_execOnDeploymentChangedCallback_Parms
{
};

// Function APBUserInterface.cUIDataStore_VehicleCustomisation.OnInventoryChangedCallback
// [0x00020400] ( FUNC_Native )
struct UcUIDataStore_VehicleCustomisation_execOnInventoryChangedCallback_Parms
{
};

// Function APBUserInterface.cUIDataStore_S_ItemPreview.OnItemCreatorNameCacheUpdated
// [0x00020002] 
struct UcUIDataStore_S_ItemPreview_execOnItemCreatorNameCacheUpdated_Parms
{
};

// Function APBUserInterface.cUIAction_Wardrobe_StoreOutfit.OnItemCustomisationChanged
// [0x00020002] 
struct UcUIAction_Wardrobe_StoreOutfit_execOnItemCustomisationChanged_Parms
{
	class AActor*                                      pItemCustomisationInfo;                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function APBUserInterface.cUIAction_Wardrobe_StorePart.OnSuccess
// [0x00020400] ( FUNC_Native )
struct UcUIAction_Wardrobe_StorePart_execOnSuccess_Parms
{
};

// Function APBUserInterface.cUIDataStore_ClothingCustomisation.OnDeploymentChangedCallback
// [0x00020400] ( FUNC_Native )
struct UcUIDataStore_ClothingCustomisation_execOnDeploymentChangedCallback_Parms
{
};

// Function APBUserInterface.cUIDataStore_ClothingCustomisation.OnInventoryChangedCallback
// [0x00020400] ( FUNC_Native )
struct UcUIDataStore_ClothingCustomisation_execOnInventoryChangedCallback_Parms
{
};

// Function APBUserInterface.cUIDataStore_ClothingCustomisation.OnItemCreateCallback
// [0x00020400] ( FUNC_Native )
struct UcUIDataStore_ClothingCustomisation_execOnItemCreateCallback_Parms
{
	struct FGuid                                       ItemGuid;                                         		// 0x0000 (0x0010) [0x0000000000000080]              ( CPF_Parm )
	class UObject*                                     pUserData;                                        		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function APBUserInterface.cUIAction_Wardrobe_DuplicateOutfit.OnItemCustomisationChanged
// [0x00020002] 
struct UcUIAction_Wardrobe_DuplicateOutfit_execOnItemCustomisationChanged_Parms
{
	class AActor*                                      pItemCustomisationInfo;                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function APBUserInterface.cUI_S_ItemCreatorNameCache.OnNameQueryFailedItem
// [0x00020400] ( FUNC_Native )
struct UcUI_S_ItemCreatorNameCache_execOnNameQueryFailedItem_Parms
{
	int                                                nError;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nCharacterUID;                                    		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function APBUserInterface.cUI_S_ItemCreatorNameCache.OnNameQuerySuccessItem
// [0x00020400] ( FUNC_Native )
struct UcUI_S_ItemCreatorNameCache_execOnNameQuerySuccessItem_Parms
{
	int                                                nCharacterUID;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     sCharacterName;                                   		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function APBUserInterface.cUI_S_ItemCreatorNameCache.CacheUpdatedCallback
// [0x00120000] 
struct UcUI_S_ItemCreatorNameCache_execCacheUpdatedCallback_Parms
{
};

// Function APBUserInterface.cUIAction_S_PurchaseItem.OnPurchaseCompleted
// [0x00020400] ( FUNC_Native )
struct UcUIAction_S_PurchaseItem_execOnPurchaseCompleted_Parms
{
	struct FGuid                                       ItemGuid;                                         		// 0x0000 (0x0010) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      eErrorCode;                                       		// 0x0010 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FPointer                                    pUserData;                                        		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function APBUserInterface.cUIAction_S_SellItem.OnSaleCompleted
// [0x00020400] ( FUNC_Native )
struct UcUIAction_S_SellItem_execOnSaleCompleted_Parms
{
	int                                                eErr;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FGuid                                       ItemGuid;                                         		// 0x0004 (0x0010) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      eOperation;                                       		// 0x0014 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FPointer                                    pUserData;                                        		// 0x0018 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function APBUserInterface.cUIDataStore_APBDistricts.SetOrdering
// [0x00020C00] ( FUNC_Event | FUNC_Native )
struct UcUIDataStore_APBDistricts_eventSetOrdering_Parms
{
	struct FName                                       Ordering;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIDataStore_APBDistricts.OnGroupLeaderChanged
// [0x00020400] ( FUNC_Native )
struct UcUIDataStore_APBDistricts_execOnGroupLeaderChanged_Parms
{
};

// Function APBUserInterface.cUIDataStore_APBDistricts.OnDistrictReserveFailed
// [0x00020400] ( FUNC_Native )
struct UcUIDataStore_APBDistricts_execOnDistrictReserveFailed_Parms
{
	int                                                nError;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function APBUserInterface.cUIDataStore_APBDistricts.InvokeCityMap
// [0x00020400] ( FUNC_Native )
struct UcUIDataStore_APBDistricts_execInvokeCityMap_Parms
{
};

// Function APBUserInterface.cUIDataStore_APBDistricts.GetDistrictInstNoFromInstanceListIndex
// [0x00020400] ( FUNC_Native )
struct UcUIDataStore_APBDistricts_execGetDistrictInstNoFromInstanceListIndex_Parms
{
	int                                                nIndex;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIDataStore_APBDistricts.GetDistrictUIDFromInstanceListIndex
// [0x00020400] ( FUNC_Native )
struct UcUIDataStore_APBDistricts_execGetDistrictUIDFromInstanceListIndex_Parms
{
	int                                                nIndex;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIDataStore_HUD_ActionMessage.NotifyGameSessionEnded
// [0x00020002] 
struct UcUIDataStore_HUD_ActionMessage_execNotifyGameSessionEnded_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIDataStore_HUD_ActionMessage.Native_NotifyGameSessionEnded
// [0x00020400] ( FUNC_Native )
struct UcUIDataStore_HUD_ActionMessage_execNative_NotifyGameSessionEnded_Parms
{
};

// Function APBUserInterface.cUIDataStore_HUD_ActionMessage.GetInstance_Script
// [0x00022400] ( FUNC_Native )
struct UcUIDataStore_HUD_ActionMessage_execGetInstance_Script_Parms
{
	class UcUIDataStore_HUD_ActionMessage*             ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIDataStore_HUD_BackupPending.OnPlayerProfileChanged
// [0x00020400] ( FUNC_Native )
struct UcUIDataStore_HUD_BackupPending_execOnPlayerProfileChanged_Parms
{
};

// Function APBUserInterface.cUIDataStore_HUD_Clock.OnPlayerProfileChanged
// [0x00020400] ( FUNC_Native )
struct UcUIDataStore_HUD_Clock_execOnPlayerProfileChanged_Parms
{
};

// Function APBUserInterface.cUIDataStore_HUD_Group.OnPlayerProfileChanged
// [0x00020400] ( FUNC_Native )
struct UcUIDataStore_HUD_Group_execOnPlayerProfileChanged_Parms
{
};

// Function APBUserInterface.cUIDataStore_HUD_HudMessages.OnPlayerSpawned
// [0x00020400] ( FUNC_Native )
struct UcUIDataStore_HUD_HudMessages_execOnPlayerSpawned_Parms
{
};

// Function APBUserInterface.cUIDataStore_HUD_HudMessages.AddMessage_Script1
// [0x00020400] ( FUNC_Native )
struct UcUIDataStore_HUD_HudMessages_execAddMessage_Script1_Parms
{
	struct FString                                     sHudMessage;                                      		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     sLocToken;                                        		// 0x000C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     sLocValue;                                        		// 0x0018 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function APBUserInterface.cUIDataStore_HUD_HudMessages.AddMessage_Script0
// [0x00020400] ( FUNC_Native )
struct UcUIDataStore_HUD_HudMessages_execAddMessage_Script0_Parms
{
	struct FString                                     sHudMessage;                                      		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function APBUserInterface.cUIDataStore_HUD_HudMessages.GetInstance_Script
// [0x00022400] ( FUNC_Native )
struct UcUIDataStore_HUD_HudMessages_execGetInstance_Script_Parms
{
	class UcUIDataStore_HUD_HudMessages*               ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIDataStore_HUD_InfoBrowser.NotifyGameSessionEnded
// [0x00020002] 
struct UcUIDataStore_HUD_InfoBrowser_execNotifyGameSessionEnded_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIDataStore_HUD_ReticuleHintIcon.NotifyGameSessionEnded
// [0x00020002] 
struct UcUIDataStore_HUD_ReticuleHintIcon_execNotifyGameSessionEnded_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIDataStore_HUD_TaskMarkers.NotifyGameSessionEnded
// [0x00020002] 
struct UcUIDataStore_HUD_TaskMarkers_execNotifyGameSessionEnded_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIDataStore_HUD_Usables.RefreshIconTextures
// [0x00020400] ( FUNC_Native )
struct UcUIDataStore_HUD_Usables_execRefreshIconTextures_Parms
{
};

// Function APBUserInterface.cUIDataStore_HUD_WSCharacterInfo.NotifyGameSessionEnded
// [0x00020002] 
struct UcUIDataStore_HUD_WSCharacterInfo_execNotifyGameSessionEnded_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIDataStore_HUD_WSCharacterInfo.Native_NotifyGameSessionEnded
// [0x00020400] ( FUNC_Native )
struct UcUIDataStore_HUD_WSCharacterInfo_execNative_NotifyGameSessionEnded_Parms
{
};

// Function APBUserInterface.cUIAction_CharacterNameChange.OnHostingFailure
// [0x00020400] ( FUNC_Native )
struct UcUIAction_CharacterNameChange_execOnHostingFailure_Parms
{
	int                                                nError;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function APBUserInterface.cUIAction_CharacterNameChange.OnHostingSuccess
// [0x00020400] ( FUNC_Native )
struct UcUIAction_CharacterNameChange_execOnHostingSuccess_Parms
{
};

// Function APBUserInterface.cUIDataStore_GameFlowManager.OnDistrictEnter
// [0x00020400] ( FUNC_Native )
struct UcUIDataStore_GameFlowManager_execOnDistrictEnter_Parms
{
	int                                                nDistrictUID;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nInstanceNo;                                      		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function APBUserInterface.cUIDataStore_GameFlowManager.OnWorldEnter
// [0x00020400] ( FUNC_Native )
struct UcUIDataStore_GameFlowManager_execOnWorldEnter_Parms
{
	int                                                nCharacterUID;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function APBUserInterface.cUIDataStore_GameFlowManager.ShowLoadingScreen
// [0x00020400] ( FUNC_Native )
struct UcUIDataStore_GameFlowManager_execShowLoadingScreen_Parms
{
	unsigned long                                      bShow : 1;                                        		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function APBUserInterface.cUIDataStore_GameFlowManager.DisplayDisconnectErrorMessage
// [0x00020400] ( FUNC_Native )
struct UcUIDataStore_GameFlowManager_execDisplayDisconnectErrorMessage_Parms
{
	int                                                nReason;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     sInfo;                                            		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function APBUserInterface.cUIDataStore_GameFlowManager.OpenIntroMovieScene
// [0x00020400] ( FUNC_Native )
struct UcUIDataStore_GameFlowManager_execOpenIntroMovieScene_Parms
{
};

// Function APBUserInterface.cUIDataStore_GameFlowManager.OpenLoginScreen
// [0x00020400] ( FUNC_Native )
struct UcUIDataStore_GameFlowManager_execOpenLoginScreen_Parms
{
};

// Function APBUserInterface.cUIDataStore_GameFlowManager.InitBaseScene
// [0x00020400] ( FUNC_Native )
struct UcUIDataStore_GameFlowManager_execInitBaseScene_Parms
{
};

// Function APBUserInterface.cUIDataStore_GameFlowManager.OnWorldQueueStatusUpdate
// [0x00020400] ( FUNC_Native )
struct UcUIDataStore_GameFlowManager_execOnWorldQueueStatusUpdate_Parms
{
	int                                                nPosition;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nSize;                                            		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nEstimatedWait;                                   		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function APBUserInterface.cUIDataStore_GameFlowManager.OnWorldStatusUpdated
// [0x00020400] ( FUNC_Native )
struct UcUIDataStore_GameFlowManager_execOnWorldStatusUpdated_Parms
{
};

// Function APBUserInterface.cUIDataStore_Lobby.NotifyGameSessionEnded
// [0x00020002] 
struct UcUIDataStore_Lobby_execNotifyGameSessionEnded_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIAction_Contact_Buyoff.OnPayForHeatFailure
// [0x00020400] ( FUNC_Native )
struct UcUIAction_Contact_Buyoff_execOnPayForHeatFailure_Parms
{
};

// Function APBUserInterface.cUIAction_Contact_Buyoff.OnPayForHeatSuccess
// [0x00020400] ( FUNC_Native )
struct UcUIAction_Contact_Buyoff_execOnPayForHeatSuccess_Parms
{
};

// Function APBUserInterface.cUIDataStore_Contact_Action_Buyoff.OnDataChanged
// [0x00020400] ( FUNC_Native )
struct UcUIDataStore_Contact_Action_Buyoff_execOnDataChanged_Parms
{
};

// Function APBUserInterface.cUIDataStore_Contact_ContactInfo.NotifyGameSessionEnded
// [0x00020002] 
struct UcUIDataStore_Contact_ContactInfo_execNotifyGameSessionEnded_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIDataStore_Contact_ContactInfo.GetInstance
// [0x00022400] ( FUNC_Native )
struct UcUIDataStore_Contact_ContactInfo_execGetInstance_Parms
{
	class UcUIDataStore_Contact_ContactInfo*           ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIDataStore_Contact_ContactInfo.Close
// [0x00020400] ( FUNC_Native )
struct UcUIDataStore_Contact_ContactInfo_execClose_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIDataStore_Contact_ContactInfo.Open
// [0x00020400] ( FUNC_Native )
struct UcUIDataStore_Contact_ContactInfo_execOpen_Parms
{
	class AActor*                                      pContact;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bCloseMainScenes : 1;                             		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bRemote : 1;                                      		// 0x0008 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIDataStore_DepInv_Inventory.OnInventoryChanged
// [0x00020400] ( FUNC_Native )
struct UcUIDataStore_DepInv_Inventory_execOnInventoryChanged_Parms
{
};

// Function APBUserInterface.cUIDataStore_DepInv_Inventory.OnInventoryChangedGameCallback
// [0x00040401] ( FUNC_Final | FUNC_Native )
struct UcUIDataStore_DepInv_Inventory_execOnInventoryChangedGameCallback_Parms
{
};

// Function APBUserInterface.cUIDataStore_DepInv2_Inventory.NotifyGameSessionEnded
// [0x00020002] 
struct UcUIDataStore_DepInv2_Inventory_execNotifyGameSessionEnded_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIDataStore_DepInv2_Inventory.SetNoSelectedSlot
// [0x00020400] ( FUNC_Native )
struct UcUIDataStore_DepInv2_Inventory_execSetNoSelectedSlot_Parms
{
};

// Function APBUserInterface.cUIDataStore_DepInv2_Inventory.OnInventoryChanged
// [0x00020400] ( FUNC_Native )
struct UcUIDataStore_DepInv2_Inventory_execOnInventoryChanged_Parms
{
};

// Function APBUserInterface.cUIDataStore_IGS_Inspect_Character.NotifyGameSessionEnded
// [0x00020002] 
struct UcUIDataStore_IGS_Inspect_Character_execNotifyGameSessionEnded_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIDataStore_IGS_Inspect_Character.Native_NotifyGameSessionEnded
// [0x00020400] ( FUNC_Native )
struct UcUIDataStore_IGS_Inspect_Character_execNative_NotifyGameSessionEnded_Parms
{
};

// Function APBUserInterface.cUIDataStore_IGS_Leagues.OnDistrictListUpdated
// [0x00020400] ( FUNC_Native )
struct UcUIDataStore_IGS_Leagues_execOnDistrictListUpdated_Parms
{
};

// Function APBUserInterface.cUIDataStore_IGS_PlayerInfo_Character.NotifyGameSessionEnded
// [0x00020002] 
struct UcUIDataStore_IGS_PlayerInfo_Character_execNotifyGameSessionEnded_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIDataStore_StoInv_Inventory.OnInventoryChanged
// [0x00040401] ( FUNC_Final | FUNC_Native )
struct UcUIDataStore_StoInv_Inventory_execOnInventoryChanged_Parms
{
};

// Function APBUserInterface.cUIAction_StoInv2_CopyItem.OnItemCopied
// [0x00020400] ( FUNC_Native )
struct UcUIAction_StoInv2_CopyItem_execOnItemCopied_Parms
{
	int                                                eErr;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FGuid                                       Item;                                             		// 0x0004 (0x0010) [0x0000000000000080]              ( CPF_Parm )
	int                                                eOperation;                                       		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FPointer                                    pUserData;                                        		// 0x0018 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function APBUserInterface.cUIAction_StoInv2_GetMsExtension.IsValidUISequenceObject
// [0x00020802] ( FUNC_Event )
struct UcUIAction_StoInv2_GetMsExtension_eventIsValidUISequenceObject_Parms
{
	class UUIScreenObject*                             TargetObject;                                     		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIAction_StoInv2_OpenStorageInventory.OnInventoryClosed
// [0x00020400] ( FUNC_Native )
struct UcUIAction_StoInv2_OpenStorageInventory_execOnInventoryClosed_Parms
{
};

// Function APBUserInterface.cUIAction_StoInv2_SetMsExtension.IsValidUISequenceObject
// [0x00020802] ( FUNC_Event )
struct UcUIAction_StoInv2_SetMsExtension_eventIsValidUISequenceObject_Parms
{
	class UUIScreenObject*                             TargetObject;                                     		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIDataStore_StoInv2_Inventory.OnInventoryChanged
// [0x00040401] ( FUNC_Final | FUNC_Native )
struct UcUIDataStore_StoInv2_Inventory_execOnInventoryChanged_Parms
{
};

// Function APBUserInterface.cUIAction_TM_CreateTeam.GetObjClassVersion
// [0x00022802] ( FUNC_Event )
struct UcUIAction_TM_CreateTeam_eventGetObjClassVersion_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIAction_TM_CreateTeam.Processed
// [0x00020400] ( FUNC_Native )
struct UcUIAction_TM_CreateTeam_execProcessed_Parms
{
	int                                                nError;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function APBUserInterface.cUIDataStore_TM_TeamMembersList.OnDataChanged
// [0x00020400] ( FUNC_Native )
struct UcUIDataStore_TM_TeamMembersList_execOnDataChanged_Parms
{
};

// Function APBUserInterface.cUIDataStore_TM_TeamProfile.OnTeamSymbolChanged
// [0x00020400] ( FUNC_Native )
struct UcUIDataStore_TM_TeamProfile_execOnTeamSymbolChanged_Parms
{
};

// Function APBUserInterface.cUIDataStore_TM_TeamProfile.OnPermissionsChanged
// [0x00020400] ( FUNC_Native )
struct UcUIDataStore_TM_TeamProfile_execOnPermissionsChanged_Parms
{
};

// Function APBUserInterface.cUIDataStore_TM_TeamProfile.OnDataChanged
// [0x00020400] ( FUNC_Native )
struct UcUIDataStore_TM_TeamProfile_execOnDataChanged_Parms
{
};

// Function APBUserInterface.cUIDataStore_O_PlayerProfile.OnAppliedStateChanged
// [0x00020400] ( FUNC_Native )
struct UcUIDataStore_O_PlayerProfile_execOnAppliedStateChanged_Parms
{
};

// Function APBUserInterface.cUIDataStore_O_PlayerProfile.OnCurrentStateChanged
// [0x00020400] ( FUNC_Native )
struct UcUIDataStore_O_PlayerProfile_execOnCurrentStateChanged_Parms
{
};

// Function APBUserInterface.cUIAction_Marketplace_AuctionItem.OnFailure
// [0x00020400] ( FUNC_Native )
struct UcUIAction_Marketplace_AuctionItem_execOnFailure_Parms
{
	int                                                nError;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function APBUserInterface.cUIAction_Marketplace_AuctionItem.OnSuccess
// [0x00020400] ( FUNC_Native )
struct UcUIAction_Marketplace_AuctionItem_execOnSuccess_Parms
{
};

// Function APBUserInterface.cUIAction_Marketplace_CancelAuction.OnFailure
// [0x00020400] ( FUNC_Native )
struct UcUIAction_Marketplace_CancelAuction_execOnFailure_Parms
{
	int                                                nError;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function APBUserInterface.cUIAction_Marketplace_CancelAuction.OnSuccess
// [0x00020400] ( FUNC_Native )
struct UcUIAction_Marketplace_CancelAuction_execOnSuccess_Parms
{
};

// Function APBUserInterface.cUIAction_Marketplace_CompleteCreatorName.OnHostingFailure
// [0x00020400] ( FUNC_Native )
struct UcUIAction_Marketplace_CompleteCreatorName_execOnHostingFailure_Parms
{
	int                                                nError;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function APBUserInterface.cUIAction_Marketplace_CompleteCreatorName.OnHostingSuccess
// [0x00020400] ( FUNC_Native )
struct UcUIAction_Marketplace_CompleteCreatorName_execOnHostingSuccess_Parms
{
};

// Function APBUserInterface.cUIAction_Marketplace_PlaceBid.OnFailure
// [0x00020400] ( FUNC_Native )
struct UcUIAction_Marketplace_PlaceBid_execOnFailure_Parms
{
	int                                                nError;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function APBUserInterface.cUIAction_Marketplace_PlaceBid.OnSuccess
// [0x00020400] ( FUNC_Native )
struct UcUIAction_Marketplace_PlaceBid_execOnSuccess_Parms
{
};

// Function APBUserInterface.cUIDataStore_Marketplace.NotifyGameSessionEndedNative
// [0x00020400] ( FUNC_Native )
struct UcUIDataStore_Marketplace_execNotifyGameSessionEndedNative_Parms
{
};

// Function APBUserInterface.cUIDataStore_Marketplace.NotifyGameSessionEnded
// [0x00020002] 
struct UcUIDataStore_Marketplace_execNotifyGameSessionEnded_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIDataStore_Marketplace.OnHostingCleanup
// [0x00020400] ( FUNC_Native )
struct UcUIDataStore_Marketplace_execOnHostingCleanup_Parms
{
	int                                                nCurrency;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function APBUserInterface.cUIDataStore_Marketplace.OnHostingDataChanged_GetItemFailure
// [0x00020400] ( FUNC_Native )
struct UcUIDataStore_Marketplace_execOnHostingDataChanged_GetItemFailure_Parms
{
	int                                                nCurrency;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nAuctionID;                                       		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function APBUserInterface.cUIDataStore_Marketplace.OnHostingDataChanged_GetItemSuccess
// [0x00020400] ( FUNC_Native )
struct UcUIDataStore_Marketplace_execOnHostingDataChanged_GetItemSuccess_Parms
{
	int                                                nCurrency;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nAuctionID;                                       		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     sItemXMLData;                                     		// 0x0008 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function APBUserInterface.cUIDataStore_Marketplace.OnAuctionListEntryDeleted_ReviewBidList
// [0x00020400] ( FUNC_Native )
struct UcUIDataStore_Marketplace_execOnAuctionListEntryDeleted_ReviewBidList_Parms
{
	int                                                nCurrency;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function APBUserInterface.cUIDataStore_Marketplace.OnAuctionListEntryDeleted_SellList
// [0x00020400] ( FUNC_Native )
struct UcUIDataStore_Marketplace_execOnAuctionListEntryDeleted_SellList_Parms
{
	int                                                nCurrency;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function APBUserInterface.cUIDataStore_Marketplace.OnAuctionListEntryDeleted_BidList
// [0x00020400] ( FUNC_Native )
struct UcUIDataStore_Marketplace_execOnAuctionListEntryDeleted_BidList_Parms
{
	int                                                nCurrency;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function APBUserInterface.cUIDataStore_Marketplace.OnAuctionListModified_ReviewBidList
// [0x00020400] ( FUNC_Native )
struct UcUIDataStore_Marketplace_execOnAuctionListModified_ReviewBidList_Parms
{
	int                                                nCurrency;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function APBUserInterface.cUIDataStore_Marketplace.OnAuctionListModified_SellList
// [0x00020400] ( FUNC_Native )
struct UcUIDataStore_Marketplace_execOnAuctionListModified_SellList_Parms
{
	int                                                nCurrency;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function APBUserInterface.cUIDataStore_Marketplace.OnAuctionListModified_BidList
// [0x00020400] ( FUNC_Native )
struct UcUIDataStore_Marketplace_execOnAuctionListModified_BidList_Parms
{
	int                                                nCurrency;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function APBUserInterface.cUIDataStore_Marketplace.OnAuctionListReceived_Failed
// [0x00020400] ( FUNC_Native )
struct UcUIDataStore_Marketplace_execOnAuctionListReceived_Failed_Parms
{
	int                                                nError;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function APBUserInterface.cUIDataStore_Marketplace.OnAuctionListReceived_ReviewBidList
// [0x00020400] ( FUNC_Native )
struct UcUIDataStore_Marketplace_execOnAuctionListReceived_ReviewBidList_Parms
{
	int                                                nCurrency;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function APBUserInterface.cUIDataStore_Marketplace.OnAuctionListReceived_SellList
// [0x00020400] ( FUNC_Native )
struct UcUIDataStore_Marketplace_execOnAuctionListReceived_SellList_Parms
{
	int                                                nCurrency;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function APBUserInterface.cUIDataStore_Marketplace.OnAuctionListReceived_BidList
// [0x00020400] ( FUNC_Native )
struct UcUIDataStore_Marketplace_execOnAuctionListReceived_BidList_Parms
{
	int                                                nCurrency;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function APBUserInterface.cUIDataStore_Marketplace.CloseMarketplace
// [0x00020400] ( FUNC_Native )
struct UcUIDataStore_Marketplace_execCloseMarketplace_Parms
{
};

// Function APBUserInterface.cUIDataStore_Marketplace.OpenMarketplace
// [0x00020400] ( FUNC_Native )
struct UcUIDataStore_Marketplace_execOpenMarketplace_Parms
{
	struct FScriptDelegate                             ClosedCallback;                                   		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function APBUserInterface.cUIDataStore_Marketplace.MarketplaceClosed
// [0x00120000] 
struct UcUIDataStore_Marketplace_execMarketplaceClosed_Parms
{
};

// Function APBUserInterface.cUIAction_Mail_DetachCash.GetObjClassVersion
// [0x00022802] ( FUNC_Event )
struct UcUIAction_Mail_DetachCash_eventGetObjClassVersion_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIAction_Mail_DetachCash.OnCashDetached
// [0x00020400] ( FUNC_Native )
struct UcUIAction_Mail_DetachCash_execOnCashDetached_Parms
{
	int                                                nError;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function APBUserInterface.cUIAction_Mail_DetachItem.GetObjClassVersion
// [0x00022802] ( FUNC_Event )
struct UcUIAction_Mail_DetachItem_eventGetObjClassVersion_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIAction_Mail_DetachItem.OnItemDetached
// [0x00020400] ( FUNC_Native )
struct UcUIAction_Mail_DetachItem_execOnItemDetached_Parms
{
	int                                                nError;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function APBUserInterface.cUIAction_Mail_SendMessage.OnMailSendFailed
// [0x00020400] ( FUNC_Native )
struct UcUIAction_Mail_SendMessage_execOnMailSendFailed_Parms
{
	int                                                nError;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function APBUserInterface.cUIAction_Mail_SendMessage.OnMailSent
// [0x00020400] ( FUNC_Native )
struct UcUIAction_Mail_SendMessage_execOnMailSent_Parms
{
};

// Function APBUserInterface.cUIDataStore_Mail_Message.OnHostingDataChanged
// [0x00020400] ( FUNC_Native )
struct UcUIDataStore_Mail_Message_execOnHostingDataChanged_Parms
{
};

// Function APBUserInterface.cUIDataStore_Mail_MessageList.DoCheckForUnreadMail
// [0x00020802] ( FUNC_Event )
struct UcUIDataStore_Mail_MessageList_eventDoCheckForUnreadMail_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIDataStore_Mail_MessageList.SetCheckForUnreadMail
// [0x00020802] ( FUNC_Event )
struct UcUIDataStore_Mail_MessageList_eventSetCheckForUnreadMail_Parms
{
	unsigned long                                      bSet : 1;                                         		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function APBUserInterface.cUIDataStore_Mail_MessageList.ToggleMainScene
// [0x00020802] ( FUNC_Event )
struct UcUIDataStore_Mail_MessageList_eventToggleMainScene_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIDataStore_Mail_MessageList.CloseMainScene
// [0x00020802] ( FUNC_Event )
struct UcUIDataStore_Mail_MessageList_eventCloseMainScene_Parms
{
	// class UcUIGameSceneClient*                      pSceneClient;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function APBUserInterface.cUIDataStore_Mail_MessageList.OpenMainScene
// [0x00020802] ( FUNC_Event )
struct UcUIDataStore_Mail_MessageList_eventOpenMainScene_Parms
{
	struct FScriptDelegate                             Callback;                                         		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// class UcUIGameSceneClient*                      pSceneClient;                                     		// 0x000C (0x0004) [0x0000000000000000]              
	// unsigned long                                   bSuccess : 1;                                     		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function APBUserInterface.cUIDataStore_Mail_MessageList.RefreshCache
// [0x00020400] ( FUNC_Native )
struct UcUIDataStore_Mail_MessageList_execRefreshCache_Parms
{
};

// Function APBUserInterface.cUIDataStore_Mail_MessageList.UpdatePageWidgets
// [0x00020400] ( FUNC_Native )
struct UcUIDataStore_Mail_MessageList_execUpdatePageWidgets_Parms
{
};

// Function APBUserInterface.cUIDataStore_Mail_MessageList.OnKeyPress
// [0x00420400] ( FUNC_Native )
struct UcUIDataStore_Mail_MessageList_execOnKeyPress_Parms
{
	struct FInputEventParameters                       EventParms;                                       		// 0x0000 (0x0020) [0x0000000000000182]              ( CPF_Const | CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0020 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIDataStore_Mail_MessageList.UnregisterPlayerProfileCallback
// [0x00020400] ( FUNC_Native )
struct UcUIDataStore_Mail_MessageList_execUnregisterPlayerProfileCallback_Parms
{
};

// Function APBUserInterface.cUIDataStore_Mail_MessageList.RegisterPlayerProfileCallback
// [0x00020400] ( FUNC_Native )
struct UcUIDataStore_Mail_MessageList_execRegisterPlayerProfileCallback_Parms
{
};

// Function APBUserInterface.cUIDataStore_Mail_MessageList.OnPlayerProfileChanged
// [0x00020400] ( FUNC_Native )
struct UcUIDataStore_Mail_MessageList_execOnPlayerProfileChanged_Parms
{
};

// Function APBUserInterface.cUIDataStore_Mail_MessageList.OnMailInfoReceived
// [0x00020400] ( FUNC_Native )
struct UcUIDataStore_Mail_MessageList_execOnMailInfoReceived_Parms
{
	int                                                nUnread;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function APBUserInterface.cUIDataStore_Mail_MessageList.OnMailCleanup
// [0x00020400] ( FUNC_Native )
struct UcUIDataStore_Mail_MessageList_execOnMailCleanup_Parms
{
};

// Function APBUserInterface.cUIDataStore_Mail_MessageList.OnMailNotificationChanged
// [0x00020400] ( FUNC_Native )
struct UcUIDataStore_Mail_MessageList_execOnMailNotificationChanged_Parms
{
};

// Function APBUserInterface.cUIDataStore_Mail_MessageList.OnMessageDeleted
// [0x00020400] ( FUNC_Native )
struct UcUIDataStore_Mail_MessageList_execOnMessageDeleted_Parms
{
};

// Function APBUserInterface.cUIDataStore_Mail_MessageList.OnMailListDetailsChanged
// [0x00020400] ( FUNC_Native )
struct UcUIDataStore_Mail_MessageList_execOnMailListDetailsChanged_Parms
{
};

// Function APBUserInterface.cUIDataStore_Mail_MessageList.OnMailListChanged
// [0x00020400] ( FUNC_Native )
struct UcUIDataStore_Mail_MessageList_execOnMailListChanged_Parms
{
};

// Function APBUserInterface.cUIDataStore_Mail_MessageList.GetTotalPages
// [0x00020C00] ( FUNC_Event | FUNC_Native )
struct UcUIDataStore_Mail_MessageList_eventGetTotalPages_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIDataStore_Mail_MessageList.SetCurrentPage
// [0x00020C00] ( FUNC_Event | FUNC_Native )
struct UcUIDataStore_Mail_MessageList_eventSetCurrentPage_Parms
{
	int                                                nPage;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIDataStore_Mail_MessageList.GetCurrentPage
// [0x00020C00] ( FUNC_Event | FUNC_Native )
struct UcUIDataStore_Mail_MessageList_eventGetCurrentPage_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIDataStore_Mail_MessageList.SetOrdering
// [0x00020C00] ( FUNC_Event | FUNC_Native )
struct UcUIDataStore_Mail_MessageList_eventSetOrdering_Parms
{
	struct FName                                       Ordering;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIDataStore_Mail_MessageList.MainScene_CloseCallback
// [0x00120000] 
struct UcUIDataStore_Mail_MessageList_execMainScene_CloseCallback_Parms
{
};

// Function APBUserInterface.cUIAction_Soc_GetSelectedGroupList.OnGetGroupInfoFailure
// [0x00020400] ( FUNC_Native )
struct UcUIAction_Soc_GetSelectedGroupList_execOnGetGroupInfoFailure_Parms
{
	int                                                nError;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     sGroupLeaderName;                                 		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function APBUserInterface.cUIAction_Soc_GetSelectedGroupList.OnGetGroupInfoSuccess
// [0x00020400] ( FUNC_Native )
struct UcUIAction_Soc_GetSelectedGroupList_execOnGetGroupInfoSuccess_Parms
{
	struct FString                                     sGroupLeaderName;                                 		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function APBUserInterface.cUIAction_Soc_JoinGroup.OnGroupJoinFailure
// [0x00020400] ( FUNC_Native )
struct UcUIAction_Soc_JoinGroup_execOnGroupJoinFailure_Parms
{
	int                                                nError;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     sGroupLeaderName;                                 		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function APBUserInterface.cUIAction_Soc_JoinGroup.OnGroupJoinSuccess
// [0x00020400] ( FUNC_Native )
struct UcUIAction_Soc_JoinGroup_execOnGroupJoinSuccess_Parms
{
	struct FString                                     sGroupLeaderName;                                 		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function APBUserInterface.cUIAction_Soc_SetGroupInvitePermissions.OnRequestFailed
// [0x00020400] ( FUNC_Native )
struct UcUIAction_Soc_SetGroupInvitePermissions_execOnRequestFailed_Parms
{
	int                                                nError;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function APBUserInterface.cUIAction_Soc_SetGroupInvitePermissions.OnRequestSent
// [0x00020400] ( FUNC_Native )
struct UcUIAction_Soc_SetGroupInvitePermissions_execOnRequestSent_Parms
{
};

// Function APBUserInterface.cUIAction_Soc_SetPublicGroup.OnRequestFailed
// [0x00020400] ( FUNC_Native )
struct UcUIAction_Soc_SetPublicGroup_execOnRequestFailed_Parms
{
	int                                                nError;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function APBUserInterface.cUIAction_Soc_SetPublicGroup.OnRequestSent
// [0x00020400] ( FUNC_Native )
struct UcUIAction_Soc_SetPublicGroup_execOnRequestSent_Parms
{
};

// Function APBUserInterface.cUIDataStore_Soc_FindList.CharacterGetInfoFailure
// [0x00020400] ( FUNC_Native )
struct UcUIDataStore_Soc_FindList_execCharacterGetInfoFailure_Parms
{
	int                                                nError;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     sCharacterName;                                   		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function APBUserInterface.cUIDataStore_Soc_FindList.CharacterGetInfoSuccess
// [0x00020400] ( FUNC_Native )
struct UcUIDataStore_Soc_FindList_execCharacterGetInfoSuccess_Parms
{
	int                                                nCharacterUID;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nDistrictUID;                                     		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nInstanceNo;                                      		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      eFaction;                                         		// 0x000C (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     sCharacterName;                                   		// 0x0010 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function APBUserInterface.cUIDataStore_Soc_FriendList.NotifyGameSessionEnded
// [0x00020002] 
struct UcUIDataStore_Soc_FriendList_execNotifyGameSessionEnded_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIDataStore_Soc_FriendList.UnregisterCallbacks
// [0x00020400] ( FUNC_Native )
struct UcUIDataStore_Soc_FriendList_execUnregisterCallbacks_Parms
{
};

// Function APBUserInterface.cUIDataStore_Soc_FriendList.SetOrdering
// [0x00020C00] ( FUNC_Event | FUNC_Native )
struct UcUIDataStore_Soc_FriendList_eventSetOrdering_Parms
{
	struct FName                                       Ordering;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIDataStore_Soc_FriendList.OnDataChanged
// [0x00020400] ( FUNC_Native )
struct UcUIDataStore_Soc_FriendList_execOnDataChanged_Parms
{
};

// Function APBUserInterface.cUIDataStore_Soc_GroupList.NotifyGameSessionEnded
// [0x00020002] 
struct UcUIDataStore_Soc_GroupList_execNotifyGameSessionEnded_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIDataStore_Soc_GroupList.UnregisterCallbacks
// [0x00020400] ( FUNC_Native )
struct UcUIDataStore_Soc_GroupList_execUnregisterCallbacks_Parms
{
};

// Function APBUserInterface.cUIDataStore_Soc_GroupList.OnDataChanged
// [0x00020400] ( FUNC_Native )
struct UcUIDataStore_Soc_GroupList_execOnDataChanged_Parms
{
};

// Function APBUserInterface.cUIDataStore_Soc_PublicGroupsList.NotifyGameSessionEnded
// [0x00020002] 
struct UcUIDataStore_Soc_PublicGroupsList_execNotifyGameSessionEnded_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIDataStore_Soc_PublicGroupsList.NotifyGameSessionEndedNative
// [0x00020400] ( FUNC_Native )
struct UcUIDataStore_Soc_PublicGroupsList_execNotifyGameSessionEndedNative_Parms
{
};

// Function APBUserInterface.cUIDataStore_Soc_PublicGroupsList.OnGetGroupListFailure
// [0x00040401] ( FUNC_Final | FUNC_Native )
struct UcUIDataStore_Soc_PublicGroupsList_execOnGetGroupListFailure_Parms
{
	int                                                nDistrictUID;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nInstanceNo;                                      		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function APBUserInterface.cUIDataStore_Soc_PublicGroupsList.OnGetGroupListSuccess
// [0x00040401] ( FUNC_Final | FUNC_Native )
struct UcUIDataStore_Soc_PublicGroupsList_execOnGetGroupListSuccess_Parms
{
	int                                                nDistrictUID;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nInstanceNo;                                      		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function APBUserInterface.cUIDataStore_Soc_SideList.NotifyGameSessionEnded
// [0x00020002] 
struct UcUIDataStore_Soc_SideList_execNotifyGameSessionEnded_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIDataStore_Soc_SideList.UnregisterCallbacks
// [0x00020400] ( FUNC_Native )
struct UcUIDataStore_Soc_SideList_execUnregisterCallbacks_Parms
{
};

// Function APBUserInterface.cUIDataStore_Soc_SideList.OnDataChanged
// [0x00020400] ( FUNC_Native )
struct UcUIDataStore_Soc_SideList_execOnDataChanged_Parms
{
};

// Function APBUserInterface.cUIDataStore_Soc_TeamList.NotifyGameSessionEnded
// [0x00020002] 
struct UcUIDataStore_Soc_TeamList_execNotifyGameSessionEnded_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIDataStore_Soc_TeamList.UnregisterCallbacks
// [0x00020400] ( FUNC_Native )
struct UcUIDataStore_Soc_TeamList_execUnregisterCallbacks_Parms
{
};

// Function APBUserInterface.cUIDataStore_Soc_TeamList.SetOrdering
// [0x00020C00] ( FUNC_Event | FUNC_Native )
struct UcUIDataStore_Soc_TeamList_eventSetOrdering_Parms
{
	struct FName                                       Ordering;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIDataStore_Soc_TeamList.OnDataChanged
// [0x00020400] ( FUNC_Native )
struct UcUIDataStore_Soc_TeamList_execOnDataChanged_Parms
{
};

// Function APBUserInterface.cUIAction_DisplayPrimitiveSelector.nativeOnBoxClosed
// [0x00020400] ( FUNC_Native )
struct UcUIAction_DisplayPrimitiveSelector_execnativeOnBoxClosed_Parms
{
	unsigned char                                      eResult;                                          		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function APBUserInterface.cUIAction_DisplayPrimitiveSelector.OnBoxClosed
// [0x00020002] 
struct UcUIAction_DisplayPrimitiveSelector_execOnBoxClosed_Parms
{
	unsigned char                                      eResult;                                          		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bDisableMessage : 1;                              		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function APBUserInterface.cUIAction_SE_StoreSymbol.OnItemCustomisationChanged
// [0x00020400] ( FUNC_Native )
struct UcUIAction_SE_StoreSymbol_execOnItemCustomisationChanged_Parms
{
	class AActor*                                      pItemCustomisation;                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function APBUserInterface.cUIDataStore_SymbolEditor.GetMaxNumLayers
// [0x00020400] ( FUNC_Native )
struct UcUIDataStore_SymbolEditor_execGetMaxNumLayers_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIDataStore_SymbolEditor.GetNumLayers
// [0x00020400] ( FUNC_Native )
struct UcUIDataStore_SymbolEditor_execGetNumLayers_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIDataStore_SymbolEditor.ClearUndoSlots
// [0x00020400] ( FUNC_Native )
struct UcUIDataStore_SymbolEditor_execClearUndoSlots_Parms
{
};

// Function APBUserInterface.cUIDataStore_SymbolEditor.PopRedoSlot
// [0x00020400] ( FUNC_Native )
struct UcUIDataStore_SymbolEditor_execPopRedoSlot_Parms
{
};

// Function APBUserInterface.cUIDataStore_SymbolEditor.PopUndoSlot
// [0x00020400] ( FUNC_Native )
struct UcUIDataStore_SymbolEditor_execPopUndoSlot_Parms
{
};

// Function APBUserInterface.cUIDataStore_SymbolEditor.PushUndoSlot
// [0x00020400] ( FUNC_Native )
struct UcUIDataStore_SymbolEditor_execPushUndoSlot_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIDataStore_SymbolEditor.OnKeyPress
// [0x00420400] ( FUNC_Native )
struct UcUIDataStore_SymbolEditor_execOnKeyPress_Parms
{
	struct FInputEventParameters                       EventParms;                                       		// 0x0000 (0x0020) [0x0000000000000182]              ( CPF_Const | CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0020 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUI_Gecko_Widget.OnScrollBarSpaceClicked
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UcUI_Gecko_Widget_execOnScrollBarSpaceClicked_Parms
{
	class UUIScrollbar*                                Sender;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              PositionPerc;                                     		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                PlayerIndex;                                      		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function APBUserInterface.cUI_Gecko_Widget.OnScrollBarMoved
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UcUI_Gecko_Widget_execOnScrollBarMoved_Parms
{
	class UUIScrollbar*                                Sender;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              PositionChange;                                   		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bPositionMaxed : 1;                               		// 0x0008 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIDataStore_Music_PlaylistList.NativeNotifyGameSessionEnded
// [0x00020400] ( FUNC_Native )
struct UcUIDataStore_Music_PlaylistList_execNativeNotifyGameSessionEnded_Parms
{
};

// Function APBUserInterface.cUIDataStore_Music_PlaylistList.NotifyGameSessionEnded
// [0x00020002] 
struct UcUIDataStore_Music_PlaylistList_execNotifyGameSessionEnded_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIDataStore_Music_TrackList.OnItemCreatorNameCacheUpdated
// [0x00040003] ( FUNC_Final )
struct UcUIDataStore_Music_TrackList_execOnItemCreatorNameCacheUpdated_Parms
{
};

// Function APBUserInterface.cUIDataStore_MusicStudio.NotifyGameSessionEnded
// [0x00020002] 
struct UcUIDataStore_MusicStudio_execNotifyGameSessionEnded_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIDataStore_MusicStudio.FreeMusicStudioResources
// [0x00040401] ( FUNC_Final | FUNC_Native )
struct UcUIDataStore_MusicStudio_execFreeMusicStudioResources_Parms
{
};

// Function APBUserInterface.cUIDataStore_MusicStudio.SwapTrackDSP
// [0x00020400] ( FUNC_Native )
struct UcUIDataStore_MusicStudio_execSwapTrackDSP_Parms
{
	int                                                nTrackIndex;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nDspIndex1;                                       		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nDspIndex2;                                       		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIDataStore_MusicStudio.InsertTrackDSP
// [0x00420400] ( FUNC_Native )
struct UcUIDataStore_MusicStudio_execInsertTrackDSP_Parms
{
	int                                                nTrackIndex;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nDspType;                                         		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nAtIndex;                                         		// 0x0008 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIDataStore_MusicStudio.DeleteTrackDSP
// [0x00020400] ( FUNC_Native )
struct UcUIDataStore_MusicStudio_execDeleteTrackDSP_Parms
{
	int                                                nTrackIndex;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nDspIndex;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIDataStore_MusicStudio.GetInstance_
// [0x00022400] ( FUNC_Native )
struct UcUIDataStore_MusicStudio_execGetInstance__Parms
{
	class UcUIDataStore_MusicStudio*                   ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIMSAction_AddPattern.IsValidUISequenceObject
// [0x00020802] ( FUNC_Event )
struct UcUIMSAction_AddPattern_eventIsValidUISequenceObject_Parms
{
	class UUIScreenObject*                             TargetObject;                                     		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIMSAction_AddTabPage.IsValidUISequenceObject
// [0x00020802] ( FUNC_Event )
struct UcUIMSAction_AddTabPage_eventIsValidUISequenceObject_Parms
{
	class UUIScreenObject*                             TargetObject;                                     		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIMSAction_AddTrack.IsValidUISequenceObject
// [0x00020802] ( FUNC_Event )
struct UcUIMSAction_AddTrack_eventIsValidUISequenceObject_Parms
{
	class UUIScreenObject*                             TargetObject;                                     		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIMSAction_DataStoreCreateEmptyTheme.IsValidUISequenceObject
// [0x00020802] ( FUNC_Event )
struct UcUIMSAction_DataStoreCreateEmptyTheme_eventIsValidUISequenceObject_Parms
{
	class UUIScreenObject*                             TargetObject;                                     		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIMSAction_DataStoreLoadSaveFromFile.IsValidUISequenceObject
// [0x00020802] ( FUNC_Event )
struct UcUIMSAction_DataStoreLoadSaveFromFile_eventIsValidUISequenceObject_Parms
{
	class UUIScreenObject*                             TargetObject;                                     		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIMSAction_DataStoreLoadThemeFromInventory.IsValidUISequenceObject
// [0x00020802] ( FUNC_Event )
struct UcUIMSAction_DataStoreLoadThemeFromInventory_eventIsValidUISequenceObject_Parms
{
	class UUIScreenObject*                             TargetObject;                                     		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIMSAction_DataStorePlayTheme.IsValidUISequenceObject
// [0x00020802] ( FUNC_Event )
struct UcUIMSAction_DataStorePlayTheme_eventIsValidUISequenceObject_Parms
{
	class UUIScreenObject*                             TargetObject;                                     		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIMSAction_DataStoreSaveThemeToInventory.OnSuccess
// [0x00020400] ( FUNC_Native )
struct UcUIMSAction_DataStoreSaveThemeToInventory_execOnSuccess_Parms
{
};

// Function APBUserInterface.cUIMSAction_DeletePattern.IsValidUISequenceObject
// [0x00020802] ( FUNC_Event )
struct UcUIMSAction_DeletePattern_eventIsValidUISequenceObject_Parms
{
	class UUIScreenObject*                             TargetObject;                                     		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIMSAction_DeleteTrack.IsValidUISequenceObject
// [0x00020802] ( FUNC_Event )
struct UcUIMSAction_DeleteTrack_eventIsValidUISequenceObject_Parms
{
	class UUIScreenObject*                             TargetObject;                                     		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIMSAction_FlushInstruments.IsValidUISequenceObject
// [0x00020802] ( FUNC_Event )
struct UcUIMSAction_FlushInstruments_eventIsValidUISequenceObject_Parms
{
	class UUIScreenObject*                             TargetObject;                                     		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIMSAction_FlushThemeCache.IsValidUISequenceObject
// [0x00020802] ( FUNC_Event )
struct UcUIMSAction_FlushThemeCache_eventIsValidUISequenceObject_Parms
{
	class UUIScreenObject*                             TargetObject;                                     		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIMSAction_FreeMusicStudioResources.IsValidUISequenceObject
// [0x00020802] ( FUNC_Event )
struct UcUIMSAction_FreeMusicStudioResources_eventIsValidUISequenceObject_Parms
{
	class UUIScreenObject*                             TargetObject;                                     		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIMSAction_GetOperatingContext.IsValidUISequenceObject
// [0x00020802] ( FUNC_Event )
struct UcUIMSAction_GetOperatingContext_eventIsValidUISequenceObject_Parms
{
	class UUIScreenObject*                             TargetObject;                                     		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIMSAction_GetTrackPatternName.IsValidUISequenceObject
// [0x00020802] ( FUNC_Event )
struct UcUIMSAction_GetTrackPatternName_eventIsValidUISequenceObject_Parms
{
	class UUIScreenObject*                             TargetObject;                                     		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIMSAction_IsInventoryFull.IsValidUISequenceObject
// [0x00020802] ( FUNC_Event )
struct UcUIMSAction_IsInventoryFull_eventIsValidUISequenceObject_Parms
{
	class UUIScreenObject*                             TargetObject;                                     		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIMSAction_LiveModeEndPerformance.IsValidUISequenceObject
// [0x00020802] ( FUNC_Event )
struct UcUIMSAction_LiveModeEndPerformance_eventIsValidUISequenceObject_Parms
{
	class UUIScreenObject*                             TargetObject;                                     		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIMSAction_LiveModeSetSong.IsValidUISequenceObject
// [0x00020802] ( FUNC_Event )
struct UcUIMSAction_LiveModeSetSong_eventIsValidUISequenceObject_Parms
{
	class UUIScreenObject*                             TargetObject;                                     		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIMSAction_LiveModeStartPerformance.IsValidUISequenceObject
// [0x00020802] ( FUNC_Event )
struct UcUIMSAction_LiveModeStartPerformance_eventIsValidUISequenceObject_Parms
{
	class UUIScreenObject*                             TargetObject;                                     		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIMSAction_LoadInstrument.IsValidUISequenceObject
// [0x00020802] ( FUNC_Event )
struct UcUIMSAction_LoadInstrument_eventIsValidUISequenceObject_Parms
{
	class UUIScreenObject*                             TargetObject;                                     		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIMSAction_PlayCachedTheme.IsValidUISequenceObject
// [0x00020802] ( FUNC_Event )
struct UcUIMSAction_PlayCachedTheme_eventIsValidUISequenceObject_Parms
{
	class UUIScreenObject*                             TargetObject;                                     		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIMSAction_PlayThemeByGuid.IsValidUISequenceObject
// [0x00020802] ( FUNC_Event )
struct UcUIMSAction_PlayThemeByGuid_eventIsValidUISequenceObject_Parms
{
	class UUIScreenObject*                             TargetObject;                                     		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIMSAction_ProcessContextOption.IsValidUISequenceObject
// [0x00020802] ( FUNC_Event )
struct UcUIMSAction_ProcessContextOption_eventIsValidUISequenceObject_Parms
{
	class UUIScreenObject*                             TargetObject;                                     		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIMSAction_ProcessRawMidiSequence.IsValidUISequenceObject
// [0x00020802] ( FUNC_Event )
struct UcUIMSAction_ProcessRawMidiSequence_eventIsValidUISequenceObject_Parms
{
	class UUIScreenObject*                             TargetObject;                                     		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIMSAction_RefreshPianoNoteRange.IsValidUISequenceObject
// [0x00020802] ( FUNC_Event )
struct UcUIMSAction_RefreshPianoNoteRange_eventIsValidUISequenceObject_Parms
{
	class UUIScreenObject*                             TargetObject;                                     		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIMSAction_RefreshTrackPattern.IsValidUISequenceObject
// [0x00020802] ( FUNC_Event )
struct UcUIMSAction_RefreshTrackPattern_eventIsValidUISequenceObject_Parms
{
	class UUIScreenObject*                             TargetObject;                                     		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIMSAction_RemoveTabPage.IsValidUISequenceObject
// [0x00020802] ( FUNC_Event )
struct UcUIMSAction_RemoveTabPage_eventIsValidUISequenceObject_Parms
{
	class UUIScreenObject*                             TargetObject;                                     		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIMSAction_SetAnimatorTrack.IsValidUISequenceObject
// [0x00020802] ( FUNC_Event )
struct UcUIMSAction_SetAnimatorTrack_eventIsValidUISequenceObject_Parms
{
	class UUIScreenObject*                             TargetObject;                                     		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIMSAction_SetGridScrollPosition.IsValidUISequenceObject
// [0x00020802] ( FUNC_Event )
struct UcUIMSAction_SetGridScrollPosition_eventIsValidUISequenceObject_Parms
{
	class UUIScreenObject*                             TargetObject;                                     		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIMSAction_SetNoteEditorPattern.IsValidUISequenceObject
// [0x00020802] ( FUNC_Event )
struct UcUIMSAction_SetNoteEditorPattern_eventIsValidUISequenceObject_Parms
{
	class UUIScreenObject*                             TargetObject;                                     		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIMSAction_SetOperatingContext.IsValidUISequenceObject
// [0x00020802] ( FUNC_Event )
struct UcUIMSAction_SetOperatingContext_eventIsValidUISequenceObject_Parms
{
	class UUIScreenObject*                             TargetObject;                                     		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIMSAction_SetPianoKeyboardTrack.IsValidUISequenceObject
// [0x00020802] ( FUNC_Event )
struct UcUIMSAction_SetPianoKeyboardTrack_eventIsValidUISequenceObject_Parms
{
	class UUIScreenObject*                             TargetObject;                                     		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIMSAction_SetPianoParameters.IsValidUISequenceObject
// [0x00020802] ( FUNC_Event )
struct UcUIMSAction_SetPianoParameters_eventIsValidUISequenceObject_Parms
{
	class UUIScreenObject*                             TargetObject;                                     		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIMSAction_SetTrackPatternName.IsValidUISequenceObject
// [0x00020802] ( FUNC_Event )
struct UcUIMSAction_SetTrackPatternName_eventIsValidUISequenceObject_Parms
{
	class UUIScreenObject*                             TargetObject;                                     		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIMSAction_SetTrackPatternSelection.IsValidUISequenceObject
// [0x00020802] ( FUNC_Event )
struct UcUIMSAction_SetTrackPatternSelection_eventIsValidUISequenceObject_Parms
{
	class UUIScreenObject*                             TargetObject;                                     		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIMSAction_SoloTrack.IsValidUISequenceObject
// [0x00020802] ( FUNC_Event )
struct UcUIMSAction_SoloTrack_eventIsValidUISequenceObject_Parms
{
	class UUIScreenObject*                             TargetObject;                                     		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIMSAction_StopAllThemes.IsValidUISequenceObject
// [0x00020802] ( FUNC_Event )
struct UcUIMSAction_StopAllThemes_eventIsValidUISequenceObject_Parms
{
	class UUIScreenObject*                             TargetObject;                                     		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIMSAction_StopCachedTheme.IsValidUISequenceObject
// [0x00020802] ( FUNC_Event )
struct UcUIMSAction_StopCachedTheme_eventIsValidUISequenceObject_Parms
{
	class UUIScreenObject*                             TargetObject;                                     		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIMSAction_Track_Sequencer.IsValidUISequenceObject
// [0x00020802] ( FUNC_Event )
struct UcUIMSAction_Track_Sequencer_eventIsValidUISequenceObject_Parms
{
	class UUIScreenObject*                             TargetObject;                                     		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIMSAction_UnlockInstruments.IsValidUISequenceObject
// [0x00020802] ( FUNC_Event )
struct UcUIMSAction_UnlockInstruments_eventIsValidUISequenceObject_Parms
{
	class UUIScreenObject*                             TargetObject;                                     		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIMSGrid.OnClickedScrollZone
// [0x00040C01] ( FUNC_Final | FUNC_Event | FUNC_Native )
struct UcUIMSGrid_eventOnClickedScrollZone_Parms
{
	class UUIScrollbar*                                Sender;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              PositionPerc;                                     		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                PlayerIndex;                                      		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function APBUserInterface.cUIMSGrid.OnScrollActivity
// [0x00040C01] ( FUNC_Final | FUNC_Event | FUNC_Native )
struct UcUIMSGrid_eventOnScrollActivity_Parms
{
	class UUIScrollbar*                                Sender;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              PositionChange;                                   		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bPositionMaxed : 1;                               		// 0x0008 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIMSDSPContainer.ShowPage
// [0x00020400] ( FUNC_Native )
struct UcUIMSDSPContainer_execShowPage_Parms
{
	int                                                nPageIndex;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function APBUserInterface.cUIMSDSPContainer.RemoveDSPAtIndex
// [0x00020002] 
struct UcUIMSDSPContainer_execRemoveDSPAtIndex_Parms
{
	int                                                nPageIndex;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nDspIndex;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class UcUIMSDSPPage*                            pPage;                                            		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function APBUserInterface.cUIMSDSPContainer.RemoveAllDSPs
// [0x00020002] 
struct UcUIMSDSPContainer_execRemoveAllDSPs_Parms
{
	// class UcUIMSDSPPage*                            pPage;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function APBUserInterface.cUIMSDSPContainer.AddDSP
// [0x00020002] 
struct UcUIMSDSPContainer_execAddDSP_Parms
{
	int                                                nPageIndex;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nDspType;                                         		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class UcUIMSDSPPage*                            pPage;                                            		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function APBUserInterface.cUIMSDSPContainer.RemoveAllPages
// [0x00020802] ( FUNC_Event )
struct UcUIMSDSPContainer_eventRemoveAllPages_Parms
{
};

// Function APBUserInterface.cUIMSDSPContainer.RemovePage
// [0x00020802] ( FUNC_Event )
struct UcUIMSDSPContainer_eventRemovePage_Parms
{
	int                                                nPageIndex;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class UcUIMSDSPPage*                            pPage;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
	// unsigned long                                   bRes : 1;                                         		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function APBUserInterface.cUIMSDSPContainer.GetDSPPage
// [0x00040003] ( FUNC_Final )
struct UcUIMSDSPContainer_execGetDSPPage_Parms
{
	int                                                nPageIndex;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UcUIMSDSPPage*                               ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIMSDSPContainer.AddPage
// [0x00020802] ( FUNC_Event )
struct UcUIMSDSPContainer_eventAddPage_Parms
{
	// class UcUIMSDSPPage*                            pPage;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function APBUserInterface.cUIMSDSPContainer.RecreatePages
// [0x00020400] ( FUNC_Native )
struct UcUIMSDSPContainer_execRecreatePages_Parms
{
};

// Function APBUserInterface.cUIMSDSPContainer.SetDSPDebugShowBounds
// [0x00020802] ( FUNC_Event )
struct UcUIMSDSPContainer_eventSetDSPDebugShowBounds_Parms
{
	unsigned long                                      bEnabled : 1;                                     		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	// class UcUIMSDSPPage*                            pPage;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function APBUserInterface.cUIMSDSPPage.SetDebugShowBounds
// [0x00042401] ( FUNC_Final | FUNC_Native )
struct UcUIMSDSPPage_execSetDebugShowBounds_Parms
{
	class UUIObject*                                   pObj;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bEnabled : 1;                                     		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function APBUserInterface.cUIMSDSPPage.ResolveAllStyles
// [0x00042401] ( FUNC_Final | FUNC_Native )
struct UcUIMSDSPPage_execResolveAllStyles_Parms
{
	class UUIObject*                                   pObj;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function APBUserInterface.cUIMSDSPPage.UpdateStyleFromParent
// [0x00042401] ( FUNC_Final | FUNC_Native )
struct UcUIMSDSPPage_execUpdateStyleFromParent_Parms
{
	struct FString                                     sParentStyleTag;                                  		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     sStyleName;                                       		// 0x000C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function APBUserInterface.cUIMSDSPPage.ChangeWidgetStyle
// [0x00042401] ( FUNC_Final | FUNC_Native )
struct UcUIMSDSPPage_execChangeWidgetStyle_Parms
{
	class UUIObject*                                   pObj;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     sResolverTag;                                     		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     sStyle;                                           		// 0x0010 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                ArrayIndex;                                       		// 0x001C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function APBUserInterface.cUIMSDSPPage.SetPanelStyle
// [0x00022002] 
struct UcUIMSDSPPage_execSetPanelStyle_Parms
{
	class UUIPanel*                                    pObj;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     sStyleName;                                       		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function APBUserInterface.cUIMSDSPPage.SetButtonStyle
// [0x00022002] 
struct UcUIMSDSPPage_execSetButtonStyle_Parms
{
	class UUIButton*                                   pObj;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     sStyleName;                                       		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function APBUserInterface.cUIMSDSPPage.SetTrackIndex
// [0x00020802] ( FUNC_Event )
struct UcUIMSDSPPage_eventSetTrackIndex_Parms
{
	int                                                nTrackIndex;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function APBUserInterface.cUIMSDSPPage.UpdateAllMarkupText
// [0x00020002] 
struct UcUIMSDSPPage_execUpdateAllMarkupText_Parms
{
	// int                                             I;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function APBUserInterface.cUIMSDSPPage.UpdateDSPMarkupText
// [0x00020400] ( FUNC_Native )
struct UcUIMSDSPPage_execUpdateDSPMarkupText_Parms
{
	int                                                nDspIndex;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function APBUserInterface.cUIMSDSPPage.RecreateDSPs
// [0x00020400] ( FUNC_Native )
struct UcUIMSDSPPage_execRecreateDSPs_Parms
{
};

// Function APBUserInterface.cUIMSDSPPage.NotifyPreRemove
// [0x00020002] 
struct UcUIMSDSPPage_execNotifyPreRemove_Parms
{
	// TArray< class UUIObject* >                      aCh;                                              		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// class UUIObject*                                obj;                                              		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function APBUserInterface.cUIMSDSPPage.NotifyAdded
// [0x00020002] 
struct UcUIMSDSPPage_execNotifyAdded_Parms
{
	int                                                nPageIndex;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function APBUserInterface.cUIMSDSPPage.SetDSPDebugShowBounds
// [0x00820002] 
struct UcUIMSDSPPage_execSetDSPDebugShowBounds_Parms
{
	unsigned long                                      bEnabled : 1;                                     		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	// struct FUIMSDspInfo                             Info;                                             		// 0x0004 (0x0034) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function APBUserInterface.cUIMSDSPPage.RemoveDSPAtIndex
// [0x00020002] 
struct UcUIMSDSPPage_execRemoveDSPAtIndex_Parms
{
	int                                                nDspIndex;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class UUIObject*                                obj;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
	// unsigned long                                   B : 1;                                            		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function APBUserInterface.cUIMSDSPPage.RemoveAllDSPs
// [0x00020802] ( FUNC_Event )
struct UcUIMSDSPPage_eventRemoveAllDSPs_Parms
{
	// class UUIObject*                                obj;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
	// unsigned long                                   bRes : 1;                                         		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function APBUserInterface.cUIMSDSPPage.AddDSP
// [0x00820802] ( FUNC_Event )
struct UcUIMSDSPPage_eventAddDSP_Parms
{
	int                                                nDspType;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FUIMSDspInfo                             Info;                                             		// 0x0004 (0x0034) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function APBUserInterface.cUIMSDSPPage.CreateDSPControls
// [0x00440003] ( FUNC_Final )
struct UcUIMSDSPPage_execCreateDSPControls_Parms
{
	int                                                nDspType;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FUIMSDspInfo                                Info;                                             		// 0x0004 (0x0034) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function APBUserInterface.cUIMSDSPPage.DeleteDSPControlsPanel
// [0x00040003] ( FUNC_Final )
struct UcUIMSDSPPage_execDeleteDSPControlsPanel_Parms
{
	int                                                nDspIndex;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// TArray< class UUIObject* >                      aCh;                                              		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// class UUIObject*                                obj;                                              		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function APBUserInterface.cUIMSDSPPage.CreateDSP_LowPassFilter
// [0x00440003] ( FUNC_Final )
struct UcUIMSDSPPage_execCreateDSP_LowPassFilter_Parms
{
	struct FUIMSDspInfo                                Info;                                             		// 0x0000 (0x0034) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function APBUserInterface.cUIMSDSPPage.CreateDSP_Delay
// [0x00440003] ( FUNC_Final )
struct UcUIMSDSPPage_execCreateDSP_Delay_Parms
{
	struct FUIMSDspInfo                                Info;                                             		// 0x0000 (0x0034) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function APBUserInterface.cUIMSDSPPage.CreateDSPPanel_Empty
// [0x00440003] ( FUNC_Final )
struct UcUIMSDSPPage_execCreateDSPPanel_Empty_Parms
{
	struct FUIMSDspInfo                                Info;                                             		// 0x0000 (0x0034) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0034 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class UUIComboBox*                              pComboBox;                                        		// 0x0038 (0x0004) [0x0000000000000000]              
};

// Function APBUserInterface.cUIMSDSPPage.CreateKnobControl
// [0x00440003] ( FUNC_Final )
struct UcUIMSDSPPage_execCreateKnobControl_Parms
{
	struct FUIMSDspInfo                                Info;                                             		// 0x0000 (0x0034) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	struct FString                                     sTitle;                                           		// 0x0034 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                nParameterIndex;                                  		// 0x0040 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              fWidthPerc;                                       		// 0x0044 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              fHeightPerc;                                      		// 0x0048 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class UUIPanel*                                 pPanel;                                           		// 0x004C (0x0004) [0x0000000000000000]              
	// class UcUIMSKnob*                               pKnob;                                            		// 0x0050 (0x0004) [0x0000000000000000]              
	// class UUILabel*                                 pTitle;                                           		// 0x0054 (0x0004) [0x0000000000000000]              
};

// Function APBUserInterface.cUIMSDSPPage.CreateDSPPanel_Top
// [0x00440003] ( FUNC_Final )
struct UcUIMSDSPPage_execCreateDSPPanel_Top_Parms
{
	struct FUIMSDspInfo                                Info;                                             		// 0x0000 (0x0034) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	int                                                nDspType;                                         		// 0x0034 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0038 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// float                                           fHeight;                                          		// 0x003C (0x0004) [0x0000000000000000]              
	// struct FString                                  dspName;                                          		// 0x0040 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function APBUserInterface.cUIMSDSPPage.CreateParameterBinding
// [0x00C40003] ( FUNC_Final )
struct UcUIMSDSPPage_execCreateParameterBinding_Parms
{
	struct FUIMSDspInfo                                Info;                                             		// 0x0000 (0x0034) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	class UUIScreenObject*                             pObj;                                             		// 0x0034 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nParameterIndex;                                  		// 0x0038 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bONParameter : 1;                                 		// 0x003C (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	// struct FUIMSDspParameterBinding                 binding;                                          		// 0x0040 (0x0010) [0x0000000000000000]              
};

// Function APBUserInterface.cUIMSDSPPage.SetWidgetPositionsPixels
// [0x00022002] 
struct UcUIMSDSPPage_execSetWidgetPositionsPixels_Parms
{
	class UUIObject*                                   pObj;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              fLeft;                                            		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              fTop;                                             		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              fRight;                                           		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              fBottom;                                          		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function APBUserInterface.cUIMSDSPPage.SetWidgetPositions
// [0x00022002] 
struct UcUIMSDSPPage_execSetWidgetPositions_Parms
{
	class UUIObject*                                   pObj;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              fLeft;                                            		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              fTop;                                             		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              fRight;                                           		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              fBottom;                                          		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function APBUserInterface.cUIMSDSPPage.FindDSPIndex
// [0x00440003] ( FUNC_Final )
struct UcUIMSDSPPage_execFindDSPIndex_Parms
{
	class UUIScreenObject*                             pObjToLookFor;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nDspIndex;                                        		// 0x0004 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             I;                                                		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function APBUserInterface.cUIMSDSPPage.OnEnableDSP
// [0x00040003] ( FUNC_Final )
struct UcUIMSDSPPage_execOnEnableDSP_Parms
{
	class UUIScreenObject*                             EventObject;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                PlayerIndex;                                      		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class UUICheckbox*                              pChk;                                             		// 0x000C (0x0004) [0x0000000000000000]              
	// TArray< class UUIDataStore* >                   out_BoundDataStores;                              		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function APBUserInterface.cUIMSDSPPage.OnMoveDSPRight
// [0x00040003] ( FUNC_Final )
struct UcUIMSDSPPage_execOnMoveDSPRight_Parms
{
	class UUIScreenObject*                             EventObject;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                PlayerIndex;                                      		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIMSDSPPage.OnMoveDSPLeft
// [0x00040003] ( FUNC_Final )
struct UcUIMSDSPPage_execOnMoveDSPLeft_Parms
{
	class UUIScreenObject*                             EventObject;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                PlayerIndex;                                      		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIMSDSPPage.OnRemoveDSP
// [0x00040003] ( FUNC_Final )
struct UcUIMSDSPPage_execOnRemoveDSP_Parms
{
	class UUIScreenObject*                             EventObject;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                PlayerIndex;                                      		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             nDspIndex;                                        		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function APBUserInterface.cUIMSDSPPage.OnCreateCustomComboList
// [0x00040401] ( FUNC_Final | FUNC_Native )
struct UcUIMSDSPPage_execOnCreateCustomComboList_Parms
{
	class UUIComboBox*                                 ListOwner;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UUIList*                                     ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIMSDSPPage.OnSelectDSP
// [0x00840003] ( FUNC_Final )
struct UcUIMSDSPPage_execOnSelectDSP_Parms
{
	class UUIObject*                                   Sender;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                PlayerIndex;                                      		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             nDspIndex;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
	// int                                             nDspChainIndex;                                   		// 0x000C (0x0004) [0x0000000000000000]              
	// class UcUIDataStore_MusicStudio*                ds;                                               		// 0x0010 (0x0004) [0x0000000000000000]              
	// int                                             nDspType;                                         		// 0x0014 (0x0004) [0x0000000000000000]              
	// struct FUIMSDspInfo                             Info;                                             		// 0x0018 (0x0034) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// int                                             I;                                                		// 0x004C (0x0004) [0x0000000000000000]              
	// TArray< int >                                   SelectedItems;                                    		// 0x0050 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function APBUserInterface.cUIMSDSPPage.GetMSDataStore
// [0x00042003] ( FUNC_Final )
struct UcUIMSDSPPage_execGetMSDataStore_Parms
{
	class UcUIDataStore_MusicStudio*                   ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class UcUIDataStore_MusicStudio*                ds;                                               		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function APBUserInterface.cUIMSKnob.SetImage
// [0x00020400] ( FUNC_Native )
struct UcUIMSKnob_execSetImage_Parms
{
	class USurface*                                    BackImage;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class USurface*                                    ForeImage;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function APBUserInterface.cUIMSKnob.OnStateChanged
// [0x00020003] ( FUNC_Final )
struct UcUIMSKnob_execOnStateChanged_Parms
{
	class UUIScreenObject*                             Sender;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                PlayerIndex;                                      		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UUIState*                                    NewlyActiveState;                                 		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UUIState*                                    PreviouslyActiveState;                            		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function APBUserInterface.cUIMSKnob.GetValue
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UcUIMSKnob_execGetValue_Parms
{
	unsigned long                                      bPercentageValue : 1;                             		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIMSKnob.SetValue
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UcUIMSKnob_execSetValue_Parms
{
	float                                              NewValue;                                         		// 0x0000 (0x0004) [0x0000000000000880]              ( CPF_Parm | CPF_CoerceParm )
	unsigned long                                      bPercentageValue : 1;                             		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIMSKnob.SaveSubscriberValue
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct UcUIMSKnob_execSaveSubscriberValue_Parms
{
	TArray< class UUIDataStore* >                      out_BoundDataStores;                              		// 0x0000 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	int                                                BindingIndex;                                     		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIMSKnob.ClearBoundDataStores
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UcUIMSKnob_execClearBoundDataStores_Parms
{
};

// Function APBUserInterface.cUIMSKnob.GetBoundDataStores
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct UcUIMSKnob_execGetBoundDataStores_Parms
{
	TArray< class UUIDataStore* >                      out_BoundDataStores;                              		// 0x0000 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function APBUserInterface.cUIMSKnob.NotifyDataStoreValueUpdated
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UcUIMSKnob_execNotifyDataStoreValueUpdated_Parms
{
	class UUIDataStore*                                SourceDataStore;                                  		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bValuesInvalidated : 1;                           		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	struct FName                                       PropertyTag;                                      		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UUIDataProvider*                             SourceProvider;                                   		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ArrayIndex;                                       		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function APBUserInterface.cUIMSKnob.RefreshSubscriberValue
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UcUIMSKnob_execRefreshSubscriberValue_Parms
{
	int                                                BindingIndex;                                     		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIMSKnob.GetDataStoreBinding
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UcUIMSKnob_execGetDataStoreBinding_Parms
{
	int                                                BindingIndex;                                     		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0004 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function APBUserInterface.cUIMSKnob.SetDataStoreBinding
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UcUIMSKnob_execSetDataStoreBinding_Parms
{
	struct FString                                     MarkupText;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                BindingIndex;                                     		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function APBUserInterface.cUIMSList.Initialized
// [0x00020802] ( FUNC_Event )
struct UcUIMSList_eventInitialized_Parms
{
};

// Function APBUserInterface.cUIMSList.ScrollVertical
// [0x00020400] ( FUNC_Native )
struct UcUIMSList_execScrollVertical_Parms
{
	class UUIScrollbar*                                Sender;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              PositionChange;                                   		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bPositionMaxed : 1;                               		// 0x0008 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIMSSequencer.SelectRow
// [0x00020400] ( FUNC_Native )
struct UcUIMSSequencer_execSelectRow_Parms
{
	int                                                nRow;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function APBUserInterface.cUIMSSequencer.RefreshData
// [0x00020400] ( FUNC_Native )
struct UcUIMSSequencer_execRefreshData_Parms
{
};

// Function APBUserInterface.cUIMSSequencerHeader.RefreshData
// [0x00020400] ( FUNC_Native )
struct UcUIMSSequencerHeader_execRefreshData_Parms
{
};

// Function APBUserInterface.cUIMissionAccept.ReviewClosed
// [0x00020400] ( FUNC_Native )
struct UcUIMissionAccept_execReviewClosed_Parms
{
	unsigned char                                      Accepted;                                         		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function APBUserInterface.cUIMissionAccept.AcceptedForSideClosed
// [0x00020400] ( FUNC_Native )
struct UcUIMissionAccept_execAcceptedForSideClosed_Parms
{
	unsigned char                                      Accepted;                                         		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function APBUserInterface.cUIMissionAccept.ReviewJustification
// [0x00020400] ( FUNC_Native )
struct UcUIMissionAccept_execReviewJustification_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIMissionAccept.MissionAcceptedForSide
// [0x00020400] ( FUNC_Native )
struct UcUIMissionAccept_execMissionAcceptedForSide_Parms
{
};

// Function APBUserInterface.cUIAction_DM_PlaceWaypoint.OnAddGroupWaypointCallback
// [0x00020002] 
struct UcUIAction_DM_PlaceWaypoint_execOnAddGroupWaypointCallback_Parms
{
	int                                                nMarkerID;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function APBUserInterface.cUIAction_DM_PlaceWaypoint.OnDeleteWaypointCallback
// [0x00020002] 
struct UcUIAction_DM_PlaceWaypoint_execOnDeleteWaypointCallback_Parms
{
	unsigned long                                      bDeleted : 1;                                     		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function APBUserInterface.cUIDataStore_DistrictMap.NotifyGameSessionEnded
// [0x00020002] 
struct UcUIDataStore_DistrictMap_execNotifyGameSessionEnded_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIDataStore_DistrictMap.Native_NotifyGameSessionEnded
// [0x00020400] ( FUNC_Native )
struct UcUIDataStore_DistrictMap_execNative_NotifyGameSessionEnded_Parms
{
};

// Function APBUserInterface.cUIDataStore_DistrictMap.OnSceneExitCallback
// [0x00120000] 
struct UcUIDataStore_DistrictMap_execOnSceneExitCallback_Parms
{
};

// Function APBUserInterface.cUIDataStore_DistrictMap.OnHUDMarkersChanged
// [0x00020400] ( FUNC_Native )
struct UcUIDataStore_DistrictMap_execOnHUDMarkersChanged_Parms
{
};

// Function APBUserInterface.cUIDataStore_DistrictMap.SceneExitCallback
// [0x00020500] ( FUNC_Native )
struct UcUIDataStore_DistrictMap_execSceneExitCallback_Parms
{
};

// Function APBUserInterface.cUIDataStore_DistrictMap.IsDistrictMapVisible
// [0x00020400] ( FUNC_Native )
struct UcUIDataStore_DistrictMap_execIsDistrictMapVisible_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIDataStore_DistrictMap.IsDistrictEntryMapVisible
// [0x00020400] ( FUNC_Native )
struct UcUIDataStore_DistrictMap_execIsDistrictEntryMapVisible_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIDataStore_ColourChooser.NotifyGameSessionEnded
// [0x00020002] 
struct UcUIDataStore_ColourChooser_execNotifyGameSessionEnded_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIDataStore_TooltipServer.SetOrdering
// [0x00020C00] ( FUNC_Event | FUNC_Native )
struct UcUIDataStore_TooltipServer_eventSetOrdering_Parms
{
	struct FName                                       Ordering;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIMultiPartProgressBar.ClearBoundDataStores
// [0x00020400] ( FUNC_Native )
struct UcUIMultiPartProgressBar_execClearBoundDataStores_Parms
{
};

// Function APBUserInterface.cUIMultiPartProgressBar.GetBoundDataStores
// [0x00420400] ( FUNC_Native )
struct UcUIMultiPartProgressBar_execGetBoundDataStores_Parms
{
	TArray< class UUIDataStore* >                      out_BoundDataStores;                              		// 0x0000 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function APBUserInterface.cUIMultiPartProgressBar.NotifyDataStoreValueUpdated
// [0x00020400] ( FUNC_Native )
struct UcUIMultiPartProgressBar_execNotifyDataStoreValueUpdated_Parms
{
	class UUIDataStore*                                SourceDataStore;                                  		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bValuesInvalidated : 1;                           		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	struct FName                                       PropertyTag;                                      		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UUIDataProvider*                             SourceProvider;                                   		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ArrayIndex;                                       		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function APBUserInterface.cUIMultiPartProgressBar.RefreshSubscriberValue
// [0x00020400] ( FUNC_Native )
struct UcUIMultiPartProgressBar_execRefreshSubscriberValue_Parms
{
	int                                                BindingIndex;                                     		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIMultiPartProgressBar.GetDataStoreBinding
// [0x00020400] ( FUNC_Native )
struct UcUIMultiPartProgressBar_execGetDataStoreBinding_Parms
{
	int                                                BindingIndex;                                     		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0004 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function APBUserInterface.cUIMultiPartProgressBar.SetDataStoreBinding
// [0x00020400] ( FUNC_Native )
struct UcUIMultiPartProgressBar_execSetDataStoreBinding_Parms
{
	struct FString                                     MarkupText;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                BindingIndex;                                     		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function APBUserInterface.cUI_APBConsoleCommand.IsCommandAvailable
// [0x00020400] ( FUNC_Native )
struct UcUI_APBConsoleCommand_execIsCommandAvailable_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUI_APBConsoleCommand.SetupConsoleCommand
// [0x00020802] ( FUNC_Event )
struct UcUI_APBConsoleCommand_eventSetupConsoleCommand_Parms
{
	unsigned char                                      eCommandType;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     sSlashCommand;                                    		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     sSecondarySlashCommand;                           		// 0x0010 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FScriptDelegate                             Callback;                                         		// 0x001C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     sDisplayName;                                     		// 0x0028 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     sDescription;                                     		// 0x0034 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     sTooltip;                                         		// 0x0040 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     sSyntaxHint;                                      		// 0x004C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     sDefaultArgs;                                     		// 0x0058 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                nMinArgCount;                                     		// 0x0064 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nMaxArgCount;                                     		// 0x0068 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      eWorksFromState;                                  		// 0x006C (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bWorksInEditors : 1;                              		// 0x0070 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function APBUserInterface.cUI_APBConsoleCommand.APBConsoleCommandBase
// [0x00120002] 
struct UcUI_APBConsoleCommand_execAPBConsoleCommandBase_Parms
{
	struct FString                                     sArgString;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIDataStore_Chat.SetChatModeToDefault
// [0x00020802] ( FUNC_Event )
struct UcUIDataStore_Chat_eventSetChatModeToDefault_Parms
{
};

// Function APBUserInterface.cUIDataStore_Chat.SetActiveChatMode
// [0x00020400] ( FUNC_Native )
struct UcUIDataStore_Chat_execSetActiveChatMode_Parms
{
	unsigned char                                      eChatMode;                                        		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function APBUserInterface.cUIDataStore_Chat.ProcessEmote
// [0x00020400] ( FUNC_Native )
struct UcUIDataStore_Chat_execProcessEmote_Parms
{
	struct FString                                     sEmote;                                           		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function APBUserInterface.cUIDataStore_Chat.Slash_ChatDistrict
// [0x00020400] ( FUNC_Native )
struct UcUIDataStore_Chat_execSlash_ChatDistrict_Parms
{
	struct FString                                     sMessage;                                         		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function APBUserInterface.cUIDataStore_Chat.Slash_ChatReply
// [0x00020400] ( FUNC_Native )
struct UcUIDataStore_Chat_execSlash_ChatReply_Parms
{
	struct FString                                     sMessage;                                         		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function APBUserInterface.cUIDataStore_Chat.Slash_ChatWhisper
// [0x00020400] ( FUNC_Native )
struct UcUIDataStore_Chat_execSlash_ChatWhisper_Parms
{
	struct FString                                     sMessage;                                         		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function APBUserInterface.cUIDataStore_Chat.Slash_ChatOfficer
// [0x00020400] ( FUNC_Native )
struct UcUIDataStore_Chat_execSlash_ChatOfficer_Parms
{
	struct FString                                     sMessage;                                         		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function APBUserInterface.cUIDataStore_Chat.Slash_ChatClan
// [0x00020400] ( FUNC_Native )
struct UcUIDataStore_Chat_execSlash_ChatClan_Parms
{
	struct FString                                     sMessage;                                         		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function APBUserInterface.cUIDataStore_Chat.Slash_ChatGroup
// [0x00020400] ( FUNC_Native )
struct UcUIDataStore_Chat_execSlash_ChatGroup_Parms
{
	struct FString                                     sMessage;                                         		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function APBUserInterface.cUIDataStore_Chat.Slash_ChatTeam
// [0x00020400] ( FUNC_Native )
struct UcUIDataStore_Chat_execSlash_ChatTeam_Parms
{
	struct FString                                     sMessage;                                         		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function APBUserInterface.cUIDataStore_Chat.Slash_ChatYell
// [0x00020400] ( FUNC_Native )
struct UcUIDataStore_Chat_execSlash_ChatYell_Parms
{
	struct FString                                     sMessage;                                         		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function APBUserInterface.cUIDataStore_Chat.Slash_ChatSay
// [0x00020400] ( FUNC_Native )
struct UcUIDataStore_Chat_execSlash_ChatSay_Parms
{
	struct FString                                     sMessage;                                         		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function APBUserInterface.cUIDataStore_Chat.Slash_GM_SetOpposition
// [0x00020400] ( FUNC_Native )
struct UcUIDataStore_Chat_execSlash_GM_SetOpposition_Parms
{
	struct FString                                     sArg;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function APBUserInterface.cUIDataStore_Chat.Slash_GM_EndMission
// [0x00020400] ( FUNC_Native )
struct UcUIDataStore_Chat_execSlash_GM_EndMission_Parms
{
	struct FString                                     sArg;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function APBUserInterface.cUIDataStore_Chat.Slash_GM_StartMission
// [0x00020400] ( FUNC_Native )
struct UcUIDataStore_Chat_execSlash_GM_StartMission_Parms
{
	struct FString                                     sArg;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function APBUserInterface.cUIDataStore_Chat.Slash_GM_ToggleMissionOffers
// [0x00020400] ( FUNC_Native )
struct UcUIDataStore_Chat_execSlash_GM_ToggleMissionOffers_Parms
{
	struct FString                                     sArg;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function APBUserInterface.cUIDataStore_Chat.Slash_GM_ConversationEnd
// [0x00020400] ( FUNC_Native )
struct UcUIDataStore_Chat_execSlash_GM_ConversationEnd_Parms
{
	struct FString                                     sArg;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function APBUserInterface.cUIDataStore_Chat.Slash_GM_Kick
// [0x00020400] ( FUNC_Native )
struct UcUIDataStore_Chat_execSlash_GM_Kick_Parms
{
	struct FString                                     sArg;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function APBUserInterface.cUIDataStore_Chat.Slash_GM_RepairVehicle
// [0x00020400] ( FUNC_Native )
struct UcUIDataStore_Chat_execSlash_GM_RepairVehicle_Parms
{
	struct FString                                     sArg;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function APBUserInterface.cUIDataStore_Chat.Slash_GM_MoveToLocation
// [0x00020400] ( FUNC_Native )
struct UcUIDataStore_Chat_execSlash_GM_MoveToLocation_Parms
{
	struct FString                                     sArg;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function APBUserInterface.cUIDataStore_Chat.Slash_GM_EnterFreeCameraMode
// [0x00020400] ( FUNC_Native )
struct UcUIDataStore_Chat_execSlash_GM_EnterFreeCameraMode_Parms
{
	struct FString                                     sArg;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function APBUserInterface.cUIDataStore_Chat.Slash_GM_SetRunSpeed
// [0x00020400] ( FUNC_Native )
struct UcUIDataStore_Chat_execSlash_GM_SetRunSpeed_Parms
{
	struct FString                                     sArg;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function APBUserInterface.cUIDataStore_Chat.Slash_GM_Collision
// [0x00020400] ( FUNC_Native )
struct UcUIDataStore_Chat_execSlash_GM_Collision_Parms
{
	struct FString                                     sArg;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function APBUserInterface.cUIDataStore_Chat.Slash_GM_Invincible
// [0x00020400] ( FUNC_Native )
struct UcUIDataStore_Chat_execSlash_GM_Invincible_Parms
{
	struct FString                                     sArg;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function APBUserInterface.cUIDataStore_Chat.Slash_GM_Invisibility
// [0x00020400] ( FUNC_Native )
struct UcUIDataStore_Chat_execSlash_GM_Invisibility_Parms
{
	struct FString                                     sArg;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function APBUserInterface.cUIDataStore_Chat.Slash_GM_Unfreeze
// [0x00020400] ( FUNC_Native )
struct UcUIDataStore_Chat_execSlash_GM_Unfreeze_Parms
{
	struct FString                                     sArg;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function APBUserInterface.cUIDataStore_Chat.Slash_GM_Freeze
// [0x00020400] ( FUNC_Native )
struct UcUIDataStore_Chat_execSlash_GM_Freeze_Parms
{
	struct FString                                     sArg;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function APBUserInterface.cUIDataStore_Chat.Slash_GM_MovePlayerToGMLocation
// [0x00020400] ( FUNC_Native )
struct UcUIDataStore_Chat_execSlash_GM_MovePlayerToGMLocation_Parms
{
	struct FString                                     sArg;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function APBUserInterface.cUIDataStore_Chat.Slash_GM_MoveToPlayerLocation
// [0x00020400] ( FUNC_Native )
struct UcUIDataStore_Chat_execSlash_GM_MoveToPlayerLocation_Parms
{
	struct FString                                     sArg;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function APBUserInterface.cUIDataStore_Chat.Slash_ToggleCapturingMovie
// [0x00020400] ( FUNC_Native )
struct UcUIDataStore_Chat_execSlash_ToggleCapturingMovie_Parms
{
	struct FString                                     arg;                                              		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function APBUserInterface.cUIDataStore_Chat.Slash_StopCapturingMovie
// [0x00020400] ( FUNC_Native )
struct UcUIDataStore_Chat_execSlash_StopCapturingMovie_Parms
{
	struct FString                                     arg;                                              		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function APBUserInterface.cUIDataStore_Chat.Slash_StartCapturingMovie
// [0x00020400] ( FUNC_Native )
struct UcUIDataStore_Chat_execSlash_StartCapturingMovie_Parms
{
	struct FString                                     arg;                                              		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function APBUserInterface.cUIDataStore_Chat.Slash_StartPrecapturingMovie
// [0x00020400] ( FUNC_Native )
struct UcUIDataStore_Chat_execSlash_StartPrecapturingMovie_Parms
{
	struct FString                                     arg;                                              		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function APBUserInterface.cUIDataStore_Chat.Slash_AbandonMission
// [0x00020400] ( FUNC_Native )
struct UcUIDataStore_Chat_execSlash_AbandonMission_Parms
{
	struct FString                                     sArg;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function APBUserInterface.cUIDataStore_Chat.Slash_CancelUnstick
// [0x00020400] ( FUNC_Native )
struct UcUIDataStore_Chat_execSlash_CancelUnstick_Parms
{
	struct FString                                     sArg;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function APBUserInterface.cUIDataStore_Chat.Slash_Unstick
// [0x00020400] ( FUNC_Native )
struct UcUIDataStore_Chat_execSlash_Unstick_Parms
{
	struct FString                                     sArg;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function APBUserInterface.cUIDataStore_Chat.Slash_FPSDetail
// [0x00020400] ( FUNC_Native )
struct UcUIDataStore_Chat_execSlash_FPSDetail_Parms
{
	struct FString                                     sArg;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function APBUserInterface.cUIDataStore_Chat.Slash_FPS
// [0x00020400] ( FUNC_Native )
struct UcUIDataStore_Chat_execSlash_FPS_Parms
{
	struct FString                                     sArg;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function APBUserInterface.cUIDataStore_Chat.Slash_Help
// [0x00020400] ( FUNC_Native )
struct UcUIDataStore_Chat_execSlash_Help_Parms
{
	struct FString                                     sArg;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function APBUserInterface.cUIDataStore_Chat.Slash_DoNotDisturb
// [0x00020400] ( FUNC_Native )
struct UcUIDataStore_Chat_execSlash_DoNotDisturb_Parms
{
	struct FString                                     sArg;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function APBUserInterface.cUIDataStore_Chat.Slash_AwayFromKeyboard
// [0x00020400] ( FUNC_Native )
struct UcUIDataStore_Chat_execSlash_AwayFromKeyboard_Parms
{
	struct FString                                     sArg;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function APBUserInterface.cUIDataStore_Chat.Slash_Available
// [0x00020400] ( FUNC_Native )
struct UcUIDataStore_Chat_execSlash_Available_Parms
{
	struct FString                                     sArg;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function APBUserInterface.cUIDataStore_Chat.Slash_ToggleTimestamp
// [0x00020400] ( FUNC_Native )
struct UcUIDataStore_Chat_execSlash_ToggleTimestamp_Parms
{
	struct FString                                     sArg;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function APBUserInterface.cUIDataStore_Chat.Slash_ToggleProfanityFilter
// [0x00020400] ( FUNC_Native )
struct UcUIDataStore_Chat_execSlash_ToggleProfanityFilter_Parms
{
	struct FString                                     sArg;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function APBUserInterface.cUIDataStore_Chat.Slash_SaveChatLog
// [0x00020400] ( FUNC_Native )
struct UcUIDataStore_Chat_execSlash_SaveChatLog_Parms
{
	struct FString                                     sArg;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function APBUserInterface.cUIDataStore_Chat.Slash_ShowNames
// [0x00020400] ( FUNC_Native )
struct UcUIDataStore_Chat_execSlash_ShowNames_Parms
{
	struct FString                                     sArg;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function APBUserInterface.cUIDataStore_Chat.Slash_Who
// [0x00020400] ( FUNC_Native )
struct UcUIDataStore_Chat_execSlash_Who_Parms
{
	struct FString                                     sArg;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function APBUserInterface.cUIDataStore_Chat.Slash_Population
// [0x00020400] ( FUNC_Native )
struct UcUIDataStore_Chat_execSlash_Population_Parms
{
	struct FString                                     sArg;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function APBUserInterface.cUIDataStore_Chat.Slash_Played
// [0x00020400] ( FUNC_Native )
struct UcUIDataStore_Chat_execSlash_Played_Parms
{
	struct FString                                     sArg;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function APBUserInterface.cUIDataStore_Chat.Slash_UnIgnore
// [0x00020400] ( FUNC_Native )
struct UcUIDataStore_Chat_execSlash_UnIgnore_Parms
{
	struct FString                                     sArg;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function APBUserInterface.cUIDataStore_Chat.Slash_Ignore
// [0x00020400] ( FUNC_Native )
struct UcUIDataStore_Chat_execSlash_Ignore_Parms
{
	struct FString                                     sArg;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function APBUserInterface.cUIDataStore_Chat.Slash_FriendRemove
// [0x00020400] ( FUNC_Native )
struct UcUIDataStore_Chat_execSlash_FriendRemove_Parms
{
	struct FString                                     sArg;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function APBUserInterface.cUIDataStore_Chat.Slash_FriendAdd
// [0x00020400] ( FUNC_Native )
struct UcUIDataStore_Chat_execSlash_FriendAdd_Parms
{
	struct FString                                     sArg;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function APBUserInterface.cUIDataStore_Chat.Slash_ClanLeave
// [0x00020400] ( FUNC_Native )
struct UcUIDataStore_Chat_execSlash_ClanLeave_Parms
{
	struct FString                                     sArg;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function APBUserInterface.cUIDataStore_Chat.Slash_ClanRemove
// [0x00020400] ( FUNC_Native )
struct UcUIDataStore_Chat_execSlash_ClanRemove_Parms
{
	struct FString                                     sArg;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function APBUserInterface.cUIDataStore_Chat.Slash_ClanAccept
// [0x00020400] ( FUNC_Native )
struct UcUIDataStore_Chat_execSlash_ClanAccept_Parms
{
	struct FString                                     sArg;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function APBUserInterface.cUIDataStore_Chat.Slash_ClanInvite
// [0x00020400] ( FUNC_Native )
struct UcUIDataStore_Chat_execSlash_ClanInvite_Parms
{
	struct FString                                     sArg;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function APBUserInterface.cUIDataStore_Chat.Slash_LookingForGroup
// [0x00020400] ( FUNC_Native )
struct UcUIDataStore_Chat_execSlash_LookingForGroup_Parms
{
	struct FString                                     sArg;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function APBUserInterface.cUIDataStore_Chat.Slash_GroupInfo
// [0x00020400] ( FUNC_Native )
struct UcUIDataStore_Chat_execSlash_GroupInfo_Parms
{
	struct FString                                     sArg;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function APBUserInterface.cUIDataStore_Chat.Slash_GroupList
// [0x00020400] ( FUNC_Native )
struct UcUIDataStore_Chat_execSlash_GroupList_Parms
{
	struct FString                                     sArg;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function APBUserInterface.cUIDataStore_Chat.Slash_GroupJoin
// [0x00020400] ( FUNC_Native )
struct UcUIDataStore_Chat_execSlash_GroupJoin_Parms
{
	struct FString                                     sArg;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function APBUserInterface.cUIDataStore_Chat.Slash_GroupInviteMode
// [0x00020400] ( FUNC_Native )
struct UcUIDataStore_Chat_execSlash_GroupInviteMode_Parms
{
	struct FString                                     sArg;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function APBUserInterface.cUIDataStore_Chat.Slash_GroupPublicMode
// [0x00020400] ( FUNC_Native )
struct UcUIDataStore_Chat_execSlash_GroupPublicMode_Parms
{
	struct FString                                     sArg;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function APBUserInterface.cUIDataStore_Chat.Slash_GroupInviteModeDefault
// [0x00020400] ( FUNC_Native )
struct UcUIDataStore_Chat_execSlash_GroupInviteModeDefault_Parms
{
	struct FString                                     sArg;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function APBUserInterface.cUIDataStore_Chat.Slash_GroupPublicModeDefault
// [0x00020400] ( FUNC_Native )
struct UcUIDataStore_Chat_execSlash_GroupPublicModeDefault_Parms
{
	struct FString                                     sArg;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function APBUserInterface.cUIDataStore_Chat.Slash_GroupRemove
// [0x00020400] ( FUNC_Native )
struct UcUIDataStore_Chat_execSlash_GroupRemove_Parms
{
	struct FString                                     sArg;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function APBUserInterface.cUIDataStore_Chat.Slash_Transfer
// [0x00020400] ( FUNC_Native )
struct UcUIDataStore_Chat_execSlash_Transfer_Parms
{
	struct FString                                     sArg;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function APBUserInterface.cUIDataStore_Chat.Slash_GroupLeave
// [0x00020400] ( FUNC_Native )
struct UcUIDataStore_Chat_execSlash_GroupLeave_Parms
{
	struct FString                                     sArg;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function APBUserInterface.cUIDataStore_Chat.Slash_GroupAccept
// [0x00020400] ( FUNC_Native )
struct UcUIDataStore_Chat_execSlash_GroupAccept_Parms
{
	struct FString                                     sArg;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function APBUserInterface.cUIDataStore_Chat.Slash_GroupInvite
// [0x00020400] ( FUNC_Native )
struct UcUIDataStore_Chat_execSlash_GroupInvite_Parms
{
	struct FString                                     sArg;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function APBUserInterface.cUIDataStore_Chat.Slash_Logout
// [0x00020400] ( FUNC_Native )
struct UcUIDataStore_Chat_execSlash_Logout_Parms
{
	struct FString                                     sArg;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function APBUserInterface.cUIDataStore_Chat.Slash_Exit
// [0x00020400] ( FUNC_Native )
struct UcUIDataStore_Chat_execSlash_Exit_Parms
{
	struct FString                                     sArg;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function APBUserInterface.cUIDataStore_Chat.OnPlayerProfileChanged
// [0x00020400] ( FUNC_Native )
struct UcUIDataStore_Chat_execOnPlayerProfileChanged_Parms
{
};

// Function APBUserInterface.cUIDataStore_Chat.CloseChatSystem
// [0x00020400] ( FUNC_Native )
struct UcUIDataStore_Chat_execCloseChatSystem_Parms
{
};

// Function APBUserInterface.cUIDataStore_Chat.InitChatSystem
// [0x00020400] ( FUNC_Native )
struct UcUIDataStore_Chat_execInitChatSystem_Parms
{
};

// Function APBUserInterface.cUIDataStore_Chat.CloseChatLogFile
// [0x00020400] ( FUNC_Native )
struct UcUIDataStore_Chat_execCloseChatLogFile_Parms
{
};

// Function APBUserInterface.cUIDataStore_Chat.InitChatLogFile
// [0x00020400] ( FUNC_Native )
struct UcUIDataStore_Chat_execInitChatLogFile_Parms
{
};

// Function APBUserInterface.cUIDataStore_Chat.CreateUIChatMessage
// [0x00020600] ( FUNC_Exec | FUNC_Native )
struct UcUIDataStore_Chat_execCreateUIChatMessage_Parms
{
	unsigned char                                      eMsgType;                                         		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                nSenderUID;                                       		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     m_sCharacterName;                                 		// 0x0008 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     sMsg;                                             		// 0x0014 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      bFromGM : 1;                                      		// 0x0020 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	float                                              fDisplayTime;                                     		// 0x0024 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0028 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIDataStore_Chat.ProcessCommand
// [0x00020400] ( FUNC_Native )
struct UcUIDataStore_Chat_execProcessCommand_Parms
{
	struct FString                                     sMessage;                                         		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function APBUserInterface.cUIInGameQuestionManager.Tick
// [0x00020C00] ( FUNC_Event | FUNC_Native )
struct UcUIInGameQuestionManager_eventTick_Parms
{
	float                                              fDeltaTime;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function APBUserInterface.cUIInGameQuestionManager.UserDeclined
// [0x00020C00] ( FUNC_Event | FUNC_Native )
struct UcUIInGameQuestionManager_eventUserDeclined_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIInGameQuestionManager.UserAccepted
// [0x00020C00] ( FUNC_Event | FUNC_Native )
struct UcUIInGameQuestionManager_eventUserAccepted_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIInGameQuestionManager.HasQueuedQuestions
// [0x00020400] ( FUNC_Native )
struct UcUIInGameQuestionManager_execHasQueuedQuestions_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIInGameQuestionManager.RemoveQuestion
// [0x00020C00] ( FUNC_Event | FUNC_Native )
struct UcUIInGameQuestionManager_eventRemoveQuestion_Parms
{
	int                                                nID;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function APBUserInterface.cUIInGameQuestionManager.AddQuestion
// [0x00020C00] ( FUNC_Event | FUNC_Native )
struct UcUIInGameQuestionManager_eventAddQuestion_Parms
{
	struct FtUIInGameQuestionParam                     Params;                                           		// 0x0000 (0x0070) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                ReturnValue;                                      		// 0x0070 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIInGameQuestionManager.TimerCallback
// [0x00120000] 
struct UcUIInGameQuestionManager_execTimerCallback_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIInGameQuestionManager.AnswerCallback
// [0x00120000] 
struct UcUIInGameQuestionManager_execAnswerCallback_Parms
{
	unsigned char                                      Answer;                                           		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function APBUserInterface.cUIInGameQuestionManager.DisplayedCallback
// [0x00120000] 
struct UcUIInGameQuestionManager_execDisplayedCallback_Parms
{
};

// Function APBUserInterface.cUIDataStore_DistrictQueuing.AvailableForJoinAsGroup
// [0x00020400] ( FUNC_Native )
struct UcUIDataStore_DistrictQueuing_execAvailableForJoinAsGroup_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function APBUserInterface.cUIAction_GetDistrictList.OnGetDistrictListFailed
// [0x00020002] 
struct UcUIAction_GetDistrictList_execOnGetDistrictListFailed_Parms
{
	int                                                nError;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function APBUserInterface.cUIAction_GetDistrictList.OnGetDistrictListSuccess
// [0x00020002] 
struct UcUIAction_GetDistrictList_execOnGetDistrictListSuccess_Parms
{
};

// Function APBUserInterface.cUIAction_NoOp.Activated
// [0x00020802] ( FUNC_Event )
struct UcUIAction_NoOp_eventActivated_Parms
{
};

// Function APBUserInterface.cUIMSAction_DSPContainer_RecreatePages.Activated
// [0x00020802] ( FUNC_Event )
struct UcUIMSAction_DSPContainer_RecreatePages_eventActivated_Parms
{
};

// Function APBUserInterface.cUIMSAction_DSPContainer_ShowPage.Activated
// [0x00020802] ( FUNC_Event )
struct UcUIMSAction_DSPContainer_ShowPage_eventActivated_Parms
{
};

// Function APBUserInterface.cUIMSAction_Sequencer_Refresh.Activated
// [0x00020802] ( FUNC_Event )
struct UcUIMSAction_Sequencer_Refresh_eventActivated_Parms
{
};

// Function APBUserInterface.cUIMSAction_Sequencer_SetSelectedRow.Activated
// [0x00020802] ( FUNC_Event )
struct UcUIMSAction_Sequencer_SetSelectedRow_eventActivated_Parms
{
};

// Function APBUserInterface.cUIScene_Login.InitScene
// [0x00020802] ( FUNC_Event )
struct UcUIScene_Login_eventInitScene_Parms
{
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif