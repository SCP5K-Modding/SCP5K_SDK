// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSController/Public/TickOptimizerComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTickOptimizerComponent() {}
// Cross Module References
	FPSCONTROLLER_API UClass* Z_Construct_UClass_UTickOptimizerComponent_NoRegister();
	FPSCONTROLLER_API UClass* Z_Construct_UClass_UTickOptimizerComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_FPSController();
// End Cross Module References
	void UTickOptimizerComponent::StaticRegisterNativesUTickOptimizerComponent()
	{
	}
	UClass* Z_Construct_UClass_UTickOptimizerComponent_NoRegister()
	{
		return UTickOptimizerComponent::StaticClass();
	}
	struct Z_Construct_UClass_UTickOptimizerComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentInterval_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentInterval;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSetMeshInterval_MetaData[];
#endif
		static void NewProp_bSetMeshInterval_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSetMeshInterval;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NotRecentlyRenderedMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NotRecentlyRenderedMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DedicatedServerTickTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DedicatedServerTickTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxCharacterTickDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxCharacterTickDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxTickTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxTickTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinCharacterTickDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinCharacterTickDistance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTickOptimizerComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_FPSController,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTickOptimizerComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "TickOptimizerComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TickOptimizerComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTickOptimizerComponent_Statics::NewProp_CurrentInterval_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TickOptimizerComponent" },
		{ "ModuleRelativePath", "Public/TickOptimizerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTickOptimizerComponent_Statics::NewProp_CurrentInterval = { "CurrentInterval", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTickOptimizerComponent, CurrentInterval), METADATA_PARAMS(Z_Construct_UClass_UTickOptimizerComponent_Statics::NewProp_CurrentInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTickOptimizerComponent_Statics::NewProp_CurrentInterval_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTickOptimizerComponent_Statics::NewProp_bSetMeshInterval_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TickOptimizerComponent" },
		{ "ModuleRelativePath", "Public/TickOptimizerComponent.h" },
	};
#endif
	void Z_Construct_UClass_UTickOptimizerComponent_Statics::NewProp_bSetMeshInterval_SetBit(void* Obj)
	{
		((UTickOptimizerComponent*)Obj)->bSetMeshInterval = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTickOptimizerComponent_Statics::NewProp_bSetMeshInterval = { "bSetMeshInterval", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UTickOptimizerComponent), &Z_Construct_UClass_UTickOptimizerComponent_Statics::NewProp_bSetMeshInterval_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTickOptimizerComponent_Statics::NewProp_bSetMeshInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTickOptimizerComponent_Statics::NewProp_bSetMeshInterval_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTickOptimizerComponent_Statics::NewProp_NotRecentlyRenderedMultiplier_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TickOptimizerComponent" },
		{ "ModuleRelativePath", "Public/TickOptimizerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTickOptimizerComponent_Statics::NewProp_NotRecentlyRenderedMultiplier = { "NotRecentlyRenderedMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTickOptimizerComponent, NotRecentlyRenderedMultiplier), METADATA_PARAMS(Z_Construct_UClass_UTickOptimizerComponent_Statics::NewProp_NotRecentlyRenderedMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTickOptimizerComponent_Statics::NewProp_NotRecentlyRenderedMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTickOptimizerComponent_Statics::NewProp_DedicatedServerTickTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TickOptimizerComponent" },
		{ "ModuleRelativePath", "Public/TickOptimizerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTickOptimizerComponent_Statics::NewProp_DedicatedServerTickTime = { "DedicatedServerTickTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTickOptimizerComponent, DedicatedServerTickTime), METADATA_PARAMS(Z_Construct_UClass_UTickOptimizerComponent_Statics::NewProp_DedicatedServerTickTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTickOptimizerComponent_Statics::NewProp_DedicatedServerTickTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTickOptimizerComponent_Statics::NewProp_MaxCharacterTickDistance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TickOptimizerComponent" },
		{ "ModuleRelativePath", "Public/TickOptimizerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTickOptimizerComponent_Statics::NewProp_MaxCharacterTickDistance = { "MaxCharacterTickDistance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTickOptimizerComponent, MaxCharacterTickDistance), METADATA_PARAMS(Z_Construct_UClass_UTickOptimizerComponent_Statics::NewProp_MaxCharacterTickDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTickOptimizerComponent_Statics::NewProp_MaxCharacterTickDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTickOptimizerComponent_Statics::NewProp_MaxTickTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TickOptimizerComponent" },
		{ "ModuleRelativePath", "Public/TickOptimizerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTickOptimizerComponent_Statics::NewProp_MaxTickTime = { "MaxTickTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTickOptimizerComponent, MaxTickTime), METADATA_PARAMS(Z_Construct_UClass_UTickOptimizerComponent_Statics::NewProp_MaxTickTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTickOptimizerComponent_Statics::NewProp_MaxTickTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTickOptimizerComponent_Statics::NewProp_MinCharacterTickDistance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TickOptimizerComponent" },
		{ "ModuleRelativePath", "Public/TickOptimizerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTickOptimizerComponent_Statics::NewProp_MinCharacterTickDistance = { "MinCharacterTickDistance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTickOptimizerComponent, MinCharacterTickDistance), METADATA_PARAMS(Z_Construct_UClass_UTickOptimizerComponent_Statics::NewProp_MinCharacterTickDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTickOptimizerComponent_Statics::NewProp_MinCharacterTickDistance_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTickOptimizerComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTickOptimizerComponent_Statics::NewProp_CurrentInterval,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTickOptimizerComponent_Statics::NewProp_bSetMeshInterval,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTickOptimizerComponent_Statics::NewProp_NotRecentlyRenderedMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTickOptimizerComponent_Statics::NewProp_DedicatedServerTickTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTickOptimizerComponent_Statics::NewProp_MaxCharacterTickDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTickOptimizerComponent_Statics::NewProp_MaxTickTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTickOptimizerComponent_Statics::NewProp_MinCharacterTickDistance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTickOptimizerComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTickOptimizerComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTickOptimizerComponent_Statics::ClassParams = {
		&UTickOptimizerComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTickOptimizerComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTickOptimizerComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UTickOptimizerComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTickOptimizerComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTickOptimizerComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTickOptimizerComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTickOptimizerComponent, 2131206567);
	template<> FPSCONTROLLER_API UClass* StaticClass<UTickOptimizerComponent>()
	{
		return UTickOptimizerComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTickOptimizerComponent(Z_Construct_UClass_UTickOptimizerComponent, &UTickOptimizerComponent::StaticClass, TEXT("/Script/FPSController"), TEXT("UTickOptimizerComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTickOptimizerComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
