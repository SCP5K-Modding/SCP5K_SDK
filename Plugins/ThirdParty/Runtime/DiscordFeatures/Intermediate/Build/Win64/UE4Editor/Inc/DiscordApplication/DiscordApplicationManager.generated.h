// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDiscordCore;
class UDiscordApplicationManager;
#ifdef DISCORDAPPLICATION_DiscordApplicationManager_generated_h
#error "DiscordApplicationManager.generated.h already included, missing '#pragma once' in DiscordApplicationManager.h"
#endif
#define DISCORDAPPLICATION_DiscordApplicationManager_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordApplication_Public_DiscordApplicationManager_h_11_SPARSE_DATA
#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordApplication_Public_DiscordApplicationManager_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetApplicationManager); \
	DECLARE_FUNCTION(execGetCurrentBranch); \
	DECLARE_FUNCTION(execGetCurrentLocale);


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordApplication_Public_DiscordApplicationManager_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetApplicationManager); \
	DECLARE_FUNCTION(execGetCurrentBranch); \
	DECLARE_FUNCTION(execGetCurrentLocale);


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordApplication_Public_DiscordApplicationManager_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDiscordApplicationManager(); \
	friend struct Z_Construct_UClass_UDiscordApplicationManager_Statics; \
public: \
	DECLARE_CLASS(UDiscordApplicationManager, UDiscordManager, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DiscordApplication"), NO_API) \
	DECLARE_SERIALIZER(UDiscordApplicationManager)


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordApplication_Public_DiscordApplicationManager_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUDiscordApplicationManager(); \
	friend struct Z_Construct_UClass_UDiscordApplicationManager_Statics; \
public: \
	DECLARE_CLASS(UDiscordApplicationManager, UDiscordManager, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DiscordApplication"), NO_API) \
	DECLARE_SERIALIZER(UDiscordApplicationManager)


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordApplication_Public_DiscordApplicationManager_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDiscordApplicationManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDiscordApplicationManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDiscordApplicationManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDiscordApplicationManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDiscordApplicationManager(UDiscordApplicationManager&&); \
	NO_API UDiscordApplicationManager(const UDiscordApplicationManager&); \
public:


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordApplication_Public_DiscordApplicationManager_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDiscordApplicationManager(UDiscordApplicationManager&&); \
	NO_API UDiscordApplicationManager(const UDiscordApplicationManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDiscordApplicationManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDiscordApplicationManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDiscordApplicationManager)


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordApplication_Public_DiscordApplicationManager_h_11_PRIVATE_PROPERTY_OFFSET
#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordApplication_Public_DiscordApplicationManager_h_9_PROLOG
#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordApplication_Public_DiscordApplicationManager_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordApplication_Public_DiscordApplicationManager_h_11_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordApplication_Public_DiscordApplicationManager_h_11_SPARSE_DATA \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordApplication_Public_DiscordApplicationManager_h_11_RPC_WRAPPERS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordApplication_Public_DiscordApplicationManager_h_11_INCLASS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordApplication_Public_DiscordApplicationManager_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordApplication_Public_DiscordApplicationManager_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordApplication_Public_DiscordApplicationManager_h_11_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordApplication_Public_DiscordApplicationManager_h_11_SPARSE_DATA \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordApplication_Public_DiscordApplicationManager_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordApplication_Public_DiscordApplicationManager_h_11_INCLASS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordApplication_Public_DiscordApplicationManager_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DISCORDAPPLICATION_API UClass* StaticClass<class UDiscordApplicationManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordApplication_Public_DiscordApplicationManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
