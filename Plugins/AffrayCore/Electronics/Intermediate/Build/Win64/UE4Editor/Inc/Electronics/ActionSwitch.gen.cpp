// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Electronics/Public/ActionSwitch.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActionSwitch() {}
// Cross Module References
	ELECTRONICS_API UClass* Z_Construct_UClass_AActionSwitch_NoRegister();
	ELECTRONICS_API UClass* Z_Construct_UClass_AActionSwitch();
	ELECTRONICS_API UClass* Z_Construct_UClass_AElectronicSwitch();
	UPackage* Z_Construct_UPackage__Script_Electronics();
// End Cross Module References
	void AActionSwitch::StaticRegisterNativesAActionSwitch()
	{
	}
	UClass* Z_Construct_UClass_AActionSwitch_NoRegister()
	{
		return AActionSwitch::StaticClass();
	}
	struct Z_Construct_UClass_AActionSwitch_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAffectLocked_MetaData[];
#endif
		static void NewProp_bAffectLocked_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAffectLocked;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLock_MetaData[];
#endif
		static void NewProp_bLock_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLock;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAffectEnabled_MetaData[];
#endif
		static void NewProp_bAffectEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAffectEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bBreak_MetaData[];
#endif
		static void NewProp_bBreak_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bBreak;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AActionSwitch_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AElectronicSwitch,
		(UObject* (*)())Z_Construct_UPackage__Script_Electronics,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AActionSwitch_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ActionSwitch.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ActionSwitch.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AActionSwitch_Statics::NewProp_bAffectLocked_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ActionSwitch" },
		{ "ModuleRelativePath", "Public/ActionSwitch.h" },
	};
#endif
	void Z_Construct_UClass_AActionSwitch_Statics::NewProp_bAffectLocked_SetBit(void* Obj)
	{
		((AActionSwitch*)Obj)->bAffectLocked = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AActionSwitch_Statics::NewProp_bAffectLocked = { "bAffectLocked", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AActionSwitch), &Z_Construct_UClass_AActionSwitch_Statics::NewProp_bAffectLocked_SetBit, METADATA_PARAMS(Z_Construct_UClass_AActionSwitch_Statics::NewProp_bAffectLocked_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AActionSwitch_Statics::NewProp_bAffectLocked_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AActionSwitch_Statics::NewProp_bLock_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ActionSwitch" },
		{ "ModuleRelativePath", "Public/ActionSwitch.h" },
	};
#endif
	void Z_Construct_UClass_AActionSwitch_Statics::NewProp_bLock_SetBit(void* Obj)
	{
		((AActionSwitch*)Obj)->bLock = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AActionSwitch_Statics::NewProp_bLock = { "bLock", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AActionSwitch), &Z_Construct_UClass_AActionSwitch_Statics::NewProp_bLock_SetBit, METADATA_PARAMS(Z_Construct_UClass_AActionSwitch_Statics::NewProp_bLock_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AActionSwitch_Statics::NewProp_bLock_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AActionSwitch_Statics::NewProp_bAffectEnabled_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ActionSwitch" },
		{ "ModuleRelativePath", "Public/ActionSwitch.h" },
	};
#endif
	void Z_Construct_UClass_AActionSwitch_Statics::NewProp_bAffectEnabled_SetBit(void* Obj)
	{
		((AActionSwitch*)Obj)->bAffectEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AActionSwitch_Statics::NewProp_bAffectEnabled = { "bAffectEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AActionSwitch), &Z_Construct_UClass_AActionSwitch_Statics::NewProp_bAffectEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_AActionSwitch_Statics::NewProp_bAffectEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AActionSwitch_Statics::NewProp_bAffectEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AActionSwitch_Statics::NewProp_bBreak_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ActionSwitch" },
		{ "ModuleRelativePath", "Public/ActionSwitch.h" },
	};
#endif
	void Z_Construct_UClass_AActionSwitch_Statics::NewProp_bBreak_SetBit(void* Obj)
	{
		((AActionSwitch*)Obj)->bBreak = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AActionSwitch_Statics::NewProp_bBreak = { "bBreak", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AActionSwitch), &Z_Construct_UClass_AActionSwitch_Statics::NewProp_bBreak_SetBit, METADATA_PARAMS(Z_Construct_UClass_AActionSwitch_Statics::NewProp_bBreak_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AActionSwitch_Statics::NewProp_bBreak_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AActionSwitch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActionSwitch_Statics::NewProp_bAffectLocked,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActionSwitch_Statics::NewProp_bLock,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActionSwitch_Statics::NewProp_bAffectEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActionSwitch_Statics::NewProp_bBreak,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AActionSwitch_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AActionSwitch>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AActionSwitch_Statics::ClassParams = {
		&AActionSwitch::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AActionSwitch_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AActionSwitch_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AActionSwitch_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AActionSwitch_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AActionSwitch()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AActionSwitch_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AActionSwitch, 4248658159);
	template<> ELECTRONICS_API UClass* StaticClass<AActionSwitch>()
	{
		return AActionSwitch::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AActionSwitch(Z_Construct_UClass_AActionSwitch, &AActionSwitch::StaticClass, TEXT("/Script/Electronics"), TEXT("AActionSwitch"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AActionSwitch);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
