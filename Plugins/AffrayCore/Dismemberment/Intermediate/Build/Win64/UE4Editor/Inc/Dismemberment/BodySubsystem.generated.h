// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FVector;
struct FBody;
#ifdef DISMEMBERMENT_BodySubsystem_generated_h
#error "BodySubsystem.generated.h already included, missing '#pragma once' in BodySubsystem.h"
#endif
#define DISMEMBERMENT_BodySubsystem_generated_h

#define SCP5K_SDK_Plugins_AffrayCore_Dismemberment_Source_Dismemberment_Public_BodySubsystem_h_12_SPARSE_DATA
#define SCP5K_SDK_Plugins_AffrayCore_Dismemberment_Source_Dismemberment_Public_BodySubsystem_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAddBody); \
	DECLARE_FUNCTION(execAddStaticBody); \
	DECLARE_FUNCTION(execFindClosestBody); \
	DECLARE_FUNCTION(execFindClosestDynamicBody); \
	DECLARE_FUNCTION(execSetMaxSize);


#define SCP5K_SDK_Plugins_AffrayCore_Dismemberment_Source_Dismemberment_Public_BodySubsystem_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddBody); \
	DECLARE_FUNCTION(execAddStaticBody); \
	DECLARE_FUNCTION(execFindClosestBody); \
	DECLARE_FUNCTION(execFindClosestDynamicBody); \
	DECLARE_FUNCTION(execSetMaxSize);


#define SCP5K_SDK_Plugins_AffrayCore_Dismemberment_Source_Dismemberment_Public_BodySubsystem_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBodySubsystem(); \
	friend struct Z_Construct_UClass_UBodySubsystem_Statics; \
public: \
	DECLARE_CLASS(UBodySubsystem, UWorldSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Dismemberment"), NO_API) \
	DECLARE_SERIALIZER(UBodySubsystem)


#define SCP5K_SDK_Plugins_AffrayCore_Dismemberment_Source_Dismemberment_Public_BodySubsystem_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUBodySubsystem(); \
	friend struct Z_Construct_UClass_UBodySubsystem_Statics; \
public: \
	DECLARE_CLASS(UBodySubsystem, UWorldSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Dismemberment"), NO_API) \
	DECLARE_SERIALIZER(UBodySubsystem)


#define SCP5K_SDK_Plugins_AffrayCore_Dismemberment_Source_Dismemberment_Public_BodySubsystem_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBodySubsystem(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBodySubsystem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBodySubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBodySubsystem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBodySubsystem(UBodySubsystem&&); \
	NO_API UBodySubsystem(const UBodySubsystem&); \
public:


#define SCP5K_SDK_Plugins_AffrayCore_Dismemberment_Source_Dismemberment_Public_BodySubsystem_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBodySubsystem(UBodySubsystem&&); \
	NO_API UBodySubsystem(const UBodySubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBodySubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBodySubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UBodySubsystem)


#define SCP5K_SDK_Plugins_AffrayCore_Dismemberment_Source_Dismemberment_Public_BodySubsystem_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MaxSize() { return STRUCT_OFFSET(UBodySubsystem, MaxSize); } \
	FORCEINLINE static uint32 __PPO__CurrentIndex() { return STRUCT_OFFSET(UBodySubsystem, CurrentIndex); } \
	FORCEINLINE static uint32 __PPO__bAutoInitialize() { return STRUCT_OFFSET(UBodySubsystem, bAutoInitialize); }


#define SCP5K_SDK_Plugins_AffrayCore_Dismemberment_Source_Dismemberment_Public_BodySubsystem_h_10_PROLOG
#define SCP5K_SDK_Plugins_AffrayCore_Dismemberment_Source_Dismemberment_Public_BodySubsystem_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_AffrayCore_Dismemberment_Source_Dismemberment_Public_BodySubsystem_h_12_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_AffrayCore_Dismemberment_Source_Dismemberment_Public_BodySubsystem_h_12_SPARSE_DATA \
	SCP5K_SDK_Plugins_AffrayCore_Dismemberment_Source_Dismemberment_Public_BodySubsystem_h_12_RPC_WRAPPERS \
	SCP5K_SDK_Plugins_AffrayCore_Dismemberment_Source_Dismemberment_Public_BodySubsystem_h_12_INCLASS \
	SCP5K_SDK_Plugins_AffrayCore_Dismemberment_Source_Dismemberment_Public_BodySubsystem_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SCP5K_SDK_Plugins_AffrayCore_Dismemberment_Source_Dismemberment_Public_BodySubsystem_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_AffrayCore_Dismemberment_Source_Dismemberment_Public_BodySubsystem_h_12_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_AffrayCore_Dismemberment_Source_Dismemberment_Public_BodySubsystem_h_12_SPARSE_DATA \
	SCP5K_SDK_Plugins_AffrayCore_Dismemberment_Source_Dismemberment_Public_BodySubsystem_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_AffrayCore_Dismemberment_Source_Dismemberment_Public_BodySubsystem_h_12_INCLASS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_AffrayCore_Dismemberment_Source_Dismemberment_Public_BodySubsystem_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DISMEMBERMENT_API UClass* StaticClass<class UBodySubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_AffrayCore_Dismemberment_Source_Dismemberment_Public_BodySubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
