// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSController/Public/FPSControllerFunctionLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFPSControllerFunctionLibrary() {}
// Cross Module References
	FPSCONTROLLER_API UClass* Z_Construct_UClass_UFPSControllerFunctionLibrary_NoRegister();
	FPSCONTROLLER_API UClass* Z_Construct_UClass_UFPSControllerFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_FPSController();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	FPSCONTROLLER_API UScriptStruct* Z_Construct_UScriptStruct_FBallisticHitData();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance_NoRegister();
	FPSCONTROLLER_API UClass* Z_Construct_UClass_AFPSCharacterBase_NoRegister();
	FPSCONTROLLER_API UClass* Z_Construct_UClass_UFPSRangedWeaponData_NoRegister();
	FPSCONTROLLER_API UClass* Z_Construct_UClass_AFPSAttachment_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	FPSCONTROLLER_API UClass* Z_Construct_UClass_UFPSItemData_NoRegister();
	FPSCONTROLLER_API UClass* Z_Construct_UClass_AFPSItem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	FPSCONTROLLER_API UScriptStruct* Z_Construct_UScriptStruct_FMeleeHitData();
	FPSCONTROLLER_API UEnum* Z_Construct_UEnum_FPSController_EMeleeAttackDirection();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FPrimaryAssetId();
	FPSCONTROLLER_API UScriptStruct* Z_Construct_UScriptStruct_FSimpleHitData();
	ENGINE_API UClass* Z_Construct_UClass_UFXSystemAsset_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UFXSystemComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVector_NetQuantize();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVector_NetQuantizeNormal();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	PHYSICSCORE_API UEnum* Z_Construct_UEnum_PhysicsCore_EPhysicalSurface();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAttachLocation();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	FPSCONTROLLER_API UClass* Z_Construct_UClass_AFPSItemPickup_NoRegister();
	FPSCONTROLLER_API UScriptStruct* Z_Construct_UScriptStruct_FFPSItemSlotData();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	FPSCONTROLLER_API UScriptStruct* Z_Construct_UScriptStruct_FConstantLerpDriver();
	FPSCONTROLLER_API UScriptStruct* Z_Construct_UScriptStruct_FLimitedSmoothLerpDriver();
	FPSCONTROLLER_API UScriptStruct* Z_Construct_UScriptStruct_FPhysicalLerpDriver();
	FPSCONTROLLER_API UScriptStruct* Z_Construct_UScriptStruct_FSmoothLerpDriver();
