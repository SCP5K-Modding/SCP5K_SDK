// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UserInterface/Public/UIActorComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUIActorComponent() {}
// Cross Module References
	USERINTERFACE_API UClass* Z_Construct_UClass_UUIActorComponent_NoRegister();
	USERINTERFACE_API UClass* Z_Construct_UClass_UUIActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_UserInterface();
// End Cross Module References
	void UUIActorComponent::StaticRegisterNativesUUIActorComponent()
	{
	}
	UClass* Z_Construct_UClass_UUIActorComponent_NoRegister()
	{
		return UUIActorComponent::StaticClass();
	}
	struct Z_Construct_UClass_UUIActorComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUIActorComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_UserInterface,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUIActorComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "UIActorComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/UIActorComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUIActorComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUIActorComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUIActorComponent_Statics::ClassParams = {
		&UUIActorComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UUIActorComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUIActorComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUIActorComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUIActorComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUIActorComponent, 1288896544);
	template<> USERINTERFACE_API UClass* StaticClass<UUIActorComponent>()
	{
		return UUIActorComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUIActorComponent(Z_Construct_UClass_UUIActorComponent, &UUIActorComponent::StaticClass, TEXT("/Script/UserInterface"), TEXT("UUIActorComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUIActorComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
