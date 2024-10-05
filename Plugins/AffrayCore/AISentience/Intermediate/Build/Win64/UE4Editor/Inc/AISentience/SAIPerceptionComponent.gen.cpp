// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AISentience/Public/SAIPerceptionComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSAIPerceptionComponent() {}
// Cross Module References
	AISENTIENCE_API UClass* Z_Construct_UClass_USAIPerceptionComponent_NoRegister();
	AISENTIENCE_API UClass* Z_Construct_UClass_USAIPerceptionComponent();
	AIMODULE_API UClass* Z_Construct_UClass_UAIPerceptionComponent();
	UPackage* Z_Construct_UPackage__Script_AISentience();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	AIMODULE_API UClass* Z_Construct_UClass_UAISense_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USAIPerceptionComponent::execGetHostileActorsBySenseNew)
	{
		P_GET_OBJECT(UClass,Z_Param_SenseToFilterBy);
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_OutActors);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetHostileActorsBySenseNew(Z_Param_SenseToFilterBy,Z_Param_Out_OutActors);
		P_NATIVE_END;
	}
	void USAIPerceptionComponent::StaticRegisterNativesUSAIPerceptionComponent()
	{
		UClass* Class = USAIPerceptionComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetHostileActorsBySenseNew", &USAIPerceptionComponent::execGetHostileActorsBySenseNew },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USAIPerceptionComponent_GetHostileActorsBySenseNew_Statics
	{
		struct SAIPerceptionComponent_eventGetHostileActorsBySenseNew_Parms
		{
			TSubclassOf<UAISense>  SenseToFilterBy;
			TArray<AActor*> OutActors;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_SenseToFilterBy;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutActors_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutActors;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_USAIPerceptionComponent_GetHostileActorsBySenseNew_Statics::NewProp_SenseToFilterBy = { "SenseToFilterBy", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SAIPerceptionComponent_eventGetHostileActorsBySenseNew_Parms, SenseToFilterBy), Z_Construct_UClass_UAISense_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USAIPerceptionComponent_GetHostileActorsBySenseNew_Statics::NewProp_OutActors_Inner = { "OutActors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USAIPerceptionComponent_GetHostileActorsBySenseNew_Statics::NewProp_OutActors = { "OutActors", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SAIPerceptionComponent_eventGetHostileActorsBySenseNew_Parms, OutActors), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USAIPerceptionComponent_GetHostileActorsBySenseNew_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USAIPerceptionComponent_GetHostileActorsBySenseNew_Statics::NewProp_SenseToFilterBy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USAIPerceptionComponent_GetHostileActorsBySenseNew_Statics::NewProp_OutActors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USAIPerceptionComponent_GetHostileActorsBySenseNew_Statics::NewProp_OutActors,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USAIPerceptionComponent_GetHostileActorsBySenseNew_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SAIPerceptionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USAIPerceptionComponent_GetHostileActorsBySenseNew_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USAIPerceptionComponent, nullptr, "GetHostileActorsBySenseNew", nullptr, nullptr, sizeof(SAIPerceptionComponent_eventGetHostileActorsBySenseNew_Parms), Z_Construct_UFunction_USAIPerceptionComponent_GetHostileActorsBySenseNew_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USAIPerceptionComponent_GetHostileActorsBySenseNew_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USAIPerceptionComponent_GetHostileActorsBySenseNew_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USAIPerceptionComponent_GetHostileActorsBySenseNew_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USAIPerceptionComponent_GetHostileActorsBySenseNew()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USAIPerceptionComponent_GetHostileActorsBySenseNew_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USAIPerceptionComponent_NoRegister()
	{
		return USAIPerceptionComponent::StaticClass();
	}
	struct Z_Construct_UClass_USAIPerceptionComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USAIPerceptionComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAIPerceptionComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AISentience,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USAIPerceptionComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USAIPerceptionComponent_GetHostileActorsBySenseNew, "GetHostileActorsBySenseNew" }, // 2269375151
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USAIPerceptionComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Activation Collision" },
		{ "IncludePath", "SAIPerceptionComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SAIPerceptionComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USAIPerceptionComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USAIPerceptionComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USAIPerceptionComponent_Statics::ClassParams = {
		&USAIPerceptionComponent::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USAIPerceptionComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USAIPerceptionComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USAIPerceptionComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USAIPerceptionComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USAIPerceptionComponent, 3571250522);
	template<> AISENTIENCE_API UClass* StaticClass<USAIPerceptionComponent>()
	{
		return USAIPerceptionComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USAIPerceptionComponent(Z_Construct_UClass_USAIPerceptionComponent, &USAIPerceptionComponent::StaticClass, TEXT("/Script/AISentience"), TEXT("USAIPerceptionComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USAIPerceptionComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
