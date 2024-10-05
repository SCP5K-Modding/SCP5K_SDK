// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LevelStreaming/Public/LevelStreamingComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelStreamingComponent() {}
// Cross Module References
	LEVELSTREAMING_API UClass* Z_Construct_UClass_ULevelStreamingComponent_NoRegister();
	LEVELSTREAMING_API UClass* Z_Construct_UClass_ULevelStreamingComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_LevelStreaming();
	ENGINE_API UClass* Z_Construct_UClass_ULevel_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	LEVELSTREAMING_API UFunction* Z_Construct_UDelegateFunction_LevelStreaming_LevelStreamingDelegate__DelegateSignature();
	LEVELSTREAMING_API UClass* Z_Construct_UClass_ALevelStreamingInfoVolume_NoRegister();
	LEVELSTREAMING_API UEnum* Z_Construct_UEnum_LevelStreaming_EStreamingState();
// End Cross Module References
	DEFINE_FUNCTION(ULevelStreamingComponent::execCallLevelLoaded)
	{
		P_GET_OBJECT(ULevel,Z_Param_Level);
		P_GET_OBJECT(UWorld,Z_Param_World);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CallLevelLoaded(Z_Param_Level,Z_Param_World);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelStreamingComponent::execCallLevelUnloaded)
	{
		P_GET_OBJECT(ULevel,Z_Param_Level);
		P_GET_OBJECT(UWorld,Z_Param_World);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CallLevelUnloaded(Z_Param_Level,Z_Param_World);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelStreamingComponent::execInitialize)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Initialize();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelStreamingComponent::execIsLevelLoaded)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_LevelName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsLevelLoaded(Z_Param_LevelName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelStreamingComponent::execIsLevelVisible)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_LevelName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsLevelVisible(Z_Param_LevelName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelStreamingComponent::execOnBeginOverlap)
	{
		P_GET_OBJECT(AActor,Z_Param_OverlappedActor);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnBeginOverlap(Z_Param_OverlappedActor,Z_Param_OtherActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelStreamingComponent::execOnEndOverlap)
	{
		P_GET_OBJECT(AActor,Z_Param_OverlappedActor);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnEndOverlap(Z_Param_OverlappedActor,Z_Param_OtherActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelStreamingComponent::execRecalculateLevels)
	{
		P_GET_UBOOL(Z_Param_bAddOnly);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RecalculateLevels(Z_Param_bAddOnly);
		P_NATIVE_END;
	}
	void ULevelStreamingComponent::StaticRegisterNativesULevelStreamingComponent()
	{
		UClass* Class = ULevelStreamingComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CallLevelLoaded", &ULevelStreamingComponent::execCallLevelLoaded },
			{ "CallLevelUnloaded", &ULevelStreamingComponent::execCallLevelUnloaded },
			{ "Initialize", &ULevelStreamingComponent::execInitialize },
			{ "IsLevelLoaded", &ULevelStreamingComponent::execIsLevelLoaded },
			{ "IsLevelVisible", &ULevelStreamingComponent::execIsLevelVisible },
			{ "OnBeginOverlap", &ULevelStreamingComponent::execOnBeginOverlap },
			{ "OnEndOverlap", &ULevelStreamingComponent::execOnEndOverlap },
			{ "RecalculateLevels", &ULevelStreamingComponent::execRecalculateLevels },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULevelStreamingComponent_CallLevelLoaded_Statics
	{
		struct LevelStreamingComponent_eventCallLevelLoaded_Parms
		{
			ULevel* Level;
			UWorld* World;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Level;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULevelStreamingComponent_CallLevelLoaded_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelStreamingComponent_eventCallLevelLoaded_Parms, Level), Z_Construct_UClass_ULevel_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULevelStreamingComponent_CallLevelLoaded_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelStreamingComponent_eventCallLevelLoaded_Parms, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelStreamingComponent_CallLevelLoaded_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelStreamingComponent_CallLevelLoaded_Statics::NewProp_Level,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelStreamingComponent_CallLevelLoaded_Statics::NewProp_World,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelStreamingComponent_CallLevelLoaded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LevelStreamingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelStreamingComponent_CallLevelLoaded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelStreamingComponent, nullptr, "CallLevelLoaded", nullptr, nullptr, sizeof(LevelStreamingComponent_eventCallLevelLoaded_Parms), Z_Construct_UFunction_ULevelStreamingComponent_CallLevelLoaded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelStreamingComponent_CallLevelLoaded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelStreamingComponent_CallLevelLoaded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelStreamingComponent_CallLevelLoaded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelStreamingComponent_CallLevelLoaded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULevelStreamingComponent_CallLevelLoaded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelStreamingComponent_CallLevelUnloaded_Statics
	{
		struct LevelStreamingComponent_eventCallLevelUnloaded_Parms
		{
			ULevel* Level;
			UWorld* World;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Level;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULevelStreamingComponent_CallLevelUnloaded_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelStreamingComponent_eventCallLevelUnloaded_Parms, Level), Z_Construct_UClass_ULevel_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULevelStreamingComponent_CallLevelUnloaded_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelStreamingComponent_eventCallLevelUnloaded_Parms, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelStreamingComponent_CallLevelUnloaded_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelStreamingComponent_CallLevelUnloaded_Statics::NewProp_Level,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelStreamingComponent_CallLevelUnloaded_Statics::NewProp_World,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelStreamingComponent_CallLevelUnloaded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LevelStreamingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelStreamingComponent_CallLevelUnloaded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelStreamingComponent, nullptr, "CallLevelUnloaded", nullptr, nullptr, sizeof(LevelStreamingComponent_eventCallLevelUnloaded_Parms), Z_Construct_UFunction_ULevelStreamingComponent_CallLevelUnloaded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelStreamingComponent_CallLevelUnloaded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelStreamingComponent_CallLevelUnloaded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelStreamingComponent_CallLevelUnloaded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelStreamingComponent_CallLevelUnloaded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULevelStreamingComponent_CallLevelUnloaded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelStreamingComponent_Initialize_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelStreamingComponent_Initialize_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LevelStreamingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelStreamingComponent_Initialize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelStreamingComponent, nullptr, "Initialize", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelStreamingComponent_Initialize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelStreamingComponent_Initialize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelStreamingComponent_Initialize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULevelStreamingComponent_Initialize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelStreamingComponent_IsLevelLoaded_Statics
	{
		struct LevelStreamingComponent_eventIsLevelLoaded_Parms
		{
			FName LevelName;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_LevelName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULevelStreamingComponent_IsLevelLoaded_Statics::NewProp_LevelName = { "LevelName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelStreamingComponent_eventIsLevelLoaded_Parms, LevelName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULevelStreamingComponent_IsLevelLoaded_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LevelStreamingComponent_eventIsLevelLoaded_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULevelStreamingComponent_IsLevelLoaded_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LevelStreamingComponent_eventIsLevelLoaded_Parms), &Z_Construct_UFunction_ULevelStreamingComponent_IsLevelLoaded_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelStreamingComponent_IsLevelLoaded_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelStreamingComponent_IsLevelLoaded_Statics::NewProp_LevelName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelStreamingComponent_IsLevelLoaded_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelStreamingComponent_IsLevelLoaded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LevelStreamingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelStreamingComponent_IsLevelLoaded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelStreamingComponent, nullptr, "IsLevelLoaded", nullptr, nullptr, sizeof(LevelStreamingComponent_eventIsLevelLoaded_Parms), Z_Construct_UFunction_ULevelStreamingComponent_IsLevelLoaded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelStreamingComponent_IsLevelLoaded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelStreamingComponent_IsLevelLoaded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelStreamingComponent_IsLevelLoaded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelStreamingComponent_IsLevelLoaded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULevelStreamingComponent_IsLevelLoaded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelStreamingComponent_IsLevelVisible_Statics
	{
		struct LevelStreamingComponent_eventIsLevelVisible_Parms
		{
			FName LevelName;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_LevelName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULevelStreamingComponent_IsLevelVisible_Statics::NewProp_LevelName = { "LevelName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelStreamingComponent_eventIsLevelVisible_Parms, LevelName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULevelStreamingComponent_IsLevelVisible_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LevelStreamingComponent_eventIsLevelVisible_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULevelStreamingComponent_IsLevelVisible_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LevelStreamingComponent_eventIsLevelVisible_Parms), &Z_Construct_UFunction_ULevelStreamingComponent_IsLevelVisible_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelStreamingComponent_IsLevelVisible_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelStreamingComponent_IsLevelVisible_Statics::NewProp_LevelName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelStreamingComponent_IsLevelVisible_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelStreamingComponent_IsLevelVisible_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LevelStreamingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelStreamingComponent_IsLevelVisible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelStreamingComponent, nullptr, "IsLevelVisible", nullptr, nullptr, sizeof(LevelStreamingComponent_eventIsLevelVisible_Parms), Z_Construct_UFunction_ULevelStreamingComponent_IsLevelVisible_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelStreamingComponent_IsLevelVisible_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelStreamingComponent_IsLevelVisible_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelStreamingComponent_IsLevelVisible_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelStreamingComponent_IsLevelVisible()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULevelStreamingComponent_IsLevelVisible_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelStreamingComponent_OnBeginOverlap_Statics
	{
		struct LevelStreamingComponent_eventOnBeginOverlap_Parms
		{
			AActor* OverlappedActor;
			AActor* OtherActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedActor;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULevelStreamingComponent_OnBeginOverlap_Statics::NewProp_OverlappedActor = { "OverlappedActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelStreamingComponent_eventOnBeginOverlap_Parms, OverlappedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULevelStreamingComponent_OnBeginOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelStreamingComponent_eventOnBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelStreamingComponent_OnBeginOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelStreamingComponent_OnBeginOverlap_Statics::NewProp_OverlappedActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelStreamingComponent_OnBeginOverlap_Statics::NewProp_OtherActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelStreamingComponent_OnBeginOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LevelStreamingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelStreamingComponent_OnBeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelStreamingComponent, nullptr, "OnBeginOverlap", nullptr, nullptr, sizeof(LevelStreamingComponent_eventOnBeginOverlap_Parms), Z_Construct_UFunction_ULevelStreamingComponent_OnBeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelStreamingComponent_OnBeginOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelStreamingComponent_OnBeginOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelStreamingComponent_OnBeginOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelStreamingComponent_OnBeginOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULevelStreamingComponent_OnBeginOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelStreamingComponent_OnEndOverlap_Statics
	{
		struct LevelStreamingComponent_eventOnEndOverlap_Parms
		{
			AActor* OverlappedActor;
			AActor* OtherActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedActor;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULevelStreamingComponent_OnEndOverlap_Statics::NewProp_OverlappedActor = { "OverlappedActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelStreamingComponent_eventOnEndOverlap_Parms, OverlappedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULevelStreamingComponent_OnEndOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelStreamingComponent_eventOnEndOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelStreamingComponent_OnEndOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelStreamingComponent_OnEndOverlap_Statics::NewProp_OverlappedActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelStreamingComponent_OnEndOverlap_Statics::NewProp_OtherActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelStreamingComponent_OnEndOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LevelStreamingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelStreamingComponent_OnEndOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelStreamingComponent, nullptr, "OnEndOverlap", nullptr, nullptr, sizeof(LevelStreamingComponent_eventOnEndOverlap_Parms), Z_Construct_UFunction_ULevelStreamingComponent_OnEndOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelStreamingComponent_OnEndOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelStreamingComponent_OnEndOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelStreamingComponent_OnEndOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelStreamingComponent_OnEndOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULevelStreamingComponent_OnEndOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelStreamingComponent_RecalculateLevels_Statics
	{
		struct LevelStreamingComponent_eventRecalculateLevels_Parms
		{
			bool bAddOnly;
		};
		static void NewProp_bAddOnly_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAddOnly;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ULevelStreamingComponent_RecalculateLevels_Statics::NewProp_bAddOnly_SetBit(void* Obj)
	{
		((LevelStreamingComponent_eventRecalculateLevels_Parms*)Obj)->bAddOnly = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULevelStreamingComponent_RecalculateLevels_Statics::NewProp_bAddOnly = { "bAddOnly", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LevelStreamingComponent_eventRecalculateLevels_Parms), &Z_Construct_UFunction_ULevelStreamingComponent_RecalculateLevels_Statics::NewProp_bAddOnly_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelStreamingComponent_RecalculateLevels_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelStreamingComponent_RecalculateLevels_Statics::NewProp_bAddOnly,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelStreamingComponent_RecalculateLevels_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LevelStreamingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelStreamingComponent_RecalculateLevels_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelStreamingComponent, nullptr, "RecalculateLevels", nullptr, nullptr, sizeof(LevelStreamingComponent_eventRecalculateLevels_Parms), Z_Construct_UFunction_ULevelStreamingComponent_RecalculateLevels_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelStreamingComponent_RecalculateLevels_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelStreamingComponent_RecalculateLevels_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelStreamingComponent_RecalculateLevels_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelStreamingComponent_RecalculateLevels()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULevelStreamingComponent_RecalculateLevels_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ULevelStreamingComponent_NoRegister()
	{
		return ULevelStreamingComponent::StaticClass();
	}
	struct Z_Construct_UClass_ULevelStreamingComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnLevelLoaded_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLevelLoaded;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnLevelUnloaded_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLevelUnloaded;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnLevelFinishedLoading_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLevelFinishedLoading;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentStreamingInfo_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentStreamingInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CurrentStreamingInfo;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DefaultLoadedState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultLoadedState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DefaultLoadedState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTryInitializeEveryFrame_MetaData[];
#endif
		static void NewProp_bTryInitializeEveryFrame_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTryInitializeEveryFrame;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsMasterStreamingComponent_MetaData[];
#endif
		static void NewProp_bIsMasterStreamingComponent_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsMasterStreamingComponent;
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_ChildComponents_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChildComponents_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ChildComponents;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULevelStreamingComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_LevelStreaming,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULevelStreamingComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULevelStreamingComponent_CallLevelLoaded, "CallLevelLoaded" }, // 3960482887
		{ &Z_Construct_UFunction_ULevelStreamingComponent_CallLevelUnloaded, "CallLevelUnloaded" }, // 1434947463
		{ &Z_Construct_UFunction_ULevelStreamingComponent_Initialize, "Initialize" }, // 771239197
		{ &Z_Construct_UFunction_ULevelStreamingComponent_IsLevelLoaded, "IsLevelLoaded" }, // 3620083862
		{ &Z_Construct_UFunction_ULevelStreamingComponent_IsLevelVisible, "IsLevelVisible" }, // 2560361502
		{ &Z_Construct_UFunction_ULevelStreamingComponent_OnBeginOverlap, "OnBeginOverlap" }, // 1389505075
		{ &Z_Construct_UFunction_ULevelStreamingComponent_OnEndOverlap, "OnEndOverlap" }, // 709553290
		{ &Z_Construct_UFunction_ULevelStreamingComponent_RecalculateLevels, "RecalculateLevels" }, // 336713023
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelStreamingComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "LevelStreamingComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/LevelStreamingComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelStreamingComponent_Statics::NewProp_OnLevelLoaded_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LevelStreamingComponent" },
		{ "ModuleRelativePath", "Public/LevelStreamingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ULevelStreamingComponent_Statics::NewProp_OnLevelLoaded = { "OnLevelLoaded", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULevelStreamingComponent, OnLevelLoaded), Z_Construct_UDelegateFunction_LevelStreaming_LevelStreamingDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ULevelStreamingComponent_Statics::NewProp_OnLevelLoaded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelStreamingComponent_Statics::NewProp_OnLevelLoaded_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelStreamingComponent_Statics::NewProp_OnLevelUnloaded_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LevelStreamingComponent" },
		{ "ModuleRelativePath", "Public/LevelStreamingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ULevelStreamingComponent_Statics::NewProp_OnLevelUnloaded = { "OnLevelUnloaded", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULevelStreamingComponent, OnLevelUnloaded), Z_Construct_UDelegateFunction_LevelStreaming_LevelStreamingDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ULevelStreamingComponent_Statics::NewProp_OnLevelUnloaded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelStreamingComponent_Statics::NewProp_OnLevelUnloaded_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelStreamingComponent_Statics::NewProp_OnLevelFinishedLoading_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LevelStreamingComponent" },
		{ "ModuleRelativePath", "Public/LevelStreamingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ULevelStreamingComponent_Statics::NewProp_OnLevelFinishedLoading = { "OnLevelFinishedLoading", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULevelStreamingComponent, OnLevelFinishedLoading), Z_Construct_UDelegateFunction_LevelStreaming_LevelStreamingDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ULevelStreamingComponent_Statics::NewProp_OnLevelFinishedLoading_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelStreamingComponent_Statics::NewProp_OnLevelFinishedLoading_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULevelStreamingComponent_Statics::NewProp_CurrentStreamingInfo_Inner = { "CurrentStreamingInfo", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ALevelStreamingInfoVolume_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelStreamingComponent_Statics::NewProp_CurrentStreamingInfo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LevelStreamingComponent" },
		{ "ModuleRelativePath", "Public/LevelStreamingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULevelStreamingComponent_Statics::NewProp_CurrentStreamingInfo = { "CurrentStreamingInfo", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULevelStreamingComponent, CurrentStreamingInfo), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULevelStreamingComponent_Statics::NewProp_CurrentStreamingInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelStreamingComponent_Statics::NewProp_CurrentStreamingInfo_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULevelStreamingComponent_Statics::NewProp_DefaultLoadedState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelStreamingComponent_Statics::NewProp_DefaultLoadedState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LevelStreamingComponent" },
		{ "ModuleRelativePath", "Public/LevelStreamingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULevelStreamingComponent_Statics::NewProp_DefaultLoadedState = { "DefaultLoadedState", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULevelStreamingComponent, DefaultLoadedState), Z_Construct_UEnum_LevelStreaming_EStreamingState, METADATA_PARAMS(Z_Construct_UClass_ULevelStreamingComponent_Statics::NewProp_DefaultLoadedState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelStreamingComponent_Statics::NewProp_DefaultLoadedState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelStreamingComponent_Statics::NewProp_bTryInitializeEveryFrame_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LevelStreamingComponent" },
		{ "ModuleRelativePath", "Public/LevelStreamingComponent.h" },
	};
#endif
	void Z_Construct_UClass_ULevelStreamingComponent_Statics::NewProp_bTryInitializeEveryFrame_SetBit(void* Obj)
	{
		((ULevelStreamingComponent*)Obj)->bTryInitializeEveryFrame = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULevelStreamingComponent_Statics::NewProp_bTryInitializeEveryFrame = { "bTryInitializeEveryFrame", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ULevelStreamingComponent), &Z_Construct_UClass_ULevelStreamingComponent_Statics::NewProp_bTryInitializeEveryFrame_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULevelStreamingComponent_Statics::NewProp_bTryInitializeEveryFrame_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelStreamingComponent_Statics::NewProp_bTryInitializeEveryFrame_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelStreamingComponent_Statics::NewProp_bIsMasterStreamingComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LevelStreamingComponent" },
		{ "ModuleRelativePath", "Public/LevelStreamingComponent.h" },
	};
#endif
	void Z_Construct_UClass_ULevelStreamingComponent_Statics::NewProp_bIsMasterStreamingComponent_SetBit(void* Obj)
	{
		((ULevelStreamingComponent*)Obj)->bIsMasterStreamingComponent = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULevelStreamingComponent_Statics::NewProp_bIsMasterStreamingComponent = { "bIsMasterStreamingComponent", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ULevelStreamingComponent), &Z_Construct_UClass_ULevelStreamingComponent_Statics::NewProp_bIsMasterStreamingComponent_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULevelStreamingComponent_Statics::NewProp_bIsMasterStreamingComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelStreamingComponent_Statics::NewProp_bIsMasterStreamingComponent_MetaData)) };
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_ULevelStreamingComponent_Statics::NewProp_ChildComponents_Inner = { "ChildComponents", nullptr, (EPropertyFlags)0x0004000000080008, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ULevelStreamingComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelStreamingComponent_Statics::NewProp_ChildComponents_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LevelStreamingComponent" },
		{ "ModuleRelativePath", "Public/LevelStreamingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULevelStreamingComponent_Statics::NewProp_ChildComponents = { "ChildComponents", nullptr, (EPropertyFlags)0x0024088000000009, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULevelStreamingComponent, ChildComponents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULevelStreamingComponent_Statics::NewProp_ChildComponents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelStreamingComponent_Statics::NewProp_ChildComponents_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULevelStreamingComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelStreamingComponent_Statics::NewProp_OnLevelLoaded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelStreamingComponent_Statics::NewProp_OnLevelUnloaded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelStreamingComponent_Statics::NewProp_OnLevelFinishedLoading,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelStreamingComponent_Statics::NewProp_CurrentStreamingInfo_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelStreamingComponent_Statics::NewProp_CurrentStreamingInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelStreamingComponent_Statics::NewProp_DefaultLoadedState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelStreamingComponent_Statics::NewProp_DefaultLoadedState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelStreamingComponent_Statics::NewProp_bTryInitializeEveryFrame,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelStreamingComponent_Statics::NewProp_bIsMasterStreamingComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelStreamingComponent_Statics::NewProp_ChildComponents_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelStreamingComponent_Statics::NewProp_ChildComponents,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULevelStreamingComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULevelStreamingComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULevelStreamingComponent_Statics::ClassParams = {
		&ULevelStreamingComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULevelStreamingComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULevelStreamingComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ULevelStreamingComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelStreamingComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULevelStreamingComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULevelStreamingComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULevelStreamingComponent, 2216597951);
	template<> LEVELSTREAMING_API UClass* StaticClass<ULevelStreamingComponent>()
	{
		return ULevelStreamingComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULevelStreamingComponent(Z_Construct_UClass_ULevelStreamingComponent, &ULevelStreamingComponent::StaticClass, TEXT("/Script/LevelStreaming"), TEXT("ULevelStreamingComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULevelStreamingComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