// End Cross Module References
	DEFINE_FUNCTION(UFPSControllerFunctionLibrary::execConvertRotationToItemSpace)
	{
		P_GET_STRUCT(FVector,Z_Param_Forward);
		P_GET_STRUCT(FVector,Z_Param_Up);
		P_GET_STRUCT(FRotator,Z_Param_Rotation);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRotator*)Z_Param__Result=UFPSControllerFunctionLibrary::ConvertRotationToItemSpace(Z_Param_Forward,Z_Param_Up,Z_Param_Rotation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFPSControllerFunctionLibrary::execConvertVectorToItemSpace)
	{
		P_GET_STRUCT(FVector,Z_Param_Forward);
		P_GET_STRUCT(FVector,Z_Param_Up);
		P_GET_STRUCT(FVector,Z_Param_Vector);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=UFPSControllerFunctionLibrary::ConvertVectorToItemSpace(Z_Param_Forward,Z_Param_Up,Z_Param_Vector);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFPSControllerFunctionLibrary::execCubicInterpFloat)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_A);
		P_GET_PROPERTY(FFloatProperty,Z_Param_B);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Alpha);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UFPSControllerFunctionLibrary::CubicInterpFloat(Z_Param_A,Z_Param_B,Z_Param_Alpha);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFPSControllerFunctionLibrary::execCubicInterpVector)
	{
		P_GET_STRUCT(FVector,Z_Param_A);
		P_GET_STRUCT(FVector,Z_Param_B);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Alpha);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=UFPSControllerFunctionLibrary::CubicInterpVector(Z_Param_A,Z_Param_B,Z_Param_Alpha);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFPSControllerFunctionLibrary::execGetBallisticBoneName)
	{
		P_GET_STRUCT_REF(FBallisticHitData,Z_Param_Out_Data);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=UFPSControllerFunctionLibrary::GetBallisticBoneName(Z_Param_Out_Data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFPSControllerFunctionLibrary::execGetBallisticDidDamage)
	{
		P_GET_STRUCT_REF(FBallisticHitData,Z_Param_Out_Data);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFPSControllerFunctionLibrary::GetBallisticDidDamage(Z_Param_Out_Data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFPSControllerFunctionLibrary::execGetBallisticDidHit)
	{
		P_GET_STRUCT_REF(FBallisticHitData,Z_Param_Out_Data);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFPSControllerFunctionLibrary::GetBallisticDidHit(Z_Param_Out_Data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFPSControllerFunctionLibrary::execGetClosestSyncMarker)
	{
		P_GET_OBJECT(UAnimInstance,Z_Param_AnimInstance);
		P_GET_PROPERTY(FNameProperty,Z_Param_SyncGroupName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=UFPSControllerFunctionLibrary::GetClosestSyncMarker(Z_Param_AnimInstance,Z_Param_SyncGroupName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFPSControllerFunctionLibrary::execGetControl)
	{
		P_GET_OBJECT(AFPSCharacterBase,Z_Param_Character);
		P_GET_OBJECT(UFPSRangedWeaponData,Z_Param_WeaponData);
		P_GET_TARRAY_REF(AFPSAttachment*,Z_Param_Out_Attachments);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UFPSControllerFunctionLibrary::GetControl(Z_Param_Character,Z_Param_WeaponData,Z_Param_Out_Attachments);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFPSControllerFunctionLibrary::execGetItemDataSoftObject)
	{
		P_GET_SOFTOBJECT(TSoftObjectPtr<UObject>,Z_Param_Object);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TSoftObjectPtr<UFPSItemData>*)Z_Param__Result=UFPSControllerFunctionLibrary::GetItemDataSoftObject(Z_Param_Object);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFPSControllerFunctionLibrary::execGetItemSoftClass)
	{
		P_GET_SOFTCLASS(TSoftClassPtr<UObject> ,Z_Param_Class);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TSoftClassPtr<AFPSItem> *)Z_Param__Result=UFPSControllerFunctionLibrary::GetItemSoftClass(Z_Param_Class);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFPSControllerFunctionLibrary::execGetLODLevel)
	{
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_Component);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UFPSControllerFunctionLibrary::GetLODLevel(Z_Param_Component);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFPSControllerFunctionLibrary::execGetMeleeAttackDirection)
	{
		P_GET_STRUCT_REF(FMeleeHitData,Z_Param_Out_Data);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TEnumAsByte<EMeleeAttackDirection>*)Z_Param__Result=UFPSControllerFunctionLibrary::GetMeleeAttackDirection(Z_Param_Out_Data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFPSControllerFunctionLibrary::execGetMeleeHit)
	{
		P_GET_STRUCT_REF(FMeleeHitData,Z_Param_Out_Data);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFPSControllerFunctionLibrary::GetMeleeHit(Z_Param_Out_Data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFPSControllerFunctionLibrary::execGetMeleeKicking)
	{
		P_GET_STRUCT_REF(FMeleeHitData,Z_Param_Out_Data);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFPSControllerFunctionLibrary::GetMeleeKicking(Z_Param_Out_Data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFPSControllerFunctionLibrary::execGetNameFromPrimaryAssetID)
	{
		P_GET_STRUCT_REF(FPrimaryAssetId,Z_Param_Out_AssetID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=UFPSControllerFunctionLibrary::GetNameFromPrimaryAssetID(Z_Param_Out_AssetID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFPSControllerFunctionLibrary::execGetSimpleBoneName)
	{
		P_GET_STRUCT_REF(FSimpleHitData,Z_Param_Out_Data);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=UFPSControllerFunctionLibrary::GetSimpleBoneName(Z_Param_Out_Data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFPSControllerFunctionLibrary::execGetSimpleDamage)
	{
		P_GET_STRUCT_REF(FSimpleHitData,Z_Param_Out_Data);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UFPSControllerFunctionLibrary::GetSimpleDamage(Z_Param_Out_Data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFPSControllerFunctionLibrary::execGetUsingMelee)
	{
		P_GET_STRUCT_REF(FMeleeHitData,Z_Param_Out_Data);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFPSControllerFunctionLibrary::GetUsingMelee(Z_Param_Out_Data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFPSControllerFunctionLibrary::execIsNiagaraAsset)
	{
		P_GET_OBJECT(UFXSystemAsset,Z_Param_Asset);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFPSControllerFunctionLibrary::IsNiagaraAsset(Z_Param_Asset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFPSControllerFunctionLibrary::execIsNiagaraComponent)
	{
		P_GET_OBJECT(UFXSystemComponent,Z_Param_Component);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFPSControllerFunctionLibrary::IsNiagaraComponent(Z_Param_Component);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFPSControllerFunctionLibrary::execMakeBallisticHitData)
	{
		P_GET_UBOOL(Z_Param_bDamage);
		P_GET_UBOOL(Z_Param_bHit);
		P_GET_PROPERTY(FByteProperty,Z_Param_Time);
		P_GET_PROPERTY(FByteProperty,Z_Param_PhysicsMaterialIndex);
		P_GET_STRUCT(FVector_NetQuantize,Z_Param_position);
		P_GET_STRUCT(FVector_NetQuantize,Z_Param_Velocity);
		P_GET_STRUCT(FVector_NetQuantizeNormal,Z_Param_Normal);
		P_GET_PROPERTY(FByteProperty,Z_Param_Distance);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComponent);
		P_GET_PROPERTY(FNameProperty,Z_Param_HitBoneName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FBallisticHitData*)Z_Param__Result=UFPSControllerFunctionLibrary::MakeBallisticHitData(Z_Param_bDamage,Z_Param_bHit,Z_Param_Time,Z_Param_PhysicsMaterialIndex,Z_Param_position,Z_Param_Velocity,Z_Param_Normal,Z_Param_Distance,Z_Param_HitComponent,Z_Param_HitBoneName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFPSControllerFunctionLibrary::execMakeMeleeHitData)
	{
		P_GET_UBOOL(Z_Param_bUsingMelee);
		P_GET_UBOOL(Z_Param_bHit);
		P_GET_UBOOL(Z_Param_bKicking);
		P_GET_PROPERTY(FByteProperty,Z_Param_Time);
		P_GET_PROPERTY(FByteProperty,Z_Param_AttackDirection);
		P_GET_STRUCT(FVector,Z_Param_position);
		P_GET_STRUCT(FVector,Z_Param_Normal);
		P_GET_PROPERTY(FByteProperty,Z_Param_Surface);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComponent);
		P_GET_PROPERTY(FByteProperty,Z_Param_AttackType);
		P_GET_PROPERTY(FNameProperty,Z_Param_HitBoneName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FMeleeHitData*)Z_Param__Result=UFPSControllerFunctionLibrary::MakeMeleeHitData(Z_Param_bUsingMelee,Z_Param_bHit,Z_Param_bKicking,Z_Param_Time,EMeleeAttackDirection(Z_Param_AttackDirection),Z_Param_position,Z_Param_Normal,EPhysicalSurface(Z_Param_Surface),Z_Param_HitComponent,Z_Param_AttackType,Z_Param_HitBoneName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFPSControllerFunctionLibrary::execMakeSimpleHitData)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Damage);
		P_GET_STRUCT(FVector,Z_Param_position);
		P_GET_STRUCT(FVector,Z_Param_HitFromDirection);
		P_GET_STRUCT(FVector,Z_Param_HitNormal);
		P_GET_UBOOL(Z_Param_bRadial);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComponent);
		P_GET_PROPERTY(FNameProperty,Z_Param_HitBoneName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSimpleHitData*)Z_Param__Result=UFPSControllerFunctionLibrary::MakeSimpleHitData(Z_Param_Damage,Z_Param_position,Z_Param_HitFromDirection,Z_Param_HitNormal,Z_Param_bRadial,Z_Param_HitComponent,Z_Param_HitBoneName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFPSControllerFunctionLibrary::execSettleFloat)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Offset);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Settling);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_GET_UBOOL(Z_Param_bNonLinearBlend);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Delta);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UFPSControllerFunctionLibrary::SettleFloat(Z_Param_Offset,Z_Param_Settling,Z_Param_DeltaTime,Z_Param_bNonLinearBlend,Z_Param_Out_Delta);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFPSControllerFunctionLibrary::execSettleVector)
	{
		P_GET_STRUCT(FVector,Z_Param_Offset);
		P_GET_STRUCT(FVector,Z_Param_Settling);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_GET_UBOOL(Z_Param_bNonLinearBlend);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Delta);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=UFPSControllerFunctionLibrary::SettleVector(Z_Param_Offset,Z_Param_Settling,Z_Param_DeltaTime,Z_Param_bNonLinearBlend,Z_Param_Out_Delta);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFPSControllerFunctionLibrary::execSmoothLerp)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_A);
		P_GET_PROPERTY(FFloatProperty,Z_Param_B);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Speed);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UFPSControllerFunctionLibrary::SmoothLerp(Z_Param_A,Z_Param_B,Z_Param_Speed,Z_Param_DeltaTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFPSControllerFunctionLibrary::execSmoothLerpV)
	{
		P_GET_STRUCT(FVector,Z_Param_A);
		P_GET_STRUCT(FVector,Z_Param_B);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Speed);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=UFPSControllerFunctionLibrary::SmoothLerpV(Z_Param_A,Z_Param_B,Z_Param_Speed,Z_Param_DeltaTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFPSControllerFunctionLibrary::execSpawnEffectAsset)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContext);
		P_GET_STRUCT(FVector,Z_Param_Location);
		P_GET_STRUCT(FRotator,Z_Param_Rotation);
		P_GET_OBJECT(UFXSystemAsset,Z_Param_Asset);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_AttachComponent);
		P_GET_PROPERTY(FByteProperty,Z_Param_AttachType);
		P_GET_UBOOL(Z_Param_bAutoDestroy);
		P_GET_PROPERTY(FNameProperty,Z_Param_AttachBoneName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UFXSystemComponent**)Z_Param__Result=UFPSControllerFunctionLibrary::SpawnEffectAsset(Z_Param_WorldContext,Z_Param_Location,Z_Param_Rotation,Z_Param_Asset,Z_Param_AttachComponent,EAttachLocation::Type(Z_Param_AttachType),Z_Param_bAutoDestroy,Z_Param_AttachBoneName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFPSControllerFunctionLibrary::execSpawnPickup)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContext);
		P_GET_OBJECT(UClass,Z_Param_PickupClass);
		P_GET_OBJECT(UFPSItemData,Z_Param_Data);
		P_GET_STRUCT(FFPSItemSlotData,Z_Param_SlotData);
		P_GET_STRUCT(FTransform,Z_Param_Transform);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AFPSItemPickup**)Z_Param__Result=UFPSControllerFunctionLibrary::SpawnPickup(Z_Param_WorldContext,Z_Param_PickupClass,Z_Param_Data,Z_Param_SlotData,Z_Param_Transform);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFPSControllerFunctionLibrary::execTickConstantLerpDriver)
	{
		P_GET_STRUCT_REF(FConstantLerpDriver,Z_Param_Out_Driver);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Target);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UFPSControllerFunctionLibrary::TickConstantLerpDriver(Z_Param_Out_Driver,Z_Param_Target,Z_Param_DeltaTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFPSControllerFunctionLibrary::execTickLimitedSmoothLerpDriver)
	{
		P_GET_STRUCT_REF(FLimitedSmoothLerpDriver,Z_Param_Out_Driver);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Target);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UFPSControllerFunctionLibrary::TickLimitedSmoothLerpDriver(Z_Param_Out_Driver,Z_Param_Target,Z_Param_DeltaTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFPSControllerFunctionLibrary::execTickPhysicalLerpDriver)
	{
		P_GET_STRUCT_REF(FPhysicalLerpDriver,Z_Param_Out_Driver);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Target);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UFPSControllerFunctionLibrary::TickPhysicalLerpDriver(Z_Param_Out_Driver,Z_Param_Target,Z_Param_DeltaTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFPSControllerFunctionLibrary::execTickSmoothLerpDriver)
	{
		P_GET_STRUCT_REF(FSmoothLerpDriver,Z_Param_Out_Driver);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Target);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UFPSControllerFunctionLibrary::TickSmoothLerpDriver(Z_Param_Out_Driver,Z_Param_Target,Z_Param_DeltaTime);
		P_NATIVE_END;
	}
	void UFPSControllerFunctionLibrary::StaticRegisterNativesUFPSControllerFunctionLibrary()
	{
		UClass* Class = UFPSControllerFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ConvertRotationToItemSpace", &UFPSControllerFunctionLibrary::execConvertRotationToItemSpace },
			{ "ConvertVectorToItemSpace", &UFPSControllerFunctionLibrary::execConvertVectorToItemSpace },
			{ "CubicInterpFloat", &UFPSControllerFunctionLibrary::execCubicInterpFloat },
			{ "CubicInterpVector", &UFPSControllerFunctionLibrary::execCubicInterpVector },
			{ "GetBallisticBoneName", &UFPSControllerFunctionLibrary::execGetBallisticBoneName },
			{ "GetBallisticDidDamage", &UFPSControllerFunctionLibrary::execGetBallisticDidDamage },
			{ "GetBallisticDidHit", &UFPSControllerFunctionLibrary::execGetBallisticDidHit },
			{ "GetClosestSyncMarker", &UFPSControllerFunctionLibrary::execGetClosestSyncMarker },
			{ "GetControl", &UFPSControllerFunctionLibrary::execGetControl },
			{ "GetItemDataSoftObject", &UFPSControllerFunctionLibrary::execGetItemDataSoftObject },
			{ "GetItemSoftClass", &UFPSControllerFunctionLibrary::execGetItemSoftClass },
			{ "GetLODLevel", &UFPSControllerFunctionLibrary::execGetLODLevel },
			{ "GetMeleeAttackDirection", &UFPSControllerFunctionLibrary::execGetMeleeAttackDirection },
			{ "GetMeleeHit", &UFPSControllerFunctionLibrary::execGetMeleeHit },
			{ "GetMeleeKicking", &UFPSControllerFunctionLibrary::execGetMeleeKicking },
			{ "GetNameFromPrimaryAssetID", &UFPSControllerFunctionLibrary::execGetNameFromPrimaryAssetID },
			{ "GetSimpleBoneName", &UFPSControllerFunctionLibrary::execGetSimpleBoneName },
			{ "GetSimpleDamage", &UFPSControllerFunctionLibrary::execGetSimpleDamage },
			{ "GetUsingMelee", &UFPSControllerFunctionLibrary::execGetUsingMelee },
			{ "IsNiagaraAsset", &UFPSControllerFunctionLibrary::execIsNiagaraAsset },
			{ "IsNiagaraComponent", &UFPSControllerFunctionLibrary::execIsNiagaraComponent },
			{ "MakeBallisticHitData", &UFPSControllerFunctionLibrary::execMakeBallisticHitData },
			{ "MakeMeleeHitData", &UFPSControllerFunctionLibrary::execMakeMeleeHitData },
			{ "MakeSimpleHitData", &UFPSControllerFunctionLibrary::execMakeSimpleHitData },
			{ "SettleFloat", &UFPSControllerFunctionLibrary::execSettleFloat },
			{ "SettleVector", &UFPSControllerFunctionLibrary::execSettleVector },
			{ "SmoothLerp", &UFPSControllerFunctionLibrary::execSmoothLerp },
			{ "SmoothLerpV", &UFPSControllerFunctionLibrary::execSmoothLerpV },
			{ "SpawnEffectAsset", &UFPSControllerFunctionLibrary::execSpawnEffectAsset },
			{ "SpawnPickup", &UFPSControllerFunctionLibrary::execSpawnPickup },
			{ "TickConstantLerpDriver", &UFPSControllerFunctionLibrary::execTickConstantLerpDriver },
			{ "TickLimitedSmoothLerpDriver", &UFPSControllerFunctionLibrary::execTickLimitedSmoothLerpDriver },
			{ "TickPhysicalLerpDriver", &UFPSControllerFunctionLibrary::execTickPhysicalLerpDriver },
			{ "TickSmoothLerpDriver", &UFPSControllerFunctionLibrary::execTickSmoothLerpDriver },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFPSControllerFunctionLibrary_ConvertRotationToItemSpace_Statics
	{
		struct FPSControllerFunctionLibrary_eventConvertRotationToItemSpace_Parms
		{
			FVector Forward;
			FVector Up;
			FRotator Rotation;
			FRotator ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Forward;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Up;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFPSControllerFunctionLibrary_ConvertRotationToItemSpace_Statics::NewProp_Forward = { "Forward", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSControllerFunctionLibrary_eventConvertRotationToItemSpace_Parms, Forward), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFPSControllerFunctionLibrary_ConvertRotationToItemSpace_Statics::NewProp_Up = { "Up", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSControllerFunctionLibrary_eventConvertRotationToItemSpace_Parms, Up), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFPSControllerFunctionLibrary_ConvertRotationToItemSpace_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSControllerFunctionLibrary_eventConvertRotationToItemSpace_Parms, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFPSControllerFunctionLibrary_ConvertRotationToItemSpace_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSControllerFunctionLibrary_eventConvertRotationToItemSpace_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFPSControllerFunctionLibrary_ConvertRotationToItemSpace_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSControllerFunctionLibrary_ConvertRotationToItemSpace_Statics::NewProp_Forward,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSControllerFunctionLibrary_ConvertRotationToItemSpace_Statics::NewProp_Up,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSControllerFunctionLibrary_ConvertRotationToItemSpace_Statics::NewProp_Rotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSControllerFunctionLibrary_ConvertRotationToItemSpace_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFPSControllerFunctionLibrary_ConvertRotationToItemSpace_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSControllerFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFPSControllerFunctionLibrary_ConvertRotationToItemSpace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFPSControllerFunctionLibrary, nullptr, "ConvertRotationToItemSpace", nullptr, nullptr, sizeof(FPSControllerFunctionLibrary_eventConvertRotationToItemSpace_Parms), Z_Construct_UFunction_UFPSControllerFunctionLibrary_ConvertRotationToItemSpace_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSControllerFunctionLibrary_ConvertRotationToItemSpace_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFPSControllerFunctionLibrary_ConvertRotationToItemSpace_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSControllerFunctionLibrary_ConvertRotationToItemSpace_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFPSControllerFunctionLibrary_ConvertRotationToItemSpace()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFPSControllerFunctionLibrary_ConvertRotationToItemSpace_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFPSControllerFunctionLibrary_ConvertVectorToItemSpace_Statics
	{
		struct FPSControllerFunctionLibrary_eventConvertVectorToItemSpace_Parms
		{
			FVector Forward;
			FVector Up;
			FVector Vector;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Forward;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Up;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Vector;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFPSControllerFunctionLibrary_ConvertVectorToItemSpace_Statics::NewProp_Forward = { "Forward", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSControllerFunctionLibrary_eventConvertVectorToItemSpace_Parms, Forward), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFPSControllerFunctionLibrary_ConvertVectorToItemSpace_Statics::NewProp_Up = { "Up", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSControllerFunctionLibrary_eventConvertVectorToItemSpace_Parms, Up), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFPSControllerFunctionLibrary_ConvertVectorToItemSpace_Statics::NewProp_Vector = { "Vector", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSControllerFunctionLibrary_eventConvertVectorToItemSpace_Parms, Vector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFPSControllerFunctionLibrary_ConvertVectorToItemSpace_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSControllerFunctionLibrary_eventConvertVectorToItemSpace_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFPSControllerFunctionLibrary_ConvertVectorToItemSpace_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSControllerFunctionLibrary_ConvertVectorToItemSpace_Statics::NewProp_Forward,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSControllerFunctionLibrary_ConvertVectorToItemSpace_Statics::NewProp_Up,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSControllerFunctionLibrary_ConvertVectorToItemSpace_Statics::NewProp_Vector,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSControllerFunctionLibrary_ConvertVectorToItemSpace_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFPSControllerFunctionLibrary_ConvertVectorToItemSpace_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSControllerFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFPSControllerFunctionLibrary_ConvertVectorToItemSpace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFPSControllerFunctionLibrary, nullptr, "ConvertVectorToItemSpace", nullptr, nullptr, sizeof(FPSControllerFunctionLibrary_eventConvertVectorToItemSpace_Parms), Z_Construct_UFunction_UFPSControllerFunctionLibrary_ConvertVectorToItemSpace_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSControllerFunctionLibrary_ConvertVectorToItemSpace_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFPSControllerFunctionLibrary_ConvertVectorToItemSpace_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSControllerFunctionLibrary_ConvertVectorToItemSpace_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFPSControllerFunctionLibrary_ConvertVectorToItemSpace()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFPSControllerFunctionLibrary_ConvertVectorToItemSpace_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFPSControllerFunctionLibrary_CubicInterpFloat_Statics
	{
		struct FPSControllerFunctionLibrary_eventCubicInterpFloat_Parms
		{
			float A;
			float B;
			float Alpha;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_A;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_B;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Alpha;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFPSControllerFunctionLibrary_CubicInterpFloat_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSControllerFunctionLibrary_eventCubicInterpFloat_Parms, A), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFPSControllerFunctionLibrary_CubicInterpFloat_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSControllerFunctionLibrary_eventCubicInterpFloat_Parms, B), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFPSControllerFunctionLibrary_CubicInterpFloat_Statics::NewProp_Alpha = { "Alpha", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSControllerFunctionLibrary_eventCubicInterpFloat_Parms, Alpha), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFPSControllerFunctionLibrary_CubicInterpFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSControllerFunctionLibrary_eventCubicInterpFloat_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFPSControllerFunctionLibrary_CubicInterpFloat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSControllerFunctionLibrary_CubicInterpFloat_Statics::NewProp_A,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSControllerFunctionLibrary_CubicInterpFloat_Statics::NewProp_B,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSControllerFunctionLibrary_CubicInterpFloat_Statics::NewProp_Alpha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSControllerFunctionLibrary_CubicInterpFloat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFPSControllerFunctionLibrary_CubicInterpFloat_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSControllerFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFPSControllerFunctionLibrary_CubicInterpFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFPSControllerFunctionLibrary, nullptr, "CubicInterpFloat", nullptr, nullptr, sizeof(FPSControllerFunctionLibrary_eventCubicInterpFloat_Parms), Z_Construct_UFunction_UFPSControllerFunctionLibrary_CubicInterpFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSControllerFunctionLibrary_CubicInterpFloat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFPSControllerFunctionLibrary_CubicInterpFloat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSControllerFunctionLibrary_CubicInterpFloat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFPSControllerFunctionLibrary_CubicInterpFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFPSControllerFunctionLibrary_CubicInterpFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFPSControllerFunctionLibrary_CubicInterpVector_Statics
	{
		struct FPSControllerFunctionLibrary_eventCubicInterpVector_Parms
		{
			FVector A;
			FVector B;
			float Alpha;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_A;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_B;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Alpha;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFPSControllerFunctionLibrary_CubicInterpVector_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSControllerFunctionLibrary_eventCubicInterpVector_Parms, A), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFPSControllerFunctionLibrary_CubicInterpVector_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSControllerFunctionLibrary_eventCubicInterpVector_Parms, B), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFPSControllerFunctionLibrary_CubicInterpVector_Statics::NewProp_Alpha = { "Alpha", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSControllerFunctionLibrary_eventCubicInterpVector_Parms, Alpha), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFPSControllerFunctionLibrary_CubicInterpVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSControllerFunctionLibrary_eventCubicInterpVector_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFPSControllerFunctionLibrary_CubicInterpVector_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSControllerFunctionLibrary_CubicInterpVector_Statics::NewProp_A,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSControllerFunctionLibrary_CubicInterpVector_Statics::NewProp_B,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSControllerFunctionLibrary_CubicInterpVector_Statics::NewProp_Alpha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSControllerFunctionLibrary_CubicInterpVector_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFPSControllerFunctionLibrary_CubicInterpVector_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSControllerFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFPSControllerFunctionLibrary_CubicInterpVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFPSControllerFunctionLibrary, nullptr, "CubicInterpVector", nullptr, nullptr, sizeof(FPSControllerFunctionLibrary_eventCubicInterpVector_Parms), Z_Construct_UFunction_UFPSControllerFunctionLibrary_CubicInterpVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSControllerFunctionLibrary_CubicInterpVector_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFPSControllerFunctionLibrary_CubicInterpVector_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSControllerFunctionLibrary_CubicInterpVector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFPSControllerFunctionLibrary_CubicInterpVector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFPSControllerFunctionLibrary_CubicInterpVector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetBallisticBoneName_Statics
	{
		struct FPSControllerFunctionLibrary_eventGetBallisticBoneName_Parms
		{
			FBallisticHitData Data;
			FName ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Data;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetBallisticBoneName_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetBallisticBoneName_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSControllerFunctionLibrary_eventGetBallisticBoneName_Parms, Data), Z_Construct_UScriptStruct_FBallisticHitData, METADATA_PARAMS(Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetBallisticBoneName_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetBallisticBoneName_Statics::NewProp_Data_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetBallisticBoneName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSControllerFunctionLibrary_eventGetBallisticBoneName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetBallisticBoneName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetBallisticBoneName_Statics::NewProp_Data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetBallisticBoneName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetBallisticBoneName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSControllerFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetBallisticBoneName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFPSControllerFunctionLibrary, nullptr, "GetBallisticBoneName", nullptr, nullptr, sizeof(FPSControllerFunctionLibrary_eventGetBallisticBoneName_Parms), Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetBallisticBoneName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetBallisticBoneName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetBallisticBoneName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetBallisticBoneName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetBallisticBoneName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetBallisticBoneName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetBallisticDidDamage_Statics
	{
		struct FPSControllerFunctionLibrary_eventGetBallisticDidDamage_Parms
		{
			FBallisticHitData Data;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Data;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetBallisticDidDamage_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetBallisticDidDamage_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSControllerFunctionLibrary_eventGetBallisticDidDamage_Parms, Data), Z_Construct_UScriptStruct_FBallisticHitData, METADATA_PARAMS(Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetBallisticDidDamage_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetBallisticDidDamage_Statics::NewProp_Data_MetaData)) };
	void Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetBallisticDidDamage_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FPSControllerFunctionLibrary_eventGetBallisticDidDamage_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetBallisticDidDamage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPSControllerFunctionLibrary_eventGetBallisticDidDamage_Parms), &Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetBallisticDidDamage_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetBallisticDidDamage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetBallisticDidDamage_Statics::NewProp_Data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetBallisticDidDamage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetBallisticDidDamage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSControllerFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetBallisticDidDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFPSControllerFunctionLibrary, nullptr, "GetBallisticDidDamage", nullptr, nullptr, sizeof(FPSControllerFunctionLibrary_eventGetBallisticDidDamage_Parms), Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetBallisticDidDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetBallisticDidDamage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetBallisticDidDamage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetBallisticDidDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetBallisticDidDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetBallisticDidDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetBallisticDidHit_Statics
	{
		struct FPSControllerFunctionLibrary_eventGetBallisticDidHit_Parms
		{
			FBallisticHitData Data;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Data;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetBallisticDidHit_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetBallisticDidHit_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSControllerFunctionLibrary_eventGetBallisticDidHit_Parms, Data), Z_Construct_UScriptStruct_FBallisticHitData, METADATA_PARAMS(Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetBallisticDidHit_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetBallisticDidHit_Statics::NewProp_Data_MetaData)) };
	void Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetBallisticDidHit_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FPSControllerFunctionLibrary_eventGetBallisticDidHit_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetBallisticDidHit_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPSControllerFunctionLibrary_eventGetBallisticDidHit_Parms), &Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetBallisticDidHit_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetBallisticDidHit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetBallisticDidHit_Statics::NewProp_Data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetBallisticDidHit_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetBallisticDidHit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSControllerFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetBallisticDidHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFPSControllerFunctionLibrary, nullptr, "GetBallisticDidHit", nullptr, nullptr, sizeof(FPSControllerFunctionLibrary_eventGetBallisticDidHit_Parms), Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetBallisticDidHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetBallisticDidHit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetBallisticDidHit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetBallisticDidHit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetBallisticDidHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetBallisticDidHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetClosestSyncMarker_Statics
	{
		struct FPSControllerFunctionLibrary_eventGetClosestSyncMarker_Parms
		{
			UAnimInstance* AnimInstance;
			FName SyncGroupName;
			FName ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AnimInstance;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SyncGroupName;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetClosestSyncMarker_Statics::NewProp_AnimInstance = { "AnimInstance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSControllerFunctionLibrary_eventGetClosestSyncMarker_Parms, AnimInstance), Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetClosestSyncMarker_Statics::NewProp_SyncGroupName = { "SyncGroupName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSControllerFunctionLibrary_eventGetClosestSyncMarker_Parms, SyncGroupName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetClosestSyncMarker_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSControllerFunctionLibrary_eventGetClosestSyncMarker_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetClosestSyncMarker_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetClosestSyncMarker_Statics::NewProp_AnimInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetClosestSyncMarker_Statics::NewProp_SyncGroupName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetClosestSyncMarker_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetClosestSyncMarker_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSControllerFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetClosestSyncMarker_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFPSControllerFunctionLibrary, nullptr, "GetClosestSyncMarker", nullptr, nullptr, sizeof(FPSControllerFunctionLibrary_eventGetClosestSyncMarker_Parms), Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetClosestSyncMarker_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetClosestSyncMarker_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetClosestSyncMarker_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetClosestSyncMarker_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetClosestSyncMarker()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetClosestSyncMarker_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetControl_Statics
	{
		struct FPSControllerFunctionLibrary_eventGetControl_Parms
		{
			AFPSCharacterBase* Character;
			UFPSRangedWeaponData* WeaponData;
			TArray<AFPSAttachment*> Attachments;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Character;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WeaponData;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Attachments_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Attachments_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Attachments;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetControl_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSControllerFunctionLibrary_eventGetControl_Parms, Character), Z_Construct_UClass_AFPSCharacterBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetControl_Statics::NewProp_WeaponData = { "WeaponData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSControllerFunctionLibrary_eventGetControl_Parms, WeaponData), Z_Construct_UClass_UFPSRangedWeaponData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetControl_Statics::NewProp_Attachments_Inner = { "Attachments", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AFPSAttachment_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetControl_Statics::NewProp_Attachments_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetControl_Statics::NewProp_Attachments = { "Attachments", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSControllerFunctionLibrary_eventGetControl_Parms, Attachments), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetControl_Statics::NewProp_Attachments_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetControl_Statics::NewProp_Attachments_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetControl_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSControllerFunctionLibrary_eventGetControl_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetControl_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetControl_Statics::NewProp_Character,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetControl_Statics::NewProp_WeaponData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetControl_Statics::NewProp_Attachments_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetControl_Statics::NewProp_Attachments,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetControl_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetControl_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSControllerFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetControl_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFPSControllerFunctionLibrary, nullptr, "GetControl", nullptr, nullptr, sizeof(FPSControllerFunctionLibrary_eventGetControl_Parms), Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetControl_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetControl_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetControl_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetControl_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetControl()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetControl_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetItemDataSoftObject_Statics
	{
		struct FPSControllerFunctionLibrary_eventGetItemDataSoftObject_Parms
		{
			TSoftObjectPtr<UObject> Object;
			TSoftObjectPtr<UFPSItemData> ReturnValue;
		};
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_Object;
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetItemDataSoftObject_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSControllerFunctionLibrary_eventGetItemDataSoftObject_Parms, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetItemDataSoftObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSControllerFunctionLibrary_eventGetItemDataSoftObject_Parms, ReturnValue), Z_Construct_UClass_UFPSItemData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetItemDataSoftObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetItemDataSoftObject_Statics::NewProp_Object,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetItemDataSoftObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetItemDataSoftObject_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSControllerFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetItemDataSoftObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFPSControllerFunctionLibrary, nullptr, "GetItemDataSoftObject", nullptr, nullptr, sizeof(FPSControllerFunctionLibrary_eventGetItemDataSoftObject_Parms), Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetItemDataSoftObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetItemDataSoftObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetItemDataSoftObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetItemDataSoftObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetItemDataSoftObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetItemDataSoftObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetItemSoftClass_Statics
	{
		struct FPSControllerFunctionLibrary_eventGetItemSoftClass_Parms
		{
			TSoftClassPtr<UObject>  Class;
			TSoftClassPtr<AFPSItem>  ReturnValue;
		};
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp_Class;
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetItemSoftClass_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSControllerFunctionLibrary_eventGetItemSoftClass_Parms, Class), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetItemSoftClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UE4CodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSControllerFunctionLibrary_eventGetItemSoftClass_Parms, ReturnValue), Z_Construct_UClass_AFPSItem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetItemSoftClass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetItemSoftClass_Statics::NewProp_Class,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetItemSoftClass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetItemSoftClass_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSControllerFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetItemSoftClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFPSControllerFunctionLibrary, nullptr, "GetItemSoftClass", nullptr, nullptr, sizeof(FPSControllerFunctionLibrary_eventGetItemSoftClass_Parms), Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetItemSoftClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetItemSoftClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetItemSoftClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetItemSoftClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetItemSoftClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetItemSoftClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetLODLevel_Statics
	{
		struct FPSControllerFunctionLibrary_eventGetLODLevel_Parms
		{
			USkeletalMeshComponent* Component;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Component;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetLODLevel_Statics::NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetLODLevel_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSControllerFunctionLibrary_eventGetLODLevel_Parms, Component), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetLODLevel_Statics::NewProp_Component_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetLODLevel_Statics::NewProp_Component_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetLODLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSControllerFunctionLibrary_eventGetLODLevel_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetLODLevel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetLODLevel_Statics::NewProp_Component,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetLODLevel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetLODLevel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSControllerFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetLODLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFPSControllerFunctionLibrary, nullptr, "GetLODLevel", nullptr, nullptr, sizeof(FPSControllerFunctionLibrary_eventGetLODLevel_Parms), Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetLODLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetLODLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetLODLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetLODLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetLODLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetLODLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetMeleeAttackDirection_Statics
	{
		struct FPSControllerFunctionLibrary_eventGetMeleeAttackDirection_Parms
		{
			FMeleeHitData Data;
			TEnumAsByte<EMeleeAttackDirection> ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Data;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetMeleeAttackDirection_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetMeleeAttackDirection_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSControllerFunctionLibrary_eventGetMeleeAttackDirection_Parms, Data), Z_Construct_UScriptStruct_FMeleeHitData, METADATA_PARAMS(Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetMeleeAttackDirection_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetMeleeAttackDirection_Statics::NewProp_Data_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetMeleeAttackDirection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSControllerFunctionLibrary_eventGetMeleeAttackDirection_Parms, ReturnValue), Z_Construct_UEnum_FPSController_EMeleeAttackDirection, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetMeleeAttackDirection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetMeleeAttackDirection_Statics::NewProp_Data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetMeleeAttackDirection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetMeleeAttackDirection_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSControllerFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetMeleeAttackDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFPSControllerFunctionLibrary, nullptr, "GetMeleeAttackDirection", nullptr, nullptr, sizeof(FPSControllerFunctionLibrary_eventGetMeleeAttackDirection_Parms), Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetMeleeAttackDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetMeleeAttackDirection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetMeleeAttackDirection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetMeleeAttackDirection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetMeleeAttackDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetMeleeAttackDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetMeleeHit_Statics
	{
		struct FPSControllerFunctionLibrary_eventGetMeleeHit_Parms
		{
			FMeleeHitData Data;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Data;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetMeleeHit_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetMeleeHit_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSControllerFunctionLibrary_eventGetMeleeHit_Parms, Data), Z_Construct_UScriptStruct_FMeleeHitData, METADATA_PARAMS(Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetMeleeHit_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetMeleeHit_Statics::NewProp_Data_MetaData)) };
	void Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetMeleeHit_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FPSControllerFunctionLibrary_eventGetMeleeHit_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetMeleeHit_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPSControllerFunctionLibrary_eventGetMeleeHit_Parms), &Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetMeleeHit_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetMeleeHit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetMeleeHit_Statics::NewProp_Data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetMeleeHit_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetMeleeHit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSControllerFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetMeleeHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFPSControllerFunctionLibrary, nullptr, "GetMeleeHit", nullptr, nullptr, sizeof(FPSControllerFunctionLibrary_eventGetMeleeHit_Parms), Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetMeleeHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetMeleeHit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetMeleeHit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetMeleeHit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetMeleeHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetMeleeHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetMeleeKicking_Statics
	{
		struct FPSControllerFunctionLibrary_eventGetMeleeKicking_Parms
		{
			FMeleeHitData Data;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Data;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetMeleeKicking_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetMeleeKicking_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSControllerFunctionLibrary_eventGetMeleeKicking_Parms, Data), Z_Construct_UScriptStruct_FMeleeHitData, METADATA_PARAMS(Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetMeleeKicking_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetMeleeKicking_Statics::NewProp_Data_MetaData)) };
	void Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetMeleeKicking_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FPSControllerFunctionLibrary_eventGetMeleeKicking_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetMeleeKicking_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPSControllerFunctionLibrary_eventGetMeleeKicking_Parms), &Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetMeleeKicking_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetMeleeKicking_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetMeleeKicking_Statics::NewProp_Data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetMeleeKicking_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetMeleeKicking_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSControllerFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetMeleeKicking_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFPSControllerFunctionLibrary, nullptr, "GetMeleeKicking", nullptr, nullptr, sizeof(FPSControllerFunctionLibrary_eventGetMeleeKicking_Parms), Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetMeleeKicking_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetMeleeKicking_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetMeleeKicking_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetMeleeKicking_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetMeleeKicking()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetMeleeKicking_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetNameFromPrimaryAssetID_Statics
	{
		struct FPSControllerFunctionLibrary_eventGetNameFromPrimaryAssetID_Parms
		{
			FPrimaryAssetId AssetID;
			FName ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AssetID;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetNameFromPrimaryAssetID_Statics::NewProp_AssetID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetNameFromPrimaryAssetID_Statics::NewProp_AssetID = { "AssetID", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSControllerFunctionLibrary_eventGetNameFromPrimaryAssetID_Parms, AssetID), Z_Construct_UScriptStruct_FPrimaryAssetId, METADATA_PARAMS(Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetNameFromPrimaryAssetID_Statics::NewProp_AssetID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetNameFromPrimaryAssetID_Statics::NewProp_AssetID_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetNameFromPrimaryAssetID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSControllerFunctionLibrary_eventGetNameFromPrimaryAssetID_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetNameFromPrimaryAssetID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetNameFromPrimaryAssetID_Statics::NewProp_AssetID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetNameFromPrimaryAssetID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetNameFromPrimaryAssetID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSControllerFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetNameFromPrimaryAssetID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFPSControllerFunctionLibrary, nullptr, "GetNameFromPrimaryAssetID", nullptr, nullptr, sizeof(FPSControllerFunctionLibrary_eventGetNameFromPrimaryAssetID_Parms), Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetNameFromPrimaryAssetID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetNameFromPrimaryAssetID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetNameFromPrimaryAssetID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetNameFromPrimaryAssetID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetNameFromPrimaryAssetID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetNameFromPrimaryAssetID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetSimpleBoneName_Statics
	{
		struct FPSControllerFunctionLibrary_eventGetSimpleBoneName_Parms
		{
			FSimpleHitData Data;
			FName ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Data;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetSimpleBoneName_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetSimpleBoneName_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSControllerFunctionLibrary_eventGetSimpleBoneName_Parms, Data), Z_Construct_UScriptStruct_FSimpleHitData, METADATA_PARAMS(Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetSimpleBoneName_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetSimpleBoneName_Statics::NewProp_Data_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetSimpleBoneName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSControllerFunctionLibrary_eventGetSimpleBoneName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetSimpleBoneName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetSimpleBoneName_Statics::NewProp_Data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetSimpleBoneName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetSimpleBoneName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSControllerFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetSimpleBoneName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFPSControllerFunctionLibrary, nullptr, "GetSimpleBoneName", nullptr, nullptr, sizeof(FPSControllerFunctionLibrary_eventGetSimpleBoneName_Parms), Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetSimpleBoneName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetSimpleBoneName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetSimpleBoneName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetSimpleBoneName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetSimpleBoneName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetSimpleBoneName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetSimpleDamage_Statics
	{
		struct FPSControllerFunctionLibrary_eventGetSimpleDamage_Parms
		{
			FSimpleHitData Data;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Data;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetSimpleDamage_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetSimpleDamage_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSControllerFunctionLibrary_eventGetSimpleDamage_Parms, Data), Z_Construct_UScriptStruct_FSimpleHitData, METADATA_PARAMS(Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetSimpleDamage_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetSimpleDamage_Statics::NewProp_Data_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetSimpleDamage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSControllerFunctionLibrary_eventGetSimpleDamage_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetSimpleDamage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetSimpleDamage_Statics::NewProp_Data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetSimpleDamage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetSimpleDamage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSControllerFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetSimpleDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFPSControllerFunctionLibrary, nullptr, "GetSimpleDamage", nullptr, nullptr, sizeof(FPSControllerFunctionLibrary_eventGetSimpleDamage_Parms), Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetSimpleDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetSimpleDamage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetSimpleDamage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetSimpleDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetSimpleDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetSimpleDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetUsingMelee_Statics
	{
		struct FPSControllerFunctionLibrary_eventGetUsingMelee_Parms
		{
			FMeleeHitData Data;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Data;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetUsingMelee_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetUsingMelee_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSControllerFunctionLibrary_eventGetUsingMelee_Parms, Data), Z_Construct_UScriptStruct_FMeleeHitData, METADATA_PARAMS(Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetUsingMelee_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetUsingMelee_Statics::NewProp_Data_MetaData)) };
	void Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetUsingMelee_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FPSControllerFunctionLibrary_eventGetUsingMelee_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetUsingMelee_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPSControllerFunctionLibrary_eventGetUsingMelee_Parms), &Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetUsingMelee_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetUsingMelee_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetUsingMelee_Statics::NewProp_Data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetUsingMelee_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetUsingMelee_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSControllerFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetUsingMelee_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFPSControllerFunctionLibrary, nullptr, "GetUsingMelee", nullptr, nullptr, sizeof(FPSControllerFunctionLibrary_eventGetUsingMelee_Parms), Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetUsingMelee_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetUsingMelee_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetUsingMelee_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetUsingMelee_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetUsingMelee()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetUsingMelee_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFPSControllerFunctionLibrary_IsNiagaraAsset_Statics
	{
		struct FPSControllerFunctionLibrary_eventIsNiagaraAsset_Parms
		{
			UFXSystemAsset* Asset;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Asset;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFPSControllerFunctionLibrary_IsNiagaraAsset_Statics::NewProp_Asset = { "Asset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSControllerFunctionLibrary_eventIsNiagaraAsset_Parms, Asset), Z_Construct_UClass_UFXSystemAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFPSControllerFunctionLibrary_IsNiagaraAsset_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FPSControllerFunctionLibrary_eventIsNiagaraAsset_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFPSControllerFunctionLibrary_IsNiagaraAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPSControllerFunctionLibrary_eventIsNiagaraAsset_Parms), &Z_Construct_UFunction_UFPSControllerFunctionLibrary_IsNiagaraAsset_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFPSControllerFunctionLibrary_IsNiagaraAsset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSControllerFunctionLibrary_IsNiagaraAsset_Statics::NewProp_Asset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSControllerFunctionLibrary_IsNiagaraAsset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFPSControllerFunctionLibrary_IsNiagaraAsset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSControllerFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFPSControllerFunctionLibrary_IsNiagaraAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFPSControllerFunctionLibrary, nullptr, "IsNiagaraAsset", nullptr, nullptr, sizeof(FPSControllerFunctionLibrary_eventIsNiagaraAsset_Parms), Z_Construct_UFunction_UFPSControllerFunctionLibrary_IsNiagaraAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSControllerFunctionLibrary_IsNiagaraAsset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFPSControllerFunctionLibrary_IsNiagaraAsset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSControllerFunctionLibrary_IsNiagaraAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFPSControllerFunctionLibrary_IsNiagaraAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFPSControllerFunctionLibrary_IsNiagaraAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFPSControllerFunctionLibrary_IsNiagaraComponent_Statics
	{
		struct FPSControllerFunctionLibrary_eventIsNiagaraComponent_Parms
		{
			UFXSystemComponent* Component;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Component;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFPSControllerFunctionLibrary_IsNiagaraComponent_Statics::NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFPSControllerFunctionLibrary_IsNiagaraComponent_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSControllerFunctionLibrary_eventIsNiagaraComponent_Parms, Component), Z_Construct_UClass_UFXSystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UFPSControllerFunctionLibrary_IsNiagaraComponent_Statics::NewProp_Component_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSControllerFunctionLibrary_IsNiagaraComponent_Statics::NewProp_Component_MetaData)) };
	void Z_Construct_UFunction_UFPSControllerFunctionLibrary_IsNiagaraComponent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FPSControllerFunctionLibrary_eventIsNiagaraComponent_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFPSControllerFunctionLibrary_IsNiagaraComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPSControllerFunctionLibrary_eventIsNiagaraComponent_Parms), &Z_Construct_UFunction_UFPSControllerFunctionLibrary_IsNiagaraComponent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFPSControllerFunctionLibrary_IsNiagaraComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSControllerFunctionLibrary_IsNiagaraComponent_Statics::NewProp_Component,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSControllerFunctionLibrary_IsNiagaraComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFPSControllerFunctionLibrary_IsNiagaraComponent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSControllerFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFPSControllerFunctionLibrary_IsNiagaraComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFPSControllerFunctionLibrary, nullptr, "IsNiagaraComponent", nullptr, nullptr, sizeof(FPSControllerFunctionLibrary_eventIsNiagaraComponent_Parms), Z_Construct_UFunction_UFPSControllerFunctionLibrary_IsNiagaraComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSControllerFunctionLibrary_IsNiagaraComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFPSControllerFunctionLibrary_IsNiagaraComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSControllerFunctionLibrary_IsNiagaraComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFPSControllerFunctionLibrary_IsNiagaraComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFPSControllerFunctionLibrary_IsNiagaraComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFPSControllerFunctionLibrary_MakeBallisticHitData_Statics
	{
		struct FPSControllerFunctionLibrary_eventMakeBallisticHitData_Parms
		{
			bool bDamage;
			bool bHit;
			uint8 Time;
			uint8 PhysicsMaterialIndex;
			FVector_NetQuantize position;
			FVector_NetQuantize Velocity;
			FVector_NetQuantizeNormal Normal;
			uint8 Distance;
			UPrimitiveComponent* HitComponent;
			FName HitBoneName;
			FBallisticHitData ReturnValue;
		};
		static void NewProp_bDamage_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDamage;
		static void NewProp_bHit_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHit;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Time;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PhysicsMaterialIndex;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_position;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Velocity;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Normal;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Distance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HitComponent;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_HitBoneName;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFPSControllerFunctionLibrary_MakeBallisticHitData_Statics::NewProp_bDamage_SetBit(void* Obj)
	{
		((FPSControllerFunctionLibrary_eventMakeBallisticHitData_Parms*)Obj)->bDamage = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFPSControllerFunctionLibrary_MakeBallisticHitData_Statics::NewProp_bDamage = { "bDamage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPSControllerFunctionLibrary_eventMakeBallisticHitData_Parms), &Z_Construct_UFunction_UFPSControllerFunctionLibrary_MakeBallisticHitData_Statics::NewProp_bDamage_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFPSControllerFunctionLibrary_MakeBallisticHitData_Statics::NewProp_bHit_SetBit(void* Obj)
	{
		((FPSControllerFunctionLibrary_eventMakeBallisticHitData_Parms*)Obj)->bHit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFPSControllerFunctionLibrary_MakeBallisticHitData_Statics::NewProp_bHit = { "bHit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPSControllerFunctionLibrary_eventMakeBallisticHitData_Parms), &Z_Construct_UFunction_UFPSControllerFunctionLibrary_MakeBallisticHitData_Statics::NewProp_bHit_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFPSControllerFunctionLibrary_MakeBallisticHitData_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSControllerFunctionLibrary_eventMakeBallisticHitData_Parms, Time), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFPSControllerFunctionLibrary_MakeBallisticHitData_Statics::NewProp_PhysicsMaterialIndex = { "PhysicsMaterialIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSControllerFunctionLibrary_eventMakeBallisticHitData_Parms, PhysicsMaterialIndex), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFPSControllerFunctionLibrary_MakeBallisticHitData_Statics::NewProp_position = { "position", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSControllerFunctionLibrary_eventMakeBallisticHitData_Parms, position), Z_Construct_UScriptStruct_FVector_NetQuantize, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFPSControllerFunctionLibrary_MakeBallisticHitData_Statics::NewProp_Velocity = { "Velocity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSControllerFunctionLibrary_eventMakeBallisticHitData_Parms, Velocity), Z_Construct_UScriptStruct_FVector_NetQuantize, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFPSControllerFunctionLibrary_MakeBallisticHitData_Statics::NewProp_Normal = { "Normal", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSControllerFunctionLibrary_eventMakeBallisticHitData_Parms, Normal), Z_Construct_UScriptStruct_FVector_NetQuantizeNormal, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFPSControllerFunctionLibrary_MakeBallisticHitData_Statics::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSControllerFunctionLibrary_eventMakeBallisticHitData_Parms, Distance), nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFPSControllerFunctionLibrary_MakeBallisticHitData_Statics::NewProp_HitComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFPSControllerFunctionLibrary_MakeBallisticHitData_Statics::NewProp_HitComponent = { "HitComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSControllerFunctionLibrary_eventMakeBallisticHitData_Parms, HitComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UFPSControllerFunctionLibrary_MakeBallisticHitData_Statics::NewProp_HitComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSControllerFunctionLibrary_MakeBallisticHitData_Statics::NewProp_HitComponent_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UFPSControllerFunctionLibrary_MakeBallisticHitData_Statics::NewProp_HitBoneName = { "HitBoneName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSControllerFunctionLibrary_eventMakeBallisticHitData_Parms, HitBoneName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFPSControllerFunctionLibrary_MakeBallisticHitData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSControllerFunctionLibrary_eventMakeBallisticHitData_Parms, ReturnValue), Z_Construct_UScriptStruct_FBallisticHitData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFPSControllerFunctionLibrary_MakeBallisticHitData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSControllerFunctionLibrary_MakeBallisticHitData_Statics::NewProp_bDamage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSControllerFunctionLibrary_MakeBallisticHitData_Statics::NewProp_bHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSControllerFunctionLibrary_MakeBallisticHitData_Statics::NewProp_Time,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSControllerFunctionLibrary_MakeBallisticHitData_Statics::NewProp_PhysicsMaterialIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSControllerFunctionLibrary_MakeBallisticHitData_Statics::NewProp_position,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSControllerFunctionLibrary_MakeBallisticHitData_Statics::NewProp_Velocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSControllerFunctionLibrary_MakeBallisticHitData_Statics::NewProp_Normal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSControllerFunctionLibrary_MakeBallisticHitData_Statics::NewProp_Distance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSControllerFunctionLibrary_MakeBallisticHitData_Statics::NewProp_HitComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSControllerFunctionLibrary_MakeBallisticHitData_Statics::NewProp_HitBoneName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSControllerFunctionLibrary_MakeBallisticHitData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFPSControllerFunctionLibrary_MakeBallisticHitData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSControllerFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFPSControllerFunctionLibrary_MakeBallisticHitData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFPSControllerFunctionLibrary, nullptr, "MakeBallisticHitData", nullptr, nullptr, sizeof(FPSControllerFunctionLibrary_eventMakeBallisticHitData_Parms), Z_Construct_UFunction_UFPSControllerFunctionLibrary_MakeBallisticHitData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSControllerFunctionLibrary_MakeBallisticHitData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFPSControllerFunctionLibrary_MakeBallisticHitData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSControllerFunctionLibrary_MakeBallisticHitData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFPSControllerFunctionLibrary_MakeBallisticHitData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFPSControllerFunctionLibrary_MakeBallisticHitData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFPSControllerFunctionLibrary_MakeMeleeHitData_Statics
	{
		struct FPSControllerFunctionLibrary_eventMakeMeleeHitData_Parms
		{
			bool bUsingMelee;
			bool bHit;
			bool bKicking;
			uint8 Time;
			TEnumAsByte<EMeleeAttackDirection> AttackDirection;
			FVector position;
			FVector Normal;
			TEnumAsByte<EPhysicalSurface> Surface;
			UPrimitiveComponent* HitComponent;
			uint8 AttackType;
			FName HitBoneName;
			FMeleeHitData ReturnValue;
		};
		static void NewProp_bUsingMelee_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUsingMelee;
		static void NewProp_bHit_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHit;
		static void NewProp_bKicking_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bKicking;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Time;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AttackDirection;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_position;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Normal;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Surface;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HitComponent;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AttackType;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_HitBoneName;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFPSControllerFunctionLibrary_MakeMeleeHitData_Statics::NewProp_bUsingMelee_SetBit(void* Obj)
	{
		((FPSControllerFunctionLibrary_eventMakeMeleeHitData_Parms*)Obj)->bUsingMelee = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFPSControllerFunctionLibrary_MakeMeleeHitData_Statics::NewProp_bUsingMelee = { "bUsingMelee", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPSControllerFunctionLibrary_eventMakeMeleeHitData_Parms), &Z_Construct_UFunction_UFPSControllerFunctionLibrary_MakeMeleeHitData_Statics::NewProp_bUsingMelee_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFPSControllerFunctionLibrary_MakeMeleeHitData_Statics::NewProp_bHit_SetBit(void* Obj)
	{
		((FPSControllerFunctionLibrary_eventMakeMeleeHitData_Parms*)Obj)->bHit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFPSControllerFunctionLibrary_MakeMeleeHitData_Statics::NewProp_bHit = { "bHit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPSControllerFunctionLibrary_eventMakeMeleeHitData_Parms), &Z_Construct_UFunction_UFPSControllerFunctionLibrary_MakeMeleeHitData_Statics::NewProp_bHit_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFPSControllerFunctionLibrary_MakeMeleeHitData_Statics::NewProp_bKicking_SetBit(void* Obj)
	{
		((FPSControllerFunctionLibrary_eventMakeMeleeHitData_Parms*)Obj)->bKicking = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFPSControllerFunctionLibrary_MakeMeleeHitData_Statics::NewProp_bKicking = { "bKicking", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPSControllerFunctionLibrary_eventMakeMeleeHitData_Parms), &Z_Construct_UFunction_UFPSControllerFunctionLibrary_MakeMeleeHitData_Statics::NewProp_bKicking_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFPSControllerFunctionLibrary_MakeMeleeHitData_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSControllerFunctionLibrary_eventMakeMeleeHitData_Parms, Time), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFPSControllerFunctionLibrary_MakeMeleeHitData_Statics::NewProp_AttackDirection = { "AttackDirection", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSControllerFunctionLibrary_eventMakeMeleeHitData_Parms, AttackDirection), Z_Construct_UEnum_FPSController_EMeleeAttackDirection, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFPSControllerFunctionLibrary_MakeMeleeHitData_Statics::NewProp_position = { "position", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSControllerFunctionLibrary_eventMakeMeleeHitData_Parms, position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFPSControllerFunctionLibrary_MakeMeleeHitData_Statics::NewProp_Normal = { "Normal", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSControllerFunctionLibrary_eventMakeMeleeHitData_Parms, Normal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFPSControllerFunctionLibrary_MakeMeleeHitData_Statics::NewProp_Surface = { "Surface", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSControllerFunctionLibrary_eventMakeMeleeHitData_Parms, Surface), Z_Construct_UEnum_PhysicsCore_EPhysicalSurface, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFPSControllerFunctionLibrary_MakeMeleeHitData_Statics::NewProp_HitComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFPSControllerFunctionLibrary_MakeMeleeHitData_Statics::NewProp_HitComponent = { "HitComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSControllerFunctionLibrary_eventMakeMeleeHitData_Parms, HitComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UFPSControllerFunctionLibrary_MakeMeleeHitData_Statics::NewProp_HitComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSControllerFunctionLibrary_MakeMeleeHitData_Statics::NewProp_HitComponent_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFPSControllerFunctionLibrary_MakeMeleeHitData_Statics::NewProp_AttackType = { "AttackType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSControllerFunctionLibrary_eventMakeMeleeHitData_Parms, AttackType), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UFPSControllerFunctionLibrary_MakeMeleeHitData_Statics::NewProp_HitBoneName = { "HitBoneName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSControllerFunctionLibrary_eventMakeMeleeHitData_Parms, HitBoneName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFPSControllerFunctionLibrary_MakeMeleeHitData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSControllerFunctionLibrary_eventMakeMeleeHitData_Parms, ReturnValue), Z_Construct_UScriptStruct_FMeleeHitData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFPSControllerFunctionLibrary_MakeMeleeHitData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSControllerFunctionLibrary_MakeMeleeHitData_Statics::NewProp_bUsingMelee,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSControllerFunctionLibrary_MakeMeleeHitData_Statics::NewProp_bHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSControllerFunctionLibrary_MakeMeleeHitData_Statics::NewProp_bKicking,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSControllerFunctionLibrary_MakeMeleeHitData_Statics::NewProp_Time,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSControllerFunctionLibrary_MakeMeleeHitData_Statics::NewProp_AttackDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSControllerFunctionLibrary_MakeMeleeHitData_Statics::NewProp_position,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSControllerFunctionLibrary_MakeMeleeHitData_Statics::NewProp_Normal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSControllerFunctionLibrary_MakeMeleeHitData_Statics::NewProp_Surface,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSControllerFunctionLibrary_MakeMeleeHitData_Statics::NewProp_HitComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSControllerFunctionLibrary_MakeMeleeHitData_Statics::NewProp_AttackType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSControllerFunctionLibrary_MakeMeleeHitData_Statics::NewProp_HitBoneName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSControllerFunctionLibrary_MakeMeleeHitData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFPSControllerFunctionLibrary_MakeMeleeHitData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSControllerFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFPSControllerFunctionLibrary_MakeMeleeHitData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFPSControllerFunctionLibrary, nullptr, "MakeMeleeHitData", nullptr, nullptr, sizeof(FPSControllerFunctionLibrary_eventMakeMeleeHitData_Parms), Z_Construct_UFunction_UFPSControllerFunctionLibrary_MakeMeleeHitData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSControllerFunctionLibrary_MakeMeleeHitData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFPSControllerFunctionLibrary_MakeMeleeHitData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSControllerFunctionLibrary_MakeMeleeHitData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFPSControllerFunctionLibrary_MakeMeleeHitData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFPSControllerFunctionLibrary_MakeMeleeHitData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFPSControllerFunctionLibrary_MakeSimpleHitData_Statics
	{
		struct FPSControllerFunctionLibrary_eventMakeSimpleHitData_Parms
		{
			float Damage;
			FVector position;
			FVector HitFromDirection;
			FVector HitNormal;
			bool bRadial;
			UPrimitiveComponent* HitComponent;
			FName HitBoneName;
			FSimpleHitData ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Damage;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_position;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HitFromDirection;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HitNormal;
		static void NewProp_bRadial_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRadial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HitComponent;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_HitBoneName;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFPSControllerFunctionLibrary_MakeSimpleHitData_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSControllerFunctionLibrary_eventMakeSimpleHitData_Parms, Damage), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFPSControllerFunctionLibrary_MakeSimpleHitData_Statics::NewProp_position = { "position", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSControllerFunctionLibrary_eventMakeSimpleHitData_Parms, position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFPSControllerFunctionLibrary_MakeSimpleHitData_Statics::NewProp_HitFromDirection = { "HitFromDirection", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSControllerFunctionLibrary_eventMakeSimpleHitData_Parms, HitFromDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFPSControllerFunctionLibrary_MakeSimpleHitData_Statics::NewProp_HitNormal = { "HitNormal", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSControllerFunctionLibrary_eventMakeSimpleHitData_Parms, HitNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFPSControllerFunctionLibrary_MakeSimpleHitData_Statics::NewProp_bRadial_SetBit(void* Obj)
	{
		((FPSControllerFunctionLibrary_eventMakeSimpleHitData_Parms*)Obj)->bRadial = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFPSControllerFunctionLibrary_MakeSimpleHitData_Statics::NewProp_bRadial = { "bRadial", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPSControllerFunctionLibrary_eventMakeSimpleHitData_Parms), &Z_Construct_UFunction_UFPSControllerFunctionLibrary_MakeSimpleHitData_Statics::NewProp_bRadial_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFPSControllerFunctionLibrary_MakeSimpleHitData_Statics::NewProp_HitComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFPSControllerFunctionLibrary_MakeSimpleHitData_Statics::NewProp_HitComponent = { "HitComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSControllerFunctionLibrary_eventMakeSimpleHitData_Parms, HitComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UFPSControllerFunctionLibrary_MakeSimpleHitData_Statics::NewProp_HitComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSControllerFunctionLibrary_MakeSimpleHitData_Statics::NewProp_HitComponent_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UFPSControllerFunctionLibrary_MakeSimpleHitData_Statics::NewProp_HitBoneName = { "HitBoneName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSControllerFunctionLibrary_eventMakeSimpleHitData_Parms, HitBoneName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFPSControllerFunctionLibrary_MakeSimpleHitData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSControllerFunctionLibrary_eventMakeSimpleHitData_Parms, ReturnValue), Z_Construct_UScriptStruct_FSimpleHitData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFPSControllerFunctionLibrary_MakeSimpleHitData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSControllerFunctionLibrary_MakeSimpleHitData_Statics::NewProp_Damage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSControllerFunctionLibrary_MakeSimpleHitData_Statics::NewProp_position,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSControllerFunctionLibrary_MakeSimpleHitData_Statics::NewProp_HitFromDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSControllerFunctionLibrary_MakeSimpleHitData_Statics::NewProp_HitNormal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSControllerFunctionLibrary_MakeSimpleHitData_Statics::NewProp_bRadial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSControllerFunctionLibrary_MakeSimpleHitData_Statics::NewProp_HitComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSControllerFunctionLibrary_MakeSimpleHitData_Statics::NewProp_HitBoneName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSControllerFunctionLibrary_MakeSimpleHitData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFPSControllerFunctionLibrary_MakeSimpleHitData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSControllerFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFPSControllerFunctionLibrary_MakeSimpleHitData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFPSControllerFunctionLibrary, nullptr, "MakeSimpleHitData", nullptr, nullptr, sizeof(FPSControllerFunctionLibrary_eventMakeSimpleHitData_Parms), Z_Construct_UFunction_UFPSControllerFunctionLibrary_MakeSimpleHitData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSControllerFunctionLibrary_MakeSimpleHitData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFPSControllerFunctionLibrary_MakeSimpleHitData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSControllerFunctionLibrary_MakeSimpleHitData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFPSControllerFunctionLibrary_MakeSimpleHitData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFPSControllerFunctionLibrary_MakeSimpleHitData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFPSControllerFunctionLibrary_SettleFloat_Statics
	{
		struct FPSControllerFunctionLibrary_eventSettleFloat_Parms
		{
			float Offset;
			float Settling;
			float DeltaTime;
			bool bNonLinearBlend;
			float Delta;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Offset;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Settling;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static void NewProp_bNonLinearBlend_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNonLinearBlend;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Delta;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFPSControllerFunctionLibrary_SettleFloat_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSControllerFunctionLibrary_eventSettleFloat_Parms, Offset), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFPSControllerFunctionLibrary_SettleFloat_Statics::NewProp_Settling = { "Settling", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSControllerFunctionLibrary_eventSettleFloat_Parms, Settling), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFPSControllerFunctionLibrary_SettleFloat_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSControllerFunctionLibrary_eventSettleFloat_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFPSControllerFunctionLibrary_SettleFloat_Statics::NewProp_bNonLinearBlend_SetBit(void* Obj)
	{
		((FPSControllerFunctionLibrary_eventSettleFloat_Parms*)Obj)->bNonLinearBlend = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFPSControllerFunctionLibrary_SettleFloat_Statics::NewProp_bNonLinearBlend = { "bNonLinearBlend", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPSControllerFunctionLibrary_eventSettleFloat_Parms), &Z_Construct_UFunction_UFPSControllerFunctionLibrary_SettleFloat_Statics::NewProp_bNonLinearBlend_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFPSControllerFunctionLibrary_SettleFloat_Statics::NewProp_Delta = { "Delta", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSControllerFunctionLibrary_eventSettleFloat_Parms, Delta), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFPSControllerFunctionLibrary_SettleFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSControllerFunctionLibrary_eventSettleFloat_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFPSControllerFunctionLibrary_SettleFloat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSControllerFunctionLibrary_SettleFloat_Statics::NewProp_Offset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSControllerFunctionLibrary_SettleFloat_Statics::NewProp_Settling,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSControllerFunctionLibrary_SettleFloat_Statics::NewProp_DeltaTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSControllerFunctionLibrary_SettleFloat_Statics::NewProp_bNonLinearBlend,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSControllerFunctionLibrary_SettleFloat_Statics::NewProp_Delta,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSControllerFunctionLibrary_SettleFloat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFPSControllerFunctionLibrary_SettleFloat_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSControllerFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFPSControllerFunctionLibrary_SettleFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFPSControllerFunctionLibrary, nullptr, "SettleFloat", nullptr, nullptr, sizeof(FPSControllerFunctionLibrary_eventSettleFloat_Parms), Z_Construct_UFunction_UFPSControllerFunctionLibrary_SettleFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSControllerFunctionLibrary_SettleFloat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFPSControllerFunctionLibrary_SettleFloat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSControllerFunctionLibrary_SettleFloat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFPSControllerFunctionLibrary_SettleFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFPSControllerFunctionLibrary_SettleFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFPSControllerFunctionLibrary_SettleVector_Statics
	{
		struct FPSControllerFunctionLibrary_eventSettleVector_Parms
		{
			FVector Offset;
			FVector Settling;
			float DeltaTime;
			bool bNonLinearBlend;
			FVector Delta;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Offset;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Settling;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static void NewProp_bNonLinearBlend_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNonLinearBlend;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Delta;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFPSControllerFunctionLibrary_SettleVector_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSControllerFunctionLibrary_eventSettleVector_Parms, Offset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFPSControllerFunctionLibrary_SettleVector_Statics::NewProp_Settling = { "Settling", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSControllerFunctionLibrary_eventSettleVector_Parms, Settling), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFPSControllerFunctionLibrary_SettleVector_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSControllerFunctionLibrary_eventSettleVector_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFPSControllerFunctionLibrary_SettleVector_Statics::NewProp_bNonLinearBlend_SetBit(void* Obj)
	{
		((FPSControllerFunctionLibrary_eventSettleVector_Parms*)Obj)->bNonLinearBlend = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFPSControllerFunctionLibrary_SettleVector_Statics::NewProp_bNonLinearBlend = { "bNonLinearBlend", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPSControllerFunctionLibrary_eventSettleVector_Parms), &Z_Construct_UFunction_UFPSControllerFunctionLibrary_SettleVector_Statics::NewProp_bNonLinearBlend_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFPSControllerFunctionLibrary_SettleVector_Statics::NewProp_Delta = { "Delta", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSControllerFunctionLibrary_eventSettleVector_Parms, Delta), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFPSControllerFunctionLibrary_SettleVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSControllerFunctionLibrary_eventSettleVector_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFPSControllerFunctionLibrary_SettleVector_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSControllerFunctionLibrary_SettleVector_Statics::NewProp_Offset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSControllerFunctionLibrary_SettleVector_Statics::NewProp_Settling,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSControllerFunctionLibrary_SettleVector_Statics::NewProp_DeltaTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSControllerFunctionLibrary_SettleVector_Statics::NewProp_bNonLinearBlend,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSControllerFunctionLibrary_SettleVector_Statics::NewProp_Delta,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSControllerFunctionLibrary_SettleVector_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFPSControllerFunctionLibrary_SettleVector_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSControllerFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFPSControllerFunctionLibrary_SettleVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFPSControllerFunctionLibrary, nullptr, "SettleVector", nullptr, nullptr, sizeof(FPSControllerFunctionLibrary_eventSettleVector_Parms), Z_Construct_UFunction_UFPSControllerFunctionLibrary_SettleVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSControllerFunctionLibrary_SettleVector_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFPSControllerFunctionLibrary_SettleVector_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSControllerFunctionLibrary_SettleVector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFPSControllerFunctionLibrary_SettleVector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFPSControllerFunctionLibrary_SettleVector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFPSControllerFunctionLibrary_SmoothLerp_Statics
	{
		struct FPSControllerFunctionLibrary_eventSmoothLerp_Parms
		{
			float A;
			float B;
			float Speed;
			float DeltaTime;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_A;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_B;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Speed;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFPSControllerFunctionLibrary_SmoothLerp_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSControllerFunctionLibrary_eventSmoothLerp_Parms, A), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFPSControllerFunctionLibrary_SmoothLerp_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSControllerFunctionLibrary_eventSmoothLerp_Parms, B), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFPSControllerFunctionLibrary_SmoothLerp_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSControllerFunctionLibrary_eventSmoothLerp_Parms, Speed), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFPSControllerFunctionLibrary_SmoothLerp_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSControllerFunctionLibrary_eventSmoothLerp_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFPSControllerFunctionLibrary_SmoothLerp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSControllerFunctionLibrary_eventSmoothLerp_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFPSControllerFunctionLibrary_SmoothLerp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSControllerFunctionLibrary_SmoothLerp_Statics::NewProp_A,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSControllerFunctionLibrary_SmoothLerp_Statics::NewProp_B,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSControllerFunctionLibrary_SmoothLerp_Statics::NewProp_Speed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSControllerFunctionLibrary_SmoothLerp_Statics::NewProp_DeltaTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSControllerFunctionLibrary_SmoothLerp_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFPSControllerFunctionLibrary_SmoothLerp_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSControllerFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFPSControllerFunctionLibrary_SmoothLerp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFPSControllerFunctionLibrary, nullptr, "SmoothLerp", nullptr, nullptr, sizeof(FPSControllerFunctionLibrary_eventSmoothLerp_Parms), Z_Construct_UFunction_UFPSControllerFunctionLibrary_SmoothLerp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSControllerFunctionLibrary_SmoothLerp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFPSControllerFunctionLibrary_SmoothLerp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSControllerFunctionLibrary_SmoothLerp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFPSControllerFunctionLibrary_SmoothLerp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFPSControllerFunctionLibrary_SmoothLerp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFPSControllerFunctionLibrary_SmoothLerpV_Statics
	{
		struct FPSControllerFunctionLibrary_eventSmoothLerpV_Parms
		{
			FVector A;
			FVector B;
			float Speed;
			float DeltaTime;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_A;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_B;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Speed;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFPSControllerFunctionLibrary_SmoothLerpV_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSControllerFunctionLibrary_eventSmoothLerpV_Parms, A), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFPSControllerFunctionLibrary_SmoothLerpV_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSControllerFunctionLibrary_eventSmoothLerpV_Parms, B), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFPSControllerFunctionLibrary_SmoothLerpV_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSControllerFunctionLibrary_eventSmoothLerpV_Parms, Speed), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFPSControllerFunctionLibrary_SmoothLerpV_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSControllerFunctionLibrary_eventSmoothLerpV_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFPSControllerFunctionLibrary_SmoothLerpV_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSControllerFunctionLibrary_eventSmoothLerpV_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFPSControllerFunctionLibrary_SmoothLerpV_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSControllerFunctionLibrary_SmoothLerpV_Statics::NewProp_A,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSControllerFunctionLibrary_SmoothLerpV_Statics::NewProp_B,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSControllerFunctionLibrary_SmoothLerpV_Statics::NewProp_Speed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSControllerFunctionLibrary_SmoothLerpV_Statics::NewProp_DeltaTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSControllerFunctionLibrary_SmoothLerpV_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFPSControllerFunctionLibrary_SmoothLerpV_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSControllerFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFPSControllerFunctionLibrary_SmoothLerpV_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFPSControllerFunctionLibrary, nullptr, "SmoothLerpV", nullptr, nullptr, sizeof(FPSControllerFunctionLibrary_eventSmoothLerpV_Parms), Z_Construct_UFunction_UFPSControllerFunctionLibrary_SmoothLerpV_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSControllerFunctionLibrary_SmoothLerpV_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFPSControllerFunctionLibrary_SmoothLerpV_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSControllerFunctionLibrary_SmoothLerpV_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFPSControllerFunctionLibrary_SmoothLerpV()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFPSControllerFunctionLibrary_SmoothLerpV_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFPSControllerFunctionLibrary_SpawnEffectAsset_Statics
	{
		struct FPSControllerFunctionLibrary_eventSpawnEffectAsset_Parms
		{
			UObject* WorldContext;
			FVector Location;
			FRotator Rotation;
			UFXSystemAsset* Asset;
			UPrimitiveComponent* AttachComponent;
			TEnumAsByte<EAttachLocation::Type> AttachType;
			bool bAutoDestroy;
			FName AttachBoneName;
			UFXSystemComponent* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContext;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotation;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Asset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttachComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AttachComponent;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AttachType;
		static void NewProp_bAutoDestroy_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoDestroy;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AttachBoneName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFPSControllerFunctionLibrary_SpawnEffectAsset_Statics::NewProp_WorldContext = { "WorldContext", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSControllerFunctionLibrary_eventSpawnEffectAsset_Parms, WorldContext), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFPSControllerFunctionLibrary_SpawnEffectAsset_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSControllerFunctionLibrary_eventSpawnEffectAsset_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFPSControllerFunctionLibrary_SpawnEffectAsset_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSControllerFunctionLibrary_eventSpawnEffectAsset_Parms, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFPSControllerFunctionLibrary_SpawnEffectAsset_Statics::NewProp_Asset = { "Asset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSControllerFunctionLibrary_eventSpawnEffectAsset_Parms, Asset), Z_Construct_UClass_UFXSystemAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFPSControllerFunctionLibrary_SpawnEffectAsset_Statics::NewProp_AttachComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFPSControllerFunctionLibrary_SpawnEffectAsset_Statics::NewProp_AttachComponent = { "AttachComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSControllerFunctionLibrary_eventSpawnEffectAsset_Parms, AttachComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UFPSControllerFunctionLibrary_SpawnEffectAsset_Statics::NewProp_AttachComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSControllerFunctionLibrary_SpawnEffectAsset_Statics::NewProp_AttachComponent_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFPSControllerFunctionLibrary_SpawnEffectAsset_Statics::NewProp_AttachType = { "AttachType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSControllerFunctionLibrary_eventSpawnEffectAsset_Parms, AttachType), Z_Construct_UEnum_Engine_EAttachLocation, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFPSControllerFunctionLibrary_SpawnEffectAsset_Statics::NewProp_bAutoDestroy_SetBit(void* Obj)
	{
		((FPSControllerFunctionLibrary_eventSpawnEffectAsset_Parms*)Obj)->bAutoDestroy = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFPSControllerFunctionLibrary_SpawnEffectAsset_Statics::NewProp_bAutoDestroy = { "bAutoDestroy", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPSControllerFunctionLibrary_eventSpawnEffectAsset_Parms), &Z_Construct_UFunction_UFPSControllerFunctionLibrary_SpawnEffectAsset_Statics::NewProp_bAutoDestroy_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UFPSControllerFunctionLibrary_SpawnEffectAsset_Statics::NewProp_AttachBoneName = { "AttachBoneName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSControllerFunctionLibrary_eventSpawnEffectAsset_Parms, AttachBoneName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFPSControllerFunctionLibrary_SpawnEffectAsset_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFPSControllerFunctionLibrary_SpawnEffectAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSControllerFunctionLibrary_eventSpawnEffectAsset_Parms, ReturnValue), Z_Construct_UClass_UFXSystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UFPSControllerFunctionLibrary_SpawnEffectAsset_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSControllerFunctionLibrary_SpawnEffectAsset_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFPSControllerFunctionLibrary_SpawnEffectAsset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSControllerFunctionLibrary_SpawnEffectAsset_Statics::NewProp_WorldContext,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSControllerFunctionLibrary_SpawnEffectAsset_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSControllerFunctionLibrary_SpawnEffectAsset_Statics::NewProp_Rotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSControllerFunctionLibrary_SpawnEffectAsset_Statics::NewProp_Asset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSControllerFunctionLibrary_SpawnEffectAsset_Statics::NewProp_AttachComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSControllerFunctionLibrary_SpawnEffectAsset_Statics::NewProp_AttachType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSControllerFunctionLibrary_SpawnEffectAsset_Statics::NewProp_bAutoDestroy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSControllerFunctionLibrary_SpawnEffectAsset_Statics::NewProp_AttachBoneName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSControllerFunctionLibrary_SpawnEffectAsset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFPSControllerFunctionLibrary_SpawnEffectAsset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSControllerFunctionLibrary.h" },
		{ "WorldContext", "WorldContext" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFPSControllerFunctionLibrary_SpawnEffectAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFPSControllerFunctionLibrary, nullptr, "SpawnEffectAsset", nullptr, nullptr, sizeof(FPSControllerFunctionLibrary_eventSpawnEffectAsset_Parms), Z_Construct_UFunction_UFPSControllerFunctionLibrary_SpawnEffectAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSControllerFunctionLibrary_SpawnEffectAsset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFPSControllerFunctionLibrary_SpawnEffectAsset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSControllerFunctionLibrary_SpawnEffectAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFPSControllerFunctionLibrary_SpawnEffectAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFPSControllerFunctionLibrary_SpawnEffectAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFPSControllerFunctionLibrary_SpawnPickup_Statics
	{
		struct FPSControllerFunctionLibrary_eventSpawnPickup_Parms
		{
			UObject* WorldContext;
			TSubclassOf<AFPSItemPickup>  PickupClass;
			UFPSItemData* Data;
			FFPSItemSlotData SlotData;
			FTransform Transform;
			AFPSItemPickup* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContext;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_PickupClass;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Data;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SlotData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Transform;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFPSControllerFunctionLibrary_SpawnPickup_Statics::NewProp_WorldContext = { "WorldContext", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSControllerFunctionLibrary_eventSpawnPickup_Parms, WorldContext), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFPSControllerFunctionLibrary_SpawnPickup_Statics::NewProp_PickupClass = { "PickupClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSControllerFunctionLibrary_eventSpawnPickup_Parms, PickupClass), Z_Construct_UClass_AFPSItemPickup_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFPSControllerFunctionLibrary_SpawnPickup_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSControllerFunctionLibrary_eventSpawnPickup_Parms, Data), Z_Construct_UClass_UFPSItemData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFPSControllerFunctionLibrary_SpawnPickup_Statics::NewProp_SlotData = { "SlotData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSControllerFunctionLibrary_eventSpawnPickup_Parms, SlotData), Z_Construct_UScriptStruct_FFPSItemSlotData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFPSControllerFunctionLibrary_SpawnPickup_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSControllerFunctionLibrary_eventSpawnPickup_Parms, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFPSControllerFunctionLibrary_SpawnPickup_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSControllerFunctionLibrary_eventSpawnPickup_Parms, ReturnValue), Z_Construct_UClass_AFPSItemPickup_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFPSControllerFunctionLibrary_SpawnPickup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSControllerFunctionLibrary_SpawnPickup_Statics::NewProp_WorldContext,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSControllerFunctionLibrary_SpawnPickup_Statics::NewProp_PickupClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSControllerFunctionLibrary_SpawnPickup_Statics::NewProp_Data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSControllerFunctionLibrary_SpawnPickup_Statics::NewProp_SlotData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSControllerFunctionLibrary_SpawnPickup_Statics::NewProp_Transform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSControllerFunctionLibrary_SpawnPickup_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFPSControllerFunctionLibrary_SpawnPickup_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSControllerFunctionLibrary.h" },
		{ "WorldContext", "WorldContext" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFPSControllerFunctionLibrary_SpawnPickup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFPSControllerFunctionLibrary, nullptr, "SpawnPickup", nullptr, nullptr, sizeof(FPSControllerFunctionLibrary_eventSpawnPickup_Parms), Z_Construct_UFunction_UFPSControllerFunctionLibrary_SpawnPickup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSControllerFunctionLibrary_SpawnPickup_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFPSControllerFunctionLibrary_SpawnPickup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSControllerFunctionLibrary_SpawnPickup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFPSControllerFunctionLibrary_SpawnPickup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFPSControllerFunctionLibrary_SpawnPickup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFPSControllerFunctionLibrary_TickConstantLerpDriver_Statics
	{
		struct FPSControllerFunctionLibrary_eventTickConstantLerpDriver_Parms
		{
			FConstantLerpDriver Driver;
			float Target;
			float DeltaTime;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Driver;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Target;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFPSControllerFunctionLibrary_TickConstantLerpDriver_Statics::NewProp_Driver = { "Driver", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSControllerFunctionLibrary_eventTickConstantLerpDriver_Parms, Driver), Z_Construct_UScriptStruct_FConstantLerpDriver, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFPSControllerFunctionLibrary_TickConstantLerpDriver_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSControllerFunctionLibrary_eventTickConstantLerpDriver_Parms, Target), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFPSControllerFunctionLibrary_TickConstantLerpDriver_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSControllerFunctionLibrary_eventTickConstantLerpDriver_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFPSControllerFunctionLibrary_TickConstantLerpDriver_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSControllerFunctionLibrary_eventTickConstantLerpDriver_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFPSControllerFunctionLibrary_TickConstantLerpDriver_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSControllerFunctionLibrary_TickConstantLerpDriver_Statics::NewProp_Driver,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSControllerFunctionLibrary_TickConstantLerpDriver_Statics::NewProp_Target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSControllerFunctionLibrary_TickConstantLerpDriver_Statics::NewProp_DeltaTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSControllerFunctionLibrary_TickConstantLerpDriver_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFPSControllerFunctionLibrary_TickConstantLerpDriver_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSControllerFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFPSControllerFunctionLibrary_TickConstantLerpDriver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFPSControllerFunctionLibrary, nullptr, "TickConstantLerpDriver", nullptr, nullptr, sizeof(FPSControllerFunctionLibrary_eventTickConstantLerpDriver_Parms), Z_Construct_UFunction_UFPSControllerFunctionLibrary_TickConstantLerpDriver_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSControllerFunctionLibrary_TickConstantLerpDriver_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFPSControllerFunctionLibrary_TickConstantLerpDriver_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSControllerFunctionLibrary_TickConstantLerpDriver_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFPSControllerFunctionLibrary_TickConstantLerpDriver()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFPSControllerFunctionLibrary_TickConstantLerpDriver_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFPSControllerFunctionLibrary_TickLimitedSmoothLerpDriver_Statics
	{
		struct FPSControllerFunctionLibrary_eventTickLimitedSmoothLerpDriver_Parms
		{
			FLimitedSmoothLerpDriver Driver;
			float Target;
			float DeltaTime;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Driver;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Target;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFPSControllerFunctionLibrary_TickLimitedSmoothLerpDriver_Statics::NewProp_Driver = { "Driver", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSControllerFunctionLibrary_eventTickLimitedSmoothLerpDriver_Parms, Driver), Z_Construct_UScriptStruct_FLimitedSmoothLerpDriver, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFPSControllerFunctionLibrary_TickLimitedSmoothLerpDriver_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSControllerFunctionLibrary_eventTickLimitedSmoothLerpDriver_Parms, Target), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFPSControllerFunctionLibrary_TickLimitedSmoothLerpDriver_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSControllerFunctionLibrary_eventTickLimitedSmoothLerpDriver_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFPSControllerFunctionLibrary_TickLimitedSmoothLerpDriver_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSControllerFunctionLibrary_eventTickLimitedSmoothLerpDriver_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFPSControllerFunctionLibrary_TickLimitedSmoothLerpDriver_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSControllerFunctionLibrary_TickLimitedSmoothLerpDriver_Statics::NewProp_Driver,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSControllerFunctionLibrary_TickLimitedSmoothLerpDriver_Statics::NewProp_Target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSControllerFunctionLibrary_TickLimitedSmoothLerpDriver_Statics::NewProp_DeltaTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSControllerFunctionLibrary_TickLimitedSmoothLerpDriver_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFPSControllerFunctionLibrary_TickLimitedSmoothLerpDriver_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSControllerFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFPSControllerFunctionLibrary_TickLimitedSmoothLerpDriver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFPSControllerFunctionLibrary, nullptr, "TickLimitedSmoothLerpDriver", nullptr, nullptr, sizeof(FPSControllerFunctionLibrary_eventTickLimitedSmoothLerpDriver_Parms), Z_Construct_UFunction_UFPSControllerFunctionLibrary_TickLimitedSmoothLerpDriver_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSControllerFunctionLibrary_TickLimitedSmoothLerpDriver_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFPSControllerFunctionLibrary_TickLimitedSmoothLerpDriver_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSControllerFunctionLibrary_TickLimitedSmoothLerpDriver_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFPSControllerFunctionLibrary_TickLimitedSmoothLerpDriver()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFPSControllerFunctionLibrary_TickLimitedSmoothLerpDriver_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFPSControllerFunctionLibrary_TickPhysicalLerpDriver_Statics
	{
		struct FPSControllerFunctionLibrary_eventTickPhysicalLerpDriver_Parms
		{
			FPhysicalLerpDriver Driver;
			float Target;
			float DeltaTime;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Driver;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Target;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFPSControllerFunctionLibrary_TickPhysicalLerpDriver_Statics::NewProp_Driver = { "Driver", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSControllerFunctionLibrary_eventTickPhysicalLerpDriver_Parms, Driver), Z_Construct_UScriptStruct_FPhysicalLerpDriver, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFPSControllerFunctionLibrary_TickPhysicalLerpDriver_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSControllerFunctionLibrary_eventTickPhysicalLerpDriver_Parms, Target), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFPSControllerFunctionLibrary_TickPhysicalLerpDriver_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSControllerFunctionLibrary_eventTickPhysicalLerpDriver_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFPSControllerFunctionLibrary_TickPhysicalLerpDriver_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSControllerFunctionLibrary_eventTickPhysicalLerpDriver_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFPSControllerFunctionLibrary_TickPhysicalLerpDriver_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSControllerFunctionLibrary_TickPhysicalLerpDriver_Statics::NewProp_Driver,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSControllerFunctionLibrary_TickPhysicalLerpDriver_Statics::NewProp_Target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSControllerFunctionLibrary_TickPhysicalLerpDriver_Statics::NewProp_DeltaTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSControllerFunctionLibrary_TickPhysicalLerpDriver_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFPSControllerFunctionLibrary_TickPhysicalLerpDriver_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSControllerFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFPSControllerFunctionLibrary_TickPhysicalLerpDriver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFPSControllerFunctionLibrary, nullptr, "TickPhysicalLerpDriver", nullptr, nullptr, sizeof(FPSControllerFunctionLibrary_eventTickPhysicalLerpDriver_Parms), Z_Construct_UFunction_UFPSControllerFunctionLibrary_TickPhysicalLerpDriver_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSControllerFunctionLibrary_TickPhysicalLerpDriver_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFPSControllerFunctionLibrary_TickPhysicalLerpDriver_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSControllerFunctionLibrary_TickPhysicalLerpDriver_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFPSControllerFunctionLibrary_TickPhysicalLerpDriver()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFPSControllerFunctionLibrary_TickPhysicalLerpDriver_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFPSControllerFunctionLibrary_TickSmoothLerpDriver_Statics
	{
		struct FPSControllerFunctionLibrary_eventTickSmoothLerpDriver_Parms
		{
			FSmoothLerpDriver Driver;
			float Target;
			float DeltaTime;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Driver;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Target;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFPSControllerFunctionLibrary_TickSmoothLerpDriver_Statics::NewProp_Driver = { "Driver", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSControllerFunctionLibrary_eventTickSmoothLerpDriver_Parms, Driver), Z_Construct_UScriptStruct_FSmoothLerpDriver, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFPSControllerFunctionLibrary_TickSmoothLerpDriver_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSControllerFunctionLibrary_eventTickSmoothLerpDriver_Parms, Target), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFPSControllerFunctionLibrary_TickSmoothLerpDriver_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSControllerFunctionLibrary_eventTickSmoothLerpDriver_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFPSControllerFunctionLibrary_TickSmoothLerpDriver_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSControllerFunctionLibrary_eventTickSmoothLerpDriver_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFPSControllerFunctionLibrary_TickSmoothLerpDriver_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSControllerFunctionLibrary_TickSmoothLerpDriver_Statics::NewProp_Driver,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSControllerFunctionLibrary_TickSmoothLerpDriver_Statics::NewProp_Target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSControllerFunctionLibrary_TickSmoothLerpDriver_Statics::NewProp_DeltaTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSControllerFunctionLibrary_TickSmoothLerpDriver_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFPSControllerFunctionLibrary_TickSmoothLerpDriver_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSControllerFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFPSControllerFunctionLibrary_TickSmoothLerpDriver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFPSControllerFunctionLibrary, nullptr, "TickSmoothLerpDriver", nullptr, nullptr, sizeof(FPSControllerFunctionLibrary_eventTickSmoothLerpDriver_Parms), Z_Construct_UFunction_UFPSControllerFunctionLibrary_TickSmoothLerpDriver_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSControllerFunctionLibrary_TickSmoothLerpDriver_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFPSControllerFunctionLibrary_TickSmoothLerpDriver_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSControllerFunctionLibrary_TickSmoothLerpDriver_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFPSControllerFunctionLibrary_TickSmoothLerpDriver()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFPSControllerFunctionLibrary_TickSmoothLerpDriver_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFPSControllerFunctionLibrary_NoRegister()
	{
		return UFPSControllerFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UFPSControllerFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFPSControllerFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_FPSController,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFPSControllerFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFPSControllerFunctionLibrary_ConvertRotationToItemSpace, "ConvertRotationToItemSpace" }, // 1414212410
		{ &Z_Construct_UFunction_UFPSControllerFunctionLibrary_ConvertVectorToItemSpace, "ConvertVectorToItemSpace" }, // 3774283838
		{ &Z_Construct_UFunction_UFPSControllerFunctionLibrary_CubicInterpFloat, "CubicInterpFloat" }, // 25964727
		{ &Z_Construct_UFunction_UFPSControllerFunctionLibrary_CubicInterpVector, "CubicInterpVector" }, // 3413864876
		{ &Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetBallisticBoneName, "GetBallisticBoneName" }, // 1614013935
		{ &Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetBallisticDidDamage, "GetBallisticDidDamage" }, // 454373741
		{ &Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetBallisticDidHit, "GetBallisticDidHit" }, // 542848308
		{ &Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetClosestSyncMarker, "GetClosestSyncMarker" }, // 2603607412
		{ &Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetControl, "GetControl" }, // 1588360966
		{ &Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetItemDataSoftObject, "GetItemDataSoftObject" }, // 274819635
		{ &Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetItemSoftClass, "GetItemSoftClass" }, // 14882687
		{ &Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetLODLevel, "GetLODLevel" }, // 3840466524
		{ &Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetMeleeAttackDirection, "GetMeleeAttackDirection" }, // 2767218348
		{ &Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetMeleeHit, "GetMeleeHit" }, // 3657865064
		{ &Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetMeleeKicking, "GetMeleeKicking" }, // 3712449714
		{ &Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetNameFromPrimaryAssetID, "GetNameFromPrimaryAssetID" }, // 3931529704
		{ &Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetSimpleBoneName, "GetSimpleBoneName" }, // 3065393880
		{ &Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetSimpleDamage, "GetSimpleDamage" }, // 3826742601
		{ &Z_Construct_UFunction_UFPSControllerFunctionLibrary_GetUsingMelee, "GetUsingMelee" }, // 3658069416
		{ &Z_Construct_UFunction_UFPSControllerFunctionLibrary_IsNiagaraAsset, "IsNiagaraAsset" }, // 1938204339
		{ &Z_Construct_UFunction_UFPSControllerFunctionLibrary_IsNiagaraComponent, "IsNiagaraComponent" }, // 3378730901
		{ &Z_Construct_UFunction_UFPSControllerFunctionLibrary_MakeBallisticHitData, "MakeBallisticHitData" }, // 635930183
		{ &Z_Construct_UFunction_UFPSControllerFunctionLibrary_MakeMeleeHitData, "MakeMeleeHitData" }, // 19100436
		{ &Z_Construct_UFunction_UFPSControllerFunctionLibrary_MakeSimpleHitData, "MakeSimpleHitData" }, // 3524039796
		{ &Z_Construct_UFunction_UFPSControllerFunctionLibrary_SettleFloat, "SettleFloat" }, // 3200305799
		{ &Z_Construct_UFunction_UFPSControllerFunctionLibrary_SettleVector, "SettleVector" }, // 2414069448
		{ &Z_Construct_UFunction_UFPSControllerFunctionLibrary_SmoothLerp, "SmoothLerp" }, // 2529322730
		{ &Z_Construct_UFunction_UFPSControllerFunctionLibrary_SmoothLerpV, "SmoothLerpV" }, // 3191113336
		{ &Z_Construct_UFunction_UFPSControllerFunctionLibrary_SpawnEffectAsset, "SpawnEffectAsset" }, // 2192647598
		{ &Z_Construct_UFunction_UFPSControllerFunctionLibrary_SpawnPickup, "SpawnPickup" }, // 2669690468
		{ &Z_Construct_UFunction_UFPSControllerFunctionLibrary_TickConstantLerpDriver, "TickConstantLerpDriver" }, // 1607226310
		{ &Z_Construct_UFunction_UFPSControllerFunctionLibrary_TickLimitedSmoothLerpDriver, "TickLimitedSmoothLerpDriver" }, // 1080652116
		{ &Z_Construct_UFunction_UFPSControllerFunctionLibrary_TickPhysicalLerpDriver, "TickPhysicalLerpDriver" }, // 1264369348
		{ &Z_Construct_UFunction_UFPSControllerFunctionLibrary_TickSmoothLerpDriver, "TickSmoothLerpDriver" }, // 1563678230
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSControllerFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "FPSControllerFunctionLibrary.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/FPSControllerFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFPSControllerFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFPSControllerFunctionLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFPSControllerFunctionLibrary_Statics::ClassParams = {
		&UFPSControllerFunctionLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFPSControllerFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSControllerFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFPSControllerFunctionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFPSControllerFunctionLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFPSControllerFunctionLibrary, 3652855877);
	template<> FPSCONTROLLER_API UClass* StaticClass<UFPSControllerFunctionLibrary>()
	{
		return UFPSControllerFunctionLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFPSControllerFunctionLibrary(Z_Construct_UClass_UFPSControllerFunctionLibrary, &UFPSControllerFunctionLibrary::StaticClass, TEXT("/Script/FPSController"), TEXT("UFPSControllerFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFPSControllerFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
