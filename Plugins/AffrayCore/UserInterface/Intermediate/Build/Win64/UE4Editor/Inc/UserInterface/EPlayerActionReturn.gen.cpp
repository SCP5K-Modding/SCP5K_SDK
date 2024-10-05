// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UserInterface/Public/EPlayerActionReturn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEPlayerActionReturn() {}
// Cross Module References
	USERINTERFACE_API UEnum* Z_Construct_UEnum_UserInterface_EPlayerActionReturn();
	UPackage* Z_Construct_UPackage__Script_UserInterface();
// End Cross Module References
	static UEnum* EPlayerActionReturn_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_UserInterface_EPlayerActionReturn, Z_Construct_UPackage__Script_UserInterface(), TEXT("EPlayerActionReturn"));
		}
		return Singleton;
	}
	template<> USERINTERFACE_API UEnum* StaticEnum<EPlayerActionReturn>()
	{
		return EPlayerActionReturn_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPlayerActionReturn(EPlayerActionReturn_StaticEnum, TEXT("/Script/UserInterface"), TEXT("EPlayerActionReturn"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_UserInterface_EPlayerActionReturn_Hash() { return 3839331556U; }
	UEnum* Z_Construct_UEnum_UserInterface_EPlayerActionReturn()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_UserInterface();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPlayerActionReturn"), 0, Get_Z_Construct_UEnum_UserInterface_EPlayerActionReturn_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPlayerActionReturn::Blocked", (int64)EPlayerActionReturn::Blocked },
				{ "EPlayerActionReturn::Unblocked", (int64)EPlayerActionReturn::Unblocked },
				{ "EPlayerActionReturn::AlreadyBlocked", (int64)EPlayerActionReturn::AlreadyBlocked },
				{ "EPlayerActionReturn::AlreadyUnblocked", (int64)EPlayerActionReturn::AlreadyUnblocked },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AlreadyBlocked.Name", "EPlayerActionReturn::AlreadyBlocked" },
				{ "AlreadyUnblocked.Name", "EPlayerActionReturn::AlreadyUnblocked" },
				{ "Blocked.Name", "EPlayerActionReturn::Blocked" },
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/EPlayerActionReturn.h" },
				{ "Unblocked.Name", "EPlayerActionReturn::Unblocked" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_UserInterface,
				nullptr,
				"EPlayerActionReturn",
				"EPlayerActionReturn",
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
