// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameActions/Public/CompositeGameAction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCompositeGameAction() {}
// Cross Module References
	GAMEACTIONS_API UClass* Z_Construct_UClass_UCompositeGameAction_NoRegister();
	GAMEACTIONS_API UClass* Z_Construct_UClass_UCompositeGameAction();
	GAMEACTIONS_API UClass* Z_Construct_UClass_UGameAction();
	UPackage* Z_Construct_UPackage__Script_GameActions();
	GAMEACTIONS_API UClass* Z_Construct_UClass_UGameAction_NoRegister();
// End Cross Module References
	void UCompositeGameAction::StaticRegisterNativesUCompositeGameAction()
	{
	}
	UClass* Z_Construct_UClass_UCompositeGameAction_NoRegister()
	{
		return UCompositeGameAction::StaticClass();
	}
	struct Z_Construct_UClass_UCompositeGameAction_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Actions_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Actions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Actions;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCompositeGameAction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameAction,
		(UObject* (*)())Z_Construct_UPackage__Script_GameActions,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCompositeGameAction_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CompositeGameAction.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CompositeGameAction.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCompositeGameAction_Statics::NewProp_Actions_Inner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CompositeGameAction" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CompositeGameAction.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCompositeGameAction_Statics::NewProp_Actions_Inner = { "Actions", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UGameAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCompositeGameAction_Statics::NewProp_Actions_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCompositeGameAction_Statics::NewProp_Actions_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCompositeGameAction_Statics::NewProp_Actions_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CompositeGameAction" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CompositeGameAction.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCompositeGameAction_Statics::NewProp_Actions = { "Actions", nullptr, (EPropertyFlags)0x001000800000000d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCompositeGameAction, Actions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCompositeGameAction_Statics::NewProp_Actions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCompositeGameAction_Statics::NewProp_Actions_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCompositeGameAction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCompositeGameAction_Statics::NewProp_Actions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCompositeGameAction_Statics::NewProp_Actions,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCompositeGameAction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCompositeGameAction>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCompositeGameAction_Statics::ClassParams = {
		&UCompositeGameAction::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCompositeGameAction_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCompositeGameAction_Statics::PropPointers),
		0,
		0x009030A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCompositeGameAction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCompositeGameAction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCompositeGameAction()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCompositeGameAction_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCompositeGameAction, 3146051875);
	template<> GAMEACTIONS_API UClass* StaticClass<UCompositeGameAction>()
	{
		return UCompositeGameAction::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCompositeGameAction(Z_Construct_UClass_UCompositeGameAction, &UCompositeGameAction::StaticClass, TEXT("/Script/GameActions"), TEXT("UCompositeGameAction"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCompositeGameAction);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
