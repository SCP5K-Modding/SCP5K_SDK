// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Electronics/Public/EElectronicProperty.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEElectronicProperty() {}
// Cross Module References
	ELECTRONICS_API UEnum* Z_Construct_UEnum_Electronics_EElectronicProperty();
	UPackage* Z_Construct_UPackage__Script_Electronics();
// End Cross Module References
	static UEnum* EElectronicProperty_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Electronics_EElectronicProperty, Z_Construct_UPackage__Script_Electronics(), TEXT("EElectronicProperty"));
		}
		return Singleton;
	}
	template<> ELECTRONICS_API UEnum* StaticEnum<EElectronicProperty>()
	{
		return EElectronicProperty_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EElectronicProperty(EElectronicProperty_StaticEnum, TEXT("/Script/Electronics"), TEXT("EElectronicProperty"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Electronics_EElectronicProperty_Hash() { return 407887591U; }
	UEnum* Z_Construct_UEnum_Electronics_EElectronicProperty()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Electronics();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EElectronicProperty"), 0, Get_Z_Construct_UEnum_Electronics_EElectronicProperty_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EElectronicProperty::None", (int64)EElectronicProperty::None },
				{ "EElectronicProperty::Enabled", (int64)EElectronicProperty::Enabled },
				{ "EElectronicProperty::Powered", (int64)EElectronicProperty::Powered },
				{ "EElectronicProperty::Locked", (int64)EElectronicProperty::Locked },
				{ "EElectronicProperty::Broken", (int64)EElectronicProperty::Broken },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Broken.Name", "EElectronicProperty::Broken" },
				{ "Enabled.Name", "EElectronicProperty::Enabled" },
				{ "Locked.Name", "EElectronicProperty::Locked" },
				{ "ModuleRelativePath", "Public/EElectronicProperty.h" },
				{ "None.Name", "EElectronicProperty::None" },
				{ "Powered.Name", "EElectronicProperty::Powered" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Electronics,
				nullptr,
				"EElectronicProperty",
				"EElectronicProperty",
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
