// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UserInterface/Public/DocumentIcon.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDocumentIcon() {}
// Cross Module References
	USERINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FDocumentIcon();
	UPackage* Z_Construct_UPackage__Script_UserInterface();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	USERINTERFACE_API UEnum* Z_Construct_UEnum_UserInterface_EDocumentIconType();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
// End Cross Module References

static_assert(std::is_polymorphic<FDocumentIcon>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FDocumentIcon cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FDocumentIcon::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern USERINTERFACE_API uint32 Get_Z_Construct_UScriptStruct_FDocumentIcon_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDocumentIcon, Z_Construct_UPackage__Script_UserInterface(), TEXT("DocumentIcon"), sizeof(FDocumentIcon), Get_Z_Construct_UScriptStruct_FDocumentIcon_Hash());
	}
	return Singleton;
}
template<> USERINTERFACE_API UScriptStruct* StaticStruct<FDocumentIcon>()
{
	return FDocumentIcon::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDocumentIcon(FDocumentIcon::StaticStruct, TEXT("/Script/UserInterface"), TEXT("DocumentIcon"), false, nullptr, nullptr);
static struct FScriptStruct_UserInterface_StaticRegisterNativesFDocumentIcon
{
	FScriptStruct_UserInterface_StaticRegisterNativesFDocumentIcon()
	{
		UScriptStruct::DeferCppStructOps<FDocumentIcon>(FName(TEXT("DocumentIcon")));
	}
} ScriptStruct_UserInterface_StaticRegisterNativesFDocumentIcon;
	struct Z_Construct_UScriptStruct_FDocumentIcon_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_DisplayName;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Type;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Texture_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_Texture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Description;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrimaryColour_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PrimaryColour;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecondaryColour_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SecondaryColour;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDocumentIcon_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DocumentIcon.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDocumentIcon_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDocumentIcon>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDocumentIcon_Statics::NewProp_DisplayName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DocumentIcon" },
		{ "ModuleRelativePath", "Public/DocumentIcon.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FDocumentIcon_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDocumentIcon, DisplayName), METADATA_PARAMS(Z_Construct_UScriptStruct_FDocumentIcon_Statics::NewProp_DisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDocumentIcon_Statics::NewProp_DisplayName_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDocumentIcon_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDocumentIcon_Statics::NewProp_Type_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DocumentIcon" },
		{ "ModuleRelativePath", "Public/DocumentIcon.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FDocumentIcon_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDocumentIcon, Type), Z_Construct_UEnum_UserInterface_EDocumentIconType, METADATA_PARAMS(Z_Construct_UScriptStruct_FDocumentIcon_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDocumentIcon_Statics::NewProp_Type_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDocumentIcon_Statics::NewProp_Texture_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DocumentIcon" },
		{ "ModuleRelativePath", "Public/DocumentIcon.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FDocumentIcon_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDocumentIcon, Texture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDocumentIcon_Statics::NewProp_Texture_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDocumentIcon_Statics::NewProp_Texture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDocumentIcon_Statics::NewProp_Description_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DocumentIcon" },
		{ "ModuleRelativePath", "Public/DocumentIcon.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FDocumentIcon_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDocumentIcon, Description), METADATA_PARAMS(Z_Construct_UScriptStruct_FDocumentIcon_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDocumentIcon_Statics::NewProp_Description_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDocumentIcon_Statics::NewProp_PrimaryColour_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DocumentIcon" },
		{ "ModuleRelativePath", "Public/DocumentIcon.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDocumentIcon_Statics::NewProp_PrimaryColour = { "PrimaryColour", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDocumentIcon, PrimaryColour), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FDocumentIcon_Statics::NewProp_PrimaryColour_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDocumentIcon_Statics::NewProp_PrimaryColour_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDocumentIcon_Statics::NewProp_SecondaryColour_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DocumentIcon" },
		{ "ModuleRelativePath", "Public/DocumentIcon.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDocumentIcon_Statics::NewProp_SecondaryColour = { "SecondaryColour", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDocumentIcon, SecondaryColour), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FDocumentIcon_Statics::NewProp_SecondaryColour_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDocumentIcon_Statics::NewProp_SecondaryColour_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDocumentIcon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDocumentIcon_Statics::NewProp_DisplayName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDocumentIcon_Statics::NewProp_Type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDocumentIcon_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDocumentIcon_Statics::NewProp_Texture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDocumentIcon_Statics::NewProp_Description,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDocumentIcon_Statics::NewProp_PrimaryColour,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDocumentIcon_Statics::NewProp_SecondaryColour,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDocumentIcon_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UserInterface,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"DocumentIcon",
		sizeof(FDocumentIcon),
		alignof(FDocumentIcon),
		Z_Construct_UScriptStruct_FDocumentIcon_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDocumentIcon_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDocumentIcon_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDocumentIcon_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDocumentIcon()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDocumentIcon_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_UserInterface();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DocumentIcon"), sizeof(FDocumentIcon), Get_Z_Construct_UScriptStruct_FDocumentIcon_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDocumentIcon_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDocumentIcon_Hash() { return 2549849312U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
