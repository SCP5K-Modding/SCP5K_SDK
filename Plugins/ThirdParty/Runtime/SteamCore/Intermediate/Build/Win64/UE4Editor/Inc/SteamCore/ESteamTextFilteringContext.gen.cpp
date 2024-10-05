// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/ESteamTextFilteringContext.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESteamTextFilteringContext() {}
// Cross Module References
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamTextFilteringContext();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
// End Cross Module References
	static UEnum* ESteamTextFilteringContext_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SteamCore_ESteamTextFilteringContext, Z_Construct_UPackage__Script_SteamCore(), TEXT("ESteamTextFilteringContext"));
		}
		return Singleton;
	}
	template<> STEAMCORE_API UEnum* StaticEnum<ESteamTextFilteringContext>()
	{
		return ESteamTextFilteringContext_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESteamTextFilteringContext(ESteamTextFilteringContext_StaticEnum, TEXT("/Script/SteamCore"), TEXT("ESteamTextFilteringContext"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SteamCore_ESteamTextFilteringContext_Hash() { return 2688654509U; }
	UEnum* Z_Construct_UEnum_SteamCore_ESteamTextFilteringContext()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESteamTextFilteringContext"), 0, Get_Z_Construct_UEnum_SteamCore_ESteamTextFilteringContext_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESteamTextFilteringContext::k_ETextFilteringContextUnknown", (int64)ESteamTextFilteringContext::k_ETextFilteringContextUnknown },
				{ "ESteamTextFilteringContext::k_ETextFilteringContextGameContent", (int64)ESteamTextFilteringContext::k_ETextFilteringContextGameContent },
				{ "ESteamTextFilteringContext::k_ETextFilteringContextChat", (int64)ESteamTextFilteringContext::k_ETextFilteringContextChat },
				{ "ESteamTextFilteringContext::k_ETextFilteringContextName", (int64)ESteamTextFilteringContext::k_ETextFilteringContextName },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "k_ETextFilteringContextChat.Name", "ESteamTextFilteringContext::k_ETextFilteringContextChat" },
				{ "k_ETextFilteringContextGameContent.Name", "ESteamTextFilteringContext::k_ETextFilteringContextGameContent" },
				{ "k_ETextFilteringContextName.Name", "ESteamTextFilteringContext::k_ETextFilteringContextName" },
				{ "k_ETextFilteringContextUnknown.Name", "ESteamTextFilteringContext::k_ETextFilteringContextUnknown" },
				{ "ModuleRelativePath", "Public/ESteamTextFilteringContext.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SteamCore,
				nullptr,
				"ESteamTextFilteringContext",
				"ESteamTextFilteringContext",
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
