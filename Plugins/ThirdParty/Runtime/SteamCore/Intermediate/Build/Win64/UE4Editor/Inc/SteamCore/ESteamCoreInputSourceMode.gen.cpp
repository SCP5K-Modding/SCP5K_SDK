// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/ESteamCoreInputSourceMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESteamCoreInputSourceMode() {}
// Cross Module References
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamCoreInputSourceMode();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
// End Cross Module References
	static UEnum* ESteamCoreInputSourceMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SteamCore_ESteamCoreInputSourceMode, Z_Construct_UPackage__Script_SteamCore(), TEXT("ESteamCoreInputSourceMode"));
		}
		return Singleton;
	}
	template<> STEAMCORE_API UEnum* StaticEnum<ESteamCoreInputSourceMode>()
	{
		return ESteamCoreInputSourceMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESteamCoreInputSourceMode(ESteamCoreInputSourceMode_StaticEnum, TEXT("/Script/SteamCore"), TEXT("ESteamCoreInputSourceMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SteamCore_ESteamCoreInputSourceMode_Hash() { return 803300300U; }
	UEnum* Z_Construct_UEnum_SteamCore_ESteamCoreInputSourceMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESteamCoreInputSourceMode"), 0, Get_Z_Construct_UEnum_SteamCore_ESteamCoreInputSourceMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESteamCoreInputSourceMode::None", (int64)ESteamCoreInputSourceMode::None },
				{ "ESteamCoreInputSourceMode::Dpad", (int64)ESteamCoreInputSourceMode::Dpad },
				{ "ESteamCoreInputSourceMode::Buttons", (int64)ESteamCoreInputSourceMode::Buttons },
				{ "ESteamCoreInputSourceMode::FourButtons", (int64)ESteamCoreInputSourceMode::FourButtons },
				{ "ESteamCoreInputSourceMode::AbsoluteMouse", (int64)ESteamCoreInputSourceMode::AbsoluteMouse },
				{ "ESteamCoreInputSourceMode::RelativeMouse", (int64)ESteamCoreInputSourceMode::RelativeMouse },
				{ "ESteamCoreInputSourceMode::JoystickMove", (int64)ESteamCoreInputSourceMode::JoystickMove },
				{ "ESteamCoreInputSourceMode::JoystickMouse", (int64)ESteamCoreInputSourceMode::JoystickMouse },
				{ "ESteamCoreInputSourceMode::JoystickCamera", (int64)ESteamCoreInputSourceMode::JoystickCamera },
				{ "ESteamCoreInputSourceMode::ScrollWheel", (int64)ESteamCoreInputSourceMode::ScrollWheel },
				{ "ESteamCoreInputSourceMode::Trigger", (int64)ESteamCoreInputSourceMode::Trigger },
				{ "ESteamCoreInputSourceMode::TouchMenu", (int64)ESteamCoreInputSourceMode::TouchMenu },
				{ "ESteamCoreInputSourceMode::MouseJoystick", (int64)ESteamCoreInputSourceMode::MouseJoystick },
				{ "ESteamCoreInputSourceMode::MouseRegion", (int64)ESteamCoreInputSourceMode::MouseRegion },
				{ "ESteamCoreInputSourceMode::RadialMenu", (int64)ESteamCoreInputSourceMode::RadialMenu },
				{ "ESteamCoreInputSourceMode::SingleButton", (int64)ESteamCoreInputSourceMode::SingleButton },
				{ "ESteamCoreInputSourceMode::Switches", (int64)ESteamCoreInputSourceMode::Switches },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AbsoluteMouse.Name", "ESteamCoreInputSourceMode::AbsoluteMouse" },
				{ "BlueprintType", "true" },
				{ "Buttons.Name", "ESteamCoreInputSourceMode::Buttons" },
				{ "Dpad.Name", "ESteamCoreInputSourceMode::Dpad" },
				{ "FourButtons.Name", "ESteamCoreInputSourceMode::FourButtons" },
				{ "JoystickCamera.Name", "ESteamCoreInputSourceMode::JoystickCamera" },
				{ "JoystickMouse.Name", "ESteamCoreInputSourceMode::JoystickMouse" },
				{ "JoystickMove.Name", "ESteamCoreInputSourceMode::JoystickMove" },
				{ "ModuleRelativePath", "Public/ESteamCoreInputSourceMode.h" },
				{ "MouseJoystick.Name", "ESteamCoreInputSourceMode::MouseJoystick" },
				{ "MouseRegion.Name", "ESteamCoreInputSourceMode::MouseRegion" },
				{ "None.Name", "ESteamCoreInputSourceMode::None" },
				{ "RadialMenu.Name", "ESteamCoreInputSourceMode::RadialMenu" },
				{ "RelativeMouse.Name", "ESteamCoreInputSourceMode::RelativeMouse" },
				{ "ScrollWheel.Name", "ESteamCoreInputSourceMode::ScrollWheel" },
				{ "SingleButton.Name", "ESteamCoreInputSourceMode::SingleButton" },
				{ "Switches.Name", "ESteamCoreInputSourceMode::Switches" },
				{ "TouchMenu.Name", "ESteamCoreInputSourceMode::TouchMenu" },
				{ "Trigger.Name", "ESteamCoreInputSourceMode::Trigger" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SteamCore,
				nullptr,
				"ESteamCoreInputSourceMode",
				"ESteamCoreInputSourceMode",
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
