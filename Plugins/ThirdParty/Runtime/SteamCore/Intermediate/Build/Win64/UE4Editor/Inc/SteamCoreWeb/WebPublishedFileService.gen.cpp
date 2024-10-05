// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCoreWeb/Public/WebPublishedFileService.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWebPublishedFileService() {}
// Cross Module References
	STEAMCOREWEB_API UClass* Z_Construct_UClass_UWebPublishedFileService_NoRegister();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_UWebPublishedFileService();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebSubsystem();
	UPackage* Z_Construct_UPackage__Script_SteamCoreWeb();
	STEAMCOREWEB_API UFunction* Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UWebPublishedFileService::execQueryFiles)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FIntProperty,Z_Param_QueryType);
		P_GET_PROPERTY(FIntProperty,Z_Param_Page);
		P_GET_PROPERTY(FStrProperty,Z_Param_Cursor);
		P_GET_PROPERTY(FIntProperty,Z_Param_numPerPage);
		P_GET_PROPERTY(FIntProperty,Z_Param_CreatorAppID);
		P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
		P_GET_PROPERTY(FStrProperty,Z_Param_requiredTags);
		P_GET_PROPERTY(FStrProperty,Z_Param_excludedTags);
		P_GET_UBOOL(Z_Param_bMatchAllTags);
		P_GET_PROPERTY(FStrProperty,Z_Param_requiredFlags);
		P_GET_PROPERTY(FStrProperty,Z_Param_omittedFlags);
		P_GET_PROPERTY(FStrProperty,Z_Param_SearchText);
		P_GET_PROPERTY(FIntProperty,Z_Param_FileType);
		P_GET_PROPERTY(FStrProperty,Z_Param_ChildPublishedFileId);
		P_GET_PROPERTY(FIntProperty,Z_Param_Days);
		P_GET_UBOOL(Z_Param_bIncludeRecentVotesOnly);
		P_GET_PROPERTY(FIntProperty,Z_Param_cacheMaxAgeSeconds);
		P_GET_PROPERTY(FIntProperty,Z_Param_Language);
		P_GET_PROPERTY(FStrProperty,Z_Param_requiredKvTags);
		P_GET_UBOOL(Z_Param_bTotalOnly);
		P_GET_UBOOL(Z_Param_bIDsOnly);
		P_GET_UBOOL(Z_Param_bReturnVoteData);
		P_GET_UBOOL(Z_Param_bReturnTags);
		P_GET_UBOOL(Z_Param_bReturnKvTags);
		P_GET_UBOOL(Z_Param_bReturnPreviews);
		P_GET_UBOOL(Z_Param_bReturnChildren);
		P_GET_UBOOL(Z_Param_bReturnShortDescription);
		P_GET_UBOOL(Z_Param_bReturnForSaleData);
		P_GET_UBOOL(Z_Param_bReturnMetadata);
		P_GET_PROPERTY(FIntProperty,Z_Param_returnPlaytimeStats);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->QueryFiles(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_QueryType,Z_Param_Page,Z_Param_Cursor,Z_Param_numPerPage,Z_Param_CreatorAppID,Z_Param_AppID,Z_Param_requiredTags,Z_Param_excludedTags,Z_Param_bMatchAllTags,Z_Param_requiredFlags,Z_Param_omittedFlags,Z_Param_SearchText,Z_Param_FileType,Z_Param_ChildPublishedFileId,Z_Param_Days,Z_Param_bIncludeRecentVotesOnly,Z_Param_cacheMaxAgeSeconds,Z_Param_Language,Z_Param_requiredKvTags,Z_Param_bTotalOnly,Z_Param_bIDsOnly,Z_Param_bReturnVoteData,Z_Param_bReturnTags,Z_Param_bReturnKvTags,Z_Param_bReturnPreviews,Z_Param_bReturnChildren,Z_Param_bReturnShortDescription,Z_Param_bReturnForSaleData,Z_Param_bReturnMetadata,Z_Param_returnPlaytimeStats);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebPublishedFileService::execSetDeveloperMetadata)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FStrProperty,Z_Param_PublishedFileID);
		P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
		P_GET_PROPERTY(FStrProperty,Z_Param_MetaData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDeveloperMetadata(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_PublishedFileID,Z_Param_AppID,Z_Param_MetaData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebPublishedFileService::execUpdateBanStatus)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FStrProperty,Z_Param_PublishedFileID);
		P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
		P_GET_UBOOL(Z_Param_bBanned);
		P_GET_PROPERTY(FStrProperty,Z_Param_Reason);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateBanStatus(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_PublishedFileID,Z_Param_AppID,Z_Param_bBanned,Z_Param_Reason);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebPublishedFileService::execUpdateIncompatibleStatus)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FStrProperty,Z_Param_PublishedFileID);
		P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
		P_GET_UBOOL(Z_Param_bIncompatible);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateIncompatibleStatus(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_PublishedFileID,Z_Param_AppID,Z_Param_bIncompatible);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebPublishedFileService::execUpdateTags)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FStrProperty,Z_Param_PublishedFileID);
		P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
		P_GET_PROPERTY(FStrProperty,Z_Param_addTags);
		P_GET_PROPERTY(FStrProperty,Z_Param_removeTags);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateTags(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_PublishedFileID,Z_Param_AppID,Z_Param_addTags,Z_Param_removeTags);
		P_NATIVE_END;
	}
	void UWebPublishedFileService::StaticRegisterNativesUWebPublishedFileService()
	{
		UClass* Class = UWebPublishedFileService::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "QueryFiles", &UWebPublishedFileService::execQueryFiles },
			{ "SetDeveloperMetadata", &UWebPublishedFileService::execSetDeveloperMetadata },
			{ "UpdateBanStatus", &UWebPublishedFileService::execUpdateBanStatus },
			{ "UpdateIncompatibleStatus", &UWebPublishedFileService::execUpdateIncompatibleStatus },
			{ "UpdateTags", &UWebPublishedFileService::execUpdateTags },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics
	{
		struct WebPublishedFileService_eventQueryFiles_Parms
		{
			FScriptDelegate Callback;
			FString Key;
			int32 QueryType;
			int32 Page;
			FString Cursor;
			int32 numPerPage;
			int32 CreatorAppID;
			int32 AppID;
			FString requiredTags;
			FString excludedTags;
			bool bMatchAllTags;
			FString requiredFlags;
			FString omittedFlags;
			FString SearchText;
			int32 FileType;
			FString ChildPublishedFileId;
			int32 Days;
			bool bIncludeRecentVotesOnly;
			int32 cacheMaxAgeSeconds;
			int32 Language;
			FString requiredKvTags;
			bool bTotalOnly;
			bool bIDsOnly;
			bool bReturnVoteData;
			bool bReturnTags;
			bool bReturnKvTags;
			bool bReturnPreviews;
			bool bReturnChildren;
			bool bReturnShortDescription;
			bool bReturnForSaleData;
			bool bReturnMetadata;
			int32 returnPlaytimeStats;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_Callback;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_QueryType;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Page;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Cursor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Cursor;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_numPerPage;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CreatorAppID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AppID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_requiredTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_requiredTags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_excludedTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_excludedTags;
		static void NewProp_bMatchAllTags_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMatchAllTags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_requiredFlags_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_requiredFlags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_omittedFlags_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_omittedFlags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SearchText_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SearchText;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_FileType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChildPublishedFileId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ChildPublishedFileId;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Days;
		static void NewProp_bIncludeRecentVotesOnly_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIncludeRecentVotesOnly;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_cacheMaxAgeSeconds;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Language;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_requiredKvTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_requiredKvTags;
		static void NewProp_bTotalOnly_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTotalOnly;
		static void NewProp_bIDsOnly_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIDsOnly;
		static void NewProp_bReturnVoteData_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReturnVoteData;
		static void NewProp_bReturnTags_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReturnTags;
		static void NewProp_bReturnKvTags_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReturnKvTags;
		static void NewProp_bReturnPreviews_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReturnPreviews;
		static void NewProp_bReturnChildren_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReturnChildren;
		static void NewProp_bReturnShortDescription_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReturnShortDescription;
		static void NewProp_bReturnForSaleData_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReturnForSaleData;
		static void NewProp_bReturnMetadata_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReturnMetadata;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_returnPlaytimeStats;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebPublishedFileService_eventQueryFiles_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_Callback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebPublishedFileService_eventQueryFiles_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_QueryType = { "QueryType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebPublishedFileService_eventQueryFiles_Parms, QueryType), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_Page = { "Page", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebPublishedFileService_eventQueryFiles_Parms, Page), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_Cursor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_Cursor = { "Cursor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebPublishedFileService_eventQueryFiles_Parms, Cursor), METADATA_PARAMS(Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_Cursor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_Cursor_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_numPerPage = { "numPerPage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebPublishedFileService_eventQueryFiles_Parms, numPerPage), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_CreatorAppID = { "CreatorAppID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebPublishedFileService_eventQueryFiles_Parms, CreatorAppID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebPublishedFileService_eventQueryFiles_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_requiredTags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_requiredTags = { "requiredTags", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebPublishedFileService_eventQueryFiles_Parms, requiredTags), METADATA_PARAMS(Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_requiredTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_requiredTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_excludedTags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_excludedTags = { "excludedTags", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebPublishedFileService_eventQueryFiles_Parms, excludedTags), METADATA_PARAMS(Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_excludedTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_excludedTags_MetaData)) };
	void Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_bMatchAllTags_SetBit(void* Obj)
	{
		((WebPublishedFileService_eventQueryFiles_Parms*)Obj)->bMatchAllTags = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_bMatchAllTags = { "bMatchAllTags", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WebPublishedFileService_eventQueryFiles_Parms), &Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_bMatchAllTags_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_requiredFlags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_requiredFlags = { "requiredFlags", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebPublishedFileService_eventQueryFiles_Parms, requiredFlags), METADATA_PARAMS(Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_requiredFlags_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_requiredFlags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_omittedFlags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_omittedFlags = { "omittedFlags", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebPublishedFileService_eventQueryFiles_Parms, omittedFlags), METADATA_PARAMS(Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_omittedFlags_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_omittedFlags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_SearchText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_SearchText = { "SearchText", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebPublishedFileService_eventQueryFiles_Parms, SearchText), METADATA_PARAMS(Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_SearchText_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_SearchText_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_FileType = { "FileType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebPublishedFileService_eventQueryFiles_Parms, FileType), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_ChildPublishedFileId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_ChildPublishedFileId = { "ChildPublishedFileId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebPublishedFileService_eventQueryFiles_Parms, ChildPublishedFileId), METADATA_PARAMS(Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_ChildPublishedFileId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_ChildPublishedFileId_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_Days = { "Days", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebPublishedFileService_eventQueryFiles_Parms, Days), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_bIncludeRecentVotesOnly_SetBit(void* Obj)
	{
		((WebPublishedFileService_eventQueryFiles_Parms*)Obj)->bIncludeRecentVotesOnly = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_bIncludeRecentVotesOnly = { "bIncludeRecentVotesOnly", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WebPublishedFileService_eventQueryFiles_Parms), &Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_bIncludeRecentVotesOnly_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_cacheMaxAgeSeconds = { "cacheMaxAgeSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebPublishedFileService_eventQueryFiles_Parms, cacheMaxAgeSeconds), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_Language = { "Language", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebPublishedFileService_eventQueryFiles_Parms, Language), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_requiredKvTags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_requiredKvTags = { "requiredKvTags", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebPublishedFileService_eventQueryFiles_Parms, requiredKvTags), METADATA_PARAMS(Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_requiredKvTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_requiredKvTags_MetaData)) };
	void Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_bTotalOnly_SetBit(void* Obj)
	{
		((WebPublishedFileService_eventQueryFiles_Parms*)Obj)->bTotalOnly = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_bTotalOnly = { "bTotalOnly", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WebPublishedFileService_eventQueryFiles_Parms), &Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_bTotalOnly_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_bIDsOnly_SetBit(void* Obj)
	{
		((WebPublishedFileService_eventQueryFiles_Parms*)Obj)->bIDsOnly = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_bIDsOnly = { "bIDsOnly", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WebPublishedFileService_eventQueryFiles_Parms), &Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_bIDsOnly_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_bReturnVoteData_SetBit(void* Obj)
	{
		((WebPublishedFileService_eventQueryFiles_Parms*)Obj)->bReturnVoteData = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_bReturnVoteData = { "bReturnVoteData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WebPublishedFileService_eventQueryFiles_Parms), &Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_bReturnVoteData_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_bReturnTags_SetBit(void* Obj)
	{
		((WebPublishedFileService_eventQueryFiles_Parms*)Obj)->bReturnTags = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_bReturnTags = { "bReturnTags", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WebPublishedFileService_eventQueryFiles_Parms), &Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_bReturnTags_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_bReturnKvTags_SetBit(void* Obj)
	{
		((WebPublishedFileService_eventQueryFiles_Parms*)Obj)->bReturnKvTags = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_bReturnKvTags = { "bReturnKvTags", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WebPublishedFileService_eventQueryFiles_Parms), &Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_bReturnKvTags_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_bReturnPreviews_SetBit(void* Obj)
	{
		((WebPublishedFileService_eventQueryFiles_Parms*)Obj)->bReturnPreviews = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_bReturnPreviews = { "bReturnPreviews", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WebPublishedFileService_eventQueryFiles_Parms), &Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_bReturnPreviews_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_bReturnChildren_SetBit(void* Obj)
	{
		((WebPublishedFileService_eventQueryFiles_Parms*)Obj)->bReturnChildren = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_bReturnChildren = { "bReturnChildren", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WebPublishedFileService_eventQueryFiles_Parms), &Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_bReturnChildren_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_bReturnShortDescription_SetBit(void* Obj)
	{
		((WebPublishedFileService_eventQueryFiles_Parms*)Obj)->bReturnShortDescription = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_bReturnShortDescription = { "bReturnShortDescription", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WebPublishedFileService_eventQueryFiles_Parms), &Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_bReturnShortDescription_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_bReturnForSaleData_SetBit(void* Obj)
	{
		((WebPublishedFileService_eventQueryFiles_Parms*)Obj)->bReturnForSaleData = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_bReturnForSaleData = { "bReturnForSaleData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WebPublishedFileService_eventQueryFiles_Parms), &Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_bReturnForSaleData_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_bReturnMetadata_SetBit(void* Obj)
	{
		((WebPublishedFileService_eventQueryFiles_Parms*)Obj)->bReturnMetadata = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_bReturnMetadata = { "bReturnMetadata", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WebPublishedFileService_eventQueryFiles_Parms), &Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_bReturnMetadata_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_returnPlaytimeStats = { "returnPlaytimeStats", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebPublishedFileService_eventQueryFiles_Parms, returnPlaytimeStats), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_Callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_QueryType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_Page,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_Cursor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_numPerPage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_CreatorAppID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_AppID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_requiredTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_excludedTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_bMatchAllTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_requiredFlags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_omittedFlags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_SearchText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_FileType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_ChildPublishedFileId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_Days,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_bIncludeRecentVotesOnly,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_cacheMaxAgeSeconds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_Language,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_requiredKvTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_bTotalOnly,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_bIDsOnly,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_bReturnVoteData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_bReturnTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_bReturnKvTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_bReturnPreviews,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_bReturnChildren,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_bReturnShortDescription,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_bReturnForSaleData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_bReturnMetadata,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::NewProp_returnPlaytimeStats,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WebPublishedFileService.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebPublishedFileService, nullptr, "QueryFiles", nullptr, nullptr, sizeof(WebPublishedFileService_eventQueryFiles_Parms), Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebPublishedFileService_QueryFiles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebPublishedFileService_QueryFiles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebPublishedFileService_SetDeveloperMetadata_Statics
	{
		struct WebPublishedFileService_eventSetDeveloperMetadata_Parms
		{
			FScriptDelegate Callback;
			FString Key;
			FString PublishedFileID;
			int32 AppID;
			FString MetaData;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PublishedFileID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PublishedFileID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AppID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MetaData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MetaData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebPublishedFileService_SetDeveloperMetadata_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebPublishedFileService_SetDeveloperMetadata_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebPublishedFileService_eventSetDeveloperMetadata_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebPublishedFileService_SetDeveloperMetadata_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebPublishedFileService_SetDeveloperMetadata_Statics::NewProp_Callback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebPublishedFileService_SetDeveloperMetadata_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebPublishedFileService_SetDeveloperMetadata_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebPublishedFileService_eventSetDeveloperMetadata_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UWebPublishedFileService_SetDeveloperMetadata_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebPublishedFileService_SetDeveloperMetadata_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebPublishedFileService_SetDeveloperMetadata_Statics::NewProp_PublishedFileID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebPublishedFileService_SetDeveloperMetadata_Statics::NewProp_PublishedFileID = { "PublishedFileID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebPublishedFileService_eventSetDeveloperMetadata_Parms, PublishedFileID), METADATA_PARAMS(Z_Construct_UFunction_UWebPublishedFileService_SetDeveloperMetadata_Statics::NewProp_PublishedFileID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebPublishedFileService_SetDeveloperMetadata_Statics::NewProp_PublishedFileID_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebPublishedFileService_SetDeveloperMetadata_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebPublishedFileService_eventSetDeveloperMetadata_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebPublishedFileService_SetDeveloperMetadata_Statics::NewProp_MetaData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebPublishedFileService_SetDeveloperMetadata_Statics::NewProp_MetaData = { "MetaData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebPublishedFileService_eventSetDeveloperMetadata_Parms, MetaData), METADATA_PARAMS(Z_Construct_UFunction_UWebPublishedFileService_SetDeveloperMetadata_Statics::NewProp_MetaData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebPublishedFileService_SetDeveloperMetadata_Statics::NewProp_MetaData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebPublishedFileService_SetDeveloperMetadata_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPublishedFileService_SetDeveloperMetadata_Statics::NewProp_Callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPublishedFileService_SetDeveloperMetadata_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPublishedFileService_SetDeveloperMetadata_Statics::NewProp_PublishedFileID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPublishedFileService_SetDeveloperMetadata_Statics::NewProp_AppID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPublishedFileService_SetDeveloperMetadata_Statics::NewProp_MetaData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebPublishedFileService_SetDeveloperMetadata_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WebPublishedFileService.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebPublishedFileService_SetDeveloperMetadata_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebPublishedFileService, nullptr, "SetDeveloperMetadata", nullptr, nullptr, sizeof(WebPublishedFileService_eventSetDeveloperMetadata_Parms), Z_Construct_UFunction_UWebPublishedFileService_SetDeveloperMetadata_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebPublishedFileService_SetDeveloperMetadata_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebPublishedFileService_SetDeveloperMetadata_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebPublishedFileService_SetDeveloperMetadata_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebPublishedFileService_SetDeveloperMetadata()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebPublishedFileService_SetDeveloperMetadata_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebPublishedFileService_UpdateBanStatus_Statics
	{
		struct WebPublishedFileService_eventUpdateBanStatus_Parms
		{
			FScriptDelegate Callback;
			FString Key;
			FString PublishedFileID;
			int32 AppID;
			bool bBanned;
			FString Reason;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PublishedFileID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PublishedFileID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AppID;
		static void NewProp_bBanned_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bBanned;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Reason_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Reason;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebPublishedFileService_UpdateBanStatus_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebPublishedFileService_UpdateBanStatus_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebPublishedFileService_eventUpdateBanStatus_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebPublishedFileService_UpdateBanStatus_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebPublishedFileService_UpdateBanStatus_Statics::NewProp_Callback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebPublishedFileService_UpdateBanStatus_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebPublishedFileService_UpdateBanStatus_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebPublishedFileService_eventUpdateBanStatus_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UWebPublishedFileService_UpdateBanStatus_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebPublishedFileService_UpdateBanStatus_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebPublishedFileService_UpdateBanStatus_Statics::NewProp_PublishedFileID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebPublishedFileService_UpdateBanStatus_Statics::NewProp_PublishedFileID = { "PublishedFileID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebPublishedFileService_eventUpdateBanStatus_Parms, PublishedFileID), METADATA_PARAMS(Z_Construct_UFunction_UWebPublishedFileService_UpdateBanStatus_Statics::NewProp_PublishedFileID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebPublishedFileService_UpdateBanStatus_Statics::NewProp_PublishedFileID_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebPublishedFileService_UpdateBanStatus_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebPublishedFileService_eventUpdateBanStatus_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UWebPublishedFileService_UpdateBanStatus_Statics::NewProp_bBanned_SetBit(void* Obj)
	{
		((WebPublishedFileService_eventUpdateBanStatus_Parms*)Obj)->bBanned = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWebPublishedFileService_UpdateBanStatus_Statics::NewProp_bBanned = { "bBanned", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WebPublishedFileService_eventUpdateBanStatus_Parms), &Z_Construct_UFunction_UWebPublishedFileService_UpdateBanStatus_Statics::NewProp_bBanned_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebPublishedFileService_UpdateBanStatus_Statics::NewProp_Reason_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebPublishedFileService_UpdateBanStatus_Statics::NewProp_Reason = { "Reason", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebPublishedFileService_eventUpdateBanStatus_Parms, Reason), METADATA_PARAMS(Z_Construct_UFunction_UWebPublishedFileService_UpdateBanStatus_Statics::NewProp_Reason_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebPublishedFileService_UpdateBanStatus_Statics::NewProp_Reason_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebPublishedFileService_UpdateBanStatus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPublishedFileService_UpdateBanStatus_Statics::NewProp_Callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPublishedFileService_UpdateBanStatus_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPublishedFileService_UpdateBanStatus_Statics::NewProp_PublishedFileID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPublishedFileService_UpdateBanStatus_Statics::NewProp_AppID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPublishedFileService_UpdateBanStatus_Statics::NewProp_bBanned,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPublishedFileService_UpdateBanStatus_Statics::NewProp_Reason,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebPublishedFileService_UpdateBanStatus_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WebPublishedFileService.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebPublishedFileService_UpdateBanStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebPublishedFileService, nullptr, "UpdateBanStatus", nullptr, nullptr, sizeof(WebPublishedFileService_eventUpdateBanStatus_Parms), Z_Construct_UFunction_UWebPublishedFileService_UpdateBanStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebPublishedFileService_UpdateBanStatus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebPublishedFileService_UpdateBanStatus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebPublishedFileService_UpdateBanStatus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebPublishedFileService_UpdateBanStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebPublishedFileService_UpdateBanStatus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebPublishedFileService_UpdateIncompatibleStatus_Statics
	{
		struct WebPublishedFileService_eventUpdateIncompatibleStatus_Parms
		{
			FScriptDelegate Callback;
			FString Key;
			FString PublishedFileID;
			int32 AppID;
			bool bIncompatible;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PublishedFileID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PublishedFileID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AppID;
		static void NewProp_bIncompatible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIncompatible;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebPublishedFileService_UpdateIncompatibleStatus_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebPublishedFileService_UpdateIncompatibleStatus_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebPublishedFileService_eventUpdateIncompatibleStatus_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebPublishedFileService_UpdateIncompatibleStatus_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebPublishedFileService_UpdateIncompatibleStatus_Statics::NewProp_Callback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebPublishedFileService_UpdateIncompatibleStatus_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebPublishedFileService_UpdateIncompatibleStatus_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebPublishedFileService_eventUpdateIncompatibleStatus_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UWebPublishedFileService_UpdateIncompatibleStatus_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebPublishedFileService_UpdateIncompatibleStatus_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebPublishedFileService_UpdateIncompatibleStatus_Statics::NewProp_PublishedFileID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebPublishedFileService_UpdateIncompatibleStatus_Statics::NewProp_PublishedFileID = { "PublishedFileID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebPublishedFileService_eventUpdateIncompatibleStatus_Parms, PublishedFileID), METADATA_PARAMS(Z_Construct_UFunction_UWebPublishedFileService_UpdateIncompatibleStatus_Statics::NewProp_PublishedFileID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebPublishedFileService_UpdateIncompatibleStatus_Statics::NewProp_PublishedFileID_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebPublishedFileService_UpdateIncompatibleStatus_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebPublishedFileService_eventUpdateIncompatibleStatus_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UWebPublishedFileService_UpdateIncompatibleStatus_Statics::NewProp_bIncompatible_SetBit(void* Obj)
	{
		((WebPublishedFileService_eventUpdateIncompatibleStatus_Parms*)Obj)->bIncompatible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWebPublishedFileService_UpdateIncompatibleStatus_Statics::NewProp_bIncompatible = { "bIncompatible", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WebPublishedFileService_eventUpdateIncompatibleStatus_Parms), &Z_Construct_UFunction_UWebPublishedFileService_UpdateIncompatibleStatus_Statics::NewProp_bIncompatible_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebPublishedFileService_UpdateIncompatibleStatus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPublishedFileService_UpdateIncompatibleStatus_Statics::NewProp_Callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPublishedFileService_UpdateIncompatibleStatus_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPublishedFileService_UpdateIncompatibleStatus_Statics::NewProp_PublishedFileID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPublishedFileService_UpdateIncompatibleStatus_Statics::NewProp_AppID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPublishedFileService_UpdateIncompatibleStatus_Statics::NewProp_bIncompatible,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebPublishedFileService_UpdateIncompatibleStatus_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WebPublishedFileService.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebPublishedFileService_UpdateIncompatibleStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebPublishedFileService, nullptr, "UpdateIncompatibleStatus", nullptr, nullptr, sizeof(WebPublishedFileService_eventUpdateIncompatibleStatus_Parms), Z_Construct_UFunction_UWebPublishedFileService_UpdateIncompatibleStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebPublishedFileService_UpdateIncompatibleStatus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebPublishedFileService_UpdateIncompatibleStatus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebPublishedFileService_UpdateIncompatibleStatus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebPublishedFileService_UpdateIncompatibleStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebPublishedFileService_UpdateIncompatibleStatus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebPublishedFileService_UpdateTags_Statics
	{
		struct WebPublishedFileService_eventUpdateTags_Parms
		{
			FScriptDelegate Callback;
			FString Key;
			FString PublishedFileID;
			int32 AppID;
			FString addTags;
			FString removeTags;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PublishedFileID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PublishedFileID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AppID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_addTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_addTags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_removeTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_removeTags;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebPublishedFileService_UpdateTags_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebPublishedFileService_UpdateTags_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebPublishedFileService_eventUpdateTags_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebPublishedFileService_UpdateTags_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebPublishedFileService_UpdateTags_Statics::NewProp_Callback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebPublishedFileService_UpdateTags_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebPublishedFileService_UpdateTags_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebPublishedFileService_eventUpdateTags_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UWebPublishedFileService_UpdateTags_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebPublishedFileService_UpdateTags_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebPublishedFileService_UpdateTags_Statics::NewProp_PublishedFileID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebPublishedFileService_UpdateTags_Statics::NewProp_PublishedFileID = { "PublishedFileID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebPublishedFileService_eventUpdateTags_Parms, PublishedFileID), METADATA_PARAMS(Z_Construct_UFunction_UWebPublishedFileService_UpdateTags_Statics::NewProp_PublishedFileID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebPublishedFileService_UpdateTags_Statics::NewProp_PublishedFileID_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebPublishedFileService_UpdateTags_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebPublishedFileService_eventUpdateTags_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebPublishedFileService_UpdateTags_Statics::NewProp_addTags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebPublishedFileService_UpdateTags_Statics::NewProp_addTags = { "addTags", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebPublishedFileService_eventUpdateTags_Parms, addTags), METADATA_PARAMS(Z_Construct_UFunction_UWebPublishedFileService_UpdateTags_Statics::NewProp_addTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebPublishedFileService_UpdateTags_Statics::NewProp_addTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebPublishedFileService_UpdateTags_Statics::NewProp_removeTags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebPublishedFileService_UpdateTags_Statics::NewProp_removeTags = { "removeTags", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebPublishedFileService_eventUpdateTags_Parms, removeTags), METADATA_PARAMS(Z_Construct_UFunction_UWebPublishedFileService_UpdateTags_Statics::NewProp_removeTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebPublishedFileService_UpdateTags_Statics::NewProp_removeTags_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebPublishedFileService_UpdateTags_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPublishedFileService_UpdateTags_Statics::NewProp_Callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPublishedFileService_UpdateTags_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPublishedFileService_UpdateTags_Statics::NewProp_PublishedFileID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPublishedFileService_UpdateTags_Statics::NewProp_AppID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPublishedFileService_UpdateTags_Statics::NewProp_addTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPublishedFileService_UpdateTags_Statics::NewProp_removeTags,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebPublishedFileService_UpdateTags_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WebPublishedFileService.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebPublishedFileService_UpdateTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebPublishedFileService, nullptr, "UpdateTags", nullptr, nullptr, sizeof(WebPublishedFileService_eventUpdateTags_Parms), Z_Construct_UFunction_UWebPublishedFileService_UpdateTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebPublishedFileService_UpdateTags_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebPublishedFileService_UpdateTags_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebPublishedFileService_UpdateTags_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebPublishedFileService_UpdateTags()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebPublishedFileService_UpdateTags_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UWebPublishedFileService_NoRegister()
	{
		return UWebPublishedFileService::StaticClass();
	}
	struct Z_Construct_UClass_UWebPublishedFileService_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWebPublishedFileService_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreWebSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWebPublishedFileService_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWebPublishedFileService_QueryFiles, "QueryFiles" }, // 2081516871
		{ &Z_Construct_UFunction_UWebPublishedFileService_SetDeveloperMetadata, "SetDeveloperMetadata" }, // 131599919
		{ &Z_Construct_UFunction_UWebPublishedFileService_UpdateBanStatus, "UpdateBanStatus" }, // 3522768152
		{ &Z_Construct_UFunction_UWebPublishedFileService_UpdateIncompatibleStatus, "UpdateIncompatibleStatus" }, // 3437226987
		{ &Z_Construct_UFunction_UWebPublishedFileService_UpdateTags, "UpdateTags" }, // 3932726450
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebPublishedFileService_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "WebPublishedFileService.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/WebPublishedFileService.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWebPublishedFileService_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWebPublishedFileService>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UWebPublishedFileService_Statics::ClassParams = {
		&UWebPublishedFileService::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UWebPublishedFileService_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWebPublishedFileService_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWebPublishedFileService()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UWebPublishedFileService_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWebPublishedFileService, 1061062081);
	template<> STEAMCOREWEB_API UClass* StaticClass<UWebPublishedFileService>()
	{
		return UWebPublishedFileService::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWebPublishedFileService(Z_Construct_UClass_UWebPublishedFileService, &UWebPublishedFileService::StaticClass, TEXT("/Script/SteamCoreWeb"), TEXT("UWebPublishedFileService"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWebPublishedFileService);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
