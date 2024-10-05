// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSController/Public/ObjectPoolComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObjectPoolComponent() {}
// Cross Module References
	FPSCONTROLLER_API UClass* Z_Construct_UClass_UObjectPoolComponent_NoRegister();
	FPSCONTROLLER_API UClass* Z_Construct_UClass_UObjectPoolComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_FPSController();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	FPSCONTROLLER_API UScriptStruct* Z_Construct_UScriptStruct_FPooledObject();
// End Cross Module References
	DEFINE_FUNCTION(UObjectPoolComponent::execCreateObject)
	{
		P_GET_OBJECT_REF(AActor,Z_Param_Out_Object);
		P_GET_STRUCT(FTransform,Z_Param_Transform);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CreateObject(Z_Param_Out_Object,Z_Param_Transform);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UObjectPoolComponent::execReturnObject)
	{
		P_GET_OBJECT(AActor,Z_Param_Object);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ReturnObject(Z_Param_Object);
		P_NATIVE_END;
	}
	void UObjectPoolComponent::StaticRegisterNativesUObjectPoolComponent()
	{
		UClass* Class = UObjectPoolComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateObject", &UObjectPoolComponent::execCreateObject },
			{ "ReturnObject", &UObjectPoolComponent::execReturnObject },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UObjectPoolComponent_CreateObject_Statics
	{
		struct ObjectPoolComponent_eventCreateObject_Parms
		{
			AActor* Object;
			FTransform Transform;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Object;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Transform;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UObjectPoolComponent_CreateObject_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ObjectPoolComponent_eventCreateObject_Parms, Object), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UObjectPoolComponent_CreateObject_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ObjectPoolComponent_eventCreateObject_Parms, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UObjectPoolComponent_CreateObject_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ObjectPoolComponent_eventCreateObject_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UObjectPoolComponent_CreateObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ObjectPoolComponent_eventCreateObject_Parms), &Z_Construct_UFunction_UObjectPoolComponent_CreateObject_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UObjectPoolComponent_CreateObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UObjectPoolComponent_CreateObject_Statics::NewProp_Object,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UObjectPoolComponent_CreateObject_Statics::NewProp_Transform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UObjectPoolComponent_CreateObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UObjectPoolComponent_CreateObject_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ObjectPoolComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UObjectPoolComponent_CreateObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UObjectPoolComponent, nullptr, "CreateObject", nullptr, nullptr, sizeof(ObjectPoolComponent_eventCreateObject_Parms), Z_Construct_UFunction_UObjectPoolComponent_CreateObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectPoolComponent_CreateObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UObjectPoolComponent_CreateObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectPoolComponent_CreateObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UObjectPoolComponent_CreateObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UObjectPoolComponent_CreateObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UObjectPoolComponent_ReturnObject_Statics
	{
		struct ObjectPoolComponent_eventReturnObject_Parms
		{
			AActor* Object;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Object;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UObjectPoolComponent_ReturnObject_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ObjectPoolComponent_eventReturnObject_Parms, Object), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UObjectPoolComponent_ReturnObject_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ObjectPoolComponent_eventReturnObject_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UObjectPoolComponent_ReturnObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ObjectPoolComponent_eventReturnObject_Parms), &Z_Construct_UFunction_UObjectPoolComponent_ReturnObject_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UObjectPoolComponent_ReturnObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UObjectPoolComponent_ReturnObject_Statics::NewProp_Object,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UObjectPoolComponent_ReturnObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UObjectPoolComponent_ReturnObject_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ObjectPoolComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UObjectPoolComponent_ReturnObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UObjectPoolComponent, nullptr, "ReturnObject", nullptr, nullptr, sizeof(ObjectPoolComponent_eventReturnObject_Parms), Z_Construct_UFunction_UObjectPoolComponent_ReturnObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectPoolComponent_ReturnObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UObjectPoolComponent_ReturnObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectPoolComponent_ReturnObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UObjectPoolComponent_ReturnObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UObjectPoolComponent_ReturnObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UObjectPoolComponent_NoRegister()
	{
		return UObjectPoolComponent::StaticClass();
	}
	struct Z_Construct_UClass_UObjectPoolComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ObjectClass;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UsedPool_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UsedPool_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_UsedPool;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AvailablePool_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AvailablePool_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AvailablePool;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UObjectPoolComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_FPSController,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UObjectPoolComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UObjectPoolComponent_CreateObject, "CreateObject" }, // 822005317
		{ &Z_Construct_UFunction_UObjectPoolComponent_ReturnObject, "ReturnObject" }, // 2184054143
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObjectPoolComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "ObjectPoolComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ObjectPoolComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObjectPoolComponent_Statics::NewProp_ObjectClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ObjectPoolComponent" },
		{ "ModuleRelativePath", "Public/ObjectPoolComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UObjectPoolComponent_Statics::NewProp_ObjectClass = { "ObjectClass", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UObjectPoolComponent, ObjectClass), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UObjectPoolComponent_Statics::NewProp_ObjectClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UObjectPoolComponent_Statics::NewProp_ObjectClass_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UObjectPoolComponent_Statics::NewProp_UsedPool_Inner = { "UsedPool", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPooledObject, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObjectPoolComponent_Statics::NewProp_UsedPool_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ObjectPoolComponent" },
		{ "ModuleRelativePath", "Public/ObjectPoolComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UObjectPoolComponent_Statics::NewProp_UsedPool = { "UsedPool", nullptr, (EPropertyFlags)0x0020080000000025, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UObjectPoolComponent, UsedPool), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UObjectPoolComponent_Statics::NewProp_UsedPool_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UObjectPoolComponent_Statics::NewProp_UsedPool_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UObjectPoolComponent_Statics::NewProp_AvailablePool_Inner = { "AvailablePool", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPooledObject, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObjectPoolComponent_Statics::NewProp_AvailablePool_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ObjectPoolComponent" },
		{ "ModuleRelativePath", "Public/ObjectPoolComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UObjectPoolComponent_Statics::NewProp_AvailablePool = { "AvailablePool", nullptr, (EPropertyFlags)0x0020080000000025, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UObjectPoolComponent, AvailablePool), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UObjectPoolComponent_Statics::NewProp_AvailablePool_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UObjectPoolComponent_Statics::NewProp_AvailablePool_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UObjectPoolComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectPoolComponent_Statics::NewProp_ObjectClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectPoolComponent_Statics::NewProp_UsedPool_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectPoolComponent_Statics::NewProp_UsedPool,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectPoolComponent_Statics::NewProp_AvailablePool_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectPoolComponent_Statics::NewProp_AvailablePool,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UObjectPoolComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UObjectPoolComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UObjectPoolComponent_Statics::ClassParams = {
		&UObjectPoolComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UObjectPoolComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UObjectPoolComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UObjectPoolComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UObjectPoolComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UObjectPoolComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UObjectPoolComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UObjectPoolComponent, 2075687414);
	template<> FPSCONTROLLER_API UClass* StaticClass<UObjectPoolComponent>()
	{
		return UObjectPoolComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UObjectPoolComponent(Z_Construct_UClass_UObjectPoolComponent, &UObjectPoolComponent::StaticClass, TEXT("/Script/FPSController"), TEXT("UObjectPoolComponent"), false, nullptr, nullptr, nullptr);

	void UObjectPoolComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_UsedPool(TEXT("UsedPool"));
		static const FName Name_AvailablePool(TEXT("AvailablePool"));

		const bool bIsValid = true
			&& Name_UsedPool == ClassReps[(int32)ENetFields_Private::UsedPool].Property->GetFName()
			&& Name_AvailablePool == ClassReps[(int32)ENetFields_Private::AvailablePool].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UObjectPoolComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UObjectPoolComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
