// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AISentience/Public/SAIMapInteraction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSAIMapInteraction() {}
// Cross Module References
	AISENTIENCE_API UClass* Z_Construct_UClass_ASAIMapInteraction_NoRegister();
	AISENTIENCE_API UClass* Z_Construct_UClass_ASAIMapInteraction();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_AISentience();
	AISENTIENCE_API UScriptStruct* Z_Construct_UScriptStruct_FAIInteractionAnimations();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ASAIMapInteraction::execGetChanceToInteract)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetChanceToInteract();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASAIMapInteraction::execGetInteractionAnims)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAIInteractionAnimations*)Z_Param__Result=P_THIS->GetInteractionAnims();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASAIMapInteraction::execIsLooping)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsLooping();
		P_NATIVE_END;
	}
	void ASAIMapInteraction::StaticRegisterNativesASAIMapInteraction()
	{
		UClass* Class = ASAIMapInteraction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetChanceToInteract", &ASAIMapInteraction::execGetChanceToInteract },
			{ "GetInteractionAnims", &ASAIMapInteraction::execGetInteractionAnims },
			{ "IsLooping", &ASAIMapInteraction::execIsLooping },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASAIMapInteraction_GetChanceToInteract_Statics
	{
		struct SAIMapInteraction_eventGetChanceToInteract_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASAIMapInteraction_GetChanceToInteract_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SAIMapInteraction_eventGetChanceToInteract_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASAIMapInteraction_GetChanceToInteract_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASAIMapInteraction_GetChanceToInteract_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASAIMapInteraction_GetChanceToInteract_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SAIMapInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASAIMapInteraction_GetChanceToInteract_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASAIMapInteraction, nullptr, "GetChanceToInteract", nullptr, nullptr, sizeof(SAIMapInteraction_eventGetChanceToInteract_Parms), Z_Construct_UFunction_ASAIMapInteraction_GetChanceToInteract_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASAIMapInteraction_GetChanceToInteract_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASAIMapInteraction_GetChanceToInteract_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASAIMapInteraction_GetChanceToInteract_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASAIMapInteraction_GetChanceToInteract()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASAIMapInteraction_GetChanceToInteract_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASAIMapInteraction_GetInteractionAnims_Statics
	{
		struct SAIMapInteraction_eventGetInteractionAnims_Parms
		{
			FAIInteractionAnimations ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASAIMapInteraction_GetInteractionAnims_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SAIMapInteraction_eventGetInteractionAnims_Parms, ReturnValue), Z_Construct_UScriptStruct_FAIInteractionAnimations, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASAIMapInteraction_GetInteractionAnims_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASAIMapInteraction_GetInteractionAnims_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASAIMapInteraction_GetInteractionAnims_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SAIMapInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASAIMapInteraction_GetInteractionAnims_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASAIMapInteraction, nullptr, "GetInteractionAnims", nullptr, nullptr, sizeof(SAIMapInteraction_eventGetInteractionAnims_Parms), Z_Construct_UFunction_ASAIMapInteraction_GetInteractionAnims_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASAIMapInteraction_GetInteractionAnims_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASAIMapInteraction_GetInteractionAnims_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASAIMapInteraction_GetInteractionAnims_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASAIMapInteraction_GetInteractionAnims()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASAIMapInteraction_GetInteractionAnims_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASAIMapInteraction_IsLooping_Statics
	{
		struct SAIMapInteraction_eventIsLooping_Parms
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
	void Z_Construct_UFunction_ASAIMapInteraction_IsLooping_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SAIMapInteraction_eventIsLooping_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASAIMapInteraction_IsLooping_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SAIMapInteraction_eventIsLooping_Parms), &Z_Construct_UFunction_ASAIMapInteraction_IsLooping_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASAIMapInteraction_IsLooping_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASAIMapInteraction_IsLooping_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASAIMapInteraction_IsLooping_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SAIMapInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASAIMapInteraction_IsLooping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASAIMapInteraction, nullptr, "IsLooping", nullptr, nullptr, sizeof(SAIMapInteraction_eventIsLooping_Parms), Z_Construct_UFunction_ASAIMapInteraction_IsLooping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASAIMapInteraction_IsLooping_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASAIMapInteraction_IsLooping_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASAIMapInteraction_IsLooping_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASAIMapInteraction_IsLooping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASAIMapInteraction_IsLooping_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASAIMapInteraction_NoRegister()
	{
		return ASAIMapInteraction::StaticClass();
	}
	struct Z_Construct_UClass_ASAIMapInteraction_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MapInteraction_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MapInteraction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractionRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InteractionRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChanceToInteract_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ChanceToInteract;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShouldLoop_MetaData[];
#endif
		static void NewProp_bShouldLoop_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShouldLoop;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractionAnims_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InteractionAnims;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASAIMapInteraction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_AISentience,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASAIMapInteraction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASAIMapInteraction_GetChanceToInteract, "GetChanceToInteract" }, // 3340819030
		{ &Z_Construct_UFunction_ASAIMapInteraction_GetInteractionAnims, "GetInteractionAnims" }, // 3769763990
		{ &Z_Construct_UFunction_ASAIMapInteraction_IsLooping, "IsLooping" }, // 207650617
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASAIMapInteraction_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SAIMapInteraction.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SAIMapInteraction.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASAIMapInteraction_Statics::NewProp_MapInteraction_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAIMapInteraction" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SAIMapInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASAIMapInteraction_Statics::NewProp_MapInteraction = { "MapInteraction", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASAIMapInteraction, MapInteraction), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASAIMapInteraction_Statics::NewProp_MapInteraction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASAIMapInteraction_Statics::NewProp_MapInteraction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASAIMapInteraction_Statics::NewProp_InteractionRange_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAIMapInteraction" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SAIMapInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASAIMapInteraction_Statics::NewProp_InteractionRange = { "InteractionRange", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASAIMapInteraction, InteractionRange), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASAIMapInteraction_Statics::NewProp_InteractionRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASAIMapInteraction_Statics::NewProp_InteractionRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASAIMapInteraction_Statics::NewProp_ChanceToInteract_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAIMapInteraction" },
		{ "ModuleRelativePath", "Public/SAIMapInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASAIMapInteraction_Statics::NewProp_ChanceToInteract = { "ChanceToInteract", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASAIMapInteraction, ChanceToInteract), METADATA_PARAMS(Z_Construct_UClass_ASAIMapInteraction_Statics::NewProp_ChanceToInteract_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASAIMapInteraction_Statics::NewProp_ChanceToInteract_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASAIMapInteraction_Statics::NewProp_bShouldLoop_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAIMapInteraction" },
		{ "ModuleRelativePath", "Public/SAIMapInteraction.h" },
	};
#endif
	void Z_Construct_UClass_ASAIMapInteraction_Statics::NewProp_bShouldLoop_SetBit(void* Obj)
	{
		((ASAIMapInteraction*)Obj)->bShouldLoop = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASAIMapInteraction_Statics::NewProp_bShouldLoop = { "bShouldLoop", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASAIMapInteraction), &Z_Construct_UClass_ASAIMapInteraction_Statics::NewProp_bShouldLoop_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASAIMapInteraction_Statics::NewProp_bShouldLoop_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASAIMapInteraction_Statics::NewProp_bShouldLoop_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASAIMapInteraction_Statics::NewProp_InteractionAnims_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAIMapInteraction" },
		{ "ModuleRelativePath", "Public/SAIMapInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASAIMapInteraction_Statics::NewProp_InteractionAnims = { "InteractionAnims", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASAIMapInteraction, InteractionAnims), Z_Construct_UScriptStruct_FAIInteractionAnimations, METADATA_PARAMS(Z_Construct_UClass_ASAIMapInteraction_Statics::NewProp_InteractionAnims_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASAIMapInteraction_Statics::NewProp_InteractionAnims_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASAIMapInteraction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASAIMapInteraction_Statics::NewProp_MapInteraction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASAIMapInteraction_Statics::NewProp_InteractionRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASAIMapInteraction_Statics::NewProp_ChanceToInteract,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASAIMapInteraction_Statics::NewProp_bShouldLoop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASAIMapInteraction_Statics::NewProp_InteractionAnims,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASAIMapInteraction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASAIMapInteraction>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASAIMapInteraction_Statics::ClassParams = {
		&ASAIMapInteraction::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASAIMapInteraction_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASAIMapInteraction_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASAIMapInteraction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASAIMapInteraction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASAIMapInteraction()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASAIMapInteraction_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASAIMapInteraction, 3841225212);
	template<> AISENTIENCE_API UClass* StaticClass<ASAIMapInteraction>()
	{
		return ASAIMapInteraction::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASAIMapInteraction(Z_Construct_UClass_ASAIMapInteraction, &ASAIMapInteraction::StaticClass, TEXT("/Script/AISentience"), TEXT("ASAIMapInteraction"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASAIMapInteraction);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
