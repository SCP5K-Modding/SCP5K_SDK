// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCoreWeb/Public/WebLeaderboards.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWebLeaderboards() {}
// Cross Module References
	STEAMCOREWEB_API UClass* Z_Construct_UClass_UWebLeaderboards_NoRegister();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_UWebLeaderboards();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebSubsystem();
	UPackage* Z_Construct_UPackage__Script_SteamCoreWeb();
	STEAMCOREWEB_API UFunction* Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UWebLeaderboards::execDeleteLeaderboard)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DeleteLeaderboard(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_AppID,Z_Param_Name);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebLeaderboards::execFindOrCreateLeaderboard)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_GET_PROPERTY(FStrProperty,Z_Param_SortMethod);
		P_GET_PROPERTY(FStrProperty,Z_Param_DisplayType);
		P_GET_UBOOL(Z_Param_bCreateIfNotFound);
		P_GET_UBOOL(Z_Param_bOnlyTrustedWrites);
		P_GET_UBOOL(Z_Param_bOnlyFriendsReads);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FindOrCreateLeaderboard(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_AppID,Z_Param_Name,Z_Param_SortMethod,Z_Param_DisplayType,Z_Param_bCreateIfNotFound,Z_Param_bOnlyTrustedWrites,Z_Param_bOnlyFriendsReads);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebLeaderboards::execGetLeaderboardEntries)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
		P_GET_PROPERTY(FIntProperty,Z_Param_RangeStart);
		P_GET_PROPERTY(FIntProperty,Z_Param_RangeEnd);
		P_GET_PROPERTY(FIntProperty,Z_Param_leaderboardID);
		P_GET_PROPERTY(FIntProperty,Z_Param_DataRequest);
		P_GET_PROPERTY(FStrProperty,Z_Param_SteamID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetLeaderboardEntries(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_AppID,Z_Param_RangeStart,Z_Param_RangeEnd,Z_Param_leaderboardID,Z_Param_DataRequest,Z_Param_SteamID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebLeaderboards::execGetLeaderboardsForGame)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetLeaderboardsForGame(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_AppID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebLeaderboards::execResetLeaderboard)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
		P_GET_PROPERTY(FIntProperty,Z_Param_leaderbordID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetLeaderboard(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_AppID,Z_Param_leaderbordID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebLeaderboards::execSetLeaderboardScore)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
		P_GET_PROPERTY(FIntProperty,Z_Param_leaderbordID);
		P_GET_PROPERTY(FStrProperty,Z_Param_SteamID);
		P_GET_PROPERTY(FIntProperty,Z_Param_Score);
		P_GET_TARRAY(uint8,Z_Param_Details);
		P_GET_PROPERTY(FStrProperty,Z_Param_scoreMethod);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLeaderboardScore(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_AppID,Z_Param_leaderbordID,Z_Param_SteamID,Z_Param_Score,Z_Param_Details,Z_Param_scoreMethod);
		P_NATIVE_END;
	}
	void UWebLeaderboards::StaticRegisterNativesUWebLeaderboards()
	{
		UClass* Class = UWebLeaderboards::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DeleteLeaderboard", &UWebLeaderboards::execDeleteLeaderboard },
			{ "FindOrCreateLeaderboard", &UWebLeaderboards::execFindOrCreateLeaderboard },
			{ "GetLeaderboardEntries", &UWebLeaderboards::execGetLeaderboardEntries },
			{ "GetLeaderboardsForGame", &UWebLeaderboards::execGetLeaderboardsForGame },
			{ "ResetLeaderboard", &UWebLeaderboards::execResetLeaderboard },
			{ "SetLeaderboardScore", &UWebLeaderboards::execSetLeaderboardScore },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWebLeaderboards_DeleteLeaderboard_Statics
	{
		struct WebLeaderboards_eventDeleteLeaderboard_Parms
		{
			FScriptDelegate Callback;
			FString Key;
			int32 AppID;
			FString Name;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_Callback;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AppID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebLeaderboards_DeleteLeaderboard_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebLeaderboards_DeleteLeaderboard_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebLeaderboards_eventDeleteLeaderboard_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebLeaderboards_DeleteLeaderboard_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebLeaderboards_DeleteLeaderboard_Statics::NewProp_Callback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebLeaderboards_DeleteLeaderboard_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebLeaderboards_DeleteLeaderboard_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebLeaderboards_eventDeleteLeaderboard_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UWebLeaderboards_DeleteLeaderboard_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebLeaderboards_DeleteLeaderboard_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebLeaderboards_DeleteLeaderboard_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebLeaderboards_eventDeleteLeaderboard_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebLeaderboards_DeleteLeaderboard_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebLeaderboards_DeleteLeaderboard_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebLeaderboards_eventDeleteLeaderboard_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UWebLeaderboards_DeleteLeaderboard_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebLeaderboards_DeleteLeaderboard_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebLeaderboards_DeleteLeaderboard_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebLeaderboards_DeleteLeaderboard_Statics::NewProp_Callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebLeaderboards_DeleteLeaderboard_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebLeaderboards_DeleteLeaderboard_Statics::NewProp_AppID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebLeaderboards_DeleteLeaderboard_Statics::NewProp_Name,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebLeaderboards_DeleteLeaderboard_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WebLeaderboards.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebLeaderboards_DeleteLeaderboard_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebLeaderboards, nullptr, "DeleteLeaderboard", nullptr, nullptr, sizeof(WebLeaderboards_eventDeleteLeaderboard_Parms), Z_Construct_UFunction_UWebLeaderboards_DeleteLeaderboard_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebLeaderboards_DeleteLeaderboard_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebLeaderboards_DeleteLeaderboard_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebLeaderboards_DeleteLeaderboard_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebLeaderboards_DeleteLeaderboard()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebLeaderboards_DeleteLeaderboard_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebLeaderboards_FindOrCreateLeaderboard_Statics
	{
		struct WebLeaderboards_eventFindOrCreateLeaderboard_Parms
		{
			FScriptDelegate Callback;
			FString Key;
			int32 AppID;
			FString Name;
			FString SortMethod;
			FString DisplayType;
			bool bCreateIfNotFound;
			bool bOnlyTrustedWrites;
			bool bOnlyFriendsReads;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_Callback;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AppID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SortMethod_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SortMethod;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DisplayType;
		static void NewProp_bCreateIfNotFound_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCreateIfNotFound;
		static void NewProp_bOnlyTrustedWrites_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOnlyTrustedWrites;
		static void NewProp_bOnlyFriendsReads_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOnlyFriendsReads;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebLeaderboards_FindOrCreateLeaderboard_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebLeaderboards_FindOrCreateLeaderboard_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebLeaderboards_eventFindOrCreateLeaderboard_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebLeaderboards_FindOrCreateLeaderboard_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebLeaderboards_FindOrCreateLeaderboard_Statics::NewProp_Callback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebLeaderboards_FindOrCreateLeaderboard_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebLeaderboards_FindOrCreateLeaderboard_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebLeaderboards_eventFindOrCreateLeaderboard_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UWebLeaderboards_FindOrCreateLeaderboard_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebLeaderboards_FindOrCreateLeaderboard_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebLeaderboards_FindOrCreateLeaderboard_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebLeaderboards_eventFindOrCreateLeaderboard_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebLeaderboards_FindOrCreateLeaderboard_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebLeaderboards_FindOrCreateLeaderboard_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebLeaderboards_eventFindOrCreateLeaderboard_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UWebLeaderboards_FindOrCreateLeaderboard_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebLeaderboards_FindOrCreateLeaderboard_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebLeaderboards_FindOrCreateLeaderboard_Statics::NewProp_SortMethod_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebLeaderboards_FindOrCreateLeaderboard_Statics::NewProp_SortMethod = { "SortMethod", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebLeaderboards_eventFindOrCreateLeaderboard_Parms, SortMethod), METADATA_PARAMS(Z_Construct_UFunction_UWebLeaderboards_FindOrCreateLeaderboard_Statics::NewProp_SortMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebLeaderboards_FindOrCreateLeaderboard_Statics::NewProp_SortMethod_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebLeaderboards_FindOrCreateLeaderboard_Statics::NewProp_DisplayType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebLeaderboards_FindOrCreateLeaderboard_Statics::NewProp_DisplayType = { "DisplayType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebLeaderboards_eventFindOrCreateLeaderboard_Parms, DisplayType), METADATA_PARAMS(Z_Construct_UFunction_UWebLeaderboards_FindOrCreateLeaderboard_Statics::NewProp_DisplayType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebLeaderboards_FindOrCreateLeaderboard_Statics::NewProp_DisplayType_MetaData)) };
	void Z_Construct_UFunction_UWebLeaderboards_FindOrCreateLeaderboard_Statics::NewProp_bCreateIfNotFound_SetBit(void* Obj)
	{
		((WebLeaderboards_eventFindOrCreateLeaderboard_Parms*)Obj)->bCreateIfNotFound = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWebLeaderboards_FindOrCreateLeaderboard_Statics::NewProp_bCreateIfNotFound = { "bCreateIfNotFound", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WebLeaderboards_eventFindOrCreateLeaderboard_Parms), &Z_Construct_UFunction_UWebLeaderboards_FindOrCreateLeaderboard_Statics::NewProp_bCreateIfNotFound_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UWebLeaderboards_FindOrCreateLeaderboard_Statics::NewProp_bOnlyTrustedWrites_SetBit(void* Obj)
	{
		((WebLeaderboards_eventFindOrCreateLeaderboard_Parms*)Obj)->bOnlyTrustedWrites = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWebLeaderboards_FindOrCreateLeaderboard_Statics::NewProp_bOnlyTrustedWrites = { "bOnlyTrustedWrites", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WebLeaderboards_eventFindOrCreateLeaderboard_Parms), &Z_Construct_UFunction_UWebLeaderboards_FindOrCreateLeaderboard_Statics::NewProp_bOnlyTrustedWrites_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UWebLeaderboards_FindOrCreateLeaderboard_Statics::NewProp_bOnlyFriendsReads_SetBit(void* Obj)
	{
		((WebLeaderboards_eventFindOrCreateLeaderboard_Parms*)Obj)->bOnlyFriendsReads = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWebLeaderboards_FindOrCreateLeaderboard_Statics::NewProp_bOnlyFriendsReads = { "bOnlyFriendsReads", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WebLeaderboards_eventFindOrCreateLeaderboard_Parms), &Z_Construct_UFunction_UWebLeaderboards_FindOrCreateLeaderboard_Statics::NewProp_bOnlyFriendsReads_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebLeaderboards_FindOrCreateLeaderboard_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebLeaderboards_FindOrCreateLeaderboard_Statics::NewProp_Callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebLeaderboards_FindOrCreateLeaderboard_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebLeaderboards_FindOrCreateLeaderboard_Statics::NewProp_AppID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebLeaderboards_FindOrCreateLeaderboard_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebLeaderboards_FindOrCreateLeaderboard_Statics::NewProp_SortMethod,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebLeaderboards_FindOrCreateLeaderboard_Statics::NewProp_DisplayType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebLeaderboards_FindOrCreateLeaderboard_Statics::NewProp_bCreateIfNotFound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebLeaderboards_FindOrCreateLeaderboard_Statics::NewProp_bOnlyTrustedWrites,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebLeaderboards_FindOrCreateLeaderboard_Statics::NewProp_bOnlyFriendsReads,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebLeaderboards_FindOrCreateLeaderboard_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WebLeaderboards.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebLeaderboards_FindOrCreateLeaderboard_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebLeaderboards, nullptr, "FindOrCreateLeaderboard", nullptr, nullptr, sizeof(WebLeaderboards_eventFindOrCreateLeaderboard_Parms), Z_Construct_UFunction_UWebLeaderboards_FindOrCreateLeaderboard_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebLeaderboards_FindOrCreateLeaderboard_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebLeaderboards_FindOrCreateLeaderboard_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebLeaderboards_FindOrCreateLeaderboard_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebLeaderboards_FindOrCreateLeaderboard()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebLeaderboards_FindOrCreateLeaderboard_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebLeaderboards_GetLeaderboardEntries_Statics
	{
		struct WebLeaderboards_eventGetLeaderboardEntries_Parms
		{
			FScriptDelegate Callback;
			FString Key;
			int32 AppID;
			int32 RangeStart;
			int32 RangeEnd;
			int32 leaderboardID;
			int32 DataRequest;
			FString SteamID;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_Callback;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AppID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RangeStart;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RangeEnd;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_leaderboardID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DataRequest;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteamID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SteamID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebLeaderboards_GetLeaderboardEntries_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebLeaderboards_GetLeaderboardEntries_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebLeaderboards_eventGetLeaderboardEntries_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebLeaderboards_GetLeaderboardEntries_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebLeaderboards_GetLeaderboardEntries_Statics::NewProp_Callback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebLeaderboards_GetLeaderboardEntries_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebLeaderboards_GetLeaderboardEntries_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebLeaderboards_eventGetLeaderboardEntries_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UWebLeaderboards_GetLeaderboardEntries_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebLeaderboards_GetLeaderboardEntries_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebLeaderboards_GetLeaderboardEntries_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebLeaderboards_eventGetLeaderboardEntries_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebLeaderboards_GetLeaderboardEntries_Statics::NewProp_RangeStart = { "RangeStart", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebLeaderboards_eventGetLeaderboardEntries_Parms, RangeStart), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebLeaderboards_GetLeaderboardEntries_Statics::NewProp_RangeEnd = { "RangeEnd", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebLeaderboards_eventGetLeaderboardEntries_Parms, RangeEnd), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebLeaderboards_GetLeaderboardEntries_Statics::NewProp_leaderboardID = { "leaderboardID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebLeaderboards_eventGetLeaderboardEntries_Parms, leaderboardID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebLeaderboards_GetLeaderboardEntries_Statics::NewProp_DataRequest = { "DataRequest", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebLeaderboards_eventGetLeaderboardEntries_Parms, DataRequest), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebLeaderboards_GetLeaderboardEntries_Statics::NewProp_SteamID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebLeaderboards_GetLeaderboardEntries_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebLeaderboards_eventGetLeaderboardEntries_Parms, SteamID), METADATA_PARAMS(Z_Construct_UFunction_UWebLeaderboards_GetLeaderboardEntries_Statics::NewProp_SteamID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebLeaderboards_GetLeaderboardEntries_Statics::NewProp_SteamID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebLeaderboards_GetLeaderboardEntries_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebLeaderboards_GetLeaderboardEntries_Statics::NewProp_Callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebLeaderboards_GetLeaderboardEntries_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebLeaderboards_GetLeaderboardEntries_Statics::NewProp_AppID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebLeaderboards_GetLeaderboardEntries_Statics::NewProp_RangeStart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebLeaderboards_GetLeaderboardEntries_Statics::NewProp_RangeEnd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebLeaderboards_GetLeaderboardEntries_Statics::NewProp_leaderboardID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebLeaderboards_GetLeaderboardEntries_Statics::NewProp_DataRequest,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebLeaderboards_GetLeaderboardEntries_Statics::NewProp_SteamID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebLeaderboards_GetLeaderboardEntries_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WebLeaderboards.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebLeaderboards_GetLeaderboardEntries_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebLeaderboards, nullptr, "GetLeaderboardEntries", nullptr, nullptr, sizeof(WebLeaderboards_eventGetLeaderboardEntries_Parms), Z_Construct_UFunction_UWebLeaderboards_GetLeaderboardEntries_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebLeaderboards_GetLeaderboardEntries_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebLeaderboards_GetLeaderboardEntries_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebLeaderboards_GetLeaderboardEntries_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebLeaderboards_GetLeaderboardEntries()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebLeaderboards_GetLeaderboardEntries_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebLeaderboards_GetLeaderboardsForGame_Statics
	{
		struct WebLeaderboards_eventGetLeaderboardsForGame_Parms
		{
			FScriptDelegate Callback;
			FString Key;
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
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AppID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebLeaderboards_GetLeaderboardsForGame_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebLeaderboards_GetLeaderboardsForGame_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebLeaderboards_eventGetLeaderboardsForGame_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebLeaderboards_GetLeaderboardsForGame_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebLeaderboards_GetLeaderboardsForGame_Statics::NewProp_Callback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebLeaderboards_GetLeaderboardsForGame_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebLeaderboards_GetLeaderboardsForGame_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebLeaderboards_eventGetLeaderboardsForGame_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UWebLeaderboards_GetLeaderboardsForGame_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebLeaderboards_GetLeaderboardsForGame_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebLeaderboards_GetLeaderboardsForGame_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebLeaderboards_eventGetLeaderboardsForGame_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebLeaderboards_GetLeaderboardsForGame_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebLeaderboards_GetLeaderboardsForGame_Statics::NewProp_Callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebLeaderboards_GetLeaderboardsForGame_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebLeaderboards_GetLeaderboardsForGame_Statics::NewProp_AppID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebLeaderboards_GetLeaderboardsForGame_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WebLeaderboards.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebLeaderboards_GetLeaderboardsForGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebLeaderboards, nullptr, "GetLeaderboardsForGame", nullptr, nullptr, sizeof(WebLeaderboards_eventGetLeaderboardsForGame_Parms), Z_Construct_UFunction_UWebLeaderboards_GetLeaderboardsForGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebLeaderboards_GetLeaderboardsForGame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebLeaderboards_GetLeaderboardsForGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebLeaderboards_GetLeaderboardsForGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebLeaderboards_GetLeaderboardsForGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebLeaderboards_GetLeaderboardsForGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebLeaderboards_ResetLeaderboard_Statics
	{
		struct WebLeaderboards_eventResetLeaderboard_Parms
		{
			FScriptDelegate Callback;
			FString Key;
			int32 AppID;
			int32 leaderbordID;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_Callback;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AppID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_leaderbordID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebLeaderboards_ResetLeaderboard_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebLeaderboards_ResetLeaderboard_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebLeaderboards_eventResetLeaderboard_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebLeaderboards_ResetLeaderboard_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebLeaderboards_ResetLeaderboard_Statics::NewProp_Callback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebLeaderboards_ResetLeaderboard_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebLeaderboards_ResetLeaderboard_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebLeaderboards_eventResetLeaderboard_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UWebLeaderboards_ResetLeaderboard_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebLeaderboards_ResetLeaderboard_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebLeaderboards_ResetLeaderboard_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebLeaderboards_eventResetLeaderboard_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebLeaderboards_ResetLeaderboard_Statics::NewProp_leaderbordID = { "leaderbordID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebLeaderboards_eventResetLeaderboard_Parms, leaderbordID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebLeaderboards_ResetLeaderboard_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebLeaderboards_ResetLeaderboard_Statics::NewProp_Callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebLeaderboards_ResetLeaderboard_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebLeaderboards_ResetLeaderboard_Statics::NewProp_AppID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebLeaderboards_ResetLeaderboard_Statics::NewProp_leaderbordID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebLeaderboards_ResetLeaderboard_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WebLeaderboards.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebLeaderboards_ResetLeaderboard_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebLeaderboards, nullptr, "ResetLeaderboard", nullptr, nullptr, sizeof(WebLeaderboards_eventResetLeaderboard_Parms), Z_Construct_UFunction_UWebLeaderboards_ResetLeaderboard_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebLeaderboards_ResetLeaderboard_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebLeaderboards_ResetLeaderboard_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebLeaderboards_ResetLeaderboard_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebLeaderboards_ResetLeaderboard()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebLeaderboards_ResetLeaderboard_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebLeaderboards_SetLeaderboardScore_Statics
	{
		struct WebLeaderboards_eventSetLeaderboardScore_Parms
		{
			FScriptDelegate Callback;
			FString Key;
			int32 AppID;
			int32 leaderbordID;
			FString SteamID;
			int32 Score;
			TArray<uint8> Details;
			FString scoreMethod;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_Callback;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AppID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_leaderbordID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteamID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SteamID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Score;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Details_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Details;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_scoreMethod_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_scoreMethod;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebLeaderboards_SetLeaderboardScore_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebLeaderboards_SetLeaderboardScore_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebLeaderboards_eventSetLeaderboardScore_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebLeaderboards_SetLeaderboardScore_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebLeaderboards_SetLeaderboardScore_Statics::NewProp_Callback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebLeaderboards_SetLeaderboardScore_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebLeaderboards_SetLeaderboardScore_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebLeaderboards_eventSetLeaderboardScore_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UWebLeaderboards_SetLeaderboardScore_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebLeaderboards_SetLeaderboardScore_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebLeaderboards_SetLeaderboardScore_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebLeaderboards_eventSetLeaderboardScore_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebLeaderboards_SetLeaderboardScore_Statics::NewProp_leaderbordID = { "leaderbordID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebLeaderboards_eventSetLeaderboardScore_Parms, leaderbordID), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebLeaderboards_SetLeaderboardScore_Statics::NewProp_SteamID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebLeaderboards_SetLeaderboardScore_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebLeaderboards_eventSetLeaderboardScore_Parms, SteamID), METADATA_PARAMS(Z_Construct_UFunction_UWebLeaderboards_SetLeaderboardScore_Statics::NewProp_SteamID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebLeaderboards_SetLeaderboardScore_Statics::NewProp_SteamID_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebLeaderboards_SetLeaderboardScore_Statics::NewProp_Score = { "Score", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebLeaderboards_eventSetLeaderboardScore_Parms, Score), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWebLeaderboards_SetLeaderboardScore_Statics::NewProp_Details_Inner = { "Details", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWebLeaderboards_SetLeaderboardScore_Statics::NewProp_Details = { "Details", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebLeaderboards_eventSetLeaderboardScore_Parms, Details), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebLeaderboards_SetLeaderboardScore_Statics::NewProp_scoreMethod_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebLeaderboards_SetLeaderboardScore_Statics::NewProp_scoreMethod = { "scoreMethod", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebLeaderboards_eventSetLeaderboardScore_Parms, scoreMethod), METADATA_PARAMS(Z_Construct_UFunction_UWebLeaderboards_SetLeaderboardScore_Statics::NewProp_scoreMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebLeaderboards_SetLeaderboardScore_Statics::NewProp_scoreMethod_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebLeaderboards_SetLeaderboardScore_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebLeaderboards_SetLeaderboardScore_Statics::NewProp_Callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebLeaderboards_SetLeaderboardScore_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebLeaderboards_SetLeaderboardScore_Statics::NewProp_AppID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebLeaderboards_SetLeaderboardScore_Statics::NewProp_leaderbordID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebLeaderboards_SetLeaderboardScore_Statics::NewProp_SteamID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebLeaderboards_SetLeaderboardScore_Statics::NewProp_Score,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebLeaderboards_SetLeaderboardScore_Statics::NewProp_Details_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebLeaderboards_SetLeaderboardScore_Statics::NewProp_Details,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebLeaderboards_SetLeaderboardScore_Statics::NewProp_scoreMethod,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebLeaderboards_SetLeaderboardScore_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WebLeaderboards.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebLeaderboards_SetLeaderboardScore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebLeaderboards, nullptr, "SetLeaderboardScore", nullptr, nullptr, sizeof(WebLeaderboards_eventSetLeaderboardScore_Parms), Z_Construct_UFunction_UWebLeaderboards_SetLeaderboardScore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebLeaderboards_SetLeaderboardScore_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebLeaderboards_SetLeaderboardScore_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebLeaderboards_SetLeaderboardScore_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebLeaderboards_SetLeaderboardScore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebLeaderboards_SetLeaderboardScore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UWebLeaderboards_NoRegister()
	{
		return UWebLeaderboards::StaticClass();
	}
	struct Z_Construct_UClass_UWebLeaderboards_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWebLeaderboards_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreWebSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWebLeaderboards_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWebLeaderboards_DeleteLeaderboard, "DeleteLeaderboard" }, // 742446755
		{ &Z_Construct_UFunction_UWebLeaderboards_FindOrCreateLeaderboard, "FindOrCreateLeaderboard" }, // 1908328653
		{ &Z_Construct_UFunction_UWebLeaderboards_GetLeaderboardEntries, "GetLeaderboardEntries" }, // 1762774987
		{ &Z_Construct_UFunction_UWebLeaderboards_GetLeaderboardsForGame, "GetLeaderboardsForGame" }, // 2824637017
		{ &Z_Construct_UFunction_UWebLeaderboards_ResetLeaderboard, "ResetLeaderboard" }, // 1213430842
		{ &Z_Construct_UFunction_UWebLeaderboards_SetLeaderboardScore, "SetLeaderboardScore" }, // 1537654049
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebLeaderboards_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "WebLeaderboards.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/WebLeaderboards.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWebLeaderboards_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWebLeaderboards>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UWebLeaderboards_Statics::ClassParams = {
		&UWebLeaderboards::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UWebLeaderboards_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWebLeaderboards_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWebLeaderboards()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UWebLeaderboards_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWebLeaderboards, 3193306315);
	template<> STEAMCOREWEB_API UClass* StaticClass<UWebLeaderboards>()
	{
		return UWebLeaderboards::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWebLeaderboards(Z_Construct_UClass_UWebLeaderboards, &UWebLeaderboards::StaticClass, TEXT("/Script/SteamCoreWeb"), TEXT("UWebLeaderboards"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWebLeaderboards);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
