// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameUtilities/Public/EAudioSetting.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEAudioSetting() {}
// Cross Module References
	GAMEUTILITIES_API UEnum* Z_Construct_UEnum_GameUtilities_EAudioSetting();
	UPackage* Z_Construct_UPackage__Script_GameUtilities();
// End Cross Module References
	static UEnum* EAudioSetting_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_GameUtilities_EAudioSetting, Z_Construct_UPackage__Script_GameUtilities(), TEXT("EAudioSetting"));
		}
		return Singleton;
	}
	template<> GAMEUTILITIES_API UEnum* StaticEnum<EAudioSetting>()
	{
		return EAudioSetting_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAudioSetting(EAudioSetting_StaticEnum, TEXT("/Script/GameUtilities"), TEXT("EAudioSetting"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_GameUtilities_EAudioSetting_Hash() { return 3600180014U; }
	UEnum* Z_Construct_UEnum_GameUtilities_EAudioSetting()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_GameUtilities();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAudioSetting"), 0, Get_Z_Construct_UEnum_GameUtilities_EAudioSetting_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAudioSetting::Master", (int64)EAudioSetting::Master },
				{ "EAudioSetting::Music", (int64)EAudioSetting::Music },
				{ "EAudioSetting::SFX", (int64)EAudioSetting::SFX },
				{ "EAudioSetting::Voice", (int64)EAudioSetting::Voice },
				{ "EAudioSetting::UI", (int64)EAudioSetting::UI },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Master.Name", "EAudioSetting::Master" },
				{ "ModuleRelativePath", "Public/EAudioSetting.h" },
				{ "Music.Name", "EAudioSetting::Music" },
				{ "SFX.Name", "EAudioSetting::SFX" },
				{ "UI.Name", "EAudioSetting::UI" },
				{ "Voice.Name", "EAudioSetting::Voice" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_GameUtilities,
				nullptr,
				"EAudioSetting",
				"EAudioSetting",
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
