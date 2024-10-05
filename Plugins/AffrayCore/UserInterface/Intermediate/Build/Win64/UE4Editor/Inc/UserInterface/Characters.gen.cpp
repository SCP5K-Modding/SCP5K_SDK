// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UserInterface/Public/Characters.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacters() {}
// Cross Module References
	USERINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FCharacters();
	UPackage* Z_Construct_UPackage__Script_UserInterface();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	USERINTERFACE_API UEnum* Z_Construct_UEnum_UserInterface_ECharacterClearanceLevel();
	USERINTERFACE_API UEnum* Z_Construct_UEnum_UserInterface_ECharacterClassification();
	USERINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FDate();
	USERINTERFACE_API UEnum* Z_Construct_UEnum_UserInterface_ECharacterSex();
	USERINTERFACE_API UEnum* Z_Construct_UEnum_UserInterface_ECharacterFeature();
// End Cross Module References

static_assert(std::is_polymorphic<FCharacters>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FCharacters cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FCharacters::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern USERINTERFACE_API uint32 Get_Z_Construct_UScriptStruct_FCharacters_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCharacters, Z_Construct_UPackage__Script_UserInterface(), TEXT("Characters"), sizeof(FCharacters), Get_Z_Construct_UScriptStruct_FCharacters_Hash());
	}
	return Singleton;
}
template<> USERINTERFACE_API UScriptStruct* StaticStruct<FCharacters>()
{
	return FCharacters::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCharacters(FCharacters::StaticStruct, TEXT("/Script/UserInterface"), TEXT("Characters"), false, nullptr, nullptr);
static struct FScriptStruct_UserInterface_StaticRegisterNativesFCharacters
{
	FScriptStruct_UserInterface_StaticRegisterNativesFCharacters()
	{
		UScriptStruct::DeferCppStructOps<FCharacters>(FName(TEXT("Characters")));
	}
} ScriptStruct_UserInterface_StaticRegisterNativesFCharacters;
	struct Z_Construct_UScriptStruct_FCharacters_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FirstName_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_FirstName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MiddleName_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_MiddleName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastName_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_LastName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FullName_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_FullName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Username_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Username;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Email_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Email;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ClearanceLevel_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClearanceLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ClearanceLevel;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Classification_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Classification_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Classification;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Title_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Title;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Age_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Age;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DateOfBirth_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DateOfBirth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartingDate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StartingDate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Ethnicity_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Ethnicity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Nationality_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Nationality;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MainWorkingLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_MainWorkingLocation;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Sex_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Sex_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Sex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Height_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Height;
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_AdditionalFeatures_ValueProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AdditionalFeatures_Key_KeyProp_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AdditionalFeatures_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdditionalFeatures_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_AdditionalFeatures;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacters_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Characters.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCharacters_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCharacters>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacters_Statics::NewProp_FirstName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Characters" },
		{ "ModuleRelativePath", "Public/Characters.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FCharacters_Statics::NewProp_FirstName = { "FirstName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacters, FirstName), METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacters_Statics::NewProp_FirstName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacters_Statics::NewProp_FirstName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacters_Statics::NewProp_MiddleName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Characters" },
		{ "ModuleRelativePath", "Public/Characters.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FCharacters_Statics::NewProp_MiddleName = { "MiddleName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacters, MiddleName), METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacters_Statics::NewProp_MiddleName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacters_Statics::NewProp_MiddleName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacters_Statics::NewProp_LastName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Characters" },
		{ "ModuleRelativePath", "Public/Characters.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FCharacters_Statics::NewProp_LastName = { "LastName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacters, LastName), METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacters_Statics::NewProp_LastName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacters_Statics::NewProp_LastName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacters_Statics::NewProp_FullName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Characters" },
		{ "ModuleRelativePath", "Public/Characters.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FCharacters_Statics::NewProp_FullName = { "FullName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacters, FullName), METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacters_Statics::NewProp_FullName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacters_Statics::NewProp_FullName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacters_Statics::NewProp_Username_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Characters" },
		{ "ModuleRelativePath", "Public/Characters.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCharacters_Statics::NewProp_Username = { "Username", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacters, Username), METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacters_Statics::NewProp_Username_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacters_Statics::NewProp_Username_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacters_Statics::NewProp_Email_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Characters" },
		{ "ModuleRelativePath", "Public/Characters.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCharacters_Statics::NewProp_Email = { "Email", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacters, Email), METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacters_Statics::NewProp_Email_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacters_Statics::NewProp_Email_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCharacters_Statics::NewProp_ClearanceLevel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacters_Statics::NewProp_ClearanceLevel_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Characters" },
		{ "ModuleRelativePath", "Public/Characters.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCharacters_Statics::NewProp_ClearanceLevel = { "ClearanceLevel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacters, ClearanceLevel), Z_Construct_UEnum_UserInterface_ECharacterClearanceLevel, METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacters_Statics::NewProp_ClearanceLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacters_Statics::NewProp_ClearanceLevel_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCharacters_Statics::NewProp_Classification_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacters_Statics::NewProp_Classification_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Characters" },
		{ "ModuleRelativePath", "Public/Characters.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCharacters_Statics::NewProp_Classification = { "Classification", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacters, Classification), Z_Construct_UEnum_UserInterface_ECharacterClassification, METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacters_Statics::NewProp_Classification_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacters_Statics::NewProp_Classification_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacters_Statics::NewProp_Title_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Characters" },
		{ "ModuleRelativePath", "Public/Characters.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FCharacters_Statics::NewProp_Title = { "Title", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacters, Title), METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacters_Statics::NewProp_Title_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacters_Statics::NewProp_Title_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacters_Statics::NewProp_Age_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Characters" },
		{ "ModuleRelativePath", "Public/Characters.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCharacters_Statics::NewProp_Age = { "Age", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacters, Age), METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacters_Statics::NewProp_Age_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacters_Statics::NewProp_Age_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacters_Statics::NewProp_DateOfBirth_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Characters" },
		{ "ModuleRelativePath", "Public/Characters.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCharacters_Statics::NewProp_DateOfBirth = { "DateOfBirth", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacters, DateOfBirth), Z_Construct_UScriptStruct_FDate, METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacters_Statics::NewProp_DateOfBirth_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacters_Statics::NewProp_DateOfBirth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacters_Statics::NewProp_StartingDate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Characters" },
		{ "ModuleRelativePath", "Public/Characters.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCharacters_Statics::NewProp_StartingDate = { "StartingDate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacters, StartingDate), Z_Construct_UScriptStruct_FDate, METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacters_Statics::NewProp_StartingDate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacters_Statics::NewProp_StartingDate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacters_Statics::NewProp_Ethnicity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Characters" },
		{ "ModuleRelativePath", "Public/Characters.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FCharacters_Statics::NewProp_Ethnicity = { "Ethnicity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacters, Ethnicity), METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacters_Statics::NewProp_Ethnicity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacters_Statics::NewProp_Ethnicity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacters_Statics::NewProp_Nationality_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Characters" },
		{ "ModuleRelativePath", "Public/Characters.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FCharacters_Statics::NewProp_Nationality = { "Nationality", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacters, Nationality), METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacters_Statics::NewProp_Nationality_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacters_Statics::NewProp_Nationality_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacters_Statics::NewProp_MainWorkingLocation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Characters" },
		{ "ModuleRelativePath", "Public/Characters.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FCharacters_Statics::NewProp_MainWorkingLocation = { "MainWorkingLocation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacters, MainWorkingLocation), METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacters_Statics::NewProp_MainWorkingLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacters_Statics::NewProp_MainWorkingLocation_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCharacters_Statics::NewProp_Sex_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacters_Statics::NewProp_Sex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Characters" },
		{ "ModuleRelativePath", "Public/Characters.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCharacters_Statics::NewProp_Sex = { "Sex", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacters, Sex), Z_Construct_UEnum_UserInterface_ECharacterSex, METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacters_Statics::NewProp_Sex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacters_Statics::NewProp_Sex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacters_Statics::NewProp_Height_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Characters" },
		{ "ModuleRelativePath", "Public/Characters.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCharacters_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacters, Height), METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacters_Statics::NewProp_Height_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacters_Statics::NewProp_Height_MetaData)) };
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FCharacters_Statics::NewProp_AdditionalFeatures_ValueProp = { "AdditionalFeatures", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCharacters_Statics::NewProp_AdditionalFeatures_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCharacters_Statics::NewProp_AdditionalFeatures_Key_KeyProp = { "AdditionalFeatures_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_UserInterface_ECharacterFeature, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacters_Statics::NewProp_AdditionalFeatures_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Characters" },
		{ "ModuleRelativePath", "Public/Characters.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FCharacters_Statics::NewProp_AdditionalFeatures = { "AdditionalFeatures", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacters, AdditionalFeatures), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacters_Statics::NewProp_AdditionalFeatures_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacters_Statics::NewProp_AdditionalFeatures_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCharacters_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacters_Statics::NewProp_FirstName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacters_Statics::NewProp_MiddleName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacters_Statics::NewProp_LastName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacters_Statics::NewProp_FullName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacters_Statics::NewProp_Username,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacters_Statics::NewProp_Email,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacters_Statics::NewProp_ClearanceLevel_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacters_Statics::NewProp_ClearanceLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacters_Statics::NewProp_Classification_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacters_Statics::NewProp_Classification,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacters_Statics::NewProp_Title,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacters_Statics::NewProp_Age,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacters_Statics::NewProp_DateOfBirth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacters_Statics::NewProp_StartingDate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacters_Statics::NewProp_Ethnicity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacters_Statics::NewProp_Nationality,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacters_Statics::NewProp_MainWorkingLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacters_Statics::NewProp_Sex_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacters_Statics::NewProp_Sex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacters_Statics::NewProp_Height,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacters_Statics::NewProp_AdditionalFeatures_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacters_Statics::NewProp_AdditionalFeatures_Key_KeyProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacters_Statics::NewProp_AdditionalFeatures_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacters_Statics::NewProp_AdditionalFeatures,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCharacters_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UserInterface,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"Characters",
		sizeof(FCharacters),
		alignof(FCharacters),
		Z_Construct_UScriptStruct_FCharacters_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacters_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacters_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacters_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCharacters()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCharacters_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_UserInterface();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Characters"), sizeof(FCharacters), Get_Z_Construct_UScriptStruct_FCharacters_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCharacters_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCharacters_Hash() { return 539696487U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
