// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/AppList.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAppList() {}
// Cross Module References
	STEAMCORE_API UClass* Z_Construct_UClass_UAppList_NoRegister();
	STEAMCORE_API UClass* Z_Construct_UClass_UAppList();
	STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreSubsystem();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnSteamAppInstalled__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnSteamAppUninstalled__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UAppList::execGetAppBuildId)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetAppBuildId(Z_Param_AppID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAppList::execGetAppInstallDir)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Directory);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetAppInstallDir(Z_Param_AppID,Z_Param_Out_Directory);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAppList::execGetAppName)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Name);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetAppName(Z_Param_AppID,Z_Param_Out_Name);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAppList::execGetInstalledApps)
	{
		P_GET_TARRAY_REF(int32,Z_Param_Out_AppIDs);
		P_GET_PROPERTY(FIntProperty,Z_Param_MaxAppIDs);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetInstalledApps(Z_Param_Out_AppIDs,Z_Param_MaxAppIDs);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAppList::execGetNumInstalledApps)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetNumInstalledApps();
		P_NATIVE_END;
	}
	void UAppList::StaticRegisterNativesUAppList()
	{
		UClass* Class = UAppList::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAppBuildId", &UAppList::execGetAppBuildId },
			{ "GetAppInstallDir", &UAppList::execGetAppInstallDir },
			{ "GetAppName", &UAppList::execGetAppName },
			{ "GetInstalledApps", &UAppList::execGetInstalledApps },
			{ "GetNumInstalledApps", &UAppList::execGetNumInstalledApps },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAppList_GetAppBuildId_Statics
	{
		struct AppList_eventGetAppBuildId_Parms
		{
			int32 AppID;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AppID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAppList_GetAppBuildId_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AppList_eventGetAppBuildId_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAppList_GetAppBuildId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AppList_eventGetAppBuildId_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAppList_GetAppBuildId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAppList_GetAppBuildId_Statics::NewProp_AppID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAppList_GetAppBuildId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAppList_GetAppBuildId_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AppList.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAppList_GetAppBuildId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAppList, nullptr, "GetAppBuildId", nullptr, nullptr, sizeof(AppList_eventGetAppBuildId_Parms), Z_Construct_UFunction_UAppList_GetAppBuildId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAppList_GetAppBuildId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAppList_GetAppBuildId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAppList_GetAppBuildId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAppList_GetAppBuildId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAppList_GetAppBuildId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAppList_GetAppInstallDir_Statics
	{
		struct AppList_eventGetAppInstallDir_Parms
		{
			int32 AppID;
			FString Directory;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AppID;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Directory;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAppList_GetAppInstallDir_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AppList_eventGetAppInstallDir_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAppList_GetAppInstallDir_Statics::NewProp_Directory = { "Directory", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AppList_eventGetAppInstallDir_Parms, Directory), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAppList_GetAppInstallDir_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AppList_eventGetAppInstallDir_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAppList_GetAppInstallDir_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAppList_GetAppInstallDir_Statics::NewProp_AppID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAppList_GetAppInstallDir_Statics::NewProp_Directory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAppList_GetAppInstallDir_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAppList_GetAppInstallDir_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AppList.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAppList_GetAppInstallDir_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAppList, nullptr, "GetAppInstallDir", nullptr, nullptr, sizeof(AppList_eventGetAppInstallDir_Parms), Z_Construct_UFunction_UAppList_GetAppInstallDir_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAppList_GetAppInstallDir_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAppList_GetAppInstallDir_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAppList_GetAppInstallDir_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAppList_GetAppInstallDir()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAppList_GetAppInstallDir_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAppList_GetAppName_Statics
	{
		struct AppList_eventGetAppName_Parms
		{
			int32 AppID;
			FString Name;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AppID;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAppList_GetAppName_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AppList_eventGetAppName_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAppList_GetAppName_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AppList_eventGetAppName_Parms, Name), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAppList_GetAppName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AppList_eventGetAppName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAppList_GetAppName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAppList_GetAppName_Statics::NewProp_AppID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAppList_GetAppName_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAppList_GetAppName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAppList_GetAppName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AppList.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAppList_GetAppName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAppList, nullptr, "GetAppName", nullptr, nullptr, sizeof(AppList_eventGetAppName_Parms), Z_Construct_UFunction_UAppList_GetAppName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAppList_GetAppName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAppList_GetAppName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAppList_GetAppName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAppList_GetAppName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAppList_GetAppName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAppList_GetInstalledApps_Statics
	{
		struct AppList_eventGetInstalledApps_Parms
		{
			TArray<int32> AppIDs;
			int32 MaxAppIDs;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AppIDs_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AppIDs;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxAppIDs;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAppList_GetInstalledApps_Statics::NewProp_AppIDs_Inner = { "AppIDs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAppList_GetInstalledApps_Statics::NewProp_AppIDs = { "AppIDs", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AppList_eventGetInstalledApps_Parms, AppIDs), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAppList_GetInstalledApps_Statics::NewProp_MaxAppIDs = { "MaxAppIDs", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AppList_eventGetInstalledApps_Parms, MaxAppIDs), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAppList_GetInstalledApps_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AppList_eventGetInstalledApps_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAppList_GetInstalledApps_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAppList_GetInstalledApps_Statics::NewProp_AppIDs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAppList_GetInstalledApps_Statics::NewProp_AppIDs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAppList_GetInstalledApps_Statics::NewProp_MaxAppIDs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAppList_GetInstalledApps_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAppList_GetInstalledApps_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AppList.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAppList_GetInstalledApps_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAppList, nullptr, "GetInstalledApps", nullptr, nullptr, sizeof(AppList_eventGetInstalledApps_Parms), Z_Construct_UFunction_UAppList_GetInstalledApps_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAppList_GetInstalledApps_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAppList_GetInstalledApps_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAppList_GetInstalledApps_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAppList_GetInstalledApps()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAppList_GetInstalledApps_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAppList_GetNumInstalledApps_Statics
	{
		struct AppList_eventGetNumInstalledApps_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAppList_GetNumInstalledApps_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AppList_eventGetNumInstalledApps_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAppList_GetNumInstalledApps_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAppList_GetNumInstalledApps_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAppList_GetNumInstalledApps_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AppList.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAppList_GetNumInstalledApps_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAppList, nullptr, "GetNumInstalledApps", nullptr, nullptr, sizeof(AppList_eventGetNumInstalledApps_Parms), Z_Construct_UFunction_UAppList_GetNumInstalledApps_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAppList_GetNumInstalledApps_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAppList_GetNumInstalledApps_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAppList_GetNumInstalledApps_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAppList_GetNumInstalledApps()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAppList_GetNumInstalledApps_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAppList_NoRegister()
	{
		return UAppList::StaticClass();
	}
	struct Z_Construct_UClass_UAppList_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteamAppInstalled_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_SteamAppInstalled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteamAppUninstalled_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_SteamAppUninstalled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAppList_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAppList_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAppList_GetAppBuildId, "GetAppBuildId" }, // 2762322699
		{ &Z_Construct_UFunction_UAppList_GetAppInstallDir, "GetAppInstallDir" }, // 1715994044
		{ &Z_Construct_UFunction_UAppList_GetAppName, "GetAppName" }, // 2044564064
		{ &Z_Construct_UFunction_UAppList_GetInstalledApps, "GetInstalledApps" }, // 1694355605
		{ &Z_Construct_UFunction_UAppList_GetNumInstalledApps, "GetNumInstalledApps" }, // 379189965
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAppList_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AppList.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AppList.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAppList_Statics::NewProp_SteamAppInstalled_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AppList" },
		{ "ModuleRelativePath", "Public/AppList.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAppList_Statics::NewProp_SteamAppInstalled = { "SteamAppInstalled", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAppList, SteamAppInstalled), Z_Construct_UDelegateFunction_SteamCore_OnSteamAppInstalled__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAppList_Statics::NewProp_SteamAppInstalled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAppList_Statics::NewProp_SteamAppInstalled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAppList_Statics::NewProp_SteamAppUninstalled_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AppList" },
		{ "ModuleRelativePath", "Public/AppList.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAppList_Statics::NewProp_SteamAppUninstalled = { "SteamAppUninstalled", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAppList, SteamAppUninstalled), Z_Construct_UDelegateFunction_SteamCore_OnSteamAppUninstalled__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAppList_Statics::NewProp_SteamAppUninstalled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAppList_Statics::NewProp_SteamAppUninstalled_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAppList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAppList_Statics::NewProp_SteamAppInstalled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAppList_Statics::NewProp_SteamAppUninstalled,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAppList_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAppList>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAppList_Statics::ClassParams = {
		&UAppList::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAppList_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAppList_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAppList_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAppList_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAppList()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAppList_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAppList, 30607091);
	template<> STEAMCORE_API UClass* StaticClass<UAppList>()
	{
		return UAppList::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAppList(Z_Construct_UClass_UAppList, &UAppList::StaticClass, TEXT("/Script/SteamCore"), TEXT("UAppList"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAppList);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
