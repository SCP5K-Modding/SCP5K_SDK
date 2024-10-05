// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Configurator/Public/ConfiguratorLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConfiguratorLibrary() {}
// Cross Module References
	CONFIGURATOR_API UClass* Z_Construct_UClass_UConfiguratorLibrary_NoRegister();
	CONFIGURATOR_API UClass* Z_Construct_UClass_UConfiguratorLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_Configurator();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AGameStateBase_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
	ONLINESUBSYSTEMUTILS_API UScriptStruct* Z_Construct_UScriptStruct_FBlueprintSessionResult();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FUniqueNetIdRepl();
	ENGINE_API UClass* Z_Construct_UClass_AWorldSettings_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDirectionalLightComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UReflectionCaptureComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UConfiguratorLibrary::execAngleBetween)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_From);
		P_GET_PROPERTY(FFloatProperty,Z_Param_To);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UConfiguratorLibrary::AngleBetween(Z_Param_From,Z_Param_To);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConfiguratorLibrary::execApplyTextureCompressionSettings)
	{
		P_GET_OBJECT(UTexture2D,Z_Param_Texture);
		P_FINISH;
		P_NATIVE_BEGIN;
		UConfiguratorLibrary::ApplyTextureCompressionSettings(Z_Param_Texture);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConfiguratorLibrary::execBitShiftLeft)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Original);
		P_GET_PROPERTY(FIntProperty,Z_Param_Shift);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UConfiguratorLibrary::BitShiftLeft(Z_Param_Original,Z_Param_Shift);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConfiguratorLibrary::execBitShiftRight)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Original);
		P_GET_PROPERTY(FIntProperty,Z_Param_Shift);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UConfiguratorLibrary::BitShiftRight(Z_Param_Original,Z_Param_Shift);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConfiguratorLibrary::execConfigFileExists)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Path);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UConfiguratorLibrary::ConfigFileExists(Z_Param_Path);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConfiguratorLibrary::execContainsBit)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Mask);
		P_GET_PROPERTY(FIntProperty,Z_Param_MaskValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UConfiguratorLibrary::ContainsBit(Z_Param_Mask,Z_Param_MaskValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConfiguratorLibrary::execContainsBitIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Mask);
		P_GET_PROPERTY(FIntProperty,Z_Param_MaskValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UConfiguratorLibrary::ContainsBitIndex(Z_Param_Mask,Z_Param_MaskValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConfiguratorLibrary::execDefaultConfigFileExists)
	{
		P_GET_OBJECT(UObject,Z_Param_Object);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UConfiguratorLibrary::DefaultConfigFileExists(Z_Param_Object);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConfiguratorLibrary::execGetBuildID)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UConfiguratorLibrary::GetBuildID();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConfiguratorLibrary::execGetConfigBool)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Filename);
		P_GET_PROPERTY(FStrProperty,Z_Param_Section);
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_GET_UBOOL_REF(Z_Param_Out_HasValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UConfiguratorLibrary::GetConfigBool(Z_Param_Filename,Z_Param_Section,Z_Param_Name,Z_Param_Out_HasValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConfiguratorLibrary::execGetConfigFloat)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Filename);
		P_GET_PROPERTY(FStrProperty,Z_Param_Section);
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_GET_UBOOL_REF(Z_Param_Out_HasValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UConfiguratorLibrary::GetConfigFloat(Z_Param_Filename,Z_Param_Section,Z_Param_Name,Z_Param_Out_HasValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConfiguratorLibrary::execGetConfigInt)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Filename);
		P_GET_PROPERTY(FStrProperty,Z_Param_Section);
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_GET_UBOOL_REF(Z_Param_Out_HasValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UConfiguratorLibrary::GetConfigInt(Z_Param_Filename,Z_Param_Section,Z_Param_Name,Z_Param_Out_HasValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConfiguratorLibrary::execGetConfigPath)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Filename);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UConfiguratorLibrary::GetConfigPath(Z_Param_Filename);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConfiguratorLibrary::execGetConfigString)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Filename);
		P_GET_PROPERTY(FStrProperty,Z_Param_Section);
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_GET_UBOOL_REF(Z_Param_Out_HasValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UConfiguratorLibrary::GetConfigString(Z_Param_Filename,Z_Param_Section,Z_Param_Name,Z_Param_Out_HasValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConfiguratorLibrary::execGetConnectedIP)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Port);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UConfiguratorLibrary::GetConnectedIP(Z_Param_WorldContextObject,Z_Param_Out_Port);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConfiguratorLibrary::execGetConnectedSessionIP)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Port);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UConfiguratorLibrary::GetConnectedSessionIP(Z_Param_WorldContextObject,Z_Param_Out_Port);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConfiguratorLibrary::execGetConsoleBoolArgument)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Argument);
		P_GET_UBOOL_REF(Z_Param_Out_HasArgument);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UConfiguratorLibrary::GetConsoleBoolArgument(Z_Param_Argument,Z_Param_Out_HasArgument);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConfiguratorLibrary::execGetConsoleFloatArgument)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Argument);
		P_GET_UBOOL_REF(Z_Param_Out_HasArgument);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UConfiguratorLibrary::GetConsoleFloatArgument(Z_Param_Argument,Z_Param_Out_HasArgument);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConfiguratorLibrary::execGetConsoleIntArgument)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Argument);
		P_GET_UBOOL_REF(Z_Param_Out_HasArgument);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UConfiguratorLibrary::GetConsoleIntArgument(Z_Param_Argument,Z_Param_Out_HasArgument);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConfiguratorLibrary::execGetConsoleStringArgument)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Argument);
		P_GET_UBOOL_REF(Z_Param_Out_HasArgument);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UConfiguratorLibrary::GetConsoleStringArgument(Z_Param_Argument,Z_Param_Out_HasArgument);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConfiguratorLibrary::execGetCurrentLevelName)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UConfiguratorLibrary::GetCurrentLevelName(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConfiguratorLibrary::execGetCurrentSessionOwningID)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UConfiguratorLibrary::GetCurrentSessionOwningID(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConfiguratorLibrary::execGetDefaultObjectConfigFilename)
	{
		P_GET_OBJECT(UObject,Z_Param_Object);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UConfiguratorLibrary::GetDefaultObjectConfigFilename(Z_Param_Object);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConfiguratorLibrary::execGetEditorLevelName)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UConfiguratorLibrary::GetEditorLevelName(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConfiguratorLibrary::execGetGameInstance)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(UClass,Z_Param_Class);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UGameInstance**)Z_Param__Result=UConfiguratorLibrary::GetGameInstance(Z_Param_WorldContextObject,Z_Param_Class);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConfiguratorLibrary::execGetGameMode)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(UClass,Z_Param_Class);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AGameModeBase**)Z_Param__Result=UConfiguratorLibrary::GetGameMode(Z_Param_WorldContextObject,Z_Param_Class);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConfiguratorLibrary::execGetGameState)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(UClass,Z_Param_Class);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AGameStateBase**)Z_Param__Result=UConfiguratorLibrary::GetGameState(Z_Param_WorldContextObject,Z_Param_Class);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConfiguratorLibrary::execGetGlobalUserObjectConfigFilename)
	{
		P_GET_OBJECT(UObject,Z_Param_Object);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UConfiguratorLibrary::GetGlobalUserObjectConfigFilename(Z_Param_Object);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConfiguratorLibrary::execGetLocalIP)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Port);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UConfiguratorLibrary::GetLocalIP(Z_Param_WorldContextObject,Z_Param_Out_Port);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConfiguratorLibrary::execGetNetworkURL)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UConfiguratorLibrary::GetNetworkURL(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConfiguratorLibrary::execGetProjectDisplayName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=UConfiguratorLibrary::GetProjectDisplayName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConfiguratorLibrary::execGetProjectSettingsBool)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_GET_UBOOL_REF(Z_Param_Out_HasArgument);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UConfiguratorLibrary::GetProjectSettingsBool(Z_Param_Name,Z_Param_Out_HasArgument);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConfiguratorLibrary::execGetProjectSettingsFloat)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_GET_UBOOL_REF(Z_Param_Out_HasArgument);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UConfiguratorLibrary::GetProjectSettingsFloat(Z_Param_Name,Z_Param_Out_HasArgument);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConfiguratorLibrary::execGetProjectSettingsInt)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_GET_UBOOL_REF(Z_Param_Out_HasArgument);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UConfiguratorLibrary::GetProjectSettingsInt(Z_Param_Name,Z_Param_Out_HasArgument);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConfiguratorLibrary::execGetProjectSettingsString)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_GET_UBOOL_REF(Z_Param_Out_HasArgument);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UConfiguratorLibrary::GetProjectSettingsString(Z_Param_Name,Z_Param_Out_HasArgument);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConfiguratorLibrary::execGetProjectVersion)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UConfiguratorLibrary::GetProjectVersion();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConfiguratorLibrary::execGetRHIName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UConfiguratorLibrary::GetRHIName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConfiguratorLibrary::execGetSecondsInDay)
	{
		P_GET_STRUCT(FDateTime,Z_Param_InTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UConfiguratorLibrary::GetSecondsInDay(Z_Param_InTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConfiguratorLibrary::execGetSessionOwningID)
	{
		P_GET_STRUCT_REF(FBlueprintSessionResult,Z_Param_Out_Session);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UConfiguratorLibrary::GetSessionOwningID(Z_Param_Out_Session);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConfiguratorLibrary::execGetSteamQueryPort)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UConfiguratorLibrary::GetSteamQueryPort();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConfiguratorLibrary::execGetUniqueIDAsString)
	{
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_ID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UConfiguratorLibrary::GetUniqueIDAsString(Z_Param_ID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConfiguratorLibrary::execGetWorldSettings)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(UClass,Z_Param_SettingsClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AWorldSettings**)Z_Param__Result=UConfiguratorLibrary::GetWorldSettings(Z_Param_WorldContextObject,Z_Param_SettingsClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConfiguratorLibrary::execHasConsoleArgument)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Argument);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UConfiguratorLibrary::HasConsoleArgument(Z_Param_Argument);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConfiguratorLibrary::execIsGameWorld)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UConfiguratorLibrary::IsGameWorld(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConfiguratorLibrary::execIsValidAndHasWorld)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UConfiguratorLibrary::IsValidAndHasWorld(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConfiguratorLibrary::execIsWorldValid)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UConfiguratorLibrary::IsWorldValid(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConfiguratorLibrary::execLoadConfigFile)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Filename);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_FinalIniFilename);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UConfiguratorLibrary::LoadConfigFile(Z_Param_Filename,Z_Param_Out_FinalIniFilename);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConfiguratorLibrary::execLoadDefaultObjectConfig)
	{
		P_GET_OBJECT(UObject,Z_Param_Object);
		P_FINISH;
		P_NATIVE_BEGIN;
		UConfiguratorLibrary::LoadDefaultObjectConfig(Z_Param_Object);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConfiguratorLibrary::execLoadObjectConfig)
	{
		P_GET_OBJECT(UObject,Z_Param_Object);
		P_GET_PROPERTY(FStrProperty,Z_Param_Path);
		P_FINISH;
		P_NATIVE_BEGIN;
		UConfiguratorLibrary::LoadObjectConfig(Z_Param_Object,Z_Param_Path);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConfiguratorLibrary::execLogError)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Text);
		P_FINISH;
		P_NATIVE_BEGIN;
		UConfiguratorLibrary::LogError(Z_Param_Text);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConfiguratorLibrary::execLogText)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Text);
		P_FINISH;
		P_NATIVE_BEGIN;
		UConfiguratorLibrary::LogText(Z_Param_Text);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConfiguratorLibrary::execLogWarning)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Text);
		P_FINISH;
		P_NATIVE_BEGIN;
		UConfiguratorLibrary::LogWarning(Z_Param_Text);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConfiguratorLibrary::execParseIntoArrayWithQuotes)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Text);
		P_GET_PROPERTY(FStrProperty,Z_Param_Delimiter);
		P_GET_UBOOL_REF(Z_Param_Out_bHasSplit);
		P_GET_UBOOL(Z_Param_bRemoveQuotes);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=UConfiguratorLibrary::ParseIntoArrayWithQuotes(Z_Param_Text,Z_Param_Delimiter,Z_Param_Out_bHasSplit,Z_Param_bRemoveQuotes);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConfiguratorLibrary::execReadLines)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Path);
		P_GET_TARRAY_REF(FString,Z_Param_Out_Lines);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UConfiguratorLibrary::ReadLines(Z_Param_Path,Z_Param_Out_Lines);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConfiguratorLibrary::execReadText)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Path);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Text);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UConfiguratorLibrary::ReadText(Z_Param_Path,Z_Param_Out_Text);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConfiguratorLibrary::execReloadDefaultObjectConfig)
	{
		P_GET_OBJECT(UObject,Z_Param_Object);
		P_FINISH;
		P_NATIVE_BEGIN;
		UConfiguratorLibrary::ReloadDefaultObjectConfig(Z_Param_Object);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConfiguratorLibrary::execReloadObjectConfig)
	{
		P_GET_OBJECT(UObject,Z_Param_Object);
		P_GET_PROPERTY(FStrProperty,Z_Param_Path);
		P_FINISH;
		P_NATIVE_BEGIN;
		UConfiguratorLibrary::ReloadObjectConfig(Z_Param_Object,Z_Param_Path);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConfiguratorLibrary::execSaveConfigFile)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Filename);
		P_FINISH;
		P_NATIVE_BEGIN;
		UConfiguratorLibrary::SaveConfigFile(Z_Param_Filename);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConfiguratorLibrary::execSaveDefaultObjectConfig)
	{
		P_GET_OBJECT(UObject,Z_Param_Object);
		P_FINISH;
		P_NATIVE_BEGIN;
		UConfiguratorLibrary::SaveDefaultObjectConfig(Z_Param_Object);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConfiguratorLibrary::execSaveObjectConfig)
	{
		P_GET_OBJECT(UObject,Z_Param_Object);
		P_GET_PROPERTY(FStrProperty,Z_Param_Path);
		P_FINISH;
		P_NATIVE_BEGIN;
		UConfiguratorLibrary::SaveObjectConfig(Z_Param_Object,Z_Param_Path);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConfiguratorLibrary::execSetBit)
	{
		P_GET_UBOOL(Z_Param_bValue);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Mask);
		P_GET_PROPERTY(FIntProperty,Z_Param_MaskValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		UConfiguratorLibrary::SetBit(Z_Param_bValue,Z_Param_Out_Mask,Z_Param_MaskValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConfiguratorLibrary::execSetConfigBool)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Filename);
		P_GET_PROPERTY(FStrProperty,Z_Param_Section);
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_GET_UBOOL(Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		UConfiguratorLibrary::SetConfigBool(Z_Param_Filename,Z_Param_Section,Z_Param_Name,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConfiguratorLibrary::execSetConfigFloat)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Filename);
		P_GET_PROPERTY(FStrProperty,Z_Param_Section);
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		UConfiguratorLibrary::SetConfigFloat(Z_Param_Filename,Z_Param_Section,Z_Param_Name,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConfiguratorLibrary::execSetConfigInt)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Filename);
		P_GET_PROPERTY(FStrProperty,Z_Param_Section);
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_GET_PROPERTY(FIntProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		UConfiguratorLibrary::SetConfigInt(Z_Param_Filename,Z_Param_Section,Z_Param_Name,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConfiguratorLibrary::execSetConfigString)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Filename);
		P_GET_PROPERTY(FStrProperty,Z_Param_Section);
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_GET_PROPERTY(FStrProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		UConfiguratorLibrary::SetConfigString(Z_Param_Filename,Z_Param_Section,Z_Param_Name,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConfiguratorLibrary::execSetCrashData)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FStrProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		UConfiguratorLibrary::SetCrashData(Z_Param_Key,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConfiguratorLibrary::execSetDirectionalLightAngle)
	{
		P_GET_OBJECT(UDirectionalLightComponent,Z_Param_Light);
		P_GET_PROPERTY(FFloatProperty,Z_Param_SourceAngle);
		P_GET_PROPERTY(FFloatProperty,Z_Param_SoftSourceAngle);
		P_FINISH;
		P_NATIVE_BEGIN;
		UConfiguratorLibrary::SetDirectionalLightAngle(Z_Param_Light,Z_Param_SourceAngle,Z_Param_SoftSourceAngle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConfiguratorLibrary::execToUnixTimestamp)
	{
		P_GET_STRUCT(FDateTime,Z_Param_InTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int64*)Z_Param__Result=UConfiguratorLibrary::ToUnixTimestamp(Z_Param_InTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConfiguratorLibrary::execUpdateDirtyReflectionCaptures)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UConfiguratorLibrary::UpdateDirtyReflectionCaptures();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConfiguratorLibrary::execUpdateReflectionCapture)
	{
		P_GET_OBJECT(UReflectionCaptureComponent,Z_Param_Reflection);
		P_FINISH;
		P_NATIVE_BEGIN;
		UConfiguratorLibrary::UpdateReflectionCapture(Z_Param_Reflection);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConfiguratorLibrary::execWriteLines)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Path);
		P_GET_TARRAY(FString,Z_Param_Lines);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UConfiguratorLibrary::WriteLines(Z_Param_Path,Z_Param_Lines);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConfiguratorLibrary::execWriteText)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Path);
		P_GET_PROPERTY(FStrProperty,Z_Param_Text);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UConfiguratorLibrary::WriteText(Z_Param_Path,Z_Param_Text);
		P_NATIVE_END;
	}
	void UConfiguratorLibrary::StaticRegisterNativesUConfiguratorLibrary()
	{
		UClass* Class = UConfiguratorLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AngleBetween", &UConfiguratorLibrary::execAngleBetween },
			{ "ApplyTextureCompressionSettings", &UConfiguratorLibrary::execApplyTextureCompressionSettings },
			{ "BitShiftLeft", &UConfiguratorLibrary::execBitShiftLeft },
			{ "BitShiftRight", &UConfiguratorLibrary::execBitShiftRight },
			{ "ConfigFileExists", &UConfiguratorLibrary::execConfigFileExists },
			{ "ContainsBit", &UConfiguratorLibrary::execContainsBit },
			{ "ContainsBitIndex", &UConfiguratorLibrary::execContainsBitIndex },
			{ "DefaultConfigFileExists", &UConfiguratorLibrary::execDefaultConfigFileExists },
			{ "GetBuildID", &UConfiguratorLibrary::execGetBuildID },
			{ "GetConfigBool", &UConfiguratorLibrary::execGetConfigBool },
			{ "GetConfigFloat", &UConfiguratorLibrary::execGetConfigFloat },
			{ "GetConfigInt", &UConfiguratorLibrary::execGetConfigInt },
			{ "GetConfigPath", &UConfiguratorLibrary::execGetConfigPath },
			{ "GetConfigString", &UConfiguratorLibrary::execGetConfigString },
			{ "GetConnectedIP", &UConfiguratorLibrary::execGetConnectedIP },
			{ "GetConnectedSessionIP", &UConfiguratorLibrary::execGetConnectedSessionIP },
			{ "GetConsoleBoolArgument", &UConfiguratorLibrary::execGetConsoleBoolArgument },
			{ "GetConsoleFloatArgument", &UConfiguratorLibrary::execGetConsoleFloatArgument },
			{ "GetConsoleIntArgument", &UConfiguratorLibrary::execGetConsoleIntArgument },
			{ "GetConsoleStringArgument", &UConfiguratorLibrary::execGetConsoleStringArgument },
			{ "GetCurrentLevelName", &UConfiguratorLibrary::execGetCurrentLevelName },
			{ "GetCurrentSessionOwningID", &UConfiguratorLibrary::execGetCurrentSessionOwningID },
			{ "GetDefaultObjectConfigFilename", &UConfiguratorLibrary::execGetDefaultObjectConfigFilename },
			{ "GetEditorLevelName", &UConfiguratorLibrary::execGetEditorLevelName },
			{ "GetGameInstance", &UConfiguratorLibrary::execGetGameInstance },
			{ "GetGameMode", &UConfiguratorLibrary::execGetGameMode },
			{ "GetGameState", &UConfiguratorLibrary::execGetGameState },
			{ "GetGlobalUserObjectConfigFilename", &UConfiguratorLibrary::execGetGlobalUserObjectConfigFilename },
			{ "GetLocalIP", &UConfiguratorLibrary::execGetLocalIP },
			{ "GetNetworkURL", &UConfiguratorLibrary::execGetNetworkURL },
			{ "GetProjectDisplayName", &UConfiguratorLibrary::execGetProjectDisplayName },
			{ "GetProjectSettingsBool", &UConfiguratorLibrary::execGetProjectSettingsBool },
			{ "GetProjectSettingsFloat", &UConfiguratorLibrary::execGetProjectSettingsFloat },
			{ "GetProjectSettingsInt", &UConfiguratorLibrary::execGetProjectSettingsInt },
			{ "GetProjectSettingsString", &UConfiguratorLibrary::execGetProjectSettingsString },
			{ "GetProjectVersion", &UConfiguratorLibrary::execGetProjectVersion },
			{ "GetRHIName", &UConfiguratorLibrary::execGetRHIName },
			{ "GetSecondsInDay", &UConfiguratorLibrary::execGetSecondsInDay },
			{ "GetSessionOwningID", &UConfiguratorLibrary::execGetSessionOwningID },
			{ "GetSteamQueryPort", &UConfiguratorLibrary::execGetSteamQueryPort },
			{ "GetUniqueIDAsString", &UConfiguratorLibrary::execGetUniqueIDAsString },
			{ "GetWorldSettings", &UConfiguratorLibrary::execGetWorldSettings },
			{ "HasConsoleArgument", &UConfiguratorLibrary::execHasConsoleArgument },
			{ "IsGameWorld", &UConfiguratorLibrary::execIsGameWorld },
			{ "IsValidAndHasWorld", &UConfiguratorLibrary::execIsValidAndHasWorld },
			{ "IsWorldValid", &UConfiguratorLibrary::execIsWorldValid },
			{ "LoadConfigFile", &UConfiguratorLibrary::execLoadConfigFile },
			{ "LoadDefaultObjectConfig", &UConfiguratorLibrary::execLoadDefaultObjectConfig },
			{ "LoadObjectConfig", &UConfiguratorLibrary::execLoadObjectConfig },
			{ "LogError", &UConfiguratorLibrary::execLogError },
			{ "LogText", &UConfiguratorLibrary::execLogText },
			{ "LogWarning", &UConfiguratorLibrary::execLogWarning },
			{ "ParseIntoArrayWithQuotes", &UConfiguratorLibrary::execParseIntoArrayWithQuotes },
			{ "ReadLines", &UConfiguratorLibrary::execReadLines },
			{ "ReadText", &UConfiguratorLibrary::execReadText },
			{ "ReloadDefaultObjectConfig", &UConfiguratorLibrary::execReloadDefaultObjectConfig },
			{ "ReloadObjectConfig", &UConfiguratorLibrary::execReloadObjectConfig },
			{ "SaveConfigFile", &UConfiguratorLibrary::execSaveConfigFile },
			{ "SaveDefaultObjectConfig", &UConfiguratorLibrary::execSaveDefaultObjectConfig },
			{ "SaveObjectConfig", &UConfiguratorLibrary::execSaveObjectConfig },
			{ "SetBit", &UConfiguratorLibrary::execSetBit },
			{ "SetConfigBool", &UConfiguratorLibrary::execSetConfigBool },
			{ "SetConfigFloat", &UConfiguratorLibrary::execSetConfigFloat },
			{ "SetConfigInt", &UConfiguratorLibrary::execSetConfigInt },
			{ "SetConfigString", &UConfiguratorLibrary::execSetConfigString },
			{ "SetCrashData", &UConfiguratorLibrary::execSetCrashData },
			{ "SetDirectionalLightAngle", &UConfiguratorLibrary::execSetDirectionalLightAngle },
			{ "ToUnixTimestamp", &UConfiguratorLibrary::execToUnixTimestamp },
			{ "UpdateDirtyReflectionCaptures", &UConfiguratorLibrary::execUpdateDirtyReflectionCaptures },
			{ "UpdateReflectionCapture", &UConfiguratorLibrary::execUpdateReflectionCapture },
			{ "WriteLines", &UConfiguratorLibrary::execWriteLines },
			{ "WriteText", &UConfiguratorLibrary::execWriteText },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UConfiguratorLibrary_AngleBetween_Statics
	{
		struct ConfiguratorLibrary_eventAngleBetween_Parms
		{
			float From;
			float To;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_From;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_To;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UConfiguratorLibrary_AngleBetween_Statics::NewProp_From = { "From", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConfiguratorLibrary_eventAngleBetween_Parms, From), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UConfiguratorLibrary_AngleBetween_Statics::NewProp_To = { "To", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConfiguratorLibrary_eventAngleBetween_Parms, To), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UConfiguratorLibrary_AngleBetween_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConfiguratorLibrary_eventAngleBetween_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConfiguratorLibrary_AngleBetween_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConfiguratorLibrary_AngleBetween_Statics::NewProp_From,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConfiguratorLibrary_AngleBetween_Statics::NewProp_To,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConfiguratorLibrary_AngleBetween_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConfiguratorLibrary_AngleBetween_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConfiguratorLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UConfiguratorLibrary_AngleBetween_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConfiguratorLibrary, nullptr, "AngleBetween", nullptr, nullptr, sizeof(ConfiguratorLibrary_eventAngleBetween_Parms), Z_Construct_UFunction_UConfiguratorLibrary_AngleBetween_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfiguratorLibrary_AngleBetween_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConfiguratorLibrary_AngleBetween_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfiguratorLibrary_AngleBetween_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConfiguratorLibrary_AngleBetween()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UConfiguratorLibrary_AngleBetween_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConfiguratorLibrary_ApplyTextureCompressionSettings_Statics
	{
		struct ConfiguratorLibrary_eventApplyTextureCompressionSettings_Parms
		{
			UTexture2D* Texture;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Texture;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UConfiguratorLibrary_ApplyTextureCompressionSettings_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConfiguratorLibrary_eventApplyTextureCompressionSettings_Parms, Texture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConfiguratorLibrary_ApplyTextureCompressionSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConfiguratorLibrary_ApplyTextureCompressionSettings_Statics::NewProp_Texture,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConfiguratorLibrary_ApplyTextureCompressionSettings_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConfiguratorLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UConfiguratorLibrary_ApplyTextureCompressionSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConfiguratorLibrary, nullptr, "ApplyTextureCompressionSettings", nullptr, nullptr, sizeof(ConfiguratorLibrary_eventApplyTextureCompressionSettings_Parms), Z_Construct_UFunction_UConfiguratorLibrary_ApplyTextureCompressionSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfiguratorLibrary_ApplyTextureCompressionSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConfiguratorLibrary_ApplyTextureCompressionSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfiguratorLibrary_ApplyTextureCompressionSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConfiguratorLibrary_ApplyTextureCompressionSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UConfiguratorLibrary_ApplyTextureCompressionSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConfiguratorLibrary_BitShiftLeft_Statics
	{
		struct ConfiguratorLibrary_eventBitShiftLeft_Parms
		{
			int32 Original;
			int32 Shift;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Original;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Shift;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UConfiguratorLibrary_BitShiftLeft_Statics::NewProp_Original = { "Original", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConfiguratorLibrary_eventBitShiftLeft_Parms, Original), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UConfiguratorLibrary_BitShiftLeft_Statics::NewProp_Shift = { "Shift", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConfiguratorLibrary_eventBitShiftLeft_Parms, Shift), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UConfiguratorLibrary_BitShiftLeft_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConfiguratorLibrary_eventBitShiftLeft_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConfiguratorLibrary_BitShiftLeft_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConfiguratorLibrary_BitShiftLeft_Statics::NewProp_Original,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConfiguratorLibrary_BitShiftLeft_Statics::NewProp_Shift,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConfiguratorLibrary_BitShiftLeft_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConfiguratorLibrary_BitShiftLeft_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConfiguratorLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UConfiguratorLibrary_BitShiftLeft_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConfiguratorLibrary, nullptr, "BitShiftLeft", nullptr, nullptr, sizeof(ConfiguratorLibrary_eventBitShiftLeft_Parms), Z_Construct_UFunction_UConfiguratorLibrary_BitShiftLeft_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfiguratorLibrary_BitShiftLeft_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConfiguratorLibrary_BitShiftLeft_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfiguratorLibrary_BitShiftLeft_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConfiguratorLibrary_BitShiftLeft()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UConfiguratorLibrary_BitShiftLeft_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConfiguratorLibrary_BitShiftRight_Statics
	{
		struct ConfiguratorLibrary_eventBitShiftRight_Parms
		{
			int32 Original;
			int32 Shift;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Original;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Shift;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UConfiguratorLibrary_BitShiftRight_Statics::NewProp_Original = { "Original", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConfiguratorLibrary_eventBitShiftRight_Parms, Original), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UConfiguratorLibrary_BitShiftRight_Statics::NewProp_Shift = { "Shift", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConfiguratorLibrary_eventBitShiftRight_Parms, Shift), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UConfiguratorLibrary_BitShiftRight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConfiguratorLibrary_eventBitShiftRight_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConfiguratorLibrary_BitShiftRight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConfiguratorLibrary_BitShiftRight_Statics::NewProp_Original,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConfiguratorLibrary_BitShiftRight_Statics::NewProp_Shift,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConfiguratorLibrary_BitShiftRight_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConfiguratorLibrary_BitShiftRight_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConfiguratorLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UConfiguratorLibrary_BitShiftRight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConfiguratorLibrary, nullptr, "BitShiftRight", nullptr, nullptr, sizeof(ConfiguratorLibrary_eventBitShiftRight_Parms), Z_Construct_UFunction_UConfiguratorLibrary_BitShiftRight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfiguratorLibrary_BitShiftRight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConfiguratorLibrary_BitShiftRight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfiguratorLibrary_BitShiftRight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConfiguratorLibrary_BitShiftRight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UConfiguratorLibrary_BitShiftRight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConfiguratorLibrary_ConfigFileExists_Statics
	{
		struct ConfiguratorLibrary_eventConfigFileExists_Parms
		{
			FString Path;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Path_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Path;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConfiguratorLibrary_ConfigFileExists_Statics::NewProp_Path_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UConfiguratorLibrary_ConfigFileExists_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConfiguratorLibrary_eventConfigFileExists_Parms, Path), METADATA_PARAMS(Z_Construct_UFunction_UConfiguratorLibrary_ConfigFileExists_Statics::NewProp_Path_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfiguratorLibrary_ConfigFileExists_Statics::NewProp_Path_MetaData)) };
	void Z_Construct_UFunction_UConfiguratorLibrary_ConfigFileExists_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ConfiguratorLibrary_eventConfigFileExists_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UConfiguratorLibrary_ConfigFileExists_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ConfiguratorLibrary_eventConfigFileExists_Parms), &Z_Construct_UFunction_UConfiguratorLibrary_ConfigFileExists_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConfiguratorLibrary_ConfigFileExists_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConfiguratorLibrary_ConfigFileExists_Statics::NewProp_Path,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConfiguratorLibrary_ConfigFileExists_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConfiguratorLibrary_ConfigFileExists_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConfiguratorLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UConfiguratorLibrary_ConfigFileExists_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConfiguratorLibrary, nullptr, "ConfigFileExists", nullptr, nullptr, sizeof(ConfiguratorLibrary_eventConfigFileExists_Parms), Z_Construct_UFunction_UConfiguratorLibrary_ConfigFileExists_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfiguratorLibrary_ConfigFileExists_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConfiguratorLibrary_ConfigFileExists_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfiguratorLibrary_ConfigFileExists_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConfiguratorLibrary_ConfigFileExists()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UConfiguratorLibrary_ConfigFileExists_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConfiguratorLibrary_ContainsBit_Statics
	{
		struct ConfiguratorLibrary_eventContainsBit_Parms
		{
			int32 Mask;
			int32 MaskValue;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Mask;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaskValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UConfiguratorLibrary_ContainsBit_Statics::NewProp_Mask = { "Mask", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConfiguratorLibrary_eventContainsBit_Parms, Mask), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UConfiguratorLibrary_ContainsBit_Statics::NewProp_MaskValue = { "MaskValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConfiguratorLibrary_eventContainsBit_Parms, MaskValue), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UConfiguratorLibrary_ContainsBit_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ConfiguratorLibrary_eventContainsBit_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UConfiguratorLibrary_ContainsBit_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ConfiguratorLibrary_eventContainsBit_Parms), &Z_Construct_UFunction_UConfiguratorLibrary_ContainsBit_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConfiguratorLibrary_ContainsBit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConfiguratorLibrary_ContainsBit_Statics::NewProp_Mask,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConfiguratorLibrary_ContainsBit_Statics::NewProp_MaskValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConfiguratorLibrary_ContainsBit_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConfiguratorLibrary_ContainsBit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConfiguratorLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UConfiguratorLibrary_ContainsBit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConfiguratorLibrary, nullptr, "ContainsBit", nullptr, nullptr, sizeof(ConfiguratorLibrary_eventContainsBit_Parms), Z_Construct_UFunction_UConfiguratorLibrary_ContainsBit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfiguratorLibrary_ContainsBit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConfiguratorLibrary_ContainsBit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfiguratorLibrary_ContainsBit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConfiguratorLibrary_ContainsBit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UConfiguratorLibrary_ContainsBit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConfiguratorLibrary_ContainsBitIndex_Statics
	{
		struct ConfiguratorLibrary_eventContainsBitIndex_Parms
		{
			int32 Mask;
			int32 MaskValue;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Mask;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaskValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UConfiguratorLibrary_ContainsBitIndex_Statics::NewProp_Mask = { "Mask", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConfiguratorLibrary_eventContainsBitIndex_Parms, Mask), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UConfiguratorLibrary_ContainsBitIndex_Statics::NewProp_MaskValue = { "MaskValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConfiguratorLibrary_eventContainsBitIndex_Parms, MaskValue), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UConfiguratorLibrary_ContainsBitIndex_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ConfiguratorLibrary_eventContainsBitIndex_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UConfiguratorLibrary_ContainsBitIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ConfiguratorLibrary_eventContainsBitIndex_Parms), &Z_Construct_UFunction_UConfiguratorLibrary_ContainsBitIndex_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConfiguratorLibrary_ContainsBitIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConfiguratorLibrary_ContainsBitIndex_Statics::NewProp_Mask,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConfiguratorLibrary_ContainsBitIndex_Statics::NewProp_MaskValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConfiguratorLibrary_ContainsBitIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConfiguratorLibrary_ContainsBitIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConfiguratorLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UConfiguratorLibrary_ContainsBitIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConfiguratorLibrary, nullptr, "ContainsBitIndex", nullptr, nullptr, sizeof(ConfiguratorLibrary_eventContainsBitIndex_Parms), Z_Construct_UFunction_UConfiguratorLibrary_ContainsBitIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfiguratorLibrary_ContainsBitIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConfiguratorLibrary_ContainsBitIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfiguratorLibrary_ContainsBitIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConfiguratorLibrary_ContainsBitIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UConfiguratorLibrary_ContainsBitIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConfiguratorLibrary_DefaultConfigFileExists_Statics
	{
		struct ConfiguratorLibrary_eventDefaultConfigFileExists_Parms
		{
			UObject* Object;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Object;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UConfiguratorLibrary_DefaultConfigFileExists_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConfiguratorLibrary_eventDefaultConfigFileExists_Parms, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UConfiguratorLibrary_DefaultConfigFileExists_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ConfiguratorLibrary_eventDefaultConfigFileExists_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UConfiguratorLibrary_DefaultConfigFileExists_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ConfiguratorLibrary_eventDefaultConfigFileExists_Parms), &Z_Construct_UFunction_UConfiguratorLibrary_DefaultConfigFileExists_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConfiguratorLibrary_DefaultConfigFileExists_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConfiguratorLibrary_DefaultConfigFileExists_Statics::NewProp_Object,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConfiguratorLibrary_DefaultConfigFileExists_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConfiguratorLibrary_DefaultConfigFileExists_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConfiguratorLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UConfiguratorLibrary_DefaultConfigFileExists_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConfiguratorLibrary, nullptr, "DefaultConfigFileExists", nullptr, nullptr, sizeof(ConfiguratorLibrary_eventDefaultConfigFileExists_Parms), Z_Construct_UFunction_UConfiguratorLibrary_DefaultConfigFileExists_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfiguratorLibrary_DefaultConfigFileExists_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConfiguratorLibrary_DefaultConfigFileExists_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfiguratorLibrary_DefaultConfigFileExists_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConfiguratorLibrary_DefaultConfigFileExists()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UConfiguratorLibrary_DefaultConfigFileExists_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConfiguratorLibrary_GetBuildID_Statics
	{
		struct ConfiguratorLibrary_eventGetBuildID_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UConfiguratorLibrary_GetBuildID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConfiguratorLibrary_eventGetBuildID_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConfiguratorLibrary_GetBuildID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConfiguratorLibrary_GetBuildID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConfiguratorLibrary_GetBuildID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConfiguratorLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UConfiguratorLibrary_GetBuildID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConfiguratorLibrary, nullptr, "GetBuildID", nullptr, nullptr, sizeof(ConfiguratorLibrary_eventGetBuildID_Parms), Z_Construct_UFunction_UConfiguratorLibrary_GetBuildID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfiguratorLibrary_GetBuildID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConfiguratorLibrary_GetBuildID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfiguratorLibrary_GetBuildID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConfiguratorLibrary_GetBuildID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UConfiguratorLibrary_GetBuildID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConfiguratorLibrary_GetConfigBool_Statics
	{
		struct ConfiguratorLibrary_eventGetConfigBool_Parms
		{
			FString Filename;
			FString Section;
			FString Name;
			bool HasValue;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Filename_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Filename;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Section_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Section;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static void NewProp_HasValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_HasValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConfiguratorLibrary_GetConfigBool_Statics::NewProp_Filename_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UConfiguratorLibrary_GetConfigBool_Statics::NewProp_Filename = { "Filename", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConfiguratorLibrary_eventGetConfigBool_Parms, Filename), METADATA_PARAMS(Z_Construct_UFunction_UConfiguratorLibrary_GetConfigBool_Statics::NewProp_Filename_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfiguratorLibrary_GetConfigBool_Statics::NewProp_Filename_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConfiguratorLibrary_GetConfigBool_Statics::NewProp_Section_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UConfiguratorLibrary_GetConfigBool_Statics::NewProp_Section = { "Section", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConfiguratorLibrary_eventGetConfigBool_Parms, Section), METADATA_PARAMS(Z_Construct_UFunction_UConfiguratorLibrary_GetConfigBool_Statics::NewProp_Section_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfiguratorLibrary_GetConfigBool_Statics::NewProp_Section_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConfiguratorLibrary_GetConfigBool_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UConfiguratorLibrary_GetConfigBool_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConfiguratorLibrary_eventGetConfigBool_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UConfiguratorLibrary_GetConfigBool_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfiguratorLibrary_GetConfigBool_Statics::NewProp_Name_MetaData)) };
	void Z_Construct_UFunction_UConfiguratorLibrary_GetConfigBool_Statics::NewProp_HasValue_SetBit(void* Obj)
	{
		((ConfiguratorLibrary_eventGetConfigBool_Parms*)Obj)->HasValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UConfiguratorLibrary_GetConfigBool_Statics::NewProp_HasValue = { "HasValue", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ConfiguratorLibrary_eventGetConfigBool_Parms), &Z_Construct_UFunction_UConfiguratorLibrary_GetConfigBool_Statics::NewProp_HasValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UConfiguratorLibrary_GetConfigBool_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ConfiguratorLibrary_eventGetConfigBool_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UConfiguratorLibrary_GetConfigBool_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ConfiguratorLibrary_eventGetConfigBool_Parms), &Z_Construct_UFunction_UConfiguratorLibrary_GetConfigBool_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConfiguratorLibrary_GetConfigBool_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConfiguratorLibrary_GetConfigBool_Statics::NewProp_Filename,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConfiguratorLibrary_GetConfigBool_Statics::NewProp_Section,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConfiguratorLibrary_GetConfigBool_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConfiguratorLibrary_GetConfigBool_Statics::NewProp_HasValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConfiguratorLibrary_GetConfigBool_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConfiguratorLibrary_GetConfigBool_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConfiguratorLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UConfiguratorLibrary_GetConfigBool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConfiguratorLibrary, nullptr, "GetConfigBool", nullptr, nullptr, sizeof(ConfiguratorLibrary_eventGetConfigBool_Parms), Z_Construct_UFunction_UConfiguratorLibrary_GetConfigBool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfiguratorLibrary_GetConfigBool_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConfiguratorLibrary_GetConfigBool_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfiguratorLibrary_GetConfigBool_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConfiguratorLibrary_GetConfigBool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UConfiguratorLibrary_GetConfigBool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConfiguratorLibrary_GetConfigFloat_Statics
	{
		struct ConfiguratorLibrary_eventGetConfigFloat_Parms
		{
			FString Filename;
			FString Section;
			FString Name;
			bool HasValue;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Filename_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Filename;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Section_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Section;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static void NewProp_HasValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_HasValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConfiguratorLibrary_GetConfigFloat_Statics::NewProp_Filename_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UConfiguratorLibrary_GetConfigFloat_Statics::NewProp_Filename = { "Filename", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConfiguratorLibrary_eventGetConfigFloat_Parms, Filename), METADATA_PARAMS(Z_Construct_UFunction_UConfiguratorLibrary_GetConfigFloat_Statics::NewProp_Filename_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfiguratorLibrary_GetConfigFloat_Statics::NewProp_Filename_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConfiguratorLibrary_GetConfigFloat_Statics::NewProp_Section_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UConfiguratorLibrary_GetConfigFloat_Statics::NewProp_Section = { "Section", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConfiguratorLibrary_eventGetConfigFloat_Parms, Section), METADATA_PARAMS(Z_Construct_UFunction_UConfiguratorLibrary_GetConfigFloat_Statics::NewProp_Section_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfiguratorLibrary_GetConfigFloat_Statics::NewProp_Section_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConfiguratorLibrary_GetConfigFloat_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UConfiguratorLibrary_GetConfigFloat_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConfiguratorLibrary_eventGetConfigFloat_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UConfiguratorLibrary_GetConfigFloat_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfiguratorLibrary_GetConfigFloat_Statics::NewProp_Name_MetaData)) };
	void Z_Construct_UFunction_UConfiguratorLibrary_GetConfigFloat_Statics::NewProp_HasValue_SetBit(void* Obj)
	{
		((ConfiguratorLibrary_eventGetConfigFloat_Parms*)Obj)->HasValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UConfiguratorLibrary_GetConfigFloat_Statics::NewProp_HasValue = { "HasValue", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ConfiguratorLibrary_eventGetConfigFloat_Parms), &Z_Construct_UFunction_UConfiguratorLibrary_GetConfigFloat_Statics::NewProp_HasValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UConfiguratorLibrary_GetConfigFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConfiguratorLibrary_eventGetConfigFloat_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConfiguratorLibrary_GetConfigFloat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConfiguratorLibrary_GetConfigFloat_Statics::NewProp_Filename,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConfiguratorLibrary_GetConfigFloat_Statics::NewProp_Section,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConfiguratorLibrary_GetConfigFloat_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConfiguratorLibrary_GetConfigFloat_Statics::NewProp_HasValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConfiguratorLibrary_GetConfigFloat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConfiguratorLibrary_GetConfigFloat_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConfiguratorLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UConfiguratorLibrary_GetConfigFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConfiguratorLibrary, nullptr, "GetConfigFloat", nullptr, nullptr, sizeof(ConfiguratorLibrary_eventGetConfigFloat_Parms), Z_Construct_UFunction_UConfiguratorLibrary_GetConfigFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfiguratorLibrary_GetConfigFloat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConfiguratorLibrary_GetConfigFloat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfiguratorLibrary_GetConfigFloat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConfiguratorLibrary_GetConfigFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UConfiguratorLibrary_GetConfigFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConfiguratorLibrary_GetConfigInt_Statics
	{
		struct ConfiguratorLibrary_eventGetConfigInt_Parms
		{
			FString Filename;
			FString Section;
			FString Name;
			bool HasValue;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Filename_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Filename;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Section_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Section;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static void NewProp_HasValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_HasValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConfiguratorLibrary_GetConfigInt_Statics::NewProp_Filename_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UConfiguratorLibrary_GetConfigInt_Statics::NewProp_Filename = { "Filename", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConfiguratorLibrary_eventGetConfigInt_Parms, Filename), METADATA_PARAMS(Z_Construct_UFunction_UConfiguratorLibrary_GetConfigInt_Statics::NewProp_Filename_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfiguratorLibrary_GetConfigInt_Statics::NewProp_Filename_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConfiguratorLibrary_GetConfigInt_Statics::NewProp_Section_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UConfiguratorLibrary_GetConfigInt_Statics::NewProp_Section = { "Section", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConfiguratorLibrary_eventGetConfigInt_Parms, Section), METADATA_PARAMS(Z_Construct_UFunction_UConfiguratorLibrary_GetConfigInt_Statics::NewProp_Section_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfiguratorLibrary_GetConfigInt_Statics::NewProp_Section_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConfiguratorLibrary_GetConfigInt_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UConfiguratorLibrary_GetConfigInt_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConfiguratorLibrary_eventGetConfigInt_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UConfiguratorLibrary_GetConfigInt_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfiguratorLibrary_GetConfigInt_Statics::NewProp_Name_MetaData)) };
	void Z_Construct_UFunction_UConfiguratorLibrary_GetConfigInt_Statics::NewProp_HasValue_SetBit(void* Obj)
	{
		((ConfiguratorLibrary_eventGetConfigInt_Parms*)Obj)->HasValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UConfiguratorLibrary_GetConfigInt_Statics::NewProp_HasValue = { "HasValue", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ConfiguratorLibrary_eventGetConfigInt_Parms), &Z_Construct_UFunction_UConfiguratorLibrary_GetConfigInt_Statics::NewProp_HasValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UConfiguratorLibrary_GetConfigInt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConfiguratorLibrary_eventGetConfigInt_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConfiguratorLibrary_GetConfigInt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConfiguratorLibrary_GetConfigInt_Statics::NewProp_Filename,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConfiguratorLibrary_GetConfigInt_Statics::NewProp_Section,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConfiguratorLibrary_GetConfigInt_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConfiguratorLibrary_GetConfigInt_Statics::NewProp_HasValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConfiguratorLibrary_GetConfigInt_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConfiguratorLibrary_GetConfigInt_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConfiguratorLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UConfiguratorLibrary_GetConfigInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConfiguratorLibrary, nullptr, "GetConfigInt", nullptr, nullptr, sizeof(ConfiguratorLibrary_eventGetConfigInt_Parms), Z_Construct_UFunction_UConfiguratorLibrary_GetConfigInt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfiguratorLibrary_GetConfigInt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConfiguratorLibrary_GetConfigInt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfiguratorLibrary_GetConfigInt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConfiguratorLibrary_GetConfigInt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UConfiguratorLibrary_GetConfigInt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConfiguratorLibrary_GetConfigPath_Statics
	{
		struct ConfiguratorLibrary_eventGetConfigPath_Parms
		{
			FString Filename;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Filename_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Filename;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConfiguratorLibrary_GetConfigPath_Statics::NewProp_Filename_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UConfiguratorLibrary_GetConfigPath_Statics::NewProp_Filename = { "Filename", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConfiguratorLibrary_eventGetConfigPath_Parms, Filename), METADATA_PARAMS(Z_Construct_UFunction_UConfiguratorLibrary_GetConfigPath_Statics::NewProp_Filename_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfiguratorLibrary_GetConfigPath_Statics::NewProp_Filename_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UConfiguratorLibrary_GetConfigPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConfiguratorLibrary_eventGetConfigPath_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConfiguratorLibrary_GetConfigPath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConfiguratorLibrary_GetConfigPath_Statics::NewProp_Filename,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConfiguratorLibrary_GetConfigPath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConfiguratorLibrary_GetConfigPath_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConfiguratorLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UConfiguratorLibrary_GetConfigPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConfiguratorLibrary, nullptr, "GetConfigPath", nullptr, nullptr, sizeof(ConfiguratorLibrary_eventGetConfigPath_Parms), Z_Construct_UFunction_UConfiguratorLibrary_GetConfigPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfiguratorLibrary_GetConfigPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConfiguratorLibrary_GetConfigPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfiguratorLibrary_GetConfigPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConfiguratorLibrary_GetConfigPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UConfiguratorLibrary_GetConfigPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConfiguratorLibrary_GetConfigString_Statics
	{
		struct ConfiguratorLibrary_eventGetConfigString_Parms
		{
			FString Filename;
			FString Section;
			FString Name;
			bool HasValue;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Filename_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Filename;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Section_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Section;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static void NewProp_HasValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_HasValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConfiguratorLibrary_GetConfigString_Statics::NewProp_Filename_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UConfiguratorLibrary_GetConfigString_Statics::NewProp_Filename = { "Filename", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConfiguratorLibrary_eventGetConfigString_Parms, Filename), METADATA_PARAMS(Z_Construct_UFunction_UConfiguratorLibrary_GetConfigString_Statics::NewProp_Filename_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfiguratorLibrary_GetConfigString_Statics::NewProp_Filename_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConfiguratorLibrary_GetConfigString_Statics::NewProp_Section_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UConfiguratorLibrary_GetConfigString_Statics::NewProp_Section = { "Section", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConfiguratorLibrary_eventGetConfigString_Parms, Section), METADATA_PARAMS(Z_Construct_UFunction_UConfiguratorLibrary_GetConfigString_Statics::NewProp_Section_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfiguratorLibrary_GetConfigString_Statics::NewProp_Section_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConfiguratorLibrary_GetConfigString_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UConfiguratorLibrary_GetConfigString_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConfiguratorLibrary_eventGetConfigString_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UConfiguratorLibrary_GetConfigString_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfiguratorLibrary_GetConfigString_Statics::NewProp_Name_MetaData)) };
	void Z_Construct_UFunction_UConfiguratorLibrary_GetConfigString_Statics::NewProp_HasValue_SetBit(void* Obj)
	{
		((ConfiguratorLibrary_eventGetConfigString_Parms*)Obj)->HasValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UConfiguratorLibrary_GetConfigString_Statics::NewProp_HasValue = { "HasValue", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ConfiguratorLibrary_eventGetConfigString_Parms), &Z_Construct_UFunction_UConfiguratorLibrary_GetConfigString_Statics::NewProp_HasValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UConfiguratorLibrary_GetConfigString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConfiguratorLibrary_eventGetConfigString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConfiguratorLibrary_GetConfigString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConfiguratorLibrary_GetConfigString_Statics::NewProp_Filename,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConfiguratorLibrary_GetConfigString_Statics::NewProp_Section,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConfiguratorLibrary_GetConfigString_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConfiguratorLibrary_GetConfigString_Statics::NewProp_HasValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConfiguratorLibrary_GetConfigString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConfiguratorLibrary_GetConfigString_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConfiguratorLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UConfiguratorLibrary_GetConfigString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConfiguratorLibrary, nullptr, "GetConfigString", nullptr, nullptr, sizeof(ConfiguratorLibrary_eventGetConfigString_Parms), Z_Construct_UFunction_UConfiguratorLibrary_GetConfigString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfiguratorLibrary_GetConfigString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConfiguratorLibrary_GetConfigString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfiguratorLibrary_GetConfigString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConfiguratorLibrary_GetConfigString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UConfiguratorLibrary_GetConfigString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConfiguratorLibrary_GetConnectedIP_Statics
	{
		struct ConfiguratorLibrary_eventGetConnectedIP_Parms
		{
			UObject* WorldContextObject;
			int32 Port;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Port;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UConfiguratorLibrary_GetConnectedIP_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConfiguratorLibrary_eventGetConnectedIP_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UConfiguratorLibrary_GetConnectedIP_Statics::NewProp_Port = { "Port", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConfiguratorLibrary_eventGetConnectedIP_Parms, Port), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UConfiguratorLibrary_GetConnectedIP_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConfiguratorLibrary_eventGetConnectedIP_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConfiguratorLibrary_GetConnectedIP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConfiguratorLibrary_GetConnectedIP_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConfiguratorLibrary_GetConnectedIP_Statics::NewProp_Port,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConfiguratorLibrary_GetConnectedIP_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConfiguratorLibrary_GetConnectedIP_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConfiguratorLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UConfiguratorLibrary_GetConnectedIP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConfiguratorLibrary, nullptr, "GetConnectedIP", nullptr, nullptr, sizeof(ConfiguratorLibrary_eventGetConnectedIP_Parms), Z_Construct_UFunction_UConfiguratorLibrary_GetConnectedIP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfiguratorLibrary_GetConnectedIP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConfiguratorLibrary_GetConnectedIP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfiguratorLibrary_GetConnectedIP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConfiguratorLibrary_GetConnectedIP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UConfiguratorLibrary_GetConnectedIP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConfiguratorLibrary_GetConnectedSessionIP_Statics
	{
		struct ConfiguratorLibrary_eventGetConnectedSessionIP_Parms
		{
			UObject* WorldContextObject;
			int32 Port;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Port;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UConfiguratorLibrary_GetConnectedSessionIP_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConfiguratorLibrary_eventGetConnectedSessionIP_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UConfiguratorLibrary_GetConnectedSessionIP_Statics::NewProp_Port = { "Port", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConfiguratorLibrary_eventGetConnectedSessionIP_Parms, Port), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UConfiguratorLibrary_GetConnectedSessionIP_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConfiguratorLibrary_eventGetConnectedSessionIP_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConfiguratorLibrary_GetConnectedSessionIP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConfiguratorLibrary_GetConnectedSessionIP_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConfiguratorLibrary_GetConnectedSessionIP_Statics::NewProp_Port,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConfiguratorLibrary_GetConnectedSessionIP_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConfiguratorLibrary_GetConnectedSessionIP_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConfiguratorLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UConfiguratorLibrary_GetConnectedSessionIP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConfiguratorLibrary, nullptr, "GetConnectedSessionIP", nullptr, nullptr, sizeof(ConfiguratorLibrary_eventGetConnectedSessionIP_Parms), Z_Construct_UFunction_UConfiguratorLibrary_GetConnectedSessionIP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfiguratorLibrary_GetConnectedSessionIP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConfiguratorLibrary_GetConnectedSessionIP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfiguratorLibrary_GetConnectedSessionIP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConfiguratorLibrary_GetConnectedSessionIP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UConfiguratorLibrary_GetConnectedSessionIP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConfiguratorLibrary_GetConsoleBoolArgument_Statics
	{
		struct ConfiguratorLibrary_eventGetConsoleBoolArgument_Parms
		{
			FString Argument;
			bool HasArgument;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Argument_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Argument;
		static void NewProp_HasArgument_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_HasArgument;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConfiguratorLibrary_GetConsoleBoolArgument_Statics::NewProp_Argument_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UConfiguratorLibrary_GetConsoleBoolArgument_Statics::NewProp_Argument = { "Argument", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConfiguratorLibrary_eventGetConsoleBoolArgument_Parms, Argument), METADATA_PARAMS(Z_Construct_UFunction_UConfiguratorLibrary_GetConsoleBoolArgument_Statics::NewProp_Argument_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfiguratorLibrary_GetConsoleBoolArgument_Statics::NewProp_Argument_MetaData)) };
	void Z_Construct_UFunction_UConfiguratorLibrary_GetConsoleBoolArgument_Statics::NewProp_HasArgument_SetBit(void* Obj)
	{
		((ConfiguratorLibrary_eventGetConsoleBoolArgument_Parms*)Obj)->HasArgument = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UConfiguratorLibrary_GetConsoleBoolArgument_Statics::NewProp_HasArgument = { "HasArgument", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ConfiguratorLibrary_eventGetConsoleBoolArgument_Parms), &Z_Construct_UFunction_UConfiguratorLibrary_GetConsoleBoolArgument_Statics::NewProp_HasArgument_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UConfiguratorLibrary_GetConsoleBoolArgument_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ConfiguratorLibrary_eventGetConsoleBoolArgument_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UConfiguratorLibrary_GetConsoleBoolArgument_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ConfiguratorLibrary_eventGetConsoleBoolArgument_Parms), &Z_Construct_UFunction_UConfiguratorLibrary_GetConsoleBoolArgument_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConfiguratorLibrary_GetConsoleBoolArgument_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConfiguratorLibrary_GetConsoleBoolArgument_Statics::NewProp_Argument,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConfiguratorLibrary_GetConsoleBoolArgument_Statics::NewProp_HasArgument,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConfiguratorLibrary_GetConsoleBoolArgument_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConfiguratorLibrary_GetConsoleBoolArgument_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConfiguratorLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UConfiguratorLibrary_GetConsoleBoolArgument_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConfiguratorLibrary, nullptr, "GetConsoleBoolArgument", nullptr, nullptr, sizeof(ConfiguratorLibrary_eventGetConsoleBoolArgument_Parms), Z_Construct_UFunction_UConfiguratorLibrary_GetConsoleBoolArgument_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfiguratorLibrary_GetConsoleBoolArgument_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConfiguratorLibrary_GetConsoleBoolArgument_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfiguratorLibrary_GetConsoleBoolArgument_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConfiguratorLibrary_GetConsoleBoolArgument()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UConfiguratorLibrary_GetConsoleBoolArgument_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConfiguratorLibrary_GetConsoleFloatArgument_Statics
	{
		struct ConfiguratorLibrary_eventGetConsoleFloatArgument_Parms
		{
			FString Argument;
			bool HasArgument;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Argument_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Argument;
		static void NewProp_HasArgument_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_HasArgument;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConfiguratorLibrary_GetConsoleFloatArgument_Statics::NewProp_Argument_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UConfiguratorLibrary_GetConsoleFloatArgument_Statics::NewProp_Argument = { "Argument", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConfiguratorLibrary_eventGetConsoleFloatArgument_Parms, Argument), METADATA_PARAMS(Z_Construct_UFunction_UConfiguratorLibrary_GetConsoleFloatArgument_Statics::NewProp_Argument_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfiguratorLibrary_GetConsoleFloatArgument_Statics::NewProp_Argument_MetaData)) };
	void Z_Construct_UFunction_UConfiguratorLibrary_GetConsoleFloatArgument_Statics::NewProp_HasArgument_SetBit(void* Obj)
	{
		((ConfiguratorLibrary_eventGetConsoleFloatArgument_Parms*)Obj)->HasArgument = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UConfiguratorLibrary_GetConsoleFloatArgument_Statics::NewProp_HasArgument = { "HasArgument", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ConfiguratorLibrary_eventGetConsoleFloatArgument_Parms), &Z_Construct_UFunction_UConfiguratorLibrary_GetConsoleFloatArgument_Statics::NewProp_HasArgument_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UConfiguratorLibrary_GetConsoleFloatArgument_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConfiguratorLibrary_eventGetConsoleFloatArgument_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConfiguratorLibrary_GetConsoleFloatArgument_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConfiguratorLibrary_GetConsoleFloatArgument_Statics::NewProp_Argument,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConfiguratorLibrary_GetConsoleFloatArgument_Statics::NewProp_HasArgument,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConfiguratorLibrary_GetConsoleFloatArgument_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConfiguratorLibrary_GetConsoleFloatArgument_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConfiguratorLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UConfiguratorLibrary_GetConsoleFloatArgument_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConfiguratorLibrary, nullptr, "GetConsoleFloatArgument", nullptr, nullptr, sizeof(ConfiguratorLibrary_eventGetConsoleFloatArgument_Parms), Z_Construct_UFunction_UConfiguratorLibrary_GetConsoleFloatArgument_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfiguratorLibrary_GetConsoleFloatArgument_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConfiguratorLibrary_GetConsoleFloatArgument_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfiguratorLibrary_GetConsoleFloatArgument_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConfiguratorLibrary_GetConsoleFloatArgument()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UConfiguratorLibrary_GetConsoleFloatArgument_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConfiguratorLibrary_GetConsoleIntArgument_Statics
	{
		struct ConfiguratorLibrary_eventGetConsoleIntArgument_Parms
		{
			FString Argument;
			bool HasArgument;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Argument_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Argument;
		static void NewProp_HasArgument_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_HasArgument;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConfiguratorLibrary_GetConsoleIntArgument_Statics::NewProp_Argument_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UConfiguratorLibrary_GetConsoleIntArgument_Statics::NewProp_Argument = { "Argument", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConfiguratorLibrary_eventGetConsoleIntArgument_Parms, Argument), METADATA_PARAMS(Z_Construct_UFunction_UConfiguratorLibrary_GetConsoleIntArgument_Statics::NewProp_Argument_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfiguratorLibrary_GetConsoleIntArgument_Statics::NewProp_Argument_MetaData)) };
	void Z_Construct_UFunction_UConfiguratorLibrary_GetConsoleIntArgument_Statics::NewProp_HasArgument_SetBit(void* Obj)
	{
		((ConfiguratorLibrary_eventGetConsoleIntArgument_Parms*)Obj)->HasArgument = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UConfiguratorLibrary_GetConsoleIntArgument_Statics::NewProp_HasArgument = { "HasArgument", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ConfiguratorLibrary_eventGetConsoleIntArgument_Parms), &Z_Construct_UFunction_UConfiguratorLibrary_GetConsoleIntArgument_Statics::NewProp_HasArgument_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UConfiguratorLibrary_GetConsoleIntArgument_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConfiguratorLibrary_eventGetConsoleIntArgument_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConfiguratorLibrary_GetConsoleIntArgument_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConfiguratorLibrary_GetConsoleIntArgument_Statics::NewProp_Argument,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConfiguratorLibrary_GetConsoleIntArgument_Statics::NewProp_HasArgument,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConfiguratorLibrary_GetConsoleIntArgument_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConfiguratorLibrary_GetConsoleIntArgument_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConfiguratorLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UConfiguratorLibrary_GetConsoleIntArgument_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConfiguratorLibrary, nullptr, "GetConsoleIntArgument", nullptr, nullptr, sizeof(ConfiguratorLibrary_eventGetConsoleIntArgument_Parms), Z_Construct_UFunction_UConfiguratorLibrary_GetConsoleIntArgument_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfiguratorLibrary_GetConsoleIntArgument_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConfiguratorLibrary_GetConsoleIntArgument_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfiguratorLibrary_GetConsoleIntArgument_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConfiguratorLibrary_GetConsoleIntArgument()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UConfiguratorLibrary_GetConsoleIntArgument_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConfiguratorLibrary_GetConsoleStringArgument_Statics
	{
		struct ConfiguratorLibrary_eventGetConsoleStringArgument_Parms
		{
			FString Argument;
			bool HasArgument;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Argument_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Argument;
		static void NewProp_HasArgument_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_HasArgument;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConfiguratorLibrary_GetConsoleStringArgument_Statics::NewProp_Argument_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UConfiguratorLibrary_GetConsoleStringArgument_Statics::NewProp_Argument = { "Argument", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConfiguratorLibrary_eventGetConsoleStringArgument_Parms, Argument), METADATA_PARAMS(Z_Construct_UFunction_UConfiguratorLibrary_GetConsoleStringArgument_Statics::NewProp_Argument_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfiguratorLibrary_GetConsoleStringArgument_Statics::NewProp_Argument_MetaData)) };
	void Z_Construct_UFunction_UConfiguratorLibrary_GetConsoleStringArgument_Statics::NewProp_HasArgument_SetBit(void* Obj)
	{
		((ConfiguratorLibrary_eventGetConsoleStringArgument_Parms*)Obj)->HasArgument = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UConfiguratorLibrary_GetConsoleStringArgument_Statics::NewProp_HasArgument = { "HasArgument", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ConfiguratorLibrary_eventGetConsoleStringArgument_Parms), &Z_Construct_UFunction_UConfiguratorLibrary_GetConsoleStringArgument_Statics::NewProp_HasArgument_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UConfiguratorLibrary_GetConsoleStringArgument_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConfiguratorLibrary_eventGetConsoleStringArgument_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConfiguratorLibrary_GetConsoleStringArgument_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConfiguratorLibrary_GetConsoleStringArgument_Statics::NewProp_Argument,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConfiguratorLibrary_GetConsoleStringArgument_Statics::NewProp_HasArgument,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConfiguratorLibrary_GetConsoleStringArgument_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConfiguratorLibrary_GetConsoleStringArgument_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConfiguratorLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UConfiguratorLibrary_GetConsoleStringArgument_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConfiguratorLibrary, nullptr, "GetConsoleStringArgument", nullptr, nullptr, sizeof(ConfiguratorLibrary_eventGetConsoleStringArgument_Parms), Z_Construct_UFunction_UConfiguratorLibrary_GetConsoleStringArgument_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfiguratorLibrary_GetConsoleStringArgument_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConfiguratorLibrary_GetConsoleStringArgument_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfiguratorLibrary_GetConsoleStringArgument_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConfiguratorLibrary_GetConsoleStringArgument()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UConfiguratorLibrary_GetConsoleStringArgument_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConfiguratorLibrary_GetCurrentLevelName_Statics
	{
		struct ConfiguratorLibrary_eventGetCurrentLevelName_Parms
		{
			UObject* WorldContextObject;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UConfiguratorLibrary_GetCurrentLevelName_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConfiguratorLibrary_eventGetCurrentLevelName_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UConfiguratorLibrary_GetCurrentLevelName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConfiguratorLibrary_eventGetCurrentLevelName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConfiguratorLibrary_GetCurrentLevelName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConfiguratorLibrary_GetCurrentLevelName_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConfiguratorLibrary_GetCurrentLevelName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConfiguratorLibrary_GetCurrentLevelName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConfiguratorLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UConfiguratorLibrary_GetCurrentLevelName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConfiguratorLibrary, nullptr, "GetCurrentLevelName", nullptr, nullptr, sizeof(ConfiguratorLibrary_eventGetCurrentLevelName_Parms), Z_Construct_UFunction_UConfiguratorLibrary_GetCurrentLevelName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfiguratorLibrary_GetCurrentLevelName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConfiguratorLibrary_GetCurrentLevelName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfiguratorLibrary_GetCurrentLevelName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConfiguratorLibrary_GetCurrentLevelName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UConfiguratorLibrary_GetCurrentLevelName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConfiguratorLibrary_GetCurrentSessionOwningID_Statics
	{
		struct ConfiguratorLibrary_eventGetCurrentSessionOwningID_Parms
		{
			UObject* WorldContextObject;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UConfiguratorLibrary_GetCurrentSessionOwningID_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConfiguratorLibrary_eventGetCurrentSessionOwningID_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UConfiguratorLibrary_GetCurrentSessionOwningID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConfiguratorLibrary_eventGetCurrentSessionOwningID_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConfiguratorLibrary_GetCurrentSessionOwningID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConfiguratorLibrary_GetCurrentSessionOwningID_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConfiguratorLibrary_GetCurrentSessionOwningID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConfiguratorLibrary_GetCurrentSessionOwningID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConfiguratorLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UConfiguratorLibrary_GetCurrentSessionOwningID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConfiguratorLibrary, nullptr, "GetCurrentSessionOwningID", nullptr, nullptr, sizeof(ConfiguratorLibrary_eventGetCurrentSessionOwningID_Parms), Z_Construct_UFunction_UConfiguratorLibrary_GetCurrentSessionOwningID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfiguratorLibrary_GetCurrentSessionOwningID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConfiguratorLibrary_GetCurrentSessionOwningID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfiguratorLibrary_GetCurrentSessionOwningID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConfiguratorLibrary_GetCurrentSessionOwningID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UConfiguratorLibrary_GetCurrentSessionOwningID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConfiguratorLibrary_GetDefaultObjectConfigFilename_Statics
	{
		struct ConfiguratorLibrary_eventGetDefaultObjectConfigFilename_Parms
		{
			UObject* Object;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Object;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UConfiguratorLibrary_GetDefaultObjectConfigFilename_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConfiguratorLibrary_eventGetDefaultObjectConfigFilename_Parms, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UConfiguratorLibrary_GetDefaultObjectConfigFilename_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConfiguratorLibrary_eventGetDefaultObjectConfigFilename_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConfiguratorLibrary_GetDefaultObjectConfigFilename_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConfiguratorLibrary_GetDefaultObjectConfigFilename_Statics::NewProp_Object,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConfiguratorLibrary_GetDefaultObjectConfigFilename_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConfiguratorLibrary_GetDefaultObjectConfigFilename_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConfiguratorLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UConfiguratorLibrary_GetDefaultObjectConfigFilename_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConfiguratorLibrary, nullptr, "GetDefaultObjectConfigFilename", nullptr, nullptr, sizeof(ConfiguratorLibrary_eventGetDefaultObjectConfigFilename_Parms), Z_Construct_UFunction_UConfiguratorLibrary_GetDefaultObjectConfigFilename_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfiguratorLibrary_GetDefaultObjectConfigFilename_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConfiguratorLibrary_GetDefaultObjectConfigFilename_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfiguratorLibrary_GetDefaultObjectConfigFilename_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConfiguratorLibrary_GetDefaultObjectConfigFilename()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UConfiguratorLibrary_GetDefaultObjectConfigFilename_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConfiguratorLibrary_GetEditorLevelName_Statics
	{
		struct ConfiguratorLibrary_eventGetEditorLevelName_Parms
		{
			UObject* WorldContextObject;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UConfiguratorLibrary_GetEditorLevelName_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConfiguratorLibrary_eventGetEditorLevelName_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UConfiguratorLibrary_GetEditorLevelName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConfiguratorLibrary_eventGetEditorLevelName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConfiguratorLibrary_GetEditorLevelName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConfiguratorLibrary_GetEditorLevelName_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConfiguratorLibrary_GetEditorLevelName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConfiguratorLibrary_GetEditorLevelName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConfiguratorLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UConfiguratorLibrary_GetEditorLevelName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConfiguratorLibrary, nullptr, "GetEditorLevelName", nullptr, nullptr, sizeof(ConfiguratorLibrary_eventGetEditorLevelName_Parms), Z_Construct_UFunction_UConfiguratorLibrary_GetEditorLevelName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfiguratorLibrary_GetEditorLevelName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConfiguratorLibrary_GetEditorLevelName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfiguratorLibrary_GetEditorLevelName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConfiguratorLibrary_GetEditorLevelName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UConfiguratorLibrary_GetEditorLevelName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConfiguratorLibrary_GetGameInstance_Statics
	{
		struct ConfiguratorLibrary_eventGetGameInstance_Parms
		{
			UObject* WorldContextObject;
			TSubclassOf<UGameInstance>  Class;
			UGameInstance* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Class;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UConfiguratorLibrary_GetGameInstance_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConfiguratorLibrary_eventGetGameInstance_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UConfiguratorLibrary_GetGameInstance_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConfiguratorLibrary_eventGetGameInstance_Parms, Class), Z_Construct_UClass_UGameInstance_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UConfiguratorLibrary_GetGameInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConfiguratorLibrary_eventGetGameInstance_Parms, ReturnValue), Z_Construct_UClass_UGameInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConfiguratorLibrary_GetGameInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConfiguratorLibrary_GetGameInstance_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConfiguratorLibrary_GetGameInstance_Statics::NewProp_Class,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConfiguratorLibrary_GetGameInstance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConfiguratorLibrary_GetGameInstance_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConfiguratorLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UConfiguratorLibrary_GetGameInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConfiguratorLibrary, nullptr, "GetGameInstance", nullptr, nullptr, sizeof(ConfiguratorLibrary_eventGetGameInstance_Parms), Z_Construct_UFunction_UConfiguratorLibrary_GetGameInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfiguratorLibrary_GetGameInstance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConfiguratorLibrary_GetGameInstance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfiguratorLibrary_GetGameInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConfiguratorLibrary_GetGameInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UConfiguratorLibrary_GetGameInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConfiguratorLibrary_GetGameMode_Statics
	{
		struct ConfiguratorLibrary_eventGetGameMode_Parms
		{
			UObject* WorldContextObject;
			TSubclassOf<AGameModeBase>  Class;
			AGameModeBase* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Class;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UConfiguratorLibrary_GetGameMode_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConfiguratorLibrary_eventGetGameMode_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UConfiguratorLibrary_GetGameMode_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConfiguratorLibrary_eventGetGameMode_Parms, Class), Z_Construct_UClass_AGameModeBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UConfiguratorLibrary_GetGameMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConfiguratorLibrary_eventGetGameMode_Parms, ReturnValue), Z_Construct_UClass_AGameModeBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConfiguratorLibrary_GetGameMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConfiguratorLibrary_GetGameMode_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConfiguratorLibrary_GetGameMode_Statics::NewProp_Class,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConfiguratorLibrary_GetGameMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConfiguratorLibrary_GetGameMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConfiguratorLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UConfiguratorLibrary_GetGameMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConfiguratorLibrary, nullptr, "GetGameMode", nullptr, nullptr, sizeof(ConfiguratorLibrary_eventGetGameMode_Parms), Z_Construct_UFunction_UConfiguratorLibrary_GetGameMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfiguratorLibrary_GetGameMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConfiguratorLibrary_GetGameMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfiguratorLibrary_GetGameMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConfiguratorLibrary_GetGameMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UConfiguratorLibrary_GetGameMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConfiguratorLibrary_GetGameState_Statics
	{
		struct ConfiguratorLibrary_eventGetGameState_Parms
		{
			UObject* WorldContextObject;
			TSubclassOf<AGameStateBase>  Class;
			AGameStateBase* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Class;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UConfiguratorLibrary_GetGameState_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConfiguratorLibrary_eventGetGameState_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UConfiguratorLibrary_GetGameState_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConfiguratorLibrary_eventGetGameState_Parms, Class), Z_Construct_UClass_AGameStateBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UConfiguratorLibrary_GetGameState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConfiguratorLibrary_eventGetGameState_Parms, ReturnValue), Z_Construct_UClass_AGameStateBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConfiguratorLibrary_GetGameState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConfiguratorLibrary_GetGameState_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConfiguratorLibrary_GetGameState_Statics::NewProp_Class,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConfiguratorLibrary_GetGameState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConfiguratorLibrary_GetGameState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConfiguratorLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UConfiguratorLibrary_GetGameState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConfiguratorLibrary, nullptr, "GetGameState", nullptr, nullptr, sizeof(ConfiguratorLibrary_eventGetGameState_Parms), Z_Construct_UFunction_UConfiguratorLibrary_GetGameState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfiguratorLibrary_GetGameState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConfiguratorLibrary_GetGameState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfiguratorLibrary_GetGameState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConfiguratorLibrary_GetGameState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UConfiguratorLibrary_GetGameState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConfiguratorLibrary_GetGlobalUserObjectConfigFilename_Statics
	{
		struct ConfiguratorLibrary_eventGetGlobalUserObjectConfigFilename_Parms
		{
			UObject* Object;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Object;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UConfiguratorLibrary_GetGlobalUserObjectConfigFilename_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConfiguratorLibrary_eventGetGlobalUserObjectConfigFilename_Parms, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UConfiguratorLibrary_GetGlobalUserObjectConfigFilename_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConfiguratorLibrary_eventGetGlobalUserObjectConfigFilename_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConfiguratorLibrary_GetGlobalUserObjectConfigFilename_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConfiguratorLibrary_GetGlobalUserObjectConfigFilename_Statics::NewProp_Object,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConfiguratorLibrary_GetGlobalUserObjectConfigFilename_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConfiguratorLibrary_GetGlobalUserObjectConfigFilename_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConfiguratorLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UConfiguratorLibrary_GetGlobalUserObjectConfigFilename_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConfiguratorLibrary, nullptr, "GetGlobalUserObjectConfigFilename", nullptr, nullptr, sizeof(ConfiguratorLibrary_eventGetGlobalUserObjectConfigFilename_Parms), Z_Construct_UFunction_UConfiguratorLibrary_GetGlobalUserObjectConfigFilename_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfiguratorLibrary_GetGlobalUserObjectConfigFilename_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConfiguratorLibrary_GetGlobalUserObjectConfigFilename_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfiguratorLibrary_GetGlobalUserObjectConfigFilename_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConfiguratorLibrary_GetGlobalUserObjectConfigFilename()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UConfiguratorLibrary_GetGlobalUserObjectConfigFilename_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConfiguratorLibrary_GetLocalIP_Statics
	{
		struct ConfiguratorLibrary_eventGetLocalIP_Parms
		{
			UObject* WorldContextObject;
			int32 Port;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Port;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UConfiguratorLibrary_GetLocalIP_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConfiguratorLibrary_eventGetLocalIP_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UConfiguratorLibrary_GetLocalIP_Statics::NewProp_Port = { "Port", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConfiguratorLibrary_eventGetLocalIP_Parms, Port), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UConfiguratorLibrary_GetLocalIP_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConfiguratorLibrary_eventGetLocalIP_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConfiguratorLibrary_GetLocalIP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConfiguratorLibrary_GetLocalIP_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConfiguratorLibrary_GetLocalIP_Statics::NewProp_Port,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConfiguratorLibrary_GetLocalIP_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConfiguratorLibrary_GetLocalIP_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConfiguratorLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UConfiguratorLibrary_GetLocalIP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConfiguratorLibrary, nullptr, "GetLocalIP", nullptr, nullptr, sizeof(ConfiguratorLibrary_eventGetLocalIP_Parms), Z_Construct_UFunction_UConfiguratorLibrary_GetLocalIP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfiguratorLibrary_GetLocalIP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConfiguratorLibrary_GetLocalIP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfiguratorLibrary_GetLocalIP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConfiguratorLibrary_GetLocalIP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UConfiguratorLibrary_GetLocalIP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConfiguratorLibrary_GetNetworkURL_Statics
	{
		struct ConfiguratorLibrary_eventGetNetworkURL_Parms
		{
			UObject* WorldContextObject;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UConfiguratorLibrary_GetNetworkURL_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConfiguratorLibrary_eventGetNetworkURL_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UConfiguratorLibrary_GetNetworkURL_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConfiguratorLibrary_eventGetNetworkURL_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConfiguratorLibrary_GetNetworkURL_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConfiguratorLibrary_GetNetworkURL_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConfiguratorLibrary_GetNetworkURL_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConfiguratorLibrary_GetNetworkURL_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConfiguratorLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UConfiguratorLibrary_GetNetworkURL_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConfiguratorLibrary, nullptr, "GetNetworkURL", nullptr, nullptr, sizeof(ConfiguratorLibrary_eventGetNetworkURL_Parms), Z_Construct_UFunction_UConfiguratorLibrary_GetNetworkURL_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfiguratorLibrary_GetNetworkURL_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConfiguratorLibrary_GetNetworkURL_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfiguratorLibrary_GetNetworkURL_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConfiguratorLibrary_GetNetworkURL()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UConfiguratorLibrary_GetNetworkURL_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConfiguratorLibrary_GetProjectDisplayName_Statics
	{
		struct ConfiguratorLibrary_eventGetProjectDisplayName_Parms
		{
			FText ReturnValue;
		};
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UConfiguratorLibrary_GetProjectDisplayName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConfiguratorLibrary_eventGetProjectDisplayName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConfiguratorLibrary_GetProjectDisplayName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConfiguratorLibrary_GetProjectDisplayName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConfiguratorLibrary_GetProjectDisplayName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConfiguratorLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UConfiguratorLibrary_GetProjectDisplayName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConfiguratorLibrary, nullptr, "GetProjectDisplayName", nullptr, nullptr, sizeof(ConfiguratorLibrary_eventGetProjectDisplayName_Parms), Z_Construct_UFunction_UConfiguratorLibrary_GetProjectDisplayName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfiguratorLibrary_GetProjectDisplayName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConfiguratorLibrary_GetProjectDisplayName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfiguratorLibrary_GetProjectDisplayName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConfiguratorLibrary_GetProjectDisplayName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UConfiguratorLibrary_GetProjectDisplayName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConfiguratorLibrary_GetProjectSettingsBool_Statics
	{
		struct ConfiguratorLibrary_eventGetProjectSettingsBool_Parms
		{
			FString Name;
			bool HasArgument;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static void NewProp_HasArgument_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_HasArgument;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConfiguratorLibrary_GetProjectSettingsBool_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UConfiguratorLibrary_GetProjectSettingsBool_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConfiguratorLibrary_eventGetProjectSettingsBool_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UConfiguratorLibrary_GetProjectSettingsBool_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfiguratorLibrary_GetProjectSettingsBool_Statics::NewProp_Name_MetaData)) };
	void Z_Construct_UFunction_UConfiguratorLibrary_GetProjectSettingsBool_Statics::NewProp_HasArgument_SetBit(void* Obj)
	{
		((ConfiguratorLibrary_eventGetProjectSettingsBool_Parms*)Obj)->HasArgument = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UConfiguratorLibrary_GetProjectSettingsBool_Statics::NewProp_HasArgument = { "HasArgument", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ConfiguratorLibrary_eventGetProjectSettingsBool_Parms), &Z_Construct_UFunction_UConfiguratorLibrary_GetProjectSettingsBool_Statics::NewProp_HasArgument_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UConfiguratorLibrary_GetProjectSettingsBool_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ConfiguratorLibrary_eventGetProjectSettingsBool_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UConfiguratorLibrary_GetProjectSettingsBool_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ConfiguratorLibrary_eventGetProjectSettingsBool_Parms), &Z_Construct_UFunction_UConfiguratorLibrary_GetProjectSettingsBool_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConfiguratorLibrary_GetProjectSettingsBool_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConfiguratorLibrary_GetProjectSettingsBool_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConfiguratorLibrary_GetProjectSettingsBool_Statics::NewProp_HasArgument,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConfiguratorLibrary_GetProjectSettingsBool_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConfiguratorLibrary_GetProjectSettingsBool_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConfiguratorLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UConfiguratorLibrary_GetProjectSettingsBool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConfiguratorLibrary, nullptr, "GetProjectSettingsBool", nullptr, nullptr, sizeof(ConfiguratorLibrary_eventGetProjectSettingsBool_Parms), Z_Construct_UFunction_UConfiguratorLibrary_GetProjectSettingsBool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfiguratorLibrary_GetProjectSettingsBool_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConfiguratorLibrary_GetProjectSettingsBool_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfiguratorLibrary_GetProjectSettingsBool_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConfiguratorLibrary_GetProjectSettingsBool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UConfiguratorLibrary_GetProjectSettingsBool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConfiguratorLibrary_GetProjectSettingsFloat_Statics
	{
		struct ConfiguratorLibrary_eventGetProjectSettingsFloat_Parms
		{
			FString Name;
			bool HasArgument;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static void NewProp_HasArgument_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_HasArgument;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConfiguratorLibrary_GetProjectSettingsFloat_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UConfiguratorLibrary_GetProjectSettingsFloat_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConfiguratorLibrary_eventGetProjectSettingsFloat_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UConfiguratorLibrary_GetProjectSettingsFloat_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfiguratorLibrary_GetProjectSettingsFloat_Statics::NewProp_Name_MetaData)) };
	void Z_Construct_UFunction_UConfiguratorLibrary_GetProjectSettingsFloat_Statics::NewProp_HasArgument_SetBit(void* Obj)
	{
		((ConfiguratorLibrary_eventGetProjectSettingsFloat_Parms*)Obj)->HasArgument = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UConfiguratorLibrary_GetProjectSettingsFloat_Statics::NewProp_HasArgument = { "HasArgument", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ConfiguratorLibrary_eventGetProjectSettingsFloat_Parms), &Z_Construct_UFunction_UConfiguratorLibrary_GetProjectSettingsFloat_Statics::NewProp_HasArgument_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UConfiguratorLibrary_GetProjectSettingsFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConfiguratorLibrary_eventGetProjectSettingsFloat_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConfiguratorLibrary_GetProjectSettingsFloat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConfiguratorLibrary_GetProjectSettingsFloat_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConfiguratorLibrary_GetProjectSettingsFloat_Statics::NewProp_HasArgument,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConfiguratorLibrary_GetProjectSettingsFloat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConfiguratorLibrary_GetProjectSettingsFloat_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConfiguratorLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UConfiguratorLibrary_GetProjectSettingsFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConfiguratorLibrary, nullptr, "GetProjectSettingsFloat", nullptr, nullptr, sizeof(ConfiguratorLibrary_eventGetProjectSettingsFloat_Parms), Z_Construct_UFunction_UConfiguratorLibrary_GetProjectSettingsFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfiguratorLibrary_GetProjectSettingsFloat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConfiguratorLibrary_GetProjectSettingsFloat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfiguratorLibrary_GetProjectSettingsFloat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConfiguratorLibrary_GetProjectSettingsFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UConfiguratorLibrary_GetProjectSettingsFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConfiguratorLibrary_GetProjectSettingsInt_Statics
	{
		struct ConfiguratorLibrary_eventGetProjectSettingsInt_Parms
		{
			FString Name;
			bool HasArgument;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static void NewProp_HasArgument_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_HasArgument;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConfiguratorLibrary_GetProjectSettingsInt_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UConfiguratorLibrary_GetProjectSettingsInt_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConfiguratorLibrary_eventGetProjectSettingsInt_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UConfiguratorLibrary_GetProjectSettingsInt_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfiguratorLibrary_GetProjectSettingsInt_Statics::NewProp_Name_MetaData)) };
	void Z_Construct_UFunction_UConfiguratorLibrary_GetProjectSettingsInt_Statics::NewProp_HasArgument_SetBit(void* Obj)
	{
		((ConfiguratorLibrary_eventGetProjectSettingsInt_Parms*)Obj)->HasArgument = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UConfiguratorLibrary_GetProjectSettingsInt_Statics::NewProp_HasArgument = { "HasArgument", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ConfiguratorLibrary_eventGetProjectSettingsInt_Parms), &Z_Construct_UFunction_UConfiguratorLibrary_GetProjectSettingsInt_Statics::NewProp_HasArgument_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UConfiguratorLibrary_GetProjectSettingsInt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConfiguratorLibrary_eventGetProjectSettingsInt_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConfiguratorLibrary_GetProjectSettingsInt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConfiguratorLibrary_GetProjectSettingsInt_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConfiguratorLibrary_GetProjectSettingsInt_Statics::NewProp_HasArgument,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConfiguratorLibrary_GetProjectSettingsInt_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConfiguratorLibrary_GetProjectSettingsInt_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConfiguratorLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UConfiguratorLibrary_GetProjectSettingsInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConfiguratorLibrary, nullptr, "GetProjectSettingsInt", nullptr, nullptr, sizeof(ConfiguratorLibrary_eventGetProjectSettingsInt_Parms), Z_Construct_UFunction_UConfiguratorLibrary_GetProjectSettingsInt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfiguratorLibrary_GetProjectSettingsInt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConfiguratorLibrary_GetProjectSettingsInt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfiguratorLibrary_GetProjectSettingsInt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConfiguratorLibrary_GetProjectSettingsInt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UConfiguratorLibrary_GetProjectSettingsInt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConfiguratorLibrary_GetProjectSettingsString_Statics
	{
		struct ConfiguratorLibrary_eventGetProjectSettingsString_Parms
		{
			FString Name;
			bool HasArgument;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static void NewProp_HasArgument_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_HasArgument;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConfiguratorLibrary_GetProjectSettingsString_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UConfiguratorLibrary_GetProjectSettingsString_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConfiguratorLibrary_eventGetProjectSettingsString_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UConfiguratorLibrary_GetProjectSettingsString_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfiguratorLibrary_GetProjectSettingsString_Statics::NewProp_Name_MetaData)) };
	void Z_Construct_UFunction_UConfiguratorLibrary_GetProjectSettingsString_Statics::NewProp_HasArgument_SetBit(void* Obj)
	{
		((ConfiguratorLibrary_eventGetProjectSettingsString_Parms*)Obj)->HasArgument = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UConfiguratorLibrary_GetProjectSettingsString_Statics::NewProp_HasArgument = { "HasArgument", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ConfiguratorLibrary_eventGetProjectSettingsString_Parms), &Z_Construct_UFunction_UConfiguratorLibrary_GetProjectSettingsString_Statics::NewProp_HasArgument_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UConfiguratorLibrary_GetProjectSettingsString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConfiguratorLibrary_eventGetProjectSettingsString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConfiguratorLibrary_GetProjectSettingsString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConfiguratorLibrary_GetProjectSettingsString_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConfiguratorLibrary_GetProjectSettingsString_Statics::NewProp_HasArgument,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConfiguratorLibrary_GetProjectSettingsString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConfiguratorLibrary_GetProjectSettingsString_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConfiguratorLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UConfiguratorLibrary_GetProjectSettingsString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConfiguratorLibrary, nullptr, "GetProjectSettingsString", nullptr, nullptr, sizeof(ConfiguratorLibrary_eventGetProjectSettingsString_Parms), Z_Construct_UFunction_UConfiguratorLibrary_GetProjectSettingsString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfiguratorLibrary_GetProjectSettingsString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConfiguratorLibrary_GetProjectSettingsString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfiguratorLibrary_GetProjectSettingsString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConfiguratorLibrary_GetProjectSettingsString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UConfiguratorLibrary_GetProjectSettingsString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConfiguratorLibrary_GetProjectVersion_Statics
	{
		struct ConfiguratorLibrary_eventGetProjectVersion_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UConfiguratorLibrary_GetProjectVersion_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConfiguratorLibrary_eventGetProjectVersion_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConfiguratorLibrary_GetProjectVersion_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConfiguratorLibrary_GetProjectVersion_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConfiguratorLibrary_GetProjectVersion_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConfiguratorLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UConfiguratorLibrary_GetProjectVersion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConfiguratorLibrary, nullptr, "GetProjectVersion", nullptr, nullptr, sizeof(ConfiguratorLibrary_eventGetProjectVersion_Parms), Z_Construct_UFunction_UConfiguratorLibrary_GetProjectVersion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfiguratorLibrary_GetProjectVersion_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConfiguratorLibrary_GetProjectVersion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfiguratorLibrary_GetProjectVersion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConfiguratorLibrary_GetProjectVersion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UConfiguratorLibrary_GetProjectVersion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConfiguratorLibrary_GetRHIName_Statics
	{
		struct ConfiguratorLibrary_eventGetRHIName_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UConfiguratorLibrary_GetRHIName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConfiguratorLibrary_eventGetRHIName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConfiguratorLibrary_GetRHIName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConfiguratorLibrary_GetRHIName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConfiguratorLibrary_GetRHIName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConfiguratorLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UConfiguratorLibrary_GetRHIName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConfiguratorLibrary, nullptr, "GetRHIName", nullptr, nullptr, sizeof(ConfiguratorLibrary_eventGetRHIName_Parms), Z_Construct_UFunction_UConfiguratorLibrary_GetRHIName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfiguratorLibrary_GetRHIName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConfiguratorLibrary_GetRHIName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfiguratorLibrary_GetRHIName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConfiguratorLibrary_GetRHIName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UConfiguratorLibrary_GetRHIName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConfiguratorLibrary_GetSecondsInDay_Statics
	{
		struct ConfiguratorLibrary_eventGetSecondsInDay_Parms
		{
			FDateTime InTime;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InTime;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UConfiguratorLibrary_GetSecondsInDay_Statics::NewProp_InTime = { "InTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConfiguratorLibrary_eventGetSecondsInDay_Parms, InTime), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UConfiguratorLibrary_GetSecondsInDay_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConfiguratorLibrary_eventGetSecondsInDay_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConfiguratorLibrary_GetSecondsInDay_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConfiguratorLibrary_GetSecondsInDay_Statics::NewProp_InTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConfiguratorLibrary_GetSecondsInDay_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConfiguratorLibrary_GetSecondsInDay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConfiguratorLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UConfiguratorLibrary_GetSecondsInDay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConfiguratorLibrary, nullptr, "GetSecondsInDay", nullptr, nullptr, sizeof(ConfiguratorLibrary_eventGetSecondsInDay_Parms), Z_Construct_UFunction_UConfiguratorLibrary_GetSecondsInDay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfiguratorLibrary_GetSecondsInDay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConfiguratorLibrary_GetSecondsInDay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfiguratorLibrary_GetSecondsInDay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConfiguratorLibrary_GetSecondsInDay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UConfiguratorLibrary_GetSecondsInDay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConfiguratorLibrary_GetSessionOwningID_Statics
	{
		struct ConfiguratorLibrary_eventGetSessionOwningID_Parms
		{
			FBlueprintSessionResult Session;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Session_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Session;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConfiguratorLibrary_GetSessionOwningID_Statics::NewProp_Session_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UConfiguratorLibrary_GetSessionOwningID_Statics::NewProp_Session = { "Session", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConfiguratorLibrary_eventGetSessionOwningID_Parms, Session), Z_Construct_UScriptStruct_FBlueprintSessionResult, METADATA_PARAMS(Z_Construct_UFunction_UConfiguratorLibrary_GetSessionOwningID_Statics::NewProp_Session_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfiguratorLibrary_GetSessionOwningID_Statics::NewProp_Session_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UConfiguratorLibrary_GetSessionOwningID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConfiguratorLibrary_eventGetSessionOwningID_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConfiguratorLibrary_GetSessionOwningID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConfiguratorLibrary_GetSessionOwningID_Statics::NewProp_Session,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConfiguratorLibrary_GetSessionOwningID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConfiguratorLibrary_GetSessionOwningID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConfiguratorLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UConfiguratorLibrary_GetSessionOwningID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConfiguratorLibrary, nullptr, "GetSessionOwningID", nullptr, nullptr, sizeof(ConfiguratorLibrary_eventGetSessionOwningID_Parms), Z_Construct_UFunction_UConfiguratorLibrary_GetSessionOwningID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfiguratorLibrary_GetSessionOwningID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConfiguratorLibrary_GetSessionOwningID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfiguratorLibrary_GetSessionOwningID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConfiguratorLibrary_GetSessionOwningID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UConfiguratorLibrary_GetSessionOwningID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConfiguratorLibrary_GetSteamQueryPort_Statics
	{
		struct ConfiguratorLibrary_eventGetSteamQueryPort_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UConfiguratorLibrary_GetSteamQueryPort_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConfiguratorLibrary_eventGetSteamQueryPort_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConfiguratorLibrary_GetSteamQueryPort_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConfiguratorLibrary_GetSteamQueryPort_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConfiguratorLibrary_GetSteamQueryPort_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConfiguratorLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UConfiguratorLibrary_GetSteamQueryPort_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConfiguratorLibrary, nullptr, "GetSteamQueryPort", nullptr, nullptr, sizeof(ConfiguratorLibrary_eventGetSteamQueryPort_Parms), Z_Construct_UFunction_UConfiguratorLibrary_GetSteamQueryPort_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfiguratorLibrary_GetSteamQueryPort_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConfiguratorLibrary_GetSteamQueryPort_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfiguratorLibrary_GetSteamQueryPort_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConfiguratorLibrary_GetSteamQueryPort()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UConfiguratorLibrary_GetSteamQueryPort_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConfiguratorLibrary_GetUniqueIDAsString_Statics
	{
		struct ConfiguratorLibrary_eventGetUniqueIDAsString_Parms
		{
			FUniqueNetIdRepl ID;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ID;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UConfiguratorLibrary_GetUniqueIDAsString_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConfiguratorLibrary_eventGetUniqueIDAsString_Parms, ID), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UConfiguratorLibrary_GetUniqueIDAsString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConfiguratorLibrary_eventGetUniqueIDAsString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConfiguratorLibrary_GetUniqueIDAsString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConfiguratorLibrary_GetUniqueIDAsString_Statics::NewProp_ID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConfiguratorLibrary_GetUniqueIDAsString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConfiguratorLibrary_GetUniqueIDAsString_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConfiguratorLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UConfiguratorLibrary_GetUniqueIDAsString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConfiguratorLibrary, nullptr, "GetUniqueIDAsString", nullptr, nullptr, sizeof(ConfiguratorLibrary_eventGetUniqueIDAsString_Parms), Z_Construct_UFunction_UConfiguratorLibrary_GetUniqueIDAsString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfiguratorLibrary_GetUniqueIDAsString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConfiguratorLibrary_GetUniqueIDAsString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfiguratorLibrary_GetUniqueIDAsString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConfiguratorLibrary_GetUniqueIDAsString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UConfiguratorLibrary_GetUniqueIDAsString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConfiguratorLibrary_GetWorldSettings_Statics
	{
		struct ConfiguratorLibrary_eventGetWorldSettings_Parms
		{
			UObject* WorldContextObject;
			TSubclassOf<AWorldSettings>  SettingsClass;
			AWorldSettings* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_SettingsClass;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UConfiguratorLibrary_GetWorldSettings_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConfiguratorLibrary_eventGetWorldSettings_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UConfiguratorLibrary_GetWorldSettings_Statics::NewProp_SettingsClass = { "SettingsClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConfiguratorLibrary_eventGetWorldSettings_Parms, SettingsClass), Z_Construct_UClass_AWorldSettings_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UConfiguratorLibrary_GetWorldSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConfiguratorLibrary_eventGetWorldSettings_Parms, ReturnValue), Z_Construct_UClass_AWorldSettings_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConfiguratorLibrary_GetWorldSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConfiguratorLibrary_GetWorldSettings_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConfiguratorLibrary_GetWorldSettings_Statics::NewProp_SettingsClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConfiguratorLibrary_GetWorldSettings_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConfiguratorLibrary_GetWorldSettings_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConfiguratorLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UConfiguratorLibrary_GetWorldSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConfiguratorLibrary, nullptr, "GetWorldSettings", nullptr, nullptr, sizeof(ConfiguratorLibrary_eventGetWorldSettings_Parms), Z_Construct_UFunction_UConfiguratorLibrary_GetWorldSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfiguratorLibrary_GetWorldSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConfiguratorLibrary_GetWorldSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfiguratorLibrary_GetWorldSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConfiguratorLibrary_GetWorldSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UConfiguratorLibrary_GetWorldSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConfiguratorLibrary_HasConsoleArgument_Statics
	{
		struct ConfiguratorLibrary_eventHasConsoleArgument_Parms
		{
			FString Argument;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Argument_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Argument;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConfiguratorLibrary_HasConsoleArgument_Statics::NewProp_Argument_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UConfiguratorLibrary_HasConsoleArgument_Statics::NewProp_Argument = { "Argument", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConfiguratorLibrary_eventHasConsoleArgument_Parms, Argument), METADATA_PARAMS(Z_Construct_UFunction_UConfiguratorLibrary_HasConsoleArgument_Statics::NewProp_Argument_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfiguratorLibrary_HasConsoleArgument_Statics::NewProp_Argument_MetaData)) };
	void Z_Construct_UFunction_UConfiguratorLibrary_HasConsoleArgument_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ConfiguratorLibrary_eventHasConsoleArgument_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UConfiguratorLibrary_HasConsoleArgument_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ConfiguratorLibrary_eventHasConsoleArgument_Parms), &Z_Construct_UFunction_UConfiguratorLibrary_HasConsoleArgument_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConfiguratorLibrary_HasConsoleArgument_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConfiguratorLibrary_HasConsoleArgument_Statics::NewProp_Argument,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConfiguratorLibrary_HasConsoleArgument_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConfiguratorLibrary_HasConsoleArgument_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConfiguratorLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UConfiguratorLibrary_HasConsoleArgument_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConfiguratorLibrary, nullptr, "HasConsoleArgument", nullptr, nullptr, sizeof(ConfiguratorLibrary_eventHasConsoleArgument_Parms), Z_Construct_UFunction_UConfiguratorLibrary_HasConsoleArgument_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfiguratorLibrary_HasConsoleArgument_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConfiguratorLibrary_HasConsoleArgument_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfiguratorLibrary_HasConsoleArgument_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConfiguratorLibrary_HasConsoleArgument()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UConfiguratorLibrary_HasConsoleArgument_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConfiguratorLibrary_IsGameWorld_Statics
	{
		struct ConfiguratorLibrary_eventIsGameWorld_Parms
		{
			UObject* WorldContextObject;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UConfiguratorLibrary_IsGameWorld_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConfiguratorLibrary_eventIsGameWorld_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UConfiguratorLibrary_IsGameWorld_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ConfiguratorLibrary_eventIsGameWorld_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UConfiguratorLibrary_IsGameWorld_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ConfiguratorLibrary_eventIsGameWorld_Parms), &Z_Construct_UFunction_UConfiguratorLibrary_IsGameWorld_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConfiguratorLibrary_IsGameWorld_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConfiguratorLibrary_IsGameWorld_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConfiguratorLibrary_IsGameWorld_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConfiguratorLibrary_IsGameWorld_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConfiguratorLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UConfiguratorLibrary_IsGameWorld_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConfiguratorLibrary, nullptr, "IsGameWorld", nullptr, nullptr, sizeof(ConfiguratorLibrary_eventIsGameWorld_Parms), Z_Construct_UFunction_UConfiguratorLibrary_IsGameWorld_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfiguratorLibrary_IsGameWorld_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConfiguratorLibrary_IsGameWorld_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfiguratorLibrary_IsGameWorld_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConfiguratorLibrary_IsGameWorld()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UConfiguratorLibrary_IsGameWorld_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConfiguratorLibrary_IsValidAndHasWorld_Statics
	{
		struct ConfiguratorLibrary_eventIsValidAndHasWorld_Parms
		{
			UObject* WorldContextObject;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UConfiguratorLibrary_IsValidAndHasWorld_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConfiguratorLibrary_eventIsValidAndHasWorld_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UConfiguratorLibrary_IsValidAndHasWorld_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ConfiguratorLibrary_eventIsValidAndHasWorld_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UConfiguratorLibrary_IsValidAndHasWorld_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ConfiguratorLibrary_eventIsValidAndHasWorld_Parms), &Z_Construct_UFunction_UConfiguratorLibrary_IsValidAndHasWorld_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConfiguratorLibrary_IsValidAndHasWorld_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConfiguratorLibrary_IsValidAndHasWorld_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConfiguratorLibrary_IsValidAndHasWorld_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConfiguratorLibrary_IsValidAndHasWorld_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConfiguratorLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UConfiguratorLibrary_IsValidAndHasWorld_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConfiguratorLibrary, nullptr, "IsValidAndHasWorld", nullptr, nullptr, sizeof(ConfiguratorLibrary_eventIsValidAndHasWorld_Parms), Z_Construct_UFunction_UConfiguratorLibrary_IsValidAndHasWorld_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfiguratorLibrary_IsValidAndHasWorld_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConfiguratorLibrary_IsValidAndHasWorld_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfiguratorLibrary_IsValidAndHasWorld_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConfiguratorLibrary_IsValidAndHasWorld()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UConfiguratorLibrary_IsValidAndHasWorld_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConfiguratorLibrary_IsWorldValid_Statics
	{
		struct ConfiguratorLibrary_eventIsWorldValid_Parms
		{
			UObject* WorldContextObject;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UConfiguratorLibrary_IsWorldValid_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConfiguratorLibrary_eventIsWorldValid_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UConfiguratorLibrary_IsWorldValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ConfiguratorLibrary_eventIsWorldValid_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UConfiguratorLibrary_IsWorldValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ConfiguratorLibrary_eventIsWorldValid_Parms), &Z_Construct_UFunction_UConfiguratorLibrary_IsWorldValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConfiguratorLibrary_IsWorldValid_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConfiguratorLibrary_IsWorldValid_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConfiguratorLibrary_IsWorldValid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConfiguratorLibrary_IsWorldValid_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConfiguratorLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UConfiguratorLibrary_IsWorldValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConfiguratorLibrary, nullptr, "IsWorldValid", nullptr, nullptr, sizeof(ConfiguratorLibrary_eventIsWorldValid_Parms), Z_Construct_UFunction_UConfiguratorLibrary_IsWorldValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfiguratorLibrary_IsWorldValid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConfiguratorLibrary_IsWorldValid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfiguratorLibrary_IsWorldValid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConfiguratorLibrary_IsWorldValid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UConfiguratorLibrary_IsWorldValid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConfiguratorLibrary_LoadConfigFile_Statics
	{
		struct ConfiguratorLibrary_eventLoadConfigFile_Parms
		{
			FString Filename;
			FString FinalIniFilename;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Filename_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Filename;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FinalIniFilename;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConfiguratorLibrary_LoadConfigFile_Statics::NewProp_Filename_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UConfiguratorLibrary_LoadConfigFile_Statics::NewProp_Filename = { "Filename", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConfiguratorLibrary_eventLoadConfigFile_Parms, Filename), METADATA_PARAMS(Z_Construct_UFunction_UConfiguratorLibrary_LoadConfigFile_Statics::NewProp_Filename_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfiguratorLibrary_LoadConfigFile_Statics::NewProp_Filename_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UConfiguratorLibrary_LoadConfigFile_Statics::NewProp_FinalIniFilename = { "FinalIniFilename", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConfiguratorLibrary_eventLoadConfigFile_Parms, FinalIniFilename), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UConfiguratorLibrary_LoadConfigFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ConfiguratorLibrary_eventLoadConfigFile_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UConfiguratorLibrary_LoadConfigFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ConfiguratorLibrary_eventLoadConfigFile_Parms), &Z_Construct_UFunction_UConfiguratorLibrary_LoadConfigFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConfiguratorLibrary_LoadConfigFile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConfiguratorLibrary_LoadConfigFile_Statics::NewProp_Filename,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConfiguratorLibrary_LoadConfigFile_Statics::NewProp_FinalIniFilename,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConfiguratorLibrary_LoadConfigFile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConfiguratorLibrary_LoadConfigFile_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConfiguratorLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UConfiguratorLibrary_LoadConfigFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConfiguratorLibrary, nullptr, "LoadConfigFile", nullptr, nullptr, sizeof(ConfiguratorLibrary_eventLoadConfigFile_Parms), Z_Construct_UFunction_UConfiguratorLibrary_LoadConfigFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfiguratorLibrary_LoadConfigFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConfiguratorLibrary_LoadConfigFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfiguratorLibrary_LoadConfigFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConfiguratorLibrary_LoadConfigFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UConfiguratorLibrary_LoadConfigFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConfiguratorLibrary_LoadDefaultObjectConfig_Statics
	{
		struct ConfiguratorLibrary_eventLoadDefaultObjectConfig_Parms
		{
			UObject* Object;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Object;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UConfiguratorLibrary_LoadDefaultObjectConfig_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConfiguratorLibrary_eventLoadDefaultObjectConfig_Parms, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConfiguratorLibrary_LoadDefaultObjectConfig_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConfiguratorLibrary_LoadDefaultObjectConfig_Statics::NewProp_Object,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConfiguratorLibrary_LoadDefaultObjectConfig_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConfiguratorLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UConfiguratorLibrary_LoadDefaultObjectConfig_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConfiguratorLibrary, nullptr, "LoadDefaultObjectConfig", nullptr, nullptr, sizeof(ConfiguratorLibrary_eventLoadDefaultObjectConfig_Parms), Z_Construct_UFunction_UConfiguratorLibrary_LoadDefaultObjectConfig_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfiguratorLibrary_LoadDefaultObjectConfig_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConfiguratorLibrary_LoadDefaultObjectConfig_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfiguratorLibrary_LoadDefaultObjectConfig_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConfiguratorLibrary_LoadDefaultObjectConfig()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UConfiguratorLibrary_LoadDefaultObjectConfig_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConfiguratorLibrary_LoadObjectConfig_Statics
	{
		struct ConfiguratorLibrary_eventLoadObjectConfig_Parms
		{
			UObject* Object;
			FString Path;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Object;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Path_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Path;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UConfiguratorLibrary_LoadObjectConfig_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConfiguratorLibrary_eventLoadObjectConfig_Parms, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConfiguratorLibrary_LoadObjectConfig_Statics::NewProp_Path_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UConfiguratorLibrary_LoadObjectConfig_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConfiguratorLibrary_eventLoadObjectConfig_Parms, Path), METADATA_PARAMS(Z_Construct_UFunction_UConfiguratorLibrary_LoadObjectConfig_Statics::NewProp_Path_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfiguratorLibrary_LoadObjectConfig_Statics::NewProp_Path_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConfiguratorLibrary_LoadObjectConfig_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConfiguratorLibrary_LoadObjectConfig_Statics::NewProp_Object,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConfiguratorLibrary_LoadObjectConfig_Statics::NewProp_Path,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConfiguratorLibrary_LoadObjectConfig_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConfiguratorLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UConfiguratorLibrary_LoadObjectConfig_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConfiguratorLibrary, nullptr, "LoadObjectConfig", nullptr, nullptr, sizeof(ConfiguratorLibrary_eventLoadObjectConfig_Parms), Z_Construct_UFunction_UConfiguratorLibrary_LoadObjectConfig_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfiguratorLibrary_LoadObjectConfig_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConfiguratorLibrary_LoadObjectConfig_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfiguratorLibrary_LoadObjectConfig_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConfiguratorLibrary_LoadObjectConfig()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UConfiguratorLibrary_LoadObjectConfig_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConfiguratorLibrary_LogError_Statics
	{
		struct ConfiguratorLibrary_eventLogError_Parms
		{
			FString Text;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Text;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConfiguratorLibrary_LogError_Statics::NewProp_Text_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UConfiguratorLibrary_LogError_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConfiguratorLibrary_eventLogError_Parms, Text), METADATA_PARAMS(Z_Construct_UFunction_UConfiguratorLibrary_LogError_Statics::NewProp_Text_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfiguratorLibrary_LogError_Statics::NewProp_Text_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConfiguratorLibrary_LogError_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConfiguratorLibrary_LogError_Statics::NewProp_Text,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConfiguratorLibrary_LogError_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConfiguratorLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UConfiguratorLibrary_LogError_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConfiguratorLibrary, nullptr, "LogError", nullptr, nullptr, sizeof(ConfiguratorLibrary_eventLogError_Parms), Z_Construct_UFunction_UConfiguratorLibrary_LogError_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfiguratorLibrary_LogError_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConfiguratorLibrary_LogError_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfiguratorLibrary_LogError_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConfiguratorLibrary_LogError()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UConfiguratorLibrary_LogError_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConfiguratorLibrary_LogText_Statics
	{
		struct ConfiguratorLibrary_eventLogText_Parms
		{
			FString Text;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Text;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConfiguratorLibrary_LogText_Statics::NewProp_Text_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UConfiguratorLibrary_LogText_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConfiguratorLibrary_eventLogText_Parms, Text), METADATA_PARAMS(Z_Construct_UFunction_UConfiguratorLibrary_LogText_Statics::NewProp_Text_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfiguratorLibrary_LogText_Statics::NewProp_Text_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConfiguratorLibrary_LogText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConfiguratorLibrary_LogText_Statics::NewProp_Text,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConfiguratorLibrary_LogText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConfiguratorLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UConfiguratorLibrary_LogText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConfiguratorLibrary, nullptr, "LogText", nullptr, nullptr, sizeof(ConfiguratorLibrary_eventLogText_Parms), Z_Construct_UFunction_UConfiguratorLibrary_LogText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfiguratorLibrary_LogText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConfiguratorLibrary_LogText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfiguratorLibrary_LogText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConfiguratorLibrary_LogText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UConfiguratorLibrary_LogText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConfiguratorLibrary_LogWarning_Statics
	{
		struct ConfiguratorLibrary_eventLogWarning_Parms
		{
			FString Text;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Text;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConfiguratorLibrary_LogWarning_Statics::NewProp_Text_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UConfiguratorLibrary_LogWarning_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConfiguratorLibrary_eventLogWarning_Parms, Text), METADATA_PARAMS(Z_Construct_UFunction_UConfiguratorLibrary_LogWarning_Statics::NewProp_Text_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfiguratorLibrary_LogWarning_Statics::NewProp_Text_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConfiguratorLibrary_LogWarning_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConfiguratorLibrary_LogWarning_Statics::NewProp_Text,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConfiguratorLibrary_LogWarning_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConfiguratorLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UConfiguratorLibrary_LogWarning_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConfiguratorLibrary, nullptr, "LogWarning", nullptr, nullptr, sizeof(ConfiguratorLibrary_eventLogWarning_Parms), Z_Construct_UFunction_UConfiguratorLibrary_LogWarning_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfiguratorLibrary_LogWarning_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConfiguratorLibrary_LogWarning_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfiguratorLibrary_LogWarning_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConfiguratorLibrary_LogWarning()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UConfiguratorLibrary_LogWarning_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConfiguratorLibrary_ParseIntoArrayWithQuotes_Statics
	{
		struct ConfiguratorLibrary_eventParseIntoArrayWithQuotes_Parms
		{
			FString Text;
			FString Delimiter;
			bool bHasSplit;
			bool bRemoveQuotes;
			TArray<FString> ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Text;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Delimiter_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Delimiter;
		static void NewProp_bHasSplit_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasSplit;
		static void NewProp_bRemoveQuotes_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRemoveQuotes;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConfiguratorLibrary_ParseIntoArrayWithQuotes_Statics::NewProp_Text_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UConfiguratorLibrary_ParseIntoArrayWithQuotes_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConfiguratorLibrary_eventParseIntoArrayWithQuotes_Parms, Text), METADATA_PARAMS(Z_Construct_UFunction_UConfiguratorLibrary_ParseIntoArrayWithQuotes_Statics::NewProp_Text_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfiguratorLibrary_ParseIntoArrayWithQuotes_Statics::NewProp_Text_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConfiguratorLibrary_ParseIntoArrayWithQuotes_Statics::NewProp_Delimiter_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UConfiguratorLibrary_ParseIntoArrayWithQuotes_Statics::NewProp_Delimiter = { "Delimiter", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConfiguratorLibrary_eventParseIntoArrayWithQuotes_Parms, Delimiter), METADATA_PARAMS(Z_Construct_UFunction_UConfiguratorLibrary_ParseIntoArrayWithQuotes_Statics::NewProp_Delimiter_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfiguratorLibrary_ParseIntoArrayWithQuotes_Statics::NewProp_Delimiter_MetaData)) };
	void Z_Construct_UFunction_UConfiguratorLibrary_ParseIntoArrayWithQuotes_Statics::NewProp_bHasSplit_SetBit(void* Obj)
	{
		((ConfiguratorLibrary_eventParseIntoArrayWithQuotes_Parms*)Obj)->bHasSplit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UConfiguratorLibrary_ParseIntoArrayWithQuotes_Statics::NewProp_bHasSplit = { "bHasSplit", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ConfiguratorLibrary_eventParseIntoArrayWithQuotes_Parms), &Z_Construct_UFunction_UConfiguratorLibrary_ParseIntoArrayWithQuotes_Statics::NewProp_bHasSplit_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UConfiguratorLibrary_ParseIntoArrayWithQuotes_Statics::NewProp_bRemoveQuotes_SetBit(void* Obj)
	{
		((ConfiguratorLibrary_eventParseIntoArrayWithQuotes_Parms*)Obj)->bRemoveQuotes = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UConfiguratorLibrary_ParseIntoArrayWithQuotes_Statics::NewProp_bRemoveQuotes = { "bRemoveQuotes", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ConfiguratorLibrary_eventParseIntoArrayWithQuotes_Parms), &Z_Construct_UFunction_UConfiguratorLibrary_ParseIntoArrayWithQuotes_Statics::NewProp_bRemoveQuotes_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UConfiguratorLibrary_ParseIntoArrayWithQuotes_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UConfiguratorLibrary_ParseIntoArrayWithQuotes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConfiguratorLibrary_eventParseIntoArrayWithQuotes_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConfiguratorLibrary_ParseIntoArrayWithQuotes_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConfiguratorLibrary_ParseIntoArrayWithQuotes_Statics::NewProp_Text,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConfiguratorLibrary_ParseIntoArrayWithQuotes_Statics::NewProp_Delimiter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConfiguratorLibrary_ParseIntoArrayWithQuotes_Statics::NewProp_bHasSplit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConfiguratorLibrary_ParseIntoArrayWithQuotes_Statics::NewProp_bRemoveQuotes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConfiguratorLibrary_ParseIntoArrayWithQuotes_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConfiguratorLibrary_ParseIntoArrayWithQuotes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConfiguratorLibrary_ParseIntoArrayWithQuotes_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConfiguratorLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UConfiguratorLibrary_ParseIntoArrayWithQuotes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConfiguratorLibrary, nullptr, "ParseIntoArrayWithQuotes", nullptr, nullptr, sizeof(ConfiguratorLibrary_eventParseIntoArrayWithQuotes_Parms), Z_Construct_UFunction_UConfiguratorLibrary_ParseIntoArrayWithQuotes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfiguratorLibrary_ParseIntoArrayWithQuotes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConfiguratorLibrary_ParseIntoArrayWithQuotes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfiguratorLibrary_ParseIntoArrayWithQuotes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConfiguratorLibrary_ParseIntoArrayWithQuotes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UConfiguratorLibrary_ParseIntoArrayWithQuotes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConfiguratorLibrary_ReadLines_Statics
	{
		struct ConfiguratorLibrary_eventReadLines_Parms
		{
			FString Path;
			TArray<FString> Lines;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Path_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Path;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Lines_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Lines;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConfiguratorLibrary_ReadLines_Statics::NewProp_Path_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UConfiguratorLibrary_ReadLines_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConfiguratorLibrary_eventReadLines_Parms, Path), METADATA_PARAMS(Z_Construct_UFunction_UConfiguratorLibrary_ReadLines_Statics::NewProp_Path_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfiguratorLibrary_ReadLines_Statics::NewProp_Path_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UConfiguratorLibrary_ReadLines_Statics::NewProp_Lines_Inner = { "Lines", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UConfiguratorLibrary_ReadLines_Statics::NewProp_Lines = { "Lines", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConfiguratorLibrary_eventReadLines_Parms, Lines), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UConfiguratorLibrary_ReadLines_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ConfiguratorLibrary_eventReadLines_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UConfiguratorLibrary_ReadLines_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ConfiguratorLibrary_eventReadLines_Parms), &Z_Construct_UFunction_UConfiguratorLibrary_ReadLines_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConfiguratorLibrary_ReadLines_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConfiguratorLibrary_ReadLines_Statics::NewProp_Path,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConfiguratorLibrary_ReadLines_Statics::NewProp_Lines_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConfiguratorLibrary_ReadLines_Statics::NewProp_Lines,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConfiguratorLibrary_ReadLines_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConfiguratorLibrary_ReadLines_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConfiguratorLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UConfiguratorLibrary_ReadLines_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConfiguratorLibrary, nullptr, "ReadLines", nullptr, nullptr, sizeof(ConfiguratorLibrary_eventReadLines_Parms), Z_Construct_UFunction_UConfiguratorLibrary_ReadLines_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfiguratorLibrary_ReadLines_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConfiguratorLibrary_ReadLines_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfiguratorLibrary_ReadLines_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConfiguratorLibrary_ReadLines()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UConfiguratorLibrary_ReadLines_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConfiguratorLibrary_ReadText_Statics
	{
		struct ConfiguratorLibrary_eventReadText_Parms
		{
			FString Path;
			FString Text;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Path_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Path;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Text;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConfiguratorLibrary_ReadText_Statics::NewProp_Path_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UConfiguratorLibrary_ReadText_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConfiguratorLibrary_eventReadText_Parms, Path), METADATA_PARAMS(Z_Construct_UFunction_UConfiguratorLibrary_ReadText_Statics::NewProp_Path_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfiguratorLibrary_ReadText_Statics::NewProp_Path_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UConfiguratorLibrary_ReadText_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConfiguratorLibrary_eventReadText_Parms, Text), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UConfiguratorLibrary_ReadText_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ConfiguratorLibrary_eventReadText_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UConfiguratorLibrary_ReadText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ConfiguratorLibrary_eventReadText_Parms), &Z_Construct_UFunction_UConfiguratorLibrary_ReadText_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConfiguratorLibrary_ReadText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConfiguratorLibrary_ReadText_Statics::NewProp_Path,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConfiguratorLibrary_ReadText_Statics::NewProp_Text,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConfiguratorLibrary_ReadText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConfiguratorLibrary_ReadText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConfiguratorLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UConfiguratorLibrary_ReadText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConfiguratorLibrary, nullptr, "ReadText", nullptr, nullptr, sizeof(ConfiguratorLibrary_eventReadText_Parms), Z_Construct_UFunction_UConfiguratorLibrary_ReadText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfiguratorLibrary_ReadText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConfiguratorLibrary_ReadText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfiguratorLibrary_ReadText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConfiguratorLibrary_ReadText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UConfiguratorLibrary_ReadText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConfiguratorLibrary_ReloadDefaultObjectConfig_Statics
	{
		struct ConfiguratorLibrary_eventReloadDefaultObjectConfig_Parms
		{
			UObject* Object;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Object;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UConfiguratorLibrary_ReloadDefaultObjectConfig_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConfiguratorLibrary_eventReloadDefaultObjectConfig_Parms, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConfiguratorLibrary_ReloadDefaultObjectConfig_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConfiguratorLibrary_ReloadDefaultObjectConfig_Statics::NewProp_Object,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConfiguratorLibrary_ReloadDefaultObjectConfig_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConfiguratorLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UConfiguratorLibrary_ReloadDefaultObjectConfig_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConfiguratorLibrary, nullptr, "ReloadDefaultObjectConfig", nullptr, nullptr, sizeof(ConfiguratorLibrary_eventReloadDefaultObjectConfig_Parms), Z_Construct_UFunction_UConfiguratorLibrary_ReloadDefaultObjectConfig_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfiguratorLibrary_ReloadDefaultObjectConfig_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConfiguratorLibrary_ReloadDefaultObjectConfig_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfiguratorLibrary_ReloadDefaultObjectConfig_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConfiguratorLibrary_ReloadDefaultObjectConfig()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UConfiguratorLibrary_ReloadDefaultObjectConfig_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConfiguratorLibrary_ReloadObjectConfig_Statics
	{
		struct ConfiguratorLibrary_eventReloadObjectConfig_Parms
		{
			UObject* Object;
			FString Path;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Object;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Path_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Path;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UConfiguratorLibrary_ReloadObjectConfig_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConfiguratorLibrary_eventReloadObjectConfig_Parms, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConfiguratorLibrary_ReloadObjectConfig_Statics::NewProp_Path_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UConfiguratorLibrary_ReloadObjectConfig_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConfiguratorLibrary_eventReloadObjectConfig_Parms, Path), METADATA_PARAMS(Z_Construct_UFunction_UConfiguratorLibrary_ReloadObjectConfig_Statics::NewProp_Path_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfiguratorLibrary_ReloadObjectConfig_Statics::NewProp_Path_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConfiguratorLibrary_ReloadObjectConfig_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConfiguratorLibrary_ReloadObjectConfig_Statics::NewProp_Object,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConfiguratorLibrary_ReloadObjectConfig_Statics::NewProp_Path,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConfiguratorLibrary_ReloadObjectConfig_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConfiguratorLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UConfiguratorLibrary_ReloadObjectConfig_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConfiguratorLibrary, nullptr, "ReloadObjectConfig", nullptr, nullptr, sizeof(ConfiguratorLibrary_eventReloadObjectConfig_Parms), Z_Construct_UFunction_UConfiguratorLibrary_ReloadObjectConfig_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfiguratorLibrary_ReloadObjectConfig_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConfiguratorLibrary_ReloadObjectConfig_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfiguratorLibrary_ReloadObjectConfig_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConfiguratorLibrary_ReloadObjectConfig()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UConfiguratorLibrary_ReloadObjectConfig_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConfiguratorLibrary_SaveConfigFile_Statics
	{
		struct ConfiguratorLibrary_eventSaveConfigFile_Parms
		{
			FString Filename;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Filename_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Filename;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConfiguratorLibrary_SaveConfigFile_Statics::NewProp_Filename_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UConfiguratorLibrary_SaveConfigFile_Statics::NewProp_Filename = { "Filename", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConfiguratorLibrary_eventSaveConfigFile_Parms, Filename), METADATA_PARAMS(Z_Construct_UFunction_UConfiguratorLibrary_SaveConfigFile_Statics::NewProp_Filename_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfiguratorLibrary_SaveConfigFile_Statics::NewProp_Filename_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConfiguratorLibrary_SaveConfigFile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConfiguratorLibrary_SaveConfigFile_Statics::NewProp_Filename,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConfiguratorLibrary_SaveConfigFile_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConfiguratorLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UConfiguratorLibrary_SaveConfigFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConfiguratorLibrary, nullptr, "SaveConfigFile", nullptr, nullptr, sizeof(ConfiguratorLibrary_eventSaveConfigFile_Parms), Z_Construct_UFunction_UConfiguratorLibrary_SaveConfigFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfiguratorLibrary_SaveConfigFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConfiguratorLibrary_SaveConfigFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfiguratorLibrary_SaveConfigFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConfiguratorLibrary_SaveConfigFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UConfiguratorLibrary_SaveConfigFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConfiguratorLibrary_SaveDefaultObjectConfig_Statics
	{
		struct ConfiguratorLibrary_eventSaveDefaultObjectConfig_Parms
		{
			UObject* Object;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Object;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UConfiguratorLibrary_SaveDefaultObjectConfig_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConfiguratorLibrary_eventSaveDefaultObjectConfig_Parms, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConfiguratorLibrary_SaveDefaultObjectConfig_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConfiguratorLibrary_SaveDefaultObjectConfig_Statics::NewProp_Object,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConfiguratorLibrary_SaveDefaultObjectConfig_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConfiguratorLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UConfiguratorLibrary_SaveDefaultObjectConfig_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConfiguratorLibrary, nullptr, "SaveDefaultObjectConfig", nullptr, nullptr, sizeof(ConfiguratorLibrary_eventSaveDefaultObjectConfig_Parms), Z_Construct_UFunction_UConfiguratorLibrary_SaveDefaultObjectConfig_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfiguratorLibrary_SaveDefaultObjectConfig_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConfiguratorLibrary_SaveDefaultObjectConfig_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfiguratorLibrary_SaveDefaultObjectConfig_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConfiguratorLibrary_SaveDefaultObjectConfig()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UConfiguratorLibrary_SaveDefaultObjectConfig_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConfiguratorLibrary_SaveObjectConfig_Statics
	{
		struct ConfiguratorLibrary_eventSaveObjectConfig_Parms
		{
			UObject* Object;
			FString Path;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Object;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Path_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Path;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UConfiguratorLibrary_SaveObjectConfig_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConfiguratorLibrary_eventSaveObjectConfig_Parms, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConfiguratorLibrary_SaveObjectConfig_Statics::NewProp_Path_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UConfiguratorLibrary_SaveObjectConfig_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConfiguratorLibrary_eventSaveObjectConfig_Parms, Path), METADATA_PARAMS(Z_Construct_UFunction_UConfiguratorLibrary_SaveObjectConfig_Statics::NewProp_Path_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfiguratorLibrary_SaveObjectConfig_Statics::NewProp_Path_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConfiguratorLibrary_SaveObjectConfig_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConfiguratorLibrary_SaveObjectConfig_Statics::NewProp_Object,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConfiguratorLibrary_SaveObjectConfig_Statics::NewProp_Path,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConfiguratorLibrary_SaveObjectConfig_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConfiguratorLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UConfiguratorLibrary_SaveObjectConfig_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConfiguratorLibrary, nullptr, "SaveObjectConfig", nullptr, nullptr, sizeof(ConfiguratorLibrary_eventSaveObjectConfig_Parms), Z_Construct_UFunction_UConfiguratorLibrary_SaveObjectConfig_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfiguratorLibrary_SaveObjectConfig_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConfiguratorLibrary_SaveObjectConfig_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfiguratorLibrary_SaveObjectConfig_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConfiguratorLibrary_SaveObjectConfig()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UConfiguratorLibrary_SaveObjectConfig_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConfiguratorLibrary_SetBit_Statics
	{
		struct ConfiguratorLibrary_eventSetBit_Parms
		{
			bool bValue;
			int32 Mask;
			int32 MaskValue;
		};
		static void NewProp_bValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Mask;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaskValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UConfiguratorLibrary_SetBit_Statics::NewProp_bValue_SetBit(void* Obj)
	{
		((ConfiguratorLibrary_eventSetBit_Parms*)Obj)->bValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UConfiguratorLibrary_SetBit_Statics::NewProp_bValue = { "bValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ConfiguratorLibrary_eventSetBit_Parms), &Z_Construct_UFunction_UConfiguratorLibrary_SetBit_Statics::NewProp_bValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UConfiguratorLibrary_SetBit_Statics::NewProp_Mask = { "Mask", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConfiguratorLibrary_eventSetBit_Parms, Mask), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UConfiguratorLibrary_SetBit_Statics::NewProp_MaskValue = { "MaskValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConfiguratorLibrary_eventSetBit_Parms, MaskValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConfiguratorLibrary_SetBit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConfiguratorLibrary_SetBit_Statics::NewProp_bValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConfiguratorLibrary_SetBit_Statics::NewProp_Mask,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConfiguratorLibrary_SetBit_Statics::NewProp_MaskValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConfiguratorLibrary_SetBit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConfiguratorLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UConfiguratorLibrary_SetBit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConfiguratorLibrary, nullptr, "SetBit", nullptr, nullptr, sizeof(ConfiguratorLibrary_eventSetBit_Parms), Z_Construct_UFunction_UConfiguratorLibrary_SetBit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfiguratorLibrary_SetBit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConfiguratorLibrary_SetBit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfiguratorLibrary_SetBit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConfiguratorLibrary_SetBit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UConfiguratorLibrary_SetBit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConfiguratorLibrary_SetConfigBool_Statics
	{
		struct ConfiguratorLibrary_eventSetConfigBool_Parms
		{
			FString Filename;
			FString Section;
			FString Name;
			bool Value;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Filename_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Filename;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Section_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Section;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static void NewProp_Value_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConfiguratorLibrary_SetConfigBool_Statics::NewProp_Filename_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UConfiguratorLibrary_SetConfigBool_Statics::NewProp_Filename = { "Filename", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConfiguratorLibrary_eventSetConfigBool_Parms, Filename), METADATA_PARAMS(Z_Construct_UFunction_UConfiguratorLibrary_SetConfigBool_Statics::NewProp_Filename_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfiguratorLibrary_SetConfigBool_Statics::NewProp_Filename_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConfiguratorLibrary_SetConfigBool_Statics::NewProp_Section_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UConfiguratorLibrary_SetConfigBool_Statics::NewProp_Section = { "Section", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConfiguratorLibrary_eventSetConfigBool_Parms, Section), METADATA_PARAMS(Z_Construct_UFunction_UConfiguratorLibrary_SetConfigBool_Statics::NewProp_Section_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfiguratorLibrary_SetConfigBool_Statics::NewProp_Section_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConfiguratorLibrary_SetConfigBool_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UConfiguratorLibrary_SetConfigBool_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConfiguratorLibrary_eventSetConfigBool_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UConfiguratorLibrary_SetConfigBool_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfiguratorLibrary_SetConfigBool_Statics::NewProp_Name_MetaData)) };
	void Z_Construct_UFunction_UConfiguratorLibrary_SetConfigBool_Statics::NewProp_Value_SetBit(void* Obj)
	{
		((ConfiguratorLibrary_eventSetConfigBool_Parms*)Obj)->Value = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UConfiguratorLibrary_SetConfigBool_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ConfiguratorLibrary_eventSetConfigBool_Parms), &Z_Construct_UFunction_UConfiguratorLibrary_SetConfigBool_Statics::NewProp_Value_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConfiguratorLibrary_SetConfigBool_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConfiguratorLibrary_SetConfigBool_Statics::NewProp_Filename,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConfiguratorLibrary_SetConfigBool_Statics::NewProp_Section,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConfiguratorLibrary_SetConfigBool_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConfiguratorLibrary_SetConfigBool_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConfiguratorLibrary_SetConfigBool_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConfiguratorLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UConfiguratorLibrary_SetConfigBool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConfiguratorLibrary, nullptr, "SetConfigBool", nullptr, nullptr, sizeof(ConfiguratorLibrary_eventSetConfigBool_Parms), Z_Construct_UFunction_UConfiguratorLibrary_SetConfigBool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfiguratorLibrary_SetConfigBool_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConfiguratorLibrary_SetConfigBool_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfiguratorLibrary_SetConfigBool_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConfiguratorLibrary_SetConfigBool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UConfiguratorLibrary_SetConfigBool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConfiguratorLibrary_SetConfigFloat_Statics
	{
		struct ConfiguratorLibrary_eventSetConfigFloat_Parms
		{
			FString Filename;
			FString Section;
			FString Name;
			float Value;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Filename_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Filename;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Section_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Section;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConfiguratorLibrary_SetConfigFloat_Statics::NewProp_Filename_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UConfiguratorLibrary_SetConfigFloat_Statics::NewProp_Filename = { "Filename", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConfiguratorLibrary_eventSetConfigFloat_Parms, Filename), METADATA_PARAMS(Z_Construct_UFunction_UConfiguratorLibrary_SetConfigFloat_Statics::NewProp_Filename_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfiguratorLibrary_SetConfigFloat_Statics::NewProp_Filename_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConfiguratorLibrary_SetConfigFloat_Statics::NewProp_Section_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UConfiguratorLibrary_SetConfigFloat_Statics::NewProp_Section = { "Section", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConfiguratorLibrary_eventSetConfigFloat_Parms, Section), METADATA_PARAMS(Z_Construct_UFunction_UConfiguratorLibrary_SetConfigFloat_Statics::NewProp_Section_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfiguratorLibrary_SetConfigFloat_Statics::NewProp_Section_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConfiguratorLibrary_SetConfigFloat_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UConfiguratorLibrary_SetConfigFloat_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConfiguratorLibrary_eventSetConfigFloat_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UConfiguratorLibrary_SetConfigFloat_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfiguratorLibrary_SetConfigFloat_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UConfiguratorLibrary_SetConfigFloat_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConfiguratorLibrary_eventSetConfigFloat_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConfiguratorLibrary_SetConfigFloat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConfiguratorLibrary_SetConfigFloat_Statics::NewProp_Filename,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConfiguratorLibrary_SetConfigFloat_Statics::NewProp_Section,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConfiguratorLibrary_SetConfigFloat_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConfiguratorLibrary_SetConfigFloat_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConfiguratorLibrary_SetConfigFloat_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConfiguratorLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UConfiguratorLibrary_SetConfigFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConfiguratorLibrary, nullptr, "SetConfigFloat", nullptr, nullptr, sizeof(ConfiguratorLibrary_eventSetConfigFloat_Parms), Z_Construct_UFunction_UConfiguratorLibrary_SetConfigFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfiguratorLibrary_SetConfigFloat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConfiguratorLibrary_SetConfigFloat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfiguratorLibrary_SetConfigFloat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConfiguratorLibrary_SetConfigFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UConfiguratorLibrary_SetConfigFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConfiguratorLibrary_SetConfigInt_Statics
	{
		struct ConfiguratorLibrary_eventSetConfigInt_Parms
		{
			FString Filename;
			FString Section;
			FString Name;
			int32 Value;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Filename_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Filename;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Section_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Section;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConfiguratorLibrary_SetConfigInt_Statics::NewProp_Filename_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UConfiguratorLibrary_SetConfigInt_Statics::NewProp_Filename = { "Filename", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConfiguratorLibrary_eventSetConfigInt_Parms, Filename), METADATA_PARAMS(Z_Construct_UFunction_UConfiguratorLibrary_SetConfigInt_Statics::NewProp_Filename_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfiguratorLibrary_SetConfigInt_Statics::NewProp_Filename_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConfiguratorLibrary_SetConfigInt_Statics::NewProp_Section_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UConfiguratorLibrary_SetConfigInt_Statics::NewProp_Section = { "Section", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConfiguratorLibrary_eventSetConfigInt_Parms, Section), METADATA_PARAMS(Z_Construct_UFunction_UConfiguratorLibrary_SetConfigInt_Statics::NewProp_Section_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfiguratorLibrary_SetConfigInt_Statics::NewProp_Section_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConfiguratorLibrary_SetConfigInt_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UConfiguratorLibrary_SetConfigInt_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConfiguratorLibrary_eventSetConfigInt_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UConfiguratorLibrary_SetConfigInt_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfiguratorLibrary_SetConfigInt_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UConfiguratorLibrary_SetConfigInt_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConfiguratorLibrary_eventSetConfigInt_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConfiguratorLibrary_SetConfigInt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConfiguratorLibrary_SetConfigInt_Statics::NewProp_Filename,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConfiguratorLibrary_SetConfigInt_Statics::NewProp_Section,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConfiguratorLibrary_SetConfigInt_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConfiguratorLibrary_SetConfigInt_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConfiguratorLibrary_SetConfigInt_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConfiguratorLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UConfiguratorLibrary_SetConfigInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConfiguratorLibrary, nullptr, "SetConfigInt", nullptr, nullptr, sizeof(ConfiguratorLibrary_eventSetConfigInt_Parms), Z_Construct_UFunction_UConfiguratorLibrary_SetConfigInt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfiguratorLibrary_SetConfigInt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConfiguratorLibrary_SetConfigInt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfiguratorLibrary_SetConfigInt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConfiguratorLibrary_SetConfigInt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UConfiguratorLibrary_SetConfigInt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConfiguratorLibrary_SetConfigString_Statics
	{
		struct ConfiguratorLibrary_eventSetConfigString_Parms
		{
			FString Filename;
			FString Section;
			FString Name;
			FString Value;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Filename_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Filename;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Section_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Section;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConfiguratorLibrary_SetConfigString_Statics::NewProp_Filename_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UConfiguratorLibrary_SetConfigString_Statics::NewProp_Filename = { "Filename", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConfiguratorLibrary_eventSetConfigString_Parms, Filename), METADATA_PARAMS(Z_Construct_UFunction_UConfiguratorLibrary_SetConfigString_Statics::NewProp_Filename_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfiguratorLibrary_SetConfigString_Statics::NewProp_Filename_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConfiguratorLibrary_SetConfigString_Statics::NewProp_Section_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UConfiguratorLibrary_SetConfigString_Statics::NewProp_Section = { "Section", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConfiguratorLibrary_eventSetConfigString_Parms, Section), METADATA_PARAMS(Z_Construct_UFunction_UConfiguratorLibrary_SetConfigString_Statics::NewProp_Section_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfiguratorLibrary_SetConfigString_Statics::NewProp_Section_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConfiguratorLibrary_SetConfigString_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UConfiguratorLibrary_SetConfigString_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConfiguratorLibrary_eventSetConfigString_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UConfiguratorLibrary_SetConfigString_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfiguratorLibrary_SetConfigString_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConfiguratorLibrary_SetConfigString_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UConfiguratorLibrary_SetConfigString_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConfiguratorLibrary_eventSetConfigString_Parms, Value), METADATA_PARAMS(Z_Construct_UFunction_UConfiguratorLibrary_SetConfigString_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfiguratorLibrary_SetConfigString_Statics::NewProp_Value_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConfiguratorLibrary_SetConfigString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConfiguratorLibrary_SetConfigString_Statics::NewProp_Filename,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConfiguratorLibrary_SetConfigString_Statics::NewProp_Section,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConfiguratorLibrary_SetConfigString_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConfiguratorLibrary_SetConfigString_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConfiguratorLibrary_SetConfigString_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConfiguratorLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UConfiguratorLibrary_SetConfigString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConfiguratorLibrary, nullptr, "SetConfigString", nullptr, nullptr, sizeof(ConfiguratorLibrary_eventSetConfigString_Parms), Z_Construct_UFunction_UConfiguratorLibrary_SetConfigString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfiguratorLibrary_SetConfigString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConfiguratorLibrary_SetConfigString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfiguratorLibrary_SetConfigString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConfiguratorLibrary_SetConfigString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UConfiguratorLibrary_SetConfigString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConfiguratorLibrary_SetCrashData_Statics
	{
		struct ConfiguratorLibrary_eventSetCrashData_Parms
		{
			FString Key;
			FString Value;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConfiguratorLibrary_SetCrashData_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UConfiguratorLibrary_SetCrashData_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConfiguratorLibrary_eventSetCrashData_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UConfiguratorLibrary_SetCrashData_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfiguratorLibrary_SetCrashData_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConfiguratorLibrary_SetCrashData_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UConfiguratorLibrary_SetCrashData_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConfiguratorLibrary_eventSetCrashData_Parms, Value), METADATA_PARAMS(Z_Construct_UFunction_UConfiguratorLibrary_SetCrashData_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfiguratorLibrary_SetCrashData_Statics::NewProp_Value_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConfiguratorLibrary_SetCrashData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConfiguratorLibrary_SetCrashData_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConfiguratorLibrary_SetCrashData_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConfiguratorLibrary_SetCrashData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConfiguratorLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UConfiguratorLibrary_SetCrashData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConfiguratorLibrary, nullptr, "SetCrashData", nullptr, nullptr, sizeof(ConfiguratorLibrary_eventSetCrashData_Parms), Z_Construct_UFunction_UConfiguratorLibrary_SetCrashData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfiguratorLibrary_SetCrashData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConfiguratorLibrary_SetCrashData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfiguratorLibrary_SetCrashData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConfiguratorLibrary_SetCrashData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UConfiguratorLibrary_SetCrashData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConfiguratorLibrary_SetDirectionalLightAngle_Statics
	{
		struct ConfiguratorLibrary_eventSetDirectionalLightAngle_Parms
		{
			UDirectionalLightComponent* Light;
			float SourceAngle;
			float SoftSourceAngle;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Light_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Light;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SourceAngle;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SoftSourceAngle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConfiguratorLibrary_SetDirectionalLightAngle_Statics::NewProp_Light_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UConfiguratorLibrary_SetDirectionalLightAngle_Statics::NewProp_Light = { "Light", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConfiguratorLibrary_eventSetDirectionalLightAngle_Parms, Light), Z_Construct_UClass_UDirectionalLightComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UConfiguratorLibrary_SetDirectionalLightAngle_Statics::NewProp_Light_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfiguratorLibrary_SetDirectionalLightAngle_Statics::NewProp_Light_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UConfiguratorLibrary_SetDirectionalLightAngle_Statics::NewProp_SourceAngle = { "SourceAngle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConfiguratorLibrary_eventSetDirectionalLightAngle_Parms, SourceAngle), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UConfiguratorLibrary_SetDirectionalLightAngle_Statics::NewProp_SoftSourceAngle = { "SoftSourceAngle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConfiguratorLibrary_eventSetDirectionalLightAngle_Parms, SoftSourceAngle), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConfiguratorLibrary_SetDirectionalLightAngle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConfiguratorLibrary_SetDirectionalLightAngle_Statics::NewProp_Light,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConfiguratorLibrary_SetDirectionalLightAngle_Statics::NewProp_SourceAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConfiguratorLibrary_SetDirectionalLightAngle_Statics::NewProp_SoftSourceAngle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConfiguratorLibrary_SetDirectionalLightAngle_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConfiguratorLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UConfiguratorLibrary_SetDirectionalLightAngle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConfiguratorLibrary, nullptr, "SetDirectionalLightAngle", nullptr, nullptr, sizeof(ConfiguratorLibrary_eventSetDirectionalLightAngle_Parms), Z_Construct_UFunction_UConfiguratorLibrary_SetDirectionalLightAngle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfiguratorLibrary_SetDirectionalLightAngle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConfiguratorLibrary_SetDirectionalLightAngle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfiguratorLibrary_SetDirectionalLightAngle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConfiguratorLibrary_SetDirectionalLightAngle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UConfiguratorLibrary_SetDirectionalLightAngle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConfiguratorLibrary_ToUnixTimestamp_Statics
	{
		struct ConfiguratorLibrary_eventToUnixTimestamp_Parms
		{
			FDateTime InTime;
			int64 ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InTime;
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UConfiguratorLibrary_ToUnixTimestamp_Statics::NewProp_InTime = { "InTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConfiguratorLibrary_eventToUnixTimestamp_Parms, InTime), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UConfiguratorLibrary_ToUnixTimestamp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConfiguratorLibrary_eventToUnixTimestamp_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConfiguratorLibrary_ToUnixTimestamp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConfiguratorLibrary_ToUnixTimestamp_Statics::NewProp_InTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConfiguratorLibrary_ToUnixTimestamp_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConfiguratorLibrary_ToUnixTimestamp_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConfiguratorLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UConfiguratorLibrary_ToUnixTimestamp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConfiguratorLibrary, nullptr, "ToUnixTimestamp", nullptr, nullptr, sizeof(ConfiguratorLibrary_eventToUnixTimestamp_Parms), Z_Construct_UFunction_UConfiguratorLibrary_ToUnixTimestamp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfiguratorLibrary_ToUnixTimestamp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConfiguratorLibrary_ToUnixTimestamp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfiguratorLibrary_ToUnixTimestamp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConfiguratorLibrary_ToUnixTimestamp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UConfiguratorLibrary_ToUnixTimestamp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConfiguratorLibrary_UpdateDirtyReflectionCaptures_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConfiguratorLibrary_UpdateDirtyReflectionCaptures_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConfiguratorLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UConfiguratorLibrary_UpdateDirtyReflectionCaptures_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConfiguratorLibrary, nullptr, "UpdateDirtyReflectionCaptures", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConfiguratorLibrary_UpdateDirtyReflectionCaptures_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfiguratorLibrary_UpdateDirtyReflectionCaptures_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConfiguratorLibrary_UpdateDirtyReflectionCaptures()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UConfiguratorLibrary_UpdateDirtyReflectionCaptures_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConfiguratorLibrary_UpdateReflectionCapture_Statics
	{
		struct ConfiguratorLibrary_eventUpdateReflectionCapture_Parms
		{
			UReflectionCaptureComponent* Reflection;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Reflection_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Reflection;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConfiguratorLibrary_UpdateReflectionCapture_Statics::NewProp_Reflection_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UConfiguratorLibrary_UpdateReflectionCapture_Statics::NewProp_Reflection = { "Reflection", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConfiguratorLibrary_eventUpdateReflectionCapture_Parms, Reflection), Z_Construct_UClass_UReflectionCaptureComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UConfiguratorLibrary_UpdateReflectionCapture_Statics::NewProp_Reflection_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfiguratorLibrary_UpdateReflectionCapture_Statics::NewProp_Reflection_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConfiguratorLibrary_UpdateReflectionCapture_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConfiguratorLibrary_UpdateReflectionCapture_Statics::NewProp_Reflection,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConfiguratorLibrary_UpdateReflectionCapture_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConfiguratorLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UConfiguratorLibrary_UpdateReflectionCapture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConfiguratorLibrary, nullptr, "UpdateReflectionCapture", nullptr, nullptr, sizeof(ConfiguratorLibrary_eventUpdateReflectionCapture_Parms), Z_Construct_UFunction_UConfiguratorLibrary_UpdateReflectionCapture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfiguratorLibrary_UpdateReflectionCapture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConfiguratorLibrary_UpdateReflectionCapture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfiguratorLibrary_UpdateReflectionCapture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConfiguratorLibrary_UpdateReflectionCapture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UConfiguratorLibrary_UpdateReflectionCapture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConfiguratorLibrary_WriteLines_Statics
	{
		struct ConfiguratorLibrary_eventWriteLines_Parms
		{
			FString Path;
			TArray<FString> Lines;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Path_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Path;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Lines_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Lines;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConfiguratorLibrary_WriteLines_Statics::NewProp_Path_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UConfiguratorLibrary_WriteLines_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConfiguratorLibrary_eventWriteLines_Parms, Path), METADATA_PARAMS(Z_Construct_UFunction_UConfiguratorLibrary_WriteLines_Statics::NewProp_Path_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfiguratorLibrary_WriteLines_Statics::NewProp_Path_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UConfiguratorLibrary_WriteLines_Statics::NewProp_Lines_Inner = { "Lines", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UConfiguratorLibrary_WriteLines_Statics::NewProp_Lines = { "Lines", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConfiguratorLibrary_eventWriteLines_Parms, Lines), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UConfiguratorLibrary_WriteLines_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ConfiguratorLibrary_eventWriteLines_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UConfiguratorLibrary_WriteLines_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ConfiguratorLibrary_eventWriteLines_Parms), &Z_Construct_UFunction_UConfiguratorLibrary_WriteLines_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConfiguratorLibrary_WriteLines_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConfiguratorLibrary_WriteLines_Statics::NewProp_Path,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConfiguratorLibrary_WriteLines_Statics::NewProp_Lines_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConfiguratorLibrary_WriteLines_Statics::NewProp_Lines,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConfiguratorLibrary_WriteLines_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConfiguratorLibrary_WriteLines_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConfiguratorLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UConfiguratorLibrary_WriteLines_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConfiguratorLibrary, nullptr, "WriteLines", nullptr, nullptr, sizeof(ConfiguratorLibrary_eventWriteLines_Parms), Z_Construct_UFunction_UConfiguratorLibrary_WriteLines_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfiguratorLibrary_WriteLines_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConfiguratorLibrary_WriteLines_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfiguratorLibrary_WriteLines_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConfiguratorLibrary_WriteLines()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UConfiguratorLibrary_WriteLines_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConfiguratorLibrary_WriteText_Statics
	{
		struct ConfiguratorLibrary_eventWriteText_Parms
		{
			FString Path;
			FString Text;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Path_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Path;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Text;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConfiguratorLibrary_WriteText_Statics::NewProp_Path_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UConfiguratorLibrary_WriteText_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConfiguratorLibrary_eventWriteText_Parms, Path), METADATA_PARAMS(Z_Construct_UFunction_UConfiguratorLibrary_WriteText_Statics::NewProp_Path_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfiguratorLibrary_WriteText_Statics::NewProp_Path_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConfiguratorLibrary_WriteText_Statics::NewProp_Text_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UConfiguratorLibrary_WriteText_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConfiguratorLibrary_eventWriteText_Parms, Text), METADATA_PARAMS(Z_Construct_UFunction_UConfiguratorLibrary_WriteText_Statics::NewProp_Text_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfiguratorLibrary_WriteText_Statics::NewProp_Text_MetaData)) };
	void Z_Construct_UFunction_UConfiguratorLibrary_WriteText_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ConfiguratorLibrary_eventWriteText_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UConfiguratorLibrary_WriteText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ConfiguratorLibrary_eventWriteText_Parms), &Z_Construct_UFunction_UConfiguratorLibrary_WriteText_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConfiguratorLibrary_WriteText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConfiguratorLibrary_WriteText_Statics::NewProp_Path,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConfiguratorLibrary_WriteText_Statics::NewProp_Text,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConfiguratorLibrary_WriteText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConfiguratorLibrary_WriteText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConfiguratorLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UConfiguratorLibrary_WriteText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConfiguratorLibrary, nullptr, "WriteText", nullptr, nullptr, sizeof(ConfiguratorLibrary_eventWriteText_Parms), Z_Construct_UFunction_UConfiguratorLibrary_WriteText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfiguratorLibrary_WriteText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConfiguratorLibrary_WriteText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfiguratorLibrary_WriteText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConfiguratorLibrary_WriteText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UConfiguratorLibrary_WriteText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UConfiguratorLibrary_NoRegister()
	{
		return UConfiguratorLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UConfiguratorLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UConfiguratorLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Configurator,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UConfiguratorLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UConfiguratorLibrary_AngleBetween, "AngleBetween" }, // 1744919625
		{ &Z_Construct_UFunction_UConfiguratorLibrary_ApplyTextureCompressionSettings, "ApplyTextureCompressionSettings" }, // 530450543
		{ &Z_Construct_UFunction_UConfiguratorLibrary_BitShiftLeft, "BitShiftLeft" }, // 2907957187
		{ &Z_Construct_UFunction_UConfiguratorLibrary_BitShiftRight, "BitShiftRight" }, // 3960158596
		{ &Z_Construct_UFunction_UConfiguratorLibrary_ConfigFileExists, "ConfigFileExists" }, // 3820503352
		{ &Z_Construct_UFunction_UConfiguratorLibrary_ContainsBit, "ContainsBit" }, // 2259295577
		{ &Z_Construct_UFunction_UConfiguratorLibrary_ContainsBitIndex, "ContainsBitIndex" }, // 4138870904
		{ &Z_Construct_UFunction_UConfiguratorLibrary_DefaultConfigFileExists, "DefaultConfigFileExists" }, // 2473493285
		{ &Z_Construct_UFunction_UConfiguratorLibrary_GetBuildID, "GetBuildID" }, // 3563474125
		{ &Z_Construct_UFunction_UConfiguratorLibrary_GetConfigBool, "GetConfigBool" }, // 962904875
		{ &Z_Construct_UFunction_UConfiguratorLibrary_GetConfigFloat, "GetConfigFloat" }, // 798690293
		{ &Z_Construct_UFunction_UConfiguratorLibrary_GetConfigInt, "GetConfigInt" }, // 646107363
		{ &Z_Construct_UFunction_UConfiguratorLibrary_GetConfigPath, "GetConfigPath" }, // 268925135
		{ &Z_Construct_UFunction_UConfiguratorLibrary_GetConfigString, "GetConfigString" }, // 3560945689
		{ &Z_Construct_UFunction_UConfiguratorLibrary_GetConnectedIP, "GetConnectedIP" }, // 1348950115
		{ &Z_Construct_UFunction_UConfiguratorLibrary_GetConnectedSessionIP, "GetConnectedSessionIP" }, // 4181311876
		{ &Z_Construct_UFunction_UConfiguratorLibrary_GetConsoleBoolArgument, "GetConsoleBoolArgument" }, // 2052265154
		{ &Z_Construct_UFunction_UConfiguratorLibrary_GetConsoleFloatArgument, "GetConsoleFloatArgument" }, // 2860103581
		{ &Z_Construct_UFunction_UConfiguratorLibrary_GetConsoleIntArgument, "GetConsoleIntArgument" }, // 2260111933
		{ &Z_Construct_UFunction_UConfiguratorLibrary_GetConsoleStringArgument, "GetConsoleStringArgument" }, // 1713451026
		{ &Z_Construct_UFunction_UConfiguratorLibrary_GetCurrentLevelName, "GetCurrentLevelName" }, // 4029789995
		{ &Z_Construct_UFunction_UConfiguratorLibrary_GetCurrentSessionOwningID, "GetCurrentSessionOwningID" }, // 3992636304
		{ &Z_Construct_UFunction_UConfiguratorLibrary_GetDefaultObjectConfigFilename, "GetDefaultObjectConfigFilename" }, // 3001964118
		{ &Z_Construct_UFunction_UConfiguratorLibrary_GetEditorLevelName, "GetEditorLevelName" }, // 3580220840
		{ &Z_Construct_UFunction_UConfiguratorLibrary_GetGameInstance, "GetGameInstance" }, // 1861344070
		{ &Z_Construct_UFunction_UConfiguratorLibrary_GetGameMode, "GetGameMode" }, // 998223302
		{ &Z_Construct_UFunction_UConfiguratorLibrary_GetGameState, "GetGameState" }, // 3775285305
		{ &Z_Construct_UFunction_UConfiguratorLibrary_GetGlobalUserObjectConfigFilename, "GetGlobalUserObjectConfigFilename" }, // 4164655805
		{ &Z_Construct_UFunction_UConfiguratorLibrary_GetLocalIP, "GetLocalIP" }, // 1718825780
		{ &Z_Construct_UFunction_UConfiguratorLibrary_GetNetworkURL, "GetNetworkURL" }, // 3206087040
		{ &Z_Construct_UFunction_UConfiguratorLibrary_GetProjectDisplayName, "GetProjectDisplayName" }, // 3022548255
		{ &Z_Construct_UFunction_UConfiguratorLibrary_GetProjectSettingsBool, "GetProjectSettingsBool" }, // 1693767849
		{ &Z_Construct_UFunction_UConfiguratorLibrary_GetProjectSettingsFloat, "GetProjectSettingsFloat" }, // 151138292
		{ &Z_Construct_UFunction_UConfiguratorLibrary_GetProjectSettingsInt, "GetProjectSettingsInt" }, // 3158467551
		{ &Z_Construct_UFunction_UConfiguratorLibrary_GetProjectSettingsString, "GetProjectSettingsString" }, // 3225065050
		{ &Z_Construct_UFunction_UConfiguratorLibrary_GetProjectVersion, "GetProjectVersion" }, // 410108316
		{ &Z_Construct_UFunction_UConfiguratorLibrary_GetRHIName, "GetRHIName" }, // 2961773819
		{ &Z_Construct_UFunction_UConfiguratorLibrary_GetSecondsInDay, "GetSecondsInDay" }, // 912753296
		{ &Z_Construct_UFunction_UConfiguratorLibrary_GetSessionOwningID, "GetSessionOwningID" }, // 421174702
		{ &Z_Construct_UFunction_UConfiguratorLibrary_GetSteamQueryPort, "GetSteamQueryPort" }, // 2129198841
		{ &Z_Construct_UFunction_UConfiguratorLibrary_GetUniqueIDAsString, "GetUniqueIDAsString" }, // 661234195
		{ &Z_Construct_UFunction_UConfiguratorLibrary_GetWorldSettings, "GetWorldSettings" }, // 3782185666
		{ &Z_Construct_UFunction_UConfiguratorLibrary_HasConsoleArgument, "HasConsoleArgument" }, // 3172396245
		{ &Z_Construct_UFunction_UConfiguratorLibrary_IsGameWorld, "IsGameWorld" }, // 2354876439
		{ &Z_Construct_UFunction_UConfiguratorLibrary_IsValidAndHasWorld, "IsValidAndHasWorld" }, // 142026814
		{ &Z_Construct_UFunction_UConfiguratorLibrary_IsWorldValid, "IsWorldValid" }, // 4208325563
		{ &Z_Construct_UFunction_UConfiguratorLibrary_LoadConfigFile, "LoadConfigFile" }, // 457599009
		{ &Z_Construct_UFunction_UConfiguratorLibrary_LoadDefaultObjectConfig, "LoadDefaultObjectConfig" }, // 3651816604
		{ &Z_Construct_UFunction_UConfiguratorLibrary_LoadObjectConfig, "LoadObjectConfig" }, // 843133767
		{ &Z_Construct_UFunction_UConfiguratorLibrary_LogError, "LogError" }, // 4138392069
		{ &Z_Construct_UFunction_UConfiguratorLibrary_LogText, "LogText" }, // 489618665
		{ &Z_Construct_UFunction_UConfiguratorLibrary_LogWarning, "LogWarning" }, // 1913148165
		{ &Z_Construct_UFunction_UConfiguratorLibrary_ParseIntoArrayWithQuotes, "ParseIntoArrayWithQuotes" }, // 1127737919
		{ &Z_Construct_UFunction_UConfiguratorLibrary_ReadLines, "ReadLines" }, // 897084073
		{ &Z_Construct_UFunction_UConfiguratorLibrary_ReadText, "ReadText" }, // 845637313
		{ &Z_Construct_UFunction_UConfiguratorLibrary_ReloadDefaultObjectConfig, "ReloadDefaultObjectConfig" }, // 1547396236
		{ &Z_Construct_UFunction_UConfiguratorLibrary_ReloadObjectConfig, "ReloadObjectConfig" }, // 298546167
		{ &Z_Construct_UFunction_UConfiguratorLibrary_SaveConfigFile, "SaveConfigFile" }, // 1333047242
		{ &Z_Construct_UFunction_UConfiguratorLibrary_SaveDefaultObjectConfig, "SaveDefaultObjectConfig" }, // 2652529947
		{ &Z_Construct_UFunction_UConfiguratorLibrary_SaveObjectConfig, "SaveObjectConfig" }, // 1864746152
		{ &Z_Construct_UFunction_UConfiguratorLibrary_SetBit, "SetBit" }, // 1021747771
		{ &Z_Construct_UFunction_UConfiguratorLibrary_SetConfigBool, "SetConfigBool" }, // 3739993479
		{ &Z_Construct_UFunction_UConfiguratorLibrary_SetConfigFloat, "SetConfigFloat" }, // 2897092587
		{ &Z_Construct_UFunction_UConfiguratorLibrary_SetConfigInt, "SetConfigInt" }, // 1441789285
		{ &Z_Construct_UFunction_UConfiguratorLibrary_SetConfigString, "SetConfigString" }, // 4024231335
		{ &Z_Construct_UFunction_UConfiguratorLibrary_SetCrashData, "SetCrashData" }, // 1520542421
		{ &Z_Construct_UFunction_UConfiguratorLibrary_SetDirectionalLightAngle, "SetDirectionalLightAngle" }, // 1922607678
		{ &Z_Construct_UFunction_UConfiguratorLibrary_ToUnixTimestamp, "ToUnixTimestamp" }, // 903109678
		{ &Z_Construct_UFunction_UConfiguratorLibrary_UpdateDirtyReflectionCaptures, "UpdateDirtyReflectionCaptures" }, // 2383820130
		{ &Z_Construct_UFunction_UConfiguratorLibrary_UpdateReflectionCapture, "UpdateReflectionCapture" }, // 2028905794
		{ &Z_Construct_UFunction_UConfiguratorLibrary_WriteLines, "WriteLines" }, // 3838613037
		{ &Z_Construct_UFunction_UConfiguratorLibrary_WriteText, "WriteText" }, // 3126771379
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConfiguratorLibrary_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ConfiguratorLibrary.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ConfiguratorLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UConfiguratorLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UConfiguratorLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UConfiguratorLibrary_Statics::ClassParams = {
		&UConfiguratorLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UConfiguratorLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UConfiguratorLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UConfiguratorLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UConfiguratorLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UConfiguratorLibrary, 2702386035);
	template<> CONFIGURATOR_API UClass* StaticClass<UConfiguratorLibrary>()
	{
		return UConfiguratorLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UConfiguratorLibrary(Z_Construct_UClass_UConfiguratorLibrary, &UConfiguratorLibrary::StaticClass, TEXT("/Script/Configurator"), TEXT("UConfiguratorLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UConfiguratorLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
