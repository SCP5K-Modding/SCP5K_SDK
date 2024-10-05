// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTexture2D;
class UObject;
class UGameInstance;
class AGameModeBase;
class AGameStateBase;
struct FDateTime;
struct FBlueprintSessionResult;
struct FUniqueNetIdRepl;
class AWorldSettings;
class UDirectionalLightComponent;
class UReflectionCaptureComponent;
#ifdef CONFIGURATOR_ConfiguratorLibrary_generated_h
#error "ConfiguratorLibrary.generated.h already included, missing '#pragma once' in ConfiguratorLibrary.h"
#endif
#define CONFIGURATOR_ConfiguratorLibrary_generated_h

#define SCP5K_SDK_Plugins_AffrayCore_Configurator_Source_Configurator_Public_ConfiguratorLibrary_h_21_SPARSE_DATA
#define SCP5K_SDK_Plugins_AffrayCore_Configurator_Source_Configurator_Public_ConfiguratorLibrary_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAngleBetween); \
	DECLARE_FUNCTION(execApplyTextureCompressionSettings); \
	DECLARE_FUNCTION(execBitShiftLeft); \
	DECLARE_FUNCTION(execBitShiftRight); \
	DECLARE_FUNCTION(execConfigFileExists); \
	DECLARE_FUNCTION(execContainsBit); \
	DECLARE_FUNCTION(execContainsBitIndex); \
	DECLARE_FUNCTION(execDefaultConfigFileExists); \
	DECLARE_FUNCTION(execGetBuildID); \
	DECLARE_FUNCTION(execGetConfigBool); \
	DECLARE_FUNCTION(execGetConfigFloat); \
	DECLARE_FUNCTION(execGetConfigInt); \
	DECLARE_FUNCTION(execGetConfigPath); \
	DECLARE_FUNCTION(execGetConfigString); \
	DECLARE_FUNCTION(execGetConnectedIP); \
	DECLARE_FUNCTION(execGetConnectedSessionIP); \
	DECLARE_FUNCTION(execGetConsoleBoolArgument); \
	DECLARE_FUNCTION(execGetConsoleFloatArgument); \
	DECLARE_FUNCTION(execGetConsoleIntArgument); \
	DECLARE_FUNCTION(execGetConsoleStringArgument); \
	DECLARE_FUNCTION(execGetCurrentLevelName); \
	DECLARE_FUNCTION(execGetCurrentSessionOwningID); \
	DECLARE_FUNCTION(execGetDefaultObjectConfigFilename); \
	DECLARE_FUNCTION(execGetEditorLevelName); \
	DECLARE_FUNCTION(execGetGameInstance); \
	DECLARE_FUNCTION(execGetGameMode); \
	DECLARE_FUNCTION(execGetGameState); \
	DECLARE_FUNCTION(execGetGlobalUserObjectConfigFilename); \
	DECLARE_FUNCTION(execGetLocalIP); \
	DECLARE_FUNCTION(execGetNetworkURL); \
	DECLARE_FUNCTION(execGetProjectDisplayName); \
	DECLARE_FUNCTION(execGetProjectSettingsBool); \
	DECLARE_FUNCTION(execGetProjectSettingsFloat); \
	DECLARE_FUNCTION(execGetProjectSettingsInt); \
	DECLARE_FUNCTION(execGetProjectSettingsString); \
	DECLARE_FUNCTION(execGetProjectVersion); \
	DECLARE_FUNCTION(execGetRHIName); \
	DECLARE_FUNCTION(execGetSecondsInDay); \
	DECLARE_FUNCTION(execGetSessionOwningID); \
	DECLARE_FUNCTION(execGetSteamQueryPort); \
	DECLARE_FUNCTION(execGetUniqueIDAsString); \
	DECLARE_FUNCTION(execGetWorldSettings); \
	DECLARE_FUNCTION(execHasConsoleArgument); \
	DECLARE_FUNCTION(execIsGameWorld); \
	DECLARE_FUNCTION(execIsValidAndHasWorld); \
	DECLARE_FUNCTION(execIsWorldValid); \
	DECLARE_FUNCTION(execLoadConfigFile); \
	DECLARE_FUNCTION(execLoadDefaultObjectConfig); \
	DECLARE_FUNCTION(execLoadObjectConfig); \
	DECLARE_FUNCTION(execLogError); \
	DECLARE_FUNCTION(execLogText); \
	DECLARE_FUNCTION(execLogWarning); \
	DECLARE_FUNCTION(execParseIntoArrayWithQuotes); \
	DECLARE_FUNCTION(execReadLines); \
	DECLARE_FUNCTION(execReadText); \
	DECLARE_FUNCTION(execReloadDefaultObjectConfig); \
	DECLARE_FUNCTION(execReloadObjectConfig); \
	DECLARE_FUNCTION(execSaveConfigFile); \
	DECLARE_FUNCTION(execSaveDefaultObjectConfig); \
	DECLARE_FUNCTION(execSaveObjectConfig); \
	DECLARE_FUNCTION(execSetBit); \
	DECLARE_FUNCTION(execSetConfigBool); \
	DECLARE_FUNCTION(execSetConfigFloat); \
	DECLARE_FUNCTION(execSetConfigInt); \
	DECLARE_FUNCTION(execSetConfigString); \
	DECLARE_FUNCTION(execSetCrashData); \
	DECLARE_FUNCTION(execSetDirectionalLightAngle); \
	DECLARE_FUNCTION(execToUnixTimestamp); \
	DECLARE_FUNCTION(execUpdateDirtyReflectionCaptures); \
	DECLARE_FUNCTION(execUpdateReflectionCapture); \
	DECLARE_FUNCTION(execWriteLines); \
	DECLARE_FUNCTION(execWriteText);


