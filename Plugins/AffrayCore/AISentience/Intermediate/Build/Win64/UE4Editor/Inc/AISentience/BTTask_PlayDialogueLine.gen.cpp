// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AISentience/Public/BTTask_PlayDialogueLine.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTask_PlayDialogueLine() {}
// Cross Module References
	AISENTIENCE_API UClass* Z_Construct_UClass_UBTTask_PlayDialogueLine_NoRegister();
	AISENTIENCE_API UClass* Z_Construct_UClass_UBTTask_PlayDialogueLine();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	UPackage* Z_Construct_UPackage__Script_AISentience();
	AISENTIENCE_API UClass* Z_Construct_UClass_UDialogueComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UBTTask_PlayDialogueLine::execDialogueCompleted)
	{
		P_GET_OBJECT(UDialogueComponent,Z_Param_Component);
		P_GET_PROPERTY(FNameProperty,Z_Param_InDialogueID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DialogueCompleted(Z_Param_Component,Z_Param_InDialogueID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBTTask_PlayDialogueLine::execDialogueInterrupted)
	{
		P_GET_OBJECT(UDialogueComponent,Z_Param_Component);
		P_GET_PROPERTY(FNameProperty,Z_Param_InDialogueID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DialogueInterrupted(Z_Param_Component,Z_Param_InDialogueID);
		P_NATIVE_END;
	}
	void UBTTask_PlayDialogueLine::StaticRegisterNativesUBTTask_PlayDialogueLine()
	{
		UClass* Class = UBTTask_PlayDialogueLine::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DialogueCompleted", &UBTTask_PlayDialogueLine::execDialogueCompleted },
			{ "DialogueInterrupted", &UBTTask_PlayDialogueLine::execDialogueInterrupted },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBTTask_PlayDialogueLine_DialogueCompleted_Statics
	{
		struct BTTask_PlayDialogueLine_eventDialogueCompleted_Parms
		{
			UDialogueComponent* Component;
			FName InDialogueID;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Component;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_InDialogueID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBTTask_PlayDialogueLine_DialogueCompleted_Statics::NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBTTask_PlayDialogueLine_DialogueCompleted_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BTTask_PlayDialogueLine_eventDialogueCompleted_Parms, Component), Z_Construct_UClass_UDialogueComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UBTTask_PlayDialogueLine_DialogueCompleted_Statics::NewProp_Component_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBTTask_PlayDialogueLine_DialogueCompleted_Statics::NewProp_Component_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UBTTask_PlayDialogueLine_DialogueCompleted_Statics::NewProp_InDialogueID = { "InDialogueID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BTTask_PlayDialogueLine_eventDialogueCompleted_Parms, InDialogueID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBTTask_PlayDialogueLine_DialogueCompleted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTTask_PlayDialogueLine_DialogueCompleted_Statics::NewProp_Component,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTTask_PlayDialogueLine_DialogueCompleted_Statics::NewProp_InDialogueID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBTTask_PlayDialogueLine_DialogueCompleted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BTTask_PlayDialogueLine.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBTTask_PlayDialogueLine_DialogueCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTTask_PlayDialogueLine, nullptr, "DialogueCompleted", nullptr, nullptr, sizeof(BTTask_PlayDialogueLine_eventDialogueCompleted_Parms), Z_Construct_UFunction_UBTTask_PlayDialogueLine_DialogueCompleted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBTTask_PlayDialogueLine_DialogueCompleted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBTTask_PlayDialogueLine_DialogueCompleted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBTTask_PlayDialogueLine_DialogueCompleted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBTTask_PlayDialogueLine_DialogueCompleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBTTask_PlayDialogueLine_DialogueCompleted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBTTask_PlayDialogueLine_DialogueInterrupted_Statics
	{
		struct BTTask_PlayDialogueLine_eventDialogueInterrupted_Parms
		{
			UDialogueComponent* Component;
			FName InDialogueID;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Component;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_InDialogueID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBTTask_PlayDialogueLine_DialogueInterrupted_Statics::NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBTTask_PlayDialogueLine_DialogueInterrupted_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BTTask_PlayDialogueLine_eventDialogueInterrupted_Parms, Component), Z_Construct_UClass_UDialogueComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UBTTask_PlayDialogueLine_DialogueInterrupted_Statics::NewProp_Component_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBTTask_PlayDialogueLine_DialogueInterrupted_Statics::NewProp_Component_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UBTTask_PlayDialogueLine_DialogueInterrupted_Statics::NewProp_InDialogueID = { "InDialogueID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BTTask_PlayDialogueLine_eventDialogueInterrupted_Parms, InDialogueID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBTTask_PlayDialogueLine_DialogueInterrupted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTTask_PlayDialogueLine_DialogueInterrupted_Statics::NewProp_Component,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTTask_PlayDialogueLine_DialogueInterrupted_Statics::NewProp_InDialogueID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBTTask_PlayDialogueLine_DialogueInterrupted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BTTask_PlayDialogueLine.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBTTask_PlayDialogueLine_DialogueInterrupted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTTask_PlayDialogueLine, nullptr, "DialogueInterrupted", nullptr, nullptr, sizeof(BTTask_PlayDialogueLine_eventDialogueInterrupted_Parms), Z_Construct_UFunction_UBTTask_PlayDialogueLine_DialogueInterrupted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBTTask_PlayDialogueLine_DialogueInterrupted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBTTask_PlayDialogueLine_DialogueInterrupted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBTTask_PlayDialogueLine_DialogueInterrupted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBTTask_PlayDialogueLine_DialogueInterrupted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBTTask_PlayDialogueLine_DialogueInterrupted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBTTask_PlayDialogueLine_NoRegister()
	{
		return UBTTask_PlayDialogueLine::StaticClass();
	}
	struct Z_Construct_UClass_UBTTask_PlayDialogueLine_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DialogueID_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_DialogueID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bWaitForCompletion_MetaData[];
#endif
		static void NewProp_bWaitForCompletion_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWaitForCompletion;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTTask_PlayDialogueLine_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
		(UObject* (*)())Z_Construct_UPackage__Script_AISentience,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBTTask_PlayDialogueLine_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBTTask_PlayDialogueLine_DialogueCompleted, "DialogueCompleted" }, // 266661662
		{ &Z_Construct_UFunction_UBTTask_PlayDialogueLine_DialogueInterrupted, "DialogueInterrupted" }, // 1723915561
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_PlayDialogueLine_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "BTTask_PlayDialogueLine.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/BTTask_PlayDialogueLine.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_PlayDialogueLine_Statics::NewProp_DialogueID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BTTask_PlayDialogueLine" },
		{ "ModuleRelativePath", "Public/BTTask_PlayDialogueLine.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UBTTask_PlayDialogueLine_Statics::NewProp_DialogueID = { "DialogueID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTTask_PlayDialogueLine, DialogueID), METADATA_PARAMS(Z_Construct_UClass_UBTTask_PlayDialogueLine_Statics::NewProp_DialogueID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_PlayDialogueLine_Statics::NewProp_DialogueID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_PlayDialogueLine_Statics::NewProp_bWaitForCompletion_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BTTask_PlayDialogueLine" },
		{ "ModuleRelativePath", "Public/BTTask_PlayDialogueLine.h" },
	};
#endif
	void Z_Construct_UClass_UBTTask_PlayDialogueLine_Statics::NewProp_bWaitForCompletion_SetBit(void* Obj)
	{
		((UBTTask_PlayDialogueLine*)Obj)->bWaitForCompletion = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBTTask_PlayDialogueLine_Statics::NewProp_bWaitForCompletion = { "bWaitForCompletion", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBTTask_PlayDialogueLine), &Z_Construct_UClass_UBTTask_PlayDialogueLine_Statics::NewProp_bWaitForCompletion_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBTTask_PlayDialogueLine_Statics::NewProp_bWaitForCompletion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_PlayDialogueLine_Statics::NewProp_bWaitForCompletion_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTTask_PlayDialogueLine_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_PlayDialogueLine_Statics::NewProp_DialogueID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_PlayDialogueLine_Statics::NewProp_bWaitForCompletion,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTTask_PlayDialogueLine_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_PlayDialogueLine>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBTTask_PlayDialogueLine_Statics::ClassParams = {
		&UBTTask_PlayDialogueLine::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UBTTask_PlayDialogueLine_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_PlayDialogueLine_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBTTask_PlayDialogueLine_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_PlayDialogueLine_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTTask_PlayDialogueLine()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBTTask_PlayDialogueLine_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBTTask_PlayDialogueLine, 3009893985);
	template<> AISENTIENCE_API UClass* StaticClass<UBTTask_PlayDialogueLine>()
	{
		return UBTTask_PlayDialogueLine::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTTask_PlayDialogueLine(Z_Construct_UClass_UBTTask_PlayDialogueLine, &UBTTask_PlayDialogueLine::StaticClass, TEXT("/Script/AISentience"), TEXT("UBTTask_PlayDialogueLine"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_PlayDialogueLine);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
