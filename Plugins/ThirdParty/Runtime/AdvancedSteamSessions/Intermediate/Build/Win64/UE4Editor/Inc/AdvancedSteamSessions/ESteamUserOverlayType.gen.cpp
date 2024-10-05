// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvancedSteamSessions/Public/ESteamUserOverlayType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESteamUserOverlayType() {}
// Cross Module References
	ADVANCEDSTEAMSESSIONS_API UEnum* Z_Construct_UEnum_AdvancedSteamSessions_ESteamUserOverlayType();
	UPackage* Z_Construct_UPackage__Script_AdvancedSteamSessions();
// End Cross Module References
	static UEnum* ESteamUserOverlayType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AdvancedSteamSessions_ESteamUserOverlayType, Z_Construct_UPackage__Script_AdvancedSteamSessions(), TEXT("ESteamUserOverlayType"));
		}
		return Singleton;
	}
	template<> ADVANCEDSTEAMSESSIONS_API UEnum* StaticEnum<ESteamUserOverlayType>()
	{
		return ESteamUserOverlayType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESteamUserOverlayType(ESteamUserOverlayType_StaticEnum, TEXT("/Script/AdvancedSteamSessions"), TEXT("ESteamUserOverlayType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AdvancedSteamSessions_ESteamUserOverlayType_Hash() { return 3315997171U; }
	UEnum* Z_Construct_UEnum_AdvancedSteamSessions_ESteamUserOverlayType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AdvancedSteamSessions();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESteamUserOverlayType"), 0, Get_Z_Construct_UEnum_AdvancedSteamSessions_ESteamUserOverlayType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESteamUserOverlayType::steamid", (int64)ESteamUserOverlayType::steamid },
				{ "ESteamUserOverlayType::chat", (int64)ESteamUserOverlayType::chat },
				{ "ESteamUserOverlayType::jointrade", (int64)ESteamUserOverlayType::jointrade },
				{ "ESteamUserOverlayType::stats", (int64)ESteamUserOverlayType::stats },
				{ "ESteamUserOverlayType::achievements", (int64)ESteamUserOverlayType::achievements },
				{ "ESteamUserOverlayType::friendadd", (int64)ESteamUserOverlayType::friendadd },
				{ "ESteamUserOverlayType::friendremove", (int64)ESteamUserOverlayType::friendremove },
				{ "ESteamUserOverlayType::friendrequestaccept", (int64)ESteamUserOverlayType::friendrequestaccept },
				{ "ESteamUserOverlayType::friendrequestignore", (int64)ESteamUserOverlayType::friendrequestignore },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "achievements.Name", "ESteamUserOverlayType::achievements" },
				{ "BlueprintType", "true" },
				{ "chat.Name", "ESteamUserOverlayType::chat" },
				{ "friendadd.Name", "ESteamUserOverlayType::friendadd" },
				{ "friendremove.Name", "ESteamUserOverlayType::friendremove" },
				{ "friendrequestaccept.Name", "ESteamUserOverlayType::friendrequestaccept" },
				{ "friendrequestignore.Name", "ESteamUserOverlayType::friendrequestignore" },
				{ "jointrade.Name", "ESteamUserOverlayType::jointrade" },
				{ "ModuleRelativePath", "Public/ESteamUserOverlayType.h" },
				{ "stats.Name", "ESteamUserOverlayType::stats" },
				{ "steamid.Name", "ESteamUserOverlayType::steamid" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AdvancedSteamSessions,
				nullptr,
				"ESteamUserOverlayType",
				"ESteamUserOverlayType",
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