#define SCP5K_SDK_Plugins_AffrayCore_Configurator_Source_Configurator_Public_ConfiguratorLibrary_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAngleBetween); \
	DECLARE_FUNCTION(execApplyTextureCompressionSettings); \
	DECLARE_FUNCTION(execBitShiftLeft); \
	DECLARE_FUNCTION(execBitShiftRight); \
	DECLARE_FUNCTION(execConfigFileExists); \
	DECLARE_FUNCTION(execContainsBit); \
	DECLARE_FUNCTION(execContainsBitIndex); \
	DECLARE_FUNCTION(execDefaultConfigFileExists); \
	DECLARE_FUNCTION(execGetBuildID); \
	DECLARE_FUNCTION(execGetConfigBool); \
	DECLARE_FUNCTION(execGetConfigFloat); \
	DECLARE_FUNCTION(execGetConfigInt); \
	DECLARE_FUNCTION(execGetConfigPath); \
	DECLARE_FUNCTION(execGetConfigString); \
	DECLARE_FUNCTION(execGetConnectedIP); \
	DECLARE_FUNCTION(execGetConnectedSessionIP); \
	DECLARE_FUNCTION(execGetConsoleBoolArgument); \
	DECLARE_FUNCTION(execGetConsoleFloatArgument); \
	DECLARE_FUNCTION(execGetConsoleIntArgument); \
	DECLARE_FUNCTION(execGetConsoleStringArgument); \
	DECLARE_FUNCTION(execGetCurrentLevelName); \
	DECLARE_FUNCTION(execGetCurrentSessionOwningID); \
	DECLARE_FUNCTION(execGetDefaultObjectConfigFilename); \
	DECLARE_FUNCTION(execGetEditorLevelName); \
	DECLARE_FUNCTION(execGetGameInstance); \
	DECLARE_FUNCTION(execGetGameMode); \
	DECLARE_FUNCTION(execGetGameState); \
	DECLARE_FUNCTION(execGetGlobalUserObjectConfigFilename); \
	DECLARE_FUNCTION(execGetLocalIP); \
	DECLARE_FUNCTION(execGetNetworkURL); \
	DECLARE_FUNCTION(execGetProjectDisplayName); \
	DECLARE_FUNCTION(execGetProjectSettingsBool); \
	DECLARE_FUNCTION(execGetProjectSettingsFloat); \
	DECLARE_FUNCTION(execGetProjectSettingsInt); \
	DECLARE_FUNCTION(execGetProjectSettingsString); \
	DECLARE_FUNCTION(execGetProjectVersion); \
	DECLARE_FUNCTION(execGetRHIName); \
	DECLARE_FUNCTION(execGetSecondsInDay); \
	DECLARE_FUNCTION(execGetSessionOwningID); \
	DECLARE_FUNCTION(execGetSteamQueryPort); \
	DECLARE_FUNCTION(execGetUniqueIDAsString); \
	DECLARE_FUNCTION(execGetWorldSettings); \
	DECLARE_FUNCTION(execHasConsoleArgument); \
	DECLARE_FUNCTION(execIsGameWorld); \
	DECLARE_FUNCTION(execIsValidAndHasWorld); \
	DECLARE_FUNCTION(execIsWorldValid); \
	DECLARE_FUNCTION(execLoadConfigFile); \
	DECLARE_FUNCTION(execLoadDefaultObjectConfig); \
	DECLARE_FUNCTION(execLoadObjectConfig); \
	DECLARE_FUNCTION(execLogError); \
	DECLARE_FUNCTION(execLogText); \
	DECLARE_FUNCTION(execLogWarning); \
	DECLARE_FUNCTION(execParseIntoArrayWithQuotes); \
	DECLARE_FUNCTION(execReadLines); \
	DECLARE_FUNCTION(execReadText); \
	DECLARE_FUNCTION(execReloadDefaultObjectConfig); \
	DECLARE_FUNCTION(execReloadObjectConfig); \
	DECLARE_FUNCTION(execSaveConfigFile); \
	DECLARE_FUNCTION(execSaveDefaultObjectConfig); \
	DECLARE_FUNCTION(execSaveObjectConfig); \
	DECLARE_FUNCTION(execSetBit); \
	DECLARE_FUNCTION(execSetConfigBool); \
	DECLARE_FUNCTION(execSetConfigFloat); \
	DECLARE_FUNCTION(execSetConfigInt); \
	DECLARE_FUNCTION(execSetConfigString); \
	DECLARE_FUNCTION(execSetCrashData); \
	DECLARE_FUNCTION(execSetDirectionalLightAngle); \
	DECLARE_FUNCTION(execToUnixTimestamp); \
	DECLARE_FUNCTION(execUpdateDirtyReflectionCaptures); \
	DECLARE_FUNCTION(execUpdateReflectionCapture); \
	DECLARE_FUNCTION(execWriteLines); \
	DECLARE_FUNCTION(execWriteText);


