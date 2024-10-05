// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvancedSessions/Public/EBPOnlineSessionState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEBPOnlineSessionState() {}
// Cross Module References
	ADVANCEDSESSIONS_API UEnum* Z_Construct_UEnum_AdvancedSessions_EBPOnlineSessionState();
	UPackage* Z_Construct_UPackage__Script_AdvancedSessions();
// End Cross Module References
	static UEnum* EBPOnlineSessionState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AdvancedSessions_EBPOnlineSessionState, Z_Construct_UPackage__Script_AdvancedSessions(), TEXT("EBPOnlineSessionState"));
		}
		return Singleton;
	}
	template<> ADVANCEDSESSIONS_API UEnum* StaticEnum<EBPOnlineSessionState>()
	{
		return EBPOnlineSessionState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBPOnlineSessionState(EBPOnlineSessionState_StaticEnum, TEXT("/Script/AdvancedSessions"), TEXT("EBPOnlineSessionState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AdvancedSessions_EBPOnlineSessionState_Hash() { return 1375574413U; }
	UEnum* Z_Construct_UEnum_AdvancedSessions_EBPOnlineSessionState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AdvancedSessions();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBPOnlineSessionState"), 0, Get_Z_Construct_UEnum_AdvancedSessions_EBPOnlineSessionState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EBPOnlineSessionState::NoSession", (int64)EBPOnlineSessionState::NoSession },
				{ "EBPOnlineSessionState::Creating", (int64)EBPOnlineSessionState::Creating },
				{ "EBPOnlineSessionState::Pending", (int64)EBPOnlineSessionState::Pending },
				{ "EBPOnlineSessionState::Starting", (int64)EBPOnlineSessionState::Starting },
				{ "EBPOnlineSessionState::InProgress", (int64)EBPOnlineSessionState::InProgress },
				{ "EBPOnlineSessionState::Ending", (int64)EBPOnlineSessionState::Ending },
				{ "EBPOnlineSessionState::Ended", (int64)EBPOnlineSessionState::Ended },
				{ "EBPOnlineSessionState::Destroying", (int64)EBPOnlineSessionState::Destroying },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Creating.Name", "EBPOnlineSessionState::Creating" },
				{ "Destroying.Name", "EBPOnlineSessionState::Destroying" },
				{ "Ended.Name", "EBPOnlineSessionState::Ended" },
				{ "Ending.Name", "EBPOnlineSessionState::Ending" },
				{ "InProgress.Name", "EBPOnlineSessionState::InProgress" },
				{ "ModuleRelativePath", "Public/EBPOnlineSessionState.h" },
				{ "NoSession.Name", "EBPOnlineSessionState::NoSession" },
				{ "Pending.Name", "EBPOnlineSessionState::Pending" },
				{ "Starting.Name", "EBPOnlineSessionState::Starting" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AdvancedSessions,
				nullptr,
				"EBPOnlineSessionState",
				"EBPOnlineSessionState",
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
