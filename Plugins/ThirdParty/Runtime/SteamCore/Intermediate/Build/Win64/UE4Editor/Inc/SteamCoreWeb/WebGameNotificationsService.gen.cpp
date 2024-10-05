// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCoreWeb/Public/WebGameNotificationsService.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWebGameNotificationsService() {}
// Cross Module References
	STEAMCOREWEB_API UClass* Z_Construct_UClass_UWebGameNotificationsService_NoRegister();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_UWebGameNotificationsService();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebSubsystem();
	UPackage* Z_Construct_UPackage__Script_SteamCoreWeb();
	STEAMCOREWEB_API UFunction* Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UWebGameNotificationsService::execCreateSession)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
		P_GET_PROPERTY(FStrProperty,Z_Param_Context);
		P_GET_PROPERTY(FStrProperty,Z_Param_Title);
		P_GET_PROPERTY(FStrProperty,Z_Param_Users);
		P_GET_PROPERTY(FStrProperty,Z_Param_SteamID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CreateSession(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_AppID,Z_Param_Context,Z_Param_Title,Z_Param_Users,Z_Param_SteamID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebGameNotificationsService::execDeleteSession)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FStrProperty,Z_Param_SessionID);
		P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
		P_GET_PROPERTY(FStrProperty,Z_Param_SteamID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DeleteSession(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_SessionID,Z_Param_AppID,Z_Param_SteamID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebGameNotificationsService::execDeleteSessionBatch)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FStrProperty,Z_Param_SessionID);
		P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DeleteSessionBatch(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_SessionID,Z_Param_AppID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebGameNotificationsService::execEnumerateSessionsForApp)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
		P_GET_PROPERTY(FStrProperty,Z_Param_SteamID);
		P_GET_UBOOL(Z_Param_bIncludeAllUserMessages);
		P_GET_UBOOL(Z_Param_bIncludeAuthUserMessage);
		P_GET_PROPERTY(FStrProperty,Z_Param_Language);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EnumerateSessionsForApp(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_AppID,Z_Param_SteamID,Z_Param_bIncludeAllUserMessages,Z_Param_bIncludeAuthUserMessage,Z_Param_Language);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebGameNotificationsService::execGetSessionDetailsForApp)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FStrProperty,Z_Param_sessions);
		P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
		P_GET_PROPERTY(FStrProperty,Z_Param_Language);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetSessionDetailsForApp(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_sessions,Z_Param_AppID,Z_Param_Language);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebGameNotificationsService::execRequestNotifications)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FStrProperty,Z_Param_SteamID);
		P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RequestNotifications(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_SteamID,Z_Param_AppID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebGameNotificationsService::execUpdateSession)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FStrProperty,Z_Param_SessionID);
		P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
		P_GET_PROPERTY(FStrProperty,Z_Param_Title);
		P_GET_PROPERTY(FStrProperty,Z_Param_Users);
		P_GET_PROPERTY(FStrProperty,Z_Param_SteamID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateSession(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_SessionID,Z_Param_AppID,Z_Param_Title,Z_Param_Users,Z_Param_SteamID);
		P_NATIVE_END;
	}
	void UWebGameNotificationsService::StaticRegisterNativesUWebGameNotificationsService()
	{
		UClass* Class = UWebGameNotificationsService::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateSession", &UWebGameNotificationsService::execCreateSession },
			{ "DeleteSession", &UWebGameNotificationsService::execDeleteSession },
			{ "DeleteSessionBatch", &UWebGameNotificationsService::execDeleteSessionBatch },
			{ "EnumerateSessionsForApp", &UWebGameNotificationsService::execEnumerateSessionsForApp },
			{ "GetSessionDetailsForApp", &UWebGameNotificationsService::execGetSessionDetailsForApp },
			{ "RequestNotifications", &UWebGameNotificationsService::execRequestNotifications },
			{ "UpdateSession", &UWebGameNotificationsService::execUpdateSession },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWebGameNotificationsService_CreateSession_Statics
	{
		struct WebGameNotificationsService_eventCreateSession_Parms
		{
			FScriptDelegate Callback;
			FString Key;
			int32 AppID;
			FString Context;
			FString Title;
			FString Users;
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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Context_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Context;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Title_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Title;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Users_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Users;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebGameNotificationsService_CreateSession_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebGameNotificationsService_CreateSession_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebGameNotificationsService_eventCreateSession_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebGameNotificationsService_CreateSession_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameNotificationsService_CreateSession_Statics::NewProp_Callback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebGameNotificationsService_CreateSession_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebGameNotificationsService_CreateSession_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebGameNotificationsService_eventCreateSession_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UWebGameNotificationsService_CreateSession_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameNotificationsService_CreateSession_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebGameNotificationsService_CreateSession_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebGameNotificationsService_eventCreateSession_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebGameNotificationsService_CreateSession_Statics::NewProp_Context_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebGameNotificationsService_CreateSession_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebGameNotificationsService_eventCreateSession_Parms, Context), METADATA_PARAMS(Z_Construct_UFunction_UWebGameNotificationsService_CreateSession_Statics::NewProp_Context_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameNotificationsService_CreateSession_Statics::NewProp_Context_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebGameNotificationsService_CreateSession_Statics::NewProp_Title_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebGameNotificationsService_CreateSession_Statics::NewProp_Title = { "Title", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebGameNotificationsService_eventCreateSession_Parms, Title), METADATA_PARAMS(Z_Construct_UFunction_UWebGameNotificationsService_CreateSession_Statics::NewProp_Title_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameNotificationsService_CreateSession_Statics::NewProp_Title_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebGameNotificationsService_CreateSession_Statics::NewProp_Users_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebGameNotificationsService_CreateSession_Statics::NewProp_Users = { "Users", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebGameNotificationsService_eventCreateSession_Parms, Users), METADATA_PARAMS(Z_Construct_UFunction_UWebGameNotificationsService_CreateSession_Statics::NewProp_Users_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameNotificationsService_CreateSession_Statics::NewProp_Users_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebGameNotificationsService_CreateSession_Statics::NewProp_SteamID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebGameNotificationsService_CreateSession_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebGameNotificationsService_eventCreateSession_Parms, SteamID), METADATA_PARAMS(Z_Construct_UFunction_UWebGameNotificationsService_CreateSession_Statics::NewProp_SteamID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameNotificationsService_CreateSession_Statics::NewProp_SteamID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebGameNotificationsService_CreateSession_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameNotificationsService_CreateSession_Statics::NewProp_Callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameNotificationsService_CreateSession_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameNotificationsService_CreateSession_Statics::NewProp_AppID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameNotificationsService_CreateSession_Statics::NewProp_Context,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameNotificationsService_CreateSession_Statics::NewProp_Title,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameNotificationsService_CreateSession_Statics::NewProp_Users,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameNotificationsService_CreateSession_Statics::NewProp_SteamID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebGameNotificationsService_CreateSession_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WebGameNotificationsService.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebGameNotificationsService_CreateSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebGameNotificationsService, nullptr, "CreateSession", nullptr, nullptr, sizeof(WebGameNotificationsService_eventCreateSession_Parms), Z_Construct_UFunction_UWebGameNotificationsService_CreateSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameNotificationsService_CreateSession_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebGameNotificationsService_CreateSession_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameNotificationsService_CreateSession_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebGameNotificationsService_CreateSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebGameNotificationsService_CreateSession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebGameNotificationsService_DeleteSession_Statics
	{
		struct WebGameNotificationsService_eventDeleteSession_Parms
		{
			FScriptDelegate Callback;
			FString Key;
			FString SessionID;
			int32 AppID;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SessionID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SessionID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AppID;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebGameNotificationsService_DeleteSession_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebGameNotificationsService_DeleteSession_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebGameNotificationsService_eventDeleteSession_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebGameNotificationsService_DeleteSession_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameNotificationsService_DeleteSession_Statics::NewProp_Callback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebGameNotificationsService_DeleteSession_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebGameNotificationsService_DeleteSession_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebGameNotificationsService_eventDeleteSession_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UWebGameNotificationsService_DeleteSession_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameNotificationsService_DeleteSession_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebGameNotificationsService_DeleteSession_Statics::NewProp_SessionID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebGameNotificationsService_DeleteSession_Statics::NewProp_SessionID = { "SessionID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebGameNotificationsService_eventDeleteSession_Parms, SessionID), METADATA_PARAMS(Z_Construct_UFunction_UWebGameNotificationsService_DeleteSession_Statics::NewProp_SessionID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameNotificationsService_DeleteSession_Statics::NewProp_SessionID_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebGameNotificationsService_DeleteSession_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebGameNotificationsService_eventDeleteSession_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebGameNotificationsService_DeleteSession_Statics::NewProp_SteamID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebGameNotificationsService_DeleteSession_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebGameNotificationsService_eventDeleteSession_Parms, SteamID), METADATA_PARAMS(Z_Construct_UFunction_UWebGameNotificationsService_DeleteSession_Statics::NewProp_SteamID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameNotificationsService_DeleteSession_Statics::NewProp_SteamID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebGameNotificationsService_DeleteSession_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameNotificationsService_DeleteSession_Statics::NewProp_Callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameNotificationsService_DeleteSession_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameNotificationsService_DeleteSession_Statics::NewProp_SessionID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameNotificationsService_DeleteSession_Statics::NewProp_AppID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameNotificationsService_DeleteSession_Statics::NewProp_SteamID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebGameNotificationsService_DeleteSession_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WebGameNotificationsService.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebGameNotificationsService_DeleteSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebGameNotificationsService, nullptr, "DeleteSession", nullptr, nullptr, sizeof(WebGameNotificationsService_eventDeleteSession_Parms), Z_Construct_UFunction_UWebGameNotificationsService_DeleteSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameNotificationsService_DeleteSession_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebGameNotificationsService_DeleteSession_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameNotificationsService_DeleteSession_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebGameNotificationsService_DeleteSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebGameNotificationsService_DeleteSession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebGameNotificationsService_DeleteSessionBatch_Statics
	{
		struct WebGameNotificationsService_eventDeleteSessionBatch_Parms
		{
			FScriptDelegate Callback;
			FString Key;
			FString SessionID;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SessionID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SessionID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AppID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebGameNotificationsService_DeleteSessionBatch_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebGameNotificationsService_DeleteSessionBatch_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebGameNotificationsService_eventDeleteSessionBatch_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebGameNotificationsService_DeleteSessionBatch_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameNotificationsService_DeleteSessionBatch_Statics::NewProp_Callback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebGameNotificationsService_DeleteSessionBatch_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebGameNotificationsService_DeleteSessionBatch_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebGameNotificationsService_eventDeleteSessionBatch_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UWebGameNotificationsService_DeleteSessionBatch_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameNotificationsService_DeleteSessionBatch_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebGameNotificationsService_DeleteSessionBatch_Statics::NewProp_SessionID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebGameNotificationsService_DeleteSessionBatch_Statics::NewProp_SessionID = { "SessionID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebGameNotificationsService_eventDeleteSessionBatch_Parms, SessionID), METADATA_PARAMS(Z_Construct_UFunction_UWebGameNotificationsService_DeleteSessionBatch_Statics::NewProp_SessionID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameNotificationsService_DeleteSessionBatch_Statics::NewProp_SessionID_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebGameNotificationsService_DeleteSessionBatch_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebGameNotificationsService_eventDeleteSessionBatch_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebGameNotificationsService_DeleteSessionBatch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameNotificationsService_DeleteSessionBatch_Statics::NewProp_Callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameNotificationsService_DeleteSessionBatch_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameNotificationsService_DeleteSessionBatch_Statics::NewProp_SessionID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameNotificationsService_DeleteSessionBatch_Statics::NewProp_AppID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebGameNotificationsService_DeleteSessionBatch_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WebGameNotificationsService.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebGameNotificationsService_DeleteSessionBatch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebGameNotificationsService, nullptr, "DeleteSessionBatch", nullptr, nullptr, sizeof(WebGameNotificationsService_eventDeleteSessionBatch_Parms), Z_Construct_UFunction_UWebGameNotificationsService_DeleteSessionBatch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameNotificationsService_DeleteSessionBatch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebGameNotificationsService_DeleteSessionBatch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameNotificationsService_DeleteSessionBatch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebGameNotificationsService_DeleteSessionBatch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebGameNotificationsService_DeleteSessionBatch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebGameNotificationsService_EnumerateSessionsForApp_Statics
	{
		struct WebGameNotificationsService_eventEnumerateSessionsForApp_Parms
		{
			FScriptDelegate Callback;
			FString Key;
			int32 AppID;
			FString SteamID;
			bool bIncludeAllUserMessages;
			bool bIncludeAuthUserMessage;
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
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AppID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteamID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SteamID;
		static void NewProp_bIncludeAllUserMessages_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIncludeAllUserMessages;
		static void NewProp_bIncludeAuthUserMessage_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIncludeAuthUserMessage;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebGameNotificationsService_EnumerateSessionsForApp_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebGameNotificationsService_EnumerateSessionsForApp_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebGameNotificationsService_eventEnumerateSessionsForApp_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebGameNotificationsService_EnumerateSessionsForApp_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameNotificationsService_EnumerateSessionsForApp_Statics::NewProp_Callback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebGameNotificationsService_EnumerateSessionsForApp_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebGameNotificationsService_EnumerateSessionsForApp_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebGameNotificationsService_eventEnumerateSessionsForApp_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UWebGameNotificationsService_EnumerateSessionsForApp_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameNotificationsService_EnumerateSessionsForApp_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebGameNotificationsService_EnumerateSessionsForApp_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebGameNotificationsService_eventEnumerateSessionsForApp_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebGameNotificationsService_EnumerateSessionsForApp_Statics::NewProp_SteamID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebGameNotificationsService_EnumerateSessionsForApp_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebGameNotificationsService_eventEnumerateSessionsForApp_Parms, SteamID), METADATA_PARAMS(Z_Construct_UFunction_UWebGameNotificationsService_EnumerateSessionsForApp_Statics::NewProp_SteamID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameNotificationsService_EnumerateSessionsForApp_Statics::NewProp_SteamID_MetaData)) };
	void Z_Construct_UFunction_UWebGameNotificationsService_EnumerateSessionsForApp_Statics::NewProp_bIncludeAllUserMessages_SetBit(void* Obj)
	{
		((WebGameNotificationsService_eventEnumerateSessionsForApp_Parms*)Obj)->bIncludeAllUserMessages = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWebGameNotificationsService_EnumerateSessionsForApp_Statics::NewProp_bIncludeAllUserMessages = { "bIncludeAllUserMessages", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WebGameNotificationsService_eventEnumerateSessionsForApp_Parms), &Z_Construct_UFunction_UWebGameNotificationsService_EnumerateSessionsForApp_Statics::NewProp_bIncludeAllUserMessages_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UWebGameNotificationsService_EnumerateSessionsForApp_Statics::NewProp_bIncludeAuthUserMessage_SetBit(void* Obj)
	{
		((WebGameNotificationsService_eventEnumerateSessionsForApp_Parms*)Obj)->bIncludeAuthUserMessage = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWebGameNotificationsService_EnumerateSessionsForApp_Statics::NewProp_bIncludeAuthUserMessage = { "bIncludeAuthUserMessage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WebGameNotificationsService_eventEnumerateSessionsForApp_Parms), &Z_Construct_UFunction_UWebGameNotificationsService_EnumerateSessionsForApp_Statics::NewProp_bIncludeAuthUserMessage_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebGameNotificationsService_EnumerateSessionsForApp_Statics::NewProp_Language_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebGameNotificationsService_EnumerateSessionsForApp_Statics::NewProp_Language = { "Language", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebGameNotificationsService_eventEnumerateSessionsForApp_Parms, Language), METADATA_PARAMS(Z_Construct_UFunction_UWebGameNotificationsService_EnumerateSessionsForApp_Statics::NewProp_Language_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameNotificationsService_EnumerateSessionsForApp_Statics::NewProp_Language_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebGameNotificationsService_EnumerateSessionsForApp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameNotificationsService_EnumerateSessionsForApp_Statics::NewProp_Callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameNotificationsService_EnumerateSessionsForApp_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameNotificationsService_EnumerateSessionsForApp_Statics::NewProp_AppID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameNotificationsService_EnumerateSessionsForApp_Statics::NewProp_SteamID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameNotificationsService_EnumerateSessionsForApp_Statics::NewProp_bIncludeAllUserMessages,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameNotificationsService_EnumerateSessionsForApp_Statics::NewProp_bIncludeAuthUserMessage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameNotificationsService_EnumerateSessionsForApp_Statics::NewProp_Language,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebGameNotificationsService_EnumerateSessionsForApp_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WebGameNotificationsService.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebGameNotificationsService_EnumerateSessionsForApp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebGameNotificationsService, nullptr, "EnumerateSessionsForApp", nullptr, nullptr, sizeof(WebGameNotificationsService_eventEnumerateSessionsForApp_Parms), Z_Construct_UFunction_UWebGameNotificationsService_EnumerateSessionsForApp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameNotificationsService_EnumerateSessionsForApp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebGameNotificationsService_EnumerateSessionsForApp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameNotificationsService_EnumerateSessionsForApp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebGameNotificationsService_EnumerateSessionsForApp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebGameNotificationsService_EnumerateSessionsForApp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebGameNotificationsService_GetSessionDetailsForApp_Statics
	{
		struct WebGameNotificationsService_eventGetSessionDetailsForApp_Parms
		{
			FScriptDelegate Callback;
			FString Key;
			FString sessions;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_sessions_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_sessions;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebGameNotificationsService_GetSessionDetailsForApp_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebGameNotificationsService_GetSessionDetailsForApp_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebGameNotificationsService_eventGetSessionDetailsForApp_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebGameNotificationsService_GetSessionDetailsForApp_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameNotificationsService_GetSessionDetailsForApp_Statics::NewProp_Callback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebGameNotificationsService_GetSessionDetailsForApp_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebGameNotificationsService_GetSessionDetailsForApp_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebGameNotificationsService_eventGetSessionDetailsForApp_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UWebGameNotificationsService_GetSessionDetailsForApp_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameNotificationsService_GetSessionDetailsForApp_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebGameNotificationsService_GetSessionDetailsForApp_Statics::NewProp_sessions_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebGameNotificationsService_GetSessionDetailsForApp_Statics::NewProp_sessions = { "sessions", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebGameNotificationsService_eventGetSessionDetailsForApp_Parms, sessions), METADATA_PARAMS(Z_Construct_UFunction_UWebGameNotificationsService_GetSessionDetailsForApp_Statics::NewProp_sessions_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameNotificationsService_GetSessionDetailsForApp_Statics::NewProp_sessions_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebGameNotificationsService_GetSessionDetailsForApp_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebGameNotificationsService_eventGetSessionDetailsForApp_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebGameNotificationsService_GetSessionDetailsForApp_Statics::NewProp_Language_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebGameNotificationsService_GetSessionDetailsForApp_Statics::NewProp_Language = { "Language", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebGameNotificationsService_eventGetSessionDetailsForApp_Parms, Language), METADATA_PARAMS(Z_Construct_UFunction_UWebGameNotificationsService_GetSessionDetailsForApp_Statics::NewProp_Language_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameNotificationsService_GetSessionDetailsForApp_Statics::NewProp_Language_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebGameNotificationsService_GetSessionDetailsForApp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameNotificationsService_GetSessionDetailsForApp_Statics::NewProp_Callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameNotificationsService_GetSessionDetailsForApp_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameNotificationsService_GetSessionDetailsForApp_Statics::NewProp_sessions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameNotificationsService_GetSessionDetailsForApp_Statics::NewProp_AppID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameNotificationsService_GetSessionDetailsForApp_Statics::NewProp_Language,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebGameNotificationsService_GetSessionDetailsForApp_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WebGameNotificationsService.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebGameNotificationsService_GetSessionDetailsForApp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebGameNotificationsService, nullptr, "GetSessionDetailsForApp", nullptr, nullptr, sizeof(WebGameNotificationsService_eventGetSessionDetailsForApp_Parms), Z_Construct_UFunction_UWebGameNotificationsService_GetSessionDetailsForApp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameNotificationsService_GetSessionDetailsForApp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebGameNotificationsService_GetSessionDetailsForApp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameNotificationsService_GetSessionDetailsForApp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebGameNotificationsService_GetSessionDetailsForApp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebGameNotificationsService_GetSessionDetailsForApp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebGameNotificationsService_RequestNotifications_Statics
	{
		struct WebGameNotificationsService_eventRequestNotifications_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebGameNotificationsService_RequestNotifications_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebGameNotificationsService_RequestNotifications_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebGameNotificationsService_eventRequestNotifications_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebGameNotificationsService_RequestNotifications_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameNotificationsService_RequestNotifications_Statics::NewProp_Callback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebGameNotificationsService_RequestNotifications_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebGameNotificationsService_RequestNotifications_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebGameNotificationsService_eventRequestNotifications_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UWebGameNotificationsService_RequestNotifications_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameNotificationsService_RequestNotifications_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebGameNotificationsService_RequestNotifications_Statics::NewProp_SteamID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebGameNotificationsService_RequestNotifications_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebGameNotificationsService_eventRequestNotifications_Parms, SteamID), METADATA_PARAMS(Z_Construct_UFunction_UWebGameNotificationsService_RequestNotifications_Statics::NewProp_SteamID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameNotificationsService_RequestNotifications_Statics::NewProp_SteamID_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebGameNotificationsService_RequestNotifications_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebGameNotificationsService_eventRequestNotifications_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebGameNotificationsService_RequestNotifications_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameNotificationsService_RequestNotifications_Statics::NewProp_Callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameNotificationsService_RequestNotifications_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameNotificationsService_RequestNotifications_Statics::NewProp_SteamID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameNotificationsService_RequestNotifications_Statics::NewProp_AppID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebGameNotificationsService_RequestNotifications_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WebGameNotificationsService.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebGameNotificationsService_RequestNotifications_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebGameNotificationsService, nullptr, "RequestNotifications", nullptr, nullptr, sizeof(WebGameNotificationsService_eventRequestNotifications_Parms), Z_Construct_UFunction_UWebGameNotificationsService_RequestNotifications_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameNotificationsService_RequestNotifications_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebGameNotificationsService_RequestNotifications_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameNotificationsService_RequestNotifications_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebGameNotificationsService_RequestNotifications()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebGameNotificationsService_RequestNotifications_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebGameNotificationsService_UpdateSession_Statics
	{
		struct WebGameNotificationsService_eventUpdateSession_Parms
		{
			FScriptDelegate Callback;
			FString Key;
			FString SessionID;
			int32 AppID;
			FString Title;
			FString Users;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SessionID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SessionID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AppID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Title_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Title;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Users_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Users;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebGameNotificationsService_UpdateSession_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebGameNotificationsService_UpdateSession_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebGameNotificationsService_eventUpdateSession_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebGameNotificationsService_UpdateSession_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameNotificationsService_UpdateSession_Statics::NewProp_Callback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebGameNotificationsService_UpdateSession_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebGameNotificationsService_UpdateSession_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebGameNotificationsService_eventUpdateSession_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UWebGameNotificationsService_UpdateSession_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameNotificationsService_UpdateSession_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebGameNotificationsService_UpdateSession_Statics::NewProp_SessionID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebGameNotificationsService_UpdateSession_Statics::NewProp_SessionID = { "SessionID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebGameNotificationsService_eventUpdateSession_Parms, SessionID), METADATA_PARAMS(Z_Construct_UFunction_UWebGameNotificationsService_UpdateSession_Statics::NewProp_SessionID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameNotificationsService_UpdateSession_Statics::NewProp_SessionID_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebGameNotificationsService_UpdateSession_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebGameNotificationsService_eventUpdateSession_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebGameNotificationsService_UpdateSession_Statics::NewProp_Title_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebGameNotificationsService_UpdateSession_Statics::NewProp_Title = { "Title", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebGameNotificationsService_eventUpdateSession_Parms, Title), METADATA_PARAMS(Z_Construct_UFunction_UWebGameNotificationsService_UpdateSession_Statics::NewProp_Title_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameNotificationsService_UpdateSession_Statics::NewProp_Title_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebGameNotificationsService_UpdateSession_Statics::NewProp_Users_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebGameNotificationsService_UpdateSession_Statics::NewProp_Users = { "Users", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebGameNotificationsService_eventUpdateSession_Parms, Users), METADATA_PARAMS(Z_Construct_UFunction_UWebGameNotificationsService_UpdateSession_Statics::NewProp_Users_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameNotificationsService_UpdateSession_Statics::NewProp_Users_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebGameNotificationsService_UpdateSession_Statics::NewProp_SteamID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebGameNotificationsService_UpdateSession_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebGameNotificationsService_eventUpdateSession_Parms, SteamID), METADATA_PARAMS(Z_Construct_UFunction_UWebGameNotificationsService_UpdateSession_Statics::NewProp_SteamID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameNotificationsService_UpdateSession_Statics::NewProp_SteamID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebGameNotificationsService_UpdateSession_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameNotificationsService_UpdateSession_Statics::NewProp_Callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameNotificationsService_UpdateSession_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameNotificationsService_UpdateSession_Statics::NewProp_SessionID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameNotificationsService_UpdateSession_Statics::NewProp_AppID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameNotificationsService_UpdateSession_Statics::NewProp_Title,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameNotificationsService_UpdateSession_Statics::NewProp_Users,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebGameNotificationsService_UpdateSession_Statics::NewProp_SteamID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebGameNotificationsService_UpdateSession_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WebGameNotificationsService.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebGameNotificationsService_UpdateSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebGameNotificationsService, nullptr, "UpdateSession", nullptr, nullptr, sizeof(WebGameNotificationsService_eventUpdateSession_Parms), Z_Construct_UFunction_UWebGameNotificationsService_UpdateSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameNotificationsService_UpdateSession_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebGameNotificationsService_UpdateSession_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebGameNotificationsService_UpdateSession_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebGameNotificationsService_UpdateSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebGameNotificationsService_UpdateSession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UWebGameNotificationsService_NoRegister()
	{
		return UWebGameNotificationsService::StaticClass();
	}
	struct Z_Construct_UClass_UWebGameNotificationsService_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWebGameNotificationsService_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreWebSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWebGameNotificationsService_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWebGameNotificationsService_CreateSession, "CreateSession" }, // 712594302
		{ &Z_Construct_UFunction_UWebGameNotificationsService_DeleteSession, "DeleteSession" }, // 2490621073
		{ &Z_Construct_UFunction_UWebGameNotificationsService_DeleteSessionBatch, "DeleteSessionBatch" }, // 4268620466
		{ &Z_Construct_UFunction_UWebGameNotificationsService_EnumerateSessionsForApp, "EnumerateSessionsForApp" }, // 3902832172
		{ &Z_Construct_UFunction_UWebGameNotificationsService_GetSessionDetailsForApp, "GetSessionDetailsForApp" }, // 3648888965
		{ &Z_Construct_UFunction_UWebGameNotificationsService_RequestNotifications, "RequestNotifications" }, // 425485035
		{ &Z_Construct_UFunction_UWebGameNotificationsService_UpdateSession, "UpdateSession" }, // 3667624774
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebGameNotificationsService_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "WebGameNotificationsService.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/WebGameNotificationsService.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWebGameNotificationsService_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWebGameNotificationsService>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UWebGameNotificationsService_Statics::ClassParams = {
		&UWebGameNotificationsService::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UWebGameNotificationsService_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWebGameNotificationsService_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWebGameNotificationsService()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UWebGameNotificationsService_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWebGameNotificationsService, 3287120704);
	template<> STEAMCOREWEB_API UClass* StaticClass<UWebGameNotificationsService>()
	{
		return UWebGameNotificationsService::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWebGameNotificationsService(Z_Construct_UClass_UWebGameNotificationsService, &UWebGameNotificationsService::StaticClass, TEXT("/Script/SteamCoreWeb"), TEXT("UWebGameNotificationsService"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWebGameNotificationsService);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
