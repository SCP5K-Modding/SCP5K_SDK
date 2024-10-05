// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAMEPLAYOBJECTIVES_ProgressObjective_generated_h
#error "ProgressObjective.generated.h already included, missing '#pragma once' in ProgressObjective.h"
#endif
#define GAMEPLAYOBJECTIVES_ProgressObjective_generated_h

#define SCP5K_SDK_Plugins_AffrayCore_GameplayObjectives_Source_GameplayObjectives_Public_ProgressObjective_h_8_SPARSE_DATA
#define SCP5K_SDK_Plugins_AffrayCore_GameplayObjectives_Source_GameplayObjectives_Public_ProgressObjective_h_8_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetProgress); \
	DECLARE_FUNCTION(execOnRep_CurrentProgress); \
	DECLARE_FUNCTION(execSetProgress);


#define SCP5K_SDK_Plugins_AffrayCore_GameplayObjectives_Source_GameplayObjectives_Public_ProgressObjective_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetProgress); \
	DECLARE_FUNCTION(execOnRep_CurrentProgress); \
	DECLARE_FUNCTION(execSetProgress);


#define SCP5K_SDK_Plugins_AffrayCore_GameplayObjectives_Source_GameplayObjectives_Public_ProgressObjective_h_8_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUProgressObjective(); \
	friend struct Z_Construct_UClass_UProgressObjective_Statics; \
public: \
	DECLARE_CLASS(UProgressObjective, UObjective, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameplayObjectives"), NO_API) \
	DECLARE_SERIALIZER(UProgressObjective) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		CurrentProgress=NETFIELD_REP_START, \
		NETFIELD_REP_END=CurrentProgress	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define SCP5K_SDK_Plugins_AffrayCore_GameplayObjectives_Source_GameplayObjectives_Public_ProgressObjective_h_8_INCLASS \
private: \
	static void StaticRegisterNativesUProgressObjective(); \
	friend struct Z_Construct_UClass_UProgressObjective_Statics; \
public: \
	DECLARE_CLASS(UProgressObjective, UObjective, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameplayObjectives"), NO_API) \
	DECLARE_SERIALIZER(UProgressObjective) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		CurrentProgress=NETFIELD_REP_START, \
		NETFIELD_REP_END=CurrentProgress	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define SCP5K_SDK_Plugins_AffrayCore_GameplayObjectives_Source_GameplayObjectives_Public_ProgressObjective_h_8_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UProgressObjective(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UProgressObjective) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UProgressObjective); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UProgressObjective); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UProgressObjective(UProgressObjective&&); \
	NO_API UProgressObjective(const UProgressObjective&); \
public:


#define SCP5K_SDK_Plugins_AffrayCore_GameplayObjectives_Source_GameplayObjectives_Public_ProgressObjective_h_8_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UProgressObjective(UProgressObjective&&); \
	NO_API UProgressObjective(const UProgressObjective&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UProgressObjective); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UProgressObjective); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UProgressObjective)


#define SCP5K_SDK_Plugins_AffrayCore_GameplayObjectives_Source_GameplayObjectives_Public_ProgressObjective_h_8_PRIVATE_PROPERTY_OFFSET
#define SCP5K_SDK_Plugins_AffrayCore_GameplayObjectives_Source_GameplayObjectives_Public_ProgressObjective_h_6_PROLOG
#define SCP5K_SDK_Plugins_AffrayCore_GameplayObjectives_Source_GameplayObjectives_Public_ProgressObjective_h_8_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_AffrayCore_GameplayObjectives_Source_GameplayObjectives_Public_ProgressObjective_h_8_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_AffrayCore_GameplayObjectives_Source_GameplayObjectives_Public_ProgressObjective_h_8_SPARSE_DATA \
	SCP5K_SDK_Plugins_AffrayCore_GameplayObjectives_Source_GameplayObjectives_Public_ProgressObjective_h_8_RPC_WRAPPERS \
	SCP5K_SDK_Plugins_AffrayCore_GameplayObjectives_Source_GameplayObjectives_Public_ProgressObjective_h_8_INCLASS \
	SCP5K_SDK_Plugins_AffrayCore_GameplayObjectives_Source_GameplayObjectives_Public_ProgressObjective_h_8_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SCP5K_SDK_Plugins_AffrayCore_GameplayObjectives_Source_GameplayObjectives_Public_ProgressObjective_h_8_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_AffrayCore_GameplayObjectives_Source_GameplayObjectives_Public_ProgressObjective_h_8_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_AffrayCore_GameplayObjectives_Source_GameplayObjectives_Public_ProgressObjective_h_8_SPARSE_DATA \
	SCP5K_SDK_Plugins_AffrayCore_GameplayObjectives_Source_GameplayObjectives_Public_ProgressObjective_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_AffrayCore_GameplayObjectives_Source_GameplayObjectives_Public_ProgressObjective_h_8_INCLASS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_AffrayCore_GameplayObjectives_Source_GameplayObjectives_Public_ProgressObjective_h_8_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEPLAYOBJECTIVES_API UClass* StaticClass<class UProgressObjective>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_AffrayCore_GameplayObjectives_Source_GameplayObjectives_Public_ProgressObjective_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
