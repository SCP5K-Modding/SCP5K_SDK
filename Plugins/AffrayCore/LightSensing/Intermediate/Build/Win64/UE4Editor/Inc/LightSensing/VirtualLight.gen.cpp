// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LightSensing/Public/VirtualLight.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVirtualLight() {}
// Cross Module References
	LIGHTSENSING_API UClass* Z_Construct_UClass_UVirtualLight_NoRegister();
	LIGHTSENSING_API UClass* Z_Construct_UClass_UVirtualLight();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_LightSensing();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	DEFINE_FUNCTION(IVirtualLight::execGetCastsShadows)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCastsShadows_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IVirtualLight::execGetConeMinDot)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetConeMinDot_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IVirtualLight::execGetDirection)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetDirection_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IVirtualLight::execGetHasCone)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetHasCone_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IVirtualLight::execGetIntensity)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetIntensity_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IVirtualLight::execGetPosition)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetPosition_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IVirtualLight::execGetRadius)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetRadius_Implementation();
		P_NATIVE_END;
	}
	bool IVirtualLight::GetCastsShadows()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetCastsShadows instead.");
		VirtualLight_eventGetCastsShadows_Parms Parms;
		return Parms.ReturnValue;
	}
	float IVirtualLight::GetConeMinDot()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetConeMinDot instead.");
		VirtualLight_eventGetConeMinDot_Parms Parms;
		return Parms.ReturnValue;
	}
	FVector IVirtualLight::GetDirection()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetDirection instead.");
		VirtualLight_eventGetDirection_Parms Parms;
		return Parms.ReturnValue;
	}
	bool IVirtualLight::GetHasCone()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetHasCone instead.");
		VirtualLight_eventGetHasCone_Parms Parms;
		return Parms.ReturnValue;
	}
	float IVirtualLight::GetIntensity()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetIntensity instead.");
		VirtualLight_eventGetIntensity_Parms Parms;
		return Parms.ReturnValue;
	}
	FVector IVirtualLight::GetPosition()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetPosition instead.");
		VirtualLight_eventGetPosition_Parms Parms;
		return Parms.ReturnValue;
	}
	float IVirtualLight::GetRadius()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetRadius instead.");
		VirtualLight_eventGetRadius_Parms Parms;
		return Parms.ReturnValue;
	}
	void UVirtualLight::StaticRegisterNativesUVirtualLight()
	{
		UClass* Class = UVirtualLight::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCastsShadows", &IVirtualLight::execGetCastsShadows },
			{ "GetConeMinDot", &IVirtualLight::execGetConeMinDot },
			{ "GetDirection", &IVirtualLight::execGetDirection },
			{ "GetHasCone", &IVirtualLight::execGetHasCone },
			{ "GetIntensity", &IVirtualLight::execGetIntensity },
			{ "GetPosition", &IVirtualLight::execGetPosition },
			{ "GetRadius", &IVirtualLight::execGetRadius },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVirtualLight_GetCastsShadows_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVirtualLight_GetCastsShadows_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VirtualLight_eventGetCastsShadows_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVirtualLight_GetCastsShadows_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VirtualLight_eventGetCastsShadows_Parms), &Z_Construct_UFunction_UVirtualLight_GetCastsShadows_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVirtualLight_GetCastsShadows_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVirtualLight_GetCastsShadows_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVirtualLight_GetCastsShadows_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VirtualLight.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVirtualLight_GetCastsShadows_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVirtualLight, nullptr, "GetCastsShadows", nullptr, nullptr, sizeof(VirtualLight_eventGetCastsShadows_Parms), Z_Construct_UFunction_UVirtualLight_GetCastsShadows_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualLight_GetCastsShadows_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVirtualLight_GetCastsShadows_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualLight_GetCastsShadows_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVirtualLight_GetCastsShadows()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVirtualLight_GetCastsShadows_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVirtualLight_GetConeMinDot_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVirtualLight_GetConeMinDot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VirtualLight_eventGetConeMinDot_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVirtualLight_GetConeMinDot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVirtualLight_GetConeMinDot_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVirtualLight_GetConeMinDot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VirtualLight.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVirtualLight_GetConeMinDot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVirtualLight, nullptr, "GetConeMinDot", nullptr, nullptr, sizeof(VirtualLight_eventGetConeMinDot_Parms), Z_Construct_UFunction_UVirtualLight_GetConeMinDot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualLight_GetConeMinDot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVirtualLight_GetConeMinDot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualLight_GetConeMinDot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVirtualLight_GetConeMinDot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVirtualLight_GetConeMinDot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVirtualLight_GetDirection_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVirtualLight_GetDirection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VirtualLight_eventGetDirection_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVirtualLight_GetDirection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVirtualLight_GetDirection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVirtualLight_GetDirection_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VirtualLight.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVirtualLight_GetDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVirtualLight, nullptr, "GetDirection", nullptr, nullptr, sizeof(VirtualLight_eventGetDirection_Parms), Z_Construct_UFunction_UVirtualLight_GetDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualLight_GetDirection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C820C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVirtualLight_GetDirection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualLight_GetDirection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVirtualLight_GetDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVirtualLight_GetDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVirtualLight_GetHasCone_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVirtualLight_GetHasCone_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VirtualLight_eventGetHasCone_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVirtualLight_GetHasCone_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VirtualLight_eventGetHasCone_Parms), &Z_Construct_UFunction_UVirtualLight_GetHasCone_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVirtualLight_GetHasCone_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVirtualLight_GetHasCone_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVirtualLight_GetHasCone_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VirtualLight.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVirtualLight_GetHasCone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVirtualLight, nullptr, "GetHasCone", nullptr, nullptr, sizeof(VirtualLight_eventGetHasCone_Parms), Z_Construct_UFunction_UVirtualLight_GetHasCone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualLight_GetHasCone_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVirtualLight_GetHasCone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualLight_GetHasCone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVirtualLight_GetHasCone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVirtualLight_GetHasCone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVirtualLight_GetIntensity_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVirtualLight_GetIntensity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VirtualLight_eventGetIntensity_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVirtualLight_GetIntensity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVirtualLight_GetIntensity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVirtualLight_GetIntensity_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VirtualLight.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVirtualLight_GetIntensity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVirtualLight, nullptr, "GetIntensity", nullptr, nullptr, sizeof(VirtualLight_eventGetIntensity_Parms), Z_Construct_UFunction_UVirtualLight_GetIntensity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualLight_GetIntensity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVirtualLight_GetIntensity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualLight_GetIntensity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVirtualLight_GetIntensity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVirtualLight_GetIntensity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVirtualLight_GetPosition_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVirtualLight_GetPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VirtualLight_eventGetPosition_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVirtualLight_GetPosition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVirtualLight_GetPosition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVirtualLight_GetPosition_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VirtualLight.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVirtualLight_GetPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVirtualLight, nullptr, "GetPosition", nullptr, nullptr, sizeof(VirtualLight_eventGetPosition_Parms), Z_Construct_UFunction_UVirtualLight_GetPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualLight_GetPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C820C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVirtualLight_GetPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualLight_GetPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVirtualLight_GetPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVirtualLight_GetPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVirtualLight_GetRadius_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVirtualLight_GetRadius_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VirtualLight_eventGetRadius_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVirtualLight_GetRadius_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVirtualLight_GetRadius_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVirtualLight_GetRadius_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VirtualLight.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVirtualLight_GetRadius_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVirtualLight, nullptr, "GetRadius", nullptr, nullptr, sizeof(VirtualLight_eventGetRadius_Parms), Z_Construct_UFunction_UVirtualLight_GetRadius_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualLight_GetRadius_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVirtualLight_GetRadius_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualLight_GetRadius_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVirtualLight_GetRadius()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVirtualLight_GetRadius_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UVirtualLight_NoRegister()
	{
		return UVirtualLight::StaticClass();
	}
	struct Z_Construct_UClass_UVirtualLight_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVirtualLight_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_LightSensing,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVirtualLight_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVirtualLight_GetCastsShadows, "GetCastsShadows" }, // 2017991402
		{ &Z_Construct_UFunction_UVirtualLight_GetConeMinDot, "GetConeMinDot" }, // 2889255859
		{ &Z_Construct_UFunction_UVirtualLight_GetDirection, "GetDirection" }, // 2966811544
		{ &Z_Construct_UFunction_UVirtualLight_GetHasCone, "GetHasCone" }, // 2107606058
		{ &Z_Construct_UFunction_UVirtualLight_GetIntensity, "GetIntensity" }, // 2407390525
		{ &Z_Construct_UFunction_UVirtualLight_GetPosition, "GetPosition" }, // 1276134612
		{ &Z_Construct_UFunction_UVirtualLight_GetRadius, "GetRadius" }, // 4041057828
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVirtualLight_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/VirtualLight.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVirtualLight_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IVirtualLight>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVirtualLight_Statics::ClassParams = {
		&UVirtualLight::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UVirtualLight_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVirtualLight_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVirtualLight()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVirtualLight_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVirtualLight, 623391900);
	template<> LIGHTSENSING_API UClass* StaticClass<UVirtualLight>()
	{
		return UVirtualLight::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVirtualLight(Z_Construct_UClass_UVirtualLight, &UVirtualLight::StaticClass, TEXT("/Script/LightSensing"), TEXT("UVirtualLight"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVirtualLight);
	static FName NAME_UVirtualLight_GetCastsShadows = FName(TEXT("GetCastsShadows"));
	bool IVirtualLight::Execute_GetCastsShadows(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UVirtualLight::StaticClass()));
		VirtualLight_eventGetCastsShadows_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UVirtualLight_GetCastsShadows);
		if (Func)
		{
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IVirtualLight*)(O->GetNativeInterfaceAddress(UVirtualLight::StaticClass())))
		{
			Parms.ReturnValue = I->GetCastsShadows_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UVirtualLight_GetConeMinDot = FName(TEXT("GetConeMinDot"));
	float IVirtualLight::Execute_GetConeMinDot(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UVirtualLight::StaticClass()));
		VirtualLight_eventGetConeMinDot_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UVirtualLight_GetConeMinDot);
		if (Func)
		{
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IVirtualLight*)(O->GetNativeInterfaceAddress(UVirtualLight::StaticClass())))
		{
			Parms.ReturnValue = I->GetConeMinDot_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UVirtualLight_GetDirection = FName(TEXT("GetDirection"));
	FVector IVirtualLight::Execute_GetDirection(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UVirtualLight::StaticClass()));
		VirtualLight_eventGetDirection_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UVirtualLight_GetDirection);
		if (Func)
		{
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IVirtualLight*)(O->GetNativeInterfaceAddress(UVirtualLight::StaticClass())))
		{
			Parms.ReturnValue = I->GetDirection_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UVirtualLight_GetHasCone = FName(TEXT("GetHasCone"));
	bool IVirtualLight::Execute_GetHasCone(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UVirtualLight::StaticClass()));
		VirtualLight_eventGetHasCone_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UVirtualLight_GetHasCone);
		if (Func)
		{
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IVirtualLight*)(O->GetNativeInterfaceAddress(UVirtualLight::StaticClass())))
		{
			Parms.ReturnValue = I->GetHasCone_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UVirtualLight_GetIntensity = FName(TEXT("GetIntensity"));
	float IVirtualLight::Execute_GetIntensity(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UVirtualLight::StaticClass()));
		VirtualLight_eventGetIntensity_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UVirtualLight_GetIntensity);
		if (Func)
		{
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IVirtualLight*)(O->GetNativeInterfaceAddress(UVirtualLight::StaticClass())))
		{
			Parms.ReturnValue = I->GetIntensity_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UVirtualLight_GetPosition = FName(TEXT("GetPosition"));
	FVector IVirtualLight::Execute_GetPosition(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UVirtualLight::StaticClass()));
		VirtualLight_eventGetPosition_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UVirtualLight_GetPosition);
		if (Func)
		{
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IVirtualLight*)(O->GetNativeInterfaceAddress(UVirtualLight::StaticClass())))
		{
			Parms.ReturnValue = I->GetPosition_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UVirtualLight_GetRadius = FName(TEXT("GetRadius"));
	float IVirtualLight::Execute_GetRadius(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UVirtualLight::StaticClass()));
		VirtualLight_eventGetRadius_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UVirtualLight_GetRadius);
		if (Func)
		{
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IVirtualLight*)(O->GetNativeInterfaceAddress(UVirtualLight::StaticClass())))
		{
			Parms.ReturnValue = I->GetRadius_Implementation();
		}
		return Parms.ReturnValue;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
