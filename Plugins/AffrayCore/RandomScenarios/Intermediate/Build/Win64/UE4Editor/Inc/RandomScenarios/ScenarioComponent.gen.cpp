// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RandomScenarios/Public/ScenarioComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeScenarioComponent() {}
// Cross Module References
	RANDOMSCENARIOS_API UClass* Z_Construct_UClass_UScenarioComponent_NoRegister();
	RANDOMSCENARIOS_API UClass* Z_Construct_UClass_UScenarioComponent();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent();
	UPackage* Z_Construct_UPackage__Script_RandomScenarios();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	RANDOMSCENARIOS_API UClass* Z_Construct_UClass_ARandomScenarioManager_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UScenarioComponent::execGetEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetEnabled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UScenarioComponent::execOnRep_Enabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Enabled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UScenarioComponent::execSetScenarioEnabled)
	{
		P_GET_UBOOL(Z_Param_bNewEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetScenarioEnabled(Z_Param_bNewEnabled);
		P_NATIVE_END;
	}
	void UScenarioComponent::StaticRegisterNativesUScenarioComponent()
	{
		UClass* Class = UScenarioComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetEnabled", &UScenarioComponent::execGetEnabled },
			{ "OnRep_Enabled", &UScenarioComponent::execOnRep_Enabled },
			{ "SetScenarioEnabled", &UScenarioComponent::execSetScenarioEnabled },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UScenarioComponent_GetEnabled_Statics
	{
		struct ScenarioComponent_eventGetEnabled_Parms
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
	void Z_Construct_UFunction_UScenarioComponent_GetEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ScenarioComponent_eventGetEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UScenarioComponent_GetEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ScenarioComponent_eventGetEnabled_Parms), &Z_Construct_UFunction_UScenarioComponent_GetEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScenarioComponent_GetEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScenarioComponent_GetEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScenarioComponent_GetEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ScenarioComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UScenarioComponent_GetEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScenarioComponent, nullptr, "GetEnabled", nullptr, nullptr, sizeof(ScenarioComponent_eventGetEnabled_Parms), Z_Construct_UFunction_UScenarioComponent_GetEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UScenarioComponent_GetEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UScenarioComponent_GetEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UScenarioComponent_GetEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UScenarioComponent_GetEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UScenarioComponent_GetEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UScenarioComponent_OnRep_Enabled_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScenarioComponent_OnRep_Enabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ScenarioComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UScenarioComponent_OnRep_Enabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScenarioComponent, nullptr, "OnRep_Enabled", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UScenarioComponent_OnRep_Enabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UScenarioComponent_OnRep_Enabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UScenarioComponent_OnRep_Enabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UScenarioComponent_OnRep_Enabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UScenarioComponent_SetScenarioEnabled_Statics
	{
		struct ScenarioComponent_eventSetScenarioEnabled_Parms
		{
			bool bNewEnabled;
		};
		static void NewProp_bNewEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNewEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UScenarioComponent_SetScenarioEnabled_Statics::NewProp_bNewEnabled_SetBit(void* Obj)
	{
		((ScenarioComponent_eventSetScenarioEnabled_Parms*)Obj)->bNewEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UScenarioComponent_SetScenarioEnabled_Statics::NewProp_bNewEnabled = { "bNewEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ScenarioComponent_eventSetScenarioEnabled_Parms), &Z_Construct_UFunction_UScenarioComponent_SetScenarioEnabled_Statics::NewProp_bNewEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScenarioComponent_SetScenarioEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScenarioComponent_SetScenarioEnabled_Statics::NewProp_bNewEnabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScenarioComponent_SetScenarioEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ScenarioComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UScenarioComponent_SetScenarioEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScenarioComponent, nullptr, "SetScenarioEnabled", nullptr, nullptr, sizeof(ScenarioComponent_eventSetScenarioEnabled_Parms), Z_Construct_UFunction_UScenarioComponent_SetScenarioEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UScenarioComponent_SetScenarioEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UScenarioComponent_SetScenarioEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UScenarioComponent_SetScenarioEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UScenarioComponent_SetScenarioEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UScenarioComponent_SetScenarioEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UScenarioComponent_NoRegister()
	{
		return UScenarioComponent::StaticClass();
	}
	struct Z_Construct_UClass_UScenarioComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Actors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Actors;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[];
#endif
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsManaged_MetaData[];
#endif
		static void NewProp_bIsManaged_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsManaged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bForceObjectsStationary_MetaData[];
#endif
		static void NewProp_bForceObjectsStationary_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bForceObjectsStationary;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActivatingManagers_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActivatingManagers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ActivatingManagers;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UScenarioComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPrimitiveComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_RandomScenarios,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UScenarioComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UScenarioComponent_GetEnabled, "GetEnabled" }, // 1050904623
		{ &Z_Construct_UFunction_UScenarioComponent_OnRep_Enabled, "OnRep_Enabled" }, // 1821370635
		{ &Z_Construct_UFunction_UScenarioComponent_SetScenarioEnabled, "SetScenarioEnabled" }, // 1957321904
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScenarioComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Mobility VirtualTexture Trigger" },
		{ "IncludePath", "ScenarioComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ScenarioComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UScenarioComponent_Statics::NewProp_Actors_Inner = { "Actors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScenarioComponent_Statics::NewProp_Actors_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ScenarioComponent" },
		{ "ModuleRelativePath", "Public/ScenarioComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UScenarioComponent_Statics::NewProp_Actors = { "Actors", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UScenarioComponent, Actors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UScenarioComponent_Statics::NewProp_Actors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UScenarioComponent_Statics::NewProp_Actors_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScenarioComponent_Statics::NewProp_bEnabled_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ScenarioComponent" },
		{ "ModuleRelativePath", "Public/ScenarioComponent.h" },
	};
#endif
	void Z_Construct_UClass_UScenarioComponent_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((UScenarioComponent*)Obj)->bEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UScenarioComponent_Statics::NewProp_bEnabled = { "bEnabled", "OnRep_Enabled", (EPropertyFlags)0x0020080100002025, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UScenarioComponent), &Z_Construct_UClass_UScenarioComponent_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UScenarioComponent_Statics::NewProp_bEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UScenarioComponent_Statics::NewProp_bEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScenarioComponent_Statics::NewProp_bIsManaged_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ScenarioComponent" },
		{ "ModuleRelativePath", "Public/ScenarioComponent.h" },
	};
#endif
	void Z_Construct_UClass_UScenarioComponent_Statics::NewProp_bIsManaged_SetBit(void* Obj)
	{
		((UScenarioComponent*)Obj)->bIsManaged = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UScenarioComponent_Statics::NewProp_bIsManaged = { "bIsManaged", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UScenarioComponent), &Z_Construct_UClass_UScenarioComponent_Statics::NewProp_bIsManaged_SetBit, METADATA_PARAMS(Z_Construct_UClass_UScenarioComponent_Statics::NewProp_bIsManaged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UScenarioComponent_Statics::NewProp_bIsManaged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScenarioComponent_Statics::NewProp_bForceObjectsStationary_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ScenarioComponent" },
		{ "ModuleRelativePath", "Public/ScenarioComponent.h" },
	};
#endif
	void Z_Construct_UClass_UScenarioComponent_Statics::NewProp_bForceObjectsStationary_SetBit(void* Obj)
	{
		((UScenarioComponent*)Obj)->bForceObjectsStationary = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UScenarioComponent_Statics::NewProp_bForceObjectsStationary = { "bForceObjectsStationary", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UScenarioComponent), &Z_Construct_UClass_UScenarioComponent_Statics::NewProp_bForceObjectsStationary_SetBit, METADATA_PARAMS(Z_Construct_UClass_UScenarioComponent_Statics::NewProp_bForceObjectsStationary_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UScenarioComponent_Statics::NewProp_bForceObjectsStationary_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UScenarioComponent_Statics::NewProp_ActivatingManagers_Inner = { "ActivatingManagers", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ARandomScenarioManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScenarioComponent_Statics::NewProp_ActivatingManagers_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ScenarioComponent" },
		{ "ModuleRelativePath", "Public/ScenarioComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UScenarioComponent_Statics::NewProp_ActivatingManagers = { "ActivatingManagers", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UScenarioComponent, ActivatingManagers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UScenarioComponent_Statics::NewProp_ActivatingManagers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UScenarioComponent_Statics::NewProp_ActivatingManagers_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UScenarioComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScenarioComponent_Statics::NewProp_Actors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScenarioComponent_Statics::NewProp_Actors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScenarioComponent_Statics::NewProp_bEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScenarioComponent_Statics::NewProp_bIsManaged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScenarioComponent_Statics::NewProp_bForceObjectsStationary,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScenarioComponent_Statics::NewProp_ActivatingManagers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScenarioComponent_Statics::NewProp_ActivatingManagers,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UScenarioComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UScenarioComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UScenarioComponent_Statics::ClassParams = {
		&UScenarioComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UScenarioComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UScenarioComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UScenarioComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UScenarioComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UScenarioComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UScenarioComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UScenarioComponent, 927276596);
	template<> RANDOMSCENARIOS_API UClass* StaticClass<UScenarioComponent>()
	{
		return UScenarioComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UScenarioComponent(Z_Construct_UClass_UScenarioComponent, &UScenarioComponent::StaticClass, TEXT("/Script/RandomScenarios"), TEXT("UScenarioComponent"), false, nullptr, nullptr, nullptr);

	void UScenarioComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_bEnabled(TEXT("bEnabled"));

		const bool bIsValid = true
			&& Name_bEnabled == ClassReps[(int32)ENetFields_Private::bEnabled].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UScenarioComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UScenarioComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
