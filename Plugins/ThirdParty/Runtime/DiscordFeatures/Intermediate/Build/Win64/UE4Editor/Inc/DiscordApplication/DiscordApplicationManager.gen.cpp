// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DiscordApplication/Public/DiscordApplicationManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDiscordApplicationManager() {}
// Cross Module References
	DISCORDAPPLICATION_API UClass* Z_Construct_UClass_UDiscordApplicationManager_NoRegister();
	DISCORDAPPLICATION_API UClass* Z_Construct_UClass_UDiscordApplicationManager();
	DISCORDCORE_API UClass* Z_Construct_UClass_UDiscordManager();
	UPackage* Z_Construct_UPackage__Script_DiscordApplication();
	DISCORDCORE_API UClass* Z_Construct_UClass_UDiscordCore_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UDiscordApplicationManager::execGetApplicationManager)
	{
		P_GET_OBJECT(UDiscordCore,Z_Param_DiscordCore);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDiscordApplicationManager**)Z_Param__Result=UDiscordApplicationManager::GetApplicationManager(Z_Param_DiscordCore);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDiscordApplicationManager::execGetCurrentBranch)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetCurrentBranch();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDiscordApplicationManager::execGetCurrentLocale)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetCurrentLocale();
		P_NATIVE_END;
	}
	void UDiscordApplicationManager::StaticRegisterNativesUDiscordApplicationManager()
	{
		UClass* Class = UDiscordApplicationManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetApplicationManager", &UDiscordApplicationManager::execGetApplicationManager },
			{ "GetCurrentBranch", &UDiscordApplicationManager::execGetCurrentBranch },
			{ "GetCurrentLocale", &UDiscordApplicationManager::execGetCurrentLocale },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDiscordApplicationManager_GetApplicationManager_Statics
	{
		struct DiscordApplicationManager_eventGetApplicationManager_Parms
		{
			const UDiscordCore* DiscordCore;
			UDiscordApplicationManager* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DiscordCore_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DiscordCore;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordApplicationManager_GetApplicationManager_Statics::NewProp_DiscordCore_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDiscordApplicationManager_GetApplicationManager_Statics::NewProp_DiscordCore = { "DiscordCore", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordApplicationManager_eventGetApplicationManager_Parms, DiscordCore), Z_Construct_UClass_UDiscordCore_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDiscordApplicationManager_GetApplicationManager_Statics::NewProp_DiscordCore_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordApplicationManager_GetApplicationManager_Statics::NewProp_DiscordCore_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDiscordApplicationManager_GetApplicationManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordApplicationManager_eventGetApplicationManager_Parms, ReturnValue), Z_Construct_UClass_UDiscordApplicationManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDiscordApplicationManager_GetApplicationManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordApplicationManager_GetApplicationManager_Statics::NewProp_DiscordCore,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordApplicationManager_GetApplicationManager_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordApplicationManager_GetApplicationManager_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DiscordApplicationManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDiscordApplicationManager_GetApplicationManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDiscordApplicationManager, nullptr, "GetApplicationManager", nullptr, nullptr, sizeof(DiscordApplicationManager_eventGetApplicationManager_Parms), Z_Construct_UFunction_UDiscordApplicationManager_GetApplicationManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordApplicationManager_GetApplicationManager_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDiscordApplicationManager_GetApplicationManager_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordApplicationManager_GetApplicationManager_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDiscordApplicationManager_GetApplicationManager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDiscordApplicationManager_GetApplicationManager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDiscordApplicationManager_GetCurrentBranch_Statics
	{
		struct DiscordApplicationManager_eventGetCurrentBranch_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDiscordApplicationManager_GetCurrentBranch_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordApplicationManager_eventGetCurrentBranch_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDiscordApplicationManager_GetCurrentBranch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordApplicationManager_GetCurrentBranch_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordApplicationManager_GetCurrentBranch_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DiscordApplicationManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDiscordApplicationManager_GetCurrentBranch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDiscordApplicationManager, nullptr, "GetCurrentBranch", nullptr, nullptr, sizeof(DiscordApplicationManager_eventGetCurrentBranch_Parms), Z_Construct_UFunction_UDiscordApplicationManager_GetCurrentBranch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordApplicationManager_GetCurrentBranch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDiscordApplicationManager_GetCurrentBranch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordApplicationManager_GetCurrentBranch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDiscordApplicationManager_GetCurrentBranch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDiscordApplicationManager_GetCurrentBranch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDiscordApplicationManager_GetCurrentLocale_Statics
	{
		struct DiscordApplicationManager_eventGetCurrentLocale_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDiscordApplicationManager_GetCurrentLocale_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordApplicationManager_eventGetCurrentLocale_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDiscordApplicationManager_GetCurrentLocale_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordApplicationManager_GetCurrentLocale_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordApplicationManager_GetCurrentLocale_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DiscordApplicationManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDiscordApplicationManager_GetCurrentLocale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDiscordApplicationManager, nullptr, "GetCurrentLocale", nullptr, nullptr, sizeof(DiscordApplicationManager_eventGetCurrentLocale_Parms), Z_Construct_UFunction_UDiscordApplicationManager_GetCurrentLocale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordApplicationManager_GetCurrentLocale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDiscordApplicationManager_GetCurrentLocale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordApplicationManager_GetCurrentLocale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDiscordApplicationManager_GetCurrentLocale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDiscordApplicationManager_GetCurrentLocale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDiscordApplicationManager_NoRegister()
	{
		return UDiscordApplicationManager::StaticClass();
	}
	struct Z_Construct_UClass_UDiscordApplicationManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDiscordApplicationManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDiscordManager,
		(UObject* (*)())Z_Construct_UPackage__Script_DiscordApplication,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDiscordApplicationManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDiscordApplicationManager_GetApplicationManager, "GetApplicationManager" }, // 416124841
		{ &Z_Construct_UFunction_UDiscordApplicationManager_GetCurrentBranch, "GetCurrentBranch" }, // 3883773333
		{ &Z_Construct_UFunction_UDiscordApplicationManager_GetCurrentLocale, "GetCurrentLocale" }, // 1369186361
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDiscordApplicationManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "DiscordApplicationManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DiscordApplicationManager.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDiscordApplicationManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDiscordApplicationManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDiscordApplicationManager_Statics::ClassParams = {
		&UDiscordApplicationManager::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDiscordApplicationManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDiscordApplicationManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDiscordApplicationManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDiscordApplicationManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDiscordApplicationManager, 1748463048);
	template<> DISCORDAPPLICATION_API UClass* StaticClass<UDiscordApplicationManager>()
	{
		return UDiscordApplicationManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDiscordApplicationManager(Z_Construct_UClass_UDiscordApplicationManager, &UDiscordApplicationManager::StaticClass, TEXT("/Script/DiscordApplication"), TEXT("UDiscordApplicationManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDiscordApplicationManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
