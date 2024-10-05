// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvancedSessions/Public/GetRecentPlayersCallbackProxy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGetRecentPlayersCallbackProxy() {}
// Cross Module References
	ADVANCEDSESSIONS_API UClass* Z_Construct_UClass_UGetRecentPlayersCallbackProxy_NoRegister();
	ADVANCEDSESSIONS_API UClass* Z_Construct_UClass_UGetRecentPlayersCallbackProxy();
	ENGINE_API UClass* Z_Construct_UClass_UOnlineBlueprintCallProxyBase();
	UPackage* Z_Construct_UPackage__Script_AdvancedSessions();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ADVANCEDSESSIONS_API UScriptStruct* Z_Construct_UScriptStruct_FBPUniqueNetId();
	ADVANCEDSESSIONS_API UFunction* Z_Construct_UDelegateFunction_AdvancedSessions_BlueprintGetRecentPlayersDelegate__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UGetRecentPlayersCallbackProxy::execGetAndStoreRecentPlayersList)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT_REF(FBPUniqueNetId,Z_Param_Out_UniqueNetId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UGetRecentPlayersCallbackProxy**)Z_Param__Result=UGetRecentPlayersCallbackProxy::GetAndStoreRecentPlayersList(Z_Param_WorldContextObject,Z_Param_Out_UniqueNetId);
		P_NATIVE_END;
	}
	void UGetRecentPlayersCallbackProxy::StaticRegisterNativesUGetRecentPlayersCallbackProxy()
	{
		UClass* Class = UGetRecentPlayersCallbackProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAndStoreRecentPlayersList", &UGetRecentPlayersCallbackProxy::execGetAndStoreRecentPlayersList },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGetRecentPlayersCallbackProxy_GetAndStoreRecentPlayersList_Statics
	{
		struct GetRecentPlayersCallbackProxy_eventGetAndStoreRecentPlayersList_Parms
		{
			UObject* WorldContextObject;
			FBPUniqueNetId UniqueNetId;
			UGetRecentPlayersCallbackProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UniqueNetId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UniqueNetId;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGetRecentPlayersCallbackProxy_GetAndStoreRecentPlayersList_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GetRecentPlayersCallbackProxy_eventGetAndStoreRecentPlayersList_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGetRecentPlayersCallbackProxy_GetAndStoreRecentPlayersList_Statics::NewProp_UniqueNetId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGetRecentPlayersCallbackProxy_GetAndStoreRecentPlayersList_Statics::NewProp_UniqueNetId = { "UniqueNetId", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GetRecentPlayersCallbackProxy_eventGetAndStoreRecentPlayersList_Parms, UniqueNetId), Z_Construct_UScriptStruct_FBPUniqueNetId, METADATA_PARAMS(Z_Construct_UFunction_UGetRecentPlayersCallbackProxy_GetAndStoreRecentPlayersList_Statics::NewProp_UniqueNetId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGetRecentPlayersCallbackProxy_GetAndStoreRecentPlayersList_Statics::NewProp_UniqueNetId_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGetRecentPlayersCallbackProxy_GetAndStoreRecentPlayersList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GetRecentPlayersCallbackProxy_eventGetAndStoreRecentPlayersList_Parms, ReturnValue), Z_Construct_UClass_UGetRecentPlayersCallbackProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGetRecentPlayersCallbackProxy_GetAndStoreRecentPlayersList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGetRecentPlayersCallbackProxy_GetAndStoreRecentPlayersList_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGetRecentPlayersCallbackProxy_GetAndStoreRecentPlayersList_Statics::NewProp_UniqueNetId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGetRecentPlayersCallbackProxy_GetAndStoreRecentPlayersList_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGetRecentPlayersCallbackProxy_GetAndStoreRecentPlayersList_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GetRecentPlayersCallbackProxy.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGetRecentPlayersCallbackProxy_GetAndStoreRecentPlayersList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGetRecentPlayersCallbackProxy, nullptr, "GetAndStoreRecentPlayersList", nullptr, nullptr, sizeof(GetRecentPlayersCallbackProxy_eventGetAndStoreRecentPlayersList_Parms), Z_Construct_UFunction_UGetRecentPlayersCallbackProxy_GetAndStoreRecentPlayersList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGetRecentPlayersCallbackProxy_GetAndStoreRecentPlayersList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGetRecentPlayersCallbackProxy_GetAndStoreRecentPlayersList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGetRecentPlayersCallbackProxy_GetAndStoreRecentPlayersList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGetRecentPlayersCallbackProxy_GetAndStoreRecentPlayersList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGetRecentPlayersCallbackProxy_GetAndStoreRecentPlayersList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGetRecentPlayersCallbackProxy_NoRegister()
	{
		return UGetRecentPlayersCallbackProxy::StaticClass();
	}
	struct Z_Construct_UClass_UGetRecentPlayersCallbackProxy_Statics
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
	UObject* (*const Z_Construct_UClass_UGetRecentPlayersCallbackProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UOnlineBlueprintCallProxyBase,
		(UObject* (*)())Z_Construct_UPackage__Script_AdvancedSessions,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGetRecentPlayersCallbackProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGetRecentPlayersCallbackProxy_GetAndStoreRecentPlayersList, "GetAndStoreRecentPlayersList" }, // 719755877
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGetRecentPlayersCallbackProxy_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "GetRecentPlayersCallbackProxy.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/GetRecentPlayersCallbackProxy.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGetRecentPlayersCallbackProxy_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GetRecentPlayersCallbackProxy" },
		{ "ModuleRelativePath", "Public/GetRecentPlayersCallbackProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGetRecentPlayersCallbackProxy_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGetRecentPlayersCallbackProxy, OnSuccess), Z_Construct_UDelegateFunction_AdvancedSessions_BlueprintGetRecentPlayersDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UGetRecentPlayersCallbackProxy_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGetRecentPlayersCallbackProxy_Statics::NewProp_OnSuccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGetRecentPlayersCallbackProxy_Statics::NewProp_OnFailure_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GetRecentPlayersCallbackProxy" },
		{ "ModuleRelativePath", "Public/GetRecentPlayersCallbackProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGetRecentPlayersCallbackProxy_Statics::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGetRecentPlayersCallbackProxy, OnFailure), Z_Construct_UDelegateFunction_AdvancedSessions_BlueprintGetRecentPlayersDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UGetRecentPlayersCallbackProxy_Statics::NewProp_OnFailure_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGetRecentPlayersCallbackProxy_Statics::NewProp_OnFailure_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGetRecentPlayersCallbackProxy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGetRecentPlayersCallbackProxy_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGetRecentPlayersCallbackProxy_Statics::NewProp_OnFailure,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGetRecentPlayersCallbackProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGetRecentPlayersCallbackProxy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGetRecentPlayersCallbackProxy_Statics::ClassParams = {
		&UGetRecentPlayersCallbackProxy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGetRecentPlayersCallbackProxy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGetRecentPlayersCallbackProxy_Statics::PropPointers),
		0,
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGetRecentPlayersCallbackProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGetRecentPlayersCallbackProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGetRecentPlayersCallbackProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGetRecentPlayersCallbackProxy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGetRecentPlayersCallbackProxy, 2810827135);
	template<> ADVANCEDSESSIONS_API UClass* StaticClass<UGetRecentPlayersCallbackProxy>()
	{
		return UGetRecentPlayersCallbackProxy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGetRecentPlayersCallbackProxy(Z_Construct_UClass_UGetRecentPlayersCallbackProxy, &UGetRecentPlayersCallbackProxy::StaticClass, TEXT("/Script/AdvancedSessions"), TEXT("UGetRecentPlayersCallbackProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGetRecentPlayersCallbackProxy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
