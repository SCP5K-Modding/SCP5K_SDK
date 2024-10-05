// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AISentience/Public/DialogueUser.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDialogueUser() {}
// Cross Module References
	AISENTIENCE_API UClass* Z_Construct_UClass_UDialogueUser_NoRegister();
	AISENTIENCE_API UClass* Z_Construct_UClass_UDialogueUser();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_AISentience();
	AISENTIENCE_API UClass* Z_Construct_UClass_UDialogueComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(IDialogueUser::execGetDialogueComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDialogueComponent**)Z_Param__Result=P_THIS->GetDialogueComponent_Implementation();
		P_NATIVE_END;
	}
	UDialogueComponent* IDialogueUser::GetDialogueComponent()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetDialogueComponent instead.");
		DialogueUser_eventGetDialogueComponent_Parms Parms;
		return Parms.ReturnValue;
	}
	void UDialogueUser::StaticRegisterNativesUDialogueUser()
	{
		UClass* Class = UDialogueUser::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDialogueComponent", &IDialogueUser::execGetDialogueComponent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDialogueUser_GetDialogueComponent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogueUser_GetDialogueComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDialogueUser_GetDialogueComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DialogueUser_eventGetDialogueComponent_Parms, ReturnValue), Z_Construct_UClass_UDialogueComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDialogueUser_GetDialogueComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueUser_GetDialogueComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogueUser_GetDialogueComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueUser_GetDialogueComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogueUser_GetDialogueComponent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DialogueUser.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueUser_GetDialogueComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogueUser, nullptr, "GetDialogueComponent", nullptr, nullptr, sizeof(DialogueUser_eventGetDialogueComponent_Parms), Z_Construct_UFunction_UDialogueUser_GetDialogueComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueUser_GetDialogueComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDialogueUser_GetDialogueComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueUser_GetDialogueComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDialogueUser_GetDialogueComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDialogueUser_GetDialogueComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDialogueUser_NoRegister()
	{
		return UDialogueUser::StaticClass();
	}
	struct Z_Construct_UClass_UDialogueUser_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDialogueUser_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_AISentience,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDialogueUser_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDialogueUser_GetDialogueComponent, "GetDialogueComponent" }, // 145066168
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueUser_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DialogueUser.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDialogueUser_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IDialogueUser>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDialogueUser_Statics::ClassParams = {
		&UDialogueUser::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UDialogueUser_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueUser_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDialogueUser()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDialogueUser_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDialogueUser, 1557250646);
	template<> AISENTIENCE_API UClass* StaticClass<UDialogueUser>()
	{
		return UDialogueUser::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDialogueUser(Z_Construct_UClass_UDialogueUser, &UDialogueUser::StaticClass, TEXT("/Script/AISentience"), TEXT("UDialogueUser"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDialogueUser);
	static FName NAME_UDialogueUser_GetDialogueComponent = FName(TEXT("GetDialogueComponent"));
	UDialogueComponent* IDialogueUser::Execute_GetDialogueComponent(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UDialogueUser::StaticClass()));
		DialogueUser_eventGetDialogueComponent_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UDialogueUser_GetDialogueComponent);
		if (Func)
		{
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IDialogueUser*)(O->GetNativeInterfaceAddress(UDialogueUser::StaticClass())))
		{
			Parms.ReturnValue = I->GetDialogueComponent_Implementation();
		}
		return Parms.ReturnValue;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
