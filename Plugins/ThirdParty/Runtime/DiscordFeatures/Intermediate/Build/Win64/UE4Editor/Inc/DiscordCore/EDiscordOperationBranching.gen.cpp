// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DiscordCore/Public/EDiscordOperationBranching.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEDiscordOperationBranching() {}
// Cross Module References
	DISCORDCORE_API UEnum* Z_Construct_UEnum_DiscordCore_EDiscordOperationBranching();
	UPackage* Z_Construct_UPackage__Script_DiscordCore();
// End Cross Module References
	static UEnum* EDiscordOperationBranching_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DiscordCore_EDiscordOperationBranching, Z_Construct_UPackage__Script_DiscordCore(), TEXT("EDiscordOperationBranching"));
		}
		return Singleton;
	}
	template<> DISCORDCORE_API UEnum* StaticEnum<EDiscordOperationBranching>()
	{
		return EDiscordOperationBranching_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EDiscordOperationBranching(EDiscordOperationBranching_StaticEnum, TEXT("/Script/DiscordCore"), TEXT("EDiscordOperationBranching"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DiscordCore_EDiscordOperationBranching_Hash() { return 900740111U; }
	UEnum* Z_Construct_UEnum_DiscordCore_EDiscordOperationBranching()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DiscordCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EDiscordOperationBranching"), 0, Get_Z_Construct_UEnum_DiscordCore_EDiscordOperationBranching_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EDiscordOperationBranching::Success", (int64)EDiscordOperationBranching::Success },
				{ "EDiscordOperationBranching::Error", (int64)EDiscordOperationBranching::Error },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Error.Name", "EDiscordOperationBranching::Error" },
				{ "ModuleRelativePath", "Public/EDiscordOperationBranching.h" },
				{ "Success.Name", "EDiscordOperationBranching::Success" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DiscordCore,
				nullptr,
				"EDiscordOperationBranching",
				"EDiscordOperationBranching",
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
