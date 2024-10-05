// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AISentience/Public/SAICoverDebugActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSAICoverDebugActor() {}
// Cross Module References
	AISENTIENCE_API UClass* Z_Construct_UClass_ASAICoverDebugActor_NoRegister();
	AISENTIENCE_API UClass* Z_Construct_UClass_ASAICoverDebugActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_AISentience();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	DEFINE_FUNCTION(ASAICoverDebugActor::execClearAllCover)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearAllCover();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASAICoverDebugActor::execGenerateCoverPointsForMap)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GenerateCoverPointsForMap();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASAICoverDebugActor::execGenerateCoverPointsInDebugArea)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GenerateCoverPointsInDebugArea();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASAICoverDebugActor::execGenerateCoverPointsWithDebugDraw)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GenerateCoverPointsWithDebugDraw();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASAICoverDebugActor::execUpdateCoverDrawing)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateCoverDrawing();
		P_NATIVE_END;
	}
	void ASAICoverDebugActor::StaticRegisterNativesASAICoverDebugActor()
	{
		UClass* Class = ASAICoverDebugActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClearAllCover", &ASAICoverDebugActor::execClearAllCover },
			{ "GenerateCoverPointsForMap", &ASAICoverDebugActor::execGenerateCoverPointsForMap },
			{ "GenerateCoverPointsInDebugArea", &ASAICoverDebugActor::execGenerateCoverPointsInDebugArea },
			{ "GenerateCoverPointsWithDebugDraw", &ASAICoverDebugActor::execGenerateCoverPointsWithDebugDraw },
			{ "UpdateCoverDrawing", &ASAICoverDebugActor::execUpdateCoverDrawing },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASAICoverDebugActor_ClearAllCover_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASAICoverDebugActor_ClearAllCover_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SAICoverDebugActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASAICoverDebugActor_ClearAllCover_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASAICoverDebugActor, nullptr, "ClearAllCover", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASAICoverDebugActor_ClearAllCover_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASAICoverDebugActor_ClearAllCover_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASAICoverDebugActor_ClearAllCover()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASAICoverDebugActor_ClearAllCover_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASAICoverDebugActor_GenerateCoverPointsForMap_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASAICoverDebugActor_GenerateCoverPointsForMap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SAICoverDebugActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASAICoverDebugActor_GenerateCoverPointsForMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASAICoverDebugActor, nullptr, "GenerateCoverPointsForMap", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASAICoverDebugActor_GenerateCoverPointsForMap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASAICoverDebugActor_GenerateCoverPointsForMap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASAICoverDebugActor_GenerateCoverPointsForMap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASAICoverDebugActor_GenerateCoverPointsForMap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASAICoverDebugActor_GenerateCoverPointsInDebugArea_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASAICoverDebugActor_GenerateCoverPointsInDebugArea_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SAICoverDebugActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASAICoverDebugActor_GenerateCoverPointsInDebugArea_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASAICoverDebugActor, nullptr, "GenerateCoverPointsInDebugArea", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASAICoverDebugActor_GenerateCoverPointsInDebugArea_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASAICoverDebugActor_GenerateCoverPointsInDebugArea_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASAICoverDebugActor_GenerateCoverPointsInDebugArea()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASAICoverDebugActor_GenerateCoverPointsInDebugArea_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASAICoverDebugActor_GenerateCoverPointsWithDebugDraw_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASAICoverDebugActor_GenerateCoverPointsWithDebugDraw_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SAICoverDebugActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASAICoverDebugActor_GenerateCoverPointsWithDebugDraw_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASAICoverDebugActor, nullptr, "GenerateCoverPointsWithDebugDraw", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASAICoverDebugActor_GenerateCoverPointsWithDebugDraw_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASAICoverDebugActor_GenerateCoverPointsWithDebugDraw_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASAICoverDebugActor_GenerateCoverPointsWithDebugDraw()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASAICoverDebugActor_GenerateCoverPointsWithDebugDraw_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASAICoverDebugActor_UpdateCoverDrawing_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASAICoverDebugActor_UpdateCoverDrawing_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SAICoverDebugActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASAICoverDebugActor_UpdateCoverDrawing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASAICoverDebugActor, nullptr, "UpdateCoverDrawing", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASAICoverDebugActor_UpdateCoverDrawing_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASAICoverDebugActor_UpdateCoverDrawing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASAICoverDebugActor_UpdateCoverDrawing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASAICoverDebugActor_UpdateCoverDrawing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASAICoverDebugActor_NoRegister()
	{
		return ASAICoverDebugActor::StaticClass();
	}
	struct Z_Construct_UClass_ASAICoverDebugActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebugExtent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DebugExtent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDrawGeneratedCover_MetaData[];
#endif
		static void NewProp_bDrawGeneratedCover_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDrawGeneratedCover;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASAICoverDebugActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_AISentience,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASAICoverDebugActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASAICoverDebugActor_ClearAllCover, "ClearAllCover" }, // 3195854026
		{ &Z_Construct_UFunction_ASAICoverDebugActor_GenerateCoverPointsForMap, "GenerateCoverPointsForMap" }, // 1137232377
		{ &Z_Construct_UFunction_ASAICoverDebugActor_GenerateCoverPointsInDebugArea, "GenerateCoverPointsInDebugArea" }, // 804010320
		{ &Z_Construct_UFunction_ASAICoverDebugActor_GenerateCoverPointsWithDebugDraw, "GenerateCoverPointsWithDebugDraw" }, // 2462137230
		{ &Z_Construct_UFunction_ASAICoverDebugActor_UpdateCoverDrawing, "UpdateCoverDrawing" }, // 1599462370
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASAICoverDebugActor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SAICoverDebugActor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SAICoverDebugActor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASAICoverDebugActor_Statics::NewProp_DebugExtent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAICoverDebugActor" },
		{ "ModuleRelativePath", "Public/SAICoverDebugActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASAICoverDebugActor_Statics::NewProp_DebugExtent = { "DebugExtent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASAICoverDebugActor, DebugExtent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ASAICoverDebugActor_Statics::NewProp_DebugExtent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASAICoverDebugActor_Statics::NewProp_DebugExtent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASAICoverDebugActor_Statics::NewProp_bDrawGeneratedCover_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAICoverDebugActor" },
		{ "ModuleRelativePath", "Public/SAICoverDebugActor.h" },
	};
