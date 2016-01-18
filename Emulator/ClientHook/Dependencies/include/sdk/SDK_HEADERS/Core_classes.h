/*
#############################################################################################
# All Points Bulletin Reloaded (1.6) SDK
# Generated with TheFeckless UE3 SDK Generator v1.2_Beta-Rev.39
# ========================================================================================= #
# File: Core_classes.h
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

#define CONST_INDEX_NONE                                         -1
#define CONST_RadToUnrRot                                        10430.3783504704527
#define CONST_UnrRotToRad                                        0.00009587379924285
#define CONST_DegToRad                                           0.017453292519943296
#define CONST_RadToDeg                                           57.295779513082321600
#define CONST_Pi                                                 3.1415926535897932
#define CONST_MaxInt                                             0x7fffffff

/*
# ========================================================================================= #
# Enums
# ========================================================================================= #
*/

// Enum Core.Object.EGameEpoch
/*enum EGameEpoch
{
	GAMEEPOCH_InitialLoad                              = 0,
	GAMEEPOCH_PermanentSet                             = 1,
	GAMEEPOCH_StaticMapSet                             = 2,
	GAMEEPOCH_CleanupStaticMapSet                      = 3,
	GAMEEPOCH_DynamicSet                               = 4,
	GAMEEPOCH_DynamicSet_Streaming                     = 5,
	GAMEEPOCH_MAX                                      = 6
};*/

// Enum Core.Object.EInputEvent
/*enum EInputEvent
{
	IE_Pressed                                         = 0,
	IE_Released                                        = 1,
	IE_Repeat                                          = 2,
	IE_DoubleClick                                     = 3,
	IE_Axis                                            = 4,
	IE_MAX                                             = 5
};*/

// Enum Core.Object.ETickingGroup
/*enum ETickingGroup
{
	TG_PreAsyncWork                                    = 0,
	TG_DuringAsyncWork                                 = 1,
	TG_PostAsyncWork                                   = 2,
	TG_PostUpdateWork                                  = 3,
	TG_MAX                                             = 4
};*/

// Enum Core.Object.ECollisionCategory
/*enum ECollisionCategory
{
	COL_None                                           = 0,
	COL_AutoAssign                                     = 1,
	COL_StaticEnvironment                              = 2,
	COL_InvisibleBlockCharacter                        = 3,
	COL_InvisibleBlockAllVehicle                       = 4,
	COL_InvisibleBlockCharacterVehicleAndDynamicEnviro = 5,
	COL_KinematicEnvironment                           = 6,
	COL_PseudoKinematicEnvironment                     = 7,
	COL_DynamicEnvironment                             = 8,
	COL_AbstractItem                                   = 9,
	COL_CosmeticKinematic                              = 10,
	COL_CosmeticDynamic                                = 11,
	COL_PlayerCharacter                                = 12,
	COL_PlayerVehicle                                  = 13,
	COL_DynamicSensor                                  = 14,
	COL_InvisibleBlockCharacterVehicleAndDynamicEnviroSensor = 15,
	COL_Wheel                                          = 16,
	COL_Temp_KinematicLCVehicle                        = 17,
	COL_Temp_PseudoKinematicLCVehicle                  = 18,
	COL_Temp_DynamicLCVehicle                          = 19,
	COL_LCPedestrian                                   = 20,
	COL_PlayerCharacterPvPLocked                       = 21,
	COL_MAX                                            = 22
};*/

// Enum Core.Object.EInterpCurveMode
/*enum EInterpCurveMode
{
	CIM_Linear                                         = 0,
	CIM_CurveAuto                                      = 1,
	CIM_Constant                                       = 2,
	CIM_CurveUser                                      = 3,
	CIM_CurveBreak                                     = 4,
	CIM_MAX                                            = 5
};*/

// Enum Core.Object.EInterpMethodType
/*enum EInterpMethodType
{
	IMT_UseFixedTangentEval                            = 0,
	IMT_UseBrokenTangentEval                           = 1,
	IMT_MAX                                            = 2
};*/

// Enum Core.Object.EAxis
/*enum EAxis
{
	AXIS_NONE                                          = 0,
	AXIS_X                                             = 1,
	AXIS_Y                                             = 2,
	AXIS_BLANK                                         = 3,
	AXIS_Z                                             = 4,
	AXIS_MAX                                           = 5
};*/

// Enum Core.cAPBCoreSDD.etCustomisationMode
/*enum etCustomisationMode
{
	kCCContext_All                                     = 0,
	kCCContext_Creation                                = 1,
	kCCContext_SocialDistrict                          = 2,
	kCCContext_MAX                                     = 3
};*/

// Enum Core.cAPBCoreSDD.etDistrictType
/*enum etDistrictType
{
	DistrictType_Action                                = 0,
	DistrictType_SocialEnforcer                        = 1,
	DistrictType_SocialCriminal                        = 2,
	DistrictType_SocialMixedFaction                    = 3,
	DistrictType_MAX                                   = 4
};*/

// Enum Core.cAPBCoreSDD.etGender
/*enum etGender
{
	kGENDER_None                                       = 0,
	kGENDER_Male                                       = 1,
	kGENDER_Female                                     = 2,
	kGENDER_Both                                       = 3,
	kGENDER_MAX                                        = 4
};*/

// Enum Core.cStatWatchManager.ESpikeDetectionMethod
/*enum ESpikeDetectionMethod
{
	SD_FromLast                                        = 0,
	SD_FromMean                                        = 1,
	SD_StandardDeviation                               = 2,
	SD_MAX                                             = 3
};*/

// Enum Core.DistributionVector.EDistributionVectorLockFlags
/*enum EDistributionVectorLockFlags
{
	EDVLF_None                                         = 0,
	EDVLF_XY                                           = 1,
	EDVLF_XZ                                           = 2,
	EDVLF_YZ                                           = 3,
	EDVLF_XYZ                                          = 4,
	EDVLF_MAX                                          = 5
};*/

// Enum Core.DistributionVector.EDistributionVectorMirrorFlags
/*enum EDistributionVectorMirrorFlags
{
	EDVMF_Same                                         = 0,
	EDVMF_Different                                    = 1,
	EDVMF_Mirror                                       = 2,
	EDVMF_MAX                                          = 3
};*/


/*
# ========================================================================================= #
# Classes
# ========================================================================================= #
*/

