// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DiscordLobby/Public/SearchLobbyProxy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSearchLobbyProxy() {}
// Cross Module References
	DISCORDLOBBY_API UClass* Z_Construct_UClass_USearchLobbyProxy_NoRegister();
	DISCORDLOBBY_API UClass* Z_Construct_UClass_USearchLobbyProxy();
	DISCORDLOBBY_API UClass* Z_Construct_UClass_UBaseLobbyAsyncProxy();
	UPackage* Z_Construct_UPackage__Script_DiscordLobby();
	DISCORDCORE_API UEnum* Z_Construct_UEnum_DiscordCore_EDiscordResult();
	DISCORDLOBBY_API UClass* Z_Construct_UClass_UDiscordLobbyManager_NoRegister();
	DISCORDLOBBY_API UScriptStruct* Z_Construct_UScriptStruct_FDiscordLobbySearchQuery();
	DISCORDLOBBY_API UFunction* Z_Construct_UDelegateFunction_DiscordLobby_DiscordLobbyResultEvent__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(USearchLobbyProxy::execOnResult)
	{
		P_GET_ENUM(EDiscordResult,Z_Param_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnResult(EDiscordResult(Z_Param_Result));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USearchLobbyProxy::execSearch)
	{
		P_GET_OBJECT(UDiscordLobbyManager,Z_Param_LobbyManager);
		P_GET_STRUCT_REF(FDiscordLobbySearchQuery,Z_Param_Out_SearchQuery);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USearchLobbyProxy**)Z_Param__Result=USearchLobbyProxy::Search(Z_Param_LobbyManager,Z_Param_Out_SearchQuery);
		P_NATIVE_END;
	}
	void USearchLobbyProxy::StaticRegisterNativesUSearchLobbyProxy()
	{
		UClass* Class = USearchLobbyProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnResult", &USearchLobbyProxy::execOnResult },
			{ "Search", &USearchLobbyProxy::execSearch },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USearchLobbyProxy_OnResult_Statics
	{
		struct SearchLobbyProxy_eventOnResult_Parms
		{
			EDiscordResult Result;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USearchLobbyProxy_OnResult_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USearchLobbyProxy_OnResult_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SearchLobbyProxy_eventOnResult_Parms, Result), Z_Construct_UEnum_DiscordCore_EDiscordResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USearchLobbyProxy_OnResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USearchLobbyProxy_OnResult_Statics::NewProp_Result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USearchLobbyProxy_OnResult_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USearchLobbyProxy_OnResult_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SearchLobbyProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USearchLobbyProxy_OnResult_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USearchLobbyProxy, nullptr, "OnResult", nullptr, nullptr, sizeof(SearchLobbyProxy_eventOnResult_Parms), Z_Construct_UFunction_USearchLobbyProxy_OnResult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USearchLobbyProxy_OnResult_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USearchLobbyProxy_OnResult_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USearchLobbyProxy_OnResult_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USearchLobbyProxy_OnResult()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USearchLobbyProxy_OnResult_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USearchLobbyProxy_Search_Statics
	{
		struct SearchLobbyProxy_eventSearch_Parms
		{
			UDiscordLobbyManager* LobbyManager;
			FDiscordLobbySearchQuery SearchQuery;
			USearchLobbyProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LobbyManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SearchQuery_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SearchQuery;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USearchLobbyProxy_Search_Statics::NewProp_LobbyManager = { "LobbyManager", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SearchLobbyProxy_eventSearch_Parms, LobbyManager), Z_Construct_UClass_UDiscordLobbyManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USearchLobbyProxy_Search_Statics::NewProp_SearchQuery_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USearchLobbyProxy_Search_Statics::NewProp_SearchQuery = { "SearchQuery", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SearchLobbyProxy_eventSearch_Parms, SearchQuery), Z_Construct_UScriptStruct_FDiscordLobbySearchQuery, METADATA_PARAMS(Z_Construct_UFunction_USearchLobbyProxy_Search_Statics::NewProp_SearchQuery_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USearchLobbyProxy_Search_Statics::NewProp_SearchQuery_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USearchLobbyProxy_Search_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SearchLobbyProxy_eventSearch_Parms, ReturnValue), Z_Construct_UClass_USearchLobbyProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USearchLobbyProxy_Search_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USearchLobbyProxy_Search_Statics::NewProp_LobbyManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USearchLobbyProxy_Search_Statics::NewProp_SearchQuery,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USearchLobbyProxy_Search_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USearchLobbyProxy_Search_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SearchLobbyProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USearchLobbyProxy_Search_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USearchLobbyProxy, nullptr, "Search", nullptr, nullptr, sizeof(SearchLobbyProxy_eventSearch_Parms), Z_Construct_UFunction_USearchLobbyProxy_Search_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USearchLobbyProxy_Search_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USearchLobbyProxy_Search_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USearchLobbyProxy_Search_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USearchLobbyProxy_Search()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USearchLobbyProxy_Search_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USearchLobbyProxy_NoRegister()
	{
		return USearchLobbyProxy::StaticClass();
	}
	struct Z_Construct_UClass_USearchLobbyProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USearchLobbyProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseLobbyAsyncProxy,
		(UObject* (*)())Z_Construct_UPackage__Script_DiscordLobby,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USearchLobbyProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USearchLobbyProxy_OnResult, "OnResult" }, // 382381040
		{ &Z_Construct_UFunction_USearchLobbyProxy_Search, "Search" }, // 3801346075
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USearchLobbyProxy_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SearchLobbyProxy.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SearchLobbyProxy.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USearchLobbyProxy_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SearchLobbyProxy" },
		{ "ModuleRelativePath", "Public/SearchLobbyProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USearchLobbyProxy_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USearchLobbyProxy, OnSuccess), Z_Construct_UDelegateFunction_DiscordLobby_DiscordLobbyResultEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USearchLobbyProxy_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USearchLobbyProxy_Statics::NewProp_OnSuccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USearchLobbyProxy_Statics::NewProp_OnError_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SearchLobbyProxy" },
		{ "ModuleRelativePath", "Public/SearchLobbyProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USearchLobbyProxy_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USearchLobbyProxy, OnError), Z_Construct_UDelegateFunction_DiscordLobby_DiscordLobbyResultEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USearchLobbyProxy_Statics::NewProp_OnError_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USearchLobbyProxy_Statics::NewProp_OnError_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USearchLobbyProxy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USearchLobbyProxy_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USearchLobbyProxy_Statics::NewProp_OnError,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USearchLobbyProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USearchLobbyProxy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USearchLobbyProxy_Statics::ClassParams = {
		&USearchLobbyProxy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USearchLobbyProxy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USearchLobbyProxy_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USearchLobbyProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USearchLobbyProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USearchLobbyProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USearchLobbyProxy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USearchLobbyProxy, 3630626255);
	template<> DISCORDLOBBY_API UClass* StaticClass<USearchLobbyProxy>()
	{
		return USearchLobbyProxy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USearchLobbyProxy(Z_Construct_UClass_USearchLobbyProxy, &USearchLobbyProxy::StaticClass, TEXT("/Script/DiscordLobby"), TEXT("USearchLobbyProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USearchLobbyProxy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
