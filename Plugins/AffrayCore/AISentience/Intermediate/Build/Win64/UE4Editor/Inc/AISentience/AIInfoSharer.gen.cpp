// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AISentience/Public/AIInfoSharer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAIInfoSharer() {}
// Cross Module References
	AISENTIENCE_API UClass* Z_Construct_UClass_UAIInfoSharer_NoRegister();
	AISENTIENCE_API UClass* Z_Construct_UClass_UAIInfoSharer();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_AISentience();
	AISENTIENCE_API UClass* Z_Construct_UClass_UAIInfoSharingComponent_NoRegister();
// End Cross Module References
	UAIInfoSharingComponent* IAIInfoSharer::GetInfoSharingComponent()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetInfoSharingComponent instead.");
		AIInfoSharer_eventGetInfoSharingComponent_Parms Parms;
		return Parms.ReturnValue;
	}
	void UAIInfoSharer::StaticRegisterNativesUAIInfoSharer()
	{
	}
	struct Z_Construct_UFunction_UAIInfoSharer_GetInfoSharingComponent_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAIInfoSharer_GetInfoSharingComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAIInfoSharer_GetInfoSharingComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIInfoSharer_eventGetInfoSharingComponent_Parms, ReturnValue), Z_Construct_UClass_UAIInfoSharingComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAIInfoSharer_GetInfoSharingComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIInfoSharer_GetInfoSharingComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAIInfoSharer_GetInfoSharingComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIInfoSharer_GetInfoSharingComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAIInfoSharer_GetInfoSharingComponent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AIInfoSharer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIInfoSharer_GetInfoSharingComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIInfoSharer, nullptr, "GetInfoSharingComponent", nullptr, nullptr, sizeof(AIInfoSharer_eventGetInfoSharingComponent_Parms), Z_Construct_UFunction_UAIInfoSharer_GetInfoSharingComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIInfoSharer_GetInfoSharingComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAIInfoSharer_GetInfoSharingComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIInfoSharer_GetInfoSharingComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAIInfoSharer_GetInfoSharingComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAIInfoSharer_GetInfoSharingComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAIInfoSharer_NoRegister()
	{
		return UAIInfoSharer::StaticClass();
	}
	struct Z_Construct_UClass_UAIInfoSharer_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAIInfoSharer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_AISentience,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAIInfoSharer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAIInfoSharer_GetInfoSharingComponent, "GetInfoSharingComponent" }, // 3489739167
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAIInfoSharer_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AIInfoSharer.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAIInfoSharer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IAIInfoSharer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAIInfoSharer_Statics::ClassParams = {
		&UAIInfoSharer::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAIInfoSharer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAIInfoSharer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAIInfoSharer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAIInfoSharer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAIInfoSharer, 3232201280);
	template<> AISENTIENCE_API UClass* StaticClass<UAIInfoSharer>()
	{
		return UAIInfoSharer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAIInfoSharer(Z_Construct_UClass_UAIInfoSharer, &UAIInfoSharer::StaticClass, TEXT("/Script/AISentience"), TEXT("UAIInfoSharer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAIInfoSharer);
	static FName NAME_UAIInfoSharer_GetInfoSharingComponent = FName(TEXT("GetInfoSharingComponent"));
	UAIInfoSharingComponent* IAIInfoSharer::Execute_GetInfoSharingComponent(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UAIInfoSharer::StaticClass()));
		AIInfoSharer_eventGetInfoSharingComponent_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UAIInfoSharer_GetInfoSharingComponent);
		if (Func)
		{
			O->ProcessEvent(Func, &Parms);
		}
		return Parms.ReturnValue;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
