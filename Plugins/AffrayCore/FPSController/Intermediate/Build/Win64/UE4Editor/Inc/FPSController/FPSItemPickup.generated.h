// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UFPSItemData;
struct FFPSItemSlotData;
struct FFPSCosmetic;
class AFPSCharacterBase;
#ifdef FPSCONTROLLER_FPSItemPickup_generated_h
#error "FPSItemPickup.generated.h already included, missing '#pragma once' in FPSItemPickup.h"
#endif
#define FPSCONTROLLER_FPSItemPickup_generated_h

#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSItemPickup_h_16_SPARSE_DATA
#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSItemPickup_h_16_RPC_WRAPPERS \
	virtual void OnApplyCosmetic_Implementation(int32 Index, FFPSCosmetic Cosmetic); \
	virtual void OnRep_Enabled_Implementation(); \
	virtual void OnRep_Item_Implementation(); \
	virtual void OnRep_SlotData_Implementation(); \
	virtual void ResetPickup_Implementation(); \
	virtual void UpdateAttachments_Implementation(); \
	virtual void UpdateCosmetic_Implementation(); \
 \
	DECLARE_FUNCTION(execGetEnabled); \
	DECLARE_FUNCTION(execGetItem); \
	DECLARE_FUNCTION(execGetSlotData); \
	DECLARE_FUNCTION(execGetSwap); \
	DECLARE_FUNCTION(execGetWasSpawned); \
	DECLARE_FUNCTION(execItemLoaded); \
	DECLARE_FUNCTION(execOnApplyCosmetic); \
	DECLARE_FUNCTION(execOnRep_Enabled); \
	DECLARE_FUNCTION(execOnRep_HideWhenDisabled); \
	DECLARE_FUNCTION(execOnRep_Item); \
	DECLARE_FUNCTION(execOnRep_SlotData); \
	DECLARE_FUNCTION(execPickup); \
	DECLARE_FUNCTION(execResetPickup); \
	DECLARE_FUNCTION(execSetEnabled); \
	DECLARE_FUNCTION(execSetHideWhenDisabled); \
	DECLARE_FUNCTION(execSetItem); \
	DECLARE_FUNCTION(execSetOneUse); \
	DECLARE_FUNCTION(execSetStartEnabled); \
	DECLARE_FUNCTION(execSetSwap); \
	DECLARE_FUNCTION(execSetUsePhysics); \
	DECLARE_FUNCTION(execSetWasSpawned); \
	DECLARE_FUNCTION(execUpdateAttachments); \
	DECLARE_FUNCTION(execUpdateCosmetic);


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSItemPickup_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnApplyCosmetic_Implementation(int32 Index, FFPSCosmetic Cosmetic); \
	virtual void OnRep_Enabled_Implementation(); \
	virtual void OnRep_Item_Implementation(); \
	virtual void OnRep_SlotData_Implementation(); \
	virtual void ResetPickup_Implementation(); \
	virtual void UpdateAttachments_Implementation(); \
	virtual void UpdateCosmetic_Implementation(); \
 \
	DECLARE_FUNCTION(execGetEnabled); \
	DECLARE_FUNCTION(execGetItem); \
	DECLARE_FUNCTION(execGetSlotData); \
	DECLARE_FUNCTION(execGetSwap); \
	DECLARE_FUNCTION(execGetWasSpawned); \
	DECLARE_FUNCTION(execItemLoaded); \
	DECLARE_FUNCTION(execOnApplyCosmetic); \
	DECLARE_FUNCTION(execOnRep_Enabled); \
	DECLARE_FUNCTION(execOnRep_HideWhenDisabled); \
	DECLARE_FUNCTION(execOnRep_Item); \
	DECLARE_FUNCTION(execOnRep_SlotData); \
	DECLARE_FUNCTION(execPickup); \
	DECLARE_FUNCTION(execResetPickup); \
	DECLARE_FUNCTION(execSetEnabled); \
	DECLARE_FUNCTION(execSetHideWhenDisabled); \
	DECLARE_FUNCTION(execSetItem); \
	DECLARE_FUNCTION(execSetOneUse); \
	DECLARE_FUNCTION(execSetStartEnabled); \
	DECLARE_FUNCTION(execSetSwap); \
	DECLARE_FUNCTION(execSetUsePhysics); \
	DECLARE_FUNCTION(execSetWasSpawned); \
	DECLARE_FUNCTION(execUpdateAttachments); \
	DECLARE_FUNCTION(execUpdateCosmetic);


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSItemPickup_h_16_EVENT_PARMS \
	struct FPSItemPickup_eventOnApplyCosmetic_Parms \
	{ \
		int32 Index; \
		FFPSCosmetic Cosmetic; \
	};


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSItemPickup_h_16_CALLBACK_WRAPPERS
#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSItemPickup_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFPSItemPickup(); \
	friend struct Z_Construct_UClass_AFPSItemPickup_Statics; \
