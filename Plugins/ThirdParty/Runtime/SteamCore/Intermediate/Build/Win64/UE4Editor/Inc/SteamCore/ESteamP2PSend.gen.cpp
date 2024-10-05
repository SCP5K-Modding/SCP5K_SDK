// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/ESteamP2PSend.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESteamP2PSend() {}
// Cross Module References
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamP2PSend();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
// End Cross Module References
	static UEnum* ESteamP2PSend_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SteamCore_ESteamP2PSend, Z_Construct_UPackage__Script_SteamCore(), TEXT("ESteamP2PSend"));
		}
		return Singleton;
	}
	template<> STEAMCORE_API UEnum* StaticEnum<ESteamP2PSend>()
	{
		return ESteamP2PSend_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESteamP2PSend(ESteamP2PSend_StaticEnum, TEXT("/Script/SteamCore"), TEXT("ESteamP2PSend"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SteamCore_ESteamP2PSend_Hash() { return 4090054894U; }
	UEnum* Z_Construct_UEnum_SteamCore_ESteamP2PSend()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESteamP2PSend"), 0, Get_Z_Construct_UEnum_SteamCore_ESteamP2PSend_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESteamP2PSend::Unreliable", (int64)ESteamP2PSend::Unreliable },
				{ "ESteamP2PSend::UnreliableNoDelay", (int64)ESteamP2PSend::UnreliableNoDelay },
				{ "ESteamP2PSend::Reliable", (int64)ESteamP2PSend::Reliable },
				{ "ESteamP2PSend::ReliableWithBuffering", (int64)ESteamP2PSend::ReliableWithBuffering },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/ESteamP2PSend.h" },
				{ "Reliable.Name", "ESteamP2PSend::Reliable" },
				{ "ReliableWithBuffering.Name", "ESteamP2PSend::ReliableWithBuffering" },
				{ "Unreliable.Name", "ESteamP2PSend::Unreliable" },
				{ "UnreliableNoDelay.Name", "ESteamP2PSend::UnreliableNoDelay" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SteamCore,
				nullptr,
				"ESteamP2PSend",
				"ESteamP2PSend",
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
