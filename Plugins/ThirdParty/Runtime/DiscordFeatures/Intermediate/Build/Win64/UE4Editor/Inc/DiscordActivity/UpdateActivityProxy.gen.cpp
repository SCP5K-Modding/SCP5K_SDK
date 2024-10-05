// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DiscordActivity/Public/UpdateActivityProxy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUpdateActivityProxy() {}
// Cross Module References
	DISCORDACTIVITY_API UClass* Z_Construct_UClass_UUpdateActivityProxy_NoRegister();
	DISCORDACTIVITY_API UClass* Z_Construct_UClass_UUpdateActivityProxy();
	DISCORDACTIVITY_API UClass* Z_Construct_UClass_UBaseActivityAsyncProxy();
	UPackage* Z_Construct_UPackage__Script_DiscordActivity();
	DISCORDCORE_API UEnum* Z_Construct_UEnum_DiscordCore_EDiscordResult();
	DISCORDACTIVITY_API UClass* Z_Construct_UClass_UDiscordActivityManager_NoRegister();
	DISCORDCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDiscordActivity();
	DISCORDACTIVITY_API UFunction* Z_Construct_UDelegateFunction_DiscordActivity_DiscordCallbackEvent__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UUpdateActivityProxy::execOnActivityUpdatedInternal)
	{
		P_GET_ENUM(EDiscordResult,Z_Param_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnActivityUpdatedInternal(EDiscordResult(Z_Param_Result));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUpdateActivityProxy::execUpdateActivity)
	{
		P_GET_OBJECT(UDiscordActivityManager,Z_Param_ActivityManager);
		P_GET_STRUCT_REF(FDiscordActivity,Z_Param_Out_Activity);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UUpdateActivityProxy**)Z_Param__Result=UUpdateActivityProxy::UpdateActivity(Z_Param_ActivityManager,Z_Param_Out_Activity);
		P_NATIVE_END;
	}
	void UUpdateActivityProxy::StaticRegisterNativesUUpdateActivityProxy()
	{
		UClass* Class = UUpdateActivityProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnActivityUpdatedInternal", &UUpdateActivityProxy::execOnActivityUpdatedInternal },
			{ "UpdateActivity", &UUpdateActivityProxy::execUpdateActivity },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUpdateActivityProxy_OnActivityUpdatedInternal_Statics
	{
		struct UpdateActivityProxy_eventOnActivityUpdatedInternal_Parms
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
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUpdateActivityProxy_OnActivityUpdatedInternal_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUpdateActivityProxy_OnActivityUpdatedInternal_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UpdateActivityProxy_eventOnActivityUpdatedInternal_Parms, Result), Z_Construct_UEnum_DiscordCore_EDiscordResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUpdateActivityProxy_OnActivityUpdatedInternal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpdateActivityProxy_OnActivityUpdatedInternal_Statics::NewProp_Result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpdateActivityProxy_OnActivityUpdatedInternal_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUpdateActivityProxy_OnActivityUpdatedInternal_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UpdateActivityProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUpdateActivityProxy_OnActivityUpdatedInternal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUpdateActivityProxy, nullptr, "OnActivityUpdatedInternal", nullptr, nullptr, sizeof(UpdateActivityProxy_eventOnActivityUpdatedInternal_Parms), Z_Construct_UFunction_UUpdateActivityProxy_OnActivityUpdatedInternal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateActivityProxy_OnActivityUpdatedInternal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUpdateActivityProxy_OnActivityUpdatedInternal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateActivityProxy_OnActivityUpdatedInternal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUpdateActivityProxy_OnActivityUpdatedInternal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUpdateActivityProxy_OnActivityUpdatedInternal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUpdateActivityProxy_UpdateActivity_Statics
	{
		struct UpdateActivityProxy_eventUpdateActivity_Parms
		{
			UDiscordActivityManager* ActivityManager;
			FDiscordActivity Activity;
			UUpdateActivityProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActivityManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Activity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Activity;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUpdateActivityProxy_UpdateActivity_Statics::NewProp_ActivityManager = { "ActivityManager", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UpdateActivityProxy_eventUpdateActivity_Parms, ActivityManager), Z_Construct_UClass_UDiscordActivityManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUpdateActivityProxy_UpdateActivity_Statics::NewProp_Activity_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUpdateActivityProxy_UpdateActivity_Statics::NewProp_Activity = { "Activity", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UpdateActivityProxy_eventUpdateActivity_Parms, Activity), Z_Construct_UScriptStruct_FDiscordActivity, METADATA_PARAMS(Z_Construct_UFunction_UUpdateActivityProxy_UpdateActivity_Statics::NewProp_Activity_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateActivityProxy_UpdateActivity_Statics::NewProp_Activity_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUpdateActivityProxy_UpdateActivity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UpdateActivityProxy_eventUpdateActivity_Parms, ReturnValue), Z_Construct_UClass_UUpdateActivityProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUpdateActivityProxy_UpdateActivity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpdateActivityProxy_UpdateActivity_Statics::NewProp_ActivityManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpdateActivityProxy_UpdateActivity_Statics::NewProp_Activity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpdateActivityProxy_UpdateActivity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUpdateActivityProxy_UpdateActivity_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UpdateActivityProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUpdateActivityProxy_UpdateActivity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUpdateActivityProxy, nullptr, "UpdateActivity", nullptr, nullptr, sizeof(UpdateActivityProxy_eventUpdateActivity_Parms), Z_Construct_UFunction_UUpdateActivityProxy_UpdateActivity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateActivityProxy_UpdateActivity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUpdateActivityProxy_UpdateActivity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateActivityProxy_UpdateActivity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUpdateActivityProxy_UpdateActivity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUpdateActivityProxy_UpdateActivity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUpdateActivityProxy_NoRegister()
	{
		return UUpdateActivityProxy::StaticClass();
	}
	struct Z_Construct_UClass_UUpdateActivityProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnActivityUpdated_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnActivityUpdated;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUpdateActivityProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseActivityAsyncProxy,
		(UObject* (*)())Z_Construct_UPackage__Script_DiscordActivity,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUpdateActivityProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUpdateActivityProxy_OnActivityUpdatedInternal, "OnActivityUpdatedInternal" }, // 834392551
		{ &Z_Construct_UFunction_UUpdateActivityProxy_UpdateActivity, "UpdateActivity" }, // 2049546270
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUpdateActivityProxy_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "UpdateActivityProxy.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/UpdateActivityProxy.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUpdateActivityProxy_Statics::NewProp_OnActivityUpdated_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UpdateActivityProxy" },
		{ "ModuleRelativePath", "Public/UpdateActivityProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUpdateActivityProxy_Statics::NewProp_OnActivityUpdated = { "OnActivityUpdated", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUpdateActivityProxy, OnActivityUpdated), Z_Construct_UDelegateFunction_DiscordActivity_DiscordCallbackEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UUpdateActivityProxy_Statics::NewProp_OnActivityUpdated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUpdateActivityProxy_Statics::NewProp_OnActivityUpdated_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUpdateActivityProxy_Statics::NewProp_OnError_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UpdateActivityProxy" },
		{ "ModuleRelativePath", "Public/UpdateActivityProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUpdateActivityProxy_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUpdateActivityProxy, OnError), Z_Construct_UDelegateFunction_DiscordActivity_DiscordCallbackEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UUpdateActivityProxy_Statics::NewProp_OnError_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUpdateActivityProxy_Statics::NewProp_OnError_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUpdateActivityProxy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUpdateActivityProxy_Statics::NewProp_OnActivityUpdated,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUpdateActivityProxy_Statics::NewProp_OnError,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUpdateActivityProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUpdateActivityProxy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUpdateActivityProxy_Statics::ClassParams = {
		&UUpdateActivityProxy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUpdateActivityProxy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUpdateActivityProxy_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUpdateActivityProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUpdateActivityProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUpdateActivityProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUpdateActivityProxy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUpdateActivityProxy, 3602455472);
	template<> DISCORDACTIVITY_API UClass* StaticClass<UUpdateActivityProxy>()
	{
		return UUpdateActivityProxy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUpdateActivityProxy(Z_Construct_UClass_UUpdateActivityProxy, &UUpdateActivityProxy::StaticClass, TEXT("/Script/DiscordActivity"), TEXT("UUpdateActivityProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUpdateActivityProxy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
