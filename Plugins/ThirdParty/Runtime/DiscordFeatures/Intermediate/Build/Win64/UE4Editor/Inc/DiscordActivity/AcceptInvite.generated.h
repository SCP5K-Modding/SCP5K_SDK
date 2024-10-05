// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDiscordActivityManager;
class UAcceptInvite;
enum class EDiscordResult : uint8;
#ifdef DISCORDACTIVITY_AcceptInvite_generated_h
#error "AcceptInvite.generated.h already included, missing '#pragma once' in AcceptInvite.h"
#endif
#define DISCORDACTIVITY_AcceptInvite_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordActivity_Public_AcceptInvite_h_13_SPARSE_DATA
#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordActivity_Public_AcceptInvite_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAcceptInvite); \
	DECLARE_FUNCTION(execOnInviteAcceptedInternal);


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordActivity_Public_AcceptInvite_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAcceptInvite); \
	DECLARE_FUNCTION(execOnInviteAcceptedInternal);


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordActivity_Public_AcceptInvite_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAcceptInvite(); \
	friend struct Z_Construct_UClass_UAcceptInvite_Statics; \
public: \
	DECLARE_CLASS(UAcceptInvite, UBaseActivityAsyncProxy, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DiscordActivity"), NO_API) \
	DECLARE_SERIALIZER(UAcceptInvite)


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordActivity_Public_AcceptInvite_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUAcceptInvite(); \
	friend struct Z_Construct_UClass_UAcceptInvite_Statics; \
public: \
	DECLARE_CLASS(UAcceptInvite, UBaseActivityAsyncProxy, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DiscordActivity"), NO_API) \
	DECLARE_SERIALIZER(UAcceptInvite)


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordActivity_Public_AcceptInvite_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAcceptInvite(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAcceptInvite) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAcceptInvite); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAcceptInvite); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAcceptInvite(UAcceptInvite&&); \
	NO_API UAcceptInvite(const UAcceptInvite&); \
public:


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordActivity_Public_AcceptInvite_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAcceptInvite(UAcceptInvite&&); \
	NO_API UAcceptInvite(const UAcceptInvite&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAcceptInvite); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAcceptInvite); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAcceptInvite)


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordActivity_Public_AcceptInvite_h_13_PRIVATE_PROPERTY_OFFSET
#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordActivity_Public_AcceptInvite_h_11_PROLOG
#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordActivity_Public_AcceptInvite_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordActivity_Public_AcceptInvite_h_13_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordActivity_Public_AcceptInvite_h_13_SPARSE_DATA \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordActivity_Public_AcceptInvite_h_13_RPC_WRAPPERS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordActivity_Public_AcceptInvite_h_13_INCLASS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordActivity_Public_AcceptInvite_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordActivity_Public_AcceptInvite_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordActivity_Public_AcceptInvite_h_13_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordActivity_Public_AcceptInvite_h_13_SPARSE_DATA \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordActivity_Public_AcceptInvite_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordActivity_Public_AcceptInvite_h_13_INCLASS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordActivity_Public_AcceptInvite_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DISCORDACTIVITY_API UClass* StaticClass<class UAcceptInvite>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordActivity_Public_AcceptInvite_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
