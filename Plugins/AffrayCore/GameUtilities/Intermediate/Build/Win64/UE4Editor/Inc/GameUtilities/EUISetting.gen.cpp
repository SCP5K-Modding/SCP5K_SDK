// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameUtilities/Public/EUISetting.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEUISetting() {}
// Cross Module References
	GAMEUTILITIES_API UEnum* Z_Construct_UEnum_GameUtilities_EUISetting();
	UPackage* Z_Construct_UPackage__Script_GameUtilities();
// End Cross Module References
	static UEnum* EUISetting_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_GameUtilities_EUISetting, Z_Construct_UPackage__Script_GameUtilities(), TEXT("EUISetting"));
		}
		return Singleton;
	}
	template<> GAMEUTILITIES_API UEnum* StaticEnum<EUISetting>()
	{
		return EUISetting_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EUISetting(EUISetting_StaticEnum, TEXT("/Script/GameUtilities"), TEXT("EUISetting"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_GameUtilities_EUISetting_Hash() { return 3082317327U; }
	UEnum* Z_Construct_UEnum_GameUtilities_EUISetting()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_GameUtilities();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EUISetting"), 0, Get_Z_Construct_UEnum_GameUtilities_EUISetting_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EUISetting::Language", (int64)EUISetting::Language },
				{ "EUISetting::TextSize", (int64)EUISetting::TextSize },
				{ "EUISetting::RedColor", (int64)EUISetting::RedColor },
				{ "EUISetting::GreenColor", (int64)EUISetting::GreenColor },
				{ "EUISetting::UIScale", (int64)EUISetting::UIScale },
				{ "EUISetting::DisplayTimeScale", (int64)EUISetting::DisplayTimeScale },
				{ "EUISetting::HUDVisibility", (int64)EUISetting::HUDVisibility },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "DisplayTimeScale.Name", "EUISetting::DisplayTimeScale" },
				{ "GreenColor.Name", "EUISetting::GreenColor" },
				{ "HUDVisibility.Name", "EUISetting::HUDVisibility" },
				{ "Language.Name", "EUISetting::Language" },
				{ "ModuleRelativePath", "Public/EUISetting.h" },
				{ "RedColor.Name", "EUISetting::RedColor" },
				{ "TextSize.Name", "EUISetting::TextSize" },
				{ "UIScale.Name", "EUISetting::UIScale" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_GameUtilities,
				nullptr,
				"EUISetting",
				"EUISetting",
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
