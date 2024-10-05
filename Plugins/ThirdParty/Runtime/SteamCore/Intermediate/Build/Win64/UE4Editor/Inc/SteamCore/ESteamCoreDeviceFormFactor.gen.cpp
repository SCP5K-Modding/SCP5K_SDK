// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/ESteamCoreDeviceFormFactor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESteamCoreDeviceFormFactor() {}
// Cross Module References
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamCoreDeviceFormFactor();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
// End Cross Module References
	static UEnum* ESteamCoreDeviceFormFactor_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SteamCore_ESteamCoreDeviceFormFactor, Z_Construct_UPackage__Script_SteamCore(), TEXT("ESteamCoreDeviceFormFactor"));
		}
		return Singleton;
	}
	template<> STEAMCORE_API UEnum* StaticEnum<ESteamCoreDeviceFormFactor>()
	{
		return ESteamCoreDeviceFormFactor_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESteamCoreDeviceFormFactor(ESteamCoreDeviceFormFactor_StaticEnum, TEXT("/Script/SteamCore"), TEXT("ESteamCoreDeviceFormFactor"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SteamCore_ESteamCoreDeviceFormFactor_Hash() { return 2000478750U; }
	UEnum* Z_Construct_UEnum_SteamCore_ESteamCoreDeviceFormFactor()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESteamCoreDeviceFormFactor"), 0, Get_Z_Construct_UEnum_SteamCore_ESteamCoreDeviceFormFactor_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESteamCoreDeviceFormFactor::Unknown", (int64)ESteamCoreDeviceFormFactor::Unknown },
				{ "ESteamCoreDeviceFormFactor::Phone", (int64)ESteamCoreDeviceFormFactor::Phone },
				{ "ESteamCoreDeviceFormFactor::Tablet", (int64)ESteamCoreDeviceFormFactor::Tablet },
				{ "ESteamCoreDeviceFormFactor::Computer", (int64)ESteamCoreDeviceFormFactor::Computer },
				{ "ESteamCoreDeviceFormFactor::TV", (int64)ESteamCoreDeviceFormFactor::TV },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Computer.Name", "ESteamCoreDeviceFormFactor::Computer" },
				{ "ModuleRelativePath", "Public/ESteamCoreDeviceFormFactor.h" },
				{ "Phone.Name", "ESteamCoreDeviceFormFactor::Phone" },
				{ "Tablet.Name", "ESteamCoreDeviceFormFactor::Tablet" },
				{ "TV.Name", "ESteamCoreDeviceFormFactor::TV" },
				{ "Unknown.Name", "ESteamCoreDeviceFormFactor::Unknown" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SteamCore,
				nullptr,
				"ESteamCoreDeviceFormFactor",
				"ESteamCoreDeviceFormFactor",
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
