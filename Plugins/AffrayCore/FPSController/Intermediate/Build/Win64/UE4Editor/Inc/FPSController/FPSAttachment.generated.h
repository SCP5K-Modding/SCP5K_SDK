// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AFPSItem;
struct FTransform;
class UFPSAttachmentData;
class UStaticMesh;
class USceneComponent;
struct FRotator;
class UFMODAudioComponent;
class USkeletalMeshComponent;
struct FFPSCosmetic;
#ifdef FPSCONTROLLER_FPSAttachment_generated_h
#error "FPSAttachment.generated.h already included, missing '#pragma once' in FPSAttachment.h"
#endif
#define FPSCONTROLLER_FPSAttachment_generated_h

#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSAttachment_h_20_SPARSE_DATA
#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSAttachment_h_20_RPC_WRAPPERS \
	virtual bool Attach_Implementation(AFPSItem* Item, FTransform NewRelativeTransform, FName NewAttachSocket, int32 Slot); \
	virtual void OnApplyCosmetic_Implementation(int32 Index, FFPSCosmetic Cosmetic); \
	virtual void OnDeath_Implementation(); \
	virtual void OnDequip_Implementation(); \
	virtual void OnEquip_Implementation(); \
	virtual void OnRep_AttachmentReplicatedData_Implementation(); \
	virtual void OnRep_IsEnabled_Implementation(); \
	virtual void OnRep_OwningItem_Implementation(); \
	virtual void OnUpdateADS_Implementation(bool bNewADS); \
	virtual void OnUpdateNightVision_Implementation(bool bIsNightVision); \
	virtual void ServerAttach_Implementation(AFPSItem* Item, FTransform NewRelativeTransform, FName NewAttachSocket, int32 Slot); \
	virtual void ServerSetEnabled_Implementation(bool bEnabled); \
	virtual void SetAttachmentPerspective_Implementation(bool bIsFirstPerson); \
	virtual void SetAttachmentVisibility_Implementation(bool bNewVisibility); \
	virtual void SetEnabled_Implementation(bool bEnabled); \
	virtual void SetupAttachmentData_Implementation(); \
 \
	DECLARE_FUNCTION(execApplyCosmetic); \
	DECLARE_FUNCTION(execApplyCosmeticByName); \
	DECLARE_FUNCTION(execAttach); \
	DECLARE_FUNCTION(execGetAttachmentData); \
	DECLARE_FUNCTION(execGetAttachMesh); \
	DECLARE_FUNCTION(execGetAttachMeshes); \
	DECLARE_FUNCTION(execGetAttachSocket); \
	DECLARE_FUNCTION(execGetAudioComponent); \
	DECLARE_FUNCTION(execGetFirstPersonMesh); \
	DECLARE_FUNCTION(execGetFirstPersonRoot); \
	DECLARE_FUNCTION(execGetOwningItem); \
	DECLARE_FUNCTION(execGetRelativeTransform); \
	DECLARE_FUNCTION(execGetThirdPersonMesh); \
	DECLARE_FUNCTION(execGetThirdPersonRoot); \
	DECLARE_FUNCTION(execOnApplyCosmetic); \
	DECLARE_FUNCTION(execOnDeath); \
	DECLARE_FUNCTION(execOnDequip); \
	DECLARE_FUNCTION(execOnEquip); \
	DECLARE_FUNCTION(execOnParentItemDataLoaded); \
	DECLARE_FUNCTION(execOnRep_AttachmentReplicatedData); \
	DECLARE_FUNCTION(execOnRep_IsEnabled); \
	DECLARE_FUNCTION(execOnRep_OwningItem); \
	DECLARE_FUNCTION(execOnUpdateADS); \
	DECLARE_FUNCTION(execOnUpdateNightVision); \
	DECLARE_FUNCTION(execServerAttach); \
	DECLARE_FUNCTION(execServerSetEnabled); \
	DECLARE_FUNCTION(execSetAttachmentPerspective); \
	DECLARE_FUNCTION(execSetAttachmentVisibility); \
	DECLARE_FUNCTION(execSetAttachMeshes); \
	DECLARE_FUNCTION(execSetEnabled); \
	DECLARE_FUNCTION(execSetIsEnabled); \
	DECLARE_FUNCTION(execSetOwningItem); \
	DECLARE_FUNCTION(execSetupAttachmentData);


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSAttachment_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool Attach_Implementation(AFPSItem* Item, FTransform NewRelativeTransform, FName NewAttachSocket, int32 Slot); \
	virtual void OnApplyCosmetic_Implementation(int32 Index, FFPSCosmetic Cosmetic); \
	virtual void OnDeath_Implementation(); \
	virtual void OnDequip_Implementation(); \
	virtual void OnEquip_Implementation(); \
	virtual void OnRep_AttachmentReplicatedData_Implementation(); \
	virtual void OnRep_IsEnabled_Implementation(); \
	virtual void OnRep_OwningItem_Implementation(); \
	virtual void OnUpdateADS_Implementation(bool bNewADS); \
	virtual void OnUpdateNightVision_Implementation(bool bIsNightVision); \
	virtual void ServerAttach_Implementation(AFPSItem* Item, FTransform NewRelativeTransform, FName NewAttachSocket, int32 Slot); \
	virtual void ServerSetEnabled_Implementation(bool bEnabled); \
	virtual void SetAttachmentPerspective_Implementation(bool bIsFirstPerson); \
	virtual void SetAttachmentVisibility_Implementation(bool bNewVisibility); \
	virtual void SetEnabled_Implementation(bool bEnabled); \
	virtual void SetupAttachmentData_Implementation(); \
 \
	DECLARE_FUNCTION(execApplyCosmetic); \
	DECLARE_FUNCTION(execApplyCosmeticByName); \
	DECLARE_FUNCTION(execAttach); \
	DECLARE_FUNCTION(execGetAttachmentData); \
	DECLARE_FUNCTION(execGetAttachMesh); \
	DECLARE_FUNCTION(execGetAttachMeshes); \
	DECLARE_FUNCTION(execGetAttachSocket); \
	DECLARE_FUNCTION(execGetAudioComponent); \
	DECLARE_FUNCTION(execGetFirstPersonMesh); \
	DECLARE_FUNCTION(execGetFirstPersonRoot); \
	DECLARE_FUNCTION(execGetOwningItem); \
	DECLARE_FUNCTION(execGetRelativeTransform); \
	DECLARE_FUNCTION(execGetThirdPersonMesh); \
	DECLARE_FUNCTION(execGetThirdPersonRoot); \
	DECLARE_FUNCTION(execOnApplyCosmetic); \
	DECLARE_FUNCTION(execOnDeath); \
	DECLARE_FUNCTION(execOnDequip); \
	DECLARE_FUNCTION(execOnEquip); \
	DECLARE_FUNCTION(execOnParentItemDataLoaded); \
	DECLARE_FUNCTION(execOnRep_AttachmentReplicatedData); \
	DECLARE_FUNCTION(execOnRep_IsEnabled); \
	DECLARE_FUNCTION(execOnRep_OwningItem); \
	DECLARE_FUNCTION(execOnUpdateADS); \
	DECLARE_FUNCTION(execOnUpdateNightVision); \
	DECLARE_FUNCTION(execServerAttach); \
	DECLARE_FUNCTION(execServerSetEnabled); \
	DECLARE_FUNCTION(execSetAttachmentPerspective); \
	DECLARE_FUNCTION(execSetAttachmentVisibility); \
	DECLARE_FUNCTION(execSetAttachMeshes); \
	DECLARE_FUNCTION(execSetEnabled); \
	DECLARE_FUNCTION(execSetIsEnabled); \
	DECLARE_FUNCTION(execSetOwningItem); \
	DECLARE_FUNCTION(execSetupAttachmentData);


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSAttachment_h_20_EVENT_PARMS \
	struct FPSAttachment_eventAttach_Parms \
	{ \
		AFPSItem* Item; \
		FTransform NewRelativeTransform; \
		FName NewAttachSocket; \
		int32 Slot; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		FPSAttachment_eventAttach_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct FPSAttachment_eventOnApplyCosmetic_Parms \
	{ \
		int32 Index; \
		FFPSCosmetic Cosmetic; \
	}; \
	struct FPSAttachment_eventOnUpdateADS_Parms \
	{ \
		bool bNewADS; \
	}; \
	struct FPSAttachment_eventOnUpdateNightVision_Parms \
	{ \
		bool bIsNightVision; \
	}; \
	struct FPSAttachment_eventServerAttach_Parms \
	{ \
		AFPSItem* Item; \
		FTransform NewRelativeTransform; \
		FName NewAttachSocket; \
		int32 Slot; \
	}; \
	struct FPSAttachment_eventServerSetEnabled_Parms \
	{ \
		bool bEnabled; \
	}; \
	struct FPSAttachment_eventSetAttachmentPerspective_Parms \
	{ \
		bool bIsFirstPerson; \
	}; \
	struct FPSAttachment_eventSetAttachmentVisibility_Parms \
	{ \
		bool bNewVisibility; \
	}; \
	struct FPSAttachment_eventSetEnabled_Parms \
	{ \
		bool bEnabled; \
	};


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSAttachment_h_20_CALLBACK_WRAPPERS
#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSAttachment_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFPSAttachment(); \
	friend struct Z_Construct_UClass_AFPSAttachment_Statics; \
public: \
	DECLARE_CLASS(AFPSAttachment, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPSController"), NO_API) \
	DECLARE_SERIALIZER(AFPSAttachment) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		AttachmentReplicatedData=NETFIELD_REP_START, \
		BIsEnabled, \
		OwningItem, \
		NETFIELD_REP_END=OwningItem	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSAttachment_h_20_INCLASS \
private: \
	static void StaticRegisterNativesAFPSAttachment(); \
	friend struct Z_Construct_UClass_AFPSAttachment_Statics; \
public: \
	DECLARE_CLASS(AFPSAttachment, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPSController"), NO_API) \
	DECLARE_SERIALIZER(AFPSAttachment) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		AttachmentReplicatedData=NETFIELD_REP_START, \
		BIsEnabled, \
		OwningItem, \
		NETFIELD_REP_END=OwningItem	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSAttachment_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFPSAttachment(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFPSAttachment) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPSAttachment); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSAttachment); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPSAttachment(AFPSAttachment&&); \
	NO_API AFPSAttachment(const AFPSAttachment&); \
