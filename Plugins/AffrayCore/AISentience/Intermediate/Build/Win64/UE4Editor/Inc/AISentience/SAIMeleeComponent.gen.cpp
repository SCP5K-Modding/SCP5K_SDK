// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AISentience/Public/SAIMeleeComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSAIMeleeComponent() {}
// Cross Module References
	AISENTIENCE_API UFunction* Z_Construct_UDelegateFunction_USAIMeleeComponent_OnAttackCompleted__DelegateSignature();
	AISENTIENCE_API UClass* Z_Construct_UClass_USAIMeleeComponent();
	AISENTIENCE_API UClass* Z_Construct_UClass_USAIMeleeComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	FPSCONTROLLER_API UScriptStruct* Z_Construct_UScriptStruct_FAIMeleeAttackType();
	AISENTIENCE_API UFunction* Z_Construct_UDelegateFunction_USAIMeleeComponent_OnAttackStarted__DelegateSignature();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_AISentience();
	FPSCONTROLLER_API UEnum* Z_Construct_UEnum_FPSController_EMeleeAttackDirection();
	FPSCONTROLLER_API UScriptStruct* Z_Construct_UScriptStruct_FMeleeHitData();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UDamageType_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EObjectTypeQuery();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_USAIMeleeComponent_OnAttackCompleted__DelegateSignature_Statics
	{
		struct SAIMeleeComponent_eventOnAttackCompleted_Parms
		{
			USAIMeleeComponent* AttackingComponent;
			AActor* AttackedActor;
			uint8 AttackIndex;
			FAIMeleeAttackType Attack;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttackingComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AttackingComponent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AttackedActor;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AttackIndex;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Attack;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_USAIMeleeComponent_OnAttackCompleted__DelegateSignature_Statics::NewProp_AttackingComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_USAIMeleeComponent_OnAttackCompleted__DelegateSignature_Statics::NewProp_AttackingComponent = { "AttackingComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SAIMeleeComponent_eventOnAttackCompleted_Parms, AttackingComponent), Z_Construct_UClass_USAIMeleeComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_USAIMeleeComponent_OnAttackCompleted__DelegateSignature_Statics::NewProp_AttackingComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USAIMeleeComponent_OnAttackCompleted__DelegateSignature_Statics::NewProp_AttackingComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_USAIMeleeComponent_OnAttackCompleted__DelegateSignature_Statics::NewProp_AttackedActor = { "AttackedActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SAIMeleeComponent_eventOnAttackCompleted_Parms, AttackedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_USAIMeleeComponent_OnAttackCompleted__DelegateSignature_Statics::NewProp_AttackIndex = { "AttackIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SAIMeleeComponent_eventOnAttackCompleted_Parms, AttackIndex), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_USAIMeleeComponent_OnAttackCompleted__DelegateSignature_Statics::NewProp_Attack = { "Attack", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SAIMeleeComponent_eventOnAttackCompleted_Parms, Attack), Z_Construct_UScriptStruct_FAIMeleeAttackType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_USAIMeleeComponent_OnAttackCompleted__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USAIMeleeComponent_OnAttackCompleted__DelegateSignature_Statics::NewProp_AttackingComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USAIMeleeComponent_OnAttackCompleted__DelegateSignature_Statics::NewProp_AttackedActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USAIMeleeComponent_OnAttackCompleted__DelegateSignature_Statics::NewProp_AttackIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USAIMeleeComponent_OnAttackCompleted__DelegateSignature_Statics::NewProp_Attack,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_USAIMeleeComponent_OnAttackCompleted__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SAIMeleeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_USAIMeleeComponent_OnAttackCompleted__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USAIMeleeComponent, nullptr, "OnAttackCompleted__DelegateSignature", nullptr, nullptr, sizeof(SAIMeleeComponent_eventOnAttackCompleted_Parms), Z_Construct_UDelegateFunction_USAIMeleeComponent_OnAttackCompleted__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USAIMeleeComponent_OnAttackCompleted__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_USAIMeleeComponent_OnAttackCompleted__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USAIMeleeComponent_OnAttackCompleted__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_USAIMeleeComponent_OnAttackCompleted__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_USAIMeleeComponent_OnAttackCompleted__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_USAIMeleeComponent_OnAttackStarted__DelegateSignature_Statics
	{
		struct SAIMeleeComponent_eventOnAttackStarted_Parms
		{
			USAIMeleeComponent* AttackingComponent;
			uint8 AttackIndex;
			FAIMeleeAttackType Attack;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttackingComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AttackingComponent;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AttackIndex;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Attack;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_USAIMeleeComponent_OnAttackStarted__DelegateSignature_Statics::NewProp_AttackingComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_USAIMeleeComponent_OnAttackStarted__DelegateSignature_Statics::NewProp_AttackingComponent = { "AttackingComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SAIMeleeComponent_eventOnAttackStarted_Parms, AttackingComponent), Z_Construct_UClass_USAIMeleeComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_USAIMeleeComponent_OnAttackStarted__DelegateSignature_Statics::NewProp_AttackingComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USAIMeleeComponent_OnAttackStarted__DelegateSignature_Statics::NewProp_AttackingComponent_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_USAIMeleeComponent_OnAttackStarted__DelegateSignature_Statics::NewProp_AttackIndex = { "AttackIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SAIMeleeComponent_eventOnAttackStarted_Parms, AttackIndex), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_USAIMeleeComponent_OnAttackStarted__DelegateSignature_Statics::NewProp_Attack = { "Attack", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SAIMeleeComponent_eventOnAttackStarted_Parms, Attack), Z_Construct_UScriptStruct_FAIMeleeAttackType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_USAIMeleeComponent_OnAttackStarted__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USAIMeleeComponent_OnAttackStarted__DelegateSignature_Statics::NewProp_AttackingComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USAIMeleeComponent_OnAttackStarted__DelegateSignature_Statics::NewProp_AttackIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USAIMeleeComponent_OnAttackStarted__DelegateSignature_Statics::NewProp_Attack,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_USAIMeleeComponent_OnAttackStarted__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SAIMeleeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_USAIMeleeComponent_OnAttackStarted__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USAIMeleeComponent, nullptr, "OnAttackStarted__DelegateSignature", nullptr, nullptr, sizeof(SAIMeleeComponent_eventOnAttackStarted_Parms), Z_Construct_UDelegateFunction_USAIMeleeComponent_OnAttackStarted__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USAIMeleeComponent_OnAttackStarted__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_USAIMeleeComponent_OnAttackStarted__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USAIMeleeComponent_OnAttackStarted__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_USAIMeleeComponent_OnAttackStarted__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_USAIMeleeComponent_OnAttackStarted__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(USAIMeleeComponent::execAttack)
	{
		P_GET_PROPERTY_REF(FByteProperty,Z_Param_Out_Direction);
		P_GET_STRUCT_REF(FMeleeHitData,Z_Param_Out_HitData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Attack((TEnumAsByte<EMeleeAttackDirection>&)(Z_Param_Out_Direction),Z_Param_Out_HitData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USAIMeleeComponent::execCancelAttack)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CancelAttack();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USAIMeleeComponent::execCanStartAttack)
	{
		P_GET_STRUCT_REF(FAIMeleeAttackType,Z_Param_Out_NewAttack);
		P_GET_PROPERTY_REF(FByteProperty,Z_Param_Out_AttackDirection);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TargetDistance);
		P_GET_PROPERTY(FFloatProperty,Z_Param_CurrentSpeedSquared);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanStartAttack(Z_Param_Out_NewAttack,(TEnumAsByte<EMeleeAttackDirection>&)(Z_Param_Out_AttackDirection),Z_Param_TargetDistance,Z_Param_CurrentSpeedSquared);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USAIMeleeComponent::execCosmeticAttack)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_Direction);
		P_GET_PROPERTY(FByteProperty,Z_Param_AttackIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CosmeticAttack(EMeleeAttackDirection(Z_Param_Direction),Z_Param_AttackIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USAIMeleeComponent::execCosmeticAttackCanceled)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_Direction);
		P_GET_OBJECT(USceneComponent,Z_Param_HitComponent);
		P_GET_PROPERTY(FByteProperty,Z_Param_AttackIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CosmeticAttackCanceled(EMeleeAttackDirection(Z_Param_Direction),Z_Param_HitComponent,Z_Param_AttackIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USAIMeleeComponent::execCosmeticAttackFinished)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_Direction);
		P_GET_OBJECT(USceneComponent,Z_Param_HitComponent);
		P_GET_PROPERTY(FByteProperty,Z_Param_AttackIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CosmeticAttackFinished(EMeleeAttackDirection(Z_Param_Direction),Z_Param_HitComponent,Z_Param_AttackIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USAIMeleeComponent::execCosmeticAttackHitActor)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_Direction);
		P_GET_OBJECT(USceneComponent,Z_Param_HitComponent);
		P_GET_PROPERTY(FByteProperty,Z_Param_AttackIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CosmeticAttackHitActor(EMeleeAttackDirection(Z_Param_Direction),Z_Param_HitComponent,Z_Param_AttackIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USAIMeleeComponent::execGetAttackVector)
	{
		P_GET_PROPERTY_REF(FByteProperty,Z_Param_Out_Direction);
		P_GET_UBOOL(Z_Param_bUseControlRotation);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetAttackVector((TEnumAsByte<EMeleeAttackDirection>&)(Z_Param_Out_Direction),Z_Param_bUseControlRotation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USAIMeleeComponent::execGetIdealAttackDirection)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TEnumAsByte<EMeleeAttackDirection>*)Z_Param__Result=P_THIS->GetIdealAttackDirection(Z_Param_Actor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USAIMeleeComponent::execIsActorDead)
	{
		P_GET_OBJECT(AActor,Z_Param_InputtedActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsActorDead(Z_Param_InputtedActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USAIMeleeComponent::execOnRep_MeleeHitData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_MeleeHitData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USAIMeleeComponent::execPickAttack)
	{
		P_GET_OBJECT(AActor,Z_Param_TargetActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(uint8*)Z_Param__Result=P_THIS->PickAttack(Z_Param_TargetActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USAIMeleeComponent::execStartAttack)
	{
		P_GET_PROPERTY_REF(FByteProperty,Z_Param_Out_Direction);
		P_GET_PROPERTY(FByteProperty,Z_Param_AttackIndex);
		P_GET_UBOOL(Z_Param_bForceAttack);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->StartAttack((TEnumAsByte<EMeleeAttackDirection>&)(Z_Param_Out_Direction),Z_Param_AttackIndex,Z_Param_bForceAttack);
		P_NATIVE_END;
	}
	void USAIMeleeComponent::StaticRegisterNativesUSAIMeleeComponent()
	{
		UClass* Class = USAIMeleeComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Attack", &USAIMeleeComponent::execAttack },
			{ "CancelAttack", &USAIMeleeComponent::execCancelAttack },
			{ "CanStartAttack", &USAIMeleeComponent::execCanStartAttack },
			{ "CosmeticAttack", &USAIMeleeComponent::execCosmeticAttack },
			{ "CosmeticAttackCanceled", &USAIMeleeComponent::execCosmeticAttackCanceled },
			{ "CosmeticAttackFinished", &USAIMeleeComponent::execCosmeticAttackFinished },
			{ "CosmeticAttackHitActor", &USAIMeleeComponent::execCosmeticAttackHitActor },
			{ "GetAttackVector", &USAIMeleeComponent::execGetAttackVector },
			{ "GetIdealAttackDirection", &USAIMeleeComponent::execGetIdealAttackDirection },
			{ "IsActorDead", &USAIMeleeComponent::execIsActorDead },
			{ "OnRep_MeleeHitData", &USAIMeleeComponent::execOnRep_MeleeHitData },
			{ "PickAttack", &USAIMeleeComponent::execPickAttack },
			{ "StartAttack", &USAIMeleeComponent::execStartAttack },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USAIMeleeComponent_Attack_Statics
	{
		struct SAIMeleeComponent_eventAttack_Parms
		{
			TEnumAsByte<EMeleeAttackDirection> Direction;
			FMeleeHitData HitData;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Direction;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HitData;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USAIMeleeComponent_Attack_Statics::NewProp_Direction_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USAIMeleeComponent_Attack_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SAIMeleeComponent_eventAttack_Parms, Direction), Z_Construct_UEnum_FPSController_EMeleeAttackDirection, METADATA_PARAMS(Z_Construct_UFunction_USAIMeleeComponent_Attack_Statics::NewProp_Direction_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USAIMeleeComponent_Attack_Statics::NewProp_Direction_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USAIMeleeComponent_Attack_Statics::NewProp_HitData = { "HitData", nullptr, (EPropertyFlags)0x0010008000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SAIMeleeComponent_eventAttack_Parms, HitData), Z_Construct_UScriptStruct_FMeleeHitData, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USAIMeleeComponent_Attack_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SAIMeleeComponent_eventAttack_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USAIMeleeComponent_Attack_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SAIMeleeComponent_eventAttack_Parms), &Z_Construct_UFunction_USAIMeleeComponent_Attack_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USAIMeleeComponent_Attack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USAIMeleeComponent_Attack_Statics::NewProp_Direction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USAIMeleeComponent_Attack_Statics::NewProp_HitData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USAIMeleeComponent_Attack_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USAIMeleeComponent_Attack_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SAIMeleeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USAIMeleeComponent_Attack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USAIMeleeComponent, nullptr, "Attack", nullptr, nullptr, sizeof(SAIMeleeComponent_eventAttack_Parms), Z_Construct_UFunction_USAIMeleeComponent_Attack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USAIMeleeComponent_Attack_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USAIMeleeComponent_Attack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USAIMeleeComponent_Attack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USAIMeleeComponent_Attack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USAIMeleeComponent_Attack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USAIMeleeComponent_CancelAttack_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USAIMeleeComponent_CancelAttack_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SAIMeleeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USAIMeleeComponent_CancelAttack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USAIMeleeComponent, nullptr, "CancelAttack", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USAIMeleeComponent_CancelAttack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USAIMeleeComponent_CancelAttack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USAIMeleeComponent_CancelAttack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USAIMeleeComponent_CancelAttack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USAIMeleeComponent_CanStartAttack_Statics
	{
		struct SAIMeleeComponent_eventCanStartAttack_Parms
		{
			FAIMeleeAttackType NewAttack;
			TEnumAsByte<EMeleeAttackDirection> AttackDirection;
			float TargetDistance;
			float CurrentSpeedSquared;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewAttack_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewAttack;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttackDirection_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AttackDirection;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TargetDistance;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentSpeedSquared;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USAIMeleeComponent_CanStartAttack_Statics::NewProp_NewAttack_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USAIMeleeComponent_CanStartAttack_Statics::NewProp_NewAttack = { "NewAttack", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SAIMeleeComponent_eventCanStartAttack_Parms, NewAttack), Z_Construct_UScriptStruct_FAIMeleeAttackType, METADATA_PARAMS(Z_Construct_UFunction_USAIMeleeComponent_CanStartAttack_Statics::NewProp_NewAttack_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USAIMeleeComponent_CanStartAttack_Statics::NewProp_NewAttack_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USAIMeleeComponent_CanStartAttack_Statics::NewProp_AttackDirection_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USAIMeleeComponent_CanStartAttack_Statics::NewProp_AttackDirection = { "AttackDirection", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SAIMeleeComponent_eventCanStartAttack_Parms, AttackDirection), Z_Construct_UEnum_FPSController_EMeleeAttackDirection, METADATA_PARAMS(Z_Construct_UFunction_USAIMeleeComponent_CanStartAttack_Statics::NewProp_AttackDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USAIMeleeComponent_CanStartAttack_Statics::NewProp_AttackDirection_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USAIMeleeComponent_CanStartAttack_Statics::NewProp_TargetDistance = { "TargetDistance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SAIMeleeComponent_eventCanStartAttack_Parms, TargetDistance), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USAIMeleeComponent_CanStartAttack_Statics::NewProp_CurrentSpeedSquared = { "CurrentSpeedSquared", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SAIMeleeComponent_eventCanStartAttack_Parms, CurrentSpeedSquared), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USAIMeleeComponent_CanStartAttack_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SAIMeleeComponent_eventCanStartAttack_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USAIMeleeComponent_CanStartAttack_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SAIMeleeComponent_eventCanStartAttack_Parms), &Z_Construct_UFunction_USAIMeleeComponent_CanStartAttack_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USAIMeleeComponent_CanStartAttack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USAIMeleeComponent_CanStartAttack_Statics::NewProp_NewAttack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USAIMeleeComponent_CanStartAttack_Statics::NewProp_AttackDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USAIMeleeComponent_CanStartAttack_Statics::NewProp_TargetDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USAIMeleeComponent_CanStartAttack_Statics::NewProp_CurrentSpeedSquared,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USAIMeleeComponent_CanStartAttack_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USAIMeleeComponent_CanStartAttack_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SAIMeleeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USAIMeleeComponent_CanStartAttack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USAIMeleeComponent, nullptr, "CanStartAttack", nullptr, nullptr, sizeof(SAIMeleeComponent_eventCanStartAttack_Parms), Z_Construct_UFunction_USAIMeleeComponent_CanStartAttack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USAIMeleeComponent_CanStartAttack_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USAIMeleeComponent_CanStartAttack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USAIMeleeComponent_CanStartAttack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USAIMeleeComponent_CanStartAttack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USAIMeleeComponent_CanStartAttack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USAIMeleeComponent_CosmeticAttack_Statics
	{
		struct SAIMeleeComponent_eventCosmeticAttack_Parms
		{
			TEnumAsByte<EMeleeAttackDirection> Direction;
			uint8 AttackIndex;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Direction;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AttackIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USAIMeleeComponent_CosmeticAttack_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SAIMeleeComponent_eventCosmeticAttack_Parms, Direction), Z_Construct_UEnum_FPSController_EMeleeAttackDirection, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USAIMeleeComponent_CosmeticAttack_Statics::NewProp_AttackIndex = { "AttackIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SAIMeleeComponent_eventCosmeticAttack_Parms, AttackIndex), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USAIMeleeComponent_CosmeticAttack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USAIMeleeComponent_CosmeticAttack_Statics::NewProp_Direction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USAIMeleeComponent_CosmeticAttack_Statics::NewProp_AttackIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USAIMeleeComponent_CosmeticAttack_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SAIMeleeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USAIMeleeComponent_CosmeticAttack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USAIMeleeComponent, nullptr, "CosmeticAttack", nullptr, nullptr, sizeof(SAIMeleeComponent_eventCosmeticAttack_Parms), Z_Construct_UFunction_USAIMeleeComponent_CosmeticAttack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USAIMeleeComponent_CosmeticAttack_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USAIMeleeComponent_CosmeticAttack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USAIMeleeComponent_CosmeticAttack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USAIMeleeComponent_CosmeticAttack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USAIMeleeComponent_CosmeticAttack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USAIMeleeComponent_CosmeticAttackCanceled_Statics
	{
		struct SAIMeleeComponent_eventCosmeticAttackCanceled_Parms
		{
			TEnumAsByte<EMeleeAttackDirection> Direction;
			USceneComponent* HitComponent;
			uint8 AttackIndex;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Direction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HitComponent;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AttackIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USAIMeleeComponent_CosmeticAttackCanceled_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SAIMeleeComponent_eventCosmeticAttackCanceled_Parms, Direction), Z_Construct_UEnum_FPSController_EMeleeAttackDirection, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USAIMeleeComponent_CosmeticAttackCanceled_Statics::NewProp_HitComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USAIMeleeComponent_CosmeticAttackCanceled_Statics::NewProp_HitComponent = { "HitComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SAIMeleeComponent_eventCosmeticAttackCanceled_Parms, HitComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USAIMeleeComponent_CosmeticAttackCanceled_Statics::NewProp_HitComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USAIMeleeComponent_CosmeticAttackCanceled_Statics::NewProp_HitComponent_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USAIMeleeComponent_CosmeticAttackCanceled_Statics::NewProp_AttackIndex = { "AttackIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SAIMeleeComponent_eventCosmeticAttackCanceled_Parms, AttackIndex), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USAIMeleeComponent_CosmeticAttackCanceled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USAIMeleeComponent_CosmeticAttackCanceled_Statics::NewProp_Direction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USAIMeleeComponent_CosmeticAttackCanceled_Statics::NewProp_HitComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USAIMeleeComponent_CosmeticAttackCanceled_Statics::NewProp_AttackIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USAIMeleeComponent_CosmeticAttackCanceled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SAIMeleeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USAIMeleeComponent_CosmeticAttackCanceled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USAIMeleeComponent, nullptr, "CosmeticAttackCanceled", nullptr, nullptr, sizeof(SAIMeleeComponent_eventCosmeticAttackCanceled_Parms), Z_Construct_UFunction_USAIMeleeComponent_CosmeticAttackCanceled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USAIMeleeComponent_CosmeticAttackCanceled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USAIMeleeComponent_CosmeticAttackCanceled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USAIMeleeComponent_CosmeticAttackCanceled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USAIMeleeComponent_CosmeticAttackCanceled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USAIMeleeComponent_CosmeticAttackCanceled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USAIMeleeComponent_CosmeticAttackFinished_Statics
	{
		struct SAIMeleeComponent_eventCosmeticAttackFinished_Parms
		{
			TEnumAsByte<EMeleeAttackDirection> Direction;
			USceneComponent* HitComponent;
			uint8 AttackIndex;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Direction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HitComponent;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AttackIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USAIMeleeComponent_CosmeticAttackFinished_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SAIMeleeComponent_eventCosmeticAttackFinished_Parms, Direction), Z_Construct_UEnum_FPSController_EMeleeAttackDirection, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USAIMeleeComponent_CosmeticAttackFinished_Statics::NewProp_HitComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USAIMeleeComponent_CosmeticAttackFinished_Statics::NewProp_HitComponent = { "HitComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SAIMeleeComponent_eventCosmeticAttackFinished_Parms, HitComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USAIMeleeComponent_CosmeticAttackFinished_Statics::NewProp_HitComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USAIMeleeComponent_CosmeticAttackFinished_Statics::NewProp_HitComponent_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USAIMeleeComponent_CosmeticAttackFinished_Statics::NewProp_AttackIndex = { "AttackIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SAIMeleeComponent_eventCosmeticAttackFinished_Parms, AttackIndex), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USAIMeleeComponent_CosmeticAttackFinished_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USAIMeleeComponent_CosmeticAttackFinished_Statics::NewProp_Direction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USAIMeleeComponent_CosmeticAttackFinished_Statics::NewProp_HitComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USAIMeleeComponent_CosmeticAttackFinished_Statics::NewProp_AttackIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USAIMeleeComponent_CosmeticAttackFinished_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SAIMeleeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USAIMeleeComponent_CosmeticAttackFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USAIMeleeComponent, nullptr, "CosmeticAttackFinished", nullptr, nullptr, sizeof(SAIMeleeComponent_eventCosmeticAttackFinished_Parms), Z_Construct_UFunction_USAIMeleeComponent_CosmeticAttackFinished_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USAIMeleeComponent_CosmeticAttackFinished_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USAIMeleeComponent_CosmeticAttackFinished_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USAIMeleeComponent_CosmeticAttackFinished_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USAIMeleeComponent_CosmeticAttackFinished()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USAIMeleeComponent_CosmeticAttackFinished_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USAIMeleeComponent_CosmeticAttackHitActor_Statics
	{
		struct SAIMeleeComponent_eventCosmeticAttackHitActor_Parms
		{
			TEnumAsByte<EMeleeAttackDirection> Direction;
			USceneComponent* HitComponent;
			uint8 AttackIndex;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Direction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HitComponent;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AttackIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USAIMeleeComponent_CosmeticAttackHitActor_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SAIMeleeComponent_eventCosmeticAttackHitActor_Parms, Direction), Z_Construct_UEnum_FPSController_EMeleeAttackDirection, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USAIMeleeComponent_CosmeticAttackHitActor_Statics::NewProp_HitComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USAIMeleeComponent_CosmeticAttackHitActor_Statics::NewProp_HitComponent = { "HitComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SAIMeleeComponent_eventCosmeticAttackHitActor_Parms, HitComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USAIMeleeComponent_CosmeticAttackHitActor_Statics::NewProp_HitComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USAIMeleeComponent_CosmeticAttackHitActor_Statics::NewProp_HitComponent_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USAIMeleeComponent_CosmeticAttackHitActor_Statics::NewProp_AttackIndex = { "AttackIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SAIMeleeComponent_eventCosmeticAttackHitActor_Parms, AttackIndex), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USAIMeleeComponent_CosmeticAttackHitActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USAIMeleeComponent_CosmeticAttackHitActor_Statics::NewProp_Direction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USAIMeleeComponent_CosmeticAttackHitActor_Statics::NewProp_HitComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USAIMeleeComponent_CosmeticAttackHitActor_Statics::NewProp_AttackIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USAIMeleeComponent_CosmeticAttackHitActor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SAIMeleeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USAIMeleeComponent_CosmeticAttackHitActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USAIMeleeComponent, nullptr, "CosmeticAttackHitActor", nullptr, nullptr, sizeof(SAIMeleeComponent_eventCosmeticAttackHitActor_Parms), Z_Construct_UFunction_USAIMeleeComponent_CosmeticAttackHitActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USAIMeleeComponent_CosmeticAttackHitActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USAIMeleeComponent_CosmeticAttackHitActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USAIMeleeComponent_CosmeticAttackHitActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USAIMeleeComponent_CosmeticAttackHitActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USAIMeleeComponent_CosmeticAttackHitActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USAIMeleeComponent_GetAttackVector_Statics
	{
		struct SAIMeleeComponent_eventGetAttackVector_Parms
		{
			TEnumAsByte<EMeleeAttackDirection> Direction;
			bool bUseControlRotation;
			FVector ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Direction;
		static void NewProp_bUseControlRotation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseControlRotation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USAIMeleeComponent_GetAttackVector_Statics::NewProp_Direction_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USAIMeleeComponent_GetAttackVector_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SAIMeleeComponent_eventGetAttackVector_Parms, Direction), Z_Construct_UEnum_FPSController_EMeleeAttackDirection, METADATA_PARAMS(Z_Construct_UFunction_USAIMeleeComponent_GetAttackVector_Statics::NewProp_Direction_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USAIMeleeComponent_GetAttackVector_Statics::NewProp_Direction_MetaData)) };
	void Z_Construct_UFunction_USAIMeleeComponent_GetAttackVector_Statics::NewProp_bUseControlRotation_SetBit(void* Obj)
	{
		((SAIMeleeComponent_eventGetAttackVector_Parms*)Obj)->bUseControlRotation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USAIMeleeComponent_GetAttackVector_Statics::NewProp_bUseControlRotation = { "bUseControlRotation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SAIMeleeComponent_eventGetAttackVector_Parms), &Z_Construct_UFunction_USAIMeleeComponent_GetAttackVector_Statics::NewProp_bUseControlRotation_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USAIMeleeComponent_GetAttackVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SAIMeleeComponent_eventGetAttackVector_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USAIMeleeComponent_GetAttackVector_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USAIMeleeComponent_GetAttackVector_Statics::NewProp_Direction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USAIMeleeComponent_GetAttackVector_Statics::NewProp_bUseControlRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USAIMeleeComponent_GetAttackVector_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USAIMeleeComponent_GetAttackVector_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SAIMeleeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USAIMeleeComponent_GetAttackVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USAIMeleeComponent, nullptr, "GetAttackVector", nullptr, nullptr, sizeof(SAIMeleeComponent_eventGetAttackVector_Parms), Z_Construct_UFunction_USAIMeleeComponent_GetAttackVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USAIMeleeComponent_GetAttackVector_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USAIMeleeComponent_GetAttackVector_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USAIMeleeComponent_GetAttackVector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USAIMeleeComponent_GetAttackVector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USAIMeleeComponent_GetAttackVector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USAIMeleeComponent_GetIdealAttackDirection_Statics
	{
		struct SAIMeleeComponent_eventGetIdealAttackDirection_Parms
		{
			const AActor* Actor;
			TEnumAsByte<EMeleeAttackDirection> ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Actor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USAIMeleeComponent_GetIdealAttackDirection_Statics::NewProp_Actor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USAIMeleeComponent_GetIdealAttackDirection_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SAIMeleeComponent_eventGetIdealAttackDirection_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USAIMeleeComponent_GetIdealAttackDirection_Statics::NewProp_Actor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USAIMeleeComponent_GetIdealAttackDirection_Statics::NewProp_Actor_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USAIMeleeComponent_GetIdealAttackDirection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SAIMeleeComponent_eventGetIdealAttackDirection_Parms, ReturnValue), Z_Construct_UEnum_FPSController_EMeleeAttackDirection, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USAIMeleeComponent_GetIdealAttackDirection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USAIMeleeComponent_GetIdealAttackDirection_Statics::NewProp_Actor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USAIMeleeComponent_GetIdealAttackDirection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USAIMeleeComponent_GetIdealAttackDirection_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SAIMeleeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USAIMeleeComponent_GetIdealAttackDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USAIMeleeComponent, nullptr, "GetIdealAttackDirection", nullptr, nullptr, sizeof(SAIMeleeComponent_eventGetIdealAttackDirection_Parms), Z_Construct_UFunction_USAIMeleeComponent_GetIdealAttackDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USAIMeleeComponent_GetIdealAttackDirection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USAIMeleeComponent_GetIdealAttackDirection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USAIMeleeComponent_GetIdealAttackDirection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USAIMeleeComponent_GetIdealAttackDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USAIMeleeComponent_GetIdealAttackDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USAIMeleeComponent_IsActorDead_Statics
	{
		struct SAIMeleeComponent_eventIsActorDead_Parms
		{
			AActor* InputtedActor;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InputtedActor;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USAIMeleeComponent_IsActorDead_Statics::NewProp_InputtedActor = { "InputtedActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SAIMeleeComponent_eventIsActorDead_Parms, InputtedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USAIMeleeComponent_IsActorDead_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SAIMeleeComponent_eventIsActorDead_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USAIMeleeComponent_IsActorDead_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SAIMeleeComponent_eventIsActorDead_Parms), &Z_Construct_UFunction_USAIMeleeComponent_IsActorDead_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USAIMeleeComponent_IsActorDead_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USAIMeleeComponent_IsActorDead_Statics::NewProp_InputtedActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USAIMeleeComponent_IsActorDead_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USAIMeleeComponent_IsActorDead_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SAIMeleeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USAIMeleeComponent_IsActorDead_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USAIMeleeComponent, nullptr, "IsActorDead", nullptr, nullptr, sizeof(SAIMeleeComponent_eventIsActorDead_Parms), Z_Construct_UFunction_USAIMeleeComponent_IsActorDead_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USAIMeleeComponent_IsActorDead_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USAIMeleeComponent_IsActorDead_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USAIMeleeComponent_IsActorDead_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USAIMeleeComponent_IsActorDead()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USAIMeleeComponent_IsActorDead_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USAIMeleeComponent_OnRep_MeleeHitData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USAIMeleeComponent_OnRep_MeleeHitData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SAIMeleeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USAIMeleeComponent_OnRep_MeleeHitData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USAIMeleeComponent, nullptr, "OnRep_MeleeHitData", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USAIMeleeComponent_OnRep_MeleeHitData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USAIMeleeComponent_OnRep_MeleeHitData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USAIMeleeComponent_OnRep_MeleeHitData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USAIMeleeComponent_OnRep_MeleeHitData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USAIMeleeComponent_PickAttack_Statics
	{
		struct SAIMeleeComponent_eventPickAttack_Parms
		{
			const AActor* TargetActor;
			uint8 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TargetActor;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USAIMeleeComponent_PickAttack_Statics::NewProp_TargetActor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USAIMeleeComponent_PickAttack_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SAIMeleeComponent_eventPickAttack_Parms, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USAIMeleeComponent_PickAttack_Statics::NewProp_TargetActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USAIMeleeComponent_PickAttack_Statics::NewProp_TargetActor_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USAIMeleeComponent_PickAttack_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SAIMeleeComponent_eventPickAttack_Parms, ReturnValue), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USAIMeleeComponent_PickAttack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USAIMeleeComponent_PickAttack_Statics::NewProp_TargetActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USAIMeleeComponent_PickAttack_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USAIMeleeComponent_PickAttack_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SAIMeleeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USAIMeleeComponent_PickAttack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USAIMeleeComponent, nullptr, "PickAttack", nullptr, nullptr, sizeof(SAIMeleeComponent_eventPickAttack_Parms), Z_Construct_UFunction_USAIMeleeComponent_PickAttack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USAIMeleeComponent_PickAttack_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USAIMeleeComponent_PickAttack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USAIMeleeComponent_PickAttack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USAIMeleeComponent_PickAttack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USAIMeleeComponent_PickAttack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USAIMeleeComponent_StartAttack_Statics
	{
		struct SAIMeleeComponent_eventStartAttack_Parms
		{
			TEnumAsByte<EMeleeAttackDirection> Direction;
			uint8 AttackIndex;
			bool bForceAttack;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Direction;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AttackIndex;
		static void NewProp_bForceAttack_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bForceAttack;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USAIMeleeComponent_StartAttack_Statics::NewProp_Direction_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USAIMeleeComponent_StartAttack_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SAIMeleeComponent_eventStartAttack_Parms, Direction), Z_Construct_UEnum_FPSController_EMeleeAttackDirection, METADATA_PARAMS(Z_Construct_UFunction_USAIMeleeComponent_StartAttack_Statics::NewProp_Direction_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USAIMeleeComponent_StartAttack_Statics::NewProp_Direction_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USAIMeleeComponent_StartAttack_Statics::NewProp_AttackIndex = { "AttackIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SAIMeleeComponent_eventStartAttack_Parms, AttackIndex), nullptr, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USAIMeleeComponent_StartAttack_Statics::NewProp_bForceAttack_SetBit(void* Obj)
	{
		((SAIMeleeComponent_eventStartAttack_Parms*)Obj)->bForceAttack = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USAIMeleeComponent_StartAttack_Statics::NewProp_bForceAttack = { "bForceAttack", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SAIMeleeComponent_eventStartAttack_Parms), &Z_Construct_UFunction_USAIMeleeComponent_StartAttack_Statics::NewProp_bForceAttack_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USAIMeleeComponent_StartAttack_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SAIMeleeComponent_eventStartAttack_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USAIMeleeComponent_StartAttack_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SAIMeleeComponent_eventStartAttack_Parms), &Z_Construct_UFunction_USAIMeleeComponent_StartAttack_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USAIMeleeComponent_StartAttack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USAIMeleeComponent_StartAttack_Statics::NewProp_Direction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USAIMeleeComponent_StartAttack_Statics::NewProp_AttackIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USAIMeleeComponent_StartAttack_Statics::NewProp_bForceAttack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USAIMeleeComponent_StartAttack_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USAIMeleeComponent_StartAttack_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SAIMeleeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USAIMeleeComponent_StartAttack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USAIMeleeComponent, nullptr, "StartAttack", nullptr, nullptr, sizeof(SAIMeleeComponent_eventStartAttack_Parms), Z_Construct_UFunction_USAIMeleeComponent_StartAttack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USAIMeleeComponent_StartAttack_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USAIMeleeComponent_StartAttack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USAIMeleeComponent_StartAttack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USAIMeleeComponent_StartAttack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USAIMeleeComponent_StartAttack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USAIMeleeComponent_NoRegister()
	{
		return USAIMeleeComponent::StaticClass();
	}
	struct Z_Construct_UClass_USAIMeleeComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeleeHitData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MeleeHitData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnAttackStarted_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAttackStarted;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnAttackHitActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAttackHitActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnAttackCompleted_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAttackCompleted;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnAttackCanceled_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAttackCanceled;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Attacks_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Attacks_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Attacks;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttackDamageType_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_AttackDamageType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DetectableObjectTypes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DetectableObjectTypes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DetectableObjectTypes;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HitActors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitActors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_HitActors;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bWasAttacking_MetaData[];
#endif
		static void NewProp_bWasAttacking_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWasAttacking;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bWantsAttack_MetaData[];
#endif
		static void NewProp_bWantsAttack_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWantsAttack;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsAttacking_MetaData[];
#endif
		static void NewProp_bIsAttacking_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsAttacking;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentAttackTimer_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentAttackTimer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttackDamageWeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AttackDamageWeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttackDirectionWeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AttackDirectionWeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttackRandomWeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AttackRandomWeight;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USAIMeleeComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AISentience,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USAIMeleeComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USAIMeleeComponent_Attack, "Attack" }, // 190264665
		{ &Z_Construct_UFunction_USAIMeleeComponent_CancelAttack, "CancelAttack" }, // 2536480028
		{ &Z_Construct_UFunction_USAIMeleeComponent_CanStartAttack, "CanStartAttack" }, // 2728525560
		{ &Z_Construct_UFunction_USAIMeleeComponent_CosmeticAttack, "CosmeticAttack" }, // 1287718375
		{ &Z_Construct_UFunction_USAIMeleeComponent_CosmeticAttackCanceled, "CosmeticAttackCanceled" }, // 340215955
		{ &Z_Construct_UFunction_USAIMeleeComponent_CosmeticAttackFinished, "CosmeticAttackFinished" }, // 904448308
		{ &Z_Construct_UFunction_USAIMeleeComponent_CosmeticAttackHitActor, "CosmeticAttackHitActor" }, // 108278514
		{ &Z_Construct_UFunction_USAIMeleeComponent_GetAttackVector, "GetAttackVector" }, // 2929186448
		{ &Z_Construct_UFunction_USAIMeleeComponent_GetIdealAttackDirection, "GetIdealAttackDirection" }, // 1567339886
		{ &Z_Construct_UFunction_USAIMeleeComponent_IsActorDead, "IsActorDead" }, // 2956397228
		{ &Z_Construct_UDelegateFunction_USAIMeleeComponent_OnAttackCompleted__DelegateSignature, "OnAttackCompleted__DelegateSignature" }, // 3823354104
		{ &Z_Construct_UDelegateFunction_USAIMeleeComponent_OnAttackStarted__DelegateSignature, "OnAttackStarted__DelegateSignature" }, // 4197289834
		{ &Z_Construct_UFunction_USAIMeleeComponent_OnRep_MeleeHitData, "OnRep_MeleeHitData" }, // 4176663
		{ &Z_Construct_UFunction_USAIMeleeComponent_PickAttack, "PickAttack" }, // 1296344128
		{ &Z_Construct_UFunction_USAIMeleeComponent_StartAttack, "StartAttack" }, // 3749398350
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USAIMeleeComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "SAIMeleeComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SAIMeleeComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USAIMeleeComponent_Statics::NewProp_MeleeHitData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAIMeleeComponent" },
		{ "ModuleRelativePath", "Public/SAIMeleeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USAIMeleeComponent_Statics::NewProp_MeleeHitData = { "MeleeHitData", "OnRep_MeleeHitData", (EPropertyFlags)0x0010008100002025, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USAIMeleeComponent, MeleeHitData), Z_Construct_UScriptStruct_FMeleeHitData, METADATA_PARAMS(Z_Construct_UClass_USAIMeleeComponent_Statics::NewProp_MeleeHitData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USAIMeleeComponent_Statics::NewProp_MeleeHitData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USAIMeleeComponent_Statics::NewProp_OnAttackStarted_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAIMeleeComponent" },
		{ "ModuleRelativePath", "Public/SAIMeleeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USAIMeleeComponent_Statics::NewProp_OnAttackStarted = { "OnAttackStarted", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USAIMeleeComponent, OnAttackStarted), Z_Construct_UDelegateFunction_USAIMeleeComponent_OnAttackStarted__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USAIMeleeComponent_Statics::NewProp_OnAttackStarted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USAIMeleeComponent_Statics::NewProp_OnAttackStarted_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USAIMeleeComponent_Statics::NewProp_OnAttackHitActor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAIMeleeComponent" },
		{ "ModuleRelativePath", "Public/SAIMeleeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USAIMeleeComponent_Statics::NewProp_OnAttackHitActor = { "OnAttackHitActor", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USAIMeleeComponent, OnAttackHitActor), Z_Construct_UDelegateFunction_USAIMeleeComponent_OnAttackCompleted__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USAIMeleeComponent_Statics::NewProp_OnAttackHitActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USAIMeleeComponent_Statics::NewProp_OnAttackHitActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USAIMeleeComponent_Statics::NewProp_OnAttackCompleted_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAIMeleeComponent" },
		{ "ModuleRelativePath", "Public/SAIMeleeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USAIMeleeComponent_Statics::NewProp_OnAttackCompleted = { "OnAttackCompleted", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USAIMeleeComponent, OnAttackCompleted), Z_Construct_UDelegateFunction_USAIMeleeComponent_OnAttackCompleted__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USAIMeleeComponent_Statics::NewProp_OnAttackCompleted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USAIMeleeComponent_Statics::NewProp_OnAttackCompleted_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USAIMeleeComponent_Statics::NewProp_OnAttackCanceled_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAIMeleeComponent" },
		{ "ModuleRelativePath", "Public/SAIMeleeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USAIMeleeComponent_Statics::NewProp_OnAttackCanceled = { "OnAttackCanceled", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USAIMeleeComponent, OnAttackCanceled), Z_Construct_UDelegateFunction_USAIMeleeComponent_OnAttackCompleted__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USAIMeleeComponent_Statics::NewProp_OnAttackCanceled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USAIMeleeComponent_Statics::NewProp_OnAttackCanceled_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USAIMeleeComponent_Statics::NewProp_Attacks_Inner = { "Attacks", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAIMeleeAttackType, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USAIMeleeComponent_Statics::NewProp_Attacks_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAIMeleeComponent" },
		{ "ModuleRelativePath", "Public/SAIMeleeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USAIMeleeComponent_Statics::NewProp_Attacks = { "Attacks", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USAIMeleeComponent, Attacks), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USAIMeleeComponent_Statics::NewProp_Attacks_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USAIMeleeComponent_Statics::NewProp_Attacks_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USAIMeleeComponent_Statics::NewProp_AttackDamageType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAIMeleeComponent" },
		{ "ModuleRelativePath", "Public/SAIMeleeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USAIMeleeComponent_Statics::NewProp_AttackDamageType = { "AttackDamageType", nullptr, (EPropertyFlags)0x00240c0000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USAIMeleeComponent, AttackDamageType), Z_Construct_UClass_UDamageType_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USAIMeleeComponent_Statics::NewProp_AttackDamageType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USAIMeleeComponent_Statics::NewProp_AttackDamageType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USAIMeleeComponent_Statics::NewProp_DetectableObjectTypes_Inner = { "DetectableObjectTypes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_Engine_EObjectTypeQuery, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USAIMeleeComponent_Statics::NewProp_DetectableObjectTypes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAIMeleeComponent" },
		{ "ModuleRelativePath", "Public/SAIMeleeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USAIMeleeComponent_Statics::NewProp_DetectableObjectTypes = { "DetectableObjectTypes", nullptr, (EPropertyFlags)0x00200c0000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USAIMeleeComponent, DetectableObjectTypes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USAIMeleeComponent_Statics::NewProp_DetectableObjectTypes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USAIMeleeComponent_Statics::NewProp_DetectableObjectTypes_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USAIMeleeComponent_Statics::NewProp_HitActors_Inner = { "HitActors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USAIMeleeComponent_Statics::NewProp_HitActors_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAIMeleeComponent" },
		{ "ModuleRelativePath", "Public/SAIMeleeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USAIMeleeComponent_Statics::NewProp_HitActors = { "HitActors", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USAIMeleeComponent, HitActors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USAIMeleeComponent_Statics::NewProp_HitActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USAIMeleeComponent_Statics::NewProp_HitActors_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USAIMeleeComponent_Statics::NewProp_bWasAttacking_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAIMeleeComponent" },
		{ "ModuleRelativePath", "Public/SAIMeleeComponent.h" },
	};
#endif
	void Z_Construct_UClass_USAIMeleeComponent_Statics::NewProp_bWasAttacking_SetBit(void* Obj)
	{
		((USAIMeleeComponent*)Obj)->bWasAttacking = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USAIMeleeComponent_Statics::NewProp_bWasAttacking = { "bWasAttacking", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USAIMeleeComponent), &Z_Construct_UClass_USAIMeleeComponent_Statics::NewProp_bWasAttacking_SetBit, METADATA_PARAMS(Z_Construct_UClass_USAIMeleeComponent_Statics::NewProp_bWasAttacking_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USAIMeleeComponent_Statics::NewProp_bWasAttacking_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USAIMeleeComponent_Statics::NewProp_bWantsAttack_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAIMeleeComponent" },
		{ "ModuleRelativePath", "Public/SAIMeleeComponent.h" },
	};
#endif
	void Z_Construct_UClass_USAIMeleeComponent_Statics::NewProp_bWantsAttack_SetBit(void* Obj)
	{
		((USAIMeleeComponent*)Obj)->bWantsAttack = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USAIMeleeComponent_Statics::NewProp_bWantsAttack = { "bWantsAttack", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USAIMeleeComponent), &Z_Construct_UClass_USAIMeleeComponent_Statics::NewProp_bWantsAttack_SetBit, METADATA_PARAMS(Z_Construct_UClass_USAIMeleeComponent_Statics::NewProp_bWantsAttack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USAIMeleeComponent_Statics::NewProp_bWantsAttack_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USAIMeleeComponent_Statics::NewProp_bIsAttacking_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAIMeleeComponent" },
		{ "ModuleRelativePath", "Public/SAIMeleeComponent.h" },
	};
#endif
	void Z_Construct_UClass_USAIMeleeComponent_Statics::NewProp_bIsAttacking_SetBit(void* Obj)
	{
		((USAIMeleeComponent*)Obj)->bIsAttacking = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USAIMeleeComponent_Statics::NewProp_bIsAttacking = { "bIsAttacking", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USAIMeleeComponent), &Z_Construct_UClass_USAIMeleeComponent_Statics::NewProp_bIsAttacking_SetBit, METADATA_PARAMS(Z_Construct_UClass_USAIMeleeComponent_Statics::NewProp_bIsAttacking_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USAIMeleeComponent_Statics::NewProp_bIsAttacking_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USAIMeleeComponent_Statics::NewProp_CurrentAttackTimer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAIMeleeComponent" },
		{ "ModuleRelativePath", "Public/SAIMeleeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USAIMeleeComponent_Statics::NewProp_CurrentAttackTimer = { "CurrentAttackTimer", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USAIMeleeComponent, CurrentAttackTimer), METADATA_PARAMS(Z_Construct_UClass_USAIMeleeComponent_Statics::NewProp_CurrentAttackTimer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USAIMeleeComponent_Statics::NewProp_CurrentAttackTimer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USAIMeleeComponent_Statics::NewProp_AttackDamageWeight_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAIMeleeComponent" },
		{ "ModuleRelativePath", "Public/SAIMeleeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USAIMeleeComponent_Statics::NewProp_AttackDamageWeight = { "AttackDamageWeight", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USAIMeleeComponent, AttackDamageWeight), METADATA_PARAMS(Z_Construct_UClass_USAIMeleeComponent_Statics::NewProp_AttackDamageWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USAIMeleeComponent_Statics::NewProp_AttackDamageWeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USAIMeleeComponent_Statics::NewProp_AttackDirectionWeight_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAIMeleeComponent" },
		{ "ModuleRelativePath", "Public/SAIMeleeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USAIMeleeComponent_Statics::NewProp_AttackDirectionWeight = { "AttackDirectionWeight", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USAIMeleeComponent, AttackDirectionWeight), METADATA_PARAMS(Z_Construct_UClass_USAIMeleeComponent_Statics::NewProp_AttackDirectionWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USAIMeleeComponent_Statics::NewProp_AttackDirectionWeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USAIMeleeComponent_Statics::NewProp_AttackRandomWeight_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAIMeleeComponent" },
		{ "ModuleRelativePath", "Public/SAIMeleeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USAIMeleeComponent_Statics::NewProp_AttackRandomWeight = { "AttackRandomWeight", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USAIMeleeComponent, AttackRandomWeight), METADATA_PARAMS(Z_Construct_UClass_USAIMeleeComponent_Statics::NewProp_AttackRandomWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USAIMeleeComponent_Statics::NewProp_AttackRandomWeight_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USAIMeleeComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USAIMeleeComponent_Statics::NewProp_MeleeHitData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USAIMeleeComponent_Statics::NewProp_OnAttackStarted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USAIMeleeComponent_Statics::NewProp_OnAttackHitActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USAIMeleeComponent_Statics::NewProp_OnAttackCompleted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USAIMeleeComponent_Statics::NewProp_OnAttackCanceled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USAIMeleeComponent_Statics::NewProp_Attacks_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USAIMeleeComponent_Statics::NewProp_Attacks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USAIMeleeComponent_Statics::NewProp_AttackDamageType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USAIMeleeComponent_Statics::NewProp_DetectableObjectTypes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USAIMeleeComponent_Statics::NewProp_DetectableObjectTypes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USAIMeleeComponent_Statics::NewProp_HitActors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USAIMeleeComponent_Statics::NewProp_HitActors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USAIMeleeComponent_Statics::NewProp_bWasAttacking,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USAIMeleeComponent_Statics::NewProp_bWantsAttack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USAIMeleeComponent_Statics::NewProp_bIsAttacking,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USAIMeleeComponent_Statics::NewProp_CurrentAttackTimer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USAIMeleeComponent_Statics::NewProp_AttackDamageWeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USAIMeleeComponent_Statics::NewProp_AttackDirectionWeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USAIMeleeComponent_Statics::NewProp_AttackRandomWeight,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USAIMeleeComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USAIMeleeComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USAIMeleeComponent_Statics::ClassParams = {
		&USAIMeleeComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USAIMeleeComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USAIMeleeComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USAIMeleeComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USAIMeleeComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USAIMeleeComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USAIMeleeComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USAIMeleeComponent, 1171365263);
	template<> AISENTIENCE_API UClass* StaticClass<USAIMeleeComponent>()
	{
		return USAIMeleeComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USAIMeleeComponent(Z_Construct_UClass_USAIMeleeComponent, &USAIMeleeComponent::StaticClass, TEXT("/Script/AISentience"), TEXT("USAIMeleeComponent"), false, nullptr, nullptr, nullptr);

	void USAIMeleeComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_MeleeHitData(TEXT("MeleeHitData"));

		const bool bIsValid = true
			&& Name_MeleeHitData == ClassReps[(int32)ENetFields_Private::MeleeHitData].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in USAIMeleeComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USAIMeleeComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
