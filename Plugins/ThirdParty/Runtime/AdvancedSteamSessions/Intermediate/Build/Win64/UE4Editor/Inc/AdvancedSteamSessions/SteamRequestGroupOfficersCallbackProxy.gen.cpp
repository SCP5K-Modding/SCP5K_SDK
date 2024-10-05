// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvancedSteamSessions/Public/SteamRequestGroupOfficersCallbackProxy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamRequestGroupOfficersCallbackProxy() {}
// Cross Module References
	ADVANCEDSTEAMSESSIONS_API UClass* Z_Construct_UClass_USteamRequestGroupOfficersCallbackProxy_NoRegister();
	ADVANCEDSTEAMSESSIONS_API UClass* Z_Construct_UClass_USteamRequestGroupOfficersCallbackProxy();
	ENGINE_API UClass* Z_Construct_UClass_UOnlineBlueprintCallProxyBase();
	UPackage* Z_Construct_UPackage__Script_AdvancedSteamSessions();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ADVANCEDSESSIONS_API UScriptStruct* Z_Construct_UScriptStruct_FBPUniqueNetId();
	ADVANCEDSTEAMSESSIONS_API UFunction* Z_Construct_UDelegateFunction_AdvancedSteamSessions_BlueprintGroupOfficerDetailsDelegate__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(USteamRequestGroupOfficersCallbackProxy::execGetSteamGroupOfficerList)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FBPUniqueNetId,Z_Param_GroupUniqueNetID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USteamRequestGroupOfficersCallbackProxy**)Z_Param__Result=USteamRequestGroupOfficersCallbackProxy::GetSteamGroupOfficerList(Z_Param_WorldContextObject,Z_Param_GroupUniqueNetID);
		P_NATIVE_END;
	}
	void USteamRequestGroupOfficersCallbackProxy::StaticRegisterNativesUSteamRequestGroupOfficersCallbackProxy()
	{
		UClass* Class = USteamRequestGroupOfficersCallbackProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetSteamGroupOfficerList", &USteamRequestGroupOfficersCallbackProxy::execGetSteamGroupOfficerList },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USteamRequestGroupOfficersCallbackProxy_GetSteamGroupOfficerList_Statics
	{
		struct SteamRequestGroupOfficersCallbackProxy_eventGetSteamGroupOfficerList_Parms
		{
			UObject* WorldContextObject;
			FBPUniqueNetId GroupUniqueNetID;
			USteamRequestGroupOfficersCallbackProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GroupUniqueNetID;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamRequestGroupOfficersCallbackProxy_GetSteamGroupOfficerList_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamRequestGroupOfficersCallbackProxy_eventGetSteamGroupOfficerList_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamRequestGroupOfficersCallbackProxy_GetSteamGroupOfficerList_Statics::NewProp_GroupUniqueNetID = { "GroupUniqueNetID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamRequestGroupOfficersCallbackProxy_eventGetSteamGroupOfficerList_Parms, GroupUniqueNetID), Z_Construct_UScriptStruct_FBPUniqueNetId, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamRequestGroupOfficersCallbackProxy_GetSteamGroupOfficerList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamRequestGroupOfficersCallbackProxy_eventGetSteamGroupOfficerList_Parms, ReturnValue), Z_Construct_UClass_USteamRequestGroupOfficersCallbackProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamRequestGroupOfficersCallbackProxy_GetSteamGroupOfficerList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamRequestGroupOfficersCallbackProxy_GetSteamGroupOfficerList_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamRequestGroupOfficersCallbackProxy_GetSteamGroupOfficerList_Statics::NewProp_GroupUniqueNetID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamRequestGroupOfficersCallbackProxy_GetSteamGroupOfficerList_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamRequestGroupOfficersCallbackProxy_GetSteamGroupOfficerList_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamRequestGroupOfficersCallbackProxy.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamRequestGroupOfficersCallbackProxy_GetSteamGroupOfficerList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamRequestGroupOfficersCallbackProxy, nullptr, "GetSteamGroupOfficerList", nullptr, nullptr, sizeof(SteamRequestGroupOfficersCallbackProxy_eventGetSteamGroupOfficerList_Parms), Z_Construct_UFunction_USteamRequestGroupOfficersCallbackProxy_GetSteamGroupOfficerList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamRequestGroupOfficersCallbackProxy_GetSteamGroupOfficerList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamRequestGroupOfficersCallbackProxy_GetSteamGroupOfficerList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamRequestGroupOfficersCallbackProxy_GetSteamGroupOfficerList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamRequestGroupOfficersCallbackProxy_GetSteamGroupOfficerList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamRequestGroupOfficersCallbackProxy_GetSteamGroupOfficerList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USteamRequestGroupOfficersCallbackProxy_NoRegister()
	{
		return USteamRequestGroupOfficersCallbackProxy::StaticClass();
	}
	struct Z_Construct_UClass_USteamRequestGroupOfficersCallbackProxy_Statics
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
	UObject* (*const Z_Construct_UClass_USteamRequestGroupOfficersCallbackProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UOnlineBlueprintCallProxyBase,
		(UObject* (*)())Z_Construct_UPackage__Script_AdvancedSteamSessions,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamRequestGroupOfficersCallbackProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamRequestGroupOfficersCallbackProxy_GetSteamGroupOfficerList, "GetSteamGroupOfficerList" }, // 1528214836
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamRequestGroupOfficersCallbackProxy_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SteamRequestGroupOfficersCallbackProxy.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SteamRequestGroupOfficersCallbackProxy.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamRequestGroupOfficersCallbackProxy_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SteamRequestGroupOfficersCallbackProxy" },
		{ "ModuleRelativePath", "Public/SteamRequestGroupOfficersCallbackProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamRequestGroupOfficersCallbackProxy_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USteamRequestGroupOfficersCallbackProxy, OnSuccess), Z_Construct_UDelegateFunction_AdvancedSteamSessions_BlueprintGroupOfficerDetailsDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USteamRequestGroupOfficersCallbackProxy_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamRequestGroupOfficersCallbackProxy_Statics::NewProp_OnSuccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamRequestGroupOfficersCallbackProxy_Statics::NewProp_OnFailure_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SteamRequestGroupOfficersCallbackProxy" },
		{ "ModuleRelativePath", "Public/SteamRequestGroupOfficersCallbackProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamRequestGroupOfficersCallbackProxy_Statics::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USteamRequestGroupOfficersCallbackProxy, OnFailure), Z_Construct_UDelegateFunction_AdvancedSteamSessions_BlueprintGroupOfficerDetailsDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USteamRequestGroupOfficersCallbackProxy_Statics::NewProp_OnFailure_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamRequestGroupOfficersCallbackProxy_Statics::NewProp_OnFailure_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USteamRequestGroupOfficersCallbackProxy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamRequestGroupOfficersCallbackProxy_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamRequestGroupOfficersCallbackProxy_Statics::NewProp_OnFailure,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamRequestGroupOfficersCallbackProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamRequestGroupOfficersCallbackProxy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USteamRequestGroupOfficersCallbackProxy_Statics::ClassParams = {
		&USteamRequestGroupOfficersCallbackProxy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USteamRequestGroupOfficersCallbackProxy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USteamRequestGroupOfficersCallbackProxy_Statics::PropPointers),
		0,
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_USteamRequestGroupOfficersCallbackProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamRequestGroupOfficersCallbackProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamRequestGroupOfficersCallbackProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USteamRequestGroupOfficersCallbackProxy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USteamRequestGroupOfficersCallbackProxy, 3100382739);
	template<> ADVANCEDSTEAMSESSIONS_API UClass* StaticClass<USteamRequestGroupOfficersCallbackProxy>()
	{
		return USteamRequestGroupOfficersCallbackProxy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USteamRequestGroupOfficersCallbackProxy(Z_Construct_UClass_USteamRequestGroupOfficersCallbackProxy, &USteamRequestGroupOfficersCallbackProxy::StaticClass, TEXT("/Script/AdvancedSteamSessions"), TEXT("USteamRequestGroupOfficersCallbackProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamRequestGroupOfficersCallbackProxy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
