// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FlowEditor/Public/Graph/FlowGraphConnectionDrawingPolicy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFlowGraphConnectionDrawingPolicy() {}
// Cross Module References
	FLOWEDITOR_API UEnum* Z_Construct_UEnum_FlowEditor_EFlowConnectionDrawType();
	UPackage* Z_Construct_UPackage__Script_FlowEditor();
// End Cross Module References
	static UEnum* EFlowConnectionDrawType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_FlowEditor_EFlowConnectionDrawType, Z_Construct_UPackage__Script_FlowEditor(), TEXT("EFlowConnectionDrawType"));
		}
		return Singleton;
	}
	template<> FLOWEDITOR_API UEnum* StaticEnum<EFlowConnectionDrawType>()
	{
		return EFlowConnectionDrawType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFlowConnectionDrawType(EFlowConnectionDrawType_StaticEnum, TEXT("/Script/FlowEditor"), TEXT("EFlowConnectionDrawType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_FlowEditor_EFlowConnectionDrawType_Hash() { return 448776863U; }
	UEnum* Z_Construct_UEnum_FlowEditor_EFlowConnectionDrawType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_FlowEditor();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFlowConnectionDrawType"), 0, Get_Z_Construct_UEnum_FlowEditor_EFlowConnectionDrawType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EFlowConnectionDrawType::Default", (int64)EFlowConnectionDrawType::Default },
				{ "EFlowConnectionDrawType::Circuit", (int64)EFlowConnectionDrawType::Circuit },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Circuit.Name", "EFlowConnectionDrawType::Circuit" },
				{ "Default.Name", "EFlowConnectionDrawType::Default" },
				{ "ModuleRelativePath", "Public/Graph/FlowGraphConnectionDrawingPolicy.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_FlowEditor,
				nullptr,
				"EFlowConnectionDrawType",
				"EFlowConnectionDrawType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