// Class Core.Object
// 0x0040
class UObject
{
public:
	struct FPointer                                    VfTableObject;                                    		// 0x0000 (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	int                                                ObjectInternalInteger;                            		// 0x0004 (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	struct FQWord                                      ObjectFlags;                                      		// 0x0008 (0x0008) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	struct FPointer                                    HashNext;                                         		// 0x0010 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	struct FPointer                                    HashOuterNext;                                    		// 0x0014 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	struct FPointer                                    StateFrame;                                       		// 0x0018 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	class UObject*                                     Linker;                                           		// 0x001C (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	struct FPointer                                    LinkerIndex;                                      		// 0x0020 (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	int                                                NetIndex;                                         		// 0x0024 (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	int                                                nDynRefsIndex;                                    		// 0x0028 (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	class UObject*                                     Outer;                                            		// 0x002C (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	struct FName                                       Name;                                             		// 0x0030 (0x0008) [0x0000000000021003]              ( CPF_Edit | CPF_Const | CPF_Native | CPF_EditConst )
	class UClass*                                      Class;                                            		// 0x0038 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	class UObject*                                     ObjectArchetype;                                  		// 0x003C (0x0004) [0x0000000000021003]              ( CPF_Edit | CPF_Const | CPF_Native | CPF_EditConst )

private:
	static UClass* pClassPointer;

public:
	static TArray< UObject* >* GObjObjects(); 

	char* GetName(); 
	char* GetNameCPP(); 
	char* GetFullName(); 

	template< class T > static T* FindObject ( char* ObjectFullName ); 
	static UClass* FindClass ( char* ClassFullName ); 

	bool IsA ( UClass* pClass ); 

	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Core.Object" );

