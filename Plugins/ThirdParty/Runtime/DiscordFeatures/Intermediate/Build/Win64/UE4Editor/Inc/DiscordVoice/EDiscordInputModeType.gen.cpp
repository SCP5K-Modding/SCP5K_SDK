// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DiscordVoice/Public/EDiscordInputModeType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEDiscordInputModeType() {}
// Cross Module References
	DISCORDVOICE_API UEnum* Z_Construct_UEnum_DiscordVoice_EDiscordInputModeType();
	UPackage* Z_Construct_UPackage__Script_DiscordVoice();
// End Cross Module References
	static UEnum* EDiscordInputModeType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DiscordVoice_EDiscordInputModeType, Z_Construct_UPackage__Script_DiscordVoice(), TEXT("EDiscordInputModeType"));
		}
		return Singleton;
	}
	template<> DISCORDVOICE_API UEnum* StaticEnum<EDiscordInputModeType>()
	{
		return EDiscordInputModeType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EDiscordInputModeType(EDiscordInputModeType_StaticEnum, TEXT("/Script/DiscordVoice"), TEXT("EDiscordInputModeType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DiscordVoice_EDiscordInputModeType_Hash() { return 2653458947U; }
	UEnum* Z_Construct_UEnum_DiscordVoice_EDiscordInputModeType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DiscordVoice();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EDiscordInputModeType"), 0, Get_Z_Construct_UEnum_DiscordVoice_EDiscordInputModeType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EDiscordInputModeType::VoiceActivity", (int64)EDiscordInputModeType::VoiceActivity },
				{ "EDiscordInputModeType::PushToTalk", (int64)EDiscordInputModeType::PushToTalk },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/EDiscordInputModeType.h" },
				{ "PushToTalk.Name", "EDiscordInputModeType::PushToTalk" },
				{ "VoiceActivity.Name", "EDiscordInputModeType::VoiceActivity" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DiscordVoice,
				nullptr,
				"EDiscordInputModeType",
				"EDiscordInputModeType",
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
