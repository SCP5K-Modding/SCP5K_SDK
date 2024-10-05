// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/ESteamPersonaChange.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESteamPersonaChange() {}
// Cross Module References
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamPersonaChange();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
// End Cross Module References
	static UEnum* ESteamPersonaChange_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SteamCore_ESteamPersonaChange, Z_Construct_UPackage__Script_SteamCore(), TEXT("ESteamPersonaChange"));
		}
		return Singleton;
	}
	template<> STEAMCORE_API UEnum* StaticEnum<ESteamPersonaChange>()
	{
		return ESteamPersonaChange_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESteamPersonaChange(ESteamPersonaChange_StaticEnum, TEXT("/Script/SteamCore"), TEXT("ESteamPersonaChange"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SteamCore_ESteamPersonaChange_Hash() { return 2384670105U; }
	UEnum* Z_Construct_UEnum_SteamCore_ESteamPersonaChange()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESteamPersonaChange"), 0, Get_Z_Construct_UEnum_SteamCore_ESteamPersonaChange_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESteamPersonaChange::Name", (int64)ESteamPersonaChange::Name },
				{ "ESteamPersonaChange::Status", (int64)ESteamPersonaChange::Status },
				{ "ESteamPersonaChange::ComeOnline", (int64)ESteamPersonaChange::ComeOnline },
				{ "ESteamPersonaChange::GoneOffline", (int64)ESteamPersonaChange::GoneOffline },
				{ "ESteamPersonaChange::GamePlayed", (int64)ESteamPersonaChange::GamePlayed },
				{ "ESteamPersonaChange::GameServer", (int64)ESteamPersonaChange::GameServer },
				{ "ESteamPersonaChange::Avatar", (int64)ESteamPersonaChange::Avatar },
				{ "ESteamPersonaChange::JoinedSource", (int64)ESteamPersonaChange::JoinedSource },
				{ "ESteamPersonaChange::LeftSource", (int64)ESteamPersonaChange::LeftSource },
				{ "ESteamPersonaChange::RelationshipChanged", (int64)ESteamPersonaChange::RelationshipChanged },
				{ "ESteamPersonaChange::NameFirstSet", (int64)ESteamPersonaChange::NameFirstSet },
				{ "ESteamPersonaChange::FacebookInfo", (int64)ESteamPersonaChange::FacebookInfo },
				{ "ESteamPersonaChange::Nickname", (int64)ESteamPersonaChange::Nickname },
				{ "ESteamPersonaChange::SteamLevel", (int64)ESteamPersonaChange::SteamLevel },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Avatar.Name", "ESteamPersonaChange::Avatar" },
				{ "BlueprintType", "true" },
				{ "ComeOnline.Name", "ESteamPersonaChange::ComeOnline" },
				{ "FacebookInfo.Name", "ESteamPersonaChange::FacebookInfo" },
				{ "GamePlayed.Name", "ESteamPersonaChange::GamePlayed" },
				{ "GameServer.Name", "ESteamPersonaChange::GameServer" },
				{ "GoneOffline.Name", "ESteamPersonaChange::GoneOffline" },
				{ "JoinedSource.Name", "ESteamPersonaChange::JoinedSource" },
				{ "LeftSource.Name", "ESteamPersonaChange::LeftSource" },
				{ "ModuleRelativePath", "Public/ESteamPersonaChange.h" },
				{ "Name.Name", "ESteamPersonaChange::Name" },
				{ "NameFirstSet.Name", "ESteamPersonaChange::NameFirstSet" },
				{ "Nickname.Name", "ESteamPersonaChange::Nickname" },
				{ "RelationshipChanged.Name", "ESteamPersonaChange::RelationshipChanged" },
				{ "Status.Name", "ESteamPersonaChange::Status" },
				{ "SteamLevel.Name", "ESteamPersonaChange::SteamLevel" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SteamCore,
				nullptr,
				"ESteamPersonaChange",
				"ESteamPersonaChange",
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
