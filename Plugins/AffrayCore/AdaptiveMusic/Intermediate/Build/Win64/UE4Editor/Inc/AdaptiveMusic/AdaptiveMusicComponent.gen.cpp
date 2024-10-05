// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdaptiveMusic/Public/AdaptiveMusicComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdaptiveMusicComponent() {}
// Cross Module References
	ADAPTIVEMUSIC_API UClass* Z_Construct_UClass_UAdaptiveMusicComponent_NoRegister();
	ADAPTIVEMUSIC_API UClass* Z_Construct_UClass_UAdaptiveMusicComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_AdaptiveMusic();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UAdaptiveMusicComponent::execInitialize)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Initialize();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAdaptiveMusicComponent::execOnBeginOverlap)
	{
		P_GET_OBJECT(AActor,Z_Param_OverlappedActor);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnBeginOverlap(Z_Param_OverlappedActor,Z_Param_OtherActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAdaptiveMusicComponent::execOnEndOverlap)
	{
		P_GET_OBJECT(AActor,Z_Param_OverlappedActor);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnEndOverlap(Z_Param_OverlappedActor,Z_Param_OtherActor);
		P_NATIVE_END;
	}
	void UAdaptiveMusicComponent::StaticRegisterNativesUAdaptiveMusicComponent()
	{
		UClass* Class = UAdaptiveMusicComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Initialize", &UAdaptiveMusicComponent::execInitialize },
			{ "OnBeginOverlap", &UAdaptiveMusicComponent::execOnBeginOverlap },
			{ "OnEndOverlap", &UAdaptiveMusicComponent::execOnEndOverlap },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAdaptiveMusicComponent_Initialize_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdaptiveMusicComponent_Initialize_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AdaptiveMusicComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdaptiveMusicComponent_Initialize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdaptiveMusicComponent, nullptr, "Initialize", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdaptiveMusicComponent_Initialize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdaptiveMusicComponent_Initialize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAdaptiveMusicComponent_Initialize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAdaptiveMusicComponent_Initialize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdaptiveMusicComponent_OnBeginOverlap_Statics
	{
		struct AdaptiveMusicComponent_eventOnBeginOverlap_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAdaptiveMusicComponent_OnBeginOverlap_Statics::NewProp_OverlappedActor = { "OverlappedActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdaptiveMusicComponent_eventOnBeginOverlap_Parms, OverlappedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAdaptiveMusicComponent_OnBeginOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdaptiveMusicComponent_eventOnBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdaptiveMusicComponent_OnBeginOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdaptiveMusicComponent_OnBeginOverlap_Statics::NewProp_OverlappedActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdaptiveMusicComponent_OnBeginOverlap_Statics::NewProp_OtherActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdaptiveMusicComponent_OnBeginOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AdaptiveMusicComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdaptiveMusicComponent_OnBeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdaptiveMusicComponent, nullptr, "OnBeginOverlap", nullptr, nullptr, sizeof(AdaptiveMusicComponent_eventOnBeginOverlap_Parms), Z_Construct_UFunction_UAdaptiveMusicComponent_OnBeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdaptiveMusicComponent_OnBeginOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdaptiveMusicComponent_OnBeginOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdaptiveMusicComponent_OnBeginOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAdaptiveMusicComponent_OnBeginOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAdaptiveMusicComponent_OnBeginOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdaptiveMusicComponent_OnEndOverlap_Statics
	{
		struct AdaptiveMusicComponent_eventOnEndOverlap_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAdaptiveMusicComponent_OnEndOverlap_Statics::NewProp_OverlappedActor = { "OverlappedActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdaptiveMusicComponent_eventOnEndOverlap_Parms, OverlappedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAdaptiveMusicComponent_OnEndOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdaptiveMusicComponent_eventOnEndOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdaptiveMusicComponent_OnEndOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdaptiveMusicComponent_OnEndOverlap_Statics::NewProp_OverlappedActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdaptiveMusicComponent_OnEndOverlap_Statics::NewProp_OtherActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdaptiveMusicComponent_OnEndOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AdaptiveMusicComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdaptiveMusicComponent_OnEndOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdaptiveMusicComponent, nullptr, "OnEndOverlap", nullptr, nullptr, sizeof(AdaptiveMusicComponent_eventOnEndOverlap_Parms), Z_Construct_UFunction_UAdaptiveMusicComponent_OnEndOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdaptiveMusicComponent_OnEndOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdaptiveMusicComponent_OnEndOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdaptiveMusicComponent_OnEndOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAdaptiveMusicComponent_OnEndOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAdaptiveMusicComponent_OnEndOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAdaptiveMusicComponent_NoRegister()
	{
		return UAdaptiveMusicComponent::StaticClass();
	}
	struct Z_Construct_UClass_UAdaptiveMusicComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAdaptiveMusicComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AdaptiveMusic,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAdaptiveMusicComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAdaptiveMusicComponent_Initialize, "Initialize" }, // 157837262
		{ &Z_Construct_UFunction_UAdaptiveMusicComponent_OnBeginOverlap, "OnBeginOverlap" }, // 2776333213
		{ &Z_Construct_UFunction_UAdaptiveMusicComponent_OnEndOverlap, "OnEndOverlap" }, // 1963600194
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdaptiveMusicComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "AdaptiveMusicComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AdaptiveMusicComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAdaptiveMusicComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAdaptiveMusicComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAdaptiveMusicComponent_Statics::ClassParams = {
		&UAdaptiveMusicComponent::StaticClass,
		"Engine",
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
		METADATA_PARAMS(Z_Construct_UClass_UAdaptiveMusicComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAdaptiveMusicComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAdaptiveMusicComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAdaptiveMusicComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAdaptiveMusicComponent, 1173829724);
	template<> ADAPTIVEMUSIC_API UClass* StaticClass<UAdaptiveMusicComponent>()
	{
		return UAdaptiveMusicComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAdaptiveMusicComponent(Z_Construct_UClass_UAdaptiveMusicComponent, &UAdaptiveMusicComponent::StaticClass, TEXT("/Script/AdaptiveMusic"), TEXT("UAdaptiveMusicComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAdaptiveMusicComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
