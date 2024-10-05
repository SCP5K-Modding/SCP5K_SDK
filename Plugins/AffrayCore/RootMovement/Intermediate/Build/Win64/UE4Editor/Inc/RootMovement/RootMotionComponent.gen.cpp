// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RootMovement/Public/RootMotionComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRootMotionComponent() {}
// Cross Module References
	ROOTMOVEMENT_API UClass* Z_Construct_UClass_URootMotionComponent_NoRegister();
	ROOTMOVEMENT_API UClass* Z_Construct_UClass_URootMotionComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_RootMovement();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(URootMotionComponent::execGetDesiredFinalLocation)
	{
		P_GET_OBJECT(UAnimSequence,Z_Param_Sequence);
		P_GET_STRUCT(FTransform,Z_Param_RelativeTransform);
		P_GET_STRUCT(FVector,Z_Param_RootOffset);
		P_GET_STRUCT(FTransform,Z_Param_Transform);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=URootMotionComponent::GetDesiredFinalLocation(Z_Param_Sequence,Z_Param_RelativeTransform,Z_Param_RootOffset,Z_Param_Transform);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URootMotionComponent::execGetDesiredStartLocation)
	{
		P_GET_OBJECT(UAnimSequence,Z_Param_Sequence);
		P_GET_STRUCT(FTransform,Z_Param_RelativeTransform);
		P_GET_STRUCT(FVector,Z_Param_RootOffset);
		P_GET_STRUCT(FTransform,Z_Param_Transform);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=URootMotionComponent::GetDesiredStartLocation(Z_Param_Sequence,Z_Param_RelativeTransform,Z_Param_RootOffset,Z_Param_Transform);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URootMotionComponent::execGetRootMovement)
	{
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_Transform);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Alpha);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Norm);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetRootMovement(Z_Param_Out_Transform,Z_Param_Out_Alpha,Z_Param_Out_Norm);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URootMotionComponent::execOnRep_IsMoving)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_IsMoving();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URootMotionComponent::execStartRootMove)
	{
		P_GET_OBJECT(UAnimMontage,Z_Param_Montage);
		P_GET_STRUCT(FTransform,Z_Param_Transform);
		P_GET_UBOOL(Z_Param_bShouldSweep);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->StartRootMove(Z_Param_Montage,Z_Param_Transform,Z_Param_bShouldSweep);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URootMotionComponent::execStartRootMoveAtTransform)
	{
		P_GET_OBJECT(UAnimMontage,Z_Param_Montage);
		P_GET_STRUCT(FTransform,Z_Param_StartTransform);
		P_GET_STRUCT(FTransform,Z_Param_Transform);
		P_GET_PROPERTY(FFloatProperty,Z_Param_BlendTime);
		P_GET_UBOOL(Z_Param_bShouldSweep);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->StartRootMoveAtTransform(Z_Param_Montage,Z_Param_StartTransform,Z_Param_Transform,Z_Param_BlendTime,Z_Param_bShouldSweep);
		P_NATIVE_END;
	}
	void URootMotionComponent::StaticRegisterNativesURootMotionComponent()
	{
		UClass* Class = URootMotionComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDesiredFinalLocation", &URootMotionComponent::execGetDesiredFinalLocation },
			{ "GetDesiredStartLocation", &URootMotionComponent::execGetDesiredStartLocation },
			{ "GetRootMovement", &URootMotionComponent::execGetRootMovement },
			{ "OnRep_IsMoving", &URootMotionComponent::execOnRep_IsMoving },
			{ "StartRootMove", &URootMotionComponent::execStartRootMove },
			{ "StartRootMoveAtTransform", &URootMotionComponent::execStartRootMoveAtTransform },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URootMotionComponent_GetDesiredFinalLocation_Statics
	{
		struct RootMotionComponent_eventGetDesiredFinalLocation_Parms
		{
			UAnimSequence* Sequence;
			FTransform RelativeTransform;
			FVector RootOffset;
			FTransform Transform;
			FTransform ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Sequence;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RelativeTransform;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RootOffset;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Transform;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URootMotionComponent_GetDesiredFinalLocation_Statics::NewProp_Sequence = { "Sequence", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RootMotionComponent_eventGetDesiredFinalLocation_Parms, Sequence), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URootMotionComponent_GetDesiredFinalLocation_Statics::NewProp_RelativeTransform = { "RelativeTransform", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RootMotionComponent_eventGetDesiredFinalLocation_Parms, RelativeTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URootMotionComponent_GetDesiredFinalLocation_Statics::NewProp_RootOffset = { "RootOffset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RootMotionComponent_eventGetDesiredFinalLocation_Parms, RootOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URootMotionComponent_GetDesiredFinalLocation_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RootMotionComponent_eventGetDesiredFinalLocation_Parms, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URootMotionComponent_GetDesiredFinalLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RootMotionComponent_eventGetDesiredFinalLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URootMotionComponent_GetDesiredFinalLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URootMotionComponent_GetDesiredFinalLocation_Statics::NewProp_Sequence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URootMotionComponent_GetDesiredFinalLocation_Statics::NewProp_RelativeTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URootMotionComponent_GetDesiredFinalLocation_Statics::NewProp_RootOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URootMotionComponent_GetDesiredFinalLocation_Statics::NewProp_Transform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URootMotionComponent_GetDesiredFinalLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URootMotionComponent_GetDesiredFinalLocation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RootMotionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URootMotionComponent_GetDesiredFinalLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URootMotionComponent, nullptr, "GetDesiredFinalLocation", nullptr, nullptr, sizeof(RootMotionComponent_eventGetDesiredFinalLocation_Parms), Z_Construct_UFunction_URootMotionComponent_GetDesiredFinalLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URootMotionComponent_GetDesiredFinalLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URootMotionComponent_GetDesiredFinalLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URootMotionComponent_GetDesiredFinalLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URootMotionComponent_GetDesiredFinalLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URootMotionComponent_GetDesiredFinalLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URootMotionComponent_GetDesiredStartLocation_Statics
	{
		struct RootMotionComponent_eventGetDesiredStartLocation_Parms
		{
			UAnimSequence* Sequence;
			FTransform RelativeTransform;
			FVector RootOffset;
			FTransform Transform;
			FTransform ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Sequence;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RelativeTransform;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RootOffset;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Transform;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URootMotionComponent_GetDesiredStartLocation_Statics::NewProp_Sequence = { "Sequence", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RootMotionComponent_eventGetDesiredStartLocation_Parms, Sequence), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URootMotionComponent_GetDesiredStartLocation_Statics::NewProp_RelativeTransform = { "RelativeTransform", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RootMotionComponent_eventGetDesiredStartLocation_Parms, RelativeTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URootMotionComponent_GetDesiredStartLocation_Statics::NewProp_RootOffset = { "RootOffset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RootMotionComponent_eventGetDesiredStartLocation_Parms, RootOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URootMotionComponent_GetDesiredStartLocation_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RootMotionComponent_eventGetDesiredStartLocation_Parms, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URootMotionComponent_GetDesiredStartLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RootMotionComponent_eventGetDesiredStartLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URootMotionComponent_GetDesiredStartLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URootMotionComponent_GetDesiredStartLocation_Statics::NewProp_Sequence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URootMotionComponent_GetDesiredStartLocation_Statics::NewProp_RelativeTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URootMotionComponent_GetDesiredStartLocation_Statics::NewProp_RootOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URootMotionComponent_GetDesiredStartLocation_Statics::NewProp_Transform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URootMotionComponent_GetDesiredStartLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URootMotionComponent_GetDesiredStartLocation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RootMotionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URootMotionComponent_GetDesiredStartLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URootMotionComponent, nullptr, "GetDesiredStartLocation", nullptr, nullptr, sizeof(RootMotionComponent_eventGetDesiredStartLocation_Parms), Z_Construct_UFunction_URootMotionComponent_GetDesiredStartLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URootMotionComponent_GetDesiredStartLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URootMotionComponent_GetDesiredStartLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URootMotionComponent_GetDesiredStartLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URootMotionComponent_GetDesiredStartLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URootMotionComponent_GetDesiredStartLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URootMotionComponent_GetRootMovement_Statics
	{
		struct RootMotionComponent_eventGetRootMovement_Parms
		{
			FTransform Transform;
			float Alpha;
			float Norm;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Transform;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Alpha;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Norm;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URootMotionComponent_GetRootMovement_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RootMotionComponent_eventGetRootMovement_Parms, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URootMotionComponent_GetRootMovement_Statics::NewProp_Alpha = { "Alpha", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RootMotionComponent_eventGetRootMovement_Parms, Alpha), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URootMotionComponent_GetRootMovement_Statics::NewProp_Norm = { "Norm", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RootMotionComponent_eventGetRootMovement_Parms, Norm), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URootMotionComponent_GetRootMovement_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URootMotionComponent_GetRootMovement_Statics::NewProp_Transform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URootMotionComponent_GetRootMovement_Statics::NewProp_Alpha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URootMotionComponent_GetRootMovement_Statics::NewProp_Norm,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URootMotionComponent_GetRootMovement_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RootMotionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URootMotionComponent_GetRootMovement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URootMotionComponent, nullptr, "GetRootMovement", nullptr, nullptr, sizeof(RootMotionComponent_eventGetRootMovement_Parms), Z_Construct_UFunction_URootMotionComponent_GetRootMovement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URootMotionComponent_GetRootMovement_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URootMotionComponent_GetRootMovement_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URootMotionComponent_GetRootMovement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URootMotionComponent_GetRootMovement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URootMotionComponent_GetRootMovement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URootMotionComponent_OnRep_IsMoving_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URootMotionComponent_OnRep_IsMoving_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RootMotionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URootMotionComponent_OnRep_IsMoving_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URootMotionComponent, nullptr, "OnRep_IsMoving", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URootMotionComponent_OnRep_IsMoving_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URootMotionComponent_OnRep_IsMoving_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URootMotionComponent_OnRep_IsMoving()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URootMotionComponent_OnRep_IsMoving_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URootMotionComponent_StartRootMove_Statics
	{
		struct RootMotionComponent_eventStartRootMove_Parms
		{
			UAnimMontage* Montage;
			FTransform Transform;
			bool bShouldSweep;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Montage;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Transform;
		static void NewProp_bShouldSweep_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShouldSweep;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URootMotionComponent_StartRootMove_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RootMotionComponent_eventStartRootMove_Parms, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URootMotionComponent_StartRootMove_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RootMotionComponent_eventStartRootMove_Parms, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URootMotionComponent_StartRootMove_Statics::NewProp_bShouldSweep_SetBit(void* Obj)
	{
		((RootMotionComponent_eventStartRootMove_Parms*)Obj)->bShouldSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URootMotionComponent_StartRootMove_Statics::NewProp_bShouldSweep = { "bShouldSweep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RootMotionComponent_eventStartRootMove_Parms), &Z_Construct_UFunction_URootMotionComponent_StartRootMove_Statics::NewProp_bShouldSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URootMotionComponent_StartRootMove_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RootMotionComponent_eventStartRootMove_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URootMotionComponent_StartRootMove_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RootMotionComponent_eventStartRootMove_Parms), &Z_Construct_UFunction_URootMotionComponent_StartRootMove_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URootMotionComponent_StartRootMove_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URootMotionComponent_StartRootMove_Statics::NewProp_Montage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URootMotionComponent_StartRootMove_Statics::NewProp_Transform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URootMotionComponent_StartRootMove_Statics::NewProp_bShouldSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URootMotionComponent_StartRootMove_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URootMotionComponent_StartRootMove_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RootMotionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URootMotionComponent_StartRootMove_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URootMotionComponent, nullptr, "StartRootMove", nullptr, nullptr, sizeof(RootMotionComponent_eventStartRootMove_Parms), Z_Construct_UFunction_URootMotionComponent_StartRootMove_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URootMotionComponent_StartRootMove_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URootMotionComponent_StartRootMove_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URootMotionComponent_StartRootMove_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URootMotionComponent_StartRootMove()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URootMotionComponent_StartRootMove_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URootMotionComponent_StartRootMoveAtTransform_Statics
	{
		struct RootMotionComponent_eventStartRootMoveAtTransform_Parms
		{
			UAnimMontage* Montage;
			FTransform StartTransform;
			FTransform Transform;
			float BlendTime;
			bool bShouldSweep;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Montage;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StartTransform;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Transform;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BlendTime;
		static void NewProp_bShouldSweep_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShouldSweep;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URootMotionComponent_StartRootMoveAtTransform_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RootMotionComponent_eventStartRootMoveAtTransform_Parms, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URootMotionComponent_StartRootMoveAtTransform_Statics::NewProp_StartTransform = { "StartTransform", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RootMotionComponent_eventStartRootMoveAtTransform_Parms, StartTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URootMotionComponent_StartRootMoveAtTransform_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RootMotionComponent_eventStartRootMoveAtTransform_Parms, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URootMotionComponent_StartRootMoveAtTransform_Statics::NewProp_BlendTime = { "BlendTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RootMotionComponent_eventStartRootMoveAtTransform_Parms, BlendTime), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URootMotionComponent_StartRootMoveAtTransform_Statics::NewProp_bShouldSweep_SetBit(void* Obj)
	{
		((RootMotionComponent_eventStartRootMoveAtTransform_Parms*)Obj)->bShouldSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URootMotionComponent_StartRootMoveAtTransform_Statics::NewProp_bShouldSweep = { "bShouldSweep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RootMotionComponent_eventStartRootMoveAtTransform_Parms), &Z_Construct_UFunction_URootMotionComponent_StartRootMoveAtTransform_Statics::NewProp_bShouldSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URootMotionComponent_StartRootMoveAtTransform_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RootMotionComponent_eventStartRootMoveAtTransform_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URootMotionComponent_StartRootMoveAtTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RootMotionComponent_eventStartRootMoveAtTransform_Parms), &Z_Construct_UFunction_URootMotionComponent_StartRootMoveAtTransform_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URootMotionComponent_StartRootMoveAtTransform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URootMotionComponent_StartRootMoveAtTransform_Statics::NewProp_Montage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URootMotionComponent_StartRootMoveAtTransform_Statics::NewProp_StartTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URootMotionComponent_StartRootMoveAtTransform_Statics::NewProp_Transform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URootMotionComponent_StartRootMoveAtTransform_Statics::NewProp_BlendTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URootMotionComponent_StartRootMoveAtTransform_Statics::NewProp_bShouldSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URootMotionComponent_StartRootMoveAtTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URootMotionComponent_StartRootMoveAtTransform_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RootMotionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URootMotionComponent_StartRootMoveAtTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URootMotionComponent, nullptr, "StartRootMoveAtTransform", nullptr, nullptr, sizeof(RootMotionComponent_eventStartRootMoveAtTransform_Parms), Z_Construct_UFunction_URootMotionComponent_StartRootMoveAtTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URootMotionComponent_StartRootMoveAtTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URootMotionComponent_StartRootMoveAtTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URootMotionComponent_StartRootMoveAtTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URootMotionComponent_StartRootMoveAtTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URootMotionComponent_StartRootMoveAtTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_URootMotionComponent_NoRegister()
	{
		return URootMotionComponent::StaticClass();
	}
	struct Z_Construct_UClass_URootMotionComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RootBoneName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_RootBoneName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsMoving_MetaData[];
#endif
		static void NewProp_bIsMoving_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsMoving;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsBeginningMove_MetaData[];
#endif
		static void NewProp_bIsBeginningMove_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsBeginningMove;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MoveTransform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveStart_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MoveStart;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MoveTarget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FinalTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FinalTransform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveAlpha_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MoveAlpha;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDebug_MetaData[];
#endif
		static void NewProp_bDebug_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDebug;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSweep_MetaData[];
#endif
		static void NewProp_bSweep_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSweep;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RootBoneRelativeTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RootBoneRelativeTransform;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URootMotionComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_RootMovement,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URootMotionComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URootMotionComponent_GetDesiredFinalLocation, "GetDesiredFinalLocation" }, // 999932844
		{ &Z_Construct_UFunction_URootMotionComponent_GetDesiredStartLocation, "GetDesiredStartLocation" }, // 1082358281
		{ &Z_Construct_UFunction_URootMotionComponent_GetRootMovement, "GetRootMovement" }, // 1101871508
		{ &Z_Construct_UFunction_URootMotionComponent_OnRep_IsMoving, "OnRep_IsMoving" }, // 1438469240
		{ &Z_Construct_UFunction_URootMotionComponent_StartRootMove, "StartRootMove" }, // 537029830
		{ &Z_Construct_UFunction_URootMotionComponent_StartRootMoveAtTransform, "StartRootMoveAtTransform" }, // 2881378372
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URootMotionComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "RootMotionComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/RootMotionComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URootMotionComponent_Statics::NewProp_RootBoneName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RootMotionComponent" },
		{ "ModuleRelativePath", "Public/RootMotionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_URootMotionComponent_Statics::NewProp_RootBoneName = { "RootBoneName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URootMotionComponent, RootBoneName), METADATA_PARAMS(Z_Construct_UClass_URootMotionComponent_Statics::NewProp_RootBoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URootMotionComponent_Statics::NewProp_RootBoneName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URootMotionComponent_Statics::NewProp_bIsMoving_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RootMotionComponent" },
		{ "ModuleRelativePath", "Public/RootMotionComponent.h" },
	};
#endif
	void Z_Construct_UClass_URootMotionComponent_Statics::NewProp_bIsMoving_SetBit(void* Obj)
	{
		((URootMotionComponent*)Obj)->bIsMoving = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URootMotionComponent_Statics::NewProp_bIsMoving = { "bIsMoving", "OnRep_IsMoving", (EPropertyFlags)0x0010000100000025, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(URootMotionComponent), &Z_Construct_UClass_URootMotionComponent_Statics::NewProp_bIsMoving_SetBit, METADATA_PARAMS(Z_Construct_UClass_URootMotionComponent_Statics::NewProp_bIsMoving_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URootMotionComponent_Statics::NewProp_bIsMoving_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URootMotionComponent_Statics::NewProp_bIsBeginningMove_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RootMotionComponent" },
		{ "ModuleRelativePath", "Public/RootMotionComponent.h" },
	};
#endif
	void Z_Construct_UClass_URootMotionComponent_Statics::NewProp_bIsBeginningMove_SetBit(void* Obj)
	{
		((URootMotionComponent*)Obj)->bIsBeginningMove = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URootMotionComponent_Statics::NewProp_bIsBeginningMove = { "bIsBeginningMove", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(URootMotionComponent), &Z_Construct_UClass_URootMotionComponent_Statics::NewProp_bIsBeginningMove_SetBit, METADATA_PARAMS(Z_Construct_UClass_URootMotionComponent_Statics::NewProp_bIsBeginningMove_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URootMotionComponent_Statics::NewProp_bIsBeginningMove_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URootMotionComponent_Statics::NewProp_MoveTransform_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RootMotionComponent" },
		{ "ModuleRelativePath", "Public/RootMotionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_URootMotionComponent_Statics::NewProp_MoveTransform = { "MoveTransform", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URootMotionComponent, MoveTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_URootMotionComponent_Statics::NewProp_MoveTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URootMotionComponent_Statics::NewProp_MoveTransform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URootMotionComponent_Statics::NewProp_MoveStart_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RootMotionComponent" },
		{ "ModuleRelativePath", "Public/RootMotionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_URootMotionComponent_Statics::NewProp_MoveStart = { "MoveStart", nullptr, (EPropertyFlags)0x0010000000000025, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URootMotionComponent, MoveStart), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_URootMotionComponent_Statics::NewProp_MoveStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URootMotionComponent_Statics::NewProp_MoveStart_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URootMotionComponent_Statics::NewProp_MoveTarget_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RootMotionComponent" },
		{ "ModuleRelativePath", "Public/RootMotionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_URootMotionComponent_Statics::NewProp_MoveTarget = { "MoveTarget", nullptr, (EPropertyFlags)0x0010000000000025, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URootMotionComponent, MoveTarget), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_URootMotionComponent_Statics::NewProp_MoveTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URootMotionComponent_Statics::NewProp_MoveTarget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URootMotionComponent_Statics::NewProp_FinalTransform_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RootMotionComponent" },
		{ "ModuleRelativePath", "Public/RootMotionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_URootMotionComponent_Statics::NewProp_FinalTransform = { "FinalTransform", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URootMotionComponent, FinalTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_URootMotionComponent_Statics::NewProp_FinalTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URootMotionComponent_Statics::NewProp_FinalTransform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URootMotionComponent_Statics::NewProp_MoveAlpha_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RootMotionComponent" },
		{ "ModuleRelativePath", "Public/RootMotionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URootMotionComponent_Statics::NewProp_MoveAlpha = { "MoveAlpha", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URootMotionComponent, MoveAlpha), METADATA_PARAMS(Z_Construct_UClass_URootMotionComponent_Statics::NewProp_MoveAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URootMotionComponent_Statics::NewProp_MoveAlpha_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URootMotionComponent_Statics::NewProp_CurrentMontage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RootMotionComponent" },
		{ "ModuleRelativePath", "Public/RootMotionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URootMotionComponent_Statics::NewProp_CurrentMontage = { "CurrentMontage", nullptr, (EPropertyFlags)0x0010000000000025, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URootMotionComponent, CurrentMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URootMotionComponent_Statics::NewProp_CurrentMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URootMotionComponent_Statics::NewProp_CurrentMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URootMotionComponent_Statics::NewProp_bDebug_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RootMotionComponent" },
		{ "ModuleRelativePath", "Public/RootMotionComponent.h" },
	};
#endif
	void Z_Construct_UClass_URootMotionComponent_Statics::NewProp_bDebug_SetBit(void* Obj)
	{
		((URootMotionComponent*)Obj)->bDebug = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URootMotionComponent_Statics::NewProp_bDebug = { "bDebug", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(URootMotionComponent), &Z_Construct_UClass_URootMotionComponent_Statics::NewProp_bDebug_SetBit, METADATA_PARAMS(Z_Construct_UClass_URootMotionComponent_Statics::NewProp_bDebug_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URootMotionComponent_Statics::NewProp_bDebug_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URootMotionComponent_Statics::NewProp_bSweep_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RootMotionComponent" },
		{ "ModuleRelativePath", "Public/RootMotionComponent.h" },
	};
#endif
	void Z_Construct_UClass_URootMotionComponent_Statics::NewProp_bSweep_SetBit(void* Obj)
	{
		((URootMotionComponent*)Obj)->bSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URootMotionComponent_Statics::NewProp_bSweep = { "bSweep", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(URootMotionComponent), &Z_Construct_UClass_URootMotionComponent_Statics::NewProp_bSweep_SetBit, METADATA_PARAMS(Z_Construct_UClass_URootMotionComponent_Statics::NewProp_bSweep_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URootMotionComponent_Statics::NewProp_bSweep_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URootMotionComponent_Statics::NewProp_RootBoneRelativeTransform_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RootMotionComponent" },
		{ "ModuleRelativePath", "Public/RootMotionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_URootMotionComponent_Statics::NewProp_RootBoneRelativeTransform = { "RootBoneRelativeTransform", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URootMotionComponent, RootBoneRelativeTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_URootMotionComponent_Statics::NewProp_RootBoneRelativeTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URootMotionComponent_Statics::NewProp_RootBoneRelativeTransform_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URootMotionComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URootMotionComponent_Statics::NewProp_RootBoneName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URootMotionComponent_Statics::NewProp_bIsMoving,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URootMotionComponent_Statics::NewProp_bIsBeginningMove,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URootMotionComponent_Statics::NewProp_MoveTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URootMotionComponent_Statics::NewProp_MoveStart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URootMotionComponent_Statics::NewProp_MoveTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URootMotionComponent_Statics::NewProp_FinalTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URootMotionComponent_Statics::NewProp_MoveAlpha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URootMotionComponent_Statics::NewProp_CurrentMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URootMotionComponent_Statics::NewProp_bDebug,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URootMotionComponent_Statics::NewProp_bSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URootMotionComponent_Statics::NewProp_RootBoneRelativeTransform,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URootMotionComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URootMotionComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URootMotionComponent_Statics::ClassParams = {
		&URootMotionComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_URootMotionComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_URootMotionComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_URootMotionComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URootMotionComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URootMotionComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URootMotionComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URootMotionComponent, 3674103135);
	template<> ROOTMOVEMENT_API UClass* StaticClass<URootMotionComponent>()
	{
		return URootMotionComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URootMotionComponent(Z_Construct_UClass_URootMotionComponent, &URootMotionComponent::StaticClass, TEXT("/Script/RootMovement"), TEXT("URootMotionComponent"), false, nullptr, nullptr, nullptr);

	void URootMotionComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_bIsMoving(TEXT("bIsMoving"));
		static const FName Name_MoveStart(TEXT("MoveStart"));
		static const FName Name_MoveTarget(TEXT("MoveTarget"));
		static const FName Name_CurrentMontage(TEXT("CurrentMontage"));

		const bool bIsValid = true
			&& Name_bIsMoving == ClassReps[(int32)ENetFields_Private::bIsMoving].Property->GetFName()
			&& Name_MoveStart == ClassReps[(int32)ENetFields_Private::MoveStart].Property->GetFName()
			&& Name_MoveTarget == ClassReps[(int32)ENetFields_Private::MoveTarget].Property->GetFName()
			&& Name_CurrentMontage == ClassReps[(int32)ENetFields_Private::CurrentMontage].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in URootMotionComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URootMotionComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