#endif
	void Z_Construct_UClass_ASAICoverDebugActor_Statics::NewProp_bDrawGeneratedCover_SetBit(void* Obj)
	{
		((ASAICoverDebugActor*)Obj)->bDrawGeneratedCover = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASAICoverDebugActor_Statics::NewProp_bDrawGeneratedCover = { "bDrawGeneratedCover", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASAICoverDebugActor), &Z_Construct_UClass_ASAICoverDebugActor_Statics::NewProp_bDrawGeneratedCover_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASAICoverDebugActor_Statics::NewProp_bDrawGeneratedCover_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASAICoverDebugActor_Statics::NewProp_bDrawGeneratedCover_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASAICoverDebugActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASAICoverDebugActor_Statics::NewProp_DebugExtent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASAICoverDebugActor_Statics::NewProp_bDrawGeneratedCover,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASAICoverDebugActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASAICoverDebugActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASAICoverDebugActor_Statics::ClassParams = {
		&ASAICoverDebugActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASAICoverDebugActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASAICoverDebugActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASAICoverDebugActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASAICoverDebugActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASAICoverDebugActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASAICoverDebugActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASAICoverDebugActor, 2860474793);
	template<> AISENTIENCE_API UClass* StaticClass<ASAICoverDebugActor>()
	{
		return ASAICoverDebugActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASAICoverDebugActor(Z_Construct_UClass_ASAICoverDebugActor, &ASAICoverDebugActor::StaticClass, TEXT("/Script/AISentience"), TEXT("ASAICoverDebugActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASAICoverDebugActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
