// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DiscordAchievement/Public/SetUserAchievementProxy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSetUserAchievementProxy() {}
// Cross Module References
	DISCORDACHIEVEMENT_API UClass* Z_Construct_UClass_USetUserAchievementProxy_NoRegister();
	DISCORDACHIEVEMENT_API UClass* Z_Construct_UClass_USetUserAchievementProxy();
	DISCORDACHIEVEMENT_API UClass* Z_Construct_UClass_UBaseAchievementAsyncProxy();
	UPackage* Z_Construct_UPackage__Script_DiscordAchievement();
	DISCORDACHIEVEMENT_API UClass* Z_Construct_UClass_UDiscordAchievementManager_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USetUserAchievementProxy::execSetUserAchievement)
	{
		P_GET_OBJECT(UDiscordAchievementManager,Z_Param_AchievementManager);
		P_GET_PROPERTY(FInt64Property,Z_Param_AchievementId);
		P_GET_PROPERTY(FByteProperty,Z_Param_PercentComplete);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USetUserAchievementProxy**)Z_Param__Result=USetUserAchievementProxy::SetUserAchievement(Z_Param_AchievementManager,Z_Param_AchievementId,Z_Param_PercentComplete);
		P_NATIVE_END;
	}
	void USetUserAchievementProxy::StaticRegisterNativesUSetUserAchievementProxy()
	{
		UClass* Class = USetUserAchievementProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetUserAchievement", &USetUserAchievementProxy::execSetUserAchievement },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USetUserAchievementProxy_SetUserAchievement_Statics
	{
		struct SetUserAchievementProxy_eventSetUserAchievement_Parms
		{
			UDiscordAchievementManager* AchievementManager;
			int64 AchievementId;
			uint8 PercentComplete;
			USetUserAchievementProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AchievementManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AchievementId_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_AchievementId;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PercentComplete;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USetUserAchievementProxy_SetUserAchievement_Statics::NewProp_AchievementManager = { "AchievementManager", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SetUserAchievementProxy_eventSetUserAchievement_Parms, AchievementManager), Z_Construct_UClass_UDiscordAchievementManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USetUserAchievementProxy_SetUserAchievement_Statics::NewProp_AchievementId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_USetUserAchievementProxy_SetUserAchievement_Statics::NewProp_AchievementId = { "AchievementId", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SetUserAchievementProxy_eventSetUserAchievement_Parms, AchievementId), METADATA_PARAMS(Z_Construct_UFunction_USetUserAchievementProxy_SetUserAchievement_Statics::NewProp_AchievementId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USetUserAchievementProxy_SetUserAchievement_Statics::NewProp_AchievementId_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USetUserAchievementProxy_SetUserAchievement_Statics::NewProp_PercentComplete = { "PercentComplete", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SetUserAchievementProxy_eventSetUserAchievement_Parms, PercentComplete), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USetUserAchievementProxy_SetUserAchievement_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SetUserAchievementProxy_eventSetUserAchievement_Parms, ReturnValue), Z_Construct_UClass_USetUserAchievementProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USetUserAchievementProxy_SetUserAchievement_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USetUserAchievementProxy_SetUserAchievement_Statics::NewProp_AchievementManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USetUserAchievementProxy_SetUserAchievement_Statics::NewProp_AchievementId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USetUserAchievementProxy_SetUserAchievement_Statics::NewProp_PercentComplete,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USetUserAchievementProxy_SetUserAchievement_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USetUserAchievementProxy_SetUserAchievement_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SetUserAchievementProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USetUserAchievementProxy_SetUserAchievement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USetUserAchievementProxy, nullptr, "SetUserAchievement", nullptr, nullptr, sizeof(SetUserAchievementProxy_eventSetUserAchievement_Parms), Z_Construct_UFunction_USetUserAchievementProxy_SetUserAchievement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USetUserAchievementProxy_SetUserAchievement_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USetUserAchievementProxy_SetUserAchievement_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USetUserAchievementProxy_SetUserAchievement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USetUserAchievementProxy_SetUserAchievement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USetUserAchievementProxy_SetUserAchievement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USetUserAchievementProxy_NoRegister()
	{
		return USetUserAchievementProxy::StaticClass();
	}
	struct Z_Construct_UClass_USetUserAchievementProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USetUserAchievementProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseAchievementAsyncProxy,
		(UObject* (*)())Z_Construct_UPackage__Script_DiscordAchievement,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USetUserAchievementProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USetUserAchievementProxy_SetUserAchievement, "SetUserAchievement" }, // 1524484993
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USetUserAchievementProxy_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SetUserAchievementProxy.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SetUserAchievementProxy.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USetUserAchievementProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USetUserAchievementProxy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USetUserAchievementProxy_Statics::ClassParams = {
		&USetUserAchievementProxy::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USetUserAchievementProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USetUserAchievementProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USetUserAchievementProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USetUserAchievementProxy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USetUserAchievementProxy, 882103031);
	template<> DISCORDACHIEVEMENT_API UClass* StaticClass<USetUserAchievementProxy>()
	{
		return USetUserAchievementProxy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USetUserAchievementProxy(Z_Construct_UClass_USetUserAchievementProxy, &USetUserAchievementProxy::StaticClass, TEXT("/Script/DiscordAchievement"), TEXT("USetUserAchievementProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USetUserAchievementProxy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
