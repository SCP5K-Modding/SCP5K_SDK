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
enum class EDiscordActivityActionType : uint8;
class USendInviteProxy;
#ifdef DISCORDACTIVITY_SendInviteProxy_generated_h
#error "SendInviteProxy.generated.h already included, missing '#pragma once' in SendInviteProxy.h"
#endif
#define DISCORDACTIVITY_SendInviteProxy_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordActivity_Public_SendInviteProxy_h_14_SPARSE_DATA
#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordActivity_Public_SendInviteProxy_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnInviteSentInternal); \
	DECLARE_FUNCTION(execSendInvite);


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordActivity_Public_SendInviteProxy_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnInviteSentInternal); \
	DECLARE_FUNCTION(execSendInvite);


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordActivity_Public_SendInviteProxy_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSendInviteProxy(); \
	friend struct Z_Construct_UClass_USendInviteProxy_Statics; \
public: \
	DECLARE_CLASS(USendInviteProxy, UBaseActivityAsyncProxy, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DiscordActivity"), NO_API) \
	DECLARE_SERIALIZER(USendInviteProxy)


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordActivity_Public_SendInviteProxy_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUSendInviteProxy(); \
	friend struct Z_Construct_UClass_USendInviteProxy_Statics; \
public: \
	DECLARE_CLASS(USendInviteProxy, UBaseActivityAsyncProxy, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DiscordActivity"), NO_API) \
	DECLARE_SERIALIZER(USendInviteProxy)


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordActivity_Public_SendInviteProxy_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USendInviteProxy(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USendInviteProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USendInviteProxy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USendInviteProxy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USendInviteProxy(USendInviteProxy&&); \
	NO_API USendInviteProxy(const USendInviteProxy&); \
public:


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordActivity_Public_SendInviteProxy_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USendInviteProxy(USendInviteProxy&&); \
	NO_API USendInviteProxy(const USendInviteProxy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USendInviteProxy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USendInviteProxy); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USendInviteProxy)


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordActivity_Public_SendInviteProxy_h_14_PRIVATE_PROPERTY_OFFSET
#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordActivity_Public_SendInviteProxy_h_12_PROLOG
#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordActivity_Public_SendInviteProxy_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordActivity_Public_SendInviteProxy_h_14_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordActivity_Public_SendInviteProxy_h_14_SPARSE_DATA \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordActivity_Public_SendInviteProxy_h_14_RPC_WRAPPERS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordActivity_Public_SendInviteProxy_h_14_INCLASS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordActivity_Public_SendInviteProxy_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordActivity_Public_SendInviteProxy_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordActivity_Public_SendInviteProxy_h_14_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordActivity_Public_SendInviteProxy_h_14_SPARSE_DATA \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordActivity_Public_SendInviteProxy_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordActivity_Public_SendInviteProxy_h_14_INCLASS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordActivity_Public_SendInviteProxy_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DISCORDACTIVITY_API UClass* StaticClass<class USendInviteProxy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordActivity_Public_SendInviteProxy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
