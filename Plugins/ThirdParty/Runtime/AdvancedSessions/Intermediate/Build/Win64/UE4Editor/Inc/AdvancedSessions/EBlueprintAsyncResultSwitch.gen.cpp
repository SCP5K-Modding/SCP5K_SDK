// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvancedSessions/Public/EBlueprintAsyncResultSwitch.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEBlueprintAsyncResultSwitch() {}
// Cross Module References
	ADVANCEDSESSIONS_API UEnum* Z_Construct_UEnum_AdvancedSessions_EBlueprintAsyncResultSwitch();
	UPackage* Z_Construct_UPackage__Script_AdvancedSessions();
// End Cross Module References
	static UEnum* EBlueprintAsyncResultSwitch_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AdvancedSessions_EBlueprintAsyncResultSwitch, Z_Construct_UPackage__Script_AdvancedSessions(), TEXT("EBlueprintAsyncResultSwitch"));
		}
		return Singleton;
	}
	template<> ADVANCEDSESSIONS_API UEnum* StaticEnum<EBlueprintAsyncResultSwitch>()
	{
		return EBlueprintAsyncResultSwitch_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBlueprintAsyncResultSwitch(EBlueprintAsyncResultSwitch_StaticEnum, TEXT("/Script/AdvancedSessions"), TEXT("EBlueprintAsyncResultSwitch"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AdvancedSessions_EBlueprintAsyncResultSwitch_Hash() { return 3121637608U; }
	UEnum* Z_Construct_UEnum_AdvancedSessions_EBlueprintAsyncResultSwitch()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AdvancedSessions();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBlueprintAsyncResultSwitch"), 0, Get_Z_Construct_UEnum_AdvancedSessions_EBlueprintAsyncResultSwitch_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EBlueprintAsyncResultSwitch::OnSuccess", (int64)EBlueprintAsyncResultSwitch::OnSuccess },
				{ "EBlueprintAsyncResultSwitch::AsyncLoading", (int64)EBlueprintAsyncResultSwitch::AsyncLoading },
				{ "EBlueprintAsyncResultSwitch::OnFailure", (int64)EBlueprintAsyncResultSwitch::OnFailure },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AsyncLoading.Name", "EBlueprintAsyncResultSwitch::AsyncLoading" },
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/EBlueprintAsyncResultSwitch.h" },
				{ "OnFailure.Name", "EBlueprintAsyncResultSwitch::OnFailure" },
				{ "OnSuccess.Name", "EBlueprintAsyncResultSwitch::OnSuccess" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AdvancedSessions,
				nullptr,
				"EBlueprintAsyncResultSwitch",
				"EBlueprintAsyncResultSwitch",
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
