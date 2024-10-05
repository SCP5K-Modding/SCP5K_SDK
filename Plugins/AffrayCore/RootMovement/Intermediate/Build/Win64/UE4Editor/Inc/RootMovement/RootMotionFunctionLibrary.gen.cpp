// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RootMovement/Public/RootMotionFunctionLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRootMotionFunctionLibrary() {}
// Cross Module References
	ROOTMOVEMENT_API UClass* Z_Construct_UClass_URootMotionFunctionLibrary_NoRegister();
	ROOTMOVEMENT_API UClass* Z_Construct_UClass_URootMotionFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_RootMovement();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
// End Cross Module References
	DEFINE_FUNCTION(URootMotionFunctionLibrary::execGetDesiredFinalLocation)
	{
		P_GET_OBJECT(UAnimMontage,Z_Param_Montage);
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_Component);
		P_GET_STRUCT(FTransform,Z_Param_Transform);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=URootMotionFunctionLibrary::GetDesiredFinalLocation(Z_Param_Montage,Z_Param_Component,Z_Param_Transform);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URootMotionFunctionLibrary::execGetDesiredStartLocation)
	{
		P_GET_OBJECT(UAnimMontage,Z_Param_Montage);
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_Component);
		P_GET_STRUCT(FTransform,Z_Param_Transform);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=URootMotionFunctionLibrary::GetDesiredStartLocation(Z_Param_Montage,Z_Param_Component,Z_Param_Transform);
		P_NATIVE_END;
	}
	void URootMotionFunctionLibrary::StaticRegisterNativesURootMotionFunctionLibrary()
	{
		UClass* Class = URootMotionFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDesiredFinalLocation", &URootMotionFunctionLibrary::execGetDesiredFinalLocation },
			{ "GetDesiredStartLocation", &URootMotionFunctionLibrary::execGetDesiredStartLocation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URootMotionFunctionLibrary_GetDesiredFinalLocation_Statics
	{
		struct RootMotionFunctionLibrary_eventGetDesiredFinalLocation_Parms
		{
			UAnimMontage* Montage;
			USkeletalMeshComponent* Component;
			FTransform Transform;
			FTransform ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Montage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Component;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Transform;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URootMotionFunctionLibrary_GetDesiredFinalLocation_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RootMotionFunctionLibrary_eventGetDesiredFinalLocation_Parms, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URootMotionFunctionLibrary_GetDesiredFinalLocation_Statics::NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URootMotionFunctionLibrary_GetDesiredFinalLocation_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RootMotionFunctionLibrary_eventGetDesiredFinalLocation_Parms, Component), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_URootMotionFunctionLibrary_GetDesiredFinalLocation_Statics::NewProp_Component_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URootMotionFunctionLibrary_GetDesiredFinalLocation_Statics::NewProp_Component_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URootMotionFunctionLibrary_GetDesiredFinalLocation_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RootMotionFunctionLibrary_eventGetDesiredFinalLocation_Parms, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URootMotionFunctionLibrary_GetDesiredFinalLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RootMotionFunctionLibrary_eventGetDesiredFinalLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URootMotionFunctionLibrary_GetDesiredFinalLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URootMotionFunctionLibrary_GetDesiredFinalLocation_Statics::NewProp_Montage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URootMotionFunctionLibrary_GetDesiredFinalLocation_Statics::NewProp_Component,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URootMotionFunctionLibrary_GetDesiredFinalLocation_Statics::NewProp_Transform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URootMotionFunctionLibrary_GetDesiredFinalLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URootMotionFunctionLibrary_GetDesiredFinalLocation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RootMotionFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URootMotionFunctionLibrary_GetDesiredFinalLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URootMotionFunctionLibrary, nullptr, "GetDesiredFinalLocation", nullptr, nullptr, sizeof(RootMotionFunctionLibrary_eventGetDesiredFinalLocation_Parms), Z_Construct_UFunction_URootMotionFunctionLibrary_GetDesiredFinalLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URootMotionFunctionLibrary_GetDesiredFinalLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URootMotionFunctionLibrary_GetDesiredFinalLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URootMotionFunctionLibrary_GetDesiredFinalLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URootMotionFunctionLibrary_GetDesiredFinalLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URootMotionFunctionLibrary_GetDesiredFinalLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URootMotionFunctionLibrary_GetDesiredStartLocation_Statics
	{
		struct RootMotionFunctionLibrary_eventGetDesiredStartLocation_Parms
		{
			UAnimMontage* Montage;
			USkeletalMeshComponent* Component;
			FTransform Transform;
			FTransform ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Montage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Component;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Transform;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URootMotionFunctionLibrary_GetDesiredStartLocation_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RootMotionFunctionLibrary_eventGetDesiredStartLocation_Parms, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URootMotionFunctionLibrary_GetDesiredStartLocation_Statics::NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URootMotionFunctionLibrary_GetDesiredStartLocation_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RootMotionFunctionLibrary_eventGetDesiredStartLocation_Parms, Component), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_URootMotionFunctionLibrary_GetDesiredStartLocation_Statics::NewProp_Component_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URootMotionFunctionLibrary_GetDesiredStartLocation_Statics::NewProp_Component_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URootMotionFunctionLibrary_GetDesiredStartLocation_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RootMotionFunctionLibrary_eventGetDesiredStartLocation_Parms, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URootMotionFunctionLibrary_GetDesiredStartLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RootMotionFunctionLibrary_eventGetDesiredStartLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URootMotionFunctionLibrary_GetDesiredStartLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URootMotionFunctionLibrary_GetDesiredStartLocation_Statics::NewProp_Montage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URootMotionFunctionLibrary_GetDesiredStartLocation_Statics::NewProp_Component,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URootMotionFunctionLibrary_GetDesiredStartLocation_Statics::NewProp_Transform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URootMotionFunctionLibrary_GetDesiredStartLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URootMotionFunctionLibrary_GetDesiredStartLocation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RootMotionFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URootMotionFunctionLibrary_GetDesiredStartLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URootMotionFunctionLibrary, nullptr, "GetDesiredStartLocation", nullptr, nullptr, sizeof(RootMotionFunctionLibrary_eventGetDesiredStartLocation_Parms), Z_Construct_UFunction_URootMotionFunctionLibrary_GetDesiredStartLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URootMotionFunctionLibrary_GetDesiredStartLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URootMotionFunctionLibrary_GetDesiredStartLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URootMotionFunctionLibrary_GetDesiredStartLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URootMotionFunctionLibrary_GetDesiredStartLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URootMotionFunctionLibrary_GetDesiredStartLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_URootMotionFunctionLibrary_NoRegister()
	{
		return URootMotionFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_URootMotionFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URootMotionFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_RootMovement,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URootMotionFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URootMotionFunctionLibrary_GetDesiredFinalLocation, "GetDesiredFinalLocation" }, // 97612301
		{ &Z_Construct_UFunction_URootMotionFunctionLibrary_GetDesiredStartLocation, "GetDesiredStartLocation" }, // 257960273
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URootMotionFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "RootMotionFunctionLibrary.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/RootMotionFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URootMotionFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URootMotionFunctionLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URootMotionFunctionLibrary_Statics::ClassParams = {
		&URootMotionFunctionLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URootMotionFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URootMotionFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URootMotionFunctionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URootMotionFunctionLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URootMotionFunctionLibrary, 4011282525);
	template<> ROOTMOVEMENT_API UClass* StaticClass<URootMotionFunctionLibrary>()
	{
		return URootMotionFunctionLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URootMotionFunctionLibrary(Z_Construct_UClass_URootMotionFunctionLibrary, &URootMotionFunctionLibrary::StaticClass, TEXT("/Script/RootMovement"), TEXT("URootMotionFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URootMotionFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
