// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSController/Public/FPSItemData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFPSItemData() {}
// Cross Module References
	FPSCONTROLLER_API UClass* Z_Construct_UClass_UFPSItemData_NoRegister();
	FPSCONTROLLER_API UClass* Z_Construct_UClass_UFPSItemData();
	ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
	UPackage* Z_Construct_UPackage__Script_FPSController();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	FPSCONTROLLER_API UClass* Z_Construct_UClass_AFPSItem_NoRegister();
	FPSCONTROLLER_API UEnum* Z_Construct_UEnum_FPSController_EItemType();
	FPSCONTROLLER_API UEnum* Z_Construct_UEnum_FPSController_EItemWeight();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UDamageType_NoRegister();
	FMODSTUDIO_API UClass* Z_Construct_UClass_UFMODEvent_NoRegister();
	FPSCONTROLLER_API UScriptStruct* Z_Construct_UScriptStruct_FFPSCosmetic();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
// End Cross Module References
	void UFPSItemData::StaticRegisterNativesUFPSItemData()
	{
	}
	UClass* Z_Construct_UClass_UFPSItemData_NoRegister()
	{
		return UFPSItemData::StaticClass();
	}
	struct Z_Construct_UClass_UFPSItemData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InternalName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InternalName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetSlot_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TargetSlot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemName_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ItemName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemDescription_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ItemDescription;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Icon_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_Icon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviewMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_PreviewMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp_ItemClass;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ItemType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ItemType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ItemWeightCategory_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemWeightCategory_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ItemWeightCategory;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CountryOfOrigin_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_CountryOfOrigin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ItemTags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementSpeedMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MovementSpeedMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EquipTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EquipTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DequipTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DequipTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CheckAmmoTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CheckAmmoTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemWeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ItemWeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InspectTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InspectTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanBash_MetaData[];
