// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSController/Public/FPSCharacterBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFPSCharacterBase() {}
// Cross Module References
	FPSCONTROLLER_API UClass* Z_Construct_UClass_AFPSCharacterBase_NoRegister();
	FPSCONTROLLER_API UClass* Z_Construct_UClass_AFPSCharacterBase();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_FPSController();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	FPSCONTROLLER_API UClass* Z_Construct_UClass_UFPSItemData_NoRegister();
	FPSCONTROLLER_API UScriptStruct* Z_Construct_UScriptStruct_FFPSItemSlotData();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	FPSCONTROLLER_API UClass* Z_Construct_UClass_AFPSItemPickup_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	FPSCONTROLLER_API UClass* Z_Construct_UClass_AFPSItem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FPrimaryAssetId();
	FPSCONTROLLER_API UEnum* Z_Construct_UEnum_FPSController_EFPSCharacterAbilities();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	FPSCONTROLLER_API UClass* Z_Construct_UClass_UFPSCharacterMovementComponent_NoRegister();
	FPSCONTROLLER_API UScriptStruct* Z_Construct_UScriptStruct_FFPSLoadout();
	FPSCONTROLLER_API UScriptStruct* Z_Construct_UScriptStruct_FMagazineData();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	FPSCONTROLLER_API UEnum* Z_Construct_UEnum_FPSController_EFPSCharacterState();
	FPSCONTROLLER_API UScriptStruct* Z_Construct_UScriptStruct_FSimpleHitData();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UDamageType_NoRegister();
	FPSCONTROLLER_API UFunction* Z_Construct_UDelegateFunction_FPSController_CharacterItemSlotUpdatedDelegate__DelegateSignature();
	FPSCONTROLLER_API UFunction* Z_Construct_UDelegateFunction_FPSController_CharacterItemUpdatedDelegate__DelegateSignature();
	FPSCONTROLLER_API UFunction* Z_Construct_UDelegateFunction_FPSController_CharacterSlotUpdatedDelegate__DelegateSignature();
	FPSCONTROLLER_API UClass* Z_Construct_UClass_USuppressionCameraModifier_NoRegister();
	FPSCONTROLLER_API UClass* Z_Construct_UClass_ULowHealthCameraModifier_NoRegister();
	FPSCONTROLLER_API UClass* Z_Construct_UClass_USprintingCameraModifier_NoRegister();
	FPSCONTROLLER_API UClass* Z_Construct_UClass_UNightVisionCameraModifier_NoRegister();
	FPSCONTROLLER_API UClass* Z_Construct_UClass_UAimingCameraModifier_NoRegister();
	FPSCONTROLLER_API UClass* Z_Construct_UClass_UCameraAnimationCameraModifier_NoRegister();
	FPSCONTROLLER_API UClass* Z_Construct_UClass_UDamageCameraModifier_NoRegister();
	FPSCONTROLLER_API UFunction* Z_Construct_UDelegateFunction_FPSController_CharacterPlayerStateChangedDelegate__DelegateSignature();
	FPSCONTROLLER_API UFunction* Z_Construct_UDelegateFunction_FPSController_CharacterControllerChangedDelegate__DelegateSignature();
	AIMODULE_API UClass* Z_Construct_UClass_UAISightTargetInterface_NoRegister();
	FPSCONTROLLER_API UClass* Z_Construct_UClass_UMeleeUser_NoRegister();
	FPSCONTROLLER_API UClass* Z_Construct_UClass_USuppressable_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UGenericTeamAgentInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AFPSCharacterBase::execAddFreeAim)
	{
		P_GET_STRUCT(FVector,Z_Param_FreeAim);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddFreeAim(Z_Param_FreeAim);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSCharacterBase::execAddItem)
	{
		P_GET_OBJECT(UFPSItemData,Z_Param_ItemData);
		P_GET_STRUCT(FFPSItemSlotData,Z_Param_SlotData);
		P_GET_UBOOL(Z_Param_bEquip);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddItem_Implementation(Z_Param_ItemData,Z_Param_SlotData,Z_Param_bEquip);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSCharacterBase::execAddRecoil)
	{
		P_GET_STRUCT(FVector2D,Z_Param_Recoil);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddRecoil(Z_Param_Recoil);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSCharacterBase::execAddRotationOffset)
	{
		P_GET_STRUCT(FVector,Z_Param_Offset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddRotationOffset(Z_Param_Offset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSCharacterBase::execAddSuppression)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Amount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddSuppression(Z_Param_Amount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSCharacterBase::execApplyPositionOffset)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Delta);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyPositionOffset(Z_Param_Out_Delta);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSCharacterBase::execApplyRotationOffset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyRotationOffset();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSCharacterBase::execBlendHeight)
	{
		P_GET_UBOOL(Z_Param_bCovered);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BlendHeight_Implementation(Z_Param_bCovered);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSCharacterBase::execBlendNightVision)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BlendNightVision_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSCharacterBase::execCanAddAmmo)
	{
		P_GET_UBOOL(Z_Param_bUseFullAmmo);
		P_GET_UBOOL(Z_Param_bAllItems);
		P_GET_PROPERTY(FIntProperty,Z_Param_Amount);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanAddAmmo(Z_Param_bUseFullAmmo,Z_Param_bAllItems,Z_Param_Amount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSCharacterBase::execCanPickupItem)
	{
		P_GET_OBJECT(AFPSItemPickup,Z_Param_Pickup);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanPickupItem(Z_Param_Pickup);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSCharacterBase::execCanSprint)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanSprint_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSCharacterBase::execCanVault)
	{
		P_GET_STRUCT(FTransform,Z_Param_CornerLocation);
		P_GET_PROPERTY(FFloatProperty,Z_Param_EyeHeight);
		P_GET_OBJECT(UAnimMontage,Z_Param_Montage);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanVault(Z_Param_CornerLocation,Z_Param_EyeHeight,Z_Param_Montage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSCharacterBase::execCosmeticDequipItem)
	{
		P_GET_OBJECT(AFPSItem,Z_Param_Item);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CosmeticDequipItem_Implementation(Z_Param_Item);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSCharacterBase::execCosmeticEquipItem)
	{
		P_GET_OBJECT(AFPSItem,Z_Param_Item);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CosmeticEquipItem_Implementation(Z_Param_Item);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSCharacterBase::execCosmeticFinishDequipItem)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CosmeticFinishDequipItem_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSCharacterBase::execCosmeticFinishEquipItem)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CosmeticFinishEquipItem_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSCharacterBase::execCosmeticSwitchItem)
	{
		P_GET_OBJECT(AFPSItem,Z_Param_Item);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CosmeticSwitchItem_Implementation(Z_Param_Item);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSCharacterBase::execCosmeticUpdatedAiming)
	{
		P_GET_UBOOL(Z_Param_bAiming);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CosmeticUpdatedAiming_Implementation(Z_Param_bAiming);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSCharacterBase::execCosmeticUpdatedCheckingAmmo)
	{
		P_GET_UBOOL(Z_Param_bCheckingAmmo);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CosmeticUpdatedCheckingAmmo_Implementation(Z_Param_bCheckingAmmo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSCharacterBase::execCosmeticUpdatedCrouching)
	{
		P_GET_UBOOL(Z_Param_bCrouching);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CosmeticUpdatedCrouching_Implementation(Z_Param_bCrouching);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSCharacterBase::execCosmeticUpdatedDead)
	{
		P_GET_UBOOL(Z_Param_bDead);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CosmeticUpdatedDead_Implementation(Z_Param_bDead);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSCharacterBase::execCosmeticUpdatedFiring)
	{
		P_GET_UBOOL(Z_Param_bFiring);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CosmeticUpdatedFiring_Implementation(Z_Param_bFiring);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSCharacterBase::execCosmeticUpdatedInspecting)
	{
		P_GET_UBOOL(Z_Param_bInspecting);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CosmeticUpdatedInspecting_Implementation(Z_Param_bInspecting);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSCharacterBase::execCosmeticUpdatedKicking)
	{
		P_GET_UBOOL(Z_Param_bKicking);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CosmeticUpdatedKicking_Implementation(Z_Param_bKicking);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSCharacterBase::execCosmeticUpdatedLeaning)
	{
		P_GET_UBOOL(Z_Param_bLeaning);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CosmeticUpdatedLeaning_Implementation(Z_Param_bLeaning);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSCharacterBase::execCosmeticUpdatedLeaningLeft)
	{
		P_GET_UBOOL(Z_Param_bLeaningLeft);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CosmeticUpdatedLeaningLeft_Implementation(Z_Param_bLeaningLeft);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSCharacterBase::execCosmeticUpdatedLeaningRight)
	{
		P_GET_UBOOL(Z_Param_bLeaningRight);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CosmeticUpdatedLeaningRight_Implementation(Z_Param_bLeaningRight);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSCharacterBase::execCosmeticUpdatedLowReady)
	{
		P_GET_UBOOL(Z_Param_bLowReady);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CosmeticUpdatedLowReady_Implementation(Z_Param_bLowReady);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSCharacterBase::execCosmeticUpdatedMounted)
	{
		P_GET_UBOOL(Z_Param_bMounted);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CosmeticUpdatedMounted_Implementation(Z_Param_bMounted);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSCharacterBase::execCosmeticUpdatedNightVision)
	{
		P_GET_UBOOL(Z_Param_bUsingNightVision);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CosmeticUpdatedNightVision_Implementation(Z_Param_bUsingNightVision);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSCharacterBase::execCosmeticUpdatedProne)
	{
		P_GET_UBOOL(Z_Param_bProne);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CosmeticUpdatedProne_Implementation(Z_Param_bProne);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSCharacterBase::execCosmeticUpdatedReloading)
	{
		P_GET_UBOOL(Z_Param_bReloading);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CosmeticUpdatedReloading_Implementation(Z_Param_bReloading);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSCharacterBase::execCosmeticUpdatedSprinting)
	{
		P_GET_UBOOL(Z_Param_bSprinting);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CosmeticUpdatedSprinting_Implementation(Z_Param_bSprinting);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSCharacterBase::execFindCorner)
	{
		P_GET_STRUCT(FVector,Z_Param_Normal);
		P_GET_PROPERTY(FFloatProperty,Z_Param_WallDistance);
		P_GET_PROPERTY(FFloatProperty,Z_Param_CapsuleRadius);
		P_GET_PROPERTY(FFloatProperty,Z_Param_CornerDistance);
		P_GET_UBOOL(Z_Param_bUseComplex);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_CornerPosition);
		P_GET_OBJECT_REF(UPrimitiveComponent,Z_Param_Out_CornerObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->FindCorner(Z_Param_Normal,Z_Param_WallDistance,Z_Param_CapsuleRadius,Z_Param_CornerDistance,Z_Param_bUseComplex,Z_Param_Out_CornerPosition,Z_Param_Out_CornerObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSCharacterBase::execFinishKick)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FinishKick_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSCharacterBase::execFinishLoadAndAddItem)
	{
		P_GET_SOFTOBJECT(TSoftObjectPtr<UFPSItemData>,Z_Param_Item);
		P_GET_STRUCT(FFPSItemSlotData,Z_Param_SlotData);
		P_GET_UBOOL(Z_Param_bEquip);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FinishLoadAndAddItem(Z_Param_Item,Z_Param_SlotData,Z_Param_bEquip);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSCharacterBase::execFinishLoadAndSwitchItem)
	{
		P_GET_STRUCT(FPrimaryAssetId,Z_Param_ItemId);
		P_GET_OBJECT(AFPSItem,Z_Param_Item);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FinishLoadAndSwitchItem(Z_Param_ItemId,Z_Param_Item);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSCharacterBase::execFinishPickupItem)
	{
		P_GET_OBJECT(AFPSItemPickup,Z_Param_Pickup);
		P_GET_SOFTOBJECT(TSoftObjectPtr<UFPSItemData>,Z_Param_Item);
		P_GET_STRUCT(FFPSItemSlotData,Z_Param_SlotData);
		P_GET_UBOOL(Z_Param_bEquip);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FinishPickupItem(Z_Param_Pickup,Z_Param_Item,Z_Param_SlotData,Z_Param_bEquip);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSCharacterBase::execGetAbilities)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_Mask);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetAbilities(EFPSCharacterAbilities::Type(Z_Param_Mask));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSCharacterBase::execGetAiming)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetAiming();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSCharacterBase::execGetAimingMovementSpeedMultiplierForItem)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Slot);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetAimingMovementSpeedMultiplierForItem(Z_Param_Slot);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSCharacterBase::execGetBracedAiming)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetBracedAiming();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSCharacterBase::execGetCamera)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UCameraComponent**)Z_Param__Result=P_THIS->GetCamera_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSCharacterBase::execGetCancelledReload)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCancelledReload();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSCharacterBase::execGetCheckingAmmo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCheckingAmmo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSCharacterBase::execGetClimbing)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetClimbing();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSCharacterBase::execGetCurrentHealth)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetCurrentHealth();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSCharacterBase::execGetDead)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetDead();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSCharacterBase::execGetEmptyReload)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetEmptyReload();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSCharacterBase::execGetEquippedItemIndex)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetEquippedItemIndex();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSCharacterBase::execGetEyesLocation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetEyesLocation_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSCharacterBase::execGetEyesLocationNoOffset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetEyesLocationNoOffset();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSCharacterBase::execGetFiring)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetFiring();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSCharacterBase::execGetFirstItem)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AFPSItem**)Z_Param__Result=P_THIS->GetFirstItem();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSCharacterBase::execGetFirstPersonMesh)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USkeletalMeshComponent**)Z_Param__Result=P_THIS->GetFirstPersonMesh_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSCharacterBase::execGetForcedBracedAim)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetForcedBracedAim_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSCharacterBase::execGetFPSCharacterMovement)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UFPSCharacterMovementComponent**)Z_Param__Result=P_THIS->GetFPSCharacterMovement();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSCharacterBase::execGetInspecting)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetInspecting();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSCharacterBase::execGetKicking)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetKicking();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSCharacterBase::execGetLeaning)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetLeaning();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSCharacterBase::execGetLeaningLeft)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetLeaningLeft();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSCharacterBase::execGetLeaningRight)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetLeaningRight();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSCharacterBase::execGetLoadout)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FFPSLoadout*)Z_Param__Result=P_THIS->GetLoadout();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSCharacterBase::execGetLowReady)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetLowReady();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSCharacterBase::execGetMagazineData)
	{
		P_GET_STRUCT(FPrimaryAssetId,Z_Param_AssetID);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FMagazineData*)Z_Param__Result=P_THIS->GetMagazineData(Z_Param_AssetID,Z_Param_Out_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSCharacterBase::execGetMaxReserveMagazines)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetMaxReserveMagazines();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSCharacterBase::execGetMeleeBasePoseLeft)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetMeleeBasePoseLeft();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSCharacterBase::execGetMeleeReadyLeft)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetMeleeReadyLeft();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSCharacterBase::execGetMeleeReadyRight)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetMeleeReadyRight();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSCharacterBase::execGetMounted)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetMounted();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSCharacterBase::execGetMovementSpeedMultiplierForItem)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Slot);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMovementSpeedMultiplierForItem(Z_Param_Slot);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSCharacterBase::execGetProne)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetProne();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSCharacterBase::execGetReloading)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetReloading();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSCharacterBase::execGetSpringArm)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USceneComponent**)Z_Param__Result=P_THIS->GetSpringArm_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSCharacterBase::execGetSprinting)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetSprinting();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSCharacterBase::execGetState)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_Mask);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetState(EFPSCharacterState(Z_Param_Mask));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSCharacterBase::execGetSuppression)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetSuppression();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSCharacterBase::execGetThirdPersonMesh)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USkeletalMeshComponent**)Z_Param__Result=P_THIS->GetThirdPersonMesh_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSCharacterBase::execGetTotalAmmoPercentage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetTotalAmmoPercentage();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSCharacterBase::execGetTotalReserveMagazines)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetTotalReserveMagazines();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSCharacterBase::execGetUsingMelee)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetUsingMelee();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSCharacterBase::execGetUsingNightVision)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetUsingNightVision();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSCharacterBase::execGetWantsAiming)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetWantsAiming();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSCharacterBase::execGetWantsBracedAiming)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetWantsBracedAiming();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSCharacterBase::execHasEquippedItem)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasEquippedItem();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSCharacterBase::execIsFirstPerson)
	{
		P_GET_UBOOL(Z_Param_bCheckLocal);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsFirstPerson(Z_Param_bCheckLocal);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSCharacterBase::execIsReserveAmmoFull)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsReserveAmmoFull();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSCharacterBase::execOnItemDataLoaded)
	{
		P_GET_OBJECT(AFPSItem,Z_Param_Item);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnItemDataLoaded(Z_Param_Item);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSCharacterBase::execOnRep_Abilities)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Abilities();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSCharacterBase::execOnRep_AssetIDsToLoad)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_AssetIDsToLoad();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSCharacterBase::execOnRep_CurrentHealth)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_CurrentHealth_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSCharacterBase::execOnRep_EquippedItem)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_EquippedItem_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSCharacterBase::execOnRep_Hotbar)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Hotbar_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSCharacterBase::execOnRep_LastHit)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_LastHit_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSCharacterBase::execOnRep_Rotation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Rotation_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSCharacterBase::execOnRep_State)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_State();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSCharacterBase::execOnRep_Suppression)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Suppression_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSCharacterBase::execRemoveItem)
	{
		P_GET_OBJECT(AFPSItem,Z_Param_Item);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveItem_Implementation(Z_Param_Item);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSCharacterBase::execRemoveItemAndEquip)
	{
		P_GET_OBJECT(AFPSItem,Z_Param_Item);
		P_GET_PROPERTY(FIntProperty,Z_Param_Slot);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveItemAndEquip_Implementation(Z_Param_Item,Z_Param_Slot);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSCharacterBase::execServerSetBracedAim)
	{
		P_GET_UBOOL(Z_Param_bBracedAim);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerSetBracedAim_Implementation(Z_Param_bBracedAim);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSCharacterBase::execServerSwitchItem)
	{
		P_GET_OBJECT(AFPSItem,Z_Param_Item);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerSwitchItem_Implementation(Z_Param_Item);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSCharacterBase::execSetAbilities)
	{
		P_GET_UBOOL(Z_Param_bValue);
		P_GET_PROPERTY(FIntProperty,Z_Param_Mask);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAbilities(Z_Param_bValue,Z_Param_Mask);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSCharacterBase::execSetAimingVisualsEnabled)
	{
		P_GET_UBOOL(Z_Param_bEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAimingVisualsEnabled(Z_Param_bEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSCharacterBase::execSetBracedAim)
	{
		P_GET_UBOOL(Z_Param_bBracedAim);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBracedAim_Implementation(Z_Param_bBracedAim);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSCharacterBase::execSetCharacterMovementSpeedMultiplier)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewMultiplier);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCharacterMovementSpeedMultiplier(Z_Param_NewMultiplier);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSCharacterBase::execSetCharacterVisibility)
	{
		P_GET_UBOOL(Z_Param_bShouldBeVisible);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCharacterVisibility(Z_Param_bShouldBeVisible);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSCharacterBase::execSetCurrentHealth)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewHealth);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCurrentHealth(Z_Param_NewHealth);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSCharacterBase::execSetEquippedItem)
	{
		P_GET_OBJECT(AFPSItem,Z_Param_Item);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEquippedItem(Z_Param_Item);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSCharacterBase::execSetHotbar)
	{
		P_GET_TARRAY(AFPSItem*,Z_Param_Items);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHotbar(Z_Param_Items);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSCharacterBase::execSetLastHit)
	{
		P_GET_STRUCT(FSimpleHitData,Z_Param_HitData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLastHit(Z_Param_HitData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSCharacterBase::execSetPerspective)
	{
		P_GET_UBOOL(Z_Param_bNewIsFirstPerson);
		P_GET_UBOOL(Z_Param_bApplyArmsAnimation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPerspective_Implementation(Z_Param_bNewIsFirstPerson,Z_Param_bApplyArmsAnimation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSCharacterBase::execSetPostProcessLayerBlendWeight)
	{
		P_GET_OBJECT(UCameraComponent,Z_Param_Component);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Weight);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPostProcessLayerBlendWeight(Z_Param_Component,Z_Param_Index,Z_Param_Weight);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSCharacterBase::execSetRotation)
	{
		P_GET_STRUCT(FRotator,Z_Param_NewRotation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRotation(Z_Param_NewRotation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSCharacterBase::execSetState)
	{
		P_GET_UBOOL(Z_Param_bValue);
		P_GET_PROPERTY(FIntProperty,Z_Param_Mask);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetState(Z_Param_bValue,Z_Param_Mask);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSCharacterBase::execSetWantsBracedAim)
	{
		P_GET_UBOOL(Z_Param_bWantsBracedAim);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetWantsBracedAim(Z_Param_bWantsBracedAim);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSCharacterBase::execStartKick)
	{
		P_GET_OBJECT(UObject,Z_Param_Kickable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartKick(Z_Param_Kickable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSCharacterBase::execStartLoadAndAddItem)
	{
		P_GET_SOFTOBJECT(TSoftObjectPtr<UFPSItemData>,Z_Param_Item);
		P_GET_STRUCT(FFPSItemSlotData,Z_Param_SlotData);
		P_GET_UBOOL(Z_Param_bEquip);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartLoadAndAddItem(Z_Param_Item,Z_Param_SlotData,Z_Param_bEquip);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSCharacterBase::execStartLoadAndSwitchItem)
	{
		P_GET_STRUCT(FPrimaryAssetId,Z_Param_ItemId);
		P_GET_OBJECT(AFPSItem,Z_Param_Item);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartLoadAndSwitchItem(Z_Param_ItemId,Z_Param_Item);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSCharacterBase::execStartPickupItem)
	{
		P_GET_OBJECT(AFPSItemPickup,Z_Param_Pickup);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartPickupItem_Implementation(Z_Param_Pickup);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSCharacterBase::execSwitchItem)
	{
		P_GET_OBJECT(AFPSItem,Z_Param_Item);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SwitchItem_Implementation(Z_Param_Item);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSCharacterBase::execSwitchToSlot)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Slot);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SwitchToSlot_Implementation(Z_Param_Slot);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSCharacterBase::execToggleBracedAim)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ToggleBracedAim();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSCharacterBase::execTryAddAmmo)
	{
		P_GET_UBOOL(Z_Param_bUseFullAmmo);
		P_GET_UBOOL(Z_Param_bAllItems);
		P_GET_PROPERTY(FIntProperty,Z_Param_Amount);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->TryAddAmmo_Implementation(Z_Param_bUseFullAmmo,Z_Param_bAllItems,Z_Param_Amount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSCharacterBase::execTryKick)
	{
		P_GET_OBJECT(UObject,Z_Param_Kickable);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->TryKick(Z_Param_Kickable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSCharacterBase::execUpdateBaseMovementSpeed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateBaseMovementSpeed_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSCharacterBase::execUpdateBracedAim)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateBracedAim();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSCharacterBase::execUpdateMount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateMount_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_AFPSCharacterBase_AddItem = FName(TEXT("AddItem"));
	void AFPSCharacterBase::AddItem(UFPSItemData* ItemData, FFPSItemSlotData SlotData, bool bEquip)
	{
		FPSCharacterBase_eventAddItem_Parms Parms;
		Parms.ItemData=ItemData;
		Parms.SlotData=SlotData;
		Parms.bEquip=bEquip ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AFPSCharacterBase_AddItem),&Parms);
	}
	static FName NAME_AFPSCharacterBase_BlendHeight = FName(TEXT("BlendHeight"));
	void AFPSCharacterBase::BlendHeight(bool bCovered)
	{
		FPSCharacterBase_eventBlendHeight_Parms Parms;
		Parms.bCovered=bCovered ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AFPSCharacterBase_BlendHeight),&Parms);
	}
	static FName NAME_AFPSCharacterBase_BlendNightVision = FName(TEXT("BlendNightVision"));
	void AFPSCharacterBase::BlendNightVision()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFPSCharacterBase_BlendNightVision),NULL);
	}
	static FName NAME_AFPSCharacterBase_CanSprint = FName(TEXT("CanSprint"));
	bool AFPSCharacterBase::CanSprint()
	{
		FPSCharacterBase_eventCanSprint_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_AFPSCharacterBase_CanSprint),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_AFPSCharacterBase_CosmeticDequipItem = FName(TEXT("CosmeticDequipItem"));
	void AFPSCharacterBase::CosmeticDequipItem(AFPSItem* Item)
	{
		FPSCharacterBase_eventCosmeticDequipItem_Parms Parms;
		Parms.Item=Item;
		ProcessEvent(FindFunctionChecked(NAME_AFPSCharacterBase_CosmeticDequipItem),&Parms);
	}
	static FName NAME_AFPSCharacterBase_CosmeticEquipItem = FName(TEXT("CosmeticEquipItem"));
	void AFPSCharacterBase::CosmeticEquipItem(AFPSItem* Item)
	{
		FPSCharacterBase_eventCosmeticEquipItem_Parms Parms;
		Parms.Item=Item;
		ProcessEvent(FindFunctionChecked(NAME_AFPSCharacterBase_CosmeticEquipItem),&Parms);
	}
	static FName NAME_AFPSCharacterBase_CosmeticFinishDequipItem = FName(TEXT("CosmeticFinishDequipItem"));
	void AFPSCharacterBase::CosmeticFinishDequipItem()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFPSCharacterBase_CosmeticFinishDequipItem),NULL);
	}
	static FName NAME_AFPSCharacterBase_CosmeticFinishEquipItem = FName(TEXT("CosmeticFinishEquipItem"));
	void AFPSCharacterBase::CosmeticFinishEquipItem()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFPSCharacterBase_CosmeticFinishEquipItem),NULL);
	}
	static FName NAME_AFPSCharacterBase_CosmeticSwitchItem = FName(TEXT("CosmeticSwitchItem"));
	void AFPSCharacterBase::CosmeticSwitchItem(AFPSItem* Item)
	{
		FPSCharacterBase_eventCosmeticSwitchItem_Parms Parms;
		Parms.Item=Item;
		ProcessEvent(FindFunctionChecked(NAME_AFPSCharacterBase_CosmeticSwitchItem),&Parms);
	}
	static FName NAME_AFPSCharacterBase_CosmeticUpdatedAiming = FName(TEXT("CosmeticUpdatedAiming"));
	void AFPSCharacterBase::CosmeticUpdatedAiming(bool bAiming)
	{
		FPSCharacterBase_eventCosmeticUpdatedAiming_Parms Parms;
		Parms.bAiming=bAiming ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AFPSCharacterBase_CosmeticUpdatedAiming),&Parms);
	}
	static FName NAME_AFPSCharacterBase_CosmeticUpdatedCheckingAmmo = FName(TEXT("CosmeticUpdatedCheckingAmmo"));
	void AFPSCharacterBase::CosmeticUpdatedCheckingAmmo(bool bCheckingAmmo)
	{
		FPSCharacterBase_eventCosmeticUpdatedCheckingAmmo_Parms Parms;
		Parms.bCheckingAmmo=bCheckingAmmo ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AFPSCharacterBase_CosmeticUpdatedCheckingAmmo),&Parms);
	}
	static FName NAME_AFPSCharacterBase_CosmeticUpdatedCrouching = FName(TEXT("CosmeticUpdatedCrouching"));
	void AFPSCharacterBase::CosmeticUpdatedCrouching(bool bCrouching)
	{
		FPSCharacterBase_eventCosmeticUpdatedCrouching_Parms Parms;
		Parms.bCrouching=bCrouching ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AFPSCharacterBase_CosmeticUpdatedCrouching),&Parms);
	}
	static FName NAME_AFPSCharacterBase_CosmeticUpdatedDead = FName(TEXT("CosmeticUpdatedDead"));
	void AFPSCharacterBase::CosmeticUpdatedDead(bool bDead)
	{
		FPSCharacterBase_eventCosmeticUpdatedDead_Parms Parms;
		Parms.bDead=bDead ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AFPSCharacterBase_CosmeticUpdatedDead),&Parms);
	}
	static FName NAME_AFPSCharacterBase_CosmeticUpdatedFiring = FName(TEXT("CosmeticUpdatedFiring"));
	void AFPSCharacterBase::CosmeticUpdatedFiring(bool bFiring)
	{
		FPSCharacterBase_eventCosmeticUpdatedFiring_Parms Parms;
		Parms.bFiring=bFiring ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AFPSCharacterBase_CosmeticUpdatedFiring),&Parms);
	}
	static FName NAME_AFPSCharacterBase_CosmeticUpdatedInspecting = FName(TEXT("CosmeticUpdatedInspecting"));
	void AFPSCharacterBase::CosmeticUpdatedInspecting(bool bInspecting)
	{
		FPSCharacterBase_eventCosmeticUpdatedInspecting_Parms Parms;
		Parms.bInspecting=bInspecting ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AFPSCharacterBase_CosmeticUpdatedInspecting),&Parms);
	}
	static FName NAME_AFPSCharacterBase_CosmeticUpdatedKicking = FName(TEXT("CosmeticUpdatedKicking"));
	void AFPSCharacterBase::CosmeticUpdatedKicking(bool bKicking)
	{
		FPSCharacterBase_eventCosmeticUpdatedKicking_Parms Parms;
		Parms.bKicking=bKicking ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AFPSCharacterBase_CosmeticUpdatedKicking),&Parms);
	}
	static FName NAME_AFPSCharacterBase_CosmeticUpdatedLeaning = FName(TEXT("CosmeticUpdatedLeaning"));
	void AFPSCharacterBase::CosmeticUpdatedLeaning(bool bLeaning)
	{
		FPSCharacterBase_eventCosmeticUpdatedLeaning_Parms Parms;
		Parms.bLeaning=bLeaning ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AFPSCharacterBase_CosmeticUpdatedLeaning),&Parms);
	}
	static FName NAME_AFPSCharacterBase_CosmeticUpdatedLeaningLeft = FName(TEXT("CosmeticUpdatedLeaningLeft"));
	void AFPSCharacterBase::CosmeticUpdatedLeaningLeft(bool bLeaningLeft)
	{
		FPSCharacterBase_eventCosmeticUpdatedLeaningLeft_Parms Parms;
		Parms.bLeaningLeft=bLeaningLeft ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AFPSCharacterBase_CosmeticUpdatedLeaningLeft),&Parms);
	}
	static FName NAME_AFPSCharacterBase_CosmeticUpdatedLeaningRight = FName(TEXT("CosmeticUpdatedLeaningRight"));
	void AFPSCharacterBase::CosmeticUpdatedLeaningRight(bool bLeaningRight)
	{
		FPSCharacterBase_eventCosmeticUpdatedLeaningRight_Parms Parms;
		Parms.bLeaningRight=bLeaningRight ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AFPSCharacterBase_CosmeticUpdatedLeaningRight),&Parms);
	}
	static FName NAME_AFPSCharacterBase_CosmeticUpdatedLowReady = FName(TEXT("CosmeticUpdatedLowReady"));
	void AFPSCharacterBase::CosmeticUpdatedLowReady(bool bLowReady)
	{
		FPSCharacterBase_eventCosmeticUpdatedLowReady_Parms Parms;
		Parms.bLowReady=bLowReady ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AFPSCharacterBase_CosmeticUpdatedLowReady),&Parms);
	}
	static FName NAME_AFPSCharacterBase_CosmeticUpdatedMounted = FName(TEXT("CosmeticUpdatedMounted"));
	void AFPSCharacterBase::CosmeticUpdatedMounted(bool bMounted)
	{
		FPSCharacterBase_eventCosmeticUpdatedMounted_Parms Parms;
		Parms.bMounted=bMounted ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AFPSCharacterBase_CosmeticUpdatedMounted),&Parms);
	}
	static FName NAME_AFPSCharacterBase_CosmeticUpdatedNightVision = FName(TEXT("CosmeticUpdatedNightVision"));
	void AFPSCharacterBase::CosmeticUpdatedNightVision(bool bUsingNightVision)
	{
		FPSCharacterBase_eventCosmeticUpdatedNightVision_Parms Parms;
		Parms.bUsingNightVision=bUsingNightVision ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AFPSCharacterBase_CosmeticUpdatedNightVision),&Parms);
	}
	static FName NAME_AFPSCharacterBase_CosmeticUpdatedProne = FName(TEXT("CosmeticUpdatedProne"));
	void AFPSCharacterBase::CosmeticUpdatedProne(bool bProne)
	{
		FPSCharacterBase_eventCosmeticUpdatedProne_Parms Parms;
		Parms.bProne=bProne ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AFPSCharacterBase_CosmeticUpdatedProne),&Parms);
	}
	static FName NAME_AFPSCharacterBase_CosmeticUpdatedReloading = FName(TEXT("CosmeticUpdatedReloading"));
	void AFPSCharacterBase::CosmeticUpdatedReloading(bool bReloading)
	{
		FPSCharacterBase_eventCosmeticUpdatedReloading_Parms Parms;
		Parms.bReloading=bReloading ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AFPSCharacterBase_CosmeticUpdatedReloading),&Parms);
	}
	static FName NAME_AFPSCharacterBase_CosmeticUpdatedSprinting = FName(TEXT("CosmeticUpdatedSprinting"));
	void AFPSCharacterBase::CosmeticUpdatedSprinting(bool bSprinting)
	{
		FPSCharacterBase_eventCosmeticUpdatedSprinting_Parms Parms;
		Parms.bSprinting=bSprinting ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AFPSCharacterBase_CosmeticUpdatedSprinting),&Parms);
	}
	static FName NAME_AFPSCharacterBase_FinishKick = FName(TEXT("FinishKick"));
	void AFPSCharacterBase::FinishKick()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFPSCharacterBase_FinishKick),NULL);
	}
	static FName NAME_AFPSCharacterBase_GetCamera = FName(TEXT("GetCamera"));
	UCameraComponent* AFPSCharacterBase::GetCamera()
	{
		FPSCharacterBase_eventGetCamera_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_AFPSCharacterBase_GetCamera),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_AFPSCharacterBase_GetEyesLocation = FName(TEXT("GetEyesLocation"));
	FVector AFPSCharacterBase::GetEyesLocation() const
	{
		FPSCharacterBase_eventGetEyesLocation_Parms Parms;
		const_cast<AFPSCharacterBase*>(this)->ProcessEvent(FindFunctionChecked(NAME_AFPSCharacterBase_GetEyesLocation),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_AFPSCharacterBase_GetFirstPersonMesh = FName(TEXT("GetFirstPersonMesh"));
	USkeletalMeshComponent* AFPSCharacterBase::GetFirstPersonMesh()
	{
		FPSCharacterBase_eventGetFirstPersonMesh_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_AFPSCharacterBase_GetFirstPersonMesh),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_AFPSCharacterBase_GetForcedBracedAim = FName(TEXT("GetForcedBracedAim"));
	bool AFPSCharacterBase::GetForcedBracedAim()
	{
		FPSCharacterBase_eventGetForcedBracedAim_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_AFPSCharacterBase_GetForcedBracedAim),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_AFPSCharacterBase_GetSpringArm = FName(TEXT("GetSpringArm"));
	USceneComponent* AFPSCharacterBase::GetSpringArm()
	{
		FPSCharacterBase_eventGetSpringArm_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_AFPSCharacterBase_GetSpringArm),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_AFPSCharacterBase_GetThirdPersonMesh = FName(TEXT("GetThirdPersonMesh"));
	USkeletalMeshComponent* AFPSCharacterBase::GetThirdPersonMesh()
	{
		FPSCharacterBase_eventGetThirdPersonMesh_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_AFPSCharacterBase_GetThirdPersonMesh),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_AFPSCharacterBase_OnRep_CurrentHealth = FName(TEXT("OnRep_CurrentHealth"));
	void AFPSCharacterBase::OnRep_CurrentHealth()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFPSCharacterBase_OnRep_CurrentHealth),NULL);
	}
	static FName NAME_AFPSCharacterBase_OnRep_EquippedItem = FName(TEXT("OnRep_EquippedItem"));
	void AFPSCharacterBase::OnRep_EquippedItem()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFPSCharacterBase_OnRep_EquippedItem),NULL);
	}
	static FName NAME_AFPSCharacterBase_OnRep_Hotbar = FName(TEXT("OnRep_Hotbar"));
	void AFPSCharacterBase::OnRep_Hotbar()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFPSCharacterBase_OnRep_Hotbar),NULL);
	}
	static FName NAME_AFPSCharacterBase_OnRep_LastHit = FName(TEXT("OnRep_LastHit"));
	void AFPSCharacterBase::OnRep_LastHit()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFPSCharacterBase_OnRep_LastHit),NULL);
	}
	static FName NAME_AFPSCharacterBase_OnRep_Rotation = FName(TEXT("OnRep_Rotation"));
	void AFPSCharacterBase::OnRep_Rotation()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFPSCharacterBase_OnRep_Rotation),NULL);
	}
	static FName NAME_AFPSCharacterBase_OnRep_Suppression = FName(TEXT("OnRep_Suppression"));
	void AFPSCharacterBase::OnRep_Suppression()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFPSCharacterBase_OnRep_Suppression),NULL);
	}
	static FName NAME_AFPSCharacterBase_RemoveItem = FName(TEXT("RemoveItem"));
	void AFPSCharacterBase::RemoveItem(AFPSItem* Item)
	{
		FPSCharacterBase_eventRemoveItem_Parms Parms;
		Parms.Item=Item;
		ProcessEvent(FindFunctionChecked(NAME_AFPSCharacterBase_RemoveItem),&Parms);
	}
	static FName NAME_AFPSCharacterBase_RemoveItemAndEquip = FName(TEXT("RemoveItemAndEquip"));
	void AFPSCharacterBase::RemoveItemAndEquip(AFPSItem* Item, int32 Slot)
	{
		FPSCharacterBase_eventRemoveItemAndEquip_Parms Parms;
		Parms.Item=Item;
		Parms.Slot=Slot;
		ProcessEvent(FindFunctionChecked(NAME_AFPSCharacterBase_RemoveItemAndEquip),&Parms);
	}
	static FName NAME_AFPSCharacterBase_ServerSetBracedAim = FName(TEXT("ServerSetBracedAim"));
	void AFPSCharacterBase::ServerSetBracedAim(bool bBracedAim)
	{
		FPSCharacterBase_eventServerSetBracedAim_Parms Parms;
		Parms.bBracedAim=bBracedAim ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AFPSCharacterBase_ServerSetBracedAim),&Parms);
	}
	static FName NAME_AFPSCharacterBase_ServerSwitchItem = FName(TEXT("ServerSwitchItem"));
	void AFPSCharacterBase::ServerSwitchItem(AFPSItem* Item)
	{
		FPSCharacterBase_eventServerSwitchItem_Parms Parms;
		Parms.Item=Item;
		ProcessEvent(FindFunctionChecked(NAME_AFPSCharacterBase_ServerSwitchItem),&Parms);
	}
	static FName NAME_AFPSCharacterBase_SetBracedAim = FName(TEXT("SetBracedAim"));
	void AFPSCharacterBase::SetBracedAim(bool bBracedAim)
	{
		FPSCharacterBase_eventSetBracedAim_Parms Parms;
		Parms.bBracedAim=bBracedAim ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AFPSCharacterBase_SetBracedAim),&Parms);
	}
	static FName NAME_AFPSCharacterBase_SetPerspective = FName(TEXT("SetPerspective"));
	void AFPSCharacterBase::SetPerspective(bool bNewIsFirstPerson, bool bApplyArmsAnimation)
	{
		FPSCharacterBase_eventSetPerspective_Parms Parms;
		Parms.bNewIsFirstPerson=bNewIsFirstPerson ? true : false;
		Parms.bApplyArmsAnimation=bApplyArmsAnimation ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AFPSCharacterBase_SetPerspective),&Parms);
	}
	static FName NAME_AFPSCharacterBase_StartPickupItem = FName(TEXT("StartPickupItem"));
	void AFPSCharacterBase::StartPickupItem(AFPSItemPickup* Pickup)
	{
		FPSCharacterBase_eventStartPickupItem_Parms Parms;
		Parms.Pickup=Pickup;
		ProcessEvent(FindFunctionChecked(NAME_AFPSCharacterBase_StartPickupItem),&Parms);
	}
	static FName NAME_AFPSCharacterBase_SwitchItem = FName(TEXT("SwitchItem"));
	void AFPSCharacterBase::SwitchItem(AFPSItem* Item)
	{
		FPSCharacterBase_eventSwitchItem_Parms Parms;
		Parms.Item=Item;
		ProcessEvent(FindFunctionChecked(NAME_AFPSCharacterBase_SwitchItem),&Parms);
	}
	static FName NAME_AFPSCharacterBase_SwitchToSlot = FName(TEXT("SwitchToSlot"));
	void AFPSCharacterBase::SwitchToSlot(int32 Slot)
	{
		FPSCharacterBase_eventSwitchToSlot_Parms Parms;
		Parms.Slot=Slot;
		ProcessEvent(FindFunctionChecked(NAME_AFPSCharacterBase_SwitchToSlot),&Parms);
	}
	static FName NAME_AFPSCharacterBase_TryAddAmmo = FName(TEXT("TryAddAmmo"));
	bool AFPSCharacterBase::TryAddAmmo(bool bUseFullAmmo, bool bAllItems, int32 Amount)
	{
		FPSCharacterBase_eventTryAddAmmo_Parms Parms;
		Parms.bUseFullAmmo=bUseFullAmmo ? true : false;
		Parms.bAllItems=bAllItems ? true : false;
		Parms.Amount=Amount;
		ProcessEvent(FindFunctionChecked(NAME_AFPSCharacterBase_TryAddAmmo),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_AFPSCharacterBase_UpdateBaseMovementSpeed = FName(TEXT("UpdateBaseMovementSpeed"));
	void AFPSCharacterBase::UpdateBaseMovementSpeed()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFPSCharacterBase_UpdateBaseMovementSpeed),NULL);
	}
	static FName NAME_AFPSCharacterBase_UpdateMount = FName(TEXT("UpdateMount"));
	void AFPSCharacterBase::UpdateMount()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFPSCharacterBase_UpdateMount),NULL);
	}
	void AFPSCharacterBase::StaticRegisterNativesAFPSCharacterBase()
	{
		UClass* Class = AFPSCharacterBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddFreeAim", &AFPSCharacterBase::execAddFreeAim },
			{ "AddItem", &AFPSCharacterBase::execAddItem },
			{ "AddRecoil", &AFPSCharacterBase::execAddRecoil },
			{ "AddRotationOffset", &AFPSCharacterBase::execAddRotationOffset },
			{ "AddSuppression", &AFPSCharacterBase::execAddSuppression },
			{ "ApplyPositionOffset", &AFPSCharacterBase::execApplyPositionOffset },
			{ "ApplyRotationOffset", &AFPSCharacterBase::execApplyRotationOffset },
			{ "BlendHeight", &AFPSCharacterBase::execBlendHeight },
			{ "BlendNightVision", &AFPSCharacterBase::execBlendNightVision },
			{ "CanAddAmmo", &AFPSCharacterBase::execCanAddAmmo },
			{ "CanPickupItem", &AFPSCharacterBase::execCanPickupItem },
			{ "CanSprint", &AFPSCharacterBase::execCanSprint },
			{ "CanVault", &AFPSCharacterBase::execCanVault },
			{ "CosmeticDequipItem", &AFPSCharacterBase::execCosmeticDequipItem },
			{ "CosmeticEquipItem", &AFPSCharacterBase::execCosmeticEquipItem },
			{ "CosmeticFinishDequipItem", &AFPSCharacterBase::execCosmeticFinishDequipItem },
			{ "CosmeticFinishEquipItem", &AFPSCharacterBase::execCosmeticFinishEquipItem },
			{ "CosmeticSwitchItem", &AFPSCharacterBase::execCosmeticSwitchItem },
			{ "CosmeticUpdatedAiming", &AFPSCharacterBase::execCosmeticUpdatedAiming },
			{ "CosmeticUpdatedCheckingAmmo", &AFPSCharacterBase::execCosmeticUpdatedCheckingAmmo },
			{ "CosmeticUpdatedCrouching", &AFPSCharacterBase::execCosmeticUpdatedCrouching },
			{ "CosmeticUpdatedDead", &AFPSCharacterBase::execCosmeticUpdatedDead },
			{ "CosmeticUpdatedFiring", &AFPSCharacterBase::execCosmeticUpdatedFiring },
			{ "CosmeticUpdatedInspecting", &AFPSCharacterBase::execCosmeticUpdatedInspecting },
			{ "CosmeticUpdatedKicking", &AFPSCharacterBase::execCosmeticUpdatedKicking },
			{ "CosmeticUpdatedLeaning", &AFPSCharacterBase::execCosmeticUpdatedLeaning },
			{ "CosmeticUpdatedLeaningLeft", &AFPSCharacterBase::execCosmeticUpdatedLeaningLeft },
			{ "CosmeticUpdatedLeaningRight", &AFPSCharacterBase::execCosmeticUpdatedLeaningRight },
			{ "CosmeticUpdatedLowReady", &AFPSCharacterBase::execCosmeticUpdatedLowReady },
			{ "CosmeticUpdatedMounted", &AFPSCharacterBase::execCosmeticUpdatedMounted },
			{ "CosmeticUpdatedNightVision", &AFPSCharacterBase::execCosmeticUpdatedNightVision },
			{ "CosmeticUpdatedProne", &AFPSCharacterBase::execCosmeticUpdatedProne },
			{ "CosmeticUpdatedReloading", &AFPSCharacterBase::execCosmeticUpdatedReloading },
			{ "CosmeticUpdatedSprinting", &AFPSCharacterBase::execCosmeticUpdatedSprinting },
			{ "FindCorner", &AFPSCharacterBase::execFindCorner },
			{ "FinishKick", &AFPSCharacterBase::execFinishKick },
			{ "FinishLoadAndAddItem", &AFPSCharacterBase::execFinishLoadAndAddItem },
			{ "FinishLoadAndSwitchItem", &AFPSCharacterBase::execFinishLoadAndSwitchItem },
			{ "FinishPickupItem", &AFPSCharacterBase::execFinishPickupItem },
			{ "GetAbilities", &AFPSCharacterBase::execGetAbilities },
			{ "GetAiming", &AFPSCharacterBase::execGetAiming },
			{ "GetAimingMovementSpeedMultiplierForItem", &AFPSCharacterBase::execGetAimingMovementSpeedMultiplierForItem },
			{ "GetBracedAiming", &AFPSCharacterBase::execGetBracedAiming },
			{ "GetCamera", &AFPSCharacterBase::execGetCamera },
			{ "GetCancelledReload", &AFPSCharacterBase::execGetCancelledReload },
			{ "GetCheckingAmmo", &AFPSCharacterBase::execGetCheckingAmmo },
			{ "GetClimbing", &AFPSCharacterBase::execGetClimbing },
			{ "GetCurrentHealth", &AFPSCharacterBase::execGetCurrentHealth },
			{ "GetDead", &AFPSCharacterBase::execGetDead },
			{ "GetEmptyReload", &AFPSCharacterBase::execGetEmptyReload },
			{ "GetEquippedItemIndex", &AFPSCharacterBase::execGetEquippedItemIndex },
			{ "GetEyesLocation", &AFPSCharacterBase::execGetEyesLocation },
			{ "GetEyesLocationNoOffset", &AFPSCharacterBase::execGetEyesLocationNoOffset },
			{ "GetFiring", &AFPSCharacterBase::execGetFiring },
			{ "GetFirstItem", &AFPSCharacterBase::execGetFirstItem },
			{ "GetFirstPersonMesh", &AFPSCharacterBase::execGetFirstPersonMesh },
			{ "GetForcedBracedAim", &AFPSCharacterBase::execGetForcedBracedAim },
			{ "GetFPSCharacterMovement", &AFPSCharacterBase::execGetFPSCharacterMovement },
			{ "GetInspecting", &AFPSCharacterBase::execGetInspecting },
			{ "GetKicking", &AFPSCharacterBase::execGetKicking },
			{ "GetLeaning", &AFPSCharacterBase::execGetLeaning },
			{ "GetLeaningLeft", &AFPSCharacterBase::execGetLeaningLeft },
			{ "GetLeaningRight", &AFPSCharacterBase::execGetLeaningRight },
			{ "GetLoadout", &AFPSCharacterBase::execGetLoadout },
			{ "GetLowReady", &AFPSCharacterBase::execGetLowReady },
			{ "GetMagazineData", &AFPSCharacterBase::execGetMagazineData },
			{ "GetMaxReserveMagazines", &AFPSCharacterBase::execGetMaxReserveMagazines },
			{ "GetMeleeBasePoseLeft", &AFPSCharacterBase::execGetMeleeBasePoseLeft },
			{ "GetMeleeReadyLeft", &AFPSCharacterBase::execGetMeleeReadyLeft },
			{ "GetMeleeReadyRight", &AFPSCharacterBase::execGetMeleeReadyRight },
			{ "GetMounted", &AFPSCharacterBase::execGetMounted },
			{ "GetMovementSpeedMultiplierForItem", &AFPSCharacterBase::execGetMovementSpeedMultiplierForItem },
			{ "GetProne", &AFPSCharacterBase::execGetProne },
			{ "GetReloading", &AFPSCharacterBase::execGetReloading },
			{ "GetSpringArm", &AFPSCharacterBase::execGetSpringArm },
			{ "GetSprinting", &AFPSCharacterBase::execGetSprinting },
			{ "GetState", &AFPSCharacterBase::execGetState },
			{ "GetSuppression", &AFPSCharacterBase::execGetSuppression },
			{ "GetThirdPersonMesh", &AFPSCharacterBase::execGetThirdPersonMesh },
			{ "GetTotalAmmoPercentage", &AFPSCharacterBase::execGetTotalAmmoPercentage },
			{ "GetTotalReserveMagazines", &AFPSCharacterBase::execGetTotalReserveMagazines },
			{ "GetUsingMelee", &AFPSCharacterBase::execGetUsingMelee },
			{ "GetUsingNightVision", &AFPSCharacterBase::execGetUsingNightVision },
			{ "GetWantsAiming", &AFPSCharacterBase::execGetWantsAiming },
			{ "GetWantsBracedAiming", &AFPSCharacterBase::execGetWantsBracedAiming },
			{ "HasEquippedItem", &AFPSCharacterBase::execHasEquippedItem },
			{ "IsFirstPerson", &AFPSCharacterBase::execIsFirstPerson },
			{ "IsReserveAmmoFull", &AFPSCharacterBase::execIsReserveAmmoFull },
			{ "OnItemDataLoaded", &AFPSCharacterBase::execOnItemDataLoaded },
			{ "OnRep_Abilities", &AFPSCharacterBase::execOnRep_Abilities },
			{ "OnRep_AssetIDsToLoad", &AFPSCharacterBase::execOnRep_AssetIDsToLoad },
			{ "OnRep_CurrentHealth", &AFPSCharacterBase::execOnRep_CurrentHealth },
			{ "OnRep_EquippedItem", &AFPSCharacterBase::execOnRep_EquippedItem },
			{ "OnRep_Hotbar", &AFPSCharacterBase::execOnRep_Hotbar },
			{ "OnRep_LastHit", &AFPSCharacterBase::execOnRep_LastHit },
			{ "OnRep_Rotation", &AFPSCharacterBase::execOnRep_Rotation },
			{ "OnRep_State", &AFPSCharacterBase::execOnRep_State },
			{ "OnRep_Suppression", &AFPSCharacterBase::execOnRep_Suppression },
			{ "RemoveItem", &AFPSCharacterBase::execRemoveItem },
			{ "RemoveItemAndEquip", &AFPSCharacterBase::execRemoveItemAndEquip },
			{ "ServerSetBracedAim", &AFPSCharacterBase::execServerSetBracedAim },
			{ "ServerSwitchItem", &AFPSCharacterBase::execServerSwitchItem },
			{ "SetAbilities", &AFPSCharacterBase::execSetAbilities },
			{ "SetAimingVisualsEnabled", &AFPSCharacterBase::execSetAimingVisualsEnabled },
			{ "SetBracedAim", &AFPSCharacterBase::execSetBracedAim },
			{ "SetCharacterMovementSpeedMultiplier", &AFPSCharacterBase::execSetCharacterMovementSpeedMultiplier },
			{ "SetCharacterVisibility", &AFPSCharacterBase::execSetCharacterVisibility },
			{ "SetCurrentHealth", &AFPSCharacterBase::execSetCurrentHealth },
			{ "SetEquippedItem", &AFPSCharacterBase::execSetEquippedItem },
			{ "SetHotbar", &AFPSCharacterBase::execSetHotbar },
			{ "SetLastHit", &AFPSCharacterBase::execSetLastHit },
			{ "SetPerspective", &AFPSCharacterBase::execSetPerspective },
			{ "SetPostProcessLayerBlendWeight", &AFPSCharacterBase::execSetPostProcessLayerBlendWeight },
			{ "SetRotation", &AFPSCharacterBase::execSetRotation },
			{ "SetState", &AFPSCharacterBase::execSetState },
			{ "SetWantsBracedAim", &AFPSCharacterBase::execSetWantsBracedAim },
			{ "StartKick", &AFPSCharacterBase::execStartKick },
			{ "StartLoadAndAddItem", &AFPSCharacterBase::execStartLoadAndAddItem },
			{ "StartLoadAndSwitchItem", &AFPSCharacterBase::execStartLoadAndSwitchItem },
			{ "StartPickupItem", &AFPSCharacterBase::execStartPickupItem },
			{ "SwitchItem", &AFPSCharacterBase::execSwitchItem },
			{ "SwitchToSlot", &AFPSCharacterBase::execSwitchToSlot },
			{ "ToggleBracedAim", &AFPSCharacterBase::execToggleBracedAim },
			{ "TryAddAmmo", &AFPSCharacterBase::execTryAddAmmo },
			{ "TryKick", &AFPSCharacterBase::execTryKick },
			{ "UpdateBaseMovementSpeed", &AFPSCharacterBase::execUpdateBaseMovementSpeed },
			{ "UpdateBracedAim", &AFPSCharacterBase::execUpdateBracedAim },
			{ "UpdateMount", &AFPSCharacterBase::execUpdateMount },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFPSCharacterBase_AddFreeAim_Statics
	{
		struct FPSCharacterBase_eventAddFreeAim_Parms
		{
			FVector FreeAim;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FreeAim;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFPSCharacterBase_AddFreeAim_Statics::NewProp_FreeAim = { "FreeAim", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSCharacterBase_eventAddFreeAim_Parms, FreeAim), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSCharacterBase_AddFreeAim_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacterBase_AddFreeAim_Statics::NewProp_FreeAim,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacterBase_AddFreeAim_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacterBase_AddFreeAim_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacterBase, nullptr, "AddFreeAim", nullptr, nullptr, sizeof(FPSCharacterBase_eventAddFreeAim_Parms), Z_Construct_UFunction_AFPSCharacterBase_AddFreeAim_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_AddFreeAim_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04880401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSCharacterBase_AddFreeAim_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_AddFreeAim_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSCharacterBase_AddFreeAim()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSCharacterBase_AddFreeAim_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSCharacterBase_AddItem_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ItemData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SlotData;
		static void NewProp_bEquip_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEquip;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFPSCharacterBase_AddItem_Statics::NewProp_ItemData = { "ItemData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSCharacterBase_eventAddItem_Parms, ItemData), Z_Construct_UClass_UFPSItemData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFPSCharacterBase_AddItem_Statics::NewProp_SlotData = { "SlotData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSCharacterBase_eventAddItem_Parms, SlotData), Z_Construct_UScriptStruct_FFPSItemSlotData, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AFPSCharacterBase_AddItem_Statics::NewProp_bEquip_SetBit(void* Obj)
	{
		((FPSCharacterBase_eventAddItem_Parms*)Obj)->bEquip = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFPSCharacterBase_AddItem_Statics::NewProp_bEquip = { "bEquip", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPSCharacterBase_eventAddItem_Parms), &Z_Construct_UFunction_AFPSCharacterBase_AddItem_Statics::NewProp_bEquip_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSCharacterBase_AddItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacterBase_AddItem_Statics::NewProp_ItemData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacterBase_AddItem_Statics::NewProp_SlotData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacterBase_AddItem_Statics::NewProp_bEquip,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacterBase_AddItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacterBase_AddItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacterBase, nullptr, "AddItem", nullptr, nullptr, sizeof(FPSCharacterBase_eventAddItem_Parms), Z_Construct_UFunction_AFPSCharacterBase_AddItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_AddItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C04, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSCharacterBase_AddItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_AddItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSCharacterBase_AddItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSCharacterBase_AddItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSCharacterBase_AddRecoil_Statics
	{
		struct FPSCharacterBase_eventAddRecoil_Parms
		{
			FVector2D Recoil;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Recoil;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFPSCharacterBase_AddRecoil_Statics::NewProp_Recoil = { "Recoil", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSCharacterBase_eventAddRecoil_Parms, Recoil), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSCharacterBase_AddRecoil_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacterBase_AddRecoil_Statics::NewProp_Recoil,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacterBase_AddRecoil_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacterBase_AddRecoil_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacterBase, nullptr, "AddRecoil", nullptr, nullptr, sizeof(FPSCharacterBase_eventAddRecoil_Parms), Z_Construct_UFunction_AFPSCharacterBase_AddRecoil_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_AddRecoil_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSCharacterBase_AddRecoil_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_AddRecoil_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSCharacterBase_AddRecoil()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSCharacterBase_AddRecoil_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSCharacterBase_AddRotationOffset_Statics
	{
		struct FPSCharacterBase_eventAddRotationOffset_Parms
		{
			FVector Offset;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Offset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFPSCharacterBase_AddRotationOffset_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSCharacterBase_eventAddRotationOffset_Parms, Offset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSCharacterBase_AddRotationOffset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacterBase_AddRotationOffset_Statics::NewProp_Offset,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacterBase_AddRotationOffset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacterBase_AddRotationOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacterBase, nullptr, "AddRotationOffset", nullptr, nullptr, sizeof(FPSCharacterBase_eventAddRotationOffset_Parms), Z_Construct_UFunction_AFPSCharacterBase_AddRotationOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_AddRotationOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSCharacterBase_AddRotationOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_AddRotationOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSCharacterBase_AddRotationOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSCharacterBase_AddRotationOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSCharacterBase_AddSuppression_Statics
	{
		struct FPSCharacterBase_eventAddSuppression_Parms
		{
			float Amount;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Amount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFPSCharacterBase_AddSuppression_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSCharacterBase_eventAddSuppression_Parms, Amount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSCharacterBase_AddSuppression_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacterBase_AddSuppression_Statics::NewProp_Amount,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacterBase_AddSuppression_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacterBase_AddSuppression_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacterBase, nullptr, "AddSuppression", nullptr, nullptr, sizeof(FPSCharacterBase_eventAddSuppression_Parms), Z_Construct_UFunction_AFPSCharacterBase_AddSuppression_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_AddSuppression_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSCharacterBase_AddSuppression_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_AddSuppression_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSCharacterBase_AddSuppression()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSCharacterBase_AddSuppression_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSCharacterBase_ApplyPositionOffset_Statics
	{
		struct FPSCharacterBase_eventApplyPositionOffset_Parms
		{
			FVector Delta;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Delta;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFPSCharacterBase_ApplyPositionOffset_Statics::NewProp_Delta = { "Delta", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSCharacterBase_eventApplyPositionOffset_Parms, Delta), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSCharacterBase_ApplyPositionOffset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacterBase_ApplyPositionOffset_Statics::NewProp_Delta,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacterBase_ApplyPositionOffset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacterBase_ApplyPositionOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacterBase, nullptr, "ApplyPositionOffset", nullptr, nullptr, sizeof(FPSCharacterBase_eventApplyPositionOffset_Parms), Z_Construct_UFunction_AFPSCharacterBase_ApplyPositionOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_ApplyPositionOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C80401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSCharacterBase_ApplyPositionOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_ApplyPositionOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSCharacterBase_ApplyPositionOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSCharacterBase_ApplyPositionOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSCharacterBase_ApplyRotationOffset_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacterBase_ApplyRotationOffset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacterBase_ApplyRotationOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacterBase, nullptr, "ApplyRotationOffset", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSCharacterBase_ApplyRotationOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_ApplyRotationOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSCharacterBase_ApplyRotationOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSCharacterBase_ApplyRotationOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSCharacterBase_BlendHeight_Statics
	{
		static void NewProp_bCovered_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCovered;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFPSCharacterBase_BlendHeight_Statics::NewProp_bCovered_SetBit(void* Obj)
	{
		((FPSCharacterBase_eventBlendHeight_Parms*)Obj)->bCovered = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFPSCharacterBase_BlendHeight_Statics::NewProp_bCovered = { "bCovered", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPSCharacterBase_eventBlendHeight_Parms), &Z_Construct_UFunction_AFPSCharacterBase_BlendHeight_Statics::NewProp_bCovered_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSCharacterBase_BlendHeight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacterBase_BlendHeight_Statics::NewProp_bCovered,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacterBase_BlendHeight_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacterBase_BlendHeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacterBase, nullptr, "BlendHeight", nullptr, nullptr, sizeof(FPSCharacterBase_eventBlendHeight_Parms), Z_Construct_UFunction_AFPSCharacterBase_BlendHeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_BlendHeight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSCharacterBase_BlendHeight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_BlendHeight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSCharacterBase_BlendHeight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSCharacterBase_BlendHeight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSCharacterBase_BlendNightVision_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacterBase_BlendNightVision_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacterBase_BlendNightVision_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacterBase, nullptr, "BlendNightVision", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSCharacterBase_BlendNightVision_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_BlendNightVision_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSCharacterBase_BlendNightVision()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSCharacterBase_BlendNightVision_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSCharacterBase_CanAddAmmo_Statics
	{
		struct FPSCharacterBase_eventCanAddAmmo_Parms
		{
			bool bUseFullAmmo;
			bool bAllItems;
			int32 Amount;
			bool ReturnValue;
		};
		static void NewProp_bUseFullAmmo_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseFullAmmo;
		static void NewProp_bAllItems_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllItems;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Amount;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFPSCharacterBase_CanAddAmmo_Statics::NewProp_bUseFullAmmo_SetBit(void* Obj)
	{
		((FPSCharacterBase_eventCanAddAmmo_Parms*)Obj)->bUseFullAmmo = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFPSCharacterBase_CanAddAmmo_Statics::NewProp_bUseFullAmmo = { "bUseFullAmmo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPSCharacterBase_eventCanAddAmmo_Parms), &Z_Construct_UFunction_AFPSCharacterBase_CanAddAmmo_Statics::NewProp_bUseFullAmmo_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AFPSCharacterBase_CanAddAmmo_Statics::NewProp_bAllItems_SetBit(void* Obj)
	{
		((FPSCharacterBase_eventCanAddAmmo_Parms*)Obj)->bAllItems = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFPSCharacterBase_CanAddAmmo_Statics::NewProp_bAllItems = { "bAllItems", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPSCharacterBase_eventCanAddAmmo_Parms), &Z_Construct_UFunction_AFPSCharacterBase_CanAddAmmo_Statics::NewProp_bAllItems_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFPSCharacterBase_CanAddAmmo_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSCharacterBase_eventCanAddAmmo_Parms, Amount), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AFPSCharacterBase_CanAddAmmo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FPSCharacterBase_eventCanAddAmmo_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFPSCharacterBase_CanAddAmmo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPSCharacterBase_eventCanAddAmmo_Parms), &Z_Construct_UFunction_AFPSCharacterBase_CanAddAmmo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSCharacterBase_CanAddAmmo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacterBase_CanAddAmmo_Statics::NewProp_bUseFullAmmo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacterBase_CanAddAmmo_Statics::NewProp_bAllItems,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacterBase_CanAddAmmo_Statics::NewProp_Amount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacterBase_CanAddAmmo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacterBase_CanAddAmmo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacterBase_CanAddAmmo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacterBase, nullptr, "CanAddAmmo", nullptr, nullptr, sizeof(FPSCharacterBase_eventCanAddAmmo_Parms), Z_Construct_UFunction_AFPSCharacterBase_CanAddAmmo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_CanAddAmmo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSCharacterBase_CanAddAmmo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_CanAddAmmo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSCharacterBase_CanAddAmmo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSCharacterBase_CanAddAmmo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSCharacterBase_CanPickupItem_Statics
	{
		struct FPSCharacterBase_eventCanPickupItem_Parms
		{
			AFPSItemPickup* Pickup;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Pickup;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFPSCharacterBase_CanPickupItem_Statics::NewProp_Pickup = { "Pickup", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSCharacterBase_eventCanPickupItem_Parms, Pickup), Z_Construct_UClass_AFPSItemPickup_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AFPSCharacterBase_CanPickupItem_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FPSCharacterBase_eventCanPickupItem_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFPSCharacterBase_CanPickupItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPSCharacterBase_eventCanPickupItem_Parms), &Z_Construct_UFunction_AFPSCharacterBase_CanPickupItem_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSCharacterBase_CanPickupItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacterBase_CanPickupItem_Statics::NewProp_Pickup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacterBase_CanPickupItem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacterBase_CanPickupItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacterBase_CanPickupItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacterBase, nullptr, "CanPickupItem", nullptr, nullptr, sizeof(FPSCharacterBase_eventCanPickupItem_Parms), Z_Construct_UFunction_AFPSCharacterBase_CanPickupItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_CanPickupItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSCharacterBase_CanPickupItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_CanPickupItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSCharacterBase_CanPickupItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSCharacterBase_CanPickupItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSCharacterBase_CanSprint_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFPSCharacterBase_CanSprint_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FPSCharacterBase_eventCanSprint_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFPSCharacterBase_CanSprint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPSCharacterBase_eventCanSprint_Parms), &Z_Construct_UFunction_AFPSCharacterBase_CanSprint_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSCharacterBase_CanSprint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacterBase_CanSprint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacterBase_CanSprint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacterBase_CanSprint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacterBase, nullptr, "CanSprint", nullptr, nullptr, sizeof(FPSCharacterBase_eventCanSprint_Parms), Z_Construct_UFunction_AFPSCharacterBase_CanSprint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_CanSprint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x1C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSCharacterBase_CanSprint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_CanSprint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSCharacterBase_CanSprint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSCharacterBase_CanSprint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSCharacterBase_CanVault_Statics
	{
		struct FPSCharacterBase_eventCanVault_Parms
		{
			FTransform CornerLocation;
			float EyeHeight;
			UAnimMontage* Montage;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CornerLocation;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EyeHeight;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Montage;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFPSCharacterBase_CanVault_Statics::NewProp_CornerLocation = { "CornerLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSCharacterBase_eventCanVault_Parms, CornerLocation), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFPSCharacterBase_CanVault_Statics::NewProp_EyeHeight = { "EyeHeight", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSCharacterBase_eventCanVault_Parms, EyeHeight), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFPSCharacterBase_CanVault_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSCharacterBase_eventCanVault_Parms, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AFPSCharacterBase_CanVault_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FPSCharacterBase_eventCanVault_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFPSCharacterBase_CanVault_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPSCharacterBase_eventCanVault_Parms), &Z_Construct_UFunction_AFPSCharacterBase_CanVault_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSCharacterBase_CanVault_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacterBase_CanVault_Statics::NewProp_CornerLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacterBase_CanVault_Statics::NewProp_EyeHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacterBase_CanVault_Statics::NewProp_Montage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacterBase_CanVault_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacterBase_CanVault_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacterBase_CanVault_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacterBase, nullptr, "CanVault", nullptr, nullptr, sizeof(FPSCharacterBase_eventCanVault_Parms), Z_Construct_UFunction_AFPSCharacterBase_CanVault_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_CanVault_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSCharacterBase_CanVault_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_CanVault_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSCharacterBase_CanVault()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSCharacterBase_CanVault_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSCharacterBase_CosmeticDequipItem_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Item;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFPSCharacterBase_CosmeticDequipItem_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSCharacterBase_eventCosmeticDequipItem_Parms, Item), Z_Construct_UClass_AFPSItem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSCharacterBase_CosmeticDequipItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacterBase_CosmeticDequipItem_Statics::NewProp_Item,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacterBase_CosmeticDequipItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacterBase_CosmeticDequipItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacterBase, nullptr, "CosmeticDequipItem", nullptr, nullptr, sizeof(FPSCharacterBase_eventCosmeticDequipItem_Parms), Z_Construct_UFunction_AFPSCharacterBase_CosmeticDequipItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_CosmeticDequipItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSCharacterBase_CosmeticDequipItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_CosmeticDequipItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSCharacterBase_CosmeticDequipItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSCharacterBase_CosmeticDequipItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSCharacterBase_CosmeticEquipItem_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Item;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFPSCharacterBase_CosmeticEquipItem_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSCharacterBase_eventCosmeticEquipItem_Parms, Item), Z_Construct_UClass_AFPSItem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSCharacterBase_CosmeticEquipItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacterBase_CosmeticEquipItem_Statics::NewProp_Item,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacterBase_CosmeticEquipItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacterBase_CosmeticEquipItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacterBase, nullptr, "CosmeticEquipItem", nullptr, nullptr, sizeof(FPSCharacterBase_eventCosmeticEquipItem_Parms), Z_Construct_UFunction_AFPSCharacterBase_CosmeticEquipItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_CosmeticEquipItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSCharacterBase_CosmeticEquipItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_CosmeticEquipItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSCharacterBase_CosmeticEquipItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSCharacterBase_CosmeticEquipItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSCharacterBase_CosmeticFinishDequipItem_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacterBase_CosmeticFinishDequipItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacterBase_CosmeticFinishDequipItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacterBase, nullptr, "CosmeticFinishDequipItem", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSCharacterBase_CosmeticFinishDequipItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_CosmeticFinishDequipItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSCharacterBase_CosmeticFinishDequipItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSCharacterBase_CosmeticFinishDequipItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSCharacterBase_CosmeticFinishEquipItem_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacterBase_CosmeticFinishEquipItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacterBase_CosmeticFinishEquipItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacterBase, nullptr, "CosmeticFinishEquipItem", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSCharacterBase_CosmeticFinishEquipItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_CosmeticFinishEquipItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSCharacterBase_CosmeticFinishEquipItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSCharacterBase_CosmeticFinishEquipItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSCharacterBase_CosmeticSwitchItem_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Item;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFPSCharacterBase_CosmeticSwitchItem_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSCharacterBase_eventCosmeticSwitchItem_Parms, Item), Z_Construct_UClass_AFPSItem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSCharacterBase_CosmeticSwitchItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacterBase_CosmeticSwitchItem_Statics::NewProp_Item,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacterBase_CosmeticSwitchItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacterBase_CosmeticSwitchItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacterBase, nullptr, "CosmeticSwitchItem", nullptr, nullptr, sizeof(FPSCharacterBase_eventCosmeticSwitchItem_Parms), Z_Construct_UFunction_AFPSCharacterBase_CosmeticSwitchItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_CosmeticSwitchItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSCharacterBase_CosmeticSwitchItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_CosmeticSwitchItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSCharacterBase_CosmeticSwitchItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSCharacterBase_CosmeticSwitchItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedAiming_Statics
	{
		static void NewProp_bAiming_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAiming;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedAiming_Statics::NewProp_bAiming_SetBit(void* Obj)
	{
		((FPSCharacterBase_eventCosmeticUpdatedAiming_Parms*)Obj)->bAiming = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedAiming_Statics::NewProp_bAiming = { "bAiming", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPSCharacterBase_eventCosmeticUpdatedAiming_Parms), &Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedAiming_Statics::NewProp_bAiming_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedAiming_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedAiming_Statics::NewProp_bAiming,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedAiming_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedAiming_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacterBase, nullptr, "CosmeticUpdatedAiming", nullptr, nullptr, sizeof(FPSCharacterBase_eventCosmeticUpdatedAiming_Parms), Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedAiming_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedAiming_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedAiming_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedAiming_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedAiming()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedAiming_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedCheckingAmmo_Statics
	{
		static void NewProp_bCheckingAmmo_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCheckingAmmo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedCheckingAmmo_Statics::NewProp_bCheckingAmmo_SetBit(void* Obj)
	{
		((FPSCharacterBase_eventCosmeticUpdatedCheckingAmmo_Parms*)Obj)->bCheckingAmmo = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedCheckingAmmo_Statics::NewProp_bCheckingAmmo = { "bCheckingAmmo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPSCharacterBase_eventCosmeticUpdatedCheckingAmmo_Parms), &Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedCheckingAmmo_Statics::NewProp_bCheckingAmmo_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedCheckingAmmo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedCheckingAmmo_Statics::NewProp_bCheckingAmmo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedCheckingAmmo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedCheckingAmmo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacterBase, nullptr, "CosmeticUpdatedCheckingAmmo", nullptr, nullptr, sizeof(FPSCharacterBase_eventCosmeticUpdatedCheckingAmmo_Parms), Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedCheckingAmmo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedCheckingAmmo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedCheckingAmmo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedCheckingAmmo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedCheckingAmmo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedCheckingAmmo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedCrouching_Statics
	{
		static void NewProp_bCrouching_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCrouching;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedCrouching_Statics::NewProp_bCrouching_SetBit(void* Obj)
	{
		((FPSCharacterBase_eventCosmeticUpdatedCrouching_Parms*)Obj)->bCrouching = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedCrouching_Statics::NewProp_bCrouching = { "bCrouching", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPSCharacterBase_eventCosmeticUpdatedCrouching_Parms), &Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedCrouching_Statics::NewProp_bCrouching_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedCrouching_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedCrouching_Statics::NewProp_bCrouching,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedCrouching_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedCrouching_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacterBase, nullptr, "CosmeticUpdatedCrouching", nullptr, nullptr, sizeof(FPSCharacterBase_eventCosmeticUpdatedCrouching_Parms), Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedCrouching_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedCrouching_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedCrouching_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedCrouching_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedCrouching()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedCrouching_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedDead_Statics
	{
		static void NewProp_bDead_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDead;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedDead_Statics::NewProp_bDead_SetBit(void* Obj)
	{
		((FPSCharacterBase_eventCosmeticUpdatedDead_Parms*)Obj)->bDead = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedDead_Statics::NewProp_bDead = { "bDead", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPSCharacterBase_eventCosmeticUpdatedDead_Parms), &Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedDead_Statics::NewProp_bDead_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedDead_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedDead_Statics::NewProp_bDead,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedDead_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedDead_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacterBase, nullptr, "CosmeticUpdatedDead", nullptr, nullptr, sizeof(FPSCharacterBase_eventCosmeticUpdatedDead_Parms), Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedDead_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedDead_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedDead_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedDead_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedDead()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedDead_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedFiring_Statics
	{
		static void NewProp_bFiring_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFiring;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedFiring_Statics::NewProp_bFiring_SetBit(void* Obj)
	{
		((FPSCharacterBase_eventCosmeticUpdatedFiring_Parms*)Obj)->bFiring = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedFiring_Statics::NewProp_bFiring = { "bFiring", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPSCharacterBase_eventCosmeticUpdatedFiring_Parms), &Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedFiring_Statics::NewProp_bFiring_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedFiring_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedFiring_Statics::NewProp_bFiring,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedFiring_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedFiring_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacterBase, nullptr, "CosmeticUpdatedFiring", nullptr, nullptr, sizeof(FPSCharacterBase_eventCosmeticUpdatedFiring_Parms), Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedFiring_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedFiring_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedFiring_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedFiring_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedFiring()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedFiring_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedInspecting_Statics
	{
		static void NewProp_bInspecting_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInspecting;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedInspecting_Statics::NewProp_bInspecting_SetBit(void* Obj)
	{
		((FPSCharacterBase_eventCosmeticUpdatedInspecting_Parms*)Obj)->bInspecting = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedInspecting_Statics::NewProp_bInspecting = { "bInspecting", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPSCharacterBase_eventCosmeticUpdatedInspecting_Parms), &Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedInspecting_Statics::NewProp_bInspecting_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedInspecting_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedInspecting_Statics::NewProp_bInspecting,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedInspecting_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedInspecting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacterBase, nullptr, "CosmeticUpdatedInspecting", nullptr, nullptr, sizeof(FPSCharacterBase_eventCosmeticUpdatedInspecting_Parms), Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedInspecting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedInspecting_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedInspecting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedInspecting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedInspecting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedInspecting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedKicking_Statics
	{
		static void NewProp_bKicking_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bKicking;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedKicking_Statics::NewProp_bKicking_SetBit(void* Obj)
	{
		((FPSCharacterBase_eventCosmeticUpdatedKicking_Parms*)Obj)->bKicking = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedKicking_Statics::NewProp_bKicking = { "bKicking", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPSCharacterBase_eventCosmeticUpdatedKicking_Parms), &Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedKicking_Statics::NewProp_bKicking_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedKicking_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedKicking_Statics::NewProp_bKicking,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedKicking_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedKicking_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacterBase, nullptr, "CosmeticUpdatedKicking", nullptr, nullptr, sizeof(FPSCharacterBase_eventCosmeticUpdatedKicking_Parms), Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedKicking_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedKicking_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedKicking_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedKicking_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedKicking()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedKicking_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedLeaning_Statics
	{
		static void NewProp_bLeaning_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLeaning;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedLeaning_Statics::NewProp_bLeaning_SetBit(void* Obj)
	{
		((FPSCharacterBase_eventCosmeticUpdatedLeaning_Parms*)Obj)->bLeaning = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedLeaning_Statics::NewProp_bLeaning = { "bLeaning", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPSCharacterBase_eventCosmeticUpdatedLeaning_Parms), &Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedLeaning_Statics::NewProp_bLeaning_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedLeaning_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedLeaning_Statics::NewProp_bLeaning,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedLeaning_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedLeaning_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacterBase, nullptr, "CosmeticUpdatedLeaning", nullptr, nullptr, sizeof(FPSCharacterBase_eventCosmeticUpdatedLeaning_Parms), Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedLeaning_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedLeaning_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedLeaning_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedLeaning_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedLeaning()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedLeaning_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedLeaningLeft_Statics
	{
		static void NewProp_bLeaningLeft_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLeaningLeft;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedLeaningLeft_Statics::NewProp_bLeaningLeft_SetBit(void* Obj)
	{
		((FPSCharacterBase_eventCosmeticUpdatedLeaningLeft_Parms*)Obj)->bLeaningLeft = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedLeaningLeft_Statics::NewProp_bLeaningLeft = { "bLeaningLeft", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPSCharacterBase_eventCosmeticUpdatedLeaningLeft_Parms), &Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedLeaningLeft_Statics::NewProp_bLeaningLeft_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedLeaningLeft_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedLeaningLeft_Statics::NewProp_bLeaningLeft,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedLeaningLeft_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedLeaningLeft_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacterBase, nullptr, "CosmeticUpdatedLeaningLeft", nullptr, nullptr, sizeof(FPSCharacterBase_eventCosmeticUpdatedLeaningLeft_Parms), Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedLeaningLeft_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedLeaningLeft_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedLeaningLeft_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedLeaningLeft_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedLeaningLeft()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedLeaningLeft_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedLeaningRight_Statics
	{
		static void NewProp_bLeaningRight_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLeaningRight;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedLeaningRight_Statics::NewProp_bLeaningRight_SetBit(void* Obj)
	{
		((FPSCharacterBase_eventCosmeticUpdatedLeaningRight_Parms*)Obj)->bLeaningRight = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedLeaningRight_Statics::NewProp_bLeaningRight = { "bLeaningRight", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPSCharacterBase_eventCosmeticUpdatedLeaningRight_Parms), &Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedLeaningRight_Statics::NewProp_bLeaningRight_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedLeaningRight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedLeaningRight_Statics::NewProp_bLeaningRight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedLeaningRight_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedLeaningRight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacterBase, nullptr, "CosmeticUpdatedLeaningRight", nullptr, nullptr, sizeof(FPSCharacterBase_eventCosmeticUpdatedLeaningRight_Parms), Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedLeaningRight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedLeaningRight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedLeaningRight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedLeaningRight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedLeaningRight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedLeaningRight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedLowReady_Statics
	{
		static void NewProp_bLowReady_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLowReady;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedLowReady_Statics::NewProp_bLowReady_SetBit(void* Obj)
	{
		((FPSCharacterBase_eventCosmeticUpdatedLowReady_Parms*)Obj)->bLowReady = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedLowReady_Statics::NewProp_bLowReady = { "bLowReady", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPSCharacterBase_eventCosmeticUpdatedLowReady_Parms), &Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedLowReady_Statics::NewProp_bLowReady_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedLowReady_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedLowReady_Statics::NewProp_bLowReady,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedLowReady_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedLowReady_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacterBase, nullptr, "CosmeticUpdatedLowReady", nullptr, nullptr, sizeof(FPSCharacterBase_eventCosmeticUpdatedLowReady_Parms), Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedLowReady_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedLowReady_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedLowReady_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedLowReady_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedLowReady()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedLowReady_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedMounted_Statics
	{
		static void NewProp_bMounted_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMounted;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedMounted_Statics::NewProp_bMounted_SetBit(void* Obj)
	{
		((FPSCharacterBase_eventCosmeticUpdatedMounted_Parms*)Obj)->bMounted = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedMounted_Statics::NewProp_bMounted = { "bMounted", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPSCharacterBase_eventCosmeticUpdatedMounted_Parms), &Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedMounted_Statics::NewProp_bMounted_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedMounted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedMounted_Statics::NewProp_bMounted,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedMounted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedMounted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacterBase, nullptr, "CosmeticUpdatedMounted", nullptr, nullptr, sizeof(FPSCharacterBase_eventCosmeticUpdatedMounted_Parms), Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedMounted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedMounted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedMounted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedMounted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedMounted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedMounted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedNightVision_Statics
	{
		static void NewProp_bUsingNightVision_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUsingNightVision;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedNightVision_Statics::NewProp_bUsingNightVision_SetBit(void* Obj)
	{
		((FPSCharacterBase_eventCosmeticUpdatedNightVision_Parms*)Obj)->bUsingNightVision = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedNightVision_Statics::NewProp_bUsingNightVision = { "bUsingNightVision", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPSCharacterBase_eventCosmeticUpdatedNightVision_Parms), &Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedNightVision_Statics::NewProp_bUsingNightVision_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedNightVision_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedNightVision_Statics::NewProp_bUsingNightVision,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedNightVision_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedNightVision_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacterBase, nullptr, "CosmeticUpdatedNightVision", nullptr, nullptr, sizeof(FPSCharacterBase_eventCosmeticUpdatedNightVision_Parms), Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedNightVision_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedNightVision_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedNightVision_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedNightVision_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedNightVision()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedNightVision_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedProne_Statics
	{
		static void NewProp_bProne_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bProne;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedProne_Statics::NewProp_bProne_SetBit(void* Obj)
	{
		((FPSCharacterBase_eventCosmeticUpdatedProne_Parms*)Obj)->bProne = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedProne_Statics::NewProp_bProne = { "bProne", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPSCharacterBase_eventCosmeticUpdatedProne_Parms), &Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedProne_Statics::NewProp_bProne_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedProne_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedProne_Statics::NewProp_bProne,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedProne_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedProne_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacterBase, nullptr, "CosmeticUpdatedProne", nullptr, nullptr, sizeof(FPSCharacterBase_eventCosmeticUpdatedProne_Parms), Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedProne_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedProne_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedProne_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedProne_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedProne()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedProne_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedReloading_Statics
	{
		static void NewProp_bReloading_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReloading;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedReloading_Statics::NewProp_bReloading_SetBit(void* Obj)
	{
		((FPSCharacterBase_eventCosmeticUpdatedReloading_Parms*)Obj)->bReloading = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedReloading_Statics::NewProp_bReloading = { "bReloading", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPSCharacterBase_eventCosmeticUpdatedReloading_Parms), &Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedReloading_Statics::NewProp_bReloading_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedReloading_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedReloading_Statics::NewProp_bReloading,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedReloading_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedReloading_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacterBase, nullptr, "CosmeticUpdatedReloading", nullptr, nullptr, sizeof(FPSCharacterBase_eventCosmeticUpdatedReloading_Parms), Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedReloading_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedReloading_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedReloading_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedReloading_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedReloading()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedReloading_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedSprinting_Statics
	{
		static void NewProp_bSprinting_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSprinting;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedSprinting_Statics::NewProp_bSprinting_SetBit(void* Obj)
	{
		((FPSCharacterBase_eventCosmeticUpdatedSprinting_Parms*)Obj)->bSprinting = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedSprinting_Statics::NewProp_bSprinting = { "bSprinting", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPSCharacterBase_eventCosmeticUpdatedSprinting_Parms), &Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedSprinting_Statics::NewProp_bSprinting_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedSprinting_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedSprinting_Statics::NewProp_bSprinting,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedSprinting_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedSprinting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacterBase, nullptr, "CosmeticUpdatedSprinting", nullptr, nullptr, sizeof(FPSCharacterBase_eventCosmeticUpdatedSprinting_Parms), Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedSprinting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedSprinting_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedSprinting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedSprinting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedSprinting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedSprinting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSCharacterBase_FindCorner_Statics
	{
		struct FPSCharacterBase_eventFindCorner_Parms
		{
			FVector Normal;
			float WallDistance;
			float CapsuleRadius;
			float CornerDistance;
			bool bUseComplex;
			FVector CornerPosition;
			UPrimitiveComponent* CornerObject;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Normal;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WallDistance;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CapsuleRadius;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CornerDistance;
		static void NewProp_bUseComplex_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseComplex;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CornerPosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CornerObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CornerObject;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFPSCharacterBase_FindCorner_Statics::NewProp_Normal = { "Normal", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSCharacterBase_eventFindCorner_Parms, Normal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFPSCharacterBase_FindCorner_Statics::NewProp_WallDistance = { "WallDistance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSCharacterBase_eventFindCorner_Parms, WallDistance), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFPSCharacterBase_FindCorner_Statics::NewProp_CapsuleRadius = { "CapsuleRadius", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSCharacterBase_eventFindCorner_Parms, CapsuleRadius), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFPSCharacterBase_FindCorner_Statics::NewProp_CornerDistance = { "CornerDistance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSCharacterBase_eventFindCorner_Parms, CornerDistance), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AFPSCharacterBase_FindCorner_Statics::NewProp_bUseComplex_SetBit(void* Obj)
	{
		((FPSCharacterBase_eventFindCorner_Parms*)Obj)->bUseComplex = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFPSCharacterBase_FindCorner_Statics::NewProp_bUseComplex = { "bUseComplex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPSCharacterBase_eventFindCorner_Parms), &Z_Construct_UFunction_AFPSCharacterBase_FindCorner_Statics::NewProp_bUseComplex_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFPSCharacterBase_FindCorner_Statics::NewProp_CornerPosition = { "CornerPosition", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSCharacterBase_eventFindCorner_Parms, CornerPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacterBase_FindCorner_Statics::NewProp_CornerObject_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFPSCharacterBase_FindCorner_Statics::NewProp_CornerObject = { "CornerObject", nullptr, (EPropertyFlags)0x0010000000080180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSCharacterBase_eventFindCorner_Parms, CornerObject), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFPSCharacterBase_FindCorner_Statics::NewProp_CornerObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_FindCorner_Statics::NewProp_CornerObject_MetaData)) };
	void Z_Construct_UFunction_AFPSCharacterBase_FindCorner_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FPSCharacterBase_eventFindCorner_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFPSCharacterBase_FindCorner_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPSCharacterBase_eventFindCorner_Parms), &Z_Construct_UFunction_AFPSCharacterBase_FindCorner_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSCharacterBase_FindCorner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacterBase_FindCorner_Statics::NewProp_Normal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacterBase_FindCorner_Statics::NewProp_WallDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacterBase_FindCorner_Statics::NewProp_CapsuleRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacterBase_FindCorner_Statics::NewProp_CornerDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacterBase_FindCorner_Statics::NewProp_bUseComplex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacterBase_FindCorner_Statics::NewProp_CornerPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacterBase_FindCorner_Statics::NewProp_CornerObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacterBase_FindCorner_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacterBase_FindCorner_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacterBase_FindCorner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacterBase, nullptr, "FindCorner", nullptr, nullptr, sizeof(FPSCharacterBase_eventFindCorner_Parms), Z_Construct_UFunction_AFPSCharacterBase_FindCorner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_FindCorner_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSCharacterBase_FindCorner_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_FindCorner_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSCharacterBase_FindCorner()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSCharacterBase_FindCorner_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSCharacterBase_FinishKick_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacterBase_FinishKick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacterBase_FinishKick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacterBase, nullptr, "FinishKick", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSCharacterBase_FinishKick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_FinishKick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSCharacterBase_FinishKick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSCharacterBase_FinishKick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSCharacterBase_FinishLoadAndAddItem_Statics
	{
		struct FPSCharacterBase_eventFinishLoadAndAddItem_Parms
		{
			TSoftObjectPtr<UFPSItemData> Item;
			FFPSItemSlotData SlotData;
			bool bEquip;
		};
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_Item;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SlotData;
		static void NewProp_bEquip_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEquip;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_AFPSCharacterBase_FinishLoadAndAddItem_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSCharacterBase_eventFinishLoadAndAddItem_Parms, Item), Z_Construct_UClass_UFPSItemData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFPSCharacterBase_FinishLoadAndAddItem_Statics::NewProp_SlotData = { "SlotData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSCharacterBase_eventFinishLoadAndAddItem_Parms, SlotData), Z_Construct_UScriptStruct_FFPSItemSlotData, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AFPSCharacterBase_FinishLoadAndAddItem_Statics::NewProp_bEquip_SetBit(void* Obj)
	{
		((FPSCharacterBase_eventFinishLoadAndAddItem_Parms*)Obj)->bEquip = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFPSCharacterBase_FinishLoadAndAddItem_Statics::NewProp_bEquip = { "bEquip", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPSCharacterBase_eventFinishLoadAndAddItem_Parms), &Z_Construct_UFunction_AFPSCharacterBase_FinishLoadAndAddItem_Statics::NewProp_bEquip_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSCharacterBase_FinishLoadAndAddItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacterBase_FinishLoadAndAddItem_Statics::NewProp_Item,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacterBase_FinishLoadAndAddItem_Statics::NewProp_SlotData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacterBase_FinishLoadAndAddItem_Statics::NewProp_bEquip,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacterBase_FinishLoadAndAddItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacterBase_FinishLoadAndAddItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacterBase, nullptr, "FinishLoadAndAddItem", nullptr, nullptr, sizeof(FPSCharacterBase_eventFinishLoadAndAddItem_Parms), Z_Construct_UFunction_AFPSCharacterBase_FinishLoadAndAddItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_FinishLoadAndAddItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSCharacterBase_FinishLoadAndAddItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_FinishLoadAndAddItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSCharacterBase_FinishLoadAndAddItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSCharacterBase_FinishLoadAndAddItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSCharacterBase_FinishLoadAndSwitchItem_Statics
	{
		struct FPSCharacterBase_eventFinishLoadAndSwitchItem_Parms
		{
			FPrimaryAssetId ItemId;
			AFPSItem* Item;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ItemId;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Item;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFPSCharacterBase_FinishLoadAndSwitchItem_Statics::NewProp_ItemId = { "ItemId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSCharacterBase_eventFinishLoadAndSwitchItem_Parms, ItemId), Z_Construct_UScriptStruct_FPrimaryAssetId, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFPSCharacterBase_FinishLoadAndSwitchItem_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSCharacterBase_eventFinishLoadAndSwitchItem_Parms, Item), Z_Construct_UClass_AFPSItem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSCharacterBase_FinishLoadAndSwitchItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacterBase_FinishLoadAndSwitchItem_Statics::NewProp_ItemId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacterBase_FinishLoadAndSwitchItem_Statics::NewProp_Item,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacterBase_FinishLoadAndSwitchItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacterBase_FinishLoadAndSwitchItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacterBase, nullptr, "FinishLoadAndSwitchItem", nullptr, nullptr, sizeof(FPSCharacterBase_eventFinishLoadAndSwitchItem_Parms), Z_Construct_UFunction_AFPSCharacterBase_FinishLoadAndSwitchItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_FinishLoadAndSwitchItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSCharacterBase_FinishLoadAndSwitchItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_FinishLoadAndSwitchItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSCharacterBase_FinishLoadAndSwitchItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSCharacterBase_FinishLoadAndSwitchItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSCharacterBase_FinishPickupItem_Statics
	{
		struct FPSCharacterBase_eventFinishPickupItem_Parms
		{
			AFPSItemPickup* Pickup;
			TSoftObjectPtr<UFPSItemData> Item;
			FFPSItemSlotData SlotData;
			bool bEquip;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Pickup;
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_Item;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SlotData;
		static void NewProp_bEquip_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEquip;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFPSCharacterBase_FinishPickupItem_Statics::NewProp_Pickup = { "Pickup", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSCharacterBase_eventFinishPickupItem_Parms, Pickup), Z_Construct_UClass_AFPSItemPickup_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_AFPSCharacterBase_FinishPickupItem_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSCharacterBase_eventFinishPickupItem_Parms, Item), Z_Construct_UClass_UFPSItemData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFPSCharacterBase_FinishPickupItem_Statics::NewProp_SlotData = { "SlotData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSCharacterBase_eventFinishPickupItem_Parms, SlotData), Z_Construct_UScriptStruct_FFPSItemSlotData, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AFPSCharacterBase_FinishPickupItem_Statics::NewProp_bEquip_SetBit(void* Obj)
	{
		((FPSCharacterBase_eventFinishPickupItem_Parms*)Obj)->bEquip = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFPSCharacterBase_FinishPickupItem_Statics::NewProp_bEquip = { "bEquip", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPSCharacterBase_eventFinishPickupItem_Parms), &Z_Construct_UFunction_AFPSCharacterBase_FinishPickupItem_Statics::NewProp_bEquip_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSCharacterBase_FinishPickupItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacterBase_FinishPickupItem_Statics::NewProp_Pickup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacterBase_FinishPickupItem_Statics::NewProp_Item,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacterBase_FinishPickupItem_Statics::NewProp_SlotData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacterBase_FinishPickupItem_Statics::NewProp_bEquip,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacterBase_FinishPickupItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacterBase_FinishPickupItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacterBase, nullptr, "FinishPickupItem", nullptr, nullptr, sizeof(FPSCharacterBase_eventFinishPickupItem_Parms), Z_Construct_UFunction_AFPSCharacterBase_FinishPickupItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_FinishPickupItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSCharacterBase_FinishPickupItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_FinishPickupItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSCharacterBase_FinishPickupItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSCharacterBase_FinishPickupItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSCharacterBase_GetAbilities_Statics
	{
		struct FPSCharacterBase_eventGetAbilities_Parms
		{
			TEnumAsByte<EFPSCharacterAbilities::Type> Mask;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Mask;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AFPSCharacterBase_GetAbilities_Statics::NewProp_Mask = { "Mask", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSCharacterBase_eventGetAbilities_Parms, Mask), Z_Construct_UEnum_FPSController_EFPSCharacterAbilities, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AFPSCharacterBase_GetAbilities_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FPSCharacterBase_eventGetAbilities_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFPSCharacterBase_GetAbilities_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPSCharacterBase_eventGetAbilities_Parms), &Z_Construct_UFunction_AFPSCharacterBase_GetAbilities_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSCharacterBase_GetAbilities_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacterBase_GetAbilities_Statics::NewProp_Mask,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacterBase_GetAbilities_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacterBase_GetAbilities_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacterBase_GetAbilities_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacterBase, nullptr, "GetAbilities", nullptr, nullptr, sizeof(FPSCharacterBase_eventGetAbilities_Parms), Z_Construct_UFunction_AFPSCharacterBase_GetAbilities_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_GetAbilities_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSCharacterBase_GetAbilities_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_GetAbilities_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSCharacterBase_GetAbilities()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSCharacterBase_GetAbilities_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSCharacterBase_GetAiming_Statics
	{
		struct FPSCharacterBase_eventGetAiming_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFPSCharacterBase_GetAiming_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FPSCharacterBase_eventGetAiming_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFPSCharacterBase_GetAiming_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPSCharacterBase_eventGetAiming_Parms), &Z_Construct_UFunction_AFPSCharacterBase_GetAiming_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSCharacterBase_GetAiming_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacterBase_GetAiming_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacterBase_GetAiming_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacterBase_GetAiming_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacterBase, nullptr, "GetAiming", nullptr, nullptr, sizeof(FPSCharacterBase_eventGetAiming_Parms), Z_Construct_UFunction_AFPSCharacterBase_GetAiming_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_GetAiming_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSCharacterBase_GetAiming_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_GetAiming_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSCharacterBase_GetAiming()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSCharacterBase_GetAiming_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSCharacterBase_GetAimingMovementSpeedMultiplierForItem_Statics
	{
		struct FPSCharacterBase_eventGetAimingMovementSpeedMultiplierForItem_Parms
		{
			int32 Slot;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Slot;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFPSCharacterBase_GetAimingMovementSpeedMultiplierForItem_Statics::NewProp_Slot = { "Slot", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSCharacterBase_eventGetAimingMovementSpeedMultiplierForItem_Parms, Slot), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFPSCharacterBase_GetAimingMovementSpeedMultiplierForItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSCharacterBase_eventGetAimingMovementSpeedMultiplierForItem_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSCharacterBase_GetAimingMovementSpeedMultiplierForItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacterBase_GetAimingMovementSpeedMultiplierForItem_Statics::NewProp_Slot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacterBase_GetAimingMovementSpeedMultiplierForItem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacterBase_GetAimingMovementSpeedMultiplierForItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacterBase_GetAimingMovementSpeedMultiplierForItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacterBase, nullptr, "GetAimingMovementSpeedMultiplierForItem", nullptr, nullptr, sizeof(FPSCharacterBase_eventGetAimingMovementSpeedMultiplierForItem_Parms), Z_Construct_UFunction_AFPSCharacterBase_GetAimingMovementSpeedMultiplierForItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_GetAimingMovementSpeedMultiplierForItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSCharacterBase_GetAimingMovementSpeedMultiplierForItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_GetAimingMovementSpeedMultiplierForItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSCharacterBase_GetAimingMovementSpeedMultiplierForItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSCharacterBase_GetAimingMovementSpeedMultiplierForItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSCharacterBase_GetBracedAiming_Statics
	{
		struct FPSCharacterBase_eventGetBracedAiming_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFPSCharacterBase_GetBracedAiming_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FPSCharacterBase_eventGetBracedAiming_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFPSCharacterBase_GetBracedAiming_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPSCharacterBase_eventGetBracedAiming_Parms), &Z_Construct_UFunction_AFPSCharacterBase_GetBracedAiming_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSCharacterBase_GetBracedAiming_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacterBase_GetBracedAiming_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacterBase_GetBracedAiming_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacterBase_GetBracedAiming_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacterBase, nullptr, "GetBracedAiming", nullptr, nullptr, sizeof(FPSCharacterBase_eventGetBracedAiming_Parms), Z_Construct_UFunction_AFPSCharacterBase_GetBracedAiming_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_GetBracedAiming_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSCharacterBase_GetBracedAiming_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_GetBracedAiming_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSCharacterBase_GetBracedAiming()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSCharacterBase_GetBracedAiming_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSCharacterBase_GetCamera_Statics
	{
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
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacterBase_GetCamera_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFPSCharacterBase_GetCamera_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSCharacterBase_eventGetCamera_Parms, ReturnValue), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFPSCharacterBase_GetCamera_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_GetCamera_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSCharacterBase_GetCamera_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacterBase_GetCamera_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacterBase_GetCamera_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacterBase_GetCamera_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacterBase, nullptr, "GetCamera", nullptr, nullptr, sizeof(FPSCharacterBase_eventGetCamera_Parms), Z_Construct_UFunction_AFPSCharacterBase_GetCamera_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_GetCamera_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x1C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSCharacterBase_GetCamera_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_GetCamera_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSCharacterBase_GetCamera()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSCharacterBase_GetCamera_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSCharacterBase_GetCancelledReload_Statics
	{
		struct FPSCharacterBase_eventGetCancelledReload_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFPSCharacterBase_GetCancelledReload_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FPSCharacterBase_eventGetCancelledReload_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFPSCharacterBase_GetCancelledReload_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPSCharacterBase_eventGetCancelledReload_Parms), &Z_Construct_UFunction_AFPSCharacterBase_GetCancelledReload_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSCharacterBase_GetCancelledReload_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacterBase_GetCancelledReload_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacterBase_GetCancelledReload_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacterBase_GetCancelledReload_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacterBase, nullptr, "GetCancelledReload", nullptr, nullptr, sizeof(FPSCharacterBase_eventGetCancelledReload_Parms), Z_Construct_UFunction_AFPSCharacterBase_GetCancelledReload_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_GetCancelledReload_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSCharacterBase_GetCancelledReload_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_GetCancelledReload_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSCharacterBase_GetCancelledReload()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSCharacterBase_GetCancelledReload_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSCharacterBase_GetCheckingAmmo_Statics
	{
		struct FPSCharacterBase_eventGetCheckingAmmo_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFPSCharacterBase_GetCheckingAmmo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FPSCharacterBase_eventGetCheckingAmmo_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFPSCharacterBase_GetCheckingAmmo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPSCharacterBase_eventGetCheckingAmmo_Parms), &Z_Construct_UFunction_AFPSCharacterBase_GetCheckingAmmo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSCharacterBase_GetCheckingAmmo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacterBase_GetCheckingAmmo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacterBase_GetCheckingAmmo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacterBase_GetCheckingAmmo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacterBase, nullptr, "GetCheckingAmmo", nullptr, nullptr, sizeof(FPSCharacterBase_eventGetCheckingAmmo_Parms), Z_Construct_UFunction_AFPSCharacterBase_GetCheckingAmmo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_GetCheckingAmmo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSCharacterBase_GetCheckingAmmo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_GetCheckingAmmo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSCharacterBase_GetCheckingAmmo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSCharacterBase_GetCheckingAmmo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSCharacterBase_GetClimbing_Statics
	{
		struct FPSCharacterBase_eventGetClimbing_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFPSCharacterBase_GetClimbing_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FPSCharacterBase_eventGetClimbing_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFPSCharacterBase_GetClimbing_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPSCharacterBase_eventGetClimbing_Parms), &Z_Construct_UFunction_AFPSCharacterBase_GetClimbing_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSCharacterBase_GetClimbing_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacterBase_GetClimbing_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacterBase_GetClimbing_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacterBase_GetClimbing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacterBase, nullptr, "GetClimbing", nullptr, nullptr, sizeof(FPSCharacterBase_eventGetClimbing_Parms), Z_Construct_UFunction_AFPSCharacterBase_GetClimbing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_GetClimbing_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSCharacterBase_GetClimbing_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_GetClimbing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSCharacterBase_GetClimbing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSCharacterBase_GetClimbing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSCharacterBase_GetCurrentHealth_Statics
	{
		struct FPSCharacterBase_eventGetCurrentHealth_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFPSCharacterBase_GetCurrentHealth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSCharacterBase_eventGetCurrentHealth_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSCharacterBase_GetCurrentHealth_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacterBase_GetCurrentHealth_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacterBase_GetCurrentHealth_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacterBase_GetCurrentHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacterBase, nullptr, "GetCurrentHealth", nullptr, nullptr, sizeof(FPSCharacterBase_eventGetCurrentHealth_Parms), Z_Construct_UFunction_AFPSCharacterBase_GetCurrentHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_GetCurrentHealth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSCharacterBase_GetCurrentHealth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_GetCurrentHealth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSCharacterBase_GetCurrentHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSCharacterBase_GetCurrentHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSCharacterBase_GetDead_Statics
	{
		struct FPSCharacterBase_eventGetDead_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFPSCharacterBase_GetDead_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FPSCharacterBase_eventGetDead_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFPSCharacterBase_GetDead_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPSCharacterBase_eventGetDead_Parms), &Z_Construct_UFunction_AFPSCharacterBase_GetDead_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSCharacterBase_GetDead_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacterBase_GetDead_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacterBase_GetDead_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacterBase_GetDead_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacterBase, nullptr, "GetDead", nullptr, nullptr, sizeof(FPSCharacterBase_eventGetDead_Parms), Z_Construct_UFunction_AFPSCharacterBase_GetDead_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_GetDead_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSCharacterBase_GetDead_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_GetDead_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSCharacterBase_GetDead()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSCharacterBase_GetDead_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSCharacterBase_GetEmptyReload_Statics
	{
		struct FPSCharacterBase_eventGetEmptyReload_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFPSCharacterBase_GetEmptyReload_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FPSCharacterBase_eventGetEmptyReload_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFPSCharacterBase_GetEmptyReload_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPSCharacterBase_eventGetEmptyReload_Parms), &Z_Construct_UFunction_AFPSCharacterBase_GetEmptyReload_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSCharacterBase_GetEmptyReload_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacterBase_GetEmptyReload_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacterBase_GetEmptyReload_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacterBase_GetEmptyReload_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacterBase, nullptr, "GetEmptyReload", nullptr, nullptr, sizeof(FPSCharacterBase_eventGetEmptyReload_Parms), Z_Construct_UFunction_AFPSCharacterBase_GetEmptyReload_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_GetEmptyReload_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSCharacterBase_GetEmptyReload_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_GetEmptyReload_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSCharacterBase_GetEmptyReload()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSCharacterBase_GetEmptyReload_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSCharacterBase_GetEquippedItemIndex_Statics
	{
		struct FPSCharacterBase_eventGetEquippedItemIndex_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFPSCharacterBase_GetEquippedItemIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSCharacterBase_eventGetEquippedItemIndex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSCharacterBase_GetEquippedItemIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacterBase_GetEquippedItemIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacterBase_GetEquippedItemIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacterBase_GetEquippedItemIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacterBase, nullptr, "GetEquippedItemIndex", nullptr, nullptr, sizeof(FPSCharacterBase_eventGetEquippedItemIndex_Parms), Z_Construct_UFunction_AFPSCharacterBase_GetEquippedItemIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_GetEquippedItemIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSCharacterBase_GetEquippedItemIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_GetEquippedItemIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSCharacterBase_GetEquippedItemIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSCharacterBase_GetEquippedItemIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSCharacterBase_GetEyesLocation_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFPSCharacterBase_GetEyesLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSCharacterBase_eventGetEyesLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSCharacterBase_GetEyesLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacterBase_GetEyesLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacterBase_GetEyesLocation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacterBase_GetEyesLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacterBase, nullptr, "GetEyesLocation", nullptr, nullptr, sizeof(FPSCharacterBase_eventGetEyesLocation_Parms), Z_Construct_UFunction_AFPSCharacterBase_GetEyesLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_GetEyesLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C820C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSCharacterBase_GetEyesLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_GetEyesLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSCharacterBase_GetEyesLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSCharacterBase_GetEyesLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSCharacterBase_GetEyesLocationNoOffset_Statics
	{
		struct FPSCharacterBase_eventGetEyesLocationNoOffset_Parms
		{
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFPSCharacterBase_GetEyesLocationNoOffset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSCharacterBase_eventGetEyesLocationNoOffset_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSCharacterBase_GetEyesLocationNoOffset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacterBase_GetEyesLocationNoOffset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacterBase_GetEyesLocationNoOffset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacterBase_GetEyesLocationNoOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacterBase, nullptr, "GetEyesLocationNoOffset", nullptr, nullptr, sizeof(FPSCharacterBase_eventGetEyesLocationNoOffset_Parms), Z_Construct_UFunction_AFPSCharacterBase_GetEyesLocationNoOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_GetEyesLocationNoOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSCharacterBase_GetEyesLocationNoOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_GetEyesLocationNoOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSCharacterBase_GetEyesLocationNoOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSCharacterBase_GetEyesLocationNoOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSCharacterBase_GetFiring_Statics
	{
		struct FPSCharacterBase_eventGetFiring_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFPSCharacterBase_GetFiring_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FPSCharacterBase_eventGetFiring_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFPSCharacterBase_GetFiring_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPSCharacterBase_eventGetFiring_Parms), &Z_Construct_UFunction_AFPSCharacterBase_GetFiring_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSCharacterBase_GetFiring_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacterBase_GetFiring_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacterBase_GetFiring_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacterBase_GetFiring_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacterBase, nullptr, "GetFiring", nullptr, nullptr, sizeof(FPSCharacterBase_eventGetFiring_Parms), Z_Construct_UFunction_AFPSCharacterBase_GetFiring_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_GetFiring_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSCharacterBase_GetFiring_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_GetFiring_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSCharacterBase_GetFiring()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSCharacterBase_GetFiring_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSCharacterBase_GetFirstItem_Statics
	{
		struct FPSCharacterBase_eventGetFirstItem_Parms
		{
			AFPSItem* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFPSCharacterBase_GetFirstItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSCharacterBase_eventGetFirstItem_Parms, ReturnValue), Z_Construct_UClass_AFPSItem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSCharacterBase_GetFirstItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacterBase_GetFirstItem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacterBase_GetFirstItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacterBase_GetFirstItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacterBase, nullptr, "GetFirstItem", nullptr, nullptr, sizeof(FPSCharacterBase_eventGetFirstItem_Parms), Z_Construct_UFunction_AFPSCharacterBase_GetFirstItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_GetFirstItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSCharacterBase_GetFirstItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_GetFirstItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSCharacterBase_GetFirstItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSCharacterBase_GetFirstItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSCharacterBase_GetFirstPersonMesh_Statics
	{
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
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacterBase_GetFirstPersonMesh_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFPSCharacterBase_GetFirstPersonMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSCharacterBase_eventGetFirstPersonMesh_Parms, ReturnValue), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFPSCharacterBase_GetFirstPersonMesh_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_GetFirstPersonMesh_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSCharacterBase_GetFirstPersonMesh_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacterBase_GetFirstPersonMesh_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacterBase_GetFirstPersonMesh_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacterBase_GetFirstPersonMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacterBase, nullptr, "GetFirstPersonMesh", nullptr, nullptr, sizeof(FPSCharacterBase_eventGetFirstPersonMesh_Parms), Z_Construct_UFunction_AFPSCharacterBase_GetFirstPersonMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_GetFirstPersonMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x1C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSCharacterBase_GetFirstPersonMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_GetFirstPersonMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSCharacterBase_GetFirstPersonMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSCharacterBase_GetFirstPersonMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSCharacterBase_GetForcedBracedAim_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFPSCharacterBase_GetForcedBracedAim_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FPSCharacterBase_eventGetForcedBracedAim_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFPSCharacterBase_GetForcedBracedAim_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPSCharacterBase_eventGetForcedBracedAim_Parms), &Z_Construct_UFunction_AFPSCharacterBase_GetForcedBracedAim_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSCharacterBase_GetForcedBracedAim_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacterBase_GetForcedBracedAim_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacterBase_GetForcedBracedAim_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacterBase_GetForcedBracedAim_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacterBase, nullptr, "GetForcedBracedAim", nullptr, nullptr, sizeof(FPSCharacterBase_eventGetForcedBracedAim_Parms), Z_Construct_UFunction_AFPSCharacterBase_GetForcedBracedAim_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_GetForcedBracedAim_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x1C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSCharacterBase_GetForcedBracedAim_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_GetForcedBracedAim_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSCharacterBase_GetForcedBracedAim()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSCharacterBase_GetForcedBracedAim_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSCharacterBase_GetFPSCharacterMovement_Statics
	{
		struct FPSCharacterBase_eventGetFPSCharacterMovement_Parms
		{
			UFPSCharacterMovementComponent* ReturnValue;
		};
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
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacterBase_GetFPSCharacterMovement_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFPSCharacterBase_GetFPSCharacterMovement_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSCharacterBase_eventGetFPSCharacterMovement_Parms, ReturnValue), Z_Construct_UClass_UFPSCharacterMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFPSCharacterBase_GetFPSCharacterMovement_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_GetFPSCharacterMovement_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSCharacterBase_GetFPSCharacterMovement_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacterBase_GetFPSCharacterMovement_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacterBase_GetFPSCharacterMovement_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacterBase_GetFPSCharacterMovement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacterBase, nullptr, "GetFPSCharacterMovement", nullptr, nullptr, sizeof(FPSCharacterBase_eventGetFPSCharacterMovement_Parms), Z_Construct_UFunction_AFPSCharacterBase_GetFPSCharacterMovement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_GetFPSCharacterMovement_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSCharacterBase_GetFPSCharacterMovement_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_GetFPSCharacterMovement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSCharacterBase_GetFPSCharacterMovement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSCharacterBase_GetFPSCharacterMovement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSCharacterBase_GetInspecting_Statics
	{
		struct FPSCharacterBase_eventGetInspecting_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFPSCharacterBase_GetInspecting_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FPSCharacterBase_eventGetInspecting_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFPSCharacterBase_GetInspecting_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPSCharacterBase_eventGetInspecting_Parms), &Z_Construct_UFunction_AFPSCharacterBase_GetInspecting_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSCharacterBase_GetInspecting_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacterBase_GetInspecting_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacterBase_GetInspecting_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacterBase_GetInspecting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacterBase, nullptr, "GetInspecting", nullptr, nullptr, sizeof(FPSCharacterBase_eventGetInspecting_Parms), Z_Construct_UFunction_AFPSCharacterBase_GetInspecting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_GetInspecting_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSCharacterBase_GetInspecting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_GetInspecting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSCharacterBase_GetInspecting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSCharacterBase_GetInspecting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSCharacterBase_GetKicking_Statics
	{
		struct FPSCharacterBase_eventGetKicking_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFPSCharacterBase_GetKicking_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FPSCharacterBase_eventGetKicking_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFPSCharacterBase_GetKicking_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPSCharacterBase_eventGetKicking_Parms), &Z_Construct_UFunction_AFPSCharacterBase_GetKicking_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSCharacterBase_GetKicking_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacterBase_GetKicking_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacterBase_GetKicking_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacterBase_GetKicking_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacterBase, nullptr, "GetKicking", nullptr, nullptr, sizeof(FPSCharacterBase_eventGetKicking_Parms), Z_Construct_UFunction_AFPSCharacterBase_GetKicking_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_GetKicking_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSCharacterBase_GetKicking_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_GetKicking_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSCharacterBase_GetKicking()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSCharacterBase_GetKicking_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSCharacterBase_GetLeaning_Statics
	{
		struct FPSCharacterBase_eventGetLeaning_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFPSCharacterBase_GetLeaning_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FPSCharacterBase_eventGetLeaning_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFPSCharacterBase_GetLeaning_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPSCharacterBase_eventGetLeaning_Parms), &Z_Construct_UFunction_AFPSCharacterBase_GetLeaning_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSCharacterBase_GetLeaning_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacterBase_GetLeaning_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacterBase_GetLeaning_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacterBase_GetLeaning_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacterBase, nullptr, "GetLeaning", nullptr, nullptr, sizeof(FPSCharacterBase_eventGetLeaning_Parms), Z_Construct_UFunction_AFPSCharacterBase_GetLeaning_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_GetLeaning_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSCharacterBase_GetLeaning_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_GetLeaning_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSCharacterBase_GetLeaning()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSCharacterBase_GetLeaning_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSCharacterBase_GetLeaningLeft_Statics
	{
		struct FPSCharacterBase_eventGetLeaningLeft_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFPSCharacterBase_GetLeaningLeft_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FPSCharacterBase_eventGetLeaningLeft_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFPSCharacterBase_GetLeaningLeft_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPSCharacterBase_eventGetLeaningLeft_Parms), &Z_Construct_UFunction_AFPSCharacterBase_GetLeaningLeft_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSCharacterBase_GetLeaningLeft_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacterBase_GetLeaningLeft_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacterBase_GetLeaningLeft_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacterBase_GetLeaningLeft_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacterBase, nullptr, "GetLeaningLeft", nullptr, nullptr, sizeof(FPSCharacterBase_eventGetLeaningLeft_Parms), Z_Construct_UFunction_AFPSCharacterBase_GetLeaningLeft_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_GetLeaningLeft_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSCharacterBase_GetLeaningLeft_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_GetLeaningLeft_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSCharacterBase_GetLeaningLeft()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSCharacterBase_GetLeaningLeft_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSCharacterBase_GetLeaningRight_Statics
	{
		struct FPSCharacterBase_eventGetLeaningRight_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFPSCharacterBase_GetLeaningRight_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FPSCharacterBase_eventGetLeaningRight_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFPSCharacterBase_GetLeaningRight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPSCharacterBase_eventGetLeaningRight_Parms), &Z_Construct_UFunction_AFPSCharacterBase_GetLeaningRight_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSCharacterBase_GetLeaningRight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacterBase_GetLeaningRight_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacterBase_GetLeaningRight_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacterBase_GetLeaningRight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacterBase, nullptr, "GetLeaningRight", nullptr, nullptr, sizeof(FPSCharacterBase_eventGetLeaningRight_Parms), Z_Construct_UFunction_AFPSCharacterBase_GetLeaningRight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_GetLeaningRight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSCharacterBase_GetLeaningRight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_GetLeaningRight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSCharacterBase_GetLeaningRight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSCharacterBase_GetLeaningRight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSCharacterBase_GetLoadout_Statics
	{
		struct FPSCharacterBase_eventGetLoadout_Parms
		{
			FFPSLoadout ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFPSCharacterBase_GetLoadout_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSCharacterBase_eventGetLoadout_Parms, ReturnValue), Z_Construct_UScriptStruct_FFPSLoadout, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSCharacterBase_GetLoadout_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacterBase_GetLoadout_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacterBase_GetLoadout_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacterBase_GetLoadout_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacterBase, nullptr, "GetLoadout", nullptr, nullptr, sizeof(FPSCharacterBase_eventGetLoadout_Parms), Z_Construct_UFunction_AFPSCharacterBase_GetLoadout_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_GetLoadout_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSCharacterBase_GetLoadout_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_GetLoadout_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSCharacterBase_GetLoadout()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSCharacterBase_GetLoadout_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSCharacterBase_GetLowReady_Statics
	{
		struct FPSCharacterBase_eventGetLowReady_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFPSCharacterBase_GetLowReady_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FPSCharacterBase_eventGetLowReady_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFPSCharacterBase_GetLowReady_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPSCharacterBase_eventGetLowReady_Parms), &Z_Construct_UFunction_AFPSCharacterBase_GetLowReady_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSCharacterBase_GetLowReady_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacterBase_GetLowReady_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacterBase_GetLowReady_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacterBase_GetLowReady_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacterBase, nullptr, "GetLowReady", nullptr, nullptr, sizeof(FPSCharacterBase_eventGetLowReady_Parms), Z_Construct_UFunction_AFPSCharacterBase_GetLowReady_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_GetLowReady_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSCharacterBase_GetLowReady_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_GetLowReady_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSCharacterBase_GetLowReady()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSCharacterBase_GetLowReady_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSCharacterBase_GetMagazineData_Statics
	{
		struct FPSCharacterBase_eventGetMagazineData_Parms
		{
			FPrimaryAssetId AssetID;
			int32 Index;
			FMagazineData ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AssetID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFPSCharacterBase_GetMagazineData_Statics::NewProp_AssetID = { "AssetID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSCharacterBase_eventGetMagazineData_Parms, AssetID), Z_Construct_UScriptStruct_FPrimaryAssetId, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFPSCharacterBase_GetMagazineData_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSCharacterBase_eventGetMagazineData_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFPSCharacterBase_GetMagazineData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSCharacterBase_eventGetMagazineData_Parms, ReturnValue), Z_Construct_UScriptStruct_FMagazineData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSCharacterBase_GetMagazineData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacterBase_GetMagazineData_Statics::NewProp_AssetID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacterBase_GetMagazineData_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacterBase_GetMagazineData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacterBase_GetMagazineData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacterBase_GetMagazineData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacterBase, nullptr, "GetMagazineData", nullptr, nullptr, sizeof(FPSCharacterBase_eventGetMagazineData_Parms), Z_Construct_UFunction_AFPSCharacterBase_GetMagazineData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_GetMagazineData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSCharacterBase_GetMagazineData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_GetMagazineData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSCharacterBase_GetMagazineData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSCharacterBase_GetMagazineData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSCharacterBase_GetMaxReserveMagazines_Statics
	{
		struct FPSCharacterBase_eventGetMaxReserveMagazines_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFPSCharacterBase_GetMaxReserveMagazines_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSCharacterBase_eventGetMaxReserveMagazines_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSCharacterBase_GetMaxReserveMagazines_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacterBase_GetMaxReserveMagazines_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacterBase_GetMaxReserveMagazines_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacterBase_GetMaxReserveMagazines_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacterBase, nullptr, "GetMaxReserveMagazines", nullptr, nullptr, sizeof(FPSCharacterBase_eventGetMaxReserveMagazines_Parms), Z_Construct_UFunction_AFPSCharacterBase_GetMaxReserveMagazines_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_GetMaxReserveMagazines_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSCharacterBase_GetMaxReserveMagazines_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_GetMaxReserveMagazines_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSCharacterBase_GetMaxReserveMagazines()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSCharacterBase_GetMaxReserveMagazines_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSCharacterBase_GetMeleeBasePoseLeft_Statics
	{
		struct FPSCharacterBase_eventGetMeleeBasePoseLeft_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFPSCharacterBase_GetMeleeBasePoseLeft_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FPSCharacterBase_eventGetMeleeBasePoseLeft_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFPSCharacterBase_GetMeleeBasePoseLeft_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPSCharacterBase_eventGetMeleeBasePoseLeft_Parms), &Z_Construct_UFunction_AFPSCharacterBase_GetMeleeBasePoseLeft_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSCharacterBase_GetMeleeBasePoseLeft_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacterBase_GetMeleeBasePoseLeft_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacterBase_GetMeleeBasePoseLeft_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacterBase_GetMeleeBasePoseLeft_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacterBase, nullptr, "GetMeleeBasePoseLeft", nullptr, nullptr, sizeof(FPSCharacterBase_eventGetMeleeBasePoseLeft_Parms), Z_Construct_UFunction_AFPSCharacterBase_GetMeleeBasePoseLeft_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_GetMeleeBasePoseLeft_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSCharacterBase_GetMeleeBasePoseLeft_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_GetMeleeBasePoseLeft_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSCharacterBase_GetMeleeBasePoseLeft()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSCharacterBase_GetMeleeBasePoseLeft_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSCharacterBase_GetMeleeReadyLeft_Statics
	{
		struct FPSCharacterBase_eventGetMeleeReadyLeft_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFPSCharacterBase_GetMeleeReadyLeft_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FPSCharacterBase_eventGetMeleeReadyLeft_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFPSCharacterBase_GetMeleeReadyLeft_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPSCharacterBase_eventGetMeleeReadyLeft_Parms), &Z_Construct_UFunction_AFPSCharacterBase_GetMeleeReadyLeft_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSCharacterBase_GetMeleeReadyLeft_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacterBase_GetMeleeReadyLeft_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacterBase_GetMeleeReadyLeft_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacterBase_GetMeleeReadyLeft_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacterBase, nullptr, "GetMeleeReadyLeft", nullptr, nullptr, sizeof(FPSCharacterBase_eventGetMeleeReadyLeft_Parms), Z_Construct_UFunction_AFPSCharacterBase_GetMeleeReadyLeft_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_GetMeleeReadyLeft_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSCharacterBase_GetMeleeReadyLeft_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_GetMeleeReadyLeft_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSCharacterBase_GetMeleeReadyLeft()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSCharacterBase_GetMeleeReadyLeft_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSCharacterBase_GetMeleeReadyRight_Statics
	{
		struct FPSCharacterBase_eventGetMeleeReadyRight_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFPSCharacterBase_GetMeleeReadyRight_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FPSCharacterBase_eventGetMeleeReadyRight_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFPSCharacterBase_GetMeleeReadyRight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPSCharacterBase_eventGetMeleeReadyRight_Parms), &Z_Construct_UFunction_AFPSCharacterBase_GetMeleeReadyRight_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSCharacterBase_GetMeleeReadyRight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacterBase_GetMeleeReadyRight_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacterBase_GetMeleeReadyRight_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacterBase_GetMeleeReadyRight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacterBase, nullptr, "GetMeleeReadyRight", nullptr, nullptr, sizeof(FPSCharacterBase_eventGetMeleeReadyRight_Parms), Z_Construct_UFunction_AFPSCharacterBase_GetMeleeReadyRight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_GetMeleeReadyRight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSCharacterBase_GetMeleeReadyRight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_GetMeleeReadyRight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSCharacterBase_GetMeleeReadyRight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSCharacterBase_GetMeleeReadyRight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSCharacterBase_GetMounted_Statics
	{
		struct FPSCharacterBase_eventGetMounted_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFPSCharacterBase_GetMounted_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FPSCharacterBase_eventGetMounted_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFPSCharacterBase_GetMounted_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPSCharacterBase_eventGetMounted_Parms), &Z_Construct_UFunction_AFPSCharacterBase_GetMounted_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSCharacterBase_GetMounted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacterBase_GetMounted_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacterBase_GetMounted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacterBase_GetMounted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacterBase, nullptr, "GetMounted", nullptr, nullptr, sizeof(FPSCharacterBase_eventGetMounted_Parms), Z_Construct_UFunction_AFPSCharacterBase_GetMounted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_GetMounted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSCharacterBase_GetMounted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_GetMounted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSCharacterBase_GetMounted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSCharacterBase_GetMounted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSCharacterBase_GetMovementSpeedMultiplierForItem_Statics
	{
		struct FPSCharacterBase_eventGetMovementSpeedMultiplierForItem_Parms
		{
			int32 Slot;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Slot;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFPSCharacterBase_GetMovementSpeedMultiplierForItem_Statics::NewProp_Slot = { "Slot", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSCharacterBase_eventGetMovementSpeedMultiplierForItem_Parms, Slot), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFPSCharacterBase_GetMovementSpeedMultiplierForItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSCharacterBase_eventGetMovementSpeedMultiplierForItem_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSCharacterBase_GetMovementSpeedMultiplierForItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacterBase_GetMovementSpeedMultiplierForItem_Statics::NewProp_Slot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacterBase_GetMovementSpeedMultiplierForItem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacterBase_GetMovementSpeedMultiplierForItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacterBase_GetMovementSpeedMultiplierForItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacterBase, nullptr, "GetMovementSpeedMultiplierForItem", nullptr, nullptr, sizeof(FPSCharacterBase_eventGetMovementSpeedMultiplierForItem_Parms), Z_Construct_UFunction_AFPSCharacterBase_GetMovementSpeedMultiplierForItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_GetMovementSpeedMultiplierForItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSCharacterBase_GetMovementSpeedMultiplierForItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_GetMovementSpeedMultiplierForItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSCharacterBase_GetMovementSpeedMultiplierForItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSCharacterBase_GetMovementSpeedMultiplierForItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSCharacterBase_GetProne_Statics
	{
		struct FPSCharacterBase_eventGetProne_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFPSCharacterBase_GetProne_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FPSCharacterBase_eventGetProne_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFPSCharacterBase_GetProne_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPSCharacterBase_eventGetProne_Parms), &Z_Construct_UFunction_AFPSCharacterBase_GetProne_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSCharacterBase_GetProne_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacterBase_GetProne_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacterBase_GetProne_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacterBase_GetProne_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacterBase, nullptr, "GetProne", nullptr, nullptr, sizeof(FPSCharacterBase_eventGetProne_Parms), Z_Construct_UFunction_AFPSCharacterBase_GetProne_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_GetProne_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSCharacterBase_GetProne_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_GetProne_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSCharacterBase_GetProne()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSCharacterBase_GetProne_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSCharacterBase_GetReloading_Statics
	{
		struct FPSCharacterBase_eventGetReloading_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFPSCharacterBase_GetReloading_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FPSCharacterBase_eventGetReloading_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFPSCharacterBase_GetReloading_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPSCharacterBase_eventGetReloading_Parms), &Z_Construct_UFunction_AFPSCharacterBase_GetReloading_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSCharacterBase_GetReloading_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacterBase_GetReloading_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacterBase_GetReloading_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacterBase_GetReloading_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacterBase, nullptr, "GetReloading", nullptr, nullptr, sizeof(FPSCharacterBase_eventGetReloading_Parms), Z_Construct_UFunction_AFPSCharacterBase_GetReloading_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_GetReloading_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSCharacterBase_GetReloading_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_GetReloading_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSCharacterBase_GetReloading()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSCharacterBase_GetReloading_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSCharacterBase_GetSpringArm_Statics
	{
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
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacterBase_GetSpringArm_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFPSCharacterBase_GetSpringArm_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSCharacterBase_eventGetSpringArm_Parms, ReturnValue), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFPSCharacterBase_GetSpringArm_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_GetSpringArm_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSCharacterBase_GetSpringArm_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacterBase_GetSpringArm_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacterBase_GetSpringArm_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacterBase_GetSpringArm_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacterBase, nullptr, "GetSpringArm", nullptr, nullptr, sizeof(FPSCharacterBase_eventGetSpringArm_Parms), Z_Construct_UFunction_AFPSCharacterBase_GetSpringArm_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_GetSpringArm_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x1C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSCharacterBase_GetSpringArm_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_GetSpringArm_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSCharacterBase_GetSpringArm()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSCharacterBase_GetSpringArm_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSCharacterBase_GetSprinting_Statics
	{
		struct FPSCharacterBase_eventGetSprinting_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFPSCharacterBase_GetSprinting_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FPSCharacterBase_eventGetSprinting_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFPSCharacterBase_GetSprinting_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPSCharacterBase_eventGetSprinting_Parms), &Z_Construct_UFunction_AFPSCharacterBase_GetSprinting_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSCharacterBase_GetSprinting_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacterBase_GetSprinting_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacterBase_GetSprinting_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacterBase_GetSprinting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacterBase, nullptr, "GetSprinting", nullptr, nullptr, sizeof(FPSCharacterBase_eventGetSprinting_Parms), Z_Construct_UFunction_AFPSCharacterBase_GetSprinting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_GetSprinting_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSCharacterBase_GetSprinting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_GetSprinting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSCharacterBase_GetSprinting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSCharacterBase_GetSprinting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSCharacterBase_GetState_Statics
	{
		struct FPSCharacterBase_eventGetState_Parms
		{
			TEnumAsByte<EFPSCharacterState> Mask;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Mask;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AFPSCharacterBase_GetState_Statics::NewProp_Mask = { "Mask", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSCharacterBase_eventGetState_Parms, Mask), Z_Construct_UEnum_FPSController_EFPSCharacterState, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AFPSCharacterBase_GetState_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FPSCharacterBase_eventGetState_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFPSCharacterBase_GetState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPSCharacterBase_eventGetState_Parms), &Z_Construct_UFunction_AFPSCharacterBase_GetState_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSCharacterBase_GetState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacterBase_GetState_Statics::NewProp_Mask,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacterBase_GetState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacterBase_GetState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacterBase_GetState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacterBase, nullptr, "GetState", nullptr, nullptr, sizeof(FPSCharacterBase_eventGetState_Parms), Z_Construct_UFunction_AFPSCharacterBase_GetState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_GetState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSCharacterBase_GetState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_GetState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSCharacterBase_GetState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSCharacterBase_GetState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSCharacterBase_GetSuppression_Statics
	{
		struct FPSCharacterBase_eventGetSuppression_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFPSCharacterBase_GetSuppression_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSCharacterBase_eventGetSuppression_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSCharacterBase_GetSuppression_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacterBase_GetSuppression_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacterBase_GetSuppression_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacterBase_GetSuppression_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacterBase, nullptr, "GetSuppression", nullptr, nullptr, sizeof(FPSCharacterBase_eventGetSuppression_Parms), Z_Construct_UFunction_AFPSCharacterBase_GetSuppression_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_GetSuppression_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSCharacterBase_GetSuppression_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_GetSuppression_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSCharacterBase_GetSuppression()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSCharacterBase_GetSuppression_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSCharacterBase_GetThirdPersonMesh_Statics
	{
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
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacterBase_GetThirdPersonMesh_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFPSCharacterBase_GetThirdPersonMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSCharacterBase_eventGetThirdPersonMesh_Parms, ReturnValue), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFPSCharacterBase_GetThirdPersonMesh_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_GetThirdPersonMesh_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSCharacterBase_GetThirdPersonMesh_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacterBase_GetThirdPersonMesh_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacterBase_GetThirdPersonMesh_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacterBase_GetThirdPersonMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacterBase, nullptr, "GetThirdPersonMesh", nullptr, nullptr, sizeof(FPSCharacterBase_eventGetThirdPersonMesh_Parms), Z_Construct_UFunction_AFPSCharacterBase_GetThirdPersonMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_GetThirdPersonMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x1C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSCharacterBase_GetThirdPersonMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_GetThirdPersonMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSCharacterBase_GetThirdPersonMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSCharacterBase_GetThirdPersonMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSCharacterBase_GetTotalAmmoPercentage_Statics
	{
		struct FPSCharacterBase_eventGetTotalAmmoPercentage_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFPSCharacterBase_GetTotalAmmoPercentage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSCharacterBase_eventGetTotalAmmoPercentage_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSCharacterBase_GetTotalAmmoPercentage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacterBase_GetTotalAmmoPercentage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacterBase_GetTotalAmmoPercentage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacterBase_GetTotalAmmoPercentage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacterBase, nullptr, "GetTotalAmmoPercentage", nullptr, nullptr, sizeof(FPSCharacterBase_eventGetTotalAmmoPercentage_Parms), Z_Construct_UFunction_AFPSCharacterBase_GetTotalAmmoPercentage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_GetTotalAmmoPercentage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSCharacterBase_GetTotalAmmoPercentage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_GetTotalAmmoPercentage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSCharacterBase_GetTotalAmmoPercentage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSCharacterBase_GetTotalAmmoPercentage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSCharacterBase_GetTotalReserveMagazines_Statics
	{
		struct FPSCharacterBase_eventGetTotalReserveMagazines_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFPSCharacterBase_GetTotalReserveMagazines_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSCharacterBase_eventGetTotalReserveMagazines_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSCharacterBase_GetTotalReserveMagazines_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacterBase_GetTotalReserveMagazines_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacterBase_GetTotalReserveMagazines_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacterBase_GetTotalReserveMagazines_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacterBase, nullptr, "GetTotalReserveMagazines", nullptr, nullptr, sizeof(FPSCharacterBase_eventGetTotalReserveMagazines_Parms), Z_Construct_UFunction_AFPSCharacterBase_GetTotalReserveMagazines_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_GetTotalReserveMagazines_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSCharacterBase_GetTotalReserveMagazines_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_GetTotalReserveMagazines_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSCharacterBase_GetTotalReserveMagazines()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSCharacterBase_GetTotalReserveMagazines_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSCharacterBase_GetUsingMelee_Statics
	{
		struct FPSCharacterBase_eventGetUsingMelee_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFPSCharacterBase_GetUsingMelee_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FPSCharacterBase_eventGetUsingMelee_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFPSCharacterBase_GetUsingMelee_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPSCharacterBase_eventGetUsingMelee_Parms), &Z_Construct_UFunction_AFPSCharacterBase_GetUsingMelee_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSCharacterBase_GetUsingMelee_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacterBase_GetUsingMelee_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacterBase_GetUsingMelee_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacterBase_GetUsingMelee_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacterBase, nullptr, "GetUsingMelee", nullptr, nullptr, sizeof(FPSCharacterBase_eventGetUsingMelee_Parms), Z_Construct_UFunction_AFPSCharacterBase_GetUsingMelee_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_GetUsingMelee_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSCharacterBase_GetUsingMelee_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_GetUsingMelee_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSCharacterBase_GetUsingMelee()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSCharacterBase_GetUsingMelee_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSCharacterBase_GetUsingNightVision_Statics
	{
		struct FPSCharacterBase_eventGetUsingNightVision_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFPSCharacterBase_GetUsingNightVision_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FPSCharacterBase_eventGetUsingNightVision_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFPSCharacterBase_GetUsingNightVision_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPSCharacterBase_eventGetUsingNightVision_Parms), &Z_Construct_UFunction_AFPSCharacterBase_GetUsingNightVision_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSCharacterBase_GetUsingNightVision_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacterBase_GetUsingNightVision_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacterBase_GetUsingNightVision_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacterBase_GetUsingNightVision_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacterBase, nullptr, "GetUsingNightVision", nullptr, nullptr, sizeof(FPSCharacterBase_eventGetUsingNightVision_Parms), Z_Construct_UFunction_AFPSCharacterBase_GetUsingNightVision_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_GetUsingNightVision_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSCharacterBase_GetUsingNightVision_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_GetUsingNightVision_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSCharacterBase_GetUsingNightVision()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSCharacterBase_GetUsingNightVision_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSCharacterBase_GetWantsAiming_Statics
	{
		struct FPSCharacterBase_eventGetWantsAiming_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFPSCharacterBase_GetWantsAiming_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FPSCharacterBase_eventGetWantsAiming_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFPSCharacterBase_GetWantsAiming_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPSCharacterBase_eventGetWantsAiming_Parms), &Z_Construct_UFunction_AFPSCharacterBase_GetWantsAiming_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSCharacterBase_GetWantsAiming_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacterBase_GetWantsAiming_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacterBase_GetWantsAiming_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacterBase_GetWantsAiming_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacterBase, nullptr, "GetWantsAiming", nullptr, nullptr, sizeof(FPSCharacterBase_eventGetWantsAiming_Parms), Z_Construct_UFunction_AFPSCharacterBase_GetWantsAiming_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_GetWantsAiming_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSCharacterBase_GetWantsAiming_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_GetWantsAiming_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSCharacterBase_GetWantsAiming()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSCharacterBase_GetWantsAiming_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSCharacterBase_GetWantsBracedAiming_Statics
	{
		struct FPSCharacterBase_eventGetWantsBracedAiming_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFPSCharacterBase_GetWantsBracedAiming_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FPSCharacterBase_eventGetWantsBracedAiming_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFPSCharacterBase_GetWantsBracedAiming_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPSCharacterBase_eventGetWantsBracedAiming_Parms), &Z_Construct_UFunction_AFPSCharacterBase_GetWantsBracedAiming_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSCharacterBase_GetWantsBracedAiming_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacterBase_GetWantsBracedAiming_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacterBase_GetWantsBracedAiming_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacterBase_GetWantsBracedAiming_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacterBase, nullptr, "GetWantsBracedAiming", nullptr, nullptr, sizeof(FPSCharacterBase_eventGetWantsBracedAiming_Parms), Z_Construct_UFunction_AFPSCharacterBase_GetWantsBracedAiming_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_GetWantsBracedAiming_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSCharacterBase_GetWantsBracedAiming_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_GetWantsBracedAiming_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSCharacterBase_GetWantsBracedAiming()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSCharacterBase_GetWantsBracedAiming_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSCharacterBase_HasEquippedItem_Statics
	{
		struct FPSCharacterBase_eventHasEquippedItem_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFPSCharacterBase_HasEquippedItem_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FPSCharacterBase_eventHasEquippedItem_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFPSCharacterBase_HasEquippedItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPSCharacterBase_eventHasEquippedItem_Parms), &Z_Construct_UFunction_AFPSCharacterBase_HasEquippedItem_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSCharacterBase_HasEquippedItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacterBase_HasEquippedItem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacterBase_HasEquippedItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacterBase_HasEquippedItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacterBase, nullptr, "HasEquippedItem", nullptr, nullptr, sizeof(FPSCharacterBase_eventHasEquippedItem_Parms), Z_Construct_UFunction_AFPSCharacterBase_HasEquippedItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_HasEquippedItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSCharacterBase_HasEquippedItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_HasEquippedItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSCharacterBase_HasEquippedItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSCharacterBase_HasEquippedItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSCharacterBase_IsFirstPerson_Statics
	{
		struct FPSCharacterBase_eventIsFirstPerson_Parms
		{
			bool bCheckLocal;
			bool ReturnValue;
		};
		static void NewProp_bCheckLocal_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCheckLocal;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFPSCharacterBase_IsFirstPerson_Statics::NewProp_bCheckLocal_SetBit(void* Obj)
	{
		((FPSCharacterBase_eventIsFirstPerson_Parms*)Obj)->bCheckLocal = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFPSCharacterBase_IsFirstPerson_Statics::NewProp_bCheckLocal = { "bCheckLocal", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPSCharacterBase_eventIsFirstPerson_Parms), &Z_Construct_UFunction_AFPSCharacterBase_IsFirstPerson_Statics::NewProp_bCheckLocal_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AFPSCharacterBase_IsFirstPerson_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FPSCharacterBase_eventIsFirstPerson_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFPSCharacterBase_IsFirstPerson_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPSCharacterBase_eventIsFirstPerson_Parms), &Z_Construct_UFunction_AFPSCharacterBase_IsFirstPerson_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSCharacterBase_IsFirstPerson_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacterBase_IsFirstPerson_Statics::NewProp_bCheckLocal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacterBase_IsFirstPerson_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacterBase_IsFirstPerson_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacterBase_IsFirstPerson_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacterBase, nullptr, "IsFirstPerson", nullptr, nullptr, sizeof(FPSCharacterBase_eventIsFirstPerson_Parms), Z_Construct_UFunction_AFPSCharacterBase_IsFirstPerson_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_IsFirstPerson_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSCharacterBase_IsFirstPerson_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_IsFirstPerson_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSCharacterBase_IsFirstPerson()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSCharacterBase_IsFirstPerson_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSCharacterBase_IsReserveAmmoFull_Statics
	{
		struct FPSCharacterBase_eventIsReserveAmmoFull_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFPSCharacterBase_IsReserveAmmoFull_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FPSCharacterBase_eventIsReserveAmmoFull_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFPSCharacterBase_IsReserveAmmoFull_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPSCharacterBase_eventIsReserveAmmoFull_Parms), &Z_Construct_UFunction_AFPSCharacterBase_IsReserveAmmoFull_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSCharacterBase_IsReserveAmmoFull_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacterBase_IsReserveAmmoFull_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacterBase_IsReserveAmmoFull_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacterBase_IsReserveAmmoFull_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacterBase, nullptr, "IsReserveAmmoFull", nullptr, nullptr, sizeof(FPSCharacterBase_eventIsReserveAmmoFull_Parms), Z_Construct_UFunction_AFPSCharacterBase_IsReserveAmmoFull_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_IsReserveAmmoFull_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSCharacterBase_IsReserveAmmoFull_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_IsReserveAmmoFull_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSCharacterBase_IsReserveAmmoFull()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSCharacterBase_IsReserveAmmoFull_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSCharacterBase_OnItemDataLoaded_Statics
	{
		struct FPSCharacterBase_eventOnItemDataLoaded_Parms
		{
			AFPSItem* Item;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Item;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFPSCharacterBase_OnItemDataLoaded_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSCharacterBase_eventOnItemDataLoaded_Parms, Item), Z_Construct_UClass_AFPSItem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSCharacterBase_OnItemDataLoaded_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacterBase_OnItemDataLoaded_Statics::NewProp_Item,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacterBase_OnItemDataLoaded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacterBase_OnItemDataLoaded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacterBase, nullptr, "OnItemDataLoaded", nullptr, nullptr, sizeof(FPSCharacterBase_eventOnItemDataLoaded_Parms), Z_Construct_UFunction_AFPSCharacterBase_OnItemDataLoaded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_OnItemDataLoaded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSCharacterBase_OnItemDataLoaded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_OnItemDataLoaded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSCharacterBase_OnItemDataLoaded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSCharacterBase_OnItemDataLoaded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSCharacterBase_OnRep_Abilities_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacterBase_OnRep_Abilities_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacterBase_OnRep_Abilities_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacterBase, nullptr, "OnRep_Abilities", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSCharacterBase_OnRep_Abilities_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_OnRep_Abilities_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSCharacterBase_OnRep_Abilities()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSCharacterBase_OnRep_Abilities_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSCharacterBase_OnRep_AssetIDsToLoad_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacterBase_OnRep_AssetIDsToLoad_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacterBase_OnRep_AssetIDsToLoad_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacterBase, nullptr, "OnRep_AssetIDsToLoad", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSCharacterBase_OnRep_AssetIDsToLoad_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_OnRep_AssetIDsToLoad_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSCharacterBase_OnRep_AssetIDsToLoad()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSCharacterBase_OnRep_AssetIDsToLoad_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSCharacterBase_OnRep_CurrentHealth_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacterBase_OnRep_CurrentHealth_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacterBase_OnRep_CurrentHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacterBase, nullptr, "OnRep_CurrentHealth", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSCharacterBase_OnRep_CurrentHealth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_OnRep_CurrentHealth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSCharacterBase_OnRep_CurrentHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSCharacterBase_OnRep_CurrentHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSCharacterBase_OnRep_EquippedItem_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacterBase_OnRep_EquippedItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacterBase_OnRep_EquippedItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacterBase, nullptr, "OnRep_EquippedItem", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSCharacterBase_OnRep_EquippedItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_OnRep_EquippedItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSCharacterBase_OnRep_EquippedItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSCharacterBase_OnRep_EquippedItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSCharacterBase_OnRep_Hotbar_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacterBase_OnRep_Hotbar_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacterBase_OnRep_Hotbar_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacterBase, nullptr, "OnRep_Hotbar", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSCharacterBase_OnRep_Hotbar_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_OnRep_Hotbar_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSCharacterBase_OnRep_Hotbar()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSCharacterBase_OnRep_Hotbar_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSCharacterBase_OnRep_LastHit_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacterBase_OnRep_LastHit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacterBase_OnRep_LastHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacterBase, nullptr, "OnRep_LastHit", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSCharacterBase_OnRep_LastHit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_OnRep_LastHit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSCharacterBase_OnRep_LastHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSCharacterBase_OnRep_LastHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSCharacterBase_OnRep_Rotation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacterBase_OnRep_Rotation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacterBase_OnRep_Rotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacterBase, nullptr, "OnRep_Rotation", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSCharacterBase_OnRep_Rotation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_OnRep_Rotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSCharacterBase_OnRep_Rotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSCharacterBase_OnRep_Rotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSCharacterBase_OnRep_State_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacterBase_OnRep_State_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacterBase_OnRep_State_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacterBase, nullptr, "OnRep_State", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSCharacterBase_OnRep_State_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_OnRep_State_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSCharacterBase_OnRep_State()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSCharacterBase_OnRep_State_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSCharacterBase_OnRep_Suppression_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacterBase_OnRep_Suppression_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacterBase_OnRep_Suppression_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacterBase, nullptr, "OnRep_Suppression", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSCharacterBase_OnRep_Suppression_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_OnRep_Suppression_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSCharacterBase_OnRep_Suppression()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSCharacterBase_OnRep_Suppression_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSCharacterBase_RemoveItem_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Item;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFPSCharacterBase_RemoveItem_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSCharacterBase_eventRemoveItem_Parms, Item), Z_Construct_UClass_AFPSItem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSCharacterBase_RemoveItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacterBase_RemoveItem_Statics::NewProp_Item,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacterBase_RemoveItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacterBase_RemoveItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacterBase, nullptr, "RemoveItem", nullptr, nullptr, sizeof(FPSCharacterBase_eventRemoveItem_Parms), Z_Construct_UFunction_AFPSCharacterBase_RemoveItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_RemoveItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C04, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSCharacterBase_RemoveItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_RemoveItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSCharacterBase_RemoveItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSCharacterBase_RemoveItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSCharacterBase_RemoveItemAndEquip_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Item;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Slot;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFPSCharacterBase_RemoveItemAndEquip_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSCharacterBase_eventRemoveItemAndEquip_Parms, Item), Z_Construct_UClass_AFPSItem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFPSCharacterBase_RemoveItemAndEquip_Statics::NewProp_Slot = { "Slot", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSCharacterBase_eventRemoveItemAndEquip_Parms, Slot), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSCharacterBase_RemoveItemAndEquip_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacterBase_RemoveItemAndEquip_Statics::NewProp_Item,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacterBase_RemoveItemAndEquip_Statics::NewProp_Slot,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacterBase_RemoveItemAndEquip_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacterBase_RemoveItemAndEquip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacterBase, nullptr, "RemoveItemAndEquip", nullptr, nullptr, sizeof(FPSCharacterBase_eventRemoveItemAndEquip_Parms), Z_Construct_UFunction_AFPSCharacterBase_RemoveItemAndEquip_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_RemoveItemAndEquip_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C04, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSCharacterBase_RemoveItemAndEquip_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_RemoveItemAndEquip_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSCharacterBase_RemoveItemAndEquip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSCharacterBase_RemoveItemAndEquip_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSCharacterBase_ServerSetBracedAim_Statics
	{
		static void NewProp_bBracedAim_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bBracedAim;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFPSCharacterBase_ServerSetBracedAim_Statics::NewProp_bBracedAim_SetBit(void* Obj)
	{
		((FPSCharacterBase_eventServerSetBracedAim_Parms*)Obj)->bBracedAim = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFPSCharacterBase_ServerSetBracedAim_Statics::NewProp_bBracedAim = { "bBracedAim", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPSCharacterBase_eventServerSetBracedAim_Parms), &Z_Construct_UFunction_AFPSCharacterBase_ServerSetBracedAim_Statics::NewProp_bBracedAim_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSCharacterBase_ServerSetBracedAim_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacterBase_ServerSetBracedAim_Statics::NewProp_bBracedAim,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacterBase_ServerSetBracedAim_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacterBase_ServerSetBracedAim_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacterBase, nullptr, "ServerSetBracedAim", nullptr, nullptr, sizeof(FPSCharacterBase_eventServerSetBracedAim_Parms), Z_Construct_UFunction_AFPSCharacterBase_ServerSetBracedAim_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_ServerSetBracedAim_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSCharacterBase_ServerSetBracedAim_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_ServerSetBracedAim_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSCharacterBase_ServerSetBracedAim()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSCharacterBase_ServerSetBracedAim_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSCharacterBase_ServerSwitchItem_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Item;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFPSCharacterBase_ServerSwitchItem_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSCharacterBase_eventServerSwitchItem_Parms, Item), Z_Construct_UClass_AFPSItem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSCharacterBase_ServerSwitchItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacterBase_ServerSwitchItem_Statics::NewProp_Item,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacterBase_ServerSwitchItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacterBase_ServerSwitchItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacterBase, nullptr, "ServerSwitchItem", nullptr, nullptr, sizeof(FPSCharacterBase_eventServerSwitchItem_Parms), Z_Construct_UFunction_AFPSCharacterBase_ServerSwitchItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_ServerSwitchItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSCharacterBase_ServerSwitchItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_ServerSwitchItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSCharacterBase_ServerSwitchItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSCharacterBase_ServerSwitchItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSCharacterBase_SetAbilities_Statics
	{
		struct FPSCharacterBase_eventSetAbilities_Parms
		{
			bool bValue;
			int32 Mask;
		};
		static void NewProp_bValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Mask;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFPSCharacterBase_SetAbilities_Statics::NewProp_bValue_SetBit(void* Obj)
	{
		((FPSCharacterBase_eventSetAbilities_Parms*)Obj)->bValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFPSCharacterBase_SetAbilities_Statics::NewProp_bValue = { "bValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPSCharacterBase_eventSetAbilities_Parms), &Z_Construct_UFunction_AFPSCharacterBase_SetAbilities_Statics::NewProp_bValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFPSCharacterBase_SetAbilities_Statics::NewProp_Mask = { "Mask", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSCharacterBase_eventSetAbilities_Parms, Mask), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSCharacterBase_SetAbilities_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacterBase_SetAbilities_Statics::NewProp_bValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacterBase_SetAbilities_Statics::NewProp_Mask,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacterBase_SetAbilities_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacterBase_SetAbilities_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacterBase, nullptr, "SetAbilities", nullptr, nullptr, sizeof(FPSCharacterBase_eventSetAbilities_Parms), Z_Construct_UFunction_AFPSCharacterBase_SetAbilities_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_SetAbilities_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSCharacterBase_SetAbilities_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_SetAbilities_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSCharacterBase_SetAbilities()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSCharacterBase_SetAbilities_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSCharacterBase_SetAimingVisualsEnabled_Statics
	{
		struct FPSCharacterBase_eventSetAimingVisualsEnabled_Parms
		{
			bool bEnabled;
		};
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFPSCharacterBase_SetAimingVisualsEnabled_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((FPSCharacterBase_eventSetAimingVisualsEnabled_Parms*)Obj)->bEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFPSCharacterBase_SetAimingVisualsEnabled_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPSCharacterBase_eventSetAimingVisualsEnabled_Parms), &Z_Construct_UFunction_AFPSCharacterBase_SetAimingVisualsEnabled_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSCharacterBase_SetAimingVisualsEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacterBase_SetAimingVisualsEnabled_Statics::NewProp_bEnabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacterBase_SetAimingVisualsEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacterBase_SetAimingVisualsEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacterBase, nullptr, "SetAimingVisualsEnabled", nullptr, nullptr, sizeof(FPSCharacterBase_eventSetAimingVisualsEnabled_Parms), Z_Construct_UFunction_AFPSCharacterBase_SetAimingVisualsEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_SetAimingVisualsEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSCharacterBase_SetAimingVisualsEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_SetAimingVisualsEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSCharacterBase_SetAimingVisualsEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSCharacterBase_SetAimingVisualsEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSCharacterBase_SetBracedAim_Statics
	{
		static void NewProp_bBracedAim_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bBracedAim;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFPSCharacterBase_SetBracedAim_Statics::NewProp_bBracedAim_SetBit(void* Obj)
	{
		((FPSCharacterBase_eventSetBracedAim_Parms*)Obj)->bBracedAim = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFPSCharacterBase_SetBracedAim_Statics::NewProp_bBracedAim = { "bBracedAim", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPSCharacterBase_eventSetBracedAim_Parms), &Z_Construct_UFunction_AFPSCharacterBase_SetBracedAim_Statics::NewProp_bBracedAim_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSCharacterBase_SetBracedAim_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacterBase_SetBracedAim_Statics::NewProp_bBracedAim,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacterBase_SetBracedAim_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacterBase_SetBracedAim_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacterBase, nullptr, "SetBracedAim", nullptr, nullptr, sizeof(FPSCharacterBase_eventSetBracedAim_Parms), Z_Construct_UFunction_AFPSCharacterBase_SetBracedAim_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_SetBracedAim_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSCharacterBase_SetBracedAim_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_SetBracedAim_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSCharacterBase_SetBracedAim()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSCharacterBase_SetBracedAim_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSCharacterBase_SetCharacterMovementSpeedMultiplier_Statics
	{
		struct FPSCharacterBase_eventSetCharacterMovementSpeedMultiplier_Parms
		{
			float NewMultiplier;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewMultiplier;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFPSCharacterBase_SetCharacterMovementSpeedMultiplier_Statics::NewProp_NewMultiplier = { "NewMultiplier", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSCharacterBase_eventSetCharacterMovementSpeedMultiplier_Parms, NewMultiplier), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSCharacterBase_SetCharacterMovementSpeedMultiplier_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacterBase_SetCharacterMovementSpeedMultiplier_Statics::NewProp_NewMultiplier,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacterBase_SetCharacterMovementSpeedMultiplier_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacterBase_SetCharacterMovementSpeedMultiplier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacterBase, nullptr, "SetCharacterMovementSpeedMultiplier", nullptr, nullptr, sizeof(FPSCharacterBase_eventSetCharacterMovementSpeedMultiplier_Parms), Z_Construct_UFunction_AFPSCharacterBase_SetCharacterMovementSpeedMultiplier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_SetCharacterMovementSpeedMultiplier_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSCharacterBase_SetCharacterMovementSpeedMultiplier_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_SetCharacterMovementSpeedMultiplier_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSCharacterBase_SetCharacterMovementSpeedMultiplier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSCharacterBase_SetCharacterMovementSpeedMultiplier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSCharacterBase_SetCharacterVisibility_Statics
	{
		struct FPSCharacterBase_eventSetCharacterVisibility_Parms
		{
			bool bShouldBeVisible;
		};
		static void NewProp_bShouldBeVisible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShouldBeVisible;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFPSCharacterBase_SetCharacterVisibility_Statics::NewProp_bShouldBeVisible_SetBit(void* Obj)
	{
		((FPSCharacterBase_eventSetCharacterVisibility_Parms*)Obj)->bShouldBeVisible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFPSCharacterBase_SetCharacterVisibility_Statics::NewProp_bShouldBeVisible = { "bShouldBeVisible", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPSCharacterBase_eventSetCharacterVisibility_Parms), &Z_Construct_UFunction_AFPSCharacterBase_SetCharacterVisibility_Statics::NewProp_bShouldBeVisible_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSCharacterBase_SetCharacterVisibility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacterBase_SetCharacterVisibility_Statics::NewProp_bShouldBeVisible,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacterBase_SetCharacterVisibility_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacterBase_SetCharacterVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacterBase, nullptr, "SetCharacterVisibility", nullptr, nullptr, sizeof(FPSCharacterBase_eventSetCharacterVisibility_Parms), Z_Construct_UFunction_AFPSCharacterBase_SetCharacterVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_SetCharacterVisibility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSCharacterBase_SetCharacterVisibility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_SetCharacterVisibility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSCharacterBase_SetCharacterVisibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSCharacterBase_SetCharacterVisibility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSCharacterBase_SetCurrentHealth_Statics
	{
		struct FPSCharacterBase_eventSetCurrentHealth_Parms
		{
			float NewHealth;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewHealth;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFPSCharacterBase_SetCurrentHealth_Statics::NewProp_NewHealth = { "NewHealth", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSCharacterBase_eventSetCurrentHealth_Parms, NewHealth), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSCharacterBase_SetCurrentHealth_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacterBase_SetCurrentHealth_Statics::NewProp_NewHealth,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacterBase_SetCurrentHealth_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacterBase_SetCurrentHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacterBase, nullptr, "SetCurrentHealth", nullptr, nullptr, sizeof(FPSCharacterBase_eventSetCurrentHealth_Parms), Z_Construct_UFunction_AFPSCharacterBase_SetCurrentHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_SetCurrentHealth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSCharacterBase_SetCurrentHealth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_SetCurrentHealth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSCharacterBase_SetCurrentHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSCharacterBase_SetCurrentHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSCharacterBase_SetEquippedItem_Statics
	{
		struct FPSCharacterBase_eventSetEquippedItem_Parms
		{
			AFPSItem* Item;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Item;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFPSCharacterBase_SetEquippedItem_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSCharacterBase_eventSetEquippedItem_Parms, Item), Z_Construct_UClass_AFPSItem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSCharacterBase_SetEquippedItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacterBase_SetEquippedItem_Statics::NewProp_Item,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacterBase_SetEquippedItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacterBase_SetEquippedItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacterBase, nullptr, "SetEquippedItem", nullptr, nullptr, sizeof(FPSCharacterBase_eventSetEquippedItem_Parms), Z_Construct_UFunction_AFPSCharacterBase_SetEquippedItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_SetEquippedItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSCharacterBase_SetEquippedItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_SetEquippedItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSCharacterBase_SetEquippedItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSCharacterBase_SetEquippedItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSCharacterBase_SetHotbar_Statics
	{
		struct FPSCharacterBase_eventSetHotbar_Parms
		{
			TArray<AFPSItem*> Items;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Items_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Items;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFPSCharacterBase_SetHotbar_Statics::NewProp_Items_Inner = { "Items", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AFPSItem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AFPSCharacterBase_SetHotbar_Statics::NewProp_Items = { "Items", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSCharacterBase_eventSetHotbar_Parms, Items), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSCharacterBase_SetHotbar_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacterBase_SetHotbar_Statics::NewProp_Items_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacterBase_SetHotbar_Statics::NewProp_Items,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacterBase_SetHotbar_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacterBase_SetHotbar_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacterBase, nullptr, "SetHotbar", nullptr, nullptr, sizeof(FPSCharacterBase_eventSetHotbar_Parms), Z_Construct_UFunction_AFPSCharacterBase_SetHotbar_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_SetHotbar_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSCharacterBase_SetHotbar_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_SetHotbar_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSCharacterBase_SetHotbar()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSCharacterBase_SetHotbar_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSCharacterBase_SetLastHit_Statics
	{
		struct FPSCharacterBase_eventSetLastHit_Parms
		{
			FSimpleHitData HitData;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HitData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFPSCharacterBase_SetLastHit_Statics::NewProp_HitData = { "HitData", nullptr, (EPropertyFlags)0x0010008000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSCharacterBase_eventSetLastHit_Parms, HitData), Z_Construct_UScriptStruct_FSimpleHitData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSCharacterBase_SetLastHit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacterBase_SetLastHit_Statics::NewProp_HitData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacterBase_SetLastHit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacterBase_SetLastHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacterBase, nullptr, "SetLastHit", nullptr, nullptr, sizeof(FPSCharacterBase_eventSetLastHit_Parms), Z_Construct_UFunction_AFPSCharacterBase_SetLastHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_SetLastHit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSCharacterBase_SetLastHit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_SetLastHit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSCharacterBase_SetLastHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSCharacterBase_SetLastHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSCharacterBase_SetPerspective_Statics
	{
		static void NewProp_bNewIsFirstPerson_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNewIsFirstPerson;
		static void NewProp_bApplyArmsAnimation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bApplyArmsAnimation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFPSCharacterBase_SetPerspective_Statics::NewProp_bNewIsFirstPerson_SetBit(void* Obj)
	{
		((FPSCharacterBase_eventSetPerspective_Parms*)Obj)->bNewIsFirstPerson = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFPSCharacterBase_SetPerspective_Statics::NewProp_bNewIsFirstPerson = { "bNewIsFirstPerson", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPSCharacterBase_eventSetPerspective_Parms), &Z_Construct_UFunction_AFPSCharacterBase_SetPerspective_Statics::NewProp_bNewIsFirstPerson_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AFPSCharacterBase_SetPerspective_Statics::NewProp_bApplyArmsAnimation_SetBit(void* Obj)
	{
		((FPSCharacterBase_eventSetPerspective_Parms*)Obj)->bApplyArmsAnimation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFPSCharacterBase_SetPerspective_Statics::NewProp_bApplyArmsAnimation = { "bApplyArmsAnimation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPSCharacterBase_eventSetPerspective_Parms), &Z_Construct_UFunction_AFPSCharacterBase_SetPerspective_Statics::NewProp_bApplyArmsAnimation_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSCharacterBase_SetPerspective_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacterBase_SetPerspective_Statics::NewProp_bNewIsFirstPerson,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacterBase_SetPerspective_Statics::NewProp_bApplyArmsAnimation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacterBase_SetPerspective_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacterBase_SetPerspective_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacterBase, nullptr, "SetPerspective", nullptr, nullptr, sizeof(FPSCharacterBase_eventSetPerspective_Parms), Z_Construct_UFunction_AFPSCharacterBase_SetPerspective_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_SetPerspective_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSCharacterBase_SetPerspective_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_SetPerspective_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSCharacterBase_SetPerspective()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSCharacterBase_SetPerspective_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSCharacterBase_SetPostProcessLayerBlendWeight_Statics
	{
		struct FPSCharacterBase_eventSetPostProcessLayerBlendWeight_Parms
		{
			UCameraComponent* Component;
			int32 Index;
			float Weight;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Component;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Weight;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacterBase_SetPostProcessLayerBlendWeight_Statics::NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFPSCharacterBase_SetPostProcessLayerBlendWeight_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSCharacterBase_eventSetPostProcessLayerBlendWeight_Parms, Component), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFPSCharacterBase_SetPostProcessLayerBlendWeight_Statics::NewProp_Component_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_SetPostProcessLayerBlendWeight_Statics::NewProp_Component_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFPSCharacterBase_SetPostProcessLayerBlendWeight_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSCharacterBase_eventSetPostProcessLayerBlendWeight_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFPSCharacterBase_SetPostProcessLayerBlendWeight_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSCharacterBase_eventSetPostProcessLayerBlendWeight_Parms, Weight), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSCharacterBase_SetPostProcessLayerBlendWeight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacterBase_SetPostProcessLayerBlendWeight_Statics::NewProp_Component,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacterBase_SetPostProcessLayerBlendWeight_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacterBase_SetPostProcessLayerBlendWeight_Statics::NewProp_Weight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacterBase_SetPostProcessLayerBlendWeight_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacterBase_SetPostProcessLayerBlendWeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacterBase, nullptr, "SetPostProcessLayerBlendWeight", nullptr, nullptr, sizeof(FPSCharacterBase_eventSetPostProcessLayerBlendWeight_Parms), Z_Construct_UFunction_AFPSCharacterBase_SetPostProcessLayerBlendWeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_SetPostProcessLayerBlendWeight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSCharacterBase_SetPostProcessLayerBlendWeight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_SetPostProcessLayerBlendWeight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSCharacterBase_SetPostProcessLayerBlendWeight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSCharacterBase_SetPostProcessLayerBlendWeight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSCharacterBase_SetRotation_Statics
	{
		struct FPSCharacterBase_eventSetRotation_Parms
		{
			FRotator NewRotation;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewRotation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFPSCharacterBase_SetRotation_Statics::NewProp_NewRotation = { "NewRotation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSCharacterBase_eventSetRotation_Parms, NewRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSCharacterBase_SetRotation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacterBase_SetRotation_Statics::NewProp_NewRotation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacterBase_SetRotation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacterBase_SetRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacterBase, nullptr, "SetRotation", nullptr, nullptr, sizeof(FPSCharacterBase_eventSetRotation_Parms), Z_Construct_UFunction_AFPSCharacterBase_SetRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_SetRotation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04880401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSCharacterBase_SetRotation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_SetRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSCharacterBase_SetRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSCharacterBase_SetRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSCharacterBase_SetState_Statics
	{
		struct FPSCharacterBase_eventSetState_Parms
		{
			bool bValue;
			int32 Mask;
		};
		static void NewProp_bValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Mask;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFPSCharacterBase_SetState_Statics::NewProp_bValue_SetBit(void* Obj)
	{
		((FPSCharacterBase_eventSetState_Parms*)Obj)->bValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFPSCharacterBase_SetState_Statics::NewProp_bValue = { "bValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPSCharacterBase_eventSetState_Parms), &Z_Construct_UFunction_AFPSCharacterBase_SetState_Statics::NewProp_bValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFPSCharacterBase_SetState_Statics::NewProp_Mask = { "Mask", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSCharacterBase_eventSetState_Parms, Mask), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSCharacterBase_SetState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacterBase_SetState_Statics::NewProp_bValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacterBase_SetState_Statics::NewProp_Mask,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacterBase_SetState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacterBase_SetState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacterBase, nullptr, "SetState", nullptr, nullptr, sizeof(FPSCharacterBase_eventSetState_Parms), Z_Construct_UFunction_AFPSCharacterBase_SetState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_SetState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSCharacterBase_SetState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_SetState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSCharacterBase_SetState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSCharacterBase_SetState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSCharacterBase_SetWantsBracedAim_Statics
	{
		struct FPSCharacterBase_eventSetWantsBracedAim_Parms
		{
			bool bWantsBracedAim;
		};
		static void NewProp_bWantsBracedAim_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWantsBracedAim;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFPSCharacterBase_SetWantsBracedAim_Statics::NewProp_bWantsBracedAim_SetBit(void* Obj)
	{
		((FPSCharacterBase_eventSetWantsBracedAim_Parms*)Obj)->bWantsBracedAim = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFPSCharacterBase_SetWantsBracedAim_Statics::NewProp_bWantsBracedAim = { "bWantsBracedAim", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPSCharacterBase_eventSetWantsBracedAim_Parms), &Z_Construct_UFunction_AFPSCharacterBase_SetWantsBracedAim_Statics::NewProp_bWantsBracedAim_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSCharacterBase_SetWantsBracedAim_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacterBase_SetWantsBracedAim_Statics::NewProp_bWantsBracedAim,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacterBase_SetWantsBracedAim_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacterBase_SetWantsBracedAim_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacterBase, nullptr, "SetWantsBracedAim", nullptr, nullptr, sizeof(FPSCharacterBase_eventSetWantsBracedAim_Parms), Z_Construct_UFunction_AFPSCharacterBase_SetWantsBracedAim_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_SetWantsBracedAim_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSCharacterBase_SetWantsBracedAim_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_SetWantsBracedAim_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSCharacterBase_SetWantsBracedAim()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSCharacterBase_SetWantsBracedAim_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSCharacterBase_StartKick_Statics
	{
		struct FPSCharacterBase_eventStartKick_Parms
		{
			UObject* Kickable;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Kickable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFPSCharacterBase_StartKick_Statics::NewProp_Kickable = { "Kickable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSCharacterBase_eventStartKick_Parms, Kickable), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSCharacterBase_StartKick_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacterBase_StartKick_Statics::NewProp_Kickable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacterBase_StartKick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacterBase_StartKick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacterBase, nullptr, "StartKick", nullptr, nullptr, sizeof(FPSCharacterBase_eventStartKick_Parms), Z_Construct_UFunction_AFPSCharacterBase_StartKick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_StartKick_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSCharacterBase_StartKick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_StartKick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSCharacterBase_StartKick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSCharacterBase_StartKick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSCharacterBase_StartLoadAndAddItem_Statics
	{
		struct FPSCharacterBase_eventStartLoadAndAddItem_Parms
		{
			TSoftObjectPtr<UFPSItemData> Item;
			FFPSItemSlotData SlotData;
			bool bEquip;
		};
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_Item;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SlotData;
		static void NewProp_bEquip_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEquip;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_AFPSCharacterBase_StartLoadAndAddItem_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSCharacterBase_eventStartLoadAndAddItem_Parms, Item), Z_Construct_UClass_UFPSItemData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFPSCharacterBase_StartLoadAndAddItem_Statics::NewProp_SlotData = { "SlotData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSCharacterBase_eventStartLoadAndAddItem_Parms, SlotData), Z_Construct_UScriptStruct_FFPSItemSlotData, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AFPSCharacterBase_StartLoadAndAddItem_Statics::NewProp_bEquip_SetBit(void* Obj)
	{
		((FPSCharacterBase_eventStartLoadAndAddItem_Parms*)Obj)->bEquip = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFPSCharacterBase_StartLoadAndAddItem_Statics::NewProp_bEquip = { "bEquip", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPSCharacterBase_eventStartLoadAndAddItem_Parms), &Z_Construct_UFunction_AFPSCharacterBase_StartLoadAndAddItem_Statics::NewProp_bEquip_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSCharacterBase_StartLoadAndAddItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacterBase_StartLoadAndAddItem_Statics::NewProp_Item,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacterBase_StartLoadAndAddItem_Statics::NewProp_SlotData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacterBase_StartLoadAndAddItem_Statics::NewProp_bEquip,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacterBase_StartLoadAndAddItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacterBase_StartLoadAndAddItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacterBase, nullptr, "StartLoadAndAddItem", nullptr, nullptr, sizeof(FPSCharacterBase_eventStartLoadAndAddItem_Parms), Z_Construct_UFunction_AFPSCharacterBase_StartLoadAndAddItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_StartLoadAndAddItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSCharacterBase_StartLoadAndAddItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_StartLoadAndAddItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSCharacterBase_StartLoadAndAddItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSCharacterBase_StartLoadAndAddItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSCharacterBase_StartLoadAndSwitchItem_Statics
	{
		struct FPSCharacterBase_eventStartLoadAndSwitchItem_Parms
		{
			FPrimaryAssetId ItemId;
			AFPSItem* Item;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ItemId;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Item;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFPSCharacterBase_StartLoadAndSwitchItem_Statics::NewProp_ItemId = { "ItemId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSCharacterBase_eventStartLoadAndSwitchItem_Parms, ItemId), Z_Construct_UScriptStruct_FPrimaryAssetId, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFPSCharacterBase_StartLoadAndSwitchItem_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSCharacterBase_eventStartLoadAndSwitchItem_Parms, Item), Z_Construct_UClass_AFPSItem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSCharacterBase_StartLoadAndSwitchItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacterBase_StartLoadAndSwitchItem_Statics::NewProp_ItemId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacterBase_StartLoadAndSwitchItem_Statics::NewProp_Item,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacterBase_StartLoadAndSwitchItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacterBase_StartLoadAndSwitchItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacterBase, nullptr, "StartLoadAndSwitchItem", nullptr, nullptr, sizeof(FPSCharacterBase_eventStartLoadAndSwitchItem_Parms), Z_Construct_UFunction_AFPSCharacterBase_StartLoadAndSwitchItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_StartLoadAndSwitchItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSCharacterBase_StartLoadAndSwitchItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_StartLoadAndSwitchItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSCharacterBase_StartLoadAndSwitchItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSCharacterBase_StartLoadAndSwitchItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSCharacterBase_StartPickupItem_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Pickup;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFPSCharacterBase_StartPickupItem_Statics::NewProp_Pickup = { "Pickup", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSCharacterBase_eventStartPickupItem_Parms, Pickup), Z_Construct_UClass_AFPSItemPickup_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSCharacterBase_StartPickupItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacterBase_StartPickupItem_Statics::NewProp_Pickup,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacterBase_StartPickupItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacterBase_StartPickupItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacterBase, nullptr, "StartPickupItem", nullptr, nullptr, sizeof(FPSCharacterBase_eventStartPickupItem_Parms), Z_Construct_UFunction_AFPSCharacterBase_StartPickupItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_StartPickupItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSCharacterBase_StartPickupItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_StartPickupItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSCharacterBase_StartPickupItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSCharacterBase_StartPickupItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSCharacterBase_SwitchItem_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Item;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFPSCharacterBase_SwitchItem_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSCharacterBase_eventSwitchItem_Parms, Item), Z_Construct_UClass_AFPSItem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSCharacterBase_SwitchItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacterBase_SwitchItem_Statics::NewProp_Item,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacterBase_SwitchItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacterBase_SwitchItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacterBase, nullptr, "SwitchItem", nullptr, nullptr, sizeof(FPSCharacterBase_eventSwitchItem_Parms), Z_Construct_UFunction_AFPSCharacterBase_SwitchItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_SwitchItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSCharacterBase_SwitchItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_SwitchItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSCharacterBase_SwitchItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSCharacterBase_SwitchItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSCharacterBase_SwitchToSlot_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Slot;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFPSCharacterBase_SwitchToSlot_Statics::NewProp_Slot = { "Slot", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSCharacterBase_eventSwitchToSlot_Parms, Slot), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSCharacterBase_SwitchToSlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacterBase_SwitchToSlot_Statics::NewProp_Slot,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacterBase_SwitchToSlot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacterBase_SwitchToSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacterBase, nullptr, "SwitchToSlot", nullptr, nullptr, sizeof(FPSCharacterBase_eventSwitchToSlot_Parms), Z_Construct_UFunction_AFPSCharacterBase_SwitchToSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_SwitchToSlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSCharacterBase_SwitchToSlot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_SwitchToSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSCharacterBase_SwitchToSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSCharacterBase_SwitchToSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSCharacterBase_ToggleBracedAim_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacterBase_ToggleBracedAim_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacterBase_ToggleBracedAim_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacterBase, nullptr, "ToggleBracedAim", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSCharacterBase_ToggleBracedAim_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_ToggleBracedAim_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSCharacterBase_ToggleBracedAim()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSCharacterBase_ToggleBracedAim_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSCharacterBase_TryAddAmmo_Statics
	{
		static void NewProp_bUseFullAmmo_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseFullAmmo;
		static void NewProp_bAllItems_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllItems;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Amount;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFPSCharacterBase_TryAddAmmo_Statics::NewProp_bUseFullAmmo_SetBit(void* Obj)
	{
		((FPSCharacterBase_eventTryAddAmmo_Parms*)Obj)->bUseFullAmmo = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFPSCharacterBase_TryAddAmmo_Statics::NewProp_bUseFullAmmo = { "bUseFullAmmo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPSCharacterBase_eventTryAddAmmo_Parms), &Z_Construct_UFunction_AFPSCharacterBase_TryAddAmmo_Statics::NewProp_bUseFullAmmo_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AFPSCharacterBase_TryAddAmmo_Statics::NewProp_bAllItems_SetBit(void* Obj)
	{
		((FPSCharacterBase_eventTryAddAmmo_Parms*)Obj)->bAllItems = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFPSCharacterBase_TryAddAmmo_Statics::NewProp_bAllItems = { "bAllItems", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPSCharacterBase_eventTryAddAmmo_Parms), &Z_Construct_UFunction_AFPSCharacterBase_TryAddAmmo_Statics::NewProp_bAllItems_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFPSCharacterBase_TryAddAmmo_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSCharacterBase_eventTryAddAmmo_Parms, Amount), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AFPSCharacterBase_TryAddAmmo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FPSCharacterBase_eventTryAddAmmo_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFPSCharacterBase_TryAddAmmo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPSCharacterBase_eventTryAddAmmo_Parms), &Z_Construct_UFunction_AFPSCharacterBase_TryAddAmmo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSCharacterBase_TryAddAmmo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacterBase_TryAddAmmo_Statics::NewProp_bUseFullAmmo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacterBase_TryAddAmmo_Statics::NewProp_bAllItems,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacterBase_TryAddAmmo_Statics::NewProp_Amount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacterBase_TryAddAmmo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacterBase_TryAddAmmo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacterBase_TryAddAmmo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacterBase, nullptr, "TryAddAmmo", nullptr, nullptr, sizeof(FPSCharacterBase_eventTryAddAmmo_Parms), Z_Construct_UFunction_AFPSCharacterBase_TryAddAmmo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_TryAddAmmo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSCharacterBase_TryAddAmmo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_TryAddAmmo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSCharacterBase_TryAddAmmo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSCharacterBase_TryAddAmmo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSCharacterBase_TryKick_Statics
	{
		struct FPSCharacterBase_eventTryKick_Parms
		{
			UObject* Kickable;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Kickable;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFPSCharacterBase_TryKick_Statics::NewProp_Kickable = { "Kickable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSCharacterBase_eventTryKick_Parms, Kickable), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AFPSCharacterBase_TryKick_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FPSCharacterBase_eventTryKick_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFPSCharacterBase_TryKick_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPSCharacterBase_eventTryKick_Parms), &Z_Construct_UFunction_AFPSCharacterBase_TryKick_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSCharacterBase_TryKick_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacterBase_TryKick_Statics::NewProp_Kickable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacterBase_TryKick_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacterBase_TryKick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacterBase_TryKick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacterBase, nullptr, "TryKick", nullptr, nullptr, sizeof(FPSCharacterBase_eventTryKick_Parms), Z_Construct_UFunction_AFPSCharacterBase_TryKick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_TryKick_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSCharacterBase_TryKick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_TryKick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSCharacterBase_TryKick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSCharacterBase_TryKick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSCharacterBase_UpdateBaseMovementSpeed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacterBase_UpdateBaseMovementSpeed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacterBase_UpdateBaseMovementSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacterBase, nullptr, "UpdateBaseMovementSpeed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSCharacterBase_UpdateBaseMovementSpeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_UpdateBaseMovementSpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSCharacterBase_UpdateBaseMovementSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSCharacterBase_UpdateBaseMovementSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSCharacterBase_UpdateBracedAim_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacterBase_UpdateBracedAim_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacterBase_UpdateBracedAim_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacterBase, nullptr, "UpdateBracedAim", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSCharacterBase_UpdateBracedAim_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_UpdateBracedAim_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSCharacterBase_UpdateBracedAim()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSCharacterBase_UpdateBracedAim_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSCharacterBase_UpdateMount_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacterBase_UpdateMount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacterBase_UpdateMount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacterBase, nullptr, "UpdateMount", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSCharacterBase_UpdateMount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacterBase_UpdateMount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSCharacterBase_UpdateMount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSCharacterBase_UpdateMount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFPSCharacterBase_NoRegister()
	{
		return AFPSCharacterBase::StaticClass();
	}
	struct Z_Construct_UClass_AFPSCharacterBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EquippedItem_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EquippedItem;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Hotbar_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hotbar_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Hotbar;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AssetIDsToLoad_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetIDsToLoad_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AssetIDsToLoad;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClientEquippedItem_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ClientEquippedItem;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClientDequippedItem_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ClientDequippedItem;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_State_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_State;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastState_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LastState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Abilities_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Abilities;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastAbilities_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LastAbilities;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxHealth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsEquipping_MetaData[];
#endif
		static void NewProp_bIsEquipping_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsEquipping;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsDequipping_MetaData[];
#endif
		static void NewProp_bIsDequipping_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsDequipping;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowedToSprint_MetaData[];
#endif
		static void NewProp_bAllowedToSprint_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowedToSprint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowedToBracedAim_MetaData[];
#endif
		static void NewProp_bAllowedToBracedAim_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowedToBracedAim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bForceBracedAimInNightVision_MetaData[];
#endif
		static void NewProp_bForceBracedAimInNightVision_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bForceBracedAimInNightVision;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanUseItems_MetaData[];
#endif
		static void NewProp_bCanUseItems_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanUseItems;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JumpItemDelay_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_JumpItemDelay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LowReadySpeedMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LowReadySpeedMultiplier;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_GenericDamageClasses_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GenericDamageClasses_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_GenericDamageClasses;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BoneDamageMultipliers_ValueProp;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BoneDamageMultipliers_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneDamageMultipliers_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_BoneDamageMultipliers;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WalkingSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WalkingSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SprintingSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SprintingSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CrouchingSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CrouchingSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeanAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LeanAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeaningHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LeaningHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeaningDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LeaningDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PositionOffsetSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PositionOffsetSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxSafeFallingDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxSafeFallingDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FallDamagePerMetre_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FallDamagePerMetre;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAlwaysDropHeldItemOnDeath_MetaData[];
#endif
		static void NewProp_bAlwaysDropHeldItemOnDeath_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAlwaysDropHeldItemOnDeath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MountDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MountDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentMountEyeHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentMountEyeHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentMountLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CurrentMountLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentMountHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentMountHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DamageMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HealthMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HealthMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterMovementSpeedMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CharacterMovementSpeedMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinSprintForwardFraction_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinSprintForwardFraction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LandSprintDelay_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LandSprintDelay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LandJumpDelay_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LandJumpDelay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JumpDelay_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_JumpDelay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SprintDelay_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SprintDelay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RecoilSettling_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RecoilSettling;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraRecoilMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CameraRecoilMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RecoilDeadzone_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RecoilDeadzone;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RecoilSmoothingSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RecoilSmoothingSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HipfireRecoilAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HipfireRecoilAmount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AimingRecoilAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AimingRecoilAmount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CrouchingRecoilMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CrouchingRecoilMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RecoilMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RecoilMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MountedRecoilMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MountedRecoilMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpreadMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpreadMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseOneHanded_MetaData[];
#endif
		static void NewProp_bUseOneHanded_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseOneHanded;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bForceLowReady_MetaData[];
#endif
		static void NewProp_bForceLowReady_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bForceLowReady;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseHeightOverBore_MetaData[];
#endif
		static void NewProp_bUseHeightOverBore_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseHeightOverBore;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProneEyeHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ProneEyeHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraInterpolationSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CameraInterpolationSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraTargetFOV_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CameraTargetFOV;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraCurrentFOV_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CameraCurrentFOV;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraDefaultFOV_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CameraDefaultFOV;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SmoothSightDirectionSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SmoothSightDirectionSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SmoothSightPositionSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SmoothSightPositionSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseSmoothADSPosition_MetaData[];
#endif
		static void NewProp_bUseSmoothADSPosition_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseSmoothADSPosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsFirstPerson_MetaData[];
#endif
		static void NewProp_bIsFirstPerson_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsFirstPerson;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CrouchHeightSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CrouchHeightSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCenterViewOnADS_MetaData[];
#endif
		static void NewProp_bCenterViewOnADS_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCenterViewOnADS;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotationOffsetSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RotationOffsetSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FreeAimAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FreeAimAmount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FreeAimSmoothingSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FreeAimSmoothingSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FreeAimDeadzone_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FreeAimDeadzone;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFreeAimInBracedAim_MetaData[];
#endif
		static void NewProp_bFreeAimInBracedAim_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFreeAimInBracedAim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AimingSensitivityMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AimingSensitivityMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimationCameraRotationMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AnimationCameraRotationMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LookX_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LookX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LookY_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LookY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotationOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RotationOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SmoothRecoil_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SmoothRecoil;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentRecoil_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CurrentRecoil;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentFreeAim_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CurrentFreeAim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SmoothFreeAim_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SmoothFreeAim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PendingCameraPositionOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PendingCameraPositionOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraPositionOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CameraPositionOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseCameraPositionOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BaseCameraPositionOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentFreeAimMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentFreeAimMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SmoothLocalSightForward_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SmoothLocalSightForward;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SmoothLocalPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SmoothLocalPosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ADSPercent_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ADSPercent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetEyeHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TargetEyeHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentEyeHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentEyeHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SmoothEyeHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SmoothEyeHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastGroundedHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LastGroundedHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentWalkSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentWalkSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentCrouchSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentCrouchSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeltaTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsDisplay_MetaData[];
#endif
		static void NewProp_bIsDisplay_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsDisplay;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Ammunition_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Ammunition_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Ammunition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnEquipItem_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnEquipItem;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnDequipItem_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDequipItem;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnStartItemPrimaryAction_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnStartItemPrimaryAction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnStartItemSecondaryAction_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnStartItemSecondaryAction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnCycleItemMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCycleItemMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnToggleItemSpecial_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnToggleItemSpecial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnCheckItemAmmo_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCheckItemAmmo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnHotbarChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnHotbarChanged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SuppressionCameraModifierClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_SuppressionCameraModifierClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LowHealthCameraModifierClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_LowHealthCameraModifierClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SprintingCameraModifierClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_SprintingCameraModifierClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NighVisionCameraModifierClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_NighVisionCameraModifierClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AimingCameraModifierClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_AimingCameraModifierClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraAnimationCameraModifierClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_CameraAnimationCameraModifierClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageCameraModifierClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_DamageCameraModifierClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KickTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_KickTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Suppression_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Suppression;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentHealth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentHealth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxSuppression_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxSuppression;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SuperSonicShotSuppression_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SuperSonicShotSuppression;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShotSuppression_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ShotSuppression;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SuppressionDecay_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SuppressionDecay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SuppressionCameraModifier_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SuppressionCameraModifier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SprintingCameraModifier_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SprintingCameraModifier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LowHealthCameraModifier_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LowHealthCameraModifier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NightVisionCameraModifier_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NightVisionCameraModifier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AimingCameraModifier_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AimingCameraModifier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraAnimationCameraModifier_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraAnimationCameraModifier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageCameraModifier_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DamageCameraModifier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastHit_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LastHit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FPSCharacterMovement_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FPSCharacterMovement;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnPlayerStateChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPlayerStateChanged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnControllerChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnControllerChanged;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFPSCharacterBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_FPSController,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFPSCharacterBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFPSCharacterBase_AddFreeAim, "AddFreeAim" }, // 1474098846
		{ &Z_Construct_UFunction_AFPSCharacterBase_AddItem, "AddItem" }, // 1826380521
		{ &Z_Construct_UFunction_AFPSCharacterBase_AddRecoil, "AddRecoil" }, // 3673804267
		{ &Z_Construct_UFunction_AFPSCharacterBase_AddRotationOffset, "AddRotationOffset" }, // 378211899
		{ &Z_Construct_UFunction_AFPSCharacterBase_AddSuppression, "AddSuppression" }, // 895464548
		{ &Z_Construct_UFunction_AFPSCharacterBase_ApplyPositionOffset, "ApplyPositionOffset" }, // 1834763810
		{ &Z_Construct_UFunction_AFPSCharacterBase_ApplyRotationOffset, "ApplyRotationOffset" }, // 1265760615
		{ &Z_Construct_UFunction_AFPSCharacterBase_BlendHeight, "BlendHeight" }, // 2958736820
		{ &Z_Construct_UFunction_AFPSCharacterBase_BlendNightVision, "BlendNightVision" }, // 4138255051
		{ &Z_Construct_UFunction_AFPSCharacterBase_CanAddAmmo, "CanAddAmmo" }, // 49465976
		{ &Z_Construct_UFunction_AFPSCharacterBase_CanPickupItem, "CanPickupItem" }, // 446009725
		{ &Z_Construct_UFunction_AFPSCharacterBase_CanSprint, "CanSprint" }, // 3374614327
		{ &Z_Construct_UFunction_AFPSCharacterBase_CanVault, "CanVault" }, // 2481480422
		{ &Z_Construct_UFunction_AFPSCharacterBase_CosmeticDequipItem, "CosmeticDequipItem" }, // 3740754469
		{ &Z_Construct_UFunction_AFPSCharacterBase_CosmeticEquipItem, "CosmeticEquipItem" }, // 1211848802
		{ &Z_Construct_UFunction_AFPSCharacterBase_CosmeticFinishDequipItem, "CosmeticFinishDequipItem" }, // 1512187104
		{ &Z_Construct_UFunction_AFPSCharacterBase_CosmeticFinishEquipItem, "CosmeticFinishEquipItem" }, // 3993269683
		{ &Z_Construct_UFunction_AFPSCharacterBase_CosmeticSwitchItem, "CosmeticSwitchItem" }, // 3671105099
		{ &Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedAiming, "CosmeticUpdatedAiming" }, // 2348752682
		{ &Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedCheckingAmmo, "CosmeticUpdatedCheckingAmmo" }, // 120619767
		{ &Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedCrouching, "CosmeticUpdatedCrouching" }, // 3345126603
		{ &Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedDead, "CosmeticUpdatedDead" }, // 1507293945
		{ &Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedFiring, "CosmeticUpdatedFiring" }, // 950168924
		{ &Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedInspecting, "CosmeticUpdatedInspecting" }, // 484706487
		{ &Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedKicking, "CosmeticUpdatedKicking" }, // 895064730
		{ &Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedLeaning, "CosmeticUpdatedLeaning" }, // 3203129404
		{ &Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedLeaningLeft, "CosmeticUpdatedLeaningLeft" }, // 173805502
		{ &Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedLeaningRight, "CosmeticUpdatedLeaningRight" }, // 2187233742
		{ &Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedLowReady, "CosmeticUpdatedLowReady" }, // 4067453541
		{ &Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedMounted, "CosmeticUpdatedMounted" }, // 3372286977
		{ &Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedNightVision, "CosmeticUpdatedNightVision" }, // 693420894
		{ &Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedProne, "CosmeticUpdatedProne" }, // 3840366162
		{ &Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedReloading, "CosmeticUpdatedReloading" }, // 652624765
		{ &Z_Construct_UFunction_AFPSCharacterBase_CosmeticUpdatedSprinting, "CosmeticUpdatedSprinting" }, // 3758450432
		{ &Z_Construct_UFunction_AFPSCharacterBase_FindCorner, "FindCorner" }, // 3243547927
		{ &Z_Construct_UFunction_AFPSCharacterBase_FinishKick, "FinishKick" }, // 2011833088
		{ &Z_Construct_UFunction_AFPSCharacterBase_FinishLoadAndAddItem, "FinishLoadAndAddItem" }, // 2716086632
		{ &Z_Construct_UFunction_AFPSCharacterBase_FinishLoadAndSwitchItem, "FinishLoadAndSwitchItem" }, // 2329565257
		{ &Z_Construct_UFunction_AFPSCharacterBase_FinishPickupItem, "FinishPickupItem" }, // 2499174820
		{ &Z_Construct_UFunction_AFPSCharacterBase_GetAbilities, "GetAbilities" }, // 1777795241
		{ &Z_Construct_UFunction_AFPSCharacterBase_GetAiming, "GetAiming" }, // 1478717982
		{ &Z_Construct_UFunction_AFPSCharacterBase_GetAimingMovementSpeedMultiplierForItem, "GetAimingMovementSpeedMultiplierForItem" }, // 863045241
		{ &Z_Construct_UFunction_AFPSCharacterBase_GetBracedAiming, "GetBracedAiming" }, // 3967534747
		{ &Z_Construct_UFunction_AFPSCharacterBase_GetCamera, "GetCamera" }, // 203506500
		{ &Z_Construct_UFunction_AFPSCharacterBase_GetCancelledReload, "GetCancelledReload" }, // 2678447904
		{ &Z_Construct_UFunction_AFPSCharacterBase_GetCheckingAmmo, "GetCheckingAmmo" }, // 4195309113
		{ &Z_Construct_UFunction_AFPSCharacterBase_GetClimbing, "GetClimbing" }, // 1816801476
		{ &Z_Construct_UFunction_AFPSCharacterBase_GetCurrentHealth, "GetCurrentHealth" }, // 2771307387
		{ &Z_Construct_UFunction_AFPSCharacterBase_GetDead, "GetDead" }, // 3754727168
		{ &Z_Construct_UFunction_AFPSCharacterBase_GetEmptyReload, "GetEmptyReload" }, // 508333224
		{ &Z_Construct_UFunction_AFPSCharacterBase_GetEquippedItemIndex, "GetEquippedItemIndex" }, // 2546072246
		{ &Z_Construct_UFunction_AFPSCharacterBase_GetEyesLocation, "GetEyesLocation" }, // 976935580
		{ &Z_Construct_UFunction_AFPSCharacterBase_GetEyesLocationNoOffset, "GetEyesLocationNoOffset" }, // 1770457395
		{ &Z_Construct_UFunction_AFPSCharacterBase_GetFiring, "GetFiring" }, // 111329464
		{ &Z_Construct_UFunction_AFPSCharacterBase_GetFirstItem, "GetFirstItem" }, // 689779037
		{ &Z_Construct_UFunction_AFPSCharacterBase_GetFirstPersonMesh, "GetFirstPersonMesh" }, // 1986684278
		{ &Z_Construct_UFunction_AFPSCharacterBase_GetForcedBracedAim, "GetForcedBracedAim" }, // 657609322
		{ &Z_Construct_UFunction_AFPSCharacterBase_GetFPSCharacterMovement, "GetFPSCharacterMovement" }, // 1133259988
		{ &Z_Construct_UFunction_AFPSCharacterBase_GetInspecting, "GetInspecting" }, // 1086119824
		{ &Z_Construct_UFunction_AFPSCharacterBase_GetKicking, "GetKicking" }, // 4106235230
		{ &Z_Construct_UFunction_AFPSCharacterBase_GetLeaning, "GetLeaning" }, // 2023809919
		{ &Z_Construct_UFunction_AFPSCharacterBase_GetLeaningLeft, "GetLeaningLeft" }, // 290539810
		{ &Z_Construct_UFunction_AFPSCharacterBase_GetLeaningRight, "GetLeaningRight" }, // 3238346228
		{ &Z_Construct_UFunction_AFPSCharacterBase_GetLoadout, "GetLoadout" }, // 2114716156
		{ &Z_Construct_UFunction_AFPSCharacterBase_GetLowReady, "GetLowReady" }, // 388548792
		{ &Z_Construct_UFunction_AFPSCharacterBase_GetMagazineData, "GetMagazineData" }, // 2140691088
		{ &Z_Construct_UFunction_AFPSCharacterBase_GetMaxReserveMagazines, "GetMaxReserveMagazines" }, // 518494028
		{ &Z_Construct_UFunction_AFPSCharacterBase_GetMeleeBasePoseLeft, "GetMeleeBasePoseLeft" }, // 389100780
		{ &Z_Construct_UFunction_AFPSCharacterBase_GetMeleeReadyLeft, "GetMeleeReadyLeft" }, // 3870028721
		{ &Z_Construct_UFunction_AFPSCharacterBase_GetMeleeReadyRight, "GetMeleeReadyRight" }, // 3630774653
		{ &Z_Construct_UFunction_AFPSCharacterBase_GetMounted, "GetMounted" }, // 2850210839
		{ &Z_Construct_UFunction_AFPSCharacterBase_GetMovementSpeedMultiplierForItem, "GetMovementSpeedMultiplierForItem" }, // 2357882340
		{ &Z_Construct_UFunction_AFPSCharacterBase_GetProne, "GetProne" }, // 2184168244
		{ &Z_Construct_UFunction_AFPSCharacterBase_GetReloading, "GetReloading" }, // 1336752207
		{ &Z_Construct_UFunction_AFPSCharacterBase_GetSpringArm, "GetSpringArm" }, // 3409175669
		{ &Z_Construct_UFunction_AFPSCharacterBase_GetSprinting, "GetSprinting" }, // 551957679
		{ &Z_Construct_UFunction_AFPSCharacterBase_GetState, "GetState" }, // 423569267
		{ &Z_Construct_UFunction_AFPSCharacterBase_GetSuppression, "GetSuppression" }, // 592543640
		{ &Z_Construct_UFunction_AFPSCharacterBase_GetThirdPersonMesh, "GetThirdPersonMesh" }, // 1225032311
		{ &Z_Construct_UFunction_AFPSCharacterBase_GetTotalAmmoPercentage, "GetTotalAmmoPercentage" }, // 596057143
		{ &Z_Construct_UFunction_AFPSCharacterBase_GetTotalReserveMagazines, "GetTotalReserveMagazines" }, // 2644286089
		{ &Z_Construct_UFunction_AFPSCharacterBase_GetUsingMelee, "GetUsingMelee" }, // 306855178
		{ &Z_Construct_UFunction_AFPSCharacterBase_GetUsingNightVision, "GetUsingNightVision" }, // 198165712
		{ &Z_Construct_UFunction_AFPSCharacterBase_GetWantsAiming, "GetWantsAiming" }, // 568504570
		{ &Z_Construct_UFunction_AFPSCharacterBase_GetWantsBracedAiming, "GetWantsBracedAiming" }, // 2288754411
		{ &Z_Construct_UFunction_AFPSCharacterBase_HasEquippedItem, "HasEquippedItem" }, // 2241151376
		{ &Z_Construct_UFunction_AFPSCharacterBase_IsFirstPerson, "IsFirstPerson" }, // 4017710503
		{ &Z_Construct_UFunction_AFPSCharacterBase_IsReserveAmmoFull, "IsReserveAmmoFull" }, // 2377235115
		{ &Z_Construct_UFunction_AFPSCharacterBase_OnItemDataLoaded, "OnItemDataLoaded" }, // 602462268
		{ &Z_Construct_UFunction_AFPSCharacterBase_OnRep_Abilities, "OnRep_Abilities" }, // 1153123807
		{ &Z_Construct_UFunction_AFPSCharacterBase_OnRep_AssetIDsToLoad, "OnRep_AssetIDsToLoad" }, // 3077460950
		{ &Z_Construct_UFunction_AFPSCharacterBase_OnRep_CurrentHealth, "OnRep_CurrentHealth" }, // 448787844
		{ &Z_Construct_UFunction_AFPSCharacterBase_OnRep_EquippedItem, "OnRep_EquippedItem" }, // 3624565603
		{ &Z_Construct_UFunction_AFPSCharacterBase_OnRep_Hotbar, "OnRep_Hotbar" }, // 188786310
		{ &Z_Construct_UFunction_AFPSCharacterBase_OnRep_LastHit, "OnRep_LastHit" }, // 1361795157
		{ &Z_Construct_UFunction_AFPSCharacterBase_OnRep_Rotation, "OnRep_Rotation" }, // 2251720052
		{ &Z_Construct_UFunction_AFPSCharacterBase_OnRep_State, "OnRep_State" }, // 3212398351
		{ &Z_Construct_UFunction_AFPSCharacterBase_OnRep_Suppression, "OnRep_Suppression" }, // 190182479
		{ &Z_Construct_UFunction_AFPSCharacterBase_RemoveItem, "RemoveItem" }, // 2730365943
		{ &Z_Construct_UFunction_AFPSCharacterBase_RemoveItemAndEquip, "RemoveItemAndEquip" }, // 3161746196
		{ &Z_Construct_UFunction_AFPSCharacterBase_ServerSetBracedAim, "ServerSetBracedAim" }, // 1440123672
		{ &Z_Construct_UFunction_AFPSCharacterBase_ServerSwitchItem, "ServerSwitchItem" }, // 308961995
		{ &Z_Construct_UFunction_AFPSCharacterBase_SetAbilities, "SetAbilities" }, // 1961780562
		{ &Z_Construct_UFunction_AFPSCharacterBase_SetAimingVisualsEnabled, "SetAimingVisualsEnabled" }, // 3780538613
		{ &Z_Construct_UFunction_AFPSCharacterBase_SetBracedAim, "SetBracedAim" }, // 3715564504
		{ &Z_Construct_UFunction_AFPSCharacterBase_SetCharacterMovementSpeedMultiplier, "SetCharacterMovementSpeedMultiplier" }, // 1531320562
		{ &Z_Construct_UFunction_AFPSCharacterBase_SetCharacterVisibility, "SetCharacterVisibility" }, // 2243260135
		{ &Z_Construct_UFunction_AFPSCharacterBase_SetCurrentHealth, "SetCurrentHealth" }, // 3301017273
		{ &Z_Construct_UFunction_AFPSCharacterBase_SetEquippedItem, "SetEquippedItem" }, // 1504300740
		{ &Z_Construct_UFunction_AFPSCharacterBase_SetHotbar, "SetHotbar" }, // 1069520584
		{ &Z_Construct_UFunction_AFPSCharacterBase_SetLastHit, "SetLastHit" }, // 128770447
		{ &Z_Construct_UFunction_AFPSCharacterBase_SetPerspective, "SetPerspective" }, // 1900650489
		{ &Z_Construct_UFunction_AFPSCharacterBase_SetPostProcessLayerBlendWeight, "SetPostProcessLayerBlendWeight" }, // 3253399128
		{ &Z_Construct_UFunction_AFPSCharacterBase_SetRotation, "SetRotation" }, // 2289519696
		{ &Z_Construct_UFunction_AFPSCharacterBase_SetState, "SetState" }, // 3599271899
		{ &Z_Construct_UFunction_AFPSCharacterBase_SetWantsBracedAim, "SetWantsBracedAim" }, // 394709410
		{ &Z_Construct_UFunction_AFPSCharacterBase_StartKick, "StartKick" }, // 1910767014
		{ &Z_Construct_UFunction_AFPSCharacterBase_StartLoadAndAddItem, "StartLoadAndAddItem" }, // 3965546713
		{ &Z_Construct_UFunction_AFPSCharacterBase_StartLoadAndSwitchItem, "StartLoadAndSwitchItem" }, // 2697817144
		{ &Z_Construct_UFunction_AFPSCharacterBase_StartPickupItem, "StartPickupItem" }, // 3824579134
		{ &Z_Construct_UFunction_AFPSCharacterBase_SwitchItem, "SwitchItem" }, // 1816222707
		{ &Z_Construct_UFunction_AFPSCharacterBase_SwitchToSlot, "SwitchToSlot" }, // 1942434309
		{ &Z_Construct_UFunction_AFPSCharacterBase_ToggleBracedAim, "ToggleBracedAim" }, // 2300319160
		{ &Z_Construct_UFunction_AFPSCharacterBase_TryAddAmmo, "TryAddAmmo" }, // 665235742
		{ &Z_Construct_UFunction_AFPSCharacterBase_TryKick, "TryKick" }, // 1005122389
		{ &Z_Construct_UFunction_AFPSCharacterBase_UpdateBaseMovementSpeed, "UpdateBaseMovementSpeed" }, // 2472288917
		{ &Z_Construct_UFunction_AFPSCharacterBase_UpdateBracedAim, "UpdateBracedAim" }, // 1409889850
		{ &Z_Construct_UFunction_AFPSCharacterBase_UpdateMount, "UpdateMount" }, // 3549683986
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacterBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "FPSCharacterBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_MaxDistance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSCharacterBase" },
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_MaxDistance = { "MaxDistance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSCharacterBase, MaxDistance), METADATA_PARAMS(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_MaxDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_MaxDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_EquippedItem_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSCharacterBase" },
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_EquippedItem = { "EquippedItem", "OnRep_EquippedItem", (EPropertyFlags)0x0010000100000025, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSCharacterBase, EquippedItem), Z_Construct_UClass_AFPSItem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_EquippedItem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_EquippedItem_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_Hotbar_Inner = { "Hotbar", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AFPSItem_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_Hotbar_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSCharacterBase" },
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_Hotbar = { "Hotbar", "OnRep_Hotbar", (EPropertyFlags)0x0010000100000025, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSCharacterBase, Hotbar), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_Hotbar_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_Hotbar_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_AssetIDsToLoad_Inner = { "AssetIDsToLoad", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPrimaryAssetId, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_AssetIDsToLoad_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSCharacterBase" },
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_AssetIDsToLoad = { "AssetIDsToLoad", "OnRep_AssetIDsToLoad", (EPropertyFlags)0x0010000100000025, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSCharacterBase, AssetIDsToLoad), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_AssetIDsToLoad_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_AssetIDsToLoad_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_ClientEquippedItem_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSCharacterBase" },
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_ClientEquippedItem = { "ClientEquippedItem", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSCharacterBase, ClientEquippedItem), Z_Construct_UClass_AFPSItem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_ClientEquippedItem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_ClientEquippedItem_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_ClientDequippedItem_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSCharacterBase" },
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_ClientDequippedItem = { "ClientDequippedItem", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSCharacterBase, ClientDequippedItem), Z_Construct_UClass_AFPSItem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_ClientDequippedItem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_ClientDequippedItem_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_State_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSCharacterBase" },
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_State = { "State", "OnRep_State", (EPropertyFlags)0x0010000100000025, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSCharacterBase, State), METADATA_PARAMS(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_State_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_State_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_LastState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSCharacterBase" },
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_LastState = { "LastState", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSCharacterBase, LastState), METADATA_PARAMS(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_LastState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_LastState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_Abilities_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSCharacterBase" },
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_Abilities = { "Abilities", "OnRep_Abilities", (EPropertyFlags)0x0010000100000025, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSCharacterBase, Abilities), METADATA_PARAMS(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_Abilities_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_Abilities_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_LastAbilities_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSCharacterBase" },
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_LastAbilities = { "LastAbilities", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSCharacterBase, LastAbilities), METADATA_PARAMS(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_LastAbilities_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_LastAbilities_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_MaxHealth_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSCharacterBase" },
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0010000000000025, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSCharacterBase, MaxHealth), METADATA_PARAMS(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_MaxHealth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_MaxHealth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_bIsEquipping_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSCharacterBase" },
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	void Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_bIsEquipping_SetBit(void* Obj)
	{
		((AFPSCharacterBase*)Obj)->bIsEquipping = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_bIsEquipping = { "bIsEquipping", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFPSCharacterBase), &Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_bIsEquipping_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_bIsEquipping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_bIsEquipping_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_bIsDequipping_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSCharacterBase" },
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	void Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_bIsDequipping_SetBit(void* Obj)
	{
		((AFPSCharacterBase*)Obj)->bIsDequipping = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_bIsDequipping = { "bIsDequipping", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFPSCharacterBase), &Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_bIsDequipping_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_bIsDequipping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_bIsDequipping_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_bAllowedToSprint_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSCharacterBase" },
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	void Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_bAllowedToSprint_SetBit(void* Obj)
	{
		((AFPSCharacterBase*)Obj)->bAllowedToSprint = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_bAllowedToSprint = { "bAllowedToSprint", nullptr, (EPropertyFlags)0x0010000000000025, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFPSCharacterBase), &Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_bAllowedToSprint_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_bAllowedToSprint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_bAllowedToSprint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_bAllowedToBracedAim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSCharacterBase" },
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	void Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_bAllowedToBracedAim_SetBit(void* Obj)
	{
		((AFPSCharacterBase*)Obj)->bAllowedToBracedAim = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_bAllowedToBracedAim = { "bAllowedToBracedAim", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFPSCharacterBase), &Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_bAllowedToBracedAim_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_bAllowedToBracedAim_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_bAllowedToBracedAim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_bForceBracedAimInNightVision_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSCharacterBase" },
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	void Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_bForceBracedAimInNightVision_SetBit(void* Obj)
	{
		((AFPSCharacterBase*)Obj)->bForceBracedAimInNightVision = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_bForceBracedAimInNightVision = { "bForceBracedAimInNightVision", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFPSCharacterBase), &Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_bForceBracedAimInNightVision_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_bForceBracedAimInNightVision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_bForceBracedAimInNightVision_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_bCanUseItems_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSCharacterBase" },
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	void Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_bCanUseItems_SetBit(void* Obj)
	{
		((AFPSCharacterBase*)Obj)->bCanUseItems = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_bCanUseItems = { "bCanUseItems", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFPSCharacterBase), &Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_bCanUseItems_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_bCanUseItems_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_bCanUseItems_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_JumpItemDelay_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSCharacterBase" },
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_JumpItemDelay = { "JumpItemDelay", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSCharacterBase, JumpItemDelay), METADATA_PARAMS(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_JumpItemDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_JumpItemDelay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_LowReadySpeedMultiplier_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSCharacterBase" },
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_LowReadySpeedMultiplier = { "LowReadySpeedMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSCharacterBase, LowReadySpeedMultiplier), METADATA_PARAMS(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_LowReadySpeedMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_LowReadySpeedMultiplier_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_GenericDamageClasses_Inner = { "GenericDamageClasses", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UDamageType_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_GenericDamageClasses_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSCharacterBase" },
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_GenericDamageClasses = { "GenericDamageClasses", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSCharacterBase, GenericDamageClasses), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_GenericDamageClasses_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_GenericDamageClasses_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_BoneDamageMultipliers_ValueProp = { "BoneDamageMultipliers", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_BoneDamageMultipliers_Key_KeyProp = { "BoneDamageMultipliers_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_BoneDamageMultipliers_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSCharacterBase" },
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_BoneDamageMultipliers = { "BoneDamageMultipliers", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSCharacterBase, BoneDamageMultipliers), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_BoneDamageMultipliers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_BoneDamageMultipliers_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_WalkingSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSCharacterBase" },
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_WalkingSpeed = { "WalkingSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSCharacterBase, WalkingSpeed), METADATA_PARAMS(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_WalkingSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_WalkingSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_SprintingSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSCharacterBase" },
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_SprintingSpeed = { "SprintingSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSCharacterBase, SprintingSpeed), METADATA_PARAMS(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_SprintingSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_SprintingSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_CrouchingSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSCharacterBase" },
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_CrouchingSpeed = { "CrouchingSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSCharacterBase, CrouchingSpeed), METADATA_PARAMS(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_CrouchingSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_CrouchingSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_LeanAngle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSCharacterBase" },
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_LeanAngle = { "LeanAngle", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSCharacterBase, LeanAngle), METADATA_PARAMS(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_LeanAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_LeanAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_LeaningHeight_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSCharacterBase" },
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_LeaningHeight = { "LeaningHeight", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSCharacterBase, LeaningHeight), METADATA_PARAMS(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_LeaningHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_LeaningHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_LeaningDistance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSCharacterBase" },
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_LeaningDistance = { "LeaningDistance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSCharacterBase, LeaningDistance), METADATA_PARAMS(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_LeaningDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_LeaningDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_PositionOffsetSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSCharacterBase" },
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_PositionOffsetSpeed = { "PositionOffsetSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSCharacterBase, PositionOffsetSpeed), METADATA_PARAMS(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_PositionOffsetSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_PositionOffsetSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_MaxSafeFallingDistance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSCharacterBase" },
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_MaxSafeFallingDistance = { "MaxSafeFallingDistance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSCharacterBase, MaxSafeFallingDistance), METADATA_PARAMS(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_MaxSafeFallingDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_MaxSafeFallingDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_FallDamagePerMetre_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSCharacterBase" },
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_FallDamagePerMetre = { "FallDamagePerMetre", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSCharacterBase, FallDamagePerMetre), METADATA_PARAMS(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_FallDamagePerMetre_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_FallDamagePerMetre_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_bAlwaysDropHeldItemOnDeath_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSCharacterBase" },
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	void Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_bAlwaysDropHeldItemOnDeath_SetBit(void* Obj)
	{
		((AFPSCharacterBase*)Obj)->bAlwaysDropHeldItemOnDeath = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_bAlwaysDropHeldItemOnDeath = { "bAlwaysDropHeldItemOnDeath", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFPSCharacterBase), &Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_bAlwaysDropHeldItemOnDeath_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_bAlwaysDropHeldItemOnDeath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_bAlwaysDropHeldItemOnDeath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_MountDistance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSCharacterBase" },
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_MountDistance = { "MountDistance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSCharacterBase, MountDistance), METADATA_PARAMS(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_MountDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_MountDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_CurrentMountEyeHeight_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSCharacterBase" },
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_CurrentMountEyeHeight = { "CurrentMountEyeHeight", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSCharacterBase, CurrentMountEyeHeight), METADATA_PARAMS(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_CurrentMountEyeHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_CurrentMountEyeHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_CurrentMountLocation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSCharacterBase" },
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_CurrentMountLocation = { "CurrentMountLocation", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSCharacterBase, CurrentMountLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_CurrentMountLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_CurrentMountLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_CurrentMountHeight_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSCharacterBase" },
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_CurrentMountHeight = { "CurrentMountHeight", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSCharacterBase, CurrentMountHeight), METADATA_PARAMS(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_CurrentMountHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_CurrentMountHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_DamageMultiplier_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSCharacterBase" },
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_DamageMultiplier = { "DamageMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSCharacterBase, DamageMultiplier), METADATA_PARAMS(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_DamageMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_DamageMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_HealthMultiplier_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSCharacterBase" },
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_HealthMultiplier = { "HealthMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSCharacterBase, HealthMultiplier), METADATA_PARAMS(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_HealthMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_HealthMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_CharacterMovementSpeedMultiplier_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSCharacterBase" },
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_CharacterMovementSpeedMultiplier = { "CharacterMovementSpeedMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSCharacterBase, CharacterMovementSpeedMultiplier), METADATA_PARAMS(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_CharacterMovementSpeedMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_CharacterMovementSpeedMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_MinSprintForwardFraction_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSCharacterBase" },
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_MinSprintForwardFraction = { "MinSprintForwardFraction", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSCharacterBase, MinSprintForwardFraction), METADATA_PARAMS(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_MinSprintForwardFraction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_MinSprintForwardFraction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_LandSprintDelay_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSCharacterBase" },
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_LandSprintDelay = { "LandSprintDelay", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSCharacterBase, LandSprintDelay), METADATA_PARAMS(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_LandSprintDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_LandSprintDelay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_LandJumpDelay_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSCharacterBase" },
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_LandJumpDelay = { "LandJumpDelay", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSCharacterBase, LandJumpDelay), METADATA_PARAMS(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_LandJumpDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_LandJumpDelay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_JumpDelay_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSCharacterBase" },
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_JumpDelay = { "JumpDelay", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSCharacterBase, JumpDelay), METADATA_PARAMS(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_JumpDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_JumpDelay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_SprintDelay_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSCharacterBase" },
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_SprintDelay = { "SprintDelay", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSCharacterBase, SprintDelay), METADATA_PARAMS(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_SprintDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_SprintDelay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_RecoilSettling_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSCharacterBase" },
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_RecoilSettling = { "RecoilSettling", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSCharacterBase, RecoilSettling), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_RecoilSettling_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_RecoilSettling_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_CameraRecoilMultiplier_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSCharacterBase" },
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_CameraRecoilMultiplier = { "CameraRecoilMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSCharacterBase, CameraRecoilMultiplier), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_CameraRecoilMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_CameraRecoilMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_RecoilDeadzone_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSCharacterBase" },
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_RecoilDeadzone = { "RecoilDeadzone", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSCharacterBase, RecoilDeadzone), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_RecoilDeadzone_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_RecoilDeadzone_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_RecoilSmoothingSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSCharacterBase" },
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_RecoilSmoothingSpeed = { "RecoilSmoothingSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSCharacterBase, RecoilSmoothingSpeed), METADATA_PARAMS(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_RecoilSmoothingSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_RecoilSmoothingSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_HipfireRecoilAmount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSCharacterBase" },
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_HipfireRecoilAmount = { "HipfireRecoilAmount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSCharacterBase, HipfireRecoilAmount), METADATA_PARAMS(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_HipfireRecoilAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_HipfireRecoilAmount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_AimingRecoilAmount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSCharacterBase" },
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_AimingRecoilAmount = { "AimingRecoilAmount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSCharacterBase, AimingRecoilAmount), METADATA_PARAMS(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_AimingRecoilAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_AimingRecoilAmount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_CrouchingRecoilMultiplier_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSCharacterBase" },
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_CrouchingRecoilMultiplier = { "CrouchingRecoilMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSCharacterBase, CrouchingRecoilMultiplier), METADATA_PARAMS(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_CrouchingRecoilMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_CrouchingRecoilMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_RecoilMultiplier_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSCharacterBase" },
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_RecoilMultiplier = { "RecoilMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSCharacterBase, RecoilMultiplier), METADATA_PARAMS(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_RecoilMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_RecoilMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_MountedRecoilMultiplier_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSCharacterBase" },
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_MountedRecoilMultiplier = { "MountedRecoilMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSCharacterBase, MountedRecoilMultiplier), METADATA_PARAMS(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_MountedRecoilMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_MountedRecoilMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_SpreadMultiplier_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSCharacterBase" },
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_SpreadMultiplier = { "SpreadMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSCharacterBase, SpreadMultiplier), METADATA_PARAMS(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_SpreadMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_SpreadMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_bUseOneHanded_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSCharacterBase" },
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	void Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_bUseOneHanded_SetBit(void* Obj)
	{
		((AFPSCharacterBase*)Obj)->bUseOneHanded = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_bUseOneHanded = { "bUseOneHanded", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFPSCharacterBase), &Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_bUseOneHanded_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_bUseOneHanded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_bUseOneHanded_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_bForceLowReady_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSCharacterBase" },
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	void Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_bForceLowReady_SetBit(void* Obj)
	{
		((AFPSCharacterBase*)Obj)->bForceLowReady = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_bForceLowReady = { "bForceLowReady", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFPSCharacterBase), &Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_bForceLowReady_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_bForceLowReady_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_bForceLowReady_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_bUseHeightOverBore_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSCharacterBase" },
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	void Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_bUseHeightOverBore_SetBit(void* Obj)
	{
		((AFPSCharacterBase*)Obj)->bUseHeightOverBore = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_bUseHeightOverBore = { "bUseHeightOverBore", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFPSCharacterBase), &Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_bUseHeightOverBore_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_bUseHeightOverBore_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_bUseHeightOverBore_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_ProneEyeHeight_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSCharacterBase" },
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_ProneEyeHeight = { "ProneEyeHeight", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSCharacterBase, ProneEyeHeight), METADATA_PARAMS(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_ProneEyeHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_ProneEyeHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_CameraInterpolationSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSCharacterBase" },
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_CameraInterpolationSpeed = { "CameraInterpolationSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSCharacterBase, CameraInterpolationSpeed), METADATA_PARAMS(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_CameraInterpolationSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_CameraInterpolationSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_CameraTargetFOV_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSCharacterBase" },
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_CameraTargetFOV = { "CameraTargetFOV", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSCharacterBase, CameraTargetFOV), METADATA_PARAMS(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_CameraTargetFOV_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_CameraTargetFOV_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_CameraCurrentFOV_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSCharacterBase" },
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_CameraCurrentFOV = { "CameraCurrentFOV", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSCharacterBase, CameraCurrentFOV), METADATA_PARAMS(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_CameraCurrentFOV_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_CameraCurrentFOV_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_CameraDefaultFOV_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSCharacterBase" },
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_CameraDefaultFOV = { "CameraDefaultFOV", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSCharacterBase, CameraDefaultFOV), METADATA_PARAMS(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_CameraDefaultFOV_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_CameraDefaultFOV_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_SmoothSightDirectionSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSCharacterBase" },
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_SmoothSightDirectionSpeed = { "SmoothSightDirectionSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSCharacterBase, SmoothSightDirectionSpeed), METADATA_PARAMS(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_SmoothSightDirectionSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_SmoothSightDirectionSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_SmoothSightPositionSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSCharacterBase" },
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_SmoothSightPositionSpeed = { "SmoothSightPositionSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSCharacterBase, SmoothSightPositionSpeed), METADATA_PARAMS(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_SmoothSightPositionSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_SmoothSightPositionSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_bUseSmoothADSPosition_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSCharacterBase" },
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	void Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_bUseSmoothADSPosition_SetBit(void* Obj)
	{
		((AFPSCharacterBase*)Obj)->bUseSmoothADSPosition = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_bUseSmoothADSPosition = { "bUseSmoothADSPosition", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFPSCharacterBase), &Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_bUseSmoothADSPosition_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_bUseSmoothADSPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_bUseSmoothADSPosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_bIsFirstPerson_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSCharacterBase" },
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	void Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_bIsFirstPerson_SetBit(void* Obj)
	{
		((AFPSCharacterBase*)Obj)->bIsFirstPerson = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_bIsFirstPerson = { "bIsFirstPerson", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFPSCharacterBase), &Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_bIsFirstPerson_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_bIsFirstPerson_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_bIsFirstPerson_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_CrouchHeightSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSCharacterBase" },
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_CrouchHeightSpeed = { "CrouchHeightSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSCharacterBase, CrouchHeightSpeed), METADATA_PARAMS(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_CrouchHeightSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_CrouchHeightSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_bCenterViewOnADS_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSCharacterBase" },
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	void Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_bCenterViewOnADS_SetBit(void* Obj)
	{
		((AFPSCharacterBase*)Obj)->bCenterViewOnADS = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_bCenterViewOnADS = { "bCenterViewOnADS", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFPSCharacterBase), &Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_bCenterViewOnADS_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_bCenterViewOnADS_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_bCenterViewOnADS_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_RotationOffsetSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSCharacterBase" },
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_RotationOffsetSpeed = { "RotationOffsetSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSCharacterBase, RotationOffsetSpeed), METADATA_PARAMS(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_RotationOffsetSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_RotationOffsetSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_FreeAimAmount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSCharacterBase" },
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_FreeAimAmount = { "FreeAimAmount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSCharacterBase, FreeAimAmount), METADATA_PARAMS(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_FreeAimAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_FreeAimAmount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_FreeAimSmoothingSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSCharacterBase" },
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_FreeAimSmoothingSpeed = { "FreeAimSmoothingSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSCharacterBase, FreeAimSmoothingSpeed), METADATA_PARAMS(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_FreeAimSmoothingSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_FreeAimSmoothingSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_FreeAimDeadzone_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSCharacterBase" },
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_FreeAimDeadzone = { "FreeAimDeadzone", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSCharacterBase, FreeAimDeadzone), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_FreeAimDeadzone_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_FreeAimDeadzone_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_bFreeAimInBracedAim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSCharacterBase" },
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	void Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_bFreeAimInBracedAim_SetBit(void* Obj)
	{
		((AFPSCharacterBase*)Obj)->bFreeAimInBracedAim = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_bFreeAimInBracedAim = { "bFreeAimInBracedAim", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFPSCharacterBase), &Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_bFreeAimInBracedAim_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_bFreeAimInBracedAim_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_bFreeAimInBracedAim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_AimingSensitivityMultiplier_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSCharacterBase" },
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_AimingSensitivityMultiplier = { "AimingSensitivityMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSCharacterBase, AimingSensitivityMultiplier), METADATA_PARAMS(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_AimingSensitivityMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_AimingSensitivityMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_AnimationCameraRotationMultiplier_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSCharacterBase" },
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_AnimationCameraRotationMultiplier = { "AnimationCameraRotationMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSCharacterBase, AnimationCameraRotationMultiplier), METADATA_PARAMS(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_AnimationCameraRotationMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_AnimationCameraRotationMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_LookX_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSCharacterBase" },
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_LookX = { "LookX", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSCharacterBase, LookX), METADATA_PARAMS(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_LookX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_LookX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_LookY_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSCharacterBase" },
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_LookY = { "LookY", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSCharacterBase, LookY), METADATA_PARAMS(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_LookY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_LookY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_RotationOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSCharacterBase" },
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_RotationOffset = { "RotationOffset", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSCharacterBase, RotationOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_RotationOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_RotationOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_SmoothRecoil_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSCharacterBase" },
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_SmoothRecoil = { "SmoothRecoil", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSCharacterBase, SmoothRecoil), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_SmoothRecoil_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_SmoothRecoil_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_CurrentRecoil_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSCharacterBase" },
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_CurrentRecoil = { "CurrentRecoil", nullptr, (EPropertyFlags)0x0010000000002025, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSCharacterBase, CurrentRecoil), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_CurrentRecoil_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_CurrentRecoil_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_CurrentFreeAim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSCharacterBase" },
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_CurrentFreeAim = { "CurrentFreeAim", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSCharacterBase, CurrentFreeAim), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_CurrentFreeAim_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_CurrentFreeAim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_SmoothFreeAim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSCharacterBase" },
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_SmoothFreeAim = { "SmoothFreeAim", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSCharacterBase, SmoothFreeAim), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_SmoothFreeAim_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_SmoothFreeAim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_PendingCameraPositionOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSCharacterBase" },
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_PendingCameraPositionOffset = { "PendingCameraPositionOffset", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSCharacterBase, PendingCameraPositionOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_PendingCameraPositionOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_PendingCameraPositionOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_CameraPositionOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSCharacterBase" },
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_CameraPositionOffset = { "CameraPositionOffset", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSCharacterBase, CameraPositionOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_CameraPositionOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_CameraPositionOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_BaseCameraPositionOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSCharacterBase" },
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_BaseCameraPositionOffset = { "BaseCameraPositionOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSCharacterBase, BaseCameraPositionOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_BaseCameraPositionOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_BaseCameraPositionOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_CurrentFreeAimMultiplier_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSCharacterBase" },
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_CurrentFreeAimMultiplier = { "CurrentFreeAimMultiplier", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSCharacterBase, CurrentFreeAimMultiplier), METADATA_PARAMS(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_CurrentFreeAimMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_CurrentFreeAimMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_SmoothLocalSightForward_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSCharacterBase" },
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_SmoothLocalSightForward = { "SmoothLocalSightForward", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSCharacterBase, SmoothLocalSightForward), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_SmoothLocalSightForward_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_SmoothLocalSightForward_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_SmoothLocalPosition_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSCharacterBase" },
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_SmoothLocalPosition = { "SmoothLocalPosition", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSCharacterBase, SmoothLocalPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_SmoothLocalPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_SmoothLocalPosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_ADSPercent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSCharacterBase" },
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_ADSPercent = { "ADSPercent", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSCharacterBase, ADSPercent), METADATA_PARAMS(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_ADSPercent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_ADSPercent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_TargetEyeHeight_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSCharacterBase" },
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_TargetEyeHeight = { "TargetEyeHeight", nullptr, (EPropertyFlags)0x0010000000002025, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSCharacterBase, TargetEyeHeight), METADATA_PARAMS(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_TargetEyeHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_TargetEyeHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_CurrentEyeHeight_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSCharacterBase" },
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_CurrentEyeHeight = { "CurrentEyeHeight", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSCharacterBase, CurrentEyeHeight), METADATA_PARAMS(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_CurrentEyeHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_CurrentEyeHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_SmoothEyeHeight_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSCharacterBase" },
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_SmoothEyeHeight = { "SmoothEyeHeight", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSCharacterBase, SmoothEyeHeight), METADATA_PARAMS(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_SmoothEyeHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_SmoothEyeHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_LastGroundedHeight_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSCharacterBase" },
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_LastGroundedHeight = { "LastGroundedHeight", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSCharacterBase, LastGroundedHeight), METADATA_PARAMS(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_LastGroundedHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_LastGroundedHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_CurrentWalkSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSCharacterBase" },
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_CurrentWalkSpeed = { "CurrentWalkSpeed", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSCharacterBase, CurrentWalkSpeed), METADATA_PARAMS(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_CurrentWalkSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_CurrentWalkSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_CurrentCrouchSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSCharacterBase" },
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_CurrentCrouchSpeed = { "CurrentCrouchSpeed", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSCharacterBase, CurrentCrouchSpeed), METADATA_PARAMS(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_CurrentCrouchSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_CurrentCrouchSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_Rotation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSCharacterBase" },
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_Rotation = { "Rotation", "OnRep_Rotation", (EPropertyFlags)0x0010000100002025, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSCharacterBase, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_Rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_Rotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_DeltaTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSCharacterBase" },
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSCharacterBase, DeltaTime), METADATA_PARAMS(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_DeltaTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_DeltaTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_bIsDisplay_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSCharacterBase" },
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	void Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_bIsDisplay_SetBit(void* Obj)
	{
		((AFPSCharacterBase*)Obj)->bIsDisplay = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_bIsDisplay = { "bIsDisplay", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFPSCharacterBase), &Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_bIsDisplay_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_bIsDisplay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_bIsDisplay_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_Ammunition_Inner = { "Ammunition", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMagazineData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_Ammunition_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSCharacterBase" },
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_Ammunition = { "Ammunition", nullptr, (EPropertyFlags)0x0010000000000025, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSCharacterBase, Ammunition), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_Ammunition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_Ammunition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_OnEquipItem_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSCharacterBase" },
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_OnEquipItem = { "OnEquipItem", nullptr, (EPropertyFlags)0x0010100010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSCharacterBase, OnEquipItem), Z_Construct_UDelegateFunction_FPSController_CharacterItemSlotUpdatedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_OnEquipItem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_OnEquipItem_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_OnDequipItem_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSCharacterBase" },
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_OnDequipItem = { "OnDequipItem", nullptr, (EPropertyFlags)0x0010100010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSCharacterBase, OnDequipItem), Z_Construct_UDelegateFunction_FPSController_CharacterItemUpdatedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_OnDequipItem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_OnDequipItem_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_OnStartItemPrimaryAction_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSCharacterBase" },
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_OnStartItemPrimaryAction = { "OnStartItemPrimaryAction", nullptr, (EPropertyFlags)0x0010100010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSCharacterBase, OnStartItemPrimaryAction), Z_Construct_UDelegateFunction_FPSController_CharacterItemUpdatedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_OnStartItemPrimaryAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_OnStartItemPrimaryAction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_OnStartItemSecondaryAction_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSCharacterBase" },
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_OnStartItemSecondaryAction = { "OnStartItemSecondaryAction", nullptr, (EPropertyFlags)0x0010100010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSCharacterBase, OnStartItemSecondaryAction), Z_Construct_UDelegateFunction_FPSController_CharacterItemUpdatedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_OnStartItemSecondaryAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_OnStartItemSecondaryAction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_OnCycleItemMode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSCharacterBase" },
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_OnCycleItemMode = { "OnCycleItemMode", nullptr, (EPropertyFlags)0x0010100010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSCharacterBase, OnCycleItemMode), Z_Construct_UDelegateFunction_FPSController_CharacterItemUpdatedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_OnCycleItemMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_OnCycleItemMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_OnToggleItemSpecial_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSCharacterBase" },
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_OnToggleItemSpecial = { "OnToggleItemSpecial", nullptr, (EPropertyFlags)0x0010100010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSCharacterBase, OnToggleItemSpecial), Z_Construct_UDelegateFunction_FPSController_CharacterItemUpdatedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_OnToggleItemSpecial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_OnToggleItemSpecial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_OnCheckItemAmmo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSCharacterBase" },
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_OnCheckItemAmmo = { "OnCheckItemAmmo", nullptr, (EPropertyFlags)0x0010100010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSCharacterBase, OnCheckItemAmmo), Z_Construct_UDelegateFunction_FPSController_CharacterItemUpdatedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_OnCheckItemAmmo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_OnCheckItemAmmo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_OnHotbarChanged_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSCharacterBase" },
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_OnHotbarChanged = { "OnHotbarChanged", nullptr, (EPropertyFlags)0x0010100010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSCharacterBase, OnHotbarChanged), Z_Construct_UDelegateFunction_FPSController_CharacterSlotUpdatedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_OnHotbarChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_OnHotbarChanged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_SuppressionCameraModifierClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSCharacterBase" },
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_SuppressionCameraModifierClass = { "SuppressionCameraModifierClass", nullptr, (EPropertyFlags)0x0014000002000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSCharacterBase, SuppressionCameraModifierClass), Z_Construct_UClass_USuppressionCameraModifier_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_SuppressionCameraModifierClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_SuppressionCameraModifierClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_LowHealthCameraModifierClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSCharacterBase" },
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_LowHealthCameraModifierClass = { "LowHealthCameraModifierClass", nullptr, (EPropertyFlags)0x0014000002000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSCharacterBase, LowHealthCameraModifierClass), Z_Construct_UClass_ULowHealthCameraModifier_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_LowHealthCameraModifierClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_LowHealthCameraModifierClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_SprintingCameraModifierClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSCharacterBase" },
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_SprintingCameraModifierClass = { "SprintingCameraModifierClass", nullptr, (EPropertyFlags)0x0014000002000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSCharacterBase, SprintingCameraModifierClass), Z_Construct_UClass_USprintingCameraModifier_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_SprintingCameraModifierClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_SprintingCameraModifierClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_NighVisionCameraModifierClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSCharacterBase" },
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_NighVisionCameraModifierClass = { "NighVisionCameraModifierClass", nullptr, (EPropertyFlags)0x0014000002000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSCharacterBase, NighVisionCameraModifierClass), Z_Construct_UClass_UNightVisionCameraModifier_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_NighVisionCameraModifierClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_NighVisionCameraModifierClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_AimingCameraModifierClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSCharacterBase" },
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_AimingCameraModifierClass = { "AimingCameraModifierClass", nullptr, (EPropertyFlags)0x0014000002000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSCharacterBase, AimingCameraModifierClass), Z_Construct_UClass_UAimingCameraModifier_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_AimingCameraModifierClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_AimingCameraModifierClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_CameraAnimationCameraModifierClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSCharacterBase" },
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_CameraAnimationCameraModifierClass = { "CameraAnimationCameraModifierClass", nullptr, (EPropertyFlags)0x0014000002000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSCharacterBase, CameraAnimationCameraModifierClass), Z_Construct_UClass_UCameraAnimationCameraModifier_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_CameraAnimationCameraModifierClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_CameraAnimationCameraModifierClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_DamageCameraModifierClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSCharacterBase" },
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_DamageCameraModifierClass = { "DamageCameraModifierClass", nullptr, (EPropertyFlags)0x0014000002000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSCharacterBase, DamageCameraModifierClass), Z_Construct_UClass_UDamageCameraModifier_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_DamageCameraModifierClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_DamageCameraModifierClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_KickTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSCharacterBase" },
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_KickTime = { "KickTime", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSCharacterBase, KickTime), METADATA_PARAMS(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_KickTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_KickTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_Suppression_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSCharacterBase" },
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_Suppression = { "Suppression", "OnRep_Suppression", (EPropertyFlags)0x0020080100002025, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSCharacterBase, Suppression), METADATA_PARAMS(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_Suppression_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_Suppression_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_CurrentHealth_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSCharacterBase" },
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_CurrentHealth = { "CurrentHealth", "OnRep_CurrentHealth", (EPropertyFlags)0x0020080100002025, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSCharacterBase, CurrentHealth), METADATA_PARAMS(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_CurrentHealth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_CurrentHealth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_MaxSuppression_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSCharacterBase" },
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_MaxSuppression = { "MaxSuppression", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSCharacterBase, MaxSuppression), METADATA_PARAMS(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_MaxSuppression_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_MaxSuppression_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_SuperSonicShotSuppression_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSCharacterBase" },
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_SuperSonicShotSuppression = { "SuperSonicShotSuppression", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSCharacterBase, SuperSonicShotSuppression), METADATA_PARAMS(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_SuperSonicShotSuppression_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_SuperSonicShotSuppression_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_ShotSuppression_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSCharacterBase" },
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_ShotSuppression = { "ShotSuppression", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSCharacterBase, ShotSuppression), METADATA_PARAMS(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_ShotSuppression_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_ShotSuppression_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_SuppressionDecay_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSCharacterBase" },
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_SuppressionDecay = { "SuppressionDecay", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSCharacterBase, SuppressionDecay), METADATA_PARAMS(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_SuppressionDecay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_SuppressionDecay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_SuppressionCameraModifier_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSCharacterBase" },
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_SuppressionCameraModifier = { "SuppressionCameraModifier", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSCharacterBase, SuppressionCameraModifier), Z_Construct_UClass_USuppressionCameraModifier_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_SuppressionCameraModifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_SuppressionCameraModifier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_SprintingCameraModifier_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSCharacterBase" },
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_SprintingCameraModifier = { "SprintingCameraModifier", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSCharacterBase, SprintingCameraModifier), Z_Construct_UClass_USprintingCameraModifier_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_SprintingCameraModifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_SprintingCameraModifier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_LowHealthCameraModifier_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSCharacterBase" },
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_LowHealthCameraModifier = { "LowHealthCameraModifier", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSCharacterBase, LowHealthCameraModifier), Z_Construct_UClass_ULowHealthCameraModifier_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_LowHealthCameraModifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_LowHealthCameraModifier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_NightVisionCameraModifier_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSCharacterBase" },
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_NightVisionCameraModifier = { "NightVisionCameraModifier", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSCharacterBase, NightVisionCameraModifier), Z_Construct_UClass_UNightVisionCameraModifier_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_NightVisionCameraModifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_NightVisionCameraModifier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_AimingCameraModifier_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSCharacterBase" },
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_AimingCameraModifier = { "AimingCameraModifier", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSCharacterBase, AimingCameraModifier), Z_Construct_UClass_UAimingCameraModifier_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_AimingCameraModifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_AimingCameraModifier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_CameraAnimationCameraModifier_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSCharacterBase" },
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_CameraAnimationCameraModifier = { "CameraAnimationCameraModifier", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSCharacterBase, CameraAnimationCameraModifier), Z_Construct_UClass_UCameraAnimationCameraModifier_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_CameraAnimationCameraModifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_CameraAnimationCameraModifier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_DamageCameraModifier_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSCharacterBase" },
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_DamageCameraModifier = { "DamageCameraModifier", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSCharacterBase, DamageCameraModifier), Z_Construct_UClass_UDamageCameraModifier_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_DamageCameraModifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_DamageCameraModifier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_LastHit_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSCharacterBase" },
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_LastHit = { "LastHit", "OnRep_LastHit", (EPropertyFlags)0x0020088100000025, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSCharacterBase, LastHit), Z_Construct_UScriptStruct_FSimpleHitData, METADATA_PARAMS(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_LastHit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_LastHit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_FPSCharacterMovement_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSCharacterBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_FPSCharacterMovement = { "FPSCharacterMovement", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSCharacterBase, FPSCharacterMovement), Z_Construct_UClass_UFPSCharacterMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_FPSCharacterMovement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_FPSCharacterMovement_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_OnPlayerStateChanged_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSCharacterBase" },
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_OnPlayerStateChanged = { "OnPlayerStateChanged", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSCharacterBase, OnPlayerStateChanged), Z_Construct_UDelegateFunction_FPSController_CharacterPlayerStateChangedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_OnPlayerStateChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_OnPlayerStateChanged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_OnControllerChanged_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSCharacterBase" },
		{ "ModuleRelativePath", "Public/FPSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_OnControllerChanged = { "OnControllerChanged", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSCharacterBase, OnControllerChanged), Z_Construct_UDelegateFunction_FPSController_CharacterControllerChangedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_OnControllerChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_OnControllerChanged_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFPSCharacterBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_MaxDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_EquippedItem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_Hotbar_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_Hotbar,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_AssetIDsToLoad_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_AssetIDsToLoad,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_ClientEquippedItem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_ClientDequippedItem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_State,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_LastState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_Abilities,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_LastAbilities,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_MaxHealth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_bIsEquipping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_bIsDequipping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_bAllowedToSprint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_bAllowedToBracedAim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_bForceBracedAimInNightVision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_bCanUseItems,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_JumpItemDelay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_LowReadySpeedMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_GenericDamageClasses_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_GenericDamageClasses,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_BoneDamageMultipliers_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_BoneDamageMultipliers_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_BoneDamageMultipliers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_WalkingSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_SprintingSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_CrouchingSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_LeanAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_LeaningHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_LeaningDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_PositionOffsetSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_MaxSafeFallingDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_FallDamagePerMetre,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_bAlwaysDropHeldItemOnDeath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_MountDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_CurrentMountEyeHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_CurrentMountLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_CurrentMountHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_DamageMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_HealthMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_CharacterMovementSpeedMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_MinSprintForwardFraction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_LandSprintDelay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_LandJumpDelay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_JumpDelay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_SprintDelay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_RecoilSettling,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_CameraRecoilMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_RecoilDeadzone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_RecoilSmoothingSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_HipfireRecoilAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_AimingRecoilAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_CrouchingRecoilMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_RecoilMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_MountedRecoilMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_SpreadMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_bUseOneHanded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_bForceLowReady,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_bUseHeightOverBore,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_ProneEyeHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_CameraInterpolationSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_CameraTargetFOV,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_CameraCurrentFOV,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_CameraDefaultFOV,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_SmoothSightDirectionSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_SmoothSightPositionSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_bUseSmoothADSPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_bIsFirstPerson,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_CrouchHeightSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_bCenterViewOnADS,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_RotationOffsetSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_FreeAimAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_FreeAimSmoothingSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_FreeAimDeadzone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_bFreeAimInBracedAim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_AimingSensitivityMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_AnimationCameraRotationMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_LookX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_LookY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_RotationOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_SmoothRecoil,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_CurrentRecoil,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_CurrentFreeAim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_SmoothFreeAim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_PendingCameraPositionOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_CameraPositionOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_BaseCameraPositionOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_CurrentFreeAimMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_SmoothLocalSightForward,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_SmoothLocalPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_ADSPercent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_TargetEyeHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_CurrentEyeHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_SmoothEyeHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_LastGroundedHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_CurrentWalkSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_CurrentCrouchSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_Rotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_DeltaTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_bIsDisplay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_Ammunition_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_Ammunition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_OnEquipItem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_OnDequipItem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_OnStartItemPrimaryAction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_OnStartItemSecondaryAction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_OnCycleItemMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_OnToggleItemSpecial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_OnCheckItemAmmo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_OnHotbarChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_SuppressionCameraModifierClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_LowHealthCameraModifierClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_SprintingCameraModifierClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_NighVisionCameraModifierClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_AimingCameraModifierClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_CameraAnimationCameraModifierClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_DamageCameraModifierClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_KickTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_Suppression,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_CurrentHealth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_MaxSuppression,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_SuperSonicShotSuppression,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_ShotSuppression,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_SuppressionDecay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_SuppressionCameraModifier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_SprintingCameraModifier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_LowHealthCameraModifier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_NightVisionCameraModifier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_AimingCameraModifier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_CameraAnimationCameraModifier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_DamageCameraModifier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_LastHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_FPSCharacterMovement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_OnPlayerStateChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacterBase_Statics::NewProp_OnControllerChanged,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AFPSCharacterBase_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UAISightTargetInterface_NoRegister, (int32)VTABLE_OFFSET(AFPSCharacterBase, IAISightTargetInterface), false },
			{ Z_Construct_UClass_UMeleeUser_NoRegister, (int32)VTABLE_OFFSET(AFPSCharacterBase, IMeleeUser), false },
			{ Z_Construct_UClass_USuppressable_NoRegister, (int32)VTABLE_OFFSET(AFPSCharacterBase, ISuppressable), false },
			{ Z_Construct_UClass_UGenericTeamAgentInterface_NoRegister, (int32)VTABLE_OFFSET(AFPSCharacterBase, IGenericTeamAgentInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFPSCharacterBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFPSCharacterBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFPSCharacterBase_Statics::ClassParams = {
		&AFPSCharacterBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFPSCharacterBase_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacterBase_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFPSCharacterBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacterBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFPSCharacterBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFPSCharacterBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFPSCharacterBase, 1690199193);
	template<> FPSCONTROLLER_API UClass* StaticClass<AFPSCharacterBase>()
	{
		return AFPSCharacterBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFPSCharacterBase(Z_Construct_UClass_AFPSCharacterBase, &AFPSCharacterBase::StaticClass, TEXT("/Script/FPSController"), TEXT("AFPSCharacterBase"), false, nullptr, nullptr, nullptr);

	void AFPSCharacterBase::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_EquippedItem(TEXT("EquippedItem"));
		static const FName Name_Hotbar(TEXT("Hotbar"));
		static const FName Name_AssetIDsToLoad(TEXT("AssetIDsToLoad"));
		static const FName Name_State(TEXT("State"));
		static const FName Name_Abilities(TEXT("Abilities"));
		static const FName Name_MaxHealth(TEXT("MaxHealth"));
		static const FName Name_bAllowedToSprint(TEXT("bAllowedToSprint"));
		static const FName Name_CurrentRecoil(TEXT("CurrentRecoil"));
		static const FName Name_TargetEyeHeight(TEXT("TargetEyeHeight"));
		static const FName Name_Rotation(TEXT("Rotation"));
		static const FName Name_Ammunition(TEXT("Ammunition"));
		static const FName Name_Suppression(TEXT("Suppression"));
		static const FName Name_CurrentHealth(TEXT("CurrentHealth"));
		static const FName Name_LastHit(TEXT("LastHit"));

		const bool bIsValid = true
			&& Name_EquippedItem == ClassReps[(int32)ENetFields_Private::EquippedItem].Property->GetFName()
			&& Name_Hotbar == ClassReps[(int32)ENetFields_Private::Hotbar].Property->GetFName()
			&& Name_AssetIDsToLoad == ClassReps[(int32)ENetFields_Private::AssetIDsToLoad].Property->GetFName()
			&& Name_State == ClassReps[(int32)ENetFields_Private::State].Property->GetFName()
			&& Name_Abilities == ClassReps[(int32)ENetFields_Private::Abilities].Property->GetFName()
			&& Name_MaxHealth == ClassReps[(int32)ENetFields_Private::MaxHealth].Property->GetFName()
			&& Name_bAllowedToSprint == ClassReps[(int32)ENetFields_Private::bAllowedToSprint].Property->GetFName()
			&& Name_CurrentRecoil == ClassReps[(int32)ENetFields_Private::CurrentRecoil].Property->GetFName()
			&& Name_TargetEyeHeight == ClassReps[(int32)ENetFields_Private::TargetEyeHeight].Property->GetFName()
			&& Name_Rotation == ClassReps[(int32)ENetFields_Private::Rotation].Property->GetFName()
			&& Name_Ammunition == ClassReps[(int32)ENetFields_Private::Ammunition].Property->GetFName()
			&& Name_Suppression == ClassReps[(int32)ENetFields_Private::Suppression].Property->GetFName()
			&& Name_CurrentHealth == ClassReps[(int32)ENetFields_Private::CurrentHealth].Property->GetFName()
			&& Name_LastHit == ClassReps[(int32)ENetFields_Private::LastHit].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AFPSCharacterBase"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFPSCharacterBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
