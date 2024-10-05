// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSController/Public/FPSAttachmentData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFPSAttachmentData() {}
// Cross Module References
	FPSCONTROLLER_API UClass* Z_Construct_UClass_UFPSAttachmentData_NoRegister();
	FPSCONTROLLER_API UClass* Z_Construct_UClass_UFPSAttachmentData();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_FPSController();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	FMODSTUDIO_API UClass* Z_Construct_UClass_UFMODEvent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	FPSCONTROLLER_API UClass* Z_Construct_UClass_AFPSAttachment_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	FPSCONTROLLER_API UScriptStruct* Z_Construct_UScriptStruct_FAttachmentMeshSetup();
	FPSCONTROLLER_API UScriptStruct* Z_Construct_UScriptStruct_FFPSCosmetic();
// End Cross Module References
	void UFPSAttachmentData::StaticRegisterNativesUFPSAttachmentData()
	{
	}
	UClass* Z_Construct_UClass_UFPSAttachmentData_NoRegister()
	{
		return UFPSAttachmentData::StaticClass();
	}
	struct Z_Construct_UClass_UFPSAttachmentData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Icon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Icon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemName_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ItemName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemDescription_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ItemDescription;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnableSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EnableSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisableSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DisableSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttachSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AttachSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RemoveSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RemoveSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ControlOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ControlOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviewMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_PreviewMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttachmentClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp_AttachmentClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideAttachSettings_MetaData[];
