// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DiscordStore/Public/FetchSkusProxy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFetchSkusProxy() {}
// Cross Module References
	DISCORDSTORE_API UClass* Z_Construct_UClass_UFetchSkusProxy_NoRegister();
	DISCORDSTORE_API UClass* Z_Construct_UClass_UFetchSkusProxy();
	DISCORDSTORE_API UClass* Z_Construct_UClass_UBaseStoreAsyncProxy();
	UPackage* Z_Construct_UPackage__Script_DiscordStore();
	DISCORDSTORE_API UClass* Z_Construct_UClass_UDiscordStoreManager_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UFetchSkusProxy::execFetchSkus)
	{
		P_GET_OBJECT(UDiscordStoreManager,Z_Param_StoreManager);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UFetchSkusProxy**)Z_Param__Result=UFetchSkusProxy::FetchSkus(Z_Param_StoreManager);
		P_NATIVE_END;
	}
	void UFetchSkusProxy::StaticRegisterNativesUFetchSkusProxy()
	{
		UClass* Class = UFetchSkusProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FetchSkus", &UFetchSkusProxy::execFetchSkus },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFetchSkusProxy_FetchSkus_Statics
	{
		struct FetchSkusProxy_eventFetchSkus_Parms
		{
			UDiscordStoreManager* StoreManager;
			UFetchSkusProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StoreManager;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFetchSkusProxy_FetchSkus_Statics::NewProp_StoreManager = { "StoreManager", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FetchSkusProxy_eventFetchSkus_Parms, StoreManager), Z_Construct_UClass_UDiscordStoreManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFetchSkusProxy_FetchSkus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FetchSkusProxy_eventFetchSkus_Parms, ReturnValue), Z_Construct_UClass_UFetchSkusProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFetchSkusProxy_FetchSkus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFetchSkusProxy_FetchSkus_Statics::NewProp_StoreManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFetchSkusProxy_FetchSkus_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFetchSkusProxy_FetchSkus_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FetchSkusProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFetchSkusProxy_FetchSkus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFetchSkusProxy, nullptr, "FetchSkus", nullptr, nullptr, sizeof(FetchSkusProxy_eventFetchSkus_Parms), Z_Construct_UFunction_UFetchSkusProxy_FetchSkus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFetchSkusProxy_FetchSkus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFetchSkusProxy_FetchSkus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFetchSkusProxy_FetchSkus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFetchSkusProxy_FetchSkus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFetchSkusProxy_FetchSkus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFetchSkusProxy_NoRegister()
	{
		return UFetchSkusProxy::StaticClass();
	}
	struct Z_Construct_UClass_UFetchSkusProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFetchSkusProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseStoreAsyncProxy,
		(UObject* (*)())Z_Construct_UPackage__Script_DiscordStore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFetchSkusProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFetchSkusProxy_FetchSkus, "FetchSkus" }, // 3766452461
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFetchSkusProxy_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "FetchSkusProxy.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/FetchSkusProxy.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFetchSkusProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFetchSkusProxy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFetchSkusProxy_Statics::ClassParams = {
		&UFetchSkusProxy::StaticClass,
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
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFetchSkusProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFetchSkusProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFetchSkusProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFetchSkusProxy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFetchSkusProxy, 3770673709);
	template<> DISCORDSTORE_API UClass* StaticClass<UFetchSkusProxy>()
	{
		return UFetchSkusProxy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFetchSkusProxy(Z_Construct_UClass_UFetchSkusProxy, &UFetchSkusProxy::StaticClass, TEXT("/Script/DiscordStore"), TEXT("UFetchSkusProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFetchSkusProxy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
