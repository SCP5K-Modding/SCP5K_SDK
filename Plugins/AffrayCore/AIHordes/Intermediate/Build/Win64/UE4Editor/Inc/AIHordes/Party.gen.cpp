// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AIHordes/Public/Party.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParty() {}
// Cross Module References
	AIHORDES_API UClass* Z_Construct_UClass_AParty_NoRegister();
	AIHORDES_API UClass* Z_Construct_UClass_AParty();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_AIHordes();
	AIHORDES_API UClass* Z_Construct_UClass_AHordeAgent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	AIHORDES_API UClass* Z_Construct_UClass_AHorde_NoRegister();
	AIHORDES_API UClass* Z_Construct_UClass_APartyController_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AParty::execAddAgent)
	{
		P_GET_OBJECT(AHordeAgent,Z_Param_Agent);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AddAgent(Z_Param_Agent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AParty::execCalculatePartyLOD)
	{
		P_GET_OBJECT(AActor,Z_Param_Reference);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CalculatePartyLOD(Z_Param_Reference);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AParty::execCompareDistance)
	{
		P_GET_OBJECT(AParty,Z_Param_Other);
		P_GET_PROPERTY(FFloatProperty,Z_Param_MaxDistance);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CompareDistance(Z_Param_Other,Z_Param_MaxDistance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AParty::execGetAgents)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<AHordeAgent*>*)Z_Param__Result=P_THIS->GetAgents();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AParty::execGetCurrentHorde)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AHorde**)Z_Param__Result=P_THIS->GetCurrentHorde();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AParty::execGetMaxAgents)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(uint8*)Z_Param__Result=P_THIS->GetMaxAgents();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AParty::execGetMaxPlayerLODDistance)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMaxPlayerLODDistance();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AParty::execGetMaxRadius)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMaxRadius();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AParty::execGetMaxTickInterval)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMaxTickInterval();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AParty::execGetMinPlayerLODDistance)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMinPlayerLODDistance();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AParty::execGetMinTickInterval)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMinTickInterval();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AParty::execGetPartyController)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(APartyController**)Z_Param__Result=P_THIS->GetPartyController();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AParty::execGetRadius)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetRadius();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AParty::execMergeToParty)
	{
		P_GET_OBJECT(AParty,Z_Param_Party);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MergeToParty_Implementation(Z_Param_Party);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AParty::execRemoveAgent)
	{
		P_GET_OBJECT(AHordeAgent,Z_Param_Agent);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemoveAgent(Z_Param_Agent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AParty::execRemoveParty)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveParty();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AParty::execSetHorde)
	{
		P_GET_OBJECT(AHorde,Z_Param_NewHorde);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHorde_Implementation(Z_Param_NewHorde);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AParty::execUpdateBounds)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateBounds_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_AParty_MergeToParty = FName(TEXT("MergeToParty"));
	void AParty::MergeToParty(AParty* Party)
	{
		Party_eventMergeToParty_Parms Parms;
		Parms.Party=Party;
		ProcessEvent(FindFunctionChecked(NAME_AParty_MergeToParty),&Parms);
	}
	static FName NAME_AParty_SetHorde = FName(TEXT("SetHorde"));
	void AParty::SetHorde(AHorde* NewHorde)
	{
		Party_eventSetHorde_Parms Parms;
		Parms.NewHorde=NewHorde;
		ProcessEvent(FindFunctionChecked(NAME_AParty_SetHorde),&Parms);
	}
	static FName NAME_AParty_UpdateBounds = FName(TEXT("UpdateBounds"));
	void AParty::UpdateBounds()
	{
		ProcessEvent(FindFunctionChecked(NAME_AParty_UpdateBounds),NULL);
	}
	void AParty::StaticRegisterNativesAParty()
	{
		UClass* Class = AParty::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddAgent", &AParty::execAddAgent },
			{ "CalculatePartyLOD", &AParty::execCalculatePartyLOD },
			{ "CompareDistance", &AParty::execCompareDistance },
			{ "GetAgents", &AParty::execGetAgents },
			{ "GetCurrentHorde", &AParty::execGetCurrentHorde },
			{ "GetMaxAgents", &AParty::execGetMaxAgents },
			{ "GetMaxPlayerLODDistance", &AParty::execGetMaxPlayerLODDistance },
			{ "GetMaxRadius", &AParty::execGetMaxRadius },
			{ "GetMaxTickInterval", &AParty::execGetMaxTickInterval },
			{ "GetMinPlayerLODDistance", &AParty::execGetMinPlayerLODDistance },
			{ "GetMinTickInterval", &AParty::execGetMinTickInterval },
			{ "GetPartyController", &AParty::execGetPartyController },
			{ "GetRadius", &AParty::execGetRadius },
			{ "MergeToParty", &AParty::execMergeToParty },
			{ "RemoveAgent", &AParty::execRemoveAgent },
			{ "RemoveParty", &AParty::execRemoveParty },
			{ "SetHorde", &AParty::execSetHorde },
			{ "UpdateBounds", &AParty::execUpdateBounds },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AParty_AddAgent_Statics
	{
		struct Party_eventAddAgent_Parms
		{
			AHordeAgent* Agent;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Agent;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AParty_AddAgent_Statics::NewProp_Agent = { "Agent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Party_eventAddAgent_Parms, Agent), Z_Construct_UClass_AHordeAgent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AParty_AddAgent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Party_eventAddAgent_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AParty_AddAgent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Party_eventAddAgent_Parms), &Z_Construct_UFunction_AParty_AddAgent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AParty_AddAgent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AParty_AddAgent_Statics::NewProp_Agent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AParty_AddAgent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AParty_AddAgent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Party.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AParty_AddAgent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AParty, nullptr, "AddAgent", nullptr, nullptr, sizeof(Party_eventAddAgent_Parms), Z_Construct_UFunction_AParty_AddAgent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AParty_AddAgent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AParty_AddAgent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AParty_AddAgent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AParty_AddAgent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AParty_AddAgent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AParty_CalculatePartyLOD_Statics
	{
		struct Party_eventCalculatePartyLOD_Parms
		{
			AActor* Reference;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Reference;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AParty_CalculatePartyLOD_Statics::NewProp_Reference = { "Reference", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Party_eventCalculatePartyLOD_Parms, Reference), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AParty_CalculatePartyLOD_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AParty_CalculatePartyLOD_Statics::NewProp_Reference,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AParty_CalculatePartyLOD_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Party.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AParty_CalculatePartyLOD_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AParty, nullptr, "CalculatePartyLOD", nullptr, nullptr, sizeof(Party_eventCalculatePartyLOD_Parms), Z_Construct_UFunction_AParty_CalculatePartyLOD_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AParty_CalculatePartyLOD_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AParty_CalculatePartyLOD_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AParty_CalculatePartyLOD_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AParty_CalculatePartyLOD()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AParty_CalculatePartyLOD_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AParty_CompareDistance_Statics
	{
		struct Party_eventCompareDistance_Parms
		{
			AParty* Other;
			float MaxDistance;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Other;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxDistance;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AParty_CompareDistance_Statics::NewProp_Other = { "Other", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Party_eventCompareDistance_Parms, Other), Z_Construct_UClass_AParty_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AParty_CompareDistance_Statics::NewProp_MaxDistance = { "MaxDistance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Party_eventCompareDistance_Parms, MaxDistance), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AParty_CompareDistance_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Party_eventCompareDistance_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AParty_CompareDistance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Party_eventCompareDistance_Parms), &Z_Construct_UFunction_AParty_CompareDistance_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AParty_CompareDistance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AParty_CompareDistance_Statics::NewProp_Other,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AParty_CompareDistance_Statics::NewProp_MaxDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AParty_CompareDistance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AParty_CompareDistance_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Party.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AParty_CompareDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AParty, nullptr, "CompareDistance", nullptr, nullptr, sizeof(Party_eventCompareDistance_Parms), Z_Construct_UFunction_AParty_CompareDistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AParty_CompareDistance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AParty_CompareDistance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AParty_CompareDistance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AParty_CompareDistance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AParty_CompareDistance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AParty_GetAgents_Statics
	{
		struct Party_eventGetAgents_Parms
		{
			TArray<AHordeAgent*> ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AParty_GetAgents_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AHordeAgent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AParty_GetAgents_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Party_eventGetAgents_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AParty_GetAgents_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AParty_GetAgents_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AParty_GetAgents_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AParty_GetAgents_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Party.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AParty_GetAgents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AParty, nullptr, "GetAgents", nullptr, nullptr, sizeof(Party_eventGetAgents_Parms), Z_Construct_UFunction_AParty_GetAgents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AParty_GetAgents_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AParty_GetAgents_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AParty_GetAgents_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AParty_GetAgents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AParty_GetAgents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AParty_GetCurrentHorde_Statics
	{
		struct Party_eventGetCurrentHorde_Parms
		{
			AHorde* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AParty_GetCurrentHorde_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Party_eventGetCurrentHorde_Parms, ReturnValue), Z_Construct_UClass_AHorde_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AParty_GetCurrentHorde_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AParty_GetCurrentHorde_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AParty_GetCurrentHorde_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Party.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AParty_GetCurrentHorde_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AParty, nullptr, "GetCurrentHorde", nullptr, nullptr, sizeof(Party_eventGetCurrentHorde_Parms), Z_Construct_UFunction_AParty_GetCurrentHorde_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AParty_GetCurrentHorde_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AParty_GetCurrentHorde_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AParty_GetCurrentHorde_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AParty_GetCurrentHorde()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AParty_GetCurrentHorde_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AParty_GetMaxAgents_Statics
	{
		struct Party_eventGetMaxAgents_Parms
		{
			uint8 ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AParty_GetMaxAgents_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Party_eventGetMaxAgents_Parms, ReturnValue), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AParty_GetMaxAgents_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AParty_GetMaxAgents_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AParty_GetMaxAgents_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Party.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AParty_GetMaxAgents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AParty, nullptr, "GetMaxAgents", nullptr, nullptr, sizeof(Party_eventGetMaxAgents_Parms), Z_Construct_UFunction_AParty_GetMaxAgents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AParty_GetMaxAgents_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AParty_GetMaxAgents_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AParty_GetMaxAgents_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AParty_GetMaxAgents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AParty_GetMaxAgents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AParty_GetMaxPlayerLODDistance_Statics
	{
		struct Party_eventGetMaxPlayerLODDistance_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AParty_GetMaxPlayerLODDistance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Party_eventGetMaxPlayerLODDistance_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AParty_GetMaxPlayerLODDistance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AParty_GetMaxPlayerLODDistance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AParty_GetMaxPlayerLODDistance_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Party.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AParty_GetMaxPlayerLODDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AParty, nullptr, "GetMaxPlayerLODDistance", nullptr, nullptr, sizeof(Party_eventGetMaxPlayerLODDistance_Parms), Z_Construct_UFunction_AParty_GetMaxPlayerLODDistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AParty_GetMaxPlayerLODDistance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AParty_GetMaxPlayerLODDistance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AParty_GetMaxPlayerLODDistance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AParty_GetMaxPlayerLODDistance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AParty_GetMaxPlayerLODDistance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AParty_GetMaxRadius_Statics
	{
		struct Party_eventGetMaxRadius_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AParty_GetMaxRadius_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Party_eventGetMaxRadius_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AParty_GetMaxRadius_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AParty_GetMaxRadius_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AParty_GetMaxRadius_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Party.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AParty_GetMaxRadius_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AParty, nullptr, "GetMaxRadius", nullptr, nullptr, sizeof(Party_eventGetMaxRadius_Parms), Z_Construct_UFunction_AParty_GetMaxRadius_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AParty_GetMaxRadius_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AParty_GetMaxRadius_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AParty_GetMaxRadius_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AParty_GetMaxRadius()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AParty_GetMaxRadius_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AParty_GetMaxTickInterval_Statics
	{
		struct Party_eventGetMaxTickInterval_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AParty_GetMaxTickInterval_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Party_eventGetMaxTickInterval_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AParty_GetMaxTickInterval_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AParty_GetMaxTickInterval_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AParty_GetMaxTickInterval_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Party.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AParty_GetMaxTickInterval_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AParty, nullptr, "GetMaxTickInterval", nullptr, nullptr, sizeof(Party_eventGetMaxTickInterval_Parms), Z_Construct_UFunction_AParty_GetMaxTickInterval_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AParty_GetMaxTickInterval_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AParty_GetMaxTickInterval_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AParty_GetMaxTickInterval_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AParty_GetMaxTickInterval()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AParty_GetMaxTickInterval_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AParty_GetMinPlayerLODDistance_Statics
	{
		struct Party_eventGetMinPlayerLODDistance_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AParty_GetMinPlayerLODDistance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Party_eventGetMinPlayerLODDistance_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AParty_GetMinPlayerLODDistance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AParty_GetMinPlayerLODDistance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AParty_GetMinPlayerLODDistance_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Party.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AParty_GetMinPlayerLODDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AParty, nullptr, "GetMinPlayerLODDistance", nullptr, nullptr, sizeof(Party_eventGetMinPlayerLODDistance_Parms), Z_Construct_UFunction_AParty_GetMinPlayerLODDistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AParty_GetMinPlayerLODDistance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AParty_GetMinPlayerLODDistance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AParty_GetMinPlayerLODDistance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AParty_GetMinPlayerLODDistance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AParty_GetMinPlayerLODDistance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AParty_GetMinTickInterval_Statics
	{
		struct Party_eventGetMinTickInterval_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AParty_GetMinTickInterval_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Party_eventGetMinTickInterval_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AParty_GetMinTickInterval_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AParty_GetMinTickInterval_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AParty_GetMinTickInterval_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Party.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AParty_GetMinTickInterval_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AParty, nullptr, "GetMinTickInterval", nullptr, nullptr, sizeof(Party_eventGetMinTickInterval_Parms), Z_Construct_UFunction_AParty_GetMinTickInterval_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AParty_GetMinTickInterval_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AParty_GetMinTickInterval_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AParty_GetMinTickInterval_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AParty_GetMinTickInterval()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AParty_GetMinTickInterval_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AParty_GetPartyController_Statics
	{
		struct Party_eventGetPartyController_Parms
		{
			APartyController* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AParty_GetPartyController_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Party_eventGetPartyController_Parms, ReturnValue), Z_Construct_UClass_APartyController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AParty_GetPartyController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AParty_GetPartyController_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AParty_GetPartyController_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Party.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AParty_GetPartyController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AParty, nullptr, "GetPartyController", nullptr, nullptr, sizeof(Party_eventGetPartyController_Parms), Z_Construct_UFunction_AParty_GetPartyController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AParty_GetPartyController_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AParty_GetPartyController_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AParty_GetPartyController_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AParty_GetPartyController()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AParty_GetPartyController_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AParty_GetRadius_Statics
	{
		struct Party_eventGetRadius_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AParty_GetRadius_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Party_eventGetRadius_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AParty_GetRadius_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AParty_GetRadius_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AParty_GetRadius_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Party.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AParty_GetRadius_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AParty, nullptr, "GetRadius", nullptr, nullptr, sizeof(Party_eventGetRadius_Parms), Z_Construct_UFunction_AParty_GetRadius_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AParty_GetRadius_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AParty_GetRadius_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AParty_GetRadius_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AParty_GetRadius()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AParty_GetRadius_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AParty_MergeToParty_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Party;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AParty_MergeToParty_Statics::NewProp_Party = { "Party", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Party_eventMergeToParty_Parms, Party), Z_Construct_UClass_AParty_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AParty_MergeToParty_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AParty_MergeToParty_Statics::NewProp_Party,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AParty_MergeToParty_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Party.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AParty_MergeToParty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AParty, nullptr, "MergeToParty", nullptr, nullptr, sizeof(Party_eventMergeToParty_Parms), Z_Construct_UFunction_AParty_MergeToParty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AParty_MergeToParty_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AParty_MergeToParty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AParty_MergeToParty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AParty_MergeToParty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AParty_MergeToParty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AParty_RemoveAgent_Statics
	{
		struct Party_eventRemoveAgent_Parms
		{
			AHordeAgent* Agent;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Agent;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AParty_RemoveAgent_Statics::NewProp_Agent = { "Agent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Party_eventRemoveAgent_Parms, Agent), Z_Construct_UClass_AHordeAgent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AParty_RemoveAgent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Party_eventRemoveAgent_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AParty_RemoveAgent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Party_eventRemoveAgent_Parms), &Z_Construct_UFunction_AParty_RemoveAgent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AParty_RemoveAgent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AParty_RemoveAgent_Statics::NewProp_Agent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AParty_RemoveAgent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AParty_RemoveAgent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Party.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AParty_RemoveAgent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AParty, nullptr, "RemoveAgent", nullptr, nullptr, sizeof(Party_eventRemoveAgent_Parms), Z_Construct_UFunction_AParty_RemoveAgent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AParty_RemoveAgent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AParty_RemoveAgent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AParty_RemoveAgent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AParty_RemoveAgent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AParty_RemoveAgent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AParty_RemoveParty_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AParty_RemoveParty_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Party.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AParty_RemoveParty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AParty, nullptr, "RemoveParty", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AParty_RemoveParty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AParty_RemoveParty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AParty_RemoveParty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AParty_RemoveParty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AParty_SetHorde_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewHorde;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AParty_SetHorde_Statics::NewProp_NewHorde = { "NewHorde", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Party_eventSetHorde_Parms, NewHorde), Z_Construct_UClass_AHorde_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AParty_SetHorde_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AParty_SetHorde_Statics::NewProp_NewHorde,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AParty_SetHorde_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Party.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AParty_SetHorde_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AParty, nullptr, "SetHorde", nullptr, nullptr, sizeof(Party_eventSetHorde_Parms), Z_Construct_UFunction_AParty_SetHorde_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AParty_SetHorde_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AParty_SetHorde_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AParty_SetHorde_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AParty_SetHorde()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AParty_SetHorde_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AParty_UpdateBounds_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AParty_UpdateBounds_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Party.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AParty_UpdateBounds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AParty, nullptr, "UpdateBounds", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AParty_UpdateBounds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AParty_UpdateBounds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AParty_UpdateBounds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AParty_UpdateBounds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AParty_NoRegister()
	{
		return AParty::StaticClass();
	}
	struct Z_Construct_UClass_AParty_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentHorde_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentHorde;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Agents_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Agents_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Agents;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinPlayerLODDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinPlayerLODDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxPlayerLODDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxPlayerLODDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinTickInterval_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinTickInterval;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxTickInterval_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxTickInterval;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxAgents_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MaxAgents;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AParty_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_AIHordes,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AParty_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AParty_AddAgent, "AddAgent" }, // 2599698372
		{ &Z_Construct_UFunction_AParty_CalculatePartyLOD, "CalculatePartyLOD" }, // 2182844120
		{ &Z_Construct_UFunction_AParty_CompareDistance, "CompareDistance" }, // 4070227104
		{ &Z_Construct_UFunction_AParty_GetAgents, "GetAgents" }, // 2906504260
		{ &Z_Construct_UFunction_AParty_GetCurrentHorde, "GetCurrentHorde" }, // 47996650
		{ &Z_Construct_UFunction_AParty_GetMaxAgents, "GetMaxAgents" }, // 380580758
		{ &Z_Construct_UFunction_AParty_GetMaxPlayerLODDistance, "GetMaxPlayerLODDistance" }, // 2712622303
		{ &Z_Construct_UFunction_AParty_GetMaxRadius, "GetMaxRadius" }, // 3320782003
		{ &Z_Construct_UFunction_AParty_GetMaxTickInterval, "GetMaxTickInterval" }, // 4234047165
		{ &Z_Construct_UFunction_AParty_GetMinPlayerLODDistance, "GetMinPlayerLODDistance" }, // 1705676545
		{ &Z_Construct_UFunction_AParty_GetMinTickInterval, "GetMinTickInterval" }, // 1524738109
		{ &Z_Construct_UFunction_AParty_GetPartyController, "GetPartyController" }, // 1470475262
		{ &Z_Construct_UFunction_AParty_GetRadius, "GetRadius" }, // 3594448756
		{ &Z_Construct_UFunction_AParty_MergeToParty, "MergeToParty" }, // 812219797
		{ &Z_Construct_UFunction_AParty_RemoveAgent, "RemoveAgent" }, // 1734380284
		{ &Z_Construct_UFunction_AParty_RemoveParty, "RemoveParty" }, // 3051017178
		{ &Z_Construct_UFunction_AParty_SetHorde, "SetHorde" }, // 1474135345
		{ &Z_Construct_UFunction_AParty_UpdateBounds, "UpdateBounds" }, // 3982233459
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AParty_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Party.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Party.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AParty_Statics::NewProp_CurrentHorde_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Party" },
		{ "ModuleRelativePath", "Public/Party.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AParty_Statics::NewProp_CurrentHorde = { "CurrentHorde", nullptr, (EPropertyFlags)0x0020080000000025, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AParty, CurrentHorde), Z_Construct_UClass_AHorde_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AParty_Statics::NewProp_CurrentHorde_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AParty_Statics::NewProp_CurrentHorde_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AParty_Statics::NewProp_Agents_Inner = { "Agents", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AHordeAgent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AParty_Statics::NewProp_Agents_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Party" },
		{ "ModuleRelativePath", "Public/Party.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AParty_Statics::NewProp_Agents = { "Agents", nullptr, (EPropertyFlags)0x0020080000000025, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AParty, Agents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AParty_Statics::NewProp_Agents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AParty_Statics::NewProp_Agents_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AParty_Statics::NewProp_MinPlayerLODDistance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Party" },
		{ "ModuleRelativePath", "Public/Party.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AParty_Statics::NewProp_MinPlayerLODDistance = { "MinPlayerLODDistance", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AParty, MinPlayerLODDistance), METADATA_PARAMS(Z_Construct_UClass_AParty_Statics::NewProp_MinPlayerLODDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AParty_Statics::NewProp_MinPlayerLODDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AParty_Statics::NewProp_MaxPlayerLODDistance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Party" },
		{ "ModuleRelativePath", "Public/Party.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AParty_Statics::NewProp_MaxPlayerLODDistance = { "MaxPlayerLODDistance", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AParty, MaxPlayerLODDistance), METADATA_PARAMS(Z_Construct_UClass_AParty_Statics::NewProp_MaxPlayerLODDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AParty_Statics::NewProp_MaxPlayerLODDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AParty_Statics::NewProp_MinTickInterval_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Party" },
		{ "ModuleRelativePath", "Public/Party.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AParty_Statics::NewProp_MinTickInterval = { "MinTickInterval", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AParty, MinTickInterval), METADATA_PARAMS(Z_Construct_UClass_AParty_Statics::NewProp_MinTickInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AParty_Statics::NewProp_MinTickInterval_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AParty_Statics::NewProp_MaxTickInterval_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Party" },
		{ "ModuleRelativePath", "Public/Party.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AParty_Statics::NewProp_MaxTickInterval = { "MaxTickInterval", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AParty, MaxTickInterval), METADATA_PARAMS(Z_Construct_UClass_AParty_Statics::NewProp_MaxTickInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AParty_Statics::NewProp_MaxTickInterval_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AParty_Statics::NewProp_Radius_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Party" },
		{ "ModuleRelativePath", "Public/Party.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AParty_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0020080000000025, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AParty, Radius), METADATA_PARAMS(Z_Construct_UClass_AParty_Statics::NewProp_Radius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AParty_Statics::NewProp_Radius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AParty_Statics::NewProp_MaxRadius_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Party" },
		{ "ModuleRelativePath", "Public/Party.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AParty_Statics::NewProp_MaxRadius = { "MaxRadius", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AParty, MaxRadius), METADATA_PARAMS(Z_Construct_UClass_AParty_Statics::NewProp_MaxRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AParty_Statics::NewProp_MaxRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AParty_Statics::NewProp_MinRadius_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Party" },
		{ "ModuleRelativePath", "Public/Party.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AParty_Statics::NewProp_MinRadius = { "MinRadius", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AParty, MinRadius), METADATA_PARAMS(Z_Construct_UClass_AParty_Statics::NewProp_MinRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AParty_Statics::NewProp_MinRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AParty_Statics::NewProp_MaxAgents_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Party" },
		{ "ModuleRelativePath", "Public/Party.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AParty_Statics::NewProp_MaxAgents = { "MaxAgents", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AParty, MaxAgents), nullptr, METADATA_PARAMS(Z_Construct_UClass_AParty_Statics::NewProp_MaxAgents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AParty_Statics::NewProp_MaxAgents_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AParty_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AParty_Statics::NewProp_CurrentHorde,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AParty_Statics::NewProp_Agents_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AParty_Statics::NewProp_Agents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AParty_Statics::NewProp_MinPlayerLODDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AParty_Statics::NewProp_MaxPlayerLODDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AParty_Statics::NewProp_MinTickInterval,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AParty_Statics::NewProp_MaxTickInterval,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AParty_Statics::NewProp_Radius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AParty_Statics::NewProp_MaxRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AParty_Statics::NewProp_MinRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AParty_Statics::NewProp_MaxAgents,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AParty_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AParty>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AParty_Statics::ClassParams = {
		&AParty::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AParty_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AParty_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AParty_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AParty_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AParty()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AParty_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AParty, 2376476576);
	template<> AIHORDES_API UClass* StaticClass<AParty>()
	{
		return AParty::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AParty(Z_Construct_UClass_AParty, &AParty::StaticClass, TEXT("/Script/AIHordes"), TEXT("AParty"), false, nullptr, nullptr, nullptr);

	void AParty::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_CurrentHorde(TEXT("CurrentHorde"));
		static const FName Name_Agents(TEXT("Agents"));
		static const FName Name_Radius(TEXT("Radius"));

		const bool bIsValid = true
			&& Name_CurrentHorde == ClassReps[(int32)ENetFields_Private::CurrentHorde].Property->GetFName()
			&& Name_Agents == ClassReps[(int32)ENetFields_Private::Agents].Property->GetFName()
			&& Name_Radius == ClassReps[(int32)ENetFields_Private::Radius].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AParty"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AParty);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
