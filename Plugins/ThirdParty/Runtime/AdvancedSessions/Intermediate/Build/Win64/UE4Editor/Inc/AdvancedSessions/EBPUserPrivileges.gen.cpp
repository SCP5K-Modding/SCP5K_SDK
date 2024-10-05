// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvancedSessions/Public/EBPUserPrivileges.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEBPUserPrivileges() {}
// Cross Module References
	ADVANCEDSESSIONS_API UEnum* Z_Construct_UEnum_AdvancedSessions_EBPUserPrivileges();
	UPackage* Z_Construct_UPackage__Script_AdvancedSessions();
// End Cross Module References
	static UEnum* EBPUserPrivileges_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AdvancedSessions_EBPUserPrivileges, Z_Construct_UPackage__Script_AdvancedSessions(), TEXT("EBPUserPrivileges"));
		}
		return Singleton;
	}
	template<> ADVANCEDSESSIONS_API UEnum* StaticEnum<EBPUserPrivileges>()
	{
		return EBPUserPrivileges_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBPUserPrivileges(EBPUserPrivileges_StaticEnum, TEXT("/Script/AdvancedSessions"), TEXT("EBPUserPrivileges"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AdvancedSessions_EBPUserPrivileges_Hash() { return 380578956U; }
	UEnum* Z_Construct_UEnum_AdvancedSessions_EBPUserPrivileges()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AdvancedSessions();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBPUserPrivileges"), 0, Get_Z_Construct_UEnum_AdvancedSessions_EBPUserPrivileges_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EBPUserPrivileges::CanPlay", (int64)EBPUserPrivileges::CanPlay },
				{ "EBPUserPrivileges::CanPlayOnline", (int64)EBPUserPrivileges::CanPlayOnline },
				{ "EBPUserPrivileges::CanCommunicateOnline", (int64)EBPUserPrivileges::CanCommunicateOnline },
				{ "EBPUserPrivileges::CanUseUserGeneratedContent", (int64)EBPUserPrivileges::CanUseUserGeneratedContent },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "CanCommunicateOnline.Name", "EBPUserPrivileges::CanCommunicateOnline" },
				{ "CanPlay.Name", "EBPUserPrivileges::CanPlay" },
				{ "CanPlayOnline.Name", "EBPUserPrivileges::CanPlayOnline" },
				{ "CanUseUserGeneratedContent.Name", "EBPUserPrivileges::CanUseUserGeneratedContent" },
				{ "ModuleRelativePath", "Public/EBPUserPrivileges.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AdvancedSessions,
				nullptr,
				"EBPUserPrivileges",
				"EBPUserPrivileges",
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
