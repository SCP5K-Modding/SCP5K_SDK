// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/ESteamOverlayToStoreFlag.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESteamOverlayToStoreFlag() {}
// Cross Module References
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamOverlayToStoreFlag();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
// End Cross Module References
	static UEnum* ESteamOverlayToStoreFlag_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SteamCore_ESteamOverlayToStoreFlag, Z_Construct_UPackage__Script_SteamCore(), TEXT("ESteamOverlayToStoreFlag"));
		}
		return Singleton;
	}
	template<> STEAMCORE_API UEnum* StaticEnum<ESteamOverlayToStoreFlag>()
	{
		return ESteamOverlayToStoreFlag_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESteamOverlayToStoreFlag(ESteamOverlayToStoreFlag_StaticEnum, TEXT("/Script/SteamCore"), TEXT("ESteamOverlayToStoreFlag"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SteamCore_ESteamOverlayToStoreFlag_Hash() { return 1582076523U; }
	UEnum* Z_Construct_UEnum_SteamCore_ESteamOverlayToStoreFlag()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESteamOverlayToStoreFlag"), 0, Get_Z_Construct_UEnum_SteamCore_ESteamOverlayToStoreFlag_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESteamOverlayToStoreFlag::None", (int64)ESteamOverlayToStoreFlag::None },
				{ "ESteamOverlayToStoreFlag::AddToCart", (int64)ESteamOverlayToStoreFlag::AddToCart },
				{ "ESteamOverlayToStoreFlag::AddToCartAndShow", (int64)ESteamOverlayToStoreFlag::AddToCartAndShow },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AddToCart.Name", "ESteamOverlayToStoreFlag::AddToCart" },
				{ "AddToCartAndShow.Name", "ESteamOverlayToStoreFlag::AddToCartAndShow" },
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/ESteamOverlayToStoreFlag.h" },
				{ "None.Name", "ESteamOverlayToStoreFlag::None" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SteamCore,
				nullptr,
				"ESteamOverlayToStoreFlag",
				"ESteamOverlayToStoreFlag",
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
