// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Dismemberment/Public/BodySubsystem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBodySubsystem() {}
// Cross Module References
	DISMEMBERMENT_API UClass* Z_Construct_UClass_UBodySubsystem_NoRegister();
	DISMEMBERMENT_API UClass* Z_Construct_UClass_UBodySubsystem();
	ENGINE_API UClass* Z_Construct_UClass_UWorldSubsystem();
	UPackage* Z_Construct_UPackage__Script_Dismemberment();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	DISMEMBERMENT_API UScriptStruct* Z_Construct_UScriptStruct_FBody();
// End Cross Module References
	DEFINE_FUNCTION(UBodySubsystem::execAddBody)
	{
		P_GET_OBJECT(AActor,Z_Param_Body);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddBody(Z_Param_Body);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBodySubsystem::execAddStaticBody)
	{
		P_GET_OBJECT(AActor,Z_Param_Body);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddStaticBody(Z_Param_Body);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBodySubsystem::execFindClosestBody)
	{
		P_GET_STRUCT(FVector,Z_Param_Location);
		P_GET_PROPERTY(FFloatProperty,Z_Param_MaxDistance);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Threshold);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FBody*)Z_Param__Result=P_THIS->FindClosestBody(Z_Param_Location,Z_Param_MaxDistance,Z_Param_Threshold);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBodySubsystem::execFindClosestDynamicBody)
	{
		P_GET_STRUCT(FVector,Z_Param_Location);
		P_GET_PROPERTY(FFloatProperty,Z_Param_MaxDistance);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Threshold);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=P_THIS->FindClosestDynamicBody(Z_Param_Location,Z_Param_MaxDistance,Z_Param_Threshold);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBodySubsystem::execSetMaxSize)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NewMaxSize);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetMaxSize(Z_Param_NewMaxSize);
		P_NATIVE_END;
	}
	void UBodySubsystem::StaticRegisterNativesUBodySubsystem()
	{
		UClass* Class = UBodySubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddBody", &UBodySubsystem::execAddBody },
			{ "AddStaticBody", &UBodySubsystem::execAddStaticBody },
			{ "FindClosestBody", &UBodySubsystem::execFindClosestBody },
			{ "FindClosestDynamicBody", &UBodySubsystem::execFindClosestDynamicBody },
			{ "SetMaxSize", &UBodySubsystem::execSetMaxSize },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBodySubsystem_AddBody_Statics
	{
		struct BodySubsystem_eventAddBody_Parms
		{
			AActor* Body;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Body;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBodySubsystem_AddBody_Statics::NewProp_Body = { "Body", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BodySubsystem_eventAddBody_Parms, Body), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBodySubsystem_AddBody_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodySubsystem_AddBody_Statics::NewProp_Body,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBodySubsystem_AddBody_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BodySubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBodySubsystem_AddBody_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBodySubsystem, nullptr, "AddBody", nullptr, nullptr, sizeof(BodySubsystem_eventAddBody_Parms), Z_Construct_UFunction_UBodySubsystem_AddBody_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBodySubsystem_AddBody_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBodySubsystem_AddBody_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBodySubsystem_AddBody_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBodySubsystem_AddBody()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBodySubsystem_AddBody_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBodySubsystem_AddStaticBody_Statics
	{
		struct BodySubsystem_eventAddStaticBody_Parms
		{
			AActor* Body;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Body;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBodySubsystem_AddStaticBody_Statics::NewProp_Body = { "Body", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BodySubsystem_eventAddStaticBody_Parms, Body), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBodySubsystem_AddStaticBody_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodySubsystem_AddStaticBody_Statics::NewProp_Body,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBodySubsystem_AddStaticBody_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BodySubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBodySubsystem_AddStaticBody_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBodySubsystem, nullptr, "AddStaticBody", nullptr, nullptr, sizeof(BodySubsystem_eventAddStaticBody_Parms), Z_Construct_UFunction_UBodySubsystem_AddStaticBody_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBodySubsystem_AddStaticBody_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBodySubsystem_AddStaticBody_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBodySubsystem_AddStaticBody_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBodySubsystem_AddStaticBody()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBodySubsystem_AddStaticBody_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBodySubsystem_FindClosestBody_Statics
	{
		struct BodySubsystem_eventFindClosestBody_Parms
		{
			FVector Location;
			float MaxDistance;
			float Threshold;
			FBody ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxDistance;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Threshold;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBodySubsystem_FindClosestBody_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BodySubsystem_eventFindClosestBody_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBodySubsystem_FindClosestBody_Statics::NewProp_MaxDistance = { "MaxDistance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BodySubsystem_eventFindClosestBody_Parms, MaxDistance), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBodySubsystem_FindClosestBody_Statics::NewProp_Threshold = { "Threshold", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BodySubsystem_eventFindClosestBody_Parms, Threshold), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBodySubsystem_FindClosestBody_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BodySubsystem_eventFindClosestBody_Parms, ReturnValue), Z_Construct_UScriptStruct_FBody, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBodySubsystem_FindClosestBody_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodySubsystem_FindClosestBody_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodySubsystem_FindClosestBody_Statics::NewProp_MaxDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodySubsystem_FindClosestBody_Statics::NewProp_Threshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodySubsystem_FindClosestBody_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBodySubsystem_FindClosestBody_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BodySubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBodySubsystem_FindClosestBody_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBodySubsystem, nullptr, "FindClosestBody", nullptr, nullptr, sizeof(BodySubsystem_eventFindClosestBody_Parms), Z_Construct_UFunction_UBodySubsystem_FindClosestBody_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBodySubsystem_FindClosestBody_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBodySubsystem_FindClosestBody_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBodySubsystem_FindClosestBody_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBodySubsystem_FindClosestBody()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBodySubsystem_FindClosestBody_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBodySubsystem_FindClosestDynamicBody_Statics
	{
		struct BodySubsystem_eventFindClosestDynamicBody_Parms
		{
			FVector Location;
			float MaxDistance;
			float Threshold;
			AActor* ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxDistance;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Threshold;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBodySubsystem_FindClosestDynamicBody_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BodySubsystem_eventFindClosestDynamicBody_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBodySubsystem_FindClosestDynamicBody_Statics::NewProp_MaxDistance = { "MaxDistance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BodySubsystem_eventFindClosestDynamicBody_Parms, MaxDistance), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBodySubsystem_FindClosestDynamicBody_Statics::NewProp_Threshold = { "Threshold", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BodySubsystem_eventFindClosestDynamicBody_Parms, Threshold), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBodySubsystem_FindClosestDynamicBody_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BodySubsystem_eventFindClosestDynamicBody_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBodySubsystem_FindClosestDynamicBody_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodySubsystem_FindClosestDynamicBody_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodySubsystem_FindClosestDynamicBody_Statics::NewProp_MaxDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodySubsystem_FindClosestDynamicBody_Statics::NewProp_Threshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodySubsystem_FindClosestDynamicBody_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBodySubsystem_FindClosestDynamicBody_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BodySubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBodySubsystem_FindClosestDynamicBody_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBodySubsystem, nullptr, "FindClosestDynamicBody", nullptr, nullptr, sizeof(BodySubsystem_eventFindClosestDynamicBody_Parms), Z_Construct_UFunction_UBodySubsystem_FindClosestDynamicBody_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBodySubsystem_FindClosestDynamicBody_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBodySubsystem_FindClosestDynamicBody_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBodySubsystem_FindClosestDynamicBody_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBodySubsystem_FindClosestDynamicBody()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBodySubsystem_FindClosestDynamicBody_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBodySubsystem_SetMaxSize_Statics
	{
		struct BodySubsystem_eventSetMaxSize_Parms
		{
			int32 NewMaxSize;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NewMaxSize;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBodySubsystem_SetMaxSize_Statics::NewProp_NewMaxSize = { "NewMaxSize", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BodySubsystem_eventSetMaxSize_Parms, NewMaxSize), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBodySubsystem_SetMaxSize_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BodySubsystem_eventSetMaxSize_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBodySubsystem_SetMaxSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BodySubsystem_eventSetMaxSize_Parms), &Z_Construct_UFunction_UBodySubsystem_SetMaxSize_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBodySubsystem_SetMaxSize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodySubsystem_SetMaxSize_Statics::NewProp_NewMaxSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBodySubsystem_SetMaxSize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBodySubsystem_SetMaxSize_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BodySubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBodySubsystem_SetMaxSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBodySubsystem, nullptr, "SetMaxSize", nullptr, nullptr, sizeof(BodySubsystem_eventSetMaxSize_Parms), Z_Construct_UFunction_UBodySubsystem_SetMaxSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBodySubsystem_SetMaxSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBodySubsystem_SetMaxSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBodySubsystem_SetMaxSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBodySubsystem_SetMaxSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBodySubsystem_SetMaxSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBodySubsystem_NoRegister()
	{
		return UBodySubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UBodySubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CurrentIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutoInitialize_MetaData[];
#endif
		static void NewProp_bAutoInitialize_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoInitialize;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBodySubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWorldSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_Dismemberment,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBodySubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBodySubsystem_AddBody, "AddBody" }, // 3261346024
		{ &Z_Construct_UFunction_UBodySubsystem_AddStaticBody, "AddStaticBody" }, // 3353030582
		{ &Z_Construct_UFunction_UBodySubsystem_FindClosestBody, "FindClosestBody" }, // 2987963167
		{ &Z_Construct_UFunction_UBodySubsystem_FindClosestDynamicBody, "FindClosestDynamicBody" }, // 1007984071
		{ &Z_Construct_UFunction_UBodySubsystem_SetMaxSize, "SetMaxSize" }, // 877838191
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBodySubsystem_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "BodySubsystem.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/BodySubsystem.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBodySubsystem_Statics::NewProp_MaxSize_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BodySubsystem" },
		{ "ModuleRelativePath", "Public/BodySubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UBodySubsystem_Statics::NewProp_MaxSize = { "MaxSize", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBodySubsystem, MaxSize), METADATA_PARAMS(Z_Construct_UClass_UBodySubsystem_Statics::NewProp_MaxSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBodySubsystem_Statics::NewProp_MaxSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBodySubsystem_Statics::NewProp_CurrentIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BodySubsystem" },
		{ "ModuleRelativePath", "Public/BodySubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UBodySubsystem_Statics::NewProp_CurrentIndex = { "CurrentIndex", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBodySubsystem, CurrentIndex), METADATA_PARAMS(Z_Construct_UClass_UBodySubsystem_Statics::NewProp_CurrentIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBodySubsystem_Statics::NewProp_CurrentIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBodySubsystem_Statics::NewProp_bAutoInitialize_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BodySubsystem" },
		{ "ModuleRelativePath", "Public/BodySubsystem.h" },
	};
#endif
	void Z_Construct_UClass_UBodySubsystem_Statics::NewProp_bAutoInitialize_SetBit(void* Obj)
	{
		((UBodySubsystem*)Obj)->bAutoInitialize = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBodySubsystem_Statics::NewProp_bAutoInitialize = { "bAutoInitialize", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBodySubsystem), &Z_Construct_UClass_UBodySubsystem_Statics::NewProp_bAutoInitialize_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBodySubsystem_Statics::NewProp_bAutoInitialize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBodySubsystem_Statics::NewProp_bAutoInitialize_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBodySubsystem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodySubsystem_Statics::NewProp_MaxSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodySubsystem_Statics::NewProp_CurrentIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodySubsystem_Statics::NewProp_bAutoInitialize,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBodySubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBodySubsystem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBodySubsystem_Statics::ClassParams = {
		&UBodySubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UBodySubsystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UBodySubsystem_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBodySubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBodySubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBodySubsystem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBodySubsystem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBodySubsystem, 3725293289);
	template<> DISMEMBERMENT_API UClass* StaticClass<UBodySubsystem>()
	{
		return UBodySubsystem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBodySubsystem(Z_Construct_UClass_UBodySubsystem, &UBodySubsystem::StaticClass, TEXT("/Script/Dismemberment"), TEXT("UBodySubsystem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBodySubsystem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
