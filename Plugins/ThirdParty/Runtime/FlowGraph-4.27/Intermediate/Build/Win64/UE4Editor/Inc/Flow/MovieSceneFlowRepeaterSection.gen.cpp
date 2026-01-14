// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Flow/Public/MovieScene/MovieSceneFlowRepeaterSection.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneFlowRepeaterSection() {}
// Cross Module References
	FLOW_API UClass* Z_Construct_UClass_UMovieSceneFlowRepeaterSection_NoRegister();
	FLOW_API UClass* Z_Construct_UClass_UMovieSceneFlowRepeaterSection();
	FLOW_API UClass* Z_Construct_UClass_UMovieSceneFlowSectionBase();
	UPackage* Z_Construct_UPackage__Script_Flow();
// End Cross Module References
	void UMovieSceneFlowRepeaterSection::StaticRegisterNativesUMovieSceneFlowRepeaterSection()
	{
	}
	UClass* Z_Construct_UClass_UMovieSceneFlowRepeaterSection_NoRegister()
	{
		return UMovieSceneFlowRepeaterSection::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneFlowRepeaterSection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_EventName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneFlowRepeaterSection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneFlowSectionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Flow,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneFlowRepeaterSection_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Flow section that will trigger its event exactly once, every time it is evaluated.\n */" },
		{ "IncludePath", "MovieScene/MovieSceneFlowRepeaterSection.h" },
		{ "ModuleRelativePath", "Public/MovieScene/MovieSceneFlowRepeaterSection.h" },
		{ "ToolTip", "Flow section that will trigger its event exactly once, every time it is evaluated." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneFlowRepeaterSection_Statics::NewProp_EventName_MetaData[] = {
		{ "Category", "Flow" },
		{ "Comment", "/** The event that should be triggered each time this section is evaluated */" },
		{ "ModuleRelativePath", "Public/MovieScene/MovieSceneFlowRepeaterSection.h" },
		{ "ToolTip", "The event that should be triggered each time this section is evaluated" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMovieSceneFlowRepeaterSection_Statics::NewProp_EventName = { "EventName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneFlowRepeaterSection, EventName), METADATA_PARAMS(Z_Construct_UClass_UMovieSceneFlowRepeaterSection_Statics::NewProp_EventName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneFlowRepeaterSection_Statics::NewProp_EventName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneFlowRepeaterSection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneFlowRepeaterSection_Statics::NewProp_EventName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneFlowRepeaterSection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneFlowRepeaterSection>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneFlowRepeaterSection_Statics::ClassParams = {
		&UMovieSceneFlowRepeaterSection::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovieSceneFlowRepeaterSection_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneFlowRepeaterSection_Statics::PropPointers),
		0,
		0x003000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneFlowRepeaterSection_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneFlowRepeaterSection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneFlowRepeaterSection()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMovieSceneFlowRepeaterSection_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMovieSceneFlowRepeaterSection, 383923003);
	template<> FLOW_API UClass* StaticClass<UMovieSceneFlowRepeaterSection>()
	{
		return UMovieSceneFlowRepeaterSection::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieSceneFlowRepeaterSection(Z_Construct_UClass_UMovieSceneFlowRepeaterSection, &UMovieSceneFlowRepeaterSection::StaticClass, TEXT("/Script/Flow"), TEXT("UMovieSceneFlowRepeaterSection"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneFlowRepeaterSection);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
