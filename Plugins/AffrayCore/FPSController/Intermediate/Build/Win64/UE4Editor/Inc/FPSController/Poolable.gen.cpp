// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSController/Public/Poolable.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePoolable() {}
// Cross Module References
	FPSCONTROLLER_API UClass* Z_Construct_UClass_UPoolable_NoRegister();
	FPSCONTROLLER_API UClass* Z_Construct_UClass_UPoolable();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_FPSController();
	FPSCONTROLLER_API UClass* Z_Construct_UClass_UObjectPoolComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(IPoolable::execAddedToPool)
	{
		P_GET_OBJECT(UObjectPoolComponent,Z_Param_Pool);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddedToPool_Implementation(Z_Param_Pool);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IPoolable::execFinishReleasedFromPool)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FinishReleasedFromPool_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IPoolable::execReturnedToPool)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReturnedToPool_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IPoolable::execStartReleasedFromPool)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartReleasedFromPool_Implementation();
		P_NATIVE_END;
	}
	void IPoolable::AddedToPool(UObjectPoolComponent* Pool)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_AddedToPool instead.");
	}
	void IPoolable::FinishReleasedFromPool()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_FinishReleasedFromPool instead.");
	}
	void IPoolable::ReturnedToPool()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_ReturnedToPool instead.");
	}
	void IPoolable::StartReleasedFromPool()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_StartReleasedFromPool instead.");
	}
	void UPoolable::StaticRegisterNativesUPoolable()
	{
		UClass* Class = UPoolable::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddedToPool", &IPoolable::execAddedToPool },
			{ "FinishReleasedFromPool", &IPoolable::execFinishReleasedFromPool },
			{ "ReturnedToPool", &IPoolable::execReturnedToPool },
			{ "StartReleasedFromPool", &IPoolable::execStartReleasedFromPool },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPoolable_AddedToPool_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Pool_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Pool;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPoolable_AddedToPool_Statics::NewProp_Pool_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPoolable_AddedToPool_Statics::NewProp_Pool = { "Pool", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Poolable_eventAddedToPool_Parms, Pool), Z_Construct_UClass_UObjectPoolComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPoolable_AddedToPool_Statics::NewProp_Pool_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPoolable_AddedToPool_Statics::NewProp_Pool_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPoolable_AddedToPool_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPoolable_AddedToPool_Statics::NewProp_Pool,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPoolable_AddedToPool_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Poolable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPoolable_AddedToPool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPoolable, nullptr, "AddedToPool", nullptr, nullptr, sizeof(Poolable_eventAddedToPool_Parms), Z_Construct_UFunction_UPoolable_AddedToPool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPoolable_AddedToPool_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPoolable_AddedToPool_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPoolable_AddedToPool_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPoolable_AddedToPool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPoolable_AddedToPool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPoolable_FinishReleasedFromPool_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPoolable_FinishReleasedFromPool_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Poolable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPoolable_FinishReleasedFromPool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPoolable, nullptr, "FinishReleasedFromPool", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPoolable_FinishReleasedFromPool_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPoolable_FinishReleasedFromPool_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPoolable_FinishReleasedFromPool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPoolable_FinishReleasedFromPool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPoolable_ReturnedToPool_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPoolable_ReturnedToPool_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Poolable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPoolable_ReturnedToPool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPoolable, nullptr, "ReturnedToPool", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPoolable_ReturnedToPool_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPoolable_ReturnedToPool_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPoolable_ReturnedToPool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPoolable_ReturnedToPool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPoolable_StartReleasedFromPool_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPoolable_StartReleasedFromPool_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Poolable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPoolable_StartReleasedFromPool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPoolable, nullptr, "StartReleasedFromPool", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPoolable_StartReleasedFromPool_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPoolable_StartReleasedFromPool_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPoolable_StartReleasedFromPool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPoolable_StartReleasedFromPool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPoolable_NoRegister()
	{
		return UPoolable::StaticClass();
	}
	struct Z_Construct_UClass_UPoolable_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPoolable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_FPSController,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPoolable_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPoolable_AddedToPool, "AddedToPool" }, // 1145360906
		{ &Z_Construct_UFunction_UPoolable_FinishReleasedFromPool, "FinishReleasedFromPool" }, // 3220909359
		{ &Z_Construct_UFunction_UPoolable_ReturnedToPool, "ReturnedToPool" }, // 4128620167
		{ &Z_Construct_UFunction_UPoolable_StartReleasedFromPool, "StartReleasedFromPool" }, // 3235714923
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoolable_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Poolable.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPoolable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IPoolable>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPoolable_Statics::ClassParams = {
		&UPoolable::StaticClass,
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
		0x000040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UPoolable_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPoolable_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPoolable()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPoolable_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPoolable, 3993865288);
	template<> FPSCONTROLLER_API UClass* StaticClass<UPoolable>()
	{
		return UPoolable::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPoolable(Z_Construct_UClass_UPoolable, &UPoolable::StaticClass, TEXT("/Script/FPSController"), TEXT("UPoolable"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPoolable);
	static FName NAME_UPoolable_AddedToPool = FName(TEXT("AddedToPool"));
	void IPoolable::Execute_AddedToPool(UObject* O, UObjectPoolComponent* Pool)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UPoolable::StaticClass()));
		Poolable_eventAddedToPool_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UPoolable_AddedToPool);
		if (Func)
		{
			Parms.Pool=Pool;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IPoolable*)(O->GetNativeInterfaceAddress(UPoolable::StaticClass())))
		{
			I->AddedToPool_Implementation(Pool);
		}
	}
	static FName NAME_UPoolable_FinishReleasedFromPool = FName(TEXT("FinishReleasedFromPool"));
	void IPoolable::Execute_FinishReleasedFromPool(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UPoolable::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UPoolable_FinishReleasedFromPool);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IPoolable*)(O->GetNativeInterfaceAddress(UPoolable::StaticClass())))
		{
			I->FinishReleasedFromPool_Implementation();
		}
	}
	static FName NAME_UPoolable_ReturnedToPool = FName(TEXT("ReturnedToPool"));
	void IPoolable::Execute_ReturnedToPool(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UPoolable::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UPoolable_ReturnedToPool);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IPoolable*)(O->GetNativeInterfaceAddress(UPoolable::StaticClass())))
		{
			I->ReturnedToPool_Implementation();
		}
	}
	static FName NAME_UPoolable_StartReleasedFromPool = FName(TEXT("StartReleasedFromPool"));
	void IPoolable::Execute_StartReleasedFromPool(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UPoolable::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UPoolable_StartReleasedFromPool);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IPoolable*)(O->GetNativeInterfaceAddress(UPoolable::StaticClass())))
		{
			I->StartReleasedFromPool_Implementation();
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
