// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UIUtilities/Public/EUIVisibility.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEUIVisibility() {}
// Cross Module References
	UIUTILITIES_API UEnum* Z_Construct_UEnum_UIUtilities_EUIVisibility();
	UPackage* Z_Construct_UPackage__Script_UIUtilities();
// End Cross Module References
	static UEnum* EUIVisibility_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_UIUtilities_EUIVisibility, Z_Construct_UPackage__Script_UIUtilities(), TEXT("EUIVisibility"));
		}
		return Singleton;
	}
	template<> UIUTILITIES_API UEnum* StaticEnum<EUIVisibility>()
	{
		return EUIVisibility_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EUIVisibility(EUIVisibility_StaticEnum, TEXT("/Script/UIUtilities"), TEXT("EUIVisibility"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_UIUtilities_EUIVisibility_Hash() { return 108345900U; }
	UEnum* Z_Construct_UEnum_UIUtilities_EUIVisibility()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_UIUtilities();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EUIVisibility"), 0, Get_Z_Construct_UEnum_UIUtilities_EUIVisibility_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EUIVisibility::AlwaysVisible", (int64)EUIVisibility::AlwaysVisible },
				{ "EUIVisibility::VisibleWhenNeeded", (int64)EUIVisibility::VisibleWhenNeeded },
				{ "EUIVisibility::NeverVisible", (int64)EUIVisibility::NeverVisible },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AlwaysVisible.Name", "EUIVisibility::AlwaysVisible" },
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/EUIVisibility.h" },
				{ "NeverVisible.Name", "EUIVisibility::NeverVisible" },
				{ "VisibleWhenNeeded.Name", "EUIVisibility::VisibleWhenNeeded" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_UIUtilities,
				nullptr,
				"EUIVisibility",
				"EUIVisibility",
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
