// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvancedSteamSessions/Public/EBPTextFilteringContext.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEBPTextFilteringContext() {}
// Cross Module References
	ADVANCEDSTEAMSESSIONS_API UEnum* Z_Construct_UEnum_AdvancedSteamSessions_EBPTextFilteringContext();
	UPackage* Z_Construct_UPackage__Script_AdvancedSteamSessions();
// End Cross Module References
	static UEnum* EBPTextFilteringContext_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AdvancedSteamSessions_EBPTextFilteringContext, Z_Construct_UPackage__Script_AdvancedSteamSessions(), TEXT("EBPTextFilteringContext"));
		}
		return Singleton;
	}
	template<> ADVANCEDSTEAMSESSIONS_API UEnum* StaticEnum<EBPTextFilteringContext>()
	{
		return EBPTextFilteringContext_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBPTextFilteringContext(EBPTextFilteringContext_StaticEnum, TEXT("/Script/AdvancedSteamSessions"), TEXT("EBPTextFilteringContext"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AdvancedSteamSessions_EBPTextFilteringContext_Hash() { return 746936283U; }
	UEnum* Z_Construct_UEnum_AdvancedSteamSessions_EBPTextFilteringContext()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AdvancedSteamSessions();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBPTextFilteringContext"), 0, Get_Z_Construct_UEnum_AdvancedSteamSessions_EBPTextFilteringContext_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EBPTextFilteringContext::FContext_Unknown", (int64)EBPTextFilteringContext::FContext_Unknown },
				{ "EBPTextFilteringContext::FContext_GameContent", (int64)EBPTextFilteringContext::FContext_GameContent },
				{ "EBPTextFilteringContext::FContext_Chat", (int64)EBPTextFilteringContext::FContext_Chat },
				{ "EBPTextFilteringContext::FContext_Name", (int64)EBPTextFilteringContext::FContext_Name },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "FContext_Chat.Name", "EBPTextFilteringContext::FContext_Chat" },
				{ "FContext_GameContent.Name", "EBPTextFilteringContext::FContext_GameContent" },
				{ "FContext_Name.Name", "EBPTextFilteringContext::FContext_Name" },
				{ "FContext_Unknown.Name", "EBPTextFilteringContext::FContext_Unknown" },
				{ "ModuleRelativePath", "Public/EBPTextFilteringContext.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AdvancedSteamSessions,
				nullptr,
				"EBPTextFilteringContext",
				"EBPTextFilteringContext",
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
