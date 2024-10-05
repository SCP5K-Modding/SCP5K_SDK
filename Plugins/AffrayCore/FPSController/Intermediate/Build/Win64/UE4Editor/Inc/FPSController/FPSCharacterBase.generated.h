// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
class UFPSItemData;
struct FFPSItemSlotData;
struct FVector2D;
class AFPSItemPickup;
struct FTransform;
class UAnimMontage;
class AFPSItem;
class UPrimitiveComponent;
struct FPrimaryAssetId;
class UCameraComponent;
class USkeletalMeshComponent;
class UFPSCharacterMovementComponent;
struct FFPSLoadout;
struct FMagazineData;
class USceneComponent;
struct FSimpleHitData;
struct FRotator;
class UObject;
#ifdef FPSCONTROLLER_FPSCharacterBase_generated_h
#error "FPSCharacterBase.generated.h already included, missing '#pragma once' in FPSCharacterBase.h"
#endif
#define FPSCONTROLLER_FPSCharacterBase_generated_h

#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSCharacterBase_h_48_SPARSE_DATA
#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSCharacterBase_h_48_RPC_WRAPPERS \
	virtual void AddItem_Implementation(UFPSItemData* ItemData, FFPSItemSlotData SlotData, bool bEquip); \
	virtual void BlendHeight_Implementation(bool bCovered); \
	virtual void BlendNightVision_Implementation(); \
	virtual bool CanSprint_Implementation(); \
	virtual void CosmeticDequipItem_Implementation(AFPSItem* Item); \
	virtual void CosmeticEquipItem_Implementation(AFPSItem* Item); \
	virtual void CosmeticFinishDequipItem_Implementation(); \
	virtual void CosmeticFinishEquipItem_Implementation(); \
	virtual void CosmeticSwitchItem_Implementation(AFPSItem* Item); \
	virtual void CosmeticUpdatedAiming_Implementation(bool bAiming); \
	virtual void CosmeticUpdatedCheckingAmmo_Implementation(bool bCheckingAmmo); \
	virtual void CosmeticUpdatedCrouching_Implementation(bool bCrouching); \
	virtual void CosmeticUpdatedDead_Implementation(bool bDead); \
	virtual void CosmeticUpdatedFiring_Implementation(bool bFiring); \
	virtual void CosmeticUpdatedInspecting_Implementation(bool bInspecting); \
	virtual void CosmeticUpdatedKicking_Implementation(bool bKicking); \
	virtual void CosmeticUpdatedLeaning_Implementation(bool bLeaning); \
	virtual void CosmeticUpdatedLeaningLeft_Implementation(bool bLeaningLeft); \
	virtual void CosmeticUpdatedLeaningRight_Implementation(bool bLeaningRight); \
	virtual void CosmeticUpdatedLowReady_Implementation(bool bLowReady); \
	virtual void CosmeticUpdatedMounted_Implementation(bool bMounted); \
	virtual void CosmeticUpdatedNightVision_Implementation(bool bUsingNightVision); \
	virtual void CosmeticUpdatedProne_Implementation(bool bProne); \
	virtual void CosmeticUpdatedReloading_Implementation(bool bReloading); \
	virtual void CosmeticUpdatedSprinting_Implementation(bool bSprinting); \
	virtual void FinishKick_Implementation(); \
	virtual UCameraComponent* GetCamera_Implementation(); \
	virtual FVector GetEyesLocation_Implementation() const; \
	virtual USkeletalMeshComponent* GetFirstPersonMesh_Implementation(); \
	virtual bool GetForcedBracedAim_Implementation(); \
	virtual USceneComponent* GetSpringArm_Implementation(); \
	virtual USkeletalMeshComponent* GetThirdPersonMesh_Implementation(); \
	virtual void OnRep_CurrentHealth_Implementation(); \
	virtual void OnRep_EquippedItem_Implementation(); \
	virtual void OnRep_Hotbar_Implementation(); \
	virtual void OnRep_LastHit_Implementation(); \
	virtual void OnRep_Rotation_Implementation(); \
	virtual void OnRep_Suppression_Implementation(); \
	virtual void RemoveItem_Implementation(AFPSItem* Item); \
	virtual void RemoveItemAndEquip_Implementation(AFPSItem* Item, int32 Slot); \
	virtual void ServerSetBracedAim_Implementation(bool bBracedAim); \
	virtual void ServerSwitchItem_Implementation(AFPSItem* Item); \
	virtual void SetBracedAim_Implementation(bool bBracedAim); \
	virtual void SetPerspective_Implementation(bool bNewIsFirstPerson, bool bApplyArmsAnimation); \
	virtual void StartPickupItem_Implementation(AFPSItemPickup* Pickup); \
	virtual void SwitchItem_Implementation(AFPSItem* Item); \
	virtual void SwitchToSlot_Implementation(int32 Slot); \
	virtual bool TryAddAmmo_Implementation(bool bUseFullAmmo, bool bAllItems, int32 Amount); \
	virtual void UpdateBaseMovementSpeed_Implementation(); \
	virtual void UpdateMount_Implementation(); \
 \
	DECLARE_FUNCTION(execAddFreeAim); \
	DECLARE_FUNCTION(execAddItem); \
	DECLARE_FUNCTION(execAddRecoil); \
	DECLARE_FUNCTION(execAddRotationOffset); \
	DECLARE_FUNCTION(execAddSuppression); \
	DECLARE_FUNCTION(execApplyPositionOffset); \
	DECLARE_FUNCTION(execApplyRotationOffset); \
	DECLARE_FUNCTION(execBlendHeight); \
	DECLARE_FUNCTION(execBlendNightVision); \
	DECLARE_FUNCTION(execCanAddAmmo); \
	DECLARE_FUNCTION(execCanPickupItem); \
	DECLARE_FUNCTION(execCanSprint); \
	DECLARE_FUNCTION(execCanVault); \
	DECLARE_FUNCTION(execCosmeticDequipItem); \
	DECLARE_FUNCTION(execCosmeticEquipItem); \
	DECLARE_FUNCTION(execCosmeticFinishDequipItem); \
	DECLARE_FUNCTION(execCosmeticFinishEquipItem); \
	DECLARE_FUNCTION(execCosmeticSwitchItem); \
	DECLARE_FUNCTION(execCosmeticUpdatedAiming); \
	DECLARE_FUNCTION(execCosmeticUpdatedCheckingAmmo); \
	DECLARE_FUNCTION(execCosmeticUpdatedCrouching); \
	DECLARE_FUNCTION(execCosmeticUpdatedDead); \
	DECLARE_FUNCTION(execCosmeticUpdatedFiring); \
	DECLARE_FUNCTION(execCosmeticUpdatedInspecting); \
	DECLARE_FUNCTION(execCosmeticUpdatedKicking); \
	DECLARE_FUNCTION(execCosmeticUpdatedLeaning); \
	DECLARE_FUNCTION(execCosmeticUpdatedLeaningLeft); \
	DECLARE_FUNCTION(execCosmeticUpdatedLeaningRight); \
	DECLARE_FUNCTION(execCosmeticUpdatedLowReady); \
	DECLARE_FUNCTION(execCosmeticUpdatedMounted); \
	DECLARE_FUNCTION(execCosmeticUpdatedNightVision); \
	DECLARE_FUNCTION(execCosmeticUpdatedProne); \
	DECLARE_FUNCTION(execCosmeticUpdatedReloading); \
	DECLARE_FUNCTION(execCosmeticUpdatedSprinting); \
	DECLARE_FUNCTION(execFindCorner); \
	DECLARE_FUNCTION(execFinishKick); \
	DECLARE_FUNCTION(execFinishLoadAndAddItem); \
	DECLARE_FUNCTION(execFinishLoadAndSwitchItem); \
	DECLARE_FUNCTION(execFinishPickupItem); \
	DECLARE_FUNCTION(execGetAbilities); \
	DECLARE_FUNCTION(execGetAiming); \
	DECLARE_FUNCTION(execGetAimingMovementSpeedMultiplierForItem); \
	DECLARE_FUNCTION(execGetBracedAiming); \
	DECLARE_FUNCTION(execGetCamera); \
	DECLARE_FUNCTION(execGetCancelledReload); \
	DECLARE_FUNCTION(execGetCheckingAmmo); \
	DECLARE_FUNCTION(execGetClimbing); \
	DECLARE_FUNCTION(execGetCurrentHealth); \
	DECLARE_FUNCTION(execGetDead); \
	DECLARE_FUNCTION(execGetEmptyReload); \
	DECLARE_FUNCTION(execGetEquippedItemIndex); \
	DECLARE_FUNCTION(execGetEyesLocation); \
	DECLARE_FUNCTION(execGetEyesLocationNoOffset); \
	DECLARE_FUNCTION(execGetFiring); \
	DECLARE_FUNCTION(execGetFirstItem); \
	DECLARE_FUNCTION(execGetFirstPersonMesh); \
	DECLARE_FUNCTION(execGetForcedBracedAim); \
	DECLARE_FUNCTION(execGetFPSCharacterMovement); \
	DECLARE_FUNCTION(execGetInspecting); \
	DECLARE_FUNCTION(execGetKicking); \
	DECLARE_FUNCTION(execGetLeaning); \
	DECLARE_FUNCTION(execGetLeaningLeft); \
	DECLARE_FUNCTION(execGetLeaningRight); \
	DECLARE_FUNCTION(execGetLoadout); \
	DECLARE_FUNCTION(execGetLowReady); \
	DECLARE_FUNCTION(execGetMagazineData); \
	DECLARE_FUNCTION(execGetMaxReserveMagazines); \
	DECLARE_FUNCTION(execGetMeleeBasePoseLeft); \
	DECLARE_FUNCTION(execGetMeleeReadyLeft); \
	DECLARE_FUNCTION(execGetMeleeReadyRight); \
	DECLARE_FUNCTION(execGetMounted); \
	DECLARE_FUNCTION(execGetMovementSpeedMultiplierForItem); \
	DECLARE_FUNCTION(execGetProne); \
	DECLARE_FUNCTION(execGetReloading); \
	DECLARE_FUNCTION(execGetSpringArm); \
	DECLARE_FUNCTION(execGetSprinting); \
	DECLARE_FUNCTION(execGetState); \
	DECLARE_FUNCTION(execGetSuppression); \
	DECLARE_FUNCTION(execGetThirdPersonMesh); \
	DECLARE_FUNCTION(execGetTotalAmmoPercentage); \
	DECLARE_FUNCTION(execGetTotalReserveMagazines); \
	DECLARE_FUNCTION(execGetUsingMelee); \
	DECLARE_FUNCTION(execGetUsingNightVision); \
	DECLARE_FUNCTION(execGetWantsAiming); \
	DECLARE_FUNCTION(execGetWantsBracedAiming); \
	DECLARE_FUNCTION(execHasEquippedItem); \
	DECLARE_FUNCTION(execIsFirstPerson); \
	DECLARE_FUNCTION(execIsReserveAmmoFull); \
	DECLARE_FUNCTION(execOnItemDataLoaded); \
	DECLARE_FUNCTION(execOnRep_Abilities); \
	DECLARE_FUNCTION(execOnRep_AssetIDsToLoad); \
	DECLARE_FUNCTION(execOnRep_CurrentHealth); \
	DECLARE_FUNCTION(execOnRep_EquippedItem); \
	DECLARE_FUNCTION(execOnRep_Hotbar); \
	DECLARE_FUNCTION(execOnRep_LastHit); \
	DECLARE_FUNCTION(execOnRep_Rotation); \
	DECLARE_FUNCTION(execOnRep_State); \
	DECLARE_FUNCTION(execOnRep_Suppression); \
	DECLARE_FUNCTION(execRemoveItem); \
	DECLARE_FUNCTION(execRemoveItemAndEquip); \
	DECLARE_FUNCTION(execServerSetBracedAim); \
	DECLARE_FUNCTION(execServerSwitchItem); \
	DECLARE_FUNCTION(execSetAbilities); \
	DECLARE_FUNCTION(execSetAimingVisualsEnabled); \
	DECLARE_FUNCTION(execSetBracedAim); \
	DECLARE_FUNCTION(execSetCharacterMovementSpeedMultiplier); \
	DECLARE_FUNCTION(execSetCharacterVisibility); \
	DECLARE_FUNCTION(execSetCurrentHealth); \
	DECLARE_FUNCTION(execSetEquippedItem); \
	DECLARE_FUNCTION(execSetHotbar); \
	DECLARE_FUNCTION(execSetLastHit); \
	DECLARE_FUNCTION(execSetPerspective); \
	DECLARE_FUNCTION(execSetPostProcessLayerBlendWeight); \
	DECLARE_FUNCTION(execSetRotation); \
	DECLARE_FUNCTION(execSetState); \
	DECLARE_FUNCTION(execSetWantsBracedAim); \
	DECLARE_FUNCTION(execStartKick); \
	DECLARE_FUNCTION(execStartLoadAndAddItem); \
	DECLARE_FUNCTION(execStartLoadAndSwitchItem); \
	DECLARE_FUNCTION(execStartPickupItem); \
	DECLARE_FUNCTION(execSwitchItem); \
	DECLARE_FUNCTION(execSwitchToSlot); \
	DECLARE_FUNCTION(execToggleBracedAim); \
	DECLARE_FUNCTION(execTryAddAmmo); \
	DECLARE_FUNCTION(execTryKick); \
	DECLARE_FUNCTION(execUpdateBaseMovementSpeed); \
	DECLARE_FUNCTION(execUpdateBracedAim); \
	DECLARE_FUNCTION(execUpdateMount);


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSCharacterBase_h_48_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void AddItem_Implementation(UFPSItemData* ItemData, FFPSItemSlotData SlotData, bool bEquip); \
	virtual void BlendHeight_Implementation(bool bCovered); \
	virtual void BlendNightVision_Implementation(); \
	virtual bool CanSprint_Implementation(); \
	virtual void CosmeticDequipItem_Implementation(AFPSItem* Item); \
	virtual void CosmeticEquipItem_Implementation(AFPSItem* Item); \
	virtual void CosmeticFinishDequipItem_Implementation(); \
	virtual void CosmeticFinishEquipItem_Implementation(); \
	virtual void CosmeticSwitchItem_Implementation(AFPSItem* Item); \
	virtual void CosmeticUpdatedAiming_Implementation(bool bAiming); \
	virtual void CosmeticUpdatedCheckingAmmo_Implementation(bool bCheckingAmmo); \
	virtual void CosmeticUpdatedCrouching_Implementation(bool bCrouching); \
	virtual void CosmeticUpdatedDead_Implementation(bool bDead); \
	virtual void CosmeticUpdatedFiring_Implementation(bool bFiring); \
	virtual void CosmeticUpdatedInspecting_Implementation(bool bInspecting); \
	virtual void CosmeticUpdatedKicking_Implementation(bool bKicking); \
	virtual void CosmeticUpdatedLeaning_Implementation(bool bLeaning); \
	virtual void CosmeticUpdatedLeaningLeft_Implementation(bool bLeaningLeft); \
	virtual void CosmeticUpdatedLeaningRight_Implementation(bool bLeaningRight); \
	virtual void CosmeticUpdatedLowReady_Implementation(bool bLowReady); \
	virtual void CosmeticUpdatedMounted_Implementation(bool bMounted); \
	virtual void CosmeticUpdatedNightVision_Implementation(bool bUsingNightVision); \
	virtual void CosmeticUpdatedProne_Implementation(bool bProne); \
	virtual void CosmeticUpdatedReloading_Implementation(bool bReloading); \
	virtual void CosmeticUpdatedSprinting_Implementation(bool bSprinting); \
	virtual void FinishKick_Implementation(); \
	virtual UCameraComponent* GetCamera_Implementation(); \
	virtual FVector GetEyesLocation_Implementation() const; \
	virtual USkeletalMeshComponent* GetFirstPersonMesh_Implementation(); \
	virtual bool GetForcedBracedAim_Implementation(); \
	virtual USceneComponent* GetSpringArm_Implementation(); \
	virtual USkeletalMeshComponent* GetThirdPersonMesh_Implementation(); \
	virtual void OnRep_CurrentHealth_Implementation(); \
	virtual void OnRep_EquippedItem_Implementation(); \
	virtual void OnRep_Hotbar_Implementation(); \
	virtual void OnRep_LastHit_Implementation(); \
	virtual void OnRep_Rotation_Implementation(); \
	virtual void OnRep_Suppression_Implementation(); \
	virtual void RemoveItem_Implementation(AFPSItem* Item); \
	virtual void RemoveItemAndEquip_Implementation(AFPSItem* Item, int32 Slot); \
	virtual void ServerSetBracedAim_Implementation(bool bBracedAim); \
	virtual void ServerSwitchItem_Implementation(AFPSItem* Item); \
	virtual void SetBracedAim_Implementation(bool bBracedAim); \
	virtual void SetPerspective_Implementation(bool bNewIsFirstPerson, bool bApplyArmsAnimation); \
	virtual void StartPickupItem_Implementation(AFPSItemPickup* Pickup); \
	virtual void SwitchItem_Implementation(AFPSItem* Item); \
	virtual void SwitchToSlot_Implementation(int32 Slot); \
	virtual bool TryAddAmmo_Implementation(bool bUseFullAmmo, bool bAllItems, int32 Amount); \
	virtual void UpdateBaseMovementSpeed_Implementation(); \
	virtual void UpdateMount_Implementation(); \
 \
	DECLARE_FUNCTION(execAddFreeAim); \
	DECLARE_FUNCTION(execAddItem); \
	DECLARE_FUNCTION(execAddRecoil); \
	DECLARE_FUNCTION(execAddRotationOffset); \
	DECLARE_FUNCTION(execAddSuppression); \
	DECLARE_FUNCTION(execApplyPositionOffset); \
	DECLARE_FUNCTION(execApplyRotationOffset); \
	DECLARE_FUNCTION(execBlendHeight); \
	DECLARE_FUNCTION(execBlendNightVision); \
	DECLARE_FUNCTION(execCanAddAmmo); \
	DECLARE_FUNCTION(execCanPickupItem); \
	DECLARE_FUNCTION(execCanSprint); \
	DECLARE_FUNCTION(execCanVault); \
	DECLARE_FUNCTION(execCosmeticDequipItem); \
	DECLARE_FUNCTION(execCosmeticEquipItem); \
	DECLARE_FUNCTION(execCosmeticFinishDequipItem); \
	DECLARE_FUNCTION(execCosmeticFinishEquipItem); \
	DECLARE_FUNCTION(execCosmeticSwitchItem); \
	DECLARE_FUNCTION(execCosmeticUpdatedAiming); \
	DECLARE_FUNCTION(execCosmeticUpdatedCheckingAmmo); \
	DECLARE_FUNCTION(execCosmeticUpdatedCrouching); \
	DECLARE_FUNCTION(execCosmeticUpdatedDead); \
	DECLARE_FUNCTION(execCosmeticUpdatedFiring); \
	DECLARE_FUNCTION(execCosmeticUpdatedInspecting); \
	DECLARE_FUNCTION(execCosmeticUpdatedKicking); \
	DECLARE_FUNCTION(execCosmeticUpdatedLeaning); \
	DECLARE_FUNCTION(execCosmeticUpdatedLeaningLeft); \
	DECLARE_FUNCTION(execCosmeticUpdatedLeaningRight); \
	DECLARE_FUNCTION(execCosmeticUpdatedLowReady); \
	DECLARE_FUNCTION(execCosmeticUpdatedMounted); \
	DECLARE_FUNCTION(execCosmeticUpdatedNightVision); \
	DECLARE_FUNCTION(execCosmeticUpdatedProne); \
	DECLARE_FUNCTION(execCosmeticUpdatedReloading); \
	DECLARE_FUNCTION(execCosmeticUpdatedSprinting); \
	DECLARE_FUNCTION(execFindCorner); \
	DECLARE_FUNCTION(execFinishKick); \
	DECLARE_FUNCTION(execFinishLoadAndAddItem); \
	DECLARE_FUNCTION(execFinishLoadAndSwitchItem); \
	DECLARE_FUNCTION(execFinishPickupItem); \
	DECLARE_FUNCTION(execGetAbilities); \
	DECLARE_FUNCTION(execGetAiming); \
	DECLARE_FUNCTION(execGetAimingMovementSpeedMultiplierForItem); \
	DECLARE_FUNCTION(execGetBracedAiming); \
	DECLARE_FUNCTION(execGetCamera); \
	DECLARE_FUNCTION(execGetCancelledReload); \
	DECLARE_FUNCTION(execGetCheckingAmmo); \
	DECLARE_FUNCTION(execGetClimbing); \
	DECLARE_FUNCTION(execGetCurrentHealth); \
	DECLARE_FUNCTION(execGetDead); \
	DECLARE_FUNCTION(execGetEmptyReload); \
	DECLARE_FUNCTION(execGetEquippedItemIndex); \
	DECLARE_FUNCTION(execGetEyesLocation); \
	DECLARE_FUNCTION(execGetEyesLocationNoOffset); \
	DECLARE_FUNCTION(execGetFiring); \
	DECLARE_FUNCTION(execGetFirstItem); \
	DECLARE_FUNCTION(execGetFirstPersonMesh); \
	DECLARE_FUNCTION(execGetForcedBracedAim); \
	DECLARE_FUNCTION(execGetFPSCharacterMovement); \
	DECLARE_FUNCTION(execGetInspecting); \
	DECLARE_FUNCTION(execGetKicking); \
	DECLARE_FUNCTION(execGetLeaning); \
	DECLARE_FUNCTION(execGetLeaningLeft); \
	DECLARE_FUNCTION(execGetLeaningRight); \
	DECLARE_FUNCTION(execGetLoadout); \
	DECLARE_FUNCTION(execGetLowReady); \
	DECLARE_FUNCTION(execGetMagazineData); \
	DECLARE_FUNCTION(execGetMaxReserveMagazines); \
	DECLARE_FUNCTION(execGetMeleeBasePoseLeft); \
	DECLARE_FUNCTION(execGetMeleeReadyLeft); \
	DECLARE_FUNCTION(execGetMeleeReadyRight); \
	DECLARE_FUNCTION(execGetMounted); \
	DECLARE_FUNCTION(execGetMovementSpeedMultiplierForItem); \
	DECLARE_FUNCTION(execGetProne); \
	DECLARE_FUNCTION(execGetReloading); \
	DECLARE_FUNCTION(execGetSpringArm); \
	DECLARE_FUNCTION(execGetSprinting); \
	DECLARE_FUNCTION(execGetState); \
	DECLARE_FUNCTION(execGetSuppression); \
	DECLARE_FUNCTION(execGetThirdPersonMesh); \
	DECLARE_FUNCTION(execGetTotalAmmoPercentage); \
	DECLARE_FUNCTION(execGetTotalReserveMagazines); \
	DECLARE_FUNCTION(execGetUsingMelee); \
	DECLARE_FUNCTION(execGetUsingNightVision); \
	DECLARE_FUNCTION(execGetWantsAiming); \
	DECLARE_FUNCTION(execGetWantsBracedAiming); \
	DECLARE_FUNCTION(execHasEquippedItem); \
	DECLARE_FUNCTION(execIsFirstPerson); \
	DECLARE_FUNCTION(execIsReserveAmmoFull); \
	DECLARE_FUNCTION(execOnItemDataLoaded); \
	DECLARE_FUNCTION(execOnRep_Abilities); \
	DECLARE_FUNCTION(execOnRep_AssetIDsToLoad); \
	DECLARE_FUNCTION(execOnRep_CurrentHealth); \
	DECLARE_FUNCTION(execOnRep_EquippedItem); \
	DECLARE_FUNCTION(execOnRep_Hotbar); \
	DECLARE_FUNCTION(execOnRep_LastHit); \
	DECLARE_FUNCTION(execOnRep_Rotation); \
	DECLARE_FUNCTION(execOnRep_State); \
	DECLARE_FUNCTION(execOnRep_Suppression); \
	DECLARE_FUNCTION(execRemoveItem); \
	DECLARE_FUNCTION(execRemoveItemAndEquip); \
	DECLARE_FUNCTION(execServerSetBracedAim); \
	DECLARE_FUNCTION(execServerSwitchItem); \
	DECLARE_FUNCTION(execSetAbilities); \
	DECLARE_FUNCTION(execSetAimingVisualsEnabled); \
	DECLARE_FUNCTION(execSetBracedAim); \
	DECLARE_FUNCTION(execSetCharacterMovementSpeedMultiplier); \
	DECLARE_FUNCTION(execSetCharacterVisibility); \
	DECLARE_FUNCTION(execSetCurrentHealth); \
	DECLARE_FUNCTION(execSetEquippedItem); \
	DECLARE_FUNCTION(execSetHotbar); \
	DECLARE_FUNCTION(execSetLastHit); \
	DECLARE_FUNCTION(execSetPerspective); \
	DECLARE_FUNCTION(execSetPostProcessLayerBlendWeight); \
	DECLARE_FUNCTION(execSetRotation); \
	DECLARE_FUNCTION(execSetState); \
	DECLARE_FUNCTION(execSetWantsBracedAim); \
	DECLARE_FUNCTION(execStartKick); \
	DECLARE_FUNCTION(execStartLoadAndAddItem); \
	DECLARE_FUNCTION(execStartLoadAndSwitchItem); \
	DECLARE_FUNCTION(execStartPickupItem); \
	DECLARE_FUNCTION(execSwitchItem); \
	DECLARE_FUNCTION(execSwitchToSlot); \
	DECLARE_FUNCTION(execToggleBracedAim); \
	DECLARE_FUNCTION(execTryAddAmmo); \
	DECLARE_FUNCTION(execTryKick); \
	DECLARE_FUNCTION(execUpdateBaseMovementSpeed); \
	DECLARE_FUNCTION(execUpdateBracedAim); \
	DECLARE_FUNCTION(execUpdateMount);


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSCharacterBase_h_48_EVENT_PARMS \
	struct FPSCharacterBase_eventAddItem_Parms \
	{ \
		UFPSItemData* ItemData; \
		FFPSItemSlotData SlotData; \
		bool bEquip; \
	}; \
	struct FPSCharacterBase_eventBlendHeight_Parms \
	{ \
		bool bCovered; \
	}; \
	struct FPSCharacterBase_eventCanSprint_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		FPSCharacterBase_eventCanSprint_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct FPSCharacterBase_eventCosmeticDequipItem_Parms \
	{ \
		AFPSItem* Item; \
	}; \
	struct FPSCharacterBase_eventCosmeticEquipItem_Parms \
	{ \
		AFPSItem* Item; \
	}; \
	struct FPSCharacterBase_eventCosmeticSwitchItem_Parms \
	{ \
		AFPSItem* Item; \
	}; \
	struct FPSCharacterBase_eventCosmeticUpdatedAiming_Parms \
	{ \
		bool bAiming; \
	}; \
	struct FPSCharacterBase_eventCosmeticUpdatedCheckingAmmo_Parms \
	{ \
		bool bCheckingAmmo; \
	}; \
	struct FPSCharacterBase_eventCosmeticUpdatedCrouching_Parms \
	{ \
		bool bCrouching; \
	}; \
	struct FPSCharacterBase_eventCosmeticUpdatedDead_Parms \
	{ \
		bool bDead; \
	}; \
	struct FPSCharacterBase_eventCosmeticUpdatedFiring_Parms \
	{ \
		bool bFiring; \
	}; \
	struct FPSCharacterBase_eventCosmeticUpdatedInspecting_Parms \
	{ \
		bool bInspecting; \
	}; \
	struct FPSCharacterBase_eventCosmeticUpdatedKicking_Parms \
	{ \
		bool bKicking; \
	}; \
	struct FPSCharacterBase_eventCosmeticUpdatedLeaning_Parms \
	{ \
		bool bLeaning; \
	}; \
	struct FPSCharacterBase_eventCosmeticUpdatedLeaningLeft_Parms \
	{ \
		bool bLeaningLeft; \
	}; \
	struct FPSCharacterBase_eventCosmeticUpdatedLeaningRight_Parms \
	{ \
		bool bLeaningRight; \
	}; \
	struct FPSCharacterBase_eventCosmeticUpdatedLowReady_Parms \
	{ \
		bool bLowReady; \
	}; \
	struct FPSCharacterBase_eventCosmeticUpdatedMounted_Parms \
	{ \
		bool bMounted; \
	}; \
	struct FPSCharacterBase_eventCosmeticUpdatedNightVision_Parms \
	{ \
		bool bUsingNightVision; \
	}; \
	struct FPSCharacterBase_eventCosmeticUpdatedProne_Parms \
	{ \
		bool bProne; \
	}; \
	struct FPSCharacterBase_eventCosmeticUpdatedReloading_Parms \
	{ \
		bool bReloading; \
	}; \
	struct FPSCharacterBase_eventCosmeticUpdatedSprinting_Parms \
	{ \
		bool bSprinting; \
	}; \
	struct FPSCharacterBase_eventGetCamera_Parms \
	{ \
		UCameraComponent* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		FPSCharacterBase_eventGetCamera_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	}; \
	struct FPSCharacterBase_eventGetEyesLocation_Parms \
	{ \
		FVector ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		FPSCharacterBase_eventGetEyesLocation_Parms() \
			: ReturnValue(ForceInit) \
		{ \
		} \
	}; \
	struct FPSCharacterBase_eventGetFirstPersonMesh_Parms \
	{ \
		USkeletalMeshComponent* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		FPSCharacterBase_eventGetFirstPersonMesh_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	}; \
	struct FPSCharacterBase_eventGetForcedBracedAim_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		FPSCharacterBase_eventGetForcedBracedAim_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct FPSCharacterBase_eventGetSpringArm_Parms \
	{ \
		USceneComponent* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		FPSCharacterBase_eventGetSpringArm_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	}; \
	struct FPSCharacterBase_eventGetThirdPersonMesh_Parms \
	{ \
		USkeletalMeshComponent* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		FPSCharacterBase_eventGetThirdPersonMesh_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	}; \
	struct FPSCharacterBase_eventRemoveItem_Parms \
	{ \
		AFPSItem* Item; \
	}; \
	struct FPSCharacterBase_eventRemoveItemAndEquip_Parms \
	{ \
		AFPSItem* Item; \
		int32 Slot; \
	}; \
	struct FPSCharacterBase_eventServerSetBracedAim_Parms \
	{ \
		bool bBracedAim; \
	}; \
	struct FPSCharacterBase_eventServerSwitchItem_Parms \
	{ \
		AFPSItem* Item; \
	}; \
	struct FPSCharacterBase_eventSetBracedAim_Parms \
	{ \
		bool bBracedAim; \
	}; \
	struct FPSCharacterBase_eventSetPerspective_Parms \
	{ \
		bool bNewIsFirstPerson; \
		bool bApplyArmsAnimation; \
	}; \
	struct FPSCharacterBase_eventStartPickupItem_Parms \
	{ \
		AFPSItemPickup* Pickup; \
	}; \
	struct FPSCharacterBase_eventSwitchItem_Parms \
	{ \
		AFPSItem* Item; \
	}; \
	struct FPSCharacterBase_eventSwitchToSlot_Parms \
	{ \
		int32 Slot; \
	}; \
	struct FPSCharacterBase_eventTryAddAmmo_Parms \
	{ \
		bool bUseFullAmmo; \
		bool bAllItems; \
		int32 Amount; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		FPSCharacterBase_eventTryAddAmmo_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	};


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSCharacterBase_h_48_CALLBACK_WRAPPERS
#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSCharacterBase_h_48_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFPSCharacterBase(); \
	friend struct Z_Construct_UClass_AFPSCharacterBase_Statics; \
