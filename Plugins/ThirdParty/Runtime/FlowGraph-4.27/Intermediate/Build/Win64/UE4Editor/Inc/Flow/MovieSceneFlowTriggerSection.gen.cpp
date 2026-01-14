// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Flow/Public/MovieScene/MovieSceneFlowTriggerSection.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneFlowTriggerSection() {}
// Cross Module References
	FLOW_API UClass* Z_Construct_UClass_UMovieSceneFlowTriggerSection_NoRegister();
	FLOW_API UClass* Z_Construct_UClass_UMovieSceneFlowTriggerSection();
	FLOW_API UClass* Z_Construct_UClass_UMovieSceneFlowSectionBase();
	UPackage* Z_Construct_UPackage__Script_Flow();
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneStringChannel();
// End Cross Module References
	void UMovieSceneFlowTriggerSection::StaticRegisterNativesUMovieSceneFlowTriggerSection()
	{
	}
	UClass* Z_Construct_UClass_UMovieSceneFlowTriggerSection_NoRegister()
	{
		return UMovieSceneFlowTriggerSection::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneFlowTriggerSection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StringChannel_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StringChannel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneFlowTriggerSection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneFlowSectionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Flow,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneFlowTriggerSection_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Flow section that triggers specific timed events.\n */" },
		{ "IncludePath", "MovieScene/MovieSceneFlowTriggerSection.h" },
		{ "ModuleRelativePath", "Public/MovieScene/MovieSceneFlowTriggerSection.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Flow section that triggers specific timed events." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneFlowTriggerSection_Statics::NewProp_StringChannel_MetaData[] = {
		{ "Comment", "/** The channel that defines this section's timed events */" },
		{ "ModuleRelativePath", "Public/MovieScene/MovieSceneFlowTriggerSection.h" },
		{ "ToolTip", "The channel that defines this section's timed events" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneFlowTriggerSection_Statics::NewProp_StringChannel = { "StringChannel", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneFlowTriggerSection, StringChannel), Z_Construct_UScriptStruct_FMovieSceneStringChannel, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneFlowTriggerSection_Statics::NewProp_StringChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneFlowTriggerSection_Statics::NewProp_StringChannel_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneFlowTriggerSection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneFlowTriggerSection_Statics::NewProp_StringChannel,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneFlowTriggerSection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneFlowTriggerSection>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneFlowTriggerSection_Statics::ClassParams = {
		&UMovieSceneFlowTriggerSection::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovieSceneFlowTriggerSection_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneFlowTriggerSection_Statics::PropPointers),
		0,
		0x003000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneFlowTriggerSection_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneFlowTriggerSection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneFlowTriggerSection()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMovieSceneFlowTriggerSection_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMovieSceneFlowTriggerSection, 381290888);
	template<> FLOW_API UClass* StaticClass<UMovieSceneFlowTriggerSection>()
	{
		return UMovieSceneFlowTriggerSection::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieSceneFlowTriggerSection(Z_Construct_UClass_UMovieSceneFlowTriggerSection, &UMovieSceneFlowTriggerSection::StaticClass, TEXT("/Script/Flow"), TEXT("UMovieSceneFlowTriggerSection"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneFlowTriggerSection);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
