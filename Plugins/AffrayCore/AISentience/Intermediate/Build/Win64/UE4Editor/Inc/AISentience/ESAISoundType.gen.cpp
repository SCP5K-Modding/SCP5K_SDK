// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AISentience/Public/ESAISoundType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESAISoundType() {}
// Cross Module References
	AISENTIENCE_API UEnum* Z_Construct_UEnum_AISentience_ESAISoundType();
	UPackage* Z_Construct_UPackage__Script_AISentience();
// End Cross Module References
	static UEnum* ESAISoundType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AISentience_ESAISoundType, Z_Construct_UPackage__Script_AISentience(), TEXT("ESAISoundType"));
		}
		return Singleton;
	}
	template<> AISENTIENCE_API UEnum* StaticEnum<ESAISoundType>()
	{
		return ESAISoundType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESAISoundType(ESAISoundType_StaticEnum, TEXT("/Script/AISentience"), TEXT("ESAISoundType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AISentience_ESAISoundType_Hash() { return 3747106704U; }
	UEnum* Z_Construct_UEnum_AISentience_ESAISoundType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AISentience();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESAISoundType"), 0, Get_Z_Construct_UEnum_AISentience_ESAISoundType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESAISoundType::Game", (int64)ESAISoundType::Game },
				{ "ESAISoundType::Alarm", (int64)ESAISoundType::Alarm },
				{ "ESAISoundType::Explosion", (int64)ESAISoundType::Explosion },
				{ "ESAISoundType::Attack", (int64)ESAISoundType::Attack },
				{ "ESAISoundType::FriendlyAttack", (int64)ESAISoundType::FriendlyAttack },
				{ "ESAISoundType::Door", (int64)ESAISoundType::Door },
				{ "ESAISoundType::Other", (int64)ESAISoundType::Other },
				{ "ESAISoundType::Footstep", (int64)ESAISoundType::Footstep },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Alarm.Name", "ESAISoundType::Alarm" },
				{ "Attack.Name", "ESAISoundType::Attack" },
				{ "BlueprintType", "true" },
				{ "Door.Name", "ESAISoundType::Door" },
				{ "Explosion.Name", "ESAISoundType::Explosion" },
				{ "Footstep.Name", "ESAISoundType::Footstep" },
				{ "FriendlyAttack.Name", "ESAISoundType::FriendlyAttack" },
				{ "Game.Name", "ESAISoundType::Game" },
				{ "ModuleRelativePath", "Public/ESAISoundType.h" },
				{ "Other.Name", "ESAISoundType::Other" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AISentience,
				nullptr,
				"ESAISoundType",
				"ESAISoundType",
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
