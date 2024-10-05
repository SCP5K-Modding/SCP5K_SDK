// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCoreWeb/Public/WebUserStats.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWebUserStats() {}
// Cross Module References
	STEAMCOREWEB_API UClass* Z_Construct_UClass_UWebUserStats_NoRegister();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_UWebUserStats();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebSubsystem();
	UPackage* Z_Construct_UPackage__Script_SteamCoreWeb();
	STEAMCOREWEB_API UFunction* Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UWebUserStats::execGetGlobalAchievementPercentagesForApp)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_GameID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetGlobalAchievementPercentagesForApp(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_GameID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebUserStats::execGetGlobalStatsForGame)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
		P_GET_TARRAY(FString,Z_Param_Names);
		P_GET_PROPERTY(FIntProperty,Z_Param_startDate);
		P_GET_PROPERTY(FIntProperty,Z_Param_endDate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetGlobalStatsForGame(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_AppID,Z_Param_Names,Z_Param_startDate,Z_Param_endDate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebUserStats::execGetNumberOfCurrentPlayers)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetNumberOfCurrentPlayers(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_AppID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebUserStats::execGetPlayerAchievements)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FStrProperty,Z_Param_SteamID);
		P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
		P_GET_PROPERTY(FStrProperty,Z_Param_Language);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetPlayerAchievements(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_SteamID,Z_Param_AppID,Z_Param_Language);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebUserStats::execGetSchemaForGame)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FStrProperty,Z_Param_SteamID);
		P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
		P_GET_PROPERTY(FStrProperty,Z_Param_Language);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetSchemaForGame(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_SteamID,Z_Param_AppID,Z_Param_Language);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebUserStats::execGetUserStatsForGame)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FStrProperty,Z_Param_SteamID);
		P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetUserStatsForGame(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_SteamID,Z_Param_AppID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebUserStats::execSetUserStatsForGame)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FStrProperty,Z_Param_SteamID);
		P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
		P_GET_TARRAY(FString,Z_Param_Names);
		P_GET_TARRAY(int32,Z_Param_Values);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetUserStatsForGame(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_SteamID,Z_Param_AppID,Z_Param_Names,Z_Param_Values);
		P_NATIVE_END;
	}
	void UWebUserStats::StaticRegisterNativesUWebUserStats()
	{
		UClass* Class = UWebUserStats::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetGlobalAchievementPercentagesForApp", &UWebUserStats::execGetGlobalAchievementPercentagesForApp },
			{ "GetGlobalStatsForGame", &UWebUserStats::execGetGlobalStatsForGame },
			{ "GetNumberOfCurrentPlayers", &UWebUserStats::execGetNumberOfCurrentPlayers },
			{ "GetPlayerAchievements", &UWebUserStats::execGetPlayerAchievements },
			{ "GetSchemaForGame", &UWebUserStats::execGetSchemaForGame },
			{ "GetUserStatsForGame", &UWebUserStats::execGetUserStatsForGame },
			{ "SetUserStatsForGame", &UWebUserStats::execSetUserStatsForGame },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWebUserStats_GetGlobalAchievementPercentagesForApp_Statics
	{
		struct WebUserStats_eventGetGlobalAchievementPercentagesForApp_Parms
		{
			FScriptDelegate Callback;
			FString GameID;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_Callback;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_GameID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebUserStats_GetGlobalAchievementPercentagesForApp_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebUserStats_GetGlobalAchievementPercentagesForApp_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebUserStats_eventGetGlobalAchievementPercentagesForApp_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebUserStats_GetGlobalAchievementPercentagesForApp_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebUserStats_GetGlobalAchievementPercentagesForApp_Statics::NewProp_Callback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebUserStats_GetGlobalAchievementPercentagesForApp_Statics::NewProp_GameID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebUserStats_GetGlobalAchievementPercentagesForApp_Statics::NewProp_GameID = { "GameID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebUserStats_eventGetGlobalAchievementPercentagesForApp_Parms, GameID), METADATA_PARAMS(Z_Construct_UFunction_UWebUserStats_GetGlobalAchievementPercentagesForApp_Statics::NewProp_GameID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebUserStats_GetGlobalAchievementPercentagesForApp_Statics::NewProp_GameID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebUserStats_GetGlobalAchievementPercentagesForApp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebUserStats_GetGlobalAchievementPercentagesForApp_Statics::NewProp_Callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebUserStats_GetGlobalAchievementPercentagesForApp_Statics::NewProp_GameID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebUserStats_GetGlobalAchievementPercentagesForApp_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WebUserStats.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebUserStats_GetGlobalAchievementPercentagesForApp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebUserStats, nullptr, "GetGlobalAchievementPercentagesForApp", nullptr, nullptr, sizeof(WebUserStats_eventGetGlobalAchievementPercentagesForApp_Parms), Z_Construct_UFunction_UWebUserStats_GetGlobalAchievementPercentagesForApp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebUserStats_GetGlobalAchievementPercentagesForApp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebUserStats_GetGlobalAchievementPercentagesForApp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebUserStats_GetGlobalAchievementPercentagesForApp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebUserStats_GetGlobalAchievementPercentagesForApp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebUserStats_GetGlobalAchievementPercentagesForApp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebUserStats_GetGlobalStatsForGame_Statics
	{
		struct WebUserStats_eventGetGlobalStatsForGame_Parms
		{
			FScriptDelegate Callback;
			int32 AppID;
			TArray<FString> Names;
			int32 startDate;
			int32 endDate;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_Callback;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AppID;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Names_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Names;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_startDate;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_endDate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebUserStats_GetGlobalStatsForGame_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebUserStats_GetGlobalStatsForGame_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebUserStats_eventGetGlobalStatsForGame_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebUserStats_GetGlobalStatsForGame_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebUserStats_GetGlobalStatsForGame_Statics::NewProp_Callback_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebUserStats_GetGlobalStatsForGame_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebUserStats_eventGetGlobalStatsForGame_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebUserStats_GetGlobalStatsForGame_Statics::NewProp_Names_Inner = { "Names", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWebUserStats_GetGlobalStatsForGame_Statics::NewProp_Names = { "Names", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebUserStats_eventGetGlobalStatsForGame_Parms, Names), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebUserStats_GetGlobalStatsForGame_Statics::NewProp_startDate = { "startDate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebUserStats_eventGetGlobalStatsForGame_Parms, startDate), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebUserStats_GetGlobalStatsForGame_Statics::NewProp_endDate = { "endDate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebUserStats_eventGetGlobalStatsForGame_Parms, endDate), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebUserStats_GetGlobalStatsForGame_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebUserStats_GetGlobalStatsForGame_Statics::NewProp_Callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebUserStats_GetGlobalStatsForGame_Statics::NewProp_AppID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebUserStats_GetGlobalStatsForGame_Statics::NewProp_Names_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebUserStats_GetGlobalStatsForGame_Statics::NewProp_Names,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebUserStats_GetGlobalStatsForGame_Statics::NewProp_startDate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebUserStats_GetGlobalStatsForGame_Statics::NewProp_endDate,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebUserStats_GetGlobalStatsForGame_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WebUserStats.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebUserStats_GetGlobalStatsForGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebUserStats, nullptr, "GetGlobalStatsForGame", nullptr, nullptr, sizeof(WebUserStats_eventGetGlobalStatsForGame_Parms), Z_Construct_UFunction_UWebUserStats_GetGlobalStatsForGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebUserStats_GetGlobalStatsForGame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebUserStats_GetGlobalStatsForGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebUserStats_GetGlobalStatsForGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebUserStats_GetGlobalStatsForGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebUserStats_GetGlobalStatsForGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebUserStats_GetNumberOfCurrentPlayers_Statics
	{
		struct WebUserStats_eventGetNumberOfCurrentPlayers_Parms
		{
			FScriptDelegate Callback;
			int32 AppID;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_Callback;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AppID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebUserStats_GetNumberOfCurrentPlayers_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebUserStats_GetNumberOfCurrentPlayers_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebUserStats_eventGetNumberOfCurrentPlayers_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebUserStats_GetNumberOfCurrentPlayers_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebUserStats_GetNumberOfCurrentPlayers_Statics::NewProp_Callback_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebUserStats_GetNumberOfCurrentPlayers_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebUserStats_eventGetNumberOfCurrentPlayers_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebUserStats_GetNumberOfCurrentPlayers_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebUserStats_GetNumberOfCurrentPlayers_Statics::NewProp_Callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebUserStats_GetNumberOfCurrentPlayers_Statics::NewProp_AppID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebUserStats_GetNumberOfCurrentPlayers_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WebUserStats.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebUserStats_GetNumberOfCurrentPlayers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebUserStats, nullptr, "GetNumberOfCurrentPlayers", nullptr, nullptr, sizeof(WebUserStats_eventGetNumberOfCurrentPlayers_Parms), Z_Construct_UFunction_UWebUserStats_GetNumberOfCurrentPlayers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebUserStats_GetNumberOfCurrentPlayers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebUserStats_GetNumberOfCurrentPlayers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebUserStats_GetNumberOfCurrentPlayers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebUserStats_GetNumberOfCurrentPlayers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebUserStats_GetNumberOfCurrentPlayers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebUserStats_GetPlayerAchievements_Statics
	{
		struct WebUserStats_eventGetPlayerAchievements_Parms
		{
			FScriptDelegate Callback;
			FString Key;
			FString SteamID;
			int32 AppID;
			FString Language;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_Callback;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteamID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SteamID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AppID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Language_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Language;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebUserStats_GetPlayerAchievements_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebUserStats_GetPlayerAchievements_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebUserStats_eventGetPlayerAchievements_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebUserStats_GetPlayerAchievements_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebUserStats_GetPlayerAchievements_Statics::NewProp_Callback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebUserStats_GetPlayerAchievements_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebUserStats_GetPlayerAchievements_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebUserStats_eventGetPlayerAchievements_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UWebUserStats_GetPlayerAchievements_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebUserStats_GetPlayerAchievements_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebUserStats_GetPlayerAchievements_Statics::NewProp_SteamID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebUserStats_GetPlayerAchievements_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebUserStats_eventGetPlayerAchievements_Parms, SteamID), METADATA_PARAMS(Z_Construct_UFunction_UWebUserStats_GetPlayerAchievements_Statics::NewProp_SteamID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebUserStats_GetPlayerAchievements_Statics::NewProp_SteamID_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebUserStats_GetPlayerAchievements_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebUserStats_eventGetPlayerAchievements_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebUserStats_GetPlayerAchievements_Statics::NewProp_Language_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebUserStats_GetPlayerAchievements_Statics::NewProp_Language = { "Language", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebUserStats_eventGetPlayerAchievements_Parms, Language), METADATA_PARAMS(Z_Construct_UFunction_UWebUserStats_GetPlayerAchievements_Statics::NewProp_Language_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebUserStats_GetPlayerAchievements_Statics::NewProp_Language_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebUserStats_GetPlayerAchievements_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebUserStats_GetPlayerAchievements_Statics::NewProp_Callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebUserStats_GetPlayerAchievements_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebUserStats_GetPlayerAchievements_Statics::NewProp_SteamID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebUserStats_GetPlayerAchievements_Statics::NewProp_AppID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebUserStats_GetPlayerAchievements_Statics::NewProp_Language,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebUserStats_GetPlayerAchievements_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WebUserStats.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebUserStats_GetPlayerAchievements_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebUserStats, nullptr, "GetPlayerAchievements", nullptr, nullptr, sizeof(WebUserStats_eventGetPlayerAchievements_Parms), Z_Construct_UFunction_UWebUserStats_GetPlayerAchievements_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebUserStats_GetPlayerAchievements_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebUserStats_GetPlayerAchievements_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebUserStats_GetPlayerAchievements_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebUserStats_GetPlayerAchievements()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebUserStats_GetPlayerAchievements_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebUserStats_GetSchemaForGame_Statics
	{
		struct WebUserStats_eventGetSchemaForGame_Parms
		{
			FScriptDelegate Callback;
			FString Key;
			FString SteamID;
			int32 AppID;
			FString Language;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_Callback;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteamID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SteamID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AppID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Language_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Language;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebUserStats_GetSchemaForGame_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebUserStats_GetSchemaForGame_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebUserStats_eventGetSchemaForGame_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebUserStats_GetSchemaForGame_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebUserStats_GetSchemaForGame_Statics::NewProp_Callback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebUserStats_GetSchemaForGame_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebUserStats_GetSchemaForGame_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebUserStats_eventGetSchemaForGame_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UWebUserStats_GetSchemaForGame_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebUserStats_GetSchemaForGame_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebUserStats_GetSchemaForGame_Statics::NewProp_SteamID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebUserStats_GetSchemaForGame_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebUserStats_eventGetSchemaForGame_Parms, SteamID), METADATA_PARAMS(Z_Construct_UFunction_UWebUserStats_GetSchemaForGame_Statics::NewProp_SteamID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebUserStats_GetSchemaForGame_Statics::NewProp_SteamID_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebUserStats_GetSchemaForGame_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebUserStats_eventGetSchemaForGame_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebUserStats_GetSchemaForGame_Statics::NewProp_Language_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebUserStats_GetSchemaForGame_Statics::NewProp_Language = { "Language", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebUserStats_eventGetSchemaForGame_Parms, Language), METADATA_PARAMS(Z_Construct_UFunction_UWebUserStats_GetSchemaForGame_Statics::NewProp_Language_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebUserStats_GetSchemaForGame_Statics::NewProp_Language_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebUserStats_GetSchemaForGame_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebUserStats_GetSchemaForGame_Statics::NewProp_Callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebUserStats_GetSchemaForGame_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebUserStats_GetSchemaForGame_Statics::NewProp_SteamID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebUserStats_GetSchemaForGame_Statics::NewProp_AppID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebUserStats_GetSchemaForGame_Statics::NewProp_Language,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebUserStats_GetSchemaForGame_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WebUserStats.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebUserStats_GetSchemaForGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebUserStats, nullptr, "GetSchemaForGame", nullptr, nullptr, sizeof(WebUserStats_eventGetSchemaForGame_Parms), Z_Construct_UFunction_UWebUserStats_GetSchemaForGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebUserStats_GetSchemaForGame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebUserStats_GetSchemaForGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebUserStats_GetSchemaForGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebUserStats_GetSchemaForGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebUserStats_GetSchemaForGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebUserStats_GetUserStatsForGame_Statics
	{
		struct WebUserStats_eventGetUserStatsForGame_Parms
		{
			FScriptDelegate Callback;
			FString Key;
			FString SteamID;
			int32 AppID;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_Callback;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteamID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SteamID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AppID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebUserStats_GetUserStatsForGame_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebUserStats_GetUserStatsForGame_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebUserStats_eventGetUserStatsForGame_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebUserStats_GetUserStatsForGame_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebUserStats_GetUserStatsForGame_Statics::NewProp_Callback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebUserStats_GetUserStatsForGame_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebUserStats_GetUserStatsForGame_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebUserStats_eventGetUserStatsForGame_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UWebUserStats_GetUserStatsForGame_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebUserStats_GetUserStatsForGame_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebUserStats_GetUserStatsForGame_Statics::NewProp_SteamID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebUserStats_GetUserStatsForGame_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebUserStats_eventGetUserStatsForGame_Parms, SteamID), METADATA_PARAMS(Z_Construct_UFunction_UWebUserStats_GetUserStatsForGame_Statics::NewProp_SteamID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebUserStats_GetUserStatsForGame_Statics::NewProp_SteamID_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebUserStats_GetUserStatsForGame_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebUserStats_eventGetUserStatsForGame_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebUserStats_GetUserStatsForGame_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebUserStats_GetUserStatsForGame_Statics::NewProp_Callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebUserStats_GetUserStatsForGame_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebUserStats_GetUserStatsForGame_Statics::NewProp_SteamID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebUserStats_GetUserStatsForGame_Statics::NewProp_AppID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebUserStats_GetUserStatsForGame_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WebUserStats.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebUserStats_GetUserStatsForGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebUserStats, nullptr, "GetUserStatsForGame", nullptr, nullptr, sizeof(WebUserStats_eventGetUserStatsForGame_Parms), Z_Construct_UFunction_UWebUserStats_GetUserStatsForGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebUserStats_GetUserStatsForGame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebUserStats_GetUserStatsForGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebUserStats_GetUserStatsForGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebUserStats_GetUserStatsForGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebUserStats_GetUserStatsForGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebUserStats_SetUserStatsForGame_Statics
	{
		struct WebUserStats_eventSetUserStatsForGame_Parms
		{
			FScriptDelegate Callback;
			FString Key;
			FString SteamID;
			int32 AppID;
			TArray<FString> Names;
			TArray<int32> Values;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_Callback;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteamID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SteamID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AppID;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Names_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Names;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Values_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Values;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebUserStats_SetUserStatsForGame_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebUserStats_SetUserStatsForGame_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebUserStats_eventSetUserStatsForGame_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebUserStats_SetUserStatsForGame_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebUserStats_SetUserStatsForGame_Statics::NewProp_Callback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebUserStats_SetUserStatsForGame_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebUserStats_SetUserStatsForGame_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebUserStats_eventSetUserStatsForGame_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UWebUserStats_SetUserStatsForGame_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebUserStats_SetUserStatsForGame_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebUserStats_SetUserStatsForGame_Statics::NewProp_SteamID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebUserStats_SetUserStatsForGame_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebUserStats_eventSetUserStatsForGame_Parms, SteamID), METADATA_PARAMS(Z_Construct_UFunction_UWebUserStats_SetUserStatsForGame_Statics::NewProp_SteamID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebUserStats_SetUserStatsForGame_Statics::NewProp_SteamID_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebUserStats_SetUserStatsForGame_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebUserStats_eventSetUserStatsForGame_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebUserStats_SetUserStatsForGame_Statics::NewProp_Names_Inner = { "Names", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWebUserStats_SetUserStatsForGame_Statics::NewProp_Names = { "Names", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebUserStats_eventSetUserStatsForGame_Parms, Names), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebUserStats_SetUserStatsForGame_Statics::NewProp_Values_Inner = { "Values", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWebUserStats_SetUserStatsForGame_Statics::NewProp_Values = { "Values", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebUserStats_eventSetUserStatsForGame_Parms, Values), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebUserStats_SetUserStatsForGame_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebUserStats_SetUserStatsForGame_Statics::NewProp_Callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebUserStats_SetUserStatsForGame_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebUserStats_SetUserStatsForGame_Statics::NewProp_SteamID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebUserStats_SetUserStatsForGame_Statics::NewProp_AppID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebUserStats_SetUserStatsForGame_Statics::NewProp_Names_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebUserStats_SetUserStatsForGame_Statics::NewProp_Names,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebUserStats_SetUserStatsForGame_Statics::NewProp_Values_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebUserStats_SetUserStatsForGame_Statics::NewProp_Values,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebUserStats_SetUserStatsForGame_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WebUserStats.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebUserStats_SetUserStatsForGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebUserStats, nullptr, "SetUserStatsForGame", nullptr, nullptr, sizeof(WebUserStats_eventSetUserStatsForGame_Parms), Z_Construct_UFunction_UWebUserStats_SetUserStatsForGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebUserStats_SetUserStatsForGame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebUserStats_SetUserStatsForGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebUserStats_SetUserStatsForGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebUserStats_SetUserStatsForGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebUserStats_SetUserStatsForGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UWebUserStats_NoRegister()
	{
		return UWebUserStats::StaticClass();
	}
	struct Z_Construct_UClass_UWebUserStats_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWebUserStats_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreWebSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWebUserStats_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWebUserStats_GetGlobalAchievementPercentagesForApp, "GetGlobalAchievementPercentagesForApp" }, // 4058331505
		{ &Z_Construct_UFunction_UWebUserStats_GetGlobalStatsForGame, "GetGlobalStatsForGame" }, // 2179725317
		{ &Z_Construct_UFunction_UWebUserStats_GetNumberOfCurrentPlayers, "GetNumberOfCurrentPlayers" }, // 2777787934
		{ &Z_Construct_UFunction_UWebUserStats_GetPlayerAchievements, "GetPlayerAchievements" }, // 2170825735
		{ &Z_Construct_UFunction_UWebUserStats_GetSchemaForGame, "GetSchemaForGame" }, // 1697612211
		{ &Z_Construct_UFunction_UWebUserStats_GetUserStatsForGame, "GetUserStatsForGame" }, // 576345246
		{ &Z_Construct_UFunction_UWebUserStats_SetUserStatsForGame, "SetUserStatsForGame" }, // 136622290
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebUserStats_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "WebUserStats.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/WebUserStats.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWebUserStats_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWebUserStats>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UWebUserStats_Statics::ClassParams = {
		&UWebUserStats::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UWebUserStats_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWebUserStats_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWebUserStats()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UWebUserStats_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWebUserStats, 487966156);
	template<> STEAMCOREWEB_API UClass* StaticClass<UWebUserStats>()
	{
		return UWebUserStats::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWebUserStats(Z_Construct_UClass_UWebUserStats, &UWebUserStats::StaticClass, TEXT("/Script/SteamCoreWeb"), TEXT("UWebUserStats"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWebUserStats);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
