// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UserInterface/Public/EUIInputAction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEUIInputAction() {}
// Cross Module References
	USERINTERFACE_API UEnum* Z_Construct_UEnum_UserInterface_EUIInputAction();
	UPackage* Z_Construct_UPackage__Script_UserInterface();
// End Cross Module References
	static UEnum* EUIInputAction_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_UserInterface_EUIInputAction, Z_Construct_UPackage__Script_UserInterface(), TEXT("EUIInputAction"));
		}
		return Singleton;
	}
	template<> USERINTERFACE_API UEnum* StaticEnum<EUIInputAction>()
	{
		return EUIInputAction_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EUIInputAction(EUIInputAction_StaticEnum, TEXT("/Script/UserInterface"), TEXT("EUIInputAction"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_UserInterface_EUIInputAction_Hash() { return 2367215608U; }
	UEnum* Z_Construct_UEnum_UserInterface_EUIInputAction()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_UserInterface();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EUIInputAction"), 0, Get_Z_Construct_UEnum_UserInterface_EUIInputAction_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EUIInputAction::None", (int64)EUIInputAction::None },
				{ "EUIInputAction::Back", (int64)EUIInputAction::Back },
				{ "EUIInputAction::PrimaryMenuLeft", (int64)EUIInputAction::PrimaryMenuLeft },
				{ "EUIInputAction::PrimaryMenuRight", (int64)EUIInputAction::PrimaryMenuRight },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Back.Name", "EUIInputAction::Back" },
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/EUIInputAction.h" },
				{ "None.Name", "EUIInputAction::None" },
				{ "PrimaryMenuLeft.Name", "EUIInputAction::PrimaryMenuLeft" },
				{ "PrimaryMenuRight.Name", "EUIInputAction::PrimaryMenuRight" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_UserInterface,
				nullptr,
				"EUIInputAction",
				"EUIInputAction",
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
