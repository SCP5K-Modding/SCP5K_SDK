// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DiscordOverlay/Public/OpenGuildInviteProxy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOpenGuildInviteProxy() {}
// Cross Module References
	DISCORDOVERLAY_API UClass* Z_Construct_UClass_UOpenGuildInviteProxy_NoRegister();
	DISCORDOVERLAY_API UClass* Z_Construct_UClass_UOpenGuildInviteProxy();
	DISCORDOVERLAY_API UClass* Z_Construct_UClass_UBaseOverlayAsyncProxy();
	UPackage* Z_Construct_UPackage__Script_DiscordOverlay();
	DISCORDOVERLAY_API UClass* Z_Construct_UClass_UDiscordOverlayManager_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UOpenGuildInviteProxy::execOpenGuildInvite)
	{
		P_GET_OBJECT(UDiscordOverlayManager,Z_Param_OverlayManager);
		P_GET_PROPERTY(FStrProperty,Z_Param_Code);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UOpenGuildInviteProxy**)Z_Param__Result=UOpenGuildInviteProxy::OpenGuildInvite(Z_Param_OverlayManager,Z_Param_Code);
		P_NATIVE_END;
	}
	void UOpenGuildInviteProxy::StaticRegisterNativesUOpenGuildInviteProxy()
	{
		UClass* Class = UOpenGuildInviteProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OpenGuildInvite", &UOpenGuildInviteProxy::execOpenGuildInvite },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOpenGuildInviteProxy_OpenGuildInvite_Statics
	{
		struct OpenGuildInviteProxy_eventOpenGuildInvite_Parms
		{
			UDiscordOverlayManager* OverlayManager;
			FString Code;
			UOpenGuildInviteProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlayManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Code_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Code;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOpenGuildInviteProxy_OpenGuildInvite_Statics::NewProp_OverlayManager = { "OverlayManager", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OpenGuildInviteProxy_eventOpenGuildInvite_Parms, OverlayManager), Z_Construct_UClass_UDiscordOverlayManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOpenGuildInviteProxy_OpenGuildInvite_Statics::NewProp_Code_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOpenGuildInviteProxy_OpenGuildInvite_Statics::NewProp_Code = { "Code", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OpenGuildInviteProxy_eventOpenGuildInvite_Parms, Code), METADATA_PARAMS(Z_Construct_UFunction_UOpenGuildInviteProxy_OpenGuildInvite_Statics::NewProp_Code_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenGuildInviteProxy_OpenGuildInvite_Statics::NewProp_Code_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOpenGuildInviteProxy_OpenGuildInvite_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OpenGuildInviteProxy_eventOpenGuildInvite_Parms, ReturnValue), Z_Construct_UClass_UOpenGuildInviteProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOpenGuildInviteProxy_OpenGuildInvite_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenGuildInviteProxy_OpenGuildInvite_Statics::NewProp_OverlayManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenGuildInviteProxy_OpenGuildInvite_Statics::NewProp_Code,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenGuildInviteProxy_OpenGuildInvite_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOpenGuildInviteProxy_OpenGuildInvite_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OpenGuildInviteProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOpenGuildInviteProxy_OpenGuildInvite_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOpenGuildInviteProxy, nullptr, "OpenGuildInvite", nullptr, nullptr, sizeof(OpenGuildInviteProxy_eventOpenGuildInvite_Parms), Z_Construct_UFunction_UOpenGuildInviteProxy_OpenGuildInvite_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenGuildInviteProxy_OpenGuildInvite_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOpenGuildInviteProxy_OpenGuildInvite_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenGuildInviteProxy_OpenGuildInvite_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOpenGuildInviteProxy_OpenGuildInvite()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOpenGuildInviteProxy_OpenGuildInvite_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UOpenGuildInviteProxy_NoRegister()
	{
		return UOpenGuildInviteProxy::StaticClass();
	}
	struct Z_Construct_UClass_UOpenGuildInviteProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOpenGuildInviteProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseOverlayAsyncProxy,
		(UObject* (*)())Z_Construct_UPackage__Script_DiscordOverlay,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOpenGuildInviteProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOpenGuildInviteProxy_OpenGuildInvite, "OpenGuildInvite" }, // 1549514243
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOpenGuildInviteProxy_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "OpenGuildInviteProxy.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/OpenGuildInviteProxy.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOpenGuildInviteProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOpenGuildInviteProxy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOpenGuildInviteProxy_Statics::ClassParams = {
		&UOpenGuildInviteProxy::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UOpenGuildInviteProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOpenGuildInviteProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOpenGuildInviteProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOpenGuildInviteProxy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOpenGuildInviteProxy, 1729098185);
	template<> DISCORDOVERLAY_API UClass* StaticClass<UOpenGuildInviteProxy>()
	{
		return UOpenGuildInviteProxy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOpenGuildInviteProxy(Z_Construct_UClass_UOpenGuildInviteProxy, &UOpenGuildInviteProxy::StaticClass, TEXT("/Script/DiscordOverlay"), TEXT("UOpenGuildInviteProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOpenGuildInviteProxy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
