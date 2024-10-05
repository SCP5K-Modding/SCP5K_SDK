// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FMeleeHitData;
struct FVector;
struct FHitResult;
#ifdef FPSCONTROLLER_FPSMeleeWeapon_generated_h
#error "FPSMeleeWeapon.generated.h already included, missing '#pragma once' in FPSMeleeWeapon.h"
#endif
#define FPSCONTROLLER_FPSMeleeWeapon_generated_h

#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSMeleeWeapon_h_17_SPARSE_DATA
#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSMeleeWeapon_h_17_RPC_WRAPPERS \
	virtual void CosmeticHit_Implementation(EMeleeAttackDirection Direction, FMeleeHitData HitData); \
	virtual void ServerCancelAttack_Implementation(EMeleeAttackDirection Direction); \
	virtual void ServerProcessHit_Implementation(FMeleeHitData Hit); \
	virtual void ServerStartAttack_Implementation(EMeleeAttackDirection Direction); \
	virtual void ServerUpdateReady_Implementation(EMeleeAttackDirection Direction, bool bReady); \
 \
	DECLARE_FUNCTION(execCancelAttack); \
	DECLARE_FUNCTION(execCosmeticCancelAttack); \
	DECLARE_FUNCTION(execCosmeticHit); \
	DECLARE_FUNCTION(execCosmeticStartAttack); \
	DECLARE_FUNCTION(execFlipAttackDirection); \
	DECLARE_FUNCTION(execGetAttackVector); \
	DECLARE_FUNCTION(execOnRep_MeleeHitData); \
	DECLARE_FUNCTION(execReady); \
	DECLARE_FUNCTION(execRunWeaponTrace); \
	DECLARE_FUNCTION(execServerCancelAttack); \
	DECLARE_FUNCTION(execServerProcessHit); \
	DECLARE_FUNCTION(execServerStartAttack); \
	DECLARE_FUNCTION(execServerUpdateReady); \
	DECLARE_FUNCTION(execSetReadyDirection); \
	DECLARE_FUNCTION(execStartAttack); \
	DECLARE_FUNCTION(execTryStartAttack); \
	DECLARE_FUNCTION(execTryStartReady); \
	DECLARE_FUNCTION(execUpdateReady);


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSMeleeWeapon_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void CosmeticHit_Implementation(EMeleeAttackDirection Direction, FMeleeHitData HitData); \
	virtual void ServerCancelAttack_Implementation(EMeleeAttackDirection Direction); \
	virtual void ServerProcessHit_Implementation(FMeleeHitData Hit); \
	virtual void ServerStartAttack_Implementation(EMeleeAttackDirection Direction); \
	virtual void ServerUpdateReady_Implementation(EMeleeAttackDirection Direction, bool bReady); \
 \
	DECLARE_FUNCTION(execCancelAttack); \
	DECLARE_FUNCTION(execCosmeticCancelAttack); \
	DECLARE_FUNCTION(execCosmeticHit); \
	DECLARE_FUNCTION(execCosmeticStartAttack); \
	DECLARE_FUNCTION(execFlipAttackDirection); \
	DECLARE_FUNCTION(execGetAttackVector); \
	DECLARE_FUNCTION(execOnRep_MeleeHitData); \
	DECLARE_FUNCTION(execReady); \
	DECLARE_FUNCTION(execRunWeaponTrace); \
	DECLARE_FUNCTION(execServerCancelAttack); \
	DECLARE_FUNCTION(execServerProcessHit); \
	DECLARE_FUNCTION(execServerStartAttack); \
	DECLARE_FUNCTION(execServerUpdateReady); \
	DECLARE_FUNCTION(execSetReadyDirection); \
	DECLARE_FUNCTION(execStartAttack); \
	DECLARE_FUNCTION(execTryStartAttack); \
	DECLARE_FUNCTION(execTryStartReady); \
	DECLARE_FUNCTION(execUpdateReady);


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSMeleeWeapon_h_17_EVENT_PARMS \
	struct FPSMeleeWeapon_eventCosmeticHit_Parms \
	{ \
		TEnumAsByte<EMeleeAttackDirection> Direction; \
		FMeleeHitData HitData; \
	}; \
	struct FPSMeleeWeapon_eventServerCancelAttack_Parms \
	{ \
		TEnumAsByte<EMeleeAttackDirection> Direction; \
	}; \
	struct FPSMeleeWeapon_eventServerProcessHit_Parms \
	{ \
		FMeleeHitData Hit; \
	}; \
	struct FPSMeleeWeapon_eventServerStartAttack_Parms \
	{ \
		TEnumAsByte<EMeleeAttackDirection> Direction; \
	}; \
	struct FPSMeleeWeapon_eventServerUpdateReady_Parms \
	{ \
		TEnumAsByte<EMeleeAttackDirection> Direction; \
		bool bReady; \
	};


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSMeleeWeapon_h_17_CALLBACK_WRAPPERS
#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSMeleeWeapon_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFPSMeleeWeapon(); \
	friend struct Z_Construct_UClass_AFPSMeleeWeapon_Statics; \
public: \
	DECLARE_CLASS(AFPSMeleeWeapon, AFPSWeapon, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPSController"), NO_API) \
	DECLARE_SERIALIZER(AFPSMeleeWeapon) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		MeleeHitData=NETFIELD_REP_START, \
		NETFIELD_REP_END=MeleeHitData	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSMeleeWeapon_h_17_INCLASS \
private: \
	static void StaticRegisterNativesAFPSMeleeWeapon(); \
	friend struct Z_Construct_UClass_AFPSMeleeWeapon_Statics; \
public: \
	DECLARE_CLASS(AFPSMeleeWeapon, AFPSWeapon, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPSController"), NO_API) \
	DECLARE_SERIALIZER(AFPSMeleeWeapon) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		MeleeHitData=NETFIELD_REP_START, \
		NETFIELD_REP_END=MeleeHitData	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSMeleeWeapon_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFPSMeleeWeapon(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFPSMeleeWeapon) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPSMeleeWeapon); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSMeleeWeapon); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPSMeleeWeapon(AFPSMeleeWeapon&&); \
	NO_API AFPSMeleeWeapon(const AFPSMeleeWeapon&); \
public:


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSMeleeWeapon_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPSMeleeWeapon(AFPSMeleeWeapon&&); \
	NO_API AFPSMeleeWeapon(const AFPSMeleeWeapon&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPSMeleeWeapon); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSMeleeWeapon); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFPSMeleeWeapon)


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSMeleeWeapon_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__AudioComponent() { return STRUCT_OFFSET(AFPSMeleeWeapon, AudioComponent); }


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSMeleeWeapon_h_15_PROLOG \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSMeleeWeapon_h_17_EVENT_PARMS


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSMeleeWeapon_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSMeleeWeapon_h_17_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSMeleeWeapon_h_17_SPARSE_DATA \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSMeleeWeapon_h_17_RPC_WRAPPERS \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSMeleeWeapon_h_17_CALLBACK_WRAPPERS \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSMeleeWeapon_h_17_INCLASS \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSMeleeWeapon_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSMeleeWeapon_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSMeleeWeapon_h_17_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSMeleeWeapon_h_17_SPARSE_DATA \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSMeleeWeapon_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSMeleeWeapon_h_17_CALLBACK_WRAPPERS \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSMeleeWeapon_h_17_INCLASS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSMeleeWeapon_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPSCONTROLLER_API UClass* StaticClass<class AFPSMeleeWeapon>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSMeleeWeapon_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
