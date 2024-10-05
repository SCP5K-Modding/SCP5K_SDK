// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FUint64;
enum class EDiscordOperationBranching : uint8;
enum class EDiscordResult : uint8;
class UDiscordCore;
class UDiscordNetworkManager;
#ifdef DISCORDNETWORK_DiscordNetworkManager_generated_h
#error "DiscordNetworkManager.generated.h already included, missing '#pragma once' in DiscordNetworkManager.h"
#endif
#define DISCORDNETWORK_DiscordNetworkManager_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordNetwork_Public_DiscordNetworkManager_h_16_SPARSE_DATA
#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordNetwork_Public_DiscordNetworkManager_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execBlueprint_CloseChannel); \
	DECLARE_FUNCTION(execBlueprint_ClosePeer); \
	DECLARE_FUNCTION(execBlueprint_GetPeerId); \
	DECLARE_FUNCTION(execBlueprint_OpenChannel); \
	DECLARE_FUNCTION(execBlueprint_OpenPeer); \
	DECLARE_FUNCTION(execBlueprint_SendMessage); \
	DECLARE_FUNCTION(execBlueprint_UpdatePeer); \
	DECLARE_FUNCTION(execGetNetworkManager);


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordNetwork_Public_DiscordNetworkManager_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execBlueprint_CloseChannel); \
	DECLARE_FUNCTION(execBlueprint_ClosePeer); \
	DECLARE_FUNCTION(execBlueprint_GetPeerId); \
	DECLARE_FUNCTION(execBlueprint_OpenChannel); \
	DECLARE_FUNCTION(execBlueprint_OpenPeer); \
	DECLARE_FUNCTION(execBlueprint_SendMessage); \
	DECLARE_FUNCTION(execBlueprint_UpdatePeer); \
	DECLARE_FUNCTION(execGetNetworkManager);


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordNetwork_Public_DiscordNetworkManager_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDiscordNetworkManager(); \
	friend struct Z_Construct_UClass_UDiscordNetworkManager_Statics; \
public: \
	DECLARE_CLASS(UDiscordNetworkManager, UDiscordManager, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DiscordNetwork"), NO_API) \
	DECLARE_SERIALIZER(UDiscordNetworkManager)


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordNetwork_Public_DiscordNetworkManager_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUDiscordNetworkManager(); \
	friend struct Z_Construct_UClass_UDiscordNetworkManager_Statics; \
public: \
	DECLARE_CLASS(UDiscordNetworkManager, UDiscordManager, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DiscordNetwork"), NO_API) \
	DECLARE_SERIALIZER(UDiscordNetworkManager)


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordNetwork_Public_DiscordNetworkManager_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDiscordNetworkManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDiscordNetworkManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDiscordNetworkManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDiscordNetworkManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDiscordNetworkManager(UDiscordNetworkManager&&); \
	NO_API UDiscordNetworkManager(const UDiscordNetworkManager&); \
public:


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordNetwork_Public_DiscordNetworkManager_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDiscordNetworkManager(UDiscordNetworkManager&&); \
	NO_API UDiscordNetworkManager(const UDiscordNetworkManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDiscordNetworkManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDiscordNetworkManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDiscordNetworkManager)


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordNetwork_Public_DiscordNetworkManager_h_16_PRIVATE_PROPERTY_OFFSET
#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordNetwork_Public_DiscordNetworkManager_h_14_PROLOG
#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordNetwork_Public_DiscordNetworkManager_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordNetwork_Public_DiscordNetworkManager_h_16_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordNetwork_Public_DiscordNetworkManager_h_16_SPARSE_DATA \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordNetwork_Public_DiscordNetworkManager_h_16_RPC_WRAPPERS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordNetwork_Public_DiscordNetworkManager_h_16_INCLASS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordNetwork_Public_DiscordNetworkManager_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordNetwork_Public_DiscordNetworkManager_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordNetwork_Public_DiscordNetworkManager_h_16_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordNetwork_Public_DiscordNetworkManager_h_16_SPARSE_DATA \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordNetwork_Public_DiscordNetworkManager_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordNetwork_Public_DiscordNetworkManager_h_16_INCLASS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordNetwork_Public_DiscordNetworkManager_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DISCORDNETWORK_API UClass* StaticClass<class UDiscordNetworkManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordNetwork_Public_DiscordNetworkManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
