// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/ESteamCheckFileSignature.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESteamCheckFileSignature() {}
// Cross Module References
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamCheckFileSignature();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
// End Cross Module References
	static UEnum* ESteamCheckFileSignature_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SteamCore_ESteamCheckFileSignature, Z_Construct_UPackage__Script_SteamCore(), TEXT("ESteamCheckFileSignature"));
		}
		return Singleton;
	}
	template<> STEAMCORE_API UEnum* StaticEnum<ESteamCheckFileSignature>()
	{
		return ESteamCheckFileSignature_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESteamCheckFileSignature(ESteamCheckFileSignature_StaticEnum, TEXT("/Script/SteamCore"), TEXT("ESteamCheckFileSignature"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SteamCore_ESteamCheckFileSignature_Hash() { return 3718622889U; }
	UEnum* Z_Construct_UEnum_SteamCore_ESteamCheckFileSignature()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESteamCheckFileSignature"), 0, Get_Z_Construct_UEnum_SteamCore_ESteamCheckFileSignature_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESteamCheckFileSignature::InvalidSignature", (int64)ESteamCheckFileSignature::InvalidSignature },
				{ "ESteamCheckFileSignature::ValidSignature", (int64)ESteamCheckFileSignature::ValidSignature },
				{ "ESteamCheckFileSignature::FileNotFound", (int64)ESteamCheckFileSignature::FileNotFound },
				{ "ESteamCheckFileSignature::NoSignaturesFoundForThisApp", (int64)ESteamCheckFileSignature::NoSignaturesFoundForThisApp },
				{ "ESteamCheckFileSignature::NoSignaturesFoundForThisFile", (int64)ESteamCheckFileSignature::NoSignaturesFoundForThisFile },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "FileNotFound.Name", "ESteamCheckFileSignature::FileNotFound" },
				{ "InvalidSignature.Name", "ESteamCheckFileSignature::InvalidSignature" },
				{ "ModuleRelativePath", "Public/ESteamCheckFileSignature.h" },
				{ "NoSignaturesFoundForThisApp.Name", "ESteamCheckFileSignature::NoSignaturesFoundForThisApp" },
				{ "NoSignaturesFoundForThisFile.Name", "ESteamCheckFileSignature::NoSignaturesFoundForThisFile" },
				{ "ValidSignature.Name", "ESteamCheckFileSignature::ValidSignature" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SteamCore,
				nullptr,
				"ESteamCheckFileSignature",
				"ESteamCheckFileSignature",
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
