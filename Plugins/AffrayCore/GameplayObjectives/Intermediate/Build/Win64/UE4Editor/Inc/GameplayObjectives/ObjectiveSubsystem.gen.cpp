// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayObjectives/Public/ObjectiveSubsystem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObjectiveSubsystem() {}
// Cross Module References
	GAMEPLAYOBJECTIVES_API UClass* Z_Construct_UClass_UObjectiveSubsystem_NoRegister();
	GAMEPLAYOBJECTIVES_API UClass* Z_Construct_UClass_UObjectiveSubsystem();
	ENGINE_API UClass* Z_Construct_UClass_UWorldSubsystem();
	UPackage* Z_Construct_UPackage__Script_GameplayObjectives();
	GAMEPLAYOBJECTIVES_API UClass* Z_Construct_UClass_AObjectiveManager_NoRegister();
	GAMEPLAYOBJECTIVES_API UFunction* Z_Construct_UDelegateFunction_GameplayObjectives_ObjectiveManagerUpdatedDelegate__DelegateSignature();
	GAMEPLAYOBJECTIVES_API UFunction* Z_Construct_UDelegateFunction_GameplayObjectives_ObjectiveModifiedDelegate__DelegateSignature();
	GAMEPLAYOBJECTIVES_API UFunction* Z_Construct_UDelegateFunction_GameplayObjectives_ObjectiveCompletedDelegate__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UObjectiveSubsystem::execGetObjectiveManager)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AObjectiveManager**)Z_Param__Result=P_THIS->GetObjectiveManager();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UObjectiveSubsystem::execRegisterObjectiveManager)
	{
		P_GET_OBJECT(AObjectiveManager,Z_Param_NewObjectiveManager);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RegisterObjectiveManager(Z_Param_NewObjectiveManager);
		P_NATIVE_END;
	}
	void UObjectiveSubsystem::StaticRegisterNativesUObjectiveSubsystem()
	{
		UClass* Class = UObjectiveSubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetObjectiveManager", &UObjectiveSubsystem::execGetObjectiveManager },
			{ "RegisterObjectiveManager", &UObjectiveSubsystem::execRegisterObjectiveManager },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UObjectiveSubsystem_GetObjectiveManager_Statics
	{
		struct ObjectiveSubsystem_eventGetObjectiveManager_Parms
		{
			AObjectiveManager* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UObjectiveSubsystem_GetObjectiveManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ObjectiveSubsystem_eventGetObjectiveManager_Parms, ReturnValue), Z_Construct_UClass_AObjectiveManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UObjectiveSubsystem_GetObjectiveManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UObjectiveSubsystem_GetObjectiveManager_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UObjectiveSubsystem_GetObjectiveManager_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ObjectiveSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UObjectiveSubsystem_GetObjectiveManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UObjectiveSubsystem, nullptr, "GetObjectiveManager", nullptr, nullptr, sizeof(ObjectiveSubsystem_eventGetObjectiveManager_Parms), Z_Construct_UFunction_UObjectiveSubsystem_GetObjectiveManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectiveSubsystem_GetObjectiveManager_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UObjectiveSubsystem_GetObjectiveManager_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectiveSubsystem_GetObjectiveManager_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UObjectiveSubsystem_GetObjectiveManager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UObjectiveSubsystem_GetObjectiveManager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UObjectiveSubsystem_RegisterObjectiveManager_Statics
	{
		struct ObjectiveSubsystem_eventRegisterObjectiveManager_Parms
		{
			AObjectiveManager* NewObjectiveManager;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewObjectiveManager;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UObjectiveSubsystem_RegisterObjectiveManager_Statics::NewProp_NewObjectiveManager = { "NewObjectiveManager", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ObjectiveSubsystem_eventRegisterObjectiveManager_Parms, NewObjectiveManager), Z_Construct_UClass_AObjectiveManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UObjectiveSubsystem_RegisterObjectiveManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UObjectiveSubsystem_RegisterObjectiveManager_Statics::NewProp_NewObjectiveManager,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UObjectiveSubsystem_RegisterObjectiveManager_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ObjectiveSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UObjectiveSubsystem_RegisterObjectiveManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UObjectiveSubsystem, nullptr, "RegisterObjectiveManager", nullptr, nullptr, sizeof(ObjectiveSubsystem_eventRegisterObjectiveManager_Parms), Z_Construct_UFunction_UObjectiveSubsystem_RegisterObjectiveManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectiveSubsystem_RegisterObjectiveManager_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UObjectiveSubsystem_RegisterObjectiveManager_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectiveSubsystem_RegisterObjectiveManager_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UObjectiveSubsystem_RegisterObjectiveManager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UObjectiveSubsystem_RegisterObjectiveManager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UObjectiveSubsystem_NoRegister()
	{
		return UObjectiveSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UObjectiveSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnObjectiveManagerUpdated_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnObjectiveManagerUpdated;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnActivateObjective_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnActivateObjective;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnDeactivateObjective_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDeactivateObjective;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnCompleteObjective_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCompleteObjective;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UObjectiveSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWorldSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayObjectives,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UObjectiveSubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UObjectiveSubsystem_GetObjectiveManager, "GetObjectiveManager" }, // 4213390542
		{ &Z_Construct_UFunction_UObjectiveSubsystem_RegisterObjectiveManager, "RegisterObjectiveManager" }, // 2322215470
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObjectiveSubsystem_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ObjectiveSubsystem.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ObjectiveSubsystem.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObjectiveSubsystem_Statics::NewProp_OnObjectiveManagerUpdated_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ObjectiveSubsystem" },
		{ "ModuleRelativePath", "Public/ObjectiveSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UObjectiveSubsystem_Statics::NewProp_OnObjectiveManagerUpdated = { "OnObjectiveManagerUpdated", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UObjectiveSubsystem, OnObjectiveManagerUpdated), Z_Construct_UDelegateFunction_GameplayObjectives_ObjectiveManagerUpdatedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UObjectiveSubsystem_Statics::NewProp_OnObjectiveManagerUpdated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UObjectiveSubsystem_Statics::NewProp_OnObjectiveManagerUpdated_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObjectiveSubsystem_Statics::NewProp_OnActivateObjective_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ObjectiveSubsystem" },
		{ "ModuleRelativePath", "Public/ObjectiveSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UObjectiveSubsystem_Statics::NewProp_OnActivateObjective = { "OnActivateObjective", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UObjectiveSubsystem, OnActivateObjective), Z_Construct_UDelegateFunction_GameplayObjectives_ObjectiveModifiedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UObjectiveSubsystem_Statics::NewProp_OnActivateObjective_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UObjectiveSubsystem_Statics::NewProp_OnActivateObjective_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObjectiveSubsystem_Statics::NewProp_OnDeactivateObjective_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ObjectiveSubsystem" },
		{ "ModuleRelativePath", "Public/ObjectiveSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UObjectiveSubsystem_Statics::NewProp_OnDeactivateObjective = { "OnDeactivateObjective", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UObjectiveSubsystem, OnDeactivateObjective), Z_Construct_UDelegateFunction_GameplayObjectives_ObjectiveModifiedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UObjectiveSubsystem_Statics::NewProp_OnDeactivateObjective_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UObjectiveSubsystem_Statics::NewProp_OnDeactivateObjective_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObjectiveSubsystem_Statics::NewProp_OnCompleteObjective_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ObjectiveSubsystem" },
		{ "ModuleRelativePath", "Public/ObjectiveSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UObjectiveSubsystem_Statics::NewProp_OnCompleteObjective = { "OnCompleteObjective", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UObjectiveSubsystem, OnCompleteObjective), Z_Construct_UDelegateFunction_GameplayObjectives_ObjectiveCompletedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UObjectiveSubsystem_Statics::NewProp_OnCompleteObjective_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UObjectiveSubsystem_Statics::NewProp_OnCompleteObjective_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UObjectiveSubsystem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectiveSubsystem_Statics::NewProp_OnObjectiveManagerUpdated,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectiveSubsystem_Statics::NewProp_OnActivateObjective,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectiveSubsystem_Statics::NewProp_OnDeactivateObjective,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectiveSubsystem_Statics::NewProp_OnCompleteObjective,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UObjectiveSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UObjectiveSubsystem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UObjectiveSubsystem_Statics::ClassParams = {
		&UObjectiveSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UObjectiveSubsystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UObjectiveSubsystem_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UObjectiveSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UObjectiveSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UObjectiveSubsystem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UObjectiveSubsystem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UObjectiveSubsystem, 3527186113);
	template<> GAMEPLAYOBJECTIVES_API UClass* StaticClass<UObjectiveSubsystem>()
	{
		return UObjectiveSubsystem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UObjectiveSubsystem(Z_Construct_UClass_UObjectiveSubsystem, &UObjectiveSubsystem::StaticClass, TEXT("/Script/GameplayObjectives"), TEXT("UObjectiveSubsystem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UObjectiveSubsystem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
