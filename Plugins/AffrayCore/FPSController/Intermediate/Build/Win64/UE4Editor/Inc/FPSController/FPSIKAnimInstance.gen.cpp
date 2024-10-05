// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSController/Public/FPSIKAnimInstance.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFPSIKAnimInstance() {}
// Cross Module References
	FPSCONTROLLER_API UClass* Z_Construct_UClass_UFPSIKAnimInstance_NoRegister();
	FPSCONTROLLER_API UClass* Z_Construct_UClass_UFPSIKAnimInstance();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	UPackage* Z_Construct_UPackage__Script_FPSController();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UFPSIKAnimInstance::execDoFootIK)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DoFootIK(Z_Param_DeltaTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFPSIKAnimInstance::execGetOffset)
	{
		P_GET_STRUCT(FVector,Z_Param_FootPosition);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetOffset(Z_Param_FootPosition);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFPSIKAnimInstance::execGetPelvisOffset)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetPelvisOffset(Z_Param_DeltaTime);
		P_NATIVE_END;
	}
	void UFPSIKAnimInstance::StaticRegisterNativesUFPSIKAnimInstance()
	{
		UClass* Class = UFPSIKAnimInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DoFootIK", &UFPSIKAnimInstance::execDoFootIK },
			{ "GetOffset", &UFPSIKAnimInstance::execGetOffset },
			{ "GetPelvisOffset", &UFPSIKAnimInstance::execGetPelvisOffset },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFPSIKAnimInstance_DoFootIK_Statics
	{
		struct FPSIKAnimInstance_eventDoFootIK_Parms
		{
			float DeltaTime;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFPSIKAnimInstance_DoFootIK_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSIKAnimInstance_eventDoFootIK_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFPSIKAnimInstance_DoFootIK_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSIKAnimInstance_DoFootIK_Statics::NewProp_DeltaTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFPSIKAnimInstance_DoFootIK_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSIKAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFPSIKAnimInstance_DoFootIK_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFPSIKAnimInstance, nullptr, "DoFootIK", nullptr, nullptr, sizeof(FPSIKAnimInstance_eventDoFootIK_Parms), Z_Construct_UFunction_UFPSIKAnimInstance_DoFootIK_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSIKAnimInstance_DoFootIK_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFPSIKAnimInstance_DoFootIK_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSIKAnimInstance_DoFootIK_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFPSIKAnimInstance_DoFootIK()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFPSIKAnimInstance_DoFootIK_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFPSIKAnimInstance_GetOffset_Statics
	{
		struct FPSIKAnimInstance_eventGetOffset_Parms
		{
			FVector FootPosition;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FootPosition;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFPSIKAnimInstance_GetOffset_Statics::NewProp_FootPosition = { "FootPosition", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSIKAnimInstance_eventGetOffset_Parms, FootPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFPSIKAnimInstance_GetOffset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSIKAnimInstance_eventGetOffset_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFPSIKAnimInstance_GetOffset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSIKAnimInstance_GetOffset_Statics::NewProp_FootPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSIKAnimInstance_GetOffset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFPSIKAnimInstance_GetOffset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSIKAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFPSIKAnimInstance_GetOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFPSIKAnimInstance, nullptr, "GetOffset", nullptr, nullptr, sizeof(FPSIKAnimInstance_eventGetOffset_Parms), Z_Construct_UFunction_UFPSIKAnimInstance_GetOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSIKAnimInstance_GetOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04880401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFPSIKAnimInstance_GetOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSIKAnimInstance_GetOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFPSIKAnimInstance_GetOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFPSIKAnimInstance_GetOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFPSIKAnimInstance_GetPelvisOffset_Statics
	{
		struct FPSIKAnimInstance_eventGetPelvisOffset_Parms
		{
			float DeltaTime;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFPSIKAnimInstance_GetPelvisOffset_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSIKAnimInstance_eventGetPelvisOffset_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFPSIKAnimInstance_GetPelvisOffset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSIKAnimInstance_eventGetPelvisOffset_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFPSIKAnimInstance_GetPelvisOffset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSIKAnimInstance_GetPelvisOffset_Statics::NewProp_DeltaTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSIKAnimInstance_GetPelvisOffset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFPSIKAnimInstance_GetPelvisOffset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSIKAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFPSIKAnimInstance_GetPelvisOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFPSIKAnimInstance, nullptr, "GetPelvisOffset", nullptr, nullptr, sizeof(FPSIKAnimInstance_eventGetPelvisOffset_Parms), Z_Construct_UFunction_UFPSIKAnimInstance_GetPelvisOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSIKAnimInstance_GetPelvisOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04880401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFPSIKAnimInstance_GetPelvisOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSIKAnimInstance_GetPelvisOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFPSIKAnimInstance_GetPelvisOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFPSIKAnimInstance_GetPelvisOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFPSIKAnimInstance_NoRegister()
	{
		return UFPSIKAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UFPSIKAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Character_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Character;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUsePelvisOffset_MetaData[];
#endif
		static void NewProp_bUsePelvisOffset_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUsePelvisOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseSphereTrace_MetaData[];
#endif
		static void NewProp_bUseSphereTrace_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseSphereTrace;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SphereTraceRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SphereTraceRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightFootOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RightFootOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftFootOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LeftFootOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RawRightFootOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RawRightFootOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RawLeftFootOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RawLeftFootOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PelvisOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PelvisOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftFootIKBone_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_LeftFootIKBone;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightFootIKBone_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_RightFootIKBone;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IKAlpha_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_IKAlpha;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFPSIKAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_FPSController,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFPSIKAnimInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFPSIKAnimInstance_DoFootIK, "DoFootIK" }, // 94782134
		{ &Z_Construct_UFunction_UFPSIKAnimInstance_GetOffset, "GetOffset" }, // 2850490517
		{ &Z_Construct_UFunction_UFPSIKAnimInstance_GetPelvisOffset, "GetPelvisOffset" }, // 2402403004
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSIKAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "FPSIKAnimInstance.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/FPSIKAnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSIKAnimInstance_Statics::NewProp_Character_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSIKAnimInstance" },
		{ "ModuleRelativePath", "Public/FPSIKAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFPSIKAnimInstance_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSIKAnimInstance, Character), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFPSIKAnimInstance_Statics::NewProp_Character_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSIKAnimInstance_Statics::NewProp_Character_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSIKAnimInstance_Statics::NewProp_bUsePelvisOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSIKAnimInstance" },
		{ "ModuleRelativePath", "Public/FPSIKAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UFPSIKAnimInstance_Statics::NewProp_bUsePelvisOffset_SetBit(void* Obj)
	{
		((UFPSIKAnimInstance*)Obj)->bUsePelvisOffset = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFPSIKAnimInstance_Statics::NewProp_bUsePelvisOffset = { "bUsePelvisOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFPSIKAnimInstance), &Z_Construct_UClass_UFPSIKAnimInstance_Statics::NewProp_bUsePelvisOffset_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFPSIKAnimInstance_Statics::NewProp_bUsePelvisOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSIKAnimInstance_Statics::NewProp_bUsePelvisOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSIKAnimInstance_Statics::NewProp_bUseSphereTrace_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSIKAnimInstance" },
		{ "ModuleRelativePath", "Public/FPSIKAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UFPSIKAnimInstance_Statics::NewProp_bUseSphereTrace_SetBit(void* Obj)
	{
		((UFPSIKAnimInstance*)Obj)->bUseSphereTrace = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFPSIKAnimInstance_Statics::NewProp_bUseSphereTrace = { "bUseSphereTrace", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFPSIKAnimInstance), &Z_Construct_UClass_UFPSIKAnimInstance_Statics::NewProp_bUseSphereTrace_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFPSIKAnimInstance_Statics::NewProp_bUseSphereTrace_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSIKAnimInstance_Statics::NewProp_bUseSphereTrace_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSIKAnimInstance_Statics::NewProp_SphereTraceRadius_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSIKAnimInstance" },
		{ "ModuleRelativePath", "Public/FPSIKAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFPSIKAnimInstance_Statics::NewProp_SphereTraceRadius = { "SphereTraceRadius", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSIKAnimInstance, SphereTraceRadius), METADATA_PARAMS(Z_Construct_UClass_UFPSIKAnimInstance_Statics::NewProp_SphereTraceRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSIKAnimInstance_Statics::NewProp_SphereTraceRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSIKAnimInstance_Statics::NewProp_RightFootOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSIKAnimInstance" },
		{ "ModuleRelativePath", "Public/FPSIKAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFPSIKAnimInstance_Statics::NewProp_RightFootOffset = { "RightFootOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSIKAnimInstance, RightFootOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UFPSIKAnimInstance_Statics::NewProp_RightFootOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSIKAnimInstance_Statics::NewProp_RightFootOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSIKAnimInstance_Statics::NewProp_LeftFootOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSIKAnimInstance" },
		{ "ModuleRelativePath", "Public/FPSIKAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFPSIKAnimInstance_Statics::NewProp_LeftFootOffset = { "LeftFootOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSIKAnimInstance, LeftFootOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UFPSIKAnimInstance_Statics::NewProp_LeftFootOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSIKAnimInstance_Statics::NewProp_LeftFootOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSIKAnimInstance_Statics::NewProp_RawRightFootOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSIKAnimInstance" },
		{ "ModuleRelativePath", "Public/FPSIKAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFPSIKAnimInstance_Statics::NewProp_RawRightFootOffset = { "RawRightFootOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSIKAnimInstance, RawRightFootOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UFPSIKAnimInstance_Statics::NewProp_RawRightFootOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSIKAnimInstance_Statics::NewProp_RawRightFootOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSIKAnimInstance_Statics::NewProp_RawLeftFootOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSIKAnimInstance" },
		{ "ModuleRelativePath", "Public/FPSIKAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFPSIKAnimInstance_Statics::NewProp_RawLeftFootOffset = { "RawLeftFootOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSIKAnimInstance, RawLeftFootOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UFPSIKAnimInstance_Statics::NewProp_RawLeftFootOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSIKAnimInstance_Statics::NewProp_RawLeftFootOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSIKAnimInstance_Statics::NewProp_PelvisOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSIKAnimInstance" },
		{ "ModuleRelativePath", "Public/FPSIKAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFPSIKAnimInstance_Statics::NewProp_PelvisOffset = { "PelvisOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSIKAnimInstance, PelvisOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UFPSIKAnimInstance_Statics::NewProp_PelvisOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSIKAnimInstance_Statics::NewProp_PelvisOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSIKAnimInstance_Statics::NewProp_LeftFootIKBone_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSIKAnimInstance" },
		{ "ModuleRelativePath", "Public/FPSIKAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UFPSIKAnimInstance_Statics::NewProp_LeftFootIKBone = { "LeftFootIKBone", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSIKAnimInstance, LeftFootIKBone), METADATA_PARAMS(Z_Construct_UClass_UFPSIKAnimInstance_Statics::NewProp_LeftFootIKBone_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSIKAnimInstance_Statics::NewProp_LeftFootIKBone_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSIKAnimInstance_Statics::NewProp_RightFootIKBone_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSIKAnimInstance" },
		{ "ModuleRelativePath", "Public/FPSIKAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UFPSIKAnimInstance_Statics::NewProp_RightFootIKBone = { "RightFootIKBone", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSIKAnimInstance, RightFootIKBone), METADATA_PARAMS(Z_Construct_UClass_UFPSIKAnimInstance_Statics::NewProp_RightFootIKBone_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSIKAnimInstance_Statics::NewProp_RightFootIKBone_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSIKAnimInstance_Statics::NewProp_IKAlpha_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSIKAnimInstance" },
		{ "ModuleRelativePath", "Public/FPSIKAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFPSIKAnimInstance_Statics::NewProp_IKAlpha = { "IKAlpha", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSIKAnimInstance, IKAlpha), METADATA_PARAMS(Z_Construct_UClass_UFPSIKAnimInstance_Statics::NewProp_IKAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSIKAnimInstance_Statics::NewProp_IKAlpha_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFPSIKAnimInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSIKAnimInstance_Statics::NewProp_Character,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSIKAnimInstance_Statics::NewProp_bUsePelvisOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSIKAnimInstance_Statics::NewProp_bUseSphereTrace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSIKAnimInstance_Statics::NewProp_SphereTraceRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSIKAnimInstance_Statics::NewProp_RightFootOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSIKAnimInstance_Statics::NewProp_LeftFootOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSIKAnimInstance_Statics::NewProp_RawRightFootOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSIKAnimInstance_Statics::NewProp_RawLeftFootOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSIKAnimInstance_Statics::NewProp_PelvisOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSIKAnimInstance_Statics::NewProp_LeftFootIKBone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSIKAnimInstance_Statics::NewProp_RightFootIKBone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSIKAnimInstance_Statics::NewProp_IKAlpha,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFPSIKAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFPSIKAnimInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFPSIKAnimInstance_Statics::ClassParams = {
		&UFPSIKAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UFPSIKAnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UFPSIKAnimInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UFPSIKAnimInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSIKAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFPSIKAnimInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFPSIKAnimInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFPSIKAnimInstance, 2642364310);
	template<> FPSCONTROLLER_API UClass* StaticClass<UFPSIKAnimInstance>()
	{
		return UFPSIKAnimInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFPSIKAnimInstance(Z_Construct_UClass_UFPSIKAnimInstance, &UFPSIKAnimInstance::StaticClass, TEXT("/Script/FPSController"), TEXT("UFPSIKAnimInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFPSIKAnimInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
