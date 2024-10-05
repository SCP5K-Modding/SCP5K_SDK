// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/ESteamCoreInputType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESteamCoreInputType() {}
// Cross Module References
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamCoreInputType();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
// End Cross Module References
	static UEnum* ESteamCoreInputType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SteamCore_ESteamCoreInputType, Z_Construct_UPackage__Script_SteamCore(), TEXT("ESteamCoreInputType"));
		}
		return Singleton;
	}
	template<> STEAMCORE_API UEnum* StaticEnum<ESteamCoreInputType>()
	{
		return ESteamCoreInputType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESteamCoreInputType(ESteamCoreInputType_StaticEnum, TEXT("/Script/SteamCore"), TEXT("ESteamCoreInputType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SteamCore_ESteamCoreInputType_Hash() { return 749935197U; }
	UEnum* Z_Construct_UEnum_SteamCore_ESteamCoreInputType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESteamCoreInputType"), 0, Get_Z_Construct_UEnum_SteamCore_ESteamCoreInputType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESteamCoreInputType::Unknown", (int64)ESteamCoreInputType::Unknown },
				{ "ESteamCoreInputType::SteamController", (int64)ESteamCoreInputType::SteamController },
				{ "ESteamCoreInputType::XBox360Controller", (int64)ESteamCoreInputType::XBox360Controller },
				{ "ESteamCoreInputType::XBoxOneController", (int64)ESteamCoreInputType::XBoxOneController },
				{ "ESteamCoreInputType::GenericGamepad", (int64)ESteamCoreInputType::GenericGamepad },
				{ "ESteamCoreInputType::PS4Controller", (int64)ESteamCoreInputType::PS4Controller },
				{ "ESteamCoreInputType::AppleMFiController", (int64)ESteamCoreInputType::AppleMFiController },
				{ "ESteamCoreInputType::AndroidController", (int64)ESteamCoreInputType::AndroidController },
				{ "ESteamCoreInputType::SwitchJoyConPair", (int64)ESteamCoreInputType::SwitchJoyConPair },
				{ "ESteamCoreInputType::SwitchJoyConSingle", (int64)ESteamCoreInputType::SwitchJoyConSingle },
				{ "ESteamCoreInputType::SwitchProController", (int64)ESteamCoreInputType::SwitchProController },
				{ "ESteamCoreInputType::MobileTouch", (int64)ESteamCoreInputType::MobileTouch },
				{ "ESteamCoreInputType::PS3Controller", (int64)ESteamCoreInputType::PS3Controller },
				{ "ESteamCoreInputType::Count", (int64)ESteamCoreInputType::Count },
				{ "ESteamCoreInputType::MaximumPossibleValue", (int64)ESteamCoreInputType::MaximumPossibleValue },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AndroidController.Name", "ESteamCoreInputType::AndroidController" },
				{ "AppleMFiController.Name", "ESteamCoreInputType::AppleMFiController" },
				{ "BlueprintType", "true" },
				{ "Count.Name", "ESteamCoreInputType::Count" },
				{ "GenericGamepad.Name", "ESteamCoreInputType::GenericGamepad" },
				{ "MaximumPossibleValue.Name", "ESteamCoreInputType::MaximumPossibleValue" },
				{ "MobileTouch.Name", "ESteamCoreInputType::MobileTouch" },
				{ "ModuleRelativePath", "Public/ESteamCoreInputType.h" },
				{ "PS3Controller.Name", "ESteamCoreInputType::PS3Controller" },
				{ "PS4Controller.Name", "ESteamCoreInputType::PS4Controller" },
				{ "SteamController.Name", "ESteamCoreInputType::SteamController" },
				{ "SwitchJoyConPair.Name", "ESteamCoreInputType::SwitchJoyConPair" },
				{ "SwitchJoyConSingle.Name", "ESteamCoreInputType::SwitchJoyConSingle" },
				{ "SwitchProController.Name", "ESteamCoreInputType::SwitchProController" },
				{ "Unknown.Name", "ESteamCoreInputType::Unknown" },
				{ "XBox360Controller.Name", "ESteamCoreInputType::XBox360Controller" },
				{ "XBoxOneController.Name", "ESteamCoreInputType::XBoxOneController" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SteamCore,
				nullptr,
				"ESteamCoreInputType",
				"ESteamCoreInputType",
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
