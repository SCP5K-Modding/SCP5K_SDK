// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/Screenshots.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeScreenshots() {}
// Cross Module References
	STEAMCORE_API UClass* Z_Construct_UClass_UScreenshots_NoRegister();
	STEAMCORE_API UClass* Z_Construct_UClass_UScreenshots();
	STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreSubsystem();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FScreenshotHandle();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamVRScreenshotType();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FPublishedFileID();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamID();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnScreenshotReady__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnScreenshotRequested__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UScreenshots::execAddScreenshotToLibrary)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Filename);
		P_GET_PROPERTY(FStrProperty,Z_Param_ThumbnailFilename);
		P_GET_PROPERTY(FIntProperty,Z_Param_Width);
		P_GET_PROPERTY(FIntProperty,Z_Param_Height);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FScreenshotHandle*)Z_Param__Result=UScreenshots::AddScreenshotToLibrary(Z_Param_Filename,Z_Param_ThumbnailFilename,Z_Param_Width,Z_Param_Height);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UScreenshots::execAddVRScreenshotToLibrary)
	{
		P_GET_ENUM(ESteamVRScreenshotType,Z_Param_EType);
		P_GET_PROPERTY(FStrProperty,Z_Param_Filename);
		P_GET_PROPERTY(FStrProperty,Z_Param_VRFileName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FScreenshotHandle*)Z_Param__Result=UScreenshots::AddVRScreenshotToLibrary(ESteamVRScreenshotType(Z_Param_EType),Z_Param_Filename,Z_Param_VRFileName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UScreenshots::execHookScreenshots)
	{
		P_GET_UBOOL(Z_Param_bHook);
		P_FINISH;
		P_NATIVE_BEGIN;
		UScreenshots::HookScreenshots(Z_Param_bHook);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UScreenshots::execIsScreenshotsHooked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UScreenshots::IsScreenshotsHooked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UScreenshots::execSetLocation)
	{
		P_GET_STRUCT(FScreenshotHandle,Z_Param_Handle);
		P_GET_PROPERTY(FStrProperty,Z_Param_Location);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UScreenshots::SetLocation(Z_Param_Handle,Z_Param_Location);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UScreenshots::execTagPublishedFile)
	{
		P_GET_STRUCT(FScreenshotHandle,Z_Param_Handle);
		P_GET_STRUCT(FPublishedFileID,Z_Param_PublishedFileID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UScreenshots::TagPublishedFile(Z_Param_Handle,Z_Param_PublishedFileID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UScreenshots::execTagUser)
	{
		P_GET_STRUCT(FScreenshotHandle,Z_Param_Handle);
		P_GET_STRUCT(FSteamID,Z_Param_SteamID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UScreenshots::TagUser(Z_Param_Handle,Z_Param_SteamID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UScreenshots::execTriggerScreenshot)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UScreenshots::TriggerScreenshot();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UScreenshots::execWriteScreenshot)
	{
		P_GET_TARRAY(uint8,Z_Param_PubRGB);
		P_GET_PROPERTY(FIntProperty,Z_Param_Width);
		P_GET_PROPERTY(FIntProperty,Z_Param_Height);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FScreenshotHandle*)Z_Param__Result=UScreenshots::WriteScreenshot(Z_Param_PubRGB,Z_Param_Width,Z_Param_Height);
		P_NATIVE_END;
	}
	void UScreenshots::StaticRegisterNativesUScreenshots()
	{
		UClass* Class = UScreenshots::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddScreenshotToLibrary", &UScreenshots::execAddScreenshotToLibrary },
			{ "AddVRScreenshotToLibrary", &UScreenshots::execAddVRScreenshotToLibrary },
			{ "HookScreenshots", &UScreenshots::execHookScreenshots },
			{ "IsScreenshotsHooked", &UScreenshots::execIsScreenshotsHooked },
			{ "SetLocation", &UScreenshots::execSetLocation },
			{ "TagPublishedFile", &UScreenshots::execTagPublishedFile },
			{ "TagUser", &UScreenshots::execTagUser },
			{ "TriggerScreenshot", &UScreenshots::execTriggerScreenshot },
			{ "WriteScreenshot", &UScreenshots::execWriteScreenshot },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UScreenshots_AddScreenshotToLibrary_Statics
	{
		struct Screenshots_eventAddScreenshotToLibrary_Parms
		{
			FString Filename;
			FString ThumbnailFilename;
			int32 Width;
			int32 Height;
			FScreenshotHandle ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Filename_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Filename;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThumbnailFilename_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ThumbnailFilename;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Width;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Height;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScreenshots_AddScreenshotToLibrary_Statics::NewProp_Filename_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UScreenshots_AddScreenshotToLibrary_Statics::NewProp_Filename = { "Filename", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Screenshots_eventAddScreenshotToLibrary_Parms, Filename), METADATA_PARAMS(Z_Construct_UFunction_UScreenshots_AddScreenshotToLibrary_Statics::NewProp_Filename_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UScreenshots_AddScreenshotToLibrary_Statics::NewProp_Filename_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScreenshots_AddScreenshotToLibrary_Statics::NewProp_ThumbnailFilename_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UScreenshots_AddScreenshotToLibrary_Statics::NewProp_ThumbnailFilename = { "ThumbnailFilename", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Screenshots_eventAddScreenshotToLibrary_Parms, ThumbnailFilename), METADATA_PARAMS(Z_Construct_UFunction_UScreenshots_AddScreenshotToLibrary_Statics::NewProp_ThumbnailFilename_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UScreenshots_AddScreenshotToLibrary_Statics::NewProp_ThumbnailFilename_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UScreenshots_AddScreenshotToLibrary_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Screenshots_eventAddScreenshotToLibrary_Parms, Width), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UScreenshots_AddScreenshotToLibrary_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Screenshots_eventAddScreenshotToLibrary_Parms, Height), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UScreenshots_AddScreenshotToLibrary_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Screenshots_eventAddScreenshotToLibrary_Parms, ReturnValue), Z_Construct_UScriptStruct_FScreenshotHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScreenshots_AddScreenshotToLibrary_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScreenshots_AddScreenshotToLibrary_Statics::NewProp_Filename,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScreenshots_AddScreenshotToLibrary_Statics::NewProp_ThumbnailFilename,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScreenshots_AddScreenshotToLibrary_Statics::NewProp_Width,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScreenshots_AddScreenshotToLibrary_Statics::NewProp_Height,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScreenshots_AddScreenshotToLibrary_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScreenshots_AddScreenshotToLibrary_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Screenshots.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UScreenshots_AddScreenshotToLibrary_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScreenshots, nullptr, "AddScreenshotToLibrary", nullptr, nullptr, sizeof(Screenshots_eventAddScreenshotToLibrary_Parms), Z_Construct_UFunction_UScreenshots_AddScreenshotToLibrary_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UScreenshots_AddScreenshotToLibrary_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UScreenshots_AddScreenshotToLibrary_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UScreenshots_AddScreenshotToLibrary_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UScreenshots_AddScreenshotToLibrary()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UScreenshots_AddScreenshotToLibrary_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UScreenshots_AddVRScreenshotToLibrary_Statics
	{
		struct Screenshots_eventAddVRScreenshotToLibrary_Parms
		{
			ESteamVRScreenshotType EType;
			FString Filename;
			FString VRFileName;
			FScreenshotHandle ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_EType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Filename_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Filename;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VRFileName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_VRFileName;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UScreenshots_AddVRScreenshotToLibrary_Statics::NewProp_EType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UScreenshots_AddVRScreenshotToLibrary_Statics::NewProp_EType = { "EType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Screenshots_eventAddVRScreenshotToLibrary_Parms, EType), Z_Construct_UEnum_SteamCore_ESteamVRScreenshotType, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScreenshots_AddVRScreenshotToLibrary_Statics::NewProp_Filename_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UScreenshots_AddVRScreenshotToLibrary_Statics::NewProp_Filename = { "Filename", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Screenshots_eventAddVRScreenshotToLibrary_Parms, Filename), METADATA_PARAMS(Z_Construct_UFunction_UScreenshots_AddVRScreenshotToLibrary_Statics::NewProp_Filename_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UScreenshots_AddVRScreenshotToLibrary_Statics::NewProp_Filename_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScreenshots_AddVRScreenshotToLibrary_Statics::NewProp_VRFileName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UScreenshots_AddVRScreenshotToLibrary_Statics::NewProp_VRFileName = { "VRFileName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Screenshots_eventAddVRScreenshotToLibrary_Parms, VRFileName), METADATA_PARAMS(Z_Construct_UFunction_UScreenshots_AddVRScreenshotToLibrary_Statics::NewProp_VRFileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UScreenshots_AddVRScreenshotToLibrary_Statics::NewProp_VRFileName_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UScreenshots_AddVRScreenshotToLibrary_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Screenshots_eventAddVRScreenshotToLibrary_Parms, ReturnValue), Z_Construct_UScriptStruct_FScreenshotHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScreenshots_AddVRScreenshotToLibrary_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScreenshots_AddVRScreenshotToLibrary_Statics::NewProp_EType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScreenshots_AddVRScreenshotToLibrary_Statics::NewProp_EType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScreenshots_AddVRScreenshotToLibrary_Statics::NewProp_Filename,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScreenshots_AddVRScreenshotToLibrary_Statics::NewProp_VRFileName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScreenshots_AddVRScreenshotToLibrary_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScreenshots_AddVRScreenshotToLibrary_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Screenshots.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UScreenshots_AddVRScreenshotToLibrary_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScreenshots, nullptr, "AddVRScreenshotToLibrary", nullptr, nullptr, sizeof(Screenshots_eventAddVRScreenshotToLibrary_Parms), Z_Construct_UFunction_UScreenshots_AddVRScreenshotToLibrary_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UScreenshots_AddVRScreenshotToLibrary_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UScreenshots_AddVRScreenshotToLibrary_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UScreenshots_AddVRScreenshotToLibrary_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UScreenshots_AddVRScreenshotToLibrary()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UScreenshots_AddVRScreenshotToLibrary_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UScreenshots_HookScreenshots_Statics
	{
		struct Screenshots_eventHookScreenshots_Parms
		{
			bool bHook;
		};
		static void NewProp_bHook_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHook;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UScreenshots_HookScreenshots_Statics::NewProp_bHook_SetBit(void* Obj)
	{
		((Screenshots_eventHookScreenshots_Parms*)Obj)->bHook = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UScreenshots_HookScreenshots_Statics::NewProp_bHook = { "bHook", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Screenshots_eventHookScreenshots_Parms), &Z_Construct_UFunction_UScreenshots_HookScreenshots_Statics::NewProp_bHook_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScreenshots_HookScreenshots_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScreenshots_HookScreenshots_Statics::NewProp_bHook,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScreenshots_HookScreenshots_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Screenshots.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UScreenshots_HookScreenshots_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScreenshots, nullptr, "HookScreenshots", nullptr, nullptr, sizeof(Screenshots_eventHookScreenshots_Parms), Z_Construct_UFunction_UScreenshots_HookScreenshots_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UScreenshots_HookScreenshots_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UScreenshots_HookScreenshots_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UScreenshots_HookScreenshots_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UScreenshots_HookScreenshots()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UScreenshots_HookScreenshots_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UScreenshots_IsScreenshotsHooked_Statics
	{
		struct Screenshots_eventIsScreenshotsHooked_Parms
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
	void Z_Construct_UFunction_UScreenshots_IsScreenshotsHooked_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Screenshots_eventIsScreenshotsHooked_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UScreenshots_IsScreenshotsHooked_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Screenshots_eventIsScreenshotsHooked_Parms), &Z_Construct_UFunction_UScreenshots_IsScreenshotsHooked_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScreenshots_IsScreenshotsHooked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScreenshots_IsScreenshotsHooked_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScreenshots_IsScreenshotsHooked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Screenshots.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UScreenshots_IsScreenshotsHooked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScreenshots, nullptr, "IsScreenshotsHooked", nullptr, nullptr, sizeof(Screenshots_eventIsScreenshotsHooked_Parms), Z_Construct_UFunction_UScreenshots_IsScreenshotsHooked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UScreenshots_IsScreenshotsHooked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UScreenshots_IsScreenshotsHooked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UScreenshots_IsScreenshotsHooked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UScreenshots_IsScreenshotsHooked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UScreenshots_IsScreenshotsHooked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UScreenshots_SetLocation_Statics
	{
		struct Screenshots_eventSetLocation_Parms
		{
			FScreenshotHandle Handle;
			FString Location;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Handle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Location;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UScreenshots_SetLocation_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Screenshots_eventSetLocation_Parms, Handle), Z_Construct_UScriptStruct_FScreenshotHandle, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScreenshots_SetLocation_Statics::NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UScreenshots_SetLocation_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Screenshots_eventSetLocation_Parms, Location), METADATA_PARAMS(Z_Construct_UFunction_UScreenshots_SetLocation_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UScreenshots_SetLocation_Statics::NewProp_Location_MetaData)) };
	void Z_Construct_UFunction_UScreenshots_SetLocation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Screenshots_eventSetLocation_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UScreenshots_SetLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Screenshots_eventSetLocation_Parms), &Z_Construct_UFunction_UScreenshots_SetLocation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScreenshots_SetLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScreenshots_SetLocation_Statics::NewProp_Handle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScreenshots_SetLocation_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScreenshots_SetLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScreenshots_SetLocation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Screenshots.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UScreenshots_SetLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScreenshots, nullptr, "SetLocation", nullptr, nullptr, sizeof(Screenshots_eventSetLocation_Parms), Z_Construct_UFunction_UScreenshots_SetLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UScreenshots_SetLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UScreenshots_SetLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UScreenshots_SetLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UScreenshots_SetLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UScreenshots_SetLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UScreenshots_TagPublishedFile_Statics
	{
		struct Screenshots_eventTagPublishedFile_Parms
		{
			FScreenshotHandle Handle;
			FPublishedFileID PublishedFileID;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Handle;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PublishedFileID;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UScreenshots_TagPublishedFile_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Screenshots_eventTagPublishedFile_Parms, Handle), Z_Construct_UScriptStruct_FScreenshotHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UScreenshots_TagPublishedFile_Statics::NewProp_PublishedFileID = { "PublishedFileID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Screenshots_eventTagPublishedFile_Parms, PublishedFileID), Z_Construct_UScriptStruct_FPublishedFileID, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UScreenshots_TagPublishedFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Screenshots_eventTagPublishedFile_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UScreenshots_TagPublishedFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Screenshots_eventTagPublishedFile_Parms), &Z_Construct_UFunction_UScreenshots_TagPublishedFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScreenshots_TagPublishedFile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScreenshots_TagPublishedFile_Statics::NewProp_Handle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScreenshots_TagPublishedFile_Statics::NewProp_PublishedFileID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScreenshots_TagPublishedFile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScreenshots_TagPublishedFile_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Screenshots.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UScreenshots_TagPublishedFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScreenshots, nullptr, "TagPublishedFile", nullptr, nullptr, sizeof(Screenshots_eventTagPublishedFile_Parms), Z_Construct_UFunction_UScreenshots_TagPublishedFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UScreenshots_TagPublishedFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UScreenshots_TagPublishedFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UScreenshots_TagPublishedFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UScreenshots_TagPublishedFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UScreenshots_TagPublishedFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UScreenshots_TagUser_Statics
	{
		struct Screenshots_eventTagUser_Parms
		{
			FScreenshotHandle Handle;
			FSteamID SteamID;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Handle;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamID;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UScreenshots_TagUser_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Screenshots_eventTagUser_Parms, Handle), Z_Construct_UScriptStruct_FScreenshotHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UScreenshots_TagUser_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Screenshots_eventTagUser_Parms, SteamID), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UScreenshots_TagUser_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Screenshots_eventTagUser_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UScreenshots_TagUser_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Screenshots_eventTagUser_Parms), &Z_Construct_UFunction_UScreenshots_TagUser_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScreenshots_TagUser_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScreenshots_TagUser_Statics::NewProp_Handle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScreenshots_TagUser_Statics::NewProp_SteamID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScreenshots_TagUser_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScreenshots_TagUser_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Screenshots.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UScreenshots_TagUser_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScreenshots, nullptr, "TagUser", nullptr, nullptr, sizeof(Screenshots_eventTagUser_Parms), Z_Construct_UFunction_UScreenshots_TagUser_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UScreenshots_TagUser_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UScreenshots_TagUser_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UScreenshots_TagUser_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UScreenshots_TagUser()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UScreenshots_TagUser_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UScreenshots_TriggerScreenshot_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScreenshots_TriggerScreenshot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Screenshots.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UScreenshots_TriggerScreenshot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScreenshots, nullptr, "TriggerScreenshot", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UScreenshots_TriggerScreenshot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UScreenshots_TriggerScreenshot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UScreenshots_TriggerScreenshot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UScreenshots_TriggerScreenshot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UScreenshots_WriteScreenshot_Statics
	{
		struct Screenshots_eventWriteScreenshot_Parms
		{
			TArray<uint8> PubRGB;
			int32 Width;
			int32 Height;
			FScreenshotHandle ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PubRGB_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PubRGB;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Width;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Height;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UScreenshots_WriteScreenshot_Statics::NewProp_PubRGB_Inner = { "PubRGB", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UScreenshots_WriteScreenshot_Statics::NewProp_PubRGB = { "PubRGB", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Screenshots_eventWriteScreenshot_Parms, PubRGB), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UScreenshots_WriteScreenshot_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Screenshots_eventWriteScreenshot_Parms, Width), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UScreenshots_WriteScreenshot_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Screenshots_eventWriteScreenshot_Parms, Height), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UScreenshots_WriteScreenshot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Screenshots_eventWriteScreenshot_Parms, ReturnValue), Z_Construct_UScriptStruct_FScreenshotHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScreenshots_WriteScreenshot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScreenshots_WriteScreenshot_Statics::NewProp_PubRGB_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScreenshots_WriteScreenshot_Statics::NewProp_PubRGB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScreenshots_WriteScreenshot_Statics::NewProp_Width,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScreenshots_WriteScreenshot_Statics::NewProp_Height,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScreenshots_WriteScreenshot_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScreenshots_WriteScreenshot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Screenshots.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UScreenshots_WriteScreenshot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScreenshots, nullptr, "WriteScreenshot", nullptr, nullptr, sizeof(Screenshots_eventWriteScreenshot_Parms), Z_Construct_UFunction_UScreenshots_WriteScreenshot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UScreenshots_WriteScreenshot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UScreenshots_WriteScreenshot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UScreenshots_WriteScreenshot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UScreenshots_WriteScreenshot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UScreenshots_WriteScreenshot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UScreenshots_NoRegister()
	{
		return UScreenshots::StaticClass();
	}
	struct Z_Construct_UClass_UScreenshots_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScreenshotReady_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_ScreenshotReady;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScreenshotRequested_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_ScreenshotRequested;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UScreenshots_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UScreenshots_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UScreenshots_AddScreenshotToLibrary, "AddScreenshotToLibrary" }, // 3990545577
		{ &Z_Construct_UFunction_UScreenshots_AddVRScreenshotToLibrary, "AddVRScreenshotToLibrary" }, // 1721077793
		{ &Z_Construct_UFunction_UScreenshots_HookScreenshots, "HookScreenshots" }, // 1627574851
		{ &Z_Construct_UFunction_UScreenshots_IsScreenshotsHooked, "IsScreenshotsHooked" }, // 4177513881
		{ &Z_Construct_UFunction_UScreenshots_SetLocation, "SetLocation" }, // 2795401766
		{ &Z_Construct_UFunction_UScreenshots_TagPublishedFile, "TagPublishedFile" }, // 948455947
		{ &Z_Construct_UFunction_UScreenshots_TagUser, "TagUser" }, // 2909449715
		{ &Z_Construct_UFunction_UScreenshots_TriggerScreenshot, "TriggerScreenshot" }, // 1135039639
		{ &Z_Construct_UFunction_UScreenshots_WriteScreenshot, "WriteScreenshot" }, // 141640567
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScreenshots_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Screenshots.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Screenshots.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScreenshots_Statics::NewProp_ScreenshotReady_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Screenshots" },
		{ "ModuleRelativePath", "Public/Screenshots.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UScreenshots_Statics::NewProp_ScreenshotReady = { "ScreenshotReady", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UScreenshots, ScreenshotReady), Z_Construct_UDelegateFunction_SteamCore_OnScreenshotReady__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UScreenshots_Statics::NewProp_ScreenshotReady_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UScreenshots_Statics::NewProp_ScreenshotReady_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScreenshots_Statics::NewProp_ScreenshotRequested_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Screenshots" },
		{ "ModuleRelativePath", "Public/Screenshots.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UScreenshots_Statics::NewProp_ScreenshotRequested = { "ScreenshotRequested", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UScreenshots, ScreenshotRequested), Z_Construct_UDelegateFunction_SteamCore_OnScreenshotRequested__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UScreenshots_Statics::NewProp_ScreenshotRequested_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UScreenshots_Statics::NewProp_ScreenshotRequested_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UScreenshots_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScreenshots_Statics::NewProp_ScreenshotReady,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScreenshots_Statics::NewProp_ScreenshotRequested,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UScreenshots_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UScreenshots>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UScreenshots_Statics::ClassParams = {
		&UScreenshots::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UScreenshots_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UScreenshots_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UScreenshots_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UScreenshots_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UScreenshots()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UScreenshots_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UScreenshots, 938634157);
	template<> STEAMCORE_API UClass* StaticClass<UScreenshots>()
	{
		return UScreenshots::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UScreenshots(Z_Construct_UClass_UScreenshots, &UScreenshots::StaticClass, TEXT("/Script/SteamCore"), TEXT("UScreenshots"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UScreenshots);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
