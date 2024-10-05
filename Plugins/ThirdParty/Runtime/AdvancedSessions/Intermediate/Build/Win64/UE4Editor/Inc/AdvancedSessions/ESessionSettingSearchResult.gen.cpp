// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvancedSessions/Public/ESessionSettingSearchResult.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESessionSettingSearchResult() {}
// Cross Module References
	ADVANCEDSESSIONS_API UEnum* Z_Construct_UEnum_AdvancedSessions_ESessionSettingSearchResult();
	UPackage* Z_Construct_UPackage__Script_AdvancedSessions();
// End Cross Module References
	static UEnum* ESessionSettingSearchResult_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AdvancedSessions_ESessionSettingSearchResult, Z_Construct_UPackage__Script_AdvancedSessions(), TEXT("ESessionSettingSearchResult"));
		}
		return Singleton;
	}
	template<> ADVANCEDSESSIONS_API UEnum* StaticEnum<ESessionSettingSearchResult>()
	{
		return ESessionSettingSearchResult_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESessionSettingSearchResult(ESessionSettingSearchResult_StaticEnum, TEXT("/Script/AdvancedSessions"), TEXT("ESessionSettingSearchResult"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AdvancedSessions_ESessionSettingSearchResult_Hash() { return 3296854389U; }
	UEnum* Z_Construct_UEnum_AdvancedSessions_ESessionSettingSearchResult()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AdvancedSessions();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESessionSettingSearchResult"), 0, Get_Z_Construct_UEnum_AdvancedSessions_ESessionSettingSearchResult_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESessionSettingSearchResult::Found", (int64)ESessionSettingSearchResult::Found },
				{ "ESessionSettingSearchResult::NotFound", (int64)ESessionSettingSearchResult::NotFound },
				{ "ESessionSettingSearchResult::WrongType", (int64)ESessionSettingSearchResult::WrongType },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Found.Name", "ESessionSettingSearchResult::Found" },
				{ "ModuleRelativePath", "Public/ESessionSettingSearchResult.h" },
				{ "NotFound.Name", "ESessionSettingSearchResult::NotFound" },
				{ "WrongType.Name", "ESessionSettingSearchResult::WrongType" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AdvancedSessions,
				nullptr,
				"ESessionSettingSearchResult",
				"ESessionSettingSearchResult",
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