		return pClassPointer;
	};

	struct FVector TransformVectorByRotation ( struct FRotator SourceRotation, struct FVector SourceVector, unsigned long bInverse );
	struct FName GetPackageName ( );
	bool IsSafeBuild ( );
	bool IsUserBuild ( );
	unsigned char GetGameEpoch ( );
	void SetGameEpoch ( unsigned char eNewEpoch );
	void RemoveFromRoot ( );
	void AddToRoot ( );
	void NotifyReferenceToObject ( class UObject* RefObject );
	bool IsPendingKill ( );
	float ByteToFloat ( unsigned char inputByte, unsigned long bSigned );
	unsigned char FloatToByte ( float inputFloat, unsigned long bSigned );
	float UnwindHeading ( float A );
	float FindDeltaAngle ( float A1, float A2 );
	float GetHeadingAngle ( struct FVector Dir );
	void GetAngularDegreesFromRadians ( struct FVector2D* OutFOV );
	void GetAngularFromDotDist ( struct FVector2D DotDist, struct FVector2D* OutAngDist );
	bool GetAngularDistance ( struct FVector Direction, struct FVector AxisX, struct FVector AxisY, struct FVector AxisZ, struct FVector2D* OutAngularDist );
	bool GetDotDistance ( struct FVector Direction, struct FVector AxisX, struct FVector AxisY, struct FVector AxisZ, struct FVector2D* OutDotDist );
	bool PointInBox ( struct FVector Point, struct FVector Location, struct FVector Extent );
	float PointDistToPlane ( struct FVector Point, struct FRotator Orientation, struct FVector Origin, struct FVector* out_ClosestPoint );
	float PointDistToLine ( struct FVector Point, struct FVector Line, struct FVector Origin, struct FVector* OutClosestPoint );
	bool GetPerObjectConfigSections ( class UClass* SearchClass, class UObject* ObjectOuter, int MaxResults, TArray< struct FString >* out_SectionNames );
	void StaticSaveConfig ( );
	void SaveConfig ( );
	class UObject* FindObject ( struct FString ObjectName, class UClass* ObjectClass );
	class UObject* DynamicLoadObject ( struct FString ObjectName, class UClass* ObjectClass, unsigned long MayFail );
	struct FName GetEnum ( class UObject* E, int I );
	void Disable ( struct FName ProbeFunc );
	void Enable ( struct FName ProbeFunc );
	void eventContinuedState ( );
	void eventPausedState ( );
	void eventPoppedState ( );
	void eventPushedState ( );
	void eventEndState ( struct FName NextStateName );
	void eventBeginState ( struct FName PreviousStateName );
	void DumpStateStack ( );
	void PopState ( unsigned long bPopAll );
	void PushState ( struct FName NewState, struct FName NewLabel );
	struct FName GetStateName ( );
	bool IsChildState ( struct FName TestState, struct FName TestParentState );
	bool IsInState ( struct FName TestState, unsigned long bTestStateStack );
	void GotoState ( struct FName NewState, struct FName Label, unsigned long bForceEvents, unsigned long bKeepStack );
	bool IsUTracing ( );
	void SetUTracing ( unsigned long bShouldUTrace );
	struct FName GetFuncName ( );
	void ScriptTrace ( );
	bool LogReturnFalse ( struct FString logString );
	struct FString Localize ( struct FString SectionName, struct FString KeyName, struct FString PackageName );
	void WarnInternal ( struct FString S );
	void LogInternal ( struct FString S, struct FName Tag );
	struct FLinearColor Subtract_LinearColorLinearColor ( struct FLinearColor A, struct FLinearColor B );
	struct FLinearColor Multiply_LinearColorFloat ( struct FLinearColor LC, float Mult );
	struct FLinearColor ColorToLinearColor ( struct FColor OldColor );
	struct FLinearColor MakeLinearColor ( float R, float G, float B, float A );
	struct FColor MakeColor ( unsigned char R, unsigned char G, unsigned char B, unsigned char A );
	struct FColor Add_ColorColor ( struct FColor A, struct FColor B );
	struct FColor Multiply_ColorFloat ( struct FColor A, float B );
	struct FColor Multiply_FloatColor ( float A, struct FColor B );
	struct FColor Subtract_ColorColor ( struct FColor A, struct FColor B );
	struct FVector2D vect2d ( float InX, float InY );
	float GetRangePctByValue ( struct FVector2D Range, float Value );
	float GetRangeValueByPct ( struct FVector2D Range, float Pct );
	struct FQuat Subtract_QuatQuat ( struct FQuat A, struct FQuat B );
	struct FQuat Add_QuatQuat ( struct FQuat A, struct FQuat B );
	struct FQuat QuatSlerp ( struct FQuat A, struct FQuat B, float Alpha, unsigned long bShortestPath );
	struct FRotator QuatToRotator ( struct FQuat A );
	struct FQuat QuatFromRotator ( struct FRotator A );
	struct FQuat QuatFromAxisAndAngle ( struct FVector Axis, float Angle );
	struct FQuat QuatFindBetween ( struct FVector A, struct FVector B );
	struct FVector QuatRotateVector ( struct FQuat A, struct FVector B );
	struct FQuat QuatInvert ( struct FQuat A );
	float QuatDot ( struct FQuat A, struct FQuat B );
	struct FQuat QuatProduct ( struct FQuat A, struct FQuat B );
	struct FVector MatrixGetOrigin ( struct FMatrix TM );
	struct FRotator MatrixGetRotator ( struct FMatrix TM );
	struct FMatrix MakeRotationTranslationMatrix ( struct FVector Translation, struct FRotator Rotation );
	struct FVector InverseTransformNormal ( struct FMatrix TM, struct FVector A );
	struct FVector TransformNormal ( struct FMatrix TM, struct FVector A );
	struct FVector InverseTransformVector ( struct FMatrix TM, struct FVector A );
	struct FVector TransformVector ( struct FMatrix TM, struct FVector A );
	struct FMatrix Multiply_MatrixMatrix ( struct FMatrix A, struct FMatrix B );
	bool NotEqual_NameName ( struct FName A, struct FName B );
	bool EqualEqual_NameName ( struct FName A, struct FName B );
	bool IsA ( struct FName ClassName );
	bool ClassIsChildOf ( class UClass* TestClass, class UClass* ParentClass );
	bool NotEqual_InterfaceInterface ( class UInterface* A, class UInterface* B );
	bool EqualEqual_InterfaceInterface ( class UInterface* A, class UInterface* B );
	bool NotEqual_ObjectObject ( class UObject* A, class UObject* B );
	bool EqualEqual_ObjectObject ( class UObject* A, class UObject* B );
	struct FString PathName ( class UObject* CheckObject );
	void ParseStringIntoArray ( struct FString BaseString, struct FString delim, unsigned long bCullEmpty, TArray< struct FString >* Pieces );
	void JoinArray ( TArray< struct FString > StringArray, struct FString delim, unsigned long bIgnoreBlanks, struct FString* out_Result );
	struct FString GetRightMost ( struct FString Text );
	struct FString Split ( struct FString Text, struct FString SplitStr, unsigned long bOmitSplitStr );
	struct FString Repl ( struct FString Src, struct FString Match, struct FString With, unsigned long bCaseSensitive );
	int Asc ( struct FString S );
	struct FString Chr ( int I );
	struct FString Locs ( struct FString S );
	struct FString Caps ( struct FString S );
	struct FString Right ( struct FString S, int I );
	struct FString Left ( struct FString S, int I );
	struct FString Mid ( struct FString S, int I, int J );
	int InStr ( struct FString S, struct FString T, unsigned long bSearchFromRight );
	int Len ( struct FString S );
	struct FString SubtractEqual_StrStr ( struct FString B, struct FString* A );
	struct FString AtEqual_StrStr ( struct FString B, struct FString* A );
	struct FString ConcatEqual_StrStr ( struct FString B, struct FString* A );
	bool ComplementEqual_StrStr ( struct FString A, struct FString B );
	bool NotEqual_StrStr ( struct FString A, struct FString B );
	bool EqualEqual_StrStr ( struct FString A, struct FString B );
	bool GreaterEqual_StrStr ( struct FString A, struct FString B );
	bool LessEqual_StrStr ( struct FString A, struct FString B );
	bool Greater_StrStr ( struct FString A, struct FString B );
	bool Less_StrStr ( struct FString A, struct FString B );
	struct FString At_StrStr ( struct FString A, struct FString B );
	struct FString Concat_StrStr ( struct FString A, struct FString B );
	bool SClampRotAxis ( float DeltaTime, int ViewAxis, int MaxLimit, int MinLimit, float InterpolationSpeed, int* out_DeltaViewAxis );
	int ClampRotAxisFromRange ( int Current, int Min, int Max );
	int ClampRotAxisFromBase ( int Current, int Center, int MaxDelta );
	void ClampRotAxis ( int ViewAxis, int MaxLimit, int MinLimit, int* out_DeltaViewAxis );
	float RSize ( struct FRotator R );
	float RDiff ( struct FRotator A, struct FRotator B );
	int NormalizeRotAxis ( int Angle );
	struct FRotator RInterpTo ( struct FRotator Current, struct FRotator Target, float DeltaTime, float InterpSpeed );
	struct FRotator RSmerp ( struct FRotator A, struct FRotator B, float Alpha, unsigned long bShortestPath );
	struct FRotator RLerp ( struct FRotator A, struct FRotator B, float Alpha, unsigned long bShortestPath );
	struct FRotator Normalize ( struct FRotator Rot );
	struct FRotator OrthoRotation ( struct FVector X, struct FVector Y, struct FVector Z );
	struct FRotator RotRand ( unsigned long bRoll );
	void GetUnAxes ( struct FRotator A, struct FVector* X, struct FVector* Y, struct FVector* Z );
	void GetAxes ( struct FRotator A, struct FVector* X, struct FVector* Y, struct FVector* Z );
	bool ClockwiseFrom_IntInt ( int A, int B );
	struct FRotator SubtractEqual_RotatorRotator ( struct FRotator B, struct FRotator* A );
	struct FRotator AddEqual_RotatorRotator ( struct FRotator B, struct FRotator* A );
	struct FRotator Subtract_RotatorRotator ( struct FRotator A, struct FRotator B );
	struct FRotator Add_RotatorRotator ( struct FRotator A, struct FRotator B );
	struct FRotator DivideEqual_RotatorFloat ( float B, struct FRotator* A );
	struct FRotator MultiplyEqual_RotatorFloat ( float B, struct FRotator* A );
	struct FRotator Divide_RotatorFloat ( struct FRotator A, float B );
	struct FRotator Multiply_FloatRotator ( float A, struct FRotator B );
	struct FRotator Multiply_RotatorFloat ( struct FRotator A, float B );
	bool NotEqual_RotatorRotator ( struct FRotator A, struct FRotator B );
	bool EqualEqual_RotatorRotator ( struct FRotator A, struct FRotator B );
	struct FVector ClampLength ( struct FVector V, float MaxLength );
	struct FVector VInterpTo ( struct FVector Current, struct FVector Target, float DeltaTime, float InterpSpeed );
	bool IsZero ( struct FVector A );
	struct FVector ProjectOnTo ( struct FVector X, struct FVector Y );
	struct FVector MirrorVectorByNormal ( struct FVector InVect, struct FVector InNormal );
	struct FVector VRand ( );
	struct FVector VSmerp ( struct FVector A, struct FVector B, float Alpha );
	struct FVector VLerp ( struct FVector A, struct FVector B, float Alpha );
	struct FVector Normal ( struct FVector A );
	float VSizeSq2D ( struct FVector A );
	float VSizeSq ( struct FVector A );
	float VSize2D ( struct FVector A );
	float VSize ( struct FVector A );
	struct FVector SubtractEqual_VectorVector ( struct FVector B, struct FVector* A );
	struct FVector AddEqual_VectorVector ( struct FVector B, struct FVector* A );
	struct FVector DivideEqual_VectorFloat ( float B, struct FVector* A );
	struct FVector MultiplyEqual_VectorVector ( struct FVector B, struct FVector* A );
	struct FVector MultiplyEqual_VectorFloat ( float B, struct FVector* A );
	struct FVector Cross_VectorVector ( struct FVector A, struct FVector B );
	float Dot_VectorVector ( struct FVector A, struct FVector B );
	bool NotEqual_VectorVector ( struct FVector A, struct FVector B );
	bool EqualEqual_VectorVector ( struct FVector A, struct FVector B );
	struct FVector GreaterGreater_VectorRotator ( struct FVector A, struct FRotator B );
	struct FVector LessLess_VectorRotator ( struct FVector A, struct FRotator B );
	struct FVector Subtract_VectorVector ( struct FVector A, struct FVector B );
	struct FVector Add_VectorVector ( struct FVector A, struct FVector B );
	struct FVector Divide_VectorFloat ( struct FVector A, float B );
	struct FVector Multiply_VectorVector ( struct FVector A, struct FVector B );
	struct FVector Multiply_FloatVector ( float A, struct FVector B );
	struct FVector Multiply_VectorFloat ( struct FVector A, float B );
	struct FVector Subtract_PreVector ( struct FVector A );
	float FInterpTo ( float Current, float Target, float DeltaTime, float InterpSpeed );
	float FPctByRange ( float Value, float InMin, float InMax );
	float RandRange ( float InMin, float InMax );
	float FInterpEaseInOut ( float A, float B, float Alpha, float Exp );
	float FInterpEaseOut ( float A, float B, float Alpha, float Exp );
	float FInterpEaseIn ( float A, float B, float Alpha, float Exp );
	float FCubicInterp ( float P0, float T0, float P1, float T1, float A );
	int FFloor ( float A );
	int Round ( float A );
	float Lerp ( float A, float B, float Alpha );
	float FClamp ( float V, float A, float B );
	float FMax ( float A, float B );
	float FMin ( float A, float B );
	float FRand ( );
	float Square ( float A );
	float Sqrt ( float A );
	float Loge ( float A );
	float Exp ( float A );
	float Atan ( float A, float B );
	float Tan ( float A );
	float Acos ( float A );
	float Cos ( float A );
	float Asin ( float A );
	float Sin ( float A );
	float Abs ( float A );
	float SubtractEqual_FloatFloat ( float B, float* A );
	float AddEqual_FloatFloat ( float B, float* A );
	float DivideEqual_FloatFloat ( float B, float* A );
	float MultiplyEqual_FloatFloat ( float B, float* A );
	bool NotEqual_FloatFloat ( float A, float B );
	bool ComplementEqual_FloatFloat ( float A, float B );
	bool EqualEqual_FloatFloat ( float A, float B );
	bool GreaterEqual_FloatFloat ( float A, float B );
	bool LessEqual_FloatFloat ( float A, float B );
	bool Greater_FloatFloat ( float A, float B );
	bool Less_FloatFloat ( float A, float B );
	float Subtract_FloatFloat ( float A, float B );
	float Add_FloatFloat ( float A, float B );
	float Percent_FloatFloat ( float A, float B );
	float Divide_FloatFloat ( float A, float B );
	float Multiply_FloatFloat ( float A, float B );
	float MultiplyMultiply_FloatFloat ( float Base, float Exp );
	float Subtract_PreFloat ( float A );
	struct FString ToHex ( int A );
	int Clamp ( int V, int A, int B );
	int Max ( int A, int B );
	int Min ( int A, int B );
	int Rand ( int Max );
	int SubtractSubtract_Int ( int* A );
	int AddAdd_Int ( int* A );
	int SubtractSubtract_PreInt ( int* A );
	int AddAdd_PreInt ( int* A );
	int SubtractEqual_IntInt ( int B, int* A );
	int AddEqual_IntInt ( int B, int* A );
	int DivideEqual_IntFloat ( float B, int* A );
	int MultiplyEqual_IntFloat ( float B, int* A );
	int Or_IntInt ( int A, int B );
	int Xor_IntInt ( int A, int B );
	int And_IntInt ( int A, int B );
	bool NotEqual_IntInt ( int A, int B );
	bool EqualEqual_IntInt ( int A, int B );
	bool GreaterEqual_IntInt ( int A, int B );
	bool LessEqual_IntInt ( int A, int B );
	bool Greater_IntInt ( int A, int B );
	bool Less_IntInt ( int A, int B );
	int GreaterGreaterGreater_IntInt ( int A, int B );
	int GreaterGreater_IntInt ( int A, int B );
	int LessLess_IntInt ( int A, int B );
	int Subtract_IntInt ( int A, int B );
	int Add_IntInt ( int A, int B );
	int Divide_IntInt ( int A, int B );
	int Multiply_IntInt ( int A, int B );
	int Subtract_PreInt ( int A );
	int Complement_PreInt ( int A );
	unsigned char SubtractSubtract_Byte ( unsigned char* A );
	unsigned char AddAdd_Byte ( unsigned char* A );
	unsigned char SubtractSubtract_PreByte ( unsigned char* A );
	unsigned char AddAdd_PreByte ( unsigned char* A );
	unsigned char SubtractEqual_ByteByte ( unsigned char B, unsigned char* A );
	unsigned char AddEqual_ByteByte ( unsigned char B, unsigned char* A );
	unsigned char DivideEqual_ByteByte ( unsigned char B, unsigned char* A );
	unsigned char MultiplyEqual_ByteFloat ( float B, unsigned char* A );
	unsigned char MultiplyEqual_ByteByte ( unsigned char B, unsigned char* A );
	bool OrOr_BoolBool ( unsigned long A, unsigned long B );
	bool XorXor_BoolBool ( unsigned long A, unsigned long B );
	bool AndAnd_BoolBool ( unsigned long A, unsigned long B );
	bool NotEqual_BoolBool ( unsigned long A, unsigned long B );
	bool EqualEqual_BoolBool ( unsigned long A, unsigned long B );
	bool Not_PreBool ( unsigned long A );

	// Virtual Functions
	virtual void VirtualFunction00 ( );																			// 0x1098F0C0 (0x00)
	virtual void VirtualFunction01 ( );																			// 0x109B7930 (0x04)
	virtual void VirtualFunction02 ( );																			// 0x109D1150 (0x08)
	virtual void VirtualFunction03 ( );																			// 0x109483B0 (0x0C)
	virtual void VirtualFunction04 ( );																			// 0x11168CE0 (0x10)
	virtual void VirtualFunction05 ( );																			// 0x109AAD60 (0x14)
	virtual void VirtualFunction06 ( );																			// 0x11168D30 (0x18)
	virtual void VirtualFunction07 ( );																			// 0x1091B0D0 (0x1C)
	virtual void VirtualFunction08 ( );																			// 0x1098F090 (0x20)
	virtual void VirtualFunction09 ( );																			// 0x10924920 (0x24)
	virtual void VirtualFunction10 ( );																			// 0x10EFA420 (0x28)
	virtual void VirtualFunction11 ( );																			// 0x10915AF0 (0x2C)
	virtual void VirtualFunction12 ( );																			// 0x10997370 (0x30)
	virtual void VirtualFunction13 ( );																			// 0x109BC390 (0x34)
	virtual void VirtualFunction14 ( );																			// 0x10915BF0 (0x38)
	virtual void VirtualFunction15 ( );																			// 0x1090EB00 (0x3C)
	virtual void VirtualFunction16 ( );																			// 0x10915A60 (0x40)
	virtual void VirtualFunction17 ( );																			// 0x10924410 (0x44)
	virtual void VirtualFunction18 ( );																			// 0x10915A70 (0x48)
	virtual void VirtualFunction19 ( );																			// 0x10918680 (0x4C)
	virtual void VirtualFunction20 ( );																			// 0x1091AD20 (0x50)
	virtual void VirtualFunction21 ( );																			// 0x10915AD0 (0x54)
	virtual void VirtualFunction22 ( );																			// 0x10915AE0 (0x58)
	virtual void VirtualFunction23 ( );																			// 0x11168D30 (0x5C)
	virtual void VirtualFunction24 ( );																			// 0x11168D30 (0x60)
	virtual void VirtualFunction25 ( );																			// 0x10915A80 (0x64)
	virtual void VirtualFunction26 ( );																			// 0x10915A90 (0x68)
	virtual void VirtualFunction27 ( );																			// 0x10915AA0 (0x6C)
	virtual void VirtualFunction28 ( );																			// 0x10915AB0 (0x70)
	virtual void VirtualFunction29 ( );																			// 0x10915AC0 (0x74)
	virtual void VirtualFunction30 ( );																			// 0x1091AE10 (0x78)
	virtual void VirtualFunction31 ( );																			// 0x10924480 (0x7C)
	virtual void VirtualFunction32 ( );																			// 0x109246D0 (0x80)
	virtual void VirtualFunction33 ( );																			// 0x109B1640 (0x84)
	virtual void VirtualFunction34 ( );																			// 0x1093A130 (0x88)
	virtual void VirtualFunction35 ( );																			// 0x1090EB20 (0x8C)
	virtual void VirtualFunction36 ( );																			// 0x1090EB50 (0x90)
	virtual void VirtualFunction37 ( );																			// 0x1090EB80 (0x94)
	virtual void VirtualFunction38 ( );																			// 0x10F57280 (0x98)
	virtual void VirtualFunction39 ( );																			// 0x11168D30 (0x9C)
	virtual void VirtualFunction40 ( );																			// 0x10B8C6A0 (0xA0)
	virtual void VirtualFunction41 ( );																			// 0x10B9C160 (0xA4)
	virtual void VirtualFunction42 ( );																			// 0x10942180 (0xA8)
	virtual void VirtualFunction43 ( );																			// 0x109AB120 (0xAC)
	virtual void VirtualFunction44 ( );																			// 0x11168CE0 (0xB0)
	virtual void VirtualFunction45 ( );																			// 0x11168CE0 (0xB4)
	virtual void VirtualFunction46 ( );																			// 0x1098EEF0 (0xB8)
	virtual void VirtualFunction47 ( );																			// 0x109D0F00 (0xBC)
	virtual void VirtualFunction48 ( );																			// 0x1091B940 (0xC0)
	virtual void VirtualFunction49 ( );																			// 0x10EFAD80 (0xC4)
	virtual void VirtualFunction50 ( );																			// 0x10915A40 (0xC8)
	virtual void VirtualFunction51 ( );																			// 0x109419E0 (0xCC)
	virtual void VirtualFunction52 ( );																			// 0x10939860 (0xD0)
	virtual void VirtualFunction53 ( );																			// 0x11168D30 (0xD4)
	virtual void VirtualFunction54 ( );																			// 0x10F57280 (0xD8)
	virtual void VirtualFunction55 ( );																			// 0x1090EAC0 (0xDC)
	virtual void VirtualFunction56 ( );																			// 0x1090EAE0 (0xE0)
	virtual void VirtualFunction57 ( );																			// 0x109428E0 (0xE4)
	virtual void VirtualFunction58 ( );																			// 0x10915F90 (0xE8)
	virtual void VirtualFunction59 ( );																			// 0x109AC470 (0xEC)

	virtual void ProcessEvent (class UFunction* pFunction, void* pParms, void* pResult = NULL );
};