public:


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSAttachment_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPSAttachment(AFPSAttachment&&); \
	NO_API AFPSAttachment(const AFPSAttachment&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPSAttachment); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSAttachment); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFPSAttachment)


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSAttachment_h_20_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__FirstPerson() { return STRUCT_OFFSET(AFPSAttachment, FirstPerson); } \
	FORCEINLINE static uint32 __PPO__ThirdPerson() { return STRUCT_OFFSET(AFPSAttachment, ThirdPerson); } \
	FORCEINLINE static uint32 __PPO__Mesh() { return STRUCT_OFFSET(AFPSAttachment, Mesh); } \
	FORCEINLINE static uint32 __PPO__Mesh3P() { return STRUCT_OFFSET(AFPSAttachment, Mesh3P); } \
	FORCEINLINE static uint32 __PPO__AudioComponent() { return STRUCT_OFFSET(AFPSAttachment, AudioComponent); } \
	FORCEINLINE static uint32 __PPO__AttachmentData() { return STRUCT_OFFSET(AFPSAttachment, AttachmentData); } \
	FORCEINLINE static uint32 __PPO__OwningItem() { return STRUCT_OFFSET(AFPSAttachment, OwningItem); } \
	FORCEINLINE static uint32 __PPO__FirstPersonAttachComponent() { return STRUCT_OFFSET(AFPSAttachment, FirstPersonAttachComponent); } \
	FORCEINLINE static uint32 __PPO__ThirdPersonAttachComponent() { return STRUCT_OFFSET(AFPSAttachment, ThirdPersonAttachComponent); }


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSAttachment_h_18_PROLOG \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSAttachment_h_20_EVENT_PARMS


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSAttachment_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSAttachment_h_20_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSAttachment_h_20_SPARSE_DATA \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSAttachment_h_20_RPC_WRAPPERS \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSAttachment_h_20_CALLBACK_WRAPPERS \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSAttachment_h_20_INCLASS \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSAttachment_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSAttachment_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSAttachment_h_20_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSAttachment_h_20_SPARSE_DATA \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSAttachment_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSAttachment_h_20_CALLBACK_WRAPPERS \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSAttachment_h_20_INCLASS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSAttachment_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPSCONTROLLER_API UClass* StaticClass<class AFPSAttachment>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSAttachment_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
