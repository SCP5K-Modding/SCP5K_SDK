// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESteamJsonResult : uint8;
struct FSteamCoreJson;
#ifdef STEAMCOREWEB_SteamWebUtilities_generated_h
#error "SteamWebUtilities.generated.h already included, missing '#pragma once' in SteamWebUtilities.h"
#endif
#define STEAMCOREWEB_SteamWebUtilities_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCoreWeb_Public_SteamWebUtilities_h_10_SPARSE_DATA
#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCoreWeb_Public_SteamWebUtilities_h_10_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execFindJsonBool); \
	DECLARE_FUNCTION(execFindJsonBools); \
	DECLARE_FUNCTION(execFindJsonNumber); \
	DECLARE_FUNCTION(execFindJsonNumbers); \
	DECLARE_FUNCTION(execFindJsonString); \
	DECLARE_FUNCTION(execFindJsonStrings); \
	DECLARE_FUNCTION(execGetDevSteamID); \
	DECLARE_FUNCTION(execGetProjectAppID); \
	DECLARE_FUNCTION(execGetProjectKey); \
	DECLARE_FUNCTION(execParseJson);


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCoreWeb_Public_SteamWebUtilities_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFindJsonBool); \
	DECLARE_FUNCTION(execFindJsonBools); \
	DECLARE_FUNCTION(execFindJsonNumber); \
	DECLARE_FUNCTION(execFindJsonNumbers); \
	DECLARE_FUNCTION(execFindJsonString); \
	DECLARE_FUNCTION(execFindJsonStrings); \
	DECLARE_FUNCTION(execGetDevSteamID); \
	DECLARE_FUNCTION(execGetProjectAppID); \
	DECLARE_FUNCTION(execGetProjectKey); \
	DECLARE_FUNCTION(execParseJson);


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCoreWeb_Public_SteamWebUtilities_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSteamWebUtilities(); \
	friend struct Z_Construct_UClass_USteamWebUtilities_Statics; \
public: \
	DECLARE_CLASS(USteamWebUtilities, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/SteamCoreWeb"), NO_API) \
	DECLARE_SERIALIZER(USteamWebUtilities)


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCoreWeb_Public_SteamWebUtilities_h_10_INCLASS \
private: \
	static void StaticRegisterNativesUSteamWebUtilities(); \
	friend struct Z_Construct_UClass_USteamWebUtilities_Statics; \
public: \
	DECLARE_CLASS(USteamWebUtilities, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/SteamCoreWeb"), NO_API) \
	DECLARE_SERIALIZER(USteamWebUtilities)


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCoreWeb_Public_SteamWebUtilities_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamWebUtilities(const FObjectInitializer& ObjectInitializer); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamWebUtilities) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamWebUtilities); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamWebUtilities); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USteamWebUtilities(USteamWebUtilities&&); \
	NO_API USteamWebUtilities(const USteamWebUtilities&); \
public:


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCoreWeb_Public_SteamWebUtilities_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USteamWebUtilities(USteamWebUtilities&&); \
	NO_API USteamWebUtilities(const USteamWebUtilities&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamWebUtilities); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamWebUtilities); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(USteamWebUtilities)


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCoreWeb_Public_SteamWebUtilities_h_10_PRIVATE_PROPERTY_OFFSET
#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCoreWeb_Public_SteamWebUtilities_h_8_PROLOG
#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCoreWeb_Public_SteamWebUtilities_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCoreWeb_Public_SteamWebUtilities_h_10_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCoreWeb_Public_SteamWebUtilities_h_10_SPARSE_DATA \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCoreWeb_Public_SteamWebUtilities_h_10_RPC_WRAPPERS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCoreWeb_Public_SteamWebUtilities_h_10_INCLASS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCoreWeb_Public_SteamWebUtilities_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCoreWeb_Public_SteamWebUtilities_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCoreWeb_Public_SteamWebUtilities_h_10_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCoreWeb_Public_SteamWebUtilities_h_10_SPARSE_DATA \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCoreWeb_Public_SteamWebUtilities_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCoreWeb_Public_SteamWebUtilities_h_10_INCLASS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCoreWeb_Public_SteamWebUtilities_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMCOREWEB_API UClass* StaticClass<class USteamWebUtilities>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCoreWeb_Public_SteamWebUtilities_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
