// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvancedSteamSessions/Public/AdvancedSteamWorkshopLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdvancedSteamWorkshopLibrary() {}
// Cross Module References
	ADVANCEDSTEAMSESSIONS_API UClass* Z_Construct_UClass_UAdvancedSteamWorkshopLibrary_NoRegister();
	ADVANCEDSTEAMSESSIONS_API UClass* Z_Construct_UClass_UAdvancedSteamWorkshopLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_AdvancedSteamSessions();
	ADVANCEDSTEAMSESSIONS_API UScriptStruct* Z_Construct_UScriptStruct_FBPSteamWorkshopID();
// End Cross Module References
	DEFINE_FUNCTION(UAdvancedSteamWorkshopLibrary::execGetNumSubscribedWorkshopItems)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_NumberOfItems);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAdvancedSteamWorkshopLibrary::GetNumSubscribedWorkshopItems(Z_Param_Out_NumberOfItems);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAdvancedSteamWorkshopLibrary::execGetSubscribedWorkshopItems)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_NumberOfItems);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FBPSteamWorkshopID>*)Z_Param__Result=UAdvancedSteamWorkshopLibrary::GetSubscribedWorkshopItems(Z_Param_Out_NumberOfItems);
		P_NATIVE_END;
	}
	void UAdvancedSteamWorkshopLibrary::StaticRegisterNativesUAdvancedSteamWorkshopLibrary()
	{
		UClass* Class = UAdvancedSteamWorkshopLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetNumSubscribedWorkshopItems", &UAdvancedSteamWorkshopLibrary::execGetNumSubscribedWorkshopItems },
			{ "GetSubscribedWorkshopItems", &UAdvancedSteamWorkshopLibrary::execGetSubscribedWorkshopItems },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAdvancedSteamWorkshopLibrary_GetNumSubscribedWorkshopItems_Statics
	{
		struct AdvancedSteamWorkshopLibrary_eventGetNumSubscribedWorkshopItems_Parms
		{
			int32 NumberOfItems;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumberOfItems;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAdvancedSteamWorkshopLibrary_GetNumSubscribedWorkshopItems_Statics::NewProp_NumberOfItems = { "NumberOfItems", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvancedSteamWorkshopLibrary_eventGetNumSubscribedWorkshopItems_Parms, NumberOfItems), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvancedSteamWorkshopLibrary_GetNumSubscribedWorkshopItems_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSteamWorkshopLibrary_GetNumSubscribedWorkshopItems_Statics::NewProp_NumberOfItems,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedSteamWorkshopLibrary_GetNumSubscribedWorkshopItems_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AdvancedSteamWorkshopLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvancedSteamWorkshopLibrary_GetNumSubscribedWorkshopItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedSteamWorkshopLibrary, nullptr, "GetNumSubscribedWorkshopItems", nullptr, nullptr, sizeof(AdvancedSteamWorkshopLibrary_eventGetNumSubscribedWorkshopItems_Parms), Z_Construct_UFunction_UAdvancedSteamWorkshopLibrary_GetNumSubscribedWorkshopItems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSteamWorkshopLibrary_GetNumSubscribedWorkshopItems_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdvancedSteamWorkshopLibrary_GetNumSubscribedWorkshopItems_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSteamWorkshopLibrary_GetNumSubscribedWorkshopItems_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAdvancedSteamWorkshopLibrary_GetNumSubscribedWorkshopItems()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAdvancedSteamWorkshopLibrary_GetNumSubscribedWorkshopItems_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAdvancedSteamWorkshopLibrary_GetSubscribedWorkshopItems_Statics
	{
		struct AdvancedSteamWorkshopLibrary_eventGetSubscribedWorkshopItems_Parms
		{
			int32 NumberOfItems;
			TArray<FBPSteamWorkshopID> ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumberOfItems;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAdvancedSteamWorkshopLibrary_GetSubscribedWorkshopItems_Statics::NewProp_NumberOfItems = { "NumberOfItems", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvancedSteamWorkshopLibrary_eventGetSubscribedWorkshopItems_Parms, NumberOfItems), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAdvancedSteamWorkshopLibrary_GetSubscribedWorkshopItems_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FBPSteamWorkshopID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAdvancedSteamWorkshopLibrary_GetSubscribedWorkshopItems_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdvancedSteamWorkshopLibrary_eventGetSubscribedWorkshopItems_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdvancedSteamWorkshopLibrary_GetSubscribedWorkshopItems_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSteamWorkshopLibrary_GetSubscribedWorkshopItems_Statics::NewProp_NumberOfItems,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSteamWorkshopLibrary_GetSubscribedWorkshopItems_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdvancedSteamWorkshopLibrary_GetSubscribedWorkshopItems_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdvancedSteamWorkshopLibrary_GetSubscribedWorkshopItems_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AdvancedSteamWorkshopLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdvancedSteamWorkshopLibrary_GetSubscribedWorkshopItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedSteamWorkshopLibrary, nullptr, "GetSubscribedWorkshopItems", nullptr, nullptr, sizeof(AdvancedSteamWorkshopLibrary_eventGetSubscribedWorkshopItems_Parms), Z_Construct_UFunction_UAdvancedSteamWorkshopLibrary_GetSubscribedWorkshopItems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSteamWorkshopLibrary_GetSubscribedWorkshopItems_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdvancedSteamWorkshopLibrary_GetSubscribedWorkshopItems_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdvancedSteamWorkshopLibrary_GetSubscribedWorkshopItems_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAdvancedSteamWorkshopLibrary_GetSubscribedWorkshopItems()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAdvancedSteamWorkshopLibrary_GetSubscribedWorkshopItems_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAdvancedSteamWorkshopLibrary_NoRegister()
	{
		return UAdvancedSteamWorkshopLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UAdvancedSteamWorkshopLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAdvancedSteamWorkshopLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_AdvancedSteamSessions,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAdvancedSteamWorkshopLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAdvancedSteamWorkshopLibrary_GetNumSubscribedWorkshopItems, "GetNumSubscribedWorkshopItems" }, // 3784019784
		{ &Z_Construct_UFunction_UAdvancedSteamWorkshopLibrary_GetSubscribedWorkshopItems, "GetSubscribedWorkshopItems" }, // 692130017
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvancedSteamWorkshopLibrary_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AdvancedSteamWorkshopLibrary.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AdvancedSteamWorkshopLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAdvancedSteamWorkshopLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAdvancedSteamWorkshopLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAdvancedSteamWorkshopLibrary_Statics::ClassParams = {
		&UAdvancedSteamWorkshopLibrary::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAdvancedSteamWorkshopLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAdvancedSteamWorkshopLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAdvancedSteamWorkshopLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAdvancedSteamWorkshopLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAdvancedSteamWorkshopLibrary, 1882685904);
	template<> ADVANCEDSTEAMSESSIONS_API UClass* StaticClass<UAdvancedSteamWorkshopLibrary>()
	{
		return UAdvancedSteamWorkshopLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAdvancedSteamWorkshopLibrary(Z_Construct_UClass_UAdvancedSteamWorkshopLibrary, &UAdvancedSteamWorkshopLibrary::StaticClass, TEXT("/Script/AdvancedSteamSessions"), TEXT("UAdvancedSteamWorkshopLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAdvancedSteamWorkshopLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
