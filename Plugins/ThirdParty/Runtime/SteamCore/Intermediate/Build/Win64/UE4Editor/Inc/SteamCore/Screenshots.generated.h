// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FScreenshotHandle;
enum class ESteamVRScreenshotType : uint8;
struct FPublishedFileID;
struct FSteamID;
#ifdef STEAMCORE_Screenshots_generated_h
#error "Screenshots.generated.h already included, missing '#pragma once' in Screenshots.h"
#endif
#define STEAMCORE_Screenshots_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_Screenshots_h_14_SPARSE_DATA
#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_Screenshots_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAddScreenshotToLibrary); \
	DECLARE_FUNCTION(execAddVRScreenshotToLibrary); \
	DECLARE_FUNCTION(execHookScreenshots); \
	DECLARE_FUNCTION(execIsScreenshotsHooked); \
	DECLARE_FUNCTION(execSetLocation); \
	DECLARE_FUNCTION(execTagPublishedFile); \
	DECLARE_FUNCTION(execTagUser); \
	DECLARE_FUNCTION(execTriggerScreenshot); \
	DECLARE_FUNCTION(execWriteScreenshot);


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_Screenshots_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddScreenshotToLibrary); \
	DECLARE_FUNCTION(execAddVRScreenshotToLibrary); \
	DECLARE_FUNCTION(execHookScreenshots); \
	DECLARE_FUNCTION(execIsScreenshotsHooked); \
	DECLARE_FUNCTION(execSetLocation); \
	DECLARE_FUNCTION(execTagPublishedFile); \
	DECLARE_FUNCTION(execTagUser); \
	DECLARE_FUNCTION(execTriggerScreenshot); \
	DECLARE_FUNCTION(execWriteScreenshot);


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_Screenshots_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUScreenshots(); \
	friend struct Z_Construct_UClass_UScreenshots_Statics; \
public: \
	DECLARE_CLASS(UScreenshots, USteamCoreSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), NO_API) \
	DECLARE_SERIALIZER(UScreenshots)


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_Screenshots_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUScreenshots(); \
	friend struct Z_Construct_UClass_UScreenshots_Statics; \
public: \
	DECLARE_CLASS(UScreenshots, USteamCoreSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), NO_API) \
	DECLARE_SERIALIZER(UScreenshots)


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_Screenshots_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UScreenshots(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UScreenshots) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UScreenshots); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UScreenshots); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UScreenshots(UScreenshots&&); \
	NO_API UScreenshots(const UScreenshots&); \
public:


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_Screenshots_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UScreenshots(UScreenshots&&); \
	NO_API UScreenshots(const UScreenshots&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UScreenshots); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UScreenshots); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UScreenshots)


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_Screenshots_h_14_PRIVATE_PROPERTY_OFFSET
#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_Screenshots_h_12_PROLOG
#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_Screenshots_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_Screenshots_h_14_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_Screenshots_h_14_SPARSE_DATA \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_Screenshots_h_14_RPC_WRAPPERS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_Screenshots_h_14_INCLASS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_Screenshots_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_Screenshots_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_Screenshots_h_14_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_Screenshots_h_14_SPARSE_DATA \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_Screenshots_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_Screenshots_h_14_INCLASS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_Screenshots_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMCORE_API UClass* StaticClass<class UScreenshots>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_Screenshots_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
