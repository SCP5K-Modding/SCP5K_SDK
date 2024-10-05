// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AISentience/Public/ESAIState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESAIState() {}
// Cross Module References
	AISENTIENCE_API UEnum* Z_Construct_UEnum_AISentience_ESAIState();
	UPackage* Z_Construct_UPackage__Script_AISentience();
// End Cross Module References
	static UEnum* ESAIState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AISentience_ESAIState, Z_Construct_UPackage__Script_AISentience(), TEXT("ESAIState"));
		}
		return Singleton;
	}
	template<> AISENTIENCE_API UEnum* StaticEnum<ESAIState>()
	{
		return ESAIState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESAIState(ESAIState_StaticEnum, TEXT("/Script/AISentience"), TEXT("ESAIState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AISentience_ESAIState_Hash() { return 946624292U; }
	UEnum* Z_Construct_UEnum_AISentience_ESAIState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AISentience();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESAIState"), 0, Get_Z_Construct_UEnum_AISentience_ESAIState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESAIState::None", (int64)ESAIState::None },
				{ "ESAIState::Idle", (int64)ESAIState::Idle },
				{ "ESAIState::Investigating", (int64)ESAIState::Investigating },
				{ "ESAIState::Alert", (int64)ESAIState::Alert },
				{ "ESAIState::Combat", (int64)ESAIState::Combat },
				{ "ESAIState::Dead", (int64)ESAIState::Dead },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Alert.Name", "ESAIState::Alert" },
				{ "BlueprintType", "true" },
				{ "Combat.Name", "ESAIState::Combat" },
				{ "Dead.Name", "ESAIState::Dead" },
				{ "Idle.Name", "ESAIState::Idle" },
				{ "Investigating.Name", "ESAIState::Investigating" },
				{ "ModuleRelativePath", "Public/ESAIState.h" },
				{ "None.Name", "ESAIState::None" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AISentience,
				nullptr,
				"ESAIState",
				"ESAIState",
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
