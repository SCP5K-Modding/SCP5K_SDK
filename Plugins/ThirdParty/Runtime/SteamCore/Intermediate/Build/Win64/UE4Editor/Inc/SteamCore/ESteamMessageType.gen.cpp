// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/ESteamMessageType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESteamMessageType() {}
// Cross Module References
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamMessageType();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
// End Cross Module References
	static UEnum* ESteamMessageType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SteamCore_ESteamMessageType, Z_Construct_UPackage__Script_SteamCore(), TEXT("ESteamMessageType"));
		}
		return Singleton;
	}
	template<> STEAMCORE_API UEnum* StaticEnum<ESteamMessageType>()
	{
		return ESteamMessageType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESteamMessageType(ESteamMessageType_StaticEnum, TEXT("/Script/SteamCore"), TEXT("ESteamMessageType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SteamCore_ESteamMessageType_Hash() { return 844902346U; }
	UEnum* Z_Construct_UEnum_SteamCore_ESteamMessageType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESteamMessageType"), 0, Get_Z_Construct_UEnum_SteamCore_ESteamMessageType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESteamMessageType::ENotification", (int64)ESteamMessageType::ENotification },
				{ "ESteamMessageType::EMessage", (int64)ESteamMessageType::EMessage },
				{ "ESteamMessageType::EWarning", (int64)ESteamMessageType::EWarning },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "EMessage.Name", "ESteamMessageType::EMessage" },
				{ "ENotification.Name", "ESteamMessageType::ENotification" },
				{ "EWarning.Name", "ESteamMessageType::EWarning" },
				{ "ModuleRelativePath", "Public/ESteamMessageType.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SteamCore,
				nullptr,
				"ESteamMessageType",
				"ESteamMessageType",
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
