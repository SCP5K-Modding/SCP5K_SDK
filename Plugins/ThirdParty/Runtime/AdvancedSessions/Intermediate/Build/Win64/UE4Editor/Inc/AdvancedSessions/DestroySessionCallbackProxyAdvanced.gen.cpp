// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvancedSessions/Public/DestroySessionCallbackProxyAdvanced.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDestroySessionCallbackProxyAdvanced() {}
// Cross Module References
	ADVANCEDSESSIONS_API UClass* Z_Construct_UClass_UDestroySessionCallbackProxyAdvanced_NoRegister();
	ADVANCEDSESSIONS_API UClass* Z_Construct_UClass_UDestroySessionCallbackProxyAdvanced();
	ENGINE_API UClass* Z_Construct_UClass_UOnlineBlueprintCallProxyBase();
	UPackage* Z_Construct_UPackage__Script_AdvancedSessions();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_EmptyOnlineDelegate__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UDestroySessionCallbackProxyAdvanced::execDestroySession)
	{
		P_GET_OBJECT(UWorld,Z_Param_WorldContextObject);
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDestroySessionCallbackProxyAdvanced**)Z_Param__Result=UDestroySessionCallbackProxyAdvanced::DestroySession(Z_Param_WorldContextObject,Z_Param_PlayerController);
		P_NATIVE_END;
	}
	void UDestroySessionCallbackProxyAdvanced::StaticRegisterNativesUDestroySessionCallbackProxyAdvanced()
	{
		UClass* Class = UDestroySessionCallbackProxyAdvanced::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DestroySession", &UDestroySessionCallbackProxyAdvanced::execDestroySession },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDestroySessionCallbackProxyAdvanced_DestroySession_Statics
	{
		struct DestroySessionCallbackProxyAdvanced_eventDestroySession_Parms
		{
			UWorld* WorldContextObject;
			APlayerController* PlayerController;
			UDestroySessionCallbackProxyAdvanced* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDestroySessionCallbackProxyAdvanced_DestroySession_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DestroySessionCallbackProxyAdvanced_eventDestroySession_Parms, WorldContextObject), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDestroySessionCallbackProxyAdvanced_DestroySession_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DestroySessionCallbackProxyAdvanced_eventDestroySession_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDestroySessionCallbackProxyAdvanced_DestroySession_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DestroySessionCallbackProxyAdvanced_eventDestroySession_Parms, ReturnValue), Z_Construct_UClass_UDestroySessionCallbackProxyAdvanced_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDestroySessionCallbackProxyAdvanced_DestroySession_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDestroySessionCallbackProxyAdvanced_DestroySession_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDestroySessionCallbackProxyAdvanced_DestroySession_Statics::NewProp_PlayerController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDestroySessionCallbackProxyAdvanced_DestroySession_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDestroySessionCallbackProxyAdvanced_DestroySession_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DestroySessionCallbackProxyAdvanced.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDestroySessionCallbackProxyAdvanced_DestroySession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDestroySessionCallbackProxyAdvanced, nullptr, "DestroySession", nullptr, nullptr, sizeof(DestroySessionCallbackProxyAdvanced_eventDestroySession_Parms), Z_Construct_UFunction_UDestroySessionCallbackProxyAdvanced_DestroySession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDestroySessionCallbackProxyAdvanced_DestroySession_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDestroySessionCallbackProxyAdvanced_DestroySession_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDestroySessionCallbackProxyAdvanced_DestroySession_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDestroySessionCallbackProxyAdvanced_DestroySession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDestroySessionCallbackProxyAdvanced_DestroySession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDestroySessionCallbackProxyAdvanced_NoRegister()
	{
		return UDestroySessionCallbackProxyAdvanced::StaticClass();
	}
	struct Z_Construct_UClass_UDestroySessionCallbackProxyAdvanced_Statics
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
	UObject* (*const Z_Construct_UClass_UDestroySessionCallbackProxyAdvanced_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UOnlineBlueprintCallProxyBase,
		(UObject* (*)())Z_Construct_UPackage__Script_AdvancedSessions,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDestroySessionCallbackProxyAdvanced_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDestroySessionCallbackProxyAdvanced_DestroySession, "DestroySession" }, // 4001296567
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDestroySessionCallbackProxyAdvanced_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "DestroySessionCallbackProxyAdvanced.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DestroySessionCallbackProxyAdvanced.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDestroySessionCallbackProxyAdvanced_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DestroySessionCallbackProxyAdvanced" },
		{ "ModuleRelativePath", "Public/DestroySessionCallbackProxyAdvanced.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UDestroySessionCallbackProxyAdvanced_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDestroySessionCallbackProxyAdvanced, OnSuccess), Z_Construct_UDelegateFunction_Engine_EmptyOnlineDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UDestroySessionCallbackProxyAdvanced_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDestroySessionCallbackProxyAdvanced_Statics::NewProp_OnSuccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDestroySessionCallbackProxyAdvanced_Statics::NewProp_OnFailure_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DestroySessionCallbackProxyAdvanced" },
		{ "ModuleRelativePath", "Public/DestroySessionCallbackProxyAdvanced.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UDestroySessionCallbackProxyAdvanced_Statics::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDestroySessionCallbackProxyAdvanced, OnFailure), Z_Construct_UDelegateFunction_Engine_EmptyOnlineDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UDestroySessionCallbackProxyAdvanced_Statics::NewProp_OnFailure_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDestroySessionCallbackProxyAdvanced_Statics::NewProp_OnFailure_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDestroySessionCallbackProxyAdvanced_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDestroySessionCallbackProxyAdvanced_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDestroySessionCallbackProxyAdvanced_Statics::NewProp_OnFailure,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDestroySessionCallbackProxyAdvanced_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDestroySessionCallbackProxyAdvanced>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDestroySessionCallbackProxyAdvanced_Statics::ClassParams = {
		&UDestroySessionCallbackProxyAdvanced::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDestroySessionCallbackProxyAdvanced_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDestroySessionCallbackProxyAdvanced_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDestroySessionCallbackProxyAdvanced_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDestroySessionCallbackProxyAdvanced_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDestroySessionCallbackProxyAdvanced()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDestroySessionCallbackProxyAdvanced_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDestroySessionCallbackProxyAdvanced, 103462457);
	template<> ADVANCEDSESSIONS_API UClass* StaticClass<UDestroySessionCallbackProxyAdvanced>()
	{
		return UDestroySessionCallbackProxyAdvanced::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDestroySessionCallbackProxyAdvanced(Z_Construct_UClass_UDestroySessionCallbackProxyAdvanced, &UDestroySessionCallbackProxyAdvanced::StaticClass, TEXT("/Script/AdvancedSessions"), TEXT("UDestroySessionCallbackProxyAdvanced"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDestroySessionCallbackProxyAdvanced);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
