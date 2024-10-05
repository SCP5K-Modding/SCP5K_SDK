// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/ESteamActivateGameOverlayToWebPageMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESteamActivateGameOverlayToWebPageMode() {}
// Cross Module References
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamActivateGameOverlayToWebPageMode();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
// End Cross Module References
	static UEnum* ESteamActivateGameOverlayToWebPageMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SteamCore_ESteamActivateGameOverlayToWebPageMode, Z_Construct_UPackage__Script_SteamCore(), TEXT("ESteamActivateGameOverlayToWebPageMode"));
		}
		return Singleton;
	}
	template<> STEAMCORE_API UEnum* StaticEnum<ESteamActivateGameOverlayToWebPageMode>()
	{
		return ESteamActivateGameOverlayToWebPageMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESteamActivateGameOverlayToWebPageMode(ESteamActivateGameOverlayToWebPageMode_StaticEnum, TEXT("/Script/SteamCore"), TEXT("ESteamActivateGameOverlayToWebPageMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SteamCore_ESteamActivateGameOverlayToWebPageMode_Hash() { return 3840089693U; }
	UEnum* Z_Construct_UEnum_SteamCore_ESteamActivateGameOverlayToWebPageMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESteamActivateGameOverlayToWebPageMode"), 0, Get_Z_Construct_UEnum_SteamCore_ESteamActivateGameOverlayToWebPageMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESteamActivateGameOverlayToWebPageMode::Default", (int64)ESteamActivateGameOverlayToWebPageMode::Default },
				{ "ESteamActivateGameOverlayToWebPageMode::Modal", (int64)ESteamActivateGameOverlayToWebPageMode::Modal },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Default.Name", "ESteamActivateGameOverlayToWebPageMode::Default" },
				{ "Modal.Name", "ESteamActivateGameOverlayToWebPageMode::Modal" },
				{ "ModuleRelativePath", "Public/ESteamActivateGameOverlayToWebPageMode.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SteamCore,
				nullptr,
				"ESteamActivateGameOverlayToWebPageMode",
				"ESteamActivateGameOverlayToWebPageMode",
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
