// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSController/Public/RangedWeaponAnimInstance.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRangedWeaponAnimInstance() {}
// Cross Module References
	FPSCONTROLLER_API UClass* Z_Construct_UClass_URangedWeaponAnimInstance_NoRegister();
	FPSCONTROLLER_API UClass* Z_Construct_UClass_URangedWeaponAnimInstance();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	UPackage* Z_Construct_UPackage__Script_FPSController();
	FPSCONTROLLER_API UClass* Z_Construct_UClass_AFPSCharacterBase_NoRegister();
	FPSCONTROLLER_API UClass* Z_Construct_UClass_UFPSItemData_NoRegister();
	FPSCONTROLLER_API UClass* Z_Construct_UClass_UFPSWeaponData_NoRegister();
	FPSCONTROLLER_API UClass* Z_Construct_UClass_UFPSRangedWeaponData_NoRegister();
	FPSCONTROLLER_API UClass* Z_Construct_UClass_AFPSRangedWeapon_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	FPSCONTROLLER_API UScriptStruct* Z_Construct_UScriptStruct_FConstantLerpDriver();
	FPSCONTROLLER_API UClass* Z_Construct_UClass_UFPSAnimationInstance_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(URangedWeaponAnimInstance::execEjectCasing)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EjectCasing();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URangedWeaponAnimInstance::execGetBonesWithPrefix)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_BonePrefix);
		P_GET_TARRAY_REF(FName,Z_Param_Out_OutBoneNames);
		P_GET_UBOOL(Z_Param_bReverseOrder);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetBonesWithPrefix(Z_Param_BonePrefix,Z_Param_Out_OutBoneNames,Z_Param_bReverseOrder);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URangedWeaponAnimInstance::execHideSecondMag)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HideSecondMag();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URangedWeaponAnimInstance::execHideSpeedLoader)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HideSpeedLoader();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URangedWeaponAnimInstance::execRemoveCasings)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveCasings();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URangedWeaponAnimInstance::execSetHasSight)
	{
		P_GET_UBOOL(Z_Param_bNewHasSight);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHasSight(Z_Param_bNewHasSight);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URangedWeaponAnimInstance::execShowSecondMag)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShowSecondMag();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URangedWeaponAnimInstance::execShowSpeedLoader)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShowSpeedLoader();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URangedWeaponAnimInstance::execSpawnMagazine)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SpawnMagazine();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URangedWeaponAnimInstance::execUpdateBullets)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Count);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateBullets(Z_Param_Count);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URangedWeaponAnimInstance::execUpdateCasings)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_BulletsInChamber);
		P_GET_PROPERTY(FIntProperty,Z_Param_AvailableAmmo);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateCasings(Z_Param_BulletsInChamber,Z_Param_AvailableAmmo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URangedWeaponAnimInstance::execUpdateRoundsInMag)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Offset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateRoundsInMag(Z_Param_Offset);
		P_NATIVE_END;
	}
	void URangedWeaponAnimInstance::StaticRegisterNativesURangedWeaponAnimInstance()
	{
		UClass* Class = URangedWeaponAnimInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EjectCasing", &URangedWeaponAnimInstance::execEjectCasing },
			{ "GetBonesWithPrefix", &URangedWeaponAnimInstance::execGetBonesWithPrefix },
			{ "HideSecondMag", &URangedWeaponAnimInstance::execHideSecondMag },
			{ "HideSpeedLoader", &URangedWeaponAnimInstance::execHideSpeedLoader },
			{ "RemoveCasings", &URangedWeaponAnimInstance::execRemoveCasings },
			{ "SetHasSight", &URangedWeaponAnimInstance::execSetHasSight },
			{ "ShowSecondMag", &URangedWeaponAnimInstance::execShowSecondMag },
			{ "ShowSpeedLoader", &URangedWeaponAnimInstance::execShowSpeedLoader },
			{ "SpawnMagazine", &URangedWeaponAnimInstance::execSpawnMagazine },
			{ "UpdateBullets", &URangedWeaponAnimInstance::execUpdateBullets },
			{ "UpdateCasings", &URangedWeaponAnimInstance::execUpdateCasings },
			{ "UpdateRoundsInMag", &URangedWeaponAnimInstance::execUpdateRoundsInMag },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URangedWeaponAnimInstance_EjectCasing_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URangedWeaponAnimInstance_EjectCasing_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RangedWeaponAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URangedWeaponAnimInstance_EjectCasing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URangedWeaponAnimInstance, nullptr, "EjectCasing", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URangedWeaponAnimInstance_EjectCasing_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URangedWeaponAnimInstance_EjectCasing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URangedWeaponAnimInstance_EjectCasing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URangedWeaponAnimInstance_EjectCasing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URangedWeaponAnimInstance_GetBonesWithPrefix_Statics
	{
		struct RangedWeaponAnimInstance_eventGetBonesWithPrefix_Parms
		{
			FName BonePrefix;
			TArray<FName> OutBoneNames;
			bool bReverseOrder;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BonePrefix;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_OutBoneNames_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutBoneNames;
		static void NewProp_bReverseOrder_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReverseOrder;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URangedWeaponAnimInstance_GetBonesWithPrefix_Statics::NewProp_BonePrefix = { "BonePrefix", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RangedWeaponAnimInstance_eventGetBonesWithPrefix_Parms, BonePrefix), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URangedWeaponAnimInstance_GetBonesWithPrefix_Statics::NewProp_OutBoneNames_Inner = { "OutBoneNames", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URangedWeaponAnimInstance_GetBonesWithPrefix_Statics::NewProp_OutBoneNames = { "OutBoneNames", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RangedWeaponAnimInstance_eventGetBonesWithPrefix_Parms, OutBoneNames), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URangedWeaponAnimInstance_GetBonesWithPrefix_Statics::NewProp_bReverseOrder_SetBit(void* Obj)
	{
		((RangedWeaponAnimInstance_eventGetBonesWithPrefix_Parms*)Obj)->bReverseOrder = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URangedWeaponAnimInstance_GetBonesWithPrefix_Statics::NewProp_bReverseOrder = { "bReverseOrder", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RangedWeaponAnimInstance_eventGetBonesWithPrefix_Parms), &Z_Construct_UFunction_URangedWeaponAnimInstance_GetBonesWithPrefix_Statics::NewProp_bReverseOrder_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URangedWeaponAnimInstance_GetBonesWithPrefix_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URangedWeaponAnimInstance_GetBonesWithPrefix_Statics::NewProp_BonePrefix,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URangedWeaponAnimInstance_GetBonesWithPrefix_Statics::NewProp_OutBoneNames_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URangedWeaponAnimInstance_GetBonesWithPrefix_Statics::NewProp_OutBoneNames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URangedWeaponAnimInstance_GetBonesWithPrefix_Statics::NewProp_bReverseOrder,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URangedWeaponAnimInstance_GetBonesWithPrefix_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RangedWeaponAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URangedWeaponAnimInstance_GetBonesWithPrefix_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URangedWeaponAnimInstance, nullptr, "GetBonesWithPrefix", nullptr, nullptr, sizeof(RangedWeaponAnimInstance_eventGetBonesWithPrefix_Parms), Z_Construct_UFunction_URangedWeaponAnimInstance_GetBonesWithPrefix_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URangedWeaponAnimInstance_GetBonesWithPrefix_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URangedWeaponAnimInstance_GetBonesWithPrefix_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URangedWeaponAnimInstance_GetBonesWithPrefix_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URangedWeaponAnimInstance_GetBonesWithPrefix()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URangedWeaponAnimInstance_GetBonesWithPrefix_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URangedWeaponAnimInstance_HideSecondMag_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URangedWeaponAnimInstance_HideSecondMag_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RangedWeaponAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URangedWeaponAnimInstance_HideSecondMag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URangedWeaponAnimInstance, nullptr, "HideSecondMag", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URangedWeaponAnimInstance_HideSecondMag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URangedWeaponAnimInstance_HideSecondMag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URangedWeaponAnimInstance_HideSecondMag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URangedWeaponAnimInstance_HideSecondMag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URangedWeaponAnimInstance_HideSpeedLoader_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URangedWeaponAnimInstance_HideSpeedLoader_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RangedWeaponAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URangedWeaponAnimInstance_HideSpeedLoader_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URangedWeaponAnimInstance, nullptr, "HideSpeedLoader", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URangedWeaponAnimInstance_HideSpeedLoader_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URangedWeaponAnimInstance_HideSpeedLoader_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URangedWeaponAnimInstance_HideSpeedLoader()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URangedWeaponAnimInstance_HideSpeedLoader_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URangedWeaponAnimInstance_RemoveCasings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URangedWeaponAnimInstance_RemoveCasings_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RangedWeaponAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URangedWeaponAnimInstance_RemoveCasings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URangedWeaponAnimInstance, nullptr, "RemoveCasings", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URangedWeaponAnimInstance_RemoveCasings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URangedWeaponAnimInstance_RemoveCasings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URangedWeaponAnimInstance_RemoveCasings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URangedWeaponAnimInstance_RemoveCasings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URangedWeaponAnimInstance_SetHasSight_Statics
	{
		struct RangedWeaponAnimInstance_eventSetHasSight_Parms
		{
			bool bNewHasSight;
		};
		static void NewProp_bNewHasSight_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNewHasSight;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_URangedWeaponAnimInstance_SetHasSight_Statics::NewProp_bNewHasSight_SetBit(void* Obj)
	{
		((RangedWeaponAnimInstance_eventSetHasSight_Parms*)Obj)->bNewHasSight = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URangedWeaponAnimInstance_SetHasSight_Statics::NewProp_bNewHasSight = { "bNewHasSight", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RangedWeaponAnimInstance_eventSetHasSight_Parms), &Z_Construct_UFunction_URangedWeaponAnimInstance_SetHasSight_Statics::NewProp_bNewHasSight_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URangedWeaponAnimInstance_SetHasSight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URangedWeaponAnimInstance_SetHasSight_Statics::NewProp_bNewHasSight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URangedWeaponAnimInstance_SetHasSight_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RangedWeaponAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URangedWeaponAnimInstance_SetHasSight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URangedWeaponAnimInstance, nullptr, "SetHasSight", nullptr, nullptr, sizeof(RangedWeaponAnimInstance_eventSetHasSight_Parms), Z_Construct_UFunction_URangedWeaponAnimInstance_SetHasSight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URangedWeaponAnimInstance_SetHasSight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URangedWeaponAnimInstance_SetHasSight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URangedWeaponAnimInstance_SetHasSight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URangedWeaponAnimInstance_SetHasSight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URangedWeaponAnimInstance_SetHasSight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URangedWeaponAnimInstance_ShowSecondMag_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URangedWeaponAnimInstance_ShowSecondMag_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RangedWeaponAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URangedWeaponAnimInstance_ShowSecondMag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URangedWeaponAnimInstance, nullptr, "ShowSecondMag", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URangedWeaponAnimInstance_ShowSecondMag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URangedWeaponAnimInstance_ShowSecondMag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URangedWeaponAnimInstance_ShowSecondMag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URangedWeaponAnimInstance_ShowSecondMag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URangedWeaponAnimInstance_ShowSpeedLoader_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URangedWeaponAnimInstance_ShowSpeedLoader_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RangedWeaponAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URangedWeaponAnimInstance_ShowSpeedLoader_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URangedWeaponAnimInstance, nullptr, "ShowSpeedLoader", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URangedWeaponAnimInstance_ShowSpeedLoader_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URangedWeaponAnimInstance_ShowSpeedLoader_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URangedWeaponAnimInstance_ShowSpeedLoader()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URangedWeaponAnimInstance_ShowSpeedLoader_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URangedWeaponAnimInstance_SpawnMagazine_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URangedWeaponAnimInstance_SpawnMagazine_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RangedWeaponAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URangedWeaponAnimInstance_SpawnMagazine_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URangedWeaponAnimInstance, nullptr, "SpawnMagazine", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URangedWeaponAnimInstance_SpawnMagazine_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URangedWeaponAnimInstance_SpawnMagazine_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URangedWeaponAnimInstance_SpawnMagazine()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URangedWeaponAnimInstance_SpawnMagazine_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URangedWeaponAnimInstance_UpdateBullets_Statics
	{
		struct RangedWeaponAnimInstance_eventUpdateBullets_Parms
		{
			int32 Count;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Count;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URangedWeaponAnimInstance_UpdateBullets_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RangedWeaponAnimInstance_eventUpdateBullets_Parms, Count), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URangedWeaponAnimInstance_UpdateBullets_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URangedWeaponAnimInstance_UpdateBullets_Statics::NewProp_Count,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URangedWeaponAnimInstance_UpdateBullets_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RangedWeaponAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URangedWeaponAnimInstance_UpdateBullets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URangedWeaponAnimInstance, nullptr, "UpdateBullets", nullptr, nullptr, sizeof(RangedWeaponAnimInstance_eventUpdateBullets_Parms), Z_Construct_UFunction_URangedWeaponAnimInstance_UpdateBullets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URangedWeaponAnimInstance_UpdateBullets_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URangedWeaponAnimInstance_UpdateBullets_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URangedWeaponAnimInstance_UpdateBullets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URangedWeaponAnimInstance_UpdateBullets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URangedWeaponAnimInstance_UpdateBullets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URangedWeaponAnimInstance_UpdateCasings_Statics
	{
		struct RangedWeaponAnimInstance_eventUpdateCasings_Parms
		{
			int32 BulletsInChamber;
			int32 AvailableAmmo;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BulletsInChamber;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AvailableAmmo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URangedWeaponAnimInstance_UpdateCasings_Statics::NewProp_BulletsInChamber = { "BulletsInChamber", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RangedWeaponAnimInstance_eventUpdateCasings_Parms, BulletsInChamber), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URangedWeaponAnimInstance_UpdateCasings_Statics::NewProp_AvailableAmmo = { "AvailableAmmo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RangedWeaponAnimInstance_eventUpdateCasings_Parms, AvailableAmmo), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URangedWeaponAnimInstance_UpdateCasings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URangedWeaponAnimInstance_UpdateCasings_Statics::NewProp_BulletsInChamber,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URangedWeaponAnimInstance_UpdateCasings_Statics::NewProp_AvailableAmmo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URangedWeaponAnimInstance_UpdateCasings_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RangedWeaponAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URangedWeaponAnimInstance_UpdateCasings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URangedWeaponAnimInstance, nullptr, "UpdateCasings", nullptr, nullptr, sizeof(RangedWeaponAnimInstance_eventUpdateCasings_Parms), Z_Construct_UFunction_URangedWeaponAnimInstance_UpdateCasings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URangedWeaponAnimInstance_UpdateCasings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URangedWeaponAnimInstance_UpdateCasings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URangedWeaponAnimInstance_UpdateCasings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URangedWeaponAnimInstance_UpdateCasings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URangedWeaponAnimInstance_UpdateCasings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URangedWeaponAnimInstance_UpdateRoundsInMag_Statics
	{
		struct RangedWeaponAnimInstance_eventUpdateRoundsInMag_Parms
		{
			int32 Offset;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Offset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URangedWeaponAnimInstance_UpdateRoundsInMag_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RangedWeaponAnimInstance_eventUpdateRoundsInMag_Parms, Offset), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URangedWeaponAnimInstance_UpdateRoundsInMag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URangedWeaponAnimInstance_UpdateRoundsInMag_Statics::NewProp_Offset,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URangedWeaponAnimInstance_UpdateRoundsInMag_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RangedWeaponAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URangedWeaponAnimInstance_UpdateRoundsInMag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URangedWeaponAnimInstance, nullptr, "UpdateRoundsInMag", nullptr, nullptr, sizeof(RangedWeaponAnimInstance_eventUpdateRoundsInMag_Parms), Z_Construct_UFunction_URangedWeaponAnimInstance_UpdateRoundsInMag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URangedWeaponAnimInstance_UpdateRoundsInMag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URangedWeaponAnimInstance_UpdateRoundsInMag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URangedWeaponAnimInstance_UpdateRoundsInMag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URangedWeaponAnimInstance_UpdateRoundsInMag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URangedWeaponAnimInstance_UpdateRoundsInMag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_URangedWeaponAnimInstance_NoRegister()
	{
		return URangedWeaponAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_URangedWeaponAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FPSCharacter_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FPSCharacter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ItemData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WeaponData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RangedWeaponData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RangedWeaponData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RangedWeapon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RangedWeapon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentAmmo_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CurrentAmmo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentBulletsInChamber_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CurrentBulletsInChamber;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BulletBoneNames_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BulletBoneNames_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BulletBoneNames;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_CasingBoneNames_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CasingBoneNames_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CasingBoneNames;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BoneNames_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneNames_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BoneNames;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BulletBoneName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BulletBoneName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpeedLoaderBoneName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SpeedLoaderBoneName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FollowerBoneName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_FollowerBoneName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CasingBoneName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_CasingBoneName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MagazineBoneName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_MagazineBoneName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecondMagazineBoneName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SecondMagazineBoneName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bReverseBulletOrder_MetaData[];
#endif
		static void NewProp_bReverseBulletOrder_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReverseBulletOrder;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseCasings_MetaData[];
#endif
		static void NewProp_bUseCasings_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseCasings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAnimateSafety_MetaData[];
#endif
		static void NewProp_bAnimateSafety_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAnimateSafety;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReloadSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReloadSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementAlpha_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MovementAlpha;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SafetyTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SafetyTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BasePoseAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BasePoseAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EmptyBasePoseAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EmptyBasePoseAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SightFoldedBasePoseAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SightFoldedBasePoseAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MovementAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActionMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActionMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FiringMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FiringMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReloadingMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReloadingMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EmptyReloadingMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EmptyReloadingMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsEmpty_MetaData[];
#endif
		static void NewProp_bIsEmpty_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsEmpty;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasSight_MetaData[];
#endif
		static void NewProp_bHasSight_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasSight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bReloading_MetaData[];
#endif
		static void NewProp_bReloading_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReloading;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SafetyLerpDriver_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SafetyLerpDriver;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SafetyRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SafetyRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SmoothSafetyRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SmoothSafetyRotation;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SafetyRotations_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SafetyRotations_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SafetyRotations;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URangedWeaponAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_FPSController,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URangedWeaponAnimInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URangedWeaponAnimInstance_EjectCasing, "EjectCasing" }, // 4215958218
		{ &Z_Construct_UFunction_URangedWeaponAnimInstance_GetBonesWithPrefix, "GetBonesWithPrefix" }, // 2488756503
		{ &Z_Construct_UFunction_URangedWeaponAnimInstance_HideSecondMag, "HideSecondMag" }, // 2234437391
		{ &Z_Construct_UFunction_URangedWeaponAnimInstance_HideSpeedLoader, "HideSpeedLoader" }, // 270645662
		{ &Z_Construct_UFunction_URangedWeaponAnimInstance_RemoveCasings, "RemoveCasings" }, // 162533734
		{ &Z_Construct_UFunction_URangedWeaponAnimInstance_SetHasSight, "SetHasSight" }, // 1964175687
		{ &Z_Construct_UFunction_URangedWeaponAnimInstance_ShowSecondMag, "ShowSecondMag" }, // 2373523674
		{ &Z_Construct_UFunction_URangedWeaponAnimInstance_ShowSpeedLoader, "ShowSpeedLoader" }, // 432624710
		{ &Z_Construct_UFunction_URangedWeaponAnimInstance_SpawnMagazine, "SpawnMagazine" }, // 2208334768
		{ &Z_Construct_UFunction_URangedWeaponAnimInstance_UpdateBullets, "UpdateBullets" }, // 3230020839
		{ &Z_Construct_UFunction_URangedWeaponAnimInstance_UpdateCasings, "UpdateCasings" }, // 2158897557
		{ &Z_Construct_UFunction_URangedWeaponAnimInstance_UpdateRoundsInMag, "UpdateRoundsInMag" }, // 3667790426
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URangedWeaponAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "RangedWeaponAnimInstance.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/RangedWeaponAnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URangedWeaponAnimInstance_Statics::NewProp_FPSCharacter_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RangedWeaponAnimInstance" },
		{ "ModuleRelativePath", "Public/RangedWeaponAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URangedWeaponAnimInstance_Statics::NewProp_FPSCharacter = { "FPSCharacter", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URangedWeaponAnimInstance, FPSCharacter), Z_Construct_UClass_AFPSCharacterBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URangedWeaponAnimInstance_Statics::NewProp_FPSCharacter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URangedWeaponAnimInstance_Statics::NewProp_FPSCharacter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URangedWeaponAnimInstance_Statics::NewProp_ItemData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RangedWeaponAnimInstance" },
		{ "ModuleRelativePath", "Public/RangedWeaponAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URangedWeaponAnimInstance_Statics::NewProp_ItemData = { "ItemData", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URangedWeaponAnimInstance, ItemData), Z_Construct_UClass_UFPSItemData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URangedWeaponAnimInstance_Statics::NewProp_ItemData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URangedWeaponAnimInstance_Statics::NewProp_ItemData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URangedWeaponAnimInstance_Statics::NewProp_WeaponData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RangedWeaponAnimInstance" },
		{ "ModuleRelativePath", "Public/RangedWeaponAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URangedWeaponAnimInstance_Statics::NewProp_WeaponData = { "WeaponData", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URangedWeaponAnimInstance, WeaponData), Z_Construct_UClass_UFPSWeaponData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URangedWeaponAnimInstance_Statics::NewProp_WeaponData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URangedWeaponAnimInstance_Statics::NewProp_WeaponData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URangedWeaponAnimInstance_Statics::NewProp_RangedWeaponData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RangedWeaponAnimInstance" },
		{ "ModuleRelativePath", "Public/RangedWeaponAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URangedWeaponAnimInstance_Statics::NewProp_RangedWeaponData = { "RangedWeaponData", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URangedWeaponAnimInstance, RangedWeaponData), Z_Construct_UClass_UFPSRangedWeaponData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URangedWeaponAnimInstance_Statics::NewProp_RangedWeaponData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URangedWeaponAnimInstance_Statics::NewProp_RangedWeaponData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URangedWeaponAnimInstance_Statics::NewProp_RangedWeapon_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RangedWeaponAnimInstance" },
		{ "ModuleRelativePath", "Public/RangedWeaponAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URangedWeaponAnimInstance_Statics::NewProp_RangedWeapon = { "RangedWeapon", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URangedWeaponAnimInstance, RangedWeapon), Z_Construct_UClass_AFPSRangedWeapon_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URangedWeaponAnimInstance_Statics::NewProp_RangedWeapon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URangedWeaponAnimInstance_Statics::NewProp_RangedWeapon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URangedWeaponAnimInstance_Statics::NewProp_CurrentAmmo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RangedWeaponAnimInstance" },
		{ "ModuleRelativePath", "Public/RangedWeaponAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_URangedWeaponAnimInstance_Statics::NewProp_CurrentAmmo = { "CurrentAmmo", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URangedWeaponAnimInstance, CurrentAmmo), METADATA_PARAMS(Z_Construct_UClass_URangedWeaponAnimInstance_Statics::NewProp_CurrentAmmo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URangedWeaponAnimInstance_Statics::NewProp_CurrentAmmo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URangedWeaponAnimInstance_Statics::NewProp_CurrentBulletsInChamber_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RangedWeaponAnimInstance" },
		{ "ModuleRelativePath", "Public/RangedWeaponAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_URangedWeaponAnimInstance_Statics::NewProp_CurrentBulletsInChamber = { "CurrentBulletsInChamber", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URangedWeaponAnimInstance, CurrentBulletsInChamber), METADATA_PARAMS(Z_Construct_UClass_URangedWeaponAnimInstance_Statics::NewProp_CurrentBulletsInChamber_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URangedWeaponAnimInstance_Statics::NewProp_CurrentBulletsInChamber_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_URangedWeaponAnimInstance_Statics::NewProp_BulletBoneNames_Inner = { "BulletBoneNames", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URangedWeaponAnimInstance_Statics::NewProp_BulletBoneNames_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RangedWeaponAnimInstance" },
		{ "ModuleRelativePath", "Public/RangedWeaponAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_URangedWeaponAnimInstance_Statics::NewProp_BulletBoneNames = { "BulletBoneNames", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URangedWeaponAnimInstance, BulletBoneNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_URangedWeaponAnimInstance_Statics::NewProp_BulletBoneNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URangedWeaponAnimInstance_Statics::NewProp_BulletBoneNames_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_URangedWeaponAnimInstance_Statics::NewProp_CasingBoneNames_Inner = { "CasingBoneNames", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URangedWeaponAnimInstance_Statics::NewProp_CasingBoneNames_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RangedWeaponAnimInstance" },
		{ "ModuleRelativePath", "Public/RangedWeaponAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_URangedWeaponAnimInstance_Statics::NewProp_CasingBoneNames = { "CasingBoneNames", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URangedWeaponAnimInstance, CasingBoneNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_URangedWeaponAnimInstance_Statics::NewProp_CasingBoneNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URangedWeaponAnimInstance_Statics::NewProp_CasingBoneNames_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_URangedWeaponAnimInstance_Statics::NewProp_BoneNames_Inner = { "BoneNames", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URangedWeaponAnimInstance_Statics::NewProp_BoneNames_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RangedWeaponAnimInstance" },
		{ "ModuleRelativePath", "Public/RangedWeaponAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_URangedWeaponAnimInstance_Statics::NewProp_BoneNames = { "BoneNames", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URangedWeaponAnimInstance, BoneNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_URangedWeaponAnimInstance_Statics::NewProp_BoneNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URangedWeaponAnimInstance_Statics::NewProp_BoneNames_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URangedWeaponAnimInstance_Statics::NewProp_BulletBoneName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RangedWeaponAnimInstance" },
		{ "ModuleRelativePath", "Public/RangedWeaponAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_URangedWeaponAnimInstance_Statics::NewProp_BulletBoneName = { "BulletBoneName", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URangedWeaponAnimInstance, BulletBoneName), METADATA_PARAMS(Z_Construct_UClass_URangedWeaponAnimInstance_Statics::NewProp_BulletBoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URangedWeaponAnimInstance_Statics::NewProp_BulletBoneName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URangedWeaponAnimInstance_Statics::NewProp_SpeedLoaderBoneName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RangedWeaponAnimInstance" },
		{ "ModuleRelativePath", "Public/RangedWeaponAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_URangedWeaponAnimInstance_Statics::NewProp_SpeedLoaderBoneName = { "SpeedLoaderBoneName", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URangedWeaponAnimInstance, SpeedLoaderBoneName), METADATA_PARAMS(Z_Construct_UClass_URangedWeaponAnimInstance_Statics::NewProp_SpeedLoaderBoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URangedWeaponAnimInstance_Statics::NewProp_SpeedLoaderBoneName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URangedWeaponAnimInstance_Statics::NewProp_FollowerBoneName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RangedWeaponAnimInstance" },
		{ "ModuleRelativePath", "Public/RangedWeaponAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_URangedWeaponAnimInstance_Statics::NewProp_FollowerBoneName = { "FollowerBoneName", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URangedWeaponAnimInstance, FollowerBoneName), METADATA_PARAMS(Z_Construct_UClass_URangedWeaponAnimInstance_Statics::NewProp_FollowerBoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URangedWeaponAnimInstance_Statics::NewProp_FollowerBoneName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URangedWeaponAnimInstance_Statics::NewProp_CasingBoneName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RangedWeaponAnimInstance" },
		{ "ModuleRelativePath", "Public/RangedWeaponAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_URangedWeaponAnimInstance_Statics::NewProp_CasingBoneName = { "CasingBoneName", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URangedWeaponAnimInstance, CasingBoneName), METADATA_PARAMS(Z_Construct_UClass_URangedWeaponAnimInstance_Statics::NewProp_CasingBoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URangedWeaponAnimInstance_Statics::NewProp_CasingBoneName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URangedWeaponAnimInstance_Statics::NewProp_MagazineBoneName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RangedWeaponAnimInstance" },
		{ "ModuleRelativePath", "Public/RangedWeaponAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_URangedWeaponAnimInstance_Statics::NewProp_MagazineBoneName = { "MagazineBoneName", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URangedWeaponAnimInstance, MagazineBoneName), METADATA_PARAMS(Z_Construct_UClass_URangedWeaponAnimInstance_Statics::NewProp_MagazineBoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URangedWeaponAnimInstance_Statics::NewProp_MagazineBoneName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URangedWeaponAnimInstance_Statics::NewProp_SecondMagazineBoneName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RangedWeaponAnimInstance" },
		{ "ModuleRelativePath", "Public/RangedWeaponAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_URangedWeaponAnimInstance_Statics::NewProp_SecondMagazineBoneName = { "SecondMagazineBoneName", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URangedWeaponAnimInstance, SecondMagazineBoneName), METADATA_PARAMS(Z_Construct_UClass_URangedWeaponAnimInstance_Statics::NewProp_SecondMagazineBoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URangedWeaponAnimInstance_Statics::NewProp_SecondMagazineBoneName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URangedWeaponAnimInstance_Statics::NewProp_bReverseBulletOrder_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RangedWeaponAnimInstance" },
		{ "ModuleRelativePath", "Public/RangedWeaponAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_URangedWeaponAnimInstance_Statics::NewProp_bReverseBulletOrder_SetBit(void* Obj)
	{
		((URangedWeaponAnimInstance*)Obj)->bReverseBulletOrder = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URangedWeaponAnimInstance_Statics::NewProp_bReverseBulletOrder = { "bReverseBulletOrder", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(URangedWeaponAnimInstance), &Z_Construct_UClass_URangedWeaponAnimInstance_Statics::NewProp_bReverseBulletOrder_SetBit, METADATA_PARAMS(Z_Construct_UClass_URangedWeaponAnimInstance_Statics::NewProp_bReverseBulletOrder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URangedWeaponAnimInstance_Statics::NewProp_bReverseBulletOrder_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URangedWeaponAnimInstance_Statics::NewProp_bUseCasings_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RangedWeaponAnimInstance" },
		{ "ModuleRelativePath", "Public/RangedWeaponAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_URangedWeaponAnimInstance_Statics::NewProp_bUseCasings_SetBit(void* Obj)
	{
		((URangedWeaponAnimInstance*)Obj)->bUseCasings = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URangedWeaponAnimInstance_Statics::NewProp_bUseCasings = { "bUseCasings", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(URangedWeaponAnimInstance), &Z_Construct_UClass_URangedWeaponAnimInstance_Statics::NewProp_bUseCasings_SetBit, METADATA_PARAMS(Z_Construct_UClass_URangedWeaponAnimInstance_Statics::NewProp_bUseCasings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URangedWeaponAnimInstance_Statics::NewProp_bUseCasings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URangedWeaponAnimInstance_Statics::NewProp_bAnimateSafety_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RangedWeaponAnimInstance" },
		{ "ModuleRelativePath", "Public/RangedWeaponAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_URangedWeaponAnimInstance_Statics::NewProp_bAnimateSafety_SetBit(void* Obj)
	{
		((URangedWeaponAnimInstance*)Obj)->bAnimateSafety = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URangedWeaponAnimInstance_Statics::NewProp_bAnimateSafety = { "bAnimateSafety", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(URangedWeaponAnimInstance), &Z_Construct_UClass_URangedWeaponAnimInstance_Statics::NewProp_bAnimateSafety_SetBit, METADATA_PARAMS(Z_Construct_UClass_URangedWeaponAnimInstance_Statics::NewProp_bAnimateSafety_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URangedWeaponAnimInstance_Statics::NewProp_bAnimateSafety_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URangedWeaponAnimInstance_Statics::NewProp_ReloadSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RangedWeaponAnimInstance" },
		{ "ModuleRelativePath", "Public/RangedWeaponAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URangedWeaponAnimInstance_Statics::NewProp_ReloadSpeed = { "ReloadSpeed", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URangedWeaponAnimInstance, ReloadSpeed), METADATA_PARAMS(Z_Construct_UClass_URangedWeaponAnimInstance_Statics::NewProp_ReloadSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URangedWeaponAnimInstance_Statics::NewProp_ReloadSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URangedWeaponAnimInstance_Statics::NewProp_MovementAlpha_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RangedWeaponAnimInstance" },
		{ "ModuleRelativePath", "Public/RangedWeaponAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URangedWeaponAnimInstance_Statics::NewProp_MovementAlpha = { "MovementAlpha", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URangedWeaponAnimInstance, MovementAlpha), METADATA_PARAMS(Z_Construct_UClass_URangedWeaponAnimInstance_Statics::NewProp_MovementAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URangedWeaponAnimInstance_Statics::NewProp_MovementAlpha_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URangedWeaponAnimInstance_Statics::NewProp_SafetyTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RangedWeaponAnimInstance" },
		{ "ModuleRelativePath", "Public/RangedWeaponAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URangedWeaponAnimInstance_Statics::NewProp_SafetyTime = { "SafetyTime", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URangedWeaponAnimInstance, SafetyTime), METADATA_PARAMS(Z_Construct_UClass_URangedWeaponAnimInstance_Statics::NewProp_SafetyTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URangedWeaponAnimInstance_Statics::NewProp_SafetyTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URangedWeaponAnimInstance_Statics::NewProp_BasePoseAnim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RangedWeaponAnimInstance" },
		{ "ModuleRelativePath", "Public/RangedWeaponAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URangedWeaponAnimInstance_Statics::NewProp_BasePoseAnim = { "BasePoseAnim", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URangedWeaponAnimInstance, BasePoseAnim), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URangedWeaponAnimInstance_Statics::NewProp_BasePoseAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URangedWeaponAnimInstance_Statics::NewProp_BasePoseAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URangedWeaponAnimInstance_Statics::NewProp_EmptyBasePoseAnim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RangedWeaponAnimInstance" },
		{ "ModuleRelativePath", "Public/RangedWeaponAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URangedWeaponAnimInstance_Statics::NewProp_EmptyBasePoseAnim = { "EmptyBasePoseAnim", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URangedWeaponAnimInstance, EmptyBasePoseAnim), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URangedWeaponAnimInstance_Statics::NewProp_EmptyBasePoseAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URangedWeaponAnimInstance_Statics::NewProp_EmptyBasePoseAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URangedWeaponAnimInstance_Statics::NewProp_SightFoldedBasePoseAnim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RangedWeaponAnimInstance" },
		{ "ModuleRelativePath", "Public/RangedWeaponAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URangedWeaponAnimInstance_Statics::NewProp_SightFoldedBasePoseAnim = { "SightFoldedBasePoseAnim", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URangedWeaponAnimInstance, SightFoldedBasePoseAnim), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URangedWeaponAnimInstance_Statics::NewProp_SightFoldedBasePoseAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URangedWeaponAnimInstance_Statics::NewProp_SightFoldedBasePoseAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URangedWeaponAnimInstance_Statics::NewProp_MovementAnim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RangedWeaponAnimInstance" },
		{ "ModuleRelativePath", "Public/RangedWeaponAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URangedWeaponAnimInstance_Statics::NewProp_MovementAnim = { "MovementAnim", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URangedWeaponAnimInstance, MovementAnim), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URangedWeaponAnimInstance_Statics::NewProp_MovementAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URangedWeaponAnimInstance_Statics::NewProp_MovementAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URangedWeaponAnimInstance_Statics::NewProp_ActionMontage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RangedWeaponAnimInstance" },
		{ "ModuleRelativePath", "Public/RangedWeaponAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URangedWeaponAnimInstance_Statics::NewProp_ActionMontage = { "ActionMontage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URangedWeaponAnimInstance, ActionMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URangedWeaponAnimInstance_Statics::NewProp_ActionMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URangedWeaponAnimInstance_Statics::NewProp_ActionMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URangedWeaponAnimInstance_Statics::NewProp_FiringMontage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RangedWeaponAnimInstance" },
		{ "ModuleRelativePath", "Public/RangedWeaponAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URangedWeaponAnimInstance_Statics::NewProp_FiringMontage = { "FiringMontage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URangedWeaponAnimInstance, FiringMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URangedWeaponAnimInstance_Statics::NewProp_FiringMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URangedWeaponAnimInstance_Statics::NewProp_FiringMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URangedWeaponAnimInstance_Statics::NewProp_ReloadingMontage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RangedWeaponAnimInstance" },
		{ "ModuleRelativePath", "Public/RangedWeaponAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URangedWeaponAnimInstance_Statics::NewProp_ReloadingMontage = { "ReloadingMontage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URangedWeaponAnimInstance, ReloadingMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URangedWeaponAnimInstance_Statics::NewProp_ReloadingMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URangedWeaponAnimInstance_Statics::NewProp_ReloadingMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URangedWeaponAnimInstance_Statics::NewProp_EmptyReloadingMontage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RangedWeaponAnimInstance" },
		{ "ModuleRelativePath", "Public/RangedWeaponAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URangedWeaponAnimInstance_Statics::NewProp_EmptyReloadingMontage = { "EmptyReloadingMontage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URangedWeaponAnimInstance, EmptyReloadingMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URangedWeaponAnimInstance_Statics::NewProp_EmptyReloadingMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URangedWeaponAnimInstance_Statics::NewProp_EmptyReloadingMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URangedWeaponAnimInstance_Statics::NewProp_bIsEmpty_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RangedWeaponAnimInstance" },
		{ "ModuleRelativePath", "Public/RangedWeaponAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_URangedWeaponAnimInstance_Statics::NewProp_bIsEmpty_SetBit(void* Obj)
	{
		((URangedWeaponAnimInstance*)Obj)->bIsEmpty = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URangedWeaponAnimInstance_Statics::NewProp_bIsEmpty = { "bIsEmpty", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(URangedWeaponAnimInstance), &Z_Construct_UClass_URangedWeaponAnimInstance_Statics::NewProp_bIsEmpty_SetBit, METADATA_PARAMS(Z_Construct_UClass_URangedWeaponAnimInstance_Statics::NewProp_bIsEmpty_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URangedWeaponAnimInstance_Statics::NewProp_bIsEmpty_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URangedWeaponAnimInstance_Statics::NewProp_bHasSight_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RangedWeaponAnimInstance" },
		{ "ModuleRelativePath", "Public/RangedWeaponAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_URangedWeaponAnimInstance_Statics::NewProp_bHasSight_SetBit(void* Obj)
	{
		((URangedWeaponAnimInstance*)Obj)->bHasSight = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URangedWeaponAnimInstance_Statics::NewProp_bHasSight = { "bHasSight", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(URangedWeaponAnimInstance), &Z_Construct_UClass_URangedWeaponAnimInstance_Statics::NewProp_bHasSight_SetBit, METADATA_PARAMS(Z_Construct_UClass_URangedWeaponAnimInstance_Statics::NewProp_bHasSight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URangedWeaponAnimInstance_Statics::NewProp_bHasSight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URangedWeaponAnimInstance_Statics::NewProp_bReloading_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RangedWeaponAnimInstance" },
		{ "ModuleRelativePath", "Public/RangedWeaponAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_URangedWeaponAnimInstance_Statics::NewProp_bReloading_SetBit(void* Obj)
	{
		((URangedWeaponAnimInstance*)Obj)->bReloading = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URangedWeaponAnimInstance_Statics::NewProp_bReloading = { "bReloading", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(URangedWeaponAnimInstance), &Z_Construct_UClass_URangedWeaponAnimInstance_Statics::NewProp_bReloading_SetBit, METADATA_PARAMS(Z_Construct_UClass_URangedWeaponAnimInstance_Statics::NewProp_bReloading_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URangedWeaponAnimInstance_Statics::NewProp_bReloading_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URangedWeaponAnimInstance_Statics::NewProp_SafetyLerpDriver_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RangedWeaponAnimInstance" },
		{ "ModuleRelativePath", "Public/RangedWeaponAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_URangedWeaponAnimInstance_Statics::NewProp_SafetyLerpDriver = { "SafetyLerpDriver", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URangedWeaponAnimInstance, SafetyLerpDriver), Z_Construct_UScriptStruct_FConstantLerpDriver, METADATA_PARAMS(Z_Construct_UClass_URangedWeaponAnimInstance_Statics::NewProp_SafetyLerpDriver_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URangedWeaponAnimInstance_Statics::NewProp_SafetyLerpDriver_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URangedWeaponAnimInstance_Statics::NewProp_SafetyRotation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RangedWeaponAnimInstance" },
		{ "ModuleRelativePath", "Public/RangedWeaponAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URangedWeaponAnimInstance_Statics::NewProp_SafetyRotation = { "SafetyRotation", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URangedWeaponAnimInstance, SafetyRotation), METADATA_PARAMS(Z_Construct_UClass_URangedWeaponAnimInstance_Statics::NewProp_SafetyRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URangedWeaponAnimInstance_Statics::NewProp_SafetyRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URangedWeaponAnimInstance_Statics::NewProp_SmoothSafetyRotation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RangedWeaponAnimInstance" },
		{ "ModuleRelativePath", "Public/RangedWeaponAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URangedWeaponAnimInstance_Statics::NewProp_SmoothSafetyRotation = { "SmoothSafetyRotation", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URangedWeaponAnimInstance, SmoothSafetyRotation), METADATA_PARAMS(Z_Construct_UClass_URangedWeaponAnimInstance_Statics::NewProp_SmoothSafetyRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URangedWeaponAnimInstance_Statics::NewProp_SmoothSafetyRotation_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URangedWeaponAnimInstance_Statics::NewProp_SafetyRotations_Inner = { "SafetyRotations", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URangedWeaponAnimInstance_Statics::NewProp_SafetyRotations_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RangedWeaponAnimInstance" },
		{ "ModuleRelativePath", "Public/RangedWeaponAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_URangedWeaponAnimInstance_Statics::NewProp_SafetyRotations = { "SafetyRotations", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URangedWeaponAnimInstance, SafetyRotations), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_URangedWeaponAnimInstance_Statics::NewProp_SafetyRotations_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URangedWeaponAnimInstance_Statics::NewProp_SafetyRotations_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URangedWeaponAnimInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URangedWeaponAnimInstance_Statics::NewProp_FPSCharacter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URangedWeaponAnimInstance_Statics::NewProp_ItemData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URangedWeaponAnimInstance_Statics::NewProp_WeaponData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URangedWeaponAnimInstance_Statics::NewProp_RangedWeaponData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URangedWeaponAnimInstance_Statics::NewProp_RangedWeapon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URangedWeaponAnimInstance_Statics::NewProp_CurrentAmmo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URangedWeaponAnimInstance_Statics::NewProp_CurrentBulletsInChamber,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URangedWeaponAnimInstance_Statics::NewProp_BulletBoneNames_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URangedWeaponAnimInstance_Statics::NewProp_BulletBoneNames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URangedWeaponAnimInstance_Statics::NewProp_CasingBoneNames_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URangedWeaponAnimInstance_Statics::NewProp_CasingBoneNames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URangedWeaponAnimInstance_Statics::NewProp_BoneNames_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URangedWeaponAnimInstance_Statics::NewProp_BoneNames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URangedWeaponAnimInstance_Statics::NewProp_BulletBoneName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URangedWeaponAnimInstance_Statics::NewProp_SpeedLoaderBoneName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URangedWeaponAnimInstance_Statics::NewProp_FollowerBoneName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URangedWeaponAnimInstance_Statics::NewProp_CasingBoneName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URangedWeaponAnimInstance_Statics::NewProp_MagazineBoneName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URangedWeaponAnimInstance_Statics::NewProp_SecondMagazineBoneName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URangedWeaponAnimInstance_Statics::NewProp_bReverseBulletOrder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URangedWeaponAnimInstance_Statics::NewProp_bUseCasings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URangedWeaponAnimInstance_Statics::NewProp_bAnimateSafety,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URangedWeaponAnimInstance_Statics::NewProp_ReloadSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URangedWeaponAnimInstance_Statics::NewProp_MovementAlpha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URangedWeaponAnimInstance_Statics::NewProp_SafetyTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URangedWeaponAnimInstance_Statics::NewProp_BasePoseAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URangedWeaponAnimInstance_Statics::NewProp_EmptyBasePoseAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URangedWeaponAnimInstance_Statics::NewProp_SightFoldedBasePoseAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URangedWeaponAnimInstance_Statics::NewProp_MovementAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URangedWeaponAnimInstance_Statics::NewProp_ActionMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URangedWeaponAnimInstance_Statics::NewProp_FiringMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URangedWeaponAnimInstance_Statics::NewProp_ReloadingMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URangedWeaponAnimInstance_Statics::NewProp_EmptyReloadingMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URangedWeaponAnimInstance_Statics::NewProp_bIsEmpty,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URangedWeaponAnimInstance_Statics::NewProp_bHasSight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URangedWeaponAnimInstance_Statics::NewProp_bReloading,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URangedWeaponAnimInstance_Statics::NewProp_SafetyLerpDriver,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URangedWeaponAnimInstance_Statics::NewProp_SafetyRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URangedWeaponAnimInstance_Statics::NewProp_SmoothSafetyRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URangedWeaponAnimInstance_Statics::NewProp_SafetyRotations_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URangedWeaponAnimInstance_Statics::NewProp_SafetyRotations,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_URangedWeaponAnimInstance_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UFPSAnimationInstance_NoRegister, (int32)VTABLE_OFFSET(URangedWeaponAnimInstance, IFPSAnimationInstance), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URangedWeaponAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URangedWeaponAnimInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URangedWeaponAnimInstance_Statics::ClassParams = {
		&URangedWeaponAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_URangedWeaponAnimInstance_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_URangedWeaponAnimInstance_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_URangedWeaponAnimInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URangedWeaponAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URangedWeaponAnimInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URangedWeaponAnimInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URangedWeaponAnimInstance, 3714256454);
	template<> FPSCONTROLLER_API UClass* StaticClass<URangedWeaponAnimInstance>()
	{
		return URangedWeaponAnimInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URangedWeaponAnimInstance(Z_Construct_UClass_URangedWeaponAnimInstance, &URangedWeaponAnimInstance::StaticClass, TEXT("/Script/FPSController"), TEXT("URangedWeaponAnimInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URangedWeaponAnimInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