UClass* UObject::pClassPointer = NULL;

// Class Core.cBulkDataCollection
// 0x0018 (0x0058 - 0x0040)
class UcBulkDataCollection : public UObject
{
public:
	TArray< struct FtOutOfLineBulkData >               OutOfLineBulkData;                                		// 0x0040 (0x000C) [0x0000000000003000]              ( CPF_Native | CPF_Transient )
	TArray< int >                                      ChunkSizes;                                       		// 0x004C (0x000C) [0x0000000000003000]              ( CPF_Native | CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Core.cBulkDataCollection" );

		return pClassPointer;
	};

};

UClass* UcBulkDataCollection::pClassPointer = NULL;

// Class Core.cStatWatchManager
// 0x005C (0x009C - 0x0040)
class UcStatWatchManager : public UObject
{
public:
	unsigned long                                      m_bLogSpikesWithMinutedSummary : 1;               		// 0x0040 (0x0004) [0x0000000000001000] [0x00000001] ( CPF_Native )
	unsigned long                                      m_bSuppressSummaryStats : 1;                      		// 0x0040 (0x0004) [0x0000000000001000] [0x00000002] ( CPF_Native )
	struct Fdword                                      m_nFlagsRaisedThisFrame;                          		// 0x0044 (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FMap_Mirror                                 m_WatchMap;                                       		// 0x0048 (0x003C) [0x0000000000003002]              ( CPF_Const | CPF_Native | CPF_Transient )
	TArray< struct FSpikeRecord >                      m_Records;                                        		// 0x0084 (0x000C) [0x0000000000003002]              ( CPF_Const | CPF_Native | CPF_Transient )
	TArray< struct FSpikeRecord >                      m_ThisFrameRecords;                               		// 0x0090 (0x000C) [0x0000000000003002]              ( CPF_Const | CPF_Native | CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Core.cStatWatchManager" );

