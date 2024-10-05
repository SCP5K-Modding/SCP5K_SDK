// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCoreWeb/Public/SteamCoreWebAsyncActionRankedByVote.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamCoreWebAsyncActionRankedByVote() {}
// Cross Module References
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionRankedByVote_NoRegister();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionRankedByVote();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncAction();
	UPackage* Z_Construct_UPackage__Script_SteamCoreWeb();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USteamCoreWebAsyncActionRankedByVote::execRankedByVoteAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
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
		*(USteamCoreWebAsyncActionRankedByVote**)Z_Param__Result=USteamCoreWebAsyncActionRankedByVote::RankedByVoteAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_SteamID,Z_Param_AppID,Z_Param_startID,Z_Param_Count,Z_Param_bHasAppAdminAccess,Z_Param_FileType,Z_Param_Tag,Z_Param_UserTag);
		P_NATIVE_END;
	}
	void USteamCoreWebAsyncActionRankedByVote::StaticRegisterNativesUSteamCoreWebAsyncActionRankedByVote()
	{
		UClass* Class = USteamCoreWebAsyncActionRankedByVote::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "RankedByVoteAsync", &USteamCoreWebAsyncActionRankedByVote::execRankedByVoteAsync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByVote_RankedByVoteAsync_Statics
	{
		struct SteamCoreWebAsyncActionRankedByVote_eventRankedByVoteAsync_Parms
		{
			UObject* WorldContextObject;
			FString Key;
			FString SteamID;
			int32 AppID;
			int32 startID;
			int32 Count;
			bool bHasAppAdminAccess;
			int32 FileType;
			TArray<FString> Tag;
			TArray<FString> UserTag;
			USteamCoreWebAsyncActionRankedByVote* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
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
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByVote_RankedByVoteAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionRankedByVote_eventRankedByVoteAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByVote_RankedByVoteAsync_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByVote_RankedByVoteAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionRankedByVote_eventRankedByVoteAsync_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByVote_RankedByVoteAsync_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByVote_RankedByVoteAsync_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByVote_RankedByVoteAsync_Statics::NewProp_SteamID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByVote_RankedByVoteAsync_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionRankedByVote_eventRankedByVoteAsync_Parms, SteamID), METADATA_PARAMS(Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByVote_RankedByVoteAsync_Statics::NewProp_SteamID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByVote_RankedByVoteAsync_Statics::NewProp_SteamID_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByVote_RankedByVoteAsync_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionRankedByVote_eventRankedByVoteAsync_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByVote_RankedByVoteAsync_Statics::NewProp_startID = { "startID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionRankedByVote_eventRankedByVoteAsync_Parms, startID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByVote_RankedByVoteAsync_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionRankedByVote_eventRankedByVoteAsync_Parms, Count), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByVote_RankedByVoteAsync_Statics::NewProp_bHasAppAdminAccess_SetBit(void* Obj)
	{
		((SteamCoreWebAsyncActionRankedByVote_eventRankedByVoteAsync_Parms*)Obj)->bHasAppAdminAccess = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByVote_RankedByVoteAsync_Statics::NewProp_bHasAppAdminAccess = { "bHasAppAdminAccess", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamCoreWebAsyncActionRankedByVote_eventRankedByVoteAsync_Parms), &Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByVote_RankedByVoteAsync_Statics::NewProp_bHasAppAdminAccess_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByVote_RankedByVoteAsync_Statics::NewProp_FileType = { "FileType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionRankedByVote_eventRankedByVoteAsync_Parms, FileType), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByVote_RankedByVoteAsync_Statics::NewProp_Tag_Inner = { "Tag", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByVote_RankedByVoteAsync_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionRankedByVote_eventRankedByVoteAsync_Parms, Tag), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByVote_RankedByVoteAsync_Statics::NewProp_UserTag_Inner = { "UserTag", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByVote_RankedByVoteAsync_Statics::NewProp_UserTag = { "UserTag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionRankedByVote_eventRankedByVoteAsync_Parms, UserTag), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByVote_RankedByVoteAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionRankedByVote_eventRankedByVoteAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionRankedByVote_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByVote_RankedByVoteAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByVote_RankedByVoteAsync_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByVote_RankedByVoteAsync_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByVote_RankedByVoteAsync_Statics::NewProp_SteamID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByVote_RankedByVoteAsync_Statics::NewProp_AppID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByVote_RankedByVoteAsync_Statics::NewProp_startID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByVote_RankedByVoteAsync_Statics::NewProp_Count,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByVote_RankedByVoteAsync_Statics::NewProp_bHasAppAdminAccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByVote_RankedByVoteAsync_Statics::NewProp_FileType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByVote_RankedByVoteAsync_Statics::NewProp_Tag_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByVote_RankedByVoteAsync_Statics::NewProp_Tag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByVote_RankedByVoteAsync_Statics::NewProp_UserTag_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByVote_RankedByVoteAsync_Statics::NewProp_UserTag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByVote_RankedByVoteAsync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByVote_RankedByVoteAsync_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamCoreWebAsyncActionRankedByVote.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByVote_RankedByVoteAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionRankedByVote, nullptr, "RankedByVoteAsync", nullptr, nullptr, sizeof(SteamCoreWebAsyncActionRankedByVote_eventRankedByVoteAsync_Parms), Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByVote_RankedByVoteAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByVote_RankedByVoteAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByVote_RankedByVoteAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByVote_RankedByVoteAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByVote_RankedByVoteAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByVote_RankedByVoteAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionRankedByVote_NoRegister()
	{
		return USteamCoreWebAsyncActionRankedByVote::StaticClass();
	}
	struct Z_Construct_UClass_USteamCoreWebAsyncActionRankedByVote_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionRankedByVote_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamCoreWebAsyncActionRankedByVote_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionRankedByVote_RankedByVoteAsync, "RankedByVoteAsync" }, // 2751627365
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreWebAsyncActionRankedByVote_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SteamCoreWebAsyncActionRankedByVote.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SteamCoreWebAsyncActionRankedByVote.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamCoreWebAsyncActionRankedByVote_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionRankedByVote>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreWebAsyncActionRankedByVote_Statics::ClassParams = {
		&USteamCoreWebAsyncActionRankedByVote::StaticClass,
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
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USteamCoreWebAsyncActionRankedByVote_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionRankedByVote_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionRankedByVote()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USteamCoreWebAsyncActionRankedByVote_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USteamCoreWebAsyncActionRankedByVote, 2070428795);
	template<> STEAMCOREWEB_API UClass* StaticClass<USteamCoreWebAsyncActionRankedByVote>()
	{
		return USteamCoreWebAsyncActionRankedByVote::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USteamCoreWebAsyncActionRankedByVote(Z_Construct_UClass_USteamCoreWebAsyncActionRankedByVote, &USteamCoreWebAsyncActionRankedByVote::StaticClass, TEXT("/Script/SteamCoreWeb"), TEXT("USteamCoreWebAsyncActionRankedByVote"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreWebAsyncActionRankedByVote);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
