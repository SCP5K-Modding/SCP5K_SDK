// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/ESteamGamepadTextInputLineMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESteamGamepadTextInputLineMode() {}
// Cross Module References
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamGamepadTextInputLineMode();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
// End Cross Module References
	static UEnum* ESteamGamepadTextInputLineMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SteamCore_ESteamGamepadTextInputLineMode, Z_Construct_UPackage__Script_SteamCore(), TEXT("ESteamGamepadTextInputLineMode"));
		}
		return Singleton;
	}
	template<> STEAMCORE_API UEnum* StaticEnum<ESteamGamepadTextInputLineMode>()
	{
		return ESteamGamepadTextInputLineMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESteamGamepadTextInputLineMode(ESteamGamepadTextInputLineMode_StaticEnum, TEXT("/Script/SteamCore"), TEXT("ESteamGamepadTextInputLineMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SteamCore_ESteamGamepadTextInputLineMode_Hash() { return 2360953961U; }
	UEnum* Z_Construct_UEnum_SteamCore_ESteamGamepadTextInputLineMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESteamGamepadTextInputLineMode"), 0, Get_Z_Construct_UEnum_SteamCore_ESteamGamepadTextInputLineMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESteamGamepadTextInputLineMode::SingleLine", (int64)ESteamGamepadTextInputLineMode::SingleLine },
				{ "ESteamGamepadTextInputLineMode::MultipleLines", (int64)ESteamGamepadTextInputLineMode::MultipleLines },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/ESteamGamepadTextInputLineMode.h" },
				{ "MultipleLines.Name", "ESteamGamepadTextInputLineMode::MultipleLines" },
				{ "SingleLine.Name", "ESteamGamepadTextInputLineMode::SingleLine" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SteamCore,
				nullptr,
				"ESteamGamepadTextInputLineMode",
				"ESteamGamepadTextInputLineMode",
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
