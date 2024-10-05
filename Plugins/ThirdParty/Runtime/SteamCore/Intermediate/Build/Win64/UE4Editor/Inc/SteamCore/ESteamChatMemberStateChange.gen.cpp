// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/ESteamChatMemberStateChange.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESteamChatMemberStateChange() {}
// Cross Module References
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamChatMemberStateChange();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
// End Cross Module References
	static UEnum* ESteamChatMemberStateChange_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SteamCore_ESteamChatMemberStateChange, Z_Construct_UPackage__Script_SteamCore(), TEXT("ESteamChatMemberStateChange"));
		}
		return Singleton;
	}
	template<> STEAMCORE_API UEnum* StaticEnum<ESteamChatMemberStateChange>()
	{
		return ESteamChatMemberStateChange_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESteamChatMemberStateChange(ESteamChatMemberStateChange_StaticEnum, TEXT("/Script/SteamCore"), TEXT("ESteamChatMemberStateChange"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SteamCore_ESteamChatMemberStateChange_Hash() { return 3579909358U; }
	UEnum* Z_Construct_UEnum_SteamCore_ESteamChatMemberStateChange()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESteamChatMemberStateChange"), 0, Get_Z_Construct_UEnum_SteamCore_ESteamChatMemberStateChange_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESteamChatMemberStateChange::None", (int64)ESteamChatMemberStateChange::None },
				{ "ESteamChatMemberStateChange::Entered", (int64)ESteamChatMemberStateChange::Entered },
				{ "ESteamChatMemberStateChange::Left", (int64)ESteamChatMemberStateChange::Left },
				{ "ESteamChatMemberStateChange::Disconnected", (int64)ESteamChatMemberStateChange::Disconnected },
				{ "ESteamChatMemberStateChange::Kicked", (int64)ESteamChatMemberStateChange::Kicked },
				{ "ESteamChatMemberStateChange::Banned", (int64)ESteamChatMemberStateChange::Banned },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Banned.Name", "ESteamChatMemberStateChange::Banned" },
				{ "BlueprintType", "true" },
				{ "Disconnected.Name", "ESteamChatMemberStateChange::Disconnected" },
				{ "Entered.Name", "ESteamChatMemberStateChange::Entered" },
				{ "Kicked.Name", "ESteamChatMemberStateChange::Kicked" },
				{ "Left.Name", "ESteamChatMemberStateChange::Left" },
				{ "ModuleRelativePath", "Public/ESteamChatMemberStateChange.h" },
				{ "None.Name", "ESteamChatMemberStateChange::None" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SteamCore,
				nullptr,
				"ESteamChatMemberStateChange",
				"ESteamChatMemberStateChange",
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
