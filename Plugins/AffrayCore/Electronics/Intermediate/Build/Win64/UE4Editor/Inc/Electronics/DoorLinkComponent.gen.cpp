// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Electronics/Public/DoorLinkComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDoorLinkComponent() {}
// Cross Module References
	ELECTRONICS_API UClass* Z_Construct_UClass_UDoorLinkComponent_NoRegister();
	ELECTRONICS_API UClass* Z_Construct_UClass_UDoorLinkComponent();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavLinkCustomComponent();
	UPackage* Z_Construct_UPackage__Script_Electronics();
// End Cross Module References
	void UDoorLinkComponent::StaticRegisterNativesUDoorLinkComponent()
	{
	}
	UClass* Z_Construct_UClass_UDoorLinkComponent_NoRegister()
	{
		return UDoorLinkComponent::StaticClass();
	}
	struct Z_Construct_UClass_UDoorLinkComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDoorLinkComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNavLinkCustomComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Electronics,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDoorLinkComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "DoorLinkComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DoorLinkComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDoorLinkComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDoorLinkComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDoorLinkComponent_Statics::ClassParams = {
		&UDoorLinkComponent::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UDoorLinkComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDoorLinkComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDoorLinkComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDoorLinkComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDoorLinkComponent, 539022589);
	template<> ELECTRONICS_API UClass* StaticClass<UDoorLinkComponent>()
	{
		return UDoorLinkComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDoorLinkComponent(Z_Construct_UClass_UDoorLinkComponent, &UDoorLinkComponent::StaticClass, TEXT("/Script/Electronics"), TEXT("UDoorLinkComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDoorLinkComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
