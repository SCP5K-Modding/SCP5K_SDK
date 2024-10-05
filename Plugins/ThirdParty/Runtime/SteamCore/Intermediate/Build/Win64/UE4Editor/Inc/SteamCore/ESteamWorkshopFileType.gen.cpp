// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/ESteamWorkshopFileType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESteamWorkshopFileType() {}
// Cross Module References
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamWorkshopFileType();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
// End Cross Module References
	static UEnum* ESteamWorkshopFileType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SteamCore_ESteamWorkshopFileType, Z_Construct_UPackage__Script_SteamCore(), TEXT("ESteamWorkshopFileType"));
		}
		return Singleton;
	}
	template<> STEAMCORE_API UEnum* StaticEnum<ESteamWorkshopFileType>()
	{
		return ESteamWorkshopFileType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESteamWorkshopFileType(ESteamWorkshopFileType_StaticEnum, TEXT("/Script/SteamCore"), TEXT("ESteamWorkshopFileType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SteamCore_ESteamWorkshopFileType_Hash() { return 1729386659U; }
	UEnum* Z_Construct_UEnum_SteamCore_ESteamWorkshopFileType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESteamWorkshopFileType"), 0, Get_Z_Construct_UEnum_SteamCore_ESteamWorkshopFileType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESteamWorkshopFileType::First", (int64)ESteamWorkshopFileType::First },
				{ "ESteamWorkshopFileType::Community", (int64)ESteamWorkshopFileType::Community },
				{ "ESteamWorkshopFileType::Microtransaction", (int64)ESteamWorkshopFileType::Microtransaction },
				{ "ESteamWorkshopFileType::Collection", (int64)ESteamWorkshopFileType::Collection },
				{ "ESteamWorkshopFileType::Art", (int64)ESteamWorkshopFileType::Art },
				{ "ESteamWorkshopFileType::Video", (int64)ESteamWorkshopFileType::Video },
				{ "ESteamWorkshopFileType::Screenshot", (int64)ESteamWorkshopFileType::Screenshot },
				{ "ESteamWorkshopFileType::Game", (int64)ESteamWorkshopFileType::Game },
				{ "ESteamWorkshopFileType::Software", (int64)ESteamWorkshopFileType::Software },
				{ "ESteamWorkshopFileType::Concept", (int64)ESteamWorkshopFileType::Concept },
				{ "ESteamWorkshopFileType::WebGuide", (int64)ESteamWorkshopFileType::WebGuide },
				{ "ESteamWorkshopFileType::IntegratedGuide", (int64)ESteamWorkshopFileType::IntegratedGuide },
				{ "ESteamWorkshopFileType::Merch", (int64)ESteamWorkshopFileType::Merch },
				{ "ESteamWorkshopFileType::ControllerBinding", (int64)ESteamWorkshopFileType::ControllerBinding },
				{ "ESteamWorkshopFileType::SteamworksAccessInvite", (int64)ESteamWorkshopFileType::SteamworksAccessInvite },
				{ "ESteamWorkshopFileType::SteamVideo", (int64)ESteamWorkshopFileType::SteamVideo },
				{ "ESteamWorkshopFileType::GameManagedItem", (int64)ESteamWorkshopFileType::GameManagedItem },
				{ "ESteamWorkshopFileType::Max", (int64)ESteamWorkshopFileType::Max },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Art.Name", "ESteamWorkshopFileType::Art" },
				{ "BlueprintType", "true" },
				{ "Collection.Name", "ESteamWorkshopFileType::Collection" },
				{ "Community.Name", "ESteamWorkshopFileType::Community" },
				{ "Concept.Name", "ESteamWorkshopFileType::Concept" },
				{ "ControllerBinding.Name", "ESteamWorkshopFileType::ControllerBinding" },
				{ "First.Name", "ESteamWorkshopFileType::First" },
				{ "Game.Name", "ESteamWorkshopFileType::Game" },
				{ "GameManagedItem.Name", "ESteamWorkshopFileType::GameManagedItem" },
				{ "IntegratedGuide.Name", "ESteamWorkshopFileType::IntegratedGuide" },
				{ "Max.Name", "ESteamWorkshopFileType::Max" },
				{ "Merch.Name", "ESteamWorkshopFileType::Merch" },
				{ "Microtransaction.Name", "ESteamWorkshopFileType::Microtransaction" },
				{ "ModuleRelativePath", "Public/ESteamWorkshopFileType.h" },
				{ "Screenshot.Name", "ESteamWorkshopFileType::Screenshot" },
				{ "Software.Name", "ESteamWorkshopFileType::Software" },
				{ "SteamVideo.Name", "ESteamWorkshopFileType::SteamVideo" },
				{ "SteamworksAccessInvite.Name", "ESteamWorkshopFileType::SteamworksAccessInvite" },
				{ "Video.Name", "ESteamWorkshopFileType::Video" },
				{ "WebGuide.Name", "ESteamWorkshopFileType::WebGuide" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SteamCore,
				nullptr,
				"ESteamWorkshopFileType",
				"ESteamWorkshopFileType",
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
