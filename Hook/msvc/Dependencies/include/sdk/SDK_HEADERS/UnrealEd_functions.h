/*
#############################################################################################
# All Points Bulletin Reloaded (1.6) SDK
# Generated with TheFeckless UE3 SDK Generator v1.2_Beta-Rev.39
# ========================================================================================= #
# File: UnrealEd_functions.h
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

// Function UnrealEd.CurveEdPresetBase.GenerateCurveData
// [0x00420802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// TArray< float >                RequiredKeyInTimes             ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
// TArray< struct FPresetGeneratedPoint > GeneratedPoints                ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UCurveEdPresetBase::eventGenerateCurveData ( TArray< float >* RequiredKeyInTimes, TArray< struct FPresetGeneratedPoint >* GeneratedPoints )
{
	static UFunction* pFnGenerateCurveData = NULL;

	if ( ! pFnGenerateCurveData )
		pFnGenerateCurveData = UObject::FindObject< UFunction > ( "Function UnrealEd.CurveEdPresetBase.GenerateCurveData" );

	UCurveEdPresetBase_eventGenerateCurveData_Parms GenerateCurveData_Parms;

	this->ProcessEvent ( pFnGenerateCurveData, &GenerateCurveData_Parms, NULL );

	if ( RequiredKeyInTimes )
		memcpy ( RequiredKeyInTimes, &GenerateCurveData_Parms.RequiredKeyInTimes, 0xC );

	if ( GeneratedPoints )
		memcpy ( GeneratedPoints, &GenerateCurveData_Parms.GeneratedPoints, 0xC );

	return GenerateCurveData_Parms.ReturnValue;
};

// Function UnrealEd.CurveEdPresetBase.FetchRequiredKeyInTimes
// [0x00420802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// TArray< float >                RequiredKeyInTimes             ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UCurveEdPresetBase::eventFetchRequiredKeyInTimes ( TArray< float >* RequiredKeyInTimes )
{
	static UFunction* pFnFetchRequiredKeyInTimes = NULL;

	if ( ! pFnFetchRequiredKeyInTimes )
		pFnFetchRequiredKeyInTimes = UObject::FindObject< UFunction > ( "Function UnrealEd.CurveEdPresetBase.FetchRequiredKeyInTimes" );

	UCurveEdPresetBase_eventFetchRequiredKeyInTimes_Parms FetchRequiredKeyInTimes_Parms;

	this->ProcessEvent ( pFnFetchRequiredKeyInTimes, &FetchRequiredKeyInTimes_Parms, NULL );

	if ( RequiredKeyInTimes )
		memcpy ( RequiredKeyInTimes, &FetchRequiredKeyInTimes_Parms.RequiredKeyInTimes, 0xC );

	return FetchRequiredKeyInTimes_Parms.ReturnValue;
};

// Function UnrealEd.CurveEdPresetBase.CheckAreSettingsValid
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned long                  bIsSaving                      ( CPF_Parm )

bool UCurveEdPresetBase::eventCheckAreSettingsValid ( unsigned long bIsSaving )
{
	static UFunction* pFnCheckAreSettingsValid = NULL;

	if ( ! pFnCheckAreSettingsValid )
		pFnCheckAreSettingsValid = UObject::FindObject< UFunction > ( "Function UnrealEd.CurveEdPresetBase.CheckAreSettingsValid" );

	UCurveEdPresetBase_eventCheckAreSettingsValid_Parms CheckAreSettingsValid_Parms;
	CheckAreSettingsValid_Parms.bIsSaving = bIsSaving;

	this->ProcessEvent ( pFnCheckAreSettingsValid, &CheckAreSettingsValid_Parms, NULL );

	return CheckAreSettingsValid_Parms.ReturnValue;
};

// Function UnrealEd.CurveEdPresetBase.FetchDisplayName
// [0x00420802] ( FUNC_Event )
// Parameters infos:
// struct FString                 OutName                        ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UCurveEdPresetBase::eventFetchDisplayName ( struct FString* OutName )
{
	static UFunction* pFnFetchDisplayName = NULL;

	if ( ! pFnFetchDisplayName )
		pFnFetchDisplayName = UObject::FindObject< UFunction > ( "Function UnrealEd.CurveEdPresetBase.FetchDisplayName" );

	UCurveEdPresetBase_eventFetchDisplayName_Parms FetchDisplayName_Parms;

	this->ProcessEvent ( pFnFetchDisplayName, &FetchDisplayName_Parms, NULL );

	if ( OutName )
		memcpy ( OutName, &FetchDisplayName_Parms.OutName, 0xC );
};

// Function UnrealEd.CurveEdPresetBase.GenerateCurve
// [0x00420002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// TArray< float >                RequiredKeyInTimes             ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
// TArray< struct FPresetGeneratedPoint > GeneratedPoints                ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UCurveEdPresetBase::GenerateCurve ( TArray< float >* RequiredKeyInTimes, TArray< struct FPresetGeneratedPoint >* GeneratedPoints )
{
	static UFunction* pFnGenerateCurve = NULL;

	if ( ! pFnGenerateCurve )
		pFnGenerateCurve = UObject::FindObject< UFunction > ( "Function UnrealEd.CurveEdPresetBase.GenerateCurve" );

	UCurveEdPresetBase_execGenerateCurve_Parms GenerateCurve_Parms;

	this->ProcessEvent ( pFnGenerateCurve, &GenerateCurve_Parms, NULL );

	if ( RequiredKeyInTimes )
		memcpy ( RequiredKeyInTimes, &GenerateCurve_Parms.RequiredKeyInTimes, 0xC );

	if ( GeneratedPoints )
		memcpy ( GeneratedPoints, &GenerateCurve_Parms.GeneratedPoints, 0xC );

	return GenerateCurve_Parms.ReturnValue;
};

// Function UnrealEd.CurveEdPresetBase.GetRequiredKeyInTimes
// [0x00420002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// TArray< float >                RequiredKeyInTimes             ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UCurveEdPresetBase::GetRequiredKeyInTimes ( TArray< float >* RequiredKeyInTimes )
{
	static UFunction* pFnGetRequiredKeyInTimes = NULL;

	if ( ! pFnGetRequiredKeyInTimes )
		pFnGetRequiredKeyInTimes = UObject::FindObject< UFunction > ( "Function UnrealEd.CurveEdPresetBase.GetRequiredKeyInTimes" );

	UCurveEdPresetBase_execGetRequiredKeyInTimes_Parms GetRequiredKeyInTimes_Parms;

	this->ProcessEvent ( pFnGetRequiredKeyInTimes, &GetRequiredKeyInTimes_Parms, NULL );

	if ( RequiredKeyInTimes )
		memcpy ( RequiredKeyInTimes, &GetRequiredKeyInTimes_Parms.RequiredKeyInTimes, 0xC );

	return GetRequiredKeyInTimes_Parms.ReturnValue;
};

// Function UnrealEd.CurveEdPresetBase.AreSettingsValid
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned long                  bIsSaving                      ( CPF_Parm )

bool UCurveEdPresetBase::AreSettingsValid ( unsigned long bIsSaving )
{
	static UFunction* pFnAreSettingsValid = NULL;

	if ( ! pFnAreSettingsValid )
		pFnAreSettingsValid = UObject::FindObject< UFunction > ( "Function UnrealEd.CurveEdPresetBase.AreSettingsValid" );

	UCurveEdPresetBase_execAreSettingsValid_Parms AreSettingsValid_Parms;
	AreSettingsValid_Parms.bIsSaving = bIsSaving;

	this->ProcessEvent ( pFnAreSettingsValid, &AreSettingsValid_Parms, NULL );

	return AreSettingsValid_Parms.ReturnValue;
};

// Function UnrealEd.CurveEdPresetBase.GetDisplayName
// [0x00020002] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

struct FString UCurveEdPresetBase::GetDisplayName ( )
{
	static UFunction* pFnGetDisplayName = NULL;

	if ( ! pFnGetDisplayName )
		pFnGetDisplayName = UObject::FindObject< UFunction > ( "Function UnrealEd.CurveEdPresetBase.GetDisplayName" );

	UCurveEdPresetBase_execGetDisplayName_Parms GetDisplayName_Parms;

	this->ProcessEvent ( pFnGetDisplayName, &GetDisplayName_Parms, NULL );

	return GetDisplayName_Parms.ReturnValue;
};

// Function UnrealEd.CurveEdPreset_CosWave.GenerateCurve
// [0x00420002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// TArray< float >                RequiredKeyInTimes             ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
// TArray< struct FPresetGeneratedPoint > GeneratedPoints                ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UCurveEdPreset_CosWave::GenerateCurve ( TArray< float >* RequiredKeyInTimes, TArray< struct FPresetGeneratedPoint >* GeneratedPoints )
{
	static UFunction* pFnGenerateCurve = NULL;

	if ( ! pFnGenerateCurve )
		pFnGenerateCurve = UObject::FindObject< UFunction > ( "Function UnrealEd.CurveEdPreset_CosWave.GenerateCurve" );

	UCurveEdPreset_CosWave_execGenerateCurve_Parms GenerateCurve_Parms;

	this->ProcessEvent ( pFnGenerateCurve, &GenerateCurve_Parms, NULL );

	if ( RequiredKeyInTimes )
		memcpy ( RequiredKeyInTimes, &GenerateCurve_Parms.RequiredKeyInTimes, 0xC );

	if ( GeneratedPoints )
		memcpy ( GeneratedPoints, &GenerateCurve_Parms.GeneratedPoints, 0xC );

	return GenerateCurve_Parms.ReturnValue;
};

// Function UnrealEd.CurveEdPreset_CosWave.GetRequiredKeyInTimes
// [0x00420002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// TArray< float >                RequiredKeyInTimes             ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UCurveEdPreset_CosWave::GetRequiredKeyInTimes ( TArray< float >* RequiredKeyInTimes )
{
	static UFunction* pFnGetRequiredKeyInTimes = NULL;

	if ( ! pFnGetRequiredKeyInTimes )
		pFnGetRequiredKeyInTimes = UObject::FindObject< UFunction > ( "Function UnrealEd.CurveEdPreset_CosWave.GetRequiredKeyInTimes" );

	UCurveEdPreset_CosWave_execGetRequiredKeyInTimes_Parms GetRequiredKeyInTimes_Parms;

	this->ProcessEvent ( pFnGetRequiredKeyInTimes, &GetRequiredKeyInTimes_Parms, NULL );

	if ( RequiredKeyInTimes )
		memcpy ( RequiredKeyInTimes, &GetRequiredKeyInTimes_Parms.RequiredKeyInTimes, 0xC );

	return GetRequiredKeyInTimes_Parms.ReturnValue;
};

// Function UnrealEd.CurveEdPreset_CosWave.AreSettingsValid
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned long                  bIsSaving                      ( CPF_Parm )

bool UCurveEdPreset_CosWave::AreSettingsValid ( unsigned long bIsSaving )
{
	static UFunction* pFnAreSettingsValid = NULL;

	if ( ! pFnAreSettingsValid )
		pFnAreSettingsValid = UObject::FindObject< UFunction > ( "Function UnrealEd.CurveEdPreset_CosWave.AreSettingsValid" );

	UCurveEdPreset_CosWave_execAreSettingsValid_Parms AreSettingsValid_Parms;
	AreSettingsValid_Parms.bIsSaving = bIsSaving;

	this->ProcessEvent ( pFnAreSettingsValid, &AreSettingsValid_Parms, NULL );

	return AreSettingsValid_Parms.ReturnValue;
};

// Function UnrealEd.CurveEdPreset_CosWave.GetDisplayName
// [0x00020002] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

struct FString UCurveEdPreset_CosWave::GetDisplayName ( )
{
	static UFunction* pFnGetDisplayName = NULL;

	if ( ! pFnGetDisplayName )
		pFnGetDisplayName = UObject::FindObject< UFunction > ( "Function UnrealEd.CurveEdPreset_CosWave.GetDisplayName" );

	UCurveEdPreset_CosWave_execGetDisplayName_Parms GetDisplayName_Parms;

	this->ProcessEvent ( pFnGetDisplayName, &GetDisplayName_Parms, NULL );

	return GetDisplayName_Parms.ReturnValue;
};

// Function UnrealEd.CurveEdPreset_LinearDecay.GenerateCurve
// [0x00420002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// TArray< float >                RequiredKeyInTimes             ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
// TArray< struct FPresetGeneratedPoint > GeneratedPoints                ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UCurveEdPreset_LinearDecay::GenerateCurve ( TArray< float >* RequiredKeyInTimes, TArray< struct FPresetGeneratedPoint >* GeneratedPoints )
{
	static UFunction* pFnGenerateCurve = NULL;

	if ( ! pFnGenerateCurve )
		pFnGenerateCurve = UObject::FindObject< UFunction > ( "Function UnrealEd.CurveEdPreset_LinearDecay.GenerateCurve" );

	UCurveEdPreset_LinearDecay_execGenerateCurve_Parms GenerateCurve_Parms;

	this->ProcessEvent ( pFnGenerateCurve, &GenerateCurve_Parms, NULL );

	if ( RequiredKeyInTimes )
		memcpy ( RequiredKeyInTimes, &GenerateCurve_Parms.RequiredKeyInTimes, 0xC );

	if ( GeneratedPoints )
		memcpy ( GeneratedPoints, &GenerateCurve_Parms.GeneratedPoints, 0xC );

	return GenerateCurve_Parms.ReturnValue;
};

// Function UnrealEd.CurveEdPreset_LinearDecay.GetRequiredKeyInTimes
// [0x00420002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// TArray< float >                RequiredKeyInTimes             ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UCurveEdPreset_LinearDecay::GetRequiredKeyInTimes ( TArray< float >* RequiredKeyInTimes )
{
	static UFunction* pFnGetRequiredKeyInTimes = NULL;

	if ( ! pFnGetRequiredKeyInTimes )
		pFnGetRequiredKeyInTimes = UObject::FindObject< UFunction > ( "Function UnrealEd.CurveEdPreset_LinearDecay.GetRequiredKeyInTimes" );

	UCurveEdPreset_LinearDecay_execGetRequiredKeyInTimes_Parms GetRequiredKeyInTimes_Parms;

	this->ProcessEvent ( pFnGetRequiredKeyInTimes, &GetRequiredKeyInTimes_Parms, NULL );

	if ( RequiredKeyInTimes )
		memcpy ( RequiredKeyInTimes, &GetRequiredKeyInTimes_Parms.RequiredKeyInTimes, 0xC );

	return GetRequiredKeyInTimes_Parms.ReturnValue;
};

// Function UnrealEd.CurveEdPreset_LinearDecay.AreSettingsValid
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned long                  bIsSaving                      ( CPF_Parm )

bool UCurveEdPreset_LinearDecay::AreSettingsValid ( unsigned long bIsSaving )
{
	static UFunction* pFnAreSettingsValid = NULL;

	if ( ! pFnAreSettingsValid )
		pFnAreSettingsValid = UObject::FindObject< UFunction > ( "Function UnrealEd.CurveEdPreset_LinearDecay.AreSettingsValid" );

	UCurveEdPreset_LinearDecay_execAreSettingsValid_Parms AreSettingsValid_Parms;
	AreSettingsValid_Parms.bIsSaving = bIsSaving;

	this->ProcessEvent ( pFnAreSettingsValid, &AreSettingsValid_Parms, NULL );

	return AreSettingsValid_Parms.ReturnValue;
};

// Function UnrealEd.CurveEdPreset_LinearDecay.GetDisplayName
// [0x00020002] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

struct FString UCurveEdPreset_LinearDecay::GetDisplayName ( )
{
	static UFunction* pFnGetDisplayName = NULL;

	if ( ! pFnGetDisplayName )
		pFnGetDisplayName = UObject::FindObject< UFunction > ( "Function UnrealEd.CurveEdPreset_LinearDecay.GetDisplayName" );

	UCurveEdPreset_LinearDecay_execGetDisplayName_Parms GetDisplayName_Parms;

	this->ProcessEvent ( pFnGetDisplayName, &GetDisplayName_Parms, NULL );

	return GetDisplayName_Parms.ReturnValue;
};

// Function UnrealEd.CurveEdPreset_Nothing.GetDisplayName
// [0x00020002] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

struct FString UCurveEdPreset_Nothing::GetDisplayName ( )
{
	static UFunction* pFnGetDisplayName = NULL;

	if ( ! pFnGetDisplayName )
		pFnGetDisplayName = UObject::FindObject< UFunction > ( "Function UnrealEd.CurveEdPreset_Nothing.GetDisplayName" );

	UCurveEdPreset_Nothing_execGetDisplayName_Parms GetDisplayName_Parms;

	this->ProcessEvent ( pFnGetDisplayName, &GetDisplayName_Parms, NULL );

	return GetDisplayName_Parms.ReturnValue;
};

// Function UnrealEd.CurveEdPreset_SineWave.GenerateCurve
// [0x00420002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// TArray< float >                RequiredKeyInTimes             ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
// TArray< struct FPresetGeneratedPoint > GeneratedPoints                ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UCurveEdPreset_SineWave::GenerateCurve ( TArray< float >* RequiredKeyInTimes, TArray< struct FPresetGeneratedPoint >* GeneratedPoints )
{
	static UFunction* pFnGenerateCurve = NULL;

	if ( ! pFnGenerateCurve )
		pFnGenerateCurve = UObject::FindObject< UFunction > ( "Function UnrealEd.CurveEdPreset_SineWave.GenerateCurve" );

	UCurveEdPreset_SineWave_execGenerateCurve_Parms GenerateCurve_Parms;

	this->ProcessEvent ( pFnGenerateCurve, &GenerateCurve_Parms, NULL );

	if ( RequiredKeyInTimes )
		memcpy ( RequiredKeyInTimes, &GenerateCurve_Parms.RequiredKeyInTimes, 0xC );

	if ( GeneratedPoints )
		memcpy ( GeneratedPoints, &GenerateCurve_Parms.GeneratedPoints, 0xC );

	return GenerateCurve_Parms.ReturnValue;
};

// Function UnrealEd.CurveEdPreset_SineWave.GetRequiredKeyInTimes
// [0x00420002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// TArray< float >                RequiredKeyInTimes             ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UCurveEdPreset_SineWave::GetRequiredKeyInTimes ( TArray< float >* RequiredKeyInTimes )
{
	static UFunction* pFnGetRequiredKeyInTimes = NULL;

	if ( ! pFnGetRequiredKeyInTimes )
		pFnGetRequiredKeyInTimes = UObject::FindObject< UFunction > ( "Function UnrealEd.CurveEdPreset_SineWave.GetRequiredKeyInTimes" );

	UCurveEdPreset_SineWave_execGetRequiredKeyInTimes_Parms GetRequiredKeyInTimes_Parms;

	this->ProcessEvent ( pFnGetRequiredKeyInTimes, &GetRequiredKeyInTimes_Parms, NULL );

	if ( RequiredKeyInTimes )
		memcpy ( RequiredKeyInTimes, &GetRequiredKeyInTimes_Parms.RequiredKeyInTimes, 0xC );

	return GetRequiredKeyInTimes_Parms.ReturnValue;
};

// Function UnrealEd.CurveEdPreset_SineWave.AreSettingsValid
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned long                  bIsSaving                      ( CPF_Parm )

bool UCurveEdPreset_SineWave::AreSettingsValid ( unsigned long bIsSaving )
{
	static UFunction* pFnAreSettingsValid = NULL;

	if ( ! pFnAreSettingsValid )
		pFnAreSettingsValid = UObject::FindObject< UFunction > ( "Function UnrealEd.CurveEdPreset_SineWave.AreSettingsValid" );

	UCurveEdPreset_SineWave_execAreSettingsValid_Parms AreSettingsValid_Parms;
	AreSettingsValid_Parms.bIsSaving = bIsSaving;

	this->ProcessEvent ( pFnAreSettingsValid, &AreSettingsValid_Parms, NULL );

	return AreSettingsValid_Parms.ReturnValue;
};

// Function UnrealEd.CurveEdPreset_SineWave.GetDisplayName
// [0x00020002] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

struct FString UCurveEdPreset_SineWave::GetDisplayName ( )
{
	static UFunction* pFnGetDisplayName = NULL;

	if ( ! pFnGetDisplayName )
		pFnGetDisplayName = UObject::FindObject< UFunction > ( "Function UnrealEd.CurveEdPreset_SineWave.GetDisplayName" );

	UCurveEdPreset_SineWave_execGetDisplayName_Parms GetDisplayName_Parms;

	this->ProcessEvent ( pFnGetDisplayName, &GetDisplayName_Parms, NULL );

	return GetDisplayName_Parms.ReturnValue;
};

// Function UnrealEd.CurveEdPreset_UserSet.SaveUserSetPointFile
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UCurveEdPreset_UserSet::SaveUserSetPointFile ( )
{
	static UFunction* pFnSaveUserSetPointFile = NULL;

	if ( ! pFnSaveUserSetPointFile )
		pFnSaveUserSetPointFile = UObject::FindObject< UFunction > ( "Function UnrealEd.CurveEdPreset_UserSet.SaveUserSetPointFile" );

	UCurveEdPreset_UserSet_execSaveUserSetPointFile_Parms SaveUserSetPointFile_Parms;

	this->ProcessEvent ( pFnSaveUserSetPointFile, &SaveUserSetPointFile_Parms, NULL );

	return SaveUserSetPointFile_Parms.ReturnValue;
};

// Function UnrealEd.CurveEdPreset_UserSet.LoadUserSetPointFile
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UCurveEdPreset_UserSet::LoadUserSetPointFile ( )
{
	static UFunction* pFnLoadUserSetPointFile = NULL;

	if ( ! pFnLoadUserSetPointFile )
		pFnLoadUserSetPointFile = UObject::FindObject< UFunction > ( "Function UnrealEd.CurveEdPreset_UserSet.LoadUserSetPointFile" );

	UCurveEdPreset_UserSet_execLoadUserSetPointFile_Parms LoadUserSetPointFile_Parms;

	this->ProcessEvent ( pFnLoadUserSetPointFile, &LoadUserSetPointFile_Parms, NULL );

	return LoadUserSetPointFile_Parms.ReturnValue;
};

// Function UnrealEd.CurveEdPreset_UserSet.SetCurve
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// TArray< struct FPresetGeneratedPoint > GeneratedPoints                ( CPF_Parm | CPF_NeedCtorLink )

bool UCurveEdPreset_UserSet::SetCurve ( TArray< struct FPresetGeneratedPoint > GeneratedPoints )
{
	static UFunction* pFnSetCurve = NULL;

	if ( ! pFnSetCurve )
		pFnSetCurve = UObject::FindObject< UFunction > ( "Function UnrealEd.CurveEdPreset_UserSet.SetCurve" );

	UCurveEdPreset_UserSet_execSetCurve_Parms SetCurve_Parms;
	memcpy ( &SetCurve_Parms.GeneratedPoints, &GeneratedPoints, 0xC );

	this->ProcessEvent ( pFnSetCurve, &SetCurve_Parms, NULL );

	return SetCurve_Parms.ReturnValue;
};

// Function UnrealEd.CurveEdPreset_UserSet.GenerateCurve
// [0x00420002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// TArray< float >                RequiredKeyInTimes             ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
// TArray< struct FPresetGeneratedPoint > GeneratedPoints                ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UCurveEdPreset_UserSet::GenerateCurve ( TArray< float >* RequiredKeyInTimes, TArray< struct FPresetGeneratedPoint >* GeneratedPoints )
{
	static UFunction* pFnGenerateCurve = NULL;

	if ( ! pFnGenerateCurve )
		pFnGenerateCurve = UObject::FindObject< UFunction > ( "Function UnrealEd.CurveEdPreset_UserSet.GenerateCurve" );

	UCurveEdPreset_UserSet_execGenerateCurve_Parms GenerateCurve_Parms;

	this->ProcessEvent ( pFnGenerateCurve, &GenerateCurve_Parms, NULL );

	if ( RequiredKeyInTimes )
		memcpy ( RequiredKeyInTimes, &GenerateCurve_Parms.RequiredKeyInTimes, 0xC );

	if ( GeneratedPoints )
		memcpy ( GeneratedPoints, &GenerateCurve_Parms.GeneratedPoints, 0xC );

	return GenerateCurve_Parms.ReturnValue;
};

// Function UnrealEd.CurveEdPreset_UserSet.GetRequiredKeyInTimes
// [0x00420002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// TArray< float >                RequiredKeyInTimes             ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UCurveEdPreset_UserSet::GetRequiredKeyInTimes ( TArray< float >* RequiredKeyInTimes )
{
	static UFunction* pFnGetRequiredKeyInTimes = NULL;

	if ( ! pFnGetRequiredKeyInTimes )
		pFnGetRequiredKeyInTimes = UObject::FindObject< UFunction > ( "Function UnrealEd.CurveEdPreset_UserSet.GetRequiredKeyInTimes" );

	UCurveEdPreset_UserSet_execGetRequiredKeyInTimes_Parms GetRequiredKeyInTimes_Parms;

	this->ProcessEvent ( pFnGetRequiredKeyInTimes, &GetRequiredKeyInTimes_Parms, NULL );

	if ( RequiredKeyInTimes )
		memcpy ( RequiredKeyInTimes, &GetRequiredKeyInTimes_Parms.RequiredKeyInTimes, 0xC );

	return GetRequiredKeyInTimes_Parms.ReturnValue;
};

// Function UnrealEd.CurveEdPreset_UserSet.AreSettingsValid
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned long                  bIsSaving                      ( CPF_Parm )

bool UCurveEdPreset_UserSet::AreSettingsValid ( unsigned long bIsSaving )
{
	static UFunction* pFnAreSettingsValid = NULL;

	if ( ! pFnAreSettingsValid )
		pFnAreSettingsValid = UObject::FindObject< UFunction > ( "Function UnrealEd.CurveEdPreset_UserSet.AreSettingsValid" );

	UCurveEdPreset_UserSet_execAreSettingsValid_Parms AreSettingsValid_Parms;
	AreSettingsValid_Parms.bIsSaving = bIsSaving;

	this->ProcessEvent ( pFnAreSettingsValid, &AreSettingsValid_Parms, NULL );

	return AreSettingsValid_Parms.ReturnValue;
};

// Function UnrealEd.CurveEdPreset_UserSet.GetDisplayName
// [0x00020002] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

struct FString UCurveEdPreset_UserSet::GetDisplayName ( )
{
	static UFunction* pFnGetDisplayName = NULL;

	if ( ! pFnGetDisplayName )
		pFnGetDisplayName = UObject::FindObject< UFunction > ( "Function UnrealEd.CurveEdPreset_UserSet.GetDisplayName" );

	UCurveEdPreset_UserSet_execGetDisplayName_Parms GetDisplayName_Parms;

	this->ProcessEvent ( pFnGetDisplayName, &GetDisplayName_Parms, NULL );

	return GetDisplayName_Parms.ReturnValue;
};

// Function UnrealEd.EditorUISceneClient.ShowDockingStacks
// [0x00020202] ( FUNC_Exec )
// Parameters infos:

void UEditorUISceneClient::ShowDockingStacks ( )
{
	static UFunction* pFnShowDockingStacks = NULL;

	if ( ! pFnShowDockingStacks )
		pFnShowDockingStacks = UObject::FindObject< UFunction > ( "Function UnrealEd.EditorUISceneClient.ShowDockingStacks" );

	UEditorUISceneClient_execShowDockingStacks_Parms ShowDockingStacks_Parms;

	this->ProcessEvent ( pFnShowDockingStacks, &ShowDockingStacks_Parms, NULL );
};

// Function UnrealEd.UISceneManager.GetSupportedUIStates
// [0x00420401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// class UClass*                  WidgetClass                    ( CPF_OptionalParm | CPF_Parm )
// TArray< struct FUIStateResourceInfo > out_SupportedStates            ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UUISceneManager::GetSupportedUIStates ( class UClass* WidgetClass, TArray< struct FUIStateResourceInfo >* out_SupportedStates )
{
	static UFunction* pFnGetSupportedUIStates = NULL;

	if ( ! pFnGetSupportedUIStates )
		pFnGetSupportedUIStates = UObject::FindObject< UFunction > ( "Function UnrealEd.UISceneManager.GetSupportedUIStates" );

	UUISceneManager_execGetSupportedUIStates_Parms GetSupportedUIStates_Parms;
	GetSupportedUIStates_Parms.WidgetClass = WidgetClass;

	pFnGetSupportedUIStates->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetSupportedUIStates, &GetSupportedUIStates_Parms, NULL );

	pFnGetSupportedUIStates->FunctionFlags |= 0x400;

	if ( out_SupportedStates )
		memcpy ( out_SupportedStates, &GetSupportedUIStates_Parms.out_SupportedStates, 0xC );
};

// Function UnrealEd.UILayer.FindNodeIndex
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UObject*                 NodeObject                     ( CPF_Const | CPF_Parm )

int UUILayer::FindNodeIndex ( class UObject* NodeObject )
{
	static UFunction* pFnFindNodeIndex = NULL;

	if ( ! pFnFindNodeIndex )
		pFnFindNodeIndex = UObject::FindObject< UFunction > ( "Function UnrealEd.UILayer.FindNodeIndex" );

	UUILayer_execFindNodeIndex_Parms FindNodeIndex_Parms;
	FindNodeIndex_Parms.NodeObject = NodeObject;

	pFnFindNodeIndex->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnFindNodeIndex, &FindNodeIndex_Parms, NULL );

	pFnFindNodeIndex->FunctionFlags |= 0x400;

	return FindNodeIndex_Parms.ReturnValue;
};

// Function UnrealEd.UILayer.RemoveNode
// [0x00420401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FUILayerNode            ExistingNode                   ( CPF_Const | CPF_Parm | CPF_OutParm )

bool UUILayer::RemoveNode ( struct FUILayerNode* ExistingNode )
{
	static UFunction* pFnRemoveNode = NULL;

	if ( ! pFnRemoveNode )
		pFnRemoveNode = UObject::FindObject< UFunction > ( "Function UnrealEd.UILayer.RemoveNode" );

	UUILayer_execRemoveNode_Parms RemoveNode_Parms;

	pFnRemoveNode->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnRemoveNode, &RemoveNode_Parms, NULL );

	pFnRemoveNode->FunctionFlags |= 0x400;

	if ( ExistingNode )
		memcpy ( ExistingNode, &RemoveNode_Parms.ExistingNode, 0xC );

	return RemoveNode_Parms.ReturnValue;
};

// Function UnrealEd.UILayer.InsertNode
// [0x00420401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            InsertIndex                    ( CPF_OptionalParm | CPF_Parm )
// struct FUILayerNode            NodeToInsert                   ( CPF_Const | CPF_Parm | CPF_OutParm )

bool UUILayer::InsertNode ( int InsertIndex, struct FUILayerNode* NodeToInsert )
{
	static UFunction* pFnInsertNode = NULL;

	if ( ! pFnInsertNode )
		pFnInsertNode = UObject::FindObject< UFunction > ( "Function UnrealEd.UILayer.InsertNode" );

	UUILayer_execInsertNode_Parms InsertNode_Parms;
	InsertNode_Parms.InsertIndex = InsertIndex;

	pFnInsertNode->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInsertNode, &InsertNode_Parms, NULL );

	pFnInsertNode->FunctionFlags |= 0x400;

	if ( NodeToInsert )
		memcpy ( NodeToInsert, &InsertNode_Parms.NodeToInsert, 0xC );

	return InsertNode_Parms.ReturnValue;
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif