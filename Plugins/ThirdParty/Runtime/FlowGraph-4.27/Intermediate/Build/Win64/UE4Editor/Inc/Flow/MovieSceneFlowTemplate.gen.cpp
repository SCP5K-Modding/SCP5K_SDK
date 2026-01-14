// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Flow/Public/MovieScene/MovieSceneFlowTemplate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneFlowTemplate() {}
// Cross Module References
	FLOW_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneFlowRepeaterTemplate();
	UPackage* Z_Construct_UPackage__Script_Flow();
	FLOW_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneFlowTemplateBase();
	FLOW_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneFlowTriggerTemplate();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameNumber();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvalTemplate();
// End Cross Module References

static_assert(std::is_polymorphic<FMovieSceneFlowRepeaterTemplate>() == std::is_polymorphic<FMovieSceneFlowTemplateBase>(), "USTRUCT FMovieSceneFlowRepeaterTemplate cannot be polymorphic unless super FMovieSceneFlowTemplateBase is polymorphic");

class UScriptStruct* FMovieSceneFlowRepeaterTemplate::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FLOW_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneFlowRepeaterTemplate_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneFlowRepeaterTemplate, Z_Construct_UPackage__Script_Flow(), TEXT("MovieSceneFlowRepeaterTemplate"), sizeof(FMovieSceneFlowRepeaterTemplate), Get_Z_Construct_UScriptStruct_FMovieSceneFlowRepeaterTemplate_Hash());
	}
	return Singleton;
}
template<> FLOW_API UScriptStruct* StaticStruct<FMovieSceneFlowRepeaterTemplate>()
{
	return FMovieSceneFlowRepeaterTemplate::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneFlowRepeaterTemplate(FMovieSceneFlowRepeaterTemplate::StaticStruct, TEXT("/Script/Flow"), TEXT("MovieSceneFlowRepeaterTemplate"), false, nullptr, nullptr);
static struct FScriptStruct_Flow_StaticRegisterNativesFMovieSceneFlowRepeaterTemplate
{
	FScriptStruct_Flow_StaticRegisterNativesFMovieSceneFlowRepeaterTemplate()
	{
		UScriptStruct::DeferCppStructOps<FMovieSceneFlowRepeaterTemplate>(FName(TEXT("MovieSceneFlowRepeaterTemplate")));
	}
} ScriptStruct_Flow_StaticRegisterNativesFMovieSceneFlowRepeaterTemplate;
	struct Z_Construct_UScriptStruct_FMovieSceneFlowRepeaterTemplate_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_EventName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneFlowRepeaterTemplate_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MovieScene/MovieSceneFlowTemplate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneFlowRepeaterTemplate_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneFlowRepeaterTemplate>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneFlowRepeaterTemplate_Statics::NewProp_EventName_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieScene/MovieSceneFlowTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMovieSceneFlowRepeaterTemplate_Statics::NewProp_EventName = { "EventName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneFlowRepeaterTemplate, EventName), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneFlowRepeaterTemplate_Statics::NewProp_EventName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneFlowRepeaterTemplate_Statics::NewProp_EventName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneFlowRepeaterTemplate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneFlowRepeaterTemplate_Statics::NewProp_EventName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneFlowRepeaterTemplate_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Flow,
		Z_Construct_UScriptStruct_FMovieSceneFlowTemplateBase,
		&NewStructOps,
		"MovieSceneFlowRepeaterTemplate",
		sizeof(FMovieSceneFlowRepeaterTemplate),
		alignof(FMovieSceneFlowRepeaterTemplate),
		Z_Construct_UScriptStruct_FMovieSceneFlowRepeaterTemplate_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneFlowRepeaterTemplate_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneFlowRepeaterTemplate_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneFlowRepeaterTemplate_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneFlowRepeaterTemplate()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneFlowRepeaterTemplate_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Flow();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneFlowRepeaterTemplate"), sizeof(FMovieSceneFlowRepeaterTemplate), Get_Z_Construct_UScriptStruct_FMovieSceneFlowRepeaterTemplate_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMovieSceneFlowRepeaterTemplate_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneFlowRepeaterTemplate_Hash() { return 3018258407U; }

static_assert(std::is_polymorphic<FMovieSceneFlowTriggerTemplate>() == std::is_polymorphic<FMovieSceneFlowTemplateBase>(), "USTRUCT FMovieSceneFlowTriggerTemplate cannot be polymorphic unless super FMovieSceneFlowTemplateBase is polymorphic");

class UScriptStruct* FMovieSceneFlowTriggerTemplate::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FLOW_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneFlowTriggerTemplate_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneFlowTriggerTemplate, Z_Construct_UPackage__Script_Flow(), TEXT("MovieSceneFlowTriggerTemplate"), sizeof(FMovieSceneFlowTriggerTemplate), Get_Z_Construct_UScriptStruct_FMovieSceneFlowTriggerTemplate_Hash());
	}
	return Singleton;
}
template<> FLOW_API UScriptStruct* StaticStruct<FMovieSceneFlowTriggerTemplate>()
{
	return FMovieSceneFlowTriggerTemplate::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneFlowTriggerTemplate(FMovieSceneFlowTriggerTemplate::StaticStruct, TEXT("/Script/Flow"), TEXT("MovieSceneFlowTriggerTemplate"), false, nullptr, nullptr);
static struct FScriptStruct_Flow_StaticRegisterNativesFMovieSceneFlowTriggerTemplate
{
	FScriptStruct_Flow_StaticRegisterNativesFMovieSceneFlowTriggerTemplate()
	{
		UScriptStruct::DeferCppStructOps<FMovieSceneFlowTriggerTemplate>(FName(TEXT("MovieSceneFlowTriggerTemplate")));
	}
} ScriptStruct_Flow_StaticRegisterNativesFMovieSceneFlowTriggerTemplate;
	struct Z_Construct_UScriptStruct_FMovieSceneFlowTriggerTemplate_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EventTimes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventTimes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_EventTimes;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_EventNames_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventNames_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_EventNames;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneFlowTriggerTemplate_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MovieScene/MovieSceneFlowTemplate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneFlowTriggerTemplate_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneFlowTriggerTemplate>();
	}
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneFlowTriggerTemplate_Statics::NewProp_EventTimes_Inner = { "EventTimes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneFlowTriggerTemplate_Statics::NewProp_EventTimes_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieScene/MovieSceneFlowTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMovieSceneFlowTriggerTemplate_Statics::NewProp_EventTimes = { "EventTimes", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneFlowTriggerTemplate, EventTimes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneFlowTriggerTemplate_Statics::NewProp_EventTimes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneFlowTriggerTemplate_Statics::NewProp_EventTimes_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMovieSceneFlowTriggerTemplate_Statics::NewProp_EventNames_Inner = { "EventNames", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneFlowTriggerTemplate_Statics::NewProp_EventNames_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieScene/MovieSceneFlowTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMovieSceneFlowTriggerTemplate_Statics::NewProp_EventNames = { "EventNames", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneFlowTriggerTemplate, EventNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneFlowTriggerTemplate_Statics::NewProp_EventNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneFlowTriggerTemplate_Statics::NewProp_EventNames_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneFlowTriggerTemplate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneFlowTriggerTemplate_Statics::NewProp_EventTimes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneFlowTriggerTemplate_Statics::NewProp_EventTimes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneFlowTriggerTemplate_Statics::NewProp_EventNames_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneFlowTriggerTemplate_Statics::NewProp_EventNames,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneFlowTriggerTemplate_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Flow,
		Z_Construct_UScriptStruct_FMovieSceneFlowTemplateBase,
		&NewStructOps,
		"MovieSceneFlowTriggerTemplate",
		sizeof(FMovieSceneFlowTriggerTemplate),
		alignof(FMovieSceneFlowTriggerTemplate),
		Z_Construct_UScriptStruct_FMovieSceneFlowTriggerTemplate_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneFlowTriggerTemplate_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneFlowTriggerTemplate_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneFlowTriggerTemplate_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneFlowTriggerTemplate()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneFlowTriggerTemplate_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Flow();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneFlowTriggerTemplate"), sizeof(FMovieSceneFlowTriggerTemplate), Get_Z_Construct_UScriptStruct_FMovieSceneFlowTriggerTemplate_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMovieSceneFlowTriggerTemplate_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneFlowTriggerTemplate_Hash() { return 936033281U; }

static_assert(std::is_polymorphic<FMovieSceneFlowTemplateBase>() == std::is_polymorphic<FMovieSceneEvalTemplate>(), "USTRUCT FMovieSceneFlowTemplateBase cannot be polymorphic unless super FMovieSceneEvalTemplate is polymorphic");

class UScriptStruct* FMovieSceneFlowTemplateBase::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FLOW_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneFlowTemplateBase_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneFlowTemplateBase, Z_Construct_UPackage__Script_Flow(), TEXT("MovieSceneFlowTemplateBase"), sizeof(FMovieSceneFlowTemplateBase), Get_Z_Construct_UScriptStruct_FMovieSceneFlowTemplateBase_Hash());
	}
	return Singleton;
}
template<> FLOW_API UScriptStruct* StaticStruct<FMovieSceneFlowTemplateBase>()
{
	return FMovieSceneFlowTemplateBase::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneFlowTemplateBase(FMovieSceneFlowTemplateBase::StaticStruct, TEXT("/Script/Flow"), TEXT("MovieSceneFlowTemplateBase"), false, nullptr, nullptr);
static struct FScriptStruct_Flow_StaticRegisterNativesFMovieSceneFlowTemplateBase
{
	FScriptStruct_Flow_StaticRegisterNativesFMovieSceneFlowTemplateBase()
	{
		UScriptStruct::DeferCppStructOps<FMovieSceneFlowTemplateBase>(FName(TEXT("MovieSceneFlowTemplateBase")));
	}
} ScriptStruct_Flow_StaticRegisterNativesFMovieSceneFlowTemplateBase;
	struct Z_Construct_UScriptStruct_FMovieSceneFlowTemplateBase_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
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
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneFlowTemplateBase_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MovieScene/MovieSceneFlowTemplate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneFlowTemplateBase_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneFlowTemplateBase>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneFlowTemplateBase_Statics::NewProp_bFireEventsWhenForwards_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieScene/MovieSceneFlowTemplate.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMovieSceneFlowTemplateBase_Statics::NewProp_bFireEventsWhenForwards_SetBit(void* Obj)
	{
		((FMovieSceneFlowTemplateBase*)Obj)->bFireEventsWhenForwards = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieSceneFlowTemplateBase_Statics::NewProp_bFireEventsWhenForwards = { "bFireEventsWhenForwards", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FMovieSceneFlowTemplateBase), &Z_Construct_UScriptStruct_FMovieSceneFlowTemplateBase_Statics::NewProp_bFireEventsWhenForwards_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneFlowTemplateBase_Statics::NewProp_bFireEventsWhenForwards_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneFlowTemplateBase_Statics::NewProp_bFireEventsWhenForwards_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneFlowTemplateBase_Statics::NewProp_bFireEventsWhenBackwards_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieScene/MovieSceneFlowTemplate.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMovieSceneFlowTemplateBase_Statics::NewProp_bFireEventsWhenBackwards_SetBit(void* Obj)
	{
		((FMovieSceneFlowTemplateBase*)Obj)->bFireEventsWhenBackwards = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieSceneFlowTemplateBase_Statics::NewProp_bFireEventsWhenBackwards = { "bFireEventsWhenBackwards", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FMovieSceneFlowTemplateBase), &Z_Construct_UScriptStruct_FMovieSceneFlowTemplateBase_Statics::NewProp_bFireEventsWhenBackwards_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneFlowTemplateBase_Statics::NewProp_bFireEventsWhenBackwards_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneFlowTemplateBase_Statics::NewProp_bFireEventsWhenBackwards_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneFlowTemplateBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneFlowTemplateBase_Statics::NewProp_bFireEventsWhenForwards,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneFlowTemplateBase_Statics::NewProp_bFireEventsWhenBackwards,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneFlowTemplateBase_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Flow,
		Z_Construct_UScriptStruct_FMovieSceneEvalTemplate,
		&NewStructOps,
		"MovieSceneFlowTemplateBase",
		sizeof(FMovieSceneFlowTemplateBase),
		alignof(FMovieSceneFlowTemplateBase),
		Z_Construct_UScriptStruct_FMovieSceneFlowTemplateBase_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneFlowTemplateBase_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneFlowTemplateBase_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneFlowTemplateBase_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneFlowTemplateBase()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneFlowTemplateBase_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Flow();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneFlowTemplateBase"), sizeof(FMovieSceneFlowTemplateBase), Get_Z_Construct_UScriptStruct_FMovieSceneFlowTemplateBase_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMovieSceneFlowTemplateBase_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneFlowTemplateBase_Hash() { return 2889213038U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
