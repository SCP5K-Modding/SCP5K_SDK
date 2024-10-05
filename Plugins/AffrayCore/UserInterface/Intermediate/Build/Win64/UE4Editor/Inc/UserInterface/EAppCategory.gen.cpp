// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UserInterface/Public/EAppCategory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEAppCategory() {}
// Cross Module References
	USERINTERFACE_API UEnum* Z_Construct_UEnum_UserInterface_EAppCategory();
	UPackage* Z_Construct_UPackage__Script_UserInterface();
// End Cross Module References
	static UEnum* EAppCategory_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_UserInterface_EAppCategory, Z_Construct_UPackage__Script_UserInterface(), TEXT("EAppCategory"));
		}
		return Singleton;
	}
	template<> USERINTERFACE_API UEnum* StaticEnum<EAppCategory>()
	{
		return EAppCategory_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAppCategory(EAppCategory_StaticEnum, TEXT("/Script/UserInterface"), TEXT("EAppCategory"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_UserInterface_EAppCategory_Hash() { return 923983704U; }
	UEnum* Z_Construct_UEnum_UserInterface_EAppCategory()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_UserInterface();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAppCategory"), 0, Get_Z_Construct_UEnum_UserInterface_EAppCategory_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAppCategory::AC_Folder", (int64)EAppCategory::AC_Folder },
				{ "EAppCategory::AC_Document", (int64)EAppCategory::AC_Document },
				{ "EAppCategory::AC_Images", (int64)EAppCategory::AC_Images },
				{ "EAppCategory::AC_Videos", (int64)EAppCategory::AC_Videos },
				{ "EAppCategory::AC_Audio", (int64)EAppCategory::AC_Audio },
				{ "EAppCategory::AC_Email", (int64)EAppCategory::AC_Email },
				{ "EAppCategory::AC_Journal", (int64)EAppCategory::AC_Journal },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AC_Audio.Name", "EAppCategory::AC_Audio" },
				{ "AC_Document.Name", "EAppCategory::AC_Document" },
				{ "AC_Email.Name", "EAppCategory::AC_Email" },
				{ "AC_Folder.Name", "EAppCategory::AC_Folder" },
				{ "AC_Images.Name", "EAppCategory::AC_Images" },
				{ "AC_Journal.Name", "EAppCategory::AC_Journal" },
				{ "AC_Videos.Name", "EAppCategory::AC_Videos" },
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/EAppCategory.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_UserInterface,
				nullptr,
				"EAppCategory",
				"EAppCategory",
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