public: \
	DECLARE_CLASS(AFPSItemPickup, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPSController"), NO_API) \
	DECLARE_SERIALIZER(AFPSItemPickup) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Item=NETFIELD_REP_START, \
		SlotData, \
		bOneUse, \
		bSwap, \
		bEnabled, \
		bHideWhenDisabled, \
		bUsePhysics, \
		bWasSpawned, \
		NETFIELD_REP_END=bWasSpawned	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSItemPickup_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAFPSItemPickup(); \
	friend struct Z_Construct_UClass_AFPSItemPickup_Statics; \
public: \
	DECLARE_CLASS(AFPSItemPickup, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPSController"), NO_API) \
	DECLARE_SERIALIZER(AFPSItemPickup) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Item=NETFIELD_REP_START, \
		SlotData, \
		bOneUse, \
		bSwap, \
		bEnabled, \
		bHideWhenDisabled, \
		bUsePhysics, \
		bWasSpawned, \
		NETFIELD_REP_END=bWasSpawned	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSItemPickup_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFPSItemPickup(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFPSItemPickup) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPSItemPickup); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSItemPickup); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPSItemPickup(AFPSItemPickup&&); \
	NO_API AFPSItemPickup(const AFPSItemPickup&); \
public:


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSItemPickup_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPSItemPickup(AFPSItemPickup&&); \
	NO_API AFPSItemPickup(const AFPSItemPickup&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPSItemPickup); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSItemPickup); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFPSItemPickup)


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSItemPickup_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Item() { return STRUCT_OFFSET(AFPSItemPickup, Item); } \
	FORCEINLINE static uint32 __PPO__SlotData() { return STRUCT_OFFSET(AFPSItemPickup, SlotData); } \
	FORCEINLINE static uint32 __PPO__SkeletalMeshComponent() { return STRUCT_OFFSET(AFPSItemPickup, SkeletalMeshComponent); } \
	FORCEINLINE static uint32 __PPO__bOneUse() { return STRUCT_OFFSET(AFPSItemPickup, bOneUse); } \
	FORCEINLINE static uint32 __PPO__bSwap() { return STRUCT_OFFSET(AFPSItemPickup, bSwap); } \
	FORCEINLINE static uint32 __PPO__bEnabled() { return STRUCT_OFFSET(AFPSItemPickup, bEnabled); } \
	FORCEINLINE static uint32 __PPO__bHideWhenDisabled() { return STRUCT_OFFSET(AFPSItemPickup, bHideWhenDisabled); } \
	FORCEINLINE static uint32 __PPO__bUsePhysics() { return STRUCT_OFFSET(AFPSItemPickup, bUsePhysics); } \
	FORCEINLINE static uint32 __PPO__bWasSpawned() { return STRUCT_OFFSET(AFPSItemPickup, bWasSpawned); }


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSItemPickup_h_14_PROLOG \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSItemPickup_h_16_EVENT_PARMS


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSItemPickup_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSItemPickup_h_16_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSItemPickup_h_16_SPARSE_DATA \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSItemPickup_h_16_RPC_WRAPPERS \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSItemPickup_h_16_CALLBACK_WRAPPERS \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSItemPickup_h_16_INCLASS \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSItemPickup_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSItemPickup_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSItemPickup_h_16_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSItemPickup_h_16_SPARSE_DATA \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSItemPickup_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSItemPickup_h_16_CALLBACK_WRAPPERS \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSItemPickup_h_16_INCLASS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSItemPickup_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPSCONTROLLER_API UClass* StaticClass<class AFPSItemPickup>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSItemPickup_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
