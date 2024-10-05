// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCoreWeb/Public/WebSteamPublishedItemSearch.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWebSteamPublishedItemSearch() {}
// Cross Module References
	STEAMCOREWEB_API UClass* Z_Construct_UClass_UWebSteamPublishedItemSearch_NoRegister();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_UWebSteamPublishedItemSearch();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebSubsystem();
	UPackage* Z_Construct_UPackage__Script_SteamCoreWeb();
	STEAMCOREWEB_API UFunction* Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UWebSteamPublishedItemSearch::execRankedByPublicationOrder)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FStrProperty,Z_Param_SteamID);
		P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
		P_GET_PROPERTY(FIntProperty,Z_Param_startID);
		P_GET_PROPERTY(FIntProperty,Z_Param_Count);
		P_GET_UBOOL(Z_Param_bHasAppAdminAccess);
		P_GET_PROPERTY(FIntProperty,Z_Param_FileType);
		P_GET_TARRAY(FString,Z_Param_Tag);
		P_GET_TARRAY(FString,Z_Param_UserTag);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RankedByPublicationOrder(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_SteamID,Z_Param_AppID,Z_Param_startID,Z_Param_Count,Z_Param_bHasAppAdminAccess,Z_Param_FileType,Z_Param_Tag,Z_Param_UserTag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebSteamPublishedItemSearch::execRankedByTrend)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FStrProperty,Z_Param_SteamID);
		P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
		P_GET_PROPERTY(FIntProperty,Z_Param_startID);
		P_GET_PROPERTY(FIntProperty,Z_Param_Count);
		P_GET_UBOOL(Z_Param_bHasAppAdminAccess);
		P_GET_PROPERTY(FIntProperty,Z_Param_FileType);
		P_GET_PROPERTY(FIntProperty,Z_Param_Days);
		P_GET_TARRAY(FString,Z_Param_Tag);
		P_GET_TARRAY(FString,Z_Param_UserTag);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RankedByTrend(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_SteamID,Z_Param_AppID,Z_Param_startID,Z_Param_Count,Z_Param_bHasAppAdminAccess,Z_Param_FileType,Z_Param_Days,Z_Param_Tag,Z_Param_UserTag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebSteamPublishedItemSearch::execRankedByVote)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FStrProperty,Z_Param_SteamID);
		P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
		P_GET_PROPERTY(FIntProperty,Z_Param_startID);
		P_GET_PROPERTY(FIntProperty,Z_Param_Count);
		P_GET_UBOOL(Z_Param_bHasAppAdminAccess);
		P_GET_PROPERTY(FIntProperty,Z_Param_FileType);
		P_GET_TARRAY(FString,Z_Param_Tag);
		P_GET_TARRAY(FString,Z_Param_UserTag);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RankedByVote(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_SteamID,Z_Param_AppID,Z_Param_startID,Z_Param_Count,Z_Param_bHasAppAdminAccess,Z_Param_FileType,Z_Param_Tag,Z_Param_UserTag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebSteamPublishedItemSearch::execResultSetSummary)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FStrProperty,Z_Param_SteamID);
		P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
		P_GET_PROPERTY(FIntProperty,Z_Param_startID);
		P_GET_UBOOL(Z_Param_bHasAppAdminAccess);
		P_GET_PROPERTY(FIntProperty,Z_Param_FileType);
		P_GET_TARRAY(FString,Z_Param_Tag);
		P_GET_TARRAY(FString,Z_Param_UserTag);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResultSetSummary(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_SteamID,Z_Param_AppID,Z_Param_startID,Z_Param_bHasAppAdminAccess,Z_Param_FileType,Z_Param_Tag,Z_Param_UserTag);
		P_NATIVE_END;
	}
	void UWebSteamPublishedItemSearch::StaticRegisterNativesUWebSteamPublishedItemSearch()
	{
		UClass* Class = UWebSteamPublishedItemSearch::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "RankedByPublicationOrder", &UWebSteamPublishedItemSearch::execRankedByPublicationOrder },
			{ "RankedByTrend", &UWebSteamPublishedItemSearch::execRankedByTrend },
			{ "RankedByVote", &UWebSteamPublishedItemSearch::execRankedByVote },
			{ "ResultSetSummary", &UWebSteamPublishedItemSearch::execResultSetSummary },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByPublicationOrder_Statics
	{
		struct WebSteamPublishedItemSearch_eventRankedByPublicationOrder_Parms
		{
			FScriptDelegate Callback;
			FString Key;
			FString SteamID;
			int32 AppID;
			int32 startID;
			int32 Count;
			bool bHasAppAdminAccess;
			int32 FileType;
			TArray<FString> Tag;
			TArray<FString> UserTag;
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
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_startID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Count;
		static void NewProp_bHasAppAdminAccess_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasAppAdminAccess;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_FileType;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Tag_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Tag;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UserTag_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_UserTag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByPublicationOrder_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByPublicationOrder_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamPublishedItemSearch_eventRankedByPublicationOrder_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByPublicationOrder_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByPublicationOrder_Statics::NewProp_Callback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByPublicationOrder_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByPublicationOrder_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamPublishedItemSearch_eventRankedByPublicationOrder_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByPublicationOrder_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByPublicationOrder_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByPublicationOrder_Statics::NewProp_SteamID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByPublicationOrder_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamPublishedItemSearch_eventRankedByPublicationOrder_Parms, SteamID), METADATA_PARAMS(Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByPublicationOrder_Statics::NewProp_SteamID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByPublicationOrder_Statics::NewProp_SteamID_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByPublicationOrder_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamPublishedItemSearch_eventRankedByPublicationOrder_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByPublicationOrder_Statics::NewProp_startID = { "startID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamPublishedItemSearch_eventRankedByPublicationOrder_Parms, startID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByPublicationOrder_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamPublishedItemSearch_eventRankedByPublicationOrder_Parms, Count), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByPublicationOrder_Statics::NewProp_bHasAppAdminAccess_SetBit(void* Obj)
	{
		((WebSteamPublishedItemSearch_eventRankedByPublicationOrder_Parms*)Obj)->bHasAppAdminAccess = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByPublicationOrder_Statics::NewProp_bHasAppAdminAccess = { "bHasAppAdminAccess", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WebSteamPublishedItemSearch_eventRankedByPublicationOrder_Parms), &Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByPublicationOrder_Statics::NewProp_bHasAppAdminAccess_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByPublicationOrder_Statics::NewProp_FileType = { "FileType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamPublishedItemSearch_eventRankedByPublicationOrder_Parms, FileType), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByPublicationOrder_Statics::NewProp_Tag_Inner = { "Tag", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByPublicationOrder_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamPublishedItemSearch_eventRankedByPublicationOrder_Parms, Tag), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByPublicationOrder_Statics::NewProp_UserTag_Inner = { "UserTag", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByPublicationOrder_Statics::NewProp_UserTag = { "UserTag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamPublishedItemSearch_eventRankedByPublicationOrder_Parms, UserTag), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByPublicationOrder_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByPublicationOrder_Statics::NewProp_Callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByPublicationOrder_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByPublicationOrder_Statics::NewProp_SteamID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByPublicationOrder_Statics::NewProp_AppID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByPublicationOrder_Statics::NewProp_startID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByPublicationOrder_Statics::NewProp_Count,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByPublicationOrder_Statics::NewProp_bHasAppAdminAccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByPublicationOrder_Statics::NewProp_FileType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByPublicationOrder_Statics::NewProp_Tag_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByPublicationOrder_Statics::NewProp_Tag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByPublicationOrder_Statics::NewProp_UserTag_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByPublicationOrder_Statics::NewProp_UserTag,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByPublicationOrder_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WebSteamPublishedItemSearch.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByPublicationOrder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebSteamPublishedItemSearch, nullptr, "RankedByPublicationOrder", nullptr, nullptr, sizeof(WebSteamPublishedItemSearch_eventRankedByPublicationOrder_Parms), Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByPublicationOrder_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByPublicationOrder_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByPublicationOrder_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByPublicationOrder_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByPublicationOrder()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByPublicationOrder_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByTrend_Statics
	{
		struct WebSteamPublishedItemSearch_eventRankedByTrend_Parms
		{
			FScriptDelegate Callback;
			FString Key;
			FString SteamID;
			int32 AppID;
			int32 startID;
			int32 Count;
			bool bHasAppAdminAccess;
			int32 FileType;
			int32 Days;
			TArray<FString> Tag;
			TArray<FString> UserTag;
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
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_startID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Count;
		static void NewProp_bHasAppAdminAccess_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasAppAdminAccess;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_FileType;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Days;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Tag_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Tag;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UserTag_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_UserTag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByTrend_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByTrend_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamPublishedItemSearch_eventRankedByTrend_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByTrend_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByTrend_Statics::NewProp_Callback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByTrend_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByTrend_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamPublishedItemSearch_eventRankedByTrend_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByTrend_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByTrend_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByTrend_Statics::NewProp_SteamID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByTrend_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamPublishedItemSearch_eventRankedByTrend_Parms, SteamID), METADATA_PARAMS(Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByTrend_Statics::NewProp_SteamID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByTrend_Statics::NewProp_SteamID_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByTrend_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamPublishedItemSearch_eventRankedByTrend_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByTrend_Statics::NewProp_startID = { "startID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamPublishedItemSearch_eventRankedByTrend_Parms, startID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByTrend_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamPublishedItemSearch_eventRankedByTrend_Parms, Count), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByTrend_Statics::NewProp_bHasAppAdminAccess_SetBit(void* Obj)
	{
		((WebSteamPublishedItemSearch_eventRankedByTrend_Parms*)Obj)->bHasAppAdminAccess = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByTrend_Statics::NewProp_bHasAppAdminAccess = { "bHasAppAdminAccess", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WebSteamPublishedItemSearch_eventRankedByTrend_Parms), &Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByTrend_Statics::NewProp_bHasAppAdminAccess_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByTrend_Statics::NewProp_FileType = { "FileType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamPublishedItemSearch_eventRankedByTrend_Parms, FileType), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByTrend_Statics::NewProp_Days = { "Days", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamPublishedItemSearch_eventRankedByTrend_Parms, Days), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByTrend_Statics::NewProp_Tag_Inner = { "Tag", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByTrend_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamPublishedItemSearch_eventRankedByTrend_Parms, Tag), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByTrend_Statics::NewProp_UserTag_Inner = { "UserTag", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByTrend_Statics::NewProp_UserTag = { "UserTag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamPublishedItemSearch_eventRankedByTrend_Parms, UserTag), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByTrend_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByTrend_Statics::NewProp_Callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByTrend_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByTrend_Statics::NewProp_SteamID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByTrend_Statics::NewProp_AppID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByTrend_Statics::NewProp_startID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByTrend_Statics::NewProp_Count,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByTrend_Statics::NewProp_bHasAppAdminAccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByTrend_Statics::NewProp_FileType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByTrend_Statics::NewProp_Days,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByTrend_Statics::NewProp_Tag_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByTrend_Statics::NewProp_Tag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByTrend_Statics::NewProp_UserTag_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByTrend_Statics::NewProp_UserTag,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByTrend_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WebSteamPublishedItemSearch.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByTrend_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebSteamPublishedItemSearch, nullptr, "RankedByTrend", nullptr, nullptr, sizeof(WebSteamPublishedItemSearch_eventRankedByTrend_Parms), Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByTrend_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByTrend_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByTrend_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByTrend_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByTrend()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByTrend_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByVote_Statics
	{
		struct WebSteamPublishedItemSearch_eventRankedByVote_Parms
		{
			FScriptDelegate Callback;
			FString Key;
			FString SteamID;
			int32 AppID;
			int32 startID;
			int32 Count;
			bool bHasAppAdminAccess;
			int32 FileType;
			TArray<FString> Tag;
			TArray<FString> UserTag;
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
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_startID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Count;
		static void NewProp_bHasAppAdminAccess_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasAppAdminAccess;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_FileType;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Tag_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Tag;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UserTag_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_UserTag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByVote_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByVote_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamPublishedItemSearch_eventRankedByVote_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByVote_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByVote_Statics::NewProp_Callback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByVote_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByVote_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamPublishedItemSearch_eventRankedByVote_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByVote_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByVote_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByVote_Statics::NewProp_SteamID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByVote_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamPublishedItemSearch_eventRankedByVote_Parms, SteamID), METADATA_PARAMS(Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByVote_Statics::NewProp_SteamID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByVote_Statics::NewProp_SteamID_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByVote_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamPublishedItemSearch_eventRankedByVote_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByVote_Statics::NewProp_startID = { "startID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamPublishedItemSearch_eventRankedByVote_Parms, startID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByVote_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamPublishedItemSearch_eventRankedByVote_Parms, Count), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByVote_Statics::NewProp_bHasAppAdminAccess_SetBit(void* Obj)
	{
		((WebSteamPublishedItemSearch_eventRankedByVote_Parms*)Obj)->bHasAppAdminAccess = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByVote_Statics::NewProp_bHasAppAdminAccess = { "bHasAppAdminAccess", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WebSteamPublishedItemSearch_eventRankedByVote_Parms), &Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByVote_Statics::NewProp_bHasAppAdminAccess_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByVote_Statics::NewProp_FileType = { "FileType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamPublishedItemSearch_eventRankedByVote_Parms, FileType), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByVote_Statics::NewProp_Tag_Inner = { "Tag", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByVote_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamPublishedItemSearch_eventRankedByVote_Parms, Tag), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByVote_Statics::NewProp_UserTag_Inner = { "UserTag", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByVote_Statics::NewProp_UserTag = { "UserTag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamPublishedItemSearch_eventRankedByVote_Parms, UserTag), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByVote_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByVote_Statics::NewProp_Callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByVote_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByVote_Statics::NewProp_SteamID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByVote_Statics::NewProp_AppID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByVote_Statics::NewProp_startID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByVote_Statics::NewProp_Count,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByVote_Statics::NewProp_bHasAppAdminAccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByVote_Statics::NewProp_FileType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByVote_Statics::NewProp_Tag_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByVote_Statics::NewProp_Tag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByVote_Statics::NewProp_UserTag_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByVote_Statics::NewProp_UserTag,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByVote_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WebSteamPublishedItemSearch.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByVote_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebSteamPublishedItemSearch, nullptr, "RankedByVote", nullptr, nullptr, sizeof(WebSteamPublishedItemSearch_eventRankedByVote_Parms), Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByVote_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByVote_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByVote_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByVote_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByVote()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByVote_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebSteamPublishedItemSearch_ResultSetSummary_Statics
	{
		struct WebSteamPublishedItemSearch_eventResultSetSummary_Parms
		{
			FScriptDelegate Callback;
			FString Key;
			FString SteamID;
			int32 AppID;
			int32 startID;
			bool bHasAppAdminAccess;
			int32 FileType;
			TArray<FString> Tag;
			TArray<FString> UserTag;
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
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_startID;
		static void NewProp_bHasAppAdminAccess_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasAppAdminAccess;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_FileType;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Tag_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Tag;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UserTag_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_UserTag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSteamPublishedItemSearch_ResultSetSummary_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebSteamPublishedItemSearch_ResultSetSummary_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamPublishedItemSearch_eventResultSetSummary_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebSteamPublishedItemSearch_ResultSetSummary_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamPublishedItemSearch_ResultSetSummary_Statics::NewProp_Callback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSteamPublishedItemSearch_ResultSetSummary_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamPublishedItemSearch_ResultSetSummary_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamPublishedItemSearch_eventResultSetSummary_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UWebSteamPublishedItemSearch_ResultSetSummary_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamPublishedItemSearch_ResultSetSummary_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSteamPublishedItemSearch_ResultSetSummary_Statics::NewProp_SteamID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamPublishedItemSearch_ResultSetSummary_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamPublishedItemSearch_eventResultSetSummary_Parms, SteamID), METADATA_PARAMS(Z_Construct_UFunction_UWebSteamPublishedItemSearch_ResultSetSummary_Statics::NewProp_SteamID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamPublishedItemSearch_ResultSetSummary_Statics::NewProp_SteamID_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebSteamPublishedItemSearch_ResultSetSummary_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamPublishedItemSearch_eventResultSetSummary_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebSteamPublishedItemSearch_ResultSetSummary_Statics::NewProp_startID = { "startID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamPublishedItemSearch_eventResultSetSummary_Parms, startID), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UWebSteamPublishedItemSearch_ResultSetSummary_Statics::NewProp_bHasAppAdminAccess_SetBit(void* Obj)
	{
		((WebSteamPublishedItemSearch_eventResultSetSummary_Parms*)Obj)->bHasAppAdminAccess = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWebSteamPublishedItemSearch_ResultSetSummary_Statics::NewProp_bHasAppAdminAccess = { "bHasAppAdminAccess", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WebSteamPublishedItemSearch_eventResultSetSummary_Parms), &Z_Construct_UFunction_UWebSteamPublishedItemSearch_ResultSetSummary_Statics::NewProp_bHasAppAdminAccess_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebSteamPublishedItemSearch_ResultSetSummary_Statics::NewProp_FileType = { "FileType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamPublishedItemSearch_eventResultSetSummary_Parms, FileType), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamPublishedItemSearch_ResultSetSummary_Statics::NewProp_Tag_Inner = { "Tag", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWebSteamPublishedItemSearch_ResultSetSummary_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamPublishedItemSearch_eventResultSetSummary_Parms, Tag), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamPublishedItemSearch_ResultSetSummary_Statics::NewProp_UserTag_Inner = { "UserTag", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWebSteamPublishedItemSearch_ResultSetSummary_Statics::NewProp_UserTag = { "UserTag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamPublishedItemSearch_eventResultSetSummary_Parms, UserTag), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebSteamPublishedItemSearch_ResultSetSummary_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamPublishedItemSearch_ResultSetSummary_Statics::NewProp_Callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamPublishedItemSearch_ResultSetSummary_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamPublishedItemSearch_ResultSetSummary_Statics::NewProp_SteamID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamPublishedItemSearch_ResultSetSummary_Statics::NewProp_AppID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamPublishedItemSearch_ResultSetSummary_Statics::NewProp_startID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamPublishedItemSearch_ResultSetSummary_Statics::NewProp_bHasAppAdminAccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamPublishedItemSearch_ResultSetSummary_Statics::NewProp_FileType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamPublishedItemSearch_ResultSetSummary_Statics::NewProp_Tag_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamPublishedItemSearch_ResultSetSummary_Statics::NewProp_Tag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamPublishedItemSearch_ResultSetSummary_Statics::NewProp_UserTag_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamPublishedItemSearch_ResultSetSummary_Statics::NewProp_UserTag,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSteamPublishedItemSearch_ResultSetSummary_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WebSteamPublishedItemSearch.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebSteamPublishedItemSearch_ResultSetSummary_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebSteamPublishedItemSearch, nullptr, "ResultSetSummary", nullptr, nullptr, sizeof(WebSteamPublishedItemSearch_eventResultSetSummary_Parms), Z_Construct_UFunction_UWebSteamPublishedItemSearch_ResultSetSummary_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamPublishedItemSearch_ResultSetSummary_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebSteamPublishedItemSearch_ResultSetSummary_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamPublishedItemSearch_ResultSetSummary_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebSteamPublishedItemSearch_ResultSetSummary()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebSteamPublishedItemSearch_ResultSetSummary_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UWebSteamPublishedItemSearch_NoRegister()
	{
		return UWebSteamPublishedItemSearch::StaticClass();
	}
	struct Z_Construct_UClass_UWebSteamPublishedItemSearch_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWebSteamPublishedItemSearch_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreWebSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWebSteamPublishedItemSearch_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByPublicationOrder, "RankedByPublicationOrder" }, // 1120586003
		{ &Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByTrend, "RankedByTrend" }, // 2085477259
		{ &Z_Construct_UFunction_UWebSteamPublishedItemSearch_RankedByVote, "RankedByVote" }, // 518546427
		{ &Z_Construct_UFunction_UWebSteamPublishedItemSearch_ResultSetSummary, "ResultSetSummary" }, // 2125965753
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebSteamPublishedItemSearch_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "WebSteamPublishedItemSearch.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/WebSteamPublishedItemSearch.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWebSteamPublishedItemSearch_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWebSteamPublishedItemSearch>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UWebSteamPublishedItemSearch_Statics::ClassParams = {
		&UWebSteamPublishedItemSearch::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UWebSteamPublishedItemSearch_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWebSteamPublishedItemSearch_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWebSteamPublishedItemSearch()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UWebSteamPublishedItemSearch_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWebSteamPublishedItemSearch, 445204695);
	template<> STEAMCOREWEB_API UClass* StaticClass<UWebSteamPublishedItemSearch>()
	{
		return UWebSteamPublishedItemSearch::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWebSteamPublishedItemSearch(Z_Construct_UClass_UWebSteamPublishedItemSearch, &UWebSteamPublishedItemSearch::StaticClass, TEXT("/Script/SteamCoreWeb"), TEXT("UWebSteamPublishedItemSearch"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWebSteamPublishedItemSearch);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
