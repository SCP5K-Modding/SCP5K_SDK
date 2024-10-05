// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STEAMCORE_AppList_generated_h
#error "AppList.generated.h already included, missing '#pragma once' in AppList.h"
#endif
#define STEAMCORE_AppList_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_AppList_h_10_SPARSE_DATA
#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_AppList_h_10_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetAppBuildId); \
	DECLARE_FUNCTION(execGetAppInstallDir); \
	DECLARE_FUNCTION(execGetAppName); \
	DECLARE_FUNCTION(execGetInstalledApps); \
	DECLARE_FUNCTION(execGetNumInstalledApps);


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_AppList_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetAppBuildId); \
	DECLARE_FUNCTION(execGetAppInstallDir); \
	DECLARE_FUNCTION(execGetAppName); \
	DECLARE_FUNCTION(execGetInstalledApps); \
	DECLARE_FUNCTION(execGetNumInstalledApps);


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_AppList_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAppList(); \
	friend struct Z_Construct_UClass_UAppList_Statics; \
public: \
	DECLARE_CLASS(UAppList, USteamCoreSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), NO_API) \
	DECLARE_SERIALIZER(UAppList)


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_AppList_h_10_INCLASS \
private: \
	static void StaticRegisterNativesUAppList(); \
	friend struct Z_Construct_UClass_UAppList_Statics; \
public: \
	DECLARE_CLASS(UAppList, USteamCoreSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), NO_API) \
	DECLARE_SERIALIZER(UAppList)


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_AppList_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAppList(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAppList) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAppList); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAppList); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAppList(UAppList&&); \
	NO_API UAppList(const UAppList&); \
public:


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_AppList_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAppList(UAppList&&); \
	NO_API UAppList(const UAppList&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAppList); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAppList); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAppList)


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_AppList_h_10_PRIVATE_PROPERTY_OFFSET
#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_AppList_h_8_PROLOG
#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_AppList_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_AppList_h_10_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_AppList_h_10_SPARSE_DATA \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_AppList_h_10_RPC_WRAPPERS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_AppList_h_10_INCLASS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_AppList_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_AppList_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_AppList_h_10_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_AppList_h_10_SPARSE_DATA \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_AppList_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_AppList_h_10_INCLASS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_AppList_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMCORE_API UClass* StaticClass<class UAppList>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_AppList_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