#define SCP5K_SDK_Plugins_AffrayCore_Configurator_Source_Configurator_Public_ConfiguratorLibrary_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUConfiguratorLibrary(); \
	friend struct Z_Construct_UClass_UConfiguratorLibrary_Statics; \
public: \
	DECLARE_CLASS(UConfiguratorLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Configurator"), NO_API) \
	DECLARE_SERIALIZER(UConfiguratorLibrary)


#define SCP5K_SDK_Plugins_AffrayCore_Configurator_Source_Configurator_Public_ConfiguratorLibrary_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUConfiguratorLibrary(); \
	friend struct Z_Construct_UClass_UConfiguratorLibrary_Statics; \
public: \
	DECLARE_CLASS(UConfiguratorLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Configurator"), NO_API) \
	DECLARE_SERIALIZER(UConfiguratorLibrary)


#define SCP5K_SDK_Plugins_AffrayCore_Configurator_Source_Configurator_Public_ConfiguratorLibrary_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UConfiguratorLibrary(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UConfiguratorLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UConfiguratorLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UConfiguratorLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UConfiguratorLibrary(UConfiguratorLibrary&&); \
	NO_API UConfiguratorLibrary(const UConfiguratorLibrary&); \
public:


#define SCP5K_SDK_Plugins_AffrayCore_Configurator_Source_Configurator_Public_ConfiguratorLibrary_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UConfiguratorLibrary(UConfiguratorLibrary&&); \
	NO_API UConfiguratorLibrary(const UConfiguratorLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UConfiguratorLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UConfiguratorLibrary); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UConfiguratorLibrary)


#define SCP5K_SDK_Plugins_AffrayCore_Configurator_Source_Configurator_Public_ConfiguratorLibrary_h_21_PRIVATE_PROPERTY_OFFSET
#define SCP5K_SDK_Plugins_AffrayCore_Configurator_Source_Configurator_Public_ConfiguratorLibrary_h_19_PROLOG
#define SCP5K_SDK_Plugins_AffrayCore_Configurator_Source_Configurator_Public_ConfiguratorLibrary_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_AffrayCore_Configurator_Source_Configurator_Public_ConfiguratorLibrary_h_21_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_AffrayCore_Configurator_Source_Configurator_Public_ConfiguratorLibrary_h_21_SPARSE_DATA \
	SCP5K_SDK_Plugins_AffrayCore_Configurator_Source_Configurator_Public_ConfiguratorLibrary_h_21_RPC_WRAPPERS \
	SCP5K_SDK_Plugins_AffrayCore_Configurator_Source_Configurator_Public_ConfiguratorLibrary_h_21_INCLASS \
	SCP5K_SDK_Plugins_AffrayCore_Configurator_Source_Configurator_Public_ConfiguratorLibrary_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SCP5K_SDK_Plugins_AffrayCore_Configurator_Source_Configurator_Public_ConfiguratorLibrary_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_AffrayCore_Configurator_Source_Configurator_Public_ConfiguratorLibrary_h_21_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_AffrayCore_Configurator_Source_Configurator_Public_ConfiguratorLibrary_h_21_SPARSE_DATA \
	SCP5K_SDK_Plugins_AffrayCore_Configurator_Source_Configurator_Public_ConfiguratorLibrary_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_AffrayCore_Configurator_Source_Configurator_Public_ConfiguratorLibrary_h_21_INCLASS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_AffrayCore_Configurator_Source_Configurator_Public_ConfiguratorLibrary_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CONFIGURATOR_API UClass* StaticClass<class UConfiguratorLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_AffrayCore_Configurator_Source_Configurator_Public_ConfiguratorLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
