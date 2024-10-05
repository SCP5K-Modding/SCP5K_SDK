// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayObjectives/Public/ObjectiveChildRemovedDelegateDelegate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObjectiveChildRemovedDelegateDelegate() {}
// Cross Module References
	GAMEPLAYOBJECTIVES_API UFunction* Z_Construct_UDelegateFunction_GameplayObjectives_ObjectiveChildRemovedDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_GameplayObjectives();
	GAMEPLAYOBJECTIVES_API UClass* Z_Construct_UClass_UObjective_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_GameplayObjectives_ObjectiveChildRemovedDelegate__DelegateSignature_Statics
	{
		struct _Script_GameplayObjectives_eventObjectiveChildRemovedDelegate_Parms
		{
			UObjective* Objective;
			UObjective* Child;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Objective;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Child;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_GameplayObjectives_ObjectiveChildRemovedDelegate__DelegateSignature_Statics::NewProp_Objective = { "Objective", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_GameplayObjectives_eventObjectiveChildRemovedDelegate_Parms, Objective), Z_Construct_UClass_UObjective_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_GameplayObjectives_ObjectiveChildRemovedDelegate__DelegateSignature_Statics::NewProp_Child = { "Child", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_GameplayObjectives_eventObjectiveChildRemovedDelegate_Parms, Child), Z_Construct_UClass_UObjective_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_GameplayObjectives_ObjectiveChildRemovedDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GameplayObjectives_ObjectiveChildRemovedDelegate__DelegateSignature_Statics::NewProp_Objective,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GameplayObjectives_ObjectiveChildRemovedDelegate__DelegateSignature_Statics::NewProp_Child,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GameplayObjectives_ObjectiveChildRemovedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ObjectiveChildRemovedDelegateDelegate.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GameplayObjectives_ObjectiveChildRemovedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GameplayObjectives, nullptr, "ObjectiveChildRemovedDelegate__DelegateSignature", nullptr, nullptr, sizeof(_Script_GameplayObjectives_eventObjectiveChildRemovedDelegate_Parms), Z_Construct_UDelegateFunction_GameplayObjectives_ObjectiveChildRemovedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GameplayObjectives_ObjectiveChildRemovedDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_GameplayObjectives_ObjectiveChildRemovedDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GameplayObjectives_ObjectiveChildRemovedDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_GameplayObjectives_ObjectiveChildRemovedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_GameplayObjectives_ObjectiveChildRemovedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
