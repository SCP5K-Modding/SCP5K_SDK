// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AISentience/Public/AISenseEvent_VisualEvent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAISenseEvent_VisualEvent() {}
// Cross Module References
	AISENTIENCE_API UClass* Z_Construct_UClass_UAISenseEvent_VisualEvent_NoRegister();
	AISENTIENCE_API UClass* Z_Construct_UClass_UAISenseEvent_VisualEvent();
	AIMODULE_API UClass* Z_Construct_UClass_UAISenseEvent();
	UPackage* Z_Construct_UPackage__Script_AISentience();
	AISENTIENCE_API UScriptStruct* Z_Construct_UScriptStruct_FAIVisualEvent();
// End Cross Module References
	void UAISenseEvent_VisualEvent::StaticRegisterNativesUAISenseEvent_VisualEvent()
	{
	}
	UClass* Z_Construct_UClass_UAISenseEvent_VisualEvent_NoRegister()
	{
		return UAISenseEvent_VisualEvent::StaticClass();
	}
	struct Z_Construct_UClass_UAISenseEvent_VisualEvent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Event_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Event;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAISenseEvent_VisualEvent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAISenseEvent,
		(UObject* (*)())Z_Construct_UPackage__Script_AISentience,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISenseEvent_VisualEvent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AISenseEvent_VisualEvent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AISenseEvent_VisualEvent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISenseEvent_VisualEvent_Statics::NewProp_Event_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AISenseEvent_VisualEvent" },
		{ "ModuleRelativePath", "Public/AISenseEvent_VisualEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAISenseEvent_VisualEvent_Statics::NewProp_Event = { "Event", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAISenseEvent_VisualEvent, Event), Z_Construct_UScriptStruct_FAIVisualEvent, METADATA_PARAMS(Z_Construct_UClass_UAISenseEvent_VisualEvent_Statics::NewProp_Event_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAISenseEvent_VisualEvent_Statics::NewProp_Event_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAISenseEvent_VisualEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISenseEvent_VisualEvent_Statics::NewProp_Event,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAISenseEvent_VisualEvent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAISenseEvent_VisualEvent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAISenseEvent_VisualEvent_Statics::ClassParams = {
		&UAISenseEvent_VisualEvent::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAISenseEvent_VisualEvent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAISenseEvent_VisualEvent_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAISenseEvent_VisualEvent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAISenseEvent_VisualEvent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAISenseEvent_VisualEvent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAISenseEvent_VisualEvent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAISenseEvent_VisualEvent, 2445692925);
	template<> AISENTIENCE_API UClass* StaticClass<UAISenseEvent_VisualEvent>()
	{
		return UAISenseEvent_VisualEvent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAISenseEvent_VisualEvent(Z_Construct_UClass_UAISenseEvent_VisualEvent, &UAISenseEvent_VisualEvent::StaticClass, TEXT("/Script/AISentience"), TEXT("UAISenseEvent_VisualEvent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAISenseEvent_VisualEvent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
