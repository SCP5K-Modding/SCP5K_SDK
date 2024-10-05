// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AISentience/Public/ESAITeam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESAITeam() {}
// Cross Module References
	AISENTIENCE_API UEnum* Z_Construct_UEnum_AISentience_ESAITeam();
	UPackage* Z_Construct_UPackage__Script_AISentience();
// End Cross Module References
	static UEnum* ESAITeam_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AISentience_ESAITeam, Z_Construct_UPackage__Script_AISentience(), TEXT("ESAITeam"));
		}
		return Singleton;
	}
	template<> AISENTIENCE_API UEnum* StaticEnum<ESAITeam>()
	{
		return ESAITeam_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESAITeam(ESAITeam_StaticEnum, TEXT("/Script/AISentience"), TEXT("ESAITeam"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AISentience_ESAITeam_Hash() { return 2905731534U; }
	UEnum* Z_Construct_UEnum_AISentience_ESAITeam()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AISentience();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESAITeam"), 0, Get_Z_Construct_UEnum_AISentience_ESAITeam_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESAITeam::NoTeam", (int64)ESAITeam::NoTeam },
				{ "ESAITeam::PlayerFoundation", (int64)ESAITeam::PlayerFoundation },
				{ "ESAITeam::PlayerFaultline", (int64)ESAITeam::PlayerFaultline },
				{ "ESAITeam::PlayerDClass", (int64)ESAITeam::PlayerDClass },
				{ "ESAITeam::Faultline", (int64)ESAITeam::Faultline },
				{ "ESAITeam::DClass", (int64)ESAITeam::DClass },
				{ "ESAITeam::Foundation", (int64)ESAITeam::Foundation },
				{ "ESAITeam::SCP", (int64)ESAITeam::SCP },
				{ "ESAITeam::FoundationCivillian", (int64)ESAITeam::FoundationCivillian },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "DClass.Name", "ESAITeam::DClass" },
				{ "Faultline.Name", "ESAITeam::Faultline" },
				{ "Foundation.Name", "ESAITeam::Foundation" },
				{ "FoundationCivillian.Name", "ESAITeam::FoundationCivillian" },
				{ "ModuleRelativePath", "Public/ESAITeam.h" },
				{ "NoTeam.Name", "ESAITeam::NoTeam" },
				{ "PlayerDClass.Name", "ESAITeam::PlayerDClass" },
				{ "PlayerFaultline.Name", "ESAITeam::PlayerFaultline" },
				{ "PlayerFoundation.Name", "ESAITeam::PlayerFoundation" },
				{ "SCP.Name", "ESAITeam::SCP" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AISentience,
				nullptr,
				"ESAITeam",
				"ESAITeam",
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
