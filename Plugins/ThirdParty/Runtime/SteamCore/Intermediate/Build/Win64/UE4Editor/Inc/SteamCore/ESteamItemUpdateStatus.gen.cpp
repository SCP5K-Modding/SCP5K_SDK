// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/ESteamItemUpdateStatus.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESteamItemUpdateStatus() {}
// Cross Module References
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamItemUpdateStatus();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
// End Cross Module References
	static UEnum* ESteamItemUpdateStatus_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SteamCore_ESteamItemUpdateStatus, Z_Construct_UPackage__Script_SteamCore(), TEXT("ESteamItemUpdateStatus"));
		}
		return Singleton;
	}
	template<> STEAMCORE_API UEnum* StaticEnum<ESteamItemUpdateStatus>()
	{
		return ESteamItemUpdateStatus_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESteamItemUpdateStatus(ESteamItemUpdateStatus_StaticEnum, TEXT("/Script/SteamCore"), TEXT("ESteamItemUpdateStatus"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SteamCore_ESteamItemUpdateStatus_Hash() { return 4065871316U; }
	UEnum* Z_Construct_UEnum_SteamCore_ESteamItemUpdateStatus()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESteamItemUpdateStatus"), 0, Get_Z_Construct_UEnum_SteamCore_ESteamItemUpdateStatus_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESteamItemUpdateStatus::Invalid", (int64)ESteamItemUpdateStatus::Invalid },
				{ "ESteamItemUpdateStatus::PreparingConfig", (int64)ESteamItemUpdateStatus::PreparingConfig },
				{ "ESteamItemUpdateStatus::PreparingContent", (int64)ESteamItemUpdateStatus::PreparingContent },
				{ "ESteamItemUpdateStatus::UploadingContent", (int64)ESteamItemUpdateStatus::UploadingContent },
				{ "ESteamItemUpdateStatus::UploadingPreviewFile", (int64)ESteamItemUpdateStatus::UploadingPreviewFile },
				{ "ESteamItemUpdateStatus::CommittingChanges", (int64)ESteamItemUpdateStatus::CommittingChanges },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "CommittingChanges.Name", "ESteamItemUpdateStatus::CommittingChanges" },
				{ "Invalid.Name", "ESteamItemUpdateStatus::Invalid" },
				{ "ModuleRelativePath", "Public/ESteamItemUpdateStatus.h" },
				{ "PreparingConfig.Name", "ESteamItemUpdateStatus::PreparingConfig" },
				{ "PreparingContent.Name", "ESteamItemUpdateStatus::PreparingContent" },
				{ "UploadingContent.Name", "ESteamItemUpdateStatus::UploadingContent" },
				{ "UploadingPreviewFile.Name", "ESteamItemUpdateStatus::UploadingPreviewFile" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SteamCore,
				nullptr,
				"ESteamItemUpdateStatus",
				"ESteamItemUpdateStatus",
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
