// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSController/Public/FootstepComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFootstepComponent() {}
// Cross Module References
	FPSCONTROLLER_API UClass* Z_Construct_UClass_UFootstepComponent_NoRegister();
	FPSCONTROLLER_API UClass* Z_Construct_UClass_UFootstepComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_FPSController();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	FPSCONTROLLER_API UClass* Z_Construct_UClass_USurfaceDataMap_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
	FMODSTUDIO_API UClass* Z_Construct_UClass_UFMODEvent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UFootstepComponent::execTryFootstep)
	{
		P_GET_STRUCT(FVector,Z_Param_position);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->TryFootstep(Z_Param_position);
		P_NATIVE_END;
	}
	void UFootstepComponent::StaticRegisterNativesUFootstepComponent()
	{
		UClass* Class = UFootstepComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "TryFootstep", &UFootstepComponent::execTryFootstep },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFootstepComponent_TryFootstep_Statics
	{
		struct FootstepComponent_eventTryFootstep_Parms
		{
			FVector position;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_position;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFootstepComponent_TryFootstep_Statics::NewProp_position = { "position", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FootstepComponent_eventTryFootstep_Parms, position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFootstepComponent_TryFootstep_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FootstepComponent_eventTryFootstep_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFootstepComponent_TryFootstep_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FootstepComponent_eventTryFootstep_Parms), &Z_Construct_UFunction_UFootstepComponent_TryFootstep_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFootstepComponent_TryFootstep_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFootstepComponent_TryFootstep_Statics::NewProp_position,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFootstepComponent_TryFootstep_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFootstepComponent_TryFootstep_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FootstepComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFootstepComponent_TryFootstep_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFootstepComponent, nullptr, "TryFootstep", nullptr, nullptr, sizeof(FootstepComponent_eventTryFootstep_Parms), Z_Construct_UFunction_UFootstepComponent_TryFootstep_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFootstepComponent_TryFootstep_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFootstepComponent_TryFootstep_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFootstepComponent_TryFootstep_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFootstepComponent_TryFootstep()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFootstepComponent_TryFootstep_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFootstepComponent_NoRegister()
	{
		return UFootstepComponent::StaticClass();
	}
	struct Z_Construct_UClass_UFootstepComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SurfaceDataMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_SurfaceDataMap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OcclusionCollisionChannel_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OcclusionCollisionChannel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseFootstepSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BaseFootstepSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TraceLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TraceLength;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFootstepComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_FPSController,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFootstepComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFootstepComponent_TryFootstep, "TryFootstep" }, // 2483208433
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFootstepComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "FootstepComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/FootstepComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFootstepComponent_Statics::NewProp_SurfaceDataMap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FootstepComponent" },
		{ "ModuleRelativePath", "Public/FootstepComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UFootstepComponent_Statics::NewProp_SurfaceDataMap = { "SurfaceDataMap", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFootstepComponent, SurfaceDataMap), Z_Construct_UClass_USurfaceDataMap_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFootstepComponent_Statics::NewProp_SurfaceDataMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFootstepComponent_Statics::NewProp_SurfaceDataMap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFootstepComponent_Statics::NewProp_OcclusionCollisionChannel_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FootstepComponent" },
		{ "ModuleRelativePath", "Public/FootstepComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UFootstepComponent_Statics::NewProp_OcclusionCollisionChannel = { "OcclusionCollisionChannel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFootstepComponent, OcclusionCollisionChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(Z_Construct_UClass_UFootstepComponent_Statics::NewProp_OcclusionCollisionChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFootstepComponent_Statics::NewProp_OcclusionCollisionChannel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFootstepComponent_Statics::NewProp_BaseFootstepSound_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FootstepComponent" },
		{ "ModuleRelativePath", "Public/FootstepComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFootstepComponent_Statics::NewProp_BaseFootstepSound = { "BaseFootstepSound", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFootstepComponent, BaseFootstepSound), Z_Construct_UClass_UFMODEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFootstepComponent_Statics::NewProp_BaseFootstepSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFootstepComponent_Statics::NewProp_BaseFootstepSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFootstepComponent_Statics::NewProp_MaxSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FootstepComponent" },
		{ "ModuleRelativePath", "Public/FootstepComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFootstepComponent_Statics::NewProp_MaxSpeed = { "MaxSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFootstepComponent, MaxSpeed), METADATA_PARAMS(Z_Construct_UClass_UFootstepComponent_Statics::NewProp_MaxSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFootstepComponent_Statics::NewProp_MaxSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFootstepComponent_Statics::NewProp_TraceLength_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FootstepComponent" },
		{ "ModuleRelativePath", "Public/FootstepComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFootstepComponent_Statics::NewProp_TraceLength = { "TraceLength", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFootstepComponent, TraceLength), METADATA_PARAMS(Z_Construct_UClass_UFootstepComponent_Statics::NewProp_TraceLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFootstepComponent_Statics::NewProp_TraceLength_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFootstepComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFootstepComponent_Statics::NewProp_SurfaceDataMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFootstepComponent_Statics::NewProp_OcclusionCollisionChannel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFootstepComponent_Statics::NewProp_BaseFootstepSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFootstepComponent_Statics::NewProp_MaxSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFootstepComponent_Statics::NewProp_TraceLength,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFootstepComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFootstepComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFootstepComponent_Statics::ClassParams = {
		&UFootstepComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UFootstepComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UFootstepComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UFootstepComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFootstepComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFootstepComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFootstepComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFootstepComponent, 2653517224);
	template<> FPSCONTROLLER_API UClass* StaticClass<UFootstepComponent>()
	{
		return UFootstepComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFootstepComponent(Z_Construct_UClass_UFootstepComponent, &UFootstepComponent::StaticClass, TEXT("/Script/FPSController"), TEXT("UFootstepComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFootstepComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
