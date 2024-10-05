// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/ESteamVRScreenshotType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESteamVRScreenshotType() {}
// Cross Module References
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamVRScreenshotType();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
// End Cross Module References
	static UEnum* ESteamVRScreenshotType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SteamCore_ESteamVRScreenshotType, Z_Construct_UPackage__Script_SteamCore(), TEXT("ESteamVRScreenshotType"));
		}
		return Singleton;
	}
	template<> STEAMCORE_API UEnum* StaticEnum<ESteamVRScreenshotType>()
	{
		return ESteamVRScreenshotType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESteamVRScreenshotType(ESteamVRScreenshotType_StaticEnum, TEXT("/Script/SteamCore"), TEXT("ESteamVRScreenshotType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SteamCore_ESteamVRScreenshotType_Hash() { return 378426552U; }
	UEnum* Z_Construct_UEnum_SteamCore_ESteamVRScreenshotType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESteamVRScreenshotType"), 0, Get_Z_Construct_UEnum_SteamCore_ESteamVRScreenshotType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESteamVRScreenshotType::None", (int64)ESteamVRScreenshotType::None },
				{ "ESteamVRScreenshotType::Mono", (int64)ESteamVRScreenshotType::Mono },
				{ "ESteamVRScreenshotType::Stereo", (int64)ESteamVRScreenshotType::Stereo },
				{ "ESteamVRScreenshotType::MonoCubemap", (int64)ESteamVRScreenshotType::MonoCubemap },
				{ "ESteamVRScreenshotType::MonoPanorama", (int64)ESteamVRScreenshotType::MonoPanorama },
				{ "ESteamVRScreenshotType::StereoPanorama", (int64)ESteamVRScreenshotType::StereoPanorama },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/ESteamVRScreenshotType.h" },
				{ "Mono.Name", "ESteamVRScreenshotType::Mono" },
				{ "MonoCubemap.Name", "ESteamVRScreenshotType::MonoCubemap" },
				{ "MonoPanorama.Name", "ESteamVRScreenshotType::MonoPanorama" },
				{ "None.Name", "ESteamVRScreenshotType::None" },
				{ "Stereo.Name", "ESteamVRScreenshotType::Stereo" },
				{ "StereoPanorama.Name", "ESteamVRScreenshotType::StereoPanorama" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SteamCore,
				nullptr,
				"ESteamVRScreenshotType",
				"ESteamVRScreenshotType",
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
