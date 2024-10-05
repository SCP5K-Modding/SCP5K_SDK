// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LevelStreaming/Public/LevelStreamingInfoVolume.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelStreamingInfoVolume() {}
// Cross Module References
	LEVELSTREAMING_API UClass* Z_Construct_UClass_ALevelStreamingInfoVolume_NoRegister();
	LEVELSTREAMING_API UClass* Z_Construct_UClass_ALevelStreamingInfoVolume();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_LevelStreaming();
	LEVELSTREAMING_API UScriptStruct* Z_Construct_UScriptStruct_FLevelStreamingInfo();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
// End Cross Module References
	void ALevelStreamingInfoVolume::StaticRegisterNativesALevelStreamingInfoVolume()
	{
	}
	UClass* Z_Construct_UClass_ALevelStreamingInfoVolume_NoRegister()
	{
		return ALevelStreamingInfoVolume::StaticClass();
	}
	struct Z_Construct_UClass_ALevelStreamingInfoVolume_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Priority_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Priority;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StreamingInfo_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StreamingInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_StreamingInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoxComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BoxComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALevelStreamingInfoVolume_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_LevelStreaming,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelStreamingInfoVolume_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "LevelStreamingInfoVolume.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/LevelStreamingInfoVolume.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelStreamingInfoVolume_Statics::NewProp_Priority_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LevelStreamingInfoVolume" },
		{ "ModuleRelativePath", "Public/LevelStreamingInfoVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ALevelStreamingInfoVolume_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALevelStreamingInfoVolume, Priority), nullptr, METADATA_PARAMS(Z_Construct_UClass_ALevelStreamingInfoVolume_Statics::NewProp_Priority_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALevelStreamingInfoVolume_Statics::NewProp_Priority_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ALevelStreamingInfoVolume_Statics::NewProp_StreamingInfo_Inner = { "StreamingInfo", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLevelStreamingInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelStreamingInfoVolume_Statics::NewProp_StreamingInfo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LevelStreamingInfoVolume" },
		{ "ModuleRelativePath", "Public/LevelStreamingInfoVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ALevelStreamingInfoVolume_Statics::NewProp_StreamingInfo = { "StreamingInfo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALevelStreamingInfoVolume, StreamingInfo), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ALevelStreamingInfoVolume_Statics::NewProp_StreamingInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALevelStreamingInfoVolume_Statics::NewProp_StreamingInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelStreamingInfoVolume_Statics::NewProp_BoxComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LevelStreamingInfoVolume" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LevelStreamingInfoVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALevelStreamingInfoVolume_Statics::NewProp_BoxComponent = { "BoxComponent", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALevelStreamingInfoVolume, BoxComponent), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALevelStreamingInfoVolume_Statics::NewProp_BoxComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALevelStreamingInfoVolume_Statics::NewProp_BoxComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALevelStreamingInfoVolume_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelStreamingInfoVolume_Statics::NewProp_Priority,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelStreamingInfoVolume_Statics::NewProp_StreamingInfo_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelStreamingInfoVolume_Statics::NewProp_StreamingInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelStreamingInfoVolume_Statics::NewProp_BoxComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALevelStreamingInfoVolume_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALevelStreamingInfoVolume>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ALevelStreamingInfoVolume_Statics::ClassParams = {
		&ALevelStreamingInfoVolume::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ALevelStreamingInfoVolume_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ALevelStreamingInfoVolume_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ALevelStreamingInfoVolume_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALevelStreamingInfoVolume_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALevelStreamingInfoVolume()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ALevelStreamingInfoVolume_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALevelStreamingInfoVolume, 1288586538);
	template<> LEVELSTREAMING_API UClass* StaticClass<ALevelStreamingInfoVolume>()
	{
		return ALevelStreamingInfoVolume::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALevelStreamingInfoVolume(Z_Construct_UClass_ALevelStreamingInfoVolume, &ALevelStreamingInfoVolume::StaticClass, TEXT("/Script/LevelStreaming"), TEXT("ALevelStreamingInfoVolume"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALevelStreamingInfoVolume);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
