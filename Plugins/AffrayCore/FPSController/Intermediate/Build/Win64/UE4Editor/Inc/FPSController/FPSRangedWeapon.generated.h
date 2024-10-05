// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAttachmentSlotData;
class AFPSAttachment;
struct FVector;
struct FRotator;
class AFPSBarrel;
enum class EFireMode : uint8;
class AFPSGrip;
class AFPSSight;
class USceneComponent;
class UFPSRangedWeaponData;
struct FVector2D;
enum class EReloadType : uint8;
struct FTransform;
class UPhysicalMaterial;
struct FBallisticProjectileData;
struct FReloadData;
class UFXSystemAsset;
class UFMODAudioComponent;
#ifdef FPSCONTROLLER_FPSRangedWeapon_generated_h
#error "FPSRangedWeapon.generated.h already included, missing '#pragma once' in FPSRangedWeapon.h"
#endif
#define FPSCONTROLLER_FPSRangedWeapon_generated_h

#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSRangedWeapon_h_31_SPARSE_DATA
#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSRangedWeapon_h_31_RPC_WRAPPERS \
	virtual void AddMagazines_Implementation(bool bForceFullAmmo, bool bReplace, bool bDisableDelay); \
	virtual void CycleMagazines_Implementation(); \
	virtual void DropMagazine_Implementation(); \
	virtual float GetADSAlignmentSpeedMultiplier_Implementation() const; \
	virtual float GetADSSpeedMultiplier_Implementation() const; \
	virtual FVector GetBarrelLocation_Implementation(bool bTransformToMesh, FRotator& Rotation, bool bIncludeAttachment) const; \
	virtual FVector GetCasingEjectionLocation_Implementation(bool bTransformToMesh, FRotator& Rotation) const; \
	virtual USceneComponent* GetIronSight_Implementation(); \
	virtual void LoadRound_Implementation(); \
	virtual void OnParticleCollide_Implementation(FVector Location, FVector Velocity, EPhysicalSurface Surface); \
	virtual void OnRep_Attachments_Implementation(); \
	virtual void OnRep_bIsAiming_Implementation(); \
	virtual void OnRep_bIsFiring_Implementation(); \
	virtual void OnRep_bIsInspecting_Implementation(); \
	virtual void OnRep_bIsLoaded_Implementation(); \
	virtual void OnRep_bIsPreFiring_Implementation(); \
	virtual void OnRep_bIsUsingAction_Implementation(); \
	virtual void OnRep_BurstCount_Implementation(); \
	virtual void OnRep_CurrentAmmo_Implementation(); \
	virtual void OnRep_CurrentBarrel_Implementation(); \
	virtual void OnRep_CurrentFireMode_Implementation(); \
	virtual void OnRep_CurrentGrip_Implementation(); \
	virtual void OnRep_CurrentSight_Implementation(); \
	virtual void OnRep_LastProjectiles_Implementation(); \
	virtual void OnRep_Magazines_Implementation(); \
	virtual void OnRep_ReloadData_Implementation(); \
	virtual void SendMagazines_Implementation(); \
	virtual void ServerSetCurrentBarrel_Implementation(AFPSBarrel* Barrel); \
	virtual void ServerSetCurrentGrip_Implementation(AFPSGrip* Grip); \
	virtual void ServerSetCurrentSight_Implementation(AFPSSight* Sight); \
	virtual void ServerSetIsFiring_Implementation(bool bNewValue); \
	virtual void SortMagazines_Implementation(); \
	virtual void StartCasing_Implementation(UFXSystemAsset* Particle); \
	virtual UFMODAudioComponent* StartFireAudio_Implementation(); \
	virtual void StartMuzzleFlash_Implementation(UFXSystemAsset* Particle); \
	virtual void StartMuzzleSmoke_Implementation(UFXSystemAsset* Particle); \
	virtual void StopFireAudio_Implementation(); \
 \
	DECLARE_FUNCTION(execAddMagazine); \
	DECLARE_FUNCTION(execAddMagazines); \
	DECLARE_FUNCTION(execAddMultipleMagazines); \
	DECLARE_FUNCTION(execCanAim); \
	DECLARE_FUNCTION(execCanCancelReload); \
	DECLARE_FUNCTION(execCanChangeFiremode); \
	DECLARE_FUNCTION(execCanInspect); \
	DECLARE_FUNCTION(execCanReload); \
	DECLARE_FUNCTION(execCanReloadWhileAiming); \
	DECLARE_FUNCTION(execCanReloadWhileSprinting); \
	DECLARE_FUNCTION(execCycleMagazines); \
	DECLARE_FUNCTION(execDropMagazine); \
	DECLARE_FUNCTION(execFindAttachmentAtSlot); \
	DECLARE_FUNCTION(execGetADSAlignmentSpeedMultiplier); \
	DECLARE_FUNCTION(execGetADSSpeedMultiplier); \
	DECLARE_FUNCTION(execGetAttachmentData); \
	DECLARE_FUNCTION(execGetBarrelLocation); \
	DECLARE_FUNCTION(execGetBulletsInNextMag); \
	DECLARE_FUNCTION(execGetCasingEjectionLocation); \
	DECLARE_FUNCTION(execGetCurrentAmmo); \
	DECLARE_FUNCTION(execGetCurrentBarrel); \
	DECLARE_FUNCTION(execGetCurrentFireMode); \
	DECLARE_FUNCTION(execGetCurrentGrip); \
	DECLARE_FUNCTION(execGetCurrentSight); \
	DECLARE_FUNCTION(execGetIdleMultiplier); \
	DECLARE_FUNCTION(execGetIronSight); \
	DECLARE_FUNCTION(execGetKickMultiplier); \
	DECLARE_FUNCTION(execGetLoudness); \
	DECLARE_FUNCTION(execGetMaxReserveAmmo); \
	DECLARE_FUNCTION(execGetMaxReserveMagazines); \
	DECLARE_FUNCTION(execGetNextMagIndex); \
	DECLARE_FUNCTION(execGetRangedWeaponData); \
	DECLARE_FUNCTION(execGetRecoil); \
	DECLARE_FUNCTION(execGetRecoilAnimationMultiplier); \
	DECLARE_FUNCTION(execGetRecoilMultiplier); \
	DECLARE_FUNCTION(execGetReloadType); \
	DECLARE_FUNCTION(execGetReserveAmmo); \
	DECLARE_FUNCTION(execGetReserveMagazines); \
	DECLARE_FUNCTION(execGetSightComponent); \
	DECLARE_FUNCTION(execGetSightDirection); \
	DECLARE_FUNCTION(execGetSightDistance); \
	DECLARE_FUNCTION(execGetSightPosition); \
	DECLARE_FUNCTION(execGetUsingAlternateGripPose); \
	DECLARE_FUNCTION(execHasAmmo); \
	DECLARE_FUNCTION(execHasAttachment); \
	DECLARE_FUNCTION(execHasFullAmmo); \
	DECLARE_FUNCTION(execHasGrip); \
	DECLARE_FUNCTION(execHasSight); \
	DECLARE_FUNCTION(execIsAiming); \
	DECLARE_FUNCTION(execIsCompensated); \
	DECLARE_FUNCTION(execIsLoaded); \
	DECLARE_FUNCTION(execIsReloading); \
	DECLARE_FUNCTION(execIsSlotGrip); \
	DECLARE_FUNCTION(execIsSlotSight); \
	DECLARE_FUNCTION(execIsSuppressed); \
	DECLARE_FUNCTION(execLoadRound); \
	DECLARE_FUNCTION(execOnCascadeParticleCollide); \
	DECLARE_FUNCTION(execOnParticleCollide); \
	DECLARE_FUNCTION(execOnRep_Attachments); \
	DECLARE_FUNCTION(execOnRep_bIsAiming); \
	DECLARE_FUNCTION(execOnRep_bIsFiring); \
	DECLARE_FUNCTION(execOnRep_bIsInspecting); \
	DECLARE_FUNCTION(execOnRep_bIsLoaded); \
	DECLARE_FUNCTION(execOnRep_bIsPreFiring); \
	DECLARE_FUNCTION(execOnRep_bIsUsingAction); \
	DECLARE_FUNCTION(execOnRep_BurstCount); \
	DECLARE_FUNCTION(execOnRep_CurrentAmmo); \
	DECLARE_FUNCTION(execOnRep_CurrentBarrel); \
	DECLARE_FUNCTION(execOnRep_CurrentFireMode); \
	DECLARE_FUNCTION(execOnRep_CurrentGrip); \
	DECLARE_FUNCTION(execOnRep_CurrentSight); \
	DECLARE_FUNCTION(execOnRep_LastProjectiles); \
	DECLARE_FUNCTION(execOnRep_Magazines); \
	DECLARE_FUNCTION(execOnRep_ReloadData); \
	DECLARE_FUNCTION(execSendMagazines); \
	DECLARE_FUNCTION(execSerializeAttachments); \
	DECLARE_FUNCTION(execServerSetCurrentBarrel); \
	DECLARE_FUNCTION(execServerSetCurrentGrip); \
	DECLARE_FUNCTION(execServerSetCurrentSight); \
	DECLARE_FUNCTION(execServerSetIsFiring); \
	DECLARE_FUNCTION(execSetAttachments); \
	DECLARE_FUNCTION(execSetBurstCount); \
	DECLARE_FUNCTION(execSetCurrentAmmo); \
	DECLARE_FUNCTION(execSetCurrentBarrel); \
	DECLARE_FUNCTION(execSetCurrentFireMode); \
	DECLARE_FUNCTION(execSetCurrentGrip); \
	DECLARE_FUNCTION(execSetCurrentSight); \
	DECLARE_FUNCTION(execSetIsAiming); \
	DECLARE_FUNCTION(execSetIsFiring); \
	DECLARE_FUNCTION(execSetIsInspecting); \
	DECLARE_FUNCTION(execSetIsLoaded); \
	DECLARE_FUNCTION(execSetIsPreFiring); \
	DECLARE_FUNCTION(execSetIsUsingAction); \
	DECLARE_FUNCTION(execSetLastProjectiles); \
	DECLARE_FUNCTION(execSetMagazines); \
	DECLARE_FUNCTION(execSetReloadData); \
	DECLARE_FUNCTION(execSetUsingAlternateGripPose); \
	DECLARE_FUNCTION(execSortMagazines); \
	DECLARE_FUNCTION(execStartCasing); \
	DECLARE_FUNCTION(execStartFireAudio); \
	DECLARE_FUNCTION(execStartMuzzleFlash); \
	DECLARE_FUNCTION(execStartMuzzleSmoke); \
	DECLARE_FUNCTION(execStopFireAudio); \
	DECLARE_FUNCTION(execUseFullAutoAudio); \
	DECLARE_FUNCTION(execUsingManualAction); \
	DECLARE_FUNCTION(execWantsDiscardMagazine);


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSRangedWeapon_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void AddMagazines_Implementation(bool bForceFullAmmo, bool bReplace, bool bDisableDelay); \
	virtual void CycleMagazines_Implementation(); \
	virtual void DropMagazine_Implementation(); \
	virtual float GetADSAlignmentSpeedMultiplier_Implementation() const; \
	virtual float GetADSSpeedMultiplier_Implementation() const; \
	virtual FVector GetBarrelLocation_Implementation(bool bTransformToMesh, FRotator& Rotation, bool bIncludeAttachment) const; \
	virtual FVector GetCasingEjectionLocation_Implementation(bool bTransformToMesh, FRotator& Rotation) const; \
	virtual USceneComponent* GetIronSight_Implementation(); \
	virtual void LoadRound_Implementation(); \
	virtual void OnParticleCollide_Implementation(FVector Location, FVector Velocity, EPhysicalSurface Surface); \
	virtual void OnRep_Attachments_Implementation(); \
	virtual void OnRep_bIsAiming_Implementation(); \
	virtual void OnRep_bIsFiring_Implementation(); \
	virtual void OnRep_bIsInspecting_Implementation(); \
	virtual void OnRep_bIsLoaded_Implementation(); \
	virtual void OnRep_bIsPreFiring_Implementation(); \
	virtual void OnRep_bIsUsingAction_Implementation(); \
	virtual void OnRep_BurstCount_Implementation(); \
	virtual void OnRep_CurrentAmmo_Implementation(); \
	virtual void OnRep_CurrentBarrel_Implementation(); \
	virtual void OnRep_CurrentFireMode_Implementation(); \
	virtual void OnRep_CurrentGrip_Implementation(); \
	virtual void OnRep_CurrentSight_Implementation(); \
	virtual void OnRep_LastProjectiles_Implementation(); \
	virtual void OnRep_Magazines_Implementation(); \
	virtual void OnRep_ReloadData_Implementation(); \
	virtual void SendMagazines_Implementation(); \
	virtual void ServerSetCurrentBarrel_Implementation(AFPSBarrel* Barrel); \
	virtual void ServerSetCurrentGrip_Implementation(AFPSGrip* Grip); \
	virtual void ServerSetCurrentSight_Implementation(AFPSSight* Sight); \
	virtual void ServerSetIsFiring_Implementation(bool bNewValue); \
	virtual void SortMagazines_Implementation(); \
	virtual void StartCasing_Implementation(UFXSystemAsset* Particle); \
	virtual UFMODAudioComponent* StartFireAudio_Implementation(); \
	virtual void StartMuzzleFlash_Implementation(UFXSystemAsset* Particle); \
	virtual void StartMuzzleSmoke_Implementation(UFXSystemAsset* Particle); \
	virtual void StopFireAudio_Implementation(); \
 \
	DECLARE_FUNCTION(execAddMagazine); \
	DECLARE_FUNCTION(execAddMagazines); \
	DECLARE_FUNCTION(execAddMultipleMagazines); \
	DECLARE_FUNCTION(execCanAim); \
	DECLARE_FUNCTION(execCanCancelReload); \
	DECLARE_FUNCTION(execCanChangeFiremode); \
	DECLARE_FUNCTION(execCanInspect); \
	DECLARE_FUNCTION(execCanReload); \
	DECLARE_FUNCTION(execCanReloadWhileAiming); \
	DECLARE_FUNCTION(execCanReloadWhileSprinting); \
	DECLARE_FUNCTION(execCycleMagazines); \
	DECLARE_FUNCTION(execDropMagazine); \
	DECLARE_FUNCTION(execFindAttachmentAtSlot); \
	DECLARE_FUNCTION(execGetADSAlignmentSpeedMultiplier); \
	DECLARE_FUNCTION(execGetADSSpeedMultiplier); \
	DECLARE_FUNCTION(execGetAttachmentData); \
	DECLARE_FUNCTION(execGetBarrelLocation); \
	DECLARE_FUNCTION(execGetBulletsInNextMag); \
	DECLARE_FUNCTION(execGetCasingEjectionLocation); \
	DECLARE_FUNCTION(execGetCurrentAmmo); \
	DECLARE_FUNCTION(execGetCurrentBarrel); \
	DECLARE_FUNCTION(execGetCurrentFireMode); \
	DECLARE_FUNCTION(execGetCurrentGrip); \
	DECLARE_FUNCTION(execGetCurrentSight); \
	DECLARE_FUNCTION(execGetIdleMultiplier); \
	DECLARE_FUNCTION(execGetIronSight); \
	DECLARE_FUNCTION(execGetKickMultiplier); \
	DECLARE_FUNCTION(execGetLoudness); \
	DECLARE_FUNCTION(execGetMaxReserveAmmo); \
	DECLARE_FUNCTION(execGetMaxReserveMagazines); \
	DECLARE_FUNCTION(execGetNextMagIndex); \
	DECLARE_FUNCTION(execGetRangedWeaponData); \
	DECLARE_FUNCTION(execGetRecoil); \
	DECLARE_FUNCTION(execGetRecoilAnimationMultiplier); \
	DECLARE_FUNCTION(execGetRecoilMultiplier); \
	DECLARE_FUNCTION(execGetReloadType); \
	DECLARE_FUNCTION(execGetReserveAmmo); \
	DECLARE_FUNCTION(execGetReserveMagazines); \
	DECLARE_FUNCTION(execGetSightComponent); \
	DECLARE_FUNCTION(execGetSightDirection); \
	DECLARE_FUNCTION(execGetSightDistance); \
	DECLARE_FUNCTION(execGetSightPosition); \
	DECLARE_FUNCTION(execGetUsingAlternateGripPose); \
	DECLARE_FUNCTION(execHasAmmo); \
	DECLARE_FUNCTION(execHasAttachment); \
	DECLARE_FUNCTION(execHasFullAmmo); \
	DECLARE_FUNCTION(execHasGrip); \
	DECLARE_FUNCTION(execHasSight); \
	DECLARE_FUNCTION(execIsAiming); \
	DECLARE_FUNCTION(execIsCompensated); \
	DECLARE_FUNCTION(execIsLoaded); \
	DECLARE_FUNCTION(execIsReloading); \
	DECLARE_FUNCTION(execIsSlotGrip); \
	DECLARE_FUNCTION(execIsSlotSight); \
	DECLARE_FUNCTION(execIsSuppressed); \
	DECLARE_FUNCTION(execLoadRound); \
	DECLARE_FUNCTION(execOnCascadeParticleCollide); \
	DECLARE_FUNCTION(execOnParticleCollide); \
	DECLARE_FUNCTION(execOnRep_Attachments); \
	DECLARE_FUNCTION(execOnRep_bIsAiming); \
	DECLARE_FUNCTION(execOnRep_bIsFiring); \
	DECLARE_FUNCTION(execOnRep_bIsInspecting); \
	DECLARE_FUNCTION(execOnRep_bIsLoaded); \
	DECLARE_FUNCTION(execOnRep_bIsPreFiring); \
	DECLARE_FUNCTION(execOnRep_bIsUsingAction); \
	DECLARE_FUNCTION(execOnRep_BurstCount); \
	DECLARE_FUNCTION(execOnRep_CurrentAmmo); \
	DECLARE_FUNCTION(execOnRep_CurrentBarrel); \
	DECLARE_FUNCTION(execOnRep_CurrentFireMode); \
	DECLARE_FUNCTION(execOnRep_CurrentGrip); \
	DECLARE_FUNCTION(execOnRep_CurrentSight); \
	DECLARE_FUNCTION(execOnRep_LastProjectiles); \
	DECLARE_FUNCTION(execOnRep_Magazines); \
	DECLARE_FUNCTION(execOnRep_ReloadData); \
	DECLARE_FUNCTION(execSendMagazines); \
	DECLARE_FUNCTION(execSerializeAttachments); \
	DECLARE_FUNCTION(execServerSetCurrentBarrel); \
	DECLARE_FUNCTION(execServerSetCurrentGrip); \
	DECLARE_FUNCTION(execServerSetCurrentSight); \
	DECLARE_FUNCTION(execServerSetIsFiring); \
	DECLARE_FUNCTION(execSetAttachments); \
	DECLARE_FUNCTION(execSetBurstCount); \
	DECLARE_FUNCTION(execSetCurrentAmmo); \
	DECLARE_FUNCTION(execSetCurrentBarrel); \
	DECLARE_FUNCTION(execSetCurrentFireMode); \
	DECLARE_FUNCTION(execSetCurrentGrip); \
	DECLARE_FUNCTION(execSetCurrentSight); \
	DECLARE_FUNCTION(execSetIsAiming); \
	DECLARE_FUNCTION(execSetIsFiring); \
	DECLARE_FUNCTION(execSetIsInspecting); \
	DECLARE_FUNCTION(execSetIsLoaded); \
	DECLARE_FUNCTION(execSetIsPreFiring); \
	DECLARE_FUNCTION(execSetIsUsingAction); \
	DECLARE_FUNCTION(execSetLastProjectiles); \
	DECLARE_FUNCTION(execSetMagazines); \
	DECLARE_FUNCTION(execSetReloadData); \
	DECLARE_FUNCTION(execSetUsingAlternateGripPose); \
	DECLARE_FUNCTION(execSortMagazines); \
	DECLARE_FUNCTION(execStartCasing); \
	DECLARE_FUNCTION(execStartFireAudio); \
	DECLARE_FUNCTION(execStartMuzzleFlash); \
	DECLARE_FUNCTION(execStartMuzzleSmoke); \
	DECLARE_FUNCTION(execStopFireAudio); \
	DECLARE_FUNCTION(execUseFullAutoAudio); \
	DECLARE_FUNCTION(execUsingManualAction); \
	DECLARE_FUNCTION(execWantsDiscardMagazine);


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSRangedWeapon_h_31_EVENT_PARMS \
	struct FPSRangedWeapon_eventAddMagazines_Parms \
	{ \
		bool bForceFullAmmo; \
		bool bReplace; \
		bool bDisableDelay; \
	}; \
	struct FPSRangedWeapon_eventGetADSAlignmentSpeedMultiplier_Parms \
	{ \
		float ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		FPSRangedWeapon_eventGetADSAlignmentSpeedMultiplier_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	}; \
	struct FPSRangedWeapon_eventGetADSSpeedMultiplier_Parms \
	{ \
		float ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		FPSRangedWeapon_eventGetADSSpeedMultiplier_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	}; \
	struct FPSRangedWeapon_eventGetBarrelLocation_Parms \
	{ \
		bool bTransformToMesh; \
		FRotator Rotation; \
		bool bIncludeAttachment; \
		FVector ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		FPSRangedWeapon_eventGetBarrelLocation_Parms() \
			: ReturnValue(ForceInit) \
		{ \
		} \
	}; \
	struct FPSRangedWeapon_eventGetCasingEjectionLocation_Parms \
	{ \
		bool bTransformToMesh; \
		FRotator Rotation; \
		FVector ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		FPSRangedWeapon_eventGetCasingEjectionLocation_Parms() \
			: ReturnValue(ForceInit) \
		{ \
		} \
	}; \
	struct FPSRangedWeapon_eventGetIronSight_Parms \
	{ \
		USceneComponent* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		FPSRangedWeapon_eventGetIronSight_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	}; \
	struct FPSRangedWeapon_eventOnParticleCollide_Parms \
	{ \
		FVector Location; \
		FVector Velocity; \
		TEnumAsByte<EPhysicalSurface> Surface; \
	}; \
	struct FPSRangedWeapon_eventServerSetCurrentBarrel_Parms \
	{ \
		AFPSBarrel* Barrel; \
	}; \
	struct FPSRangedWeapon_eventServerSetCurrentGrip_Parms \
	{ \
		AFPSGrip* Grip; \
	}; \
	struct FPSRangedWeapon_eventServerSetCurrentSight_Parms \
	{ \
		AFPSSight* Sight; \
	}; \
	struct FPSRangedWeapon_eventServerSetIsFiring_Parms \
	{ \
		bool bNewValue; \
	}; \
	struct FPSRangedWeapon_eventStartCasing_Parms \
	{ \
		UFXSystemAsset* Particle; \
	}; \
	struct FPSRangedWeapon_eventStartFireAudio_Parms \
	{ \
		UFMODAudioComponent* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		FPSRangedWeapon_eventStartFireAudio_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	}; \
	struct FPSRangedWeapon_eventStartMuzzleFlash_Parms \
	{ \
		UFXSystemAsset* Particle; \
	}; \
	struct FPSRangedWeapon_eventStartMuzzleSmoke_Parms \
	{ \
		UFXSystemAsset* Particle; \
	};


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSRangedWeapon_h_31_CALLBACK_WRAPPERS
#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSRangedWeapon_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFPSRangedWeapon(); \
	friend struct Z_Construct_UClass_AFPSRangedWeapon_Statics; \
