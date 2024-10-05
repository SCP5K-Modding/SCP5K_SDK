// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AISentience/Public/ESAIBehaviors_Combat.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESAIBehaviors_Combat() {}
// Cross Module References
	AISENTIENCE_API UEnum* Z_Construct_UEnum_AISentience_ESAIBehaviors_Combat();
	UPackage* Z_Construct_UPackage__Script_AISentience();
// End Cross Module References
	static UEnum* ESAIBehaviors_Combat_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AISentience_ESAIBehaviors_Combat, Z_Construct_UPackage__Script_AISentience(), TEXT("ESAIBehaviors_Combat"));
		}
		return Singleton;
	}
	template<> AISENTIENCE_API UEnum* StaticEnum<ESAIBehaviors_Combat::Type>()
	{
		return ESAIBehaviors_Combat_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESAIBehaviors_Combat(ESAIBehaviors_Combat_StaticEnum, TEXT("/Script/AISentience"), TEXT("ESAIBehaviors_Combat"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AISentience_ESAIBehaviors_Combat_Hash() { return 1362747011U; }
	UEnum* Z_Construct_UEnum_AISentience_ESAIBehaviors_Combat()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AISentience();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESAIBehaviors_Combat"), 0, Get_Z_Construct_UEnum_AISentience_ESAIBehaviors_Combat_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESAIBehaviors_Combat::BE_Default", (int64)ESAIBehaviors_Combat::BE_Default },
				{ "ESAIBehaviors_Combat::BE_Aggressive", (int64)ESAIBehaviors_Combat::BE_Aggressive },
				{ "ESAIBehaviors_Combat::BE_Defensive", (int64)ESAIBehaviors_Combat::BE_Defensive },
				{ "ESAIBehaviors_Combat::BE_Cowardly", (int64)ESAIBehaviors_Combat::BE_Cowardly },
				{ "ESAIBehaviors_Combat::CH_Max", (int64)ESAIBehaviors_Combat::CH_Max },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BE_Aggressive.Name", "ESAIBehaviors_Combat::BE_Aggressive" },
				{ "BE_Cowardly.Name", "ESAIBehaviors_Combat::BE_Cowardly" },
				{ "BE_Default.Name", "ESAIBehaviors_Combat::BE_Default" },
				{ "BE_Defensive.Name", "ESAIBehaviors_Combat::BE_Defensive" },
				{ "BlueprintType", "true" },
				{ "CH_Max.Hidden", "" },
				{ "CH_Max.Name", "ESAIBehaviors_Combat::CH_Max" },
				{ "ModuleRelativePath", "Public/ESAIBehaviors_Combat.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AISentience,
				nullptr,
				"ESAIBehaviors_Combat",
				"ESAIBehaviors_Combat::Type",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Namespaced,
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
