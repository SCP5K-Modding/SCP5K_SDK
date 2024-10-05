// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DiscordStore/Public/StartPurchaseProxy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStartPurchaseProxy() {}
// Cross Module References
	DISCORDSTORE_API UClass* Z_Construct_UClass_UStartPurchaseProxy_NoRegister();
	DISCORDSTORE_API UClass* Z_Construct_UClass_UStartPurchaseProxy();
	DISCORDSTORE_API UClass* Z_Construct_UClass_UBaseStoreAsyncProxy();
	UPackage* Z_Construct_UPackage__Script_DiscordStore();
	DISCORDSTORE_API UClass* Z_Construct_UClass_UDiscordStoreManager_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UStartPurchaseProxy::execStartPurchase)
	{
		P_GET_OBJECT(UDiscordStoreManager,Z_Param_StoreManager);
		P_GET_PROPERTY(FInt64Property,Z_Param_SkuId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UStartPurchaseProxy**)Z_Param__Result=UStartPurchaseProxy::StartPurchase(Z_Param_StoreManager,Z_Param_SkuId);
		P_NATIVE_END;
	}
	void UStartPurchaseProxy::StaticRegisterNativesUStartPurchaseProxy()
	{
		UClass* Class = UStartPurchaseProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "StartPurchase", &UStartPurchaseProxy::execStartPurchase },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UStartPurchaseProxy_StartPurchase_Statics
	{
		struct StartPurchaseProxy_eventStartPurchase_Parms
		{
			UDiscordStoreManager* StoreManager;
			int64 SkuId;
			UStartPurchaseProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StoreManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkuId_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_SkuId;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStartPurchaseProxy_StartPurchase_Statics::NewProp_StoreManager = { "StoreManager", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StartPurchaseProxy_eventStartPurchase_Parms, StoreManager), Z_Construct_UClass_UDiscordStoreManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStartPurchaseProxy_StartPurchase_Statics::NewProp_SkuId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UStartPurchaseProxy_StartPurchase_Statics::NewProp_SkuId = { "SkuId", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StartPurchaseProxy_eventStartPurchase_Parms, SkuId), METADATA_PARAMS(Z_Construct_UFunction_UStartPurchaseProxy_StartPurchase_Statics::NewProp_SkuId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UStartPurchaseProxy_StartPurchase_Statics::NewProp_SkuId_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStartPurchaseProxy_StartPurchase_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StartPurchaseProxy_eventStartPurchase_Parms, ReturnValue), Z_Construct_UClass_UStartPurchaseProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStartPurchaseProxy_StartPurchase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStartPurchaseProxy_StartPurchase_Statics::NewProp_StoreManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStartPurchaseProxy_StartPurchase_Statics::NewProp_SkuId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStartPurchaseProxy_StartPurchase_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStartPurchaseProxy_StartPurchase_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StartPurchaseProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStartPurchaseProxy_StartPurchase_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStartPurchaseProxy, nullptr, "StartPurchase", nullptr, nullptr, sizeof(StartPurchaseProxy_eventStartPurchase_Parms), Z_Construct_UFunction_UStartPurchaseProxy_StartPurchase_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStartPurchaseProxy_StartPurchase_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStartPurchaseProxy_StartPurchase_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStartPurchaseProxy_StartPurchase_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStartPurchaseProxy_StartPurchase()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStartPurchaseProxy_StartPurchase_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UStartPurchaseProxy_NoRegister()
	{
		return UStartPurchaseProxy::StaticClass();
	}
	struct Z_Construct_UClass_UStartPurchaseProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStartPurchaseProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseStoreAsyncProxy,
		(UObject* (*)())Z_Construct_UPackage__Script_DiscordStore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UStartPurchaseProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UStartPurchaseProxy_StartPurchase, "StartPurchase" }, // 1894912555
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStartPurchaseProxy_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "StartPurchaseProxy.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/StartPurchaseProxy.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStartPurchaseProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStartPurchaseProxy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UStartPurchaseProxy_Statics::ClassParams = {
		&UStartPurchaseProxy::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UStartPurchaseProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStartPurchaseProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStartPurchaseProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UStartPurchaseProxy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UStartPurchaseProxy, 3940505619);
	template<> DISCORDSTORE_API UClass* StaticClass<UStartPurchaseProxy>()
	{
		return UStartPurchaseProxy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UStartPurchaseProxy(Z_Construct_UClass_UStartPurchaseProxy, &UStartPurchaseProxy::StaticClass, TEXT("/Script/DiscordStore"), TEXT("UStartPurchaseProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStartPurchaseProxy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
