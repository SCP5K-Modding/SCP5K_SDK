// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Electronics/Public/ElectronicLight.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeElectronicLight() {}
// Cross Module References
	ELECTRONICS_API UClass* Z_Construct_UClass_AElectronicLight_NoRegister();
	ELECTRONICS_API UClass* Z_Construct_UClass_AElectronicLight();
	ELECTRONICS_API UClass* Z_Construct_UClass_AElectronic();
	UPackage* Z_Construct_UPackage__Script_Electronics();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ULightComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AElectronicLight::execSetColor)
	{
		P_GET_STRUCT(FLinearColor,Z_Param_NewColor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetColor_Implementation(Z_Param_NewColor);
		P_NATIVE_END;
	}
	static FName NAME_AElectronicLight_SetColor = FName(TEXT("SetColor"));
	void AElectronicLight::SetColor(FLinearColor NewColor)
	{
		ElectronicLight_eventSetColor_Parms Parms;
		Parms.NewColor=NewColor;
		ProcessEvent(FindFunctionChecked(NAME_AElectronicLight_SetColor),&Parms);
	}
	void AElectronicLight::StaticRegisterNativesAElectronicLight()
	{
		UClass* Class = AElectronicLight::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetColor", &AElectronicLight::execSetColor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AElectronicLight_SetColor_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewColor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AElectronicLight_SetColor_Statics::NewProp_NewColor = { "NewColor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElectronicLight_eventSetColor_Parms, NewColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AElectronicLight_SetColor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AElectronicLight_SetColor_Statics::NewProp_NewColor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AElectronicLight_SetColor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ElectronicLight.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AElectronicLight_SetColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AElectronicLight, nullptr, "SetColor", nullptr, nullptr, sizeof(ElectronicLight_eventSetColor_Parms), Z_Construct_UFunction_AElectronicLight_SetColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AElectronicLight_SetColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C880C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AElectronicLight_SetColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AElectronicLight_SetColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AElectronicLight_SetColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AElectronicLight_SetColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AElectronicLight_NoRegister()
	{
		return AElectronicLight::StaticClass();
	}
	struct Z_Construct_UClass_AElectronicLight_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EmissiveIntensity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EmissiveIntensity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideColor_MetaData[];
#endif
		static void NewProp_bOverrideColor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Color;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseDynamicMaterialInstance_MetaData[];
#endif
		static void NewProp_bUseDynamicMaterialInstance_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseDynamicMaterialInstance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EmissiveColorParameterName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_EmissiveColorParameterName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EmissiveMaterialIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_EmissiveMaterialIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EmissiveParameterName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_EmissiveParameterName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LightMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LightMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Lights_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Lights_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Lights_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Lights;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrimaryLight_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PrimaryLight;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AElectronicLight_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AElectronic,
		(UObject* (*)())Z_Construct_UPackage__Script_Electronics,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AElectronicLight_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AElectronicLight_SetColor, "SetColor" }, // 3423717994
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AElectronicLight_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ElectronicLight.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ElectronicLight.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AElectronicLight_Statics::NewProp_EmissiveIntensity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ElectronicLight" },
		{ "ModuleRelativePath", "Public/ElectronicLight.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AElectronicLight_Statics::NewProp_EmissiveIntensity = { "EmissiveIntensity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AElectronicLight, EmissiveIntensity), METADATA_PARAMS(Z_Construct_UClass_AElectronicLight_Statics::NewProp_EmissiveIntensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AElectronicLight_Statics::NewProp_EmissiveIntensity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AElectronicLight_Statics::NewProp_bOverrideColor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ElectronicLight" },
		{ "ModuleRelativePath", "Public/ElectronicLight.h" },
	};
#endif
	void Z_Construct_UClass_AElectronicLight_Statics::NewProp_bOverrideColor_SetBit(void* Obj)
	{
		((AElectronicLight*)Obj)->bOverrideColor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AElectronicLight_Statics::NewProp_bOverrideColor = { "bOverrideColor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AElectronicLight), &Z_Construct_UClass_AElectronicLight_Statics::NewProp_bOverrideColor_SetBit, METADATA_PARAMS(Z_Construct_UClass_AElectronicLight_Statics::NewProp_bOverrideColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AElectronicLight_Statics::NewProp_bOverrideColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AElectronicLight_Statics::NewProp_Color_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ElectronicLight" },
		{ "ModuleRelativePath", "Public/ElectronicLight.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AElectronicLight_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AElectronicLight, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_AElectronicLight_Statics::NewProp_Color_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AElectronicLight_Statics::NewProp_Color_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AElectronicLight_Statics::NewProp_bUseDynamicMaterialInstance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ElectronicLight" },
		{ "ModuleRelativePath", "Public/ElectronicLight.h" },
	};
#endif
	void Z_Construct_UClass_AElectronicLight_Statics::NewProp_bUseDynamicMaterialInstance_SetBit(void* Obj)
	{
		((AElectronicLight*)Obj)->bUseDynamicMaterialInstance = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AElectronicLight_Statics::NewProp_bUseDynamicMaterialInstance = { "bUseDynamicMaterialInstance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AElectronicLight), &Z_Construct_UClass_AElectronicLight_Statics::NewProp_bUseDynamicMaterialInstance_SetBit, METADATA_PARAMS(Z_Construct_UClass_AElectronicLight_Statics::NewProp_bUseDynamicMaterialInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AElectronicLight_Statics::NewProp_bUseDynamicMaterialInstance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AElectronicLight_Statics::NewProp_EmissiveColorParameterName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ElectronicLight" },
		{ "ModuleRelativePath", "Public/ElectronicLight.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_AElectronicLight_Statics::NewProp_EmissiveColorParameterName = { "EmissiveColorParameterName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AElectronicLight, EmissiveColorParameterName), METADATA_PARAMS(Z_Construct_UClass_AElectronicLight_Statics::NewProp_EmissiveColorParameterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AElectronicLight_Statics::NewProp_EmissiveColorParameterName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AElectronicLight_Statics::NewProp_EmissiveMaterialIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ElectronicLight" },
		{ "ModuleRelativePath", "Public/ElectronicLight.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AElectronicLight_Statics::NewProp_EmissiveMaterialIndex = { "EmissiveMaterialIndex", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AElectronicLight, EmissiveMaterialIndex), METADATA_PARAMS(Z_Construct_UClass_AElectronicLight_Statics::NewProp_EmissiveMaterialIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AElectronicLight_Statics::NewProp_EmissiveMaterialIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AElectronicLight_Statics::NewProp_EmissiveParameterName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ElectronicLight" },
		{ "ModuleRelativePath", "Public/ElectronicLight.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_AElectronicLight_Statics::NewProp_EmissiveParameterName = { "EmissiveParameterName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AElectronicLight, EmissiveParameterName), METADATA_PARAMS(Z_Construct_UClass_AElectronicLight_Statics::NewProp_EmissiveParameterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AElectronicLight_Statics::NewProp_EmissiveParameterName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AElectronicLight_Statics::NewProp_LightMaterial_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ElectronicLight" },
		{ "ModuleRelativePath", "Public/ElectronicLight.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AElectronicLight_Statics::NewProp_LightMaterial = { "LightMaterial", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AElectronicLight, LightMaterial), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AElectronicLight_Statics::NewProp_LightMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AElectronicLight_Statics::NewProp_LightMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AElectronicLight_Statics::NewProp_MeshComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ElectronicLight" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ElectronicLight.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AElectronicLight_Statics::NewProp_MeshComponent = { "MeshComponent", nullptr, (EPropertyFlags)0x00220c000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AElectronicLight, MeshComponent), Z_Construct_UClass_UMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AElectronicLight_Statics::NewProp_MeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AElectronicLight_Statics::NewProp_MeshComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AElectronicLight_Statics::NewProp_Lights_Inner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ElectronicLight" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ElectronicLight.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AElectronicLight_Statics::NewProp_Lights_Inner = { "Lights", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ULightComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AElectronicLight_Statics::NewProp_Lights_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AElectronicLight_Statics::NewProp_Lights_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AElectronicLight_Statics::NewProp_Lights_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ElectronicLight" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ElectronicLight.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AElectronicLight_Statics::NewProp_Lights = { "Lights", nullptr, (EPropertyFlags)0x00200c800000000d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AElectronicLight, Lights), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AElectronicLight_Statics::NewProp_Lights_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AElectronicLight_Statics::NewProp_Lights_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AElectronicLight_Statics::NewProp_PrimaryLight_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ElectronicLight" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ElectronicLight.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AElectronicLight_Statics::NewProp_PrimaryLight = { "PrimaryLight", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AElectronicLight, PrimaryLight), Z_Construct_UClass_ULightComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AElectronicLight_Statics::NewProp_PrimaryLight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AElectronicLight_Statics::NewProp_PrimaryLight_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AElectronicLight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AElectronicLight_Statics::NewProp_EmissiveIntensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AElectronicLight_Statics::NewProp_bOverrideColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AElectronicLight_Statics::NewProp_Color,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AElectronicLight_Statics::NewProp_bUseDynamicMaterialInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AElectronicLight_Statics::NewProp_EmissiveColorParameterName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AElectronicLight_Statics::NewProp_EmissiveMaterialIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AElectronicLight_Statics::NewProp_EmissiveParameterName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AElectronicLight_Statics::NewProp_LightMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AElectronicLight_Statics::NewProp_MeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AElectronicLight_Statics::NewProp_Lights_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AElectronicLight_Statics::NewProp_Lights,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AElectronicLight_Statics::NewProp_PrimaryLight,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AElectronicLight_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AElectronicLight>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AElectronicLight_Statics::ClassParams = {
		&AElectronicLight::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AElectronicLight_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AElectronicLight_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AElectronicLight_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AElectronicLight_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AElectronicLight()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AElectronicLight_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AElectronicLight, 3807225807);
	template<> ELECTRONICS_API UClass* StaticClass<AElectronicLight>()
	{
		return AElectronicLight::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AElectronicLight(Z_Construct_UClass_AElectronicLight, &AElectronicLight::StaticClass, TEXT("/Script/Electronics"), TEXT("AElectronicLight"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AElectronicLight);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
