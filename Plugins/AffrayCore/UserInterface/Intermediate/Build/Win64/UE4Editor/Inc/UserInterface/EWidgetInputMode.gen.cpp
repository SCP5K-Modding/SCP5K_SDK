// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UserInterface/Public/EWidgetInputMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEWidgetInputMode() {}
// Cross Module References
	USERINTERFACE_API UEnum* Z_Construct_UEnum_UserInterface_EWidgetInputMode();
	UPackage* Z_Construct_UPackage__Script_UserInterface();
// End Cross Module References
	static UEnum* EWidgetInputMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_UserInterface_EWidgetInputMode, Z_Construct_UPackage__Script_UserInterface(), TEXT("EWidgetInputMode"));
		}
		return Singleton;
	}
	template<> USERINTERFACE_API UEnum* StaticEnum<EWidgetInputMode>()
	{
		return EWidgetInputMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EWidgetInputMode(EWidgetInputMode_StaticEnum, TEXT("/Script/UserInterface"), TEXT("EWidgetInputMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_UserInterface_EWidgetInputMode_Hash() { return 2708015864U; }
	UEnum* Z_Construct_UEnum_UserInterface_EWidgetInputMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_UserInterface();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EWidgetInputMode"), 0, Get_Z_Construct_UEnum_UserInterface_EWidgetInputMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EWidgetInputMode::Default", (int64)EWidgetInputMode::Default },
				{ "EWidgetInputMode::GameAndMenu", (int64)EWidgetInputMode::GameAndMenu },
				{ "EWidgetInputMode::Game", (int64)EWidgetInputMode::Game },
				{ "EWidgetInputMode::Menu", (int64)EWidgetInputMode::Menu },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Default.Name", "EWidgetInputMode::Default" },
				{ "Game.Name", "EWidgetInputMode::Game" },
				{ "GameAndMenu.Name", "EWidgetInputMode::GameAndMenu" },
				{ "Menu.Name", "EWidgetInputMode::Menu" },
				{ "ModuleRelativePath", "Public/EWidgetInputMode.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_UserInterface,
				nullptr,
				"EWidgetInputMode",
				"EWidgetInputMode",
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
