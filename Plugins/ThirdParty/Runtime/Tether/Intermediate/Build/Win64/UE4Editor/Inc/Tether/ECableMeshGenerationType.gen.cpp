// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tether/Public/ECableMeshGenerationType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeECableMeshGenerationType() {}
// Cross Module References
	TETHER_API UEnum* Z_Construct_UEnum_Tether_ECableMeshGenerationType();
	UPackage* Z_Construct_UPackage__Script_Tether();
// End Cross Module References
	static UEnum* ECableMeshGenerationType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Tether_ECableMeshGenerationType, Z_Construct_UPackage__Script_Tether(), TEXT("ECableMeshGenerationType"));
		}
		return Singleton;
	}
	template<> TETHER_API UEnum* StaticEnum<ECableMeshGenerationType>()
	{
		return ECableMeshGenerationType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECableMeshGenerationType(ECableMeshGenerationType_StaticEnum, TEXT("/Script/Tether"), TEXT("ECableMeshGenerationType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Tether_ECableMeshGenerationType_Hash() { return 3236367676U; }
	UEnum* Z_Construct_UEnum_Tether_ECableMeshGenerationType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Tether();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECableMeshGenerationType"), 0, Get_Z_Construct_UEnum_Tether_ECableMeshGenerationType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ECableMeshGenerationType::Basic", (int64)ECableMeshGenerationType::Basic },
				{ "ECableMeshGenerationType::CustomMesh", (int64)ECableMeshGenerationType::CustomMesh },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Basic.Name", "ECableMeshGenerationType::Basic" },
				{ "BlueprintType", "true" },
				{ "CustomMesh.Name", "ECableMeshGenerationType::CustomMesh" },
				{ "ModuleRelativePath", "Public/ECableMeshGenerationType.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Tether,
				nullptr,
				"ECableMeshGenerationType",
				"ECableMeshGenerationType",
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
