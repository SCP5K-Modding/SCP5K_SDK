// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCoreWeb/Public/WebGameInventory.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWebGameInventory() {}
// Cross Module References
	STEAMCOREWEB_API UClass* Z_Construct_UClass_UWebGameInventory_NoRegister();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_UWebGameInventory();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebSubsystem();
	UPackage* Z_Construct_UPackage__Script_SteamCoreWeb();
	STEAMCOREWEB_API UFunction* Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UWebGameInventory::execGetHistoryCommandDetails)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
		P_GET_PROPERTY(FStrProperty,Z_Param_SteamID);
		P_GET_PROPERTY(FStrProperty,Z_Param_Command);
		P_GET_PROPERTY(FStrProperty,Z_Param_contextID);
		P_GET_PROPERTY(FStrProperty,Z_Param_arguments);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetHistoryCommandDetails(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_AppID,Z_Param_SteamID,Z_Param_Command,Z_Param_contextID,Z_Param_arguments);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebGameInventory::execGetUserHistory)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
		P_GET_PROPERTY(FStrProperty,Z_Param_SteamID);
		P_GET_PROPERTY(FStrProperty,Z_Param_contextID);
		P_GET_PROPERTY(FIntProperty,Z_Param_StartTime);
		P_GET_PROPERTY(FIntProperty,Z_Param_EndTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetUserHistory(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_AppID,Z_Param_SteamID,Z_Param_contextID,Z_Param_StartTime,Z_Param_EndTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebGameInventory::execHistoryExecuteCommands)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
		P_GET_PROPERTY(FStrProperty,Z_Param_SteamID);
		P_GET_PROPERTY(FStrProperty,Z_Param_contextID);
		P_GET_PROPERTY(FIntProperty,Z_Param_ActorId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HistoryExecuteCommands(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_AppID,Z_Param_SteamID,Z_Param_contextID,Z_Param_ActorId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebGameInventory::execSupportGetAssetHistory)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
		P_GET_PROPERTY(FStrProperty,Z_Param_AssetID);
		P_GET_PROPERTY(FStrProperty,Z_Param_contextID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SupportGetAssetHistory(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_AppID,Z_Param_AssetID,Z_Param_contextID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebGameInventory::execUpdateItemDefs)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateItemDefs();
		P_NATIVE_END;
	}
	void UWebGameInventory::StaticRegisterNativesUWebGameInventory()
	{
		UClass* Class = UWebGameInventory::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetHistoryCommandDetails", &UWebGameInventory::execGetHistoryCommandDetails },
			{ "GetUserHistory", &UWebGameInventory::execGetUserHistory },
			{ "HistoryExecuteCommands", &UWebGameInventory::execHistoryExecuteCommands },
			{ "SupportGetAssetHistory", &UWebGameInventory::execSupportGetAssetHistory },
			{ "UpdateItemDefs", &UWebGameInventory::execUpdateItemDefs },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWebGameInventory_GetHistoryCommandDetails_Statics
	{
		struct WebGameInventory_eventGetHistoryCommandDetails_Parms
		{
			FScriptDelegate Callback;
			FString Key;
			int32 AppID;
			FString SteamID;
			FString Command;
			FString contextID;
			FString arguments;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteamID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SteamID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Command_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Command;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_contextID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_contextID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_arguments_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_arguments;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebGameInventory_GetHistoryCommandDetails_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebGameInventory_GetHistoryCommandDetails_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebGameInventory_eventGetHistoryCommandDetails_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebGameInventory_GetHistoryCommandDetails_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameInventory_GetHistoryCommandDetails_Statics::NewProp_Callback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebGameInventory_GetHistoryCommandDetails_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebGameInventory_GetHistoryCommandDetails_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebGameInventory_eventGetHistoryCommandDetails_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UWebGameInventory_GetHistoryCommandDetails_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameInventory_GetHistoryCommandDetails_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebGameInventory_GetHistoryCommandDetails_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebGameInventory_eventGetHistoryCommandDetails_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebGameInventory_GetHistoryCommandDetails_Statics::NewProp_SteamID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebGameInventory_GetHistoryCommandDetails_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebGameInventory_eventGetHistoryCommandDetails_Parms, SteamID), METADATA_PARAMS(Z_Construct_UFunction_UWebGameInventory_GetHistoryCommandDetails_Statics::NewProp_SteamID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameInventory_GetHistoryCommandDetails_Statics::NewProp_SteamID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebGameInventory_GetHistoryCommandDetails_Statics::NewProp_Command_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebGameInventory_GetHistoryCommandDetails_Statics::NewProp_Command = { "Command", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebGameInventory_eventGetHistoryCommandDetails_Parms, Command), METADATA_PARAMS(Z_Construct_UFunction_UWebGameInventory_GetHistoryCommandDetails_Statics::NewProp_Command_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameInventory_GetHistoryCommandDetails_Statics::NewProp_Command_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebGameInventory_GetHistoryCommandDetails_Statics::NewProp_contextID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebGameInventory_GetHistoryCommandDetails_Statics::NewProp_contextID = { "contextID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebGameInventory_eventGetHistoryCommandDetails_Parms, contextID), METADATA_PARAMS(Z_Construct_UFunction_UWebGameInventory_GetHistoryCommandDetails_Statics::NewProp_contextID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameInventory_GetHistoryCommandDetails_Statics::NewProp_contextID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebGameInventory_GetHistoryCommandDetails_Statics::NewProp_arguments_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebGameInventory_GetHistoryCommandDetails_Statics::NewProp_arguments = { "arguments", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebGameInventory_eventGetHistoryCommandDetails_Parms, arguments), METADATA_PARAMS(Z_Construct_UFunction_UWebGameInventory_GetHistoryCommandDetails_Statics::NewProp_arguments_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameInventory_GetHistoryCommandDetails_Statics::NewProp_arguments_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebGameInventory_GetHistoryCommandDetails_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameInventory_GetHistoryCommandDetails_Statics::NewProp_Callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameInventory_GetHistoryCommandDetails_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameInventory_GetHistoryCommandDetails_Statics::NewProp_AppID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameInventory_GetHistoryCommandDetails_Statics::NewProp_SteamID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameInventory_GetHistoryCommandDetails_Statics::NewProp_Command,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameInventory_GetHistoryCommandDetails_Statics::NewProp_contextID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameInventory_GetHistoryCommandDetails_Statics::NewProp_arguments,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebGameInventory_GetHistoryCommandDetails_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WebGameInventory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebGameInventory_GetHistoryCommandDetails_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebGameInventory, nullptr, "GetHistoryCommandDetails", nullptr, nullptr, sizeof(WebGameInventory_eventGetHistoryCommandDetails_Parms), Z_Construct_UFunction_UWebGameInventory_GetHistoryCommandDetails_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameInventory_GetHistoryCommandDetails_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebGameInventory_GetHistoryCommandDetails_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameInventory_GetHistoryCommandDetails_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebGameInventory_GetHistoryCommandDetails()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebGameInventory_GetHistoryCommandDetails_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebGameInventory_GetUserHistory_Statics
	{
		struct WebGameInventory_eventGetUserHistory_Parms
		{
			FScriptDelegate Callback;
			FString Key;
			int32 AppID;
			FString SteamID;
			FString contextID;
			int32 StartTime;
			int32 EndTime;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteamID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SteamID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_contextID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_contextID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StartTime;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_EndTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebGameInventory_GetUserHistory_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebGameInventory_GetUserHistory_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebGameInventory_eventGetUserHistory_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebGameInventory_GetUserHistory_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameInventory_GetUserHistory_Statics::NewProp_Callback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebGameInventory_GetUserHistory_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebGameInventory_GetUserHistory_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebGameInventory_eventGetUserHistory_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UWebGameInventory_GetUserHistory_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameInventory_GetUserHistory_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebGameInventory_GetUserHistory_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebGameInventory_eventGetUserHistory_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebGameInventory_GetUserHistory_Statics::NewProp_SteamID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebGameInventory_GetUserHistory_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebGameInventory_eventGetUserHistory_Parms, SteamID), METADATA_PARAMS(Z_Construct_UFunction_UWebGameInventory_GetUserHistory_Statics::NewProp_SteamID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameInventory_GetUserHistory_Statics::NewProp_SteamID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebGameInventory_GetUserHistory_Statics::NewProp_contextID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebGameInventory_GetUserHistory_Statics::NewProp_contextID = { "contextID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebGameInventory_eventGetUserHistory_Parms, contextID), METADATA_PARAMS(Z_Construct_UFunction_UWebGameInventory_GetUserHistory_Statics::NewProp_contextID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameInventory_GetUserHistory_Statics::NewProp_contextID_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebGameInventory_GetUserHistory_Statics::NewProp_StartTime = { "StartTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebGameInventory_eventGetUserHistory_Parms, StartTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebGameInventory_GetUserHistory_Statics::NewProp_EndTime = { "EndTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebGameInventory_eventGetUserHistory_Parms, EndTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebGameInventory_GetUserHistory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameInventory_GetUserHistory_Statics::NewProp_Callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameInventory_GetUserHistory_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameInventory_GetUserHistory_Statics::NewProp_AppID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameInventory_GetUserHistory_Statics::NewProp_SteamID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameInventory_GetUserHistory_Statics::NewProp_contextID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameInventory_GetUserHistory_Statics::NewProp_StartTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameInventory_GetUserHistory_Statics::NewProp_EndTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebGameInventory_GetUserHistory_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WebGameInventory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebGameInventory_GetUserHistory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebGameInventory, nullptr, "GetUserHistory", nullptr, nullptr, sizeof(WebGameInventory_eventGetUserHistory_Parms), Z_Construct_UFunction_UWebGameInventory_GetUserHistory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameInventory_GetUserHistory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebGameInventory_GetUserHistory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameInventory_GetUserHistory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebGameInventory_GetUserHistory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebGameInventory_GetUserHistory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebGameInventory_HistoryExecuteCommands_Statics
	{
		struct WebGameInventory_eventHistoryExecuteCommands_Parms
		{
			FScriptDelegate Callback;
			FString Key;
			int32 AppID;
			FString SteamID;
			FString contextID;
			int32 ActorId;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteamID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SteamID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_contextID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_contextID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ActorId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebGameInventory_HistoryExecuteCommands_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebGameInventory_HistoryExecuteCommands_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebGameInventory_eventHistoryExecuteCommands_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebGameInventory_HistoryExecuteCommands_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameInventory_HistoryExecuteCommands_Statics::NewProp_Callback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebGameInventory_HistoryExecuteCommands_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebGameInventory_HistoryExecuteCommands_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebGameInventory_eventHistoryExecuteCommands_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UWebGameInventory_HistoryExecuteCommands_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameInventory_HistoryExecuteCommands_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebGameInventory_HistoryExecuteCommands_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebGameInventory_eventHistoryExecuteCommands_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebGameInventory_HistoryExecuteCommands_Statics::NewProp_SteamID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebGameInventory_HistoryExecuteCommands_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebGameInventory_eventHistoryExecuteCommands_Parms, SteamID), METADATA_PARAMS(Z_Construct_UFunction_UWebGameInventory_HistoryExecuteCommands_Statics::NewProp_SteamID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameInventory_HistoryExecuteCommands_Statics::NewProp_SteamID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebGameInventory_HistoryExecuteCommands_Statics::NewProp_contextID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebGameInventory_HistoryExecuteCommands_Statics::NewProp_contextID = { "contextID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebGameInventory_eventHistoryExecuteCommands_Parms, contextID), METADATA_PARAMS(Z_Construct_UFunction_UWebGameInventory_HistoryExecuteCommands_Statics::NewProp_contextID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameInventory_HistoryExecuteCommands_Statics::NewProp_contextID_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebGameInventory_HistoryExecuteCommands_Statics::NewProp_ActorId = { "ActorId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebGameInventory_eventHistoryExecuteCommands_Parms, ActorId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebGameInventory_HistoryExecuteCommands_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameInventory_HistoryExecuteCommands_Statics::NewProp_Callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameInventory_HistoryExecuteCommands_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameInventory_HistoryExecuteCommands_Statics::NewProp_AppID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameInventory_HistoryExecuteCommands_Statics::NewProp_SteamID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameInventory_HistoryExecuteCommands_Statics::NewProp_contextID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameInventory_HistoryExecuteCommands_Statics::NewProp_ActorId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebGameInventory_HistoryExecuteCommands_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WebGameInventory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebGameInventory_HistoryExecuteCommands_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebGameInventory, nullptr, "HistoryExecuteCommands", nullptr, nullptr, sizeof(WebGameInventory_eventHistoryExecuteCommands_Parms), Z_Construct_UFunction_UWebGameInventory_HistoryExecuteCommands_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameInventory_HistoryExecuteCommands_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebGameInventory_HistoryExecuteCommands_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameInventory_HistoryExecuteCommands_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebGameInventory_HistoryExecuteCommands()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebGameInventory_HistoryExecuteCommands_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebGameInventory_SupportGetAssetHistory_Statics
	{
		struct WebGameInventory_eventSupportGetAssetHistory_Parms
		{
			FScriptDelegate Callback;
			FString Key;
			int32 AppID;
			FString AssetID;
			FString contextID;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AssetID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_contextID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_contextID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebGameInventory_SupportGetAssetHistory_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebGameInventory_SupportGetAssetHistory_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebGameInventory_eventSupportGetAssetHistory_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebGameInventory_SupportGetAssetHistory_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameInventory_SupportGetAssetHistory_Statics::NewProp_Callback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebGameInventory_SupportGetAssetHistory_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebGameInventory_SupportGetAssetHistory_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebGameInventory_eventSupportGetAssetHistory_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UWebGameInventory_SupportGetAssetHistory_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameInventory_SupportGetAssetHistory_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebGameInventory_SupportGetAssetHistory_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebGameInventory_eventSupportGetAssetHistory_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebGameInventory_SupportGetAssetHistory_Statics::NewProp_AssetID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebGameInventory_SupportGetAssetHistory_Statics::NewProp_AssetID = { "AssetID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebGameInventory_eventSupportGetAssetHistory_Parms, AssetID), METADATA_PARAMS(Z_Construct_UFunction_UWebGameInventory_SupportGetAssetHistory_Statics::NewProp_AssetID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameInventory_SupportGetAssetHistory_Statics::NewProp_AssetID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebGameInventory_SupportGetAssetHistory_Statics::NewProp_contextID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebGameInventory_SupportGetAssetHistory_Statics::NewProp_contextID = { "contextID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebGameInventory_eventSupportGetAssetHistory_Parms, contextID), METADATA_PARAMS(Z_Construct_UFunction_UWebGameInventory_SupportGetAssetHistory_Statics::NewProp_contextID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameInventory_SupportGetAssetHistory_Statics::NewProp_contextID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebGameInventory_SupportGetAssetHistory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameInventory_SupportGetAssetHistory_Statics::NewProp_Callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameInventory_SupportGetAssetHistory_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameInventory_SupportGetAssetHistory_Statics::NewProp_AppID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameInventory_SupportGetAssetHistory_Statics::NewProp_AssetID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameInventory_SupportGetAssetHistory_Statics::NewProp_contextID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebGameInventory_SupportGetAssetHistory_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WebGameInventory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebGameInventory_SupportGetAssetHistory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebGameInventory, nullptr, "SupportGetAssetHistory", nullptr, nullptr, sizeof(WebGameInventory_eventSupportGetAssetHistory_Parms), Z_Construct_UFunction_UWebGameInventory_SupportGetAssetHistory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameInventory_SupportGetAssetHistory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebGameInventory_SupportGetAssetHistory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameInventory_SupportGetAssetHistory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebGameInventory_SupportGetAssetHistory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebGameInventory_SupportGetAssetHistory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebGameInventory_UpdateItemDefs_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebGameInventory_UpdateItemDefs_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WebGameInventory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebGameInventory_UpdateItemDefs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebGameInventory, nullptr, "UpdateItemDefs", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebGameInventory_UpdateItemDefs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameInventory_UpdateItemDefs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebGameInventory_UpdateItemDefs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebGameInventory_UpdateItemDefs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UWebGameInventory_NoRegister()
	{
		return UWebGameInventory::StaticClass();
	}
	struct Z_Construct_UClass_UWebGameInventory_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWebGameInventory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreWebSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWebGameInventory_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWebGameInventory_GetHistoryCommandDetails, "GetHistoryCommandDetails" }, // 1973910313
		{ &Z_Construct_UFunction_UWebGameInventory_GetUserHistory, "GetUserHistory" }, // 4092880685
		{ &Z_Construct_UFunction_UWebGameInventory_HistoryExecuteCommands, "HistoryExecuteCommands" }, // 472457823
		{ &Z_Construct_UFunction_UWebGameInventory_SupportGetAssetHistory, "SupportGetAssetHistory" }, // 688814179
		{ &Z_Construct_UFunction_UWebGameInventory_UpdateItemDefs, "UpdateItemDefs" }, // 3505807475
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebGameInventory_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "WebGameInventory.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/WebGameInventory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWebGameInventory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWebGameInventory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UWebGameInventory_Statics::ClassParams = {
		&UWebGameInventory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UWebGameInventory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWebGameInventory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWebGameInventory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UWebGameInventory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWebGameInventory, 1753962382);
	template<> STEAMCOREWEB_API UClass* StaticClass<UWebGameInventory>()
	{
		return UWebGameInventory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWebGameInventory(Z_Construct_UClass_UWebGameInventory, &UWebGameInventory::StaticClass, TEXT("/Script/SteamCoreWeb"), TEXT("UWebGameInventory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWebGameInventory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
