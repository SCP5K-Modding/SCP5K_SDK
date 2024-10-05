// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/ESteamItemPreviewType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESteamItemPreviewType() {}
// Cross Module References
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamItemPreviewType();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
// End Cross Module References
	static UEnum* ESteamItemPreviewType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SteamCore_ESteamItemPreviewType, Z_Construct_UPackage__Script_SteamCore(), TEXT("ESteamItemPreviewType"));
		}
		return Singleton;
	}
	template<> STEAMCORE_API UEnum* StaticEnum<ESteamItemPreviewType>()
	{
		return ESteamItemPreviewType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESteamItemPreviewType(ESteamItemPreviewType_StaticEnum, TEXT("/Script/SteamCore"), TEXT("ESteamItemPreviewType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SteamCore_ESteamItemPreviewType_Hash() { return 1881523063U; }
	UEnum* Z_Construct_UEnum_SteamCore_ESteamItemPreviewType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESteamItemPreviewType"), 0, Get_Z_Construct_UEnum_SteamCore_ESteamItemPreviewType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESteamItemPreviewType::Image", (int64)ESteamItemPreviewType::Image },
				{ "ESteamItemPreviewType::YouTubeVideo", (int64)ESteamItemPreviewType::YouTubeVideo },
				{ "ESteamItemPreviewType::Sketchfab", (int64)ESteamItemPreviewType::Sketchfab },
				{ "ESteamItemPreviewType::EnvironmentMap_HorizontalCross", (int64)ESteamItemPreviewType::EnvironmentMap_HorizontalCross },
				{ "ESteamItemPreviewType::EnvironmentMap_LatLong", (int64)ESteamItemPreviewType::EnvironmentMap_LatLong },
				{ "ESteamItemPreviewType::ReservedMax", (int64)ESteamItemPreviewType::ReservedMax },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "EnvironmentMap_HorizontalCross.Name", "ESteamItemPreviewType::EnvironmentMap_HorizontalCross" },
				{ "EnvironmentMap_LatLong.Name", "ESteamItemPreviewType::EnvironmentMap_LatLong" },
				{ "Image.Name", "ESteamItemPreviewType::Image" },
				{ "ModuleRelativePath", "Public/ESteamItemPreviewType.h" },
				{ "ReservedMax.Name", "ESteamItemPreviewType::ReservedMax" },
				{ "Sketchfab.Name", "ESteamItemPreviewType::Sketchfab" },
				{ "YouTubeVideo.Name", "ESteamItemPreviewType::YouTubeVideo" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SteamCore,
				nullptr,
				"ESteamItemPreviewType",
				"ESteamItemPreviewType",
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
