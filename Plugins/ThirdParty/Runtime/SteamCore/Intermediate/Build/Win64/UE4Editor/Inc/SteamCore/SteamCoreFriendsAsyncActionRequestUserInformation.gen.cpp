// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/SteamCoreFriendsAsyncActionRequestUserInformation.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamCoreFriendsAsyncActionRequestUserInformation() {}
// Cross Module References
	STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreFriendsAsyncActionRequestUserInformation_NoRegister();
	STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreFriendsAsyncActionRequestUserInformation();
	STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreAsyncAction();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamID();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnRequestUserInformationAsyncDelegate__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(USteamCoreFriendsAsyncActionRequestUserInformation::execHandleCallback)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleCallback();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamCoreFriendsAsyncActionRequestUserInformation::execRequestUserInformationAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDUser);
		P_GET_UBOOL(Z_Param_bRequireNameOnly);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USteamCoreFriendsAsyncActionRequestUserInformation**)Z_Param__Result=USteamCoreFriendsAsyncActionRequestUserInformation::RequestUserInformationAsync(Z_Param_WorldContextObject,Z_Param_SteamIDUser,Z_Param_bRequireNameOnly);
		P_NATIVE_END;
	}
	void USteamCoreFriendsAsyncActionRequestUserInformation::StaticRegisterNativesUSteamCoreFriendsAsyncActionRequestUserInformation()
	{
		UClass* Class = USteamCoreFriendsAsyncActionRequestUserInformation::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HandleCallback", &USteamCoreFriendsAsyncActionRequestUserInformation::execHandleCallback },
			{ "RequestUserInformationAsync", &USteamCoreFriendsAsyncActionRequestUserInformation::execRequestUserInformationAsync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USteamCoreFriendsAsyncActionRequestUserInformation_HandleCallback_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreFriendsAsyncActionRequestUserInformation_HandleCallback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamCoreFriendsAsyncActionRequestUserInformation.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreFriendsAsyncActionRequestUserInformation_HandleCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreFriendsAsyncActionRequestUserInformation, nullptr, "HandleCallback", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreFriendsAsyncActionRequestUserInformation_HandleCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreFriendsAsyncActionRequestUserInformation_HandleCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreFriendsAsyncActionRequestUserInformation_HandleCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamCoreFriendsAsyncActionRequestUserInformation_HandleCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamCoreFriendsAsyncActionRequestUserInformation_RequestUserInformationAsync_Statics
	{
		struct SteamCoreFriendsAsyncActionRequestUserInformation_eventRequestUserInformationAsync_Parms
		{
			UObject* WorldContextObject;
			FSteamID SteamIDUser;
			bool bRequireNameOnly;
			USteamCoreFriendsAsyncActionRequestUserInformation* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamIDUser;
		static void NewProp_bRequireNameOnly_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRequireNameOnly;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreFriendsAsyncActionRequestUserInformation_RequestUserInformationAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreFriendsAsyncActionRequestUserInformation_eventRequestUserInformationAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamCoreFriendsAsyncActionRequestUserInformation_RequestUserInformationAsync_Statics::NewProp_SteamIDUser = { "SteamIDUser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreFriendsAsyncActionRequestUserInformation_eventRequestUserInformationAsync_Parms, SteamIDUser), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USteamCoreFriendsAsyncActionRequestUserInformation_RequestUserInformationAsync_Statics::NewProp_bRequireNameOnly_SetBit(void* Obj)
	{
		((SteamCoreFriendsAsyncActionRequestUserInformation_eventRequestUserInformationAsync_Parms*)Obj)->bRequireNameOnly = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreFriendsAsyncActionRequestUserInformation_RequestUserInformationAsync_Statics::NewProp_bRequireNameOnly = { "bRequireNameOnly", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamCoreFriendsAsyncActionRequestUserInformation_eventRequestUserInformationAsync_Parms), &Z_Construct_UFunction_USteamCoreFriendsAsyncActionRequestUserInformation_RequestUserInformationAsync_Statics::NewProp_bRequireNameOnly_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreFriendsAsyncActionRequestUserInformation_RequestUserInformationAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreFriendsAsyncActionRequestUserInformation_eventRequestUserInformationAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreFriendsAsyncActionRequestUserInformation_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreFriendsAsyncActionRequestUserInformation_RequestUserInformationAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreFriendsAsyncActionRequestUserInformation_RequestUserInformationAsync_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreFriendsAsyncActionRequestUserInformation_RequestUserInformationAsync_Statics::NewProp_SteamIDUser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreFriendsAsyncActionRequestUserInformation_RequestUserInformationAsync_Statics::NewProp_bRequireNameOnly,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreFriendsAsyncActionRequestUserInformation_RequestUserInformationAsync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreFriendsAsyncActionRequestUserInformation_RequestUserInformationAsync_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamCoreFriendsAsyncActionRequestUserInformation.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreFriendsAsyncActionRequestUserInformation_RequestUserInformationAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreFriendsAsyncActionRequestUserInformation, nullptr, "RequestUserInformationAsync", nullptr, nullptr, sizeof(SteamCoreFriendsAsyncActionRequestUserInformation_eventRequestUserInformationAsync_Parms), Z_Construct_UFunction_USteamCoreFriendsAsyncActionRequestUserInformation_RequestUserInformationAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreFriendsAsyncActionRequestUserInformation_RequestUserInformationAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreFriendsAsyncActionRequestUserInformation_RequestUserInformationAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreFriendsAsyncActionRequestUserInformation_RequestUserInformationAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreFriendsAsyncActionRequestUserInformation_RequestUserInformationAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamCoreFriendsAsyncActionRequestUserInformation_RequestUserInformationAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USteamCoreFriendsAsyncActionRequestUserInformation_NoRegister()
	{
		return USteamCoreFriendsAsyncActionRequestUserInformation::StaticClass();
	}
	struct Z_Construct_UClass_USteamCoreFriendsAsyncActionRequestUserInformation_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnCallback_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCallback;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamCoreFriendsAsyncActionRequestUserInformation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamCoreFriendsAsyncActionRequestUserInformation_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreFriendsAsyncActionRequestUserInformation_HandleCallback, "HandleCallback" }, // 879711765
		{ &Z_Construct_UFunction_USteamCoreFriendsAsyncActionRequestUserInformation_RequestUserInformationAsync, "RequestUserInformationAsync" }, // 4209807000
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreFriendsAsyncActionRequestUserInformation_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SteamCoreFriendsAsyncActionRequestUserInformation.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SteamCoreFriendsAsyncActionRequestUserInformation.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreFriendsAsyncActionRequestUserInformation_Statics::NewProp_OnCallback_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SteamCoreFriendsAsyncActionRequestUserInformation" },
		{ "ModuleRelativePath", "Public/SteamCoreFriendsAsyncActionRequestUserInformation.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamCoreFriendsAsyncActionRequestUserInformation_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USteamCoreFriendsAsyncActionRequestUserInformation, OnCallback), Z_Construct_UDelegateFunction_SteamCore_OnRequestUserInformationAsyncDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USteamCoreFriendsAsyncActionRequestUserInformation_Statics::NewProp_OnCallback_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreFriendsAsyncActionRequestUserInformation_Statics::NewProp_OnCallback_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USteamCoreFriendsAsyncActionRequestUserInformation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamCoreFriendsAsyncActionRequestUserInformation_Statics::NewProp_OnCallback,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamCoreFriendsAsyncActionRequestUserInformation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreFriendsAsyncActionRequestUserInformation>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreFriendsAsyncActionRequestUserInformation_Statics::ClassParams = {
		&USteamCoreFriendsAsyncActionRequestUserInformation::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USteamCoreFriendsAsyncActionRequestUserInformation_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreFriendsAsyncActionRequestUserInformation_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USteamCoreFriendsAsyncActionRequestUserInformation_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreFriendsAsyncActionRequestUserInformation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamCoreFriendsAsyncActionRequestUserInformation()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USteamCoreFriendsAsyncActionRequestUserInformation_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USteamCoreFriendsAsyncActionRequestUserInformation, 988654800);
	template<> STEAMCORE_API UClass* StaticClass<USteamCoreFriendsAsyncActionRequestUserInformation>()
	{
		return USteamCoreFriendsAsyncActionRequestUserInformation::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USteamCoreFriendsAsyncActionRequestUserInformation(Z_Construct_UClass_USteamCoreFriendsAsyncActionRequestUserInformation, &USteamCoreFriendsAsyncActionRequestUserInformation::StaticClass, TEXT("/Script/SteamCore"), TEXT("USteamCoreFriendsAsyncActionRequestUserInformation"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreFriendsAsyncActionRequestUserInformation);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
