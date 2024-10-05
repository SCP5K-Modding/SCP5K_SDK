// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DiscordOverlay/Public/OpenActivityInviteProxy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOpenActivityInviteProxy() {}
// Cross Module References
	DISCORDOVERLAY_API UClass* Z_Construct_UClass_UOpenActivityInviteProxy_NoRegister();
	DISCORDOVERLAY_API UClass* Z_Construct_UClass_UOpenActivityInviteProxy();
	DISCORDOVERLAY_API UClass* Z_Construct_UClass_UBaseOverlayAsyncProxy();
	UPackage* Z_Construct_UPackage__Script_DiscordOverlay();
	DISCORDOVERLAY_API UClass* Z_Construct_UClass_UDiscordOverlayManager_NoRegister();
	DISCORDCORE_API UEnum* Z_Construct_UEnum_DiscordCore_EDiscordActivityActionType();
// End Cross Module References
	DEFINE_FUNCTION(UOpenActivityInviteProxy::execOpenActivityInvite)
	{
		P_GET_OBJECT(UDiscordOverlayManager,Z_Param_OverlayManager);
		P_GET_ENUM(EDiscordActivityActionType,Z_Param_Type);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UOpenActivityInviteProxy**)Z_Param__Result=UOpenActivityInviteProxy::OpenActivityInvite(Z_Param_OverlayManager,EDiscordActivityActionType(Z_Param_Type));
		P_NATIVE_END;
	}
	void UOpenActivityInviteProxy::StaticRegisterNativesUOpenActivityInviteProxy()
	{
		UClass* Class = UOpenActivityInviteProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OpenActivityInvite", &UOpenActivityInviteProxy::execOpenActivityInvite },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOpenActivityInviteProxy_OpenActivityInvite_Statics
	{
		struct OpenActivityInviteProxy_eventOpenActivityInvite_Parms
		{
			UDiscordOverlayManager* OverlayManager;
			EDiscordActivityActionType Type;
			UOpenActivityInviteProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlayManager;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOpenActivityInviteProxy_OpenActivityInvite_Statics::NewProp_OverlayManager = { "OverlayManager", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OpenActivityInviteProxy_eventOpenActivityInvite_Parms, OverlayManager), Z_Construct_UClass_UDiscordOverlayManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOpenActivityInviteProxy_OpenActivityInvite_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOpenActivityInviteProxy_OpenActivityInvite_Statics::NewProp_Type_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOpenActivityInviteProxy_OpenActivityInvite_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OpenActivityInviteProxy_eventOpenActivityInvite_Parms, Type), Z_Construct_UEnum_DiscordCore_EDiscordActivityActionType, METADATA_PARAMS(Z_Construct_UFunction_UOpenActivityInviteProxy_OpenActivityInvite_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenActivityInviteProxy_OpenActivityInvite_Statics::NewProp_Type_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOpenActivityInviteProxy_OpenActivityInvite_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OpenActivityInviteProxy_eventOpenActivityInvite_Parms, ReturnValue), Z_Construct_UClass_UOpenActivityInviteProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOpenActivityInviteProxy_OpenActivityInvite_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenActivityInviteProxy_OpenActivityInvite_Statics::NewProp_OverlayManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenActivityInviteProxy_OpenActivityInvite_Statics::NewProp_Type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenActivityInviteProxy_OpenActivityInvite_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenActivityInviteProxy_OpenActivityInvite_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOpenActivityInviteProxy_OpenActivityInvite_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OpenActivityInviteProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOpenActivityInviteProxy_OpenActivityInvite_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOpenActivityInviteProxy, nullptr, "OpenActivityInvite", nullptr, nullptr, sizeof(OpenActivityInviteProxy_eventOpenActivityInvite_Parms), Z_Construct_UFunction_UOpenActivityInviteProxy_OpenActivityInvite_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenActivityInviteProxy_OpenActivityInvite_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOpenActivityInviteProxy_OpenActivityInvite_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenActivityInviteProxy_OpenActivityInvite_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOpenActivityInviteProxy_OpenActivityInvite()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOpenActivityInviteProxy_OpenActivityInvite_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UOpenActivityInviteProxy_NoRegister()
	{
		return UOpenActivityInviteProxy::StaticClass();
	}
	struct Z_Construct_UClass_UOpenActivityInviteProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOpenActivityInviteProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseOverlayAsyncProxy,
		(UObject* (*)())Z_Construct_UPackage__Script_DiscordOverlay,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOpenActivityInviteProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOpenActivityInviteProxy_OpenActivityInvite, "OpenActivityInvite" }, // 4570864
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOpenActivityInviteProxy_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "OpenActivityInviteProxy.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/OpenActivityInviteProxy.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOpenActivityInviteProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOpenActivityInviteProxy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOpenActivityInviteProxy_Statics::ClassParams = {
		&UOpenActivityInviteProxy::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UOpenActivityInviteProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOpenActivityInviteProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOpenActivityInviteProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOpenActivityInviteProxy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOpenActivityInviteProxy, 2217472332);
	template<> DISCORDOVERLAY_API UClass* StaticClass<UOpenActivityInviteProxy>()
	{
		return UOpenActivityInviteProxy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOpenActivityInviteProxy(Z_Construct_UClass_UOpenActivityInviteProxy, &UOpenActivityInviteProxy::StaticClass, TEXT("/Script/DiscordOverlay"), TEXT("UOpenActivityInviteProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOpenActivityInviteProxy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
