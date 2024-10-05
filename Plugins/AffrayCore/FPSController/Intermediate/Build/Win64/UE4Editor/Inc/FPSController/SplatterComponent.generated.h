// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
class AActor;
class AController;
class UPrimitiveComponent;
class UDamageType;
#ifdef FPSCONTROLLER_SplatterComponent_generated_h
#error "SplatterComponent.generated.h already included, missing '#pragma once' in SplatterComponent.h"
#endif
#define FPSCONTROLLER_SplatterComponent_generated_h

#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_SplatterComponent_h_17_SPARSE_DATA
#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_SplatterComponent_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAddTrace); \
	DECLARE_FUNCTION(execOnDamage); \
	DECLARE_FUNCTION(execOnRep_LastHit); \
	DECLARE_FUNCTION(execSpawnDeathDecal); \
	DECLARE_FUNCTION(execSpawnDecal); \
	DECLARE_FUNCTION(execSpawnSplatterDecals);


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_SplatterComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddTrace); \
	DECLARE_FUNCTION(execOnDamage); \
	DECLARE_FUNCTION(execOnRep_LastHit); \
	DECLARE_FUNCTION(execSpawnDeathDecal); \
	DECLARE_FUNCTION(execSpawnDecal); \
	DECLARE_FUNCTION(execSpawnSplatterDecals);


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_SplatterComponent_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSplatterComponent(); \
	friend struct Z_Construct_UClass_USplatterComponent_Statics; \
public: \
	DECLARE_CLASS(USplatterComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPSController"), NO_API) \
	DECLARE_SERIALIZER(USplatterComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		LastHit=NETFIELD_REP_START, \
		NETFIELD_REP_END=LastHit	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_SplatterComponent_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUSplatterComponent(); \
	friend struct Z_Construct_UClass_USplatterComponent_Statics; \
public: \
	DECLARE_CLASS(USplatterComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPSController"), NO_API) \
	DECLARE_SERIALIZER(USplatterComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		LastHit=NETFIELD_REP_START, \
		NETFIELD_REP_END=LastHit	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_SplatterComponent_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USplatterComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USplatterComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USplatterComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USplatterComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USplatterComponent(USplatterComponent&&); \
	NO_API USplatterComponent(const USplatterComponent&); \
public:


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_SplatterComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USplatterComponent(USplatterComponent&&); \
	NO_API USplatterComponent(const USplatterComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USplatterComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USplatterComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USplatterComponent)


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_SplatterComponent_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__OnAssetLoaded() { return STRUCT_OFFSET(USplatterComponent, OnAssetLoaded); }


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_SplatterComponent_h_15_PROLOG
#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_SplatterComponent_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_SplatterComponent_h_17_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_SplatterComponent_h_17_SPARSE_DATA \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_SplatterComponent_h_17_RPC_WRAPPERS \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_SplatterComponent_h_17_INCLASS \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_SplatterComponent_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_SplatterComponent_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_SplatterComponent_h_17_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_SplatterComponent_h_17_SPARSE_DATA \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_SplatterComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_SplatterComponent_h_17_INCLASS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_SplatterComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPSCONTROLLER_API UClass* StaticClass<class USplatterComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_SplatterComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
