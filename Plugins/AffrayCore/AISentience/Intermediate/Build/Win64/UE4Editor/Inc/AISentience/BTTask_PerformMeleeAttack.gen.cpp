// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AISentience/Public/BTTask_PerformMeleeAttack.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTask_PerformMeleeAttack() {}
// Cross Module References
	AISENTIENCE_API UClass* Z_Construct_UClass_UBTTask_PerformMeleeAttack_NoRegister();
	AISENTIENCE_API UClass* Z_Construct_UClass_UBTTask_PerformMeleeAttack();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	UPackage* Z_Construct_UPackage__Script_AISentience();
	AISENTIENCE_API UClass* Z_Construct_UClass_USAIMeleeComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	FPSCONTROLLER_API UScriptStruct* Z_Construct_UScriptStruct_FAIMeleeAttackType();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
// End Cross Module References
	DEFINE_FUNCTION(UBTTask_PerformMeleeAttack::execOnAttackFinished)
	{
		P_GET_OBJECT(USAIMeleeComponent,Z_Param_AttackingComponent);
		P_GET_OBJECT(AActor,Z_Param_AttackedActor);
		P_GET_PROPERTY(FByteProperty,Z_Param_AttackIndex);
		P_GET_STRUCT(FAIMeleeAttackType,Z_Param_Attack);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnAttackFinished(Z_Param_AttackingComponent,Z_Param_AttackedActor,Z_Param_AttackIndex,Z_Param_Attack);
		P_NATIVE_END;
	}
	void UBTTask_PerformMeleeAttack::StaticRegisterNativesUBTTask_PerformMeleeAttack()
	{
		UClass* Class = UBTTask_PerformMeleeAttack::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnAttackFinished", &UBTTask_PerformMeleeAttack::execOnAttackFinished },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBTTask_PerformMeleeAttack_OnAttackFinished_Statics
	{
		struct BTTask_PerformMeleeAttack_eventOnAttackFinished_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBTTask_PerformMeleeAttack_OnAttackFinished_Statics::NewProp_AttackingComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBTTask_PerformMeleeAttack_OnAttackFinished_Statics::NewProp_AttackingComponent = { "AttackingComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BTTask_PerformMeleeAttack_eventOnAttackFinished_Parms, AttackingComponent), Z_Construct_UClass_USAIMeleeComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UBTTask_PerformMeleeAttack_OnAttackFinished_Statics::NewProp_AttackingComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBTTask_PerformMeleeAttack_OnAttackFinished_Statics::NewProp_AttackingComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBTTask_PerformMeleeAttack_OnAttackFinished_Statics::NewProp_AttackedActor = { "AttackedActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BTTask_PerformMeleeAttack_eventOnAttackFinished_Parms, AttackedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBTTask_PerformMeleeAttack_OnAttackFinished_Statics::NewProp_AttackIndex = { "AttackIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BTTask_PerformMeleeAttack_eventOnAttackFinished_Parms, AttackIndex), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBTTask_PerformMeleeAttack_OnAttackFinished_Statics::NewProp_Attack = { "Attack", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BTTask_PerformMeleeAttack_eventOnAttackFinished_Parms, Attack), Z_Construct_UScriptStruct_FAIMeleeAttackType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBTTask_PerformMeleeAttack_OnAttackFinished_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTTask_PerformMeleeAttack_OnAttackFinished_Statics::NewProp_AttackingComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTTask_PerformMeleeAttack_OnAttackFinished_Statics::NewProp_AttackedActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTTask_PerformMeleeAttack_OnAttackFinished_Statics::NewProp_AttackIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTTask_PerformMeleeAttack_OnAttackFinished_Statics::NewProp_Attack,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBTTask_PerformMeleeAttack_OnAttackFinished_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BTTask_PerformMeleeAttack.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBTTask_PerformMeleeAttack_OnAttackFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTTask_PerformMeleeAttack, nullptr, "OnAttackFinished", nullptr, nullptr, sizeof(BTTask_PerformMeleeAttack_eventOnAttackFinished_Parms), Z_Construct_UFunction_UBTTask_PerformMeleeAttack_OnAttackFinished_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBTTask_PerformMeleeAttack_OnAttackFinished_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBTTask_PerformMeleeAttack_OnAttackFinished_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBTTask_PerformMeleeAttack_OnAttackFinished_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBTTask_PerformMeleeAttack_OnAttackFinished()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBTTask_PerformMeleeAttack_OnAttackFinished_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBTTask_PerformMeleeAttack_NoRegister()
	{
		return UBTTask_PerformMeleeAttack::StaticClass();
	}
	struct Z_Construct_UClass_UBTTask_PerformMeleeAttack_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Blackboard_Target_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Blackboard_Target;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTTask_PerformMeleeAttack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
		(UObject* (*)())Z_Construct_UPackage__Script_AISentience,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBTTask_PerformMeleeAttack_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBTTask_PerformMeleeAttack_OnAttackFinished, "OnAttackFinished" }, // 1594025223
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_PerformMeleeAttack_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "BTTask_PerformMeleeAttack.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/BTTask_PerformMeleeAttack.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_PerformMeleeAttack_Statics::NewProp_Blackboard_Target_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BTTask_PerformMeleeAttack" },
		{ "ModuleRelativePath", "Public/BTTask_PerformMeleeAttack.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTTask_PerformMeleeAttack_Statics::NewProp_Blackboard_Target = { "Blackboard_Target", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTTask_PerformMeleeAttack, Blackboard_Target), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(Z_Construct_UClass_UBTTask_PerformMeleeAttack_Statics::NewProp_Blackboard_Target_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_PerformMeleeAttack_Statics::NewProp_Blackboard_Target_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTTask_PerformMeleeAttack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_PerformMeleeAttack_Statics::NewProp_Blackboard_Target,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTTask_PerformMeleeAttack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_PerformMeleeAttack>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBTTask_PerformMeleeAttack_Statics::ClassParams = {
		&UBTTask_PerformMeleeAttack::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UBTTask_PerformMeleeAttack_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_PerformMeleeAttack_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBTTask_PerformMeleeAttack_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_PerformMeleeAttack_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTTask_PerformMeleeAttack()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBTTask_PerformMeleeAttack_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBTTask_PerformMeleeAttack, 3338931988);
	template<> AISENTIENCE_API UClass* StaticClass<UBTTask_PerformMeleeAttack>()
	{
		return UBTTask_PerformMeleeAttack::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTTask_PerformMeleeAttack(Z_Construct_UClass_UBTTask_PerformMeleeAttack, &UBTTask_PerformMeleeAttack::StaticClass, TEXT("/Script/AISentience"), TEXT("UBTTask_PerformMeleeAttack"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_PerformMeleeAttack);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
