// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDiscordActivityManager;
class UClearActivityProxy;
enum class EDiscordResult : uint8;
#ifdef DISCORDACTIVITY_ClearActivityProxy_generated_h
#error "ClearActivityProxy.generated.h already included, missing '#pragma once' in ClearActivityProxy.h"
#endif
#define DISCORDACTIVITY_ClearActivityProxy_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordActivity_Public_ClearActivityProxy_h_13_SPARSE_DATA
#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordActivity_Public_ClearActivityProxy_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execClearActivity); \
	DECLARE_FUNCTION(execOnActivityClearedInternal);


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordActivity_Public_ClearActivityProxy_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execClearActivity); \
	DECLARE_FUNCTION(execOnActivityClearedInternal);


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordActivity_Public_ClearActivityProxy_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUClearActivityProxy(); \
	friend struct Z_Construct_UClass_UClearActivityProxy_Statics; \
public: \
	DECLARE_CLASS(UClearActivityProxy, UBaseActivityAsyncProxy, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DiscordActivity"), NO_API) \
	DECLARE_SERIALIZER(UClearActivityProxy)


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordActivity_Public_ClearActivityProxy_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUClearActivityProxy(); \
	friend struct Z_Construct_UClass_UClearActivityProxy_Statics; \
public: \
	DECLARE_CLASS(UClearActivityProxy, UBaseActivityAsyncProxy, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DiscordActivity"), NO_API) \
	DECLARE_SERIALIZER(UClearActivityProxy)


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordActivity_Public_ClearActivityProxy_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UClearActivityProxy(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UClearActivityProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UClearActivityProxy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UClearActivityProxy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UClearActivityProxy(UClearActivityProxy&&); \
	NO_API UClearActivityProxy(const UClearActivityProxy&); \
public:


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordActivity_Public_ClearActivityProxy_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UClearActivityProxy(UClearActivityProxy&&); \
	NO_API UClearActivityProxy(const UClearActivityProxy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UClearActivityProxy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UClearActivityProxy); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UClearActivityProxy)


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordActivity_Public_ClearActivityProxy_h_13_PRIVATE_PROPERTY_OFFSET
#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordActivity_Public_ClearActivityProxy_h_11_PROLOG
#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordActivity_Public_ClearActivityProxy_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordActivity_Public_ClearActivityProxy_h_13_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordActivity_Public_ClearActivityProxy_h_13_SPARSE_DATA \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordActivity_Public_ClearActivityProxy_h_13_RPC_WRAPPERS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordActivity_Public_ClearActivityProxy_h_13_INCLASS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordActivity_Public_ClearActivityProxy_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordActivity_Public_ClearActivityProxy_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordActivity_Public_ClearActivityProxy_h_13_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordActivity_Public_ClearActivityProxy_h_13_SPARSE_DATA \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordActivity_Public_ClearActivityProxy_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordActivity_Public_ClearActivityProxy_h_13_INCLASS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordActivity_Public_ClearActivityProxy_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DISCORDACTIVITY_API UClass* StaticClass<class UClearActivityProxy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordActivity_Public_ClearActivityProxy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
