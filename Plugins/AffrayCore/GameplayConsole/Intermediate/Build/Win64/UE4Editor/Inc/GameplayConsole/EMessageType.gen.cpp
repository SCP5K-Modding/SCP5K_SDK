// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayConsole/Public/EMessageType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEMessageType() {}
// Cross Module References
	GAMEPLAYCONSOLE_API UEnum* Z_Construct_UEnum_GameplayConsole_EMessageType();
	UPackage* Z_Construct_UPackage__Script_GameplayConsole();
// End Cross Module References
	static UEnum* EMessageType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_GameplayConsole_EMessageType, Z_Construct_UPackage__Script_GameplayConsole(), TEXT("EMessageType"));
		}
		return Singleton;
	}
	template<> GAMEPLAYCONSOLE_API UEnum* StaticEnum<EMessageType>()
	{
		return EMessageType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMessageType(EMessageType_StaticEnum, TEXT("/Script/GameplayConsole"), TEXT("EMessageType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_GameplayConsole_EMessageType_Hash() { return 3581244532U; }
	UEnum* Z_Construct_UEnum_GameplayConsole_EMessageType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_GameplayConsole();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMessageType"), 0, Get_Z_Construct_UEnum_GameplayConsole_EMessageType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "Message", (int64)Message },
				{ "Log", (int64)Log },
				{ "Warning", (int64)Warning },
				{ "Error", (int64)Error },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Error.Name", "Error" },
				{ "Log.Name", "Log" },
				{ "Message.Name", "Message" },
				{ "ModuleRelativePath", "Public/EMessageType.h" },
				{ "Warning.Name", "Warning" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_GameplayConsole,
				nullptr,
				"EMessageType",
				"EMessageType",
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
