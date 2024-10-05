// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EFireMode : uint8;
class UAnimMontage;
struct FVector;
class UDamageType;
class UFPSItemData;
class UFPSGripData;
class AFPSRangedWeapon;
#ifdef FPSCONTROLLER_FPSAnimationInstance_generated_h
#error "FPSAnimationInstance.generated.h already included, missing '#pragma once' in FPSAnimationInstance.h"
#endif
#define FPSCONTROLLER_FPSAnimationInstance_generated_h

#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSAnimationInstance_h_18_SPARSE_DATA
#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSAnimationInstance_h_18_RPC_WRAPPERS \
	virtual void CancelReloadingAnimation_Implementation() {}; \
	virtual void PlayActionAnimation_Implementation() {}; \
	virtual void PlayAttackAnimation_Implementation(EMeleeAttackDirection Direction) {}; \
	virtual void PlayBashAnimation_Implementation(bool bHit) {}; \
	virtual void PlayBeginADSAnimation_Implementation() {}; \
	virtual void PlayBreachAnimation_Implementation() {}; \
	virtual void PlayCancelAnimation_Implementation(EMeleeAttackDirection Direction) {}; \
	virtual void PlayCheckAmmoAnimation_Implementation() {}; \
	virtual void PlayCockAnimation_Implementation() {}; \
	virtual void PlayDamageAnimation_Implementation(FName Bone) {}; \
	virtual void PlayDequipAnimation_Implementation() {}; \
	virtual void PlayDryFireAnimation_Implementation() {}; \
	virtual void PlayEndADSAnimation_Implementation() {}; \
	virtual void PlayEquipAnimation_Implementation() {}; \
	virtual void PlayFiremodeAnimation_Implementation(bool bUp, EFireMode FireMode) {}; \
	virtual void PlayFiringAnimation_Implementation() {}; \
	virtual void PlayGestureAnimation_Implementation(UAnimMontage* Montage, FVector Location) {}; \
	virtual void PlayHitAnimation_Implementation(TSubclassOf<UDamageType>  DamageType, FVector HitVector, FVector HitLocation, FName InBoneName) {}; \
	virtual void PlayInspectAnimation_Implementation() {}; \
	virtual void PlayJiggleAnimation_Implementation() {}; \
	virtual void PlayPreFireAnimation_Implementation() {}; \
	virtual void PlayReloadingAnimation_Implementation(bool bEmpty) {}; \
	virtual void PlayStartReloadingAnimation_Implementation(bool bEmpty) {}; \
	virtual void PlayStopReloadingAnimation_Implementation() {}; \
	virtual void PlayThrowAnimation_Implementation(bool bUnderhand) {}; \
	virtual void PlayVaultAnimation_Implementation() {}; \
	virtual void SetupData_Implementation(UFPSItemData* Data) {}; \
	virtual void UpdateGrip_Implementation(UFPSGripData* Data, TSubclassOf<AFPSRangedWeapon>  WeaponClass) {}; \
 \
	DECLARE_FUNCTION(execCancelReloadingAnimation); \
	DECLARE_FUNCTION(execPlayActionAnimation); \
	DECLARE_FUNCTION(execPlayAttackAnimation); \
	DECLARE_FUNCTION(execPlayBashAnimation); \
	DECLARE_FUNCTION(execPlayBeginADSAnimation); \
	DECLARE_FUNCTION(execPlayBreachAnimation); \
	DECLARE_FUNCTION(execPlayCancelAnimation); \
	DECLARE_FUNCTION(execPlayCheckAmmoAnimation); \
	DECLARE_FUNCTION(execPlayCockAnimation); \
	DECLARE_FUNCTION(execPlayDamageAnimation); \
	DECLARE_FUNCTION(execPlayDequipAnimation); \
	DECLARE_FUNCTION(execPlayDryFireAnimation); \
	DECLARE_FUNCTION(execPlayEndADSAnimation); \
	DECLARE_FUNCTION(execPlayEquipAnimation); \
	DECLARE_FUNCTION(execPlayFiremodeAnimation); \
	DECLARE_FUNCTION(execPlayFiringAnimation); \
	DECLARE_FUNCTION(execPlayGestureAnimation); \
	DECLARE_FUNCTION(execPlayHitAnimation); \
	DECLARE_FUNCTION(execPlayInspectAnimation); \
	DECLARE_FUNCTION(execPlayJiggleAnimation); \
	DECLARE_FUNCTION(execPlayPreFireAnimation); \
	DECLARE_FUNCTION(execPlayReloadingAnimation); \
	DECLARE_FUNCTION(execPlayStartReloadingAnimation); \
	DECLARE_FUNCTION(execPlayStopReloadingAnimation); \
	DECLARE_FUNCTION(execPlayThrowAnimation); \
	DECLARE_FUNCTION(execPlayVaultAnimation); \
	DECLARE_FUNCTION(execSetupData); \
	DECLARE_FUNCTION(execUpdateGrip);


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSAnimationInstance_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void CancelReloadingAnimation_Implementation() {}; \
	virtual void PlayActionAnimation_Implementation() {}; \
	virtual void PlayAttackAnimation_Implementation(EMeleeAttackDirection Direction) {}; \
	virtual void PlayBashAnimation_Implementation(bool bHit) {}; \
	virtual void PlayBeginADSAnimation_Implementation() {}; \
	virtual void PlayBreachAnimation_Implementation() {}; \
	virtual void PlayCancelAnimation_Implementation(EMeleeAttackDirection Direction) {}; \
	virtual void PlayCheckAmmoAnimation_Implementation() {}; \
	virtual void PlayCockAnimation_Implementation() {}; \
	virtual void PlayDamageAnimation_Implementation(FName Bone) {}; \
	virtual void PlayDequipAnimation_Implementation() {}; \
	virtual void PlayDryFireAnimation_Implementation() {}; \
	virtual void PlayEndADSAnimation_Implementation() {}; \
	virtual void PlayEquipAnimation_Implementation() {}; \
	virtual void PlayFiremodeAnimation_Implementation(bool bUp, EFireMode FireMode) {}; \
	virtual void PlayFiringAnimation_Implementation() {}; \
	virtual void PlayGestureAnimation_Implementation(UAnimMontage* Montage, FVector Location) {}; \
	virtual void PlayHitAnimation_Implementation(TSubclassOf<UDamageType>  DamageType, FVector HitVector, FVector HitLocation, FName InBoneName) {}; \
	virtual void PlayInspectAnimation_Implementation() {}; \
	virtual void PlayJiggleAnimation_Implementation() {}; \
	virtual void PlayPreFireAnimation_Implementation() {}; \
	virtual void PlayReloadingAnimation_Implementation(bool bEmpty) {}; \
	virtual void PlayStartReloadingAnimation_Implementation(bool bEmpty) {}; \
	virtual void PlayStopReloadingAnimation_Implementation() {}; \
	virtual void PlayThrowAnimation_Implementation(bool bUnderhand) {}; \
	virtual void PlayVaultAnimation_Implementation() {}; \
	virtual void SetupData_Implementation(UFPSItemData* Data) {}; \
	virtual void UpdateGrip_Implementation(UFPSGripData* Data, TSubclassOf<AFPSRangedWeapon>  WeaponClass) {}; \
 \
	DECLARE_FUNCTION(execCancelReloadingAnimation); \
	DECLARE_FUNCTION(execPlayActionAnimation); \
	DECLARE_FUNCTION(execPlayAttackAnimation); \
	DECLARE_FUNCTION(execPlayBashAnimation); \
	DECLARE_FUNCTION(execPlayBeginADSAnimation); \
	DECLARE_FUNCTION(execPlayBreachAnimation); \
	DECLARE_FUNCTION(execPlayCancelAnimation); \
	DECLARE_FUNCTION(execPlayCheckAmmoAnimation); \
	DECLARE_FUNCTION(execPlayCockAnimation); \
	DECLARE_FUNCTION(execPlayDamageAnimation); \
	DECLARE_FUNCTION(execPlayDequipAnimation); \
	DECLARE_FUNCTION(execPlayDryFireAnimation); \
	DECLARE_FUNCTION(execPlayEndADSAnimation); \
	DECLARE_FUNCTION(execPlayEquipAnimation); \
	DECLARE_FUNCTION(execPlayFiremodeAnimation); \
	DECLARE_FUNCTION(execPlayFiringAnimation); \
	DECLARE_FUNCTION(execPlayGestureAnimation); \
	DECLARE_FUNCTION(execPlayHitAnimation); \
	DECLARE_FUNCTION(execPlayInspectAnimation); \
	DECLARE_FUNCTION(execPlayJiggleAnimation); \
	DECLARE_FUNCTION(execPlayPreFireAnimation); \
	DECLARE_FUNCTION(execPlayReloadingAnimation); \
	DECLARE_FUNCTION(execPlayStartReloadingAnimation); \
	DECLARE_FUNCTION(execPlayStopReloadingAnimation); \
	DECLARE_FUNCTION(execPlayThrowAnimation); \
	DECLARE_FUNCTION(execPlayVaultAnimation); \
	DECLARE_FUNCTION(execSetupData); \
	DECLARE_FUNCTION(execUpdateGrip);


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSAnimationInstance_h_18_EVENT_PARMS \
	struct FPSAnimationInstance_eventPlayAttackAnimation_Parms \
	{ \
		TEnumAsByte<EMeleeAttackDirection> Direction; \
	}; \
	struct FPSAnimationInstance_eventPlayBashAnimation_Parms \
	{ \
		bool bHit; \
	}; \
	struct FPSAnimationInstance_eventPlayCancelAnimation_Parms \
	{ \
		TEnumAsByte<EMeleeAttackDirection> Direction; \
	}; \
	struct FPSAnimationInstance_eventPlayDamageAnimation_Parms \
	{ \
		FName Bone; \
	}; \
	struct FPSAnimationInstance_eventPlayFiremodeAnimation_Parms \
	{ \
		bool bUp; \
		EFireMode FireMode; \
	}; \
	struct FPSAnimationInstance_eventPlayGestureAnimation_Parms \
	{ \
		UAnimMontage* Montage; \
		FVector Location; \
	}; \
	struct FPSAnimationInstance_eventPlayHitAnimation_Parms \
	{ \
		TSubclassOf<UDamageType>  DamageType; \
		FVector HitVector; \
		FVector HitLocation; \
		FName InBoneName; \
	}; \
	struct FPSAnimationInstance_eventPlayReloadingAnimation_Parms \
	{ \
		bool bEmpty; \
	}; \
	struct FPSAnimationInstance_eventPlayStartReloadingAnimation_Parms \
	{ \
		bool bEmpty; \
	}; \
	struct FPSAnimationInstance_eventPlayThrowAnimation_Parms \
	{ \
		bool bUnderhand; \
	}; \
	struct FPSAnimationInstance_eventSetupData_Parms \
	{ \
		UFPSItemData* Data; \
	}; \
	struct FPSAnimationInstance_eventUpdateGrip_Parms \
	{ \
		UFPSGripData* Data; \
		TSubclassOf<AFPSRangedWeapon>  WeaponClass; \
	};


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSAnimationInstance_h_18_CALLBACK_WRAPPERS
#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSAnimationInstance_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFPSAnimationInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFPSAnimationInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFPSAnimationInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFPSAnimationInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFPSAnimationInstance(UFPSAnimationInstance&&); \
	NO_API UFPSAnimationInstance(const UFPSAnimationInstance&); \