#endif
		static void NewProp_bCanBash_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanBash;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BashDamage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BashDamage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BashRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BashRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BashDelay_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BashDelay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BashTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BashTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BashFailTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BashFailTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KickTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_KickTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BashDamageType_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_BashDamageType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BashSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BashSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BashFailSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BashFailSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EquipSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EquipSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DequipSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DequipSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultCosmetic_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DefaultCosmetic;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Cosmetics_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Cosmetics_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Cosmetics;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FirstPersonPositionOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FirstPersonPositionOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FirstPersonRotationOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FirstPersonRotationOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FirstPersonCrouchRotationOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FirstPersonCrouchRotationOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThirdPersonPositionOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ThirdPersonPositionOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThirdPersonSprintingPositionOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ThirdPersonSprintingPositionOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThirdPersonLowReadyPositionOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ThirdPersonLowReadyPositionOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BasePoseAnimation_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_BasePoseAnimation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IdleAnimation_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_IdleAnimation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementAnimation_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_MovementAnimation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SprintingAnimation_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_SprintingAnimation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EquipMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_EquipMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FirstEquipMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_FirstEquipMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DequipMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_DequipMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BashMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_BashMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BashFailMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_BashFailMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JiggleMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_JiggleMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CheckAmmoMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_CheckAmmoMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InspectMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_InspectMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemForwardAxis_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ItemForwardAxis;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemUpAxis_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ItemUpAxis;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemBasePoseAnimation_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_ItemBasePoseAnimation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemMovementAnimation_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_ItemMovementAnimation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemEquipMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_ItemEquipMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemFirstEquipMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_ItemFirstEquipMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemDequipMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_ItemDequipMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemBashMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_ItemBashMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemJiggleMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_ItemJiggleMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemCheckAmmoMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_ItemCheckAmmoMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemInspectMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_ItemInspectMontage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFPSItemData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_FPSController,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSItemData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "FPSItemData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/FPSItemData.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSItemData_Statics::NewProp_InternalName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSItemData" },
		{ "ModuleRelativePath", "Public/FPSItemData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UFPSItemData_Statics::NewProp_InternalName = { "InternalName", nullptr, (EPropertyFlags)0x0010010000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSItemData, InternalName), METADATA_PARAMS(Z_Construct_UClass_UFPSItemData_Statics::NewProp_InternalName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSItemData_Statics::NewProp_InternalName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSItemData_Statics::NewProp_TargetSlot_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSItemData" },
		{ "ModuleRelativePath", "Public/FPSItemData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFPSItemData_Statics::NewProp_TargetSlot = { "TargetSlot", nullptr, (EPropertyFlags)0x0010010000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSItemData, TargetSlot), METADATA_PARAMS(Z_Construct_UClass_UFPSItemData_Statics::NewProp_TargetSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSItemData_Statics::NewProp_TargetSlot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSItemData_Statics::NewProp_ItemName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSItemData" },
		{ "ModuleRelativePath", "Public/FPSItemData.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UFPSItemData_Statics::NewProp_ItemName = { "ItemName", nullptr, (EPropertyFlags)0x0010010000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSItemData, ItemName), METADATA_PARAMS(Z_Construct_UClass_UFPSItemData_Statics::NewProp_ItemName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSItemData_Statics::NewProp_ItemName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSItemData_Statics::NewProp_ItemDescription_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSItemData" },
		{ "ModuleRelativePath", "Public/FPSItemData.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UFPSItemData_Statics::NewProp_ItemDescription = { "ItemDescription", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSItemData, ItemDescription), METADATA_PARAMS(Z_Construct_UClass_UFPSItemData_Statics::NewProp_ItemDescription_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSItemData_Statics::NewProp_ItemDescription_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSItemData_Statics::NewProp_Icon_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSItemData" },
		{ "ModuleRelativePath", "Public/FPSItemData.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UFPSItemData_Statics::NewProp_Icon = { "Icon", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSItemData, Icon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFPSItemData_Statics::NewProp_Icon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSItemData_Statics::NewProp_Icon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSItemData_Statics::NewProp_PreviewMesh_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSItemData" },
		{ "ModuleRelativePath", "Public/FPSItemData.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UFPSItemData_Statics::NewProp_PreviewMesh = { "PreviewMesh", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSItemData, PreviewMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFPSItemData_Statics::NewProp_PreviewMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSItemData_Statics::NewProp_PreviewMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSItemData_Statics::NewProp_ItemClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSItemData" },
		{ "ModuleRelativePath", "Public/FPSItemData.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UFPSItemData_Statics::NewProp_ItemClass = { "ItemClass", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSItemData, ItemClass), Z_Construct_UClass_AFPSItem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFPSItemData_Statics::NewProp_ItemClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSItemData_Statics::NewProp_ItemClass_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFPSItemData_Statics::NewProp_ItemType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSItemData_Statics::NewProp_ItemType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSItemData" },
		{ "ModuleRelativePath", "Public/FPSItemData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UFPSItemData_Statics::NewProp_ItemType = { "ItemType", nullptr, (EPropertyFlags)0x0010010000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSItemData, ItemType), Z_Construct_UEnum_FPSController_EItemType, METADATA_PARAMS(Z_Construct_UClass_UFPSItemData_Statics::NewProp_ItemType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSItemData_Statics::NewProp_ItemType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UFPSItemData_Statics::NewProp_ItemWeightCategory_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSItemData_Statics::NewProp_ItemWeightCategory_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSItemData" },
		{ "ModuleRelativePath", "Public/FPSItemData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UFPSItemData_Statics::NewProp_ItemWeightCategory = { "ItemWeightCategory", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSItemData, ItemWeightCategory), Z_Construct_UEnum_FPSController_EItemWeight, METADATA_PARAMS(Z_Construct_UClass_UFPSItemData_Statics::NewProp_ItemWeightCategory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSItemData_Statics::NewProp_ItemWeightCategory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSItemData_Statics::NewProp_CountryOfOrigin_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSItemData" },
		{ "ModuleRelativePath", "Public/FPSItemData.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UFPSItemData_Statics::NewProp_CountryOfOrigin = { "CountryOfOrigin", nullptr, (EPropertyFlags)0x0010010000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSItemData, CountryOfOrigin), METADATA_PARAMS(Z_Construct_UClass_UFPSItemData_Statics::NewProp_CountryOfOrigin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSItemData_Statics::NewProp_CountryOfOrigin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSItemData_Statics::NewProp_ItemTags_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSItemData" },
		{ "ModuleRelativePath", "Public/FPSItemData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFPSItemData_Statics::NewProp_ItemTags = { "ItemTags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSItemData, ItemTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_UFPSItemData_Statics::NewProp_ItemTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSItemData_Statics::NewProp_ItemTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSItemData_Statics::NewProp_MovementSpeedMultiplier_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSItemData" },
		{ "ModuleRelativePath", "Public/FPSItemData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFPSItemData_Statics::NewProp_MovementSpeedMultiplier = { "MovementSpeedMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSItemData, MovementSpeedMultiplier), METADATA_PARAMS(Z_Construct_UClass_UFPSItemData_Statics::NewProp_MovementSpeedMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSItemData_Statics::NewProp_MovementSpeedMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSItemData_Statics::NewProp_EquipTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSItemData" },
		{ "ModuleRelativePath", "Public/FPSItemData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFPSItemData_Statics::NewProp_EquipTime = { "EquipTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSItemData, EquipTime), METADATA_PARAMS(Z_Construct_UClass_UFPSItemData_Statics::NewProp_EquipTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSItemData_Statics::NewProp_EquipTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSItemData_Statics::NewProp_DequipTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSItemData" },
		{ "ModuleRelativePath", "Public/FPSItemData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFPSItemData_Statics::NewProp_DequipTime = { "DequipTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSItemData, DequipTime), METADATA_PARAMS(Z_Construct_UClass_UFPSItemData_Statics::NewProp_DequipTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSItemData_Statics::NewProp_DequipTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSItemData_Statics::NewProp_CheckAmmoTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSItemData" },
		{ "ModuleRelativePath", "Public/FPSItemData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFPSItemData_Statics::NewProp_CheckAmmoTime = { "CheckAmmoTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSItemData, CheckAmmoTime), METADATA_PARAMS(Z_Construct_UClass_UFPSItemData_Statics::NewProp_CheckAmmoTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSItemData_Statics::NewProp_CheckAmmoTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSItemData_Statics::NewProp_ItemWeight_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSItemData" },
		{ "ModuleRelativePath", "Public/FPSItemData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFPSItemData_Statics::NewProp_ItemWeight = { "ItemWeight", nullptr, (EPropertyFlags)0x0010010000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSItemData, ItemWeight), METADATA_PARAMS(Z_Construct_UClass_UFPSItemData_Statics::NewProp_ItemWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSItemData_Statics::NewProp_ItemWeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSItemData_Statics::NewProp_InspectTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSItemData" },
		{ "ModuleRelativePath", "Public/FPSItemData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFPSItemData_Statics::NewProp_InspectTime = { "InspectTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSItemData, InspectTime), METADATA_PARAMS(Z_Construct_UClass_UFPSItemData_Statics::NewProp_InspectTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSItemData_Statics::NewProp_InspectTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSItemData_Statics::NewProp_bCanBash_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSItemData" },
		{ "ModuleRelativePath", "Public/FPSItemData.h" },
	};
#endif
	void Z_Construct_UClass_UFPSItemData_Statics::NewProp_bCanBash_SetBit(void* Obj)
	{
		((UFPSItemData*)Obj)->bCanBash = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFPSItemData_Statics::NewProp_bCanBash = { "bCanBash", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFPSItemData), &Z_Construct_UClass_UFPSItemData_Statics::NewProp_bCanBash_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFPSItemData_Statics::NewProp_bCanBash_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSItemData_Statics::NewProp_bCanBash_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSItemData_Statics::NewProp_BashDamage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSItemData" },
		{ "ModuleRelativePath", "Public/FPSItemData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFPSItemData_Statics::NewProp_BashDamage = { "BashDamage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSItemData, BashDamage), METADATA_PARAMS(Z_Construct_UClass_UFPSItemData_Statics::NewProp_BashDamage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSItemData_Statics::NewProp_BashDamage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSItemData_Statics::NewProp_BashRange_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSItemData" },
		{ "ModuleRelativePath", "Public/FPSItemData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFPSItemData_Statics::NewProp_BashRange = { "BashRange", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSItemData, BashRange), METADATA_PARAMS(Z_Construct_UClass_UFPSItemData_Statics::NewProp_BashRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSItemData_Statics::NewProp_BashRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSItemData_Statics::NewProp_BashDelay_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSItemData" },
		{ "ModuleRelativePath", "Public/FPSItemData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFPSItemData_Statics::NewProp_BashDelay = { "BashDelay", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSItemData, BashDelay), METADATA_PARAMS(Z_Construct_UClass_UFPSItemData_Statics::NewProp_BashDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSItemData_Statics::NewProp_BashDelay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSItemData_Statics::NewProp_BashTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSItemData" },
		{ "ModuleRelativePath", "Public/FPSItemData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFPSItemData_Statics::NewProp_BashTime = { "BashTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSItemData, BashTime), METADATA_PARAMS(Z_Construct_UClass_UFPSItemData_Statics::NewProp_BashTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSItemData_Statics::NewProp_BashTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSItemData_Statics::NewProp_BashFailTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSItemData" },
		{ "ModuleRelativePath", "Public/FPSItemData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFPSItemData_Statics::NewProp_BashFailTime = { "BashFailTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSItemData, BashFailTime), METADATA_PARAMS(Z_Construct_UClass_UFPSItemData_Statics::NewProp_BashFailTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSItemData_Statics::NewProp_BashFailTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSItemData_Statics::NewProp_KickTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSItemData" },
		{ "ModuleRelativePath", "Public/FPSItemData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFPSItemData_Statics::NewProp_KickTime = { "KickTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSItemData, KickTime), METADATA_PARAMS(Z_Construct_UClass_UFPSItemData_Statics::NewProp_KickTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSItemData_Statics::NewProp_KickTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSItemData_Statics::NewProp_BashDamageType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSItemData" },
		{ "ModuleRelativePath", "Public/FPSItemData.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UFPSItemData_Statics::NewProp_BashDamageType = { "BashDamageType", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSItemData, BashDamageType), Z_Construct_UClass_UDamageType_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UFPSItemData_Statics::NewProp_BashDamageType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSItemData_Statics::NewProp_BashDamageType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSItemData_Statics::NewProp_BashSound_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSItemData" },
		{ "ModuleRelativePath", "Public/FPSItemData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFPSItemData_Statics::NewProp_BashSound = { "BashSound", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSItemData, BashSound), Z_Construct_UClass_UFMODEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFPSItemData_Statics::NewProp_BashSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSItemData_Statics::NewProp_BashSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSItemData_Statics::NewProp_BashFailSound_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSItemData" },
		{ "ModuleRelativePath", "Public/FPSItemData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFPSItemData_Statics::NewProp_BashFailSound = { "BashFailSound", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSItemData, BashFailSound), Z_Construct_UClass_UFMODEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFPSItemData_Statics::NewProp_BashFailSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSItemData_Statics::NewProp_BashFailSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSItemData_Statics::NewProp_EquipSound_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSItemData" },
		{ "ModuleRelativePath", "Public/FPSItemData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFPSItemData_Statics::NewProp_EquipSound = { "EquipSound", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSItemData, EquipSound), Z_Construct_UClass_UFMODEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFPSItemData_Statics::NewProp_EquipSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSItemData_Statics::NewProp_EquipSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSItemData_Statics::NewProp_DequipSound_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSItemData" },
		{ "ModuleRelativePath", "Public/FPSItemData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFPSItemData_Statics::NewProp_DequipSound = { "DequipSound", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSItemData, DequipSound), Z_Construct_UClass_UFMODEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFPSItemData_Statics::NewProp_DequipSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSItemData_Statics::NewProp_DequipSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSItemData_Statics::NewProp_DefaultCosmetic_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSItemData" },
		{ "ModuleRelativePath", "Public/FPSItemData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFPSItemData_Statics::NewProp_DefaultCosmetic = { "DefaultCosmetic", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSItemData, DefaultCosmetic), METADATA_PARAMS(Z_Construct_UClass_UFPSItemData_Statics::NewProp_DefaultCosmetic_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSItemData_Statics::NewProp_DefaultCosmetic_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFPSItemData_Statics::NewProp_Cosmetics_Inner = { "Cosmetics", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FFPSCosmetic, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSItemData_Statics::NewProp_Cosmetics_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSItemData" },
		{ "ModuleRelativePath", "Public/FPSItemData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFPSItemData_Statics::NewProp_Cosmetics = { "Cosmetics", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSItemData, Cosmetics), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UFPSItemData_Statics::NewProp_Cosmetics_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSItemData_Statics::NewProp_Cosmetics_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSItemData_Statics::NewProp_FirstPersonPositionOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSItemData" },
		{ "ModuleRelativePath", "Public/FPSItemData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFPSItemData_Statics::NewProp_FirstPersonPositionOffset = { "FirstPersonPositionOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSItemData, FirstPersonPositionOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UFPSItemData_Statics::NewProp_FirstPersonPositionOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSItemData_Statics::NewProp_FirstPersonPositionOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSItemData_Statics::NewProp_FirstPersonRotationOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSItemData" },
		{ "ModuleRelativePath", "Public/FPSItemData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFPSItemData_Statics::NewProp_FirstPersonRotationOffset = { "FirstPersonRotationOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSItemData, FirstPersonRotationOffset), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UFPSItemData_Statics::NewProp_FirstPersonRotationOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSItemData_Statics::NewProp_FirstPersonRotationOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSItemData_Statics::NewProp_FirstPersonCrouchRotationOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSItemData" },
		{ "ModuleRelativePath", "Public/FPSItemData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFPSItemData_Statics::NewProp_FirstPersonCrouchRotationOffset = { "FirstPersonCrouchRotationOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSItemData, FirstPersonCrouchRotationOffset), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UFPSItemData_Statics::NewProp_FirstPersonCrouchRotationOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSItemData_Statics::NewProp_FirstPersonCrouchRotationOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSItemData_Statics::NewProp_ThirdPersonPositionOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSItemData" },
		{ "ModuleRelativePath", "Public/FPSItemData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFPSItemData_Statics::NewProp_ThirdPersonPositionOffset = { "ThirdPersonPositionOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSItemData, ThirdPersonPositionOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UFPSItemData_Statics::NewProp_ThirdPersonPositionOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSItemData_Statics::NewProp_ThirdPersonPositionOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSItemData_Statics::NewProp_ThirdPersonSprintingPositionOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSItemData" },
		{ "ModuleRelativePath", "Public/FPSItemData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFPSItemData_Statics::NewProp_ThirdPersonSprintingPositionOffset = { "ThirdPersonSprintingPositionOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSItemData, ThirdPersonSprintingPositionOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UFPSItemData_Statics::NewProp_ThirdPersonSprintingPositionOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSItemData_Statics::NewProp_ThirdPersonSprintingPositionOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSItemData_Statics::NewProp_ThirdPersonLowReadyPositionOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSItemData" },
		{ "ModuleRelativePath", "Public/FPSItemData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFPSItemData_Statics::NewProp_ThirdPersonLowReadyPositionOffset = { "ThirdPersonLowReadyPositionOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSItemData, ThirdPersonLowReadyPositionOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UFPSItemData_Statics::NewProp_ThirdPersonLowReadyPositionOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSItemData_Statics::NewProp_ThirdPersonLowReadyPositionOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSItemData_Statics::NewProp_BasePoseAnimation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSItemData" },
		{ "ModuleRelativePath", "Public/FPSItemData.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UFPSItemData_Statics::NewProp_BasePoseAnimation = { "BasePoseAnimation", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSItemData, BasePoseAnimation), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFPSItemData_Statics::NewProp_BasePoseAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSItemData_Statics::NewProp_BasePoseAnimation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSItemData_Statics::NewProp_IdleAnimation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSItemData" },
		{ "ModuleRelativePath", "Public/FPSItemData.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UFPSItemData_Statics::NewProp_IdleAnimation = { "IdleAnimation", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSItemData, IdleAnimation), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFPSItemData_Statics::NewProp_IdleAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSItemData_Statics::NewProp_IdleAnimation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSItemData_Statics::NewProp_MovementAnimation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSItemData" },
		{ "ModuleRelativePath", "Public/FPSItemData.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UFPSItemData_Statics::NewProp_MovementAnimation = { "MovementAnimation", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSItemData, MovementAnimation), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFPSItemData_Statics::NewProp_MovementAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSItemData_Statics::NewProp_MovementAnimation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSItemData_Statics::NewProp_SprintingAnimation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSItemData" },
		{ "ModuleRelativePath", "Public/FPSItemData.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UFPSItemData_Statics::NewProp_SprintingAnimation = { "SprintingAnimation", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSItemData, SprintingAnimation), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFPSItemData_Statics::NewProp_SprintingAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSItemData_Statics::NewProp_SprintingAnimation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSItemData_Statics::NewProp_EquipMontage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSItemData" },
		{ "ModuleRelativePath", "Public/FPSItemData.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UFPSItemData_Statics::NewProp_EquipMontage = { "EquipMontage", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSItemData, EquipMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFPSItemData_Statics::NewProp_EquipMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSItemData_Statics::NewProp_EquipMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSItemData_Statics::NewProp_FirstEquipMontage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSItemData" },
		{ "ModuleRelativePath", "Public/FPSItemData.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UFPSItemData_Statics::NewProp_FirstEquipMontage = { "FirstEquipMontage", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSItemData, FirstEquipMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFPSItemData_Statics::NewProp_FirstEquipMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSItemData_Statics::NewProp_FirstEquipMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSItemData_Statics::NewProp_DequipMontage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSItemData" },
		{ "ModuleRelativePath", "Public/FPSItemData.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UFPSItemData_Statics::NewProp_DequipMontage = { "DequipMontage", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSItemData, DequipMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFPSItemData_Statics::NewProp_DequipMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSItemData_Statics::NewProp_DequipMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSItemData_Statics::NewProp_BashMontage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSItemData" },
		{ "ModuleRelativePath", "Public/FPSItemData.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UFPSItemData_Statics::NewProp_BashMontage = { "BashMontage", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSItemData, BashMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFPSItemData_Statics::NewProp_BashMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSItemData_Statics::NewProp_BashMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSItemData_Statics::NewProp_BashFailMontage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSItemData" },
		{ "ModuleRelativePath", "Public/FPSItemData.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UFPSItemData_Statics::NewProp_BashFailMontage = { "BashFailMontage", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSItemData, BashFailMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFPSItemData_Statics::NewProp_BashFailMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSItemData_Statics::NewProp_BashFailMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSItemData_Statics::NewProp_JiggleMontage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSItemData" },
		{ "ModuleRelativePath", "Public/FPSItemData.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UFPSItemData_Statics::NewProp_JiggleMontage = { "JiggleMontage", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSItemData, JiggleMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFPSItemData_Statics::NewProp_JiggleMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSItemData_Statics::NewProp_JiggleMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSItemData_Statics::NewProp_CheckAmmoMontage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSItemData" },
		{ "ModuleRelativePath", "Public/FPSItemData.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UFPSItemData_Statics::NewProp_CheckAmmoMontage = { "CheckAmmoMontage", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSItemData, CheckAmmoMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFPSItemData_Statics::NewProp_CheckAmmoMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSItemData_Statics::NewProp_CheckAmmoMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSItemData_Statics::NewProp_InspectMontage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSItemData" },
		{ "ModuleRelativePath", "Public/FPSItemData.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UFPSItemData_Statics::NewProp_InspectMontage = { "InspectMontage", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSItemData, InspectMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFPSItemData_Statics::NewProp_InspectMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSItemData_Statics::NewProp_InspectMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSItemData_Statics::NewProp_ItemForwardAxis_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSItemData" },
		{ "ModuleRelativePath", "Public/FPSItemData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFPSItemData_Statics::NewProp_ItemForwardAxis = { "ItemForwardAxis", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSItemData, ItemForwardAxis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UFPSItemData_Statics::NewProp_ItemForwardAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSItemData_Statics::NewProp_ItemForwardAxis_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSItemData_Statics::NewProp_ItemUpAxis_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSItemData" },
		{ "ModuleRelativePath", "Public/FPSItemData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFPSItemData_Statics::NewProp_ItemUpAxis = { "ItemUpAxis", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSItemData, ItemUpAxis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UFPSItemData_Statics::NewProp_ItemUpAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSItemData_Statics::NewProp_ItemUpAxis_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSItemData_Statics::NewProp_ItemBasePoseAnimation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSItemData" },
		{ "ModuleRelativePath", "Public/FPSItemData.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UFPSItemData_Statics::NewProp_ItemBasePoseAnimation = { "ItemBasePoseAnimation", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSItemData, ItemBasePoseAnimation), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFPSItemData_Statics::NewProp_ItemBasePoseAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSItemData_Statics::NewProp_ItemBasePoseAnimation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSItemData_Statics::NewProp_ItemMovementAnimation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSItemData" },
		{ "ModuleRelativePath", "Public/FPSItemData.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UFPSItemData_Statics::NewProp_ItemMovementAnimation = { "ItemMovementAnimation", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSItemData, ItemMovementAnimation), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFPSItemData_Statics::NewProp_ItemMovementAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSItemData_Statics::NewProp_ItemMovementAnimation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSItemData_Statics::NewProp_ItemEquipMontage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSItemData" },
		{ "ModuleRelativePath", "Public/FPSItemData.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UFPSItemData_Statics::NewProp_ItemEquipMontage = { "ItemEquipMontage", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSItemData, ItemEquipMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFPSItemData_Statics::NewProp_ItemEquipMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSItemData_Statics::NewProp_ItemEquipMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSItemData_Statics::NewProp_ItemFirstEquipMontage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSItemData" },
		{ "ModuleRelativePath", "Public/FPSItemData.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UFPSItemData_Statics::NewProp_ItemFirstEquipMontage = { "ItemFirstEquipMontage", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSItemData, ItemFirstEquipMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFPSItemData_Statics::NewProp_ItemFirstEquipMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSItemData_Statics::NewProp_ItemFirstEquipMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSItemData_Statics::NewProp_ItemDequipMontage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSItemData" },
		{ "ModuleRelativePath", "Public/FPSItemData.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UFPSItemData_Statics::NewProp_ItemDequipMontage = { "ItemDequipMontage", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSItemData, ItemDequipMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFPSItemData_Statics::NewProp_ItemDequipMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSItemData_Statics::NewProp_ItemDequipMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSItemData_Statics::NewProp_ItemBashMontage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSItemData" },
		{ "ModuleRelativePath", "Public/FPSItemData.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UFPSItemData_Statics::NewProp_ItemBashMontage = { "ItemBashMontage", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSItemData, ItemBashMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFPSItemData_Statics::NewProp_ItemBashMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSItemData_Statics::NewProp_ItemBashMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSItemData_Statics::NewProp_ItemJiggleMontage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSItemData" },
		{ "ModuleRelativePath", "Public/FPSItemData.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UFPSItemData_Statics::NewProp_ItemJiggleMontage = { "ItemJiggleMontage", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSItemData, ItemJiggleMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFPSItemData_Statics::NewProp_ItemJiggleMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSItemData_Statics::NewProp_ItemJiggleMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSItemData_Statics::NewProp_ItemCheckAmmoMontage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSItemData" },
		{ "ModuleRelativePath", "Public/FPSItemData.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UFPSItemData_Statics::NewProp_ItemCheckAmmoMontage = { "ItemCheckAmmoMontage", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSItemData, ItemCheckAmmoMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFPSItemData_Statics::NewProp_ItemCheckAmmoMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSItemData_Statics::NewProp_ItemCheckAmmoMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSItemData_Statics::NewProp_ItemInspectMontage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSItemData" },
		{ "ModuleRelativePath", "Public/FPSItemData.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UFPSItemData_Statics::NewProp_ItemInspectMontage = { "ItemInspectMontage", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSItemData, ItemInspectMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFPSItemData_Statics::NewProp_ItemInspectMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSItemData_Statics::NewProp_ItemInspectMontage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFPSItemData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSItemData_Statics::NewProp_InternalName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSItemData_Statics::NewProp_TargetSlot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSItemData_Statics::NewProp_ItemName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSItemData_Statics::NewProp_ItemDescription,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSItemData_Statics::NewProp_Icon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSItemData_Statics::NewProp_PreviewMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSItemData_Statics::NewProp_ItemClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSItemData_Statics::NewProp_ItemType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSItemData_Statics::NewProp_ItemType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSItemData_Statics::NewProp_ItemWeightCategory_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSItemData_Statics::NewProp_ItemWeightCategory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSItemData_Statics::NewProp_CountryOfOrigin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSItemData_Statics::NewProp_ItemTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSItemData_Statics::NewProp_MovementSpeedMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSItemData_Statics::NewProp_EquipTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSItemData_Statics::NewProp_DequipTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSItemData_Statics::NewProp_CheckAmmoTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSItemData_Statics::NewProp_ItemWeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSItemData_Statics::NewProp_InspectTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSItemData_Statics::NewProp_bCanBash,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSItemData_Statics::NewProp_BashDamage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSItemData_Statics::NewProp_BashRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSItemData_Statics::NewProp_BashDelay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSItemData_Statics::NewProp_BashTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSItemData_Statics::NewProp_BashFailTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSItemData_Statics::NewProp_KickTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSItemData_Statics::NewProp_BashDamageType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSItemData_Statics::NewProp_BashSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSItemData_Statics::NewProp_BashFailSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSItemData_Statics::NewProp_EquipSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSItemData_Statics::NewProp_DequipSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSItemData_Statics::NewProp_DefaultCosmetic,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSItemData_Statics::NewProp_Cosmetics_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSItemData_Statics::NewProp_Cosmetics,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSItemData_Statics::NewProp_FirstPersonPositionOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSItemData_Statics::NewProp_FirstPersonRotationOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSItemData_Statics::NewProp_FirstPersonCrouchRotationOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSItemData_Statics::NewProp_ThirdPersonPositionOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSItemData_Statics::NewProp_ThirdPersonSprintingPositionOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSItemData_Statics::NewProp_ThirdPersonLowReadyPositionOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSItemData_Statics::NewProp_BasePoseAnimation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSItemData_Statics::NewProp_IdleAnimation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSItemData_Statics::NewProp_MovementAnimation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSItemData_Statics::NewProp_SprintingAnimation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSItemData_Statics::NewProp_EquipMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSItemData_Statics::NewProp_FirstEquipMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSItemData_Statics::NewProp_DequipMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSItemData_Statics::NewProp_BashMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSItemData_Statics::NewProp_BashFailMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSItemData_Statics::NewProp_JiggleMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSItemData_Statics::NewProp_CheckAmmoMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSItemData_Statics::NewProp_InspectMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSItemData_Statics::NewProp_ItemForwardAxis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSItemData_Statics::NewProp_ItemUpAxis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSItemData_Statics::NewProp_ItemBasePoseAnimation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSItemData_Statics::NewProp_ItemMovementAnimation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSItemData_Statics::NewProp_ItemEquipMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSItemData_Statics::NewProp_ItemFirstEquipMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSItemData_Statics::NewProp_ItemDequipMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSItemData_Statics::NewProp_ItemBashMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSItemData_Statics::NewProp_ItemJiggleMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSItemData_Statics::NewProp_ItemCheckAmmoMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSItemData_Statics::NewProp_ItemInspectMontage,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFPSItemData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFPSItemData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFPSItemData_Statics::ClassParams = {
		&UFPSItemData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFPSItemData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFPSItemData_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFPSItemData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSItemData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFPSItemData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFPSItemData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFPSItemData, 2910185631);
	template<> FPSCONTROLLER_API UClass* StaticClass<UFPSItemData>()
	{
		return UFPSItemData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFPSItemData(Z_Construct_UClass_UFPSItemData, &UFPSItemData::StaticClass, TEXT("/Script/FPSController"), TEXT("UFPSItemData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFPSItemData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
