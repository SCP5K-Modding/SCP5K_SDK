// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Electronics/Public/ElectronicLift.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeElectronicLift() {}
// Cross Module References
	ELECTRONICS_API UClass* Z_Construct_UClass_AElectronicLift_NoRegister();
	ELECTRONICS_API UClass* Z_Construct_UClass_AElectronicLift();
	ELECTRONICS_API UClass* Z_Construct_UClass_AElectronic();
	UPackage* Z_Construct_UPackage__Script_Electronics();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ELECTRONICS_API UScriptStruct* Z_Construct_UScriptStruct_FLiftFloor();
	ELECTRONICS_API UScriptStruct* Z_Construct_UScriptStruct_FLiftState();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	FMODSTUDIO_API UClass* Z_Construct_UClass_UFMODEvent_NoRegister();
	FMODSTUDIO_API UClass* Z_Construct_UClass_UFMODAudioComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AElectronicLift::execGetDesiredTransform)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=P_THIS->GetDesiredTransform(Z_Param_InTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AElectronicLift::execGoToFloor)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Floor);
		P_GET_OBJECT(AActor,Z_Param_Caller);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GoToFloor(Z_Param_Floor,Z_Param_Caller);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AElectronicLift::execLiftClosestFloorUpdated)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Floor);
		P_GET_STRUCT(FTransform,Z_Param_Transform);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LiftClosestFloorUpdated_Implementation(Z_Param_Floor,Z_Param_Transform);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AElectronicLift::execLiftDoorUpdatedValue)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LiftDoorUpdatedValue_Implementation(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AElectronicLift::execLiftPassedFloor)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Floor);
		P_GET_STRUCT(FTransform,Z_Param_Transform);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LiftPassedFloor_Implementation(Z_Param_Floor,Z_Param_Transform);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AElectronicLift::execLiftReachedEnd)
	{
		P_GET_STRUCT(FTransform,Z_Param_Transform);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LiftReachedEnd_Implementation(Z_Param_Transform);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AElectronicLift::execLiftReachedFloor)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Floor);
		P_GET_STRUCT(FTransform,Z_Param_Transform);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LiftReachedFloor_Implementation(Z_Param_Floor,Z_Param_Transform);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AElectronicLift::execLiftReachedStart)
	{
		P_GET_STRUCT(FTransform,Z_Param_Transform);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LiftReachedStart_Implementation(Z_Param_Transform);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AElectronicLift::execLiftStartedMoving)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_CurrentTime);
		P_GET_PROPERTY(FIntProperty,Z_Param_Floor);
		P_GET_STRUCT(FTransform,Z_Param_Transform);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LiftStartedMoving_Implementation(Z_Param_CurrentTime,Z_Param_Floor,Z_Param_Transform);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AElectronicLift::execLiftUpdatedPosition)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_CurrentTime);
		P_GET_STRUCT(FTransform,Z_Param_Transform);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LiftUpdatedPosition_Implementation(Z_Param_CurrentTime,Z_Param_Transform);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AElectronicLift::execOnRep_bDoorOpen)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_bDoorOpen();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AElectronicLift::execOnRep_TargetFloor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_TargetFloor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AElectronicLift::execStartMoving)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_CurrentTime);
		P_GET_PROPERTY(FIntProperty,Z_Param_Floor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartMoving(Z_Param_CurrentTime,Z_Param_Floor);
		P_NATIVE_END;
	}
	static FName NAME_AElectronicLift_LiftClosestFloorUpdated = FName(TEXT("LiftClosestFloorUpdated"));
	void AElectronicLift::LiftClosestFloorUpdated(int32 Floor, FTransform Transform)
	{
		ElectronicLift_eventLiftClosestFloorUpdated_Parms Parms;
		Parms.Floor=Floor;
		Parms.Transform=Transform;
		ProcessEvent(FindFunctionChecked(NAME_AElectronicLift_LiftClosestFloorUpdated),&Parms);
	}
	static FName NAME_AElectronicLift_LiftDoorUpdatedValue = FName(TEXT("LiftDoorUpdatedValue"));
	void AElectronicLift::LiftDoorUpdatedValue(float Value)
	{
		ElectronicLift_eventLiftDoorUpdatedValue_Parms Parms;
		Parms.Value=Value;
		ProcessEvent(FindFunctionChecked(NAME_AElectronicLift_LiftDoorUpdatedValue),&Parms);
	}
	static FName NAME_AElectronicLift_LiftPassedFloor = FName(TEXT("LiftPassedFloor"));
	void AElectronicLift::LiftPassedFloor(int32 Floor, FTransform Transform)
	{
		ElectronicLift_eventLiftPassedFloor_Parms Parms;
		Parms.Floor=Floor;
		Parms.Transform=Transform;
		ProcessEvent(FindFunctionChecked(NAME_AElectronicLift_LiftPassedFloor),&Parms);
	}
	static FName NAME_AElectronicLift_LiftReachedEnd = FName(TEXT("LiftReachedEnd"));
	void AElectronicLift::LiftReachedEnd(FTransform Transform)
	{
		ElectronicLift_eventLiftReachedEnd_Parms Parms;
		Parms.Transform=Transform;
		ProcessEvent(FindFunctionChecked(NAME_AElectronicLift_LiftReachedEnd),&Parms);
	}
	static FName NAME_AElectronicLift_LiftReachedFloor = FName(TEXT("LiftReachedFloor"));
	void AElectronicLift::LiftReachedFloor(int32 Floor, FTransform Transform)
	{
		ElectronicLift_eventLiftReachedFloor_Parms Parms;
		Parms.Floor=Floor;
		Parms.Transform=Transform;
		ProcessEvent(FindFunctionChecked(NAME_AElectronicLift_LiftReachedFloor),&Parms);
	}
	static FName NAME_AElectronicLift_LiftReachedStart = FName(TEXT("LiftReachedStart"));
	void AElectronicLift::LiftReachedStart(FTransform Transform)
	{
		ElectronicLift_eventLiftReachedStart_Parms Parms;
		Parms.Transform=Transform;
		ProcessEvent(FindFunctionChecked(NAME_AElectronicLift_LiftReachedStart),&Parms);
	}
	static FName NAME_AElectronicLift_LiftStartedMoving = FName(TEXT("LiftStartedMoving"));
	void AElectronicLift::LiftStartedMoving(float CurrentTime, int32 Floor, FTransform Transform)
	{
		ElectronicLift_eventLiftStartedMoving_Parms Parms;
		Parms.CurrentTime=CurrentTime;
		Parms.Floor=Floor;
		Parms.Transform=Transform;
		ProcessEvent(FindFunctionChecked(NAME_AElectronicLift_LiftStartedMoving),&Parms);
	}
	static FName NAME_AElectronicLift_LiftUpdatedPosition = FName(TEXT("LiftUpdatedPosition"));
	void AElectronicLift::LiftUpdatedPosition(float CurrentTime, FTransform Transform)
	{
		ElectronicLift_eventLiftUpdatedPosition_Parms Parms;
		Parms.CurrentTime=CurrentTime;
		Parms.Transform=Transform;
		ProcessEvent(FindFunctionChecked(NAME_AElectronicLift_LiftUpdatedPosition),&Parms);
	}
	void AElectronicLift::StaticRegisterNativesAElectronicLift()
	{
		UClass* Class = AElectronicLift::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDesiredTransform", &AElectronicLift::execGetDesiredTransform },
			{ "GoToFloor", &AElectronicLift::execGoToFloor },
			{ "LiftClosestFloorUpdated", &AElectronicLift::execLiftClosestFloorUpdated },
			{ "LiftDoorUpdatedValue", &AElectronicLift::execLiftDoorUpdatedValue },
			{ "LiftPassedFloor", &AElectronicLift::execLiftPassedFloor },
			{ "LiftReachedEnd", &AElectronicLift::execLiftReachedEnd },
			{ "LiftReachedFloor", &AElectronicLift::execLiftReachedFloor },
			{ "LiftReachedStart", &AElectronicLift::execLiftReachedStart },
			{ "LiftStartedMoving", &AElectronicLift::execLiftStartedMoving },
			{ "LiftUpdatedPosition", &AElectronicLift::execLiftUpdatedPosition },
			{ "OnRep_bDoorOpen", &AElectronicLift::execOnRep_bDoorOpen },
			{ "OnRep_TargetFloor", &AElectronicLift::execOnRep_TargetFloor },
			{ "StartMoving", &AElectronicLift::execStartMoving },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AElectronicLift_GetDesiredTransform_Statics
	{
		struct ElectronicLift_eventGetDesiredTransform_Parms
		{
			float InTime;
			FTransform ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InTime;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AElectronicLift_GetDesiredTransform_Statics::NewProp_InTime = { "InTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElectronicLift_eventGetDesiredTransform_Parms, InTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AElectronicLift_GetDesiredTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElectronicLift_eventGetDesiredTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AElectronicLift_GetDesiredTransform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AElectronicLift_GetDesiredTransform_Statics::NewProp_InTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AElectronicLift_GetDesiredTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AElectronicLift_GetDesiredTransform_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ElectronicLift.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AElectronicLift_GetDesiredTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AElectronicLift, nullptr, "GetDesiredTransform", nullptr, nullptr, sizeof(ElectronicLift_eventGetDesiredTransform_Parms), Z_Construct_UFunction_AElectronicLift_GetDesiredTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AElectronicLift_GetDesiredTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54880401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AElectronicLift_GetDesiredTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AElectronicLift_GetDesiredTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AElectronicLift_GetDesiredTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AElectronicLift_GetDesiredTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AElectronicLift_GoToFloor_Statics
	{
		struct ElectronicLift_eventGoToFloor_Parms
		{
			int32 Floor;
			AActor* Caller;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Floor;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Caller;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AElectronicLift_GoToFloor_Statics::NewProp_Floor = { "Floor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElectronicLift_eventGoToFloor_Parms, Floor), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AElectronicLift_GoToFloor_Statics::NewProp_Caller = { "Caller", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElectronicLift_eventGoToFloor_Parms, Caller), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AElectronicLift_GoToFloor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AElectronicLift_GoToFloor_Statics::NewProp_Floor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AElectronicLift_GoToFloor_Statics::NewProp_Caller,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AElectronicLift_GoToFloor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ElectronicLift.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AElectronicLift_GoToFloor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AElectronicLift, nullptr, "GoToFloor", nullptr, nullptr, sizeof(ElectronicLift_eventGoToFloor_Parms), Z_Construct_UFunction_AElectronicLift_GoToFloor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AElectronicLift_GoToFloor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AElectronicLift_GoToFloor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AElectronicLift_GoToFloor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AElectronicLift_GoToFloor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AElectronicLift_GoToFloor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AElectronicLift_LiftClosestFloorUpdated_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Floor;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Transform;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AElectronicLift_LiftClosestFloorUpdated_Statics::NewProp_Floor = { "Floor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElectronicLift_eventLiftClosestFloorUpdated_Parms, Floor), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AElectronicLift_LiftClosestFloorUpdated_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElectronicLift_eventLiftClosestFloorUpdated_Parms, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AElectronicLift_LiftClosestFloorUpdated_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AElectronicLift_LiftClosestFloorUpdated_Statics::NewProp_Floor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AElectronicLift_LiftClosestFloorUpdated_Statics::NewProp_Transform,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AElectronicLift_LiftClosestFloorUpdated_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ElectronicLift.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AElectronicLift_LiftClosestFloorUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AElectronicLift, nullptr, "LiftClosestFloorUpdated", nullptr, nullptr, sizeof(ElectronicLift_eventLiftClosestFloorUpdated_Parms), Z_Construct_UFunction_AElectronicLift_LiftClosestFloorUpdated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AElectronicLift_LiftClosestFloorUpdated_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C880C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AElectronicLift_LiftClosestFloorUpdated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AElectronicLift_LiftClosestFloorUpdated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AElectronicLift_LiftClosestFloorUpdated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AElectronicLift_LiftClosestFloorUpdated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AElectronicLift_LiftDoorUpdatedValue_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AElectronicLift_LiftDoorUpdatedValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElectronicLift_eventLiftDoorUpdatedValue_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AElectronicLift_LiftDoorUpdatedValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AElectronicLift_LiftDoorUpdatedValue_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AElectronicLift_LiftDoorUpdatedValue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ElectronicLift.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AElectronicLift_LiftDoorUpdatedValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AElectronicLift, nullptr, "LiftDoorUpdatedValue", nullptr, nullptr, sizeof(ElectronicLift_eventLiftDoorUpdatedValue_Parms), Z_Construct_UFunction_AElectronicLift_LiftDoorUpdatedValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AElectronicLift_LiftDoorUpdatedValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AElectronicLift_LiftDoorUpdatedValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AElectronicLift_LiftDoorUpdatedValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AElectronicLift_LiftDoorUpdatedValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AElectronicLift_LiftDoorUpdatedValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AElectronicLift_LiftPassedFloor_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Floor;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Transform;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AElectronicLift_LiftPassedFloor_Statics::NewProp_Floor = { "Floor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElectronicLift_eventLiftPassedFloor_Parms, Floor), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AElectronicLift_LiftPassedFloor_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElectronicLift_eventLiftPassedFloor_Parms, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AElectronicLift_LiftPassedFloor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AElectronicLift_LiftPassedFloor_Statics::NewProp_Floor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AElectronicLift_LiftPassedFloor_Statics::NewProp_Transform,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AElectronicLift_LiftPassedFloor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ElectronicLift.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AElectronicLift_LiftPassedFloor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AElectronicLift, nullptr, "LiftPassedFloor", nullptr, nullptr, sizeof(ElectronicLift_eventLiftPassedFloor_Parms), Z_Construct_UFunction_AElectronicLift_LiftPassedFloor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AElectronicLift_LiftPassedFloor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C880C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AElectronicLift_LiftPassedFloor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AElectronicLift_LiftPassedFloor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AElectronicLift_LiftPassedFloor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AElectronicLift_LiftPassedFloor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AElectronicLift_LiftReachedEnd_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Transform;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AElectronicLift_LiftReachedEnd_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElectronicLift_eventLiftReachedEnd_Parms, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AElectronicLift_LiftReachedEnd_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AElectronicLift_LiftReachedEnd_Statics::NewProp_Transform,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AElectronicLift_LiftReachedEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ElectronicLift.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AElectronicLift_LiftReachedEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AElectronicLift, nullptr, "LiftReachedEnd", nullptr, nullptr, sizeof(ElectronicLift_eventLiftReachedEnd_Parms), Z_Construct_UFunction_AElectronicLift_LiftReachedEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AElectronicLift_LiftReachedEnd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C880C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AElectronicLift_LiftReachedEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AElectronicLift_LiftReachedEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AElectronicLift_LiftReachedEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AElectronicLift_LiftReachedEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AElectronicLift_LiftReachedFloor_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Floor;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Transform;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AElectronicLift_LiftReachedFloor_Statics::NewProp_Floor = { "Floor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElectronicLift_eventLiftReachedFloor_Parms, Floor), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AElectronicLift_LiftReachedFloor_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElectronicLift_eventLiftReachedFloor_Parms, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AElectronicLift_LiftReachedFloor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AElectronicLift_LiftReachedFloor_Statics::NewProp_Floor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AElectronicLift_LiftReachedFloor_Statics::NewProp_Transform,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AElectronicLift_LiftReachedFloor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ElectronicLift.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AElectronicLift_LiftReachedFloor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AElectronicLift, nullptr, "LiftReachedFloor", nullptr, nullptr, sizeof(ElectronicLift_eventLiftReachedFloor_Parms), Z_Construct_UFunction_AElectronicLift_LiftReachedFloor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AElectronicLift_LiftReachedFloor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C880C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AElectronicLift_LiftReachedFloor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AElectronicLift_LiftReachedFloor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AElectronicLift_LiftReachedFloor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AElectronicLift_LiftReachedFloor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AElectronicLift_LiftReachedStart_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Transform;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AElectronicLift_LiftReachedStart_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElectronicLift_eventLiftReachedStart_Parms, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AElectronicLift_LiftReachedStart_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AElectronicLift_LiftReachedStart_Statics::NewProp_Transform,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AElectronicLift_LiftReachedStart_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ElectronicLift.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AElectronicLift_LiftReachedStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AElectronicLift, nullptr, "LiftReachedStart", nullptr, nullptr, sizeof(ElectronicLift_eventLiftReachedStart_Parms), Z_Construct_UFunction_AElectronicLift_LiftReachedStart_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AElectronicLift_LiftReachedStart_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C880C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AElectronicLift_LiftReachedStart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AElectronicLift_LiftReachedStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AElectronicLift_LiftReachedStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AElectronicLift_LiftReachedStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AElectronicLift_LiftStartedMoving_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentTime;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Floor;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Transform;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AElectronicLift_LiftStartedMoving_Statics::NewProp_CurrentTime = { "CurrentTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElectronicLift_eventLiftStartedMoving_Parms, CurrentTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AElectronicLift_LiftStartedMoving_Statics::NewProp_Floor = { "Floor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElectronicLift_eventLiftStartedMoving_Parms, Floor), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AElectronicLift_LiftStartedMoving_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElectronicLift_eventLiftStartedMoving_Parms, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AElectronicLift_LiftStartedMoving_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AElectronicLift_LiftStartedMoving_Statics::NewProp_CurrentTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AElectronicLift_LiftStartedMoving_Statics::NewProp_Floor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AElectronicLift_LiftStartedMoving_Statics::NewProp_Transform,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AElectronicLift_LiftStartedMoving_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ElectronicLift.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AElectronicLift_LiftStartedMoving_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AElectronicLift, nullptr, "LiftStartedMoving", nullptr, nullptr, sizeof(ElectronicLift_eventLiftStartedMoving_Parms), Z_Construct_UFunction_AElectronicLift_LiftStartedMoving_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AElectronicLift_LiftStartedMoving_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C880C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AElectronicLift_LiftStartedMoving_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AElectronicLift_LiftStartedMoving_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AElectronicLift_LiftStartedMoving()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AElectronicLift_LiftStartedMoving_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AElectronicLift_LiftUpdatedPosition_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentTime;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Transform;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AElectronicLift_LiftUpdatedPosition_Statics::NewProp_CurrentTime = { "CurrentTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElectronicLift_eventLiftUpdatedPosition_Parms, CurrentTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AElectronicLift_LiftUpdatedPosition_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElectronicLift_eventLiftUpdatedPosition_Parms, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AElectronicLift_LiftUpdatedPosition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AElectronicLift_LiftUpdatedPosition_Statics::NewProp_CurrentTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AElectronicLift_LiftUpdatedPosition_Statics::NewProp_Transform,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AElectronicLift_LiftUpdatedPosition_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ElectronicLift.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AElectronicLift_LiftUpdatedPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AElectronicLift, nullptr, "LiftUpdatedPosition", nullptr, nullptr, sizeof(ElectronicLift_eventLiftUpdatedPosition_Parms), Z_Construct_UFunction_AElectronicLift_LiftUpdatedPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AElectronicLift_LiftUpdatedPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C880C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AElectronicLift_LiftUpdatedPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AElectronicLift_LiftUpdatedPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AElectronicLift_LiftUpdatedPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AElectronicLift_LiftUpdatedPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AElectronicLift_OnRep_bDoorOpen_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AElectronicLift_OnRep_bDoorOpen_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ElectronicLift.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AElectronicLift_OnRep_bDoorOpen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AElectronicLift, nullptr, "OnRep_bDoorOpen", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AElectronicLift_OnRep_bDoorOpen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AElectronicLift_OnRep_bDoorOpen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AElectronicLift_OnRep_bDoorOpen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AElectronicLift_OnRep_bDoorOpen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AElectronicLift_OnRep_TargetFloor_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AElectronicLift_OnRep_TargetFloor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ElectronicLift.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AElectronicLift_OnRep_TargetFloor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AElectronicLift, nullptr, "OnRep_TargetFloor", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AElectronicLift_OnRep_TargetFloor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AElectronicLift_OnRep_TargetFloor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AElectronicLift_OnRep_TargetFloor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AElectronicLift_OnRep_TargetFloor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AElectronicLift_StartMoving_Statics
	{
		struct ElectronicLift_eventStartMoving_Parms
		{
			float CurrentTime;
			int32 Floor;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentTime;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Floor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AElectronicLift_StartMoving_Statics::NewProp_CurrentTime = { "CurrentTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElectronicLift_eventStartMoving_Parms, CurrentTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AElectronicLift_StartMoving_Statics::NewProp_Floor = { "Floor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElectronicLift_eventStartMoving_Parms, Floor), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AElectronicLift_StartMoving_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AElectronicLift_StartMoving_Statics::NewProp_CurrentTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AElectronicLift_StartMoving_Statics::NewProp_Floor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AElectronicLift_StartMoving_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ElectronicLift.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AElectronicLift_StartMoving_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AElectronicLift, nullptr, "StartMoving", nullptr, nullptr, sizeof(ElectronicLift_eventStartMoving_Parms), Z_Construct_UFunction_AElectronicLift_StartMoving_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AElectronicLift_StartMoving_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AElectronicLift_StartMoving_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AElectronicLift_StartMoving_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AElectronicLift_StartMoving()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AElectronicLift_StartMoving_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AElectronicLift_NoRegister()
	{
		return AElectronicLift::StaticClass();
	}
	struct Z_Construct_UClass_AElectronicLift_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Time;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SmoothTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SmoothTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReplicatedTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReplicatedTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseFloors_MetaData[];
#endif
		static void NewProp_bUseFloors_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseFloors;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StartPosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FinalPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FinalPosition;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Floors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Floors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Floors;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviousFloor_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PreviousFloor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NextFloor_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NextFloor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetFloor_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TargetFloor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClosestFloor_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ClosestFloor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReplicatedPreviousFloor_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReplicatedPreviousFloor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReplicatedState_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReplicatedState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseElevatorDoors_MetaData[];
#endif
		static void NewProp_bUseElevatorDoors_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseElevatorDoors;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ElevatorDoorTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ElevatorDoorTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentDoorValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentDoorValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDoorOpen_MetaData[];
#endif
		static void NewProp_bDoorOpen_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDoorOpen;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxReplicatedTimeDifference_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxReplicatedTimeDifference;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsMoving_MetaData[];
#endif
		static void NewProp_bIsMoving_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsMoving;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LiftComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LiftComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MovementTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseConstantMovementSpeed_MetaData[];
#endif
		static void NewProp_bUseConstantMovementSpeed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseConstantMovementSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MovementSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LiftStoppedSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LiftStoppedSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LiftMusic_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LiftMusic;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MusicComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MusicComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AElectronicLift_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AElectronic,
		(UObject* (*)())Z_Construct_UPackage__Script_Electronics,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AElectronicLift_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AElectronicLift_GetDesiredTransform, "GetDesiredTransform" }, // 1603693896
		{ &Z_Construct_UFunction_AElectronicLift_GoToFloor, "GoToFloor" }, // 3677432812
		{ &Z_Construct_UFunction_AElectronicLift_LiftClosestFloorUpdated, "LiftClosestFloorUpdated" }, // 248899300
		{ &Z_Construct_UFunction_AElectronicLift_LiftDoorUpdatedValue, "LiftDoorUpdatedValue" }, // 2771656775
		{ &Z_Construct_UFunction_AElectronicLift_LiftPassedFloor, "LiftPassedFloor" }, // 3826768873
		{ &Z_Construct_UFunction_AElectronicLift_LiftReachedEnd, "LiftReachedEnd" }, // 650487682
		{ &Z_Construct_UFunction_AElectronicLift_LiftReachedFloor, "LiftReachedFloor" }, // 4241540243
		{ &Z_Construct_UFunction_AElectronicLift_LiftReachedStart, "LiftReachedStart" }, // 1503799217
		{ &Z_Construct_UFunction_AElectronicLift_LiftStartedMoving, "LiftStartedMoving" }, // 4270912511
		{ &Z_Construct_UFunction_AElectronicLift_LiftUpdatedPosition, "LiftUpdatedPosition" }, // 1289757833
		{ &Z_Construct_UFunction_AElectronicLift_OnRep_bDoorOpen, "OnRep_bDoorOpen" }, // 80762967
		{ &Z_Construct_UFunction_AElectronicLift_OnRep_TargetFloor, "OnRep_TargetFloor" }, // 1175541998
		{ &Z_Construct_UFunction_AElectronicLift_StartMoving, "StartMoving" }, // 2566382776
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AElectronicLift_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ElectronicLift.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ElectronicLift.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AElectronicLift_Statics::NewProp_Time_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ElectronicLift" },
		{ "ModuleRelativePath", "Public/ElectronicLift.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AElectronicLift_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AElectronicLift, Time), METADATA_PARAMS(Z_Construct_UClass_AElectronicLift_Statics::NewProp_Time_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AElectronicLift_Statics::NewProp_Time_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AElectronicLift_Statics::NewProp_SmoothTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ElectronicLift" },
		{ "ModuleRelativePath", "Public/ElectronicLift.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AElectronicLift_Statics::NewProp_SmoothTime = { "SmoothTime", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AElectronicLift, SmoothTime), METADATA_PARAMS(Z_Construct_UClass_AElectronicLift_Statics::NewProp_SmoothTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AElectronicLift_Statics::NewProp_SmoothTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AElectronicLift_Statics::NewProp_ReplicatedTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ElectronicLift" },
		{ "ModuleRelativePath", "Public/ElectronicLift.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AElectronicLift_Statics::NewProp_ReplicatedTime = { "ReplicatedTime", nullptr, (EPropertyFlags)0x0010040000000025, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AElectronicLift, ReplicatedTime), METADATA_PARAMS(Z_Construct_UClass_AElectronicLift_Statics::NewProp_ReplicatedTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AElectronicLift_Statics::NewProp_ReplicatedTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AElectronicLift_Statics::NewProp_bUseFloors_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ElectronicLift" },
		{ "ModuleRelativePath", "Public/ElectronicLift.h" },
	};
#endif
	void Z_Construct_UClass_AElectronicLift_Statics::NewProp_bUseFloors_SetBit(void* Obj)
	{
		((AElectronicLift*)Obj)->bUseFloors = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AElectronicLift_Statics::NewProp_bUseFloors = { "bUseFloors", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AElectronicLift), &Z_Construct_UClass_AElectronicLift_Statics::NewProp_bUseFloors_SetBit, METADATA_PARAMS(Z_Construct_UClass_AElectronicLift_Statics::NewProp_bUseFloors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AElectronicLift_Statics::NewProp_bUseFloors_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AElectronicLift_Statics::NewProp_StartPosition_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ElectronicLift" },
		{ "ModuleRelativePath", "Public/ElectronicLift.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AElectronicLift_Statics::NewProp_StartPosition = { "StartPosition", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AElectronicLift, StartPosition), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_AElectronicLift_Statics::NewProp_StartPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AElectronicLift_Statics::NewProp_StartPosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AElectronicLift_Statics::NewProp_FinalPosition_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ElectronicLift" },
		{ "ModuleRelativePath", "Public/ElectronicLift.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AElectronicLift_Statics::NewProp_FinalPosition = { "FinalPosition", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AElectronicLift, FinalPosition), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_AElectronicLift_Statics::NewProp_FinalPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AElectronicLift_Statics::NewProp_FinalPosition_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AElectronicLift_Statics::NewProp_Floors_Inner = { "Floors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLiftFloor, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AElectronicLift_Statics::NewProp_Floors_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ElectronicLift" },
		{ "ModuleRelativePath", "Public/ElectronicLift.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AElectronicLift_Statics::NewProp_Floors = { "Floors", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AElectronicLift, Floors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AElectronicLift_Statics::NewProp_Floors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AElectronicLift_Statics::NewProp_Floors_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AElectronicLift_Statics::NewProp_PreviousFloor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ElectronicLift" },
		{ "ModuleRelativePath", "Public/ElectronicLift.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AElectronicLift_Statics::NewProp_PreviousFloor = { "PreviousFloor", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AElectronicLift, PreviousFloor), METADATA_PARAMS(Z_Construct_UClass_AElectronicLift_Statics::NewProp_PreviousFloor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AElectronicLift_Statics::NewProp_PreviousFloor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AElectronicLift_Statics::NewProp_NextFloor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ElectronicLift" },
		{ "ModuleRelativePath", "Public/ElectronicLift.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AElectronicLift_Statics::NewProp_NextFloor = { "NextFloor", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AElectronicLift, NextFloor), METADATA_PARAMS(Z_Construct_UClass_AElectronicLift_Statics::NewProp_NextFloor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AElectronicLift_Statics::NewProp_NextFloor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AElectronicLift_Statics::NewProp_TargetFloor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ElectronicLift" },
		{ "ModuleRelativePath", "Public/ElectronicLift.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AElectronicLift_Statics::NewProp_TargetFloor = { "TargetFloor", "OnRep_TargetFloor", (EPropertyFlags)0x0010000100000025, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AElectronicLift, TargetFloor), METADATA_PARAMS(Z_Construct_UClass_AElectronicLift_Statics::NewProp_TargetFloor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AElectronicLift_Statics::NewProp_TargetFloor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AElectronicLift_Statics::NewProp_ClosestFloor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ElectronicLift" },
		{ "ModuleRelativePath", "Public/ElectronicLift.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AElectronicLift_Statics::NewProp_ClosestFloor = { "ClosestFloor", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AElectronicLift, ClosestFloor), METADATA_PARAMS(Z_Construct_UClass_AElectronicLift_Statics::NewProp_ClosestFloor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AElectronicLift_Statics::NewProp_ClosestFloor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AElectronicLift_Statics::NewProp_ReplicatedPreviousFloor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ElectronicLift" },
		{ "ModuleRelativePath", "Public/ElectronicLift.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AElectronicLift_Statics::NewProp_ReplicatedPreviousFloor = { "ReplicatedPreviousFloor", nullptr, (EPropertyFlags)0x0010040000000025, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AElectronicLift, ReplicatedPreviousFloor), METADATA_PARAMS(Z_Construct_UClass_AElectronicLift_Statics::NewProp_ReplicatedPreviousFloor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AElectronicLift_Statics::NewProp_ReplicatedPreviousFloor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AElectronicLift_Statics::NewProp_ReplicatedState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ElectronicLift" },
		{ "ModuleRelativePath", "Public/ElectronicLift.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AElectronicLift_Statics::NewProp_ReplicatedState = { "ReplicatedState", nullptr, (EPropertyFlags)0x0010040000000025, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AElectronicLift, ReplicatedState), Z_Construct_UScriptStruct_FLiftState, METADATA_PARAMS(Z_Construct_UClass_AElectronicLift_Statics::NewProp_ReplicatedState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AElectronicLift_Statics::NewProp_ReplicatedState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AElectronicLift_Statics::NewProp_bUseElevatorDoors_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ElectronicLift" },
		{ "ModuleRelativePath", "Public/ElectronicLift.h" },
	};
#endif
	void Z_Construct_UClass_AElectronicLift_Statics::NewProp_bUseElevatorDoors_SetBit(void* Obj)
	{
		((AElectronicLift*)Obj)->bUseElevatorDoors = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AElectronicLift_Statics::NewProp_bUseElevatorDoors = { "bUseElevatorDoors", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AElectronicLift), &Z_Construct_UClass_AElectronicLift_Statics::NewProp_bUseElevatorDoors_SetBit, METADATA_PARAMS(Z_Construct_UClass_AElectronicLift_Statics::NewProp_bUseElevatorDoors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AElectronicLift_Statics::NewProp_bUseElevatorDoors_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AElectronicLift_Statics::NewProp_ElevatorDoorTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ElectronicLift" },
		{ "ModuleRelativePath", "Public/ElectronicLift.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AElectronicLift_Statics::NewProp_ElevatorDoorTime = { "ElevatorDoorTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AElectronicLift, ElevatorDoorTime), METADATA_PARAMS(Z_Construct_UClass_AElectronicLift_Statics::NewProp_ElevatorDoorTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AElectronicLift_Statics::NewProp_ElevatorDoorTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AElectronicLift_Statics::NewProp_CurrentDoorValue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ElectronicLift" },
		{ "ModuleRelativePath", "Public/ElectronicLift.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AElectronicLift_Statics::NewProp_CurrentDoorValue = { "CurrentDoorValue", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AElectronicLift, CurrentDoorValue), METADATA_PARAMS(Z_Construct_UClass_AElectronicLift_Statics::NewProp_CurrentDoorValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AElectronicLift_Statics::NewProp_CurrentDoorValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AElectronicLift_Statics::NewProp_bDoorOpen_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ElectronicLift" },
		{ "ModuleRelativePath", "Public/ElectronicLift.h" },
	};
#endif
	void Z_Construct_UClass_AElectronicLift_Statics::NewProp_bDoorOpen_SetBit(void* Obj)
	{
		((AElectronicLift*)Obj)->bDoorOpen = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AElectronicLift_Statics::NewProp_bDoorOpen = { "bDoorOpen", "OnRep_bDoorOpen", (EPropertyFlags)0x0010000100000025, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AElectronicLift), &Z_Construct_UClass_AElectronicLift_Statics::NewProp_bDoorOpen_SetBit, METADATA_PARAMS(Z_Construct_UClass_AElectronicLift_Statics::NewProp_bDoorOpen_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AElectronicLift_Statics::NewProp_bDoorOpen_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AElectronicLift_Statics::NewProp_MaxReplicatedTimeDifference_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ElectronicLift" },
		{ "ModuleRelativePath", "Public/ElectronicLift.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AElectronicLift_Statics::NewProp_MaxReplicatedTimeDifference = { "MaxReplicatedTimeDifference", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AElectronicLift, MaxReplicatedTimeDifference), METADATA_PARAMS(Z_Construct_UClass_AElectronicLift_Statics::NewProp_MaxReplicatedTimeDifference_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AElectronicLift_Statics::NewProp_MaxReplicatedTimeDifference_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AElectronicLift_Statics::NewProp_bIsMoving_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ElectronicLift" },
		{ "ModuleRelativePath", "Public/ElectronicLift.h" },
	};
#endif
	void Z_Construct_UClass_AElectronicLift_Statics::NewProp_bIsMoving_SetBit(void* Obj)
	{
		((AElectronicLift*)Obj)->bIsMoving = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AElectronicLift_Statics::NewProp_bIsMoving = { "bIsMoving", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AElectronicLift), &Z_Construct_UClass_AElectronicLift_Statics::NewProp_bIsMoving_SetBit, METADATA_PARAMS(Z_Construct_UClass_AElectronicLift_Statics::NewProp_bIsMoving_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AElectronicLift_Statics::NewProp_bIsMoving_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AElectronicLift_Statics::NewProp_LiftComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ElectronicLift" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ElectronicLift.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AElectronicLift_Statics::NewProp_LiftComponent = { "LiftComponent", nullptr, (EPropertyFlags)0x001200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AElectronicLift, LiftComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AElectronicLift_Statics::NewProp_LiftComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AElectronicLift_Statics::NewProp_LiftComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AElectronicLift_Statics::NewProp_MovementTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ElectronicLift" },
		{ "ModuleRelativePath", "Public/ElectronicLift.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AElectronicLift_Statics::NewProp_MovementTime = { "MovementTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AElectronicLift, MovementTime), METADATA_PARAMS(Z_Construct_UClass_AElectronicLift_Statics::NewProp_MovementTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AElectronicLift_Statics::NewProp_MovementTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AElectronicLift_Statics::NewProp_bUseConstantMovementSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ElectronicLift" },
		{ "ModuleRelativePath", "Public/ElectronicLift.h" },
	};
#endif
	void Z_Construct_UClass_AElectronicLift_Statics::NewProp_bUseConstantMovementSpeed_SetBit(void* Obj)
	{
		((AElectronicLift*)Obj)->bUseConstantMovementSpeed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AElectronicLift_Statics::NewProp_bUseConstantMovementSpeed = { "bUseConstantMovementSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AElectronicLift), &Z_Construct_UClass_AElectronicLift_Statics::NewProp_bUseConstantMovementSpeed_SetBit, METADATA_PARAMS(Z_Construct_UClass_AElectronicLift_Statics::NewProp_bUseConstantMovementSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AElectronicLift_Statics::NewProp_bUseConstantMovementSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AElectronicLift_Statics::NewProp_MovementSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ElectronicLift" },
		{ "ModuleRelativePath", "Public/ElectronicLift.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AElectronicLift_Statics::NewProp_MovementSpeed = { "MovementSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AElectronicLift, MovementSpeed), METADATA_PARAMS(Z_Construct_UClass_AElectronicLift_Statics::NewProp_MovementSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AElectronicLift_Statics::NewProp_MovementSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AElectronicLift_Statics::NewProp_LiftStoppedSound_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ElectronicLift" },
		{ "ModuleRelativePath", "Public/ElectronicLift.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AElectronicLift_Statics::NewProp_LiftStoppedSound = { "LiftStoppedSound", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AElectronicLift, LiftStoppedSound), Z_Construct_UClass_UFMODEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AElectronicLift_Statics::NewProp_LiftStoppedSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AElectronicLift_Statics::NewProp_LiftStoppedSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AElectronicLift_Statics::NewProp_LiftMusic_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ElectronicLift" },
		{ "ModuleRelativePath", "Public/ElectronicLift.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AElectronicLift_Statics::NewProp_LiftMusic = { "LiftMusic", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AElectronicLift, LiftMusic), Z_Construct_UClass_UFMODEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AElectronicLift_Statics::NewProp_LiftMusic_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AElectronicLift_Statics::NewProp_LiftMusic_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AElectronicLift_Statics::NewProp_MusicComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ElectronicLift" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ElectronicLift.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AElectronicLift_Statics::NewProp_MusicComponent = { "MusicComponent", nullptr, (EPropertyFlags)0x001200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AElectronicLift, MusicComponent), Z_Construct_UClass_UFMODAudioComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AElectronicLift_Statics::NewProp_MusicComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AElectronicLift_Statics::NewProp_MusicComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AElectronicLift_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AElectronicLift_Statics::NewProp_Time,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AElectronicLift_Statics::NewProp_SmoothTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AElectronicLift_Statics::NewProp_ReplicatedTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AElectronicLift_Statics::NewProp_bUseFloors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AElectronicLift_Statics::NewProp_StartPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AElectronicLift_Statics::NewProp_FinalPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AElectronicLift_Statics::NewProp_Floors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AElectronicLift_Statics::NewProp_Floors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AElectronicLift_Statics::NewProp_PreviousFloor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AElectronicLift_Statics::NewProp_NextFloor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AElectronicLift_Statics::NewProp_TargetFloor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AElectronicLift_Statics::NewProp_ClosestFloor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AElectronicLift_Statics::NewProp_ReplicatedPreviousFloor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AElectronicLift_Statics::NewProp_ReplicatedState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AElectronicLift_Statics::NewProp_bUseElevatorDoors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AElectronicLift_Statics::NewProp_ElevatorDoorTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AElectronicLift_Statics::NewProp_CurrentDoorValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AElectronicLift_Statics::NewProp_bDoorOpen,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AElectronicLift_Statics::NewProp_MaxReplicatedTimeDifference,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AElectronicLift_Statics::NewProp_bIsMoving,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AElectronicLift_Statics::NewProp_LiftComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AElectronicLift_Statics::NewProp_MovementTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AElectronicLift_Statics::NewProp_bUseConstantMovementSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AElectronicLift_Statics::NewProp_MovementSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AElectronicLift_Statics::NewProp_LiftStoppedSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AElectronicLift_Statics::NewProp_LiftMusic,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AElectronicLift_Statics::NewProp_MusicComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AElectronicLift_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AElectronicLift>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AElectronicLift_Statics::ClassParams = {
		&AElectronicLift::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AElectronicLift_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AElectronicLift_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AElectronicLift_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AElectronicLift_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AElectronicLift()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AElectronicLift_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AElectronicLift, 3718397633);
	template<> ELECTRONICS_API UClass* StaticClass<AElectronicLift>()
	{
		return AElectronicLift::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AElectronicLift(Z_Construct_UClass_AElectronicLift, &AElectronicLift::StaticClass, TEXT("/Script/Electronics"), TEXT("AElectronicLift"), false, nullptr, nullptr, nullptr);

	void AElectronicLift::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_ReplicatedTime(TEXT("ReplicatedTime"));
		static const FName Name_TargetFloor(TEXT("TargetFloor"));
		static const FName Name_ReplicatedPreviousFloor(TEXT("ReplicatedPreviousFloor"));
		static const FName Name_ReplicatedState(TEXT("ReplicatedState"));
		static const FName Name_bDoorOpen(TEXT("bDoorOpen"));

		const bool bIsValid = true
			&& Name_ReplicatedTime == ClassReps[(int32)ENetFields_Private::ReplicatedTime].Property->GetFName()
			&& Name_TargetFloor == ClassReps[(int32)ENetFields_Private::TargetFloor].Property->GetFName()
			&& Name_ReplicatedPreviousFloor == ClassReps[(int32)ENetFields_Private::ReplicatedPreviousFloor].Property->GetFName()
			&& Name_ReplicatedState == ClassReps[(int32)ENetFields_Private::ReplicatedState].Property->GetFName()
			&& Name_bDoorOpen == ClassReps[(int32)ENetFields_Private::bDoorOpen].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AElectronicLift"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AElectronicLift);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
