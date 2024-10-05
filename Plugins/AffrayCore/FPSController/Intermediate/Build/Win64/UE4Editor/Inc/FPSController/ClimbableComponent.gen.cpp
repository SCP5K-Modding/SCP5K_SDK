// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSController/Public/ClimbableComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClimbableComponent() {}
// Cross Module References
	FPSCONTROLLER_API UClass* Z_Construct_UClass_UClimbableComponent_NoRegister();
	FPSCONTROLLER_API UClass* Z_Construct_UClass_UClimbableComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_FPSController();
// End Cross Module References
	DEFINE_FUNCTION(UClimbableComponent::execGetHeight)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetHeight();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UClimbableComponent::execGetRungDistance)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetRungDistance();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UClimbableComponent::execGetWidth)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetWidth();
		P_NATIVE_END;
	}
	void UClimbableComponent::StaticRegisterNativesUClimbableComponent()
	{
		UClass* Class = UClimbableComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetHeight", &UClimbableComponent::execGetHeight },
			{ "GetRungDistance", &UClimbableComponent::execGetRungDistance },
			{ "GetWidth", &UClimbableComponent::execGetWidth },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UClimbableComponent_GetHeight_Statics
	{
		struct ClimbableComponent_eventGetHeight_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UClimbableComponent_GetHeight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ClimbableComponent_eventGetHeight_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UClimbableComponent_GetHeight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UClimbableComponent_GetHeight_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UClimbableComponent_GetHeight_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ClimbableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UClimbableComponent_GetHeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UClimbableComponent, nullptr, "GetHeight", nullptr, nullptr, sizeof(ClimbableComponent_eventGetHeight_Parms), Z_Construct_UFunction_UClimbableComponent_GetHeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UClimbableComponent_GetHeight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UClimbableComponent_GetHeight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UClimbableComponent_GetHeight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UClimbableComponent_GetHeight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UClimbableComponent_GetHeight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UClimbableComponent_GetRungDistance_Statics
	{
		struct ClimbableComponent_eventGetRungDistance_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UClimbableComponent_GetRungDistance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ClimbableComponent_eventGetRungDistance_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UClimbableComponent_GetRungDistance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UClimbableComponent_GetRungDistance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UClimbableComponent_GetRungDistance_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ClimbableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UClimbableComponent_GetRungDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UClimbableComponent, nullptr, "GetRungDistance", nullptr, nullptr, sizeof(ClimbableComponent_eventGetRungDistance_Parms), Z_Construct_UFunction_UClimbableComponent_GetRungDistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UClimbableComponent_GetRungDistance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UClimbableComponent_GetRungDistance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UClimbableComponent_GetRungDistance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UClimbableComponent_GetRungDistance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UClimbableComponent_GetRungDistance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UClimbableComponent_GetWidth_Statics
	{
		struct ClimbableComponent_eventGetWidth_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UClimbableComponent_GetWidth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ClimbableComponent_eventGetWidth_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UClimbableComponent_GetWidth_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UClimbableComponent_GetWidth_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UClimbableComponent_GetWidth_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ClimbableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UClimbableComponent_GetWidth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UClimbableComponent, nullptr, "GetWidth", nullptr, nullptr, sizeof(ClimbableComponent_eventGetWidth_Parms), Z_Construct_UFunction_UClimbableComponent_GetWidth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UClimbableComponent_GetWidth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UClimbableComponent_GetWidth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UClimbableComponent_GetWidth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UClimbableComponent_GetWidth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UClimbableComponent_GetWidth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UClimbableComponent_NoRegister()
	{
		return UClimbableComponent::StaticClass();
	}
	struct Z_Construct_UClass_UClimbableComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Height_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Height;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RungDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RungDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Width_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Width;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOneSided_MetaData[];
#endif
		static void NewProp_bOneSided_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOneSided;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClimbDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ClimbDistance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UClimbableComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_FPSController,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UClimbableComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UClimbableComponent_GetHeight, "GetHeight" }, // 3178679513
		{ &Z_Construct_UFunction_UClimbableComponent_GetRungDistance, "GetRungDistance" }, // 1453178870
		{ &Z_Construct_UFunction_UClimbableComponent_GetWidth, "GetWidth" }, // 843274784
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClimbableComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "ClimbableComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ClimbableComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClimbableComponent_Statics::NewProp_Height_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ClimbableComponent" },
		{ "ModuleRelativePath", "Public/ClimbableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UClimbableComponent_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UClimbableComponent, Height), METADATA_PARAMS(Z_Construct_UClass_UClimbableComponent_Statics::NewProp_Height_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UClimbableComponent_Statics::NewProp_Height_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClimbableComponent_Statics::NewProp_RungDistance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ClimbableComponent" },
		{ "ModuleRelativePath", "Public/ClimbableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UClimbableComponent_Statics::NewProp_RungDistance = { "RungDistance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UClimbableComponent, RungDistance), METADATA_PARAMS(Z_Construct_UClass_UClimbableComponent_Statics::NewProp_RungDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UClimbableComponent_Statics::NewProp_RungDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClimbableComponent_Statics::NewProp_Width_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ClimbableComponent" },
		{ "ModuleRelativePath", "Public/ClimbableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UClimbableComponent_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UClimbableComponent, Width), METADATA_PARAMS(Z_Construct_UClass_UClimbableComponent_Statics::NewProp_Width_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UClimbableComponent_Statics::NewProp_Width_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClimbableComponent_Statics::NewProp_bOneSided_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ClimbableComponent" },
		{ "ModuleRelativePath", "Public/ClimbableComponent.h" },
	};
#endif
	void Z_Construct_UClass_UClimbableComponent_Statics::NewProp_bOneSided_SetBit(void* Obj)
	{
		((UClimbableComponent*)Obj)->bOneSided = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UClimbableComponent_Statics::NewProp_bOneSided = { "bOneSided", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UClimbableComponent), &Z_Construct_UClass_UClimbableComponent_Statics::NewProp_bOneSided_SetBit, METADATA_PARAMS(Z_Construct_UClass_UClimbableComponent_Statics::NewProp_bOneSided_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UClimbableComponent_Statics::NewProp_bOneSided_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClimbableComponent_Statics::NewProp_ClimbDistance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ClimbableComponent" },
		{ "ModuleRelativePath", "Public/ClimbableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UClimbableComponent_Statics::NewProp_ClimbDistance = { "ClimbDistance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UClimbableComponent, ClimbDistance), METADATA_PARAMS(Z_Construct_UClass_UClimbableComponent_Statics::NewProp_ClimbDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UClimbableComponent_Statics::NewProp_ClimbDistance_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UClimbableComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClimbableComponent_Statics::NewProp_Height,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClimbableComponent_Statics::NewProp_RungDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClimbableComponent_Statics::NewProp_Width,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClimbableComponent_Statics::NewProp_bOneSided,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClimbableComponent_Statics::NewProp_ClimbDistance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UClimbableComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UClimbableComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UClimbableComponent_Statics::ClassParams = {
		&UClimbableComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UClimbableComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UClimbableComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UClimbableComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UClimbableComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UClimbableComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UClimbableComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UClimbableComponent, 484546338);
	template<> FPSCONTROLLER_API UClass* StaticClass<UClimbableComponent>()
	{
		return UClimbableComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UClimbableComponent(Z_Construct_UClass_UClimbableComponent, &UClimbableComponent::StaticClass, TEXT("/Script/FPSController"), TEXT("UClimbableComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UClimbableComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
