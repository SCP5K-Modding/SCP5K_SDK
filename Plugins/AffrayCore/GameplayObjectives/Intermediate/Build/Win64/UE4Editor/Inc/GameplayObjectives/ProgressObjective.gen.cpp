// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayObjectives/Public/ProgressObjective.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProgressObjective() {}
// Cross Module References
	GAMEPLAYOBJECTIVES_API UClass* Z_Construct_UClass_UProgressObjective_NoRegister();
	GAMEPLAYOBJECTIVES_API UClass* Z_Construct_UClass_UProgressObjective();
	GAMEPLAYOBJECTIVES_API UClass* Z_Construct_UClass_UObjective();
	UPackage* Z_Construct_UPackage__Script_GameplayObjectives();
// End Cross Module References
	DEFINE_FUNCTION(UProgressObjective::execGetProgress)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetProgress();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UProgressObjective::execOnRep_CurrentProgress)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_CurrentProgress();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UProgressObjective::execSetProgress)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewProgress);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetProgress(Z_Param_NewProgress);
		P_NATIVE_END;
	}
	void UProgressObjective::StaticRegisterNativesUProgressObjective()
	{
		UClass* Class = UProgressObjective::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetProgress", &UProgressObjective::execGetProgress },
			{ "OnRep_CurrentProgress", &UProgressObjective::execOnRep_CurrentProgress },
			{ "SetProgress", &UProgressObjective::execSetProgress },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UProgressObjective_GetProgress_Statics
	{
		struct ProgressObjective_eventGetProgress_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UProgressObjective_GetProgress_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ProgressObjective_eventGetProgress_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProgressObjective_GetProgress_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProgressObjective_GetProgress_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProgressObjective_GetProgress_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ProgressObjective.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UProgressObjective_GetProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProgressObjective, nullptr, "GetProgress", nullptr, nullptr, sizeof(ProgressObjective_eventGetProgress_Parms), Z_Construct_UFunction_UProgressObjective_GetProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProgressObjective_GetProgress_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UProgressObjective_GetProgress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UProgressObjective_GetProgress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UProgressObjective_GetProgress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UProgressObjective_GetProgress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UProgressObjective_OnRep_CurrentProgress_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProgressObjective_OnRep_CurrentProgress_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ProgressObjective.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UProgressObjective_OnRep_CurrentProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProgressObjective, nullptr, "OnRep_CurrentProgress", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UProgressObjective_OnRep_CurrentProgress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UProgressObjective_OnRep_CurrentProgress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UProgressObjective_OnRep_CurrentProgress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UProgressObjective_OnRep_CurrentProgress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UProgressObjective_SetProgress_Statics
	{
		struct ProgressObjective_eventSetProgress_Parms
		{
			float NewProgress;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewProgress;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UProgressObjective_SetProgress_Statics::NewProp_NewProgress = { "NewProgress", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ProgressObjective_eventSetProgress_Parms, NewProgress), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProgressObjective_SetProgress_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProgressObjective_SetProgress_Statics::NewProp_NewProgress,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProgressObjective_SetProgress_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ProgressObjective.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UProgressObjective_SetProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProgressObjective, nullptr, "SetProgress", nullptr, nullptr, sizeof(ProgressObjective_eventSetProgress_Parms), Z_Construct_UFunction_UProgressObjective_SetProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProgressObjective_SetProgress_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UProgressObjective_SetProgress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UProgressObjective_SetProgress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UProgressObjective_SetProgress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UProgressObjective_SetProgress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UProgressObjective_NoRegister()
	{
		return UProgressObjective::StaticClass();
	}
	struct Z_Construct_UClass_UProgressObjective_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentProgress_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentProgress;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UProgressObjective_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObjective,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayObjectives,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UProgressObjective_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UProgressObjective_GetProgress, "GetProgress" }, // 1579389910
		{ &Z_Construct_UFunction_UProgressObjective_OnRep_CurrentProgress, "OnRep_CurrentProgress" }, // 1998030319
		{ &Z_Construct_UFunction_UProgressObjective_SetProgress, "SetProgress" }, // 3570609018
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProgressObjective_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ProgressObjective.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ProgressObjective.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProgressObjective_Statics::NewProp_CurrentProgress_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ProgressObjective" },
		{ "ModuleRelativePath", "Public/ProgressObjective.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UProgressObjective_Statics::NewProp_CurrentProgress = { "CurrentProgress", "OnRep_CurrentProgress", (EPropertyFlags)0x0010000100000025, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UProgressObjective, CurrentProgress), METADATA_PARAMS(Z_Construct_UClass_UProgressObjective_Statics::NewProp_CurrentProgress_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProgressObjective_Statics::NewProp_CurrentProgress_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UProgressObjective_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProgressObjective_Statics::NewProp_CurrentProgress,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UProgressObjective_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UProgressObjective>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UProgressObjective_Statics::ClassParams = {
		&UProgressObjective::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UProgressObjective_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UProgressObjective_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UProgressObjective_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UProgressObjective_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UProgressObjective()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UProgressObjective_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UProgressObjective, 3792812730);
	template<> GAMEPLAYOBJECTIVES_API UClass* StaticClass<UProgressObjective>()
	{
		return UProgressObjective::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UProgressObjective(Z_Construct_UClass_UProgressObjective, &UProgressObjective::StaticClass, TEXT("/Script/GameplayObjectives"), TEXT("UProgressObjective"), false, nullptr, nullptr, nullptr);

	void UProgressObjective::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_CurrentProgress(TEXT("CurrentProgress"));

		const bool bIsValid = true
			&& Name_CurrentProgress == ClassReps[(int32)ENetFields_Private::CurrentProgress].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UProgressObjective"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UProgressObjective);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