		return pClassPointer;
	};

	void LogRecord ( struct FSpikeRecord theRecord );
	void LogCurrentRecords ( );
};

UClass* UcStatWatchManager::pClassPointer = NULL;

// Class Core.cAPBCoreSDD
// 0x0000 (0x0040 - 0x0040)
class UcAPBCoreSDD : public UObject
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Core.cAPBCoreSDD" );

		return pClassPointer;
	};

	unsigned char CastGender ( int I );
	unsigned char CastDistrictType ( int I );
	unsigned char CastCustomisationMode ( int I );
};

UClass* UcAPBCoreSDD::pClassPointer = NULL;

// Class Core.Factory
// 0x0034 (0x0074 - 0x0040)
class UFactory : public UObject
{
public:
	unsigned char                                      UnknownData00[ 0x8 ];                             		// 0x0040 (0x0008) MISSED OFFSET
	struct FString                                     Description;                                      		// 0x0048 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           Formats;                                          		// 0x0054 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData01[ 0x14 ];                            		// 0x0060 (0x0014) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Core.Factory" );

		return pClassPointer;
	};

};

UClass* UFactory::pClassPointer = NULL;

// Class Core.TextBufferFactory
// 0x0000 (0x0074 - 0x0074)
class UTextBufferFactory : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Core.TextBufferFactory" );

		return pClassPointer;
	};

};

