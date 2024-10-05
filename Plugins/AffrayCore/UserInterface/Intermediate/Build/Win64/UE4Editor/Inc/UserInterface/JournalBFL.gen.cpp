// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UserInterface/Public/JournalBFL.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeJournalBFL() {}
// Cross Module References
	USERINTERFACE_API UClass* Z_Construct_UClass_UJournalBFL_NoRegister();
	USERINTERFACE_API UClass* Z_Construct_UClass_UJournalBFL();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_UserInterface();
	USERINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FJournal();
// End Cross Module References
	DEFINE_FUNCTION(UJournalBFL::execEqualEqual_JournalJournal)
	{
		P_GET_STRUCT_REF(FJournal,Z_Param_Out_Arg1);
		P_GET_STRUCT_REF(FJournal,Z_Param_Out_Arg2);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UJournalBFL::EqualEqual_JournalJournal(Z_Param_Out_Arg1,Z_Param_Out_Arg2);
		P_NATIVE_END;
	}
	void UJournalBFL::StaticRegisterNativesUJournalBFL()
	{
		UClass* Class = UJournalBFL::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EqualEqual_JournalJournal", &UJournalBFL::execEqualEqual_JournalJournal },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UJournalBFL_EqualEqual_JournalJournal_Statics
	{
		struct JournalBFL_eventEqualEqual_JournalJournal_Parms
		{
			FJournal Arg1;
			FJournal Arg2;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Arg1_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Arg1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Arg2_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Arg2;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJournalBFL_EqualEqual_JournalJournal_Statics::NewProp_Arg1_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UJournalBFL_EqualEqual_JournalJournal_Statics::NewProp_Arg1 = { "Arg1", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JournalBFL_eventEqualEqual_JournalJournal_Parms, Arg1), Z_Construct_UScriptStruct_FJournal, METADATA_PARAMS(Z_Construct_UFunction_UJournalBFL_EqualEqual_JournalJournal_Statics::NewProp_Arg1_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UJournalBFL_EqualEqual_JournalJournal_Statics::NewProp_Arg1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJournalBFL_EqualEqual_JournalJournal_Statics::NewProp_Arg2_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UJournalBFL_EqualEqual_JournalJournal_Statics::NewProp_Arg2 = { "Arg2", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JournalBFL_eventEqualEqual_JournalJournal_Parms, Arg2), Z_Construct_UScriptStruct_FJournal, METADATA_PARAMS(Z_Construct_UFunction_UJournalBFL_EqualEqual_JournalJournal_Statics::NewProp_Arg2_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UJournalBFL_EqualEqual_JournalJournal_Statics::NewProp_Arg2_MetaData)) };
	void Z_Construct_UFunction_UJournalBFL_EqualEqual_JournalJournal_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((JournalBFL_eventEqualEqual_JournalJournal_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UJournalBFL_EqualEqual_JournalJournal_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(JournalBFL_eventEqualEqual_JournalJournal_Parms), &Z_Construct_UFunction_UJournalBFL_EqualEqual_JournalJournal_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJournalBFL_EqualEqual_JournalJournal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJournalBFL_EqualEqual_JournalJournal_Statics::NewProp_Arg1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJournalBFL_EqualEqual_JournalJournal_Statics::NewProp_Arg2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJournalBFL_EqualEqual_JournalJournal_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJournalBFL_EqualEqual_JournalJournal_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/JournalBFL.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UJournalBFL_EqualEqual_JournalJournal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJournalBFL, nullptr, "EqualEqual_JournalJournal", nullptr, nullptr, sizeof(JournalBFL_eventEqualEqual_JournalJournal_Parms), Z_Construct_UFunction_UJournalBFL_EqualEqual_JournalJournal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJournalBFL_EqualEqual_JournalJournal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJournalBFL_EqualEqual_JournalJournal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJournalBFL_EqualEqual_JournalJournal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJournalBFL_EqualEqual_JournalJournal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UJournalBFL_EqualEqual_JournalJournal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UJournalBFL_NoRegister()
	{
		return UJournalBFL::StaticClass();
	}
	struct Z_Construct_UClass_UJournalBFL_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UJournalBFL_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_UserInterface,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UJournalBFL_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UJournalBFL_EqualEqual_JournalJournal, "EqualEqual_JournalJournal" }, // 2362771556
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJournalBFL_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "JournalBFL.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/JournalBFL.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UJournalBFL_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UJournalBFL>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UJournalBFL_Statics::ClassParams = {
		&UJournalBFL::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UJournalBFL_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UJournalBFL_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UJournalBFL()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UJournalBFL_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UJournalBFL, 3274207494);
	template<> USERINTERFACE_API UClass* StaticClass<UJournalBFL>()
	{
		return UJournalBFL::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UJournalBFL(Z_Construct_UClass_UJournalBFL, &UJournalBFL::StaticClass, TEXT("/Script/UserInterface"), TEXT("UJournalBFL"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UJournalBFL);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
