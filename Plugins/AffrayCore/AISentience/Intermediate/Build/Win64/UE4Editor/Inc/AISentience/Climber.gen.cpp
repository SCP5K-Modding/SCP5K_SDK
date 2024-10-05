// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AISentience/Public/Climber.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClimber() {}
// Cross Module References
	AISENTIENCE_API UClass* Z_Construct_UClass_UClimber_NoRegister();
	AISENTIENCE_API UClass* Z_Construct_UClass_UClimber();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_AISentience();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	AIMODULE_API UClass* Z_Construct_UClass_ANavLinkProxy_NoRegister();
	AISENTIENCE_API UEnum* Z_Construct_UEnum_AISentience_EClimbingType();
// End Cross Module References
	DEFINE_FUNCTION(IClimber::execClimb)
	{
		P_GET_STRUCT(FVector,Z_Param_Destination);
		P_GET_STRUCT(FRotator,Z_Param_Rotation);
		P_GET_OBJECT(ANavLinkProxy,Z_Param_NavLink);
		P_GET_ENUM(EClimbingType,Z_Param_Type);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Climb_Implementation(Z_Param_Destination,Z_Param_Rotation,Z_Param_NavLink,EClimbingType(Z_Param_Type));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IClimber::execGetAvailableClimbingModes)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(uint8*)Z_Param__Result=P_THIS->GetAvailableClimbingModes_Implementation();
		P_NATIVE_END;
	}
	void IClimber::Climb(FVector Destination, FRotator Rotation, ANavLinkProxy* NavLink, EClimbingType Type)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_Climb instead.");
	}
	uint8 IClimber::GetAvailableClimbingModes()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetAvailableClimbingModes instead.");
		Climber_eventGetAvailableClimbingModes_Parms Parms;
		return Parms.ReturnValue;
	}
	void UClimber::StaticRegisterNativesUClimber()
	{
		UClass* Class = UClimber::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Climb", &IClimber::execClimb },
			{ "GetAvailableClimbingModes", &IClimber::execGetAvailableClimbingModes },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UClimber_Climb_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Destination;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotation;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NavLink;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UClimber_Climb_Statics::NewProp_Destination = { "Destination", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Climber_eventClimb_Parms, Destination), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UClimber_Climb_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Climber_eventClimb_Parms, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UClimber_Climb_Statics::NewProp_NavLink = { "NavLink", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Climber_eventClimb_Parms, NavLink), Z_Construct_UClass_ANavLinkProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UClimber_Climb_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UClimber_Climb_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Climber_eventClimb_Parms, Type), Z_Construct_UEnum_AISentience_EClimbingType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UClimber_Climb_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UClimber_Climb_Statics::NewProp_Destination,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UClimber_Climb_Statics::NewProp_Rotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UClimber_Climb_Statics::NewProp_NavLink,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UClimber_Climb_Statics::NewProp_Type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UClimber_Climb_Statics::NewProp_Type,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UClimber_Climb_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Climber.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UClimber_Climb_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UClimber, nullptr, "Climb", nullptr, nullptr, sizeof(Climber_eventClimb_Parms), Z_Construct_UFunction_UClimber_Climb_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UClimber_Climb_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C820C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UClimber_Climb_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UClimber_Climb_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UClimber_Climb()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UClimber_Climb_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UClimber_GetAvailableClimbingModes_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UClimber_GetAvailableClimbingModes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Climber_eventGetAvailableClimbingModes_Parms, ReturnValue), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UClimber_GetAvailableClimbingModes_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UClimber_GetAvailableClimbingModes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UClimber_GetAvailableClimbingModes_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Climber.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UClimber_GetAvailableClimbingModes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UClimber, nullptr, "GetAvailableClimbingModes", nullptr, nullptr, sizeof(Climber_eventGetAvailableClimbingModes_Parms), Z_Construct_UFunction_UClimber_GetAvailableClimbingModes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UClimber_GetAvailableClimbingModes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UClimber_GetAvailableClimbingModes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UClimber_GetAvailableClimbingModes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UClimber_GetAvailableClimbingModes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UClimber_GetAvailableClimbingModes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UClimber_NoRegister()
	{
		return UClimber::StaticClass();
	}
	struct Z_Construct_UClass_UClimber_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UClimber_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_AISentience,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UClimber_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UClimber_Climb, "Climb" }, // 1740311230
		{ &Z_Construct_UFunction_UClimber_GetAvailableClimbingModes, "GetAvailableClimbingModes" }, // 3613482372
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClimber_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Climber.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UClimber_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IClimber>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UClimber_Statics::ClassParams = {
		&UClimber::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UClimber_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UClimber_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UClimber()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UClimber_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UClimber, 2756136888);
	template<> AISENTIENCE_API UClass* StaticClass<UClimber>()
	{
		return UClimber::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UClimber(Z_Construct_UClass_UClimber, &UClimber::StaticClass, TEXT("/Script/AISentience"), TEXT("UClimber"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UClimber);
	static FName NAME_UClimber_Climb = FName(TEXT("Climb"));
	void IClimber::Execute_Climb(UObject* O, FVector Destination, FRotator Rotation, ANavLinkProxy* NavLink, EClimbingType Type)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UClimber::StaticClass()));
		Climber_eventClimb_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UClimber_Climb);
		if (Func)
		{
			Parms.Destination=Destination;
			Parms.Rotation=Rotation;
			Parms.NavLink=NavLink;
			Parms.Type=Type;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IClimber*)(O->GetNativeInterfaceAddress(UClimber::StaticClass())))
		{
			I->Climb_Implementation(Destination,Rotation,NavLink,Type);
		}
	}
	static FName NAME_UClimber_GetAvailableClimbingModes = FName(TEXT("GetAvailableClimbingModes"));
	uint8 IClimber::Execute_GetAvailableClimbingModes(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UClimber::StaticClass()));
		Climber_eventGetAvailableClimbingModes_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UClimber_GetAvailableClimbingModes);
		if (Func)
		{
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IClimber*)(O->GetNativeInterfaceAddress(UClimber::StaticClass())))
		{
			Parms.ReturnValue = I->GetAvailableClimbingModes_Implementation();
		}
		return Parms.ReturnValue;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