public: \
	DECLARE_CLASS(AFPSRangedWeapon, AFPSWeapon, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPSController"), NO_API) \
	DECLARE_SERIALIZER(AFPSRangedWeapon) \
	virtual UObject* _getUObject() const override { return const_cast<AFPSRangedWeapon*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bIsInspecting=NETFIELD_REP_START, \
		bIsPreFiring, \
		bIsFiring, \
		bIsAiming, \
		bIsLoaded, \
		bIsUsingAction, \
		ReloadData, \
		Magazines, \
		CurrentMagIndex, \
		Attachments, \
		AttachmentsData, \
		CurrentGrip, \
		CurrentBarrel, \
		CurrentSight, \
		CurrentAmmo, \
		BurstCount, \
		CurrentFireMode, \
		LastProjectiles, \
		Sights, \
		Physmats, \
		NETFIELD_REP_END=Physmats	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSRangedWeapon_h_31_INCLASS \
private: \
	static void StaticRegisterNativesAFPSRangedWeapon(); \
	friend struct Z_Construct_UClass_AFPSRangedWeapon_Statics; \
public: \
	DECLARE_CLASS(AFPSRangedWeapon, AFPSWeapon, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPSController"), NO_API) \
	DECLARE_SERIALIZER(AFPSRangedWeapon) \
	virtual UObject* _getUObject() const override { return const_cast<AFPSRangedWeapon*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bIsInspecting=NETFIELD_REP_START, \
		bIsPreFiring, \
		bIsFiring, \
		bIsAiming, \
		bIsLoaded, \
		bIsUsingAction, \
		ReloadData, \
		Magazines, \
		CurrentMagIndex, \
		Attachments, \
		AttachmentsData, \
		CurrentGrip, \
		CurrentBarrel, \
		CurrentSight, \
		CurrentAmmo, \
		BurstCount, \
		CurrentFireMode, \
		LastProjectiles, \
		Sights, \
		Physmats, \
		NETFIELD_REP_END=Physmats	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSRangedWeapon_h_31_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFPSRangedWeapon(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFPSRangedWeapon) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPSRangedWeapon); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSRangedWeapon); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPSRangedWeapon(AFPSRangedWeapon&&); \
	NO_API AFPSRangedWeapon(const AFPSRangedWeapon&); \