UClass* UTextBufferFactory::pClassPointer = NULL;

// Class Core.TextBuffer
// 0x0020 (0x0060 - 0x0040)
class UTextBuffer : public UObject
{
public:
	unsigned char                                      UnknownData00[ 0x20 ];                            		// 0x0040 (0x0020) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Core.TextBuffer" );

		return pClassPointer;
	};

};

UClass* UTextBuffer::pClassPointer = NULL;

// Class Core.Subsystem
// 0x0004 (0x0044 - 0x0040)
class USubsystem : public UObject
{
public:
	struct FPointer                                    VfTable_FExec;                                    		// 0x0040 (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Core.Subsystem" );

		return pClassPointer;
	};

};

UClass* USubsystem::pClassPointer = NULL;

// Class Core.System
// 0x00D4 (0x0118 - 0x0044)
class USystem : public USubsystem
{
public:
	int                                                StaleCacheDays;                                   		// 0x0044 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                MaxStaleCacheSize;                                		// 0x0048 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                MaxOverallCacheSize;                              		// 0x004C (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                PackageSizeSoftLimit;                             		// 0x0050 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              AsyncIOBandwidthLimit;                            		// 0x0054 (0x0004) [0x0000000000004000]              ( CPF_Config )
	struct FString                                     SavePath;                                         		// 0x0058 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FString                                     CachePath;                                        		// 0x0064 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FString                                     CacheExt;                                         		// 0x0070 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FString                                     ScreenShotPath;                                   		// 0x007C (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< struct FString >                           Paths;                                            		// 0x0088 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< struct FString >                           SeekFreePCPaths;                                  		// 0x0094 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< struct FString >                           ScriptPaths;                                      		// 0x00A0 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< struct FString >                           FRScriptPaths;                                    		// 0x00AC (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< struct FString >                           UBScriptPaths;                                    		// 0x00B8 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< struct FString >                           SBScriptPaths;                                    		// 0x00C4 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< struct FString >                           CutdownPaths;                                     		// 0x00D0 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< struct FName >                             Suppress;                                         		// 0x00DC (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< struct FString >                           Extensions;                                       		// 0x00E8 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< struct FString >                           SeekFreePCExtensions;                             		// 0x00F4 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< struct FString >                           LocalizationPaths;                                		// 0x0100 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FString                                     TextureFileCacheExtension;                        		// 0x010C (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Core.System" );

		return pClassPointer;
	};

};

UClass* USystem::pClassPointer = NULL;

// Class Core.Field
// 0x0008 (0x0048 - 0x0040)
class UField : public UObject
{
public:
	class UField*                                      SuperField;                                       		// NOT AUTO-GENERATED PROPERTY 
	class UField*                                      Next;                                             		// NOT AUTO-GENERATED PROPERTY 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Core.Field" );

		return pClassPointer;
	};

};

UClass* UField::pClassPointer = NULL;

// Class Core.Property
// 0x0040 (0x0088 - 0x0048)
class UProperty : public UField
{
public:
	unsigned char                                      UnknownData00[ 0x40 ];                            		// 0x0048 (0x0040) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Core.Property" );

		return pClassPointer;
	};

};

UClass* UProperty::pClassPointer = NULL;

// Class Core.StructProperty
// 0x0004 (0x008C - 0x0088)
class UStructProperty : public UProperty
{
public:
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0088 (0x0004) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Core.StructProperty" );

		return pClassPointer;
	};

};

UClass* UStructProperty::pClassPointer = NULL;

// Class Core.StrProperty
// 0x0000 (0x0088 - 0x0088)
class UStrProperty : public UProperty
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Core.StrProperty" );

		return pClassPointer;
	};

};

UClass* UStrProperty::pClassPointer = NULL;

