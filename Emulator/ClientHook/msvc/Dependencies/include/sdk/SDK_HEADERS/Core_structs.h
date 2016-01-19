/*
#############################################################################################
# All Points Bulletin Reloaded (1.6) SDK
# Generated with TheFeckless UE3 SDK Generator v1.2_Beta-Rev.39
# ========================================================================================= #
# File: Core_structs.h
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

// ScriptStruct Core.Object.Rotator
// 0x000C
struct FRotator
{
	int                                                Pitch;                                            		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Yaw;                                              		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Roll;                                             		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Core.Object.Vector
// 0x000C
struct FVector
{
	float                                              X;                                                		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Y;                                                		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Z;                                                		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Core.Object.Plane
// 0x0004(0x0010 - 0x000C)
struct FPlane : FVector
{
	float                                              W;                                                		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Core.Object.Guid
// 0x0010
struct FGuid
{
	int                                                A;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                B;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                C;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                D;                                                		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct Core.Object.Vector2D
// 0x0008
struct FVector2D
{
	float                                              X;                                                		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Y;                                                		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Core.Object.Vector4
// 0x0010
struct FVector4
{
	float                                              X;                                                		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Y;                                                		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Z;                                                		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              W;                                                		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Core.Object.LinearColor
// 0x0010
struct FLinearColor
{
	float                                              R;                                                		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              G;                                                		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              B;                                                		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              A;                                                		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Core.Object.Color
// 0x0004
struct FColor
{
	unsigned char                                      B;                                                		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      G;                                                		// 0x0001 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      R;                                                		// 0x0002 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      A;                                                		// 0x0003 (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Core.Object.Quat
// 0x0010
struct FQuat
{
	float                                              X;                                                		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Y;                                                		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Z;                                                		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              W;                                                		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Core.Object.Matrix
// 0x0040
struct FMatrix
{
	struct FPlane                                      XPlane;                                           		// 0x0000 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	struct FPlane                                      YPlane;                                           		// 0x0010 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	struct FPlane                                      ZPlane;                                           		// 0x0020 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	struct FPlane                                      WPlane;                                           		// 0x0030 (0x0010) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Core.Object.BoxSphereBounds
// 0x001C
struct FBoxSphereBounds
{
	struct FVector                                     Origin;                                           		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FVector                                     BoxExtent;                                        		// 0x000C (0x000C) [0x0000000000000000]              
	float                                              SphereRadius;                                     		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Core.Object.TwoVectors
// 0x0018
struct FTwoVectors
{
	struct FVector                                     v1;                                               		// 0x0000 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     v2;                                               		// 0x000C (0x000C) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Core.Object.Float16
// 0x0002
struct FFloat16
{
	unsigned char                                      encoding[ 0x2 ];                                  		// 0x0000 (0x0002) [0x0000000000001002]              ( CPF_Const | CPF_Native )
};

// ScriptStruct Core.Object.Vector2DHalf
// 0x0008
struct FVector2DHalf
{
	struct FFloat16                                    X;                                                		// 0x0000 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	struct FFloat16                                    Y;                                                		// 0x0004 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
};

// ScriptStruct Core.Object.StReplicatedArray
// 0x0014
struct FStReplicatedArray
{
	int                                                nVersion;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	class UClass*                                      ElementsClass;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
	TArray< class UObject* >                           aElements;                                        		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct Core.Object.sAPBCollision
// 0x0011
struct FsAPBCollision
{
	int                                                bits0;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                bits1;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                bits2;                                            		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                bits3;                                            		// 0x000C (0x0004) [0x0000000000000000]              
	unsigned char                                      category;                                         		// 0x0010 (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Core.Object.EnumeratedName
// 0x0010
struct FEnumeratedName
{
	struct FName                                       MetaType;                                         		// 0x0000 (0x0008) [0x0000000000020003]              ( CPF_Edit | CPF_Const | CPF_EditConst )
	struct FName                                       Value;                                            		// 0x0008 (0x0008) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Core.Object.RenderCommandFence
// 0x0004
struct FRenderCommandFence
{
	int                                                NumPendingFences;                                 		// 0x0000 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
};

// ScriptStruct Core.Object.RawDistribution
// 0x0018
struct FRawDistribution
{
	unsigned char                                      Type;                                             		// 0x0000 (0x0001) [0x0000000000000000]              
	unsigned char                                      Op;                                               		// 0x0001 (0x0001) [0x0000000000000000]              
	unsigned char                                      LookupTableNumElements;                           		// 0x0002 (0x0001) [0x0000000000000000]              
	unsigned char                                      LookupTableChunkSize;                             		// 0x0003 (0x0001) [0x0000000000000000]              
	TArray< float >                                    LookupTable;                                      		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              LookupTableTimeScale;                             		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              LookupTableStartTime;                             		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Core.Object.InterpCurvePointQuat
// 0x0035
struct FInterpCurvePointQuat
{
	float                                              InVal;                                            		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FQuat                                       OutVal;                                           		// 0x0004 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	struct FQuat                                       ArriveTangent;                                    		// 0x0014 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	struct FQuat                                       LeaveTangent;                                     		// 0x0024 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      InterpMode;                                       		// 0x0034 (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Core.Object.InterpCurveQuat
// 0x000D
struct FInterpCurveQuat
{
	TArray< struct FInterpCurvePointQuat >             Points;                                           		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned char                                      InterpMethod;                                     		// 0x000C (0x0001) [0x0000000000000000]              
};

// ScriptStruct Core.Object.InterpCurvePointTwoVectors
// 0x004D
struct FInterpCurvePointTwoVectors
{
	float                                              InVal;                                            		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FTwoVectors                                 OutVal;                                           		// 0x0004 (0x0018) [0x0000000000000001]              ( CPF_Edit )
	struct FTwoVectors                                 ArriveTangent;                                    		// 0x001C (0x0018) [0x0000000000000001]              ( CPF_Edit )
	struct FTwoVectors                                 LeaveTangent;                                     		// 0x0034 (0x0018) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      InterpMode;                                       		// 0x004C (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Core.Object.InterpCurveTwoVectors
// 0x000D
struct FInterpCurveTwoVectors
{
	TArray< struct FInterpCurvePointTwoVectors >       Points;                                           		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned char                                      InterpMethod;                                     		// 0x000C (0x0001) [0x0000000000000000]              
};

// ScriptStruct Core.Object.Cylinder
// 0x0008
struct FCylinder
{
	float                                              Radius;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              Height;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Core.Object.InterpCurvePointVector
// 0x0029
struct FInterpCurvePointVector
{
	float                                              InVal;                                            		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     OutVal;                                           		// 0x0004 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     ArriveTangent;                                    		// 0x0010 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     LeaveTangent;                                     		// 0x001C (0x000C) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      InterpMode;                                       		// 0x0028 (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Core.Object.InterpCurveVector
// 0x000D
struct FInterpCurveVector
{
	TArray< struct FInterpCurvePointVector >           Points;                                           		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned char                                      InterpMethod;                                     		// 0x000C (0x0001) [0x0000000000000000]              
};

// ScriptStruct Core.Object.InterpCurvePointVector2D
// 0x001D
struct FInterpCurvePointVector2D
{
	float                                              InVal;                                            		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector2D                                   OutVal;                                           		// 0x0004 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FVector2D                                   ArriveTangent;                                    		// 0x000C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FVector2D                                   LeaveTangent;                                     		// 0x0014 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      InterpMode;                                       		// 0x001C (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Core.Object.InterpCurveVector2D
// 0x000D
struct FInterpCurveVector2D
{
	TArray< struct FInterpCurvePointVector2D >         Points;                                           		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned char                                      InterpMethod;                                     		// 0x000C (0x0001) [0x0000000000000000]              
};

// ScriptStruct Core.Object.InterpCurvePointFloat
// 0x0011
struct FInterpCurvePointFloat
{
	float                                              InVal;                                            		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              OutVal;                                           		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ArriveTangent;                                    		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              LeaveTangent;                                     		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      InterpMode;                                       		// 0x0010 (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Core.Object.InterpCurveFloat
// 0x000D
struct FInterpCurveFloat
{
	TArray< struct FInterpCurvePointFloat >            Points;                                           		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned char                                      InterpMethod;                                     		// 0x000C (0x0001) [0x0000000000000000]              
};

// ScriptStruct Core.Object.Box
// 0x0019
struct FBox
{
	struct FVector                                     Min;                                              		// 0x0000 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     Max;                                              		// 0x000C (0x000C) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      IsValid;                                          		// 0x0018 (0x0001) [0x0000000000000000]              
};

// ScriptStruct Core.Object.TPOV
// 0x001C
struct FTPOV
{
	struct FVector                                     Location;                                         		// 0x0000 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FRotator                                    Rotation;                                         		// 0x000C (0x000C) [0x0000000000000001]              ( CPF_Edit )
	float                                              FOV;                                              		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Core.Object.SHVector
// 0x0024
struct FSHVector
{
	float                                              V[ 0x9 ];                                         		// 0x0000 (0x0024) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Core.Object.SHVectorRGB
// 0x006C
struct FSHVectorRGB
{
	struct FSHVector                                   R;                                                		// 0x0000 (0x0024) [0x0000000000000001]              ( CPF_Edit )
	struct FSHVector                                   G;                                                		// 0x0024 (0x0024) [0x0000000000000001]              ( CPF_Edit )
	struct FSHVector                                   B;                                                		// 0x0048 (0x0024) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Core.Object.IntPoint
// 0x0008
struct FIntPoint
{
	int                                                X;                                                		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Y;                                                		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Core.Object.Pointer
// 0x0004
struct FPointer
{
	int                                                Dummy;                                            		// 0x0000 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
};

// ScriptStruct Core.Object.IndirectArray_Mirror
// 0x000C
struct FIndirectArray_Mirror
{
	struct FPointer                                    Data;                                             		// 0x0000 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	int                                                ArrayNum;                                         		// 0x0004 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	int                                                ArrayMax;                                         		// 0x0008 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
};

// ScriptStruct Core.Object.RenderCommandFence_Mirror
// 0x0004
struct FRenderCommandFence_Mirror
{
	int                                                NumPendingFences;                                 		// 0x0000 (0x0004) [0x0000000000003002]              ( CPF_Const | CPF_Native | CPF_Transient )
};

// ScriptStruct Core.Object.UntypedBulkData_Mirror
// 0x0034
struct FUntypedBulkData_Mirror
{
	struct FPointer                                    VfTable;                                          		// 0x0000 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	int                                                BulkDataFlags;                                    		// 0x0004 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	int                                                ElementCount;                                     		// 0x0008 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	int                                                BulkDataOffsetInFile;                             		// 0x000C (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	int                                                BulkDataSizeOnDisk;                               		// 0x0010 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	int                                                SavedBulkDataFlags;                               		// 0x0014 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	int                                                SavedElementCount;                                		// 0x0018 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	int                                                SavedBulkDataOffsetInFile;                        		// 0x001C (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	int                                                SavedBulkDataSizeOnDisk;                          		// 0x0020 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	struct FPointer                                    BulkData;                                         		// 0x0024 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	int                                                LockStatus;                                       		// 0x0028 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	struct FPointer                                    AttachedAr;                                       		// 0x002C (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	struct FPointer                                    LockOwner;                                        		// 0x0030 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
};

// ScriptStruct Core.Object.TextureMipBulkData_Mirror
// 0x0004(0x0038 - 0x0034)
struct FTextureMipBulkData_Mirror : FUntypedBulkData_Mirror
{
	int                                                bShouldFreeOnEmtpy;                               		// 0x0034 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
};

// ScriptStruct Core.Object.BitArray_Mirror
// 0x001C
struct FBitArray_Mirror
{
	struct FPointer                                    IndirectData;                                     		// 0x0000 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	int                                                InlineData[ 0x4 ];                                		// 0x0004 (0x0010) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	int                                                NumBits;                                          		// 0x0014 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	int                                                MaxBits;                                          		// 0x0018 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
};

// ScriptStruct Core.Object.SparseArray_Mirror
// 0x0030
struct FSparseArray_Mirror
{
	TArray< int >                                      Elements;                                         		// 0x0000 (0x000C) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	struct FBitArray_Mirror                            AllocationFlags;                                  		// 0x000C (0x001C) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	int                                                FirstFreeIndex;                                   		// 0x0028 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	int                                                NumFreeIndices;                                   		// 0x002C (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
};

// ScriptStruct Core.Object.Set_Mirror
// 0x003C
struct FSet_Mirror
{
	struct FSparseArray_Mirror                         Elements;                                         		// 0x0000 (0x0030) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	struct FPointer                                    Hash;                                             		// 0x0030 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	int                                                InlineHash;                                       		// 0x0034 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	int                                                HashSize;                                         		// 0x0038 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
};

// ScriptStruct Core.Object.MultiMap_Mirror
// 0x003C
struct FMultiMap_Mirror
{
	struct FSet_Mirror                                 Pairs;                                            		// 0x0000 (0x003C) [0x0000000000001002]              ( CPF_Const | CPF_Native )
};

// ScriptStruct Core.Object.LookupMap_Mirror
// 0x000C(0x0048 - 0x003C)
struct FLookupMap_Mirror : FMultiMap_Mirror
{
	TArray< int >                                      UniqueElements;                                   		// 0x003C (0x000C) [0x0000000000001002]              ( CPF_Const | CPF_Native )
};

// ScriptStruct Core.Object.Map_Mirror
// 0x003C
struct FMap_Mirror
{
	struct FSet_Mirror                                 Pairs;                                            		// 0x0000 (0x003C) [0x0000000000001002]              ( CPF_Const | CPF_Native )
};

// ScriptStruct Core.Object.ThreadSafeCounter
// 0x0004
struct FThreadSafeCounter
{
	int                                                Value;                                            		// 0x0000 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
};

// ScriptStruct Core.Object.Double
// 0x0008
struct FDouble
{
	int                                                A;                                                		// 0x0000 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	int                                                B;                                                		// 0x0004 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
};

// ScriptStruct Core.Object.QWord
// 0x0008
struct FQWord
{
	int                                                A;                                                		// 0x0000 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	int                                                B;                                                		// 0x0004 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
};

// ScriptStruct Core.Object.dword
// 0x0004
struct Fdword
{
	int                                                Dummy;                                            		// 0x0000 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
};

// ScriptStruct Core.cBulkDataCollection.tOutOfLineBulkData
// 0x0010
struct FtOutOfLineBulkData
{
	int                                                nFileOffset;                                      		// 0x0000 (0x0004) [0x0000000000001000]              ( CPF_Native )
	struct FPointer                                    pBulkData;                                        		// 0x0004 (0x0004) [0x0000000000001000]              ( CPF_Native )
	class UObject*                                     pObject;                                          		// 0x0008 (0x0004) [0x0000000000001000]              ( CPF_Native )
	int                                                nIndex;                                           		// 0x000C (0x0004) [0x0000000000001000]              ( CPF_Native )
};

// ScriptStruct Core.cStatWatchManager.SpikeRecord
// 0x0014
struct FSpikeRecord
{
	struct Fdword                                      nStatID;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                nConsecutiveFrames;                               		// 0x0004 (0x0004) [0x0000000000000000]              
	struct Fdword                                      nEventFlags;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              fTriggerValue;                                    		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              fBaseValue;                                       		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Core.cStatWatchManager.SpikeWatch
// 0x0030
struct FSpikeWatch
{
	struct Fdword                                      nIgnoreFlags;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              fDetectionLimit;                                  		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              fDetectionLimitPercent;                           		// 0x0008 (0x0004) [0x0000000000000000]              
	unsigned char                                      eDetectionMethod;                                 		// 0x000C (0x0001) [0x0000000000000000]              
	TArray< float >                                    fStatHistoryBuffer;                               		// 0x0010 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	int                                                nHeadOfHistoryBuffer;                             		// 0x001C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	unsigned long                                      bIsHistoryBufferInit : 1;                         		// 0x0020 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	int                                                nNumFramesSpiked;                                 		// 0x0024 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              fHistoryBufferMean;                               		// 0x0028 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              fHistoryBufferStdDev;                             		// 0x002C (0x0004) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct Core.DistributionFloat.RawDistributionFloat
// 0x0004(0x001C - 0x0018)
struct FRawDistributionFloat : FRawDistribution
{
	class UDistributionFloat*                          Distribution;                                     		// 0x0018 (0x0004) [0x0000000006080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_NoClear | CPF_EditInline )
};

// ScriptStruct Core.DistributionVector.RawDistributionVector
// 0x0004(0x001C - 0x0018)
struct FRawDistributionVector : FRawDistribution
{
	class UDistributionVector*                         Distribution;                                     		// 0x0018 (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif