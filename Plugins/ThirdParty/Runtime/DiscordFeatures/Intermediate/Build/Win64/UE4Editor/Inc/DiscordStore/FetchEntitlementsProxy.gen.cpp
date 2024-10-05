// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DiscordStore/Public/FetchEntitlementsProxy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFetchEntitlementsProxy() {}
// Cross Module References
	DISCORDSTORE_API UClass* Z_Construct_UClass_UFetchEntitlementsProxy_NoRegister();
	DISCORDSTORE_API UClass* Z_Construct_UClass_UFetchEntitlementsProxy();
	DISCORDSTORE_API UClass* Z_Construct_UClass_UBaseStoreAsyncProxy();
	UPackage* Z_Construct_UPackage__Script_DiscordStore();
	DISCORDSTORE_API UClass* Z_Construct_UClass_UDiscordStoreManager_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UFetchEntitlementsProxy::execFetchEntitlements)
	{
		P_GET_OBJECT(UDiscordStoreManager,Z_Param_StoreManager);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UFetchEntitlementsProxy**)Z_Param__Result=UFetchEntitlementsProxy::FetchEntitlements(Z_Param_StoreManager);
		P_NATIVE_END;
	}
	void UFetchEntitlementsProxy::StaticRegisterNativesUFetchEntitlementsProxy()
	{
		UClass* Class = UFetchEntitlementsProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FetchEntitlements", &UFetchEntitlementsProxy::execFetchEntitlements },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFetchEntitlementsProxy_FetchEntitlements_Statics
	{
		struct FetchEntitlementsProxy_eventFetchEntitlements_Parms
		{
			UDiscordStoreManager* StoreManager;
			UFetchEntitlementsProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StoreManager;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFetchEntitlementsProxy_FetchEntitlements_Statics::NewProp_StoreManager = { "StoreManager", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FetchEntitlementsProxy_eventFetchEntitlements_Parms, StoreManager), Z_Construct_UClass_UDiscordStoreManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFetchEntitlementsProxy_FetchEntitlements_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FetchEntitlementsProxy_eventFetchEntitlements_Parms, ReturnValue), Z_Construct_UClass_UFetchEntitlementsProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFetchEntitlementsProxy_FetchEntitlements_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFetchEntitlementsProxy_FetchEntitlements_Statics::NewProp_StoreManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFetchEntitlementsProxy_FetchEntitlements_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFetchEntitlementsProxy_FetchEntitlements_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FetchEntitlementsProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFetchEntitlementsProxy_FetchEntitlements_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFetchEntitlementsProxy, nullptr, "FetchEntitlements", nullptr, nullptr, sizeof(FetchEntitlementsProxy_eventFetchEntitlements_Parms), Z_Construct_UFunction_UFetchEntitlementsProxy_FetchEntitlements_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFetchEntitlementsProxy_FetchEntitlements_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFetchEntitlementsProxy_FetchEntitlements_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFetchEntitlementsProxy_FetchEntitlements_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFetchEntitlementsProxy_FetchEntitlements()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFetchEntitlementsProxy_FetchEntitlements_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFetchEntitlementsProxy_NoRegister()
	{
		return UFetchEntitlementsProxy::StaticClass();
	}
	struct Z_Construct_UClass_UFetchEntitlementsProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFetchEntitlementsProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseStoreAsyncProxy,
		(UObject* (*)())Z_Construct_UPackage__Script_DiscordStore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFetchEntitlementsProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFetchEntitlementsProxy_FetchEntitlements, "FetchEntitlements" }, // 1904783039
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFetchEntitlementsProxy_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "FetchEntitlementsProxy.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/FetchEntitlementsProxy.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFetchEntitlementsProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFetchEntitlementsProxy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFetchEntitlementsProxy_Statics::ClassParams = {
		&UFetchEntitlementsProxy::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UFetchEntitlementsProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFetchEntitlementsProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFetchEntitlementsProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFetchEntitlementsProxy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFetchEntitlementsProxy, 212140233);
	template<> DISCORDSTORE_API UClass* StaticClass<UFetchEntitlementsProxy>()
	{
		return UFetchEntitlementsProxy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFetchEntitlementsProxy(Z_Construct_UClass_UFetchEntitlementsProxy, &UFetchEntitlementsProxy::StaticClass, TEXT("/Script/DiscordStore"), TEXT("UFetchEntitlementsProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFetchEntitlementsProxy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
