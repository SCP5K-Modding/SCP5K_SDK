// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/ESteamNotificationPosition.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESteamNotificationPosition() {}
// Cross Module References
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamNotificationPosition();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
// End Cross Module References
	static UEnum* ESteamNotificationPosition_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SteamCore_ESteamNotificationPosition, Z_Construct_UPackage__Script_SteamCore(), TEXT("ESteamNotificationPosition"));
		}
		return Singleton;
	}
	template<> STEAMCORE_API UEnum* StaticEnum<ESteamNotificationPosition>()
	{
		return ESteamNotificationPosition_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESteamNotificationPosition(ESteamNotificationPosition_StaticEnum, TEXT("/Script/SteamCore"), TEXT("ESteamNotificationPosition"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SteamCore_ESteamNotificationPosition_Hash() { return 1993904225U; }
	UEnum* Z_Construct_UEnum_SteamCore_ESteamNotificationPosition()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESteamNotificationPosition"), 0, Get_Z_Construct_UEnum_SteamCore_ESteamNotificationPosition_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESteamNotificationPosition::TopLeft", (int64)ESteamNotificationPosition::TopLeft },
				{ "ESteamNotificationPosition::TopRight", (int64)ESteamNotificationPosition::TopRight },
				{ "ESteamNotificationPosition::BottomLeft", (int64)ESteamNotificationPosition::BottomLeft },
				{ "ESteamNotificationPosition::BottomRight", (int64)ESteamNotificationPosition::BottomRight },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "BottomLeft.Name", "ESteamNotificationPosition::BottomLeft" },
				{ "BottomRight.Name", "ESteamNotificationPosition::BottomRight" },
				{ "ModuleRelativePath", "Public/ESteamNotificationPosition.h" },
				{ "TopLeft.Name", "ESteamNotificationPosition::TopLeft" },
				{ "TopRight.Name", "ESteamNotificationPosition::TopRight" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SteamCore,
				nullptr,
				"ESteamNotificationPosition",
				"ESteamNotificationPosition",
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
