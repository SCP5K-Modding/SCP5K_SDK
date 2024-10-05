// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LightSensing/Public/LightHandleUpdatedEventDelegate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLightHandleUpdatedEventDelegate() {}
// Cross Module References
	LIGHTSENSING_API UFunction* Z_Construct_UDelegateFunction_LightSensing_LightHandleUpdatedEvent__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_LightSensing();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_LightSensing_LightHandleUpdatedEvent__DelegateSignature_Statics
	{
		struct _Script_LightSensing_eventLightHandleUpdatedEvent_Parms
		{
			AActor* Subject;
			float Intensity;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Subject;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Intensity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_LightSensing_LightHandleUpdatedEvent__DelegateSignature_Statics::NewProp_Subject = { "Subject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_LightSensing_eventLightHandleUpdatedEvent_Parms, Subject), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_LightSensing_LightHandleUpdatedEvent__DelegateSignature_Statics::NewProp_Intensity = { "Intensity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_LightSensing_eventLightHandleUpdatedEvent_Parms, Intensity), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_LightSensing_LightHandleUpdatedEvent__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LightSensing_LightHandleUpdatedEvent__DelegateSignature_Statics::NewProp_Subject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LightSensing_LightHandleUpdatedEvent__DelegateSignature_Statics::NewProp_Intensity,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LightSensing_LightHandleUpdatedEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LightHandleUpdatedEventDelegate.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_LightSensing_LightHandleUpdatedEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_LightSensing, nullptr, "LightHandleUpdatedEvent__DelegateSignature", nullptr, nullptr, sizeof(_Script_LightSensing_eventLightHandleUpdatedEvent_Parms), Z_Construct_UDelegateFunction_LightSensing_LightHandleUpdatedEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LightSensing_LightHandleUpdatedEvent__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_LightSensing_LightHandleUpdatedEvent__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LightSensing_LightHandleUpdatedEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_LightSensing_LightHandleUpdatedEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_LightSensing_LightHandleUpdatedEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
