// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameActions/Public/GameAction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameAction() {}
// Cross Module References
	GAMEACTIONS_API UClass* Z_Construct_UClass_UGameAction_NoRegister();
	GAMEACTIONS_API UClass* Z_Construct_UClass_UGameAction();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_GameActions();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UGameAction::execExecute)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(AActor,Z_Param_Subject);
		P_GET_OBJECT(AActor,Z_Param_Instigator);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Execute(Z_Param_WorldContextObject,Z_Param_Subject,Z_Param_Instigator);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameAction::execExecuteDelayed)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(AActor,Z_Param_Subject);
		P_GET_OBJECT(AActor,Z_Param_Instigator);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ExecuteDelayed(Z_Param_WorldContextObject,Z_Param_Subject,Z_Param_Instigator);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameAction::execGetOwningActor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=P_THIS->GetOwningActor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameAction::execOnExecute)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(AActor,Z_Param_Subject);
		P_GET_OBJECT(AActor,Z_Param_Instigator);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->OnExecute_Implementation(Z_Param_WorldContextObject,Z_Param_Subject,Z_Param_Instigator);
		P_NATIVE_END;
	}
	static FName NAME_UGameAction_OnExecute = FName(TEXT("OnExecute"));
	bool UGameAction::OnExecute(UObject* WorldContextObject, AActor* Subject, AActor* Instigator)
	{
		GameAction_eventOnExecute_Parms Parms;
		Parms.WorldContextObject=WorldContextObject;
		Parms.Subject=Subject;
		Parms.Instigator=Instigator;
		ProcessEvent(FindFunctionChecked(NAME_UGameAction_OnExecute),&Parms);
		return !!Parms.ReturnValue;
	}
	void UGameAction::StaticRegisterNativesUGameAction()
	{
		UClass* Class = UGameAction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Execute", &UGameAction::execExecute },
			{ "ExecuteDelayed", &UGameAction::execExecuteDelayed },
			{ "GetOwningActor", &UGameAction::execGetOwningActor },
			{ "OnExecute", &UGameAction::execOnExecute },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGameAction_Execute_Statics
	{
		struct GameAction_eventExecute_Parms
		{
			UObject* WorldContextObject;
			AActor* Subject;
			AActor* Instigator;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Subject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Instigator;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameAction_Execute_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameAction_eventExecute_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameAction_Execute_Statics::NewProp_Subject = { "Subject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameAction_eventExecute_Parms, Subject), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameAction_Execute_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameAction_eventExecute_Parms, Instigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameAction_Execute_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAction_Execute_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAction_Execute_Statics::NewProp_Subject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAction_Execute_Statics::NewProp_Instigator,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAction_Execute_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameAction.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameAction_Execute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameAction, nullptr, "Execute", nullptr, nullptr, sizeof(GameAction_eventExecute_Parms), Z_Construct_UFunction_UGameAction_Execute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAction_Execute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameAction_Execute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAction_Execute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameAction_Execute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameAction_Execute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameAction_ExecuteDelayed_Statics
	{
		struct GameAction_eventExecuteDelayed_Parms
		{
			UObject* WorldContextObject;
			AActor* Subject;
			AActor* Instigator;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Subject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Instigator;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameAction_ExecuteDelayed_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameAction_eventExecuteDelayed_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameAction_ExecuteDelayed_Statics::NewProp_Subject = { "Subject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameAction_eventExecuteDelayed_Parms, Subject), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameAction_ExecuteDelayed_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameAction_eventExecuteDelayed_Parms, Instigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameAction_ExecuteDelayed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAction_ExecuteDelayed_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAction_ExecuteDelayed_Statics::NewProp_Subject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAction_ExecuteDelayed_Statics::NewProp_Instigator,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAction_ExecuteDelayed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameAction.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameAction_ExecuteDelayed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameAction, nullptr, "ExecuteDelayed", nullptr, nullptr, sizeof(GameAction_eventExecuteDelayed_Parms), Z_Construct_UFunction_UGameAction_ExecuteDelayed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAction_ExecuteDelayed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameAction_ExecuteDelayed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAction_ExecuteDelayed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameAction_ExecuteDelayed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameAction_ExecuteDelayed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameAction_GetOwningActor_Statics
	{
		struct GameAction_eventGetOwningActor_Parms
		{
			AActor* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameAction_GetOwningActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameAction_eventGetOwningActor_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameAction_GetOwningActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAction_GetOwningActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAction_GetOwningActor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameAction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameAction_GetOwningActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameAction, nullptr, "GetOwningActor", nullptr, nullptr, sizeof(GameAction_eventGetOwningActor_Parms), Z_Construct_UFunction_UGameAction_GetOwningActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAction_GetOwningActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameAction_GetOwningActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAction_GetOwningActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameAction_GetOwningActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameAction_GetOwningActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameAction_OnExecute_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Subject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Instigator;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameAction_OnExecute_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameAction_eventOnExecute_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameAction_OnExecute_Statics::NewProp_Subject = { "Subject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameAction_eventOnExecute_Parms, Subject), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameAction_OnExecute_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameAction_eventOnExecute_Parms, Instigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGameAction_OnExecute_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GameAction_eventOnExecute_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameAction_OnExecute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GameAction_eventOnExecute_Parms), &Z_Construct_UFunction_UGameAction_OnExecute_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameAction_OnExecute_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAction_OnExecute_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAction_OnExecute_Statics::NewProp_Subject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAction_OnExecute_Statics::NewProp_Instigator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAction_OnExecute_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAction_OnExecute_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameAction.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameAction_OnExecute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameAction, nullptr, "OnExecute", nullptr, nullptr, sizeof(GameAction_eventOnExecute_Parms), Z_Construct_UFunction_UGameAction_OnExecute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAction_OnExecute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameAction_OnExecute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAction_OnExecute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameAction_OnExecute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameAction_OnExecute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGameAction_NoRegister()
	{
		return UGameAction::StaticClass();
	}
	struct Z_Construct_UClass_UGameAction_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExecuteDelay_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ExecuteDelay;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameAction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_GameActions,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGameAction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGameAction_Execute, "Execute" }, // 54099889
		{ &Z_Construct_UFunction_UGameAction_ExecuteDelayed, "ExecuteDelayed" }, // 696727331
		{ &Z_Construct_UFunction_UGameAction_GetOwningActor, "GetOwningActor" }, // 1571597279
		{ &Z_Construct_UFunction_UGameAction_OnExecute, "OnExecute" }, // 732921786
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameAction_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "GameAction.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/GameAction.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameAction_Statics::NewProp_ExecuteDelay_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GameAction" },
		{ "ModuleRelativePath", "Public/GameAction.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGameAction_Statics::NewProp_ExecuteDelay = { "ExecuteDelay", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGameAction, ExecuteDelay), METADATA_PARAMS(Z_Construct_UClass_UGameAction_Statics::NewProp_ExecuteDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameAction_Statics::NewProp_ExecuteDelay_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameAction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameAction_Statics::NewProp_ExecuteDelay,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameAction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameAction>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGameAction_Statics::ClassParams = {
		&UGameAction::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGameAction_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGameAction_Statics::PropPointers),
		0,
		0x001030A1u,
		METADATA_PARAMS(Z_Construct_UClass_UGameAction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGameAction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameAction()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGameAction_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGameAction, 2675573220);
	template<> GAMEACTIONS_API UClass* StaticClass<UGameAction>()
	{
		return UGameAction::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGameAction(Z_Construct_UClass_UGameAction, &UGameAction::StaticClass, TEXT("/Script/GameActions"), TEXT("UGameAction"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameAction);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
