// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UserInterface/Public/DocumentData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDocumentData() {}
// Cross Module References
	USERINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FDocumentData();
	UPackage* Z_Construct_UPackage__Script_UserInterface();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDataTableRowHandle();
// End Cross Module References
class UScriptStruct* FDocumentData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern USERINTERFACE_API uint32 Get_Z_Construct_UScriptStruct_FDocumentData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDocumentData, Z_Construct_UPackage__Script_UserInterface(), TEXT("DocumentData"), sizeof(FDocumentData), Get_Z_Construct_UScriptStruct_FDocumentData_Hash());
	}
	return Singleton;
}
template<> USERINTERFACE_API UScriptStruct* StaticStruct<FDocumentData>()
{
	return FDocumentData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDocumentData(FDocumentData::StaticStruct, TEXT("/Script/UserInterface"), TEXT("DocumentData"), false, nullptr, nullptr);
static struct FScriptStruct_UserInterface_StaticRegisterNativesFDocumentData
{
	FScriptStruct_UserInterface_StaticRegisterNativesFDocumentData()
	{
		UScriptStruct::DeferCppStructOps<FDocumentData>(FName(TEXT("DocumentData")));
	}
} ScriptStruct_UserInterface_StaticRegisterNativesFDocumentData;
	struct Z_Construct_UScriptStruct_FDocumentData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Containment_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Containment;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Disruption_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Disruption;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Risk_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Risk;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClearanceLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ClearanceLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecondaryClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SecondaryClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpecialContainmentProcedures_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_SpecialContainmentProcedures;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDocumentData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DocumentData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDocumentData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDocumentData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDocumentData_Statics::NewProp_Containment_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DocumentData" },
		{ "ModuleRelativePath", "Public/DocumentData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDocumentData_Statics::NewProp_Containment = { "Containment", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDocumentData, Containment), Z_Construct_UScriptStruct_FDataTableRowHandle, METADATA_PARAMS(Z_Construct_UScriptStruct_FDocumentData_Statics::NewProp_Containment_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDocumentData_Statics::NewProp_Containment_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDocumentData_Statics::NewProp_Disruption_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DocumentData" },
		{ "ModuleRelativePath", "Public/DocumentData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDocumentData_Statics::NewProp_Disruption = { "Disruption", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDocumentData, Disruption), Z_Construct_UScriptStruct_FDataTableRowHandle, METADATA_PARAMS(Z_Construct_UScriptStruct_FDocumentData_Statics::NewProp_Disruption_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDocumentData_Statics::NewProp_Disruption_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDocumentData_Statics::NewProp_Risk_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DocumentData" },
		{ "ModuleRelativePath", "Public/DocumentData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDocumentData_Statics::NewProp_Risk = { "Risk", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDocumentData, Risk), Z_Construct_UScriptStruct_FDataTableRowHandle, METADATA_PARAMS(Z_Construct_UScriptStruct_FDocumentData_Statics::NewProp_Risk_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDocumentData_Statics::NewProp_Risk_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDocumentData_Statics::NewProp_ClearanceLevel_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DocumentData" },
		{ "ModuleRelativePath", "Public/DocumentData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDocumentData_Statics::NewProp_ClearanceLevel = { "ClearanceLevel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDocumentData, ClearanceLevel), Z_Construct_UScriptStruct_FDataTableRowHandle, METADATA_PARAMS(Z_Construct_UScriptStruct_FDocumentData_Statics::NewProp_ClearanceLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDocumentData_Statics::NewProp_ClearanceLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDocumentData_Statics::NewProp_SecondaryClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DocumentData" },
		{ "ModuleRelativePath", "Public/DocumentData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDocumentData_Statics::NewProp_SecondaryClass = { "SecondaryClass", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDocumentData, SecondaryClass), Z_Construct_UScriptStruct_FDataTableRowHandle, METADATA_PARAMS(Z_Construct_UScriptStruct_FDocumentData_Statics::NewProp_SecondaryClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDocumentData_Statics::NewProp_SecondaryClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDocumentData_Statics::NewProp_SpecialContainmentProcedures_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DocumentData" },
		{ "ModuleRelativePath", "Public/DocumentData.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FDocumentData_Statics::NewProp_SpecialContainmentProcedures = { "SpecialContainmentProcedures", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDocumentData, SpecialContainmentProcedures), METADATA_PARAMS(Z_Construct_UScriptStruct_FDocumentData_Statics::NewProp_SpecialContainmentProcedures_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDocumentData_Statics::NewProp_SpecialContainmentProcedures_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDocumentData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDocumentData_Statics::NewProp_Containment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDocumentData_Statics::NewProp_Disruption,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDocumentData_Statics::NewProp_Risk,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDocumentData_Statics::NewProp_ClearanceLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDocumentData_Statics::NewProp_SecondaryClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDocumentData_Statics::NewProp_SpecialContainmentProcedures,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDocumentData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UserInterface,
		nullptr,
		&NewStructOps,
		"DocumentData",
		sizeof(FDocumentData),
		alignof(FDocumentData),
		Z_Construct_UScriptStruct_FDocumentData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDocumentData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDocumentData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDocumentData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDocumentData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDocumentData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_UserInterface();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DocumentData"), sizeof(FDocumentData), Get_Z_Construct_UScriptStruct_FDocumentData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDocumentData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDocumentData_Hash() { return 2086720153U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
