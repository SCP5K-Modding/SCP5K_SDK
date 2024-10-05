// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESteamParentalFeature : uint8;
#ifdef STEAMCORE_ParentalSettings_generated_h
#error "ParentalSettings.generated.h already included, missing '#pragma once' in ParentalSettings.h"
#endif
#define STEAMCORE_ParentalSettings_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_ParentalSettings_h_9_SPARSE_DATA
#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_ParentalSettings_h_9_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execBIsAppBlocked); \
	DECLARE_FUNCTION(execBIsAppInBlockList); \
	DECLARE_FUNCTION(execBIsFeatureBlocked); \
	DECLARE_FUNCTION(execBIsFeatureInBlockList); \
	DECLARE_FUNCTION(execBIsParentalLockEnabled); \
	DECLARE_FUNCTION(execBIsParentalLockLocked);


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_ParentalSettings_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execBIsAppBlocked); \
	DECLARE_FUNCTION(execBIsAppInBlockList); \
	DECLARE_FUNCTION(execBIsFeatureBlocked); \
	DECLARE_FUNCTION(execBIsFeatureInBlockList); \
	DECLARE_FUNCTION(execBIsParentalLockEnabled); \
	DECLARE_FUNCTION(execBIsParentalLockLocked);


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_ParentalSettings_h_9_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUParentalSettings(); \
	friend struct Z_Construct_UClass_UParentalSettings_Statics; \
public: \
	DECLARE_CLASS(UParentalSettings, USteamCoreSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), NO_API) \
	DECLARE_SERIALIZER(UParentalSettings)


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_ParentalSettings_h_9_INCLASS \
private: \
	static void StaticRegisterNativesUParentalSettings(); \
	friend struct Z_Construct_UClass_UParentalSettings_Statics; \
public: \
	DECLARE_CLASS(UParentalSettings, USteamCoreSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), NO_API) \
	DECLARE_SERIALIZER(UParentalSettings)


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_ParentalSettings_h_9_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UParentalSettings(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UParentalSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UParentalSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParentalSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UParentalSettings(UParentalSettings&&); \
	NO_API UParentalSettings(const UParentalSettings&); \
public:


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_ParentalSettings_h_9_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UParentalSettings(UParentalSettings&&); \
	NO_API UParentalSettings(const UParentalSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UParentalSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParentalSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UParentalSettings)


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_ParentalSettings_h_9_PRIVATE_PROPERTY_OFFSET
#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_ParentalSettings_h_7_PROLOG
#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_ParentalSettings_h_9_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_ParentalSettings_h_9_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_ParentalSettings_h_9_SPARSE_DATA \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_ParentalSettings_h_9_RPC_WRAPPERS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_ParentalSettings_h_9_INCLASS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_ParentalSettings_h_9_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_ParentalSettings_h_9_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_ParentalSettings_h_9_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_ParentalSettings_h_9_SPARSE_DATA \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_ParentalSettings_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_ParentalSettings_h_9_INCLASS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_ParentalSettings_h_9_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMCORE_API UClass* StaticClass<class UParentalSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_ParentalSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
