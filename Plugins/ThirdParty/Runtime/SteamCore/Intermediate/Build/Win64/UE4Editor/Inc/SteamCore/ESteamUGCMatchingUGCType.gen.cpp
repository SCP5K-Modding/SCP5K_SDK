// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/ESteamUGCMatchingUGCType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESteamUGCMatchingUGCType() {}
// Cross Module References
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamUGCMatchingUGCType();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
// End Cross Module References
	static UEnum* ESteamUGCMatchingUGCType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SteamCore_ESteamUGCMatchingUGCType, Z_Construct_UPackage__Script_SteamCore(), TEXT("ESteamUGCMatchingUGCType"));
		}
		return Singleton;
	}
	template<> STEAMCORE_API UEnum* StaticEnum<ESteamUGCMatchingUGCType>()
	{
		return ESteamUGCMatchingUGCType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESteamUGCMatchingUGCType(ESteamUGCMatchingUGCType_StaticEnum, TEXT("/Script/SteamCore"), TEXT("ESteamUGCMatchingUGCType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SteamCore_ESteamUGCMatchingUGCType_Hash() { return 4289780144U; }
	UEnum* Z_Construct_UEnum_SteamCore_ESteamUGCMatchingUGCType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESteamUGCMatchingUGCType"), 0, Get_Z_Construct_UEnum_SteamCore_ESteamUGCMatchingUGCType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESteamUGCMatchingUGCType::Items", (int64)ESteamUGCMatchingUGCType::Items },
				{ "ESteamUGCMatchingUGCType::Items_Mtx", (int64)ESteamUGCMatchingUGCType::Items_Mtx },
				{ "ESteamUGCMatchingUGCType::Items_ReadyToUse", (int64)ESteamUGCMatchingUGCType::Items_ReadyToUse },
				{ "ESteamUGCMatchingUGCType::Collections", (int64)ESteamUGCMatchingUGCType::Collections },
				{ "ESteamUGCMatchingUGCType::Artwork", (int64)ESteamUGCMatchingUGCType::Artwork },
				{ "ESteamUGCMatchingUGCType::Videos", (int64)ESteamUGCMatchingUGCType::Videos },
				{ "ESteamUGCMatchingUGCType::Screenshots", (int64)ESteamUGCMatchingUGCType::Screenshots },
				{ "ESteamUGCMatchingUGCType::AllGuides", (int64)ESteamUGCMatchingUGCType::AllGuides },
				{ "ESteamUGCMatchingUGCType::WebGuides", (int64)ESteamUGCMatchingUGCType::WebGuides },
				{ "ESteamUGCMatchingUGCType::IntegratedGuides", (int64)ESteamUGCMatchingUGCType::IntegratedGuides },
				{ "ESteamUGCMatchingUGCType::UsableInGame", (int64)ESteamUGCMatchingUGCType::UsableInGame },
				{ "ESteamUGCMatchingUGCType::ControllerBindings", (int64)ESteamUGCMatchingUGCType::ControllerBindings },
				{ "ESteamUGCMatchingUGCType::GameManagedItems", (int64)ESteamUGCMatchingUGCType::GameManagedItems },
				{ "ESteamUGCMatchingUGCType::All", (int64)ESteamUGCMatchingUGCType::All },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "All.Name", "ESteamUGCMatchingUGCType::All" },
				{ "AllGuides.Name", "ESteamUGCMatchingUGCType::AllGuides" },
				{ "Artwork.Name", "ESteamUGCMatchingUGCType::Artwork" },
				{ "BlueprintType", "true" },
				{ "Collections.Name", "ESteamUGCMatchingUGCType::Collections" },
				{ "ControllerBindings.Name", "ESteamUGCMatchingUGCType::ControllerBindings" },
				{ "GameManagedItems.Name", "ESteamUGCMatchingUGCType::GameManagedItems" },
				{ "IntegratedGuides.Name", "ESteamUGCMatchingUGCType::IntegratedGuides" },
				{ "Items.Name", "ESteamUGCMatchingUGCType::Items" },
				{ "Items_Mtx.Name", "ESteamUGCMatchingUGCType::Items_Mtx" },
				{ "Items_ReadyToUse.Name", "ESteamUGCMatchingUGCType::Items_ReadyToUse" },
				{ "ModuleRelativePath", "Public/ESteamUGCMatchingUGCType.h" },
				{ "Screenshots.Name", "ESteamUGCMatchingUGCType::Screenshots" },
				{ "UsableInGame.Name", "ESteamUGCMatchingUGCType::UsableInGame" },
				{ "Videos.Name", "ESteamUGCMatchingUGCType::Videos" },
				{ "WebGuides.Name", "ESteamUGCMatchingUGCType::WebGuides" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SteamCore,
				nullptr,
				"ESteamUGCMatchingUGCType",
				"ESteamUGCMatchingUGCType",
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
