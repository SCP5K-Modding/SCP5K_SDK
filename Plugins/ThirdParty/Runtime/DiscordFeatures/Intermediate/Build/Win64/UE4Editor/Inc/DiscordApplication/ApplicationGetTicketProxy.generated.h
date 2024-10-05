// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDiscordApplicationManager;
class UApplicationGetTicketProxy;
enum class EDiscordResult : uint8;
#ifdef DISCORDAPPLICATION_ApplicationGetTicketProxy_generated_h
#error "ApplicationGetTicketProxy.generated.h already included, missing '#pragma once' in ApplicationGetTicketProxy.h"
#endif
#define DISCORDAPPLICATION_ApplicationGetTicketProxy_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordApplication_Public_ApplicationGetTicketProxy_h_13_SPARSE_DATA
#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordApplication_Public_ApplicationGetTicketProxy_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetTicket); \
	DECLARE_FUNCTION(execOnResultInternal);


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordApplication_Public_ApplicationGetTicketProxy_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetTicket); \
	DECLARE_FUNCTION(execOnResultInternal);


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordApplication_Public_ApplicationGetTicketProxy_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUApplicationGetTicketProxy(); \
	friend struct Z_Construct_UClass_UApplicationGetTicketProxy_Statics; \
public: \
	DECLARE_CLASS(UApplicationGetTicketProxy, UBaseApplicationAsyncProxy, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DiscordApplication"), NO_API) \
	DECLARE_SERIALIZER(UApplicationGetTicketProxy)


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordApplication_Public_ApplicationGetTicketProxy_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUApplicationGetTicketProxy(); \
	friend struct Z_Construct_UClass_UApplicationGetTicketProxy_Statics; \
public: \
	DECLARE_CLASS(UApplicationGetTicketProxy, UBaseApplicationAsyncProxy, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DiscordApplication"), NO_API) \
	DECLARE_SERIALIZER(UApplicationGetTicketProxy)


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordApplication_Public_ApplicationGetTicketProxy_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UApplicationGetTicketProxy(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UApplicationGetTicketProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UApplicationGetTicketProxy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UApplicationGetTicketProxy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UApplicationGetTicketProxy(UApplicationGetTicketProxy&&); \
	NO_API UApplicationGetTicketProxy(const UApplicationGetTicketProxy&); \
public:


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordApplication_Public_ApplicationGetTicketProxy_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UApplicationGetTicketProxy(UApplicationGetTicketProxy&&); \
	NO_API UApplicationGetTicketProxy(const UApplicationGetTicketProxy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UApplicationGetTicketProxy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UApplicationGetTicketProxy); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UApplicationGetTicketProxy)


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordApplication_Public_ApplicationGetTicketProxy_h_13_PRIVATE_PROPERTY_OFFSET
#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordApplication_Public_ApplicationGetTicketProxy_h_11_PROLOG
#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordApplication_Public_ApplicationGetTicketProxy_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordApplication_Public_ApplicationGetTicketProxy_h_13_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordApplication_Public_ApplicationGetTicketProxy_h_13_SPARSE_DATA \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordApplication_Public_ApplicationGetTicketProxy_h_13_RPC_WRAPPERS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordApplication_Public_ApplicationGetTicketProxy_h_13_INCLASS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordApplication_Public_ApplicationGetTicketProxy_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordApplication_Public_ApplicationGetTicketProxy_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordApplication_Public_ApplicationGetTicketProxy_h_13_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordApplication_Public_ApplicationGetTicketProxy_h_13_SPARSE_DATA \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordApplication_Public_ApplicationGetTicketProxy_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordApplication_Public_ApplicationGetTicketProxy_h_13_INCLASS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordApplication_Public_ApplicationGetTicketProxy_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DISCORDAPPLICATION_API UClass* StaticClass<class UApplicationGetTicketProxy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordApplication_Public_ApplicationGetTicketProxy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
