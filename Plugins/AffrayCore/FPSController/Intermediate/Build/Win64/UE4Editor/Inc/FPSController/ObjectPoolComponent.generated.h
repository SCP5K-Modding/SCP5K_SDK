// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FTransform;
#ifdef FPSCONTROLLER_ObjectPoolComponent_generated_h
#error "ObjectPoolComponent.generated.h already included, missing '#pragma once' in ObjectPoolComponent.h"
#endif
#define FPSCONTROLLER_ObjectPoolComponent_generated_h

#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_ObjectPoolComponent_h_13_SPARSE_DATA
#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_ObjectPoolComponent_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCreateObject); \
	DECLARE_FUNCTION(execReturnObject);


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_ObjectPoolComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCreateObject); \
	DECLARE_FUNCTION(execReturnObject);


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_ObjectPoolComponent_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUObjectPoolComponent(); \
	friend struct Z_Construct_UClass_UObjectPoolComponent_Statics; \
public: \
	DECLARE_CLASS(UObjectPoolComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPSController"), NO_API) \
	DECLARE_SERIALIZER(UObjectPoolComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		UsedPool=NETFIELD_REP_START, \
		AvailablePool, \
		NETFIELD_REP_END=AvailablePool	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_ObjectPoolComponent_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUObjectPoolComponent(); \
	friend struct Z_Construct_UClass_UObjectPoolComponent_Statics; \
public: \
	DECLARE_CLASS(UObjectPoolComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPSController"), NO_API) \
	DECLARE_SERIALIZER(UObjectPoolComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		UsedPool=NETFIELD_REP_START, \
		AvailablePool, \
		NETFIELD_REP_END=AvailablePool	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_ObjectPoolComponent_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UObjectPoolComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UObjectPoolComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UObjectPoolComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UObjectPoolComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UObjectPoolComponent(UObjectPoolComponent&&); \
	NO_API UObjectPoolComponent(const UObjectPoolComponent&); \
public:


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_ObjectPoolComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UObjectPoolComponent(UObjectPoolComponent&&); \
	NO_API UObjectPoolComponent(const UObjectPoolComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UObjectPoolComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UObjectPoolComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UObjectPoolComponent)


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_ObjectPoolComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ObjectClass() { return STRUCT_OFFSET(UObjectPoolComponent, ObjectClass); } \
	FORCEINLINE static uint32 __PPO__UsedPool() { return STRUCT_OFFSET(UObjectPoolComponent, UsedPool); } \
	FORCEINLINE static uint32 __PPO__AvailablePool() { return STRUCT_OFFSET(UObjectPoolComponent, AvailablePool); }


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_ObjectPoolComponent_h_11_PROLOG
#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_ObjectPoolComponent_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_ObjectPoolComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_ObjectPoolComponent_h_13_SPARSE_DATA \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_ObjectPoolComponent_h_13_RPC_WRAPPERS \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_ObjectPoolComponent_h_13_INCLASS \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_ObjectPoolComponent_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_ObjectPoolComponent_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_ObjectPoolComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_ObjectPoolComponent_h_13_SPARSE_DATA \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_ObjectPoolComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_ObjectPoolComponent_h_13_INCLASS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_ObjectPoolComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPSCONTROLLER_API UClass* StaticClass<class UObjectPoolComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_ObjectPoolComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
