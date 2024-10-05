// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Electronics/Public/DoorInteraction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDoorInteraction() {}
// Cross Module References
	ELECTRONICS_API UClass* Z_Construct_UClass_UDoorInteraction_NoRegister();
	ELECTRONICS_API UClass* Z_Construct_UClass_UDoorInteraction();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_Electronics();
	ELECTRONICS_API UClass* Z_Construct_UClass_AElectronicDoor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavLinkCustomComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(IDoorInteraction::execCanInteractWithDoor)
	{
		P_GET_OBJECT(AElectronicDoor,Z_Param_Door);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanInteractWithDoor_Implementation(Z_Param_Door);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IDoorInteraction::execInteractDoor)
	{
		P_GET_STRUCT(FVector,Z_Param_TravelDirection);
		P_GET_STRUCT(FVector,Z_Param_TravelDestination);
		P_GET_OBJECT(AElectronicDoor,Z_Param_Door);
		P_GET_OBJECT(UNavLinkCustomComponent,Z_Param_NavLinkComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InteractDoor_Implementation(Z_Param_TravelDirection,Z_Param_TravelDestination,Z_Param_Door,Z_Param_NavLinkComponent);
		P_NATIVE_END;
	}
	bool IDoorInteraction::CanInteractWithDoor(const AElectronicDoor* Door) const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_CanInteractWithDoor instead.");
		DoorInteraction_eventCanInteractWithDoor_Parms Parms;
		return Parms.ReturnValue;
	}
	void IDoorInteraction::InteractDoor(FVector TravelDirection, FVector TravelDestination, AElectronicDoor* Door, const UNavLinkCustomComponent* NavLinkComponent)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_InteractDoor instead.");
	}
	void UDoorInteraction::StaticRegisterNativesUDoorInteraction()
	{
		UClass* Class = UDoorInteraction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CanInteractWithDoor", &IDoorInteraction::execCanInteractWithDoor },
			{ "InteractDoor", &IDoorInteraction::execInteractDoor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDoorInteraction_CanInteractWithDoor_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Door_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Door;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDoorInteraction_CanInteractWithDoor_Statics::NewProp_Door_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDoorInteraction_CanInteractWithDoor_Statics::NewProp_Door = { "Door", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DoorInteraction_eventCanInteractWithDoor_Parms, Door), Z_Construct_UClass_AElectronicDoor_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDoorInteraction_CanInteractWithDoor_Statics::NewProp_Door_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDoorInteraction_CanInteractWithDoor_Statics::NewProp_Door_MetaData)) };
	void Z_Construct_UFunction_UDoorInteraction_CanInteractWithDoor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DoorInteraction_eventCanInteractWithDoor_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDoorInteraction_CanInteractWithDoor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DoorInteraction_eventCanInteractWithDoor_Parms), &Z_Construct_UFunction_UDoorInteraction_CanInteractWithDoor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDoorInteraction_CanInteractWithDoor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDoorInteraction_CanInteractWithDoor_Statics::NewProp_Door,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDoorInteraction_CanInteractWithDoor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDoorInteraction_CanInteractWithDoor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DoorInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDoorInteraction_CanInteractWithDoor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDoorInteraction, nullptr, "CanInteractWithDoor", nullptr, nullptr, sizeof(DoorInteraction_eventCanInteractWithDoor_Parms), Z_Construct_UFunction_UDoorInteraction_CanInteractWithDoor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDoorInteraction_CanInteractWithDoor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDoorInteraction_CanInteractWithDoor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDoorInteraction_CanInteractWithDoor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDoorInteraction_CanInteractWithDoor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDoorInteraction_CanInteractWithDoor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDoorInteraction_InteractDoor_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TravelDirection;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TravelDestination;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Door;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NavLinkComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NavLinkComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDoorInteraction_InteractDoor_Statics::NewProp_TravelDirection = { "TravelDirection", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DoorInteraction_eventInteractDoor_Parms, TravelDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDoorInteraction_InteractDoor_Statics::NewProp_TravelDestination = { "TravelDestination", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DoorInteraction_eventInteractDoor_Parms, TravelDestination), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDoorInteraction_InteractDoor_Statics::NewProp_Door = { "Door", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DoorInteraction_eventInteractDoor_Parms, Door), Z_Construct_UClass_AElectronicDoor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDoorInteraction_InteractDoor_Statics::NewProp_NavLinkComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDoorInteraction_InteractDoor_Statics::NewProp_NavLinkComponent = { "NavLinkComponent", nullptr, (EPropertyFlags)0x0010000000080082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DoorInteraction_eventInteractDoor_Parms, NavLinkComponent), Z_Construct_UClass_UNavLinkCustomComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDoorInteraction_InteractDoor_Statics::NewProp_NavLinkComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDoorInteraction_InteractDoor_Statics::NewProp_NavLinkComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDoorInteraction_InteractDoor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDoorInteraction_InteractDoor_Statics::NewProp_TravelDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDoorInteraction_InteractDoor_Statics::NewProp_TravelDestination,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDoorInteraction_InteractDoor_Statics::NewProp_Door,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDoorInteraction_InteractDoor_Statics::NewProp_NavLinkComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDoorInteraction_InteractDoor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DoorInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDoorInteraction_InteractDoor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDoorInteraction, nullptr, "InteractDoor", nullptr, nullptr, sizeof(DoorInteraction_eventInteractDoor_Parms), Z_Construct_UFunction_UDoorInteraction_InteractDoor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDoorInteraction_InteractDoor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C820C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDoorInteraction_InteractDoor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDoorInteraction_InteractDoor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDoorInteraction_InteractDoor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDoorInteraction_InteractDoor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDoorInteraction_NoRegister()
	{
		return UDoorInteraction::StaticClass();
	}
	struct Z_Construct_UClass_UDoorInteraction_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDoorInteraction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Electronics,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDoorInteraction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDoorInteraction_CanInteractWithDoor, "CanInteractWithDoor" }, // 3404572048
		{ &Z_Construct_UFunction_UDoorInteraction_InteractDoor, "InteractDoor" }, // 3337567756
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDoorInteraction_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DoorInteraction.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDoorInteraction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IDoorInteraction>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDoorInteraction_Statics::ClassParams = {
		&UDoorInteraction::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UDoorInteraction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDoorInteraction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDoorInteraction()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDoorInteraction_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDoorInteraction, 1901804460);
	template<> ELECTRONICS_API UClass* StaticClass<UDoorInteraction>()
	{
		return UDoorInteraction::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDoorInteraction(Z_Construct_UClass_UDoorInteraction, &UDoorInteraction::StaticClass, TEXT("/Script/Electronics"), TEXT("UDoorInteraction"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDoorInteraction);
	static FName NAME_UDoorInteraction_CanInteractWithDoor = FName(TEXT("CanInteractWithDoor"));
	bool IDoorInteraction::Execute_CanInteractWithDoor(const UObject* O, const AElectronicDoor* Door)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UDoorInteraction::StaticClass()));
		DoorInteraction_eventCanInteractWithDoor_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UDoorInteraction_CanInteractWithDoor);
		if (Func)
		{
			Parms.Door=Door;
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const IDoorInteraction*)(O->GetNativeInterfaceAddress(UDoorInteraction::StaticClass())))
		{
			Parms.ReturnValue = I->CanInteractWithDoor_Implementation(Door);
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UDoorInteraction_InteractDoor = FName(TEXT("InteractDoor"));
	void IDoorInteraction::Execute_InteractDoor(UObject* O, FVector TravelDirection, FVector TravelDestination, AElectronicDoor* Door, const UNavLinkCustomComponent* NavLinkComponent)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UDoorInteraction::StaticClass()));
		DoorInteraction_eventInteractDoor_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UDoorInteraction_InteractDoor);
		if (Func)
		{
			Parms.TravelDirection=TravelDirection;
			Parms.TravelDestination=TravelDestination;
			Parms.Door=Door;
			Parms.NavLinkComponent=NavLinkComponent;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IDoorInteraction*)(O->GetNativeInterfaceAddress(UDoorInteraction::StaticClass())))
		{
			I->InteractDoor_Implementation(TravelDirection,TravelDestination,Door,NavLinkComponent);
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
