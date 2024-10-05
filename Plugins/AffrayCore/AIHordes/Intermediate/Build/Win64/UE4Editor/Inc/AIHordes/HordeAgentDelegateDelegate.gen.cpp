// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AIHordes/Public/HordeAgentDelegateDelegate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHordeAgentDelegateDelegate() {}
// Cross Module References
	AIHORDES_API UFunction* Z_Construct_UDelegateFunction_AIHordes_HordeAgentDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_AIHordes();
	AIHORDES_API UClass* Z_Construct_UClass_AHorde_NoRegister();
	AIHORDES_API UClass* Z_Construct_UClass_AHordeAgent_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_AIHordes_HordeAgentDelegate__DelegateSignature_Statics
	{
		struct _Script_AIHordes_eventHordeAgentDelegate_Parms
		{
			AHorde* Horde;
			AHordeAgent* Agent;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Horde;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Agent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_AIHordes_HordeAgentDelegate__DelegateSignature_Statics::NewProp_Horde = { "Horde", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_AIHordes_eventHordeAgentDelegate_Parms, Horde), Z_Construct_UClass_AHorde_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_AIHordes_HordeAgentDelegate__DelegateSignature_Statics::NewProp_Agent = { "Agent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_AIHordes_eventHordeAgentDelegate_Parms, Agent), Z_Construct_UClass_AHordeAgent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AIHordes_HordeAgentDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AIHordes_HordeAgentDelegate__DelegateSignature_Statics::NewProp_Horde,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AIHordes_HordeAgentDelegate__DelegateSignature_Statics::NewProp_Agent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AIHordes_HordeAgentDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HordeAgentDelegateDelegate.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AIHordes_HordeAgentDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AIHordes, nullptr, "HordeAgentDelegate__DelegateSignature", nullptr, nullptr, sizeof(_Script_AIHordes_eventHordeAgentDelegate_Parms), Z_Construct_UDelegateFunction_AIHordes_HordeAgentDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AIHordes_HordeAgentDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AIHordes_HordeAgentDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AIHordes_HordeAgentDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AIHordes_HordeAgentDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_AIHordes_HordeAgentDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
