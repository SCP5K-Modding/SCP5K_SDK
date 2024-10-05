// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AIHordes/Public/HordeController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHordeController() {}
// Cross Module References
	AIHORDES_API UClass* Z_Construct_UClass_AHordeController_NoRegister();
	AIHORDES_API UClass* Z_Construct_UClass_AHordeController();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	UPackage* Z_Construct_UPackage__Script_AIHordes();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	AIHORDES_API UClass* Z_Construct_UClass_AHorde_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AHordeController::execBeginAlert)
	{
		P_GET_TARRAY_REF(APawn*,Z_Param_Out_Targets);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BeginAlert_Implementation(Z_Param_Out_Targets);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHordeController::execCheckTargetVisibility)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CheckTargetVisibility();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHordeController::execEndAlert)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EndAlert_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHordeController::execGetCurrentTargets)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<APawn*>*)Z_Param__Result=P_THIS->GetCurrentTargets();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHordeController::execGetHorde)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AHorde**)Z_Param__Result=P_THIS->GetHorde();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHordeController::execIsTarget)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsTarget_Implementation(Z_Param_Actor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHordeController::execOnSeePawn)
	{
		P_GET_OBJECT(APawn,Z_Param_SeenPawn);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSeePawn(Z_Param_SeenPawn);
		P_NATIVE_END;
	}
	static FName NAME_AHordeController_BeginAlert = FName(TEXT("BeginAlert"));
	void AHordeController::BeginAlert(TArray<APawn*> const& Targets)
	{
		HordeController_eventBeginAlert_Parms Parms;
		Parms.Targets=Targets;
		ProcessEvent(FindFunctionChecked(NAME_AHordeController_BeginAlert),&Parms);
	}
	static FName NAME_AHordeController_EndAlert = FName(TEXT("EndAlert"));
	void AHordeController::EndAlert()
	{
		ProcessEvent(FindFunctionChecked(NAME_AHordeController_EndAlert),NULL);
	}
	static FName NAME_AHordeController_IsTarget = FName(TEXT("IsTarget"));
	bool AHordeController::IsTarget(AActor* Actor)
	{
		HordeController_eventIsTarget_Parms Parms;
		Parms.Actor=Actor;
		ProcessEvent(FindFunctionChecked(NAME_AHordeController_IsTarget),&Parms);
		return !!Parms.ReturnValue;
	}
	void AHordeController::StaticRegisterNativesAHordeController()
	{
		UClass* Class = AHordeController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BeginAlert", &AHordeController::execBeginAlert },
			{ "CheckTargetVisibility", &AHordeController::execCheckTargetVisibility },
			{ "EndAlert", &AHordeController::execEndAlert },
			{ "GetCurrentTargets", &AHordeController::execGetCurrentTargets },
			{ "GetHorde", &AHordeController::execGetHorde },
			{ "IsTarget", &AHordeController::execIsTarget },
			{ "OnSeePawn", &AHordeController::execOnSeePawn },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AHordeController_BeginAlert_Statics
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AHordeController_BeginAlert_Statics::NewProp_Targets_Inner = { "Targets", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHordeController_BeginAlert_Statics::NewProp_Targets_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AHordeController_BeginAlert_Statics::NewProp_Targets = { "Targets", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HordeController_eventBeginAlert_Parms, Targets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_AHordeController_BeginAlert_Statics::NewProp_Targets_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AHordeController_BeginAlert_Statics::NewProp_Targets_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHordeController_BeginAlert_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHordeController_BeginAlert_Statics::NewProp_Targets_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHordeController_BeginAlert_Statics::NewProp_Targets,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHordeController_BeginAlert_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HordeController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHordeController_BeginAlert_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHordeController, nullptr, "BeginAlert", nullptr, nullptr, sizeof(HordeController_eventBeginAlert_Parms), Z_Construct_UFunction_AHordeController_BeginAlert_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHordeController_BeginAlert_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHordeController_BeginAlert_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHordeController_BeginAlert_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHordeController_BeginAlert()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHordeController_BeginAlert_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHordeController_CheckTargetVisibility_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHordeController_CheckTargetVisibility_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HordeController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHordeController_CheckTargetVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHordeController, nullptr, "CheckTargetVisibility", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHordeController_CheckTargetVisibility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHordeController_CheckTargetVisibility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHordeController_CheckTargetVisibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHordeController_CheckTargetVisibility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHordeController_EndAlert_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHordeController_EndAlert_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HordeController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHordeController_EndAlert_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHordeController, nullptr, "EndAlert", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHordeController_EndAlert_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHordeController_EndAlert_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHordeController_EndAlert()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHordeController_EndAlert_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHordeController_GetCurrentTargets_Statics
	{
		struct HordeController_eventGetCurrentTargets_Parms
		{
			TArray<APawn*> ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AHordeController_GetCurrentTargets_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AHordeController_GetCurrentTargets_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HordeController_eventGetCurrentTargets_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHordeController_GetCurrentTargets_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHordeController_GetCurrentTargets_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHordeController_GetCurrentTargets_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHordeController_GetCurrentTargets_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HordeController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHordeController_GetCurrentTargets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHordeController, nullptr, "GetCurrentTargets", nullptr, nullptr, sizeof(HordeController_eventGetCurrentTargets_Parms), Z_Construct_UFunction_AHordeController_GetCurrentTargets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHordeController_GetCurrentTargets_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHordeController_GetCurrentTargets_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHordeController_GetCurrentTargets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHordeController_GetCurrentTargets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHordeController_GetCurrentTargets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHordeController_GetHorde_Statics
	{
		struct HordeController_eventGetHorde_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AHordeController_GetHorde_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HordeController_eventGetHorde_Parms, ReturnValue), Z_Construct_UClass_AHorde_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHordeController_GetHorde_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHordeController_GetHorde_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHordeController_GetHorde_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HordeController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHordeController_GetHorde_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHordeController, nullptr, "GetHorde", nullptr, nullptr, sizeof(HordeController_eventGetHorde_Parms), Z_Construct_UFunction_AHordeController_GetHorde_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHordeController_GetHorde_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHordeController_GetHorde_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHordeController_GetHorde_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHordeController_GetHorde()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHordeController_GetHorde_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHordeController_IsTarget_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AHordeController_IsTarget_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HordeController_eventIsTarget_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AHordeController_IsTarget_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HordeController_eventIsTarget_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AHordeController_IsTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HordeController_eventIsTarget_Parms), &Z_Construct_UFunction_AHordeController_IsTarget_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHordeController_IsTarget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHordeController_IsTarget_Statics::NewProp_Actor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHordeController_IsTarget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHordeController_IsTarget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HordeController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHordeController_IsTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHordeController, nullptr, "IsTarget", nullptr, nullptr, sizeof(HordeController_eventIsTarget_Parms), Z_Construct_UFunction_AHordeController_IsTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHordeController_IsTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHordeController_IsTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHordeController_IsTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHordeController_IsTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHordeController_IsTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHordeController_OnSeePawn_Statics
	{
		struct HordeController_eventOnSeePawn_Parms
		{
			APawn* SeenPawn;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SeenPawn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AHordeController_OnSeePawn_Statics::NewProp_SeenPawn = { "SeenPawn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HordeController_eventOnSeePawn_Parms, SeenPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHordeController_OnSeePawn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHordeController_OnSeePawn_Statics::NewProp_SeenPawn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHordeController_OnSeePawn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HordeController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHordeController_OnSeePawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHordeController, nullptr, "OnSeePawn", nullptr, nullptr, sizeof(HordeController_eventOnSeePawn_Parms), Z_Construct_UFunction_AHordeController_OnSeePawn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHordeController_OnSeePawn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHordeController_OnSeePawn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHordeController_OnSeePawn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHordeController_OnSeePawn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHordeController_OnSeePawn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AHordeController_NoRegister()
	{
		return AHordeController::StaticClass();
	}
	struct Z_Construct_UClass_AHordeController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RandomPathingRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RandomPathingRadius;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentTargets_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentTargets_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CurrentTargets;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHordeController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_AIHordes,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AHordeController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AHordeController_BeginAlert, "BeginAlert" }, // 217007610
		{ &Z_Construct_UFunction_AHordeController_CheckTargetVisibility, "CheckTargetVisibility" }, // 1292890899
		{ &Z_Construct_UFunction_AHordeController_EndAlert, "EndAlert" }, // 3916671379
		{ &Z_Construct_UFunction_AHordeController_GetCurrentTargets, "GetCurrentTargets" }, // 4262131529
		{ &Z_Construct_UFunction_AHordeController_GetHorde, "GetHorde" }, // 1820215806
		{ &Z_Construct_UFunction_AHordeController_IsTarget, "IsTarget" }, // 1274803034
		{ &Z_Construct_UFunction_AHordeController_OnSeePawn, "OnSeePawn" }, // 2698358848
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHordeController_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "HordeController.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/HordeController.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHordeController_Statics::NewProp_RandomPathingRadius_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HordeController" },
		{ "ModuleRelativePath", "Public/HordeController.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHordeController_Statics::NewProp_RandomPathingRadius = { "RandomPathingRadius", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHordeController, RandomPathingRadius), METADATA_PARAMS(Z_Construct_UClass_AHordeController_Statics::NewProp_RandomPathingRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHordeController_Statics::NewProp_RandomPathingRadius_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHordeController_Statics::NewProp_CurrentTargets_Inner = { "CurrentTargets", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHordeController_Statics::NewProp_CurrentTargets_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HordeController" },
		{ "ModuleRelativePath", "Public/HordeController.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AHordeController_Statics::NewProp_CurrentTargets = { "CurrentTargets", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHordeController, CurrentTargets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AHordeController_Statics::NewProp_CurrentTargets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHordeController_Statics::NewProp_CurrentTargets_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHordeController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHordeController_Statics::NewProp_RandomPathingRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHordeController_Statics::NewProp_CurrentTargets_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHordeController_Statics::NewProp_CurrentTargets,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHordeController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHordeController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AHordeController_Statics::ClassParams = {
		&AHordeController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AHordeController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AHordeController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AHordeController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AHordeController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AHordeController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AHordeController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AHordeController, 1336710354);
	template<> AIHORDES_API UClass* StaticClass<AHordeController>()
	{
		return AHordeController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AHordeController(Z_Construct_UClass_AHordeController, &AHordeController::StaticClass, TEXT("/Script/AIHordes"), TEXT("AHordeController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHordeController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
