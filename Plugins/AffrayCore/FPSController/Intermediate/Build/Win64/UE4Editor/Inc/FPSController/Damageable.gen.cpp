// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSController/Public/Damageable.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDamageable() {}
// Cross Module References
	FPSCONTROLLER_API UClass* Z_Construct_UClass_UDamageable_NoRegister();
	FPSCONTROLLER_API UClass* Z_Construct_UClass_UDamageable();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_FPSController();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UDamageType_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(IDamageable::execApplyCosmeticDamage)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Amount);
		P_GET_OBJECT(APawn,Z_Param_InstigatorPawn);
		P_GET_OBJECT(UClass,Z_Param_DamageClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyCosmeticDamage_Implementation(Z_Param_Amount,Z_Param_InstigatorPawn,Z_Param_DamageClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IDamageable::execGetHealth)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetHealth_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IDamageable::execGetIsDead)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetIsDead_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IDamageable::execGetMaxHealth)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMaxHealth_Implementation();
		P_NATIVE_END;
	}
	void IDamageable::ApplyCosmeticDamage(float Amount, APawn* InstigatorPawn, TSubclassOf<UDamageType>  DamageClass)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_ApplyCosmeticDamage instead.");
	}
	float IDamageable::GetHealth() const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetHealth instead.");
		Damageable_eventGetHealth_Parms Parms;
		return Parms.ReturnValue;
	}
	bool IDamageable::GetIsDead() const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetIsDead instead.");
		Damageable_eventGetIsDead_Parms Parms;
		return Parms.ReturnValue;
	}
	float IDamageable::GetMaxHealth() const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetMaxHealth instead.");
		Damageable_eventGetMaxHealth_Parms Parms;
		return Parms.ReturnValue;
	}
	void UDamageable::StaticRegisterNativesUDamageable()
	{
		UClass* Class = UDamageable::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ApplyCosmeticDamage", &IDamageable::execApplyCosmeticDamage },
			{ "GetHealth", &IDamageable::execGetHealth },
			{ "GetIsDead", &IDamageable::execGetIsDead },
			{ "GetMaxHealth", &IDamageable::execGetMaxHealth },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDamageable_ApplyCosmeticDamage_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Amount;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InstigatorPawn;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_DamageClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDamageable_ApplyCosmeticDamage_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Damageable_eventApplyCosmeticDamage_Parms, Amount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDamageable_ApplyCosmeticDamage_Statics::NewProp_InstigatorPawn = { "InstigatorPawn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Damageable_eventApplyCosmeticDamage_Parms, InstigatorPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UDamageable_ApplyCosmeticDamage_Statics::NewProp_DamageClass = { "DamageClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Damageable_eventApplyCosmeticDamage_Parms, DamageClass), Z_Construct_UClass_UDamageType_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDamageable_ApplyCosmeticDamage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDamageable_ApplyCosmeticDamage_Statics::NewProp_Amount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDamageable_ApplyCosmeticDamage_Statics::NewProp_InstigatorPawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDamageable_ApplyCosmeticDamage_Statics::NewProp_DamageClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDamageable_ApplyCosmeticDamage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Damageable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDamageable_ApplyCosmeticDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDamageable, nullptr, "ApplyCosmeticDamage", nullptr, nullptr, sizeof(Damageable_eventApplyCosmeticDamage_Parms), Z_Construct_UFunction_UDamageable_ApplyCosmeticDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDamageable_ApplyCosmeticDamage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDamageable_ApplyCosmeticDamage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDamageable_ApplyCosmeticDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDamageable_ApplyCosmeticDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDamageable_ApplyCosmeticDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDamageable_GetHealth_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDamageable_GetHealth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Damageable_eventGetHealth_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDamageable_GetHealth_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDamageable_GetHealth_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDamageable_GetHealth_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Damageable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDamageable_GetHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDamageable, nullptr, "GetHealth", nullptr, nullptr, sizeof(Damageable_eventGetHealth_Parms), Z_Construct_UFunction_UDamageable_GetHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDamageable_GetHealth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDamageable_GetHealth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDamageable_GetHealth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDamageable_GetHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDamageable_GetHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDamageable_GetIsDead_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDamageable_GetIsDead_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Damageable_eventGetIsDead_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDamageable_GetIsDead_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Damageable_eventGetIsDead_Parms), &Z_Construct_UFunction_UDamageable_GetIsDead_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDamageable_GetIsDead_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDamageable_GetIsDead_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDamageable_GetIsDead_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Damageable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDamageable_GetIsDead_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDamageable, nullptr, "GetIsDead", nullptr, nullptr, sizeof(Damageable_eventGetIsDead_Parms), Z_Construct_UFunction_UDamageable_GetIsDead_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDamageable_GetIsDead_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDamageable_GetIsDead_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDamageable_GetIsDead_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDamageable_GetIsDead()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDamageable_GetIsDead_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDamageable_GetMaxHealth_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDamageable_GetMaxHealth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Damageable_eventGetMaxHealth_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDamageable_GetMaxHealth_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDamageable_GetMaxHealth_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDamageable_GetMaxHealth_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Damageable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDamageable_GetMaxHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDamageable, nullptr, "GetMaxHealth", nullptr, nullptr, sizeof(Damageable_eventGetMaxHealth_Parms), Z_Construct_UFunction_UDamageable_GetMaxHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDamageable_GetMaxHealth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDamageable_GetMaxHealth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDamageable_GetMaxHealth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDamageable_GetMaxHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDamageable_GetMaxHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDamageable_NoRegister()
	{
		return UDamageable::StaticClass();
	}
	struct Z_Construct_UClass_UDamageable_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDamageable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_FPSController,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDamageable_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDamageable_ApplyCosmeticDamage, "ApplyCosmeticDamage" }, // 91936819
		{ &Z_Construct_UFunction_UDamageable_GetHealth, "GetHealth" }, // 3947995814
		{ &Z_Construct_UFunction_UDamageable_GetIsDead, "GetIsDead" }, // 237707204
		{ &Z_Construct_UFunction_UDamageable_GetMaxHealth, "GetMaxHealth" }, // 1704154140
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDamageable_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Damageable.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDamageable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IDamageable>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDamageable_Statics::ClassParams = {
		&UDamageable::StaticClass,
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
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UDamageable_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDamageable_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDamageable()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDamageable_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDamageable, 1803321397);
	template<> FPSCONTROLLER_API UClass* StaticClass<UDamageable>()
	{
		return UDamageable::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDamageable(Z_Construct_UClass_UDamageable, &UDamageable::StaticClass, TEXT("/Script/FPSController"), TEXT("UDamageable"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDamageable);
	static FName NAME_UDamageable_ApplyCosmeticDamage = FName(TEXT("ApplyCosmeticDamage"));
	void IDamageable::Execute_ApplyCosmeticDamage(UObject* O, float Amount, APawn* InstigatorPawn, TSubclassOf<UDamageType>  DamageClass)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UDamageable::StaticClass()));
		Damageable_eventApplyCosmeticDamage_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UDamageable_ApplyCosmeticDamage);
		if (Func)
		{
			Parms.Amount=Amount;
			Parms.InstigatorPawn=InstigatorPawn;
			Parms.DamageClass=DamageClass;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IDamageable*)(O->GetNativeInterfaceAddress(UDamageable::StaticClass())))
		{
			I->ApplyCosmeticDamage_Implementation(Amount,InstigatorPawn,DamageClass);
		}
	}
	static FName NAME_UDamageable_GetHealth = FName(TEXT("GetHealth"));
	float IDamageable::Execute_GetHealth(const UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UDamageable::StaticClass()));
		Damageable_eventGetHealth_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UDamageable_GetHealth);
		if (Func)
		{
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const IDamageable*)(O->GetNativeInterfaceAddress(UDamageable::StaticClass())))
		{
			Parms.ReturnValue = I->GetHealth_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UDamageable_GetIsDead = FName(TEXT("GetIsDead"));
	bool IDamageable::Execute_GetIsDead(const UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UDamageable::StaticClass()));
		Damageable_eventGetIsDead_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UDamageable_GetIsDead);
		if (Func)
		{
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const IDamageable*)(O->GetNativeInterfaceAddress(UDamageable::StaticClass())))
		{
			Parms.ReturnValue = I->GetIsDead_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UDamageable_GetMaxHealth = FName(TEXT("GetMaxHealth"));
	float IDamageable::Execute_GetMaxHealth(const UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UDamageable::StaticClass()));
		Damageable_eventGetMaxHealth_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UDamageable_GetMaxHealth);
		if (Func)
		{
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const IDamageable*)(O->GetNativeInterfaceAddress(UDamageable::StaticClass())))
		{
			Parms.ReturnValue = I->GetMaxHealth_Implementation();
		}
		return Parms.ReturnValue;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
