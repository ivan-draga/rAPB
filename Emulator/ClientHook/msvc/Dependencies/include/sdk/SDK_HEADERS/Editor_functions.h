/*
#############################################################################################
# All Points Bulletin Reloaded (1.6) SDK
# Generated with TheFeckless UE3 SDK Generator v1.2_Beta-Rev.39
# ========================================================================================= #
# File: Editor_functions.h
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

// Function Editor.BrushBuilder.Build
// [0x00020800] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UBrushBuilder::eventBuild ( )
{
	static UFunction* pFnBuild = NULL;

	if ( ! pFnBuild )
		pFnBuild = UObject::FindObject< UFunction > ( "Function Editor.BrushBuilder.Build" );

	UBrushBuilder_eventBuild_Parms Build_Parms;

	this->ProcessEvent ( pFnBuild, &Build_Parms, NULL );

	return Build_Parms.ReturnValue;
};

// Function Editor.BrushBuilder.PolyEnd
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UBrushBuilder::PolyEnd ( )
{
	static UFunction* pFnPolyEnd = NULL;

	if ( ! pFnPolyEnd )
		pFnPolyEnd = UObject::FindObject< UFunction > ( "Function Editor.BrushBuilder.PolyEnd" );

	UBrushBuilder_execPolyEnd_Parms PolyEnd_Parms;

	pFnPolyEnd->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnPolyEnd, &PolyEnd_Parms, NULL );

	pFnPolyEnd->FunctionFlags |= 0x400;
};

// Function Editor.BrushBuilder.Polyi
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            I                              ( CPF_Parm )

void UBrushBuilder::Polyi ( int I )
{
	static UFunction* pFnPolyi = NULL;

	if ( ! pFnPolyi )
		pFnPolyi = UObject::FindObject< UFunction > ( "Function Editor.BrushBuilder.Polyi" );

	UBrushBuilder_execPolyi_Parms Polyi_Parms;
	Polyi_Parms.I = I;

	pFnPolyi->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnPolyi, &Polyi_Parms, NULL );

	pFnPolyi->FunctionFlags |= 0x400;
};

// Function Editor.BrushBuilder.PolyBegin
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            Direction                      ( CPF_Parm )
// struct FName                   ItemName                       ( CPF_OptionalParm | CPF_Parm )

void UBrushBuilder::PolyBegin ( int Direction, struct FName ItemName )
{
	static UFunction* pFnPolyBegin = NULL;

	if ( ! pFnPolyBegin )
		pFnPolyBegin = UObject::FindObject< UFunction > ( "Function Editor.BrushBuilder.PolyBegin" );

	UBrushBuilder_execPolyBegin_Parms PolyBegin_Parms;
	PolyBegin_Parms.Direction = Direction;
	memcpy ( &PolyBegin_Parms.ItemName, &ItemName, 0x8 );

	pFnPolyBegin->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnPolyBegin, &PolyBegin_Parms, NULL );

	pFnPolyBegin->FunctionFlags |= 0x400;
};

// Function Editor.BrushBuilder.Poly4i
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            Direction                      ( CPF_Parm )
// int                            I                              ( CPF_Parm )
// int                            J                              ( CPF_Parm )
// int                            K                              ( CPF_Parm )
// int                            L                              ( CPF_Parm )
// struct FName                   ItemName                       ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bIsTwoSidedNonSolid            ( CPF_OptionalParm | CPF_Parm )

void UBrushBuilder::Poly4i ( int Direction, int I, int J, int K, int L, struct FName ItemName, unsigned long bIsTwoSidedNonSolid )
{
	static UFunction* pFnPoly4i = NULL;

	if ( ! pFnPoly4i )
		pFnPoly4i = UObject::FindObject< UFunction > ( "Function Editor.BrushBuilder.Poly4i" );

	UBrushBuilder_execPoly4i_Parms Poly4i_Parms;
	Poly4i_Parms.Direction = Direction;
	Poly4i_Parms.I = I;
	Poly4i_Parms.J = J;
	Poly4i_Parms.K = K;
	Poly4i_Parms.L = L;
	memcpy ( &Poly4i_Parms.ItemName, &ItemName, 0x8 );
	Poly4i_Parms.bIsTwoSidedNonSolid = bIsTwoSidedNonSolid;

	pFnPoly4i->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnPoly4i, &Poly4i_Parms, NULL );

	pFnPoly4i->FunctionFlags |= 0x400;
};

// Function Editor.BrushBuilder.Poly3i
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            Direction                      ( CPF_Parm )
// int                            I                              ( CPF_Parm )
// int                            J                              ( CPF_Parm )
// int                            K                              ( CPF_Parm )
// struct FName                   ItemName                       ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bIsTwoSidedNonSolid            ( CPF_OptionalParm | CPF_Parm )

void UBrushBuilder::Poly3i ( int Direction, int I, int J, int K, struct FName ItemName, unsigned long bIsTwoSidedNonSolid )
{
	static UFunction* pFnPoly3i = NULL;

	if ( ! pFnPoly3i )
		pFnPoly3i = UObject::FindObject< UFunction > ( "Function Editor.BrushBuilder.Poly3i" );

	UBrushBuilder_execPoly3i_Parms Poly3i_Parms;
	Poly3i_Parms.Direction = Direction;
	Poly3i_Parms.I = I;
	Poly3i_Parms.J = J;
	Poly3i_Parms.K = K;
	memcpy ( &Poly3i_Parms.ItemName, &ItemName, 0x8 );
	Poly3i_Parms.bIsTwoSidedNonSolid = bIsTwoSidedNonSolid;

	pFnPoly3i->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnPoly3i, &Poly3i_Parms, NULL );

	pFnPoly3i->FunctionFlags |= 0x400;
};

// Function Editor.BrushBuilder.Vertex3f
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          X                              ( CPF_Parm )
// float                          Y                              ( CPF_Parm )
// float                          Z                              ( CPF_Parm )

int UBrushBuilder::Vertex3f ( float X, float Y, float Z )
{
	static UFunction* pFnVertex3f = NULL;

	if ( ! pFnVertex3f )
		pFnVertex3f = UObject::FindObject< UFunction > ( "Function Editor.BrushBuilder.Vertex3f" );

	UBrushBuilder_execVertex3f_Parms Vertex3f_Parms;
	Vertex3f_Parms.X = X;
	Vertex3f_Parms.Y = Y;
	Vertex3f_Parms.Z = Z;

	pFnVertex3f->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnVertex3f, &Vertex3f_Parms, NULL );

	pFnVertex3f->FunctionFlags |= 0x400;

	return Vertex3f_Parms.ReturnValue;
};

// Function Editor.BrushBuilder.Vertexv
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 V                              ( CPF_Parm )

int UBrushBuilder::Vertexv ( struct FVector V )
{
	static UFunction* pFnVertexv = NULL;

	if ( ! pFnVertexv )
		pFnVertexv = UObject::FindObject< UFunction > ( "Function Editor.BrushBuilder.Vertexv" );

	UBrushBuilder_execVertexv_Parms Vertexv_Parms;
	memcpy ( &Vertexv_Parms.V, &V, 0xC );

	pFnVertexv->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnVertexv, &Vertexv_Parms, NULL );

	pFnVertexv->FunctionFlags |= 0x400;

	return Vertexv_Parms.ReturnValue;
};

// Function Editor.BrushBuilder.BadParameters
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 msg                            ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )

bool UBrushBuilder::BadParameters ( struct FString msg )
{
	static UFunction* pFnBadParameters = NULL;

	if ( ! pFnBadParameters )
		pFnBadParameters = UObject::FindObject< UFunction > ( "Function Editor.BrushBuilder.BadParameters" );

	UBrushBuilder_execBadParameters_Parms BadParameters_Parms;
	memcpy ( &BadParameters_Parms.msg, &msg, 0xC );

	pFnBadParameters->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnBadParameters, &BadParameters_Parms, NULL );

	pFnBadParameters->FunctionFlags |= 0x400;

	return BadParameters_Parms.ReturnValue;
};

// Function Editor.BrushBuilder.GetPolyCount
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int UBrushBuilder::GetPolyCount ( )
{
	static UFunction* pFnGetPolyCount = NULL;

	if ( ! pFnGetPolyCount )
		pFnGetPolyCount = UObject::FindObject< UFunction > ( "Function Editor.BrushBuilder.GetPolyCount" );

	UBrushBuilder_execGetPolyCount_Parms GetPolyCount_Parms;

	pFnGetPolyCount->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetPolyCount, &GetPolyCount_Parms, NULL );

	pFnGetPolyCount->FunctionFlags |= 0x400;

	return GetPolyCount_Parms.ReturnValue;
};

// Function Editor.BrushBuilder.GetVertex
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            I                              ( CPF_Parm )

struct FVector UBrushBuilder::GetVertex ( int I )
{
	static UFunction* pFnGetVertex = NULL;

	if ( ! pFnGetVertex )
		pFnGetVertex = UObject::FindObject< UFunction > ( "Function Editor.BrushBuilder.GetVertex" );

	UBrushBuilder_execGetVertex_Parms GetVertex_Parms;
	GetVertex_Parms.I = I;

	pFnGetVertex->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetVertex, &GetVertex_Parms, NULL );

	pFnGetVertex->FunctionFlags |= 0x400;

	return GetVertex_Parms.ReturnValue;
};

// Function Editor.BrushBuilder.GetVertexCount
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int UBrushBuilder::GetVertexCount ( )
{
	static UFunction* pFnGetVertexCount = NULL;

	if ( ! pFnGetVertexCount )
		pFnGetVertexCount = UObject::FindObject< UFunction > ( "Function Editor.BrushBuilder.GetVertexCount" );

	UBrushBuilder_execGetVertexCount_Parms GetVertexCount_Parms;

	pFnGetVertexCount->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetVertexCount, &GetVertexCount_Parms, NULL );

	pFnGetVertexCount->FunctionFlags |= 0x400;

	return GetVertexCount_Parms.ReturnValue;
};

// Function Editor.BrushBuilder.EndBrush
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UBrushBuilder::EndBrush ( )
{
	static UFunction* pFnEndBrush = NULL;

	if ( ! pFnEndBrush )
		pFnEndBrush = UObject::FindObject< UFunction > ( "Function Editor.BrushBuilder.EndBrush" );

	UBrushBuilder_execEndBrush_Parms EndBrush_Parms;

	pFnEndBrush->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnEndBrush, &EndBrush_Parms, NULL );

	pFnEndBrush->FunctionFlags |= 0x400;

	return EndBrush_Parms.ReturnValue;
};

// Function Editor.BrushBuilder.BeginBrush
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned long                  InMergeCoplanars               ( CPF_Parm )
// struct FName                   InGroup                        ( CPF_Parm )

void UBrushBuilder::BeginBrush ( unsigned long InMergeCoplanars, struct FName InGroup )
{
	static UFunction* pFnBeginBrush = NULL;

	if ( ! pFnBeginBrush )
		pFnBeginBrush = UObject::FindObject< UFunction > ( "Function Editor.BrushBuilder.BeginBrush" );

	UBrushBuilder_execBeginBrush_Parms BeginBrush_Parms;
	BeginBrush_Parms.InMergeCoplanars = InMergeCoplanars;
	memcpy ( &BeginBrush_Parms.InGroup, &InGroup, 0x8 );

	pFnBeginBrush->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnBeginBrush, &BeginBrush_Parms, NULL );

	pFnBeginBrush->FunctionFlags |= 0x400;
};

// Function Editor.CubeBuilder.Build
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UCubeBuilder::eventBuild ( )
{
	static UFunction* pFnBuild = NULL;

	if ( ! pFnBuild )
		pFnBuild = UObject::FindObject< UFunction > ( "Function Editor.CubeBuilder.Build" );

	UCubeBuilder_eventBuild_Parms Build_Parms;

	this->ProcessEvent ( pFnBuild, &Build_Parms, NULL );

	return Build_Parms.ReturnValue;
};

// Function Editor.CubeBuilder.BuildCube
// [0x00020002] 
// Parameters infos:
// int                            Direction                      ( CPF_Parm )
// float                          DX                             ( CPF_Parm )
// float                          DY                             ( CPF_Parm )
// float                          dz                             ( CPF_Parm )
// unsigned long                  _tessellated                   ( CPF_Parm )

void UCubeBuilder::BuildCube ( int Direction, float DX, float DY, float dz, unsigned long _tessellated )
{
	static UFunction* pFnBuildCube = NULL;

	if ( ! pFnBuildCube )
		pFnBuildCube = UObject::FindObject< UFunction > ( "Function Editor.CubeBuilder.BuildCube" );

	UCubeBuilder_execBuildCube_Parms BuildCube_Parms;
	BuildCube_Parms.Direction = Direction;
	BuildCube_Parms.DX = DX;
	BuildCube_Parms.DY = DY;
	BuildCube_Parms.dz = dz;
	BuildCube_Parms._tessellated = _tessellated;

	this->ProcessEvent ( pFnBuildCube, &BuildCube_Parms, NULL );
};

// Function Editor.ImportDistanceFieldsCommandlet.Main
// [0x00020C00] ( FUNC_Event | FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 Params                         ( CPF_Parm | CPF_NeedCtorLink )

int UImportDistanceFieldsCommandlet::eventMain ( struct FString Params )
{
	static UFunction* pFnMain = NULL;

	if ( ! pFnMain )
		pFnMain = UObject::FindObject< UFunction > ( "Function Editor.ImportDistanceFieldsCommandlet.Main" );

	UImportDistanceFieldsCommandlet_eventMain_Parms Main_Parms;
	memcpy ( &Main_Parms.Params, &Params, 0xC );

	pFnMain->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnMain, &Main_Parms, NULL );

	pFnMain->FunctionFlags |= 0x400;

	return Main_Parms.ReturnValue;
};

// Function Editor.ConeBuilder.Build
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UConeBuilder::eventBuild ( )
{
	static UFunction* pFnBuild = NULL;

	if ( ! pFnBuild )
		pFnBuild = UObject::FindObject< UFunction > ( "Function Editor.ConeBuilder.Build" );

	UConeBuilder_eventBuild_Parms Build_Parms;

	this->ProcessEvent ( pFnBuild, &Build_Parms, NULL );

	return Build_Parms.ReturnValue;
};

// Function Editor.ConeBuilder.BuildCone
// [0x00020002] 
// Parameters infos:
// int                            Direction                      ( CPF_Parm )
// unsigned long                  InAlignToSide                  ( CPF_Parm )
// int                            InSides                        ( CPF_Parm )
// float                          InZ                            ( CPF_Parm )
// float                          Radius                         ( CPF_Parm )
// struct FName                   Item                           ( CPF_Parm )

void UConeBuilder::BuildCone ( int Direction, unsigned long InAlignToSide, int InSides, float InZ, float Radius, struct FName Item )
{
	static UFunction* pFnBuildCone = NULL;

	if ( ! pFnBuildCone )
		pFnBuildCone = UObject::FindObject< UFunction > ( "Function Editor.ConeBuilder.BuildCone" );

	UConeBuilder_execBuildCone_Parms BuildCone_Parms;
	BuildCone_Parms.Direction = Direction;
	BuildCone_Parms.InAlignToSide = InAlignToSide;
	BuildCone_Parms.InSides = InSides;
	BuildCone_Parms.InZ = InZ;
	BuildCone_Parms.Radius = Radius;
	memcpy ( &BuildCone_Parms.Item, &Item, 0x8 );

	this->ProcessEvent ( pFnBuildCone, &BuildCone_Parms, NULL );
};

// Function Editor.CurvedStairBuilder.Build
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UCurvedStairBuilder::eventBuild ( )
{
	static UFunction* pFnBuild = NULL;

	if ( ! pFnBuild )
		pFnBuild = UObject::FindObject< UFunction > ( "Function Editor.CurvedStairBuilder.Build" );

	UCurvedStairBuilder_eventBuild_Parms Build_Parms;

	this->ProcessEvent ( pFnBuild, &Build_Parms, NULL );

	return Build_Parms.ReturnValue;
};

// Function Editor.CurvedStairBuilder.BuildCurvedStair
// [0x00820002] 
// Parameters infos:
// int                            Direction                      ( CPF_Parm )

void UCurvedStairBuilder::BuildCurvedStair ( int Direction )
{
	static UFunction* pFnBuildCurvedStair = NULL;

	if ( ! pFnBuildCurvedStair )
		pFnBuildCurvedStair = UObject::FindObject< UFunction > ( "Function Editor.CurvedStairBuilder.BuildCurvedStair" );

	UCurvedStairBuilder_execBuildCurvedStair_Parms BuildCurvedStair_Parms;
	BuildCurvedStair_Parms.Direction = Direction;

	this->ProcessEvent ( pFnBuildCurvedStair, &BuildCurvedStair_Parms, NULL );
};

// Function Editor.CylinderBuilder.Build
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UCylinderBuilder::eventBuild ( )
{
	static UFunction* pFnBuild = NULL;

	if ( ! pFnBuild )
		pFnBuild = UObject::FindObject< UFunction > ( "Function Editor.CylinderBuilder.Build" );

	UCylinderBuilder_eventBuild_Parms Build_Parms;

	this->ProcessEvent ( pFnBuild, &Build_Parms, NULL );

	return Build_Parms.ReturnValue;
};

// Function Editor.CylinderBuilder.BuildCylinder
// [0x00020002] 
// Parameters infos:
// int                            Direction                      ( CPF_Parm )
// unsigned long                  InAlignToSide                  ( CPF_Parm )
// int                            InSides                        ( CPF_Parm )
// float                          InZ                            ( CPF_Parm )
// float                          Radius                         ( CPF_Parm )

void UCylinderBuilder::BuildCylinder ( int Direction, unsigned long InAlignToSide, int InSides, float InZ, float Radius )
{
	static UFunction* pFnBuildCylinder = NULL;

	if ( ! pFnBuildCylinder )
		pFnBuildCylinder = UObject::FindObject< UFunction > ( "Function Editor.CylinderBuilder.BuildCylinder" );

	UCylinderBuilder_execBuildCylinder_Parms BuildCylinder_Parms;
	BuildCylinder_Parms.Direction = Direction;
	BuildCylinder_Parms.InAlignToSide = InAlignToSide;
	BuildCylinder_Parms.InSides = InSides;
	BuildCylinder_Parms.InZ = InZ;
	BuildCylinder_Parms.Radius = Radius;

	this->ProcessEvent ( pFnBuildCylinder, &BuildCylinder_Parms, NULL );
};

// Function Editor.LinearStairBuilder.Build
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ULinearStairBuilder::eventBuild ( )
{
	static UFunction* pFnBuild = NULL;

	if ( ! pFnBuild )
		pFnBuild = UObject::FindObject< UFunction > ( "Function Editor.LinearStairBuilder.Build" );

	ULinearStairBuilder_eventBuild_Parms Build_Parms;

	this->ProcessEvent ( pFnBuild, &Build_Parms, NULL );

	return Build_Parms.ReturnValue;
};

// Function Editor.SheetBuilder.Build
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool USheetBuilder::eventBuild ( )
{
	static UFunction* pFnBuild = NULL;

	if ( ! pFnBuild )
		pFnBuild = UObject::FindObject< UFunction > ( "Function Editor.SheetBuilder.Build" );

	USheetBuilder_eventBuild_Parms Build_Parms;

	this->ProcessEvent ( pFnBuild, &Build_Parms, NULL );

	return Build_Parms.ReturnValue;
};

// Function Editor.SpiralStairBuilder.Build
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool USpiralStairBuilder::eventBuild ( )
{
	static UFunction* pFnBuild = NULL;

	if ( ! pFnBuild )
		pFnBuild = UObject::FindObject< UFunction > ( "Function Editor.SpiralStairBuilder.Build" );

	USpiralStairBuilder_eventBuild_Parms Build_Parms;

	this->ProcessEvent ( pFnBuild, &Build_Parms, NULL );

	return Build_Parms.ReturnValue;
};

// Function Editor.SpiralStairBuilder.BuildCurvedStair
// [0x00820002] 
// Parameters infos:
// int                            Direction                      ( CPF_Parm )

void USpiralStairBuilder::BuildCurvedStair ( int Direction )
{
	static UFunction* pFnBuildCurvedStair = NULL;

	if ( ! pFnBuildCurvedStair )
		pFnBuildCurvedStair = UObject::FindObject< UFunction > ( "Function Editor.SpiralStairBuilder.BuildCurvedStair" );

	USpiralStairBuilder_execBuildCurvedStair_Parms BuildCurvedStair_Parms;
	BuildCurvedStair_Parms.Direction = Direction;

	this->ProcessEvent ( pFnBuildCurvedStair, &BuildCurvedStair_Parms, NULL );
};

// Function Editor.TetrahedronBuilder.Build
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UTetrahedronBuilder::eventBuild ( )
{
	static UFunction* pFnBuild = NULL;

	if ( ! pFnBuild )
		pFnBuild = UObject::FindObject< UFunction > ( "Function Editor.TetrahedronBuilder.Build" );

	UTetrahedronBuilder_eventBuild_Parms Build_Parms;

	this->ProcessEvent ( pFnBuild, &Build_Parms, NULL );

	return Build_Parms.ReturnValue;
};

// Function Editor.TetrahedronBuilder.BuildTetrahedron
// [0x00020002] 
// Parameters infos:
// float                          R                              ( CPF_Parm )
// int                            InSphereExtrapolation          ( CPF_Parm )

void UTetrahedronBuilder::BuildTetrahedron ( float R, int InSphereExtrapolation )
{
	static UFunction* pFnBuildTetrahedron = NULL;

	if ( ! pFnBuildTetrahedron )
		pFnBuildTetrahedron = UObject::FindObject< UFunction > ( "Function Editor.TetrahedronBuilder.BuildTetrahedron" );

	UTetrahedronBuilder_execBuildTetrahedron_Parms BuildTetrahedron_Parms;
	BuildTetrahedron_Parms.R = R;
	BuildTetrahedron_Parms.InSphereExtrapolation = InSphereExtrapolation;

	this->ProcessEvent ( pFnBuildTetrahedron, &BuildTetrahedron_Parms, NULL );
};

// Function Editor.TetrahedronBuilder.Extrapolate
// [0x00020002] 
// Parameters infos:
// int                            A                              ( CPF_Parm )
// int                            B                              ( CPF_Parm )
// int                            C                              ( CPF_Parm )
// int                            Count                          ( CPF_Parm )
// float                          InRadius                       ( CPF_Parm )

void UTetrahedronBuilder::Extrapolate ( int A, int B, int C, int Count, float InRadius )
{
	static UFunction* pFnExtrapolate = NULL;

	if ( ! pFnExtrapolate )
		pFnExtrapolate = UObject::FindObject< UFunction > ( "Function Editor.TetrahedronBuilder.Extrapolate" );

	UTetrahedronBuilder_execExtrapolate_Parms Extrapolate_Parms;
	Extrapolate_Parms.A = A;
	Extrapolate_Parms.B = B;
	Extrapolate_Parms.C = C;
	Extrapolate_Parms.Count = Count;
	Extrapolate_Parms.InRadius = InRadius;

	this->ProcessEvent ( pFnExtrapolate, &Extrapolate_Parms, NULL );
};

// Function Editor.VolumetricBuilder.Build
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UVolumetricBuilder::eventBuild ( )
{
	static UFunction* pFnBuild = NULL;

	if ( ! pFnBuild )
		pFnBuild = UObject::FindObject< UFunction > ( "Function Editor.VolumetricBuilder.Build" );

	UVolumetricBuilder_eventBuild_Parms Build_Parms;

	this->ProcessEvent ( pFnBuild, &Build_Parms, NULL );

	return Build_Parms.ReturnValue;
};

// Function Editor.VolumetricBuilder.BuildVolumetric
// [0x00820002] 
// Parameters infos:
// int                            Direction                      ( CPF_Parm )
// int                            InNumSheets                    ( CPF_Parm )
// float                          InZ                            ( CPF_Parm )
// float                          InRadius                       ( CPF_Parm )

void UVolumetricBuilder::BuildVolumetric ( int Direction, int InNumSheets, float InZ, float InRadius )
{
	static UFunction* pFnBuildVolumetric = NULL;

	if ( ! pFnBuildVolumetric )
		pFnBuildVolumetric = UObject::FindObject< UFunction > ( "Function Editor.VolumetricBuilder.BuildVolumetric" );

	UVolumetricBuilder_execBuildVolumetric_Parms BuildVolumetric_Parms;
	BuildVolumetric_Parms.Direction = Direction;
	BuildVolumetric_Parms.InNumSheets = InNumSheets;
	BuildVolumetric_Parms.InZ = InZ;
	BuildVolumetric_Parms.InRadius = InRadius;

	this->ProcessEvent ( pFnBuildVolumetric, &BuildVolumetric_Parms, NULL );
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif