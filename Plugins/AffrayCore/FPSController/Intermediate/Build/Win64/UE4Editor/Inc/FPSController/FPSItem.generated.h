// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AFPSItem;
struct FAttachmentSlotData;
class UStaticMeshComponent;
class AFPSAttachment;
class USkeletalMeshComponent;
class USceneComponent;
class UFPSItemData;
struct FPrimaryAssetId;
class AFPSCharacterBase;
struct FFPSItemSlotData;
struct FFPSCosmetic;
class AActor;
struct FMeleeHitData;
struct FSimpleHitData;
#ifdef FPSCONTROLLER_FPSItem_generated_h
#error "FPSItem.generated.h already included, missing '#pragma once' in FPSItem.h"
#endif
#define FPSCONTROLLER_FPSItem_generated_h

#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSItem_h_30_DELEGATE \
struct FPSItem_eventItemDataLoadedDelegate_Parms \
{ \
	AFPSItem* Item; \
}; \
static inline void FItemDataLoadedDelegate_DelegateWrapper(const FMulticastScriptDelegate& ItemDataLoadedDelegate, AFPSItem* Item) \
{ \
	FPSItem_eventItemDataLoadedDelegate_Parms Parms; \
	Parms.Item=Item; \
	ItemDataLoadedDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSItem_h_28_SPARSE_DATA
#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSItem_h_28_RPC_WRAPPERS \
	virtual void AddAmmo_Implementation(bool bUseFullAmmo, int32 InAmount); \
	virtual void ApplyCosmetic_Implementation(int32 Index); \
	virtual bool CanAddAmmo_Implementation(int32 InAmount) const; \
	virtual bool CanBash_Implementation(float Bias) const; \
	virtual bool CanUseCosmetic_Implementation(int32 Index); \
	virtual bool CanUseGesture_Implementation() const; \
	virtual bool CanUseItem_Implementation(float Bias) const; \
	virtual void CharacterUpdated_Implementation(); \
	virtual void CheckAmmo_Implementation(); \
	virtual void CheckBash_Implementation(); \
	virtual void ClientTick_Implementation(); \
	virtual void CosmeticBash_Implementation(bool bSuccess); \
	virtual void CosmeticCheckAmmo_Implementation(); \
	virtual void CosmeticEndDequip_Implementation(); \
	virtual void CosmeticEndEquip_Implementation(); \
	virtual void CosmeticFinishBash_Implementation(bool bSuccess); \
	virtual void CosmeticKick_Implementation(bool bSuccess); \
	virtual void CosmeticStartDequip_Implementation(); \
	virtual void CosmeticStartEquip_Implementation(); \
	virtual void CycleMode_Implementation(); \
	virtual USkeletalMeshComponent* GetMesh_Implementation() const; \
	virtual void Jiggle_Implementation(); \
	virtual void MulticastCheckAmmo_Implementation(); \
	virtual void OnAdd_Implementation(); \
	virtual void OnApplyCosmetic_Implementation(int32 Index, FFPSCosmetic Cosmetic); \
	virtual void OnDeath_Implementation(); \
	virtual void OnRemove_Implementation(); \
	virtual void OnRep_CurrentCosmetic_Implementation(); \
	virtual void OnRep_FPSCharacter_Implementation(); \
	virtual void OnRep_IsEquipped_Implementation(); \
	virtual void OnUpdateNightVision_Implementation(bool bIsNightVision); \
	virtual void OnUpdateSprinting_Implementation(bool bIsSprinting); \
	virtual void OwnerTick_Implementation(); \
	virtual void ServerApplyCosmetic_Implementation(int32 Index); \
	virtual void ServerBash_Implementation(FMeleeHitData Data, TArray<FSimpleHitData> const& Hits); \
	virtual void ServerCheckAmmo_Implementation(); \
	virtual void ServerInitItem_Implementation(); \
	virtual void ServerStartDequip_Implementation(); \
	virtual void ServerStartEquip_Implementation(); \
	virtual void SetItemPerspective_Implementation(bool bIsFirstPerson); \
	virtual void SetItemVisibility_Implementation(bool bVisible); \
	virtual void SetupAnimationData_Implementation(); \
	virtual void SetupItemData_Implementation(UFPSItemData* Data); \
	virtual void StartBash_Implementation(); \
	virtual void StartDequip_Implementation(); \
	virtual void StartEquip_Implementation(); \
	virtual void StartPrimaryAction_Implementation(); \
	virtual void StartSecondaryAction_Implementation(); \
	virtual void StopPrimaryAction_Implementation(); \
	virtual void StopSecondaryAction_Implementation(); \
	virtual void ToggleSpecial_Implementation(); \
 \
	DECLARE_FUNCTION(execAddAmmo); \
	DECLARE_FUNCTION(execAddAttachMesh); \
	DECLARE_FUNCTION(execApplyCosmetic); \
	DECLARE_FUNCTION(execApplyCosmeticNoChecks); \
	DECLARE_FUNCTION(execCanAddAmmo); \
	DECLARE_FUNCTION(execCanBash); \
	DECLARE_FUNCTION(execCanUseCosmetic); \
	DECLARE_FUNCTION(execCanUseGesture); \
	DECLARE_FUNCTION(execCanUseItem); \
	DECLARE_FUNCTION(execCharacterUpdated); \
	DECLARE_FUNCTION(execCheckAmmo); \
	DECLARE_FUNCTION(execCheckBash); \
	DECLARE_FUNCTION(execClientTick); \
	DECLARE_FUNCTION(execCosmeticBash); \
	DECLARE_FUNCTION(execCosmeticCheckAmmo); \
	DECLARE_FUNCTION(execCosmeticEndDequip); \
	DECLARE_FUNCTION(execCosmeticEndEquip); \
	DECLARE_FUNCTION(execCosmeticFinishBash); \
	DECLARE_FUNCTION(execCosmeticKick); \
	DECLARE_FUNCTION(execCosmeticStartDequip); \
	DECLARE_FUNCTION(execCosmeticStartEquip); \
	DECLARE_FUNCTION(execCycleMode); \
	DECLARE_FUNCTION(execFinishedLoadingItemData); \
	DECLARE_FUNCTION(execGetDelay); \
	DECLARE_FUNCTION(execGetFirstPersonMesh); \
	DECLARE_FUNCTION(execGetFirstPersonRoot); \
	DECLARE_FUNCTION(execGetItemData); \
	DECLARE_FUNCTION(execGetItemDataAssetID); \
	DECLARE_FUNCTION(execGetMesh); \
	DECLARE_FUNCTION(execGetMovementSpeedMultiplier); \
	DECLARE_FUNCTION(execGetOwningCharacter); \
	DECLARE_FUNCTION(execGetSlotData); \
	DECLARE_FUNCTION(execGetThirdPersonMesh); \
	DECLARE_FUNCTION(execGetThirdPersonRoot); \
	DECLARE_FUNCTION(execIsLocallyOwned); \
	DECLARE_FUNCTION(execIsValidItem); \
	DECLARE_FUNCTION(execJiggle); \
	DECLARE_FUNCTION(execMulticastCheckAmmo); \
	DECLARE_FUNCTION(execOnAdd); \
	DECLARE_FUNCTION(execOnApplyCosmetic); \
	DECLARE_FUNCTION(execOnCharacterDestroyed); \
	DECLARE_FUNCTION(execOnDeath); \
	DECLARE_FUNCTION(execOnRemove); \
	DECLARE_FUNCTION(execOnRep_CurrentCosmetic); \
	DECLARE_FUNCTION(execOnRep_FPSCharacter); \
	DECLARE_FUNCTION(execOnRep_IsEquipped); \
	DECLARE_FUNCTION(execOnRep_ItemDataAssetID); \
	DECLARE_FUNCTION(execOnRep_MeleeData); \
	DECLARE_FUNCTION(execOnUpdateNightVision); \
	DECLARE_FUNCTION(execOnUpdateSprinting); \
	DECLARE_FUNCTION(execOwnerTick); \
	DECLARE_FUNCTION(execRemoveAttachMesh); \
	DECLARE_FUNCTION(execServerApplyCosmetic); \
	DECLARE_FUNCTION(execServerBash); \
	DECLARE_FUNCTION(execServerCheckAmmo); \
	DECLARE_FUNCTION(execServerFinishBash); \
	DECLARE_FUNCTION(execServerInitItem); \
	DECLARE_FUNCTION(execServerStartDequip); \
	DECLARE_FUNCTION(execServerStartEquip); \
	DECLARE_FUNCTION(execSetBoneVisibility); \
	DECLARE_FUNCTION(execSetCharacter); \
	DECLARE_FUNCTION(execSetCurrentCosmetic); \
	DECLARE_FUNCTION(execSetDelay); \
	DECLARE_FUNCTION(execSetFPSCharacter); \
	DECLARE_FUNCTION(execSetIsEquipped); \
	DECLARE_FUNCTION(execSetItemPerspective); \
	DECLARE_FUNCTION(execSetItemVisibility); \
	DECLARE_FUNCTION(execSetupAnimationData); \
	DECLARE_FUNCTION(execSetupItemData); \
	DECLARE_FUNCTION(execStartBash); \
	DECLARE_FUNCTION(execStartDequip); \
	DECLARE_FUNCTION(execStartEquip); \
	DECLARE_FUNCTION(execStartPrimaryAction); \
	DECLARE_FUNCTION(execStartSecondaryAction); \
	DECLARE_FUNCTION(execStopPrimaryAction); \
	DECLARE_FUNCTION(execStopSecondaryAction); \
	DECLARE_FUNCTION(execToggleSpecial);


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSItem_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void AddAmmo_Implementation(bool bUseFullAmmo, int32 InAmount); \
	virtual void ApplyCosmetic_Implementation(int32 Index); \
	virtual bool CanAddAmmo_Implementation(int32 InAmount) const; \
	virtual bool CanBash_Implementation(float Bias) const; \
	virtual bool CanUseCosmetic_Implementation(int32 Index); \
	virtual bool CanUseGesture_Implementation() const; \
	virtual bool CanUseItem_Implementation(float Bias) const; \
	virtual void CharacterUpdated_Implementation(); \
	virtual void CheckAmmo_Implementation(); \
	virtual void CheckBash_Implementation(); \
	virtual void ClientTick_Implementation(); \
	virtual void CosmeticBash_Implementation(bool bSuccess); \
	virtual void CosmeticCheckAmmo_Implementation(); \
	virtual void CosmeticEndDequip_Implementation(); \
	virtual void CosmeticEndEquip_Implementation(); \
	virtual void CosmeticFinishBash_Implementation(bool bSuccess); \
	virtual void CosmeticKick_Implementation(bool bSuccess); \
	virtual void CosmeticStartDequip_Implementation(); \
	virtual void CosmeticStartEquip_Implementation(); \
	virtual void CycleMode_Implementation(); \
	virtual USkeletalMeshComponent* GetMesh_Implementation() const; \
	virtual void Jiggle_Implementation(); \
	virtual void MulticastCheckAmmo_Implementation(); \
	virtual void OnAdd_Implementation(); \
	virtual void OnApplyCosmetic_Implementation(int32 Index, FFPSCosmetic Cosmetic); \
	virtual void OnDeath_Implementation(); \
	virtual void OnRemove_Implementation(); \
	virtual void OnRep_CurrentCosmetic_Implementation(); \
	virtual void OnRep_FPSCharacter_Implementation(); \
	virtual void OnRep_IsEquipped_Implementation(); \
	virtual void OnUpdateNightVision_Implementation(bool bIsNightVision); \
	virtual void OnUpdateSprinting_Implementation(bool bIsSprinting); \
	virtual void OwnerTick_Implementation(); \
	virtual void ServerApplyCosmetic_Implementation(int32 Index); \
	virtual void ServerBash_Implementation(FMeleeHitData Data, TArray<FSimpleHitData> const& Hits); \
	virtual void ServerCheckAmmo_Implementation(); \
	virtual void ServerInitItem_Implementation(); \
	virtual void ServerStartDequip_Implementation(); \
	virtual void ServerStartEquip_Implementation(); \
	virtual void SetItemPerspective_Implementation(bool bIsFirstPerson); \
	virtual void SetItemVisibility_Implementation(bool bVisible); \
	virtual void SetupAnimationData_Implementation(); \
	virtual void SetupItemData_Implementation(UFPSItemData* Data); \
	virtual void StartBash_Implementation(); \
	virtual void StartDequip_Implementation(); \
	virtual void StartEquip_Implementation(); \
	virtual void StartPrimaryAction_Implementation(); \
	virtual void StartSecondaryAction_Implementation(); \
	virtual void StopPrimaryAction_Implementation(); \
	virtual void StopSecondaryAction_Implementation(); \
	virtual void ToggleSpecial_Implementation(); \
 \
	DECLARE_FUNCTION(execAddAmmo); \
	DECLARE_FUNCTION(execAddAttachMesh); \
	DECLARE_FUNCTION(execApplyCosmetic); \
	DECLARE_FUNCTION(execApplyCosmeticNoChecks); \
	DECLARE_FUNCTION(execCanAddAmmo); \
	DECLARE_FUNCTION(execCanBash); \
	DECLARE_FUNCTION(execCanUseCosmetic); \
	DECLARE_FUNCTION(execCanUseGesture); \
	DECLARE_FUNCTION(execCanUseItem); \
	DECLARE_FUNCTION(execCharacterUpdated); \
	DECLARE_FUNCTION(execCheckAmmo); \
	DECLARE_FUNCTION(execCheckBash); \
	DECLARE_FUNCTION(execClientTick); \
	DECLARE_FUNCTION(execCosmeticBash); \
	DECLARE_FUNCTION(execCosmeticCheckAmmo); \
	DECLARE_FUNCTION(execCosmeticEndDequip); \
	DECLARE_FUNCTION(execCosmeticEndEquip); \
	DECLARE_FUNCTION(execCosmeticFinishBash); \
	DECLARE_FUNCTION(execCosmeticKick); \
	DECLARE_FUNCTION(execCosmeticStartDequip); \
	DECLARE_FUNCTION(execCosmeticStartEquip); \
	DECLARE_FUNCTION(execCycleMode); \
	DECLARE_FUNCTION(execFinishedLoadingItemData); \
	DECLARE_FUNCTION(execGetDelay); \
	DECLARE_FUNCTION(execGetFirstPersonMesh); \
	DECLARE_FUNCTION(execGetFirstPersonRoot); \
	DECLARE_FUNCTION(execGetItemData); \
	DECLARE_FUNCTION(execGetItemDataAssetID); \
	DECLARE_FUNCTION(execGetMesh); \
	DECLARE_FUNCTION(execGetMovementSpeedMultiplier); \
	DECLARE_FUNCTION(execGetOwningCharacter); \
	DECLARE_FUNCTION(execGetSlotData); \
	DECLARE_FUNCTION(execGetThirdPersonMesh); \
	DECLARE_FUNCTION(execGetThirdPersonRoot); \
	DECLARE_FUNCTION(execIsLocallyOwned); \
	DECLARE_FUNCTION(execIsValidItem); \
	DECLARE_FUNCTION(execJiggle); \
	DECLARE_FUNCTION(execMulticastCheckAmmo); \
	DECLARE_FUNCTION(execOnAdd); \
	DECLARE_FUNCTION(execOnApplyCosmetic); \
	DECLARE_FUNCTION(execOnCharacterDestroyed); \
	DECLARE_FUNCTION(execOnDeath); \
	DECLARE_FUNCTION(execOnRemove); \
	DECLARE_FUNCTION(execOnRep_CurrentCosmetic); \
	DECLARE_FUNCTION(execOnRep_FPSCharacter); \
	DECLARE_FUNCTION(execOnRep_IsEquipped); \
	DECLARE_FUNCTION(execOnRep_ItemDataAssetID); \
	DECLARE_FUNCTION(execOnRep_MeleeData); \
	DECLARE_FUNCTION(execOnUpdateNightVision); \
	DECLARE_FUNCTION(execOnUpdateSprinting); \
	DECLARE_FUNCTION(execOwnerTick); \
	DECLARE_FUNCTION(execRemoveAttachMesh); \
	DECLARE_FUNCTION(execServerApplyCosmetic); \
	DECLARE_FUNCTION(execServerBash); \
	DECLARE_FUNCTION(execServerCheckAmmo); \
	DECLARE_FUNCTION(execServerFinishBash); \
	DECLARE_FUNCTION(execServerInitItem); \
	DECLARE_FUNCTION(execServerStartDequip); \
	DECLARE_FUNCTION(execServerStartEquip); \
	DECLARE_FUNCTION(execSetBoneVisibility); \
	DECLARE_FUNCTION(execSetCharacter); \
	DECLARE_FUNCTION(execSetCurrentCosmetic); \
	DECLARE_FUNCTION(execSetDelay); \
	DECLARE_FUNCTION(execSetFPSCharacter); \
	DECLARE_FUNCTION(execSetIsEquipped); \
	DECLARE_FUNCTION(execSetItemPerspective); \
	DECLARE_FUNCTION(execSetItemVisibility); \
	DECLARE_FUNCTION(execSetupAnimationData); \
	DECLARE_FUNCTION(execSetupItemData); \
	DECLARE_FUNCTION(execStartBash); \
	DECLARE_FUNCTION(execStartDequip); \
	DECLARE_FUNCTION(execStartEquip); \
	DECLARE_FUNCTION(execStartPrimaryAction); \
	DECLARE_FUNCTION(execStartSecondaryAction); \
	DECLARE_FUNCTION(execStopPrimaryAction); \
	DECLARE_FUNCTION(execStopSecondaryAction); \
	DECLARE_FUNCTION(execToggleSpecial);


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSItem_h_28_EVENT_PARMS \
	struct FPSItem_eventAddAmmo_Parms \
	{ \
		bool bUseFullAmmo; \
		int32 InAmount; \
	}; \
	struct FPSItem_eventApplyCosmetic_Parms \
	{ \
		int32 Index; \
	}; \
	struct FPSItem_eventCanAddAmmo_Parms \
	{ \
		int32 InAmount; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		FPSItem_eventCanAddAmmo_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct FPSItem_eventCanBash_Parms \
	{ \
		float Bias; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		FPSItem_eventCanBash_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct FPSItem_eventCanUseCosmetic_Parms \
	{ \
		int32 Index; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		FPSItem_eventCanUseCosmetic_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct FPSItem_eventCanUseGesture_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		FPSItem_eventCanUseGesture_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct FPSItem_eventCanUseItem_Parms \
	{ \
		float Bias; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		FPSItem_eventCanUseItem_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct FPSItem_eventCosmeticBash_Parms \
	{ \
		bool bSuccess; \
	}; \
	struct FPSItem_eventCosmeticFinishBash_Parms \
	{ \
		bool bSuccess; \
	}; \
	struct FPSItem_eventCosmeticKick_Parms \
	{ \
		bool bSuccess; \
	}; \
	struct FPSItem_eventGetMesh_Parms \
	{ \
		USkeletalMeshComponent* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		FPSItem_eventGetMesh_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	}; \
	struct FPSItem_eventOnApplyCosmetic_Parms \
	{ \
		int32 Index; \
		FFPSCosmetic Cosmetic; \
	}; \
	struct FPSItem_eventOnUpdateNightVision_Parms \
	{ \
		bool bIsNightVision; \
	}; \
	struct FPSItem_eventOnUpdateSprinting_Parms \
	{ \
		bool bIsSprinting; \
	}; \
	struct FPSItem_eventServerApplyCosmetic_Parms \
	{ \
		int32 Index; \
	}; \
	struct FPSItem_eventServerBash_Parms \
	{ \
		FMeleeHitData Data; \
		TArray<FSimpleHitData> Hits; \
	}; \
	struct FPSItem_eventSetItemPerspective_Parms \
	{ \
		bool bIsFirstPerson; \
	}; \
	struct FPSItem_eventSetItemVisibility_Parms \
	{ \
		bool bVisible; \
	}; \
	struct FPSItem_eventSetupItemData_Parms \
	{ \
		UFPSItemData* Data; \
	};


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSItem_h_28_CALLBACK_WRAPPERS
#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSItem_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFPSItem(); \
	friend struct Z_Construct_UClass_AFPSItem_Statics; \
public: \
	DECLARE_CLASS(AFPSItem, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPSController"), NO_API) \
	DECLARE_SERIALIZER(AFPSItem) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bIsEquipped=NETFIELD_REP_START, \
		CurrentCosmetic, \
		FPSCharacter, \
		ItemDataAssetID, \
		MeleeData, \
		SlotData, \
		NETFIELD_REP_END=SlotData	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSItem_h_28_INCLASS \
private: \
	static void StaticRegisterNativesAFPSItem(); \
	friend struct Z_Construct_UClass_AFPSItem_Statics; \
public: \
	DECLARE_CLASS(AFPSItem, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPSController"), NO_API) \
	DECLARE_SERIALIZER(AFPSItem) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bIsEquipped=NETFIELD_REP_START, \
		CurrentCosmetic, \
		FPSCharacter, \
		ItemDataAssetID, \
		MeleeData, \
		SlotData, \
		NETFIELD_REP_END=SlotData	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSItem_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFPSItem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFPSItem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPSItem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSItem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPSItem(AFPSItem&&); \
	NO_API AFPSItem(const AFPSItem&); \
public:


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSItem_h_28_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPSItem(AFPSItem&&); \
	NO_API AFPSItem(const AFPSItem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPSItem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSItem); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFPSItem)


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSItem_h_28_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__FPSCharacter() { return STRUCT_OFFSET(AFPSItem, FPSCharacter); } \
	FORCEINLINE static uint32 __PPO__ItemData() { return STRUCT_OFFSET(AFPSItem, ItemData); } \
	FORCEINLINE static uint32 __PPO__ItemDataAssetID() { return STRUCT_OFFSET(AFPSItem, ItemDataAssetID); } \
	FORCEINLINE static uint32 __PPO__MeleeData() { return STRUCT_OFFSET(AFPSItem, MeleeData); } \
	FORCEINLINE static uint32 __PPO__Delay() { return STRUCT_OFFSET(AFPSItem, Delay); } \
	FORCEINLINE static uint32 __PPO__DeltaTime() { return STRUCT_OFFSET(AFPSItem, DeltaTime); } \
	FORCEINLINE static uint32 __PPO__OriginalMaterials() { return STRUCT_OFFSET(AFPSItem, OriginalMaterials); } \
	FORCEINLINE static uint32 __PPO__ItemAnimationInstance() { return STRUCT_OFFSET(AFPSItem, ItemAnimationInstance); } \
	FORCEINLINE static uint32 __PPO__ThirdPersonAnimationInstance() { return STRUCT_OFFSET(AFPSItem, ThirdPersonAnimationInstance); } \
	FORCEINLINE static uint32 __PPO__ArmsAnimationInstance() { return STRUCT_OFFSET(AFPSItem, ArmsAnimationInstance); } \
	FORCEINLINE static uint32 __PPO__Root() { return STRUCT_OFFSET(AFPSItem, Root); } \
	FORCEINLINE static uint32 __PPO__FirstPerson() { return STRUCT_OFFSET(AFPSItem, FirstPerson); } \
	FORCEINLINE static uint32 __PPO__ThirdPerson() { return STRUCT_OFFSET(AFPSItem, ThirdPerson); } \
	FORCEINLINE static uint32 __PPO__Mesh() { return STRUCT_OFFSET(AFPSItem, Mesh); } \
	FORCEINLINE static uint32 __PPO__Mesh3P() { return STRUCT_OFFSET(AFPSItem, Mesh3P); }


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSItem_h_26_PROLOG \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSItem_h_28_EVENT_PARMS


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSItem_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSItem_h_28_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSItem_h_28_SPARSE_DATA \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSItem_h_28_RPC_WRAPPERS \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSItem_h_28_CALLBACK_WRAPPERS \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSItem_h_28_INCLASS \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSItem_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSItem_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSItem_h_28_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSItem_h_28_SPARSE_DATA \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSItem_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSItem_h_28_CALLBACK_WRAPPERS \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSItem_h_28_INCLASS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSItem_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPSCONTROLLER_API UClass* StaticClass<class AFPSItem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSItem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
