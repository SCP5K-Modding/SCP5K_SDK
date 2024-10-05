// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AISentience/Public/ClimbingNavLink.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClimbingNavLink() {}
// Cross Module References
	AISENTIENCE_API UClass* Z_Construct_UClass_AClimbingNavLink_NoRegister();
	AISENTIENCE_API UClass* Z_Construct_UClass_AClimbingNavLink();
	AIMODULE_API UClass* Z_Construct_UClass_ANavLinkProxy();
	UPackage* Z_Construct_UPackage__Script_AISentience();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	AISENTIENCE_API UEnum* Z_Construct_UEnum_AISentience_EClimbingType();
// End Cross Module References
	DEFINE_FUNCTION(AClimbingNavLink::execSmartLinkReached)
	{
		P_GET_OBJECT(AActor,Z_Param_PathOwner);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_DestinationPoint);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SmartLinkReached(Z_Param_PathOwner,Z_Param_Out_DestinationPoint);
		P_NATIVE_END;
	}
	void AClimbingNavLink::StaticRegisterNativesAClimbingNavLink()
	{
		UClass* Class = AClimbingNavLink::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SmartLinkReached", &AClimbingNavLink::execSmartLinkReached },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AClimbingNavLink_SmartLinkReached_Statics
	{
		struct ClimbingNavLink_eventSmartLinkReached_Parms
		{
			AActor* PathOwner;
			FVector DestinationPoint;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PathOwner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DestinationPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DestinationPoint;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AClimbingNavLink_SmartLinkReached_Statics::NewProp_PathOwner = { "PathOwner", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ClimbingNavLink_eventSmartLinkReached_Parms, PathOwner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AClimbingNavLink_SmartLinkReached_Statics::NewProp_DestinationPoint_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AClimbingNavLink_SmartLinkReached_Statics::NewProp_DestinationPoint = { "DestinationPoint", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ClimbingNavLink_eventSmartLinkReached_Parms, DestinationPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_AClimbingNavLink_SmartLinkReached_Statics::NewProp_DestinationPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AClimbingNavLink_SmartLinkReached_Statics::NewProp_DestinationPoint_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AClimbingNavLink_SmartLinkReached_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AClimbingNavLink_SmartLinkReached_Statics::NewProp_PathOwner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AClimbingNavLink_SmartLinkReached_Statics::NewProp_DestinationPoint,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AClimbingNavLink_SmartLinkReached_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ClimbingNavLink.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AClimbingNavLink_SmartLinkReached_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AClimbingNavLink, nullptr, "SmartLinkReached", nullptr, nullptr, sizeof(ClimbingNavLink_eventSmartLinkReached_Parms), Z_Construct_UFunction_AClimbingNavLink_SmartLinkReached_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AClimbingNavLink_SmartLinkReached_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AClimbingNavLink_SmartLinkReached_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AClimbingNavLink_SmartLinkReached_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AClimbingNavLink_SmartLinkReached()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AClimbingNavLink_SmartLinkReached_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AClimbingNavLink_NoRegister()
	{
		return AClimbingNavLink::StaticClass();
	}
	struct Z_Construct_UClass_AClimbingNavLink_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Destination_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Destination;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AClimbingNavLink_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ANavLinkProxy,
		(UObject* (*)())Z_Construct_UPackage__Script_AISentience,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AClimbingNavLink_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AClimbingNavLink_SmartLinkReached, "SmartLinkReached" }, // 3453527556
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AClimbingNavLink_Statics::Class_MetaDataParams[] = {
		{ "AutoCollapseCategories", "SmartLink Actor" },
		{ "BlueprintType", "true" },
		{ "HideCategories", "Input" },
		{ "IncludePath", "ClimbingNavLink.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ClimbingNavLink.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AClimbingNavLink_Statics::NewProp_Destination_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ClimbingNavLink" },
		{ "ModuleRelativePath", "Public/ClimbingNavLink.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AClimbingNavLink_Statics::NewProp_Destination = { "Destination", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AClimbingNavLink, Destination), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AClimbingNavLink_Statics::NewProp_Destination_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AClimbingNavLink_Statics::NewProp_Destination_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AClimbingNavLink_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AClimbingNavLink_Statics::NewProp_Type_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ClimbingNavLink" },
		{ "ModuleRelativePath", "Public/ClimbingNavLink.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AClimbingNavLink_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AClimbingNavLink, Type), Z_Construct_UEnum_AISentience_EClimbingType, METADATA_PARAMS(Z_Construct_UClass_AClimbingNavLink_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AClimbingNavLink_Statics::NewProp_Type_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AClimbingNavLink_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClimbingNavLink_Statics::NewProp_Destination,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClimbingNavLink_Statics::NewProp_Type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClimbingNavLink_Statics::NewProp_Type,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AClimbingNavLink_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AClimbingNavLink>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AClimbingNavLink_Statics::ClassParams = {
		&AClimbingNavLink::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AClimbingNavLink_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AClimbingNavLink_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AClimbingNavLink_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AClimbingNavLink_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AClimbingNavLink()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AClimbingNavLink_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AClimbingNavLink, 1116544525);
	template<> AISENTIENCE_API UClass* StaticClass<AClimbingNavLink>()
	{
		return AClimbingNavLink::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AClimbingNavLink(Z_Construct_UClass_AClimbingNavLink, &AClimbingNavLink::StaticClass, TEXT("/Script/AISentience"), TEXT("AClimbingNavLink"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AClimbingNavLink);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
