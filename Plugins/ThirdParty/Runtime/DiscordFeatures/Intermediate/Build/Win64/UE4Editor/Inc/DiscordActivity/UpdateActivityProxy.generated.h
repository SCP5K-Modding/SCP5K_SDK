// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EDiscordResult : uint8;
class UDiscordActivityManager;
struct FDiscordActivity;
class UUpdateActivityProxy;
#ifdef DISCORDACTIVITY_UpdateActivityProxy_generated_h
#error "UpdateActivityProxy.generated.h already included, missing '#pragma once' in UpdateActivityProxy.h"
#endif
#define DISCORDACTIVITY_UpdateActivityProxy_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordActivity_Public_UpdateActivityProxy_h_14_SPARSE_DATA
#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordActivity_Public_UpdateActivityProxy_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnActivityUpdatedInternal); \
	DECLARE_FUNCTION(execUpdateActivity);


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordActivity_Public_UpdateActivityProxy_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnActivityUpdatedInternal); \
	DECLARE_FUNCTION(execUpdateActivity);


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordActivity_Public_UpdateActivityProxy_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUpdateActivityProxy(); \
	friend struct Z_Construct_UClass_UUpdateActivityProxy_Statics; \
public: \
	DECLARE_CLASS(UUpdateActivityProxy, UBaseActivityAsyncProxy, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DiscordActivity"), NO_API) \
	DECLARE_SERIALIZER(UUpdateActivityProxy)


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordActivity_Public_UpdateActivityProxy_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUUpdateActivityProxy(); \
	friend struct Z_Construct_UClass_UUpdateActivityProxy_Statics; \
public: \
	DECLARE_CLASS(UUpdateActivityProxy, UBaseActivityAsyncProxy, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DiscordActivity"), NO_API) \
	DECLARE_SERIALIZER(UUpdateActivityProxy)


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordActivity_Public_UpdateActivityProxy_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUpdateActivityProxy(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUpdateActivityProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUpdateActivityProxy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUpdateActivityProxy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUpdateActivityProxy(UUpdateActivityProxy&&); \
	NO_API UUpdateActivityProxy(const UUpdateActivityProxy&); \
public:


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordActivity_Public_UpdateActivityProxy_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUpdateActivityProxy(UUpdateActivityProxy&&); \
	NO_API UUpdateActivityProxy(const UUpdateActivityProxy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUpdateActivityProxy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUpdateActivityProxy); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUpdateActivityProxy)


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordActivity_Public_UpdateActivityProxy_h_14_PRIVATE_PROPERTY_OFFSET
#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordActivity_Public_UpdateActivityProxy_h_12_PROLOG
#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordActivity_Public_UpdateActivityProxy_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordActivity_Public_UpdateActivityProxy_h_14_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordActivity_Public_UpdateActivityProxy_h_14_SPARSE_DATA \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordActivity_Public_UpdateActivityProxy_h_14_RPC_WRAPPERS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordActivity_Public_UpdateActivityProxy_h_14_INCLASS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordActivity_Public_UpdateActivityProxy_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordActivity_Public_UpdateActivityProxy_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordActivity_Public_UpdateActivityProxy_h_14_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordActivity_Public_UpdateActivityProxy_h_14_SPARSE_DATA \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordActivity_Public_UpdateActivityProxy_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordActivity_Public_UpdateActivityProxy_h_14_INCLASS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordActivity_Public_UpdateActivityProxy_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DISCORDACTIVITY_API UClass* StaticClass<class UUpdateActivityProxy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordActivity_Public_UpdateActivityProxy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
