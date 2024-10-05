// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AISentience/Public/SAISettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSAISettings() {}
// Cross Module References
	AISENTIENCE_API UClass* Z_Construct_UClass_USAISettings_NoRegister();
	AISENTIENCE_API UClass* Z_Construct_UClass_USAISettings();
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
	UPackage* Z_Construct_UPackage__Script_AISentience();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FGenericTeamId();
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_ETeamAttitude();
	AISENTIENCE_API UScriptStruct* Z_Construct_UScriptStruct_FTeamAttitude();
	AISENTIENCE_API UEnum* Z_Construct_UEnum_AISentience_ESAITeam();
	AISENTIENCE_API UScriptStruct* Z_Construct_UScriptStruct_FSAICoverGenerationSettings();
// End Cross Module References
	DEFINE_FUNCTION(USAISettings::execGetAttitude)
	{
		P_GET_STRUCT(FGenericTeamId,Z_Param_Of);
		P_GET_STRUCT(FGenericTeamId,Z_Param_Towards);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TEnumAsByte<ETeamAttitude::Type>*)Z_Param__Result=USAISettings::GetAttitude(Z_Param_Of,Z_Param_Towards);
		P_NATIVE_END;
	}
	void USAISettings::StaticRegisterNativesUSAISettings()
	{
		UClass* Class = USAISettings::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAttitude", &USAISettings::execGetAttitude },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USAISettings_GetAttitude_Statics
	{
		struct SAISettings_eventGetAttitude_Parms
		{
			FGenericTeamId Of;
			FGenericTeamId Towards;
			TEnumAsByte<ETeamAttitude::Type> ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Of;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Towards;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USAISettings_GetAttitude_Statics::NewProp_Of = { "Of", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SAISettings_eventGetAttitude_Parms, Of), Z_Construct_UScriptStruct_FGenericTeamId, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USAISettings_GetAttitude_Statics::NewProp_Towards = { "Towards", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SAISettings_eventGetAttitude_Parms, Towards), Z_Construct_UScriptStruct_FGenericTeamId, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USAISettings_GetAttitude_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SAISettings_eventGetAttitude_Parms, ReturnValue), Z_Construct_UEnum_AIModule_ETeamAttitude, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USAISettings_GetAttitude_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USAISettings_GetAttitude_Statics::NewProp_Of,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USAISettings_GetAttitude_Statics::NewProp_Towards,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USAISettings_GetAttitude_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USAISettings_GetAttitude_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SAISettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USAISettings_GetAttitude_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USAISettings, nullptr, "GetAttitude", nullptr, nullptr, sizeof(SAISettings_eventGetAttitude_Parms), Z_Construct_UFunction_USAISettings_GetAttitude_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USAISettings_GetAttitude_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USAISettings_GetAttitude_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USAISettings_GetAttitude_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USAISettings_GetAttitude()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USAISettings_GetAttitude_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USAISettings_NoRegister()
	{
		return USAISettings::StaticClass();
	}
	struct Z_Construct_UClass_USAISettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TeamAttitudes_ValueProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TeamAttitudes_Key_KeyProp_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_TeamAttitudes_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TeamAttitudes_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_TeamAttitudes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowReverseDefinitions_MetaData[];
#endif
		static void NewProp_bAllowReverseDefinitions_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowReverseDefinitions;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CoverGenerationSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CoverGenerationSettings;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USAISettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_AISentience,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USAISettings_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USAISettings_GetAttitude, "GetAttitude" }, // 4224158348
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USAISettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SAISettings.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SAISettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USAISettings_Statics::NewProp_TeamAttitudes_ValueProp = { "TeamAttitudes", nullptr, (EPropertyFlags)0x0000000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FTeamAttitude, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USAISettings_Statics::NewProp_TeamAttitudes_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USAISettings_Statics::NewProp_TeamAttitudes_Key_KeyProp = { "TeamAttitudes_Key", nullptr, (EPropertyFlags)0x0000000000004001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_AISentience_ESAITeam, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USAISettings_Statics::NewProp_TeamAttitudes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAISettings" },
		{ "ModuleRelativePath", "Public/SAISettings.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_USAISettings_Statics::NewProp_TeamAttitudes = { "TeamAttitudes", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USAISettings, TeamAttitudes), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USAISettings_Statics::NewProp_TeamAttitudes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USAISettings_Statics::NewProp_TeamAttitudes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USAISettings_Statics::NewProp_bAllowReverseDefinitions_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAISettings" },
		{ "ModuleRelativePath", "Public/SAISettings.h" },
	};
#endif
	void Z_Construct_UClass_USAISettings_Statics::NewProp_bAllowReverseDefinitions_SetBit(void* Obj)
	{
		((USAISettings*)Obj)->bAllowReverseDefinitions = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USAISettings_Statics::NewProp_bAllowReverseDefinitions = { "bAllowReverseDefinitions", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USAISettings), &Z_Construct_UClass_USAISettings_Statics::NewProp_bAllowReverseDefinitions_SetBit, METADATA_PARAMS(Z_Construct_UClass_USAISettings_Statics::NewProp_bAllowReverseDefinitions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USAISettings_Statics::NewProp_bAllowReverseDefinitions_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USAISettings_Statics::NewProp_CoverGenerationSettings_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAISettings" },
		{ "ModuleRelativePath", "Public/SAISettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USAISettings_Statics::NewProp_CoverGenerationSettings = { "CoverGenerationSettings", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USAISettings, CoverGenerationSettings), Z_Construct_UScriptStruct_FSAICoverGenerationSettings, METADATA_PARAMS(Z_Construct_UClass_USAISettings_Statics::NewProp_CoverGenerationSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USAISettings_Statics::NewProp_CoverGenerationSettings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USAISettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USAISettings_Statics::NewProp_TeamAttitudes_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USAISettings_Statics::NewProp_TeamAttitudes_Key_KeyProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USAISettings_Statics::NewProp_TeamAttitudes_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USAISettings_Statics::NewProp_TeamAttitudes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USAISettings_Statics::NewProp_bAllowReverseDefinitions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USAISettings_Statics::NewProp_CoverGenerationSettings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USAISettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USAISettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USAISettings_Statics::ClassParams = {
		&USAISettings::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USAISettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USAISettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_USAISettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USAISettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USAISettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USAISettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USAISettings, 2344633626);
	template<> AISENTIENCE_API UClass* StaticClass<USAISettings>()
	{
		return USAISettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USAISettings(Z_Construct_UClass_USAISettings, &USAISettings::StaticClass, TEXT("/Script/AISentience"), TEXT("USAISettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USAISettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
