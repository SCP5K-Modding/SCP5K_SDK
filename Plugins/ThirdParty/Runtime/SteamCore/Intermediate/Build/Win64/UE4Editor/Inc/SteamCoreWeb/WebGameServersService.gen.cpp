// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCoreWeb/Public/WebGameServersService.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWebGameServersService() {}
// Cross Module References
	STEAMCOREWEB_API UClass* Z_Construct_UClass_UWebGameServersService_NoRegister();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_UWebGameServersService();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebSubsystem();
	UPackage* Z_Construct_UPackage__Script_SteamCoreWeb();
	STEAMCOREWEB_API UFunction* Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UWebGameServersService::execCreateAccount)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
		P_GET_PROPERTY(FStrProperty,Z_Param_memo);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CreateAccount(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_AppID,Z_Param_memo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebGameServersService::execDeleteAccount)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FStrProperty,Z_Param_SteamID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DeleteAccount(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_SteamID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebGameServersService::execGetAccountList)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetAccountList(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebGameServersService::execGetAccountPublicInfo)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FStrProperty,Z_Param_SteamID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetAccountPublicInfo(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_SteamID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebGameServersService::execGetServerIPsBySteamID)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FStrProperty,Z_Param_serverSteamID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetServerIPsBySteamID(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_serverSteamID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebGameServersService::execGetServerSteamIDsByIP)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FStrProperty,Z_Param_ServerIP);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetServerSteamIDsByIP(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_ServerIP);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebGameServersService::execQueryLoginToken)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FStrProperty,Z_Param_loginToken);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->QueryLoginToken(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_loginToken);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebGameServersService::execResetLoginToken)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FStrProperty,Z_Param_SteamID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetLoginToken(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_SteamID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebGameServersService::execSetBanStatus)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FStrProperty,Z_Param_SteamID);
		P_GET_UBOOL(Z_Param_bBanned);
		P_GET_PROPERTY(FIntProperty,Z_Param_banSeconds);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBanStatus(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_SteamID,Z_Param_bBanned,Z_Param_banSeconds);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebGameServersService::execSetMemo)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FStrProperty,Z_Param_SteamID);
		P_GET_PROPERTY(FStrProperty,Z_Param_memo);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMemo(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_SteamID,Z_Param_memo);
		P_NATIVE_END;
	}
	void UWebGameServersService::StaticRegisterNativesUWebGameServersService()
	{
		UClass* Class = UWebGameServersService::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateAccount", &UWebGameServersService::execCreateAccount },
			{ "DeleteAccount", &UWebGameServersService::execDeleteAccount },
			{ "GetAccountList", &UWebGameServersService::execGetAccountList },
			{ "GetAccountPublicInfo", &UWebGameServersService::execGetAccountPublicInfo },
			{ "GetServerIPsBySteamID", &UWebGameServersService::execGetServerIPsBySteamID },
			{ "GetServerSteamIDsByIP", &UWebGameServersService::execGetServerSteamIDsByIP },
			{ "QueryLoginToken", &UWebGameServersService::execQueryLoginToken },
			{ "ResetLoginToken", &UWebGameServersService::execResetLoginToken },
			{ "SetBanStatus", &UWebGameServersService::execSetBanStatus },
			{ "SetMemo", &UWebGameServersService::execSetMemo },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWebGameServersService_CreateAccount_Statics
	{
		struct WebGameServersService_eventCreateAccount_Parms
		{
			FScriptDelegate Callback;
			FString Key;
			int32 AppID;
			FString memo;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_memo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_memo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebGameServersService_CreateAccount_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebGameServersService_CreateAccount_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebGameServersService_eventCreateAccount_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebGameServersService_CreateAccount_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameServersService_CreateAccount_Statics::NewProp_Callback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebGameServersService_CreateAccount_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebGameServersService_CreateAccount_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebGameServersService_eventCreateAccount_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UWebGameServersService_CreateAccount_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameServersService_CreateAccount_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebGameServersService_CreateAccount_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebGameServersService_eventCreateAccount_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebGameServersService_CreateAccount_Statics::NewProp_memo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebGameServersService_CreateAccount_Statics::NewProp_memo = { "memo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebGameServersService_eventCreateAccount_Parms, memo), METADATA_PARAMS(Z_Construct_UFunction_UWebGameServersService_CreateAccount_Statics::NewProp_memo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameServersService_CreateAccount_Statics::NewProp_memo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebGameServersService_CreateAccount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameServersService_CreateAccount_Statics::NewProp_Callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameServersService_CreateAccount_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameServersService_CreateAccount_Statics::NewProp_AppID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameServersService_CreateAccount_Statics::NewProp_memo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebGameServersService_CreateAccount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WebGameServersService.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebGameServersService_CreateAccount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebGameServersService, nullptr, "CreateAccount", nullptr, nullptr, sizeof(WebGameServersService_eventCreateAccount_Parms), Z_Construct_UFunction_UWebGameServersService_CreateAccount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameServersService_CreateAccount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebGameServersService_CreateAccount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameServersService_CreateAccount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebGameServersService_CreateAccount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebGameServersService_CreateAccount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebGameServersService_DeleteAccount_Statics
	{
		struct WebGameServersService_eventDeleteAccount_Parms
		{
			FScriptDelegate Callback;
			FString Key;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebGameServersService_DeleteAccount_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebGameServersService_DeleteAccount_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebGameServersService_eventDeleteAccount_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebGameServersService_DeleteAccount_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameServersService_DeleteAccount_Statics::NewProp_Callback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebGameServersService_DeleteAccount_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebGameServersService_DeleteAccount_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebGameServersService_eventDeleteAccount_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UWebGameServersService_DeleteAccount_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameServersService_DeleteAccount_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebGameServersService_DeleteAccount_Statics::NewProp_SteamID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebGameServersService_DeleteAccount_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebGameServersService_eventDeleteAccount_Parms, SteamID), METADATA_PARAMS(Z_Construct_UFunction_UWebGameServersService_DeleteAccount_Statics::NewProp_SteamID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameServersService_DeleteAccount_Statics::NewProp_SteamID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebGameServersService_DeleteAccount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameServersService_DeleteAccount_Statics::NewProp_Callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameServersService_DeleteAccount_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameServersService_DeleteAccount_Statics::NewProp_SteamID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebGameServersService_DeleteAccount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WebGameServersService.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebGameServersService_DeleteAccount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebGameServersService, nullptr, "DeleteAccount", nullptr, nullptr, sizeof(WebGameServersService_eventDeleteAccount_Parms), Z_Construct_UFunction_UWebGameServersService_DeleteAccount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameServersService_DeleteAccount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebGameServersService_DeleteAccount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameServersService_DeleteAccount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebGameServersService_DeleteAccount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebGameServersService_DeleteAccount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebGameServersService_GetAccountList_Statics
	{
		struct WebGameServersService_eventGetAccountList_Parms
		{
			FScriptDelegate Callback;
			FString Key;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_Callback;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebGameServersService_GetAccountList_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebGameServersService_GetAccountList_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebGameServersService_eventGetAccountList_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebGameServersService_GetAccountList_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameServersService_GetAccountList_Statics::NewProp_Callback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebGameServersService_GetAccountList_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebGameServersService_GetAccountList_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebGameServersService_eventGetAccountList_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UWebGameServersService_GetAccountList_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameServersService_GetAccountList_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebGameServersService_GetAccountList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameServersService_GetAccountList_Statics::NewProp_Callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameServersService_GetAccountList_Statics::NewProp_Key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebGameServersService_GetAccountList_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WebGameServersService.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebGameServersService_GetAccountList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebGameServersService, nullptr, "GetAccountList", nullptr, nullptr, sizeof(WebGameServersService_eventGetAccountList_Parms), Z_Construct_UFunction_UWebGameServersService_GetAccountList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameServersService_GetAccountList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebGameServersService_GetAccountList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameServersService_GetAccountList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebGameServersService_GetAccountList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebGameServersService_GetAccountList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebGameServersService_GetAccountPublicInfo_Statics
	{
		struct WebGameServersService_eventGetAccountPublicInfo_Parms
		{
			FScriptDelegate Callback;
			FString Key;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebGameServersService_GetAccountPublicInfo_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebGameServersService_GetAccountPublicInfo_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebGameServersService_eventGetAccountPublicInfo_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebGameServersService_GetAccountPublicInfo_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameServersService_GetAccountPublicInfo_Statics::NewProp_Callback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebGameServersService_GetAccountPublicInfo_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebGameServersService_GetAccountPublicInfo_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebGameServersService_eventGetAccountPublicInfo_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UWebGameServersService_GetAccountPublicInfo_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameServersService_GetAccountPublicInfo_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebGameServersService_GetAccountPublicInfo_Statics::NewProp_SteamID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebGameServersService_GetAccountPublicInfo_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebGameServersService_eventGetAccountPublicInfo_Parms, SteamID), METADATA_PARAMS(Z_Construct_UFunction_UWebGameServersService_GetAccountPublicInfo_Statics::NewProp_SteamID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameServersService_GetAccountPublicInfo_Statics::NewProp_SteamID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebGameServersService_GetAccountPublicInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameServersService_GetAccountPublicInfo_Statics::NewProp_Callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameServersService_GetAccountPublicInfo_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameServersService_GetAccountPublicInfo_Statics::NewProp_SteamID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebGameServersService_GetAccountPublicInfo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WebGameServersService.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebGameServersService_GetAccountPublicInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebGameServersService, nullptr, "GetAccountPublicInfo", nullptr, nullptr, sizeof(WebGameServersService_eventGetAccountPublicInfo_Parms), Z_Construct_UFunction_UWebGameServersService_GetAccountPublicInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameServersService_GetAccountPublicInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebGameServersService_GetAccountPublicInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameServersService_GetAccountPublicInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebGameServersService_GetAccountPublicInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebGameServersService_GetAccountPublicInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebGameServersService_GetServerIPsBySteamID_Statics
	{
		struct WebGameServersService_eventGetServerIPsBySteamID_Parms
		{
			FScriptDelegate Callback;
			FString Key;
			FString serverSteamID;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_serverSteamID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_serverSteamID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebGameServersService_GetServerIPsBySteamID_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebGameServersService_GetServerIPsBySteamID_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebGameServersService_eventGetServerIPsBySteamID_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebGameServersService_GetServerIPsBySteamID_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameServersService_GetServerIPsBySteamID_Statics::NewProp_Callback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebGameServersService_GetServerIPsBySteamID_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebGameServersService_GetServerIPsBySteamID_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebGameServersService_eventGetServerIPsBySteamID_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UWebGameServersService_GetServerIPsBySteamID_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameServersService_GetServerIPsBySteamID_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebGameServersService_GetServerIPsBySteamID_Statics::NewProp_serverSteamID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebGameServersService_GetServerIPsBySteamID_Statics::NewProp_serverSteamID = { "serverSteamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebGameServersService_eventGetServerIPsBySteamID_Parms, serverSteamID), METADATA_PARAMS(Z_Construct_UFunction_UWebGameServersService_GetServerIPsBySteamID_Statics::NewProp_serverSteamID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameServersService_GetServerIPsBySteamID_Statics::NewProp_serverSteamID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebGameServersService_GetServerIPsBySteamID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameServersService_GetServerIPsBySteamID_Statics::NewProp_Callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameServersService_GetServerIPsBySteamID_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameServersService_GetServerIPsBySteamID_Statics::NewProp_serverSteamID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebGameServersService_GetServerIPsBySteamID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WebGameServersService.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebGameServersService_GetServerIPsBySteamID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebGameServersService, nullptr, "GetServerIPsBySteamID", nullptr, nullptr, sizeof(WebGameServersService_eventGetServerIPsBySteamID_Parms), Z_Construct_UFunction_UWebGameServersService_GetServerIPsBySteamID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameServersService_GetServerIPsBySteamID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebGameServersService_GetServerIPsBySteamID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameServersService_GetServerIPsBySteamID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebGameServersService_GetServerIPsBySteamID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebGameServersService_GetServerIPsBySteamID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebGameServersService_GetServerSteamIDsByIP_Statics
	{
		struct WebGameServersService_eventGetServerSteamIDsByIP_Parms
		{
			FScriptDelegate Callback;
			FString Key;
			FString ServerIP;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ServerIP_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ServerIP;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebGameServersService_GetServerSteamIDsByIP_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebGameServersService_GetServerSteamIDsByIP_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebGameServersService_eventGetServerSteamIDsByIP_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebGameServersService_GetServerSteamIDsByIP_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameServersService_GetServerSteamIDsByIP_Statics::NewProp_Callback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebGameServersService_GetServerSteamIDsByIP_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebGameServersService_GetServerSteamIDsByIP_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebGameServersService_eventGetServerSteamIDsByIP_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UWebGameServersService_GetServerSteamIDsByIP_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameServersService_GetServerSteamIDsByIP_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebGameServersService_GetServerSteamIDsByIP_Statics::NewProp_ServerIP_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebGameServersService_GetServerSteamIDsByIP_Statics::NewProp_ServerIP = { "ServerIP", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebGameServersService_eventGetServerSteamIDsByIP_Parms, ServerIP), METADATA_PARAMS(Z_Construct_UFunction_UWebGameServersService_GetServerSteamIDsByIP_Statics::NewProp_ServerIP_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameServersService_GetServerSteamIDsByIP_Statics::NewProp_ServerIP_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebGameServersService_GetServerSteamIDsByIP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameServersService_GetServerSteamIDsByIP_Statics::NewProp_Callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameServersService_GetServerSteamIDsByIP_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameServersService_GetServerSteamIDsByIP_Statics::NewProp_ServerIP,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebGameServersService_GetServerSteamIDsByIP_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WebGameServersService.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebGameServersService_GetServerSteamIDsByIP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebGameServersService, nullptr, "GetServerSteamIDsByIP", nullptr, nullptr, sizeof(WebGameServersService_eventGetServerSteamIDsByIP_Parms), Z_Construct_UFunction_UWebGameServersService_GetServerSteamIDsByIP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameServersService_GetServerSteamIDsByIP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebGameServersService_GetServerSteamIDsByIP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameServersService_GetServerSteamIDsByIP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebGameServersService_GetServerSteamIDsByIP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebGameServersService_GetServerSteamIDsByIP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebGameServersService_QueryLoginToken_Statics
	{
		struct WebGameServersService_eventQueryLoginToken_Parms
		{
			FScriptDelegate Callback;
			FString Key;
			FString loginToken;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_loginToken_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_loginToken;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebGameServersService_QueryLoginToken_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebGameServersService_QueryLoginToken_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebGameServersService_eventQueryLoginToken_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebGameServersService_QueryLoginToken_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameServersService_QueryLoginToken_Statics::NewProp_Callback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebGameServersService_QueryLoginToken_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebGameServersService_QueryLoginToken_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebGameServersService_eventQueryLoginToken_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UWebGameServersService_QueryLoginToken_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameServersService_QueryLoginToken_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebGameServersService_QueryLoginToken_Statics::NewProp_loginToken_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebGameServersService_QueryLoginToken_Statics::NewProp_loginToken = { "loginToken", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebGameServersService_eventQueryLoginToken_Parms, loginToken), METADATA_PARAMS(Z_Construct_UFunction_UWebGameServersService_QueryLoginToken_Statics::NewProp_loginToken_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameServersService_QueryLoginToken_Statics::NewProp_loginToken_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebGameServersService_QueryLoginToken_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameServersService_QueryLoginToken_Statics::NewProp_Callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameServersService_QueryLoginToken_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameServersService_QueryLoginToken_Statics::NewProp_loginToken,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebGameServersService_QueryLoginToken_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WebGameServersService.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebGameServersService_QueryLoginToken_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebGameServersService, nullptr, "QueryLoginToken", nullptr, nullptr, sizeof(WebGameServersService_eventQueryLoginToken_Parms), Z_Construct_UFunction_UWebGameServersService_QueryLoginToken_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameServersService_QueryLoginToken_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebGameServersService_QueryLoginToken_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameServersService_QueryLoginToken_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebGameServersService_QueryLoginToken()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebGameServersService_QueryLoginToken_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebGameServersService_ResetLoginToken_Statics
	{
		struct WebGameServersService_eventResetLoginToken_Parms
		{
			FScriptDelegate Callback;
			FString Key;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebGameServersService_ResetLoginToken_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebGameServersService_ResetLoginToken_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebGameServersService_eventResetLoginToken_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebGameServersService_ResetLoginToken_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameServersService_ResetLoginToken_Statics::NewProp_Callback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebGameServersService_ResetLoginToken_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebGameServersService_ResetLoginToken_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebGameServersService_eventResetLoginToken_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UWebGameServersService_ResetLoginToken_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameServersService_ResetLoginToken_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebGameServersService_ResetLoginToken_Statics::NewProp_SteamID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebGameServersService_ResetLoginToken_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebGameServersService_eventResetLoginToken_Parms, SteamID), METADATA_PARAMS(Z_Construct_UFunction_UWebGameServersService_ResetLoginToken_Statics::NewProp_SteamID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameServersService_ResetLoginToken_Statics::NewProp_SteamID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebGameServersService_ResetLoginToken_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameServersService_ResetLoginToken_Statics::NewProp_Callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameServersService_ResetLoginToken_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameServersService_ResetLoginToken_Statics::NewProp_SteamID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebGameServersService_ResetLoginToken_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WebGameServersService.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebGameServersService_ResetLoginToken_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebGameServersService, nullptr, "ResetLoginToken", nullptr, nullptr, sizeof(WebGameServersService_eventResetLoginToken_Parms), Z_Construct_UFunction_UWebGameServersService_ResetLoginToken_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameServersService_ResetLoginToken_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebGameServersService_ResetLoginToken_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameServersService_ResetLoginToken_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebGameServersService_ResetLoginToken()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebGameServersService_ResetLoginToken_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebGameServersService_SetBanStatus_Statics
	{
		struct WebGameServersService_eventSetBanStatus_Parms
		{
			FScriptDelegate Callback;
			FString Key;
			FString SteamID;
			bool bBanned;
			int32 banSeconds;
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
		static void NewProp_bBanned_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bBanned;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_banSeconds;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebGameServersService_SetBanStatus_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebGameServersService_SetBanStatus_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebGameServersService_eventSetBanStatus_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebGameServersService_SetBanStatus_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameServersService_SetBanStatus_Statics::NewProp_Callback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebGameServersService_SetBanStatus_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebGameServersService_SetBanStatus_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebGameServersService_eventSetBanStatus_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UWebGameServersService_SetBanStatus_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameServersService_SetBanStatus_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebGameServersService_SetBanStatus_Statics::NewProp_SteamID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebGameServersService_SetBanStatus_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebGameServersService_eventSetBanStatus_Parms, SteamID), METADATA_PARAMS(Z_Construct_UFunction_UWebGameServersService_SetBanStatus_Statics::NewProp_SteamID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameServersService_SetBanStatus_Statics::NewProp_SteamID_MetaData)) };
	void Z_Construct_UFunction_UWebGameServersService_SetBanStatus_Statics::NewProp_bBanned_SetBit(void* Obj)
	{
		((WebGameServersService_eventSetBanStatus_Parms*)Obj)->bBanned = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWebGameServersService_SetBanStatus_Statics::NewProp_bBanned = { "bBanned", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WebGameServersService_eventSetBanStatus_Parms), &Z_Construct_UFunction_UWebGameServersService_SetBanStatus_Statics::NewProp_bBanned_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebGameServersService_SetBanStatus_Statics::NewProp_banSeconds = { "banSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebGameServersService_eventSetBanStatus_Parms, banSeconds), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebGameServersService_SetBanStatus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameServersService_SetBanStatus_Statics::NewProp_Callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameServersService_SetBanStatus_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameServersService_SetBanStatus_Statics::NewProp_SteamID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameServersService_SetBanStatus_Statics::NewProp_bBanned,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameServersService_SetBanStatus_Statics::NewProp_banSeconds,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebGameServersService_SetBanStatus_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WebGameServersService.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebGameServersService_SetBanStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebGameServersService, nullptr, "SetBanStatus", nullptr, nullptr, sizeof(WebGameServersService_eventSetBanStatus_Parms), Z_Construct_UFunction_UWebGameServersService_SetBanStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameServersService_SetBanStatus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebGameServersService_SetBanStatus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameServersService_SetBanStatus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebGameServersService_SetBanStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebGameServersService_SetBanStatus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebGameServersService_SetMemo_Statics
	{
		struct WebGameServersService_eventSetMemo_Parms
		{
			FScriptDelegate Callback;
			FString Key;
			FString SteamID;
			FString memo;
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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_memo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_memo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebGameServersService_SetMemo_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebGameServersService_SetMemo_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebGameServersService_eventSetMemo_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebGameServersService_SetMemo_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameServersService_SetMemo_Statics::NewProp_Callback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebGameServersService_SetMemo_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebGameServersService_SetMemo_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebGameServersService_eventSetMemo_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UWebGameServersService_SetMemo_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameServersService_SetMemo_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebGameServersService_SetMemo_Statics::NewProp_SteamID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebGameServersService_SetMemo_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebGameServersService_eventSetMemo_Parms, SteamID), METADATA_PARAMS(Z_Construct_UFunction_UWebGameServersService_SetMemo_Statics::NewProp_SteamID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameServersService_SetMemo_Statics::NewProp_SteamID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebGameServersService_SetMemo_Statics::NewProp_memo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebGameServersService_SetMemo_Statics::NewProp_memo = { "memo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebGameServersService_eventSetMemo_Parms, memo), METADATA_PARAMS(Z_Construct_UFunction_UWebGameServersService_SetMemo_Statics::NewProp_memo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameServersService_SetMemo_Statics::NewProp_memo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebGameServersService_SetMemo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameServersService_SetMemo_Statics::NewProp_Callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameServersService_SetMemo_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameServersService_SetMemo_Statics::NewProp_SteamID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameServersService_SetMemo_Statics::NewProp_memo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebGameServersService_SetMemo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WebGameServersService.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebGameServersService_SetMemo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebGameServersService, nullptr, "SetMemo", nullptr, nullptr, sizeof(WebGameServersService_eventSetMemo_Parms), Z_Construct_UFunction_UWebGameServersService_SetMemo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameServersService_SetMemo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebGameServersService_SetMemo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameServersService_SetMemo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebGameServersService_SetMemo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebGameServersService_SetMemo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UWebGameServersService_NoRegister()
	{
		return UWebGameServersService::StaticClass();
	}
	struct Z_Construct_UClass_UWebGameServersService_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWebGameServersService_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreWebSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWebGameServersService_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWebGameServersService_CreateAccount, "CreateAccount" }, // 60521686
		{ &Z_Construct_UFunction_UWebGameServersService_DeleteAccount, "DeleteAccount" }, // 8067015
		{ &Z_Construct_UFunction_UWebGameServersService_GetAccountList, "GetAccountList" }, // 2908680255
		{ &Z_Construct_UFunction_UWebGameServersService_GetAccountPublicInfo, "GetAccountPublicInfo" }, // 1727745243
		{ &Z_Construct_UFunction_UWebGameServersService_GetServerIPsBySteamID, "GetServerIPsBySteamID" }, // 2520224717
		{ &Z_Construct_UFunction_UWebGameServersService_GetServerSteamIDsByIP, "GetServerSteamIDsByIP" }, // 1864579811
		{ &Z_Construct_UFunction_UWebGameServersService_QueryLoginToken, "QueryLoginToken" }, // 2963333476
		{ &Z_Construct_UFunction_UWebGameServersService_ResetLoginToken, "ResetLoginToken" }, // 3745667347
		{ &Z_Construct_UFunction_UWebGameServersService_SetBanStatus, "SetBanStatus" }, // 4186677310
		{ &Z_Construct_UFunction_UWebGameServersService_SetMemo, "SetMemo" }, // 3225511176
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebGameServersService_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "WebGameServersService.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/WebGameServersService.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWebGameServersService_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWebGameServersService>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UWebGameServersService_Statics::ClassParams = {
		&UWebGameServersService::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UWebGameServersService_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWebGameServersService_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWebGameServersService()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UWebGameServersService_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWebGameServersService, 1080506617);
	template<> STEAMCOREWEB_API UClass* StaticClass<UWebGameServersService>()
	{
		return UWebGameServersService::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWebGameServersService(Z_Construct_UClass_UWebGameServersService, &UWebGameServersService::StaticClass, TEXT("/Script/SteamCoreWeb"), TEXT("UWebGameServersService"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWebGameServersService);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
