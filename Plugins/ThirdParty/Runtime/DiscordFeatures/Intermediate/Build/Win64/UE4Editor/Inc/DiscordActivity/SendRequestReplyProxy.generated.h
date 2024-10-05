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
enum class EDiscordActivityJoinRequestReply : uint8;
class USendRequestReplyProxy;
#ifdef DISCORDACTIVITY_SendRequestReplyProxy_generated_h
#error "SendRequestReplyProxy.generated.h already included, missing '#pragma once' in SendRequestReplyProxy.h"
#endif
#define DISCORDACTIVITY_SendRequestReplyProxy_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordActivity_Public_SendRequestReplyProxy_h_14_SPARSE_DATA
#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordActivity_Public_SendRequestReplyProxy_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRequestReplyInternal); \
	DECLARE_FUNCTION(execSendRequestReply);


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordActivity_Public_SendRequestReplyProxy_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRequestReplyInternal); \
	DECLARE_FUNCTION(execSendRequestReply);


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordActivity_Public_SendRequestReplyProxy_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSendRequestReplyProxy(); \
	friend struct Z_Construct_UClass_USendRequestReplyProxy_Statics; \
public: \
	DECLARE_CLASS(USendRequestReplyProxy, UBaseActivityAsyncProxy, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DiscordActivity"), NO_API) \
	DECLARE_SERIALIZER(USendRequestReplyProxy)


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordActivity_Public_SendRequestReplyProxy_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUSendRequestReplyProxy(); \
	friend struct Z_Construct_UClass_USendRequestReplyProxy_Statics; \
public: \
	DECLARE_CLASS(USendRequestReplyProxy, UBaseActivityAsyncProxy, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DiscordActivity"), NO_API) \
	DECLARE_SERIALIZER(USendRequestReplyProxy)


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordActivity_Public_SendRequestReplyProxy_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USendRequestReplyProxy(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USendRequestReplyProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USendRequestReplyProxy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USendRequestReplyProxy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USendRequestReplyProxy(USendRequestReplyProxy&&); \
	NO_API USendRequestReplyProxy(const USendRequestReplyProxy&); \
public:


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordActivity_Public_SendRequestReplyProxy_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USendRequestReplyProxy(USendRequestReplyProxy&&); \
	NO_API USendRequestReplyProxy(const USendRequestReplyProxy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USendRequestReplyProxy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USendRequestReplyProxy); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USendRequestReplyProxy)


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordActivity_Public_SendRequestReplyProxy_h_14_PRIVATE_PROPERTY_OFFSET
#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordActivity_Public_SendRequestReplyProxy_h_12_PROLOG
#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordActivity_Public_SendRequestReplyProxy_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordActivity_Public_SendRequestReplyProxy_h_14_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordActivity_Public_SendRequestReplyProxy_h_14_SPARSE_DATA \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordActivity_Public_SendRequestReplyProxy_h_14_RPC_WRAPPERS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordActivity_Public_SendRequestReplyProxy_h_14_INCLASS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordActivity_Public_SendRequestReplyProxy_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordActivity_Public_SendRequestReplyProxy_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordActivity_Public_SendRequestReplyProxy_h_14_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordActivity_Public_SendRequestReplyProxy_h_14_SPARSE_DATA \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordActivity_Public_SendRequestReplyProxy_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordActivity_Public_SendRequestReplyProxy_h_14_INCLASS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordActivity_Public_SendRequestReplyProxy_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DISCORDACTIVITY_API UClass* StaticClass<class USendRequestReplyProxy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordActivity_Public_SendRequestReplyProxy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
