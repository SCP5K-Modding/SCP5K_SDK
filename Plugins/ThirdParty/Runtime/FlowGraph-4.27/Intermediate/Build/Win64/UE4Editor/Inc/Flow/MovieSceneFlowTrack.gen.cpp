// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Flow/Public/MovieScene/MovieSceneFlowTrack.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneFlowTrack() {}
// Cross Module References
	FLOW_API UClass* Z_Construct_UClass_UMovieSceneFlowTrack_NoRegister();
	FLOW_API UClass* Z_Construct_UClass_UMovieSceneFlowTrack();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneNameableTrack();
	UPackage* Z_Construct_UPackage__Script_Flow();
	MOVIESCENETRACKS_API UEnum* Z_Construct_UEnum_MovieSceneTracks_EFireEventsAtPosition();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneTrackTemplateProducer_NoRegister();
// End Cross Module References
	void UMovieSceneFlowTrack::StaticRegisterNativesUMovieSceneFlowTrack()
	{
	}
	UClass* Z_Construct_UClass_UMovieSceneFlowTrack_NoRegister()
	{
		return UMovieSceneFlowTrack::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneFlowTrack_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFireEventsWhenForwards_MetaData[];
#endif
		static void NewProp_bFireEventsWhenForwards_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFireEventsWhenForwards;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFireEventsWhenBackwards_MetaData[];
#endif
		static void NewProp_bFireEventsWhenBackwards_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFireEventsWhenBackwards;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EventPosition_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_EventPosition;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Sections_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Sections_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Sections;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneFlowTrack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneNameableTrack,
		(UObject* (*)())Z_Construct_UPackage__Script_Flow,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneFlowTrack_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Implements a movie scene track that triggers events in the Flow System during playback.\n */" },
		{ "IncludePath", "MovieScene/MovieSceneFlowTrack.h" },
		{ "ModuleRelativePath", "Public/MovieScene/MovieSceneFlowTrack.h" },
		{ "ToolTip", "Implements a movie scene track that triggers events in the Flow System during playback." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneFlowTrack_Statics::NewProp_bFireEventsWhenForwards_MetaData[] = {
		{ "Category", "TrackEvent" },
		{ "Comment", "/** If events should be fired when passed playing the sequence forwards. */" },
		{ "ModuleRelativePath", "Public/MovieScene/MovieSceneFlowTrack.h" },
		{ "ToolTip", "If events should be fired when passed playing the sequence forwards." },
	};
#endif
	void Z_Construct_UClass_UMovieSceneFlowTrack_Statics::NewProp_bFireEventsWhenForwards_SetBit(void* Obj)
	{
		((UMovieSceneFlowTrack*)Obj)->bFireEventsWhenForwards = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieSceneFlowTrack_Statics::NewProp_bFireEventsWhenForwards = { "bFireEventsWhenForwards", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UMovieSceneFlowTrack), &Z_Construct_UClass_UMovieSceneFlowTrack_Statics::NewProp_bFireEventsWhenForwards_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneFlowTrack_Statics::NewProp_bFireEventsWhenForwards_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneFlowTrack_Statics::NewProp_bFireEventsWhenForwards_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneFlowTrack_Statics::NewProp_bFireEventsWhenBackwards_MetaData[] = {
		{ "Category", "TrackEvent" },
		{ "Comment", "/** If events should be fired when passed playing the sequence backwards. */" },
		{ "ModuleRelativePath", "Public/MovieScene/MovieSceneFlowTrack.h" },
		{ "ToolTip", "If events should be fired when passed playing the sequence backwards." },
	};
#endif
	void Z_Construct_UClass_UMovieSceneFlowTrack_Statics::NewProp_bFireEventsWhenBackwards_SetBit(void* Obj)
	{
		((UMovieSceneFlowTrack*)Obj)->bFireEventsWhenBackwards = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieSceneFlowTrack_Statics::NewProp_bFireEventsWhenBackwards = { "bFireEventsWhenBackwards", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UMovieSceneFlowTrack), &Z_Construct_UClass_UMovieSceneFlowTrack_Statics::NewProp_bFireEventsWhenBackwards_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneFlowTrack_Statics::NewProp_bFireEventsWhenBackwards_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneFlowTrack_Statics::NewProp_bFireEventsWhenBackwards_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMovieSceneFlowTrack_Statics::NewProp_EventPosition_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneFlowTrack_Statics::NewProp_EventPosition_MetaData[] = {
		{ "Category", "TrackEvent" },
		{ "Comment", "/** Defines where in the evaluation to trigger events */" },
		{ "ModuleRelativePath", "Public/MovieScene/MovieSceneFlowTrack.h" },
		{ "ToolTip", "Defines where in the evaluation to trigger events" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMovieSceneFlowTrack_Statics::NewProp_EventPosition = { "EventPosition", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneFlowTrack, EventPosition), Z_Construct_UEnum_MovieSceneTracks_EFireEventsAtPosition, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneFlowTrack_Statics::NewProp_EventPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneFlowTrack_Statics::NewProp_EventPosition_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMovieSceneFlowTrack_Statics::NewProp_Sections_Inner = { "Sections", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMovieSceneSection_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneFlowTrack_Statics::NewProp_Sections_MetaData[] = {
		{ "Comment", "/** The track's sections. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MovieScene/MovieSceneFlowTrack.h" },
		{ "ToolTip", "The track's sections." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMovieSceneFlowTrack_Statics::NewProp_Sections = { "Sections", nullptr, (EPropertyFlags)0x0040008000000008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneFlowTrack, Sections), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneFlowTrack_Statics::NewProp_Sections_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneFlowTrack_Statics::NewProp_Sections_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneFlowTrack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneFlowTrack_Statics::NewProp_bFireEventsWhenForwards,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneFlowTrack_Statics::NewProp_bFireEventsWhenBackwards,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneFlowTrack_Statics::NewProp_EventPosition_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneFlowTrack_Statics::NewProp_EventPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneFlowTrack_Statics::NewProp_Sections_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneFlowTrack_Statics::NewProp_Sections,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UMovieSceneFlowTrack_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UMovieSceneTrackTemplateProducer_NoRegister, (int32)VTABLE_OFFSET(UMovieSceneFlowTrack, IMovieSceneTrackTemplateProducer), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneFlowTrack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneFlowTrack>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneFlowTrack_Statics::ClassParams = {
		&UMovieSceneFlowTrack::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovieSceneFlowTrack_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneFlowTrack_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneFlowTrack_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneFlowTrack_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneFlowTrack()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMovieSceneFlowTrack_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMovieSceneFlowTrack, 4279591793);
	template<> FLOW_API UClass* StaticClass<UMovieSceneFlowTrack>()
	{
		return UMovieSceneFlowTrack::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieSceneFlowTrack(Z_Construct_UClass_UMovieSceneFlowTrack, &UMovieSceneFlowTrack::StaticClass, TEXT("/Script/Flow"), TEXT("UMovieSceneFlowTrack"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneFlowTrack);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