public: \
	DECLARE_CLASS(AFPSCharacterBase, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPSController"), NO_API) \
	DECLARE_SERIALIZER(AFPSCharacterBase) \
	virtual UObject* _getUObject() const override { return const_cast<AFPSCharacterBase*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		EquippedItem=NETFIELD_REP_START, \
		Hotbar, \
		AssetIDsToLoad, \
		State, \
		Abilities, \
		MaxHealth, \
		bAllowedToSprint, \
		CurrentRecoil, \
		TargetEyeHeight, \
		Rotation, \
		Ammunition, \
		Suppression, \
		CurrentHealth, \
		LastHit, \
		NETFIELD_REP_END=LastHit	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSCharacterBase_h_48_INCLASS \
private: \
	static void StaticRegisterNativesAFPSCharacterBase(); \
	friend struct Z_Construct_UClass_AFPSCharacterBase_Statics; \
public: \
	DECLARE_CLASS(AFPSCharacterBase, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPSController"), NO_API) \
	DECLARE_SERIALIZER(AFPSCharacterBase) \
	virtual UObject* _getUObject() const override { return const_cast<AFPSCharacterBase*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		EquippedItem=NETFIELD_REP_START, \
		Hotbar, \
		AssetIDsToLoad, \
		State, \
		Abilities, \
		MaxHealth, \
		bAllowedToSprint, \
		CurrentRecoil, \
		TargetEyeHeight, \
		Rotation, \
		Ammunition, \
		Suppression, \
		CurrentHealth, \
		LastHit, \
		NETFIELD_REP_END=LastHit	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSCharacterBase_h_48_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFPSCharacterBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFPSCharacterBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPSCharacterBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSCharacterBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPSCharacterBase(AFPSCharacterBase&&); \
	NO_API AFPSCharacterBase(const AFPSCharacterBase&); \
public:


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSCharacterBase_h_48_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPSCharacterBase(AFPSCharacterBase&&); \
	NO_API AFPSCharacterBase(const AFPSCharacterBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPSCharacterBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSCharacterBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFPSCharacterBase)


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSCharacterBase_h_48_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__KickTime() { return STRUCT_OFFSET(AFPSCharacterBase, KickTime); } \
	FORCEINLINE static uint32 __PPO__Suppression() { return STRUCT_OFFSET(AFPSCharacterBase, Suppression); } \
	FORCEINLINE static uint32 __PPO__CurrentHealth() { return STRUCT_OFFSET(AFPSCharacterBase, CurrentHealth); } \
	FORCEINLINE static uint32 __PPO__MaxSuppression() { return STRUCT_OFFSET(AFPSCharacterBase, MaxSuppression); } \
	FORCEINLINE static uint32 __PPO__SuperSonicShotSuppression() { return STRUCT_OFFSET(AFPSCharacterBase, SuperSonicShotSuppression); } \
	FORCEINLINE static uint32 __PPO__ShotSuppression() { return STRUCT_OFFSET(AFPSCharacterBase, ShotSuppression); } \
	FORCEINLINE static uint32 __PPO__SuppressionDecay() { return STRUCT_OFFSET(AFPSCharacterBase, SuppressionDecay); } \
	FORCEINLINE static uint32 __PPO__SuppressionCameraModifier() { return STRUCT_OFFSET(AFPSCharacterBase, SuppressionCameraModifier); } \
	FORCEINLINE static uint32 __PPO__SprintingCameraModifier() { return STRUCT_OFFSET(AFPSCharacterBase, SprintingCameraModifier); } \
	FORCEINLINE static uint32 __PPO__LowHealthCameraModifier() { return STRUCT_OFFSET(AFPSCharacterBase, LowHealthCameraModifier); } \
	FORCEINLINE static uint32 __PPO__NightVisionCameraModifier() { return STRUCT_OFFSET(AFPSCharacterBase, NightVisionCameraModifier); } \
	FORCEINLINE static uint32 __PPO__AimingCameraModifier() { return STRUCT_OFFSET(AFPSCharacterBase, AimingCameraModifier); } \
	FORCEINLINE static uint32 __PPO__CameraAnimationCameraModifier() { return STRUCT_OFFSET(AFPSCharacterBase, CameraAnimationCameraModifier); } \
	FORCEINLINE static uint32 __PPO__DamageCameraModifier() { return STRUCT_OFFSET(AFPSCharacterBase, DamageCameraModifier); } \
	FORCEINLINE static uint32 __PPO__LastHit() { return STRUCT_OFFSET(AFPSCharacterBase, LastHit); } \
	FORCEINLINE static uint32 __PPO__FPSCharacterMovement() { return STRUCT_OFFSET(AFPSCharacterBase, FPSCharacterMovement); }


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSCharacterBase_h_46_PROLOG \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSCharacterBase_h_48_EVENT_PARMS


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSCharacterBase_h_48_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSCharacterBase_h_48_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSCharacterBase_h_48_SPARSE_DATA \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSCharacterBase_h_48_RPC_WRAPPERS \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSCharacterBase_h_48_CALLBACK_WRAPPERS \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSCharacterBase_h_48_INCLASS \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSCharacterBase_h_48_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSCharacterBase_h_48_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSCharacterBase_h_48_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSCharacterBase_h_48_SPARSE_DATA \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSCharacterBase_h_48_RPC_WRAPPERS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSCharacterBase_h_48_CALLBACK_WRAPPERS \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSCharacterBase_h_48_INCLASS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSCharacterBase_h_48_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPSCONTROLLER_API UClass* StaticClass<class AFPSCharacterBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSCharacterBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
