// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSController/Public/MeleeUser.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeleeUser() {}
// Cross Module References
	FPSCONTROLLER_API UClass* Z_Construct_UClass_UMeleeUser_NoRegister();
	FPSCONTROLLER_API UClass* Z_Construct_UClass_UMeleeUser();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_FPSController();
	FPSCONTROLLER_API UEnum* Z_Construct_UEnum_FPSController_EMeleeAttackDirection();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	DEFINE_FUNCTION(IMeleeUser::execCancel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Cancel_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IMeleeUser::execGetAttackDirection)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TEnumAsByte<EMeleeAttackDirection>*)Z_Param__Result=P_THIS->GetAttackDirection_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IMeleeUser::execGetAttackVector)
	{
		P_GET_PROPERTY_REF(FByteProperty,Z_Param_Out_Direction);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetAttackVector_Implementation((TEnumAsByte<EMeleeAttackDirection>&)(Z_Param_Out_Direction));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IMeleeUser::execIsBlocking)
	{
		P_GET_PROPERTY_REF(FByteProperty,Z_Param_Out_Direction);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsBlocking_Implementation((TEnumAsByte<EMeleeAttackDirection>&)(Z_Param_Out_Direction));
		P_NATIVE_END;
	}
	void IMeleeUser::Cancel()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_Cancel instead.");
	}
	EMeleeAttackDirection IMeleeUser::GetAttackDirection()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetAttackDirection instead.");
		MeleeUser_eventGetAttackDirection_Parms Parms;
		return Parms.ReturnValue;
	}
	FVector IMeleeUser::GetAttackVector(TEnumAsByte<EMeleeAttackDirection> const& Direction)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetAttackVector instead.");
		MeleeUser_eventGetAttackVector_Parms Parms;
		return Parms.ReturnValue;
	}
	bool IMeleeUser::IsBlocking(TEnumAsByte<EMeleeAttackDirection> const& Direction)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_IsBlocking instead.");
		MeleeUser_eventIsBlocking_Parms Parms;
		return Parms.ReturnValue;
	}
	void UMeleeUser::StaticRegisterNativesUMeleeUser()
	{
		UClass* Class = UMeleeUser::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Cancel", &IMeleeUser::execCancel },
			{ "GetAttackDirection", &IMeleeUser::execGetAttackDirection },
			{ "GetAttackVector", &IMeleeUser::execGetAttackVector },
			{ "IsBlocking", &IMeleeUser::execIsBlocking },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMeleeUser_Cancel_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeleeUser_Cancel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MeleeUser.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeleeUser_Cancel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeleeUser, nullptr, "Cancel", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMeleeUser_Cancel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeleeUser_Cancel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMeleeUser_Cancel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMeleeUser_Cancel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMeleeUser_GetAttackDirection_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMeleeUser_GetAttackDirection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeleeUser_eventGetAttackDirection_Parms, ReturnValue), Z_Construct_UEnum_FPSController_EMeleeAttackDirection, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeleeUser_GetAttackDirection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeleeUser_GetAttackDirection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeleeUser_GetAttackDirection_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MeleeUser.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeleeUser_GetAttackDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeleeUser, nullptr, "GetAttackDirection", nullptr, nullptr, sizeof(MeleeUser_eventGetAttackDirection_Parms), Z_Construct_UFunction_UMeleeUser_GetAttackDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeleeUser_GetAttackDirection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMeleeUser_GetAttackDirection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeleeUser_GetAttackDirection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMeleeUser_GetAttackDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMeleeUser_GetAttackDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMeleeUser_GetAttackVector_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Direction;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeleeUser_GetAttackVector_Statics::NewProp_Direction_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMeleeUser_GetAttackVector_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeleeUser_eventGetAttackVector_Parms, Direction), Z_Construct_UEnum_FPSController_EMeleeAttackDirection, METADATA_PARAMS(Z_Construct_UFunction_UMeleeUser_GetAttackVector_Statics::NewProp_Direction_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeleeUser_GetAttackVector_Statics::NewProp_Direction_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeleeUser_GetAttackVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeleeUser_eventGetAttackVector_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeleeUser_GetAttackVector_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeleeUser_GetAttackVector_Statics::NewProp_Direction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeleeUser_GetAttackVector_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeleeUser_GetAttackVector_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MeleeUser.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeleeUser_GetAttackVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeleeUser, nullptr, "GetAttackVector", nullptr, nullptr, sizeof(MeleeUser_eventGetAttackVector_Parms), Z_Construct_UFunction_UMeleeUser_GetAttackVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeleeUser_GetAttackVector_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0CC20C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMeleeUser_GetAttackVector_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeleeUser_GetAttackVector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMeleeUser_GetAttackVector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMeleeUser_GetAttackVector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMeleeUser_IsBlocking_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Direction;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeleeUser_IsBlocking_Statics::NewProp_Direction_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMeleeUser_IsBlocking_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeleeUser_eventIsBlocking_Parms, Direction), Z_Construct_UEnum_FPSController_EMeleeAttackDirection, METADATA_PARAMS(Z_Construct_UFunction_UMeleeUser_IsBlocking_Statics::NewProp_Direction_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeleeUser_IsBlocking_Statics::NewProp_Direction_MetaData)) };
	void Z_Construct_UFunction_UMeleeUser_IsBlocking_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MeleeUser_eventIsBlocking_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMeleeUser_IsBlocking_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MeleeUser_eventIsBlocking_Parms), &Z_Construct_UFunction_UMeleeUser_IsBlocking_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeleeUser_IsBlocking_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeleeUser_IsBlocking_Statics::NewProp_Direction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeleeUser_IsBlocking_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeleeUser_IsBlocking_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MeleeUser.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeleeUser_IsBlocking_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeleeUser, nullptr, "IsBlocking", nullptr, nullptr, sizeof(MeleeUser_eventIsBlocking_Parms), Z_Construct_UFunction_UMeleeUser_IsBlocking_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeleeUser_IsBlocking_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMeleeUser_IsBlocking_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeleeUser_IsBlocking_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMeleeUser_IsBlocking()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMeleeUser_IsBlocking_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMeleeUser_NoRegister()
	{
		return UMeleeUser::StaticClass();
	}
	struct Z_Construct_UClass_UMeleeUser_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMeleeUser_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_FPSController,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMeleeUser_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMeleeUser_Cancel, "Cancel" }, // 1267863442
		{ &Z_Construct_UFunction_UMeleeUser_GetAttackDirection, "GetAttackDirection" }, // 3823841707
		{ &Z_Construct_UFunction_UMeleeUser_GetAttackVector, "GetAttackVector" }, // 221749683
		{ &Z_Construct_UFunction_UMeleeUser_IsBlocking, "IsBlocking" }, // 658326031
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeleeUser_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MeleeUser.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMeleeUser_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IMeleeUser>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMeleeUser_Statics::ClassParams = {
		&UMeleeUser::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMeleeUser_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMeleeUser_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMeleeUser()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMeleeUser_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMeleeUser, 2278280352);
	template<> FPSCONTROLLER_API UClass* StaticClass<UMeleeUser>()
	{
		return UMeleeUser::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMeleeUser(Z_Construct_UClass_UMeleeUser, &UMeleeUser::StaticClass, TEXT("/Script/FPSController"), TEXT("UMeleeUser"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMeleeUser);
	static FName NAME_UMeleeUser_Cancel = FName(TEXT("Cancel"));
	void IMeleeUser::Execute_Cancel(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UMeleeUser::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UMeleeUser_Cancel);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IMeleeUser*)(O->GetNativeInterfaceAddress(UMeleeUser::StaticClass())))
		{
			I->Cancel_Implementation();
		}
	}
	static FName NAME_UMeleeUser_GetAttackDirection = FName(TEXT("GetAttackDirection"));
	EMeleeAttackDirection IMeleeUser::Execute_GetAttackDirection(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UMeleeUser::StaticClass()));
		MeleeUser_eventGetAttackDirection_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UMeleeUser_GetAttackDirection);
		if (Func)
		{
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IMeleeUser*)(O->GetNativeInterfaceAddress(UMeleeUser::StaticClass())))
		{
			Parms.ReturnValue = I->GetAttackDirection_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UMeleeUser_GetAttackVector = FName(TEXT("GetAttackVector"));
	FVector IMeleeUser::Execute_GetAttackVector(UObject* O, TEnumAsByte<EMeleeAttackDirection> const& Direction)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UMeleeUser::StaticClass()));
		MeleeUser_eventGetAttackVector_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UMeleeUser_GetAttackVector);
		if (Func)
		{
			Parms.Direction=Direction;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IMeleeUser*)(O->GetNativeInterfaceAddress(UMeleeUser::StaticClass())))
		{
			Parms.ReturnValue = I->GetAttackVector_Implementation(Direction);
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UMeleeUser_IsBlocking = FName(TEXT("IsBlocking"));
	bool IMeleeUser::Execute_IsBlocking(UObject* O, TEnumAsByte<EMeleeAttackDirection> const& Direction)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UMeleeUser::StaticClass()));
		MeleeUser_eventIsBlocking_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UMeleeUser_IsBlocking);
		if (Func)
		{
			Parms.Direction=Direction;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IMeleeUser*)(O->GetNativeInterfaceAddress(UMeleeUser::StaticClass())))
		{
			Parms.ReturnValue = I->IsBlocking_Implementation(Direction);
		}
		return Parms.ReturnValue;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
