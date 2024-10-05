// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Electronics/Public/Activatable.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActivatable() {}
// Cross Module References
	ELECTRONICS_API UClass* Z_Construct_UClass_UActivatable_NoRegister();
	ELECTRONICS_API UClass* Z_Construct_UClass_UActivatable();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_Electronics();
// End Cross Module References
	DEFINE_FUNCTION(IActivatable::execDisable)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Disable_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IActivatable::execEnable)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Enable_Implementation();
		P_NATIVE_END;
	}
	void IActivatable::Disable()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_Disable instead.");
	}
	void IActivatable::Enable()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_Enable instead.");
	}
	void UActivatable::StaticRegisterNativesUActivatable()
	{
		UClass* Class = UActivatable::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Disable", &IActivatable::execDisable },
			{ "Enable", &IActivatable::execEnable },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UActivatable_Disable_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActivatable_Disable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Activatable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UActivatable_Disable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActivatable, nullptr, "Disable", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActivatable_Disable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActivatable_Disable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActivatable_Disable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UActivatable_Disable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UActivatable_Enable_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActivatable_Enable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Activatable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UActivatable_Enable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActivatable, nullptr, "Enable", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActivatable_Enable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActivatable_Enable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActivatable_Enable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UActivatable_Enable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UActivatable_NoRegister()
	{
		return UActivatable::StaticClass();
	}
	struct Z_Construct_UClass_UActivatable_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UActivatable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Electronics,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UActivatable_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UActivatable_Disable, "Disable" }, // 3270909567
		{ &Z_Construct_UFunction_UActivatable_Enable, "Enable" }, // 4107746428
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActivatable_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Activatable.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UActivatable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IActivatable>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UActivatable_Statics::ClassParams = {
		&UActivatable::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UActivatable_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UActivatable_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UActivatable()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UActivatable_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UActivatable, 310933070);
	template<> ELECTRONICS_API UClass* StaticClass<UActivatable>()
	{
		return UActivatable::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UActivatable(Z_Construct_UClass_UActivatable, &UActivatable::StaticClass, TEXT("/Script/Electronics"), TEXT("UActivatable"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UActivatable);
	static FName NAME_UActivatable_Disable = FName(TEXT("Disable"));
	void IActivatable::Execute_Disable(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UActivatable::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UActivatable_Disable);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IActivatable*)(O->GetNativeInterfaceAddress(UActivatable::StaticClass())))
		{
			I->Disable_Implementation();
		}
	}
	static FName NAME_UActivatable_Enable = FName(TEXT("Enable"));
	void IActivatable::Execute_Enable(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UActivatable::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UActivatable_Enable);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IActivatable*)(O->GetNativeInterfaceAddress(UActivatable::StaticClass())))
		{
			I->Enable_Implementation();
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
