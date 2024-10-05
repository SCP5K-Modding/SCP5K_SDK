// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/Video.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVideo() {}
// Cross Module References
	STEAMCORE_API UClass* Z_Construct_UClass_UVideo_NoRegister();
	STEAMCORE_API UClass* Z_Construct_UClass_UVideo();
	STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreSubsystem();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnGetOPFSettingsResult__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnGetVideoURLResult__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UVideo::execGetOPFSettings)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_VideoAppID);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVideo::GetOPFSettings(Z_Param_VideoAppID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVideo::execGetOPFStringForApp)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_VideoAppID);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutBuffer);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UVideo::GetOPFStringForApp(Z_Param_VideoAppID,Z_Param_Out_OutBuffer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVideo::execGetVideoURL)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_VideoAppID);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVideo::GetVideoURL(Z_Param_VideoAppID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVideo::execIsBroadcasting)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_NumViewers);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UVideo::IsBroadcasting(Z_Param_Out_NumViewers);
		P_NATIVE_END;
	}
	void UVideo::StaticRegisterNativesUVideo()
	{
		UClass* Class = UVideo::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetOPFSettings", &UVideo::execGetOPFSettings },
			{ "GetOPFStringForApp", &UVideo::execGetOPFStringForApp },
			{ "GetVideoURL", &UVideo::execGetVideoURL },
			{ "IsBroadcasting", &UVideo::execIsBroadcasting },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVideo_GetOPFSettings_Statics
	{
		struct Video_eventGetOPFSettings_Parms
		{
			int32 VideoAppID;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_VideoAppID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVideo_GetOPFSettings_Statics::NewProp_VideoAppID = { "VideoAppID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Video_eventGetOPFSettings_Parms, VideoAppID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVideo_GetOPFSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVideo_GetOPFSettings_Statics::NewProp_VideoAppID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVideo_GetOPFSettings_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Video.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVideo_GetOPFSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVideo, nullptr, "GetOPFSettings", nullptr, nullptr, sizeof(Video_eventGetOPFSettings_Parms), Z_Construct_UFunction_UVideo_GetOPFSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVideo_GetOPFSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVideo_GetOPFSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVideo_GetOPFSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVideo_GetOPFSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVideo_GetOPFSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVideo_GetOPFStringForApp_Statics
	{
		struct Video_eventGetOPFStringForApp_Parms
		{
			int32 VideoAppID;
			FString OutBuffer;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_VideoAppID;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OutBuffer;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVideo_GetOPFStringForApp_Statics::NewProp_VideoAppID = { "VideoAppID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Video_eventGetOPFStringForApp_Parms, VideoAppID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVideo_GetOPFStringForApp_Statics::NewProp_OutBuffer = { "OutBuffer", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Video_eventGetOPFStringForApp_Parms, OutBuffer), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVideo_GetOPFStringForApp_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Video_eventGetOPFStringForApp_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVideo_GetOPFStringForApp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Video_eventGetOPFStringForApp_Parms), &Z_Construct_UFunction_UVideo_GetOPFStringForApp_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVideo_GetOPFStringForApp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVideo_GetOPFStringForApp_Statics::NewProp_VideoAppID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVideo_GetOPFStringForApp_Statics::NewProp_OutBuffer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVideo_GetOPFStringForApp_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVideo_GetOPFStringForApp_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Video.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVideo_GetOPFStringForApp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVideo, nullptr, "GetOPFStringForApp", nullptr, nullptr, sizeof(Video_eventGetOPFStringForApp_Parms), Z_Construct_UFunction_UVideo_GetOPFStringForApp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVideo_GetOPFStringForApp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVideo_GetOPFStringForApp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVideo_GetOPFStringForApp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVideo_GetOPFStringForApp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVideo_GetOPFStringForApp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVideo_GetVideoURL_Statics
	{
		struct Video_eventGetVideoURL_Parms
		{
			int32 VideoAppID;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_VideoAppID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVideo_GetVideoURL_Statics::NewProp_VideoAppID = { "VideoAppID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Video_eventGetVideoURL_Parms, VideoAppID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVideo_GetVideoURL_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVideo_GetVideoURL_Statics::NewProp_VideoAppID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVideo_GetVideoURL_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Video.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVideo_GetVideoURL_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVideo, nullptr, "GetVideoURL", nullptr, nullptr, sizeof(Video_eventGetVideoURL_Parms), Z_Construct_UFunction_UVideo_GetVideoURL_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVideo_GetVideoURL_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVideo_GetVideoURL_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVideo_GetVideoURL_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVideo_GetVideoURL()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVideo_GetVideoURL_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVideo_IsBroadcasting_Statics
	{
		struct Video_eventIsBroadcasting_Parms
		{
			int32 NumViewers;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumViewers;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVideo_IsBroadcasting_Statics::NewProp_NumViewers = { "NumViewers", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Video_eventIsBroadcasting_Parms, NumViewers), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVideo_IsBroadcasting_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Video_eventIsBroadcasting_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVideo_IsBroadcasting_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Video_eventIsBroadcasting_Parms), &Z_Construct_UFunction_UVideo_IsBroadcasting_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVideo_IsBroadcasting_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVideo_IsBroadcasting_Statics::NewProp_NumViewers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVideo_IsBroadcasting_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVideo_IsBroadcasting_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Video.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVideo_IsBroadcasting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVideo, nullptr, "IsBroadcasting", nullptr, nullptr, sizeof(Video_eventIsBroadcasting_Parms), Z_Construct_UFunction_UVideo_IsBroadcasting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVideo_IsBroadcasting_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVideo_IsBroadcasting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVideo_IsBroadcasting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVideo_IsBroadcasting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVideo_IsBroadcasting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UVideo_NoRegister()
	{
		return UVideo::StaticClass();
	}
	struct Z_Construct_UClass_UVideo_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GetOPFSettingsResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_GetOPFSettingsResult;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GetVideoURLResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_GetVideoURLResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVideo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVideo_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVideo_GetOPFSettings, "GetOPFSettings" }, // 361828383
		{ &Z_Construct_UFunction_UVideo_GetOPFStringForApp, "GetOPFStringForApp" }, // 3397668371
		{ &Z_Construct_UFunction_UVideo_GetVideoURL, "GetVideoURL" }, // 72648035
		{ &Z_Construct_UFunction_UVideo_IsBroadcasting, "IsBroadcasting" }, // 535036333
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVideo_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Video.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Video.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVideo_Statics::NewProp_GetOPFSettingsResult_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Video" },
		{ "ModuleRelativePath", "Public/Video.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UVideo_Statics::NewProp_GetOPFSettingsResult = { "GetOPFSettingsResult", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVideo, GetOPFSettingsResult), Z_Construct_UDelegateFunction_SteamCore_OnGetOPFSettingsResult__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UVideo_Statics::NewProp_GetOPFSettingsResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVideo_Statics::NewProp_GetOPFSettingsResult_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVideo_Statics::NewProp_GetVideoURLResult_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Video" },
		{ "ModuleRelativePath", "Public/Video.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UVideo_Statics::NewProp_GetVideoURLResult = { "GetVideoURLResult", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVideo, GetVideoURLResult), Z_Construct_UDelegateFunction_SteamCore_OnGetVideoURLResult__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UVideo_Statics::NewProp_GetVideoURLResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVideo_Statics::NewProp_GetVideoURLResult_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVideo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVideo_Statics::NewProp_GetOPFSettingsResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVideo_Statics::NewProp_GetVideoURLResult,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVideo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVideo>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVideo_Statics::ClassParams = {
		&UVideo::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UVideo_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UVideo_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVideo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVideo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVideo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVideo_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVideo, 3958389024);
	template<> STEAMCORE_API UClass* StaticClass<UVideo>()
	{
		return UVideo::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVideo(Z_Construct_UClass_UVideo, &UVideo::StaticClass, TEXT("/Script/SteamCore"), TEXT("UVideo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVideo);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
