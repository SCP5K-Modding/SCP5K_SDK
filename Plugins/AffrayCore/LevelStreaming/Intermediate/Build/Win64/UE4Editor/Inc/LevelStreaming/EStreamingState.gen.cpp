// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LevelStreaming/Public/EStreamingState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEStreamingState() {}
// Cross Module References
	LEVELSTREAMING_API UEnum* Z_Construct_UEnum_LevelStreaming_EStreamingState();
	UPackage* Z_Construct_UPackage__Script_LevelStreaming();
// End Cross Module References
	static UEnum* EStreamingState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_LevelStreaming_EStreamingState, Z_Construct_UPackage__Script_LevelStreaming(), TEXT("EStreamingState"));
		}
		return Singleton;
	}
	template<> LEVELSTREAMING_API UEnum* StaticEnum<EStreamingState>()
	{
		return EStreamingState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EStreamingState(EStreamingState_StaticEnum, TEXT("/Script/LevelStreaming"), TEXT("EStreamingState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_LevelStreaming_EStreamingState_Hash() { return 2695154024U; }
	UEnum* Z_Construct_UEnum_LevelStreaming_EStreamingState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_LevelStreaming();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EStreamingState"), 0, Get_Z_Construct_UEnum_LevelStreaming_EStreamingState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EStreamingState::Visible", (int64)EStreamingState::Visible },
				{ "EStreamingState::Loaded", (int64)EStreamingState::Loaded },
				{ "EStreamingState::Unloaded", (int64)EStreamingState::Unloaded },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Loaded.Name", "EStreamingState::Loaded" },
				{ "ModuleRelativePath", "Public/EStreamingState.h" },
				{ "Unloaded.Name", "EStreamingState::Unloaded" },
				{ "Visible.Name", "EStreamingState::Visible" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_LevelStreaming,
				nullptr,
				"EStreamingState",
				"EStreamingState",
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
