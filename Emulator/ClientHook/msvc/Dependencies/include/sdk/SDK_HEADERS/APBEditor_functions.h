/*
#############################################################################################
# All Points Bulletin Reloaded (1.6) SDK
# Generated with TheFeckless UE3 SDK Generator v1.2_Beta-Rev.39
# ========================================================================================= #
# File: APBEditor_functions.h
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
# Functions
# ========================================================================================= #
*/

// Function APBEditor.CullDistanceCheckCommandlet.Main
// [0x00020C00] ( FUNC_Event | FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 Params                         ( CPF_Parm | CPF_NeedCtorLink )

int UCullDistanceCheckCommandlet::eventMain ( struct FString Params )
{
	static UFunction* pFnMain = NULL;

	if ( ! pFnMain )
		pFnMain = UObject::FindObject< UFunction > ( "Function APBEditor.CullDistanceCheckCommandlet.Main" );

	UCullDistanceCheckCommandlet_eventMain_Parms Main_Parms;
	memcpy ( &Main_Parms.Params, &Params, 0xC );

	pFnMain->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnMain, &Main_Parms, NULL );

	pFnMain->FunctionFlags |= 0x400;

	return Main_Parms.ReturnValue;
};

// Function APBEditor.EnableNeverStreamCommandlet.Main
// [0x00020C00] ( FUNC_Event | FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 Params                         ( CPF_Parm | CPF_NeedCtorLink )

int UEnableNeverStreamCommandlet::eventMain ( struct FString Params )
{
	static UFunction* pFnMain = NULL;

	if ( ! pFnMain )
		pFnMain = UObject::FindObject< UFunction > ( "Function APBEditor.EnableNeverStreamCommandlet.Main" );

	UEnableNeverStreamCommandlet_eventMain_Parms Main_Parms;
	memcpy ( &Main_Parms.Params, &Params, 0xC );

	pFnMain->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnMain, &Main_Parms, NULL );

	pFnMain->FunctionFlags |= 0x400;

	return Main_Parms.ReturnValue;
};

// Function APBEditor.FixDesignsScaleCommandlet.Main
// [0x00020C00] ( FUNC_Event | FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 Params                         ( CPF_Parm | CPF_NeedCtorLink )

int UFixDesignsScaleCommandlet::eventMain ( struct FString Params )
{
	static UFunction* pFnMain = NULL;

	if ( ! pFnMain )
		pFnMain = UObject::FindObject< UFunction > ( "Function APBEditor.FixDesignsScaleCommandlet.Main" );

	UFixDesignsScaleCommandlet_eventMain_Parms Main_Parms;
	memcpy ( &Main_Parms.Params, &Params, 0xC );

	pFnMain->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnMain, &Main_Parms, NULL );

	pFnMain->FunctionFlags |= 0x400;

	return Main_Parms.ReturnValue;
};

// Function APBEditor.RemoveEditorOnlyDataCommandlet.Main
// [0x00020C00] ( FUNC_Event | FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 Params                         ( CPF_Parm | CPF_NeedCtorLink )

int URemoveEditorOnlyDataCommandlet::eventMain ( struct FString Params )
{
	static UFunction* pFnMain = NULL;

	if ( ! pFnMain )
		pFnMain = UObject::FindObject< UFunction > ( "Function APBEditor.RemoveEditorOnlyDataCommandlet.Main" );

	URemoveEditorOnlyDataCommandlet_eventMain_Parms Main_Parms;
	memcpy ( &Main_Parms.Params, &Params, 0xC );

	pFnMain->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnMain, &Main_Parms, NULL );

	pFnMain->FunctionFlags |= 0x400;

	return Main_Parms.ReturnValue;
};

// Function APBEditor.RWTechImportersCommandlet.Main
// [0x00020C00] ( FUNC_Event | FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 Params                         ( CPF_Parm | CPF_NeedCtorLink )

int URWTechImportersCommandlet::eventMain ( struct FString Params )
{
	static UFunction* pFnMain = NULL;

	if ( ! pFnMain )
		pFnMain = UObject::FindObject< UFunction > ( "Function APBEditor.RWTechImportersCommandlet.Main" );

	URWTechImportersCommandlet_eventMain_Parms Main_Parms;
	memcpy ( &Main_Parms.Params, &Params, 0xC );

	pFnMain->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnMain, &Main_Parms, NULL );

	pFnMain->FunctionFlags |= 0x400;

	return Main_Parms.ReturnValue;
};

// Function APBEditor.RWTechImportersNonUCCCommandlet.Main
// [0x00020C00] ( FUNC_Event | FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 Params                         ( CPF_Parm | CPF_NeedCtorLink )

