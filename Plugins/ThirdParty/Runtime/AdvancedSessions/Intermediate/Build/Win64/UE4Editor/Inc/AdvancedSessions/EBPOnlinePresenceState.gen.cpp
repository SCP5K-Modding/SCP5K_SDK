// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvancedSessions/Public/EBPOnlinePresenceState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEBPOnlinePresenceState() {}
// Cross Module References
	ADVANCEDSESSIONS_API UEnum* Z_Construct_UEnum_AdvancedSessions_EBPOnlinePresenceState();
	UPackage* Z_Construct_UPackage__Script_AdvancedSessions();
// End Cross Module References
	static UEnum* EBPOnlinePresenceState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AdvancedSessions_EBPOnlinePresenceState, Z_Construct_UPackage__Script_AdvancedSessions(), TEXT("EBPOnlinePresenceState"));
		}
		return Singleton;
	}
	template<> ADVANCEDSESSIONS_API UEnum* StaticEnum<EBPOnlinePresenceState>()
	{
		return EBPOnlinePresenceState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBPOnlinePresenceState(EBPOnlinePresenceState_StaticEnum, TEXT("/Script/AdvancedSessions"), TEXT("EBPOnlinePresenceState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AdvancedSessions_EBPOnlinePresenceState_Hash() { return 770498908U; }
	UEnum* Z_Construct_UEnum_AdvancedSessions_EBPOnlinePresenceState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AdvancedSessions();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBPOnlinePresenceState"), 0, Get_Z_Construct_UEnum_AdvancedSessions_EBPOnlinePresenceState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EBPOnlinePresenceState::Online", (int64)EBPOnlinePresenceState::Online },
				{ "EBPOnlinePresenceState::Offline", (int64)EBPOnlinePresenceState::Offline },
				{ "EBPOnlinePresenceState::Away", (int64)EBPOnlinePresenceState::Away },
				{ "EBPOnlinePresenceState::ExtendedAway", (int64)EBPOnlinePresenceState::ExtendedAway },
				{ "EBPOnlinePresenceState::DoNotDisturb", (int64)EBPOnlinePresenceState::DoNotDisturb },
				{ "EBPOnlinePresenceState::Chat", (int64)EBPOnlinePresenceState::Chat },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Away.Name", "EBPOnlinePresenceState::Away" },
				{ "BlueprintType", "true" },
				{ "Chat.Name", "EBPOnlinePresenceState::Chat" },
				{ "DoNotDisturb.Name", "EBPOnlinePresenceState::DoNotDisturb" },
				{ "ExtendedAway.Name", "EBPOnlinePresenceState::ExtendedAway" },
				{ "ModuleRelativePath", "Public/EBPOnlinePresenceState.h" },
				{ "Offline.Name", "EBPOnlinePresenceState::Offline" },
				{ "Online.Name", "EBPOnlinePresenceState::Online" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AdvancedSessions,
				nullptr,
				"EBPOnlinePresenceState",
				"EBPOnlinePresenceState",
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
