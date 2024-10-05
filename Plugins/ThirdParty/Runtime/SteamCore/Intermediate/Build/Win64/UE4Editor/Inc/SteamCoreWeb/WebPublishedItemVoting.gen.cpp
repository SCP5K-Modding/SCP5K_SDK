// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCoreWeb/Public/WebPublishedItemVoting.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWebPublishedItemVoting() {}
// Cross Module References
	STEAMCOREWEB_API UClass* Z_Construct_UClass_UWebPublishedItemVoting_NoRegister();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_UWebPublishedItemVoting();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebSubsystem();
	UPackage* Z_Construct_UPackage__Script_SteamCoreWeb();
	STEAMCOREWEB_API UFunction* Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UWebPublishedItemVoting::execItemVoteSummary)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FStrProperty,Z_Param_SteamID);
		P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
		P_GET_TARRAY(FString,Z_Param_PublishedFileIDs);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ItemVoteSummary(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_SteamID,Z_Param_AppID,Z_Param_PublishedFileIDs);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebPublishedItemVoting::execUserVoteSummary)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FStrProperty,Z_Param_SteamID);
		P_GET_TARRAY(FString,Z_Param_PublishedFileIDs);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UserVoteSummary(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_SteamID,Z_Param_PublishedFileIDs);
		P_NATIVE_END;
	}
	void UWebPublishedItemVoting::StaticRegisterNativesUWebPublishedItemVoting()
	{
		UClass* Class = UWebPublishedItemVoting::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ItemVoteSummary", &UWebPublishedItemVoting::execItemVoteSummary },
			{ "UserVoteSummary", &UWebPublishedItemVoting::execUserVoteSummary },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWebPublishedItemVoting_ItemVoteSummary_Statics
	{
		struct WebPublishedItemVoting_eventItemVoteSummary_Parms
		{
			FScriptDelegate Callback;
			FString Key;
			FString SteamID;
			int32 AppID;
			TArray<FString> PublishedFileIDs;
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
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PublishedFileIDs_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PublishedFileIDs;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebPublishedItemVoting_ItemVoteSummary_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebPublishedItemVoting_ItemVoteSummary_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebPublishedItemVoting_eventItemVoteSummary_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebPublishedItemVoting_ItemVoteSummary_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebPublishedItemVoting_ItemVoteSummary_Statics::NewProp_Callback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebPublishedItemVoting_ItemVoteSummary_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebPublishedItemVoting_ItemVoteSummary_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebPublishedItemVoting_eventItemVoteSummary_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UWebPublishedItemVoting_ItemVoteSummary_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebPublishedItemVoting_ItemVoteSummary_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebPublishedItemVoting_ItemVoteSummary_Statics::NewProp_SteamID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebPublishedItemVoting_ItemVoteSummary_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebPublishedItemVoting_eventItemVoteSummary_Parms, SteamID), METADATA_PARAMS(Z_Construct_UFunction_UWebPublishedItemVoting_ItemVoteSummary_Statics::NewProp_SteamID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebPublishedItemVoting_ItemVoteSummary_Statics::NewProp_SteamID_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebPublishedItemVoting_ItemVoteSummary_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebPublishedItemVoting_eventItemVoteSummary_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebPublishedItemVoting_ItemVoteSummary_Statics::NewProp_PublishedFileIDs_Inner = { "PublishedFileIDs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWebPublishedItemVoting_ItemVoteSummary_Statics::NewProp_PublishedFileIDs = { "PublishedFileIDs", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebPublishedItemVoting_eventItemVoteSummary_Parms, PublishedFileIDs), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebPublishedItemVoting_ItemVoteSummary_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPublishedItemVoting_ItemVoteSummary_Statics::NewProp_Callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPublishedItemVoting_ItemVoteSummary_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPublishedItemVoting_ItemVoteSummary_Statics::NewProp_SteamID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPublishedItemVoting_ItemVoteSummary_Statics::NewProp_AppID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPublishedItemVoting_ItemVoteSummary_Statics::NewProp_PublishedFileIDs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPublishedItemVoting_ItemVoteSummary_Statics::NewProp_PublishedFileIDs,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebPublishedItemVoting_ItemVoteSummary_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WebPublishedItemVoting.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebPublishedItemVoting_ItemVoteSummary_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebPublishedItemVoting, nullptr, "ItemVoteSummary", nullptr, nullptr, sizeof(WebPublishedItemVoting_eventItemVoteSummary_Parms), Z_Construct_UFunction_UWebPublishedItemVoting_ItemVoteSummary_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebPublishedItemVoting_ItemVoteSummary_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebPublishedItemVoting_ItemVoteSummary_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebPublishedItemVoting_ItemVoteSummary_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebPublishedItemVoting_ItemVoteSummary()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebPublishedItemVoting_ItemVoteSummary_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebPublishedItemVoting_UserVoteSummary_Statics
	{
		struct WebPublishedItemVoting_eventUserVoteSummary_Parms
		{
			FScriptDelegate Callback;
			FString Key;
			FString SteamID;
			TArray<FString> PublishedFileIDs;
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
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PublishedFileIDs_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PublishedFileIDs;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebPublishedItemVoting_UserVoteSummary_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebPublishedItemVoting_UserVoteSummary_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebPublishedItemVoting_eventUserVoteSummary_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebPublishedItemVoting_UserVoteSummary_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebPublishedItemVoting_UserVoteSummary_Statics::NewProp_Callback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebPublishedItemVoting_UserVoteSummary_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebPublishedItemVoting_UserVoteSummary_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebPublishedItemVoting_eventUserVoteSummary_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UWebPublishedItemVoting_UserVoteSummary_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebPublishedItemVoting_UserVoteSummary_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebPublishedItemVoting_UserVoteSummary_Statics::NewProp_SteamID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebPublishedItemVoting_UserVoteSummary_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebPublishedItemVoting_eventUserVoteSummary_Parms, SteamID), METADATA_PARAMS(Z_Construct_UFunction_UWebPublishedItemVoting_UserVoteSummary_Statics::NewProp_SteamID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebPublishedItemVoting_UserVoteSummary_Statics::NewProp_SteamID_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebPublishedItemVoting_UserVoteSummary_Statics::NewProp_PublishedFileIDs_Inner = { "PublishedFileIDs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWebPublishedItemVoting_UserVoteSummary_Statics::NewProp_PublishedFileIDs = { "PublishedFileIDs", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebPublishedItemVoting_eventUserVoteSummary_Parms, PublishedFileIDs), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebPublishedItemVoting_UserVoteSummary_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPublishedItemVoting_UserVoteSummary_Statics::NewProp_Callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPublishedItemVoting_UserVoteSummary_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPublishedItemVoting_UserVoteSummary_Statics::NewProp_SteamID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPublishedItemVoting_UserVoteSummary_Statics::NewProp_PublishedFileIDs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebPublishedItemVoting_UserVoteSummary_Statics::NewProp_PublishedFileIDs,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebPublishedItemVoting_UserVoteSummary_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WebPublishedItemVoting.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebPublishedItemVoting_UserVoteSummary_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebPublishedItemVoting, nullptr, "UserVoteSummary", nullptr, nullptr, sizeof(WebPublishedItemVoting_eventUserVoteSummary_Parms), Z_Construct_UFunction_UWebPublishedItemVoting_UserVoteSummary_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebPublishedItemVoting_UserVoteSummary_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebPublishedItemVoting_UserVoteSummary_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebPublishedItemVoting_UserVoteSummary_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebPublishedItemVoting_UserVoteSummary()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebPublishedItemVoting_UserVoteSummary_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UWebPublishedItemVoting_NoRegister()
	{
		return UWebPublishedItemVoting::StaticClass();
	}
	struct Z_Construct_UClass_UWebPublishedItemVoting_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWebPublishedItemVoting_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreWebSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWebPublishedItemVoting_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWebPublishedItemVoting_ItemVoteSummary, "ItemVoteSummary" }, // 1144584799
		{ &Z_Construct_UFunction_UWebPublishedItemVoting_UserVoteSummary, "UserVoteSummary" }, // 2575300598
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebPublishedItemVoting_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "WebPublishedItemVoting.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/WebPublishedItemVoting.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWebPublishedItemVoting_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWebPublishedItemVoting>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UWebPublishedItemVoting_Statics::ClassParams = {
		&UWebPublishedItemVoting::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UWebPublishedItemVoting_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWebPublishedItemVoting_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWebPublishedItemVoting()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UWebPublishedItemVoting_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWebPublishedItemVoting, 2854434300);
	template<> STEAMCOREWEB_API UClass* StaticClass<UWebPublishedItemVoting>()
	{
		return UWebPublishedItemVoting::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWebPublishedItemVoting(Z_Construct_UClass_UWebPublishedItemVoting, &UWebPublishedItemVoting::StaticClass, TEXT("/Script/SteamCoreWeb"), TEXT("UWebPublishedItemVoting"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWebPublishedItemVoting);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
