// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/ESteamVoiceResult.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESteamVoiceResult() {}
// Cross Module References
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamVoiceResult();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
// End Cross Module References
	static UEnum* ESteamVoiceResult_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SteamCore_ESteamVoiceResult, Z_Construct_UPackage__Script_SteamCore(), TEXT("ESteamVoiceResult"));
		}
		return Singleton;
	}
	template<> STEAMCORE_API UEnum* StaticEnum<ESteamVoiceResult>()
	{
		return ESteamVoiceResult_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESteamVoiceResult(ESteamVoiceResult_StaticEnum, TEXT("/Script/SteamCore"), TEXT("ESteamVoiceResult"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SteamCore_ESteamVoiceResult_Hash() { return 2166562078U; }
	UEnum* Z_Construct_UEnum_SteamCore_ESteamVoiceResult()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESteamVoiceResult"), 0, Get_Z_Construct_UEnum_SteamCore_ESteamVoiceResult_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESteamVoiceResult::OK", (int64)ESteamVoiceResult::OK },
				{ "ESteamVoiceResult::NotInitialized", (int64)ESteamVoiceResult::NotInitialized },
				{ "ESteamVoiceResult::NotRecording", (int64)ESteamVoiceResult::NotRecording },
				{ "ESteamVoiceResult::NoData", (int64)ESteamVoiceResult::NoData },
				{ "ESteamVoiceResult::BufferTooSmall", (int64)ESteamVoiceResult::BufferTooSmall },
				{ "ESteamVoiceResult::DataCorrupted", (int64)ESteamVoiceResult::DataCorrupted },
				{ "ESteamVoiceResult::Restricted", (int64)ESteamVoiceResult::Restricted },
				{ "ESteamVoiceResult::UnsupportedCodec", (int64)ESteamVoiceResult::UnsupportedCodec },
				{ "ESteamVoiceResult::ReceiverOutOfDate", (int64)ESteamVoiceResult::ReceiverOutOfDate },
				{ "ESteamVoiceResult::ReceiverDidNotAnswer", (int64)ESteamVoiceResult::ReceiverDidNotAnswer },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "BufferTooSmall.Name", "ESteamVoiceResult::BufferTooSmall" },
				{ "DataCorrupted.Name", "ESteamVoiceResult::DataCorrupted" },
				{ "ModuleRelativePath", "Public/ESteamVoiceResult.h" },
				{ "NoData.Name", "ESteamVoiceResult::NoData" },
				{ "NotInitialized.Name", "ESteamVoiceResult::NotInitialized" },
				{ "NotRecording.Name", "ESteamVoiceResult::NotRecording" },
				{ "OK.Name", "ESteamVoiceResult::OK" },
				{ "ReceiverDidNotAnswer.Name", "ESteamVoiceResult::ReceiverDidNotAnswer" },
				{ "ReceiverOutOfDate.Name", "ESteamVoiceResult::ReceiverOutOfDate" },
				{ "Restricted.Name", "ESteamVoiceResult::Restricted" },
				{ "UnsupportedCodec.Name", "ESteamVoiceResult::UnsupportedCodec" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SteamCore,
				nullptr,
				"ESteamVoiceResult",
				"ESteamVoiceResult",
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
