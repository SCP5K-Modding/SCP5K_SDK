// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DiscordOverlay/Public/SetLockedProxy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSetLockedProxy() {}
// Cross Module References
	DISCORDOVERLAY_API UClass* Z_Construct_UClass_USetLockedProxy_NoRegister();
	DISCORDOVERLAY_API UClass* Z_Construct_UClass_USetLockedProxy();
	DISCORDOVERLAY_API UClass* Z_Construct_UClass_UBaseOverlayAsyncProxy();
	UPackage* Z_Construct_UPackage__Script_DiscordOverlay();
	DISCORDOVERLAY_API UClass* Z_Construct_UClass_UDiscordOverlayManager_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USetLockedProxy::execSetLocked)
	{
		P_GET_OBJECT(UDiscordOverlayManager,Z_Param_OverlayManager);
		P_GET_UBOOL(Z_Param_bLocked);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USetLockedProxy**)Z_Param__Result=USetLockedProxy::SetLocked(Z_Param_OverlayManager,Z_Param_bLocked);
		P_NATIVE_END;
	}
	void USetLockedProxy::StaticRegisterNativesUSetLockedProxy()
	{
		UClass* Class = USetLockedProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetLocked", &USetLockedProxy::execSetLocked },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USetLockedProxy_SetLocked_Statics
	{
		struct SetLockedProxy_eventSetLocked_Parms
		{
			UDiscordOverlayManager* OverlayManager;
			bool bLocked;
			USetLockedProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlayManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLocked_MetaData[];
#endif
		static void NewProp_bLocked_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLocked;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USetLockedProxy_SetLocked_Statics::NewProp_OverlayManager = { "OverlayManager", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SetLockedProxy_eventSetLocked_Parms, OverlayManager), Z_Construct_UClass_UDiscordOverlayManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USetLockedProxy_SetLocked_Statics::NewProp_bLocked_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_USetLockedProxy_SetLocked_Statics::NewProp_bLocked_SetBit(void* Obj)
	{
		((SetLockedProxy_eventSetLocked_Parms*)Obj)->bLocked = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USetLockedProxy_SetLocked_Statics::NewProp_bLocked = { "bLocked", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SetLockedProxy_eventSetLocked_Parms), &Z_Construct_UFunction_USetLockedProxy_SetLocked_Statics::NewProp_bLocked_SetBit, METADATA_PARAMS(Z_Construct_UFunction_USetLockedProxy_SetLocked_Statics::NewProp_bLocked_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USetLockedProxy_SetLocked_Statics::NewProp_bLocked_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USetLockedProxy_SetLocked_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SetLockedProxy_eventSetLocked_Parms, ReturnValue), Z_Construct_UClass_USetLockedProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USetLockedProxy_SetLocked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USetLockedProxy_SetLocked_Statics::NewProp_OverlayManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USetLockedProxy_SetLocked_Statics::NewProp_bLocked,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USetLockedProxy_SetLocked_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USetLockedProxy_SetLocked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SetLockedProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USetLockedProxy_SetLocked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USetLockedProxy, nullptr, "SetLocked", nullptr, nullptr, sizeof(SetLockedProxy_eventSetLocked_Parms), Z_Construct_UFunction_USetLockedProxy_SetLocked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USetLockedProxy_SetLocked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USetLockedProxy_SetLocked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USetLockedProxy_SetLocked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USetLockedProxy_SetLocked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USetLockedProxy_SetLocked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USetLockedProxy_NoRegister()
	{
		return USetLockedProxy::StaticClass();
	}
	struct Z_Construct_UClass_USetLockedProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USetLockedProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseOverlayAsyncProxy,
		(UObject* (*)())Z_Construct_UPackage__Script_DiscordOverlay,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USetLockedProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USetLockedProxy_SetLocked, "SetLocked" }, // 368628127
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USetLockedProxy_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SetLockedProxy.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SetLockedProxy.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USetLockedProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USetLockedProxy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USetLockedProxy_Statics::ClassParams = {
		&USetLockedProxy::StaticClass,
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
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USetLockedProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USetLockedProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USetLockedProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USetLockedProxy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USetLockedProxy, 1564385335);
	template<> DISCORDOVERLAY_API UClass* StaticClass<USetLockedProxy>()
	{
		return USetLockedProxy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USetLockedProxy(Z_Construct_UClass_USetLockedProxy, &USetLockedProxy::StaticClass, TEXT("/Script/DiscordOverlay"), TEXT("USetLockedProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USetLockedProxy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