// Class Core.Struct
// 0x004C (0x0094 - 0x0048)
class UStruct : public UField
{
public:
	unsigned char                                      UnknownData00[ 0x4C ];                            		// 0x0048 (0x004C) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Core.Struct" );

		return pClassPointer;
	};

};

UClass* UStruct::pClassPointer = NULL;

// Class Core.ScriptStruct
// 0x001C (0x00B0 - 0x0094)
class UScriptStruct : public UStruct
{
public:
	unsigned char                                      UnknownData00[ 0x1C ];                            		// 0x0094 (0x001C) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Core.ScriptStruct" );

		return pClassPointer;
	};

};

UClass* UScriptStruct::pClassPointer = NULL;

// Class Core.PackageMap
// 0x0084 (0x00C4 - 0x0040)
class UPackageMap : public UObject
{
public:
	unsigned char                                      UnknownData00[ 0x84 ];                            		// 0x0040 (0x0084) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Core.PackageMap" );

		return pClassPointer;
	};

};

UClass* UPackageMap::pClassPointer = NULL;

// Class Core.ObjectSerializer
// 0x000C (0x004C - 0x0040)
class UObjectSerializer : public UObject
{
public:
	unsigned char                                      UnknownData00[ 0xC ];                             		// 0x0040 (0x000C) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Core.ObjectSerializer" );

		return pClassPointer;
	};

};

UClass* UObjectSerializer::pClassPointer = NULL;

// Class Core.ObjectRedirector
// 0x0004 (0x0044 - 0x0040)
class UObjectRedirector : public UObject
{
public:
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0040 (0x0004) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Core.ObjectRedirector" );

		return pClassPointer;
	};

};

UClass* UObjectRedirector::pClassPointer = NULL;

// Class Core.NameProperty
// 0x0000 (0x0088 - 0x0088)
class UNameProperty : public UProperty
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Core.NameProperty" );

		return pClassPointer;
	};

};

UClass* UNameProperty::pClassPointer = NULL;

// Class Core.MetaData
// 0x003C (0x007C - 0x0040)
class UMetaData : public UObject
{
public:
	unsigned char                                      UnknownData00[ 0x3C ];                            		// 0x0040 (0x003C) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Core.MetaData" );

		return pClassPointer;
	};

};

UClass* UMetaData::pClassPointer = NULL;

// Class Core.MapProperty
// 0x0008 (0x0090 - 0x0088)
class UMapProperty : public UProperty
{
public:
	unsigned char                                      UnknownData00[ 0x8 ];                             		// 0x0088 (0x0008) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Core.MapProperty" );

		return pClassPointer;
	};

};

UClass* UMapProperty::pClassPointer = NULL;

// Class Core.Linker
// 0x0160 (0x01A0 - 0x0040)
class ULinker : public UObject
{
public:
	unsigned char                                      UnknownData00[ 0x160 ];                           		// 0x0040 (0x0160) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Core.Linker" );

		return pClassPointer;
	};

};

UClass* ULinker::pClassPointer = NULL;

// Class Core.LinkerSave
// 0x0074 (0x0214 - 0x01A0)
class ULinkerSave : public ULinker
{
public:
	unsigned char                                      UnknownData00[ 0x74 ];                            		// 0x01A0 (0x0074) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Core.LinkerSave" );

		return pClassPointer;
	};

};

UClass* ULinkerSave::pClassPointer = NULL;

// Class Core.LinkerLoad
// 0x0470 (0x0610 - 0x01A0)
class ULinkerLoad : public ULinker
{
public:
	unsigned char                                      UnknownData00[ 0x470 ];                           		// 0x01A0 (0x0470) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Core.LinkerLoad" );

		return pClassPointer;
	};

};

UClass* ULinkerLoad::pClassPointer = NULL;

// Class Core.IntProperty
// 0x0000 (0x0088 - 0x0088)
class UIntProperty : public UProperty
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Core.IntProperty" );

		return pClassPointer;
	};

};

UClass* UIntProperty::pClassPointer = NULL;

// Class Core.InterfaceProperty
// 0x0004 (0x008C - 0x0088)
class UInterfaceProperty : public UProperty
{
public:
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0088 (0x0004) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Core.InterfaceProperty" );

		return pClassPointer;
	};

};

UClass* UInterfaceProperty::pClassPointer = NULL;

// Class Core.Interface
// 0x0000 (0x0040 - 0x0040)
class UInterface : public UObject
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Core.Interface" );

		return pClassPointer;
	};

};

UClass* UInterface::pClassPointer = NULL;

// Class Core.Commandlet
// 0x0040 (0x0080 - 0x0040)
class UCommandlet : public UObject
{
public:
	struct FString                                     HelpDescription;                                  		// 0x0040 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     HelpUsage;                                        		// 0x004C (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     HelpWebLink;                                      		// 0x0058 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	TArray< struct FString >                           HelpParamNames;                                   		// 0x0064 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	TArray< struct FString >                           HelpParamDescriptions;                            		// 0x0070 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	unsigned long                                      IsServer : 1;                                     		// 0x007C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      IsClient : 1;                                     		// 0x007C (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      IsEditor : 1;                                     		// 0x007C (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      LogToConsole : 1;                                 		// 0x007C (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      ShowErrorCount : 1;                               		// 0x007C (0x0004) [0x0000000000000000] [0x00000010] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Core.Commandlet" );

		return pClassPointer;
	};

	int eventMain ( struct FString Params );
};

UClass* UCommandlet::pClassPointer = NULL;

// Class Core.HelpCommandlet
// 0x0000 (0x0080 - 0x0080)
class UHelpCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Core.HelpCommandlet" );

		return pClassPointer;
	};

	int eventMain ( struct FString Params );
};

UClass* UHelpCommandlet::pClassPointer = NULL;

// Class Core.Function
// 0x0020 (0x00B4 - 0x0094)
class UFunction : public UStruct
{
public:
	unsigned long                                      FunctionFlags;                                    		// NOT AUTO-GENERATED PROPERTY 
	unsigned long                                      iNative;                                          		// NOT AUTO-GENERATED PROPERTY 
	unsigned long                                      RepOffset;                                        		// NOT AUTO-GENERATED PROPERTY 
	unsigned char                                      OperPrecedence;                                   		// NOT AUTO-GENERATED PROPERTY 
	struct FName                                       FriendlyName;                                     		// NOT AUTO-GENERATED PROPERTY 
	unsigned char                                      NumParms;                                         		// NOT AUTO-GENERATED PROPERTY 
	unsigned long                                      ParmsSize;                                        		// NOT AUTO-GENERATED PROPERTY 
	unsigned long                                      ReturnValueOffset;                                		// NOT AUTO-GENERATED PROPERTY 
	void*                                              Func;                                             		// NOT AUTO-GENERATED PROPERTY 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Core.Function" );

