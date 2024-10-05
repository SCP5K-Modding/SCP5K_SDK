// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AISentience/Public/BTTask_SetSAIState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTask_SetSAIState() {}
// Cross Module References
	AISENTIENCE_API UClass* Z_Construct_UClass_UBTTask_SetSAIState_NoRegister();
	AISENTIENCE_API UClass* Z_Construct_UClass_UBTTask_SetSAIState();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	UPackage* Z_Construct_UPackage__Script_AISentience();
	AISENTIENCE_API UEnum* Z_Construct_UEnum_AISentience_ESAIState();
// End Cross Module References
	void UBTTask_SetSAIState::StaticRegisterNativesUBTTask_SetSAIState()
	{
	}
	UClass* Z_Construct_UClass_UBTTask_SetSAIState_NoRegister()
	{
		return UBTTask_SetSAIState::StaticClass();
	}
	struct Z_Construct_UClass_UBTTask_SetSAIState_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NewState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFailIfAlreadyInState_MetaData[];
#endif
		static void NewProp_bFailIfAlreadyInState_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFailIfAlreadyInState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTTask_SetSAIState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
		(UObject* (*)())Z_Construct_UPackage__Script_AISentience,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_SetSAIState_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "BTTask_SetSAIState.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/BTTask_SetSAIState.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBTTask_SetSAIState_Statics::NewProp_NewState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_SetSAIState_Statics::NewProp_NewState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BTTask_SetSAIState" },
		{ "ModuleRelativePath", "Public/BTTask_SetSAIState.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UBTTask_SetSAIState_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTTask_SetSAIState, NewState), Z_Construct_UEnum_AISentience_ESAIState, METADATA_PARAMS(Z_Construct_UClass_UBTTask_SetSAIState_Statics::NewProp_NewState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_SetSAIState_Statics::NewProp_NewState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_SetSAIState_Statics::NewProp_bFailIfAlreadyInState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BTTask_SetSAIState" },
		{ "ModuleRelativePath", "Public/BTTask_SetSAIState.h" },
	};
#endif
	void Z_Construct_UClass_UBTTask_SetSAIState_Statics::NewProp_bFailIfAlreadyInState_SetBit(void* Obj)
	{
		((UBTTask_SetSAIState*)Obj)->bFailIfAlreadyInState = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBTTask_SetSAIState_Statics::NewProp_bFailIfAlreadyInState = { "bFailIfAlreadyInState", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBTTask_SetSAIState), &Z_Construct_UClass_UBTTask_SetSAIState_Statics::NewProp_bFailIfAlreadyInState_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBTTask_SetSAIState_Statics::NewProp_bFailIfAlreadyInState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_SetSAIState_Statics::NewProp_bFailIfAlreadyInState_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTTask_SetSAIState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_SetSAIState_Statics::NewProp_NewState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_SetSAIState_Statics::NewProp_NewState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_SetSAIState_Statics::NewProp_bFailIfAlreadyInState,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTTask_SetSAIState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_SetSAIState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBTTask_SetSAIState_Statics::ClassParams = {
		&UBTTask_SetSAIState::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBTTask_SetSAIState_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_SetSAIState_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBTTask_SetSAIState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_SetSAIState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTTask_SetSAIState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBTTask_SetSAIState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBTTask_SetSAIState, 3377139721);
	template<> AISENTIENCE_API UClass* StaticClass<UBTTask_SetSAIState>()
	{
		return UBTTask_SetSAIState::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTTask_SetSAIState(Z_Construct_UClass_UBTTask_SetSAIState, &UBTTask_SetSAIState::StaticClass, TEXT("/Script/AISentience"), TEXT("UBTTask_SetSAIState"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_SetSAIState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