int URWTechImportersNonUCCCommandlet::eventMain ( struct FString Params )
{
	static UFunction* pFnMain = NULL;

	if ( ! pFnMain )
		pFnMain = UObject::FindObject< UFunction > ( "Function APBEditor.RWTechImportersNonUCCCommandlet.Main" );

	URWTechImportersNonUCCCommandlet_eventMain_Parms Main_Parms;
	memcpy ( &Main_Parms.Params, &Params, 0xC );

	pFnMain->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnMain, &Main_Parms, NULL );

	pFnMain->FunctionFlags |= 0x400;

	return Main_Parms.ReturnValue;
};

// Function APBEditor.SetBakedVehicleTextures.Main
// [0x00020C00] ( FUNC_Event | FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 Params                         ( CPF_Parm | CPF_NeedCtorLink )

int USetBakedVehicleTextures::eventMain ( struct FString Params )
{
	static UFunction* pFnMain = NULL;

	if ( ! pFnMain )
		pFnMain = UObject::FindObject< UFunction > ( "Function APBEditor.SetBakedVehicleTextures.Main" );

	USetBakedVehicleTextures_eventMain_Parms Main_Parms;
	memcpy ( &Main_Parms.Params, &Params, 0xC );

	pFnMain->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnMain, &Main_Parms, NULL );

	pFnMain->FunctionFlags |= 0x400;

	return Main_Parms.ReturnValue;
};

// Function APBEditor.SetBakedVehicleTextures.SetLODBias
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UTexture2D*              Tex                            ( CPF_Parm )
// struct FString                 textureTypeName                ( CPF_Parm | CPF_NeedCtorLink )

void USetBakedVehicleTextures::SetLODBias ( class UTexture2D* Tex, struct FString textureTypeName )
{
	static UFunction* pFnSetLODBias = NULL;

	if ( ! pFnSetLODBias )
		pFnSetLODBias = UObject::FindObject< UFunction > ( "Function APBEditor.SetBakedVehicleTextures.SetLODBias" );

	USetBakedVehicleTextures_execSetLODBias_Parms SetLODBias_Parms;
	SetLODBias_Parms.Tex = Tex;
	memcpy ( &SetLODBias_Parms.textureTypeName, &textureTypeName, 0xC );

	pFnSetLODBias->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetLODBias, &SetLODBias_Parms, NULL );

	pFnSetLODBias->FunctionFlags |= 0x400;
};

// Function APBEditor.SetSkeletalMeshAttributeCommandlet.Main
// [0x00020C00] ( FUNC_Event | FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 Params                         ( CPF_Parm | CPF_NeedCtorLink )

int USetSkeletalMeshAttributeCommandlet::eventMain ( struct FString Params )
{
	static UFunction* pFnMain = NULL;

	if ( ! pFnMain )
		pFnMain = UObject::FindObject< UFunction > ( "Function APBEditor.SetSkeletalMeshAttributeCommandlet.Main" );

	USetSkeletalMeshAttributeCommandlet_eventMain_Parms Main_Parms;
	memcpy ( &Main_Parms.Params, &Params, 0xC );

	pFnMain->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnMain, &Main_Parms, NULL );

	pFnMain->FunctionFlags |= 0x400;

	return Main_Parms.ReturnValue;
};

// Function APBEditor.SetTextureAttributeCommandlet.Main
// [0x00020C00] ( FUNC_Event | FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 Params                         ( CPF_Parm | CPF_NeedCtorLink )

int USetTextureAttributeCommandlet::eventMain ( struct FString Params )
{
	static UFunction* pFnMain = NULL;

	if ( ! pFnMain )
		pFnMain = UObject::FindObject< UFunction > ( "Function APBEditor.SetTextureAttributeCommandlet.Main" );

	USetTextureAttributeCommandlet_eventMain_Parms Main_Parms;
	memcpy ( &Main_Parms.Params, &Params, 0xC );

	pFnMain->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnMain, &Main_Parms, NULL );

	pFnMain->FunctionFlags |= 0x400;

	return Main_Parms.ReturnValue;
};

// Function APBEditor.VehicleMask.SetTemplate
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UVehicleMaskTemplate*    InTemplate                     ( CPF_Parm )

void UVehicleMask::SetTemplate ( class UVehicleMaskTemplate* InTemplate )
{
	static UFunction* pFnSetTemplate = NULL;

	if ( ! pFnSetTemplate )
		pFnSetTemplate = UObject::FindObject< UFunction > ( "Function APBEditor.VehicleMask.SetTemplate" );

	UVehicleMask_execSetTemplate_Parms SetTemplate_Parms;
	SetTemplate_Parms.InTemplate = InTemplate;

	pFnSetTemplate->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetTemplate, &SetTemplate_Parms, NULL );

	pFnSetTemplate->FunctionFlags |= 0x400;
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif