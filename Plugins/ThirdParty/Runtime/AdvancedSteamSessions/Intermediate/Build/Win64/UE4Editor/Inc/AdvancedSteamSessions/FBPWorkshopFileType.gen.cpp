// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvancedSteamSessions/Public/FBPWorkshopFileType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFBPWorkshopFileType() {}
// Cross Module References
	ADVANCEDSTEAMSESSIONS_API UEnum* Z_Construct_UEnum_AdvancedSteamSessions_FBPWorkshopFileType();
	UPackage* Z_Construct_UPackage__Script_AdvancedSteamSessions();
// End Cross Module References
	static UEnum* FBPWorkshopFileType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AdvancedSteamSessions_FBPWorkshopFileType, Z_Construct_UPackage__Script_AdvancedSteamSessions(), TEXT("FBPWorkshopFileType"));
		}
		return Singleton;
	}
	template<> ADVANCEDSTEAMSESSIONS_API UEnum* StaticEnum<FBPWorkshopFileType>()
	{
		return FBPWorkshopFileType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_FBPWorkshopFileType(FBPWorkshopFileType_StaticEnum, TEXT("/Script/AdvancedSteamSessions"), TEXT("FBPWorkshopFileType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AdvancedSteamSessions_FBPWorkshopFileType_Hash() { return 3857235520U; }
	UEnum* Z_Construct_UEnum_AdvancedSteamSessions_FBPWorkshopFileType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AdvancedSteamSessions();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("FBPWorkshopFileType"), 0, Get_Z_Construct_UEnum_AdvancedSteamSessions_FBPWorkshopFileType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "FBPWorkshopFileType::k_EWorkshopFileTypeCommunity", (int64)FBPWorkshopFileType::k_EWorkshopFileTypeCommunity },
				{ "FBPWorkshopFileType::k_EWorkshopFileTypeMicrotransaction", (int64)FBPWorkshopFileType::k_EWorkshopFileTypeMicrotransaction },
				{ "FBPWorkshopFileType::k_EWorkshopFileTypeCollection", (int64)FBPWorkshopFileType::k_EWorkshopFileTypeCollection },
				{ "FBPWorkshopFileType::k_EWorkshopFileTypeArt", (int64)FBPWorkshopFileType::k_EWorkshopFileTypeArt },
				{ "FBPWorkshopFileType::k_EWorkshopFileTypeVideo", (int64)FBPWorkshopFileType::k_EWorkshopFileTypeVideo },
				{ "FBPWorkshopFileType::k_EWorkshopFileTypeScreenshot", (int64)FBPWorkshopFileType::k_EWorkshopFileTypeScreenshot },
				{ "FBPWorkshopFileType::k_EWorkshopFileTypeGame", (int64)FBPWorkshopFileType::k_EWorkshopFileTypeGame },
				{ "FBPWorkshopFileType::k_EWorkshopFileTypeSoftware", (int64)FBPWorkshopFileType::k_EWorkshopFileTypeSoftware },
				{ "FBPWorkshopFileType::k_EWorkshopFileTypeConcept", (int64)FBPWorkshopFileType::k_EWorkshopFileTypeConcept },
				{ "FBPWorkshopFileType::k_EWorkshopFileTypeWebGuide", (int64)FBPWorkshopFileType::k_EWorkshopFileTypeWebGuide },
				{ "FBPWorkshopFileType::k_EWorkshopFileTypeIntegratedGuide", (int64)FBPWorkshopFileType::k_EWorkshopFileTypeIntegratedGuide },
				{ "FBPWorkshopFileType::k_EWorkshopFileTypeMerch", (int64)FBPWorkshopFileType::k_EWorkshopFileTypeMerch },
				{ "FBPWorkshopFileType::k_EWorkshopFileTypeControllerBinding", (int64)FBPWorkshopFileType::k_EWorkshopFileTypeControllerBinding },
				{ "FBPWorkshopFileType::k_EWorkshopFileTypeSteamworksAccessInvite", (int64)FBPWorkshopFileType::k_EWorkshopFileTypeSteamworksAccessInvite },
				{ "FBPWorkshopFileType::k_EWorkshopFileTypeSteamVideo", (int64)FBPWorkshopFileType::k_EWorkshopFileTypeSteamVideo },
				{ "FBPWorkshopFileType::k_EWorkshopFileTypeMax", (int64)FBPWorkshopFileType::k_EWorkshopFileTypeMax },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "k_EWorkshopFileTypeArt.Name", "FBPWorkshopFileType::k_EWorkshopFileTypeArt" },
				{ "k_EWorkshopFileTypeCollection.Name", "FBPWorkshopFileType::k_EWorkshopFileTypeCollection" },
				{ "k_EWorkshopFileTypeCommunity.Name", "FBPWorkshopFileType::k_EWorkshopFileTypeCommunity" },
				{ "k_EWorkshopFileTypeConcept.Name", "FBPWorkshopFileType::k_EWorkshopFileTypeConcept" },
				{ "k_EWorkshopFileTypeControllerBinding.Name", "FBPWorkshopFileType::k_EWorkshopFileTypeControllerBinding" },
				{ "k_EWorkshopFileTypeGame.Name", "FBPWorkshopFileType::k_EWorkshopFileTypeGame" },
				{ "k_EWorkshopFileTypeIntegratedGuide.Name", "FBPWorkshopFileType::k_EWorkshopFileTypeIntegratedGuide" },
				{ "k_EWorkshopFileTypeMax.Name", "FBPWorkshopFileType::k_EWorkshopFileTypeMax" },
				{ "k_EWorkshopFileTypeMerch.Name", "FBPWorkshopFileType::k_EWorkshopFileTypeMerch" },
				{ "k_EWorkshopFileTypeMicrotransaction.Name", "FBPWorkshopFileType::k_EWorkshopFileTypeMicrotransaction" },
				{ "k_EWorkshopFileTypeScreenshot.Name", "FBPWorkshopFileType::k_EWorkshopFileTypeScreenshot" },
				{ "k_EWorkshopFileTypeSoftware.Name", "FBPWorkshopFileType::k_EWorkshopFileTypeSoftware" },
				{ "k_EWorkshopFileTypeSteamVideo.Name", "FBPWorkshopFileType::k_EWorkshopFileTypeSteamVideo" },
				{ "k_EWorkshopFileTypeSteamworksAccessInvite.Name", "FBPWorkshopFileType::k_EWorkshopFileTypeSteamworksAccessInvite" },
				{ "k_EWorkshopFileTypeVideo.Name", "FBPWorkshopFileType::k_EWorkshopFileTypeVideo" },
				{ "k_EWorkshopFileTypeWebGuide.Name", "FBPWorkshopFileType::k_EWorkshopFileTypeWebGuide" },
				{ "ModuleRelativePath", "Public/FBPWorkshopFileType.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AdvancedSteamSessions,
				nullptr,
				"FBPWorkshopFileType",
				"FBPWorkshopFileType",
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
