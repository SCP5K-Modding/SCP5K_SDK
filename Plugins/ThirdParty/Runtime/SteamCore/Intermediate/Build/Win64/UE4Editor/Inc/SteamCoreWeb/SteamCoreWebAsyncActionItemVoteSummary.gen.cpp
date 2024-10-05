// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCoreWeb/Public/SteamCoreWebAsyncActionItemVoteSummary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamCoreWebAsyncActionItemVoteSummary() {}
// Cross Module References
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionItemVoteSummary_NoRegister();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionItemVoteSummary();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncAction();
	UPackage* Z_Construct_UPackage__Script_SteamCoreWeb();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USteamCoreWebAsyncActionItemVoteSummary::execItemVoteSummaryAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FStrProperty,Z_Param_SteamID);
		P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
		P_GET_TARRAY(FString,Z_Param_PublishedFileIDs);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USteamCoreWebAsyncActionItemVoteSummary**)Z_Param__Result=USteamCoreWebAsyncActionItemVoteSummary::ItemVoteSummaryAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_SteamID,Z_Param_AppID,Z_Param_PublishedFileIDs);
		P_NATIVE_END;
	}
	void USteamCoreWebAsyncActionItemVoteSummary::StaticRegisterNativesUSteamCoreWebAsyncActionItemVoteSummary()
	{
		UClass* Class = USteamCoreWebAsyncActionItemVoteSummary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ItemVoteSummaryAsync", &USteamCoreWebAsyncActionItemVoteSummary::execItemVoteSummaryAsync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USteamCoreWebAsyncActionItemVoteSummary_ItemVoteSummaryAsync_Statics
	{
		struct SteamCoreWebAsyncActionItemVoteSummary_eventItemVoteSummaryAsync_Parms
		{
			UObject* WorldContextObject;
			FString Key;
			FString SteamID;
			int32 AppID;
			TArray<FString> PublishedFileIDs;
			USteamCoreWebAsyncActionItemVoteSummary* ReturnValue;
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
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PublishedFileIDs_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PublishedFileIDs;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionItemVoteSummary_ItemVoteSummaryAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionItemVoteSummary_eventItemVoteSummaryAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreWebAsyncActionItemVoteSummary_ItemVoteSummaryAsync_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionItemVoteSummary_ItemVoteSummaryAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionItemVoteSummary_eventItemVoteSummaryAsync_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_USteamCoreWebAsyncActionItemVoteSummary_ItemVoteSummaryAsync_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionItemVoteSummary_ItemVoteSummaryAsync_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreWebAsyncActionItemVoteSummary_ItemVoteSummaryAsync_Statics::NewProp_SteamID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionItemVoteSummary_ItemVoteSummaryAsync_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionItemVoteSummary_eventItemVoteSummaryAsync_Parms, SteamID), METADATA_PARAMS(Z_Construct_UFunction_USteamCoreWebAsyncActionItemVoteSummary_ItemVoteSummaryAsync_Statics::NewProp_SteamID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionItemVoteSummary_ItemVoteSummaryAsync_Statics::NewProp_SteamID_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionItemVoteSummary_ItemVoteSummaryAsync_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionItemVoteSummary_eventItemVoteSummaryAsync_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionItemVoteSummary_ItemVoteSummaryAsync_Statics::NewProp_PublishedFileIDs_Inner = { "PublishedFileIDs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionItemVoteSummary_ItemVoteSummaryAsync_Statics::NewProp_PublishedFileIDs = { "PublishedFileIDs", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionItemVoteSummary_eventItemVoteSummaryAsync_Parms, PublishedFileIDs), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionItemVoteSummary_ItemVoteSummaryAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionItemVoteSummary_eventItemVoteSummaryAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionItemVoteSummary_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionItemVoteSummary_ItemVoteSummaryAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionItemVoteSummary_ItemVoteSummaryAsync_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionItemVoteSummary_ItemVoteSummaryAsync_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionItemVoteSummary_ItemVoteSummaryAsync_Statics::NewProp_SteamID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionItemVoteSummary_ItemVoteSummaryAsync_Statics::NewProp_AppID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionItemVoteSummary_ItemVoteSummaryAsync_Statics::NewProp_PublishedFileIDs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionItemVoteSummary_ItemVoteSummaryAsync_Statics::NewProp_PublishedFileIDs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionItemVoteSummary_ItemVoteSummaryAsync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreWebAsyncActionItemVoteSummary_ItemVoteSummaryAsync_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamCoreWebAsyncActionItemVoteSummary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionItemVoteSummary_ItemVoteSummaryAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionItemVoteSummary, nullptr, "ItemVoteSummaryAsync", nullptr, nullptr, sizeof(SteamCoreWebAsyncActionItemVoteSummary_eventItemVoteSummaryAsync_Parms), Z_Construct_UFunction_USteamCoreWebAsyncActionItemVoteSummary_ItemVoteSummaryAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionItemVoteSummary_ItemVoteSummaryAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreWebAsyncActionItemVoteSummary_ItemVoteSummaryAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionItemVoteSummary_ItemVoteSummaryAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionItemVoteSummary_ItemVoteSummaryAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionItemVoteSummary_ItemVoteSummaryAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionItemVoteSummary_NoRegister()
	{
		return USteamCoreWebAsyncActionItemVoteSummary::StaticClass();
	}
	struct Z_Construct_UClass_USteamCoreWebAsyncActionItemVoteSummary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionItemVoteSummary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamCoreWebAsyncActionItemVoteSummary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionItemVoteSummary_ItemVoteSummaryAsync, "ItemVoteSummaryAsync" }, // 3545747362
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreWebAsyncActionItemVoteSummary_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SteamCoreWebAsyncActionItemVoteSummary.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SteamCoreWebAsyncActionItemVoteSummary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamCoreWebAsyncActionItemVoteSummary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionItemVoteSummary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreWebAsyncActionItemVoteSummary_Statics::ClassParams = {
		&USteamCoreWebAsyncActionItemVoteSummary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USteamCoreWebAsyncActionItemVoteSummary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionItemVoteSummary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionItemVoteSummary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USteamCoreWebAsyncActionItemVoteSummary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USteamCoreWebAsyncActionItemVoteSummary, 1649507568);
	template<> STEAMCOREWEB_API UClass* StaticClass<USteamCoreWebAsyncActionItemVoteSummary>()
	{
		return USteamCoreWebAsyncActionItemVoteSummary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USteamCoreWebAsyncActionItemVoteSummary(Z_Construct_UClass_USteamCoreWebAsyncActionItemVoteSummary, &USteamCoreWebAsyncActionItemVoteSummary::StaticClass, TEXT("/Script/SteamCoreWeb"), TEXT("USteamCoreWebAsyncActionItemVoteSummary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreWebAsyncActionItemVoteSummary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
