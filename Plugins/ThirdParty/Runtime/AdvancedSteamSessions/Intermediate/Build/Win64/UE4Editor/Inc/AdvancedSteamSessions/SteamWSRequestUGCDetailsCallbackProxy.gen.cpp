// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvancedSteamSessions/Public/SteamWSRequestUGCDetailsCallbackProxy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamWSRequestUGCDetailsCallbackProxy() {}
// Cross Module References
	ADVANCEDSTEAMSESSIONS_API UClass* Z_Construct_UClass_USteamWSRequestUGCDetailsCallbackProxy_NoRegister();
	ADVANCEDSTEAMSESSIONS_API UClass* Z_Construct_UClass_USteamWSRequestUGCDetailsCallbackProxy();
	ENGINE_API UClass* Z_Construct_UClass_UOnlineBlueprintCallProxyBase();
	UPackage* Z_Construct_UPackage__Script_AdvancedSteamSessions();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ADVANCEDSTEAMSESSIONS_API UScriptStruct* Z_Construct_UScriptStruct_FBPSteamWorkshopID();
	ADVANCEDSTEAMSESSIONS_API UFunction* Z_Construct_UDelegateFunction_AdvancedSteamSessions_BlueprintWorkshopDetailsDelegate__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(USteamWSRequestUGCDetailsCallbackProxy::execGetWorkshopItemDetails)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FBPSteamWorkshopID,Z_Param_WorkShopID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USteamWSRequestUGCDetailsCallbackProxy**)Z_Param__Result=USteamWSRequestUGCDetailsCallbackProxy::GetWorkshopItemDetails(Z_Param_WorldContextObject,Z_Param_WorkShopID);
		P_NATIVE_END;
	}
	void USteamWSRequestUGCDetailsCallbackProxy::StaticRegisterNativesUSteamWSRequestUGCDetailsCallbackProxy()
	{
		UClass* Class = USteamWSRequestUGCDetailsCallbackProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetWorkshopItemDetails", &USteamWSRequestUGCDetailsCallbackProxy::execGetWorkshopItemDetails },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USteamWSRequestUGCDetailsCallbackProxy_GetWorkshopItemDetails_Statics
	{
		struct SteamWSRequestUGCDetailsCallbackProxy_eventGetWorkshopItemDetails_Parms
		{
			UObject* WorldContextObject;
			FBPSteamWorkshopID WorkShopID;
			USteamWSRequestUGCDetailsCallbackProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WorkShopID;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamWSRequestUGCDetailsCallbackProxy_GetWorkshopItemDetails_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamWSRequestUGCDetailsCallbackProxy_eventGetWorkshopItemDetails_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamWSRequestUGCDetailsCallbackProxy_GetWorkshopItemDetails_Statics::NewProp_WorkShopID = { "WorkShopID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamWSRequestUGCDetailsCallbackProxy_eventGetWorkshopItemDetails_Parms, WorkShopID), Z_Construct_UScriptStruct_FBPSteamWorkshopID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamWSRequestUGCDetailsCallbackProxy_GetWorkshopItemDetails_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamWSRequestUGCDetailsCallbackProxy_eventGetWorkshopItemDetails_Parms, ReturnValue), Z_Construct_UClass_USteamWSRequestUGCDetailsCallbackProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamWSRequestUGCDetailsCallbackProxy_GetWorkshopItemDetails_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamWSRequestUGCDetailsCallbackProxy_GetWorkshopItemDetails_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamWSRequestUGCDetailsCallbackProxy_GetWorkshopItemDetails_Statics::NewProp_WorkShopID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamWSRequestUGCDetailsCallbackProxy_GetWorkshopItemDetails_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamWSRequestUGCDetailsCallbackProxy_GetWorkshopItemDetails_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamWSRequestUGCDetailsCallbackProxy.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamWSRequestUGCDetailsCallbackProxy_GetWorkshopItemDetails_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamWSRequestUGCDetailsCallbackProxy, nullptr, "GetWorkshopItemDetails", nullptr, nullptr, sizeof(SteamWSRequestUGCDetailsCallbackProxy_eventGetWorkshopItemDetails_Parms), Z_Construct_UFunction_USteamWSRequestUGCDetailsCallbackProxy_GetWorkshopItemDetails_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamWSRequestUGCDetailsCallbackProxy_GetWorkshopItemDetails_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamWSRequestUGCDetailsCallbackProxy_GetWorkshopItemDetails_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamWSRequestUGCDetailsCallbackProxy_GetWorkshopItemDetails_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamWSRequestUGCDetailsCallbackProxy_GetWorkshopItemDetails()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamWSRequestUGCDetailsCallbackProxy_GetWorkshopItemDetails_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USteamWSRequestUGCDetailsCallbackProxy_NoRegister()
	{
		return USteamWSRequestUGCDetailsCallbackProxy::StaticClass();
	}
	struct Z_Construct_UClass_USteamWSRequestUGCDetailsCallbackProxy_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnFailure_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFailure;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamWSRequestUGCDetailsCallbackProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UOnlineBlueprintCallProxyBase,
		(UObject* (*)())Z_Construct_UPackage__Script_AdvancedSteamSessions,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamWSRequestUGCDetailsCallbackProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamWSRequestUGCDetailsCallbackProxy_GetWorkshopItemDetails, "GetWorkshopItemDetails" }, // 3367191161
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamWSRequestUGCDetailsCallbackProxy_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SteamWSRequestUGCDetailsCallbackProxy.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SteamWSRequestUGCDetailsCallbackProxy.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamWSRequestUGCDetailsCallbackProxy_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SteamWSRequestUGCDetailsCallbackProxy" },
		{ "ModuleRelativePath", "Public/SteamWSRequestUGCDetailsCallbackProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamWSRequestUGCDetailsCallbackProxy_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USteamWSRequestUGCDetailsCallbackProxy, OnSuccess), Z_Construct_UDelegateFunction_AdvancedSteamSessions_BlueprintWorkshopDetailsDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USteamWSRequestUGCDetailsCallbackProxy_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamWSRequestUGCDetailsCallbackProxy_Statics::NewProp_OnSuccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamWSRequestUGCDetailsCallbackProxy_Statics::NewProp_OnFailure_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SteamWSRequestUGCDetailsCallbackProxy" },
		{ "ModuleRelativePath", "Public/SteamWSRequestUGCDetailsCallbackProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamWSRequestUGCDetailsCallbackProxy_Statics::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USteamWSRequestUGCDetailsCallbackProxy, OnFailure), Z_Construct_UDelegateFunction_AdvancedSteamSessions_BlueprintWorkshopDetailsDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USteamWSRequestUGCDetailsCallbackProxy_Statics::NewProp_OnFailure_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamWSRequestUGCDetailsCallbackProxy_Statics::NewProp_OnFailure_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USteamWSRequestUGCDetailsCallbackProxy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamWSRequestUGCDetailsCallbackProxy_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamWSRequestUGCDetailsCallbackProxy_Statics::NewProp_OnFailure,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamWSRequestUGCDetailsCallbackProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamWSRequestUGCDetailsCallbackProxy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USteamWSRequestUGCDetailsCallbackProxy_Statics::ClassParams = {
		&USteamWSRequestUGCDetailsCallbackProxy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USteamWSRequestUGCDetailsCallbackProxy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USteamWSRequestUGCDetailsCallbackProxy_Statics::PropPointers),
		0,
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_USteamWSRequestUGCDetailsCallbackProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamWSRequestUGCDetailsCallbackProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamWSRequestUGCDetailsCallbackProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USteamWSRequestUGCDetailsCallbackProxy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USteamWSRequestUGCDetailsCallbackProxy, 2645714039);
	template<> ADVANCEDSTEAMSESSIONS_API UClass* StaticClass<USteamWSRequestUGCDetailsCallbackProxy>()
	{
		return USteamWSRequestUGCDetailsCallbackProxy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USteamWSRequestUGCDetailsCallbackProxy(Z_Construct_UClass_USteamWSRequestUGCDetailsCallbackProxy, &USteamWSRequestUGCDetailsCallbackProxy::StaticClass, TEXT("/Script/AdvancedSteamSessions"), TEXT("USteamWSRequestUGCDetailsCallbackProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamWSRequestUGCDetailsCallbackProxy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
