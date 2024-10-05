// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvancedSessions/Public/JoinSessionCallbackProxyAdvanced.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeJoinSessionCallbackProxyAdvanced() {}
// Cross Module References
	ADVANCEDSESSIONS_API UClass* Z_Construct_UClass_UJoinSessionCallbackProxyAdvanced_NoRegister();
	ADVANCEDSESSIONS_API UClass* Z_Construct_UClass_UJoinSessionCallbackProxyAdvanced();
	ENGINE_API UClass* Z_Construct_UClass_UOnlineBlueprintCallProxyBase();
	UPackage* Z_Construct_UPackage__Script_AdvancedSessions();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	ONLINESUBSYSTEMUTILS_API UScriptStruct* Z_Construct_UScriptStruct_FBlueprintSessionResult();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_EmptyOnlineDelegate__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UJoinSessionCallbackProxyAdvanced::execJoinSession)
	{
		P_GET_OBJECT(UWorld,Z_Param_WorldContextObject);
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
		P_GET_STRUCT_REF(FBlueprintSessionResult,Z_Param_Out_SearchResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UJoinSessionCallbackProxyAdvanced**)Z_Param__Result=UJoinSessionCallbackProxyAdvanced::JoinSession(Z_Param_WorldContextObject,Z_Param_PlayerController,Z_Param_Out_SearchResult);
		P_NATIVE_END;
	}
	void UJoinSessionCallbackProxyAdvanced::StaticRegisterNativesUJoinSessionCallbackProxyAdvanced()
	{
		UClass* Class = UJoinSessionCallbackProxyAdvanced::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "JoinSession", &UJoinSessionCallbackProxyAdvanced::execJoinSession },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UJoinSessionCallbackProxyAdvanced_JoinSession_Statics
	{
		struct JoinSessionCallbackProxyAdvanced_eventJoinSession_Parms
		{
			UWorld* WorldContextObject;
			APlayerController* PlayerController;
			FBlueprintSessionResult SearchResult;
			UJoinSessionCallbackProxyAdvanced* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SearchResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SearchResult;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UJoinSessionCallbackProxyAdvanced_JoinSession_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JoinSessionCallbackProxyAdvanced_eventJoinSession_Parms, WorldContextObject), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UJoinSessionCallbackProxyAdvanced_JoinSession_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JoinSessionCallbackProxyAdvanced_eventJoinSession_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJoinSessionCallbackProxyAdvanced_JoinSession_Statics::NewProp_SearchResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UJoinSessionCallbackProxyAdvanced_JoinSession_Statics::NewProp_SearchResult = { "SearchResult", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JoinSessionCallbackProxyAdvanced_eventJoinSession_Parms, SearchResult), Z_Construct_UScriptStruct_FBlueprintSessionResult, METADATA_PARAMS(Z_Construct_UFunction_UJoinSessionCallbackProxyAdvanced_JoinSession_Statics::NewProp_SearchResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoinSessionCallbackProxyAdvanced_JoinSession_Statics::NewProp_SearchResult_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UJoinSessionCallbackProxyAdvanced_JoinSession_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JoinSessionCallbackProxyAdvanced_eventJoinSession_Parms, ReturnValue), Z_Construct_UClass_UJoinSessionCallbackProxyAdvanced_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJoinSessionCallbackProxyAdvanced_JoinSession_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoinSessionCallbackProxyAdvanced_JoinSession_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoinSessionCallbackProxyAdvanced_JoinSession_Statics::NewProp_PlayerController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoinSessionCallbackProxyAdvanced_JoinSession_Statics::NewProp_SearchResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoinSessionCallbackProxyAdvanced_JoinSession_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJoinSessionCallbackProxyAdvanced_JoinSession_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/JoinSessionCallbackProxyAdvanced.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UJoinSessionCallbackProxyAdvanced_JoinSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJoinSessionCallbackProxyAdvanced, nullptr, "JoinSession", nullptr, nullptr, sizeof(JoinSessionCallbackProxyAdvanced_eventJoinSession_Parms), Z_Construct_UFunction_UJoinSessionCallbackProxyAdvanced_JoinSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoinSessionCallbackProxyAdvanced_JoinSession_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJoinSessionCallbackProxyAdvanced_JoinSession_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoinSessionCallbackProxyAdvanced_JoinSession_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJoinSessionCallbackProxyAdvanced_JoinSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UJoinSessionCallbackProxyAdvanced_JoinSession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UJoinSessionCallbackProxyAdvanced_NoRegister()
	{
		return UJoinSessionCallbackProxyAdvanced::StaticClass();
	}
	struct Z_Construct_UClass_UJoinSessionCallbackProxyAdvanced_Statics
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
	UObject* (*const Z_Construct_UClass_UJoinSessionCallbackProxyAdvanced_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UOnlineBlueprintCallProxyBase,
		(UObject* (*)())Z_Construct_UPackage__Script_AdvancedSessions,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UJoinSessionCallbackProxyAdvanced_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UJoinSessionCallbackProxyAdvanced_JoinSession, "JoinSession" }, // 484807161
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJoinSessionCallbackProxyAdvanced_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "JoinSessionCallbackProxyAdvanced.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/JoinSessionCallbackProxyAdvanced.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJoinSessionCallbackProxyAdvanced_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "JoinSessionCallbackProxyAdvanced" },
		{ "ModuleRelativePath", "Public/JoinSessionCallbackProxyAdvanced.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UJoinSessionCallbackProxyAdvanced_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UJoinSessionCallbackProxyAdvanced, OnSuccess), Z_Construct_UDelegateFunction_Engine_EmptyOnlineDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UJoinSessionCallbackProxyAdvanced_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UJoinSessionCallbackProxyAdvanced_Statics::NewProp_OnSuccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJoinSessionCallbackProxyAdvanced_Statics::NewProp_OnFailure_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "JoinSessionCallbackProxyAdvanced" },
		{ "ModuleRelativePath", "Public/JoinSessionCallbackProxyAdvanced.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UJoinSessionCallbackProxyAdvanced_Statics::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UJoinSessionCallbackProxyAdvanced, OnFailure), Z_Construct_UDelegateFunction_Engine_EmptyOnlineDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UJoinSessionCallbackProxyAdvanced_Statics::NewProp_OnFailure_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UJoinSessionCallbackProxyAdvanced_Statics::NewProp_OnFailure_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UJoinSessionCallbackProxyAdvanced_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJoinSessionCallbackProxyAdvanced_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJoinSessionCallbackProxyAdvanced_Statics::NewProp_OnFailure,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UJoinSessionCallbackProxyAdvanced_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UJoinSessionCallbackProxyAdvanced>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UJoinSessionCallbackProxyAdvanced_Statics::ClassParams = {
		&UJoinSessionCallbackProxyAdvanced::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UJoinSessionCallbackProxyAdvanced_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UJoinSessionCallbackProxyAdvanced_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UJoinSessionCallbackProxyAdvanced_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UJoinSessionCallbackProxyAdvanced_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UJoinSessionCallbackProxyAdvanced()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UJoinSessionCallbackProxyAdvanced_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UJoinSessionCallbackProxyAdvanced, 1453933943);
	template<> ADVANCEDSESSIONS_API UClass* StaticClass<UJoinSessionCallbackProxyAdvanced>()
	{
		return UJoinSessionCallbackProxyAdvanced::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UJoinSessionCallbackProxyAdvanced(Z_Construct_UClass_UJoinSessionCallbackProxyAdvanced, &UJoinSessionCallbackProxyAdvanced::StaticClass, TEXT("/Script/AdvancedSessions"), TEXT("UJoinSessionCallbackProxyAdvanced"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UJoinSessionCallbackProxyAdvanced);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
