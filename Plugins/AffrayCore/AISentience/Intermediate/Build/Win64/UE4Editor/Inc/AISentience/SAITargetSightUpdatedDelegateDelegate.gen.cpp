// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AISentience/Public/SAITargetSightUpdatedDelegateDelegate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSAITargetSightUpdatedDelegateDelegate() {}
// Cross Module References
	AISENTIENCE_API UFunction* Z_Construct_UDelegateFunction_AISentience_SAITargetSightUpdatedDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_AISentience();
	AISENTIENCE_API UClass* Z_Construct_UClass_ASAIController_NoRegister();
	AISENTIENCE_API UScriptStruct* Z_Construct_UScriptStruct_FSAITarget();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_AISentience_SAITargetSightUpdatedDelegate__DelegateSignature_Statics
	{
		struct _Script_AISentience_eventSAITargetSightUpdatedDelegate_Parms
		{
			ASAIController* Controller;
			FSAITarget Target;
			bool bIsSeen;
			bool bWasSeenBefore;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Controller;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Target;
		static void NewProp_bIsSeen_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsSeen;
		static void NewProp_bWasSeenBefore_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWasSeenBefore;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_AISentience_SAITargetSightUpdatedDelegate__DelegateSignature_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_AISentience_eventSAITargetSightUpdatedDelegate_Parms, Controller), Z_Construct_UClass_ASAIController_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AISentience_SAITargetSightUpdatedDelegate__DelegateSignature_Statics::NewProp_Target_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_AISentience_SAITargetSightUpdatedDelegate__DelegateSignature_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_AISentience_eventSAITargetSightUpdatedDelegate_Parms, Target), Z_Construct_UScriptStruct_FSAITarget, METADATA_PARAMS(Z_Construct_UDelegateFunction_AISentience_SAITargetSightUpdatedDelegate__DelegateSignature_Statics::NewProp_Target_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AISentience_SAITargetSightUpdatedDelegate__DelegateSignature_Statics::NewProp_Target_MetaData)) };
	void Z_Construct_UDelegateFunction_AISentience_SAITargetSightUpdatedDelegate__DelegateSignature_Statics::NewProp_bIsSeen_SetBit(void* Obj)
	{
		((_Script_AISentience_eventSAITargetSightUpdatedDelegate_Parms*)Obj)->bIsSeen = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_AISentience_SAITargetSightUpdatedDelegate__DelegateSignature_Statics::NewProp_bIsSeen = { "bIsSeen", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_AISentience_eventSAITargetSightUpdatedDelegate_Parms), &Z_Construct_UDelegateFunction_AISentience_SAITargetSightUpdatedDelegate__DelegateSignature_Statics::NewProp_bIsSeen_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UDelegateFunction_AISentience_SAITargetSightUpdatedDelegate__DelegateSignature_Statics::NewProp_bWasSeenBefore_SetBit(void* Obj)
	{
		((_Script_AISentience_eventSAITargetSightUpdatedDelegate_Parms*)Obj)->bWasSeenBefore = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_AISentience_SAITargetSightUpdatedDelegate__DelegateSignature_Statics::NewProp_bWasSeenBefore = { "bWasSeenBefore", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_AISentience_eventSAITargetSightUpdatedDelegate_Parms), &Z_Construct_UDelegateFunction_AISentience_SAITargetSightUpdatedDelegate__DelegateSignature_Statics::NewProp_bWasSeenBefore_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AISentience_SAITargetSightUpdatedDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AISentience_SAITargetSightUpdatedDelegate__DelegateSignature_Statics::NewProp_Controller,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AISentience_SAITargetSightUpdatedDelegate__DelegateSignature_Statics::NewProp_Target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AISentience_SAITargetSightUpdatedDelegate__DelegateSignature_Statics::NewProp_bIsSeen,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AISentience_SAITargetSightUpdatedDelegate__DelegateSignature_Statics::NewProp_bWasSeenBefore,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AISentience_SAITargetSightUpdatedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SAITargetSightUpdatedDelegateDelegate.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AISentience_SAITargetSightUpdatedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AISentience, nullptr, "SAITargetSightUpdatedDelegate__DelegateSignature", nullptr, nullptr, sizeof(_Script_AISentience_eventSAITargetSightUpdatedDelegate_Parms), Z_Construct_UDelegateFunction_AISentience_SAITargetSightUpdatedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AISentience_SAITargetSightUpdatedDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AISentience_SAITargetSightUpdatedDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AISentience_SAITargetSightUpdatedDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AISentience_SAITargetSightUpdatedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_AISentience_SAITargetSightUpdatedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
