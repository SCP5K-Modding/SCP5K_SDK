// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STEAMCOREWEB_WebSteamNews_generated_h
#error "WebSteamNews.generated.h already included, missing '#pragma once' in WebSteamNews.h"
#endif
#define STEAMCOREWEB_WebSteamNews_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCoreWeb_Public_WebSteamNews_h_9_SPARSE_DATA
#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCoreWeb_Public_WebSteamNews_h_9_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetNewsForApp); \
	DECLARE_FUNCTION(execGetNewsForAppAuthed);


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCoreWeb_Public_WebSteamNews_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetNewsForApp); \
	DECLARE_FUNCTION(execGetNewsForAppAuthed);


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCoreWeb_Public_WebSteamNews_h_9_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWebSteamNews(); \
	friend struct Z_Construct_UClass_UWebSteamNews_Statics; \
public: \
	DECLARE_CLASS(UWebSteamNews, USteamCoreWebSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCoreWeb"), NO_API) \
	DECLARE_SERIALIZER(UWebSteamNews)


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCoreWeb_Public_WebSteamNews_h_9_INCLASS \
private: \
	static void StaticRegisterNativesUWebSteamNews(); \
	friend struct Z_Construct_UClass_UWebSteamNews_Statics; \
public: \
	DECLARE_CLASS(UWebSteamNews, USteamCoreWebSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCoreWeb"), NO_API) \
	DECLARE_SERIALIZER(UWebSteamNews)


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCoreWeb_Public_WebSteamNews_h_9_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWebSteamNews(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWebSteamNews) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWebSteamNews); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWebSteamNews); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWebSteamNews(UWebSteamNews&&); \
	NO_API UWebSteamNews(const UWebSteamNews&); \
public:


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCoreWeb_Public_WebSteamNews_h_9_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWebSteamNews(UWebSteamNews&&); \
	NO_API UWebSteamNews(const UWebSteamNews&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWebSteamNews); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWebSteamNews); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UWebSteamNews)


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCoreWeb_Public_WebSteamNews_h_9_PRIVATE_PROPERTY_OFFSET
#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCoreWeb_Public_WebSteamNews_h_7_PROLOG
#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCoreWeb_Public_WebSteamNews_h_9_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCoreWeb_Public_WebSteamNews_h_9_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCoreWeb_Public_WebSteamNews_h_9_SPARSE_DATA \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCoreWeb_Public_WebSteamNews_h_9_RPC_WRAPPERS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCoreWeb_Public_WebSteamNews_h_9_INCLASS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCoreWeb_Public_WebSteamNews_h_9_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCoreWeb_Public_WebSteamNews_h_9_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCoreWeb_Public_WebSteamNews_h_9_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCoreWeb_Public_WebSteamNews_h_9_SPARSE_DATA \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCoreWeb_Public_WebSteamNews_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCoreWeb_Public_WebSteamNews_h_9_INCLASS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCoreWeb_Public_WebSteamNews_h_9_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMCOREWEB_API UClass* StaticClass<class UWebSteamNews>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCoreWeb_Public_WebSteamNews_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
