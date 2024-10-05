// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DiscordHttpApi/Public/DiscordHttpApiSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDiscordHttpApiSettings() {}
// Cross Module References
	DISCORDHTTPAPI_API UClass* Z_Construct_UClass_UDiscordHttpApiSettings_NoRegister();
	DISCORDHTTPAPI_API UClass* Z_Construct_UClass_UDiscordHttpApiSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_DiscordHttpApi();
// End Cross Module References
	DEFINE_FUNCTION(UDiscordHttpApiSettings::execMakeInt64)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Int64);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int64*)Z_Param__Result=UDiscordHttpApiSettings::MakeInt64(Z_Param_Int64);
		P_NATIVE_END;
	}
	void UDiscordHttpApiSettings::StaticRegisterNativesUDiscordHttpApiSettings()
	{
		UClass* Class = UDiscordHttpApiSettings::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "MakeInt64", &UDiscordHttpApiSettings::execMakeInt64 },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDiscordHttpApiSettings_MakeInt64_Statics
	{
		struct DiscordHttpApiSettings_eventMakeInt64_Parms
		{
			FString Int64;
			int64 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Int64_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Int64;
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordHttpApiSettings_MakeInt64_Statics::NewProp_Int64_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDiscordHttpApiSettings_MakeInt64_Statics::NewProp_Int64 = { "Int64", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordHttpApiSettings_eventMakeInt64_Parms, Int64), METADATA_PARAMS(Z_Construct_UFunction_UDiscordHttpApiSettings_MakeInt64_Statics::NewProp_Int64_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordHttpApiSettings_MakeInt64_Statics::NewProp_Int64_MetaData)) };
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UDiscordHttpApiSettings_MakeInt64_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordHttpApiSettings_eventMakeInt64_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDiscordHttpApiSettings_MakeInt64_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordHttpApiSettings_MakeInt64_Statics::NewProp_Int64,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordHttpApiSettings_MakeInt64_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordHttpApiSettings_MakeInt64_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DiscordHttpApiSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDiscordHttpApiSettings_MakeInt64_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDiscordHttpApiSettings, nullptr, "MakeInt64", nullptr, nullptr, sizeof(DiscordHttpApiSettings_eventMakeInt64_Parms), Z_Construct_UFunction_UDiscordHttpApiSettings_MakeInt64_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordHttpApiSettings_MakeInt64_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDiscordHttpApiSettings_MakeInt64_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordHttpApiSettings_MakeInt64_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDiscordHttpApiSettings_MakeInt64()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDiscordHttpApiSettings_MakeInt64_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDiscordHttpApiSettings_NoRegister()
	{
		return UDiscordHttpApiSettings::StaticClass();
	}
	struct Z_Construct_UClass_UDiscordHttpApiSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BotToken_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_BotToken;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDiscordHttpApiSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DiscordHttpApi,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDiscordHttpApiSettings_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDiscordHttpApiSettings_MakeInt64, "MakeInt64" }, // 3365171816
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDiscordHttpApiSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "DiscordHttpApiSettings.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DiscordHttpApiSettings.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDiscordHttpApiSettings_Statics::NewProp_BotToken_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DiscordHttpApiSettings" },
		{ "ModuleRelativePath", "Public/DiscordHttpApiSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDiscordHttpApiSettings_Statics::NewProp_BotToken = { "BotToken", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDiscordHttpApiSettings, BotToken), METADATA_PARAMS(Z_Construct_UClass_UDiscordHttpApiSettings_Statics::NewProp_BotToken_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDiscordHttpApiSettings_Statics::NewProp_BotToken_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDiscordHttpApiSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDiscordHttpApiSettings_Statics::NewProp_BotToken,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDiscordHttpApiSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDiscordHttpApiSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDiscordHttpApiSettings_Statics::ClassParams = {
		&UDiscordHttpApiSettings::StaticClass,
		"DiscordHttpApi",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDiscordHttpApiSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDiscordHttpApiSettings_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UDiscordHttpApiSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDiscordHttpApiSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDiscordHttpApiSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDiscordHttpApiSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDiscordHttpApiSettings, 1732469417);
	template<> DISCORDHTTPAPI_API UClass* StaticClass<UDiscordHttpApiSettings>()
	{
		return UDiscordHttpApiSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDiscordHttpApiSettings(Z_Construct_UClass_UDiscordHttpApiSettings, &UDiscordHttpApiSettings::StaticClass, TEXT("/Script/DiscordHttpApi"), TEXT("UDiscordHttpApiSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDiscordHttpApiSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
