// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSController/Public/Kickable.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKickable() {}
// Cross Module References
	FPSCONTROLLER_API UClass* Z_Construct_UClass_UKickable_NoRegister();
	FPSCONTROLLER_API UClass* Z_Construct_UClass_UKickable();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_FPSController();
	FPSCONTROLLER_API UClass* Z_Construct_UClass_AFPSCharacterBase_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(IKickable::execCanBeKicked)
	{
		P_GET_OBJECT(AFPSCharacterBase,Z_Param_Kicker);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanBeKicked_Implementation(Z_Param_Kicker);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IKickable::execKick)
	{
		P_GET_OBJECT(AFPSCharacterBase,Z_Param_Kicker);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Kick_Implementation(Z_Param_Kicker);
		P_NATIVE_END;
	}
	bool IKickable::CanBeKicked(AFPSCharacterBase* Kicker)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_CanBeKicked instead.");
		Kickable_eventCanBeKicked_Parms Parms;
		return Parms.ReturnValue;
	}
	void IKickable::Kick(AFPSCharacterBase* Kicker)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_Kick instead.");
	}
	void UKickable::StaticRegisterNativesUKickable()
	{
		UClass* Class = UKickable::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CanBeKicked", &IKickable::execCanBeKicked },
			{ "Kick", &IKickable::execKick },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UKickable_CanBeKicked_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Kicker;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKickable_CanBeKicked_Statics::NewProp_Kicker = { "Kicker", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Kickable_eventCanBeKicked_Parms, Kicker), Z_Construct_UClass_AFPSCharacterBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UKickable_CanBeKicked_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Kickable_eventCanBeKicked_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKickable_CanBeKicked_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Kickable_eventCanBeKicked_Parms), &Z_Construct_UFunction_UKickable_CanBeKicked_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKickable_CanBeKicked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKickable_CanBeKicked_Statics::NewProp_Kicker,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKickable_CanBeKicked_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKickable_CanBeKicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Kickable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKickable_CanBeKicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKickable, nullptr, "CanBeKicked", nullptr, nullptr, sizeof(Kickable_eventCanBeKicked_Parms), Z_Construct_UFunction_UKickable_CanBeKicked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKickable_CanBeKicked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKickable_CanBeKicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKickable_CanBeKicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKickable_CanBeKicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKickable_CanBeKicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKickable_Kick_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Kicker;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKickable_Kick_Statics::NewProp_Kicker = { "Kicker", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Kickable_eventKick_Parms, Kicker), Z_Construct_UClass_AFPSCharacterBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKickable_Kick_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKickable_Kick_Statics::NewProp_Kicker,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKickable_Kick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Kickable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKickable_Kick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKickable, nullptr, "Kick", nullptr, nullptr, sizeof(Kickable_eventKick_Parms), Z_Construct_UFunction_UKickable_Kick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKickable_Kick_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKickable_Kick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKickable_Kick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKickable_Kick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKickable_Kick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UKickable_NoRegister()
	{
		return UKickable::StaticClass();
	}
	struct Z_Construct_UClass_UKickable_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UKickable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_FPSController,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UKickable_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UKickable_CanBeKicked, "CanBeKicked" }, // 3606215001
		{ &Z_Construct_UFunction_UKickable_Kick, "Kick" }, // 2432073694
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKickable_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Kickable.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UKickable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IKickable>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UKickable_Statics::ClassParams = {
		&UKickable::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UKickable_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UKickable_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UKickable()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UKickable_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UKickable, 3459260393);
	template<> FPSCONTROLLER_API UClass* StaticClass<UKickable>()
	{
		return UKickable::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UKickable(Z_Construct_UClass_UKickable, &UKickable::StaticClass, TEXT("/Script/FPSController"), TEXT("UKickable"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UKickable);
	static FName NAME_UKickable_CanBeKicked = FName(TEXT("CanBeKicked"));
	bool IKickable::Execute_CanBeKicked(UObject* O, AFPSCharacterBase* Kicker)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UKickable::StaticClass()));
		Kickable_eventCanBeKicked_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UKickable_CanBeKicked);
		if (Func)
		{
			Parms.Kicker=Kicker;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IKickable*)(O->GetNativeInterfaceAddress(UKickable::StaticClass())))
		{
			Parms.ReturnValue = I->CanBeKicked_Implementation(Kicker);
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UKickable_Kick = FName(TEXT("Kick"));
	void IKickable::Execute_Kick(UObject* O, AFPSCharacterBase* Kicker)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UKickable::StaticClass()));
		Kickable_eventKick_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UKickable_Kick);
		if (Func)
		{
			Parms.Kicker=Kicker;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IKickable*)(O->GetNativeInterfaceAddress(UKickable::StaticClass())))
		{
			I->Kick_Implementation(Kicker);
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
