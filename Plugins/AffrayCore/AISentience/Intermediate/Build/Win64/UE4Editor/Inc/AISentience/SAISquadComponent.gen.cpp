// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AISentience/Public/SAISquadComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSAISquadComponent() {}
// Cross Module References
	AISENTIENCE_API UClass* Z_Construct_UClass_USAISquadComponent_NoRegister();
	AISENTIENCE_API UClass* Z_Construct_UClass_USAISquadComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_AISentience();
	ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	AISENTIENCE_API UFunction* Z_Construct_UDelegateFunction_AISentience_ChangedSquadMCDelegate__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(USAISquadComponent::execGetAllVisibleSquadMembers)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_VisionCone);
		P_GET_TARRAY_REF(USAISquadComponent*,Z_Param_Out_OutVisibleSquadMembers);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetAllVisibleSquadMembers(Z_Param_VisionCone,Z_Param_Out_OutVisibleSquadMembers);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USAISquadComponent::execGetController)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AController**)Z_Param__Result=P_THIS->GetController();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USAISquadComponent::execGetLeader)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USAISquadComponent**)Z_Param__Result=P_THIS->GetLeader();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USAISquadComponent::execGetPawn)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(APawn**)Z_Param__Result=P_THIS->GetPawn();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USAISquadComponent::execIsDead)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsDead();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USAISquadComponent::execIsSquadLeader)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsSquadLeader();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USAISquadComponent::execMulticastSquadChanged)
	{
		P_GET_STRUCT(FGuid,Z_Param_NewSquadID);
		P_GET_UBOOL(Z_Param_bAsSquadLeader);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MulticastSquadChanged_Implementation(Z_Param_NewSquadID,Z_Param_bAsSquadLeader);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USAISquadComponent::execServerJoinSquad)
	{
		P_GET_STRUCT(FGuid,Z_Param_NewSquadID);
		P_GET_UBOOL(Z_Param_bAsSquadLeader);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerJoinSquad_Implementation(Z_Param_NewSquadID,Z_Param_bAsSquadLeader);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USAISquadComponent::execServerLeaveSquad)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerLeaveSquad_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_USAISquadComponent_MulticastSquadChanged = FName(TEXT("MulticastSquadChanged"));
	void USAISquadComponent::MulticastSquadChanged(FGuid NewSquadID, bool bAsSquadLeader)
	{
		SAISquadComponent_eventMulticastSquadChanged_Parms Parms;
		Parms.NewSquadID=NewSquadID;
		Parms.bAsSquadLeader=bAsSquadLeader ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_USAISquadComponent_MulticastSquadChanged),&Parms);
	}
	static FName NAME_USAISquadComponent_ServerJoinSquad = FName(TEXT("ServerJoinSquad"));
	void USAISquadComponent::ServerJoinSquad(FGuid NewSquadID, bool bAsSquadLeader)
	{
		SAISquadComponent_eventServerJoinSquad_Parms Parms;
		Parms.NewSquadID=NewSquadID;
		Parms.bAsSquadLeader=bAsSquadLeader ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_USAISquadComponent_ServerJoinSquad),&Parms);
	}
	static FName NAME_USAISquadComponent_ServerLeaveSquad = FName(TEXT("ServerLeaveSquad"));
	void USAISquadComponent::ServerLeaveSquad()
	{
		ProcessEvent(FindFunctionChecked(NAME_USAISquadComponent_ServerLeaveSquad),NULL);
	}
	void USAISquadComponent::StaticRegisterNativesUSAISquadComponent()
	{
		UClass* Class = USAISquadComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAllVisibleSquadMembers", &USAISquadComponent::execGetAllVisibleSquadMembers },
			{ "GetController", &USAISquadComponent::execGetController },
			{ "GetLeader", &USAISquadComponent::execGetLeader },
			{ "GetPawn", &USAISquadComponent::execGetPawn },
			{ "IsDead", &USAISquadComponent::execIsDead },
			{ "IsSquadLeader", &USAISquadComponent::execIsSquadLeader },
			{ "MulticastSquadChanged", &USAISquadComponent::execMulticastSquadChanged },
			{ "ServerJoinSquad", &USAISquadComponent::execServerJoinSquad },
			{ "ServerLeaveSquad", &USAISquadComponent::execServerLeaveSquad },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USAISquadComponent_GetAllVisibleSquadMembers_Statics
	{
		struct SAISquadComponent_eventGetAllVisibleSquadMembers_Parms
		{
			float VisionCone;
			TArray<USAISquadComponent*> OutVisibleSquadMembers;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VisionCone;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutVisibleSquadMembers_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutVisibleSquadMembers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutVisibleSquadMembers;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USAISquadComponent_GetAllVisibleSquadMembers_Statics::NewProp_VisionCone = { "VisionCone", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SAISquadComponent_eventGetAllVisibleSquadMembers_Parms, VisionCone), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USAISquadComponent_GetAllVisibleSquadMembers_Statics::NewProp_OutVisibleSquadMembers_Inner = { "OutVisibleSquadMembers", nullptr, (EPropertyFlags)0x0000000000080000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USAISquadComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USAISquadComponent_GetAllVisibleSquadMembers_Statics::NewProp_OutVisibleSquadMembers_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USAISquadComponent_GetAllVisibleSquadMembers_Statics::NewProp_OutVisibleSquadMembers = { "OutVisibleSquadMembers", nullptr, (EPropertyFlags)0x0010008000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SAISquadComponent_eventGetAllVisibleSquadMembers_Parms, OutVisibleSquadMembers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_USAISquadComponent_GetAllVisibleSquadMembers_Statics::NewProp_OutVisibleSquadMembers_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USAISquadComponent_GetAllVisibleSquadMembers_Statics::NewProp_OutVisibleSquadMembers_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USAISquadComponent_GetAllVisibleSquadMembers_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USAISquadComponent_GetAllVisibleSquadMembers_Statics::NewProp_VisionCone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USAISquadComponent_GetAllVisibleSquadMembers_Statics::NewProp_OutVisibleSquadMembers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USAISquadComponent_GetAllVisibleSquadMembers_Statics::NewProp_OutVisibleSquadMembers,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USAISquadComponent_GetAllVisibleSquadMembers_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SAISquadComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USAISquadComponent_GetAllVisibleSquadMembers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USAISquadComponent, nullptr, "GetAllVisibleSquadMembers", nullptr, nullptr, sizeof(SAISquadComponent_eventGetAllVisibleSquadMembers_Parms), Z_Construct_UFunction_USAISquadComponent_GetAllVisibleSquadMembers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USAISquadComponent_GetAllVisibleSquadMembers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USAISquadComponent_GetAllVisibleSquadMembers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USAISquadComponent_GetAllVisibleSquadMembers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USAISquadComponent_GetAllVisibleSquadMembers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USAISquadComponent_GetAllVisibleSquadMembers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USAISquadComponent_GetController_Statics
	{
		struct SAISquadComponent_eventGetController_Parms
		{
			AController* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USAISquadComponent_GetController_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SAISquadComponent_eventGetController_Parms, ReturnValue), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USAISquadComponent_GetController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USAISquadComponent_GetController_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USAISquadComponent_GetController_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SAISquadComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USAISquadComponent_GetController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USAISquadComponent, nullptr, "GetController", nullptr, nullptr, sizeof(SAISquadComponent_eventGetController_Parms), Z_Construct_UFunction_USAISquadComponent_GetController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USAISquadComponent_GetController_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USAISquadComponent_GetController_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USAISquadComponent_GetController_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USAISquadComponent_GetController()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USAISquadComponent_GetController_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USAISquadComponent_GetLeader_Statics
	{
		struct SAISquadComponent_eventGetLeader_Parms
		{
			USAISquadComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USAISquadComponent_GetLeader_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USAISquadComponent_GetLeader_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SAISquadComponent_eventGetLeader_Parms, ReturnValue), Z_Construct_UClass_USAISquadComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USAISquadComponent_GetLeader_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USAISquadComponent_GetLeader_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USAISquadComponent_GetLeader_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USAISquadComponent_GetLeader_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USAISquadComponent_GetLeader_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SAISquadComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USAISquadComponent_GetLeader_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USAISquadComponent, nullptr, "GetLeader", nullptr, nullptr, sizeof(SAISquadComponent_eventGetLeader_Parms), Z_Construct_UFunction_USAISquadComponent_GetLeader_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USAISquadComponent_GetLeader_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USAISquadComponent_GetLeader_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USAISquadComponent_GetLeader_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USAISquadComponent_GetLeader()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USAISquadComponent_GetLeader_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USAISquadComponent_GetPawn_Statics
	{
		struct SAISquadComponent_eventGetPawn_Parms
		{
			APawn* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USAISquadComponent_GetPawn_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SAISquadComponent_eventGetPawn_Parms, ReturnValue), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USAISquadComponent_GetPawn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USAISquadComponent_GetPawn_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USAISquadComponent_GetPawn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SAISquadComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USAISquadComponent_GetPawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USAISquadComponent, nullptr, "GetPawn", nullptr, nullptr, sizeof(SAISquadComponent_eventGetPawn_Parms), Z_Construct_UFunction_USAISquadComponent_GetPawn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USAISquadComponent_GetPawn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USAISquadComponent_GetPawn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USAISquadComponent_GetPawn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USAISquadComponent_GetPawn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USAISquadComponent_GetPawn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USAISquadComponent_IsDead_Statics
	{
		struct SAISquadComponent_eventIsDead_Parms
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
	void Z_Construct_UFunction_USAISquadComponent_IsDead_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SAISquadComponent_eventIsDead_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USAISquadComponent_IsDead_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SAISquadComponent_eventIsDead_Parms), &Z_Construct_UFunction_USAISquadComponent_IsDead_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USAISquadComponent_IsDead_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USAISquadComponent_IsDead_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USAISquadComponent_IsDead_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SAISquadComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USAISquadComponent_IsDead_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USAISquadComponent, nullptr, "IsDead", nullptr, nullptr, sizeof(SAISquadComponent_eventIsDead_Parms), Z_Construct_UFunction_USAISquadComponent_IsDead_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USAISquadComponent_IsDead_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USAISquadComponent_IsDead_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USAISquadComponent_IsDead_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USAISquadComponent_IsDead()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USAISquadComponent_IsDead_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USAISquadComponent_IsSquadLeader_Statics
	{
		struct SAISquadComponent_eventIsSquadLeader_Parms
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
	void Z_Construct_UFunction_USAISquadComponent_IsSquadLeader_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SAISquadComponent_eventIsSquadLeader_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USAISquadComponent_IsSquadLeader_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SAISquadComponent_eventIsSquadLeader_Parms), &Z_Construct_UFunction_USAISquadComponent_IsSquadLeader_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USAISquadComponent_IsSquadLeader_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USAISquadComponent_IsSquadLeader_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USAISquadComponent_IsSquadLeader_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SAISquadComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USAISquadComponent_IsSquadLeader_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USAISquadComponent, nullptr, "IsSquadLeader", nullptr, nullptr, sizeof(SAISquadComponent_eventIsSquadLeader_Parms), Z_Construct_UFunction_USAISquadComponent_IsSquadLeader_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USAISquadComponent_IsSquadLeader_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USAISquadComponent_IsSquadLeader_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USAISquadComponent_IsSquadLeader_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USAISquadComponent_IsSquadLeader()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USAISquadComponent_IsSquadLeader_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USAISquadComponent_MulticastSquadChanged_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewSquadID;
		static void NewProp_bAsSquadLeader_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAsSquadLeader;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USAISquadComponent_MulticastSquadChanged_Statics::NewProp_NewSquadID = { "NewSquadID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SAISquadComponent_eventMulticastSquadChanged_Parms, NewSquadID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USAISquadComponent_MulticastSquadChanged_Statics::NewProp_bAsSquadLeader_SetBit(void* Obj)
	{
		((SAISquadComponent_eventMulticastSquadChanged_Parms*)Obj)->bAsSquadLeader = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USAISquadComponent_MulticastSquadChanged_Statics::NewProp_bAsSquadLeader = { "bAsSquadLeader", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SAISquadComponent_eventMulticastSquadChanged_Parms), &Z_Construct_UFunction_USAISquadComponent_MulticastSquadChanged_Statics::NewProp_bAsSquadLeader_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USAISquadComponent_MulticastSquadChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USAISquadComponent_MulticastSquadChanged_Statics::NewProp_NewSquadID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USAISquadComponent_MulticastSquadChanged_Statics::NewProp_bAsSquadLeader,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USAISquadComponent_MulticastSquadChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SAISquadComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USAISquadComponent_MulticastSquadChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USAISquadComponent, nullptr, "MulticastSquadChanged", nullptr, nullptr, sizeof(SAISquadComponent_eventMulticastSquadChanged_Parms), Z_Construct_UFunction_USAISquadComponent_MulticastSquadChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USAISquadComponent_MulticastSquadChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04844CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USAISquadComponent_MulticastSquadChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USAISquadComponent_MulticastSquadChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USAISquadComponent_MulticastSquadChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USAISquadComponent_MulticastSquadChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USAISquadComponent_ServerJoinSquad_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewSquadID;
		static void NewProp_bAsSquadLeader_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAsSquadLeader;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USAISquadComponent_ServerJoinSquad_Statics::NewProp_NewSquadID = { "NewSquadID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SAISquadComponent_eventServerJoinSquad_Parms, NewSquadID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USAISquadComponent_ServerJoinSquad_Statics::NewProp_bAsSquadLeader_SetBit(void* Obj)
	{
		((SAISquadComponent_eventServerJoinSquad_Parms*)Obj)->bAsSquadLeader = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USAISquadComponent_ServerJoinSquad_Statics::NewProp_bAsSquadLeader = { "bAsSquadLeader", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SAISquadComponent_eventServerJoinSquad_Parms), &Z_Construct_UFunction_USAISquadComponent_ServerJoinSquad_Statics::NewProp_bAsSquadLeader_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USAISquadComponent_ServerJoinSquad_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USAISquadComponent_ServerJoinSquad_Statics::NewProp_NewSquadID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USAISquadComponent_ServerJoinSquad_Statics::NewProp_bAsSquadLeader,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USAISquadComponent_ServerJoinSquad_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SAISquadComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USAISquadComponent_ServerJoinSquad_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USAISquadComponent, nullptr, "ServerJoinSquad", nullptr, nullptr, sizeof(SAISquadComponent_eventServerJoinSquad_Parms), Z_Construct_UFunction_USAISquadComponent_ServerJoinSquad_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USAISquadComponent_ServerJoinSquad_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04A20CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USAISquadComponent_ServerJoinSquad_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USAISquadComponent_ServerJoinSquad_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USAISquadComponent_ServerJoinSquad()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USAISquadComponent_ServerJoinSquad_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USAISquadComponent_ServerLeaveSquad_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USAISquadComponent_ServerLeaveSquad_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SAISquadComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USAISquadComponent_ServerLeaveSquad_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USAISquadComponent, nullptr, "ServerLeaveSquad", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USAISquadComponent_ServerLeaveSquad_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USAISquadComponent_ServerLeaveSquad_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USAISquadComponent_ServerLeaveSquad()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USAISquadComponent_ServerLeaveSquad_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USAISquadComponent_NoRegister()
	{
		return USAISquadComponent::StaticClass();
	}
	struct Z_Construct_UClass_USAISquadComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChangedSquadMCDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_ChangedSquadMCDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSuppressDamageableWarning_MetaData[];
#endif
		static void NewProp_bSuppressDamageableWarning_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSuppressDamageableWarning;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USAISquadComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AISentience,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USAISquadComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USAISquadComponent_GetAllVisibleSquadMembers, "GetAllVisibleSquadMembers" }, // 1168044588
		{ &Z_Construct_UFunction_USAISquadComponent_GetController, "GetController" }, // 4163941582
		{ &Z_Construct_UFunction_USAISquadComponent_GetLeader, "GetLeader" }, // 2444561915
		{ &Z_Construct_UFunction_USAISquadComponent_GetPawn, "GetPawn" }, // 3543354031
		{ &Z_Construct_UFunction_USAISquadComponent_IsDead, "IsDead" }, // 1279860092
		{ &Z_Construct_UFunction_USAISquadComponent_IsSquadLeader, "IsSquadLeader" }, // 3709411311
		{ &Z_Construct_UFunction_USAISquadComponent_MulticastSquadChanged, "MulticastSquadChanged" }, // 1412989912
		{ &Z_Construct_UFunction_USAISquadComponent_ServerJoinSquad, "ServerJoinSquad" }, // 2124544662
		{ &Z_Construct_UFunction_USAISquadComponent_ServerLeaveSquad, "ServerLeaveSquad" }, // 295277581
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USAISquadComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "SAISquadComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SAISquadComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USAISquadComponent_Statics::NewProp_ChangedSquadMCDelegate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAISquadComponent" },
		{ "ModuleRelativePath", "Public/SAISquadComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USAISquadComponent_Statics::NewProp_ChangedSquadMCDelegate = { "ChangedSquadMCDelegate", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USAISquadComponent, ChangedSquadMCDelegate), Z_Construct_UDelegateFunction_AISentience_ChangedSquadMCDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USAISquadComponent_Statics::NewProp_ChangedSquadMCDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USAISquadComponent_Statics::NewProp_ChangedSquadMCDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USAISquadComponent_Statics::NewProp_bSuppressDamageableWarning_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAISquadComponent" },
		{ "ModuleRelativePath", "Public/SAISquadComponent.h" },
	};
#endif
	void Z_Construct_UClass_USAISquadComponent_Statics::NewProp_bSuppressDamageableWarning_SetBit(void* Obj)
	{
		((USAISquadComponent*)Obj)->bSuppressDamageableWarning = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USAISquadComponent_Statics::NewProp_bSuppressDamageableWarning = { "bSuppressDamageableWarning", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USAISquadComponent), &Z_Construct_UClass_USAISquadComponent_Statics::NewProp_bSuppressDamageableWarning_SetBit, METADATA_PARAMS(Z_Construct_UClass_USAISquadComponent_Statics::NewProp_bSuppressDamageableWarning_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USAISquadComponent_Statics::NewProp_bSuppressDamageableWarning_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USAISquadComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USAISquadComponent_Statics::NewProp_ChangedSquadMCDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USAISquadComponent_Statics::NewProp_bSuppressDamageableWarning,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USAISquadComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USAISquadComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USAISquadComponent_Statics::ClassParams = {
		&USAISquadComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USAISquadComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USAISquadComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USAISquadComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USAISquadComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USAISquadComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USAISquadComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USAISquadComponent, 1520965720);
	template<> AISENTIENCE_API UClass* StaticClass<USAISquadComponent>()
	{
		return USAISquadComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USAISquadComponent(Z_Construct_UClass_USAISquadComponent, &USAISquadComponent::StaticClass, TEXT("/Script/AISentience"), TEXT("USAISquadComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USAISquadComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
