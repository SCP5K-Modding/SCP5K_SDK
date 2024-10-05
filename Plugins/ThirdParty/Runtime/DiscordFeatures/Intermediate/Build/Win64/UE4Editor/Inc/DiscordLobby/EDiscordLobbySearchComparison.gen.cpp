// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DiscordLobby/Public/EDiscordLobbySearchComparison.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEDiscordLobbySearchComparison() {}
// Cross Module References
	DISCORDLOBBY_API UEnum* Z_Construct_UEnum_DiscordLobby_EDiscordLobbySearchComparison();
	UPackage* Z_Construct_UPackage__Script_DiscordLobby();
// End Cross Module References
	static UEnum* EDiscordLobbySearchComparison_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DiscordLobby_EDiscordLobbySearchComparison, Z_Construct_UPackage__Script_DiscordLobby(), TEXT("EDiscordLobbySearchComparison"));
		}
		return Singleton;
	}
	template<> DISCORDLOBBY_API UEnum* StaticEnum<EDiscordLobbySearchComparison>()
	{
		return EDiscordLobbySearchComparison_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EDiscordLobbySearchComparison(EDiscordLobbySearchComparison_StaticEnum, TEXT("/Script/DiscordLobby"), TEXT("EDiscordLobbySearchComparison"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DiscordLobby_EDiscordLobbySearchComparison_Hash() { return 683568899U; }
	UEnum* Z_Construct_UEnum_DiscordLobby_EDiscordLobbySearchComparison()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DiscordLobby();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EDiscordLobbySearchComparison"), 0, Get_Z_Construct_UEnum_DiscordLobby_EDiscordLobbySearchComparison_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EDiscordLobbySearchComparison::LessThanOrEqual", (int64)EDiscordLobbySearchComparison::LessThanOrEqual },
				{ "EDiscordLobbySearchComparison::LessThan", (int64)EDiscordLobbySearchComparison::LessThan },
				{ "EDiscordLobbySearchComparison::Equal", (int64)EDiscordLobbySearchComparison::Equal },
				{ "EDiscordLobbySearchComparison::GraterThan", (int64)EDiscordLobbySearchComparison::GraterThan },
				{ "EDiscordLobbySearchComparison::GreaterOrEqualThan", (int64)EDiscordLobbySearchComparison::GreaterOrEqualThan },
				{ "EDiscordLobbySearchComparison::NotEqual", (int64)EDiscordLobbySearchComparison::NotEqual },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Equal.Name", "EDiscordLobbySearchComparison::Equal" },
				{ "GraterThan.Name", "EDiscordLobbySearchComparison::GraterThan" },
				{ "GreaterOrEqualThan.Name", "EDiscordLobbySearchComparison::GreaterOrEqualThan" },
				{ "LessThan.Name", "EDiscordLobbySearchComparison::LessThan" },
				{ "LessThanOrEqual.Name", "EDiscordLobbySearchComparison::LessThanOrEqual" },
				{ "ModuleRelativePath", "Public/EDiscordLobbySearchComparison.h" },
				{ "NotEqual.Name", "EDiscordLobbySearchComparison::NotEqual" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DiscordLobby,
				nullptr,
				"EDiscordLobbySearchComparison",
				"EDiscordLobbySearchComparison",
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
