// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/ESteamAudioPlaybackStatus.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESteamAudioPlaybackStatus() {}
// Cross Module References
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamAudioPlaybackStatus();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
// End Cross Module References
	static UEnum* ESteamAudioPlaybackStatus_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SteamCore_ESteamAudioPlaybackStatus, Z_Construct_UPackage__Script_SteamCore(), TEXT("ESteamAudioPlaybackStatus"));
		}
		return Singleton;
	}
	template<> STEAMCORE_API UEnum* StaticEnum<ESteamAudioPlaybackStatus>()
	{
		return ESteamAudioPlaybackStatus_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESteamAudioPlaybackStatus(ESteamAudioPlaybackStatus_StaticEnum, TEXT("/Script/SteamCore"), TEXT("ESteamAudioPlaybackStatus"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SteamCore_ESteamAudioPlaybackStatus_Hash() { return 3872743477U; }
	UEnum* Z_Construct_UEnum_SteamCore_ESteamAudioPlaybackStatus()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESteamAudioPlaybackStatus"), 0, Get_Z_Construct_UEnum_SteamCore_ESteamAudioPlaybackStatus_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESteamAudioPlaybackStatus::Undefined", (int64)ESteamAudioPlaybackStatus::Undefined },
				{ "ESteamAudioPlaybackStatus::Playing", (int64)ESteamAudioPlaybackStatus::Playing },
				{ "ESteamAudioPlaybackStatus::Paused", (int64)ESteamAudioPlaybackStatus::Paused },
				{ "ESteamAudioPlaybackStatus::Idle", (int64)ESteamAudioPlaybackStatus::Idle },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Idle.Name", "ESteamAudioPlaybackStatus::Idle" },
				{ "ModuleRelativePath", "Public/ESteamAudioPlaybackStatus.h" },
				{ "Paused.Name", "ESteamAudioPlaybackStatus::Paused" },
				{ "Playing.Name", "ESteamAudioPlaybackStatus::Playing" },
				{ "Undefined.Name", "ESteamAudioPlaybackStatus::Undefined" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SteamCore,
				nullptr,
				"ESteamAudioPlaybackStatus",
				"ESteamAudioPlaybackStatus",
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
