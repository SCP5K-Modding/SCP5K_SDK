// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCoreWeb/Public/WebRemoteStorage.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWebRemoteStorage() {}
// Cross Module References
	STEAMCOREWEB_API UClass* Z_Construct_UClass_UWebRemoteStorage_NoRegister();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_UWebRemoteStorage();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebSubsystem();
	UPackage* Z_Construct_UPackage__Script_SteamCoreWeb();
	STEAMCOREWEB_API UFunction* Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UWebRemoteStorage::execEnumerateUserPublishedFiles)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FStrProperty,Z_Param_SteamID);
		P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EnumerateUserPublishedFiles(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_SteamID,Z_Param_AppID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebRemoteStorage::execEnumerateUserSubscribedFiles)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FStrProperty,Z_Param_SteamID);
		P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
		P_GET_PROPERTY(FIntProperty,Z_Param_ListType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EnumerateUserSubscribedFiles(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_SteamID,Z_Param_AppID,Z_Param_ListType);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebRemoteStorage::execGetCollectionDetails)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_TARRAY(FString,Z_Param_PublishedFileIDs);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetCollectionDetails(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_PublishedFileIDs);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebRemoteStorage::execGetPublishedFileDetails)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_PublishedFileID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetPublishedFileDetails(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_PublishedFileID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebRemoteStorage::execGetUGCFileDetails)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FStrProperty,Z_Param_SteamID);
		P_GET_PROPERTY(FStrProperty,Z_Param_UGCID);
		P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetUGCFileDetails(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_SteamID,Z_Param_UGCID,Z_Param_AppID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebRemoteStorage::execSetUGCUsedByGC)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FStrProperty,Z_Param_SteamID);
		P_GET_PROPERTY(FStrProperty,Z_Param_UGCID);
		P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
		P_GET_UBOOL(Z_Param_bUsed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetUGCUsedByGC(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_SteamID,Z_Param_UGCID,Z_Param_AppID,Z_Param_bUsed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebRemoteStorage::execSubscribePublishedFile)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FStrProperty,Z_Param_SteamID);
		P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
		P_GET_PROPERTY(FStrProperty,Z_Param_PublishedFileID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SubscribePublishedFile(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_SteamID,Z_Param_AppID,Z_Param_PublishedFileID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebRemoteStorage::execUnsubscribePublishedFile)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FStrProperty,Z_Param_SteamID);
		P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
		P_GET_PROPERTY(FStrProperty,Z_Param_PublishedFileID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UnsubscribePublishedFile(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_SteamID,Z_Param_AppID,Z_Param_PublishedFileID);
		P_NATIVE_END;
	}
	void UWebRemoteStorage::StaticRegisterNativesUWebRemoteStorage()
	{
		UClass* Class = UWebRemoteStorage::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EnumerateUserPublishedFiles", &UWebRemoteStorage::execEnumerateUserPublishedFiles },
			{ "EnumerateUserSubscribedFiles", &UWebRemoteStorage::execEnumerateUserSubscribedFiles },
			{ "GetCollectionDetails", &UWebRemoteStorage::execGetCollectionDetails },
			{ "GetPublishedFileDetails", &UWebRemoteStorage::execGetPublishedFileDetails },
			{ "GetUGCFileDetails", &UWebRemoteStorage::execGetUGCFileDetails },
			{ "SetUGCUsedByGC", &UWebRemoteStorage::execSetUGCUsedByGC },
			{ "SubscribePublishedFile", &UWebRemoteStorage::execSubscribePublishedFile },
			{ "UnsubscribePublishedFile", &UWebRemoteStorage::execUnsubscribePublishedFile },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWebRemoteStorage_EnumerateUserPublishedFiles_Statics
	{
		struct WebRemoteStorage_eventEnumerateUserPublishedFiles_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebRemoteStorage_EnumerateUserPublishedFiles_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebRemoteStorage_EnumerateUserPublishedFiles_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebRemoteStorage_eventEnumerateUserPublishedFiles_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebRemoteStorage_EnumerateUserPublishedFiles_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebRemoteStorage_EnumerateUserPublishedFiles_Statics::NewProp_Callback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebRemoteStorage_EnumerateUserPublishedFiles_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebRemoteStorage_EnumerateUserPublishedFiles_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebRemoteStorage_eventEnumerateUserPublishedFiles_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UWebRemoteStorage_EnumerateUserPublishedFiles_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebRemoteStorage_EnumerateUserPublishedFiles_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebRemoteStorage_EnumerateUserPublishedFiles_Statics::NewProp_SteamID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebRemoteStorage_EnumerateUserPublishedFiles_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebRemoteStorage_eventEnumerateUserPublishedFiles_Parms, SteamID), METADATA_PARAMS(Z_Construct_UFunction_UWebRemoteStorage_EnumerateUserPublishedFiles_Statics::NewProp_SteamID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebRemoteStorage_EnumerateUserPublishedFiles_Statics::NewProp_SteamID_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebRemoteStorage_EnumerateUserPublishedFiles_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebRemoteStorage_eventEnumerateUserPublishedFiles_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebRemoteStorage_EnumerateUserPublishedFiles_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebRemoteStorage_EnumerateUserPublishedFiles_Statics::NewProp_Callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebRemoteStorage_EnumerateUserPublishedFiles_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebRemoteStorage_EnumerateUserPublishedFiles_Statics::NewProp_SteamID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebRemoteStorage_EnumerateUserPublishedFiles_Statics::NewProp_AppID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebRemoteStorage_EnumerateUserPublishedFiles_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WebRemoteStorage.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebRemoteStorage_EnumerateUserPublishedFiles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebRemoteStorage, nullptr, "EnumerateUserPublishedFiles", nullptr, nullptr, sizeof(WebRemoteStorage_eventEnumerateUserPublishedFiles_Parms), Z_Construct_UFunction_UWebRemoteStorage_EnumerateUserPublishedFiles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebRemoteStorage_EnumerateUserPublishedFiles_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebRemoteStorage_EnumerateUserPublishedFiles_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebRemoteStorage_EnumerateUserPublishedFiles_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebRemoteStorage_EnumerateUserPublishedFiles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebRemoteStorage_EnumerateUserPublishedFiles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebRemoteStorage_EnumerateUserSubscribedFiles_Statics
	{
		struct WebRemoteStorage_eventEnumerateUserSubscribedFiles_Parms
		{
			FScriptDelegate Callback;
			FString Key;
			FString SteamID;
			int32 AppID;
			int32 ListType;
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
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ListType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebRemoteStorage_EnumerateUserSubscribedFiles_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebRemoteStorage_EnumerateUserSubscribedFiles_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebRemoteStorage_eventEnumerateUserSubscribedFiles_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebRemoteStorage_EnumerateUserSubscribedFiles_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebRemoteStorage_EnumerateUserSubscribedFiles_Statics::NewProp_Callback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebRemoteStorage_EnumerateUserSubscribedFiles_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebRemoteStorage_EnumerateUserSubscribedFiles_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebRemoteStorage_eventEnumerateUserSubscribedFiles_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UWebRemoteStorage_EnumerateUserSubscribedFiles_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebRemoteStorage_EnumerateUserSubscribedFiles_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebRemoteStorage_EnumerateUserSubscribedFiles_Statics::NewProp_SteamID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebRemoteStorage_EnumerateUserSubscribedFiles_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebRemoteStorage_eventEnumerateUserSubscribedFiles_Parms, SteamID), METADATA_PARAMS(Z_Construct_UFunction_UWebRemoteStorage_EnumerateUserSubscribedFiles_Statics::NewProp_SteamID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebRemoteStorage_EnumerateUserSubscribedFiles_Statics::NewProp_SteamID_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebRemoteStorage_EnumerateUserSubscribedFiles_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebRemoteStorage_eventEnumerateUserSubscribedFiles_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebRemoteStorage_EnumerateUserSubscribedFiles_Statics::NewProp_ListType = { "ListType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebRemoteStorage_eventEnumerateUserSubscribedFiles_Parms, ListType), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebRemoteStorage_EnumerateUserSubscribedFiles_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebRemoteStorage_EnumerateUserSubscribedFiles_Statics::NewProp_Callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebRemoteStorage_EnumerateUserSubscribedFiles_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebRemoteStorage_EnumerateUserSubscribedFiles_Statics::NewProp_SteamID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebRemoteStorage_EnumerateUserSubscribedFiles_Statics::NewProp_AppID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebRemoteStorage_EnumerateUserSubscribedFiles_Statics::NewProp_ListType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebRemoteStorage_EnumerateUserSubscribedFiles_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WebRemoteStorage.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebRemoteStorage_EnumerateUserSubscribedFiles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebRemoteStorage, nullptr, "EnumerateUserSubscribedFiles", nullptr, nullptr, sizeof(WebRemoteStorage_eventEnumerateUserSubscribedFiles_Parms), Z_Construct_UFunction_UWebRemoteStorage_EnumerateUserSubscribedFiles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebRemoteStorage_EnumerateUserSubscribedFiles_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebRemoteStorage_EnumerateUserSubscribedFiles_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebRemoteStorage_EnumerateUserSubscribedFiles_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebRemoteStorage_EnumerateUserSubscribedFiles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebRemoteStorage_EnumerateUserSubscribedFiles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebRemoteStorage_GetCollectionDetails_Statics
	{
		struct WebRemoteStorage_eventGetCollectionDetails_Parms
		{
			FScriptDelegate Callback;
			TArray<FString> PublishedFileIDs;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_Callback;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PublishedFileIDs_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PublishedFileIDs;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebRemoteStorage_GetCollectionDetails_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebRemoteStorage_GetCollectionDetails_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebRemoteStorage_eventGetCollectionDetails_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebRemoteStorage_GetCollectionDetails_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebRemoteStorage_GetCollectionDetails_Statics::NewProp_Callback_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebRemoteStorage_GetCollectionDetails_Statics::NewProp_PublishedFileIDs_Inner = { "PublishedFileIDs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWebRemoteStorage_GetCollectionDetails_Statics::NewProp_PublishedFileIDs = { "PublishedFileIDs", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebRemoteStorage_eventGetCollectionDetails_Parms, PublishedFileIDs), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebRemoteStorage_GetCollectionDetails_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebRemoteStorage_GetCollectionDetails_Statics::NewProp_Callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebRemoteStorage_GetCollectionDetails_Statics::NewProp_PublishedFileIDs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebRemoteStorage_GetCollectionDetails_Statics::NewProp_PublishedFileIDs,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebRemoteStorage_GetCollectionDetails_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WebRemoteStorage.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebRemoteStorage_GetCollectionDetails_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebRemoteStorage, nullptr, "GetCollectionDetails", nullptr, nullptr, sizeof(WebRemoteStorage_eventGetCollectionDetails_Parms), Z_Construct_UFunction_UWebRemoteStorage_GetCollectionDetails_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebRemoteStorage_GetCollectionDetails_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebRemoteStorage_GetCollectionDetails_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebRemoteStorage_GetCollectionDetails_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebRemoteStorage_GetCollectionDetails()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebRemoteStorage_GetCollectionDetails_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebRemoteStorage_GetPublishedFileDetails_Statics
	{
		struct WebRemoteStorage_eventGetPublishedFileDetails_Parms
		{
			FScriptDelegate Callback;
			FString PublishedFileID;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_Callback;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PublishedFileID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PublishedFileID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebRemoteStorage_GetPublishedFileDetails_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebRemoteStorage_GetPublishedFileDetails_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebRemoteStorage_eventGetPublishedFileDetails_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebRemoteStorage_GetPublishedFileDetails_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebRemoteStorage_GetPublishedFileDetails_Statics::NewProp_Callback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebRemoteStorage_GetPublishedFileDetails_Statics::NewProp_PublishedFileID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebRemoteStorage_GetPublishedFileDetails_Statics::NewProp_PublishedFileID = { "PublishedFileID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebRemoteStorage_eventGetPublishedFileDetails_Parms, PublishedFileID), METADATA_PARAMS(Z_Construct_UFunction_UWebRemoteStorage_GetPublishedFileDetails_Statics::NewProp_PublishedFileID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebRemoteStorage_GetPublishedFileDetails_Statics::NewProp_PublishedFileID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebRemoteStorage_GetPublishedFileDetails_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebRemoteStorage_GetPublishedFileDetails_Statics::NewProp_Callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebRemoteStorage_GetPublishedFileDetails_Statics::NewProp_PublishedFileID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebRemoteStorage_GetPublishedFileDetails_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WebRemoteStorage.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebRemoteStorage_GetPublishedFileDetails_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebRemoteStorage, nullptr, "GetPublishedFileDetails", nullptr, nullptr, sizeof(WebRemoteStorage_eventGetPublishedFileDetails_Parms), Z_Construct_UFunction_UWebRemoteStorage_GetPublishedFileDetails_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebRemoteStorage_GetPublishedFileDetails_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebRemoteStorage_GetPublishedFileDetails_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebRemoteStorage_GetPublishedFileDetails_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebRemoteStorage_GetPublishedFileDetails()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebRemoteStorage_GetPublishedFileDetails_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebRemoteStorage_GetUGCFileDetails_Statics
	{
		struct WebRemoteStorage_eventGetUGCFileDetails_Parms
		{
			FScriptDelegate Callback;
			FString Key;
			FString SteamID;
			FString UGCID;
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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UGCID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UGCID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AppID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebRemoteStorage_GetUGCFileDetails_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebRemoteStorage_GetUGCFileDetails_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebRemoteStorage_eventGetUGCFileDetails_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebRemoteStorage_GetUGCFileDetails_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebRemoteStorage_GetUGCFileDetails_Statics::NewProp_Callback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebRemoteStorage_GetUGCFileDetails_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebRemoteStorage_GetUGCFileDetails_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebRemoteStorage_eventGetUGCFileDetails_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UWebRemoteStorage_GetUGCFileDetails_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebRemoteStorage_GetUGCFileDetails_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebRemoteStorage_GetUGCFileDetails_Statics::NewProp_SteamID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebRemoteStorage_GetUGCFileDetails_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebRemoteStorage_eventGetUGCFileDetails_Parms, SteamID), METADATA_PARAMS(Z_Construct_UFunction_UWebRemoteStorage_GetUGCFileDetails_Statics::NewProp_SteamID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebRemoteStorage_GetUGCFileDetails_Statics::NewProp_SteamID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebRemoteStorage_GetUGCFileDetails_Statics::NewProp_UGCID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebRemoteStorage_GetUGCFileDetails_Statics::NewProp_UGCID = { "UGCID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebRemoteStorage_eventGetUGCFileDetails_Parms, UGCID), METADATA_PARAMS(Z_Construct_UFunction_UWebRemoteStorage_GetUGCFileDetails_Statics::NewProp_UGCID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebRemoteStorage_GetUGCFileDetails_Statics::NewProp_UGCID_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebRemoteStorage_GetUGCFileDetails_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebRemoteStorage_eventGetUGCFileDetails_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebRemoteStorage_GetUGCFileDetails_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebRemoteStorage_GetUGCFileDetails_Statics::NewProp_Callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebRemoteStorage_GetUGCFileDetails_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebRemoteStorage_GetUGCFileDetails_Statics::NewProp_SteamID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebRemoteStorage_GetUGCFileDetails_Statics::NewProp_UGCID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebRemoteStorage_GetUGCFileDetails_Statics::NewProp_AppID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebRemoteStorage_GetUGCFileDetails_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WebRemoteStorage.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebRemoteStorage_GetUGCFileDetails_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebRemoteStorage, nullptr, "GetUGCFileDetails", nullptr, nullptr, sizeof(WebRemoteStorage_eventGetUGCFileDetails_Parms), Z_Construct_UFunction_UWebRemoteStorage_GetUGCFileDetails_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebRemoteStorage_GetUGCFileDetails_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebRemoteStorage_GetUGCFileDetails_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebRemoteStorage_GetUGCFileDetails_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebRemoteStorage_GetUGCFileDetails()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebRemoteStorage_GetUGCFileDetails_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebRemoteStorage_SetUGCUsedByGC_Statics
	{
		struct WebRemoteStorage_eventSetUGCUsedByGC_Parms
		{
			FScriptDelegate Callback;
			FString Key;
			FString SteamID;
			FString UGCID;
			int32 AppID;
			bool bUsed;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UGCID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UGCID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AppID;
		static void NewProp_bUsed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUsed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebRemoteStorage_SetUGCUsedByGC_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebRemoteStorage_SetUGCUsedByGC_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebRemoteStorage_eventSetUGCUsedByGC_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebRemoteStorage_SetUGCUsedByGC_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebRemoteStorage_SetUGCUsedByGC_Statics::NewProp_Callback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebRemoteStorage_SetUGCUsedByGC_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebRemoteStorage_SetUGCUsedByGC_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebRemoteStorage_eventSetUGCUsedByGC_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UWebRemoteStorage_SetUGCUsedByGC_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebRemoteStorage_SetUGCUsedByGC_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebRemoteStorage_SetUGCUsedByGC_Statics::NewProp_SteamID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebRemoteStorage_SetUGCUsedByGC_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebRemoteStorage_eventSetUGCUsedByGC_Parms, SteamID), METADATA_PARAMS(Z_Construct_UFunction_UWebRemoteStorage_SetUGCUsedByGC_Statics::NewProp_SteamID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebRemoteStorage_SetUGCUsedByGC_Statics::NewProp_SteamID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebRemoteStorage_SetUGCUsedByGC_Statics::NewProp_UGCID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebRemoteStorage_SetUGCUsedByGC_Statics::NewProp_UGCID = { "UGCID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebRemoteStorage_eventSetUGCUsedByGC_Parms, UGCID), METADATA_PARAMS(Z_Construct_UFunction_UWebRemoteStorage_SetUGCUsedByGC_Statics::NewProp_UGCID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebRemoteStorage_SetUGCUsedByGC_Statics::NewProp_UGCID_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebRemoteStorage_SetUGCUsedByGC_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebRemoteStorage_eventSetUGCUsedByGC_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UWebRemoteStorage_SetUGCUsedByGC_Statics::NewProp_bUsed_SetBit(void* Obj)
	{
		((WebRemoteStorage_eventSetUGCUsedByGC_Parms*)Obj)->bUsed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWebRemoteStorage_SetUGCUsedByGC_Statics::NewProp_bUsed = { "bUsed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WebRemoteStorage_eventSetUGCUsedByGC_Parms), &Z_Construct_UFunction_UWebRemoteStorage_SetUGCUsedByGC_Statics::NewProp_bUsed_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebRemoteStorage_SetUGCUsedByGC_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebRemoteStorage_SetUGCUsedByGC_Statics::NewProp_Callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebRemoteStorage_SetUGCUsedByGC_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebRemoteStorage_SetUGCUsedByGC_Statics::NewProp_SteamID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebRemoteStorage_SetUGCUsedByGC_Statics::NewProp_UGCID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebRemoteStorage_SetUGCUsedByGC_Statics::NewProp_AppID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebRemoteStorage_SetUGCUsedByGC_Statics::NewProp_bUsed,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebRemoteStorage_SetUGCUsedByGC_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WebRemoteStorage.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebRemoteStorage_SetUGCUsedByGC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebRemoteStorage, nullptr, "SetUGCUsedByGC", nullptr, nullptr, sizeof(WebRemoteStorage_eventSetUGCUsedByGC_Parms), Z_Construct_UFunction_UWebRemoteStorage_SetUGCUsedByGC_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebRemoteStorage_SetUGCUsedByGC_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebRemoteStorage_SetUGCUsedByGC_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebRemoteStorage_SetUGCUsedByGC_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebRemoteStorage_SetUGCUsedByGC()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebRemoteStorage_SetUGCUsedByGC_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebRemoteStorage_SubscribePublishedFile_Statics
	{
		struct WebRemoteStorage_eventSubscribePublishedFile_Parms
		{
			FScriptDelegate Callback;
			FString Key;
			FString SteamID;
			int32 AppID;
			FString PublishedFileID;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PublishedFileID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PublishedFileID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebRemoteStorage_SubscribePublishedFile_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebRemoteStorage_SubscribePublishedFile_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebRemoteStorage_eventSubscribePublishedFile_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebRemoteStorage_SubscribePublishedFile_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebRemoteStorage_SubscribePublishedFile_Statics::NewProp_Callback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebRemoteStorage_SubscribePublishedFile_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebRemoteStorage_SubscribePublishedFile_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebRemoteStorage_eventSubscribePublishedFile_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UWebRemoteStorage_SubscribePublishedFile_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebRemoteStorage_SubscribePublishedFile_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebRemoteStorage_SubscribePublishedFile_Statics::NewProp_SteamID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebRemoteStorage_SubscribePublishedFile_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebRemoteStorage_eventSubscribePublishedFile_Parms, SteamID), METADATA_PARAMS(Z_Construct_UFunction_UWebRemoteStorage_SubscribePublishedFile_Statics::NewProp_SteamID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebRemoteStorage_SubscribePublishedFile_Statics::NewProp_SteamID_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebRemoteStorage_SubscribePublishedFile_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebRemoteStorage_eventSubscribePublishedFile_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebRemoteStorage_SubscribePublishedFile_Statics::NewProp_PublishedFileID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebRemoteStorage_SubscribePublishedFile_Statics::NewProp_PublishedFileID = { "PublishedFileID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebRemoteStorage_eventSubscribePublishedFile_Parms, PublishedFileID), METADATA_PARAMS(Z_Construct_UFunction_UWebRemoteStorage_SubscribePublishedFile_Statics::NewProp_PublishedFileID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebRemoteStorage_SubscribePublishedFile_Statics::NewProp_PublishedFileID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebRemoteStorage_SubscribePublishedFile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebRemoteStorage_SubscribePublishedFile_Statics::NewProp_Callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebRemoteStorage_SubscribePublishedFile_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebRemoteStorage_SubscribePublishedFile_Statics::NewProp_SteamID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebRemoteStorage_SubscribePublishedFile_Statics::NewProp_AppID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebRemoteStorage_SubscribePublishedFile_Statics::NewProp_PublishedFileID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebRemoteStorage_SubscribePublishedFile_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WebRemoteStorage.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebRemoteStorage_SubscribePublishedFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebRemoteStorage, nullptr, "SubscribePublishedFile", nullptr, nullptr, sizeof(WebRemoteStorage_eventSubscribePublishedFile_Parms), Z_Construct_UFunction_UWebRemoteStorage_SubscribePublishedFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebRemoteStorage_SubscribePublishedFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebRemoteStorage_SubscribePublishedFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebRemoteStorage_SubscribePublishedFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebRemoteStorage_SubscribePublishedFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebRemoteStorage_SubscribePublishedFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebRemoteStorage_UnsubscribePublishedFile_Statics
	{
		struct WebRemoteStorage_eventUnsubscribePublishedFile_Parms
		{
			FScriptDelegate Callback;
			FString Key;
			FString SteamID;
			int32 AppID;
			FString PublishedFileID;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PublishedFileID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PublishedFileID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebRemoteStorage_UnsubscribePublishedFile_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebRemoteStorage_UnsubscribePublishedFile_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebRemoteStorage_eventUnsubscribePublishedFile_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebRemoteStorage_UnsubscribePublishedFile_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebRemoteStorage_UnsubscribePublishedFile_Statics::NewProp_Callback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebRemoteStorage_UnsubscribePublishedFile_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebRemoteStorage_UnsubscribePublishedFile_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebRemoteStorage_eventUnsubscribePublishedFile_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UWebRemoteStorage_UnsubscribePublishedFile_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebRemoteStorage_UnsubscribePublishedFile_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebRemoteStorage_UnsubscribePublishedFile_Statics::NewProp_SteamID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebRemoteStorage_UnsubscribePublishedFile_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebRemoteStorage_eventUnsubscribePublishedFile_Parms, SteamID), METADATA_PARAMS(Z_Construct_UFunction_UWebRemoteStorage_UnsubscribePublishedFile_Statics::NewProp_SteamID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebRemoteStorage_UnsubscribePublishedFile_Statics::NewProp_SteamID_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebRemoteStorage_UnsubscribePublishedFile_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebRemoteStorage_eventUnsubscribePublishedFile_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebRemoteStorage_UnsubscribePublishedFile_Statics::NewProp_PublishedFileID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebRemoteStorage_UnsubscribePublishedFile_Statics::NewProp_PublishedFileID = { "PublishedFileID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebRemoteStorage_eventUnsubscribePublishedFile_Parms, PublishedFileID), METADATA_PARAMS(Z_Construct_UFunction_UWebRemoteStorage_UnsubscribePublishedFile_Statics::NewProp_PublishedFileID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebRemoteStorage_UnsubscribePublishedFile_Statics::NewProp_PublishedFileID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebRemoteStorage_UnsubscribePublishedFile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebRemoteStorage_UnsubscribePublishedFile_Statics::NewProp_Callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebRemoteStorage_UnsubscribePublishedFile_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebRemoteStorage_UnsubscribePublishedFile_Statics::NewProp_SteamID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebRemoteStorage_UnsubscribePublishedFile_Statics::NewProp_AppID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebRemoteStorage_UnsubscribePublishedFile_Statics::NewProp_PublishedFileID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebRemoteStorage_UnsubscribePublishedFile_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WebRemoteStorage.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebRemoteStorage_UnsubscribePublishedFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebRemoteStorage, nullptr, "UnsubscribePublishedFile", nullptr, nullptr, sizeof(WebRemoteStorage_eventUnsubscribePublishedFile_Parms), Z_Construct_UFunction_UWebRemoteStorage_UnsubscribePublishedFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebRemoteStorage_UnsubscribePublishedFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebRemoteStorage_UnsubscribePublishedFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebRemoteStorage_UnsubscribePublishedFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebRemoteStorage_UnsubscribePublishedFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebRemoteStorage_UnsubscribePublishedFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UWebRemoteStorage_NoRegister()
	{
		return UWebRemoteStorage::StaticClass();
	}
	struct Z_Construct_UClass_UWebRemoteStorage_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWebRemoteStorage_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreWebSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWebRemoteStorage_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWebRemoteStorage_EnumerateUserPublishedFiles, "EnumerateUserPublishedFiles" }, // 3580237220
		{ &Z_Construct_UFunction_UWebRemoteStorage_EnumerateUserSubscribedFiles, "EnumerateUserSubscribedFiles" }, // 3722072969
		{ &Z_Construct_UFunction_UWebRemoteStorage_GetCollectionDetails, "GetCollectionDetails" }, // 598555729
		{ &Z_Construct_UFunction_UWebRemoteStorage_GetPublishedFileDetails, "GetPublishedFileDetails" }, // 2138647803
		{ &Z_Construct_UFunction_UWebRemoteStorage_GetUGCFileDetails, "GetUGCFileDetails" }, // 96378635
		{ &Z_Construct_UFunction_UWebRemoteStorage_SetUGCUsedByGC, "SetUGCUsedByGC" }, // 482918511
		{ &Z_Construct_UFunction_UWebRemoteStorage_SubscribePublishedFile, "SubscribePublishedFile" }, // 1753310106
		{ &Z_Construct_UFunction_UWebRemoteStorage_UnsubscribePublishedFile, "UnsubscribePublishedFile" }, // 945265657
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebRemoteStorage_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "WebRemoteStorage.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/WebRemoteStorage.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWebRemoteStorage_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWebRemoteStorage>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UWebRemoteStorage_Statics::ClassParams = {
		&UWebRemoteStorage::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UWebRemoteStorage_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWebRemoteStorage_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWebRemoteStorage()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UWebRemoteStorage_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWebRemoteStorage, 2749204824);
	template<> STEAMCOREWEB_API UClass* StaticClass<UWebRemoteStorage>()
	{
		return UWebRemoteStorage::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWebRemoteStorage(Z_Construct_UClass_UWebRemoteStorage, &UWebRemoteStorage::StaticClass, TEXT("/Script/SteamCoreWeb"), TEXT("UWebRemoteStorage"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWebRemoteStorage);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
