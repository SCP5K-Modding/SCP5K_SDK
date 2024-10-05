// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/ESteamCoreXboxOrigin.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESteamCoreXboxOrigin() {}
// Cross Module References
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamCoreXboxOrigin();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
// End Cross Module References
	static UEnum* ESteamCoreXboxOrigin_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SteamCore_ESteamCoreXboxOrigin, Z_Construct_UPackage__Script_SteamCore(), TEXT("ESteamCoreXboxOrigin"));
		}
		return Singleton;
	}
	template<> STEAMCORE_API UEnum* StaticEnum<ESteamCoreXboxOrigin>()
	{
		return ESteamCoreXboxOrigin_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESteamCoreXboxOrigin(ESteamCoreXboxOrigin_StaticEnum, TEXT("/Script/SteamCore"), TEXT("ESteamCoreXboxOrigin"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SteamCore_ESteamCoreXboxOrigin_Hash() { return 3376027384U; }
	UEnum* Z_Construct_UEnum_SteamCore_ESteamCoreXboxOrigin()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESteamCoreXboxOrigin"), 0, Get_Z_Construct_UEnum_SteamCore_ESteamCoreXboxOrigin_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESteamCoreXboxOrigin::A", (int64)ESteamCoreXboxOrigin::A },
				{ "ESteamCoreXboxOrigin::B", (int64)ESteamCoreXboxOrigin::B },
				{ "ESteamCoreXboxOrigin::X", (int64)ESteamCoreXboxOrigin::X },
				{ "ESteamCoreXboxOrigin::Y", (int64)ESteamCoreXboxOrigin::Y },
				{ "ESteamCoreXboxOrigin::LeftBumper", (int64)ESteamCoreXboxOrigin::LeftBumper },
				{ "ESteamCoreXboxOrigin::RightBumper", (int64)ESteamCoreXboxOrigin::RightBumper },
				{ "ESteamCoreXboxOrigin::Menu", (int64)ESteamCoreXboxOrigin::Menu },
				{ "ESteamCoreXboxOrigin::View", (int64)ESteamCoreXboxOrigin::View },
				{ "ESteamCoreXboxOrigin::LeftTrigger_Pull", (int64)ESteamCoreXboxOrigin::LeftTrigger_Pull },
				{ "ESteamCoreXboxOrigin::LeftTrigger_Click", (int64)ESteamCoreXboxOrigin::LeftTrigger_Click },
				{ "ESteamCoreXboxOrigin::RightTrigger_Pull", (int64)ESteamCoreXboxOrigin::RightTrigger_Pull },
				{ "ESteamCoreXboxOrigin::RightTrigger_Click", (int64)ESteamCoreXboxOrigin::RightTrigger_Click },
				{ "ESteamCoreXboxOrigin::LeftStick_Move", (int64)ESteamCoreXboxOrigin::LeftStick_Move },
				{ "ESteamCoreXboxOrigin::LeftStick_Click", (int64)ESteamCoreXboxOrigin::LeftStick_Click },
				{ "ESteamCoreXboxOrigin::LeftStick_DPadNorth", (int64)ESteamCoreXboxOrigin::LeftStick_DPadNorth },
				{ "ESteamCoreXboxOrigin::LeftStick_DPadSouth", (int64)ESteamCoreXboxOrigin::LeftStick_DPadSouth },
				{ "ESteamCoreXboxOrigin::LeftStick_DPadWest", (int64)ESteamCoreXboxOrigin::LeftStick_DPadWest },
				{ "ESteamCoreXboxOrigin::LeftStick_DPadEast", (int64)ESteamCoreXboxOrigin::LeftStick_DPadEast },
				{ "ESteamCoreXboxOrigin::RightStick_Move", (int64)ESteamCoreXboxOrigin::RightStick_Move },
				{ "ESteamCoreXboxOrigin::RightStick_Click", (int64)ESteamCoreXboxOrigin::RightStick_Click },
				{ "ESteamCoreXboxOrigin::RightStick_DPadNorth", (int64)ESteamCoreXboxOrigin::RightStick_DPadNorth },
				{ "ESteamCoreXboxOrigin::RightStick_DPadSouth", (int64)ESteamCoreXboxOrigin::RightStick_DPadSouth },
				{ "ESteamCoreXboxOrigin::RightStick_DPadWest", (int64)ESteamCoreXboxOrigin::RightStick_DPadWest },
				{ "ESteamCoreXboxOrigin::RightStick_DPadEast", (int64)ESteamCoreXboxOrigin::RightStick_DPadEast },
				{ "ESteamCoreXboxOrigin::DPad_North", (int64)ESteamCoreXboxOrigin::DPad_North },
				{ "ESteamCoreXboxOrigin::DPad_South", (int64)ESteamCoreXboxOrigin::DPad_South },
				{ "ESteamCoreXboxOrigin::DPad_West", (int64)ESteamCoreXboxOrigin::DPad_West },
				{ "ESteamCoreXboxOrigin::DPad_East", (int64)ESteamCoreXboxOrigin::DPad_East },
				{ "ESteamCoreXboxOrigin::Count", (int64)ESteamCoreXboxOrigin::Count },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "A.Name", "ESteamCoreXboxOrigin::A" },
				{ "B.Name", "ESteamCoreXboxOrigin::B" },
				{ "BlueprintType", "true" },
				{ "Count.Name", "ESteamCoreXboxOrigin::Count" },
				{ "DPad_East.Name", "ESteamCoreXboxOrigin::DPad_East" },
				{ "DPad_North.Name", "ESteamCoreXboxOrigin::DPad_North" },
				{ "DPad_South.Name", "ESteamCoreXboxOrigin::DPad_South" },
				{ "DPad_West.Name", "ESteamCoreXboxOrigin::DPad_West" },
				{ "LeftBumper.Name", "ESteamCoreXboxOrigin::LeftBumper" },
				{ "LeftStick_Click.Name", "ESteamCoreXboxOrigin::LeftStick_Click" },
				{ "LeftStick_DPadEast.Name", "ESteamCoreXboxOrigin::LeftStick_DPadEast" },
				{ "LeftStick_DPadNorth.Name", "ESteamCoreXboxOrigin::LeftStick_DPadNorth" },
				{ "LeftStick_DPadSouth.Name", "ESteamCoreXboxOrigin::LeftStick_DPadSouth" },
				{ "LeftStick_DPadWest.Name", "ESteamCoreXboxOrigin::LeftStick_DPadWest" },
				{ "LeftStick_Move.Name", "ESteamCoreXboxOrigin::LeftStick_Move" },
				{ "LeftTrigger_Click.Name", "ESteamCoreXboxOrigin::LeftTrigger_Click" },
				{ "LeftTrigger_Pull.Name", "ESteamCoreXboxOrigin::LeftTrigger_Pull" },
				{ "Menu.Name", "ESteamCoreXboxOrigin::Menu" },
				{ "ModuleRelativePath", "Public/ESteamCoreXboxOrigin.h" },
				{ "RightBumper.Name", "ESteamCoreXboxOrigin::RightBumper" },
				{ "RightStick_Click.Name", "ESteamCoreXboxOrigin::RightStick_Click" },
				{ "RightStick_DPadEast.Name", "ESteamCoreXboxOrigin::RightStick_DPadEast" },
				{ "RightStick_DPadNorth.Name", "ESteamCoreXboxOrigin::RightStick_DPadNorth" },
				{ "RightStick_DPadSouth.Name", "ESteamCoreXboxOrigin::RightStick_DPadSouth" },
				{ "RightStick_DPadWest.Name", "ESteamCoreXboxOrigin::RightStick_DPadWest" },
				{ "RightStick_Move.Name", "ESteamCoreXboxOrigin::RightStick_Move" },
				{ "RightTrigger_Click.Name", "ESteamCoreXboxOrigin::RightTrigger_Click" },
				{ "RightTrigger_Pull.Name", "ESteamCoreXboxOrigin::RightTrigger_Pull" },
				{ "View.Name", "ESteamCoreXboxOrigin::View" },
				{ "X.Name", "ESteamCoreXboxOrigin::X" },
				{ "Y.Name", "ESteamCoreXboxOrigin::Y" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SteamCore,
				nullptr,
				"ESteamCoreXboxOrigin",
				"ESteamCoreXboxOrigin",
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
