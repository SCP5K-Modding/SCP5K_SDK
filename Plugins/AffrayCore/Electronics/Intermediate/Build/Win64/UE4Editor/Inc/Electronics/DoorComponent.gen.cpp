// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Electronics/Public/DoorComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDoorComponent() {}
// Cross Module References
	ELECTRONICS_API UClass* Z_Construct_UClass_UDoorComponent_NoRegister();
	ELECTRONICS_API UClass* Z_Construct_UClass_UDoorComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_Electronics();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UDoorComponent::execAddInfluencingActor)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddInfluencingActor(Z_Param_Actor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDoorComponent::execRemoveInfluencingActor)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveInfluencingActor(Z_Param_Actor);
		P_NATIVE_END;
	}
	void UDoorComponent::StaticRegisterNativesUDoorComponent()
	{
		UClass* Class = UDoorComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddInfluencingActor", &UDoorComponent::execAddInfluencingActor },
			{ "RemoveInfluencingActor", &UDoorComponent::execRemoveInfluencingActor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDoorComponent_AddInfluencingActor_Statics
	{
		struct DoorComponent_eventAddInfluencingActor_Parms
		{
			AActor* Actor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDoorComponent_AddInfluencingActor_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DoorComponent_eventAddInfluencingActor_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDoorComponent_AddInfluencingActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDoorComponent_AddInfluencingActor_Statics::NewProp_Actor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDoorComponent_AddInfluencingActor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DoorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDoorComponent_AddInfluencingActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDoorComponent, nullptr, "AddInfluencingActor", nullptr, nullptr, sizeof(DoorComponent_eventAddInfluencingActor_Parms), Z_Construct_UFunction_UDoorComponent_AddInfluencingActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDoorComponent_AddInfluencingActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDoorComponent_AddInfluencingActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDoorComponent_AddInfluencingActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDoorComponent_AddInfluencingActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDoorComponent_AddInfluencingActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDoorComponent_RemoveInfluencingActor_Statics
	{
		struct DoorComponent_eventRemoveInfluencingActor_Parms
		{
			AActor* Actor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDoorComponent_RemoveInfluencingActor_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DoorComponent_eventRemoveInfluencingActor_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDoorComponent_RemoveInfluencingActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDoorComponent_RemoveInfluencingActor_Statics::NewProp_Actor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDoorComponent_RemoveInfluencingActor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DoorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDoorComponent_RemoveInfluencingActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDoorComponent, nullptr, "RemoveInfluencingActor", nullptr, nullptr, sizeof(DoorComponent_eventRemoveInfluencingActor_Parms), Z_Construct_UFunction_UDoorComponent_RemoveInfluencingActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDoorComponent_RemoveInfluencingActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDoorComponent_RemoveInfluencingActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDoorComponent_RemoveInfluencingActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDoorComponent_RemoveInfluencingActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDoorComponent_RemoveInfluencingActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDoorComponent_NoRegister()
	{
		return UDoorComponent::StaticClass();
	}
	struct Z_Construct_UClass_UDoorComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Velocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Velocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_position_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_position;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Friction_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Friction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinPosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxPosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLatched_MetaData[];
#endif
		static void NewProp_bLatched_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLatched;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InfluencingActors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InfluencingActors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InfluencingActors;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDoorComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Electronics,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDoorComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDoorComponent_AddInfluencingActor, "AddInfluencingActor" }, // 300818770
		{ &Z_Construct_UFunction_UDoorComponent_RemoveInfluencingActor, "RemoveInfluencingActor" }, // 3767591042
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDoorComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "DoorComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DoorComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDoorComponent_Statics::NewProp_Velocity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DoorComponent" },
		{ "ModuleRelativePath", "Public/DoorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDoorComponent_Statics::NewProp_Velocity = { "Velocity", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDoorComponent, Velocity), METADATA_PARAMS(Z_Construct_UClass_UDoorComponent_Statics::NewProp_Velocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDoorComponent_Statics::NewProp_Velocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDoorComponent_Statics::NewProp_position_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DoorComponent" },
		{ "ModuleRelativePath", "Public/DoorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDoorComponent_Statics::NewProp_position = { "position", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDoorComponent, position), METADATA_PARAMS(Z_Construct_UClass_UDoorComponent_Statics::NewProp_position_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDoorComponent_Statics::NewProp_position_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDoorComponent_Statics::NewProp_Friction_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DoorComponent" },
		{ "ModuleRelativePath", "Public/DoorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDoorComponent_Statics::NewProp_Friction = { "Friction", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDoorComponent, Friction), METADATA_PARAMS(Z_Construct_UClass_UDoorComponent_Statics::NewProp_Friction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDoorComponent_Statics::NewProp_Friction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDoorComponent_Statics::NewProp_MinPosition_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DoorComponent" },
		{ "ModuleRelativePath", "Public/DoorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDoorComponent_Statics::NewProp_MinPosition = { "MinPosition", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDoorComponent, MinPosition), METADATA_PARAMS(Z_Construct_UClass_UDoorComponent_Statics::NewProp_MinPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDoorComponent_Statics::NewProp_MinPosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDoorComponent_Statics::NewProp_MaxPosition_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DoorComponent" },
		{ "ModuleRelativePath", "Public/DoorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDoorComponent_Statics::NewProp_MaxPosition = { "MaxPosition", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDoorComponent, MaxPosition), METADATA_PARAMS(Z_Construct_UClass_UDoorComponent_Statics::NewProp_MaxPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDoorComponent_Statics::NewProp_MaxPosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDoorComponent_Statics::NewProp_bLatched_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DoorComponent" },
		{ "ModuleRelativePath", "Public/DoorComponent.h" },
	};
#endif
	void Z_Construct_UClass_UDoorComponent_Statics::NewProp_bLatched_SetBit(void* Obj)
	{
		((UDoorComponent*)Obj)->bLatched = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDoorComponent_Statics::NewProp_bLatched = { "bLatched", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDoorComponent), &Z_Construct_UClass_UDoorComponent_Statics::NewProp_bLatched_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDoorComponent_Statics::NewProp_bLatched_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDoorComponent_Statics::NewProp_bLatched_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDoorComponent_Statics::NewProp_InfluencingActors_Inner = { "InfluencingActors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDoorComponent_Statics::NewProp_InfluencingActors_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DoorComponent" },
		{ "ModuleRelativePath", "Public/DoorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDoorComponent_Statics::NewProp_InfluencingActors = { "InfluencingActors", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDoorComponent, InfluencingActors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDoorComponent_Statics::NewProp_InfluencingActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDoorComponent_Statics::NewProp_InfluencingActors_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDoorComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDoorComponent_Statics::NewProp_Velocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDoorComponent_Statics::NewProp_position,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDoorComponent_Statics::NewProp_Friction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDoorComponent_Statics::NewProp_MinPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDoorComponent_Statics::NewProp_MaxPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDoorComponent_Statics::NewProp_bLatched,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDoorComponent_Statics::NewProp_InfluencingActors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDoorComponent_Statics::NewProp_InfluencingActors,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDoorComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDoorComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDoorComponent_Statics::ClassParams = {
		&UDoorComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDoorComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDoorComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UDoorComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDoorComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDoorComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDoorComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDoorComponent, 4166954346);
	template<> ELECTRONICS_API UClass* StaticClass<UDoorComponent>()
	{
		return UDoorComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDoorComponent(Z_Construct_UClass_UDoorComponent, &UDoorComponent::StaticClass, TEXT("/Script/Electronics"), TEXT("UDoorComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDoorComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
