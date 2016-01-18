/*
#############################################################################################
# All Points Bulletin Reloaded (1.6) SDK
# Generated with TheFeckless UE3 SDK Generator v1.2_Beta-Rev.39
# ========================================================================================= #
# File: Editor_f_structs.h
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

// Function Editor.BrushBuilder.Build
// [0x00020800] ( FUNC_Event )
struct UBrushBuilder_eventBuild_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Editor.BrushBuilder.PolyEnd
// [0x00020400] ( FUNC_Native )
struct UBrushBuilder_execPolyEnd_Parms
{
};

// Function Editor.BrushBuilder.Polyi
// [0x00020400] ( FUNC_Native )
struct UBrushBuilder_execPolyi_Parms
{
	int                                                I;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function Editor.BrushBuilder.PolyBegin
// [0x00020400] ( FUNC_Native )
struct UBrushBuilder_execPolyBegin_Parms
{
	int                                                Direction;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       ItemName;                                         		// 0x0004 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function Editor.BrushBuilder.Poly4i
// [0x00020400] ( FUNC_Native )
struct UBrushBuilder_execPoly4i_Parms
{
	int                                                Direction;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                I;                                                		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                J;                                                		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                K;                                                		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                L;                                                		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       ItemName;                                         		// 0x0014 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bIsTwoSidedNonSolid : 1;                          		// 0x001C (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function Editor.BrushBuilder.Poly3i
// [0x00020400] ( FUNC_Native )
struct UBrushBuilder_execPoly3i_Parms
{
	int                                                Direction;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                I;                                                		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                J;                                                		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                K;                                                		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       ItemName;                                         		// 0x0010 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bIsTwoSidedNonSolid : 1;                          		// 0x0018 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function Editor.BrushBuilder.Vertex3f
// [0x00020400] ( FUNC_Native )
struct UBrushBuilder_execVertex3f_Parms
{
	float                                              X;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Y;                                                		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Z;                                                		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Editor.BrushBuilder.Vertexv
// [0x00020400] ( FUNC_Native )
struct UBrushBuilder_execVertexv_Parms
{
	struct FVector                                     V;                                                		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Editor.BrushBuilder.BadParameters
// [0x00020400] ( FUNC_Native )
struct UBrushBuilder_execBadParameters_Parms
{
	struct FString                                     msg;                                              		// 0x0000 (0x000C) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Editor.BrushBuilder.GetPolyCount
// [0x00020400] ( FUNC_Native )
struct UBrushBuilder_execGetPolyCount_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Editor.BrushBuilder.GetVertex
// [0x00020400] ( FUNC_Native )
struct UBrushBuilder_execGetVertex_Parms
{
	int                                                I;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     ReturnValue;                                      		// 0x0004 (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Editor.BrushBuilder.GetVertexCount
// [0x00020400] ( FUNC_Native )
struct UBrushBuilder_execGetVertexCount_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Editor.BrushBuilder.EndBrush
// [0x00020400] ( FUNC_Native )
struct UBrushBuilder_execEndBrush_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Editor.BrushBuilder.BeginBrush
// [0x00020400] ( FUNC_Native )
struct UBrushBuilder_execBeginBrush_Parms
{
	unsigned long                                      InMergeCoplanars : 1;                             		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	struct FName                                       InGroup;                                          		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function Editor.CubeBuilder.Build
// [0x00020802] ( FUNC_Event )
struct UCubeBuilder_eventBuild_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Editor.CubeBuilder.BuildCube
// [0x00020002] 
struct UCubeBuilder_execBuildCube_Parms
{
	int                                                Direction;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              DX;                                               		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              DY;                                               		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              dz;                                               		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      _tessellated : 1;                                 		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	// int                                             N;                                                		// 0x0014 (0x0004) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0018 (0x0004) [0x0000000000000000]              
	// int                                             J;                                                		// 0x001C (0x0004) [0x0000000000000000]              
	// int                                             K;                                                		// 0x0020 (0x0004) [0x0000000000000000]              
};

// Function Editor.ImportDistanceFieldsCommandlet.Main
// [0x00020C00] ( FUNC_Event | FUNC_Native )
struct UImportDistanceFieldsCommandlet_eventMain_Parms
{
	struct FString                                     Params;                                           		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Editor.ConeBuilder.Build
// [0x00020802] ( FUNC_Event )
struct UConeBuilder_eventBuild_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             I;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function Editor.ConeBuilder.BuildCone
// [0x00020002] 
struct UConeBuilder_execBuildCone_Parms
{
	int                                                Direction;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      InAlignToSide : 1;                                		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	int                                                InSides;                                          		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              InZ;                                              		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Radius;                                           		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       Item;                                             		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// int                                             N;                                                		// 0x001C (0x0004) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0020 (0x0004) [0x0000000000000000]              
	// int                                             Ofs;                                              		// 0x0024 (0x0004) [0x0000000000000000]              
};

// Function Editor.CurvedStairBuilder.Build
// [0x00020802] ( FUNC_Event )
struct UCurvedStairBuilder_eventBuild_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Editor.CurvedStairBuilder.BuildCurvedStair
// [0x00820002] 
struct UCurvedStairBuilder_execBuildCurvedStair_Parms
{
	int                                                Direction;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FRotator                                 RotStep;                                          		// 0x0004 (0x000C) [0x0000000000000000]              
	// struct FVector                                  vtx;                                              		// 0x0010 (0x000C) [0x0000000000000000]              
	// struct FVector                                  NewVtx;                                           		// 0x001C (0x000C) [0x0000000000000000]              
	// int                                             X;                                                		// 0x0028 (0x0004) [0x0000000000000000]              
	// int                                             InnerStart;                                       		// 0x002C (0x0004) [0x0000000000000000]              
	// int                                             OuterStart;                                       		// 0x0030 (0x0004) [0x0000000000000000]              
	// int                                             BottomInnerStart;                                 		// 0x0034 (0x0004) [0x0000000000000000]              
	// int                                             BottomOuterStart;                                 		// 0x0038 (0x0004) [0x0000000000000000]              
	// int                                             Adjustment;                                       		// 0x003C (0x0004) [0x0000000000000000]              
};

// Function Editor.CylinderBuilder.Build
// [0x00020802] ( FUNC_Event )
struct UCylinderBuilder_eventBuild_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             I;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             J;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function Editor.CylinderBuilder.BuildCylinder
// [0x00020002] 
struct UCylinderBuilder_execBuildCylinder_Parms
{
	int                                                Direction;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      InAlignToSide : 1;                                		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	int                                                InSides;                                          		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              InZ;                                              		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Radius;                                           		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             N;                                                		// 0x0014 (0x0004) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0018 (0x0004) [0x0000000000000000]              
	// int                                             J;                                                		// 0x001C (0x0004) [0x0000000000000000]              
	// int                                             Ofs;                                              		// 0x0020 (0x0004) [0x0000000000000000]              
};

// Function Editor.LinearStairBuilder.Build
// [0x00020802] ( FUNC_Event )
struct ULinearStairBuilder_eventBuild_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             I;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             LastIdx;                                          		// 0x0008 (0x0004) [0x0000000000000000]              
	// int                                             CurrentX;                                         		// 0x000C (0x0004) [0x0000000000000000]              
	// int                                             CurrentY;                                         		// 0x0010 (0x0004) [0x0000000000000000]              
	// int                                             CurrentZ;                                         		// 0x0014 (0x0004) [0x0000000000000000]              
	// int                                             Adjustment;                                       		// 0x0018 (0x0004) [0x0000000000000000]              
};

// Function Editor.SheetBuilder.Build
// [0x00020802] ( FUNC_Event )
struct USheetBuilder_eventBuild_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             I;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             J;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
	// int                                             XStep;                                            		// 0x000C (0x0004) [0x0000000000000000]              
	// int                                             YStep;                                            		// 0x0010 (0x0004) [0x0000000000000000]              
	// int                                             Count;                                            		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function Editor.SpiralStairBuilder.Build
// [0x00020802] ( FUNC_Event )
struct USpiralStairBuilder_eventBuild_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Editor.SpiralStairBuilder.BuildCurvedStair
// [0x00820002] 
struct USpiralStairBuilder_execBuildCurvedStair_Parms
{
	int                                                Direction;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FRotator                                 RotStep;                                          		// 0x0004 (0x000C) [0x0000000000000000]              
	// struct FVector                                  vtx;                                              		// 0x0010 (0x000C) [0x0000000000000000]              
	// struct FVector                                  NewVtx;                                           		// 0x001C (0x000C) [0x0000000000000000]              
	// struct FVector                                  Template[ 0x8 ];                                  		// 0x0028 (0x0060) [0x0000000000000000]              
	// int                                             X;                                                		// 0x0088 (0x0004) [0x0000000000000000]              
	// int                                             Y;                                                		// 0x008C (0x0004) [0x0000000000000000]              
	// int                                             Idx;                                              		// 0x0090 (0x0004) [0x0000000000000000]              
	// int                                             VertexStart;                                      		// 0x0094 (0x0004) [0x0000000000000000]              
};

// Function Editor.TetrahedronBuilder.Build
// [0x00020802] ( FUNC_Event )
struct UTetrahedronBuilder_eventBuild_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Editor.TetrahedronBuilder.BuildTetrahedron
// [0x00020002] 
struct UTetrahedronBuilder_execBuildTetrahedron_Parms
{
	float                                              R;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                InSphereExtrapolation;                            		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function Editor.TetrahedronBuilder.Extrapolate
// [0x00020002] 
struct UTetrahedronBuilder_execExtrapolate_Parms
{
	int                                                A;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                B;                                                		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                C;                                                		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                Count;                                            		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              InRadius;                                         		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             ab;                                               		// 0x0014 (0x0004) [0x0000000000000000]              
	// int                                             bc;                                               		// 0x0018 (0x0004) [0x0000000000000000]              
	// int                                             ca;                                               		// 0x001C (0x0004) [0x0000000000000000]              
};

// Function Editor.VolumetricBuilder.Build
// [0x00020802] ( FUNC_Event )
struct UVolumetricBuilder_eventBuild_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Editor.VolumetricBuilder.BuildVolumetric
// [0x00820002] 
struct UVolumetricBuilder_execBuildVolumetric_Parms
{
	int                                                Direction;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                InNumSheets;                                      		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              InZ;                                              		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              InRadius;                                         		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             N;                                                		// 0x0010 (0x0004) [0x0000000000000000]              
	// int                                             X;                                                		// 0x0014 (0x0004) [0x0000000000000000]              
	// int                                             Y;                                                		// 0x0018 (0x0004) [0x0000000000000000]              
	// struct FRotator                                 RotStep;                                          		// 0x001C (0x000C) [0x0000000000000000]              
	// struct FVector                                  vtx;                                              		// 0x0028 (0x000C) [0x0000000000000000]              
	// struct FVector                                  NewVtx;                                           		// 0x0034 (0x000C) [0x0000000000000000]              
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif