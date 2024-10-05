// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AISentience/Public/ECoverFiringOptions.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeECoverFiringOptions() {}
// Cross Module References
	AISENTIENCE_API UEnum* Z_Construct_UEnum_AISentience_ECoverFiringOptions();
	UPackage* Z_Construct_UPackage__Script_AISentience();
// End Cross Module References
	static UEnum* ECoverFiringOptions_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AISentience_ECoverFiringOptions, Z_Construct_UPackage__Script_AISentience(), TEXT("ECoverFiringOptions"));
		}
		return Singleton;
	}
	template<> AISENTIENCE_API UEnum* StaticEnum<ECoverFiringOptions>()
	{
		return ECoverFiringOptions_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECoverFiringOptions(ECoverFiringOptions_StaticEnum, TEXT("/Script/AISentience"), TEXT("ECoverFiringOptions"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AISentience_ECoverFiringOptions_Hash() { return 1382392040U; }
	UEnum* Z_Construct_UEnum_AISentience_ECoverFiringOptions()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AISentience();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECoverFiringOptions"), 0, Get_Z_Construct_UEnum_AISentience_ECoverFiringOptions_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ECoverFiringOptions::None", (int64)ECoverFiringOptions::None },
				{ "ECoverFiringOptions::Over", (int64)ECoverFiringOptions::Over },
				{ "ECoverFiringOptions::Left", (int64)ECoverFiringOptions::Left },
				{ "ECoverFiringOptions::Right", (int64)ECoverFiringOptions::Right },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Left.Name", "ECoverFiringOptions::Left" },
				{ "ModuleRelativePath", "Public/ECoverFiringOptions.h" },
				{ "None.Name", "ECoverFiringOptions::None" },
				{ "Over.Name", "ECoverFiringOptions::Over" },
				{ "Right.Name", "ECoverFiringOptions::Right" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AISentience,
				nullptr,
				"ECoverFiringOptions",
				"ECoverFiringOptions",
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