		return pClassPointer;
	};

};

UClass* UFunction::pClassPointer = NULL;

// Class Core.FloatProperty
// 0x0000 (0x0088 - 0x0088)
class UFloatProperty : public UProperty
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Core.FloatProperty" );

		return pClassPointer;
	};

};

UClass* UFloatProperty::pClassPointer = NULL;

// Class Core.Exporter
// 0x0028 (0x0068 - 0x0040)
class UExporter : public UObject
{
public:
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0040 (0x0004) MISSED OFFSET
	TArray< struct FString >                           FormatExtension;                                  		// 0x0044 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           FormatDescription;                                		// 0x0050 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData01[ 0xC ];                             		// 0x005C (0x000C) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Core.Exporter" );

		return pClassPointer;
	};

};

UClass* UExporter::pClassPointer = NULL;

// Class Core.Enum
// 0x000C (0x0054 - 0x0048)
class UEnum : public UField
{
public:
	unsigned char                                      UnknownData00[ 0xC ];                             		// 0x0048 (0x000C) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Core.Enum" );

		return pClassPointer;
	};

};

UClass* UEnum::pClassPointer = NULL;

// Class Core.Component
// 0x000C (0x004C - 0x0040)
class UComponent : public UObject
{
public:
	class UClass*                                      TemplateOwnerClass;                               		// 0x0040 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	struct FName                                       TemplateName;                                     		// 0x0044 (0x0008) [0x0000000000001002]              ( CPF_Const | CPF_Native )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Core.Component" );

		return pClassPointer;
	};

};

UClass* UComponent::pClassPointer = NULL;

// Class Core.DistributionVector
// 0x0008 (0x0054 - 0x004C)
class UDistributionVector : public UComponent
{
public:
	struct FPointer                                    VfTable_FCurveEdInterface;                        		// 0x004C (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	unsigned long                                      bCanBeBaked : 1;                                  		// 0x0050 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bIsDirty : 1;                                     		// 0x0050 (0x0004) [0x0000000000000000] [0x00000002] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Core.DistributionVector" );

		return pClassPointer;
	};

};

UClass* UDistributionVector::pClassPointer = NULL;

// Class Core.DistributionFloat
// 0x0008 (0x0054 - 0x004C)
class UDistributionFloat : public UComponent
{
public:
	struct FPointer                                    VfTable_FCurveEdInterface;                        		// 0x004C (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	unsigned long                                      bCanBeBaked : 1;                                  		// 0x0050 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bIsDirty : 1;                                     		// 0x0050 (0x0004) [0x0000000000000000] [0x00000002] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Core.DistributionFloat" );

		return pClassPointer;
	};

};

UClass* UDistributionFloat::pClassPointer = NULL;

// Class Core.DelegateProperty
// 0x0008 (0x0090 - 0x0088)
class UDelegateProperty : public UProperty
{
public:
	unsigned char                                      UnknownData00[ 0x8 ];                             		// 0x0088 (0x0008) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Core.DelegateProperty" );

		return pClassPointer;
	};

};

UClass* UDelegateProperty::pClassPointer = NULL;

// Class Core.Const
// 0x000C (0x0054 - 0x0048)
class UConst : public UField
{
public:
	unsigned char                                      UnknownData00[ 0xC ];                             		// 0x0048 (0x000C) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Core.Const" );

		return pClassPointer;
	};

};

UClass* UConst::pClassPointer = NULL;

// Class Core.ObjectProperty
// 0x0004 (0x008C - 0x0088)
class UObjectProperty : public UProperty
{
public:
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0088 (0x0004) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Core.ObjectProperty" );

		return pClassPointer;
	};

};

UClass* UObjectProperty::pClassPointer = NULL;

// Class Core.ComponentProperty
// 0x0000 (0x008C - 0x008C)
class UComponentProperty : public UObjectProperty
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Core.ComponentProperty" );

		return pClassPointer;
	};

};

UClass* UComponentProperty::pClassPointer = NULL;

// Class Core.ClassProperty
// 0x0004 (0x0090 - 0x008C)
class UClassProperty : public UObjectProperty
{
public:
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x008C (0x0004) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Core.ClassProperty" );

		return pClassPointer;
	};

};

UClass* UClassProperty::pClassPointer = NULL;

// Class Core.ByteProperty
// 0x0004 (0x008C - 0x0088)
class UByteProperty : public UProperty
{
public:
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0088 (0x0004) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Core.ByteProperty" );

		return pClassPointer;
	};

};

UClass* UByteProperty::pClassPointer = NULL;

// Class Core.BoolProperty
// 0x0004 (0x008C - 0x0088)
class UBoolProperty : public UProperty
{
public:
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0088 (0x0004) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Core.BoolProperty" );

		return pClassPointer;
	};

};

UClass* UBoolProperty::pClassPointer = NULL;

// Class Core.ArrayProperty
// 0x0004 (0x008C - 0x0088)
class UArrayProperty : public UProperty
{
public:
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0088 (0x0004) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Core.ArrayProperty" );

		return pClassPointer;
	};

};

UClass* UArrayProperty::pClassPointer = NULL;

// Class Core.Package
// 0x006C (0x00AC - 0x0040)
class UPackage : public UObject
{
public:
	unsigned char                                      UnknownData00[ 0x6C ];                            		// 0x0040 (0x006C) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Core.Package" );

		return pClassPointer;
	};

};

UClass* UPackage::pClassPointer = NULL;

// Class Core.State
// 0x0054 (0x00E8 - 0x0094)
class UState : public UStruct
{
public:
	unsigned char                                      UnknownData00[ 0x54 ];                            		// 0x0094 (0x0054) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Core.State" );

		return pClassPointer;
	};

};

UClass* UState::pClassPointer = NULL;

// Class Core.Class
// 0x0110 (0x01F8 - 0x00E8)
class UClass : public UState
{
public:
	unsigned char                                      UnknownData00[ 0x110 ];                           		// 0x00E8 (0x0110) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Core.Class" );

		return pClassPointer;
	};

};

UClass* UClass::pClassPointer = NULL;


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif