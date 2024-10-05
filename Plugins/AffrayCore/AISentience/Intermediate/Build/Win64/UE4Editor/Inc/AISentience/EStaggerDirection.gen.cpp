// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AISentience/Public/EStaggerDirection.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEStaggerDirection() {}
// Cross Module References
	AISENTIENCE_API UEnum* Z_Construct_UEnum_AISentience_EStaggerDirection();
	UPackage* Z_Construct_UPackage__Script_AISentience();
// End Cross Module References
	static UEnum* EStaggerDirection_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AISentience_EStaggerDirection, Z_Construct_UPackage__Script_AISentience(), TEXT("EStaggerDirection"));
		}
		return Singleton;
	}
	template<> AISENTIENCE_API UEnum* StaticEnum<EStaggerDirection>()
	{
		return EStaggerDirection_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EStaggerDirection(EStaggerDirection_StaticEnum, TEXT("/Script/AISentience"), TEXT("EStaggerDirection"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AISentience_EStaggerDirection_Hash() { return 2186569673U; }
	UEnum* Z_Construct_UEnum_AISentience_EStaggerDirection()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AISentience();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EStaggerDirection"), 0, Get_Z_Construct_UEnum_AISentience_EStaggerDirection_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EStaggerDirection::None", (int64)EStaggerDirection::None },
				{ "EStaggerDirection::Left", (int64)EStaggerDirection::Left },
				{ "EStaggerDirection::Right", (int64)EStaggerDirection::Right },
				{ "EStaggerDirection::Back", (int64)EStaggerDirection::Back },
				{ "EStaggerDirection::Front", (int64)EStaggerDirection::Front },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Back.Name", "EStaggerDirection::Back" },
				{ "BlueprintType", "true" },
				{ "Front.Name", "EStaggerDirection::Front" },
				{ "Left.Name", "EStaggerDirection::Left" },
				{ "ModuleRelativePath", "Public/EStaggerDirection.h" },
				{ "None.Name", "EStaggerDirection::None" },
				{ "Right.Name", "EStaggerDirection::Right" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AISentience,
				nullptr,
				"EStaggerDirection",
				"EStaggerDirection",
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