public:


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSRangedWeapon_h_31_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPSRangedWeapon(AFPSRangedWeapon&&); \
	NO_API AFPSRangedWeapon(const AFPSRangedWeapon&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPSRangedWeapon); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSRangedWeapon); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFPSRangedWeapon)


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSRangedWeapon_h_31_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__RangedWeaponData() { return STRUCT_OFFSET(AFPSRangedWeapon, RangedWeaponData); } \
	FORCEINLINE static uint32 __PPO__MuzzleFlashComponent() { return STRUCT_OFFSET(AFPSRangedWeapon, MuzzleFlashComponent); } \
	FORCEINLINE static uint32 __PPO__MuzzleSmokeComponent() { return STRUCT_OFFSET(AFPSRangedWeapon, MuzzleSmokeComponent); } \
	FORCEINLINE static uint32 __PPO__CasingComponent() { return STRUCT_OFFSET(AFPSRangedWeapon, CasingComponent); } \
	FORCEINLINE static uint32 __PPO__bIsInspecting() { return STRUCT_OFFSET(AFPSRangedWeapon, bIsInspecting); } \
	FORCEINLINE static uint32 __PPO__bIsPreFiring() { return STRUCT_OFFSET(AFPSRangedWeapon, bIsPreFiring); } \
	FORCEINLINE static uint32 __PPO__bIsFiring() { return STRUCT_OFFSET(AFPSRangedWeapon, bIsFiring); } \
	FORCEINLINE static uint32 __PPO__bIsAiming() { return STRUCT_OFFSET(AFPSRangedWeapon, bIsAiming); } \
	FORCEINLINE static uint32 __PPO__bIsLoaded() { return STRUCT_OFFSET(AFPSRangedWeapon, bIsLoaded); } \
	FORCEINLINE static uint32 __PPO__bIsUsingAction() { return STRUCT_OFFSET(AFPSRangedWeapon, bIsUsingAction); } \
	FORCEINLINE static uint32 __PPO__ReloadData() { return STRUCT_OFFSET(AFPSRangedWeapon, ReloadData); } \
	FORCEINLINE static uint32 __PPO__Magazines() { return STRUCT_OFFSET(AFPSRangedWeapon, Magazines); } \
	FORCEINLINE static uint32 __PPO__CurrentMagIndex() { return STRUCT_OFFSET(AFPSRangedWeapon, CurrentMagIndex); } \
	FORCEINLINE static uint32 __PPO__Attachments() { return STRUCT_OFFSET(AFPSRangedWeapon, Attachments); } \
	FORCEINLINE static uint32 __PPO__AttachmentsData() { return STRUCT_OFFSET(AFPSRangedWeapon, AttachmentsData); } \
	FORCEINLINE static uint32 __PPO__CurrentGrip() { return STRUCT_OFFSET(AFPSRangedWeapon, CurrentGrip); } \
	FORCEINLINE static uint32 __PPO__CurrentBarrel() { return STRUCT_OFFSET(AFPSRangedWeapon, CurrentBarrel); } \
	FORCEINLINE static uint32 __PPO__CurrentSight() { return STRUCT_OFFSET(AFPSRangedWeapon, CurrentSight); } \
	FORCEINLINE static uint32 __PPO__CurrentAmmo() { return STRUCT_OFFSET(AFPSRangedWeapon, CurrentAmmo); } \
	FORCEINLINE static uint32 __PPO__BurstCount() { return STRUCT_OFFSET(AFPSRangedWeapon, BurstCount); } \
	FORCEINLINE static uint32 __PPO__CurrentFireMode() { return STRUCT_OFFSET(AFPSRangedWeapon, CurrentFireMode); } \
	FORCEINLINE static uint32 __PPO__bUsingAlternateGripPose() { return STRUCT_OFFSET(AFPSRangedWeapon, bUsingAlternateGripPose); } \
	FORCEINLINE static uint32 __PPO__bWantsAction() { return STRUCT_OFFSET(AFPSRangedWeapon, bWantsAction); } \
	FORCEINLINE static uint32 __PPO__bWantsAim() { return STRUCT_OFFSET(AFPSRangedWeapon, bWantsAim); } \
	FORCEINLINE static uint32 __PPO__LastProjectiles() { return STRUCT_OFFSET(AFPSRangedWeapon, LastProjectiles); } \
	FORCEINLINE static uint32 __PPO__Sights() { return STRUCT_OFFSET(AFPSRangedWeapon, Sights); } \
	FORCEINLINE static uint32 __PPO__MinTracerDistance() { return STRUCT_OFFSET(AFPSRangedWeapon, MinTracerDistance); } \
	FORCEINLINE static uint32 __PPO__ControlFactor() { return STRUCT_OFFSET(AFPSRangedWeapon, ControlFactor); } \
	FORCEINLINE static uint32 __PPO__ADSAlignmentSpeedMultiplier() { return STRUCT_OFFSET(AFPSRangedWeapon, ADSAlignmentSpeedMultiplier); } \
	FORCEINLINE static uint32 __PPO__ADSSpeedMultiplier() { return STRUCT_OFFSET(AFPSRangedWeapon, ADSSpeedMultiplier); } \
	FORCEINLINE static uint32 __PPO__PreviousSight() { return STRUCT_OFFSET(AFPSRangedWeapon, PreviousSight); } \
	FORCEINLINE static uint32 __PPO__Physmats() { return STRUCT_OFFSET(AFPSRangedWeapon, Physmats); }


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSRangedWeapon_h_29_PROLOG \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSRangedWeapon_h_31_EVENT_PARMS


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSRangedWeapon_h_31_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSRangedWeapon_h_31_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSRangedWeapon_h_31_SPARSE_DATA \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSRangedWeapon_h_31_RPC_WRAPPERS \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSRangedWeapon_h_31_CALLBACK_WRAPPERS \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSRangedWeapon_h_31_INCLASS \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSRangedWeapon_h_31_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSRangedWeapon_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSRangedWeapon_h_31_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSRangedWeapon_h_31_SPARSE_DATA \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSRangedWeapon_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSRangedWeapon_h_31_CALLBACK_WRAPPERS \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSRangedWeapon_h_31_INCLASS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSRangedWeapon_h_31_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPSCONTROLLER_API UClass* StaticClass<class AFPSRangedWeapon>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSRangedWeapon_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
