// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSteamID;
#ifdef STEAMCORE_Apps_generated_h
#error "Apps.generated.h already included, missing '#pragma once' in Apps.h"
#endif
#define STEAMCORE_Apps_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_Apps_h_12_SPARSE_DATA
#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_Apps_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execBGetDLCDataByIndex); \
	DECLARE_FUNCTION(execBIsAppInstalled); \
	DECLARE_FUNCTION(execBIsCybercafe); \
	DECLARE_FUNCTION(execBIsDlcInstalled); \
	DECLARE_FUNCTION(execBIsLowViolence); \
	DECLARE_FUNCTION(execBIsSubscribed); \
	DECLARE_FUNCTION(execBIsSubscribedApp); \
	DECLARE_FUNCTION(execBIsSubscribedFromFamilySharing); \
	DECLARE_FUNCTION(execBIsSubscribedFromFreeWeekend); \
	DECLARE_FUNCTION(execBIsTimedTrial); \
	DECLARE_FUNCTION(execBIsVACBanned); \
	DECLARE_FUNCTION(execGetAppBuildId); \
	DECLARE_FUNCTION(execGetAppInstallDir); \
	DECLARE_FUNCTION(execGetAppOwner); \
	DECLARE_FUNCTION(execGetAvailableGameLanguages); \
	DECLARE_FUNCTION(execGetCurrentBetaName); \
	DECLARE_FUNCTION(execGetCurrentGameLanguage); \
	DECLARE_FUNCTION(execGetDLCCount); \
	DECLARE_FUNCTION(execGetDlcDownloadProgress); \
	DECLARE_FUNCTION(execGetEarliestPurchaseUnixTime); \
	DECLARE_FUNCTION(execGetFileDetails); \
	DECLARE_FUNCTION(execGetInstalledDepots); \
	DECLARE_FUNCTION(execGetLaunchCommandLine); \
	DECLARE_FUNCTION(execGetLaunchQueryParam); \
	DECLARE_FUNCTION(execInstallDLC); \
	DECLARE_FUNCTION(execMarkContentCorrupt); \
	DECLARE_FUNCTION(execUninstallDLC);


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_Apps_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execBGetDLCDataByIndex); \
	DECLARE_FUNCTION(execBIsAppInstalled); \
	DECLARE_FUNCTION(execBIsCybercafe); \
	DECLARE_FUNCTION(execBIsDlcInstalled); \
	DECLARE_FUNCTION(execBIsLowViolence); \
	DECLARE_FUNCTION(execBIsSubscribed); \
	DECLARE_FUNCTION(execBIsSubscribedApp); \
	DECLARE_FUNCTION(execBIsSubscribedFromFamilySharing); \
	DECLARE_FUNCTION(execBIsSubscribedFromFreeWeekend); \
	DECLARE_FUNCTION(execBIsTimedTrial); \
	DECLARE_FUNCTION(execBIsVACBanned); \
	DECLARE_FUNCTION(execGetAppBuildId); \
	DECLARE_FUNCTION(execGetAppInstallDir); \
	DECLARE_FUNCTION(execGetAppOwner); \
	DECLARE_FUNCTION(execGetAvailableGameLanguages); \
	DECLARE_FUNCTION(execGetCurrentBetaName); \
	DECLARE_FUNCTION(execGetCurrentGameLanguage); \
	DECLARE_FUNCTION(execGetDLCCount); \
	DECLARE_FUNCTION(execGetDlcDownloadProgress); \
	DECLARE_FUNCTION(execGetEarliestPurchaseUnixTime); \
	DECLARE_FUNCTION(execGetFileDetails); \
	DECLARE_FUNCTION(execGetInstalledDepots); \
	DECLARE_FUNCTION(execGetLaunchCommandLine); \
	DECLARE_FUNCTION(execGetLaunchQueryParam); \
	DECLARE_FUNCTION(execInstallDLC); \
	DECLARE_FUNCTION(execMarkContentCorrupt); \
	DECLARE_FUNCTION(execUninstallDLC);


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_Apps_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUApps(); \
	friend struct Z_Construct_UClass_UApps_Statics; \
public: \
	DECLARE_CLASS(UApps, USteamCoreSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), NO_API) \
	DECLARE_SERIALIZER(UApps)


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_Apps_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUApps(); \
	friend struct Z_Construct_UClass_UApps_Statics; \
public: \
	DECLARE_CLASS(UApps, USteamCoreSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), NO_API) \
	DECLARE_SERIALIZER(UApps)


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_Apps_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UApps(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UApps) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UApps); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UApps); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UApps(UApps&&); \
	NO_API UApps(const UApps&); \
public:


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_Apps_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UApps(UApps&&); \
	NO_API UApps(const UApps&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UApps); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UApps); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UApps)


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_Apps_h_12_PRIVATE_PROPERTY_OFFSET
#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_Apps_h_10_PROLOG
#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_Apps_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_Apps_h_12_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_Apps_h_12_SPARSE_DATA \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_Apps_h_12_RPC_WRAPPERS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_Apps_h_12_INCLASS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_Apps_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_Apps_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_Apps_h_12_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_Apps_h_12_SPARSE_DATA \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_Apps_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_Apps_h_12_INCLASS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_Apps_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMCORE_API UClass* StaticClass<class UApps>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_Apps_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