public:


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSAnimationInstance_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFPSAnimationInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFPSAnimationInstance(UFPSAnimationInstance&&); \
	NO_API UFPSAnimationInstance(const UFPSAnimationInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFPSAnimationInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFPSAnimationInstance); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFPSAnimationInstance)


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSAnimationInstance_h_18_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUFPSAnimationInstance(); \
	friend struct Z_Construct_UClass_UFPSAnimationInstance_Statics; \
public: \
	DECLARE_CLASS(UFPSAnimationInstance, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/FPSController"), NO_API) \
	DECLARE_SERIALIZER(UFPSAnimationInstance)


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSAnimationInstance_h_18_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSAnimationInstance_h_18_GENERATED_UINTERFACE_BODY() \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSAnimationInstance_h_18_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSAnimationInstance_h_18_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSAnimationInstance_h_18_GENERATED_UINTERFACE_BODY() \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSAnimationInstance_h_18_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSAnimationInstance_h_18_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IFPSAnimationInstance() {} \
public: \
	typedef UFPSAnimationInstance UClassType; \
	typedef IFPSAnimationInstance ThisClass; \
	static void Execute_CancelReloadingAnimation(UObject* O); \
	static void Execute_PlayActionAnimation(UObject* O); \
	static void Execute_PlayAttackAnimation(UObject* O, EMeleeAttackDirection Direction); \
	static void Execute_PlayBashAnimation(UObject* O, bool bHit); \
	static void Execute_PlayBeginADSAnimation(UObject* O); \
	static void Execute_PlayBreachAnimation(UObject* O); \
	static void Execute_PlayCancelAnimation(UObject* O, EMeleeAttackDirection Direction); \
	static void Execute_PlayCheckAmmoAnimation(UObject* O); \
	static void Execute_PlayCockAnimation(UObject* O); \
	static void Execute_PlayDamageAnimation(UObject* O, FName Bone); \
	static void Execute_PlayDequipAnimation(UObject* O); \
	static void Execute_PlayDryFireAnimation(UObject* O); \
	static void Execute_PlayEndADSAnimation(UObject* O); \
	static void Execute_PlayEquipAnimation(UObject* O); \
	static void Execute_PlayFiremodeAnimation(UObject* O, bool bUp, EFireMode FireMode); \
	static void Execute_PlayFiringAnimation(UObject* O); \
	static void Execute_PlayGestureAnimation(UObject* O, UAnimMontage* Montage, FVector Location); \
	static void Execute_PlayHitAnimation(UObject* O, TSubclassOf<UDamageType>  DamageType, FVector HitVector, FVector HitLocation, FName InBoneName); \
	static void Execute_PlayInspectAnimation(UObject* O); \
	static void Execute_PlayJiggleAnimation(UObject* O); \
	static void Execute_PlayPreFireAnimation(UObject* O); \
	static void Execute_PlayReloadingAnimation(UObject* O, bool bEmpty); \
	static void Execute_PlayStartReloadingAnimation(UObject* O, bool bEmpty); \
	static void Execute_PlayStopReloadingAnimation(UObject* O); \
	static void Execute_PlayThrowAnimation(UObject* O, bool bUnderhand); \
	static void Execute_PlayVaultAnimation(UObject* O); \
	static void Execute_SetupData(UObject* O, UFPSItemData* Data); \
	static void Execute_UpdateGrip(UObject* O, UFPSGripData* Data, TSubclassOf<AFPSRangedWeapon>  WeaponClass); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSAnimationInstance_h_18_INCLASS_IINTERFACE \
protected: \
	virtual ~IFPSAnimationInstance() {} \
public: \
	typedef UFPSAnimationInstance UClassType; \
	typedef IFPSAnimationInstance ThisClass; \
	static void Execute_CancelReloadingAnimation(UObject* O); \
	static void Execute_PlayActionAnimation(UObject* O); \
	static void Execute_PlayAttackAnimation(UObject* O, EMeleeAttackDirection Direction); \
	static void Execute_PlayBashAnimation(UObject* O, bool bHit); \
	static void Execute_PlayBeginADSAnimation(UObject* O); \
	static void Execute_PlayBreachAnimation(UObject* O); \
	static void Execute_PlayCancelAnimation(UObject* O, EMeleeAttackDirection Direction); \
	static void Execute_PlayCheckAmmoAnimation(UObject* O); \
	static void Execute_PlayCockAnimation(UObject* O); \
	static void Execute_PlayDamageAnimation(UObject* O, FName Bone); \
	static void Execute_PlayDequipAnimation(UObject* O); \
	static void Execute_PlayDryFireAnimation(UObject* O); \
	static void Execute_PlayEndADSAnimation(UObject* O); \
	static void Execute_PlayEquipAnimation(UObject* O); \
	static void Execute_PlayFiremodeAnimation(UObject* O, bool bUp, EFireMode FireMode); \
	static void Execute_PlayFiringAnimation(UObject* O); \
	static void Execute_PlayGestureAnimation(UObject* O, UAnimMontage* Montage, FVector Location); \
	static void Execute_PlayHitAnimation(UObject* O, TSubclassOf<UDamageType>  DamageType, FVector HitVector, FVector HitLocation, FName InBoneName); \
	static void Execute_PlayInspectAnimation(UObject* O); \
	static void Execute_PlayJiggleAnimation(UObject* O); \
	static void Execute_PlayPreFireAnimation(UObject* O); \
	static void Execute_PlayReloadingAnimation(UObject* O, bool bEmpty); \
	static void Execute_PlayStartReloadingAnimation(UObject* O, bool bEmpty); \
	static void Execute_PlayStopReloadingAnimation(UObject* O); \
	static void Execute_PlayThrowAnimation(UObject* O, bool bUnderhand); \
	static void Execute_PlayVaultAnimation(UObject* O); \
	static void Execute_SetupData(UObject* O, UFPSItemData* Data); \
	static void Execute_UpdateGrip(UObject* O, UFPSGripData* Data, TSubclassOf<AFPSRangedWeapon>  WeaponClass); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSAnimationInstance_h_16_PROLOG \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSAnimationInstance_h_18_EVENT_PARMS


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSAnimationInstance_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSAnimationInstance_h_18_SPARSE_DATA \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSAnimationInstance_h_18_RPC_WRAPPERS \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSAnimationInstance_h_18_CALLBACK_WRAPPERS \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSAnimationInstance_h_18_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSAnimationInstance_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSAnimationInstance_h_18_SPARSE_DATA \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSAnimationInstance_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSAnimationInstance_h_18_CALLBACK_WRAPPERS \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSAnimationInstance_h_18_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPSCONTROLLER_API UClass* StaticClass<class UFPSAnimationInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSAnimationInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
