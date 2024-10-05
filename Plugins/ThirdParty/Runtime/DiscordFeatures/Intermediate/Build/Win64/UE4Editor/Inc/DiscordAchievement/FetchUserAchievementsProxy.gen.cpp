// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DiscordAchievement/Public/FetchUserAchievementsProxy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFetchUserAchievementsProxy() {}
// Cross Module References
	DISCORDACHIEVEMENT_API UClass* Z_Construct_UClass_UFetchUserAchievementsProxy_NoRegister();
	DISCORDACHIEVEMENT_API UClass* Z_Construct_UClass_UFetchUserAchievementsProxy();
	DISCORDACHIEVEMENT_API UClass* Z_Construct_UClass_UBaseAchievementAsyncProxy();
	UPackage* Z_Construct_UPackage__Script_DiscordAchievement();
	DISCORDACHIEVEMENT_API UClass* Z_Construct_UClass_UDiscordAchievementManager_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UFetchUserAchievementsProxy::execFetchUserAchievements)
	{
		P_GET_OBJECT(UDiscordAchievementManager,Z_Param_AchievementManager);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UFetchUserAchievementsProxy**)Z_Param__Result=UFetchUserAchievementsProxy::FetchUserAchievements(Z_Param_AchievementManager);
		P_NATIVE_END;
	}
	void UFetchUserAchievementsProxy::StaticRegisterNativesUFetchUserAchievementsProxy()
	{
		UClass* Class = UFetchUserAchievementsProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FetchUserAchievements", &UFetchUserAchievementsProxy::execFetchUserAchievements },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFetchUserAchievementsProxy_FetchUserAchievements_Statics
	{
		struct FetchUserAchievementsProxy_eventFetchUserAchievements_Parms
		{
			UDiscordAchievementManager* AchievementManager;
			UFetchUserAchievementsProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AchievementManager;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFetchUserAchievementsProxy_FetchUserAchievements_Statics::NewProp_AchievementManager = { "AchievementManager", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FetchUserAchievementsProxy_eventFetchUserAchievements_Parms, AchievementManager), Z_Construct_UClass_UDiscordAchievementManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFetchUserAchievementsProxy_FetchUserAchievements_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FetchUserAchievementsProxy_eventFetchUserAchievements_Parms, ReturnValue), Z_Construct_UClass_UFetchUserAchievementsProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFetchUserAchievementsProxy_FetchUserAchievements_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFetchUserAchievementsProxy_FetchUserAchievements_Statics::NewProp_AchievementManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFetchUserAchievementsProxy_FetchUserAchievements_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFetchUserAchievementsProxy_FetchUserAchievements_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FetchUserAchievementsProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFetchUserAchievementsProxy_FetchUserAchievements_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFetchUserAchievementsProxy, nullptr, "FetchUserAchievements", nullptr, nullptr, sizeof(FetchUserAchievementsProxy_eventFetchUserAchievements_Parms), Z_Construct_UFunction_UFetchUserAchievementsProxy_FetchUserAchievements_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFetchUserAchievementsProxy_FetchUserAchievements_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFetchUserAchievementsProxy_FetchUserAchievements_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFetchUserAchievementsProxy_FetchUserAchievements_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFetchUserAchievementsProxy_FetchUserAchievements()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFetchUserAchievementsProxy_FetchUserAchievements_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFetchUserAchievementsProxy_NoRegister()
	{
		return UFetchUserAchievementsProxy::StaticClass();
	}
	struct Z_Construct_UClass_UFetchUserAchievementsProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFetchUserAchievementsProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseAchievementAsyncProxy,
		(UObject* (*)())Z_Construct_UPackage__Script_DiscordAchievement,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFetchUserAchievementsProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFetchUserAchievementsProxy_FetchUserAchievements, "FetchUserAchievements" }, // 516775897
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFetchUserAchievementsProxy_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "FetchUserAchievementsProxy.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/FetchUserAchievementsProxy.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFetchUserAchievementsProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFetchUserAchievementsProxy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFetchUserAchievementsProxy_Statics::ClassParams = {
		&UFetchUserAchievementsProxy::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UFetchUserAchievementsProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFetchUserAchievementsProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFetchUserAchievementsProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFetchUserAchievementsProxy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFetchUserAchievementsProxy, 2204756557);
	template<> DISCORDACHIEVEMENT_API UClass* StaticClass<UFetchUserAchievementsProxy>()
	{
		return UFetchUserAchievementsProxy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFetchUserAchievementsProxy(Z_Construct_UClass_UFetchUserAchievementsProxy, &UFetchUserAchievementsProxy::StaticClass, TEXT("/Script/DiscordAchievement"), TEXT("UFetchUserAchievementsProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFetchUserAchievementsProxy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
