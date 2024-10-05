// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCoreWeb/Public/WebSteamUser.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWebSteamUser() {}
// Cross Module References
	STEAMCOREWEB_API UClass* Z_Construct_UClass_UWebSteamUser_NoRegister();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_UWebSteamUser();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebSubsystem();
	UPackage* Z_Construct_UPackage__Script_SteamCoreWeb();
	STEAMCOREWEB_API UFunction* Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature();
	STEAMCOREWEB_API UEnum* Z_Construct_UEnum_SteamCoreWeb_EVanityUrlType();
// End Cross Module References
	DEFINE_FUNCTION(UWebSteamUser::execCheckAppOwnership)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FStrProperty,Z_Param_SteamID);
		P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CheckAppOwnership(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_SteamID,Z_Param_AppID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebSteamUser::execGetAppPriceInfo)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FStrProperty,Z_Param_SteamID);
		P_GET_TARRAY(int32,Z_Param_AppIDs);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetAppPriceInfo(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_SteamID,Z_Param_AppIDs);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebSteamUser::execGetFriendList)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FStrProperty,Z_Param_SteamID);
		P_GET_PROPERTY(FStrProperty,Z_Param_Relationship);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetFriendList(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_SteamID,Z_Param_Relationship);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebSteamUser::execGetPlayerBans)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_TARRAY(FString,Z_Param_SteamIDs);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetPlayerBans(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_SteamIDs);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebSteamUser::execGetPlayerSummaries)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_TARRAY(FString,Z_Param_SteamIDs);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetPlayerSummaries(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_SteamIDs);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebSteamUser::execGetPublisherAppOwnership)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FStrProperty,Z_Param_SteamID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetPublisherAppOwnership(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_SteamID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebSteamUser::execGetPublisherAppOwnershipChanges)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FStrProperty,Z_Param_packageRowVersion);
		P_GET_PROPERTY(FStrProperty,Z_Param_cdkeyRowVersion);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetPublisherAppOwnershipChanges(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_packageRowVersion,Z_Param_cdkeyRowVersion);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebSteamUser::execGetUserGroupList)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FStrProperty,Z_Param_SteamID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetUserGroupList(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_SteamID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebSteamUser::execGrantPackage)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FStrProperty,Z_Param_SteamID);
		P_GET_PROPERTY(FIntProperty,Z_Param_packageID);
		P_GET_PROPERTY(FStrProperty,Z_Param_ipaddress);
		P_GET_PROPERTY(FStrProperty,Z_Param_thirdPartyKey);
		P_GET_PROPERTY(FIntProperty,Z_Param_thirdPartyAppID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GrantPackage(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_SteamID,Z_Param_packageID,Z_Param_ipaddress,Z_Param_thirdPartyKey,Z_Param_thirdPartyAppID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebSteamUser::execResolveVanityURL)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FStrProperty,Z_Param_vanityURL);
		P_GET_ENUM(EVanityUrlType,Z_Param_urlType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResolveVanityURL(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_vanityURL,EVanityUrlType(Z_Param_urlType));
		P_NATIVE_END;
	}
	void UWebSteamUser::StaticRegisterNativesUWebSteamUser()
	{
		UClass* Class = UWebSteamUser::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CheckAppOwnership", &UWebSteamUser::execCheckAppOwnership },
			{ "GetAppPriceInfo", &UWebSteamUser::execGetAppPriceInfo },
			{ "GetFriendList", &UWebSteamUser::execGetFriendList },
			{ "GetPlayerBans", &UWebSteamUser::execGetPlayerBans },
			{ "GetPlayerSummaries", &UWebSteamUser::execGetPlayerSummaries },
			{ "GetPublisherAppOwnership", &UWebSteamUser::execGetPublisherAppOwnership },
			{ "GetPublisherAppOwnershipChanges", &UWebSteamUser::execGetPublisherAppOwnershipChanges },
			{ "GetUserGroupList", &UWebSteamUser::execGetUserGroupList },
			{ "GrantPackage", &UWebSteamUser::execGrantPackage },
			{ "ResolveVanityURL", &UWebSteamUser::execResolveVanityURL },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWebSteamUser_CheckAppOwnership_Statics
	{
		struct WebSteamUser_eventCheckAppOwnership_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSteamUser_CheckAppOwnership_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebSteamUser_CheckAppOwnership_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamUser_eventCheckAppOwnership_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebSteamUser_CheckAppOwnership_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamUser_CheckAppOwnership_Statics::NewProp_Callback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSteamUser_CheckAppOwnership_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamUser_CheckAppOwnership_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamUser_eventCheckAppOwnership_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UWebSteamUser_CheckAppOwnership_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamUser_CheckAppOwnership_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSteamUser_CheckAppOwnership_Statics::NewProp_SteamID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamUser_CheckAppOwnership_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamUser_eventCheckAppOwnership_Parms, SteamID), METADATA_PARAMS(Z_Construct_UFunction_UWebSteamUser_CheckAppOwnership_Statics::NewProp_SteamID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamUser_CheckAppOwnership_Statics::NewProp_SteamID_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebSteamUser_CheckAppOwnership_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamUser_eventCheckAppOwnership_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebSteamUser_CheckAppOwnership_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamUser_CheckAppOwnership_Statics::NewProp_Callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamUser_CheckAppOwnership_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamUser_CheckAppOwnership_Statics::NewProp_SteamID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamUser_CheckAppOwnership_Statics::NewProp_AppID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSteamUser_CheckAppOwnership_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WebSteamUser.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebSteamUser_CheckAppOwnership_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebSteamUser, nullptr, "CheckAppOwnership", nullptr, nullptr, sizeof(WebSteamUser_eventCheckAppOwnership_Parms), Z_Construct_UFunction_UWebSteamUser_CheckAppOwnership_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamUser_CheckAppOwnership_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebSteamUser_CheckAppOwnership_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamUser_CheckAppOwnership_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebSteamUser_CheckAppOwnership()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebSteamUser_CheckAppOwnership_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebSteamUser_GetAppPriceInfo_Statics
	{
		struct WebSteamUser_eventGetAppPriceInfo_Parms
		{
			FScriptDelegate Callback;
			FString Key;
			FString SteamID;
			TArray<int32> AppIDs;
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
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AppIDs_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AppIDs;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSteamUser_GetAppPriceInfo_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebSteamUser_GetAppPriceInfo_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamUser_eventGetAppPriceInfo_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebSteamUser_GetAppPriceInfo_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamUser_GetAppPriceInfo_Statics::NewProp_Callback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSteamUser_GetAppPriceInfo_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamUser_GetAppPriceInfo_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamUser_eventGetAppPriceInfo_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UWebSteamUser_GetAppPriceInfo_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamUser_GetAppPriceInfo_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSteamUser_GetAppPriceInfo_Statics::NewProp_SteamID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamUser_GetAppPriceInfo_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamUser_eventGetAppPriceInfo_Parms, SteamID), METADATA_PARAMS(Z_Construct_UFunction_UWebSteamUser_GetAppPriceInfo_Statics::NewProp_SteamID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamUser_GetAppPriceInfo_Statics::NewProp_SteamID_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebSteamUser_GetAppPriceInfo_Statics::NewProp_AppIDs_Inner = { "AppIDs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWebSteamUser_GetAppPriceInfo_Statics::NewProp_AppIDs = { "AppIDs", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamUser_eventGetAppPriceInfo_Parms, AppIDs), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebSteamUser_GetAppPriceInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamUser_GetAppPriceInfo_Statics::NewProp_Callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamUser_GetAppPriceInfo_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamUser_GetAppPriceInfo_Statics::NewProp_SteamID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamUser_GetAppPriceInfo_Statics::NewProp_AppIDs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamUser_GetAppPriceInfo_Statics::NewProp_AppIDs,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSteamUser_GetAppPriceInfo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WebSteamUser.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebSteamUser_GetAppPriceInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebSteamUser, nullptr, "GetAppPriceInfo", nullptr, nullptr, sizeof(WebSteamUser_eventGetAppPriceInfo_Parms), Z_Construct_UFunction_UWebSteamUser_GetAppPriceInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamUser_GetAppPriceInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebSteamUser_GetAppPriceInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamUser_GetAppPriceInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebSteamUser_GetAppPriceInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebSteamUser_GetAppPriceInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebSteamUser_GetFriendList_Statics
	{
		struct WebSteamUser_eventGetFriendList_Parms
		{
			FScriptDelegate Callback;
			FString Key;
			FString SteamID;
			FString Relationship;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Relationship_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Relationship;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSteamUser_GetFriendList_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebSteamUser_GetFriendList_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamUser_eventGetFriendList_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebSteamUser_GetFriendList_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamUser_GetFriendList_Statics::NewProp_Callback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSteamUser_GetFriendList_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamUser_GetFriendList_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamUser_eventGetFriendList_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UWebSteamUser_GetFriendList_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamUser_GetFriendList_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSteamUser_GetFriendList_Statics::NewProp_SteamID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamUser_GetFriendList_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamUser_eventGetFriendList_Parms, SteamID), METADATA_PARAMS(Z_Construct_UFunction_UWebSteamUser_GetFriendList_Statics::NewProp_SteamID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamUser_GetFriendList_Statics::NewProp_SteamID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSteamUser_GetFriendList_Statics::NewProp_Relationship_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamUser_GetFriendList_Statics::NewProp_Relationship = { "Relationship", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamUser_eventGetFriendList_Parms, Relationship), METADATA_PARAMS(Z_Construct_UFunction_UWebSteamUser_GetFriendList_Statics::NewProp_Relationship_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamUser_GetFriendList_Statics::NewProp_Relationship_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebSteamUser_GetFriendList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamUser_GetFriendList_Statics::NewProp_Callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamUser_GetFriendList_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamUser_GetFriendList_Statics::NewProp_SteamID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamUser_GetFriendList_Statics::NewProp_Relationship,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSteamUser_GetFriendList_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WebSteamUser.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebSteamUser_GetFriendList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebSteamUser, nullptr, "GetFriendList", nullptr, nullptr, sizeof(WebSteamUser_eventGetFriendList_Parms), Z_Construct_UFunction_UWebSteamUser_GetFriendList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamUser_GetFriendList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebSteamUser_GetFriendList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamUser_GetFriendList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebSteamUser_GetFriendList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebSteamUser_GetFriendList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebSteamUser_GetPlayerBans_Statics
	{
		struct WebSteamUser_eventGetPlayerBans_Parms
		{
			FScriptDelegate Callback;
			FString Key;
			TArray<FString> SteamIDs;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_Callback;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SteamIDs_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SteamIDs;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSteamUser_GetPlayerBans_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebSteamUser_GetPlayerBans_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamUser_eventGetPlayerBans_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebSteamUser_GetPlayerBans_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamUser_GetPlayerBans_Statics::NewProp_Callback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSteamUser_GetPlayerBans_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamUser_GetPlayerBans_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamUser_eventGetPlayerBans_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UWebSteamUser_GetPlayerBans_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamUser_GetPlayerBans_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamUser_GetPlayerBans_Statics::NewProp_SteamIDs_Inner = { "SteamIDs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWebSteamUser_GetPlayerBans_Statics::NewProp_SteamIDs = { "SteamIDs", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamUser_eventGetPlayerBans_Parms, SteamIDs), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebSteamUser_GetPlayerBans_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamUser_GetPlayerBans_Statics::NewProp_Callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamUser_GetPlayerBans_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamUser_GetPlayerBans_Statics::NewProp_SteamIDs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamUser_GetPlayerBans_Statics::NewProp_SteamIDs,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSteamUser_GetPlayerBans_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WebSteamUser.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebSteamUser_GetPlayerBans_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebSteamUser, nullptr, "GetPlayerBans", nullptr, nullptr, sizeof(WebSteamUser_eventGetPlayerBans_Parms), Z_Construct_UFunction_UWebSteamUser_GetPlayerBans_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamUser_GetPlayerBans_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebSteamUser_GetPlayerBans_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamUser_GetPlayerBans_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebSteamUser_GetPlayerBans()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebSteamUser_GetPlayerBans_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebSteamUser_GetPlayerSummaries_Statics
	{
		struct WebSteamUser_eventGetPlayerSummaries_Parms
		{
			FScriptDelegate Callback;
			FString Key;
			TArray<FString> SteamIDs;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_Callback;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SteamIDs_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SteamIDs;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSteamUser_GetPlayerSummaries_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebSteamUser_GetPlayerSummaries_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamUser_eventGetPlayerSummaries_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebSteamUser_GetPlayerSummaries_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamUser_GetPlayerSummaries_Statics::NewProp_Callback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSteamUser_GetPlayerSummaries_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamUser_GetPlayerSummaries_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamUser_eventGetPlayerSummaries_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UWebSteamUser_GetPlayerSummaries_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamUser_GetPlayerSummaries_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamUser_GetPlayerSummaries_Statics::NewProp_SteamIDs_Inner = { "SteamIDs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWebSteamUser_GetPlayerSummaries_Statics::NewProp_SteamIDs = { "SteamIDs", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamUser_eventGetPlayerSummaries_Parms, SteamIDs), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebSteamUser_GetPlayerSummaries_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamUser_GetPlayerSummaries_Statics::NewProp_Callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamUser_GetPlayerSummaries_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamUser_GetPlayerSummaries_Statics::NewProp_SteamIDs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamUser_GetPlayerSummaries_Statics::NewProp_SteamIDs,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSteamUser_GetPlayerSummaries_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WebSteamUser.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebSteamUser_GetPlayerSummaries_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebSteamUser, nullptr, "GetPlayerSummaries", nullptr, nullptr, sizeof(WebSteamUser_eventGetPlayerSummaries_Parms), Z_Construct_UFunction_UWebSteamUser_GetPlayerSummaries_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamUser_GetPlayerSummaries_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebSteamUser_GetPlayerSummaries_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamUser_GetPlayerSummaries_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebSteamUser_GetPlayerSummaries()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebSteamUser_GetPlayerSummaries_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebSteamUser_GetPublisherAppOwnership_Statics
	{
		struct WebSteamUser_eventGetPublisherAppOwnership_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSteamUser_GetPublisherAppOwnership_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebSteamUser_GetPublisherAppOwnership_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamUser_eventGetPublisherAppOwnership_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebSteamUser_GetPublisherAppOwnership_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamUser_GetPublisherAppOwnership_Statics::NewProp_Callback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSteamUser_GetPublisherAppOwnership_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamUser_GetPublisherAppOwnership_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamUser_eventGetPublisherAppOwnership_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UWebSteamUser_GetPublisherAppOwnership_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamUser_GetPublisherAppOwnership_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSteamUser_GetPublisherAppOwnership_Statics::NewProp_SteamID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamUser_GetPublisherAppOwnership_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamUser_eventGetPublisherAppOwnership_Parms, SteamID), METADATA_PARAMS(Z_Construct_UFunction_UWebSteamUser_GetPublisherAppOwnership_Statics::NewProp_SteamID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamUser_GetPublisherAppOwnership_Statics::NewProp_SteamID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebSteamUser_GetPublisherAppOwnership_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamUser_GetPublisherAppOwnership_Statics::NewProp_Callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamUser_GetPublisherAppOwnership_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamUser_GetPublisherAppOwnership_Statics::NewProp_SteamID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSteamUser_GetPublisherAppOwnership_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WebSteamUser.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebSteamUser_GetPublisherAppOwnership_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebSteamUser, nullptr, "GetPublisherAppOwnership", nullptr, nullptr, sizeof(WebSteamUser_eventGetPublisherAppOwnership_Parms), Z_Construct_UFunction_UWebSteamUser_GetPublisherAppOwnership_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamUser_GetPublisherAppOwnership_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebSteamUser_GetPublisherAppOwnership_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamUser_GetPublisherAppOwnership_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebSteamUser_GetPublisherAppOwnership()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebSteamUser_GetPublisherAppOwnership_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebSteamUser_GetPublisherAppOwnershipChanges_Statics
	{
		struct WebSteamUser_eventGetPublisherAppOwnershipChanges_Parms
		{
			FScriptDelegate Callback;
			FString Key;
			FString packageRowVersion;
			FString cdkeyRowVersion;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_packageRowVersion_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_packageRowVersion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_cdkeyRowVersion_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_cdkeyRowVersion;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSteamUser_GetPublisherAppOwnershipChanges_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebSteamUser_GetPublisherAppOwnershipChanges_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamUser_eventGetPublisherAppOwnershipChanges_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebSteamUser_GetPublisherAppOwnershipChanges_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamUser_GetPublisherAppOwnershipChanges_Statics::NewProp_Callback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSteamUser_GetPublisherAppOwnershipChanges_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamUser_GetPublisherAppOwnershipChanges_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamUser_eventGetPublisherAppOwnershipChanges_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UWebSteamUser_GetPublisherAppOwnershipChanges_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamUser_GetPublisherAppOwnershipChanges_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSteamUser_GetPublisherAppOwnershipChanges_Statics::NewProp_packageRowVersion_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamUser_GetPublisherAppOwnershipChanges_Statics::NewProp_packageRowVersion = { "packageRowVersion", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamUser_eventGetPublisherAppOwnershipChanges_Parms, packageRowVersion), METADATA_PARAMS(Z_Construct_UFunction_UWebSteamUser_GetPublisherAppOwnershipChanges_Statics::NewProp_packageRowVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamUser_GetPublisherAppOwnershipChanges_Statics::NewProp_packageRowVersion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSteamUser_GetPublisherAppOwnershipChanges_Statics::NewProp_cdkeyRowVersion_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamUser_GetPublisherAppOwnershipChanges_Statics::NewProp_cdkeyRowVersion = { "cdkeyRowVersion", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamUser_eventGetPublisherAppOwnershipChanges_Parms, cdkeyRowVersion), METADATA_PARAMS(Z_Construct_UFunction_UWebSteamUser_GetPublisherAppOwnershipChanges_Statics::NewProp_cdkeyRowVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamUser_GetPublisherAppOwnershipChanges_Statics::NewProp_cdkeyRowVersion_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebSteamUser_GetPublisherAppOwnershipChanges_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamUser_GetPublisherAppOwnershipChanges_Statics::NewProp_Callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamUser_GetPublisherAppOwnershipChanges_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamUser_GetPublisherAppOwnershipChanges_Statics::NewProp_packageRowVersion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamUser_GetPublisherAppOwnershipChanges_Statics::NewProp_cdkeyRowVersion,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSteamUser_GetPublisherAppOwnershipChanges_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WebSteamUser.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebSteamUser_GetPublisherAppOwnershipChanges_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebSteamUser, nullptr, "GetPublisherAppOwnershipChanges", nullptr, nullptr, sizeof(WebSteamUser_eventGetPublisherAppOwnershipChanges_Parms), Z_Construct_UFunction_UWebSteamUser_GetPublisherAppOwnershipChanges_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamUser_GetPublisherAppOwnershipChanges_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebSteamUser_GetPublisherAppOwnershipChanges_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamUser_GetPublisherAppOwnershipChanges_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebSteamUser_GetPublisherAppOwnershipChanges()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebSteamUser_GetPublisherAppOwnershipChanges_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebSteamUser_GetUserGroupList_Statics
	{
		struct WebSteamUser_eventGetUserGroupList_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSteamUser_GetUserGroupList_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebSteamUser_GetUserGroupList_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamUser_eventGetUserGroupList_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebSteamUser_GetUserGroupList_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamUser_GetUserGroupList_Statics::NewProp_Callback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSteamUser_GetUserGroupList_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamUser_GetUserGroupList_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamUser_eventGetUserGroupList_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UWebSteamUser_GetUserGroupList_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamUser_GetUserGroupList_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSteamUser_GetUserGroupList_Statics::NewProp_SteamID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamUser_GetUserGroupList_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamUser_eventGetUserGroupList_Parms, SteamID), METADATA_PARAMS(Z_Construct_UFunction_UWebSteamUser_GetUserGroupList_Statics::NewProp_SteamID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamUser_GetUserGroupList_Statics::NewProp_SteamID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebSteamUser_GetUserGroupList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamUser_GetUserGroupList_Statics::NewProp_Callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamUser_GetUserGroupList_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamUser_GetUserGroupList_Statics::NewProp_SteamID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSteamUser_GetUserGroupList_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WebSteamUser.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebSteamUser_GetUserGroupList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebSteamUser, nullptr, "GetUserGroupList", nullptr, nullptr, sizeof(WebSteamUser_eventGetUserGroupList_Parms), Z_Construct_UFunction_UWebSteamUser_GetUserGroupList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamUser_GetUserGroupList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebSteamUser_GetUserGroupList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamUser_GetUserGroupList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebSteamUser_GetUserGroupList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebSteamUser_GetUserGroupList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebSteamUser_GrantPackage_Statics
	{
		struct WebSteamUser_eventGrantPackage_Parms
		{
			FScriptDelegate Callback;
			FString Key;
			FString SteamID;
			int32 packageID;
			FString ipaddress;
			FString thirdPartyKey;
			int32 thirdPartyAppID;
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
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_packageID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ipaddress_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ipaddress;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_thirdPartyKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_thirdPartyKey;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_thirdPartyAppID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSteamUser_GrantPackage_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebSteamUser_GrantPackage_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamUser_eventGrantPackage_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebSteamUser_GrantPackage_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamUser_GrantPackage_Statics::NewProp_Callback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSteamUser_GrantPackage_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamUser_GrantPackage_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamUser_eventGrantPackage_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UWebSteamUser_GrantPackage_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamUser_GrantPackage_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSteamUser_GrantPackage_Statics::NewProp_SteamID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamUser_GrantPackage_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamUser_eventGrantPackage_Parms, SteamID), METADATA_PARAMS(Z_Construct_UFunction_UWebSteamUser_GrantPackage_Statics::NewProp_SteamID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamUser_GrantPackage_Statics::NewProp_SteamID_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebSteamUser_GrantPackage_Statics::NewProp_packageID = { "packageID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamUser_eventGrantPackage_Parms, packageID), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSteamUser_GrantPackage_Statics::NewProp_ipaddress_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamUser_GrantPackage_Statics::NewProp_ipaddress = { "ipaddress", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamUser_eventGrantPackage_Parms, ipaddress), METADATA_PARAMS(Z_Construct_UFunction_UWebSteamUser_GrantPackage_Statics::NewProp_ipaddress_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamUser_GrantPackage_Statics::NewProp_ipaddress_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSteamUser_GrantPackage_Statics::NewProp_thirdPartyKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamUser_GrantPackage_Statics::NewProp_thirdPartyKey = { "thirdPartyKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamUser_eventGrantPackage_Parms, thirdPartyKey), METADATA_PARAMS(Z_Construct_UFunction_UWebSteamUser_GrantPackage_Statics::NewProp_thirdPartyKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamUser_GrantPackage_Statics::NewProp_thirdPartyKey_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebSteamUser_GrantPackage_Statics::NewProp_thirdPartyAppID = { "thirdPartyAppID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamUser_eventGrantPackage_Parms, thirdPartyAppID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebSteamUser_GrantPackage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamUser_GrantPackage_Statics::NewProp_Callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamUser_GrantPackage_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamUser_GrantPackage_Statics::NewProp_SteamID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamUser_GrantPackage_Statics::NewProp_packageID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamUser_GrantPackage_Statics::NewProp_ipaddress,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamUser_GrantPackage_Statics::NewProp_thirdPartyKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamUser_GrantPackage_Statics::NewProp_thirdPartyAppID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSteamUser_GrantPackage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WebSteamUser.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebSteamUser_GrantPackage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebSteamUser, nullptr, "GrantPackage", nullptr, nullptr, sizeof(WebSteamUser_eventGrantPackage_Parms), Z_Construct_UFunction_UWebSteamUser_GrantPackage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamUser_GrantPackage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebSteamUser_GrantPackage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamUser_GrantPackage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebSteamUser_GrantPackage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebSteamUser_GrantPackage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebSteamUser_ResolveVanityURL_Statics
	{
		struct WebSteamUser_eventResolveVanityURL_Parms
		{
			FScriptDelegate Callback;
			FString Key;
			FString vanityURL;
			EVanityUrlType urlType;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_vanityURL_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_vanityURL;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_urlType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_urlType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSteamUser_ResolveVanityURL_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebSteamUser_ResolveVanityURL_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamUser_eventResolveVanityURL_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebSteamUser_ResolveVanityURL_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamUser_ResolveVanityURL_Statics::NewProp_Callback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSteamUser_ResolveVanityURL_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamUser_ResolveVanityURL_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamUser_eventResolveVanityURL_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UWebSteamUser_ResolveVanityURL_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamUser_ResolveVanityURL_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSteamUser_ResolveVanityURL_Statics::NewProp_vanityURL_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamUser_ResolveVanityURL_Statics::NewProp_vanityURL = { "vanityURL", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamUser_eventResolveVanityURL_Parms, vanityURL), METADATA_PARAMS(Z_Construct_UFunction_UWebSteamUser_ResolveVanityURL_Statics::NewProp_vanityURL_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamUser_ResolveVanityURL_Statics::NewProp_vanityURL_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWebSteamUser_ResolveVanityURL_Statics::NewProp_urlType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UWebSteamUser_ResolveVanityURL_Statics::NewProp_urlType = { "urlType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamUser_eventResolveVanityURL_Parms, urlType), Z_Construct_UEnum_SteamCoreWeb_EVanityUrlType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebSteamUser_ResolveVanityURL_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamUser_ResolveVanityURL_Statics::NewProp_Callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamUser_ResolveVanityURL_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamUser_ResolveVanityURL_Statics::NewProp_vanityURL,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamUser_ResolveVanityURL_Statics::NewProp_urlType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamUser_ResolveVanityURL_Statics::NewProp_urlType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSteamUser_ResolveVanityURL_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WebSteamUser.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebSteamUser_ResolveVanityURL_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebSteamUser, nullptr, "ResolveVanityURL", nullptr, nullptr, sizeof(WebSteamUser_eventResolveVanityURL_Parms), Z_Construct_UFunction_UWebSteamUser_ResolveVanityURL_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamUser_ResolveVanityURL_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebSteamUser_ResolveVanityURL_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamUser_ResolveVanityURL_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebSteamUser_ResolveVanityURL()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebSteamUser_ResolveVanityURL_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UWebSteamUser_NoRegister()
	{
		return UWebSteamUser::StaticClass();
	}
	struct Z_Construct_UClass_UWebSteamUser_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWebSteamUser_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreWebSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWebSteamUser_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWebSteamUser_CheckAppOwnership, "CheckAppOwnership" }, // 3341261927
		{ &Z_Construct_UFunction_UWebSteamUser_GetAppPriceInfo, "GetAppPriceInfo" }, // 1545884317
		{ &Z_Construct_UFunction_UWebSteamUser_GetFriendList, "GetFriendList" }, // 425056439
		{ &Z_Construct_UFunction_UWebSteamUser_GetPlayerBans, "GetPlayerBans" }, // 1836532357
		{ &Z_Construct_UFunction_UWebSteamUser_GetPlayerSummaries, "GetPlayerSummaries" }, // 995229771
		{ &Z_Construct_UFunction_UWebSteamUser_GetPublisherAppOwnership, "GetPublisherAppOwnership" }, // 2305715380
		{ &Z_Construct_UFunction_UWebSteamUser_GetPublisherAppOwnershipChanges, "GetPublisherAppOwnershipChanges" }, // 3474386372
		{ &Z_Construct_UFunction_UWebSteamUser_GetUserGroupList, "GetUserGroupList" }, // 2191186111
		{ &Z_Construct_UFunction_UWebSteamUser_GrantPackage, "GrantPackage" }, // 409904036
		{ &Z_Construct_UFunction_UWebSteamUser_ResolveVanityURL, "ResolveVanityURL" }, // 4032524917
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebSteamUser_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "WebSteamUser.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/WebSteamUser.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWebSteamUser_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWebSteamUser>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UWebSteamUser_Statics::ClassParams = {
		&UWebSteamUser::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UWebSteamUser_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWebSteamUser_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWebSteamUser()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UWebSteamUser_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWebSteamUser, 787290078);
	template<> STEAMCOREWEB_API UClass* StaticClass<UWebSteamUser>()
	{
		return UWebSteamUser::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWebSteamUser(Z_Construct_UClass_UWebSteamUser, &UWebSteamUser::StaticClass, TEXT("/Script/SteamCoreWeb"), TEXT("UWebSteamUser"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWebSteamUser);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
