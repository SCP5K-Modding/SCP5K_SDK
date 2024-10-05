// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AmbientAudioVolumes/Public/AmbientAudioComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAmbientAudioComponent() {}
// Cross Module References
	AMBIENTAUDIOVOLUMES_API UClass* Z_Construct_UClass_UAmbientAudioComponent_NoRegister();
	AMBIENTAUDIOVOLUMES_API UClass* Z_Construct_UClass_UAmbientAudioComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_AmbientAudioVolumes();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	AMBIENTAUDIOVOLUMES_API UClass* Z_Construct_UClass_AAmbientAudioVolume_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UAmbientAudioComponent::execInitialize)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Initialize();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAmbientAudioComponent::execOnBeginOverlap)
	{
		P_GET_OBJECT(AActor,Z_Param_OverlappedActor);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnBeginOverlap(Z_Param_OverlappedActor,Z_Param_OtherActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAmbientAudioComponent::execOnEndOverlap)
	{
		P_GET_OBJECT(AActor,Z_Param_OverlappedActor);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnEndOverlap(Z_Param_OverlappedActor,Z_Param_OtherActor);
		P_NATIVE_END;
	}
	void UAmbientAudioComponent::StaticRegisterNativesUAmbientAudioComponent()
	{
		UClass* Class = UAmbientAudioComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Initialize", &UAmbientAudioComponent::execInitialize },
			{ "OnBeginOverlap", &UAmbientAudioComponent::execOnBeginOverlap },
			{ "OnEndOverlap", &UAmbientAudioComponent::execOnEndOverlap },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAmbientAudioComponent_Initialize_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAmbientAudioComponent_Initialize_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AmbientAudioComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAmbientAudioComponent_Initialize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAmbientAudioComponent, nullptr, "Initialize", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAmbientAudioComponent_Initialize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAmbientAudioComponent_Initialize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAmbientAudioComponent_Initialize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAmbientAudioComponent_Initialize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAmbientAudioComponent_OnBeginOverlap_Statics
	{
		struct AmbientAudioComponent_eventOnBeginOverlap_Parms
		{
			AActor* OverlappedActor;
			AActor* OtherActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedActor;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAmbientAudioComponent_OnBeginOverlap_Statics::NewProp_OverlappedActor = { "OverlappedActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AmbientAudioComponent_eventOnBeginOverlap_Parms, OverlappedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAmbientAudioComponent_OnBeginOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AmbientAudioComponent_eventOnBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAmbientAudioComponent_OnBeginOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAmbientAudioComponent_OnBeginOverlap_Statics::NewProp_OverlappedActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAmbientAudioComponent_OnBeginOverlap_Statics::NewProp_OtherActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAmbientAudioComponent_OnBeginOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AmbientAudioComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAmbientAudioComponent_OnBeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAmbientAudioComponent, nullptr, "OnBeginOverlap", nullptr, nullptr, sizeof(AmbientAudioComponent_eventOnBeginOverlap_Parms), Z_Construct_UFunction_UAmbientAudioComponent_OnBeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAmbientAudioComponent_OnBeginOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAmbientAudioComponent_OnBeginOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAmbientAudioComponent_OnBeginOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAmbientAudioComponent_OnBeginOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAmbientAudioComponent_OnBeginOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAmbientAudioComponent_OnEndOverlap_Statics
	{
		struct AmbientAudioComponent_eventOnEndOverlap_Parms
		{
			AActor* OverlappedActor;
			AActor* OtherActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedActor;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAmbientAudioComponent_OnEndOverlap_Statics::NewProp_OverlappedActor = { "OverlappedActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AmbientAudioComponent_eventOnEndOverlap_Parms, OverlappedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAmbientAudioComponent_OnEndOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AmbientAudioComponent_eventOnEndOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAmbientAudioComponent_OnEndOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAmbientAudioComponent_OnEndOverlap_Statics::NewProp_OverlappedActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAmbientAudioComponent_OnEndOverlap_Statics::NewProp_OtherActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAmbientAudioComponent_OnEndOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AmbientAudioComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAmbientAudioComponent_OnEndOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAmbientAudioComponent, nullptr, "OnEndOverlap", nullptr, nullptr, sizeof(AmbientAudioComponent_eventOnEndOverlap_Parms), Z_Construct_UFunction_UAmbientAudioComponent_OnEndOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAmbientAudioComponent_OnEndOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAmbientAudioComponent_OnEndOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAmbientAudioComponent_OnEndOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAmbientAudioComponent_OnEndOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAmbientAudioComponent_OnEndOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAmbientAudioComponent_NoRegister()
	{
		return UAmbientAudioComponent::StaticClass();
	}
	struct Z_Construct_UClass_UAmbientAudioComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Controller_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Controller;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Pawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Pawn;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AudioVolumes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AudioVolumes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AudioVolumes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentAudioVolume_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentAudioVolume;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAmbientAudioComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AmbientAudioVolumes,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAmbientAudioComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAmbientAudioComponent_Initialize, "Initialize" }, // 822756948
		{ &Z_Construct_UFunction_UAmbientAudioComponent_OnBeginOverlap, "OnBeginOverlap" }, // 1094809851
		{ &Z_Construct_UFunction_UAmbientAudioComponent_OnEndOverlap, "OnEndOverlap" }, // 374193617
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAmbientAudioComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "AmbientAudioComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AmbientAudioComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAmbientAudioComponent_Statics::NewProp_Controller_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AmbientAudioComponent" },
		{ "ModuleRelativePath", "Public/AmbientAudioComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAmbientAudioComponent_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAmbientAudioComponent, Controller), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAmbientAudioComponent_Statics::NewProp_Controller_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAmbientAudioComponent_Statics::NewProp_Controller_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAmbientAudioComponent_Statics::NewProp_Pawn_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AmbientAudioComponent" },
		{ "ModuleRelativePath", "Public/AmbientAudioComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAmbientAudioComponent_Statics::NewProp_Pawn = { "Pawn", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAmbientAudioComponent, Pawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAmbientAudioComponent_Statics::NewProp_Pawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAmbientAudioComponent_Statics::NewProp_Pawn_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAmbientAudioComponent_Statics::NewProp_AudioVolumes_Inner = { "AudioVolumes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AAmbientAudioVolume_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAmbientAudioComponent_Statics::NewProp_AudioVolumes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AmbientAudioComponent" },
		{ "ModuleRelativePath", "Public/AmbientAudioComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAmbientAudioComponent_Statics::NewProp_AudioVolumes = { "AudioVolumes", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAmbientAudioComponent, AudioVolumes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAmbientAudioComponent_Statics::NewProp_AudioVolumes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAmbientAudioComponent_Statics::NewProp_AudioVolumes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAmbientAudioComponent_Statics::NewProp_CurrentAudioVolume_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AmbientAudioComponent" },
		{ "ModuleRelativePath", "Public/AmbientAudioComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAmbientAudioComponent_Statics::NewProp_CurrentAudioVolume = { "CurrentAudioVolume", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAmbientAudioComponent, CurrentAudioVolume), Z_Construct_UClass_AAmbientAudioVolume_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAmbientAudioComponent_Statics::NewProp_CurrentAudioVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAmbientAudioComponent_Statics::NewProp_CurrentAudioVolume_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAmbientAudioComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAmbientAudioComponent_Statics::NewProp_Controller,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAmbientAudioComponent_Statics::NewProp_Pawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAmbientAudioComponent_Statics::NewProp_AudioVolumes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAmbientAudioComponent_Statics::NewProp_AudioVolumes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAmbientAudioComponent_Statics::NewProp_CurrentAudioVolume,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAmbientAudioComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAmbientAudioComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAmbientAudioComponent_Statics::ClassParams = {
		&UAmbientAudioComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAmbientAudioComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAmbientAudioComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAmbientAudioComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAmbientAudioComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAmbientAudioComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAmbientAudioComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAmbientAudioComponent, 2581560085);
	template<> AMBIENTAUDIOVOLUMES_API UClass* StaticClass<UAmbientAudioComponent>()
	{
		return UAmbientAudioComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAmbientAudioComponent(Z_Construct_UClass_UAmbientAudioComponent, &UAmbientAudioComponent::StaticClass, TEXT("/Script/AmbientAudioVolumes"), TEXT("UAmbientAudioComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAmbientAudioComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
