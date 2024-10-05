// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EDiscordUserFlag : uint8;
struct FDiscordUser;
enum class EDiscordPremiumType : uint8;
class UDiscordCore;
class UDiscordUserManager;
#ifdef DISCORDUSER_DiscordUserManager_generated_h
#error "DiscordUserManager.generated.h already included, missing '#pragma once' in DiscordUserManager.h"
#endif
#define DISCORDUSER_DiscordUserManager_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordUser_Public_DiscordUserManager_h_15_SPARSE_DATA
#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordUser_Public_DiscordUserManager_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCurrentUserHasFlag); \
	DECLARE_FUNCTION(execGetCurrentUser); \
	DECLARE_FUNCTION(execGetCurrentUserPremiumType); \
	DECLARE_FUNCTION(execGetUserManager);


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordUser_Public_DiscordUserManager_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCurrentUserHasFlag); \
	DECLARE_FUNCTION(execGetCurrentUser); \
	DECLARE_FUNCTION(execGetCurrentUserPremiumType); \
	DECLARE_FUNCTION(execGetUserManager);


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordUser_Public_DiscordUserManager_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDiscordUserManager(); \
	friend struct Z_Construct_UClass_UDiscordUserManager_Statics; \
public: \
	DECLARE_CLASS(UDiscordUserManager, UDiscordManager, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DiscordUser"), NO_API) \
	DECLARE_SERIALIZER(UDiscordUserManager)


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordUser_Public_DiscordUserManager_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUDiscordUserManager(); \
	friend struct Z_Construct_UClass_UDiscordUserManager_Statics; \
public: \
	DECLARE_CLASS(UDiscordUserManager, UDiscordManager, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DiscordUser"), NO_API) \
	DECLARE_SERIALIZER(UDiscordUserManager)


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordUser_Public_DiscordUserManager_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDiscordUserManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDiscordUserManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDiscordUserManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDiscordUserManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDiscordUserManager(UDiscordUserManager&&); \
	NO_API UDiscordUserManager(const UDiscordUserManager&); \
public:


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordUser_Public_DiscordUserManager_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDiscordUserManager(UDiscordUserManager&&); \
	NO_API UDiscordUserManager(const UDiscordUserManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDiscordUserManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDiscordUserManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDiscordUserManager)


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordUser_Public_DiscordUserManager_h_15_PRIVATE_PROPERTY_OFFSET
#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordUser_Public_DiscordUserManager_h_13_PROLOG
#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordUser_Public_DiscordUserManager_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordUser_Public_DiscordUserManager_h_15_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordUser_Public_DiscordUserManager_h_15_SPARSE_DATA \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordUser_Public_DiscordUserManager_h_15_RPC_WRAPPERS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordUser_Public_DiscordUserManager_h_15_INCLASS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordUser_Public_DiscordUserManager_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordUser_Public_DiscordUserManager_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordUser_Public_DiscordUserManager_h_15_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordUser_Public_DiscordUserManager_h_15_SPARSE_DATA \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordUser_Public_DiscordUserManager_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordUser_Public_DiscordUserManager_h_15_INCLASS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordUser_Public_DiscordUserManager_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DISCORDUSER_API UClass* StaticClass<class UDiscordUserManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordUser_Public_DiscordUserManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
