// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AISentience/Public/SAIEQSTestingPawn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSAIEQSTestingPawn() {}
// Cross Module References
	AISENTIENCE_API UClass* Z_Construct_UClass_ASAIEQSTestingPawn_NoRegister();
	AISENTIENCE_API UClass* Z_Construct_UClass_ASAIEQSTestingPawn();
	AIMODULE_API UClass* Z_Construct_UClass_AEQSTestingPawn();
	UPackage* Z_Construct_UPackage__Script_AISentience();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void ASAIEQSTestingPawn::StaticRegisterNativesASAIEQSTestingPawn()
	{
	}
	UClass* Z_Construct_UClass_ASAIEQSTestingPawn_NoRegister()
	{
		return ASAIEQSTestingPawn::StaticClass();
	}
	struct Z_Construct_UClass_ASAIEQSTestingPawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TargetActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASAIEQSTestingPawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AEQSTestingPawn,
		(UObject* (*)())Z_Construct_UPackage__Script_AISentience,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASAIEQSTestingPawn_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Advanced Attachment Mesh Animation Clothing Physics Rendering Lighting Activation CharacterMovement AgentPhysics Avoidance MovementComponent Velocity Shape Camera Input Layers SkeletalMesh Optimization Pawn Replication Actor Navigation" },
		{ "IncludePath", "SAIEQSTestingPawn.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SAIEQSTestingPawn.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASAIEQSTestingPawn_Statics::NewProp_TargetActor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAIEQSTestingPawn" },
		{ "ModuleRelativePath", "Public/SAIEQSTestingPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASAIEQSTestingPawn_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASAIEQSTestingPawn, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASAIEQSTestingPawn_Statics::NewProp_TargetActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASAIEQSTestingPawn_Statics::NewProp_TargetActor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASAIEQSTestingPawn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASAIEQSTestingPawn_Statics::NewProp_TargetActor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASAIEQSTestingPawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASAIEQSTestingPawn>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASAIEQSTestingPawn_Statics::ClassParams = {
		&ASAIEQSTestingPawn::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASAIEQSTestingPawn_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASAIEQSTestingPawn_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASAIEQSTestingPawn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASAIEQSTestingPawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASAIEQSTestingPawn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASAIEQSTestingPawn_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASAIEQSTestingPawn, 1504090119);
	template<> AISENTIENCE_API UClass* StaticClass<ASAIEQSTestingPawn>()
	{
		return ASAIEQSTestingPawn::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASAIEQSTestingPawn(Z_Construct_UClass_ASAIEQSTestingPawn, &ASAIEQSTestingPawn::StaticClass, TEXT("/Script/AISentience"), TEXT("ASAIEQSTestingPawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASAIEQSTestingPawn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
