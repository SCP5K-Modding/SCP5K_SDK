// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DiscordImage/Public/ImageFetchProxy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeImageFetchProxy() {}
// Cross Module References
	DISCORDIMAGE_API UClass* Z_Construct_UClass_UImageFetchProxy_NoRegister();
	DISCORDIMAGE_API UClass* Z_Construct_UClass_UImageFetchProxy();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	UPackage* Z_Construct_UPackage__Script_DiscordImage();
	DISCORDIMAGE_API UClass* Z_Construct_UClass_UDiscordImageManager_NoRegister();
	DISCORDIMAGE_API UScriptStruct* Z_Construct_UScriptStruct_FDiscordImageHandle();
	DISCORDCORE_API UEnum* Z_Construct_UEnum_DiscordCore_EDiscordResult();
	DISCORDIMAGE_API UFunction* Z_Construct_UDelegateFunction_DiscordImage_OnFetchResponse__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UImageFetchProxy::execFetch)
	{
		P_GET_OBJECT(UDiscordImageManager,Z_Param_ImageManager);
		P_GET_STRUCT(FDiscordImageHandle,Z_Param_Handle);
		P_GET_UBOOL(Z_Param_bRefresh);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UImageFetchProxy**)Z_Param__Result=UImageFetchProxy::Fetch(Z_Param_ImageManager,Z_Param_Handle,Z_Param_bRefresh);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UImageFetchProxy::execOnResultInternal)
	{
		P_GET_ENUM(EDiscordResult,Z_Param_Result);
		P_GET_STRUCT_REF(FDiscordImageHandle,Z_Param_Out_ImageHandle);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnResultInternal(EDiscordResult(Z_Param_Result),Z_Param_Out_ImageHandle);
		P_NATIVE_END;
	}
	void UImageFetchProxy::StaticRegisterNativesUImageFetchProxy()
	{
		UClass* Class = UImageFetchProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Fetch", &UImageFetchProxy::execFetch },
			{ "OnResultInternal", &UImageFetchProxy::execOnResultInternal },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UImageFetchProxy_Fetch_Statics
	{
		struct ImageFetchProxy_eventFetch_Parms
		{
			UDiscordImageManager* ImageManager;
			FDiscordImageHandle Handle;
			bool bRefresh;
			UImageFetchProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ImageManager;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Handle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRefresh_MetaData[];
#endif
		static void NewProp_bRefresh_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRefresh;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UImageFetchProxy_Fetch_Statics::NewProp_ImageManager = { "ImageManager", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ImageFetchProxy_eventFetch_Parms, ImageManager), Z_Construct_UClass_UDiscordImageManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UImageFetchProxy_Fetch_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ImageFetchProxy_eventFetch_Parms, Handle), Z_Construct_UScriptStruct_FDiscordImageHandle, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UImageFetchProxy_Fetch_Statics::NewProp_bRefresh_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UImageFetchProxy_Fetch_Statics::NewProp_bRefresh_SetBit(void* Obj)
	{
		((ImageFetchProxy_eventFetch_Parms*)Obj)->bRefresh = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UImageFetchProxy_Fetch_Statics::NewProp_bRefresh = { "bRefresh", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ImageFetchProxy_eventFetch_Parms), &Z_Construct_UFunction_UImageFetchProxy_Fetch_Statics::NewProp_bRefresh_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UImageFetchProxy_Fetch_Statics::NewProp_bRefresh_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UImageFetchProxy_Fetch_Statics::NewProp_bRefresh_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UImageFetchProxy_Fetch_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ImageFetchProxy_eventFetch_Parms, ReturnValue), Z_Construct_UClass_UImageFetchProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UImageFetchProxy_Fetch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImageFetchProxy_Fetch_Statics::NewProp_ImageManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImageFetchProxy_Fetch_Statics::NewProp_Handle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImageFetchProxy_Fetch_Statics::NewProp_bRefresh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImageFetchProxy_Fetch_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UImageFetchProxy_Fetch_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ImageFetchProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UImageFetchProxy_Fetch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UImageFetchProxy, nullptr, "Fetch", nullptr, nullptr, sizeof(ImageFetchProxy_eventFetch_Parms), Z_Construct_UFunction_UImageFetchProxy_Fetch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UImageFetchProxy_Fetch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UImageFetchProxy_Fetch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UImageFetchProxy_Fetch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UImageFetchProxy_Fetch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UImageFetchProxy_Fetch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UImageFetchProxy_OnResultInternal_Statics
	{
		struct ImageFetchProxy_eventOnResultInternal_Parms
		{
			EDiscordResult Result;
			FDiscordImageHandle ImageHandle;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Result;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImageHandle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ImageHandle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UImageFetchProxy_OnResultInternal_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UImageFetchProxy_OnResultInternal_Statics::NewProp_Result_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UImageFetchProxy_OnResultInternal_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ImageFetchProxy_eventOnResultInternal_Parms, Result), Z_Construct_UEnum_DiscordCore_EDiscordResult, METADATA_PARAMS(Z_Construct_UFunction_UImageFetchProxy_OnResultInternal_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UImageFetchProxy_OnResultInternal_Statics::NewProp_Result_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UImageFetchProxy_OnResultInternal_Statics::NewProp_ImageHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UImageFetchProxy_OnResultInternal_Statics::NewProp_ImageHandle = { "ImageHandle", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ImageFetchProxy_eventOnResultInternal_Parms, ImageHandle), Z_Construct_UScriptStruct_FDiscordImageHandle, METADATA_PARAMS(Z_Construct_UFunction_UImageFetchProxy_OnResultInternal_Statics::NewProp_ImageHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UImageFetchProxy_OnResultInternal_Statics::NewProp_ImageHandle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UImageFetchProxy_OnResultInternal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImageFetchProxy_OnResultInternal_Statics::NewProp_Result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImageFetchProxy_OnResultInternal_Statics::NewProp_Result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImageFetchProxy_OnResultInternal_Statics::NewProp_ImageHandle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UImageFetchProxy_OnResultInternal_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ImageFetchProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UImageFetchProxy_OnResultInternal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UImageFetchProxy, nullptr, "OnResultInternal", nullptr, nullptr, sizeof(ImageFetchProxy_eventOnResultInternal_Parms), Z_Construct_UFunction_UImageFetchProxy_OnResultInternal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UImageFetchProxy_OnResultInternal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UImageFetchProxy_OnResultInternal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UImageFetchProxy_OnResultInternal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UImageFetchProxy_OnResultInternal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UImageFetchProxy_OnResultInternal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UImageFetchProxy_NoRegister()
	{
		return UImageFetchProxy::StaticClass();
	}
	struct Z_Construct_UClass_UImageFetchProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnFetched_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFetched;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnError;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Manager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Manager;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UImageFetchProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_DiscordImage,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UImageFetchProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UImageFetchProxy_Fetch, "Fetch" }, // 886246270
		{ &Z_Construct_UFunction_UImageFetchProxy_OnResultInternal, "OnResultInternal" }, // 2903677405
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UImageFetchProxy_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ImageFetchProxy.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ImageFetchProxy.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UImageFetchProxy_Statics::NewProp_OnFetched_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ImageFetchProxy" },
		{ "ModuleRelativePath", "Public/ImageFetchProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UImageFetchProxy_Statics::NewProp_OnFetched = { "OnFetched", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UImageFetchProxy, OnFetched), Z_Construct_UDelegateFunction_DiscordImage_OnFetchResponse__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UImageFetchProxy_Statics::NewProp_OnFetched_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UImageFetchProxy_Statics::NewProp_OnFetched_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UImageFetchProxy_Statics::NewProp_OnError_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ImageFetchProxy" },
		{ "ModuleRelativePath", "Public/ImageFetchProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UImageFetchProxy_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UImageFetchProxy, OnError), Z_Construct_UDelegateFunction_DiscordImage_OnFetchResponse__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UImageFetchProxy_Statics::NewProp_OnError_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UImageFetchProxy_Statics::NewProp_OnError_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UImageFetchProxy_Statics::NewProp_Manager_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ImageFetchProxy" },
		{ "ModuleRelativePath", "Public/ImageFetchProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UImageFetchProxy_Statics::NewProp_Manager = { "Manager", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UImageFetchProxy, Manager), Z_Construct_UClass_UDiscordImageManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UImageFetchProxy_Statics::NewProp_Manager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UImageFetchProxy_Statics::NewProp_Manager_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UImageFetchProxy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UImageFetchProxy_Statics::NewProp_OnFetched,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UImageFetchProxy_Statics::NewProp_OnError,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UImageFetchProxy_Statics::NewProp_Manager,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UImageFetchProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UImageFetchProxy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UImageFetchProxy_Statics::ClassParams = {
		&UImageFetchProxy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UImageFetchProxy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UImageFetchProxy_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UImageFetchProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UImageFetchProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UImageFetchProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UImageFetchProxy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UImageFetchProxy, 4203320982);
	template<> DISCORDIMAGE_API UClass* StaticClass<UImageFetchProxy>()
	{
		return UImageFetchProxy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UImageFetchProxy(Z_Construct_UClass_UImageFetchProxy, &UImageFetchProxy::StaticClass, TEXT("/Script/DiscordImage"), TEXT("UImageFetchProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UImageFetchProxy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
