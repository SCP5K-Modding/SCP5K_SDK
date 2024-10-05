// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DiscordRelationship/Public/EDiscordRelationshipType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEDiscordRelationshipType() {}
// Cross Module References
	DISCORDRELATIONSHIP_API UEnum* Z_Construct_UEnum_DiscordRelationship_EDiscordRelationshipType();
	UPackage* Z_Construct_UPackage__Script_DiscordRelationship();
// End Cross Module References
	static UEnum* EDiscordRelationshipType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DiscordRelationship_EDiscordRelationshipType, Z_Construct_UPackage__Script_DiscordRelationship(), TEXT("EDiscordRelationshipType"));
		}
		return Singleton;
	}
	template<> DISCORDRELATIONSHIP_API UEnum* StaticEnum<EDiscordRelationshipType>()
	{
		return EDiscordRelationshipType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EDiscordRelationshipType(EDiscordRelationshipType_StaticEnum, TEXT("/Script/DiscordRelationship"), TEXT("EDiscordRelationshipType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DiscordRelationship_EDiscordRelationshipType_Hash() { return 3100364163U; }
	UEnum* Z_Construct_UEnum_DiscordRelationship_EDiscordRelationshipType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DiscordRelationship();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EDiscordRelationshipType"), 0, Get_Z_Construct_UEnum_DiscordRelationship_EDiscordRelationshipType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EDiscordRelationshipType::None", (int64)EDiscordRelationshipType::None },
				{ "EDiscordRelationshipType::Friend", (int64)EDiscordRelationshipType::Friend },
				{ "EDiscordRelationshipType::Blocked", (int64)EDiscordRelationshipType::Blocked },
				{ "EDiscordRelationshipType::PendingIncoming", (int64)EDiscordRelationshipType::PendingIncoming },
				{ "EDiscordRelationshipType::PendingOutgoing", (int64)EDiscordRelationshipType::PendingOutgoing },
				{ "EDiscordRelationshipType::Implicit", (int64)EDiscordRelationshipType::Implicit },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Blocked.Name", "EDiscordRelationshipType::Blocked" },
				{ "BlueprintType", "true" },
				{ "Friend.Name", "EDiscordRelationshipType::Friend" },
				{ "Implicit.Name", "EDiscordRelationshipType::Implicit" },
				{ "ModuleRelativePath", "Public/EDiscordRelationshipType.h" },
				{ "None.Name", "EDiscordRelationshipType::None" },
				{ "PendingIncoming.Name", "EDiscordRelationshipType::PendingIncoming" },
				{ "PendingOutgoing.Name", "EDiscordRelationshipType::PendingOutgoing" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DiscordRelationship,
				nullptr,
				"EDiscordRelationshipType",
				"EDiscordRelationshipType",
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
