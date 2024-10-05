// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AISentience/Public/AISense_VisualEvent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAISense_VisualEvent() {}
// Cross Module References
	AISENTIENCE_API UClass* Z_Construct_UClass_UAISense_VisualEvent_NoRegister();
	AISENTIENCE_API UClass* Z_Construct_UClass_UAISense_VisualEvent();
	AIMODULE_API UClass* Z_Construct_UClass_UAISense();
	UPackage* Z_Construct_UPackage__Script_AISentience();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UAISense_VisualEvent::execReportVisualEvent)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FVector,Z_Param_VisualEventLocation);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Strength);
		P_GET_OBJECT(AActor,Z_Param_Target);
		P_GET_OBJECT(AActor,Z_Param_Instigator);
		P_GET_PROPERTY(FFloatProperty,Z_Param_MaxRange);
		P_GET_PROPERTY(FNameProperty,Z_Param_Tag);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAISense_VisualEvent::ReportVisualEvent(Z_Param_WorldContextObject,Z_Param_VisualEventLocation,Z_Param_Strength,Z_Param_Target,Z_Param_Instigator,Z_Param_MaxRange,Z_Param_Tag);
		P_NATIVE_END;
	}
	void UAISense_VisualEvent::StaticRegisterNativesUAISense_VisualEvent()
	{
		UClass* Class = UAISense_VisualEvent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ReportVisualEvent", &UAISense_VisualEvent::execReportVisualEvent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAISense_VisualEvent_ReportVisualEvent_Statics
	{
		struct AISense_VisualEvent_eventReportVisualEvent_Parms
		{
			UObject* WorldContextObject;
			FVector VisualEventLocation;
			float Strength;
			AActor* Target;
			AActor* Instigator;
			float MaxRange;
			FName Tag;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VisualEventLocation;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Strength;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Target;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Instigator;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxRange;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Tag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAISense_VisualEvent_ReportVisualEvent_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AISense_VisualEvent_eventReportVisualEvent_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAISense_VisualEvent_ReportVisualEvent_Statics::NewProp_VisualEventLocation = { "VisualEventLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AISense_VisualEvent_eventReportVisualEvent_Parms, VisualEventLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAISense_VisualEvent_ReportVisualEvent_Statics::NewProp_Strength = { "Strength", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AISense_VisualEvent_eventReportVisualEvent_Parms, Strength), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAISense_VisualEvent_ReportVisualEvent_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AISense_VisualEvent_eventReportVisualEvent_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAISense_VisualEvent_ReportVisualEvent_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AISense_VisualEvent_eventReportVisualEvent_Parms, Instigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAISense_VisualEvent_ReportVisualEvent_Statics::NewProp_MaxRange = { "MaxRange", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AISense_VisualEvent_eventReportVisualEvent_Parms, MaxRange), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAISense_VisualEvent_ReportVisualEvent_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AISense_VisualEvent_eventReportVisualEvent_Parms, Tag), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAISense_VisualEvent_ReportVisualEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAISense_VisualEvent_ReportVisualEvent_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAISense_VisualEvent_ReportVisualEvent_Statics::NewProp_VisualEventLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAISense_VisualEvent_ReportVisualEvent_Statics::NewProp_Strength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAISense_VisualEvent_ReportVisualEvent_Statics::NewProp_Target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAISense_VisualEvent_ReportVisualEvent_Statics::NewProp_Instigator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAISense_VisualEvent_ReportVisualEvent_Statics::NewProp_MaxRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAISense_VisualEvent_ReportVisualEvent_Statics::NewProp_Tag,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAISense_VisualEvent_ReportVisualEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AISense_VisualEvent.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAISense_VisualEvent_ReportVisualEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAISense_VisualEvent, nullptr, "ReportVisualEvent", nullptr, nullptr, sizeof(AISense_VisualEvent_eventReportVisualEvent_Parms), Z_Construct_UFunction_UAISense_VisualEvent_ReportVisualEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAISense_VisualEvent_ReportVisualEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAISense_VisualEvent_ReportVisualEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAISense_VisualEvent_ReportVisualEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAISense_VisualEvent_ReportVisualEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAISense_VisualEvent_ReportVisualEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAISense_VisualEvent_NoRegister()
	{
		return UAISense_VisualEvent::StaticClass();
	}
	struct Z_Construct_UClass_UAISense_VisualEvent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAISense_VisualEvent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAISense,
		(UObject* (*)())Z_Construct_UPackage__Script_AISentience,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAISense_VisualEvent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAISense_VisualEvent_ReportVisualEvent, "ReportVisualEvent" }, // 2719895786
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISense_VisualEvent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AISense_VisualEvent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AISense_VisualEvent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAISense_VisualEvent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAISense_VisualEvent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAISense_VisualEvent_Statics::ClassParams = {
		&UAISense_VisualEvent::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAISense_VisualEvent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAISense_VisualEvent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAISense_VisualEvent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAISense_VisualEvent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAISense_VisualEvent, 1223092805);
	template<> AISENTIENCE_API UClass* StaticClass<UAISense_VisualEvent>()
	{
		return UAISense_VisualEvent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAISense_VisualEvent(Z_Construct_UClass_UAISense_VisualEvent, &UAISense_VisualEvent::StaticClass, TEXT("/Script/AISentience"), TEXT("UAISense_VisualEvent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAISense_VisualEvent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
