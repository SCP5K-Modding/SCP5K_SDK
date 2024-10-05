// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UserInterface/Public/EClearanceLevel.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEClearanceLevel() {}
// Cross Module References
	USERINTERFACE_API UEnum* Z_Construct_UEnum_UserInterface_EClearanceLevel();
	UPackage* Z_Construct_UPackage__Script_UserInterface();
// End Cross Module References
	static UEnum* EClearanceLevel_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_UserInterface_EClearanceLevel, Z_Construct_UPackage__Script_UserInterface(), TEXT("EClearanceLevel"));
		}
		return Singleton;
	}
	template<> USERINTERFACE_API UEnum* StaticEnum<EClearanceLevel>()
	{
		return EClearanceLevel_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EClearanceLevel(EClearanceLevel_StaticEnum, TEXT("/Script/UserInterface"), TEXT("EClearanceLevel"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_UserInterface_EClearanceLevel_Hash() { return 2064691600U; }
	UEnum* Z_Construct_UEnum_UserInterface_EClearanceLevel()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_UserInterface();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EClearanceLevel"), 0, Get_Z_Construct_UEnum_UserInterface_EClearanceLevel_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EClearanceLevel::None", (int64)EClearanceLevel::None },
				{ "EClearanceLevel::Level1", (int64)EClearanceLevel::Level1 },
				{ "EClearanceLevel::Level2", (int64)EClearanceLevel::Level2 },
				{ "EClearanceLevel::Level3", (int64)EClearanceLevel::Level3 },
				{ "EClearanceLevel::Level4", (int64)EClearanceLevel::Level4 },
				{ "EClearanceLevel::Level5", (int64)EClearanceLevel::Level5 },
				{ "EClearanceLevel::Level6", (int64)EClearanceLevel::Level6 },
				{ "EClearanceLevel::Level7", (int64)EClearanceLevel::Level7 },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Level1.Name", "EClearanceLevel::Level1" },
				{ "Level2.Name", "EClearanceLevel::Level2" },
				{ "Level3.Name", "EClearanceLevel::Level3" },
				{ "Level4.Name", "EClearanceLevel::Level4" },
				{ "Level5.Name", "EClearanceLevel::Level5" },
				{ "Level6.Name", "EClearanceLevel::Level6" },
				{ "Level7.Name", "EClearanceLevel::Level7" },
				{ "ModuleRelativePath", "Public/EClearanceLevel.h" },
				{ "None.Name", "EClearanceLevel::None" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_UserInterface,
				nullptr,
				"EClearanceLevel",
				"EClearanceLevel",
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
