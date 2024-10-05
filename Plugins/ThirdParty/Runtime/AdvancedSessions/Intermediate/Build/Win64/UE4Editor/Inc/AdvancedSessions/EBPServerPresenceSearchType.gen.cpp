// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvancedSessions/Public/EBPServerPresenceSearchType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEBPServerPresenceSearchType() {}
// Cross Module References
	ADVANCEDSESSIONS_API UEnum* Z_Construct_UEnum_AdvancedSessions_EBPServerPresenceSearchType();
	UPackage* Z_Construct_UPackage__Script_AdvancedSessions();
// End Cross Module References
	static UEnum* EBPServerPresenceSearchType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AdvancedSessions_EBPServerPresenceSearchType, Z_Construct_UPackage__Script_AdvancedSessions(), TEXT("EBPServerPresenceSearchType"));
		}
		return Singleton;
	}
	template<> ADVANCEDSESSIONS_API UEnum* StaticEnum<EBPServerPresenceSearchType>()
	{
		return EBPServerPresenceSearchType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBPServerPresenceSearchType(EBPServerPresenceSearchType_StaticEnum, TEXT("/Script/AdvancedSessions"), TEXT("EBPServerPresenceSearchType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AdvancedSessions_EBPServerPresenceSearchType_Hash() { return 3974307695U; }
	UEnum* Z_Construct_UEnum_AdvancedSessions_EBPServerPresenceSearchType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AdvancedSessions();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBPServerPresenceSearchType"), 0, Get_Z_Construct_UEnum_AdvancedSessions_EBPServerPresenceSearchType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EBPServerPresenceSearchType::AllServers", (int64)EBPServerPresenceSearchType::AllServers },
				{ "EBPServerPresenceSearchType::ClientServersOnly", (int64)EBPServerPresenceSearchType::ClientServersOnly },
				{ "EBPServerPresenceSearchType::DedicatedServersOnly", (int64)EBPServerPresenceSearchType::DedicatedServersOnly },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AllServers.Name", "EBPServerPresenceSearchType::AllServers" },
				{ "BlueprintType", "true" },
				{ "ClientServersOnly.Name", "EBPServerPresenceSearchType::ClientServersOnly" },
				{ "DedicatedServersOnly.Name", "EBPServerPresenceSearchType::DedicatedServersOnly" },
				{ "ModuleRelativePath", "Public/EBPServerPresenceSearchType.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AdvancedSessions,
				nullptr,
				"EBPServerPresenceSearchType",
				"EBPServerPresenceSearchType",
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
