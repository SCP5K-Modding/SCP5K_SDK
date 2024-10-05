// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayConsole/Public/EArgumentType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEArgumentType() {}
// Cross Module References
	GAMEPLAYCONSOLE_API UEnum* Z_Construct_UEnum_GameplayConsole_EArgumentType();
	UPackage* Z_Construct_UPackage__Script_GameplayConsole();
// End Cross Module References
	static UEnum* EArgumentType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_GameplayConsole_EArgumentType, Z_Construct_UPackage__Script_GameplayConsole(), TEXT("EArgumentType"));
		}
		return Singleton;
	}
	template<> GAMEPLAYCONSOLE_API UEnum* StaticEnum<EArgumentType>()
	{
		return EArgumentType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EArgumentType(EArgumentType_StaticEnum, TEXT("/Script/GameplayConsole"), TEXT("EArgumentType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_GameplayConsole_EArgumentType_Hash() { return 3941325039U; }
	UEnum* Z_Construct_UEnum_GameplayConsole_EArgumentType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_GameplayConsole();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EArgumentType"), 0, Get_Z_Construct_UEnum_GameplayConsole_EArgumentType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "AT_Bool", (int64)AT_Bool },
				{ "AT_Int", (int64)AT_Int },
				{ "AT_Float", (int64)AT_Float },
				{ "AT_String", (int64)AT_String },
				{ "AT_Name", (int64)AT_Name },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AT_Bool.Name", "AT_Bool" },
				{ "AT_Float.Name", "AT_Float" },
				{ "AT_Int.Name", "AT_Int" },
				{ "AT_Name.Name", "AT_Name" },
				{ "AT_String.Name", "AT_String" },
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/EArgumentType.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_GameplayConsole,
				nullptr,
				"EArgumentType",
				"EArgumentType",
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
