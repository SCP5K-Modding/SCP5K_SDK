// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AIUtils/Public/ETaskManagerTaskType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeETaskManagerTaskType() {}
// Cross Module References
	AIUTILS_API UEnum* Z_Construct_UEnum_AIUtils_ETaskManagerTaskType();
	UPackage* Z_Construct_UPackage__Script_AIUtils();
// End Cross Module References
	static UEnum* ETaskManagerTaskType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AIUtils_ETaskManagerTaskType, Z_Construct_UPackage__Script_AIUtils(), TEXT("ETaskManagerTaskType"));
		}
		return Singleton;
	}
	template<> AIUTILS_API UEnum* StaticEnum<ETaskManagerTaskType>()
	{
		return ETaskManagerTaskType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETaskManagerTaskType(ETaskManagerTaskType_StaticEnum, TEXT("/Script/AIUtils"), TEXT("ETaskManagerTaskType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AIUtils_ETaskManagerTaskType_Hash() { return 150267706U; }
	UEnum* Z_Construct_UEnum_AIUtils_ETaskManagerTaskType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AIUtils();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETaskManagerTaskType"), 0, Get_Z_Construct_UEnum_AIUtils_ETaskManagerTaskType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ETaskManagerTaskType::ETMTT_HighPriority", (int64)ETaskManagerTaskType::ETMTT_HighPriority },
				{ "ETaskManagerTaskType::ETMTT_General", (int64)ETaskManagerTaskType::ETMTT_General },
				{ "ETaskManagerTaskType::ETMTT_Auto", (int64)ETaskManagerTaskType::ETMTT_Auto },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ETMTT_Auto.Name", "ETaskManagerTaskType::ETMTT_Auto" },
				{ "ETMTT_General.Name", "ETaskManagerTaskType::ETMTT_General" },
				{ "ETMTT_HighPriority.Name", "ETaskManagerTaskType::ETMTT_HighPriority" },
				{ "ModuleRelativePath", "Public/ETaskManagerTaskType.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AIUtils,
				nullptr,
				"ETaskManagerTaskType",
				"ETaskManagerTaskType",
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
