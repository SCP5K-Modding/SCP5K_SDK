// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayObjectives/Public/EObjectiveTriggerAction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEObjectiveTriggerAction() {}
// Cross Module References
	GAMEPLAYOBJECTIVES_API UEnum* Z_Construct_UEnum_GameplayObjectives_EObjectiveTriggerAction();
	UPackage* Z_Construct_UPackage__Script_GameplayObjectives();
// End Cross Module References
	static UEnum* EObjectiveTriggerAction_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_GameplayObjectives_EObjectiveTriggerAction, Z_Construct_UPackage__Script_GameplayObjectives(), TEXT("EObjectiveTriggerAction"));
		}
		return Singleton;
	}
	template<> GAMEPLAYOBJECTIVES_API UEnum* StaticEnum<EObjectiveTriggerAction>()
	{
		return EObjectiveTriggerAction_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EObjectiveTriggerAction(EObjectiveTriggerAction_StaticEnum, TEXT("/Script/GameplayObjectives"), TEXT("EObjectiveTriggerAction"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_GameplayObjectives_EObjectiveTriggerAction_Hash() { return 1155477281U; }
	UEnum* Z_Construct_UEnum_GameplayObjectives_EObjectiveTriggerAction()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_GameplayObjectives();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EObjectiveTriggerAction"), 0, Get_Z_Construct_UEnum_GameplayObjectives_EObjectiveTriggerAction_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EObjectiveTriggerAction::None", (int64)EObjectiveTriggerAction::None },
				{ "EObjectiveTriggerAction::Complete", (int64)EObjectiveTriggerAction::Complete },
				{ "EObjectiveTriggerAction::Activate", (int64)EObjectiveTriggerAction::Activate },
				{ "EObjectiveTriggerAction::Deactivate", (int64)EObjectiveTriggerAction::Deactivate },
				{ "EObjectiveTriggerAction::Start", (int64)EObjectiveTriggerAction::Start },
				{ "EObjectiveTriggerAction::Reset", (int64)EObjectiveTriggerAction::Reset },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Activate.Name", "EObjectiveTriggerAction::Activate" },
				{ "BlueprintType", "true" },
				{ "Complete.Name", "EObjectiveTriggerAction::Complete" },
				{ "Deactivate.Name", "EObjectiveTriggerAction::Deactivate" },
				{ "ModuleRelativePath", "Public/EObjectiveTriggerAction.h" },
				{ "None.Name", "EObjectiveTriggerAction::None" },
				{ "Reset.Name", "EObjectiveTriggerAction::Reset" },
				{ "Start.Name", "EObjectiveTriggerAction::Start" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_GameplayObjectives,
				nullptr,
				"EObjectiveTriggerAction",
				"EObjectiveTriggerAction",
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
