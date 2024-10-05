// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DiscordOverlay/Public/DiscordOverlayManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDiscordOverlayManager() {}
// Cross Module References
	DISCORDOVERLAY_API UClass* Z_Construct_UClass_UDiscordOverlayManager_NoRegister();
	DISCORDOVERLAY_API UClass* Z_Construct_UClass_UDiscordOverlayManager();
	DISCORDCORE_API UClass* Z_Construct_UClass_UDiscordManager();
	UPackage* Z_Construct_UPackage__Script_DiscordOverlay();
	DISCORDCORE_API UClass* Z_Construct_UClass_UDiscordCore_NoRegister();
	DISCORDOVERLAY_API UFunction* Z_Construct_UDelegateFunction_DiscordOverlay_DiscordOverlayToggleEvent__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UDiscordOverlayManager::execGetOverlayManager)
	{
		P_GET_OBJECT(UDiscordCore,Z_Param_DiscordCore);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDiscordOverlayManager**)Z_Param__Result=UDiscordOverlayManager::GetOverlayManager(Z_Param_DiscordCore);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDiscordOverlayManager::execIsEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsEnabled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDiscordOverlayManager::execIsLocked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsLocked();
		P_NATIVE_END;
	}
	void UDiscordOverlayManager::StaticRegisterNativesUDiscordOverlayManager()
	{
		UClass* Class = UDiscordOverlayManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetOverlayManager", &UDiscordOverlayManager::execGetOverlayManager },
			{ "IsEnabled", &UDiscordOverlayManager::execIsEnabled },
			{ "IsLocked", &UDiscordOverlayManager::execIsLocked },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDiscordOverlayManager_GetOverlayManager_Statics
	{
		struct DiscordOverlayManager_eventGetOverlayManager_Parms
		{
			UDiscordCore* DiscordCore;
			UDiscordOverlayManager* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DiscordCore;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDiscordOverlayManager_GetOverlayManager_Statics::NewProp_DiscordCore = { "DiscordCore", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordOverlayManager_eventGetOverlayManager_Parms, DiscordCore), Z_Construct_UClass_UDiscordCore_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDiscordOverlayManager_GetOverlayManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordOverlayManager_eventGetOverlayManager_Parms, ReturnValue), Z_Construct_UClass_UDiscordOverlayManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDiscordOverlayManager_GetOverlayManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordOverlayManager_GetOverlayManager_Statics::NewProp_DiscordCore,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordOverlayManager_GetOverlayManager_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordOverlayManager_GetOverlayManager_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DiscordOverlayManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDiscordOverlayManager_GetOverlayManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDiscordOverlayManager, nullptr, "GetOverlayManager", nullptr, nullptr, sizeof(DiscordOverlayManager_eventGetOverlayManager_Parms), Z_Construct_UFunction_UDiscordOverlayManager_GetOverlayManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordOverlayManager_GetOverlayManager_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDiscordOverlayManager_GetOverlayManager_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordOverlayManager_GetOverlayManager_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDiscordOverlayManager_GetOverlayManager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDiscordOverlayManager_GetOverlayManager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDiscordOverlayManager_IsEnabled_Statics
	{
		struct DiscordOverlayManager_eventIsEnabled_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDiscordOverlayManager_IsEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DiscordOverlayManager_eventIsEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDiscordOverlayManager_IsEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DiscordOverlayManager_eventIsEnabled_Parms), &Z_Construct_UFunction_UDiscordOverlayManager_IsEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDiscordOverlayManager_IsEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordOverlayManager_IsEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordOverlayManager_IsEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DiscordOverlayManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDiscordOverlayManager_IsEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDiscordOverlayManager, nullptr, "IsEnabled", nullptr, nullptr, sizeof(DiscordOverlayManager_eventIsEnabled_Parms), Z_Construct_UFunction_UDiscordOverlayManager_IsEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordOverlayManager_IsEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDiscordOverlayManager_IsEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordOverlayManager_IsEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDiscordOverlayManager_IsEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDiscordOverlayManager_IsEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDiscordOverlayManager_IsLocked_Statics
	{
		struct DiscordOverlayManager_eventIsLocked_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDiscordOverlayManager_IsLocked_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DiscordOverlayManager_eventIsLocked_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDiscordOverlayManager_IsLocked_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DiscordOverlayManager_eventIsLocked_Parms), &Z_Construct_UFunction_UDiscordOverlayManager_IsLocked_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDiscordOverlayManager_IsLocked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordOverlayManager_IsLocked_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordOverlayManager_IsLocked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DiscordOverlayManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDiscordOverlayManager_IsLocked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDiscordOverlayManager, nullptr, "IsLocked", nullptr, nullptr, sizeof(DiscordOverlayManager_eventIsLocked_Parms), Z_Construct_UFunction_UDiscordOverlayManager_IsLocked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordOverlayManager_IsLocked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDiscordOverlayManager_IsLocked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordOverlayManager_IsLocked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDiscordOverlayManager_IsLocked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDiscordOverlayManager_IsLocked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDiscordOverlayManager_NoRegister()
	{
		return UDiscordOverlayManager::StaticClass();
	}
	struct Z_Construct_UClass_UDiscordOverlayManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnOverlayToggle_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnOverlayToggle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDiscordOverlayManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDiscordManager,
		(UObject* (*)())Z_Construct_UPackage__Script_DiscordOverlay,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDiscordOverlayManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDiscordOverlayManager_GetOverlayManager, "GetOverlayManager" }, // 702537114
		{ &Z_Construct_UFunction_UDiscordOverlayManager_IsEnabled, "IsEnabled" }, // 3865537796
		{ &Z_Construct_UFunction_UDiscordOverlayManager_IsLocked, "IsLocked" }, // 3909624329
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDiscordOverlayManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "DiscordOverlayManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DiscordOverlayManager.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDiscordOverlayManager_Statics::NewProp_OnOverlayToggle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DiscordOverlayManager" },
		{ "ModuleRelativePath", "Public/DiscordOverlayManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UDiscordOverlayManager_Statics::NewProp_OnOverlayToggle = { "OnOverlayToggle", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDiscordOverlayManager, OnOverlayToggle), Z_Construct_UDelegateFunction_DiscordOverlay_DiscordOverlayToggleEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UDiscordOverlayManager_Statics::NewProp_OnOverlayToggle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDiscordOverlayManager_Statics::NewProp_OnOverlayToggle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDiscordOverlayManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDiscordOverlayManager_Statics::NewProp_OnOverlayToggle,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDiscordOverlayManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDiscordOverlayManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDiscordOverlayManager_Statics::ClassParams = {
		&UDiscordOverlayManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDiscordOverlayManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDiscordOverlayManager_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDiscordOverlayManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDiscordOverlayManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDiscordOverlayManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDiscordOverlayManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDiscordOverlayManager, 966222171);
	template<> DISCORDOVERLAY_API UClass* StaticClass<UDiscordOverlayManager>()
	{
		return UDiscordOverlayManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDiscordOverlayManager(Z_Construct_UClass_UDiscordOverlayManager, &UDiscordOverlayManager::StaticClass, TEXT("/Script/DiscordOverlay"), TEXT("UDiscordOverlayManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDiscordOverlayManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