#endif
		static void NewProp_bOverrideAttachSettings_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideAttachSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverrideAttachSocketName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_OverrideAttachSocketName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverrideAttachRotationOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OverrideAttachRotationOffset;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AttachMeshes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttachMeshes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AttachMeshes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttachMeshOverridePriority_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AttachMeshOverridePriority;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Cosmetics_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Cosmetics_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Cosmetics;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFPSAttachmentData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_FPSController,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSAttachmentData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "FPSAttachmentData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/FPSAttachmentData.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSAttachmentData_Statics::NewProp_Icon_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSAttachmentData" },
		{ "ModuleRelativePath", "Public/FPSAttachmentData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFPSAttachmentData_Statics::NewProp_Icon = { "Icon", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSAttachmentData, Icon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFPSAttachmentData_Statics::NewProp_Icon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSAttachmentData_Statics::NewProp_Icon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSAttachmentData_Statics::NewProp_ItemName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSAttachmentData" },
		{ "ModuleRelativePath", "Public/FPSAttachmentData.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UFPSAttachmentData_Statics::NewProp_ItemName = { "ItemName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSAttachmentData, ItemName), METADATA_PARAMS(Z_Construct_UClass_UFPSAttachmentData_Statics::NewProp_ItemName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSAttachmentData_Statics::NewProp_ItemName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSAttachmentData_Statics::NewProp_ItemDescription_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSAttachmentData" },
		{ "ModuleRelativePath", "Public/FPSAttachmentData.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UFPSAttachmentData_Statics::NewProp_ItemDescription = { "ItemDescription", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSAttachmentData, ItemDescription), METADATA_PARAMS(Z_Construct_UClass_UFPSAttachmentData_Statics::NewProp_ItemDescription_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSAttachmentData_Statics::NewProp_ItemDescription_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSAttachmentData_Statics::NewProp_EnableSound_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSAttachmentData" },
		{ "ModuleRelativePath", "Public/FPSAttachmentData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFPSAttachmentData_Statics::NewProp_EnableSound = { "EnableSound", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSAttachmentData, EnableSound), Z_Construct_UClass_UFMODEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFPSAttachmentData_Statics::NewProp_EnableSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSAttachmentData_Statics::NewProp_EnableSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSAttachmentData_Statics::NewProp_DisableSound_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSAttachmentData" },
		{ "ModuleRelativePath", "Public/FPSAttachmentData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFPSAttachmentData_Statics::NewProp_DisableSound = { "DisableSound", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSAttachmentData, DisableSound), Z_Construct_UClass_UFMODEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFPSAttachmentData_Statics::NewProp_DisableSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSAttachmentData_Statics::NewProp_DisableSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSAttachmentData_Statics::NewProp_AttachSound_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSAttachmentData" },
		{ "ModuleRelativePath", "Public/FPSAttachmentData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFPSAttachmentData_Statics::NewProp_AttachSound = { "AttachSound", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSAttachmentData, AttachSound), Z_Construct_UClass_UFMODEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFPSAttachmentData_Statics::NewProp_AttachSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSAttachmentData_Statics::NewProp_AttachSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSAttachmentData_Statics::NewProp_RemoveSound_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSAttachmentData" },
		{ "ModuleRelativePath", "Public/FPSAttachmentData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFPSAttachmentData_Statics::NewProp_RemoveSound = { "RemoveSound", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSAttachmentData, RemoveSound), Z_Construct_UClass_UFMODEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFPSAttachmentData_Statics::NewProp_RemoveSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSAttachmentData_Statics::NewProp_RemoveSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSAttachmentData_Statics::NewProp_ControlOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSAttachmentData" },
		{ "ModuleRelativePath", "Public/FPSAttachmentData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFPSAttachmentData_Statics::NewProp_ControlOffset = { "ControlOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSAttachmentData, ControlOffset), METADATA_PARAMS(Z_Construct_UClass_UFPSAttachmentData_Statics::NewProp_ControlOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSAttachmentData_Statics::NewProp_ControlOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSAttachmentData_Statics::NewProp_PreviewMesh_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSAttachmentData" },
		{ "ModuleRelativePath", "Public/FPSAttachmentData.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UFPSAttachmentData_Statics::NewProp_PreviewMesh = { "PreviewMesh", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSAttachmentData, PreviewMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFPSAttachmentData_Statics::NewProp_PreviewMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSAttachmentData_Statics::NewProp_PreviewMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSAttachmentData_Statics::NewProp_AttachmentClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSAttachmentData" },
		{ "ModuleRelativePath", "Public/FPSAttachmentData.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UFPSAttachmentData_Statics::NewProp_AttachmentClass = { "AttachmentClass", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSAttachmentData, AttachmentClass), Z_Construct_UClass_AFPSAttachment_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFPSAttachmentData_Statics::NewProp_AttachmentClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSAttachmentData_Statics::NewProp_AttachmentClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSAttachmentData_Statics::NewProp_bOverrideAttachSettings_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSAttachmentData" },
		{ "ModuleRelativePath", "Public/FPSAttachmentData.h" },
	};
#endif
	void Z_Construct_UClass_UFPSAttachmentData_Statics::NewProp_bOverrideAttachSettings_SetBit(void* Obj)
	{
		((UFPSAttachmentData*)Obj)->bOverrideAttachSettings = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFPSAttachmentData_Statics::NewProp_bOverrideAttachSettings = { "bOverrideAttachSettings", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFPSAttachmentData), &Z_Construct_UClass_UFPSAttachmentData_Statics::NewProp_bOverrideAttachSettings_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFPSAttachmentData_Statics::NewProp_bOverrideAttachSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSAttachmentData_Statics::NewProp_bOverrideAttachSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSAttachmentData_Statics::NewProp_OverrideAttachSocketName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSAttachmentData" },
		{ "ModuleRelativePath", "Public/FPSAttachmentData.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UFPSAttachmentData_Statics::NewProp_OverrideAttachSocketName = { "OverrideAttachSocketName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSAttachmentData, OverrideAttachSocketName), METADATA_PARAMS(Z_Construct_UClass_UFPSAttachmentData_Statics::NewProp_OverrideAttachSocketName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSAttachmentData_Statics::NewProp_OverrideAttachSocketName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSAttachmentData_Statics::NewProp_OverrideAttachRotationOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSAttachmentData" },
		{ "ModuleRelativePath", "Public/FPSAttachmentData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFPSAttachmentData_Statics::NewProp_OverrideAttachRotationOffset = { "OverrideAttachRotationOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSAttachmentData, OverrideAttachRotationOffset), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UFPSAttachmentData_Statics::NewProp_OverrideAttachRotationOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSAttachmentData_Statics::NewProp_OverrideAttachRotationOffset_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFPSAttachmentData_Statics::NewProp_AttachMeshes_Inner = { "AttachMeshes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAttachmentMeshSetup, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSAttachmentData_Statics::NewProp_AttachMeshes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSAttachmentData" },
		{ "ModuleRelativePath", "Public/FPSAttachmentData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFPSAttachmentData_Statics::NewProp_AttachMeshes = { "AttachMeshes", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSAttachmentData, AttachMeshes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UFPSAttachmentData_Statics::NewProp_AttachMeshes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSAttachmentData_Statics::NewProp_AttachMeshes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSAttachmentData_Statics::NewProp_AttachMeshOverridePriority_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSAttachmentData" },
		{ "ModuleRelativePath", "Public/FPSAttachmentData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFPSAttachmentData_Statics::NewProp_AttachMeshOverridePriority = { "AttachMeshOverridePriority", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSAttachmentData, AttachMeshOverridePriority), METADATA_PARAMS(Z_Construct_UClass_UFPSAttachmentData_Statics::NewProp_AttachMeshOverridePriority_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSAttachmentData_Statics::NewProp_AttachMeshOverridePriority_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFPSAttachmentData_Statics::NewProp_Cosmetics_Inner = { "Cosmetics", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FFPSCosmetic, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSAttachmentData_Statics::NewProp_Cosmetics_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSAttachmentData" },
		{ "ModuleRelativePath", "Public/FPSAttachmentData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFPSAttachmentData_Statics::NewProp_Cosmetics = { "Cosmetics", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSAttachmentData, Cosmetics), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UFPSAttachmentData_Statics::NewProp_Cosmetics_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSAttachmentData_Statics::NewProp_Cosmetics_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFPSAttachmentData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSAttachmentData_Statics::NewProp_Icon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSAttachmentData_Statics::NewProp_ItemName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSAttachmentData_Statics::NewProp_ItemDescription,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSAttachmentData_Statics::NewProp_EnableSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSAttachmentData_Statics::NewProp_DisableSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSAttachmentData_Statics::NewProp_AttachSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSAttachmentData_Statics::NewProp_RemoveSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSAttachmentData_Statics::NewProp_ControlOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSAttachmentData_Statics::NewProp_PreviewMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSAttachmentData_Statics::NewProp_AttachmentClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSAttachmentData_Statics::NewProp_bOverrideAttachSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSAttachmentData_Statics::NewProp_OverrideAttachSocketName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSAttachmentData_Statics::NewProp_OverrideAttachRotationOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSAttachmentData_Statics::NewProp_AttachMeshes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSAttachmentData_Statics::NewProp_AttachMeshes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSAttachmentData_Statics::NewProp_AttachMeshOverridePriority,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSAttachmentData_Statics::NewProp_Cosmetics_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSAttachmentData_Statics::NewProp_Cosmetics,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFPSAttachmentData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFPSAttachmentData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFPSAttachmentData_Statics::ClassParams = {
		&UFPSAttachmentData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFPSAttachmentData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFPSAttachmentData_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFPSAttachmentData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSAttachmentData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFPSAttachmentData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFPSAttachmentData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFPSAttachmentData, 2902978146);
	template<> FPSCONTROLLER_API UClass* StaticClass<UFPSAttachmentData>()
	{
		return UFPSAttachmentData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFPSAttachmentData(Z_Construct_UClass_UFPSAttachmentData, &UFPSAttachmentData::StaticClass, TEXT("/Script/FPSController"), TEXT("UFPSAttachmentData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFPSAttachmentData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
