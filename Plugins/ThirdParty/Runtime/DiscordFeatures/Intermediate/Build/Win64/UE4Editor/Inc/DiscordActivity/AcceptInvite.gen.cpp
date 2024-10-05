// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DiscordActivity/Public/AcceptInvite.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAcceptInvite() {}
// Cross Module References
	DISCORDACTIVITY_API UClass* Z_Construct_UClass_UAcceptInvite_NoRegister();
	DISCORDACTIVITY_API UClass* Z_Construct_UClass_UAcceptInvite();
	DISCORDACTIVITY_API UClass* Z_Construct_UClass_UBaseActivityAsyncProxy();
	UPackage* Z_Construct_UPackage__Script_DiscordActivity();
	DISCORDACTIVITY_API UClass* Z_Construct_UClass_UDiscordActivityManager_NoRegister();
	DISCORDCORE_API UEnum* Z_Construct_UEnum_DiscordCore_EDiscordResult();
	DISCORDACTIVITY_API UFunction* Z_Construct_UDelegateFunction_DiscordActivity_DiscordCallbackEvent__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UAcceptInvite::execAcceptInvite)
	{
		P_GET_OBJECT(UDiscordActivityManager,Z_Param_ActivityManager);
		P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_UserId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAcceptInvite**)Z_Param__Result=UAcceptInvite::AcceptInvite(Z_Param_ActivityManager,Z_Param_Out_UserId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAcceptInvite::execOnInviteAcceptedInternal)
	{
		P_GET_ENUM(EDiscordResult,Z_Param_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnInviteAcceptedInternal(EDiscordResult(Z_Param_Result));
		P_NATIVE_END;
	}
	void UAcceptInvite::StaticRegisterNativesUAcceptInvite()
	{
		UClass* Class = UAcceptInvite::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AcceptInvite", &UAcceptInvite::execAcceptInvite },
			{ "OnInviteAcceptedInternal", &UAcceptInvite::execOnInviteAcceptedInternal },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAcceptInvite_AcceptInvite_Statics
	{
		struct AcceptInvite_eventAcceptInvite_Parms
		{
			UDiscordActivityManager* ActivityManager;
			int64 UserId;
			UAcceptInvite* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActivityManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserId_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_UserId;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAcceptInvite_AcceptInvite_Statics::NewProp_ActivityManager = { "ActivityManager", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AcceptInvite_eventAcceptInvite_Parms, ActivityManager), Z_Construct_UClass_UDiscordActivityManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAcceptInvite_AcceptInvite_Statics::NewProp_UserId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UAcceptInvite_AcceptInvite_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AcceptInvite_eventAcceptInvite_Parms, UserId), METADATA_PARAMS(Z_Construct_UFunction_UAcceptInvite_AcceptInvite_Statics::NewProp_UserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAcceptInvite_AcceptInvite_Statics::NewProp_UserId_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAcceptInvite_AcceptInvite_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AcceptInvite_eventAcceptInvite_Parms, ReturnValue), Z_Construct_UClass_UAcceptInvite_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAcceptInvite_AcceptInvite_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAcceptInvite_AcceptInvite_Statics::NewProp_ActivityManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAcceptInvite_AcceptInvite_Statics::NewProp_UserId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAcceptInvite_AcceptInvite_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAcceptInvite_AcceptInvite_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AcceptInvite.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAcceptInvite_AcceptInvite_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAcceptInvite, nullptr, "AcceptInvite", nullptr, nullptr, sizeof(AcceptInvite_eventAcceptInvite_Parms), Z_Construct_UFunction_UAcceptInvite_AcceptInvite_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAcceptInvite_AcceptInvite_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAcceptInvite_AcceptInvite_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAcceptInvite_AcceptInvite_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAcceptInvite_AcceptInvite()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAcceptInvite_AcceptInvite_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAcceptInvite_OnInviteAcceptedInternal_Statics
	{
		struct AcceptInvite_eventOnInviteAcceptedInternal_Parms
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
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAcceptInvite_OnInviteAcceptedInternal_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAcceptInvite_OnInviteAcceptedInternal_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AcceptInvite_eventOnInviteAcceptedInternal_Parms, Result), Z_Construct_UEnum_DiscordCore_EDiscordResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAcceptInvite_OnInviteAcceptedInternal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAcceptInvite_OnInviteAcceptedInternal_Statics::NewProp_Result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAcceptInvite_OnInviteAcceptedInternal_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAcceptInvite_OnInviteAcceptedInternal_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AcceptInvite.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAcceptInvite_OnInviteAcceptedInternal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAcceptInvite, nullptr, "OnInviteAcceptedInternal", nullptr, nullptr, sizeof(AcceptInvite_eventOnInviteAcceptedInternal_Parms), Z_Construct_UFunction_UAcceptInvite_OnInviteAcceptedInternal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAcceptInvite_OnInviteAcceptedInternal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAcceptInvite_OnInviteAcceptedInternal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAcceptInvite_OnInviteAcceptedInternal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAcceptInvite_OnInviteAcceptedInternal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAcceptInvite_OnInviteAcceptedInternal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAcceptInvite_NoRegister()
	{
		return UAcceptInvite::StaticClass();
	}
	struct Z_Construct_UClass_UAcceptInvite_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnInviteAccepted_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnInviteAccepted;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAcceptInvite_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseActivityAsyncProxy,
		(UObject* (*)())Z_Construct_UPackage__Script_DiscordActivity,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAcceptInvite_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAcceptInvite_AcceptInvite, "AcceptInvite" }, // 938613055
		{ &Z_Construct_UFunction_UAcceptInvite_OnInviteAcceptedInternal, "OnInviteAcceptedInternal" }, // 369649829
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAcceptInvite_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AcceptInvite.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AcceptInvite.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAcceptInvite_Statics::NewProp_OnInviteAccepted_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AcceptInvite" },
		{ "ModuleRelativePath", "Public/AcceptInvite.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAcceptInvite_Statics::NewProp_OnInviteAccepted = { "OnInviteAccepted", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAcceptInvite, OnInviteAccepted), Z_Construct_UDelegateFunction_DiscordActivity_DiscordCallbackEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAcceptInvite_Statics::NewProp_OnInviteAccepted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAcceptInvite_Statics::NewProp_OnInviteAccepted_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAcceptInvite_Statics::NewProp_OnError_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AcceptInvite" },
		{ "ModuleRelativePath", "Public/AcceptInvite.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAcceptInvite_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAcceptInvite, OnError), Z_Construct_UDelegateFunction_DiscordActivity_DiscordCallbackEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAcceptInvite_Statics::NewProp_OnError_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAcceptInvite_Statics::NewProp_OnError_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAcceptInvite_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAcceptInvite_Statics::NewProp_OnInviteAccepted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAcceptInvite_Statics::NewProp_OnError,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAcceptInvite_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAcceptInvite>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAcceptInvite_Statics::ClassParams = {
		&UAcceptInvite::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAcceptInvite_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAcceptInvite_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAcceptInvite_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAcceptInvite_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAcceptInvite()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAcceptInvite_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAcceptInvite, 484369538);
	template<> DISCORDACTIVITY_API UClass* StaticClass<UAcceptInvite>()
	{
		return UAcceptInvite::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAcceptInvite(Z_Construct_UClass_UAcceptInvite, &UAcceptInvite::StaticClass, TEXT("/Script/DiscordActivity"), TEXT("UAcceptInvite"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAcceptInvite);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
