// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Electronics/Public/ESwitchResetMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESwitchResetMode() {}
// Cross Module References
	ELECTRONICS_API UEnum* Z_Construct_UEnum_Electronics_ESwitchResetMode();
	UPackage* Z_Construct_UPackage__Script_Electronics();
// End Cross Module References
	static UEnum* ESwitchResetMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Electronics_ESwitchResetMode, Z_Construct_UPackage__Script_Electronics(), TEXT("ESwitchResetMode"));
		}
		return Singleton;
	}
	template<> ELECTRONICS_API UEnum* StaticEnum<ESwitchResetMode>()
	{
		return ESwitchResetMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESwitchResetMode(ESwitchResetMode_StaticEnum, TEXT("/Script/Electronics"), TEXT("ESwitchResetMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Electronics_ESwitchResetMode_Hash() { return 3774026663U; }
	UEnum* Z_Construct_UEnum_Electronics_ESwitchResetMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Electronics();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESwitchResetMode"), 0, Get_Z_Construct_UEnum_Electronics_ESwitchResetMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ActivateTimerEachInput", (int64)ActivateTimerEachInput },
				{ "ActivateTimerOnEnable", (int64)ActivateTimerOnEnable },
				{ "ActivateTimerOnFirstInput", (int64)ActivateTimerOnFirstInput },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ActivateTimerEachInput.Name", "ActivateTimerEachInput" },
				{ "ActivateTimerOnEnable.Name", "ActivateTimerOnEnable" },
				{ "ActivateTimerOnFirstInput.Name", "ActivateTimerOnFirstInput" },
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/ESwitchResetMode.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Electronics,
				nullptr,
				"ESwitchResetMode",
				"ESwitchResetMode",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
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
