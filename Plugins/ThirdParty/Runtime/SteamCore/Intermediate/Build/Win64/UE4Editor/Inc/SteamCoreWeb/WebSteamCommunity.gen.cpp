// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCoreWeb/Public/WebSteamCommunity.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWebSteamCommunity() {}
// Cross Module References
	STEAMCOREWEB_API UClass* Z_Construct_UClass_UWebSteamCommunity_NoRegister();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_UWebSteamCommunity();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebSubsystem();
	UPackage* Z_Construct_UPackage__Script_SteamCoreWeb();
	STEAMCOREWEB_API UFunction* Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UWebSteamCommunity::execReportAbuse)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FStrProperty,Z_Param_steamIDActor);
		P_GET_PROPERTY(FStrProperty,Z_Param_steamIDTarget);
		P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
		P_GET_PROPERTY(FIntProperty,Z_Param_abuseType);
		P_GET_PROPERTY(FIntProperty,Z_Param_contentType);
		P_GET_PROPERTY(FStrProperty,Z_Param_Description);
		P_GET_PROPERTY(FStrProperty,Z_Param_gid);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReportAbuse(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_steamIDActor,Z_Param_steamIDTarget,Z_Param_AppID,Z_Param_abuseType,Z_Param_contentType,Z_Param_Description,Z_Param_gid);
		P_NATIVE_END;
	}
	void UWebSteamCommunity::StaticRegisterNativesUWebSteamCommunity()
	{
		UClass* Class = UWebSteamCommunity::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ReportAbuse", &UWebSteamCommunity::execReportAbuse },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWebSteamCommunity_ReportAbuse_Statics
	{
		struct WebSteamCommunity_eventReportAbuse_Parms
		{
			FScriptDelegate Callback;
			FString Key;
			FString steamIDActor;
			FString steamIDTarget;
			int32 AppID;
			int32 abuseType;
			int32 contentType;
			FString Description;
			FString gid;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_Callback;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_steamIDActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_steamIDActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_steamIDTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_steamIDTarget;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AppID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_abuseType;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_contentType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Description;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_gid_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_gid;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSteamCommunity_ReportAbuse_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebSteamCommunity_ReportAbuse_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamCommunity_eventReportAbuse_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebSteamCommunity_ReportAbuse_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamCommunity_ReportAbuse_Statics::NewProp_Callback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSteamCommunity_ReportAbuse_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamCommunity_ReportAbuse_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamCommunity_eventReportAbuse_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UWebSteamCommunity_ReportAbuse_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamCommunity_ReportAbuse_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSteamCommunity_ReportAbuse_Statics::NewProp_steamIDActor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamCommunity_ReportAbuse_Statics::NewProp_steamIDActor = { "steamIDActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamCommunity_eventReportAbuse_Parms, steamIDActor), METADATA_PARAMS(Z_Construct_UFunction_UWebSteamCommunity_ReportAbuse_Statics::NewProp_steamIDActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamCommunity_ReportAbuse_Statics::NewProp_steamIDActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSteamCommunity_ReportAbuse_Statics::NewProp_steamIDTarget_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamCommunity_ReportAbuse_Statics::NewProp_steamIDTarget = { "steamIDTarget", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamCommunity_eventReportAbuse_Parms, steamIDTarget), METADATA_PARAMS(Z_Construct_UFunction_UWebSteamCommunity_ReportAbuse_Statics::NewProp_steamIDTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamCommunity_ReportAbuse_Statics::NewProp_steamIDTarget_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebSteamCommunity_ReportAbuse_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamCommunity_eventReportAbuse_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebSteamCommunity_ReportAbuse_Statics::NewProp_abuseType = { "abuseType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamCommunity_eventReportAbuse_Parms, abuseType), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebSteamCommunity_ReportAbuse_Statics::NewProp_contentType = { "contentType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamCommunity_eventReportAbuse_Parms, contentType), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSteamCommunity_ReportAbuse_Statics::NewProp_Description_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamCommunity_ReportAbuse_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamCommunity_eventReportAbuse_Parms, Description), METADATA_PARAMS(Z_Construct_UFunction_UWebSteamCommunity_ReportAbuse_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamCommunity_ReportAbuse_Statics::NewProp_Description_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSteamCommunity_ReportAbuse_Statics::NewProp_gid_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamCommunity_ReportAbuse_Statics::NewProp_gid = { "gid", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSteamCommunity_eventReportAbuse_Parms, gid), METADATA_PARAMS(Z_Construct_UFunction_UWebSteamCommunity_ReportAbuse_Statics::NewProp_gid_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamCommunity_ReportAbuse_Statics::NewProp_gid_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebSteamCommunity_ReportAbuse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamCommunity_ReportAbuse_Statics::NewProp_Callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamCommunity_ReportAbuse_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamCommunity_ReportAbuse_Statics::NewProp_steamIDActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamCommunity_ReportAbuse_Statics::NewProp_steamIDTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamCommunity_ReportAbuse_Statics::NewProp_AppID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamCommunity_ReportAbuse_Statics::NewProp_abuseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamCommunity_ReportAbuse_Statics::NewProp_contentType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamCommunity_ReportAbuse_Statics::NewProp_Description,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamCommunity_ReportAbuse_Statics::NewProp_gid,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSteamCommunity_ReportAbuse_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WebSteamCommunity.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebSteamCommunity_ReportAbuse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebSteamCommunity, nullptr, "ReportAbuse", nullptr, nullptr, sizeof(WebSteamCommunity_eventReportAbuse_Parms), Z_Construct_UFunction_UWebSteamCommunity_ReportAbuse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamCommunity_ReportAbuse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebSteamCommunity_ReportAbuse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamCommunity_ReportAbuse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebSteamCommunity_ReportAbuse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebSteamCommunity_ReportAbuse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UWebSteamCommunity_NoRegister()
	{
		return UWebSteamCommunity::StaticClass();
	}
	struct Z_Construct_UClass_UWebSteamCommunity_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWebSteamCommunity_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreWebSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWebSteamCommunity_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWebSteamCommunity_ReportAbuse, "ReportAbuse" }, // 1026021904
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebSteamCommunity_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "WebSteamCommunity.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/WebSteamCommunity.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWebSteamCommunity_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWebSteamCommunity>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UWebSteamCommunity_Statics::ClassParams = {
		&UWebSteamCommunity::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWebSteamCommunity_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWebSteamCommunity_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWebSteamCommunity()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UWebSteamCommunity_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWebSteamCommunity, 4279937634);
	template<> STEAMCOREWEB_API UClass* StaticClass<UWebSteamCommunity>()
	{
		return UWebSteamCommunity::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWebSteamCommunity(Z_Construct_UClass_UWebSteamCommunity, &UWebSteamCommunity::StaticClass, TEXT("/Script/SteamCoreWeb"), TEXT("UWebSteamCommunity"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWebSteamCommunity);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
