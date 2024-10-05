// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AIHordes/Public/Horde.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHorde() {}
// Cross Module References
	AIHORDES_API UClass* Z_Construct_UClass_AHorde_NoRegister();
	AIHORDES_API UClass* Z_Construct_UClass_AHorde();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_AIHordes();
	AIHORDES_API UClass* Z_Construct_UClass_AHordeAgent_NoRegister();
	AIHORDES_API UClass* Z_Construct_UClass_AParty_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	AIHORDES_API UClass* Z_Construct_UClass_AHordeController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	AIHORDES_API UFunction* Z_Construct_UDelegateFunction_AIHordes_HordeDelegate__DelegateSignature();
	AIHORDES_API UFunction* Z_Construct_UDelegateFunction_AIHordes_HordeAgentDelegate__DelegateSignature();
	AIHORDES_API UScriptStruct* Z_Construct_UScriptStruct_FAgentSpawn();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AHorde::execAddAgent)
	{
		P_GET_OBJECT(AHordeAgent,Z_Param_Agent);
		P_GET_OBJECT(AParty,Z_Param_Party);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddAgent_Implementation(Z_Param_Agent,Z_Param_Party);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHorde::execAddParty)
	{
		P_GET_OBJECT(AParty,Z_Param_Party);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddParty_Implementation(Z_Param_Party);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHorde::execBeginAlert)
	{
		P_GET_TARRAY(APawn*,Z_Param_Targets);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BeginAlert_Implementation(Z_Param_Targets);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHorde::execEndAlert)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EndAlert_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHorde::execGetAgents)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<AHordeAgent*>*)Z_Param__Result=P_THIS->GetAgents();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHorde::execGetHordeController)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AHordeController**)Z_Param__Result=P_THIS->GetHordeController();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHorde::execGetMaxRadius)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMaxRadius();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHorde::execGetParties)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<AParty*>*)Z_Param__Result=P_THIS->GetParties();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHorde::execGetRadius)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetRadius();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHorde::execIsActive)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsActive();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHorde::execIsAlert)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsAlert();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHorde::execMergeParties)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MergeParties_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHorde::execMergeToHorde)
	{
		P_GET_OBJECT(AHorde,Z_Param_NewHorde);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->MergeToHorde(Z_Param_NewHorde);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHorde::execOnBeginOverlap)
	{
		P_GET_OBJECT(AActor,Z_Param_OverlappedActor);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnBeginOverlap(Z_Param_OverlappedActor,Z_Param_OtherActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHorde::execRemoveAgent)
	{
		P_GET_OBJECT(AHordeAgent,Z_Param_Agent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveAgent_Implementation(Z_Param_Agent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHorde::execRemoveParty)
	{
		P_GET_OBJECT(AParty,Z_Param_Party);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveParty_Implementation(Z_Param_Party);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHorde::execSpawnAgent)
	{
		P_GET_OBJECT(UClass,Z_Param_Class);
		P_GET_STRUCT(FVector,Z_Param_position);
		P_GET_STRUCT(FRotator,Z_Param_Rotation);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AHordeAgent**)Z_Param__Result=P_THIS->SpawnAgent(Z_Param_Class,Z_Param_position,Z_Param_Rotation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHorde::execSpawnAgentInRadius)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AHordeAgent**)Z_Param__Result=P_THIS->SpawnAgentInRadius();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHorde::execSpawnParty)
	{
		P_GET_TARRAY(AHordeAgent*,Z_Param_Members);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AParty**)Z_Param__Result=P_THIS->SpawnParty(Z_Param_Members);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHorde::execSpawnRandomAgent)
	{
		P_GET_STRUCT(FVector,Z_Param_position);
		P_GET_STRUCT(FRotator,Z_Param_Rotation);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AHordeAgent**)Z_Param__Result=P_THIS->SpawnRandomAgent(Z_Param_position,Z_Param_Rotation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHorde::execUpdateBounds)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateBounds_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_AHorde_AddAgent = FName(TEXT("AddAgent"));
	void AHorde::AddAgent(AHordeAgent* Agent, AParty* Party)
	{
		Horde_eventAddAgent_Parms Parms;
		Parms.Agent=Agent;
		Parms.Party=Party;
		ProcessEvent(FindFunctionChecked(NAME_AHorde_AddAgent),&Parms);
	}
	static FName NAME_AHorde_AddParty = FName(TEXT("AddParty"));
	void AHorde::AddParty(AParty* Party)
	{
		Horde_eventAddParty_Parms Parms;
		Parms.Party=Party;
		ProcessEvent(FindFunctionChecked(NAME_AHorde_AddParty),&Parms);
	}
	static FName NAME_AHorde_BeginAlert = FName(TEXT("BeginAlert"));
	void AHorde::BeginAlert(TArray<APawn*> const& Targets)
	{
		Horde_eventBeginAlert_Parms Parms;
		Parms.Targets=Targets;
		ProcessEvent(FindFunctionChecked(NAME_AHorde_BeginAlert),&Parms);
	}
	static FName NAME_AHorde_EndAlert = FName(TEXT("EndAlert"));
	void AHorde::EndAlert()
	{
		ProcessEvent(FindFunctionChecked(NAME_AHorde_EndAlert),NULL);
	}
	static FName NAME_AHorde_MergeParties = FName(TEXT("MergeParties"));
	void AHorde::MergeParties()
	{
		ProcessEvent(FindFunctionChecked(NAME_AHorde_MergeParties),NULL);
	}
	static FName NAME_AHorde_RemoveAgent = FName(TEXT("RemoveAgent"));
	void AHorde::RemoveAgent(AHordeAgent* Agent)
	{
		Horde_eventRemoveAgent_Parms Parms;
		Parms.Agent=Agent;
		ProcessEvent(FindFunctionChecked(NAME_AHorde_RemoveAgent),&Parms);
	}
	static FName NAME_AHorde_RemoveParty = FName(TEXT("RemoveParty"));
	void AHorde::RemoveParty(AParty* Party)
	{
		Horde_eventRemoveParty_Parms Parms;
		Parms.Party=Party;
		ProcessEvent(FindFunctionChecked(NAME_AHorde_RemoveParty),&Parms);
	}
	static FName NAME_AHorde_UpdateBounds = FName(TEXT("UpdateBounds"));
	void AHorde::UpdateBounds()
	{
		ProcessEvent(FindFunctionChecked(NAME_AHorde_UpdateBounds),NULL);
	}
	void AHorde::StaticRegisterNativesAHorde()
	{
		UClass* Class = AHorde::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddAgent", &AHorde::execAddAgent },
			{ "AddParty", &AHorde::execAddParty },
			{ "BeginAlert", &AHorde::execBeginAlert },
			{ "EndAlert", &AHorde::execEndAlert },
			{ "GetAgents", &AHorde::execGetAgents },
			{ "GetHordeController", &AHorde::execGetHordeController },
			{ "GetMaxRadius", &AHorde::execGetMaxRadius },
			{ "GetParties", &AHorde::execGetParties },
			{ "GetRadius", &AHorde::execGetRadius },
			{ "IsActive", &AHorde::execIsActive },
			{ "IsAlert", &AHorde::execIsAlert },
			{ "MergeParties", &AHorde::execMergeParties },
			{ "MergeToHorde", &AHorde::execMergeToHorde },
			{ "OnBeginOverlap", &AHorde::execOnBeginOverlap },
			{ "RemoveAgent", &AHorde::execRemoveAgent },
			{ "RemoveParty", &AHorde::execRemoveParty },
			{ "SpawnAgent", &AHorde::execSpawnAgent },
			{ "SpawnAgentInRadius", &AHorde::execSpawnAgentInRadius },
			{ "SpawnParty", &AHorde::execSpawnParty },
			{ "SpawnRandomAgent", &AHorde::execSpawnRandomAgent },
			{ "UpdateBounds", &AHorde::execUpdateBounds },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AHorde_AddAgent_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Agent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Party;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AHorde_AddAgent_Statics::NewProp_Agent = { "Agent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Horde_eventAddAgent_Parms, Agent), Z_Construct_UClass_AHordeAgent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AHorde_AddAgent_Statics::NewProp_Party = { "Party", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Horde_eventAddAgent_Parms, Party), Z_Construct_UClass_AParty_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHorde_AddAgent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHorde_AddAgent_Statics::NewProp_Agent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHorde_AddAgent_Statics::NewProp_Party,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHorde_AddAgent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Horde.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHorde_AddAgent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHorde, nullptr, "AddAgent", nullptr, nullptr, sizeof(Horde_eventAddAgent_Parms), Z_Construct_UFunction_AHorde_AddAgent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHorde_AddAgent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHorde_AddAgent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHorde_AddAgent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHorde_AddAgent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHorde_AddAgent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHorde_AddParty_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Party;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AHorde_AddParty_Statics::NewProp_Party = { "Party", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Horde_eventAddParty_Parms, Party), Z_Construct_UClass_AParty_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHorde_AddParty_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHorde_AddParty_Statics::NewProp_Party,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHorde_AddParty_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Horde.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHorde_AddParty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHorde, nullptr, "AddParty", nullptr, nullptr, sizeof(Horde_eventAddParty_Parms), Z_Construct_UFunction_AHorde_AddParty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHorde_AddParty_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHorde_AddParty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHorde_AddParty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHorde_AddParty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHorde_AddParty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHorde_BeginAlert_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Targets_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Targets_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Targets;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AHorde_BeginAlert_Statics::NewProp_Targets_Inner = { "Targets", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHorde_BeginAlert_Statics::NewProp_Targets_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AHorde_BeginAlert_Statics::NewProp_Targets = { "Targets", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Horde_eventBeginAlert_Parms, Targets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_AHorde_BeginAlert_Statics::NewProp_Targets_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AHorde_BeginAlert_Statics::NewProp_Targets_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHorde_BeginAlert_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHorde_BeginAlert_Statics::NewProp_Targets_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHorde_BeginAlert_Statics::NewProp_Targets,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHorde_BeginAlert_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Horde.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHorde_BeginAlert_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHorde, nullptr, "BeginAlert", nullptr, nullptr, sizeof(Horde_eventBeginAlert_Parms), Z_Construct_UFunction_AHorde_BeginAlert_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHorde_BeginAlert_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHorde_BeginAlert_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHorde_BeginAlert_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHorde_BeginAlert()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHorde_BeginAlert_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHorde_EndAlert_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHorde_EndAlert_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Horde.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHorde_EndAlert_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHorde, nullptr, "EndAlert", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHorde_EndAlert_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHorde_EndAlert_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHorde_EndAlert()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHorde_EndAlert_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHorde_GetAgents_Statics
	{
		struct Horde_eventGetAgents_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AHorde_GetAgents_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AHordeAgent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AHorde_GetAgents_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Horde_eventGetAgents_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHorde_GetAgents_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHorde_GetAgents_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHorde_GetAgents_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHorde_GetAgents_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Horde.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHorde_GetAgents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHorde, nullptr, "GetAgents", nullptr, nullptr, sizeof(Horde_eventGetAgents_Parms), Z_Construct_UFunction_AHorde_GetAgents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHorde_GetAgents_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHorde_GetAgents_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHorde_GetAgents_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHorde_GetAgents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHorde_GetAgents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHorde_GetHordeController_Statics
	{
		struct Horde_eventGetHordeController_Parms
		{
			AHordeController* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AHorde_GetHordeController_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Horde_eventGetHordeController_Parms, ReturnValue), Z_Construct_UClass_AHordeController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHorde_GetHordeController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHorde_GetHordeController_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHorde_GetHordeController_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Horde.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHorde_GetHordeController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHorde, nullptr, "GetHordeController", nullptr, nullptr, sizeof(Horde_eventGetHordeController_Parms), Z_Construct_UFunction_AHorde_GetHordeController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHorde_GetHordeController_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHorde_GetHordeController_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHorde_GetHordeController_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHorde_GetHordeController()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHorde_GetHordeController_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHorde_GetMaxRadius_Statics
	{
		struct Horde_eventGetMaxRadius_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AHorde_GetMaxRadius_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Horde_eventGetMaxRadius_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHorde_GetMaxRadius_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHorde_GetMaxRadius_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHorde_GetMaxRadius_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Horde.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHorde_GetMaxRadius_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHorde, nullptr, "GetMaxRadius", nullptr, nullptr, sizeof(Horde_eventGetMaxRadius_Parms), Z_Construct_UFunction_AHorde_GetMaxRadius_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHorde_GetMaxRadius_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHorde_GetMaxRadius_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHorde_GetMaxRadius_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHorde_GetMaxRadius()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHorde_GetMaxRadius_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHorde_GetParties_Statics
	{
		struct Horde_eventGetParties_Parms
		{
			TArray<AParty*> ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AHorde_GetParties_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AParty_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AHorde_GetParties_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Horde_eventGetParties_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHorde_GetParties_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHorde_GetParties_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHorde_GetParties_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHorde_GetParties_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Horde.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHorde_GetParties_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHorde, nullptr, "GetParties", nullptr, nullptr, sizeof(Horde_eventGetParties_Parms), Z_Construct_UFunction_AHorde_GetParties_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHorde_GetParties_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHorde_GetParties_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHorde_GetParties_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHorde_GetParties()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHorde_GetParties_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHorde_GetRadius_Statics
	{
		struct Horde_eventGetRadius_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AHorde_GetRadius_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Horde_eventGetRadius_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHorde_GetRadius_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHorde_GetRadius_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHorde_GetRadius_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Horde.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHorde_GetRadius_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHorde, nullptr, "GetRadius", nullptr, nullptr, sizeof(Horde_eventGetRadius_Parms), Z_Construct_UFunction_AHorde_GetRadius_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHorde_GetRadius_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHorde_GetRadius_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHorde_GetRadius_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHorde_GetRadius()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHorde_GetRadius_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHorde_IsActive_Statics
	{
		struct Horde_eventIsActive_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AHorde_IsActive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Horde_eventIsActive_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AHorde_IsActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Horde_eventIsActive_Parms), &Z_Construct_UFunction_AHorde_IsActive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHorde_IsActive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHorde_IsActive_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHorde_IsActive_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Horde.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHorde_IsActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHorde, nullptr, "IsActive", nullptr, nullptr, sizeof(Horde_eventIsActive_Parms), Z_Construct_UFunction_AHorde_IsActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHorde_IsActive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHorde_IsActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHorde_IsActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHorde_IsActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHorde_IsActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHorde_IsAlert_Statics
	{
		struct Horde_eventIsAlert_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AHorde_IsAlert_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Horde_eventIsAlert_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AHorde_IsAlert_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Horde_eventIsAlert_Parms), &Z_Construct_UFunction_AHorde_IsAlert_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHorde_IsAlert_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHorde_IsAlert_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHorde_IsAlert_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Horde.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHorde_IsAlert_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHorde, nullptr, "IsAlert", nullptr, nullptr, sizeof(Horde_eventIsAlert_Parms), Z_Construct_UFunction_AHorde_IsAlert_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHorde_IsAlert_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHorde_IsAlert_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHorde_IsAlert_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHorde_IsAlert()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHorde_IsAlert_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHorde_MergeParties_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHorde_MergeParties_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Horde.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHorde_MergeParties_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHorde, nullptr, "MergeParties", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHorde_MergeParties_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHorde_MergeParties_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHorde_MergeParties()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHorde_MergeParties_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHorde_MergeToHorde_Statics
	{
		struct Horde_eventMergeToHorde_Parms
		{
			AHorde* NewHorde;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewHorde;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AHorde_MergeToHorde_Statics::NewProp_NewHorde = { "NewHorde", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Horde_eventMergeToHorde_Parms, NewHorde), Z_Construct_UClass_AHorde_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AHorde_MergeToHorde_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Horde_eventMergeToHorde_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AHorde_MergeToHorde_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Horde_eventMergeToHorde_Parms), &Z_Construct_UFunction_AHorde_MergeToHorde_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHorde_MergeToHorde_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHorde_MergeToHorde_Statics::NewProp_NewHorde,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHorde_MergeToHorde_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHorde_MergeToHorde_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Horde.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHorde_MergeToHorde_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHorde, nullptr, "MergeToHorde", nullptr, nullptr, sizeof(Horde_eventMergeToHorde_Parms), Z_Construct_UFunction_AHorde_MergeToHorde_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHorde_MergeToHorde_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHorde_MergeToHorde_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHorde_MergeToHorde_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHorde_MergeToHorde()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHorde_MergeToHorde_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHorde_OnBeginOverlap_Statics
	{
		struct Horde_eventOnBeginOverlap_Parms
		{
			AActor* OverlappedActor;
			AActor* OtherActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedActor;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AHorde_OnBeginOverlap_Statics::NewProp_OverlappedActor = { "OverlappedActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Horde_eventOnBeginOverlap_Parms, OverlappedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AHorde_OnBeginOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Horde_eventOnBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHorde_OnBeginOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHorde_OnBeginOverlap_Statics::NewProp_OverlappedActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHorde_OnBeginOverlap_Statics::NewProp_OtherActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHorde_OnBeginOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Horde.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHorde_OnBeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHorde, nullptr, "OnBeginOverlap", nullptr, nullptr, sizeof(Horde_eventOnBeginOverlap_Parms), Z_Construct_UFunction_AHorde_OnBeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHorde_OnBeginOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHorde_OnBeginOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHorde_OnBeginOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHorde_OnBeginOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHorde_OnBeginOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHorde_RemoveAgent_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Agent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AHorde_RemoveAgent_Statics::NewProp_Agent = { "Agent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Horde_eventRemoveAgent_Parms, Agent), Z_Construct_UClass_AHordeAgent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHorde_RemoveAgent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHorde_RemoveAgent_Statics::NewProp_Agent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHorde_RemoveAgent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Horde.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHorde_RemoveAgent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHorde, nullptr, "RemoveAgent", nullptr, nullptr, sizeof(Horde_eventRemoveAgent_Parms), Z_Construct_UFunction_AHorde_RemoveAgent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHorde_RemoveAgent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHorde_RemoveAgent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHorde_RemoveAgent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHorde_RemoveAgent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHorde_RemoveAgent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHorde_RemoveParty_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Party;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AHorde_RemoveParty_Statics::NewProp_Party = { "Party", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Horde_eventRemoveParty_Parms, Party), Z_Construct_UClass_AParty_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHorde_RemoveParty_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHorde_RemoveParty_Statics::NewProp_Party,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHorde_RemoveParty_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Horde.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHorde_RemoveParty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHorde, nullptr, "RemoveParty", nullptr, nullptr, sizeof(Horde_eventRemoveParty_Parms), Z_Construct_UFunction_AHorde_RemoveParty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHorde_RemoveParty_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHorde_RemoveParty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHorde_RemoveParty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHorde_RemoveParty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHorde_RemoveParty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHorde_SpawnAgent_Statics
	{
		struct Horde_eventSpawnAgent_Parms
		{
			TSubclassOf<AHordeAgent>  Class;
			FVector position;
			FRotator Rotation;
			AHordeAgent* ReturnValue;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Class;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_position;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotation;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AHorde_SpawnAgent_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Horde_eventSpawnAgent_Parms, Class), Z_Construct_UClass_AHordeAgent_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AHorde_SpawnAgent_Statics::NewProp_position = { "position", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Horde_eventSpawnAgent_Parms, position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AHorde_SpawnAgent_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Horde_eventSpawnAgent_Parms, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AHorde_SpawnAgent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Horde_eventSpawnAgent_Parms, ReturnValue), Z_Construct_UClass_AHordeAgent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHorde_SpawnAgent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHorde_SpawnAgent_Statics::NewProp_Class,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHorde_SpawnAgent_Statics::NewProp_position,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHorde_SpawnAgent_Statics::NewProp_Rotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHorde_SpawnAgent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHorde_SpawnAgent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Horde.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHorde_SpawnAgent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHorde, nullptr, "SpawnAgent", nullptr, nullptr, sizeof(Horde_eventSpawnAgent_Parms), Z_Construct_UFunction_AHorde_SpawnAgent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHorde_SpawnAgent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHorde_SpawnAgent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHorde_SpawnAgent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHorde_SpawnAgent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHorde_SpawnAgent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHorde_SpawnAgentInRadius_Statics
	{
		struct Horde_eventSpawnAgentInRadius_Parms
		{
			AHordeAgent* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AHorde_SpawnAgentInRadius_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Horde_eventSpawnAgentInRadius_Parms, ReturnValue), Z_Construct_UClass_AHordeAgent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHorde_SpawnAgentInRadius_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHorde_SpawnAgentInRadius_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHorde_SpawnAgentInRadius_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Horde.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHorde_SpawnAgentInRadius_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHorde, nullptr, "SpawnAgentInRadius", nullptr, nullptr, sizeof(Horde_eventSpawnAgentInRadius_Parms), Z_Construct_UFunction_AHorde_SpawnAgentInRadius_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHorde_SpawnAgentInRadius_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHorde_SpawnAgentInRadius_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHorde_SpawnAgentInRadius_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHorde_SpawnAgentInRadius()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHorde_SpawnAgentInRadius_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHorde_SpawnParty_Statics
	{
		struct Horde_eventSpawnParty_Parms
		{
			TArray<AHordeAgent*> Members;
			AParty* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Members_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Members;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AHorde_SpawnParty_Statics::NewProp_Members_Inner = { "Members", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AHordeAgent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AHorde_SpawnParty_Statics::NewProp_Members = { "Members", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Horde_eventSpawnParty_Parms, Members), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AHorde_SpawnParty_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Horde_eventSpawnParty_Parms, ReturnValue), Z_Construct_UClass_AParty_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHorde_SpawnParty_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHorde_SpawnParty_Statics::NewProp_Members_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHorde_SpawnParty_Statics::NewProp_Members,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHorde_SpawnParty_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHorde_SpawnParty_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Horde.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHorde_SpawnParty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHorde, nullptr, "SpawnParty", nullptr, nullptr, sizeof(Horde_eventSpawnParty_Parms), Z_Construct_UFunction_AHorde_SpawnParty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHorde_SpawnParty_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHorde_SpawnParty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHorde_SpawnParty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHorde_SpawnParty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHorde_SpawnParty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHorde_SpawnRandomAgent_Statics
	{
		struct Horde_eventSpawnRandomAgent_Parms
		{
			FVector position;
			FRotator Rotation;
			AHordeAgent* ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_position;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotation;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AHorde_SpawnRandomAgent_Statics::NewProp_position = { "position", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Horde_eventSpawnRandomAgent_Parms, position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AHorde_SpawnRandomAgent_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Horde_eventSpawnRandomAgent_Parms, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AHorde_SpawnRandomAgent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Horde_eventSpawnRandomAgent_Parms, ReturnValue), Z_Construct_UClass_AHordeAgent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHorde_SpawnRandomAgent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHorde_SpawnRandomAgent_Statics::NewProp_position,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHorde_SpawnRandomAgent_Statics::NewProp_Rotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHorde_SpawnRandomAgent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHorde_SpawnRandomAgent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Horde.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHorde_SpawnRandomAgent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHorde, nullptr, "SpawnRandomAgent", nullptr, nullptr, sizeof(Horde_eventSpawnRandomAgent_Parms), Z_Construct_UFunction_AHorde_SpawnRandomAgent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHorde_SpawnRandomAgent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHorde_SpawnRandomAgent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHorde_SpawnRandomAgent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHorde_SpawnRandomAgent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHorde_SpawnRandomAgent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHorde_UpdateBounds_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHorde_UpdateBounds_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Horde.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHorde_UpdateBounds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHorde, nullptr, "UpdateBounds", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHorde_UpdateBounds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHorde_UpdateBounds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHorde_UpdateBounds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHorde_UpdateBounds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AHorde_NoRegister()
	{
		return AHorde::StaticClass();
	}
	struct Z_Construct_UClass_AHorde_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnBeginAlert_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnBeginAlert;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnEndAlert_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnEndAlert;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnAgentRemoved_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAgentRemoved;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnAgentAdded_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAgentAdded;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultPartyClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_DefaultPartyClass;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AgentClasses_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AgentClasses_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AgentClasses;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bActive_MetaData[];
#endif
		static void NewProp_bActive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bActive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAlert_MetaData[];
#endif
		static void NewProp_bAlert_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAlert;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Agents_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Agents_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Agents;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Parties_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Parties_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Parties;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxTargetDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxTargetDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitialAgents_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InitialAgents;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PartyMergeDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PartyMergeDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpawnOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SphereComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SphereComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHorde_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_AIHordes,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AHorde_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AHorde_AddAgent, "AddAgent" }, // 2726828104
		{ &Z_Construct_UFunction_AHorde_AddParty, "AddParty" }, // 3123002579
		{ &Z_Construct_UFunction_AHorde_BeginAlert, "BeginAlert" }, // 3962615129
		{ &Z_Construct_UFunction_AHorde_EndAlert, "EndAlert" }, // 581119024
		{ &Z_Construct_UFunction_AHorde_GetAgents, "GetAgents" }, // 607910943
		{ &Z_Construct_UFunction_AHorde_GetHordeController, "GetHordeController" }, // 263936854
		{ &Z_Construct_UFunction_AHorde_GetMaxRadius, "GetMaxRadius" }, // 1808175289
		{ &Z_Construct_UFunction_AHorde_GetParties, "GetParties" }, // 2475623686
		{ &Z_Construct_UFunction_AHorde_GetRadius, "GetRadius" }, // 3007345471
		{ &Z_Construct_UFunction_AHorde_IsActive, "IsActive" }, // 650560022
		{ &Z_Construct_UFunction_AHorde_IsAlert, "IsAlert" }, // 2360710510
		{ &Z_Construct_UFunction_AHorde_MergeParties, "MergeParties" }, // 549955846
		{ &Z_Construct_UFunction_AHorde_MergeToHorde, "MergeToHorde" }, // 2559240185
		{ &Z_Construct_UFunction_AHorde_OnBeginOverlap, "OnBeginOverlap" }, // 4133796066
		{ &Z_Construct_UFunction_AHorde_RemoveAgent, "RemoveAgent" }, // 1477708560
		{ &Z_Construct_UFunction_AHorde_RemoveParty, "RemoveParty" }, // 872309979
		{ &Z_Construct_UFunction_AHorde_SpawnAgent, "SpawnAgent" }, // 3786551802
		{ &Z_Construct_UFunction_AHorde_SpawnAgentInRadius, "SpawnAgentInRadius" }, // 3700584402
		{ &Z_Construct_UFunction_AHorde_SpawnParty, "SpawnParty" }, // 2136509649
		{ &Z_Construct_UFunction_AHorde_SpawnRandomAgent, "SpawnRandomAgent" }, // 649066602
		{ &Z_Construct_UFunction_AHorde_UpdateBounds, "UpdateBounds" }, // 710461911
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHorde_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Horde.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Horde.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHorde_Statics::NewProp_OnBeginAlert_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Horde" },
		{ "ModuleRelativePath", "Public/Horde.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AHorde_Statics::NewProp_OnBeginAlert = { "OnBeginAlert", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHorde, OnBeginAlert), Z_Construct_UDelegateFunction_AIHordes_HordeDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AHorde_Statics::NewProp_OnBeginAlert_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHorde_Statics::NewProp_OnBeginAlert_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHorde_Statics::NewProp_OnEndAlert_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Horde" },
		{ "ModuleRelativePath", "Public/Horde.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AHorde_Statics::NewProp_OnEndAlert = { "OnEndAlert", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHorde, OnEndAlert), Z_Construct_UDelegateFunction_AIHordes_HordeDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AHorde_Statics::NewProp_OnEndAlert_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHorde_Statics::NewProp_OnEndAlert_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHorde_Statics::NewProp_OnAgentRemoved_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Horde" },
		{ "ModuleRelativePath", "Public/Horde.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AHorde_Statics::NewProp_OnAgentRemoved = { "OnAgentRemoved", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHorde, OnAgentRemoved), Z_Construct_UDelegateFunction_AIHordes_HordeAgentDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AHorde_Statics::NewProp_OnAgentRemoved_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHorde_Statics::NewProp_OnAgentRemoved_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHorde_Statics::NewProp_OnAgentAdded_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Horde" },
		{ "ModuleRelativePath", "Public/Horde.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AHorde_Statics::NewProp_OnAgentAdded = { "OnAgentAdded", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHorde, OnAgentAdded), Z_Construct_UDelegateFunction_AIHordes_HordeAgentDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AHorde_Statics::NewProp_OnAgentAdded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHorde_Statics::NewProp_OnAgentAdded_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHorde_Statics::NewProp_DefaultPartyClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Horde" },
		{ "ModuleRelativePath", "Public/Horde.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AHorde_Statics::NewProp_DefaultPartyClass = { "DefaultPartyClass", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHorde, DefaultPartyClass), Z_Construct_UClass_AParty_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AHorde_Statics::NewProp_DefaultPartyClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHorde_Statics::NewProp_DefaultPartyClass_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AHorde_Statics::NewProp_AgentClasses_Inner = { "AgentClasses", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAgentSpawn, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHorde_Statics::NewProp_AgentClasses_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Horde" },
		{ "ModuleRelativePath", "Public/Horde.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AHorde_Statics::NewProp_AgentClasses = { "AgentClasses", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHorde, AgentClasses), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AHorde_Statics::NewProp_AgentClasses_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHorde_Statics::NewProp_AgentClasses_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHorde_Statics::NewProp_bActive_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Horde" },
		{ "ModuleRelativePath", "Public/Horde.h" },
	};
#endif
	void Z_Construct_UClass_AHorde_Statics::NewProp_bActive_SetBit(void* Obj)
	{
		((AHorde*)Obj)->bActive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AHorde_Statics::NewProp_bActive = { "bActive", nullptr, (EPropertyFlags)0x0020080000000025, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AHorde), &Z_Construct_UClass_AHorde_Statics::NewProp_bActive_SetBit, METADATA_PARAMS(Z_Construct_UClass_AHorde_Statics::NewProp_bActive_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHorde_Statics::NewProp_bActive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHorde_Statics::NewProp_bAlert_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Horde" },
		{ "ModuleRelativePath", "Public/Horde.h" },
	};
#endif
	void Z_Construct_UClass_AHorde_Statics::NewProp_bAlert_SetBit(void* Obj)
	{
		((AHorde*)Obj)->bAlert = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AHorde_Statics::NewProp_bAlert = { "bAlert", nullptr, (EPropertyFlags)0x0020080000000025, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AHorde), &Z_Construct_UClass_AHorde_Statics::NewProp_bAlert_SetBit, METADATA_PARAMS(Z_Construct_UClass_AHorde_Statics::NewProp_bAlert_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHorde_Statics::NewProp_bAlert_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHorde_Statics::NewProp_Agents_Inner = { "Agents", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AHordeAgent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHorde_Statics::NewProp_Agents_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Horde" },
		{ "ModuleRelativePath", "Public/Horde.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AHorde_Statics::NewProp_Agents = { "Agents", nullptr, (EPropertyFlags)0x0020080000000025, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHorde, Agents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AHorde_Statics::NewProp_Agents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHorde_Statics::NewProp_Agents_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHorde_Statics::NewProp_Parties_Inner = { "Parties", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AParty_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHorde_Statics::NewProp_Parties_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Horde" },
		{ "ModuleRelativePath", "Public/Horde.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AHorde_Statics::NewProp_Parties = { "Parties", nullptr, (EPropertyFlags)0x0020080000000025, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHorde, Parties), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AHorde_Statics::NewProp_Parties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHorde_Statics::NewProp_Parties_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHorde_Statics::NewProp_MaxTargetDistance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Horde" },
		{ "ModuleRelativePath", "Public/Horde.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHorde_Statics::NewProp_MaxTargetDistance = { "MaxTargetDistance", nullptr, (EPropertyFlags)0x0020080000000025, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHorde, MaxTargetDistance), METADATA_PARAMS(Z_Construct_UClass_AHorde_Statics::NewProp_MaxTargetDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHorde_Statics::NewProp_MaxTargetDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHorde_Statics::NewProp_MaxRadius_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Horde" },
		{ "ModuleRelativePath", "Public/Horde.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHorde_Statics::NewProp_MaxRadius = { "MaxRadius", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHorde, MaxRadius), METADATA_PARAMS(Z_Construct_UClass_AHorde_Statics::NewProp_MaxRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHorde_Statics::NewProp_MaxRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHorde_Statics::NewProp_Radius_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Horde" },
		{ "ModuleRelativePath", "Public/Horde.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHorde_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0020080000000025, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHorde, Radius), METADATA_PARAMS(Z_Construct_UClass_AHorde_Statics::NewProp_Radius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHorde_Statics::NewProp_Radius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHorde_Statics::NewProp_InitialAgents_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Horde" },
		{ "ModuleRelativePath", "Public/Horde.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AHorde_Statics::NewProp_InitialAgents = { "InitialAgents", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHorde, InitialAgents), METADATA_PARAMS(Z_Construct_UClass_AHorde_Statics::NewProp_InitialAgents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHorde_Statics::NewProp_InitialAgents_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHorde_Statics::NewProp_PartyMergeDistance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Horde" },
		{ "ModuleRelativePath", "Public/Horde.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHorde_Statics::NewProp_PartyMergeDistance = { "PartyMergeDistance", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHorde, PartyMergeDistance), METADATA_PARAMS(Z_Construct_UClass_AHorde_Statics::NewProp_PartyMergeDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHorde_Statics::NewProp_PartyMergeDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHorde_Statics::NewProp_SpawnOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Horde" },
		{ "ModuleRelativePath", "Public/Horde.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AHorde_Statics::NewProp_SpawnOffset = { "SpawnOffset", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHorde, SpawnOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AHorde_Statics::NewProp_SpawnOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHorde_Statics::NewProp_SpawnOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHorde_Statics::NewProp_SphereComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Horde" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Horde.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHorde_Statics::NewProp_SphereComponent = { "SphereComponent", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHorde, SphereComponent), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHorde_Statics::NewProp_SphereComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHorde_Statics::NewProp_SphereComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHorde_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHorde_Statics::NewProp_OnBeginAlert,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHorde_Statics::NewProp_OnEndAlert,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHorde_Statics::NewProp_OnAgentRemoved,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHorde_Statics::NewProp_OnAgentAdded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHorde_Statics::NewProp_DefaultPartyClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHorde_Statics::NewProp_AgentClasses_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHorde_Statics::NewProp_AgentClasses,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHorde_Statics::NewProp_bActive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHorde_Statics::NewProp_bAlert,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHorde_Statics::NewProp_Agents_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHorde_Statics::NewProp_Agents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHorde_Statics::NewProp_Parties_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHorde_Statics::NewProp_Parties,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHorde_Statics::NewProp_MaxTargetDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHorde_Statics::NewProp_MaxRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHorde_Statics::NewProp_Radius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHorde_Statics::NewProp_InitialAgents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHorde_Statics::NewProp_PartyMergeDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHorde_Statics::NewProp_SpawnOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHorde_Statics::NewProp_SphereComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHorde_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHorde>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AHorde_Statics::ClassParams = {
		&AHorde::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AHorde_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AHorde_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AHorde_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AHorde_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AHorde()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AHorde_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AHorde, 3704565899);
	template<> AIHORDES_API UClass* StaticClass<AHorde>()
	{
		return AHorde::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AHorde(Z_Construct_UClass_AHorde, &AHorde::StaticClass, TEXT("/Script/AIHordes"), TEXT("AHorde"), false, nullptr, nullptr, nullptr);

	void AHorde::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_bActive(TEXT("bActive"));
		static const FName Name_bAlert(TEXT("bAlert"));
		static const FName Name_Agents(TEXT("Agents"));
		static const FName Name_Parties(TEXT("Parties"));
		static const FName Name_MaxTargetDistance(TEXT("MaxTargetDistance"));
		static const FName Name_Radius(TEXT("Radius"));

		const bool bIsValid = true
			&& Name_bActive == ClassReps[(int32)ENetFields_Private::bActive].Property->GetFName()
			&& Name_bAlert == ClassReps[(int32)ENetFields_Private::bAlert].Property->GetFName()
			&& Name_Agents == ClassReps[(int32)ENetFields_Private::Agents].Property->GetFName()
			&& Name_Parties == ClassReps[(int32)ENetFields_Private::Parties].Property->GetFName()
			&& Name_MaxTargetDistance == ClassReps[(int32)ENetFields_Private::MaxTargetDistance].Property->GetFName()
			&& Name_Radius == ClassReps[(int32)ENetFields_Private::Radius].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AHorde"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHorde);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
