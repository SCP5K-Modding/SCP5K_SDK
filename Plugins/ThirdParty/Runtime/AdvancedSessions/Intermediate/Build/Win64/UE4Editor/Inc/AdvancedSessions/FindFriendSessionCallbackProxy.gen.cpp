// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvancedSessions/Public/FindFriendSessionCallbackProxy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFindFriendSessionCallbackProxy() {}
// Cross Module References
	ADVANCEDSESSIONS_API UClass* Z_Construct_UClass_UFindFriendSessionCallbackProxy_NoRegister();
	ADVANCEDSESSIONS_API UClass* Z_Construct_UClass_UFindFriendSessionCallbackProxy();
	ENGINE_API UClass* Z_Construct_UClass_UOnlineBlueprintCallProxyBase();
	UPackage* Z_Construct_UPackage__Script_AdvancedSessions();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	ADVANCEDSESSIONS_API UScriptStruct* Z_Construct_UScriptStruct_FBPUniqueNetId();
	ADVANCEDSESSIONS_API UFunction* Z_Construct_UDelegateFunction_AdvancedSessions_BlueprintFindFriendSessionDelegate__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UFindFriendSessionCallbackProxy::execFindFriendSession)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
		P_GET_STRUCT_REF(FBPUniqueNetId,Z_Param_Out_FriendUniqueNetId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UFindFriendSessionCallbackProxy**)Z_Param__Result=UFindFriendSessionCallbackProxy::FindFriendSession(Z_Param_WorldContextObject,Z_Param_PlayerController,Z_Param_Out_FriendUniqueNetId);
		P_NATIVE_END;
	}
	void UFindFriendSessionCallbackProxy::StaticRegisterNativesUFindFriendSessionCallbackProxy()
	{
		UClass* Class = UFindFriendSessionCallbackProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FindFriendSession", &UFindFriendSessionCallbackProxy::execFindFriendSession },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFindFriendSessionCallbackProxy_FindFriendSession_Statics
	{
		struct FindFriendSessionCallbackProxy_eventFindFriendSession_Parms
		{
			UObject* WorldContextObject;
			APlayerController* PlayerController;
			FBPUniqueNetId FriendUniqueNetId;
			UFindFriendSessionCallbackProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FriendUniqueNetId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FriendUniqueNetId;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFindFriendSessionCallbackProxy_FindFriendSession_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FindFriendSessionCallbackProxy_eventFindFriendSession_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFindFriendSessionCallbackProxy_FindFriendSession_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FindFriendSessionCallbackProxy_eventFindFriendSession_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFindFriendSessionCallbackProxy_FindFriendSession_Statics::NewProp_FriendUniqueNetId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFindFriendSessionCallbackProxy_FindFriendSession_Statics::NewProp_FriendUniqueNetId = { "FriendUniqueNetId", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FindFriendSessionCallbackProxy_eventFindFriendSession_Parms, FriendUniqueNetId), Z_Construct_UScriptStruct_FBPUniqueNetId, METADATA_PARAMS(Z_Construct_UFunction_UFindFriendSessionCallbackProxy_FindFriendSession_Statics::NewProp_FriendUniqueNetId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFindFriendSessionCallbackProxy_FindFriendSession_Statics::NewProp_FriendUniqueNetId_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFindFriendSessionCallbackProxy_FindFriendSession_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FindFriendSessionCallbackProxy_eventFindFriendSession_Parms, ReturnValue), Z_Construct_UClass_UFindFriendSessionCallbackProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFindFriendSessionCallbackProxy_FindFriendSession_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFindFriendSessionCallbackProxy_FindFriendSession_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFindFriendSessionCallbackProxy_FindFriendSession_Statics::NewProp_PlayerController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFindFriendSessionCallbackProxy_FindFriendSession_Statics::NewProp_FriendUniqueNetId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFindFriendSessionCallbackProxy_FindFriendSession_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFindFriendSessionCallbackProxy_FindFriendSession_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FindFriendSessionCallbackProxy.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFindFriendSessionCallbackProxy_FindFriendSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFindFriendSessionCallbackProxy, nullptr, "FindFriendSession", nullptr, nullptr, sizeof(FindFriendSessionCallbackProxy_eventFindFriendSession_Parms), Z_Construct_UFunction_UFindFriendSessionCallbackProxy_FindFriendSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFindFriendSessionCallbackProxy_FindFriendSession_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFindFriendSessionCallbackProxy_FindFriendSession_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFindFriendSessionCallbackProxy_FindFriendSession_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFindFriendSessionCallbackProxy_FindFriendSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFindFriendSessionCallbackProxy_FindFriendSession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFindFriendSessionCallbackProxy_NoRegister()
	{
		return UFindFriendSessionCallbackProxy::StaticClass();
	}
	struct Z_Construct_UClass_UFindFriendSessionCallbackProxy_Statics
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
	UObject* (*const Z_Construct_UClass_UFindFriendSessionCallbackProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UOnlineBlueprintCallProxyBase,
		(UObject* (*)())Z_Construct_UPackage__Script_AdvancedSessions,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFindFriendSessionCallbackProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFindFriendSessionCallbackProxy_FindFriendSession, "FindFriendSession" }, // 1141629138
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFindFriendSessionCallbackProxy_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "FindFriendSessionCallbackProxy.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/FindFriendSessionCallbackProxy.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFindFriendSessionCallbackProxy_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FindFriendSessionCallbackProxy" },
		{ "ModuleRelativePath", "Public/FindFriendSessionCallbackProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFindFriendSessionCallbackProxy_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFindFriendSessionCallbackProxy, OnSuccess), Z_Construct_UDelegateFunction_AdvancedSessions_BlueprintFindFriendSessionDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UFindFriendSessionCallbackProxy_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFindFriendSessionCallbackProxy_Statics::NewProp_OnSuccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFindFriendSessionCallbackProxy_Statics::NewProp_OnFailure_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FindFriendSessionCallbackProxy" },
		{ "ModuleRelativePath", "Public/FindFriendSessionCallbackProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFindFriendSessionCallbackProxy_Statics::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFindFriendSessionCallbackProxy, OnFailure), Z_Construct_UDelegateFunction_AdvancedSessions_BlueprintFindFriendSessionDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UFindFriendSessionCallbackProxy_Statics::NewProp_OnFailure_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFindFriendSessionCallbackProxy_Statics::NewProp_OnFailure_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFindFriendSessionCallbackProxy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFindFriendSessionCallbackProxy_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFindFriendSessionCallbackProxy_Statics::NewProp_OnFailure,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFindFriendSessionCallbackProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFindFriendSessionCallbackProxy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFindFriendSessionCallbackProxy_Statics::ClassParams = {
		&UFindFriendSessionCallbackProxy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UFindFriendSessionCallbackProxy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UFindFriendSessionCallbackProxy_Statics::PropPointers),
		0,
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFindFriendSessionCallbackProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFindFriendSessionCallbackProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFindFriendSessionCallbackProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFindFriendSessionCallbackProxy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFindFriendSessionCallbackProxy, 1841366885);
	template<> ADVANCEDSESSIONS_API UClass* StaticClass<UFindFriendSessionCallbackProxy>()
	{
		return UFindFriendSessionCallbackProxy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFindFriendSessionCallbackProxy(Z_Construct_UClass_UFindFriendSessionCallbackProxy, &UFindFriendSessionCallbackProxy::StaticClass, TEXT("/Script/AdvancedSessions"), TEXT("UFindFriendSessionCallbackProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFindFriendSessionCallbackProxy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
