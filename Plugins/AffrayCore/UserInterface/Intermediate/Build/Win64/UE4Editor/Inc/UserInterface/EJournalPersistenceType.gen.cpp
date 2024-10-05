// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UserInterface/Public/EJournalPersistenceType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEJournalPersistenceType() {}
// Cross Module References
	USERINTERFACE_API UEnum* Z_Construct_UEnum_UserInterface_EJournalPersistenceType();
	UPackage* Z_Construct_UPackage__Script_UserInterface();
// End Cross Module References
	static UEnum* EJournalPersistenceType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_UserInterface_EJournalPersistenceType, Z_Construct_UPackage__Script_UserInterface(), TEXT("EJournalPersistenceType"));
		}
		return Singleton;
	}
	template<> USERINTERFACE_API UEnum* StaticEnum<EJournalPersistenceType>()
	{
		return EJournalPersistenceType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EJournalPersistenceType(EJournalPersistenceType_StaticEnum, TEXT("/Script/UserInterface"), TEXT("EJournalPersistenceType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_UserInterface_EJournalPersistenceType_Hash() { return 2181042488U; }
	UEnum* Z_Construct_UEnum_UserInterface_EJournalPersistenceType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_UserInterface();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EJournalPersistenceType"), 0, Get_Z_Construct_UEnum_UserInterface_EJournalPersistenceType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EJournalPersistenceType::Temporary", (int64)EJournalPersistenceType::Temporary },
				{ "EJournalPersistenceType::Session", (int64)EJournalPersistenceType::Session },
				{ "EJournalPersistenceType::Persistent", (int64)EJournalPersistenceType::Persistent },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/EJournalPersistenceType.h" },
				{ "Persistent.Name", "EJournalPersistenceType::Persistent" },
				{ "Session.Name", "EJournalPersistenceType::Session" },
				{ "Temporary.Name", "EJournalPersistenceType::Temporary" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_UserInterface,
				nullptr,
				"EJournalPersistenceType",
				"EJournalPersistenceType",
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
