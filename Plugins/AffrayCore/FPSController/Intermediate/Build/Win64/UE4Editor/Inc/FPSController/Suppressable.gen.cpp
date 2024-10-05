// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSController/Public/Suppressable.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSuppressable() {}
// Cross Module References
	FPSCONTROLLER_API UClass* Z_Construct_UClass_USuppressable_NoRegister();
	FPSCONTROLLER_API UClass* Z_Construct_UClass_USuppressable();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_FPSController();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ISuppressable::execSuppressed)
	{
		P_GET_STRUCT(FVector,Z_Param_Location);
		P_GET_OBJECT(AActor,Z_Param_Suppressor);
		P_GET_UBOOL(Z_Param_bIsSuperSonic);
		P_GET_PROPERTY(FFloatProperty,Z_Param_SuppressionAmount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Suppressed_Implementation(Z_Param_Location,Z_Param_Suppressor,Z_Param_bIsSuperSonic,Z_Param_SuppressionAmount);
		P_NATIVE_END;
	}
	void ISuppressable::Suppressed(FVector Location, AActor* Suppressor, bool bIsSuperSonic, float SuppressionAmount)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_Suppressed instead.");
	}
	void USuppressable::StaticRegisterNativesUSuppressable()
	{
		UClass* Class = USuppressable::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Suppressed", &ISuppressable::execSuppressed },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USuppressable_Suppressed_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Suppressor;
		static void NewProp_bIsSuperSonic_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsSuperSonic;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SuppressionAmount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USuppressable_Suppressed_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Suppressable_eventSuppressed_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USuppressable_Suppressed_Statics::NewProp_Suppressor = { "Suppressor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Suppressable_eventSuppressed_Parms, Suppressor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USuppressable_Suppressed_Statics::NewProp_bIsSuperSonic_SetBit(void* Obj)
	{
		((Suppressable_eventSuppressed_Parms*)Obj)->bIsSuperSonic = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USuppressable_Suppressed_Statics::NewProp_bIsSuperSonic = { "bIsSuperSonic", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Suppressable_eventSuppressed_Parms), &Z_Construct_UFunction_USuppressable_Suppressed_Statics::NewProp_bIsSuperSonic_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USuppressable_Suppressed_Statics::NewProp_SuppressionAmount = { "SuppressionAmount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Suppressable_eventSuppressed_Parms, SuppressionAmount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USuppressable_Suppressed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USuppressable_Suppressed_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USuppressable_Suppressed_Statics::NewProp_Suppressor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USuppressable_Suppressed_Statics::NewProp_bIsSuperSonic,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USuppressable_Suppressed_Statics::NewProp_SuppressionAmount,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USuppressable_Suppressed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Suppressable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USuppressable_Suppressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USuppressable, nullptr, "Suppressed", nullptr, nullptr, sizeof(Suppressable_eventSuppressed_Parms), Z_Construct_UFunction_USuppressable_Suppressed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USuppressable_Suppressed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C820C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USuppressable_Suppressed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USuppressable_Suppressed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USuppressable_Suppressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USuppressable_Suppressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USuppressable_NoRegister()
	{
		return USuppressable::StaticClass();
	}
	struct Z_Construct_UClass_USuppressable_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USuppressable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_FPSController,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USuppressable_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USuppressable_Suppressed, "Suppressed" }, // 744416530
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USuppressable_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Suppressable.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USuppressable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ISuppressable>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USuppressable_Statics::ClassParams = {
		&USuppressable::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USuppressable_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USuppressable_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USuppressable()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USuppressable_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USuppressable, 1535615879);
	template<> FPSCONTROLLER_API UClass* StaticClass<USuppressable>()
	{
		return USuppressable::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USuppressable(Z_Construct_UClass_USuppressable, &USuppressable::StaticClass, TEXT("/Script/FPSController"), TEXT("USuppressable"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USuppressable);
	static FName NAME_USuppressable_Suppressed = FName(TEXT("Suppressed"));
	void ISuppressable::Execute_Suppressed(UObject* O, FVector Location, AActor* Suppressor, bool bIsSuperSonic, float SuppressionAmount)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(USuppressable::StaticClass()));
		Suppressable_eventSuppressed_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_USuppressable_Suppressed);
		if (Func)
		{
			Parms.Location=Location;
			Parms.Suppressor=Suppressor;
			Parms.bIsSuperSonic=bIsSuperSonic;
			Parms.SuppressionAmount=SuppressionAmount;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (ISuppressable*)(O->GetNativeInterfaceAddress(USuppressable::StaticClass())))
		{
			I->Suppressed_Implementation(Location,Suppressor,bIsSuperSonic,SuppressionAmount);
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
