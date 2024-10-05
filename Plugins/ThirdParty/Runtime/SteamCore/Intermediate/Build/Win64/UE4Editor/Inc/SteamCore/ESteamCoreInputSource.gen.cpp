// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/ESteamCoreInputSource.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESteamCoreInputSource() {}
// Cross Module References
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamCoreInputSource();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
// End Cross Module References
	static UEnum* ESteamCoreInputSource_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SteamCore_ESteamCoreInputSource, Z_Construct_UPackage__Script_SteamCore(), TEXT("ESteamCoreInputSource"));
		}
		return Singleton;
	}
	template<> STEAMCORE_API UEnum* StaticEnum<ESteamCoreInputSource>()
	{
		return ESteamCoreInputSource_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESteamCoreInputSource(ESteamCoreInputSource_StaticEnum, TEXT("/Script/SteamCore"), TEXT("ESteamCoreInputSource"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SteamCore_ESteamCoreInputSource_Hash() { return 1441026919U; }
	UEnum* Z_Construct_UEnum_SteamCore_ESteamCoreInputSource()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESteamCoreInputSource"), 0, Get_Z_Construct_UEnum_SteamCore_ESteamCoreInputSource_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESteamCoreInputSource::None", (int64)ESteamCoreInputSource::None },
				{ "ESteamCoreInputSource::LeftTrackpad", (int64)ESteamCoreInputSource::LeftTrackpad },
				{ "ESteamCoreInputSource::RightTrackpad", (int64)ESteamCoreInputSource::RightTrackpad },
				{ "ESteamCoreInputSource::Joystick", (int64)ESteamCoreInputSource::Joystick },
				{ "ESteamCoreInputSource::ABXY", (int64)ESteamCoreInputSource::ABXY },
				{ "ESteamCoreInputSource::Switch", (int64)ESteamCoreInputSource::Switch },
				{ "ESteamCoreInputSource::LeftTrigger", (int64)ESteamCoreInputSource::LeftTrigger },
				{ "ESteamCoreInputSource::RightTrigger", (int64)ESteamCoreInputSource::RightTrigger },
				{ "ESteamCoreInputSource::LeftBumper", (int64)ESteamCoreInputSource::LeftBumper },
				{ "ESteamCoreInputSource::RightBumper", (int64)ESteamCoreInputSource::RightBumper },
				{ "ESteamCoreInputSource::Gyro", (int64)ESteamCoreInputSource::Gyro },
				{ "ESteamCoreInputSource::CenterTrackpad", (int64)ESteamCoreInputSource::CenterTrackpad },
				{ "ESteamCoreInputSource::RightJoystick", (int64)ESteamCoreInputSource::RightJoystick },
				{ "ESteamCoreInputSource::DPad", (int64)ESteamCoreInputSource::DPad },
				{ "ESteamCoreInputSource::Key", (int64)ESteamCoreInputSource::Key },
				{ "ESteamCoreInputSource::Mouse", (int64)ESteamCoreInputSource::Mouse },
				{ "ESteamCoreInputSource::LeftGyro", (int64)ESteamCoreInputSource::LeftGyro },
				{ "ESteamCoreInputSource::Count", (int64)ESteamCoreInputSource::Count },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ABXY.Name", "ESteamCoreInputSource::ABXY" },
				{ "BlueprintType", "true" },
				{ "CenterTrackpad.Name", "ESteamCoreInputSource::CenterTrackpad" },
				{ "Count.Name", "ESteamCoreInputSource::Count" },
				{ "DPad.Name", "ESteamCoreInputSource::DPad" },
				{ "Gyro.Name", "ESteamCoreInputSource::Gyro" },
				{ "Joystick.Name", "ESteamCoreInputSource::Joystick" },
				{ "Key.Name", "ESteamCoreInputSource::Key" },
				{ "LeftBumper.Name", "ESteamCoreInputSource::LeftBumper" },
				{ "LeftGyro.Name", "ESteamCoreInputSource::LeftGyro" },
				{ "LeftTrackpad.Name", "ESteamCoreInputSource::LeftTrackpad" },
				{ "LeftTrigger.Name", "ESteamCoreInputSource::LeftTrigger" },
				{ "ModuleRelativePath", "Public/ESteamCoreInputSource.h" },
				{ "Mouse.Name", "ESteamCoreInputSource::Mouse" },
				{ "None.Name", "ESteamCoreInputSource::None" },
				{ "RightBumper.Name", "ESteamCoreInputSource::RightBumper" },
				{ "RightJoystick.Name", "ESteamCoreInputSource::RightJoystick" },
				{ "RightTrackpad.Name", "ESteamCoreInputSource::RightTrackpad" },
				{ "RightTrigger.Name", "ESteamCoreInputSource::RightTrigger" },
				{ "Switch.Name", "ESteamCoreInputSource::Switch" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SteamCore,
				nullptr,
				"ESteamCoreInputSource",
				"ESteamCoreInputSource",
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
